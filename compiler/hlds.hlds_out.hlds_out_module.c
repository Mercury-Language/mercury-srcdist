/*
** Automatically generated from `hlds_out_module.m'
** by the Mercury compiler,
** version rotd-2015-07-28
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
#include "array.mih"
#include "assoc_list.mih"
#include "bag.mih"
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
#include "getopt_io.mih"
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
#include "term_io.mih"
#include "time.mih"
#include "transform_hlds.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "check_hlds.delay_info.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.unify_proc.mih"
#include "hlds.const_struct.mih"
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
#include "libs.globals.mih"
#include "libs.lp_rational.mih"
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
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.mercury_to_mercury.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_out.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.status.mih"
#include "string.format.mih"
#include "string.parse_util.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "hlds.hlds_out.hlds_out_goal.mih"
#include "hlds.hlds_out.hlds_out_mode.mih"
#include "hlds.hlds_out.hlds_out_pred.mih"
#include "hlds.hlds_out.hlds_out_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"



#line 1095 "hlds_out_module.m"
struct hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_env_0_s {
#line 1098 "hlds_out_module.m"
  MR_bool hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_env_0__succeeded;
#line 1098 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_env_0__DumpPredIdStrs_16;
#line 1098 "hlds_out_module.m"
  MR_Integer hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_env_0__PredIdInt_18;
#line 1114 "hlds_out_module.m"
  jmp_buf hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_env_0__commit_0;
#line 1114 "hlds_out_module.m"
  MR_String hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_env_0__DumpPredIdStr_36;
#line 1114 "hlds_out_module.m"
  MR_Integer hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_env_0__DumpPredId_37;
#line 1114 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_env_0__conv0_DumpPredIdStr_36;
#line 1095 "hlds_out_module.m"
};


#line 165 "hlds.hlds_out.hlds_out_module.c"
static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_out__hlds_out_module__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_class_id_0__plain_hlds__hlds_data__type_ctor_info_hlds_class_defn_0;

#line 168 "hlds.hlds_out.hlds_out_module.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_out__hlds_out_module__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 171 "hlds.hlds_out.hlds_out_module.c"
static const MR_FA_TypeInfo_Struct1 hlds__hlds_out__hlds_out_module__list__ti_list_1hlds__hlds_data__type_ctor_info_hlds_instance_defn_0;

#line 174 "hlds.hlds_out.hlds_out_module.c"
static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_out__hlds_out_module__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_class_id_0__plain_list__ti_list_1hlds__hlds_data__type_ctor_info_hlds_instance_defn_0;

#line 177 "hlds.hlds_out.hlds_out_module.c"
static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_out__hlds_out_module__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_inst_id_0__plain_hlds__hlds_data__type_ctor_info_hlds_inst_defn_0;

#line 180 "hlds.hlds_out.hlds_out_module.c"
static const MR_VA_PseudoTypeInfo_Struct4 hlds__hlds_out__hlds_out_module____vpti_pred_4__plain_parse_tree__mercury_to_mercury__type_ctor_info_output_lang_0__plain_parse_tree__prog_data__type_ctor_info_unify_inst_info_0__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0;

#line 183 "hlds.hlds_out.hlds_out_module.c"
static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_out__hlds_out_module__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_unify_inst_info_0__plain_hlds__hlds_data__type_ctor_info_maybe_inst_det_0;

#line 186 "hlds.hlds_out.hlds_out_module.c"
static const MR_VA_PseudoTypeInfo_Struct4 hlds__hlds_out__hlds_out_module____vpti_pred_4__plain_parse_tree__mercury_to_mercury__type_ctor_info_output_lang_0__plain_parse_tree__prog_data__type_ctor_info_merge_inst_info_0__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0;

#line 189 "hlds.hlds_out.hlds_out_module.c"
static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_out__hlds_out_module__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_merge_inst_info_0__plain_hlds__hlds_data__type_ctor_info_maybe_inst_0;

#line 192 "hlds.hlds_out.hlds_out_module.c"
static const MR_VA_PseudoTypeInfo_Struct4 hlds__hlds_out__hlds_out_module____vpti_pred_4__plain_parse_tree__mercury_to_mercury__type_ctor_info_output_lang_0__plain_parse_tree__prog_data__type_ctor_info_ground_inst_info_0__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0;

#line 195 "hlds.hlds_out.hlds_out_module.c"
static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_out__hlds_out_module__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_ground_inst_info_0__plain_hlds__hlds_data__type_ctor_info_maybe_inst_det_0;

#line 198 "hlds.hlds_out.hlds_out_module.c"
static const MR_VA_PseudoTypeInfo_Struct4 hlds__hlds_out__hlds_out_module____vpti_pred_4__plain_parse_tree__mercury_to_mercury__type_ctor_info_output_lang_0__plain_parse_tree__prog_data__type_ctor_info_any_inst_info_0__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0;

#line 201 "hlds.hlds_out.hlds_out_module.c"
static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_out__hlds_out_module__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_any_inst_info_0__plain_hlds__hlds_data__type_ctor_info_maybe_inst_det_0;

#line 204 "hlds.hlds_out.hlds_out_module.c"
static const MR_VA_PseudoTypeInfo_Struct4 hlds__hlds_out__hlds_out_module____vpti_pred_4__plain_parse_tree__mercury_to_mercury__type_ctor_info_output_lang_0__plain_parse_tree__prog_data__type_ctor_info_inst_name_0__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0;

#line 207 "hlds.hlds_out.hlds_out_module.c"
static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_out__hlds_out_module__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_inst_name_0__plain_hlds__hlds_data__type_ctor_info_maybe_inst_0;

#line 210 "hlds.hlds_out.hlds_out_module.c"
static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_out__hlds_out_module__pair__pti_pair_2__plain_builtin__type_ctor_info_int_0__plain_hlds__const_struct__type_ctor_info_const_struct_0;

#line 213 "hlds.hlds_out.hlds_out_module.c"
static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_out__hlds_out_module__pair__pti_pair_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_hlds__hlds_module__type_ctor_info_table_struct_info_0;

#line 216 "hlds.hlds_out.hlds_out_module.c"
static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_out__hlds_out_module__pair__pti_pair_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_hlds__hlds_pred__type_ctor_info_pred_info_0;

#line 219 "hlds.hlds_out.hlds_out_module.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_out__hlds_out_module__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 222 "hlds.hlds_out.hlds_out_module.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_out__hlds_out_module__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 876 "hlds_out_module.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_module__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_109_111_100_101_95_116_97_98_108_101_95_95_91_50_93_95_48_4_p_0(
#line 876 "hlds_out_module.m"
  MR_Integer hlds__hlds_out__hlds_out_module__Indent_5);

#line 744 "hlds_out_module.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_module__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_107_101_121_95_109_97_121_98_101_95_105_110_115_116_95_100_101_116_95_95_91_49_93_95_48_8_p_0(
#line 744 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__Lang_9,
#line 744 "hlds_out_module.m"
  MR_Integer hlds__hlds_out__hlds_out_module__Limit_10,
#line 744 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__WriteKey_11,
#line 744 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__HeadVar__4_4,
#line 744 "hlds_out_module.m"
  MR_Integer hlds__hlds_out__hlds_out_module__STATE_VARIABLE_N_0_19,
#line 744 "hlds_out_module.m"
  MR_Integer * hlds__hlds_out__hlds_out_module__STATE_VARIABLE_N_20);

#line 721 "hlds_out_module.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_module__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_107_101_121_95_109_97_121_98_101_95_105_110_115_116_95_95_91_49_93_95_48_8_p_0(
#line 721 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__Lang_9,
#line 721 "hlds_out_module.m"
  MR_Integer hlds__hlds_out__hlds_out_module__Limit_10,
#line 721 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__WriteKey_11,
#line 721 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__HeadVar__4_4,
#line 721 "hlds_out_module.m"
  MR_Integer hlds__hlds_out__hlds_out_module__STATE_VARIABLE_N_0_17,
#line 721 "hlds_out_module.m"
  MR_Integer * hlds__hlds_out__hlds_out_module__STATE_VARIABLE_N_18);

#line 1163 "hlds_out_module.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_module__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_112_114_111_109_105_115_101_95_95_91_53_44_32_57_93_95_48_13_p_0_1(
#line 1163 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__closure_arg,
#line 1163 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_1,
#line 1163 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_2,
#line 1163 "hlds_out_module.m"
  MR_Box * hlds__hlds_out__hlds_out_module__wrapper_arg_3);

#line 672 "hlds_out_module.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_module__IntroducedFrom__pred__write_inst_table__672__1_8_p_0(
#line 672 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__Lang_7,
#line 672 "hlds_out_module.m"
  MR_Integer hlds__hlds_out__hlds_out_module__Limit_9,
#line 672 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__HeadVar__3_102,
#line 672 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__HeadVar__4_172,
#line 672 "hlds_out_module.m"
  MR_Integer hlds__hlds_out__hlds_out_module__HeadVar__5_173,
#line 672 "hlds_out_module.m"
  MR_Integer * hlds__hlds_out__hlds_out_module__HeadVar__6_174);

#line 667 "hlds_out_module.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_module__IntroducedFrom__pred__write_inst_table__667__1_8_p_0(
#line 667 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__Lang_7,
#line 667 "hlds_out_module.m"
  MR_Integer hlds__hlds_out__hlds_out_module__Limit_9,
#line 667 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__HeadVar__3_91,
#line 667 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__HeadVar__4_161,
#line 667 "hlds_out_module.m"
  MR_Integer hlds__hlds_out__hlds_out_module__HeadVar__5_162,
#line 667 "hlds_out_module.m"
  MR_Integer * hlds__hlds_out__hlds_out_module__HeadVar__6_163);

#line 662 "hlds_out_module.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_module__IntroducedFrom__pred__write_inst_table__662__1_8_p_0(
#line 662 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__Lang_7,
#line 662 "hlds_out_module.m"
  MR_Integer hlds__hlds_out__hlds_out_module__Limit_9,
#line 662 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__HeadVar__3_80,
#line 662 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__HeadVar__4_150,
#line 662 "hlds_out_module.m"
  MR_Integer hlds__hlds_out__hlds_out_module__HeadVar__5_151,
#line 662 "hlds_out_module.m"
  MR_Integer * hlds__hlds_out__hlds_out_module__HeadVar__6_152);

#line 657 "hlds_out_module.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_module__IntroducedFrom__pred__write_inst_table__657__1_8_p_0(
#line 657 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__Lang_7,
#line 657 "hlds_out_module.m"
  MR_Integer hlds__hlds_out__hlds_out_module__Limit_9,
#line 657 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__HeadVar__3_69,
#line 657 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__HeadVar__4_139,
#line 657 "hlds_out_module.m"
  MR_Integer hlds__hlds_out__hlds_out_module__HeadVar__5_140,
#line 657 "hlds_out_module.m"
  MR_Integer * hlds__hlds_out__hlds_out_module__HeadVar__6_141);

#line 652 "hlds_out_module.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_module__IntroducedFrom__pred__write_inst_table__652__1_8_p_0(
#line 652 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__Lang_7,
#line 652 "hlds_out_module.m"
  MR_Integer hlds__hlds_out__hlds_out_module__Limit_9,
#line 652 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__HeadVar__3_58,
#line 652 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__HeadVar__4_128,
#line 652 "hlds_out_module.m"
  MR_Integer hlds__hlds_out__hlds_out_module__HeadVar__5_129,
#line 652 "hlds_out_module.m"
  MR_Integer * hlds__hlds_out__hlds_out_module__HeadVar__6_130);

#line 647 "hlds_out_module.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_module__IntroducedFrom__pred__write_inst_table__647__1_8_p_0(
#line 647 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__Lang_7,
#line 647 "hlds_out_module.m"
  MR_Integer hlds__hlds_out__hlds_out_module__Limit_9,
#line 647 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__HeadVar__3_47,
#line 647 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__HeadVar__4_116,
#line 647 "hlds_out_module.m"
  MR_Integer hlds__hlds_out__hlds_out_module__HeadVar__5_117,
#line 647 "hlds_out_module.m"
  MR_Integer * hlds__hlds_out__hlds_out_module__HeadVar__6_118);

#line 1163 "hlds_out_module.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_module__IntroducedFrom__pred__write_promise__1163__1_4_p_0(
#line 1163 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__VarSet_19,
#line 1163 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__HeadVar__2_33);

#line 1114 "hlds_out_module.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_1(
#line 1114 "hlds_out_module.m"
  void * hlds__hlds_out__hlds_out_module__env_ptr_arg);

#line 1114 "hlds_out_module.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_3(
#line 1114 "hlds_out_module.m"
  void * hlds__hlds_out__hlds_out_module__env_ptr_arg);

#line 1114 "hlds_out_module.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_2(
#line 1114 "hlds_out_module.m"
  void * hlds__hlds_out__hlds_out_module__env_ptr_arg);

#line 1114 "hlds_out_module.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_4(
#line 1114 "hlds_out_module.m"
  void * hlds__hlds_out__hlds_out_module__env_ptr_arg);

#line 1095 "hlds_out_module.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0(
#line 1095 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__Info_8,
#line 1095 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__Lang_9,
#line 1095 "hlds_out_module.m"
  MR_Integer hlds__hlds_out__hlds_out_module__Indent_10,
#line 1095 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__ModuleInfo_11,
#line 1095 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__HeadVar__5_5);

#line 1076 "hlds_out_module.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_module__compare_in_name_order_3_p_0(
#line 1076 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__HeadVar__1_1,
#line 1076 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__HeadVar__2_2,
#line 1076 "hlds_out_module.m"
  MR_Word * hlds__hlds_out__hlds_out_module__Result_8);

#line 1073 "hlds_out_module.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_preds_7_p_0_2(
#line 1073 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__closure_arg,
#line 1073 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_1,
#line 1073 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_2,
#line 1073 "hlds_out_module.m"
  MR_Box * hlds__hlds_out__hlds_out_module__wrapper_arg_3);

#line 1071 "hlds_out_module.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_preds_7_p_0_1(
#line 1071 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__closure_arg,
#line 1071 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_1,
#line 1071 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_2,
#line 1071 "hlds_out_module.m"
  MR_Box * hlds__hlds_out__hlds_out_module__wrapper_arg_3);

#line 1056 "hlds_out_module.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_preds_7_p_0(
#line 1056 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__Info_8,
#line 1056 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__Lang_9,
#line 1056 "hlds_out_module.m"
  MR_Integer hlds__hlds_out__hlds_out_module__Indent_10,
#line 1056 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__ModuleInfo_11,
#line 1056 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__PredTable_12);

#line 1030 "hlds_out_module.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_arg_tabling_methods_4_p_0(
#line 1030 "hlds_out_module.m"
  MR_String hlds__hlds_out__hlds_out_module__HeadVar__1_1,
#line 1030 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__HeadVar__2_2);

#line 975 "hlds_out_module.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_table_struct_info_4_p_0_1(
#line 975 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__closure_arg,
#line 975 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_1,
#line 975 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_2,
#line 975 "hlds_out_module.m"
  MR_Box * hlds__hlds_out__hlds_out_module__wrapper_arg_3);

#line 960 "hlds_out_module.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_table_struct_info_4_p_0(
#line 960 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__ModuleInfo_5,
#line 960 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__HeadVar__2_2);

#line 957 "hlds_out_module.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_table_structs_4_p_0_1(
#line 957 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__closure_arg,
#line 957 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_1,
#line 957 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_2,
#line 957 "hlds_out_module.m"
  MR_Box * hlds__hlds_out__hlds_out_module__wrapper_arg_3);

#line 951 "hlds_out_module.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_table_structs_4_p_0(
#line 951 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__ModuleInfo_5,
#line 951 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__TableStructMap_6);

#line 923 "hlds_out_module.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_const_struct_args_4_p_0(
#line 923 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__HeadConstArg_5,
#line 923 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__TailConstArgs_6);

#line 901 "hlds_out_module.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_const_struct_3_p_0(
#line 901 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__HeadVar__1_1);

#line 898 "hlds_out_module.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_const_struct_db_3_p_0_1(
#line 898 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__closure_arg,
#line 898 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_1,
#line 898 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_2,
#line 898 "hlds_out_module.m"
  MR_Box * hlds__hlds_out__hlds_out_module__wrapper_arg_3);

#line 893 "hlds_out_module.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_const_struct_db_3_p_0(
#line 893 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__ConstStructDb_4);

#line 864 "hlds_out_module.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_inst_4_p_0(
#line 864 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__Lang_5,
#line 864 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__Inst_6);

#line 857 "hlds_out_module.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_inst_name_4_p_0(
#line 857 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__Lang_5,
#line 857 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__InstName_6);

#line 814 "hlds_out_module.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_key_any_inst_4_p_0(
#line 814 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__Lang_5,
#line 814 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__HeadVar__2_2);

#line 805 "hlds_out_module.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_key_ground_inst_4_p_0(
#line 805 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__Lang_5,
#line 805 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__HeadVar__2_2);

#line 794 "hlds_out_module.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_key_merge_inst_4_p_0(
#line 794 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__Lang_5,
#line 794 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__HeadVar__2_2);

#line 769 "hlds_out_module.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_key_unify_inst_4_p_0(
#line 769 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__Lang_5,
#line 769 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__HeadVar__2_2);

#line 707 "hlds_out_module.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_inst_params_5_p_0(
#line 707 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__InstVar_6,
#line 707 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__InstVars_7,
#line 707 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__InstVarSet_8);

#line 679 "hlds_out_module.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_user_inst_4_p_0(
#line 679 "hlds_out_module.m"
  MR_Integer hlds__hlds_out__hlds_out_module__Indent_5,
#line 679 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__HeadVar__2_2);

#line 672 "hlds_out_module.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_inst_table_6_p_0_13(
#line 672 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__closure_arg,
#line 672 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_1,
#line 672 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_2,
#line 672 "hlds_out_module.m"
  MR_Box * hlds__hlds_out__hlds_out_module__wrapper_arg_3,
#line 672 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_4,
#line 672 "hlds_out_module.m"
  MR_Box * hlds__hlds_out__hlds_out_module__wrapper_arg_5);

#line 672 "hlds_out_module.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_inst_table_6_p_0_12(
#line 672 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__closure_arg,
#line 672 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_1,
#line 672 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_2,
#line 672 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_3,
#line 672 "hlds_out_module.m"
  MR_Box * hlds__hlds_out__hlds_out_module__wrapper_arg_4);

#line 667 "hlds_out_module.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_inst_table_6_p_0_11(
#line 667 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__closure_arg,
#line 667 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_1,
#line 667 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_2,
#line 667 "hlds_out_module.m"
  MR_Box * hlds__hlds_out__hlds_out_module__wrapper_arg_3,
#line 667 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_4,
#line 667 "hlds_out_module.m"
  MR_Box * hlds__hlds_out__hlds_out_module__wrapper_arg_5);

#line 667 "hlds_out_module.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_inst_table_6_p_0_10(
#line 667 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__closure_arg,
#line 667 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_1,
#line 667 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_2,
#line 667 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_3,
#line 667 "hlds_out_module.m"
  MR_Box * hlds__hlds_out__hlds_out_module__wrapper_arg_4);

#line 662 "hlds_out_module.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_inst_table_6_p_0_9(
#line 662 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__closure_arg,
#line 662 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_1,
#line 662 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_2,
#line 662 "hlds_out_module.m"
  MR_Box * hlds__hlds_out__hlds_out_module__wrapper_arg_3,
#line 662 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_4,
#line 662 "hlds_out_module.m"
  MR_Box * hlds__hlds_out__hlds_out_module__wrapper_arg_5);

#line 662 "hlds_out_module.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_inst_table_6_p_0_8(
#line 662 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__closure_arg,
#line 662 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_1,
#line 662 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_2,
#line 662 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_3,
#line 662 "hlds_out_module.m"
  MR_Box * hlds__hlds_out__hlds_out_module__wrapper_arg_4);

#line 657 "hlds_out_module.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_inst_table_6_p_0_7(
#line 657 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__closure_arg,
#line 657 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_1,
#line 657 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_2,
#line 657 "hlds_out_module.m"
  MR_Box * hlds__hlds_out__hlds_out_module__wrapper_arg_3,
#line 657 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_4,
#line 657 "hlds_out_module.m"
  MR_Box * hlds__hlds_out__hlds_out_module__wrapper_arg_5);

#line 657 "hlds_out_module.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_inst_table_6_p_0_6(
#line 657 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__closure_arg,
#line 657 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_1,
#line 657 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_2,
#line 657 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_3,
#line 657 "hlds_out_module.m"
  MR_Box * hlds__hlds_out__hlds_out_module__wrapper_arg_4);

#line 652 "hlds_out_module.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_inst_table_6_p_0_5(
#line 652 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__closure_arg,
#line 652 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_1,
#line 652 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_2,
#line 652 "hlds_out_module.m"
  MR_Box * hlds__hlds_out__hlds_out_module__wrapper_arg_3,
#line 652 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_4,
#line 652 "hlds_out_module.m"
  MR_Box * hlds__hlds_out__hlds_out_module__wrapper_arg_5);

#line 652 "hlds_out_module.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_inst_table_6_p_0_4(
#line 652 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__closure_arg,
#line 652 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_1,
#line 652 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_2,
#line 652 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_3,
#line 652 "hlds_out_module.m"
  MR_Box * hlds__hlds_out__hlds_out_module__wrapper_arg_4);

#line 647 "hlds_out_module.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_inst_table_6_p_0_3(
#line 647 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__closure_arg,
#line 647 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_1,
#line 647 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_2,
#line 647 "hlds_out_module.m"
  MR_Box * hlds__hlds_out__hlds_out_module__wrapper_arg_3,
#line 647 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_4,
#line 647 "hlds_out_module.m"
  MR_Box * hlds__hlds_out__hlds_out_module__wrapper_arg_5);

#line 647 "hlds_out_module.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_inst_table_6_p_0_2(
#line 647 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__closure_arg,
#line 647 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_1,
#line 647 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_2,
#line 647 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_3,
#line 647 "hlds_out_module.m"
  MR_Box * hlds__hlds_out__hlds_out_module__wrapper_arg_4);

#line 644 "hlds_out_module.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_inst_table_6_p_0_1(
#line 644 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__closure_arg,
#line 644 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_1,
#line 644 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_2,
#line 644 "hlds_out_module.m"
  MR_Box * hlds__hlds_out__hlds_out_module__wrapper_arg_3);

#line 618 "hlds_out_module.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_inst_table_6_p_0(
#line 618 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__Lang_7,
#line 618 "hlds_out_module.m"
  MR_Integer hlds__hlds_out__hlds_out_module__Indent_8,
#line 618 "hlds_out_module.m"
  MR_Integer hlds__hlds_out__hlds_out_module__Limit_9,
#line 618 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__InstTable_10);

#line 587 "hlds_out_module.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_instance_defn_5_p_0_2(
#line 587 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__closure_arg,
#line 587 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_1,
#line 587 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_2,
#line 587 "hlds_out_module.m"
  MR_Box * hlds__hlds_out__hlds_out_module__wrapper_arg_3);

#line 572 "hlds_out_module.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_instance_defn_5_p_0_1(
#line 572 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__closure_arg,
#line 572 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_1,
#line 572 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_2,
#line 572 "hlds_out_module.m"
  MR_Box * hlds__hlds_out__hlds_out_module__wrapper_arg_3);

#line 543 "hlds_out_module.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_instance_defn_5_p_0(
#line 543 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__Info_6,
#line 543 "hlds_out_module.m"
  MR_Integer hlds__hlds_out__hlds_out_module__Indent_7,
#line 543 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__InstanceDefn_8);

#line 540 "hlds_out_module.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_instance_defns_5_p_0_1(
#line 540 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__closure_arg,
#line 540 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_1,
#line 540 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_2,
#line 540 "hlds_out_module.m"
  MR_Box * hlds__hlds_out__hlds_out_module__wrapper_arg_3);

#line 532 "hlds_out_module.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_instance_defns_5_p_0(
#line 532 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__Info_6,
#line 532 "hlds_out_module.m"
  MR_Integer hlds__hlds_out__hlds_out_module__Indent_7,
#line 532 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__HeadVar__3_3);

#line 529 "hlds_out_module.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_instances_5_p_0_1(
#line 529 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__closure_arg,
#line 529 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_1,
#line 529 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_2,
#line 529 "hlds_out_module.m"
  MR_Box * hlds__hlds_out__hlds_out_module__wrapper_arg_3);

#line 521 "hlds_out_module.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_instances_5_p_0(
#line 521 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__Info_6,
#line 521 "hlds_out_module.m"
  MR_Integer hlds__hlds_out__hlds_out_module__Indent_7,
#line 521 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__InstanceTable_8);

#line 505 "hlds_out_module.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_class_proc_3_p_0(
#line 505 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__HeadVar__1_1);

#line 498 "hlds_out_module.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_module__hlds_output_fundep_3_p_0_2(
#line 498 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__closure_arg,
#line 498 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_1,
#line 498 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_2,
#line 498 "hlds_out_module.m"
  MR_Box * hlds__hlds_out__hlds_out_module__wrapper_arg_3);

#line 495 "hlds_out_module.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_module__hlds_output_fundep_3_p_0_1(
#line 495 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__closure_arg,
#line 495 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_1,
#line 495 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_2,
#line 495 "hlds_out_module.m"
  MR_Box * hlds__hlds_out__hlds_out_module__wrapper_arg_3);

#line 490 "hlds_out_module.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_module__hlds_output_fundep_3_p_0(
#line 490 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__HeadVar__1_1);

#line 487 "hlds_out_module.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_class_defn_5_p_0_3(
#line 487 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__closure_arg,
#line 487 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_1,
#line 487 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_2,
#line 487 "hlds_out_module.m"
  MR_Box * hlds__hlds_out__hlds_out_module__wrapper_arg_3);

#line 482 "hlds_out_module.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_class_defn_5_p_0_2(
#line 482 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__closure_arg,
#line 482 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_1,
#line 482 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_2,
#line 482 "hlds_out_module.m"
  MR_Box * hlds__hlds_out__hlds_out_module__wrapper_arg_3);

#line 476 "hlds_out_module.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_class_defn_5_p_0_1(
#line 476 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__closure_arg,
#line 476 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_1,
#line 476 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_2,
#line 476 "hlds_out_module.m"
  MR_Box * hlds__hlds_out__hlds_out_module__wrapper_arg_3);

#line 436 "hlds_out_module.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_class_defn_5_p_0(
#line 436 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__Info_6,
#line 436 "hlds_out_module.m"
  MR_Integer hlds__hlds_out__hlds_out_module__Indent_7,
#line 436 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__HeadVar__3_3);

#line 433 "hlds_out_module.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_classes_5_p_0_1(
#line 433 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__closure_arg,
#line 433 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_1,
#line 433 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_2,
#line 433 "hlds_out_module.m"
  MR_Box * hlds__hlds_out__hlds_out_module__wrapper_arg_3);

#line 426 "hlds_out_module.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_classes_5_p_0(
#line 426 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__Info_6,
#line 426 "hlds_out_module.m"
  MR_Integer hlds__hlds_out__hlds_out_module__Indent_7,
#line 426 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__ClassTable_8);

#line 389 "hlds_out_module.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_constructors_loop_7_p_0(
#line 389 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__HeadVar__1_1,
#line 389 "hlds_out_module.m"
  MR_Integer hlds__hlds_out__hlds_out_module__HeadVar__2_2,
#line 389 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__HeadVar__3_3,
#line 389 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__HeadVar__4_4,
#line 389 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__TagValues_5);

#line 371 "hlds_out_module.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_constructors_7_p_0(
#line 371 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__HeadVar__1_1,
#line 371 "hlds_out_module.m"
  MR_Integer hlds__hlds_out__hlds_out_module__HeadVar__2_2,
#line 371 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__HeadVar__3_3,
#line 371 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__HeadVar__4_4,
#line 371 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__TagValues_5);

#line 265 "hlds_out_module.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_type_body_7_p_0(
#line 265 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__Info_8,
#line 265 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__TypeCtor_9,
#line 265 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__TypeBody_10,
#line 265 "hlds_out_module.m"
  MR_Integer hlds__hlds_out__hlds_out_module__Indent_11,
#line 265 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__TVarSet_12);

#line 256 "hlds_out_module.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_type_params_loop_4_p_0(
#line 256 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__HeadVar__1_1,
#line 256 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__HeadVar__2_2);

#line 192 "hlds_out_module.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_type_table_entries_5_p_0(
#line 192 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__Info_1,
#line 192 "hlds_out_module.m"
  MR_Integer hlds__hlds_out__hlds_out_module__Indent_2,
#line 192 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__HeadVar__3_3);

#line 182 "hlds_out_module.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_types_5_p_0(
#line 182 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__Info_6,
#line 182 "hlds_out_module.m"
  MR_Integer hlds__hlds_out__hlds_out_module__Indent_7,
#line 182 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__TypeTable_8);

#line 154 "hlds_out_module.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_footer_4_p_0(
#line 154 "hlds_out_module.m"
  MR_Integer hlds__hlds_out__hlds_out_module__Indent_5,
#line 154 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__Module_6);

#line 174 "hlds_out_module.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_hlds_4_p_0_1(
#line 174 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__closure_arg,
#line 174 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_1,
#line 174 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_2,
#line 174 "hlds_out_module.m"
  MR_Box * hlds__hlds_out__hlds_out_module__wrapper_arg_3);


static /* final */ const MR_Box hlds__hlds_out__hlds_out_module_scalar_common_1[3][2];

static /* final */ const MR_Box hlds__hlds_out__hlds_out_module_scalar_common_2[24][3];

static /* final */ const MR_Box hlds__hlds_out__hlds_out_module_scalar_common_3[6][6];

static /* final */ const MR_Box hlds__hlds_out__hlds_out_module_scalar_common_4[5][8];

static /* final */ const MR_Box hlds__hlds_out__hlds_out_module_scalar_common_5[9][7];

static /* final */ const MR_Box hlds__hlds_out__hlds_out_module_scalar_common_6[5][11];

static /* final */ const MR_Box hlds__hlds_out__hlds_out_module_scalar_common_7[1][1];

static /* final */ const MR_Box hlds__hlds_out__hlds_out_module_scalar_common_8[1][10];




static /* final */ const MR_Box hlds__hlds_out__hlds_out_module_scalar_common_1[3][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_instance_defn_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_class_proc_0))
  },
};

static /* final */ const MR_Box hlds__hlds_out__hlds_out_module_scalar_common_2[24][3] = {
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
    ((MR_Box) (&hlds__hlds_out__hlds_out_module_scalar_common_1[1]))
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
    ((MR_Box) (&hlds__hlds_out__hlds_out_module_scalar_common_3[0])),
    ((MR_Box) (hlds__hlds_out__hlds_out_module__write_hlds_4_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 12 */
  {
    ((MR_Box) (&hlds__hlds_out__hlds_out_module_scalar_common_3[1])),
    ((MR_Box) (hlds__hlds_out__hlds_out_module__write_class_defn_5_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 13 */
  {
    ((MR_Box) (&hlds__hlds_out__hlds_out_module_scalar_common_3[2])),
    ((MR_Box) (hlds__hlds_out__hlds_out_module__write_class_defn_5_p_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 14 */
  {
    ((MR_Box) (&hlds__hlds_out__hlds_out_module_scalar_common_3[3])),
    ((MR_Box) (hlds__hlds_out__hlds_out_module__hlds_output_fundep_3_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 15 */
  {
    ((MR_Box) (&hlds__hlds_out__hlds_out_module_scalar_common_3[3])),
    ((MR_Box) (hlds__hlds_out__hlds_out_module__hlds_output_fundep_3_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 16 */
  {
    ((MR_Box) (&hlds__hlds_out__hlds_out_module_scalar_common_5[1])),
    ((MR_Box) (hlds__hlds_out__hlds_out_module__write_inst_table_6_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 17 */
  {
    ((MR_Box) (&hlds__hlds_out__hlds_out_module_scalar_common_5[2])),
    ((MR_Box) (hlds__hlds_out__hlds_out_module__write_inst_table_6_p_0_4)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 18 */
  {
    ((MR_Box) (&hlds__hlds_out__hlds_out_module_scalar_common_5[3])),
    ((MR_Box) (hlds__hlds_out__hlds_out_module__write_inst_table_6_p_0_6)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 19 */
  {
    ((MR_Box) (&hlds__hlds_out__hlds_out_module_scalar_common_5[4])),
    ((MR_Box) (hlds__hlds_out__hlds_out_module__write_inst_table_6_p_0_8)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 20 */
  {
    ((MR_Box) (&hlds__hlds_out__hlds_out_module_scalar_common_5[5])),
    ((MR_Box) (hlds__hlds_out__hlds_out_module__write_inst_table_6_p_0_10)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 21 */
  {
    ((MR_Box) (&hlds__hlds_out__hlds_out_module_scalar_common_5[5])),
    ((MR_Box) (hlds__hlds_out__hlds_out_module__write_inst_table_6_p_0_12)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 22 */
  {
    ((MR_Box) (&hlds__hlds_out__hlds_out_module_scalar_common_3[4])),
    ((MR_Box) (hlds__hlds_out__hlds_out_module__write_const_struct_db_3_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 23 */
  {
    ((MR_Box) (&hlds__hlds_out__hlds_out_module_scalar_common_3[5])),
    ((MR_Box) (hlds__hlds_out__hlds_out_module__write_preds_7_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box hlds__hlds_out__hlds_out_module_scalar_common_3[6][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_class_fundep_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_class_proc_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_module__pair__pti_pair_2__plain_builtin__type_ctor_info_int_0__plain_hlds__const_struct__type_ctor_info_const_struct_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_module__pair__pti_pair_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_hlds__hlds_pred__type_ctor_info_pred_info_0)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_module__pair__pti_pair_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_hlds__hlds_pred__type_ctor_info_pred_info_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_comparison_result_0))
  },
};

static /* final */ const MR_Box hlds__hlds_out__hlds_out_module_scalar_common_4[5][8] = {
  /* row 0 */
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
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_module__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 2 */
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
  /* row 3 */
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
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_module__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box hlds__hlds_out__hlds_out_module_scalar_common_5[9][7] = {
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
    ((MR_Box) (&parse_tree__mercury_to_mercury__parse_tree__mercury_to_mercury__type_ctor_info_output_lang_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_unify_inst_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&parse_tree__mercury_to_mercury__parse_tree__mercury_to_mercury__type_ctor_info_output_lang_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_merge_inst_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&parse_tree__mercury_to_mercury__parse_tree__mercury_to_mercury__type_ctor_info_output_lang_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_ground_inst_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&parse_tree__mercury_to_mercury__parse_tree__mercury_to_mercury__type_ctor_info_output_lang_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_any_inst_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&parse_tree__mercury_to_mercury__parse_tree__mercury_to_mercury__type_ctor_info_output_lang_0)),
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

static /* final */ const MR_Box hlds__hlds_out__hlds_out_module_scalar_common_6[5][11] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 8)),
    ((MR_Box) (&parse_tree__mercury_to_mercury__parse_tree__mercury_to_mercury__type_ctor_info_output_lang_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_module____vpti_pred_4__plain_parse_tree__mercury_to_mercury__type_ctor_info_output_lang_0__plain_parse_tree__prog_data__type_ctor_info_unify_inst_info_0__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0)),
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
    ((MR_Box) (&parse_tree__mercury_to_mercury__parse_tree__mercury_to_mercury__type_ctor_info_output_lang_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_module____vpti_pred_4__plain_parse_tree__mercury_to_mercury__type_ctor_info_output_lang_0__plain_parse_tree__prog_data__type_ctor_info_merge_inst_info_0__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0)),
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
    ((MR_Box) (&parse_tree__mercury_to_mercury__parse_tree__mercury_to_mercury__type_ctor_info_output_lang_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_module____vpti_pred_4__plain_parse_tree__mercury_to_mercury__type_ctor_info_output_lang_0__plain_parse_tree__prog_data__type_ctor_info_ground_inst_info_0__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0)),
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
    ((MR_Box) (&parse_tree__mercury_to_mercury__parse_tree__mercury_to_mercury__type_ctor_info_output_lang_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_module____vpti_pred_4__plain_parse_tree__mercury_to_mercury__type_ctor_info_output_lang_0__plain_parse_tree__prog_data__type_ctor_info_any_inst_info_0__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0)),
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
    ((MR_Box) (&parse_tree__mercury_to_mercury__parse_tree__mercury_to_mercury__type_ctor_info_output_lang_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_module____vpti_pred_4__plain_parse_tree__mercury_to_mercury__type_ctor_info_output_lang_0__plain_parse_tree__prog_data__type_ctor_info_inst_name_0__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_module__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_inst_name_0__plain_hlds__hlds_data__type_ctor_info_maybe_inst_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box hlds__hlds_out__hlds_out_module_scalar_common_7[1][1] = {
  /* row 0 */
  {
    ((MR_Box) (((MR_Integer) 0 | (((((MR_Integer) 0 << (MR_Integer) 1)) | (((((MR_Integer) 0 << (MR_Integer) 2)) | (((((MR_Integer) 0 << (MR_Integer) 3)) | (((MR_Integer) 0 << (MR_Integer) 4)))))))))))
  },
};

static /* final */ const MR_Box hlds__hlds_out__hlds_out_module_scalar_common_8[1][10] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 7)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__type_ctor_info_hlds_out_info_0)),
    ((MR_Box) (&parse_tree__mercury_to_mercury__parse_tree__mercury_to_mercury__type_ctor_info_output_lang_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_module__pair__pti_pair_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_hlds__hlds_pred__type_ctor_info_pred_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};



#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "mdbcomp.rtti_access.mh"
#include "mdbcomp.rtti_access.mh"



#line 1587 "hlds.hlds_out.hlds_out_module.c"
static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_out__hlds_out_module__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_class_id_0__plain_hlds__hlds_data__type_ctor_info_hlds_class_defn_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0,
    (MR_PseudoTypeInfo) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_class_defn_0
  }
};

#line 1596 "hlds.hlds_out.hlds_out_module.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_out__hlds_out_module__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 1604 "hlds.hlds_out.hlds_out_module.c"
static const MR_FA_TypeInfo_Struct1 hlds__hlds_out__hlds_out_module__list__ti_list_1hlds__hlds_data__type_ctor_info_hlds_instance_defn_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_instance_defn_0
  }
};

#line 1612 "hlds.hlds_out.hlds_out_module.c"
static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_out__hlds_out_module__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_class_id_0__plain_list__ti_list_1hlds__hlds_data__type_ctor_info_hlds_instance_defn_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0,
    (MR_PseudoTypeInfo) &hlds__hlds_out__hlds_out_module__list__ti_list_1hlds__hlds_data__type_ctor_info_hlds_instance_defn_0
  }
};

#line 1621 "hlds.hlds_out.hlds_out_module.c"
static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_out__hlds_out_module__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_inst_id_0__plain_hlds__hlds_data__type_ctor_info_hlds_inst_defn_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_id_0,
    (MR_PseudoTypeInfo) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_inst_defn_0
  }
};

#line 1630 "hlds.hlds_out.hlds_out_module.c"
static const MR_VA_PseudoTypeInfo_Struct4 hlds__hlds_out__hlds_out_module____vpti_pred_4__plain_parse_tree__mercury_to_mercury__type_ctor_info_output_lang_0__plain_parse_tree__prog_data__type_ctor_info_unify_inst_info_0__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 4,
  {
    (MR_PseudoTypeInfo) &parse_tree__mercury_to_mercury__parse_tree__mercury_to_mercury__type_ctor_info_output_lang_0,
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_unify_inst_info_0,
    (MR_PseudoTypeInfo) &mercury__io__io__type_ctor_info_state_0,
    (MR_PseudoTypeInfo) &mercury__io__io__type_ctor_info_state_0
  }
};

#line 1642 "hlds.hlds_out.hlds_out_module.c"
static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_out__hlds_out_module__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_unify_inst_info_0__plain_hlds__hlds_data__type_ctor_info_maybe_inst_det_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_unify_inst_info_0,
    (MR_PseudoTypeInfo) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_maybe_inst_det_0
  }
};

#line 1651 "hlds.hlds_out.hlds_out_module.c"
static const MR_VA_PseudoTypeInfo_Struct4 hlds__hlds_out__hlds_out_module____vpti_pred_4__plain_parse_tree__mercury_to_mercury__type_ctor_info_output_lang_0__plain_parse_tree__prog_data__type_ctor_info_merge_inst_info_0__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 4,
  {
    (MR_PseudoTypeInfo) &parse_tree__mercury_to_mercury__parse_tree__mercury_to_mercury__type_ctor_info_output_lang_0,
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_merge_inst_info_0,
    (MR_PseudoTypeInfo) &mercury__io__io__type_ctor_info_state_0,
    (MR_PseudoTypeInfo) &mercury__io__io__type_ctor_info_state_0
  }
};

#line 1663 "hlds.hlds_out.hlds_out_module.c"
static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_out__hlds_out_module__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_merge_inst_info_0__plain_hlds__hlds_data__type_ctor_info_maybe_inst_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_merge_inst_info_0,
    (MR_PseudoTypeInfo) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_maybe_inst_0
  }
};

#line 1672 "hlds.hlds_out.hlds_out_module.c"
static const MR_VA_PseudoTypeInfo_Struct4 hlds__hlds_out__hlds_out_module____vpti_pred_4__plain_parse_tree__mercury_to_mercury__type_ctor_info_output_lang_0__plain_parse_tree__prog_data__type_ctor_info_ground_inst_info_0__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 4,
  {
    (MR_PseudoTypeInfo) &parse_tree__mercury_to_mercury__parse_tree__mercury_to_mercury__type_ctor_info_output_lang_0,
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_ground_inst_info_0,
    (MR_PseudoTypeInfo) &mercury__io__io__type_ctor_info_state_0,
    (MR_PseudoTypeInfo) &mercury__io__io__type_ctor_info_state_0
  }
};

#line 1684 "hlds.hlds_out.hlds_out_module.c"
static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_out__hlds_out_module__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_ground_inst_info_0__plain_hlds__hlds_data__type_ctor_info_maybe_inst_det_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_ground_inst_info_0,
    (MR_PseudoTypeInfo) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_maybe_inst_det_0
  }
};

#line 1693 "hlds.hlds_out.hlds_out_module.c"
static const MR_VA_PseudoTypeInfo_Struct4 hlds__hlds_out__hlds_out_module____vpti_pred_4__plain_parse_tree__mercury_to_mercury__type_ctor_info_output_lang_0__plain_parse_tree__prog_data__type_ctor_info_any_inst_info_0__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 4,
  {
    (MR_PseudoTypeInfo) &parse_tree__mercury_to_mercury__parse_tree__mercury_to_mercury__type_ctor_info_output_lang_0,
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_any_inst_info_0,
    (MR_PseudoTypeInfo) &mercury__io__io__type_ctor_info_state_0,
    (MR_PseudoTypeInfo) &mercury__io__io__type_ctor_info_state_0
  }
};

#line 1705 "hlds.hlds_out.hlds_out_module.c"
static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_out__hlds_out_module__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_any_inst_info_0__plain_hlds__hlds_data__type_ctor_info_maybe_inst_det_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_any_inst_info_0,
    (MR_PseudoTypeInfo) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_maybe_inst_det_0
  }
};

#line 1714 "hlds.hlds_out.hlds_out_module.c"
static const MR_VA_PseudoTypeInfo_Struct4 hlds__hlds_out__hlds_out_module____vpti_pred_4__plain_parse_tree__mercury_to_mercury__type_ctor_info_output_lang_0__plain_parse_tree__prog_data__type_ctor_info_inst_name_0__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 4,
  {
    (MR_PseudoTypeInfo) &parse_tree__mercury_to_mercury__parse_tree__mercury_to_mercury__type_ctor_info_output_lang_0,
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0,
    (MR_PseudoTypeInfo) &mercury__io__io__type_ctor_info_state_0,
    (MR_PseudoTypeInfo) &mercury__io__io__type_ctor_info_state_0
  }
};

#line 1726 "hlds.hlds_out.hlds_out_module.c"
static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_out__hlds_out_module__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_inst_name_0__plain_hlds__hlds_data__type_ctor_info_maybe_inst_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0,
    (MR_PseudoTypeInfo) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_maybe_inst_0
  }
};

#line 1735 "hlds.hlds_out.hlds_out_module.c"
static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_out__hlds_out_module__pair__pti_pair_2__plain_builtin__type_ctor_info_int_0__plain_hlds__const_struct__type_ctor_info_const_struct_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_PseudoTypeInfo) &hlds__const_struct__hlds__const_struct__type_ctor_info_const_struct_0
  }
};

#line 1744 "hlds.hlds_out.hlds_out_module.c"
static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_out__hlds_out_module__pair__pti_pair_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_hlds__hlds_module__type_ctor_info_table_struct_info_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
    (MR_PseudoTypeInfo) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_table_struct_info_0
  }
};

#line 1753 "hlds.hlds_out.hlds_out_module.c"
static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_out__hlds_out_module__pair__pti_pair_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_hlds__hlds_pred__type_ctor_info_pred_info_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0,
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0
  }
};

#line 1762 "hlds.hlds_out.hlds_out_module.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_out__hlds_out_module__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1770 "hlds.hlds_out.hlds_out_module.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_out__hlds_out_module__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 876 "hlds_out_module.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_module__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_109_111_100_101_95_116_97_98_108_101_95_95_91_50_93_95_48_4_p_0(
#line 876 "hlds_out_module.m"
  MR_Integer hlds__hlds_out__hlds_out_module__Indent_5)
#line 876 "hlds_out_module.m"
{
#line 878 "hlds_out_module.m"
  {
#line 878 "hlds_out_module.m"
    MR_bool hlds__hlds_out__hlds_out_module__succeeded;

#line 880 "hlds_out_module.m"
    {
#line 880 "hlds_out_module.m"
      hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_module__Indent_5);
    }
#line 881 "hlds_out_module.m"
    {
#line 881 "hlds_out_module.m"
      mercury__io__write_string_3_p_0((MR_String) "%-------- Modes --------\n");
    }
#line 882 "hlds_out_module.m"
    {
#line 882 "hlds_out_module.m"
      hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_module__Indent_5);
    }
#line 883 "hlds_out_module.m"
    {
#line 883 "hlds_out_module.m"
      mercury__io__write_string_3_p_0((MR_String) "%%% Not yet implemented, sorry.\n");
    }
#line 886 "hlds_out_module.m"
    {
#line 886 "hlds_out_module.m"
      mercury__io__nl_2_p_0();
#line 886 "hlds_out_module.m"
      return;
    }
#line 878 "hlds_out_module.m"
  }
#line 876 "hlds_out_module.m"
}

#line 744 "hlds_out_module.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_module__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_107_101_121_95_109_97_121_98_101_95_105_110_115_116_95_100_101_116_95_95_91_49_93_95_48_8_p_0(
#line 744 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__Lang_9,
#line 744 "hlds_out_module.m"
  MR_Integer hlds__hlds_out__hlds_out_module__Limit_10,
#line 744 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__WriteKey_11,
#line 744 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__HeadVar__4_4,
#line 744 "hlds_out_module.m"
  MR_Integer hlds__hlds_out__hlds_out_module__STATE_VARIABLE_N_0_19,
#line 744 "hlds_out_module.m"
  MR_Integer * hlds__hlds_out__hlds_out_module__STATE_VARIABLE_N_20)
#line 744 "hlds_out_module.m"
{
#line 749 "hlds_out_module.m"
  {
#line 749 "hlds_out_module.m"
    MR_bool hlds__hlds_out__hlds_out_module__succeeded;
#line 749 "hlds_out_module.m"
    MR_Box hlds__hlds_out__hlds_out_module__Key_12 = (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__HeadVar__4_4, (MR_Integer) 0));
#line 749 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__MaybeInstDet_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__HeadVar__4_4, (MR_Integer) 1)));

#line 750 "hlds_out_module.m"
    *hlds__hlds_out__hlds_out_module__STATE_VARIABLE_N_20 = (hlds__hlds_out__hlds_out_module__STATE_VARIABLE_N_0_19 + (MR_Integer) 1);
#line 751 "hlds_out_module.m"
    hlds__hlds_out__hlds_out_module__succeeded = (*hlds__hlds_out__hlds_out_module__STATE_VARIABLE_N_20 <= hlds__hlds_out__hlds_out_module__Limit_10);
#line 765 "hlds_out_module.m"
    if (hlds__hlds_out__hlds_out_module__succeeded)
#line 752 "hlds_out_module.m"
      {
#line 752 "hlds_out_module.m"
        MR_String hlds__hlds_out__hlds_out_module__V_50_50;
#line 752 "hlds_out_module.m"
        MR_Word hlds__hlds_out__hlds_out_module__V_56_56;
#line 754 "hlds_out_module.m"
        void MR_CALL (* hlds__hlds_out__hlds_out_module__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
#line 754 "hlds_out_module.m"
        MR_Box hlds__hlds_out__hlds_out_module__conv1_STATE_VARIABLE_IO_31_31;

#line 752 "hlds_out_module.m"
        {
#line 752 "hlds_out_module.m"
          mercury__io__nl_2_p_0();
        }
#line 753 "hlds_out_module.m"
        {
#line 753 "hlds_out_module.m"
          mercury__io__write_string_3_p_0((MR_String) "Entry ");
        }
#line 1875 "hlds.hlds_out.hlds_out_module.c"
        hlds__hlds_out__hlds_out_module__V_56_56 = (MR_Word) &hlds__hlds_out__hlds_out_module_scalar_common_7[0];
#line 753 "hlds_out_module.m"
        {
#line 753 "hlds_out_module.m"
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(hlds__hlds_out__hlds_out_module__V_56_56, *hlds__hlds_out__hlds_out_module__STATE_VARIABLE_N_20, &hlds__hlds_out__hlds_out_module__V_50_50);
        }
#line 753 "hlds_out_module.m"
        {
#line 753 "hlds_out_module.m"
          mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_module__V_50_50);
        }
#line 753 "hlds_out_module.m"
        {
#line 753 "hlds_out_module.m"
          mercury__io__write_string_3_p_0((MR_String) " key\n");
        }
#line 754 "hlds_out_module.m"
        hlds__hlds_out__hlds_out_module__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__WriteKey_11, (MR_Integer) 1)));
#line 754 "hlds_out_module.m"
        {
#line 754 "hlds_out_module.m"
          hlds__hlds_out__hlds_out_module__func_0(((MR_Box) hlds__hlds_out__hlds_out_module__WriteKey_11), ((MR_Box) (hlds__hlds_out__hlds_out_module__Lang_9)), hlds__hlds_out__hlds_out_module__Key_12, ((MR_Box) ((MR_Integer) 0)), &hlds__hlds_out__hlds_out_module__conv1_STATE_VARIABLE_IO_31_31);
        }
#line 758 "hlds_out_module.m"
        if ((hlds__hlds_out__hlds_out_module__MaybeInstDet_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 756 "hlds_out_module.m"
          {
#line 756 "hlds_out_module.m"
            MR_String hlds__hlds_out__hlds_out_module__V_61_61;

#line 757 "hlds_out_module.m"
            {
#line 757 "hlds_out_module.m"
              mercury__io__write_string_3_p_0((MR_String) "Entry ");
            }
#line 757 "hlds_out_module.m"
            {
#line 757 "hlds_out_module.m"
              mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(hlds__hlds_out__hlds_out_module__V_56_56, *hlds__hlds_out__hlds_out_module__STATE_VARIABLE_N_20, &hlds__hlds_out__hlds_out_module__V_61_61);
            }
#line 757 "hlds_out_module.m"
            {
#line 757 "hlds_out_module.m"
              mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_module__V_61_61);
            }
#line 757 "hlds_out_module.m"
            {
#line 757 "hlds_out_module.m"
              mercury__io__write_string_3_p_0((MR_String) " value UNKNOWN\n");
#line 757 "hlds_out_module.m"
              return;
            }
#line 756 "hlds_out_module.m"
          }
#line 758 "hlds_out_module.m"
        else
#line 759 "hlds_out_module.m"
          {
#line 759 "hlds_out_module.m"
            MR_Word hlds__hlds_out__hlds_out_module__Inst_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_module__MaybeInstDet_13, (MR_Integer) 0)));
#line 759 "hlds_out_module.m"
            MR_Word hlds__hlds_out__hlds_out_module__Detism_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_module__MaybeInstDet_13, (MR_Integer) 1)));
#line 759 "hlds_out_module.m"
            MR_String hlds__hlds_out__hlds_out_module__DetismStr_18;
#line 759 "hlds_out_module.m"
            MR_String hlds__hlds_out__hlds_out_module__V_72_72;
#line 759 "hlds_out_module.m"
            MR_String hlds__hlds_out__hlds_out_module__V_82_82;

#line 760 "hlds_out_module.m"
            {
#line 760 "hlds_out_module.m"
              hlds__hlds_out__hlds_out_module__DetismStr_18 = parse_tree__prog_out__determinism_to_string_1_f_0(hlds__hlds_out__hlds_out_module__Detism_17);
            }
#line 761 "hlds_out_module.m"
            {
#line 761 "hlds_out_module.m"
              mercury__io__write_string_3_p_0((MR_String) "Entry ");
            }
#line 761 "hlds_out_module.m"
            {
#line 761 "hlds_out_module.m"
              mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(hlds__hlds_out__hlds_out_module__V_56_56, *hlds__hlds_out__hlds_out_module__STATE_VARIABLE_N_20, &hlds__hlds_out__hlds_out_module__V_72_72);
            }
#line 761 "hlds_out_module.m"
            {
#line 761 "hlds_out_module.m"
              mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_module__V_72_72);
            }
#line 761 "hlds_out_module.m"
            {
#line 761 "hlds_out_module.m"
              mercury__io__write_string_3_p_0((MR_String) " value (");
            }
#line 761 "hlds_out_module.m"
            {
#line 761 "hlds_out_module.m"
              mercury__string__format__format_string_component_nowidth_noprec_3_p_0(hlds__hlds_out__hlds_out_module__V_56_56, hlds__hlds_out__hlds_out_module__DetismStr_18, &hlds__hlds_out__hlds_out_module__V_82_82);
            }
#line 761 "hlds_out_module.m"
            {
#line 761 "hlds_out_module.m"
              mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_module__V_82_82);
            }
#line 761 "hlds_out_module.m"
            {
#line 761 "hlds_out_module.m"
              mercury__io__write_string_3_p_0((MR_String) "):\n");
            }
#line 762 "hlds_out_module.m"
            {
#line 762 "hlds_out_module.m"
              hlds__hlds_out__hlds_out_module__write_inst_4_p_0(hlds__hlds_out__hlds_out_module__Lang_9, hlds__hlds_out__hlds_out_module__Inst_16);
            }
#line 763 "hlds_out_module.m"
            {
#line 763 "hlds_out_module.m"
              mercury__io__nl_2_p_0();
#line 763 "hlds_out_module.m"
              return;
            }
#line 759 "hlds_out_module.m"
          }
#line 752 "hlds_out_module.m"
      }
#line 765 "hlds_out_module.m"
    else
#line 765 "hlds_out_module.m"
      {
#line 765 "hlds_out_module.m"
      }
#line 749 "hlds_out_module.m"
  }
#line 744 "hlds_out_module.m"
}

#line 721 "hlds_out_module.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_module__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_107_101_121_95_109_97_121_98_101_95_105_110_115_116_95_95_91_49_93_95_48_8_p_0(
#line 721 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__Lang_9,
#line 721 "hlds_out_module.m"
  MR_Integer hlds__hlds_out__hlds_out_module__Limit_10,
#line 721 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__WriteKey_11,
#line 721 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__HeadVar__4_4,
#line 721 "hlds_out_module.m"
  MR_Integer hlds__hlds_out__hlds_out_module__STATE_VARIABLE_N_0_17,
#line 721 "hlds_out_module.m"
  MR_Integer * hlds__hlds_out__hlds_out_module__STATE_VARIABLE_N_18)
#line 721 "hlds_out_module.m"
{
#line 725 "hlds_out_module.m"
  {
#line 725 "hlds_out_module.m"
    MR_bool hlds__hlds_out__hlds_out_module__succeeded;
#line 725 "hlds_out_module.m"
    MR_Box hlds__hlds_out__hlds_out_module__Key_12 = (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__HeadVar__4_4, (MR_Integer) 0));
#line 725 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__MaybeInst_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__HeadVar__4_4, (MR_Integer) 1)));

#line 726 "hlds_out_module.m"
    *hlds__hlds_out__hlds_out_module__STATE_VARIABLE_N_18 = (hlds__hlds_out__hlds_out_module__STATE_VARIABLE_N_0_17 + (MR_Integer) 1);
#line 727 "hlds_out_module.m"
    hlds__hlds_out__hlds_out_module__succeeded = (*hlds__hlds_out__hlds_out_module__STATE_VARIABLE_N_18 <= hlds__hlds_out__hlds_out_module__Limit_10);
#line 740 "hlds_out_module.m"
    if (hlds__hlds_out__hlds_out_module__succeeded)
#line 728 "hlds_out_module.m"
      {
#line 728 "hlds_out_module.m"
        MR_String hlds__hlds_out__hlds_out_module__V_46_46;
#line 728 "hlds_out_module.m"
        MR_Word hlds__hlds_out__hlds_out_module__V_52_52;
#line 730 "hlds_out_module.m"
        void MR_CALL (* hlds__hlds_out__hlds_out_module__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
#line 730 "hlds_out_module.m"
        MR_Box hlds__hlds_out__hlds_out_module__conv1_STATE_VARIABLE_IO_29_29;

#line 728 "hlds_out_module.m"
        {
#line 728 "hlds_out_module.m"
          mercury__io__nl_2_p_0();
        }
#line 729 "hlds_out_module.m"
        {
#line 729 "hlds_out_module.m"
          mercury__io__write_string_3_p_0((MR_String) "Entry ");
        }
#line 2065 "hlds.hlds_out.hlds_out_module.c"
        hlds__hlds_out__hlds_out_module__V_52_52 = (MR_Word) &hlds__hlds_out__hlds_out_module_scalar_common_7[0];
#line 729 "hlds_out_module.m"
        {
#line 729 "hlds_out_module.m"
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(hlds__hlds_out__hlds_out_module__V_52_52, *hlds__hlds_out__hlds_out_module__STATE_VARIABLE_N_18, &hlds__hlds_out__hlds_out_module__V_46_46);
        }
#line 729 "hlds_out_module.m"
        {
#line 729 "hlds_out_module.m"
          mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_module__V_46_46);
        }
#line 729 "hlds_out_module.m"
        {
#line 729 "hlds_out_module.m"
          mercury__io__write_string_3_p_0((MR_String) " key\n");
        }
#line 730 "hlds_out_module.m"
        hlds__hlds_out__hlds_out_module__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__WriteKey_11, (MR_Integer) 1)));
#line 730 "hlds_out_module.m"
        {
#line 730 "hlds_out_module.m"
          hlds__hlds_out__hlds_out_module__func_0(((MR_Box) hlds__hlds_out__hlds_out_module__WriteKey_11), ((MR_Box) (hlds__hlds_out__hlds_out_module__Lang_9)), hlds__hlds_out__hlds_out_module__Key_12, ((MR_Box) ((MR_Integer) 0)), &hlds__hlds_out__hlds_out_module__conv1_STATE_VARIABLE_IO_29_29);
        }
#line 734 "hlds_out_module.m"
        if ((hlds__hlds_out__hlds_out_module__MaybeInst_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 732 "hlds_out_module.m"
          {
#line 732 "hlds_out_module.m"
            MR_String hlds__hlds_out__hlds_out_module__V_57_57;

#line 733 "hlds_out_module.m"
            {
#line 733 "hlds_out_module.m"
              mercury__io__write_string_3_p_0((MR_String) "Entry ");
            }
#line 733 "hlds_out_module.m"
            {
#line 733 "hlds_out_module.m"
              mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(hlds__hlds_out__hlds_out_module__V_52_52, *hlds__hlds_out__hlds_out_module__STATE_VARIABLE_N_18, &hlds__hlds_out__hlds_out_module__V_57_57);
            }
#line 733 "hlds_out_module.m"
            {
#line 733 "hlds_out_module.m"
              mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_module__V_57_57);
            }
#line 733 "hlds_out_module.m"
            {
#line 733 "hlds_out_module.m"
              mercury__io__write_string_3_p_0((MR_String) " value UNKNOWN\n");
#line 733 "hlds_out_module.m"
              return;
            }
#line 732 "hlds_out_module.m"
          }
#line 734 "hlds_out_module.m"
        else
#line 735 "hlds_out_module.m"
          {
#line 735 "hlds_out_module.m"
            MR_Word hlds__hlds_out__hlds_out_module__TypeCtorInfo_14_85;
#line 735 "hlds_out_module.m"
            MR_Word hlds__hlds_out__hlds_out_module__Inst_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_module__MaybeInst_13, (MR_Integer) 0)));
#line 735 "hlds_out_module.m"
            MR_String hlds__hlds_out__hlds_out_module__V_68_68;
#line 735 "hlds_out_module.m"
            MR_Word hlds__hlds_out__hlds_out_module__InstTerm_81;
#line 735 "hlds_out_module.m"
            MR_Word hlds__hlds_out__hlds_out_module__VarSet_82;

#line 736 "hlds_out_module.m"
            {
#line 736 "hlds_out_module.m"
              mercury__io__write_string_3_p_0((MR_String) "Entry ");
            }
#line 736 "hlds_out_module.m"
            {
#line 736 "hlds_out_module.m"
              mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(hlds__hlds_out__hlds_out_module__V_52_52, *hlds__hlds_out__hlds_out_module__STATE_VARIABLE_N_18, &hlds__hlds_out__hlds_out_module__V_68_68);
            }
#line 736 "hlds_out_module.m"
            {
#line 736 "hlds_out_module.m"
              mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_module__V_68_68);
            }
#line 736 "hlds_out_module.m"
            {
#line 736 "hlds_out_module.m"
              mercury__io__write_string_3_p_0((MR_String) " value:\n");
            }
#line 867 "hlds_out_module.m"
            {
#line 867 "hlds_out_module.m"
              hlds__hlds_out__hlds_out_module__InstTerm_81 = hlds__hlds_out__hlds_out_mode__inst_to_term_2_f_0(hlds__hlds_out__hlds_out_module__Lang_9, hlds__hlds_out__hlds_out_module__Inst_16);
            }
#line 2160 "hlds.hlds_out.hlds_out_module.c"
            hlds__hlds_out__hlds_out_module__TypeCtorInfo_14_85 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 868 "hlds_out_module.m"
            {
#line 868 "hlds_out_module.m"
              mercury__varset__init_1_p_0(hlds__hlds_out__hlds_out_module__TypeCtorInfo_14_85, &hlds__hlds_out__hlds_out_module__VarSet_82);
            }
#line 869 "hlds_out_module.m"
            {
#line 869 "hlds_out_module.m"
              parse_tree__mercury_to_mercury__mercury_output_term_5_p_0(hlds__hlds_out__hlds_out_module__TypeCtorInfo_14_85, hlds__hlds_out__hlds_out_module__VarSet_82, (MR_Integer) 0, hlds__hlds_out__hlds_out_module__InstTerm_81);
            }
#line 738 "hlds_out_module.m"
            {
#line 738 "hlds_out_module.m"
              mercury__io__nl_2_p_0();
#line 738 "hlds_out_module.m"
              return;
            }
#line 735 "hlds_out_module.m"
          }
#line 728 "hlds_out_module.m"
      }
#line 740 "hlds_out_module.m"
    else
#line 740 "hlds_out_module.m"
      {
#line 740 "hlds_out_module.m"
      }
#line 725 "hlds_out_module.m"
  }
#line 721 "hlds_out_module.m"
}

#line 1163 "hlds_out_module.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_module__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_112_114_111_109_105_115_101_95_95_91_53_44_32_57_93_95_48_13_p_0_1(
#line 1163 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__closure_arg,
#line 1163 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_1,
#line 1163 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_2,
#line 1163 "hlds_out_module.m"
  MR_Box * hlds__hlds_out__hlds_out_module__wrapper_arg_3)
#line 1163 "hlds_out_module.m"
{
#line 1163 "hlds_out_module.m"
  {
#line 1163 "hlds_out_module.m"
    MR_Box hlds__hlds_out__hlds_out_module__closure = hlds__hlds_out__hlds_out_module__closure_arg;

#line 1163 "hlds_out_module.m"
    {
#line 1163 "hlds_out_module.m"
      hlds__hlds_out__hlds_out_module__IntroducedFrom__pred__write_promise__1163__1_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__closure, (MR_Integer) 3))), ((MR_Word) hlds__hlds_out__hlds_out_module__wrapper_arg_1));
#line 1163 "hlds_out_module.m"
      return;
    }
#line 1163 "hlds_out_module.m"
  }
#line 1163 "hlds_out_module.m"
}

#line 34 "hlds_out_module.m"
void MR_CALL 
hlds__hlds_out__hlds_out_module__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_112_114_111_109_105_115_101_95_95_91_53_44_32_57_93_95_48_13_p_0(
#line 34 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__Info_14,
#line 34 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__PromiseType_15,
#line 34 "hlds_out_module.m"
  MR_Integer hlds__hlds_out__hlds_out_module__Indent_16,
#line 34 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__ModuleInfo_17,
#line 34 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__VarSet_19,
#line 34 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__AppendVarNums_20,
#line 34 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__HeadVars_21,
#line 34 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__Clause_23,
#line 34 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__TypeQual_24)
#line 34 "hlds_out_module.m"
{
#line 1161 "hlds_out_module.m"
  {
#line 1161 "hlds_out_module.m"
    MR_bool hlds__hlds_out__hlds_out_module__succeeded;
#line 1161 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__PrintVar_26;
#line 1161 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__Goal_30;
#line 1161 "hlds_out_module.m"
    MR_Integer hlds__hlds_out__hlds_out_module__V_54_54;

#line 1163 "hlds_out_module.m"
    {
#line 1163 "hlds_out_module.m"
      hlds__hlds_out__hlds_out_module__PrintVar_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1163 "hlds_out_module.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__PrintVar_26, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_module_scalar_common_5[8]));
#line 1163 "hlds_out_module.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__PrintVar_26, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_module__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_112_114_111_109_105_115_101_95_95_91_53_44_32_57_93_95_48_13_p_0_1));
#line 1163 "hlds_out_module.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__PrintVar_26, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1163 "hlds_out_module.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__PrintVar_26, 3) = ((MR_Box) (hlds__hlds_out__hlds_out_module__VarSet_19));
#line 1163 "hlds_out_module.m"
    }
#line 1167 "hlds_out_module.m"
    {
#line 1167 "hlds_out_module.m"
      hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_module__Indent_16);
    }
#line 1175 "hlds_out_module.m"
#line 1175 "hlds_out_module.m"
    switch (hlds__hlds_out__hlds_out_module__PromiseType_15) {
#line 1175 "hlds_out_module.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1175 "hlds_out_module.m"
      case (MR_Integer) 0:
#line 1175 "hlds_out_module.m"
      case (MR_Integer) 2:
#line 1175 "hlds_out_module.m"
      case (MR_Integer) 1:
#line 1179 "hlds_out_module.m"
        {
#line 1180 "hlds_out_module.m"
          {
#line 1180 "hlds_out_module.m"
            mercury__io__write_string_3_p_0((MR_String) ":- all [");
          }
#line 1181 "hlds_out_module.m"
          {
#line 1181 "hlds_out_module.m"
            mercury__io__write_list_5_p_0((MR_Word) &hlds__hlds_out__hlds_out_module_scalar_common_1[0], hlds__hlds_out__hlds_out_module__HeadVars_21, (MR_String) ", ", hlds__hlds_out__hlds_out_module__PrintVar_26);
          }
#line 1182 "hlds_out_module.m"
          {
#line 1182 "hlds_out_module.m"
            mercury__io__write_string_3_p_0((MR_String) "]");
          }
#line 1183 "hlds_out_module.m"
          {
#line 1183 "hlds_out_module.m"
            parse_tree__mercury_to_mercury__mercury_output_newline_3_p_0(hlds__hlds_out__hlds_out_module__Indent_16);
          }
#line 1184 "hlds_out_module.m"
          {
#line 1184 "hlds_out_module.m"
            parse_tree__prog_out__write_promise_type_3_p_0(hlds__hlds_out__hlds_out_module__PromiseType_15);
          }
#line 1185 "hlds_out_module.m"
          {
#line 1185 "hlds_out_module.m"
            parse_tree__mercury_to_mercury__mercury_output_newline_3_p_0(hlds__hlds_out__hlds_out_module__Indent_16);
          }
#line 1186 "hlds_out_module.m"
          {
#line 1186 "hlds_out_module.m"
            mercury__io__write_string_3_p_0((MR_String) "(\n");
          }
#line 1179 "hlds_out_module.m"
        }
#line 1175 "hlds_out_module.m"
        break;
#line 1175 "hlds_out_module.m"
      case (MR_Integer) 3:
#line 1171 "hlds_out_module.m"
        {
#line 1172 "hlds_out_module.m"
          {
#line 1172 "hlds_out_module.m"
            mercury__io__write_string_3_p_0((MR_String) ":- promise all [");
          }
#line 1173 "hlds_out_module.m"
          {
#line 1173 "hlds_out_module.m"
            mercury__io__write_list_5_p_0((MR_Word) &hlds__hlds_out__hlds_out_module_scalar_common_1[0], hlds__hlds_out__hlds_out_module__HeadVars_21, (MR_String) ", ", hlds__hlds_out__hlds_out_module__PrintVar_26);
          }
#line 1174 "hlds_out_module.m"
          {
#line 1174 "hlds_out_module.m"
            mercury__io__write_string_3_p_0((MR_String) "] (\n");
          }
#line 1171 "hlds_out_module.m"
        }
#line 1175 "hlds_out_module.m"
        break;
#line 1175 "hlds_out_module.m"
    }
#line 1189 "hlds_out_module.m"
    {
#line 1189 "hlds_out_module.m"
      hlds__hlds_out__hlds_out_module__Goal_30 = hlds__hlds_clauses__clause_body_1_f_0(hlds__hlds_out__hlds_out_module__Clause_23);
    }
#line 1191 "hlds_out_module.m"
    hlds__hlds_out__hlds_out_module__V_54_54 = (hlds__hlds_out__hlds_out_module__Indent_16 + (MR_Integer) 1);
#line 1190 "hlds_out_module.m"
    {
#line 1190 "hlds_out_module.m"
      hlds__hlds_out__hlds_out_goal__do_write_goal_10_p_0(hlds__hlds_out__hlds_out_module__Info_14, hlds__hlds_out__hlds_out_module__Goal_30, hlds__hlds_out__hlds_out_module__ModuleInfo_17, hlds__hlds_out__hlds_out_module__VarSet_19, hlds__hlds_out__hlds_out_module__AppendVarNums_20, hlds__hlds_out__hlds_out_module__V_54_54, (MR_String) ").\n", hlds__hlds_out__hlds_out_module__TypeQual_24);
#line 1190 "hlds_out_module.m"
      return;
    }
#line 1161 "hlds_out_module.m"
  }
#line 34 "hlds_out_module.m"
}

#line 672 "hlds_out_module.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_module__IntroducedFrom__pred__write_inst_table__672__1_8_p_0(
#line 672 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__Lang_7,
#line 672 "hlds_out_module.m"
  MR_Integer hlds__hlds_out__hlds_out_module__Limit_9,
#line 672 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__HeadVar__3_102,
#line 672 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__HeadVar__4_172,
#line 672 "hlds_out_module.m"
  MR_Integer hlds__hlds_out__hlds_out_module__HeadVar__5_173,
#line 672 "hlds_out_module.m"
  MR_Integer * hlds__hlds_out__hlds_out_module__HeadVar__6_174)
#line 672 "hlds_out_module.m"
{
#line 672 "hlds_out_module.m"
  {
#line 672 "hlds_out_module.m"
    MR_bool hlds__hlds_out__hlds_out_module__succeeded;

#line 672 "hlds_out_module.m"
    {
#line 672 "hlds_out_module.m"
      hlds__hlds_out__hlds_out_module__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_107_101_121_95_109_97_121_98_101_95_105_110_115_116_95_95_91_49_93_95_48_8_p_0(hlds__hlds_out__hlds_out_module__Lang_7, hlds__hlds_out__hlds_out_module__Limit_9, hlds__hlds_out__hlds_out_module__HeadVar__3_102, hlds__hlds_out__hlds_out_module__HeadVar__4_172, hlds__hlds_out__hlds_out_module__HeadVar__5_173, hlds__hlds_out__hlds_out_module__HeadVar__6_174);
#line 672 "hlds_out_module.m"
      return;
    }
#line 672 "hlds_out_module.m"
  }
#line 672 "hlds_out_module.m"
}

#line 667 "hlds_out_module.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_module__IntroducedFrom__pred__write_inst_table__667__1_8_p_0(
#line 667 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__Lang_7,
#line 667 "hlds_out_module.m"
  MR_Integer hlds__hlds_out__hlds_out_module__Limit_9,
#line 667 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__HeadVar__3_91,
#line 667 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__HeadVar__4_161,
#line 667 "hlds_out_module.m"
  MR_Integer hlds__hlds_out__hlds_out_module__HeadVar__5_162,
#line 667 "hlds_out_module.m"
  MR_Integer * hlds__hlds_out__hlds_out_module__HeadVar__6_163)
#line 667 "hlds_out_module.m"
{
#line 667 "hlds_out_module.m"
  {
#line 667 "hlds_out_module.m"
    MR_bool hlds__hlds_out__hlds_out_module__succeeded;

#line 667 "hlds_out_module.m"
    {
#line 667 "hlds_out_module.m"
      hlds__hlds_out__hlds_out_module__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_107_101_121_95_109_97_121_98_101_95_105_110_115_116_95_95_91_49_93_95_48_8_p_0(hlds__hlds_out__hlds_out_module__Lang_7, hlds__hlds_out__hlds_out_module__Limit_9, hlds__hlds_out__hlds_out_module__HeadVar__3_91, hlds__hlds_out__hlds_out_module__HeadVar__4_161, hlds__hlds_out__hlds_out_module__HeadVar__5_162, hlds__hlds_out__hlds_out_module__HeadVar__6_163);
#line 667 "hlds_out_module.m"
      return;
    }
#line 667 "hlds_out_module.m"
  }
#line 667 "hlds_out_module.m"
}

#line 662 "hlds_out_module.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_module__IntroducedFrom__pred__write_inst_table__662__1_8_p_0(
#line 662 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__Lang_7,
#line 662 "hlds_out_module.m"
  MR_Integer hlds__hlds_out__hlds_out_module__Limit_9,
#line 662 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__HeadVar__3_80,
#line 662 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__HeadVar__4_150,
#line 662 "hlds_out_module.m"
  MR_Integer hlds__hlds_out__hlds_out_module__HeadVar__5_151,
#line 662 "hlds_out_module.m"
  MR_Integer * hlds__hlds_out__hlds_out_module__HeadVar__6_152)
#line 662 "hlds_out_module.m"
{
#line 662 "hlds_out_module.m"
  {
#line 662 "hlds_out_module.m"
    MR_bool hlds__hlds_out__hlds_out_module__succeeded;

#line 662 "hlds_out_module.m"
    {
#line 662 "hlds_out_module.m"
      hlds__hlds_out__hlds_out_module__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_107_101_121_95_109_97_121_98_101_95_105_110_115_116_95_100_101_116_95_95_91_49_93_95_48_8_p_0(hlds__hlds_out__hlds_out_module__Lang_7, hlds__hlds_out__hlds_out_module__Limit_9, hlds__hlds_out__hlds_out_module__HeadVar__3_80, hlds__hlds_out__hlds_out_module__HeadVar__4_150, hlds__hlds_out__hlds_out_module__HeadVar__5_151, hlds__hlds_out__hlds_out_module__HeadVar__6_152);
#line 662 "hlds_out_module.m"
      return;
    }
#line 662 "hlds_out_module.m"
  }
#line 662 "hlds_out_module.m"
}

#line 657 "hlds_out_module.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_module__IntroducedFrom__pred__write_inst_table__657__1_8_p_0(
#line 657 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__Lang_7,
#line 657 "hlds_out_module.m"
  MR_Integer hlds__hlds_out__hlds_out_module__Limit_9,
#line 657 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__HeadVar__3_69,
#line 657 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__HeadVar__4_139,
#line 657 "hlds_out_module.m"
  MR_Integer hlds__hlds_out__hlds_out_module__HeadVar__5_140,
#line 657 "hlds_out_module.m"
  MR_Integer * hlds__hlds_out__hlds_out_module__HeadVar__6_141)
#line 657 "hlds_out_module.m"
{
#line 657 "hlds_out_module.m"
  {
#line 657 "hlds_out_module.m"
    MR_bool hlds__hlds_out__hlds_out_module__succeeded;

#line 657 "hlds_out_module.m"
    {
#line 657 "hlds_out_module.m"
      hlds__hlds_out__hlds_out_module__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_107_101_121_95_109_97_121_98_101_95_105_110_115_116_95_100_101_116_95_95_91_49_93_95_48_8_p_0(hlds__hlds_out__hlds_out_module__Lang_7, hlds__hlds_out__hlds_out_module__Limit_9, hlds__hlds_out__hlds_out_module__HeadVar__3_69, hlds__hlds_out__hlds_out_module__HeadVar__4_139, hlds__hlds_out__hlds_out_module__HeadVar__5_140, hlds__hlds_out__hlds_out_module__HeadVar__6_141);
#line 657 "hlds_out_module.m"
      return;
    }
#line 657 "hlds_out_module.m"
  }
#line 657 "hlds_out_module.m"
}

#line 652 "hlds_out_module.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_module__IntroducedFrom__pred__write_inst_table__652__1_8_p_0(
#line 652 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__Lang_7,
#line 652 "hlds_out_module.m"
  MR_Integer hlds__hlds_out__hlds_out_module__Limit_9,
#line 652 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__HeadVar__3_58,
#line 652 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__HeadVar__4_128,
#line 652 "hlds_out_module.m"
  MR_Integer hlds__hlds_out__hlds_out_module__HeadVar__5_129,
#line 652 "hlds_out_module.m"
  MR_Integer * hlds__hlds_out__hlds_out_module__HeadVar__6_130)
#line 652 "hlds_out_module.m"
{
#line 652 "hlds_out_module.m"
  {
#line 652 "hlds_out_module.m"
    MR_bool hlds__hlds_out__hlds_out_module__succeeded;

#line 652 "hlds_out_module.m"
    {
#line 652 "hlds_out_module.m"
      hlds__hlds_out__hlds_out_module__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_107_101_121_95_109_97_121_98_101_95_105_110_115_116_95_95_91_49_93_95_48_8_p_0(hlds__hlds_out__hlds_out_module__Lang_7, hlds__hlds_out__hlds_out_module__Limit_9, hlds__hlds_out__hlds_out_module__HeadVar__3_58, hlds__hlds_out__hlds_out_module__HeadVar__4_128, hlds__hlds_out__hlds_out_module__HeadVar__5_129, hlds__hlds_out__hlds_out_module__HeadVar__6_130);
#line 652 "hlds_out_module.m"
      return;
    }
#line 652 "hlds_out_module.m"
  }
#line 652 "hlds_out_module.m"
}

#line 647 "hlds_out_module.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_module__IntroducedFrom__pred__write_inst_table__647__1_8_p_0(
#line 647 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__Lang_7,
#line 647 "hlds_out_module.m"
  MR_Integer hlds__hlds_out__hlds_out_module__Limit_9,
#line 647 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__HeadVar__3_47,
#line 647 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__HeadVar__4_116,
#line 647 "hlds_out_module.m"
  MR_Integer hlds__hlds_out__hlds_out_module__HeadVar__5_117,
#line 647 "hlds_out_module.m"
  MR_Integer * hlds__hlds_out__hlds_out_module__HeadVar__6_118)
#line 647 "hlds_out_module.m"
{
#line 647 "hlds_out_module.m"
  {
#line 647 "hlds_out_module.m"
    MR_bool hlds__hlds_out__hlds_out_module__succeeded;

#line 647 "hlds_out_module.m"
    {
#line 647 "hlds_out_module.m"
      hlds__hlds_out__hlds_out_module__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_107_101_121_95_109_97_121_98_101_95_105_110_115_116_95_100_101_116_95_95_91_49_93_95_48_8_p_0(hlds__hlds_out__hlds_out_module__Lang_7, hlds__hlds_out__hlds_out_module__Limit_9, hlds__hlds_out__hlds_out_module__HeadVar__3_47, hlds__hlds_out__hlds_out_module__HeadVar__4_116, hlds__hlds_out__hlds_out_module__HeadVar__5_117, hlds__hlds_out__hlds_out_module__HeadVar__6_118);
#line 647 "hlds_out_module.m"
      return;
    }
#line 647 "hlds_out_module.m"
  }
#line 647 "hlds_out_module.m"
}

#line 1163 "hlds_out_module.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_module__IntroducedFrom__pred__write_promise__1163__1_4_p_0(
#line 1163 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__VarSet_19,
#line 1163 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__HeadVar__2_33)
#line 1163 "hlds_out_module.m"
{
#line 1163 "hlds_out_module.m"
  {
#line 1163 "hlds_out_module.m"
    MR_bool hlds__hlds_out__hlds_out_module__succeeded;

#line 1164 "hlds_out_module.m"
    {
#line 1164 "hlds_out_module.m"
      mercury__term_io__write_variable_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__hlds_out__hlds_out_module__HeadVar__2_33, hlds__hlds_out__hlds_out_module__VarSet_19);
#line 1164 "hlds_out_module.m"
      return;
    }
#line 1163 "hlds_out_module.m"
  }
#line 1163 "hlds_out_module.m"
}

#line 1114 "hlds_out_module.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_1(
#line 1114 "hlds_out_module.m"
  void * hlds__hlds_out__hlds_out_module__env_ptr_arg)
#line 1114 "hlds_out_module.m"
{
#line 1114 "hlds_out_module.m"
  {
#line 1114 "hlds_out_module.m"
    struct hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_env_0_s * hlds__hlds_out__hlds_out_module__env_ptr = (struct hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_env_0_s *) hlds__hlds_out__hlds_out_module__env_ptr_arg;

#line 1114 "hlds_out_module.m"
    MR_builtin_longjmp((hlds__hlds_out__hlds_out_module__env_ptr)->hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_env_0__commit_0, 1);
#line 1114 "hlds_out_module.m"
  }
#line 1114 "hlds_out_module.m"
}

#line 1114 "hlds_out_module.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_3(
#line 1114 "hlds_out_module.m"
  void * hlds__hlds_out__hlds_out_module__env_ptr_arg)
#line 1114 "hlds_out_module.m"
{
#line 1114 "hlds_out_module.m"
  {
#line 1114 "hlds_out_module.m"
    struct hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_env_0_s * hlds__hlds_out__hlds_out_module__env_ptr = (struct hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_env_0_s *) hlds__hlds_out__hlds_out_module__env_ptr_arg;

#line 1114 "hlds_out_module.m"
    (hlds__hlds_out__hlds_out_module__env_ptr)->hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_env_0__DumpPredIdStr_36 = ((MR_String) (hlds__hlds_out__hlds_out_module__env_ptr)->hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_env_0__conv0_DumpPredIdStr_36);
#line 1114 "hlds_out_module.m"
    {
#line 1114 "hlds_out_module.m"
      hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_2(hlds__hlds_out__hlds_out_module__env_ptr);
#line 1114 "hlds_out_module.m"
      return;
    }
#line 1114 "hlds_out_module.m"
  }
#line 1114 "hlds_out_module.m"
}

#line 1114 "hlds_out_module.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_2(
#line 1114 "hlds_out_module.m"
  void * hlds__hlds_out__hlds_out_module__env_ptr_arg)
#line 1114 "hlds_out_module.m"
{
#line 1114 "hlds_out_module.m"
  {
#line 1114 "hlds_out_module.m"
    struct hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_env_0_s * hlds__hlds_out__hlds_out_module__env_ptr = (struct hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_env_0_s *) hlds__hlds_out__hlds_out_module__env_ptr_arg;

#line 1115 "hlds_out_module.m"
    {
#line 1115 "hlds_out_module.m"
      (hlds__hlds_out__hlds_out_module__env_ptr)->hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_env_0__succeeded = mercury__string__to_int_2_p_0((hlds__hlds_out__hlds_out_module__env_ptr)->hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_env_0__DumpPredIdStr_36, &(hlds__hlds_out__hlds_out_module__env_ptr)->hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_env_0__DumpPredId_37);
    }
#line 1114 "hlds_out_module.m"
    if ((hlds__hlds_out__hlds_out_module__env_ptr)->hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_env_0__succeeded)
#line 1114 "hlds_out_module.m"
      {
#line 1116 "hlds_out_module.m"
        (hlds__hlds_out__hlds_out_module__env_ptr)->hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_env_0__succeeded = ((hlds__hlds_out__hlds_out_module__env_ptr)->hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_env_0__PredIdInt_18 == (hlds__hlds_out__hlds_out_module__env_ptr)->hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_env_0__DumpPredId_37);
#line 1116 "hlds_out_module.m"
        if ((hlds__hlds_out__hlds_out_module__env_ptr)->hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_env_0__succeeded)
#line 1116 "hlds_out_module.m"
          {
#line 1116 "hlds_out_module.m"
            hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_1(hlds__hlds_out__hlds_out_module__env_ptr);
#line 1116 "hlds_out_module.m"
            return;
          }
#line 1114 "hlds_out_module.m"
      }
#line 1114 "hlds_out_module.m"
  }
#line 1114 "hlds_out_module.m"
}

#line 1114 "hlds_out_module.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_4(
#line 1114 "hlds_out_module.m"
  void * hlds__hlds_out__hlds_out_module__env_ptr_arg)
#line 1114 "hlds_out_module.m"
{
#line 1114 "hlds_out_module.m"
  {
#line 1114 "hlds_out_module.m"
    struct hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_env_0_s * hlds__hlds_out__hlds_out_module__env_ptr = (struct hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_env_0_s *) hlds__hlds_out__hlds_out_module__env_ptr_arg;

#line 1114 "hlds_out_module.m"
    if (MR_builtin_setjmp((hlds__hlds_out__hlds_out_module__env_ptr)->hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_env_0__commit_0) == 0)
#line 1114 "hlds_out_module.m"
      {
#line 1114 "hlds_out_module.m"
        {
#line 1114 "hlds_out_module.m"
          {
#line 1114 "hlds_out_module.m"
            mercury__list__member_2_p_1((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, &(hlds__hlds_out__hlds_out_module__env_ptr)->hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_env_0__conv0_DumpPredIdStr_36, (hlds__hlds_out__hlds_out_module__env_ptr)->hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_env_0__DumpPredIdStrs_16, hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_3, hlds__hlds_out__hlds_out_module__env_ptr);
          }
#line 1114 "hlds_out_module.m"
        }
#line 1114 "hlds_out_module.m"
        (hlds__hlds_out__hlds_out_module__env_ptr)->hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_env_0__succeeded = MR_FALSE;
#line 1114 "hlds_out_module.m"
      }
#line 1114 "hlds_out_module.m"
    else
#line 1114 "hlds_out_module.m"
      (hlds__hlds_out__hlds_out_module__env_ptr)->hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_env_0__succeeded = MR_TRUE;
#line 1114 "hlds_out_module.m"
  }
#line 1114 "hlds_out_module.m"
}

#line 1095 "hlds_out_module.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0(
#line 1095 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__Info_8,
#line 1095 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__Lang_9,
#line 1095 "hlds_out_module.m"
  MR_Integer hlds__hlds_out__hlds_out_module__Indent_10,
#line 1095 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__ModuleInfo_11,
#line 1095 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__HeadVar__5_5)
#line 1095 "hlds_out_module.m"
{
#line 1095 "hlds_out_module.m"
  {
#line 1095 "hlds_out_module.m"
    struct hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_env_0_s hlds__hlds_out__hlds_out_module__env;

#line 1098 "hlds_out_module.m"
    {
#line 1098 "hlds_out_module.m"
      MR_Word hlds__hlds_out__hlds_out_module__PredId_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__HeadVar__5_5, (MR_Integer) 0)));
#line 1098 "hlds_out_module.m"
      MR_Word hlds__hlds_out__hlds_out_module__PredInfo_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__HeadVar__5_5, (MR_Integer) 1)));
#line 1098 "hlds_out_module.m"
      MR_String hlds__hlds_out__hlds_out_module__DumpOptions_15 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__Info_8, (MR_Integer) 0)));
#line 1098 "hlds_out_module.m"
      MR_Word hlds__hlds_out__hlds_out_module__DumpPredNames_17;
#line 1099 "hlds_out_module.m"
      MR_String hlds__hlds_out__hlds_out_module__V_38_38 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__Info_8, (MR_Integer) 1)));
#line 1099 "hlds_out_module.m"
      MR_Word hlds__hlds_out__hlds_out_module__V_41_41;

#line 1099 "hlds_out_module.m"
      (hlds__hlds_out__hlds_out_module__env).hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_env_0__DumpPredIdStrs_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__Info_8, (MR_Integer) 2)));
#line 1099 "hlds_out_module.m"
      hlds__hlds_out__hlds_out_module__DumpPredNames_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__Info_8, (MR_Integer) 3)));
#line 1099 "hlds_out_module.m"
      hlds__hlds_out__hlds_out_module__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__Info_8, (MR_Integer) 4)));
#line 1102 "hlds_out_module.m"
      {
#line 1102 "hlds_out_module.m"
        hlds__hlds_pred__pred_id_to_int_2_p_0(hlds__hlds_out__hlds_out_module__PredId_12, &(hlds__hlds_out__hlds_out_module__env).hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_env_0__PredIdInt_18);
      }
#line 1107 "hlds_out_module.m"
      {
#line 1107 "hlds_out_module.m"
        MR_String hlds__hlds_out__hlds_out_module__V_19_19;
#line 1107 "hlds_out_module.m"
        MR_Word hlds__hlds_out__hlds_out_module__V_20_20;

#line 1107 "hlds_out_module.m"
        (hlds__hlds_out__hlds_out_module__env).hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_env_0__succeeded = ((MR_tag((MR_Word) (hlds__hlds_out__hlds_out_module__env).hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_env_0__DumpPredIdStrs_16)) == (MR_mktag((MR_Integer) 1)));
#line 1107 "hlds_out_module.m"
        if ((hlds__hlds_out__hlds_out_module__env).hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_env_0__succeeded)
#line 1107 "hlds_out_module.m"
          {
#line 1107 "hlds_out_module.m"
            hlds__hlds_out__hlds_out_module__V_19_19 = ((MR_String) (MR_hl_field(MR_mktag(1), (hlds__hlds_out__hlds_out_module__env).hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_env_0__DumpPredIdStrs_16, (MR_Integer) 0)));
#line 1107 "hlds_out_module.m"
            hlds__hlds_out__hlds_out_module__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), (hlds__hlds_out__hlds_out_module__env).hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_env_0__DumpPredIdStrs_16, (MR_Integer) 1)));
#line 1107 "hlds_out_module.m"
          }
#line 1107 "hlds_out_module.m"
      }
#line 1108 "hlds_out_module.m"
      if (!((hlds__hlds_out__hlds_out_module__env).hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_env_0__succeeded))
#line 1108 "hlds_out_module.m"
        {
#line 1108 "hlds_out_module.m"
          MR_String hlds__hlds_out__hlds_out_module__V_21_21;
#line 1108 "hlds_out_module.m"
          MR_Word hlds__hlds_out__hlds_out_module__V_22_22;

#line 1108 "hlds_out_module.m"
          (hlds__hlds_out__hlds_out_module__env).hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_env_0__succeeded = ((MR_tag((MR_Word) hlds__hlds_out__hlds_out_module__DumpPredNames_17)) == (MR_mktag((MR_Integer) 1)));
#line 1108 "hlds_out_module.m"
          if ((hlds__hlds_out__hlds_out_module__env).hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_env_0__succeeded)
#line 1108 "hlds_out_module.m"
            {
#line 1108 "hlds_out_module.m"
              hlds__hlds_out__hlds_out_module__V_21_21 = ((MR_String) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_module__DumpPredNames_17, (MR_Integer) 0)));
#line 1108 "hlds_out_module.m"
              hlds__hlds_out__hlds_out_module__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_module__DumpPredNames_17, (MR_Integer) 1)));
#line 1108 "hlds_out_module.m"
            }
#line 1108 "hlds_out_module.m"
        }
#line 1127 "hlds_out_module.m"
      if ((hlds__hlds_out__hlds_out_module__env).hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_env_0__succeeded)
#line 1124 "hlds_out_module.m"
        {
#line 1114 "hlds_out_module.m"
          {
#line 1114 "hlds_out_module.m"
            hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_4(&hlds__hlds_out__hlds_out_module__env);
          }
#line 1118 "hlds_out_module.m"
          if (!((hlds__hlds_out__hlds_out_module__env).hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_env_0__succeeded))
#line 1119 "hlds_out_module.m"
            {
#line 1119 "hlds_out_module.m"
              MR_String hlds__hlds_out__hlds_out_module__PredName_25;

#line 1119 "hlds_out_module.m"
              {
#line 1119 "hlds_out_module.m"
                hlds__hlds_out__hlds_out_module__PredName_25 = hlds__hlds_pred__pred_info_name_1_f_0(hlds__hlds_out__hlds_out_module__PredInfo_13);
              }
#line 1120 "hlds_out_module.m"
              {
#line 1120 "hlds_out_module.m"
                (hlds__hlds_out__hlds_out_module__env).hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_env_0__succeeded = mercury__list__member_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) (hlds__hlds_out__hlds_out_module__PredName_25)), hlds__hlds_out__hlds_out_module__DumpPredNames_17);
              }
#line 1119 "hlds_out_module.m"
            }
#line 1124 "hlds_out_module.m"
          if ((hlds__hlds_out__hlds_out_module__env).hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_env_0__succeeded)
#line 1123 "hlds_out_module.m"
            {
#line 1123 "hlds_out_module.m"
              hlds__hlds_out__hlds_out_pred__write_pred_8_p_0(hlds__hlds_out__hlds_out_module__Info_8, hlds__hlds_out__hlds_out_module__Lang_9, hlds__hlds_out__hlds_out_module__Indent_10, hlds__hlds_out__hlds_out_module__ModuleInfo_11, hlds__hlds_out__hlds_out_module__PredId_12, hlds__hlds_out__hlds_out_module__PredInfo_13);
#line 1123 "hlds_out_module.m"
              return;
            }
#line 1124 "hlds_out_module.m"
          else
#line 1124 "hlds_out_module.m"
            {
#line 1124 "hlds_out_module.m"
            }
#line 1124 "hlds_out_module.m"
        }
#line 1127 "hlds_out_module.m"
      else
#line 1150 "hlds_out_module.m"
        {
#line 1130 "hlds_out_module.m"
          {
#line 1130 "hlds_out_module.m"
            (hlds__hlds_out__hlds_out_module__env).hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_env_0__succeeded = mercury__string__contains_char_2_p_0(hlds__hlds_out__hlds_out_module__DumpOptions_15, (MR_Char) 73);
          }
#line 1130 "hlds_out_module.m"
          (hlds__hlds_out__hlds_out_module__env).hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_env_0__succeeded = !((hlds__hlds_out__hlds_out_module__env).hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_env_0__succeeded);
#line 1130 "hlds_out_module.m"
          if ((hlds__hlds_out__hlds_out_module__env).hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_env_0__succeeded)
#line 1131 "hlds_out_module.m"
            {
#line 1131 "hlds_out_module.m"
              (hlds__hlds_out__hlds_out_module__env).hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_env_0__succeeded = hlds__hlds_pred__pred_info_is_imported_1_p_0(hlds__hlds_out__hlds_out_module__PredInfo_13);
            }
#line 1132 "hlds_out_module.m"
          if (!((hlds__hlds_out__hlds_out_module__env).hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_env_0__succeeded))
#line 1132 "hlds_out_module.m"
            {
#line 1135 "hlds_out_module.m"
              {
#line 1135 "hlds_out_module.m"
                MR_Word hlds__hlds_out__hlds_out_module__ProcIds_26;
#line 1135 "hlds_out_module.m"
                MR_Integer hlds__hlds_out__hlds_out_module__ProcId_27;
#line 1135 "hlds_out_module.m"
                MR_Word hlds__hlds_out__hlds_out_module__V_33_33;
#line 1135 "hlds_out_module.m"
                MR_Integer hlds__hlds_out__hlds_out_module__V_52_52;

#line 1135 "hlds_out_module.m"
                {
#line 1135 "hlds_out_module.m"
                  (hlds__hlds_out__hlds_out_module__env).hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_env_0__succeeded = mercury__string__contains_char_2_p_0(hlds__hlds_out__hlds_out_module__DumpOptions_15, (MR_Char) 73);
                }
#line 1135 "hlds_out_module.m"
                (hlds__hlds_out__hlds_out_module__env).hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_env_0__succeeded = !((hlds__hlds_out__hlds_out_module__env).hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_env_0__succeeded);
#line 1135 "hlds_out_module.m"
                if ((hlds__hlds_out__hlds_out_module__env).hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_env_0__succeeded)
#line 1135 "hlds_out_module.m"
                  {
#line 1136 "hlds_out_module.m"
                    {
#line 1136 "hlds_out_module.m"
                      (hlds__hlds_out__hlds_out_module__env).hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_env_0__succeeded = hlds__hlds_pred__pred_info_is_pseudo_imported_1_p_0(hlds__hlds_out__hlds_out_module__PredInfo_13);
                    }
#line 1135 "hlds_out_module.m"
                    if ((hlds__hlds_out__hlds_out_module__env).hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_env_0__succeeded)
#line 1135 "hlds_out_module.m"
                      {
#line 1137 "hlds_out_module.m"
                        {
#line 1137 "hlds_out_module.m"
                          hlds__hlds_out__hlds_out_module__ProcIds_26 = hlds__hlds_pred__pred_info_procids_1_f_0(hlds__hlds_out__hlds_out_module__PredInfo_13);
                        }
#line 1138 "hlds_out_module.m"
                        {
#line 1138 "hlds_out_module.m"
                          hlds__hlds_pred__in_in_unification_proc_id_1_p_0(&hlds__hlds_out__hlds_out_module__ProcId_27);
                        }
#line 1139 "hlds_out_module.m"
                        (hlds__hlds_out__hlds_out_module__env).hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_env_0__succeeded = ((MR_tag((MR_Word) hlds__hlds_out__hlds_out_module__ProcIds_26)) == (MR_mktag((MR_Integer) 1)));
#line 1139 "hlds_out_module.m"
                        if ((hlds__hlds_out__hlds_out_module__env).hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_env_0__succeeded)
#line 1139 "hlds_out_module.m"
                          {
#line 1139 "hlds_out_module.m"
                            hlds__hlds_out__hlds_out_module__V_52_52 = ((MR_Integer) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_module__ProcIds_26, (MR_Integer) 0)));
#line 1139 "hlds_out_module.m"
                            hlds__hlds_out__hlds_out_module__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_module__ProcIds_26, (MR_Integer) 1)));
#line 1139 "hlds_out_module.m"
                            (hlds__hlds_out__hlds_out_module__env).hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_env_0__succeeded = (hlds__hlds_out__hlds_out_module__ProcId_27 == hlds__hlds_out__hlds_out_module__V_52_52);
#line 1135 "hlds_out_module.m"
                            if ((hlds__hlds_out__hlds_out_module__env).hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_env_0__succeeded)
#line 1139 "hlds_out_module.m"
                              (hlds__hlds_out__hlds_out_module__env).hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_env_0__succeeded = (hlds__hlds_out__hlds_out_module__V_33_33 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1139 "hlds_out_module.m"
                          }
#line 1135 "hlds_out_module.m"
                      }
#line 1135 "hlds_out_module.m"
                  }
#line 1135 "hlds_out_module.m"
              }
#line 1132 "hlds_out_module.m"
              if (!((hlds__hlds_out__hlds_out_module__env).hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_env_0__succeeded))
#line 1145 "hlds_out_module.m"
                {
#line 1145 "hlds_out_module.m"
                  {
#line 1145 "hlds_out_module.m"
                    (hlds__hlds_out__hlds_out_module__env).hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_env_0__succeeded = mercury__string__contains_char_2_p_0(hlds__hlds_out__hlds_out_module__DumpOptions_15, (MR_Char) 85);
                  }
#line 1145 "hlds_out_module.m"
                  (hlds__hlds_out__hlds_out_module__env).hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_env_0__succeeded = !((hlds__hlds_out__hlds_out_module__env).hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_env_0__succeeded);
#line 1145 "hlds_out_module.m"
                  if ((hlds__hlds_out__hlds_out_module__env).hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_env_0__succeeded)
#line 1146 "hlds_out_module.m"
                    {
#line 1146 "hlds_out_module.m"
                      (hlds__hlds_out__hlds_out_module__env).hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_env_0__succeeded = hlds__hlds_pred__is_unify_or_compare_pred_1_p_0(hlds__hlds_out__hlds_out_module__PredInfo_13);
                    }
#line 1145 "hlds_out_module.m"
                }
#line 1132 "hlds_out_module.m"
            }
#line 1150 "hlds_out_module.m"
          if ((hlds__hlds_out__hlds_out_module__env).hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_env_0__succeeded)
#line 1150 "hlds_out_module.m"
            {
#line 1150 "hlds_out_module.m"
            }
#line 1150 "hlds_out_module.m"
          else
#line 1151 "hlds_out_module.m"
            {
#line 1151 "hlds_out_module.m"
              hlds__hlds_out__hlds_out_pred__write_pred_8_p_0(hlds__hlds_out__hlds_out_module__Info_8, hlds__hlds_out__hlds_out_module__Lang_9, hlds__hlds_out__hlds_out_module__Indent_10, hlds__hlds_out__hlds_out_module__ModuleInfo_11, hlds__hlds_out__hlds_out_module__PredId_12, hlds__hlds_out__hlds_out_module__PredInfo_13);
#line 1151 "hlds_out_module.m"
              return;
            }
#line 1150 "hlds_out_module.m"
        }
#line 1098 "hlds_out_module.m"
    }
#line 1095 "hlds_out_module.m"
  }
#line 1095 "hlds_out_module.m"
}

#line 1076 "hlds_out_module.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_module__compare_in_name_order_3_p_0(
#line 1076 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__HeadVar__1_1,
#line 1076 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__HeadVar__2_2,
#line 1076 "hlds_out_module.m"
  MR_Word * hlds__hlds_out__hlds_out_module__Result_8)
#line 1076 "hlds_out_module.m"
{
#line 1081 "hlds_out_module.m"
  {
#line 1081 "hlds_out_module.m"
    MR_bool hlds__hlds_out__hlds_out_module__succeeded;
#line 1081 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__PredIdA_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__HeadVar__1_1, (MR_Integer) 0)));
#line 1081 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__PredInfoA_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__HeadVar__1_1, (MR_Integer) 1)));
#line 1081 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__PredIdB_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__HeadVar__2_2, (MR_Integer) 0)));
#line 1081 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__PredInfoB_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__HeadVar__2_2, (MR_Integer) 1)));
#line 1081 "hlds_out_module.m"
    MR_String hlds__hlds_out__hlds_out_module__PredNameA_9;
#line 1081 "hlds_out_module.m"
    MR_String hlds__hlds_out__hlds_out_module__PredNameB_10;
#line 1081 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__NameResult_11;

#line 1082 "hlds_out_module.m"
    {
#line 1082 "hlds_out_module.m"
      hlds__hlds_pred__pred_info_get_name_2_p_0(hlds__hlds_out__hlds_out_module__PredInfoA_5, &hlds__hlds_out__hlds_out_module__PredNameA_9);
    }
#line 1083 "hlds_out_module.m"
    {
#line 1083 "hlds_out_module.m"
      hlds__hlds_pred__pred_info_get_name_2_p_0(hlds__hlds_out__hlds_out_module__PredInfoB_7, &hlds__hlds_out__hlds_out_module__PredNameB_10);
    }
#line 1084 "hlds_out_module.m"
    {
#line 1084 "hlds_out_module.m"
      mercury__private_builtin__builtin_compare_string_3_p_0(&hlds__hlds_out__hlds_out_module__NameResult_11, hlds__hlds_out__hlds_out_module__PredNameA_9, hlds__hlds_out__hlds_out_module__PredNameB_10);
    }
#line 1090 "hlds_out_module.m"
#line 1090 "hlds_out_module.m"
    switch (hlds__hlds_out__hlds_out_module__NameResult_11) {
#line 1090 "hlds_out_module.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1090 "hlds_out_module.m"
      case (MR_Integer) 1:
#line 1090 "hlds_out_module.m"
      case (MR_Integer) 2:
#line 1089 "hlds_out_module.m"
        *hlds__hlds_out__hlds_out_module__Result_8 = hlds__hlds_out__hlds_out_module__NameResult_11;
#line 1090 "hlds_out_module.m"
        break;
#line 1090 "hlds_out_module.m"
      case (MR_Integer) 0:
#line 1092 "hlds_out_module.m"
        {
#line 1092 "hlds_out_module.m"
          hlds__hlds_pred____Compare____pred_id_0_0(hlds__hlds_out__hlds_out_module__Result_8, hlds__hlds_out__hlds_out_module__PredIdA_4, hlds__hlds_out__hlds_out_module__PredIdB_6);
#line 1092 "hlds_out_module.m"
          return;
        }
#line 1090 "hlds_out_module.m"
        break;
#line 1090 "hlds_out_module.m"
    }
#line 1081 "hlds_out_module.m"
  }
#line 1076 "hlds_out_module.m"
}

#line 1073 "hlds_out_module.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_preds_7_p_0_2(
#line 1073 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__closure_arg,
#line 1073 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_1,
#line 1073 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_2,
#line 1073 "hlds_out_module.m"
  MR_Box * hlds__hlds_out__hlds_out_module__wrapper_arg_3)
#line 1073 "hlds_out_module.m"
{
#line 1073 "hlds_out_module.m"
  {
#line 1073 "hlds_out_module.m"
    MR_Box hlds__hlds_out__hlds_out_module__closure = hlds__hlds_out__hlds_out_module__closure_arg;

#line 1073 "hlds_out_module.m"
    {
#line 1073 "hlds_out_module.m"
      hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__closure, (MR_Integer) 4))), ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__closure, (MR_Integer) 6))), ((MR_Word) hlds__hlds_out__hlds_out_module__wrapper_arg_1));
#line 1073 "hlds_out_module.m"
      return;
    }
#line 1073 "hlds_out_module.m"
  }
#line 1073 "hlds_out_module.m"
}

#line 1071 "hlds_out_module.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_preds_7_p_0_1(
#line 1071 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__closure_arg,
#line 1071 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_1,
#line 1071 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_2,
#line 1071 "hlds_out_module.m"
  MR_Box * hlds__hlds_out__hlds_out_module__wrapper_arg_3)
#line 1071 "hlds_out_module.m"
{
#line 1071 "hlds_out_module.m"
  {
#line 1071 "hlds_out_module.m"
    MR_Box hlds__hlds_out__hlds_out_module__closure = hlds__hlds_out__hlds_out_module__closure_arg;
#line 1071 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__conv0_Result_8;

#line 1071 "hlds_out_module.m"
    {
#line 1071 "hlds_out_module.m"
      hlds__hlds_out__hlds_out_module__compare_in_name_order_3_p_0(((MR_Word) hlds__hlds_out__hlds_out_module__wrapper_arg_1), ((MR_Word) hlds__hlds_out__hlds_out_module__wrapper_arg_2), &hlds__hlds_out__hlds_out_module__conv0_Result_8);
    }
#line 1071 "hlds_out_module.m"
    *hlds__hlds_out__hlds_out_module__wrapper_arg_3 = ((MR_Box) (hlds__hlds_out__hlds_out_module__conv0_Result_8));
#line 1071 "hlds_out_module.m"
  }
#line 1071 "hlds_out_module.m"
}

#line 1056 "hlds_out_module.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_preds_7_p_0(
#line 1056 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__Info_8,
#line 1056 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__Lang_9,
#line 1056 "hlds_out_module.m"
  MR_Integer hlds__hlds_out__hlds_out_module__Indent_10,
#line 1056 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__ModuleInfo_11,
#line 1056 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__PredTable_12)
#line 1056 "hlds_out_module.m"
{
#line 1059 "hlds_out_module.m"
  {
#line 1059 "hlds_out_module.m"
    MR_bool hlds__hlds_out__hlds_out_module__succeeded;
#line 1059 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__PredIdsInfos_14;
#line 1059 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__Globals_15;
#line 1059 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__NameOrder_16;
#line 1059 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__PrintPredIdsInfos_17;
#line 1059 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__V_25_25;
#line 1073 "hlds_out_module.m"
    MR_Box hlds__hlds_out__hlds_out_module__conv1_STATE_VARIABLE_IO_19;

#line 1060 "hlds_out_module.m"
    {
#line 1060 "hlds_out_module.m"
      mercury__io__write_string_3_p_0((MR_String) "%-------- Predicates --------\n\n");
    }
#line 1061 "hlds_out_module.m"
    {
#line 1061 "hlds_out_module.m"
      hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_module__Indent_10);
    }
#line 1062 "hlds_out_module.m"
    {
#line 1062 "hlds_out_module.m"
      mercury__map__to_assoc_list_2_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0, hlds__hlds_out__hlds_out_module__PredTable_12, &hlds__hlds_out__hlds_out_module__PredIdsInfos_14);
    }
#line 1063 "hlds_out_module.m"
    {
#line 1063 "hlds_out_module.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(hlds__hlds_out__hlds_out_module__ModuleInfo_11, &hlds__hlds_out__hlds_out_module__Globals_15);
    }
#line 1064 "hlds_out_module.m"
    {
#line 1064 "hlds_out_module.m"
      libs__globals__lookup_bool_option_3_p_0(hlds__hlds_out__hlds_out_module__Globals_15, (MR_Integer) 149, &hlds__hlds_out__hlds_out_module__NameOrder_16);
    }
#line 1069 "hlds_out_module.m"
#line 1069 "hlds_out_module.m"
    switch (hlds__hlds_out__hlds_out_module__NameOrder_16) {
#line 1069 "hlds_out_module.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1069 "hlds_out_module.m"
      case (MR_Integer) 0:
#line 1068 "hlds_out_module.m"
        hlds__hlds_out__hlds_out_module__PrintPredIdsInfos_17 = hlds__hlds_out__hlds_out_module__PredIdsInfos_14;
#line 1069 "hlds_out_module.m"
        break;
#line 1069 "hlds_out_module.m"
      case (MR_Integer) 1:
#line 1070 "hlds_out_module.m"
        {
#line 1071 "hlds_out_module.m"
          {
#line 1071 "hlds_out_module.m"
            mercury__list__sort_3_p_0((MR_Word) &hlds__hlds_out__hlds_out_module_scalar_common_2[10], (MR_Word) &hlds__hlds_out__hlds_out_module_scalar_common_2[23], hlds__hlds_out__hlds_out_module__PredIdsInfos_14, &hlds__hlds_out__hlds_out_module__PrintPredIdsInfos_17);
          }
#line 1070 "hlds_out_module.m"
        }
#line 1069 "hlds_out_module.m"
        break;
#line 1069 "hlds_out_module.m"
    }
#line 1073 "hlds_out_module.m"
    {
#line 1073 "hlds_out_module.m"
      hlds__hlds_out__hlds_out_module__V_25_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 1073 "hlds_out_module.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__V_25_25, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_module_scalar_common_8[0]));
#line 1073 "hlds_out_module.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__V_25_25, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_module__write_preds_7_p_0_2));
#line 1073 "hlds_out_module.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__V_25_25, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 1073 "hlds_out_module.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__V_25_25, 3) = ((MR_Box) (hlds__hlds_out__hlds_out_module__Info_8));
#line 1073 "hlds_out_module.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__V_25_25, 4) = ((MR_Box) (hlds__hlds_out__hlds_out_module__Lang_9));
#line 1073 "hlds_out_module.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__V_25_25, 5) = ((MR_Box) (hlds__hlds_out__hlds_out_module__Indent_10));
#line 1073 "hlds_out_module.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__V_25_25, 6) = ((MR_Box) (hlds__hlds_out__hlds_out_module__ModuleInfo_11));
#line 1073 "hlds_out_module.m"
    }
#line 1073 "hlds_out_module.m"
    {
#line 1073 "hlds_out_module.m"
      mercury__list__foldl_4_p_2((MR_Word) &hlds__hlds_out__hlds_out_module_scalar_common_2[10], (MR_Word) &mercury__io__io__type_ctor_info_state_0, hlds__hlds_out__hlds_out_module__V_25_25, hlds__hlds_out__hlds_out_module__PrintPredIdsInfos_17, ((MR_Box) ((MR_Integer) 0)), &hlds__hlds_out__hlds_out_module__conv1_STATE_VARIABLE_IO_19);
    }
#line 1059 "hlds_out_module.m"
  }
#line 1056 "hlds_out_module.m"
}

#line 1030 "hlds_out_module.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_arg_tabling_methods_4_p_0(
#line 1030 "hlds_out_module.m"
  MR_String hlds__hlds_out__hlds_out_module__HeadVar__1_1,
#line 1030 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__HeadVar__2_2)
#line 1030 "hlds_out_module.m"
{
#line 1033 "hlds_out_module.m"
  while (MR_TRUE)
#line 1033 "hlds_out_module.m"
    {
#line 1033 "hlds_out_module.m"
      /* tailcall optimized into a loop */
#line 1033 "hlds_out_module.m"
      {
#line 1033 "hlds_out_module.m"
        MR_bool hlds__hlds_out__hlds_out_module__succeeded;

#line 1033 "hlds_out_module.m"
        if ((hlds__hlds_out__hlds_out_module__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1033 "hlds_out_module.m"
          {
#line 1033 "hlds_out_module.m"
          }
#line 1033 "hlds_out_module.m"
        else
#line 1034 "hlds_out_module.m"
          {
#line 1034 "hlds_out_module.m"
            MR_Word hlds__hlds_out__hlds_out_module__MaybeMethod_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_module__HeadVar__2_2, (MR_Integer) 0)));
#line 1034 "hlds_out_module.m"
            MR_Word hlds__hlds_out__hlds_out_module__MaybeMethods_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_module__HeadVar__2_2, (MR_Integer) 1)));

#line 1035 "hlds_out_module.m"
            {
#line 1035 "hlds_out_module.m"
              mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_module__HeadVar__1_1);
            }
#line 1039 "hlds_out_module.m"
            if ((hlds__hlds_out__hlds_out_module__MaybeMethod_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1037 "hlds_out_module.m"
              {
#line 1038 "hlds_out_module.m"
                {
#line 1038 "hlds_out_module.m"
                  mercury__io__write_string_3_p_0((MR_String) "output");
                }
#line 1037 "hlds_out_module.m"
              }
#line 1039 "hlds_out_module.m"
            else
#line 1039 "hlds_out_module.m"
              {
#line 1039 "hlds_out_module.m"
                MR_Word hlds__hlds_out__hlds_out_module__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_module__MaybeMethod_10, (MR_Integer) 0)));

#line 1039 "hlds_out_module.m"
#line 1039 "hlds_out_module.m"
                switch (hlds__hlds_out__hlds_out_module__V_29_29) {
#line 1039 "hlds_out_module.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 1039 "hlds_out_module.m"
                  case (MR_Integer) 1:
#line 1043 "hlds_out_module.m"
                    {
#line 1044 "hlds_out_module.m"
                      {
#line 1044 "hlds_out_module.m"
                        mercury__io__write_string_3_p_0((MR_String) "addr");
                      }
#line 1043 "hlds_out_module.m"
                    }
#line 1039 "hlds_out_module.m"
                    break;
#line 1039 "hlds_out_module.m"
                  case (MR_Integer) 2:
#line 1046 "hlds_out_module.m"
                    {
#line 1047 "hlds_out_module.m"
                      {
#line 1047 "hlds_out_module.m"
                        mercury__io__write_string_3_p_0((MR_String) "promise_implied");
                      }
#line 1046 "hlds_out_module.m"
                    }
#line 1039 "hlds_out_module.m"
                    break;
#line 1039 "hlds_out_module.m"
                  case (MR_Integer) 0:
#line 1040 "hlds_out_module.m"
                    {
#line 1041 "hlds_out_module.m"
                      {
#line 1041 "hlds_out_module.m"
                        mercury__io__write_string_3_p_0((MR_String) "value");
                      }
#line 1040 "hlds_out_module.m"
                    }
#line 1039 "hlds_out_module.m"
                    break;
#line 1039 "hlds_out_module.m"
                }
#line 1039 "hlds_out_module.m"
              }
#line 1049 "hlds_out_module.m"
            /* direct tailcall eliminated */
#line 1049 "hlds_out_module.m"
            {
#line 1049 "hlds_out_module.m"
              MR_Word hlds__hlds_out__hlds_out_module__HeadVar__2__tmp_copy_2 = hlds__hlds_out__hlds_out_module__MaybeMethods_11;

#line 1049 "hlds_out_module.m"
              hlds__hlds_out__hlds_out_module__HeadVar__2_2 = hlds__hlds_out__hlds_out_module__HeadVar__2__tmp_copy_2;
#line 1049 "hlds_out_module.m"
              hlds__hlds_out__hlds_out_module__HeadVar__1_1 = (MR_String) ", ";
#line 1049 "hlds_out_module.m"
            }
#line 1049 "hlds_out_module.m"
            continue;
#line 1034 "hlds_out_module.m"
          }
#line 1033 "hlds_out_module.m"
      }
#line 1033 "hlds_out_module.m"
      break;
#line 1033 "hlds_out_module.m"
    }
#line 1030 "hlds_out_module.m"
}

#line 975 "hlds_out_module.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_table_struct_info_4_p_0_1(
#line 975 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__closure_arg,
#line 975 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_1,
#line 975 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_2,
#line 975 "hlds_out_module.m"
  MR_Box * hlds__hlds_out__hlds_out_module__wrapper_arg_3)
#line 975 "hlds_out_module.m"
{
#line 975 "hlds_out_module.m"
  {
#line 975 "hlds_out_module.m"
    MR_Box hlds__hlds_out__hlds_out_module__closure = hlds__hlds_out__hlds_out_module__closure_arg;

#line 975 "hlds_out_module.m"
    {
#line 975 "hlds_out_module.m"
      hlds__hlds_out__hlds_out_pred__write_space_and_table_trie_step_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__closure, (MR_Integer) 3))), ((MR_Word) hlds__hlds_out__hlds_out_module__wrapper_arg_1));
#line 975 "hlds_out_module.m"
      return;
    }
#line 975 "hlds_out_module.m"
  }
#line 975 "hlds_out_module.m"
}

#line 960 "hlds_out_module.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_table_struct_info_4_p_0(
#line 960 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__ModuleInfo_5,
#line 960 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__HeadVar__2_2)
#line 960 "hlds_out_module.m"
{
#line 963 "hlds_out_module.m"
  {
#line 963 "hlds_out_module.m"
    MR_bool hlds__hlds_out__hlds_out_module__succeeded;
#line 963 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__TypeCtorInfo_87_87;
#line 963 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__TypeCtorInfo_88_88;
#line 963 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__PredProcId_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__HeadVar__2_2, (MR_Integer) 0)));
#line 963 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__TableStructInfo_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__HeadVar__2_2, (MR_Integer) 1)));
#line 963 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__ProcTableStructInfo_9;
#line 963 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__Attributes_10;
#line 963 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__TVarSet_12;
#line 963 "hlds_out_module.m"
    MR_Integer hlds__hlds_out__hlds_out_module__NumInputs_14;
#line 963 "hlds_out_module.m"
    MR_Integer hlds__hlds_out__hlds_out_module__NumOutputs_15;
#line 963 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__InputSteps_16;
#line 963 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__MaybeOutputSteps_17;
#line 963 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__ArgInfos_18;
#line 963 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__Strictness_21;
#line 963 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__SizeLimit_22;
#line 963 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__Stats_23;
#line 963 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__AllowReset_24;
#line 963 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__V_44_44;
#line 963 "hlds_out_module.m"
    MR_String hlds__hlds_out__hlds_out_module__V_95_95;
#line 963 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__V_101_101;
#line 963 "hlds_out_module.m"
    MR_String hlds__hlds_out__hlds_out_module__V_105_105;
#line 969 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module___ProcLabel_11;
#line 969 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module___Context_13;
#line 969 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module___EvalMethod_19;
#line 975 "hlds_out_module.m"
    MR_Box hlds__hlds_out__hlds_out_module__conv0_STATE_VARIABLE_IO_45_45;

#line 964 "hlds_out_module.m"
    {
#line 964 "hlds_out_module.m"
      mercury__io__nl_2_p_0();
    }
#line 965 "hlds_out_module.m"
    {
#line 965 "hlds_out_module.m"
      mercury__io__write_string_3_p_0((MR_String) "% table struct info for ");
    }
#line 966 "hlds_out_module.m"
    {
#line 966 "hlds_out_module.m"
      hlds__hlds_out__hlds_out_util__write_pred_proc_id_4_p_0(hlds__hlds_out__hlds_out_module__ModuleInfo_5, hlds__hlds_out__hlds_out_module__PredProcId_6);
    }
#line 967 "hlds_out_module.m"
    {
#line 967 "hlds_out_module.m"
      mercury__io__nl_2_p_0();
    }
#line 968 "hlds_out_module.m"
    hlds__hlds_out__hlds_out_module__ProcTableStructInfo_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__TableStructInfo_7, (MR_Integer) 0)));
#line 968 "hlds_out_module.m"
    hlds__hlds_out__hlds_out_module__Attributes_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__TableStructInfo_7, (MR_Integer) 1)));
#line 969 "hlds_out_module.m"
    hlds__hlds_out__hlds_out_module___ProcLabel_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__ProcTableStructInfo_9, (MR_Integer) 0)));
#line 969 "hlds_out_module.m"
    hlds__hlds_out__hlds_out_module__TVarSet_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__ProcTableStructInfo_9, (MR_Integer) 1)));
#line 969 "hlds_out_module.m"
    hlds__hlds_out__hlds_out_module___Context_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__ProcTableStructInfo_9, (MR_Integer) 2)));
#line 969 "hlds_out_module.m"
    hlds__hlds_out__hlds_out_module__NumInputs_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__ProcTableStructInfo_9, (MR_Integer) 3)));
#line 969 "hlds_out_module.m"
    hlds__hlds_out__hlds_out_module__NumOutputs_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__ProcTableStructInfo_9, (MR_Integer) 4)));
#line 969 "hlds_out_module.m"
    hlds__hlds_out__hlds_out_module__InputSteps_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__ProcTableStructInfo_9, (MR_Integer) 5)));
#line 969 "hlds_out_module.m"
    hlds__hlds_out__hlds_out_module__MaybeOutputSteps_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__ProcTableStructInfo_9, (MR_Integer) 6)));
#line 969 "hlds_out_module.m"
    hlds__hlds_out__hlds_out_module__ArgInfos_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__ProcTableStructInfo_9, (MR_Integer) 7)));
#line 969 "hlds_out_module.m"
    hlds__hlds_out__hlds_out_module___EvalMethod_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__ProcTableStructInfo_9, (MR_Integer) 8)));
#line 972 "hlds_out_module.m"
    {
#line 972 "hlds_out_module.m"
      mercury__io__write_string_3_p_0((MR_String) "% #inputs: ");
    }
#line 3515 "hlds.hlds_out.hlds_out_module.c"
    hlds__hlds_out__hlds_out_module__V_101_101 = (MR_Word) &hlds__hlds_out__hlds_out_module_scalar_common_7[0];
#line 972 "hlds_out_module.m"
    {
#line 972 "hlds_out_module.m"
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(hlds__hlds_out__hlds_out_module__V_101_101, hlds__hlds_out__hlds_out_module__NumInputs_14, &hlds__hlds_out__hlds_out_module__V_95_95);
    }
#line 972 "hlds_out_module.m"
    {
#line 972 "hlds_out_module.m"
      mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_module__V_95_95);
    }
#line 972 "hlds_out_module.m"
    {
#line 972 "hlds_out_module.m"
      mercury__io__write_string_3_p_0((MR_String) ", #outputs: ");
    }
#line 972 "hlds_out_module.m"
    {
#line 972 "hlds_out_module.m"
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(hlds__hlds_out__hlds_out_module__V_101_101, hlds__hlds_out__hlds_out_module__NumOutputs_15, &hlds__hlds_out__hlds_out_module__V_105_105);
    }
#line 972 "hlds_out_module.m"
    {
#line 972 "hlds_out_module.m"
      mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_module__V_105_105);
    }
#line 972 "hlds_out_module.m"
    {
#line 972 "hlds_out_module.m"
      mercury__io__write_string_3_p_0((MR_String) "\n");
    }
#line 974 "hlds_out_module.m"
    {
#line 974 "hlds_out_module.m"
      mercury__io__write_string_3_p_0((MR_String) "% input steps:");
    }
#line 975 "hlds_out_module.m"
    {
#line 975 "hlds_out_module.m"
      hlds__hlds_out__hlds_out_module__V_44_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 975 "hlds_out_module.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__V_44_44, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_module_scalar_common_5[7]));
#line 975 "hlds_out_module.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__V_44_44, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_module__write_table_struct_info_4_p_0_1));
#line 975 "hlds_out_module.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__V_44_44, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 975 "hlds_out_module.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__V_44_44, 3) = ((MR_Box) (hlds__hlds_out__hlds_out_module__TVarSet_12));
#line 975 "hlds_out_module.m"
    }
#line 3566 "hlds.hlds_out.hlds_out_module.c"
    hlds__hlds_out__hlds_out_module__TypeCtorInfo_87_87 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_table_step_desc_0;
#line 3568 "hlds.hlds_out.hlds_out_module.c"
    hlds__hlds_out__hlds_out_module__TypeCtorInfo_88_88 = (MR_Word) &mercury__io__io__type_ctor_info_state_0;
#line 975 "hlds_out_module.m"
    {
#line 975 "hlds_out_module.m"
      mercury__list__foldl_4_p_2(hlds__hlds_out__hlds_out_module__TypeCtorInfo_87_87, hlds__hlds_out__hlds_out_module__TypeCtorInfo_88_88, hlds__hlds_out__hlds_out_module__V_44_44, hlds__hlds_out__hlds_out_module__InputSteps_16, ((MR_Box) ((MR_Integer) 0)), &hlds__hlds_out__hlds_out_module__conv0_STATE_VARIABLE_IO_45_45);
    }
#line 976 "hlds_out_module.m"
    {
#line 976 "hlds_out_module.m"
      mercury__io__nl_2_p_0();
    }
#line 982 "hlds_out_module.m"
    if ((hlds__hlds_out__hlds_out_module__MaybeOutputSteps_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 983 "hlds_out_module.m"
      {
#line 984 "hlds_out_module.m"
        {
#line 984 "hlds_out_module.m"
          mercury__io__write_string_3_p_0((MR_String) "% no output steps");
        }
#line 983 "hlds_out_module.m"
      }
#line 982 "hlds_out_module.m"
    else
#line 978 "hlds_out_module.m"
      {
#line 978 "hlds_out_module.m"
        MR_Word hlds__hlds_out__hlds_out_module__OutputSteps_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_module__MaybeOutputSteps_17, (MR_Integer) 0)));
#line 980 "hlds_out_module.m"
        MR_Box hlds__hlds_out__hlds_out_module__conv1_STATE_VARIABLE_IO_52_52;

#line 979 "hlds_out_module.m"
        {
#line 979 "hlds_out_module.m"
          mercury__io__write_string_3_p_0((MR_String) "% output steps:");
        }
#line 980 "hlds_out_module.m"
        {
#line 980 "hlds_out_module.m"
          mercury__list__foldl_4_p_2(hlds__hlds_out__hlds_out_module__TypeCtorInfo_87_87, hlds__hlds_out__hlds_out_module__TypeCtorInfo_88_88, hlds__hlds_out__hlds_out_module__V_44_44, hlds__hlds_out__hlds_out_module__OutputSteps_20, ((MR_Box) ((MR_Integer) 0)), &hlds__hlds_out__hlds_out_module__conv1_STATE_VARIABLE_IO_52_52);
        }
#line 981 "hlds_out_module.m"
        {
#line 981 "hlds_out_module.m"
          mercury__io__nl_2_p_0();
        }
#line 978 "hlds_out_module.m"
      }
#line 986 "hlds_out_module.m"
    {
#line 986 "hlds_out_module.m"
      hlds__hlds_out__hlds_out_pred__write_table_arg_infos_4_p_0(hlds__hlds_out__hlds_out_module__TVarSet_12, hlds__hlds_out__hlds_out_module__ArgInfos_18);
    }
#line 988 "hlds_out_module.m"
    hlds__hlds_out__hlds_out_module__Strictness_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__Attributes_10, (MR_Integer) 0)));
#line 988 "hlds_out_module.m"
    hlds__hlds_out__hlds_out_module__SizeLimit_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__Attributes_10, (MR_Integer) 1)));
#line 988 "hlds_out_module.m"
    hlds__hlds_out__hlds_out_module__Stats_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__Attributes_10, (MR_Integer) 2)));
#line 988 "hlds_out_module.m"
    hlds__hlds_out__hlds_out_module__AllowReset_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__Attributes_10, (MR_Integer) 3)));
#line 992 "hlds_out_module.m"
#line 992 "hlds_out_module.m"
    switch (MR_tag((MR_Word) hlds__hlds_out__hlds_out_module__Strictness_21)) {
#line 992 "hlds_out_module.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 992 "hlds_out_module.m"
      case (MR_Integer) 0:
#line 992 "hlds_out_module.m"
#line 992 "hlds_out_module.m"
        switch (MR_unmkbody(hlds__hlds_out__hlds_out_module__Strictness_21)) {
#line 992 "hlds_out_module.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 992 "hlds_out_module.m"
          case (MR_Integer) 0:
#line 990 "hlds_out_module.m"
            {
#line 991 "hlds_out_module.m"
              {
#line 991 "hlds_out_module.m"
                mercury__io__write_string_3_p_0((MR_String) "% all strict\n");
              }
#line 990 "hlds_out_module.m"
            }
#line 992 "hlds_out_module.m"
            break;
#line 992 "hlds_out_module.m"
          case (MR_Integer) 1:
#line 993 "hlds_out_module.m"
            {
#line 994 "hlds_out_module.m"
              {
#line 994 "hlds_out_module.m"
                mercury__io__write_string_3_p_0((MR_String) "% all fast_loose\n");
              }
#line 993 "hlds_out_module.m"
            }
#line 992 "hlds_out_module.m"
            break;
#line 992 "hlds_out_module.m"
        }
#line 992 "hlds_out_module.m"
        break;
#line 992 "hlds_out_module.m"
      case (MR_Integer) 1:
#line 996 "hlds_out_module.m"
        {
#line 996 "hlds_out_module.m"
          MR_Word hlds__hlds_out__hlds_out_module__ArgMethods_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_module__Strictness_21, (MR_Integer) 0)));
#line 996 "hlds_out_module.m"
          MR_Word hlds__hlds_out__hlds_out_module__HiddenArgMethod_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_module__Strictness_21, (MR_Integer) 1)));

#line 997 "hlds_out_module.m"
          {
#line 997 "hlds_out_module.m"
            mercury__io__write_string_3_p_0((MR_String) "% specified [");
          }
#line 998 "hlds_out_module.m"
          {
#line 998 "hlds_out_module.m"
            hlds__hlds_out__hlds_out_module__write_arg_tabling_methods_4_p_0((MR_String) "", hlds__hlds_out__hlds_out_module__ArgMethods_25);
          }
#line 999 "hlds_out_module.m"
          {
#line 999 "hlds_out_module.m"
            mercury__io__write_string_3_p_0((MR_String) "]");
          }
#line 1003 "hlds_out_module.m"
#line 1003 "hlds_out_module.m"
          switch (hlds__hlds_out__hlds_out_module__HiddenArgMethod_26) {
#line 1003 "hlds_out_module.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 1003 "hlds_out_module.m"
            case (MR_Integer) 1:
#line 1004 "hlds_out_module.m"
              {
#line 1005 "hlds_out_module.m"
                {
#line 1005 "hlds_out_module.m"
                  mercury__io__write_string_3_p_0((MR_String) ", hidden args by addr\n");
                }
#line 1004 "hlds_out_module.m"
              }
#line 1003 "hlds_out_module.m"
              break;
#line 1003 "hlds_out_module.m"
            case (MR_Integer) 0:
#line 1001 "hlds_out_module.m"
              {
#line 1002 "hlds_out_module.m"
                {
#line 1002 "hlds_out_module.m"
                  mercury__io__write_string_3_p_0((MR_String) ", hidden args by value\n");
                }
#line 1001 "hlds_out_module.m"
              }
#line 1003 "hlds_out_module.m"
              break;
#line 1003 "hlds_out_module.m"
          }
#line 996 "hlds_out_module.m"
        }
#line 992 "hlds_out_module.m"
        break;
#line 992 "hlds_out_module.m"
    }
#line 1011 "hlds_out_module.m"
    if ((hlds__hlds_out__hlds_out_module__SizeLimit_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1009 "hlds_out_module.m"
      {
#line 1010 "hlds_out_module.m"
        {
#line 1010 "hlds_out_module.m"
          mercury__io__write_string_3_p_0((MR_String) "% no size limit\n");
        }
#line 1009 "hlds_out_module.m"
      }
#line 1011 "hlds_out_module.m"
    else
#line 1012 "hlds_out_module.m"
      {
#line 1012 "hlds_out_module.m"
        MR_Integer hlds__hlds_out__hlds_out_module__Limit_27 = ((MR_Integer) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_module__SizeLimit_22, (MR_Integer) 0)));
#line 1012 "hlds_out_module.m"
        MR_String hlds__hlds_out__hlds_out_module__V_116_116;

#line 1013 "hlds_out_module.m"
        {
#line 1013 "hlds_out_module.m"
          mercury__io__write_string_3_p_0((MR_String) "% size limit ");
        }
#line 1013 "hlds_out_module.m"
        {
#line 1013 "hlds_out_module.m"
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(hlds__hlds_out__hlds_out_module__V_101_101, hlds__hlds_out__hlds_out_module__Limit_27, &hlds__hlds_out__hlds_out_module__V_116_116);
        }
#line 1013 "hlds_out_module.m"
        {
#line 1013 "hlds_out_module.m"
          mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_module__V_116_116);
        }
#line 1013 "hlds_out_module.m"
        {
#line 1013 "hlds_out_module.m"
          mercury__io__write_string_3_p_0((MR_String) "\n");
        }
#line 1012 "hlds_out_module.m"
      }
#line 1018 "hlds_out_module.m"
#line 1018 "hlds_out_module.m"
    switch (hlds__hlds_out__hlds_out_module__Stats_23) {
#line 1018 "hlds_out_module.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1018 "hlds_out_module.m"
      case (MR_Integer) 1:
#line 1019 "hlds_out_module.m"
        {
#line 1020 "hlds_out_module.m"
          {
#line 1020 "hlds_out_module.m"
            mercury__io__write_string_3_p_0((MR_String) "% do not gather statistics\n");
          }
#line 1019 "hlds_out_module.m"
        }
#line 1018 "hlds_out_module.m"
        break;
#line 1018 "hlds_out_module.m"
      case (MR_Integer) 0:
#line 1016 "hlds_out_module.m"
        {
#line 1017 "hlds_out_module.m"
          {
#line 1017 "hlds_out_module.m"
            mercury__io__write_string_3_p_0((MR_String) "% gather statistics\n");
          }
#line 1016 "hlds_out_module.m"
        }
#line 1018 "hlds_out_module.m"
        break;
#line 1018 "hlds_out_module.m"
    }
#line 1025 "hlds_out_module.m"
#line 1025 "hlds_out_module.m"
    switch (hlds__hlds_out__hlds_out_module__AllowReset_24) {
#line 1025 "hlds_out_module.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1025 "hlds_out_module.m"
      case (MR_Integer) 0:
#line 1023 "hlds_out_module.m"
        {
#line 1024 "hlds_out_module.m"
          {
#line 1024 "hlds_out_module.m"
            mercury__io__write_string_3_p_0((MR_String) "% allow reset\n");
#line 1024 "hlds_out_module.m"
            return;
          }
#line 1023 "hlds_out_module.m"
        }
#line 1025 "hlds_out_module.m"
        break;
#line 1025 "hlds_out_module.m"
      case (MR_Integer) 1:
#line 1026 "hlds_out_module.m"
        {
#line 1027 "hlds_out_module.m"
          {
#line 1027 "hlds_out_module.m"
            mercury__io__write_string_3_p_0((MR_String) "% do not allow reset\n");
#line 1027 "hlds_out_module.m"
            return;
          }
#line 1026 "hlds_out_module.m"
        }
#line 1025 "hlds_out_module.m"
        break;
#line 1025 "hlds_out_module.m"
    }
#line 963 "hlds_out_module.m"
  }
#line 960 "hlds_out_module.m"
}

#line 957 "hlds_out_module.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_table_structs_4_p_0_1(
#line 957 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__closure_arg,
#line 957 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_1,
#line 957 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_2,
#line 957 "hlds_out_module.m"
  MR_Box * hlds__hlds_out__hlds_out_module__wrapper_arg_3)
#line 957 "hlds_out_module.m"
{
#line 957 "hlds_out_module.m"
  {
#line 957 "hlds_out_module.m"
    MR_Box hlds__hlds_out__hlds_out_module__closure = hlds__hlds_out__hlds_out_module__closure_arg;

#line 957 "hlds_out_module.m"
    {
#line 957 "hlds_out_module.m"
      hlds__hlds_out__hlds_out_module__write_table_struct_info_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__closure, (MR_Integer) 3))), ((MR_Word) hlds__hlds_out__hlds_out_module__wrapper_arg_1));
#line 957 "hlds_out_module.m"
      return;
    }
#line 957 "hlds_out_module.m"
  }
#line 957 "hlds_out_module.m"
}

#line 951 "hlds_out_module.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_table_structs_4_p_0(
#line 951 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__ModuleInfo_5,
#line 951 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__TableStructMap_6)
#line 951 "hlds_out_module.m"
{
#line 954 "hlds_out_module.m"
  {
#line 954 "hlds_out_module.m"
    MR_bool hlds__hlds_out__hlds_out_module__succeeded;
#line 954 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__TableStructs_8;
#line 954 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__V_13_13;
#line 957 "hlds_out_module.m"
    MR_Box hlds__hlds_out__hlds_out_module__conv0_STATE_VARIABLE_IO_14_14;

#line 955 "hlds_out_module.m"
    {
#line 955 "hlds_out_module.m"
      mercury__map__to_assoc_list_2_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_table_struct_info_0, hlds__hlds_out__hlds_out_module__TableStructMap_6, &hlds__hlds_out__hlds_out_module__TableStructs_8);
    }
#line 956 "hlds_out_module.m"
    {
#line 956 "hlds_out_module.m"
      mercury__io__write_string_3_p_0((MR_String) "%-------- Table structs --------\n");
    }
#line 957 "hlds_out_module.m"
    {
#line 957 "hlds_out_module.m"
      hlds__hlds_out__hlds_out_module__V_13_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 957 "hlds_out_module.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__V_13_13, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_module_scalar_common_5[6]));
#line 957 "hlds_out_module.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__V_13_13, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_module__write_table_structs_4_p_0_1));
#line 957 "hlds_out_module.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__V_13_13, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 957 "hlds_out_module.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__V_13_13, 3) = ((MR_Box) (hlds__hlds_out__hlds_out_module__ModuleInfo_5));
#line 957 "hlds_out_module.m"
    }
#line 957 "hlds_out_module.m"
    {
#line 957 "hlds_out_module.m"
      mercury__list__foldl_4_p_2((MR_Word) &hlds__hlds_out__hlds_out_module_scalar_common_2[9], (MR_Word) &mercury__io__io__type_ctor_info_state_0, hlds__hlds_out__hlds_out_module__V_13_13, hlds__hlds_out__hlds_out_module__TableStructs_8, ((MR_Box) ((MR_Integer) 0)), &hlds__hlds_out__hlds_out_module__conv0_STATE_VARIABLE_IO_14_14);
    }
#line 958 "hlds_out_module.m"
    {
#line 958 "hlds_out_module.m"
      mercury__io__nl_2_p_0();
#line 958 "hlds_out_module.m"
      return;
    }
#line 954 "hlds_out_module.m"
  }
#line 951 "hlds_out_module.m"
}

#line 923 "hlds_out_module.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_const_struct_args_4_p_0(
#line 923 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__HeadConstArg_5,
#line 923 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__TailConstArgs_6)
#line 923 "hlds_out_module.m"
{
#line 926 "hlds_out_module.m"
  while (MR_TRUE)
#line 926 "hlds_out_module.m"
    {
#line 926 "hlds_out_module.m"
      /* tailcall optimized into a loop */
#line 926 "hlds_out_module.m"
      {
#line 926 "hlds_out_module.m"
        MR_bool hlds__hlds_out__hlds_out_module__succeeded;

#line 927 "hlds_out_module.m"
        {
#line 927 "hlds_out_module.m"
          mercury__io__write_string_3_p_0((MR_String) "    ");
        }
#line 931 "hlds_out_module.m"
        if (((MR_tag((MR_Word) hlds__hlds_out__hlds_out_module__HeadConstArg_5)) == (MR_mktag((MR_Integer) 0))))
#line 929 "hlds_out_module.m"
          {
#line 929 "hlds_out_module.m"
            MR_Integer hlds__hlds_out__hlds_out_module__N_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__HeadConstArg_5, (MR_Integer) 0)));
#line 929 "hlds_out_module.m"
            MR_String hlds__hlds_out__hlds_out_module__V_38_38;

#line 930 "hlds_out_module.m"
            {
#line 930 "hlds_out_module.m"
              mercury__io__write_string_3_p_0((MR_String) "cs(");
            }
#line 930 "hlds_out_module.m"
            {
#line 930 "hlds_out_module.m"
              mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &hlds__hlds_out__hlds_out_module_scalar_common_7[0], hlds__hlds_out__hlds_out_module__N_8, &hlds__hlds_out__hlds_out_module__V_38_38);
            }
#line 930 "hlds_out_module.m"
            {
#line 930 "hlds_out_module.m"
              mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_module__V_38_38);
            }
#line 930 "hlds_out_module.m"
            {
#line 930 "hlds_out_module.m"
              mercury__io__write_string_3_p_0((MR_String) ")");
            }
#line 929 "hlds_out_module.m"
          }
#line 931 "hlds_out_module.m"
        else
#line 932 "hlds_out_module.m"
          {
#line 932 "hlds_out_module.m"
            MR_Word hlds__hlds_out__hlds_out_module__ConsId_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_module__HeadConstArg_5, (MR_Integer) 0)));
#line 932 "hlds_out_module.m"
            MR_Word hlds__hlds_out__hlds_out_module__Type_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_module__HeadConstArg_5, (MR_Integer) 1)));
#line 932 "hlds_out_module.m"
            MR_Word hlds__hlds_out__hlds_out_module__V_21_21;

#line 933 "hlds_out_module.m"
            {
#line 933 "hlds_out_module.m"
              parse_tree__mercury_to_mercury__mercury_output_cons_id_4_p_0((MR_Integer) 1, hlds__hlds_out__hlds_out_module__ConsId_9);
            }
#line 934 "hlds_out_module.m"
            {
#line 934 "hlds_out_module.m"
              mercury__io__write_string_3_p_0((MR_String) "\n        with type ");
            }
#line 935 "hlds_out_module.m"
            {
#line 935 "hlds_out_module.m"
              hlds__hlds_out__hlds_out_module__V_21_21 = mercury__varset__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0);
            }
#line 935 "hlds_out_module.m"
            {
#line 935 "hlds_out_module.m"
              parse_tree__mercury_to_mercury__mercury_output_type_5_p_0(hlds__hlds_out__hlds_out_module__V_21_21, (MR_Integer) 0, hlds__hlds_out__hlds_out_module__Type_10);
            }
#line 932 "hlds_out_module.m"
          }
#line 940 "hlds_out_module.m"
        if ((hlds__hlds_out__hlds_out_module__TailConstArgs_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 938 "hlds_out_module.m"
          {
#line 939 "hlds_out_module.m"
            {
#line 939 "hlds_out_module.m"
              mercury__io__write_string_3_p_0((MR_String) "\n");
#line 939 "hlds_out_module.m"
              return;
            }
#line 938 "hlds_out_module.m"
          }
#line 940 "hlds_out_module.m"
        else
#line 941 "hlds_out_module.m"
          {
#line 941 "hlds_out_module.m"
            MR_Word hlds__hlds_out__hlds_out_module__HeadTailConstArg_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_module__TailConstArgs_6, (MR_Integer) 0)));
#line 941 "hlds_out_module.m"
            MR_Word hlds__hlds_out__hlds_out_module__TailTailConstArgs_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_module__TailConstArgs_6, (MR_Integer) 1)));

#line 942 "hlds_out_module.m"
            {
#line 942 "hlds_out_module.m"
              mercury__io__write_string_3_p_0((MR_String) ",\n");
            }
#line 943 "hlds_out_module.m"
            /* direct tailcall eliminated */
#line 943 "hlds_out_module.m"
            {
#line 943 "hlds_out_module.m"
              MR_Word hlds__hlds_out__hlds_out_module__HeadConstArg__tmp_copy_5 = hlds__hlds_out__hlds_out_module__HeadTailConstArg_11;
#line 943 "hlds_out_module.m"
              MR_Word hlds__hlds_out__hlds_out_module__TailConstArgs__tmp_copy_6 = hlds__hlds_out__hlds_out_module__TailTailConstArgs_12;

#line 943 "hlds_out_module.m"
              hlds__hlds_out__hlds_out_module__TailConstArgs_6 = hlds__hlds_out__hlds_out_module__TailConstArgs__tmp_copy_6;
#line 943 "hlds_out_module.m"
              hlds__hlds_out__hlds_out_module__HeadConstArg_5 = hlds__hlds_out__hlds_out_module__HeadConstArg__tmp_copy_5;
#line 943 "hlds_out_module.m"
            }
#line 943 "hlds_out_module.m"
            continue;
#line 941 "hlds_out_module.m"
          }
#line 926 "hlds_out_module.m"
      }
#line 926 "hlds_out_module.m"
      break;
#line 926 "hlds_out_module.m"
    }
#line 923 "hlds_out_module.m"
}

#line 901 "hlds_out_module.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_const_struct_3_p_0(
#line 901 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__HeadVar__1_1)
#line 901 "hlds_out_module.m"
{
#line 903 "hlds_out_module.m"
  {
#line 903 "hlds_out_module.m"
    MR_bool hlds__hlds_out__hlds_out_module__succeeded;
#line 903 "hlds_out_module.m"
    MR_Integer hlds__hlds_out__hlds_out_module__N_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__HeadVar__1_1, (MR_Integer) 0)));
#line 903 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__ConstStruct_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__HeadVar__1_1, (MR_Integer) 1)));
#line 903 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__ConsId_7;
#line 903 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__ConstArgs_8;
#line 903 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__Type_9;
#line 903 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__Inst_10;
#line 903 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__V_30_30;
#line 903 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__V_39_39;
#line 903 "hlds_out_module.m"
    MR_String hlds__hlds_out__hlds_out_module__V_46_46;

#line 904 "hlds_out_module.m"
    {
#line 904 "hlds_out_module.m"
      mercury__io__write_string_3_p_0((MR_String) "\nconst_struct ");
    }
#line 904 "hlds_out_module.m"
    {
#line 904 "hlds_out_module.m"
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &hlds__hlds_out__hlds_out_module_scalar_common_7[0], hlds__hlds_out__hlds_out_module__N_4, &hlds__hlds_out__hlds_out_module__V_46_46);
    }
#line 904 "hlds_out_module.m"
    {
#line 904 "hlds_out_module.m"
      mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_module__V_46_46);
    }
#line 904 "hlds_out_module.m"
    {
#line 904 "hlds_out_module.m"
      mercury__io__write_string_3_p_0((MR_String) ":\n");
    }
#line 905 "hlds_out_module.m"
    hlds__hlds_out__hlds_out_module__ConsId_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__ConstStruct_5, (MR_Integer) 0)));
#line 905 "hlds_out_module.m"
    hlds__hlds_out__hlds_out_module__ConstArgs_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__ConstStruct_5, (MR_Integer) 1)));
#line 905 "hlds_out_module.m"
    hlds__hlds_out__hlds_out_module__Type_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__ConstStruct_5, (MR_Integer) 2)));
#line 905 "hlds_out_module.m"
    hlds__hlds_out__hlds_out_module__Inst_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__ConstStruct_5, (MR_Integer) 3)));
#line 906 "hlds_out_module.m"
    {
#line 906 "hlds_out_module.m"
      parse_tree__mercury_to_mercury__mercury_output_cons_id_4_p_0((MR_Integer) 1, hlds__hlds_out__hlds_out_module__ConsId_7);
    }
#line 910 "hlds_out_module.m"
    if ((hlds__hlds_out__hlds_out_module__ConstArgs_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 909 "hlds_out_module.m"
      {
#line 909 "hlds_out_module.m"
        mercury__io__nl_2_p_0();
      }
#line 910 "hlds_out_module.m"
    else
#line 911 "hlds_out_module.m"
      {
#line 911 "hlds_out_module.m"
        MR_Word hlds__hlds_out__hlds_out_module__HeadConstArg_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_module__ConstArgs_8, (MR_Integer) 0)));
#line 911 "hlds_out_module.m"
        MR_Word hlds__hlds_out__hlds_out_module__TailConstArgs_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_module__ConstArgs_8, (MR_Integer) 1)));

#line 912 "hlds_out_module.m"
        {
#line 912 "hlds_out_module.m"
          mercury__io__write_string_3_p_0((MR_String) "(\n");
        }
#line 913 "hlds_out_module.m"
        {
#line 913 "hlds_out_module.m"
          hlds__hlds_out__hlds_out_module__write_const_struct_args_4_p_0(hlds__hlds_out__hlds_out_module__HeadConstArg_11, hlds__hlds_out__hlds_out_module__TailConstArgs_12);
        }
#line 914 "hlds_out_module.m"
        {
#line 914 "hlds_out_module.m"
          mercury__io__write_string_3_p_0((MR_String) ")\n");
        }
#line 911 "hlds_out_module.m"
      }
#line 916 "hlds_out_module.m"
    {
#line 916 "hlds_out_module.m"
      mercury__io__write_string_3_p_0((MR_String) "type: ");
    }
#line 917 "hlds_out_module.m"
    {
#line 917 "hlds_out_module.m"
      hlds__hlds_out__hlds_out_module__V_30_30 = mercury__varset__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0);
    }
#line 917 "hlds_out_module.m"
    {
#line 917 "hlds_out_module.m"
      parse_tree__mercury_to_mercury__mercury_output_type_5_p_0(hlds__hlds_out__hlds_out_module__V_30_30, (MR_Integer) 0, hlds__hlds_out__hlds_out_module__Type_9);
    }
#line 918 "hlds_out_module.m"
    {
#line 918 "hlds_out_module.m"
      mercury__io__nl_2_p_0();
    }
#line 919 "hlds_out_module.m"
    {
#line 919 "hlds_out_module.m"
      mercury__io__write_string_3_p_0((MR_String) "inst: ");
    }
#line 921 "hlds_out_module.m"
    {
#line 921 "hlds_out_module.m"
      hlds__hlds_out__hlds_out_module__V_39_39 = mercury__varset__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0);
    }
#line 920 "hlds_out_module.m"
    {
#line 920 "hlds_out_module.m"
      hlds__hlds_out__hlds_out_mode__mercury_output_structured_inst_7_p_0(hlds__hlds_out__hlds_out_module__Inst_10, (MR_Integer) 0, (MR_Integer) 1, (MR_Integer) 0, hlds__hlds_out__hlds_out_module__V_39_39);
#line 920 "hlds_out_module.m"
      return;
    }
#line 903 "hlds_out_module.m"
  }
#line 901 "hlds_out_module.m"
}

#line 898 "hlds_out_module.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_const_struct_db_3_p_0_1(
#line 898 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__closure_arg,
#line 898 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_1,
#line 898 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_2,
#line 898 "hlds_out_module.m"
  MR_Box * hlds__hlds_out__hlds_out_module__wrapper_arg_3)
#line 898 "hlds_out_module.m"
{
#line 898 "hlds_out_module.m"
  {
#line 898 "hlds_out_module.m"
    MR_Box hlds__hlds_out__hlds_out_module__closure = hlds__hlds_out__hlds_out_module__closure_arg;

#line 898 "hlds_out_module.m"
    {
#line 898 "hlds_out_module.m"
      hlds__hlds_out__hlds_out_module__write_const_struct_3_p_0(((MR_Word) hlds__hlds_out__hlds_out_module__wrapper_arg_1));
#line 898 "hlds_out_module.m"
      return;
    }
#line 898 "hlds_out_module.m"
  }
#line 898 "hlds_out_module.m"
}

#line 893 "hlds_out_module.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_const_struct_db_3_p_0(
#line 893 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__ConstStructDb_4)
#line 893 "hlds_out_module.m"
{
#line 895 "hlds_out_module.m"
  {
#line 895 "hlds_out_module.m"
    MR_bool hlds__hlds_out__hlds_out_module__succeeded;
#line 895 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__ConstStructs_6;
#line 898 "hlds_out_module.m"
    MR_Box hlds__hlds_out__hlds_out_module__conv0_STATE_VARIABLE_IO_12_12;

#line 896 "hlds_out_module.m"
    {
#line 896 "hlds_out_module.m"
      hlds__const_struct__const_struct_db_get_structs_2_p_0(hlds__hlds_out__hlds_out_module__ConstStructDb_4, &hlds__hlds_out__hlds_out_module__ConstStructs_6);
    }
#line 897 "hlds_out_module.m"
    {
#line 897 "hlds_out_module.m"
      mercury__io__write_string_3_p_0((MR_String) "%-------- Const structs --------\n\n");
    }
#line 898 "hlds_out_module.m"
    {
#line 898 "hlds_out_module.m"
      mercury__list__foldl_4_p_2((MR_Word) &hlds__hlds_out__hlds_out_module_scalar_common_2[8], (MR_Word) &mercury__io__io__type_ctor_info_state_0, (MR_Word) &hlds__hlds_out__hlds_out_module_scalar_common_2[22], hlds__hlds_out__hlds_out_module__ConstStructs_6, ((MR_Box) ((MR_Integer) 0)), &hlds__hlds_out__hlds_out_module__conv0_STATE_VARIABLE_IO_12_12);
    }
#line 899 "hlds_out_module.m"
    {
#line 899 "hlds_out_module.m"
      mercury__io__nl_2_p_0();
#line 899 "hlds_out_module.m"
      return;
    }
#line 895 "hlds_out_module.m"
  }
#line 893 "hlds_out_module.m"
}

#line 864 "hlds_out_module.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_inst_4_p_0(
#line 864 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__Lang_5,
#line 864 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__Inst_6)
#line 864 "hlds_out_module.m"
{
#line 866 "hlds_out_module.m"
  {
#line 866 "hlds_out_module.m"
    MR_bool hlds__hlds_out__hlds_out_module__succeeded;
#line 866 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__TypeCtorInfo_14_14;
#line 866 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__InstTerm_8;
#line 866 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__VarSet_9;

#line 867 "hlds_out_module.m"
    {
#line 867 "hlds_out_module.m"
      hlds__hlds_out__hlds_out_module__InstTerm_8 = hlds__hlds_out__hlds_out_mode__inst_to_term_2_f_0(hlds__hlds_out__hlds_out_module__Lang_5, hlds__hlds_out__hlds_out_module__Inst_6);
    }
#line 4323 "hlds.hlds_out.hlds_out_module.c"
    hlds__hlds_out__hlds_out_module__TypeCtorInfo_14_14 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 868 "hlds_out_module.m"
    {
#line 868 "hlds_out_module.m"
      mercury__varset__init_1_p_0(hlds__hlds_out__hlds_out_module__TypeCtorInfo_14_14, &hlds__hlds_out__hlds_out_module__VarSet_9);
    }
#line 869 "hlds_out_module.m"
    {
#line 869 "hlds_out_module.m"
      parse_tree__mercury_to_mercury__mercury_output_term_5_p_0(hlds__hlds_out__hlds_out_module__TypeCtorInfo_14_14, hlds__hlds_out__hlds_out_module__VarSet_9, (MR_Integer) 0, hlds__hlds_out__hlds_out_module__InstTerm_8);
#line 869 "hlds_out_module.m"
      return;
    }
#line 866 "hlds_out_module.m"
  }
#line 864 "hlds_out_module.m"
}

#line 857 "hlds_out_module.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_inst_name_4_p_0(
#line 857 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__Lang_5,
#line 857 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__InstName_6)
#line 857 "hlds_out_module.m"
{
#line 859 "hlds_out_module.m"
  {
#line 859 "hlds_out_module.m"
    MR_bool hlds__hlds_out__hlds_out_module__succeeded;
#line 859 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__TypeCtorInfo_14_14;
#line 859 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__InstNameTerm_8;
#line 859 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__VarSet_9;

#line 860 "hlds_out_module.m"
    {
#line 860 "hlds_out_module.m"
      hlds__hlds_out__hlds_out_module__InstNameTerm_8 = hlds__hlds_out__hlds_out_mode__inst_name_to_term_2_f_0(hlds__hlds_out__hlds_out_module__Lang_5, hlds__hlds_out__hlds_out_module__InstName_6);
    }
#line 4367 "hlds.hlds_out.hlds_out_module.c"
    hlds__hlds_out__hlds_out_module__TypeCtorInfo_14_14 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 861 "hlds_out_module.m"
    {
#line 861 "hlds_out_module.m"
      mercury__varset__init_1_p_0(hlds__hlds_out__hlds_out_module__TypeCtorInfo_14_14, &hlds__hlds_out__hlds_out_module__VarSet_9);
    }
#line 862 "hlds_out_module.m"
    {
#line 862 "hlds_out_module.m"
      parse_tree__mercury_to_mercury__mercury_output_term_5_p_0(hlds__hlds_out__hlds_out_module__TypeCtorInfo_14_14, hlds__hlds_out__hlds_out_module__VarSet_9, (MR_Integer) 0, hlds__hlds_out__hlds_out_module__InstNameTerm_8);
#line 862 "hlds_out_module.m"
      return;
    }
#line 859 "hlds_out_module.m"
  }
#line 857 "hlds_out_module.m"
}

#line 814 "hlds_out_module.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_key_any_inst_4_p_0(
#line 814 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__Lang_5,
#line 814 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__HeadVar__2_2)
#line 814 "hlds_out_module.m"
{
#line 817 "hlds_out_module.m"
  {
#line 817 "hlds_out_module.m"
    MR_bool hlds__hlds_out__hlds_out_module__succeeded;
#line 817 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__TypeCtorInfo_14_49;
#line 817 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__InstName_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__HeadVar__2_2, (MR_Integer) 0)));
#line 817 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__Uniq_7 = ((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__HeadVar__2_2, (MR_Integer) 1)))) & (MR_Integer) 7);
#line 817 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__Live_8 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__HeadVar__2_2, (MR_Integer) 1)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 817 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__Real_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__HeadVar__2_2, (MR_Integer) 1)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 817 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__InstNameTerm_45;
#line 817 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__VarSet_46;

#line 829 "hlds_out_module.m"
#line 829 "hlds_out_module.m"
    switch (hlds__hlds_out__hlds_out_module__Uniq_7) {
#line 829 "hlds_out_module.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 829 "hlds_out_module.m"
      case (MR_Integer) 3:
#line 836 "hlds_out_module.m"
        {
#line 837 "hlds_out_module.m"
          {
#line 837 "hlds_out_module.m"
            mercury__io__write_string_3_p_0((MR_String) "clobbered");
          }
#line 836 "hlds_out_module.m"
        }
#line 829 "hlds_out_module.m"
        break;
#line 829 "hlds_out_module.m"
      case (MR_Integer) 4:
#line 839 "hlds_out_module.m"
        {
#line 840 "hlds_out_module.m"
          {
#line 840 "hlds_out_module.m"
            mercury__io__write_string_3_p_0((MR_String) "mostly_clobbered");
          }
#line 839 "hlds_out_module.m"
        }
#line 829 "hlds_out_module.m"
        break;
#line 829 "hlds_out_module.m"
      case (MR_Integer) 2:
#line 833 "hlds_out_module.m"
        {
#line 834 "hlds_out_module.m"
          {
#line 834 "hlds_out_module.m"
            mercury__io__write_string_3_p_0((MR_String) "mostly_unique ");
          }
#line 833 "hlds_out_module.m"
        }
#line 829 "hlds_out_module.m"
        break;
#line 829 "hlds_out_module.m"
      case (MR_Integer) 0:
#line 827 "hlds_out_module.m"
        {
#line 828 "hlds_out_module.m"
          {
#line 828 "hlds_out_module.m"
            mercury__io__write_string_3_p_0((MR_String) "shared ");
          }
#line 827 "hlds_out_module.m"
        }
#line 829 "hlds_out_module.m"
        break;
#line 829 "hlds_out_module.m"
      case (MR_Integer) 1:
#line 830 "hlds_out_module.m"
        {
#line 831 "hlds_out_module.m"
          {
#line 831 "hlds_out_module.m"
            mercury__io__write_string_3_p_0((MR_String) "unique ");
          }
#line 830 "hlds_out_module.m"
        }
#line 829 "hlds_out_module.m"
        break;
#line 829 "hlds_out_module.m"
    }
#line 845 "hlds_out_module.m"
#line 845 "hlds_out_module.m"
    switch (hlds__hlds_out__hlds_out_module__Live_8) {
#line 845 "hlds_out_module.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 845 "hlds_out_module.m"
      case (MR_Integer) 1:
#line 846 "hlds_out_module.m"
        {
#line 847 "hlds_out_module.m"
          {
#line 847 "hlds_out_module.m"
            mercury__io__write_string_3_p_0((MR_String) "dead ");
          }
#line 846 "hlds_out_module.m"
        }
#line 845 "hlds_out_module.m"
        break;
#line 845 "hlds_out_module.m"
      case (MR_Integer) 0:
#line 843 "hlds_out_module.m"
        {
#line 844 "hlds_out_module.m"
          {
#line 844 "hlds_out_module.m"
            mercury__io__write_string_3_p_0((MR_String) "live ");
          }
#line 843 "hlds_out_module.m"
        }
#line 845 "hlds_out_module.m"
        break;
#line 845 "hlds_out_module.m"
    }
#line 852 "hlds_out_module.m"
#line 852 "hlds_out_module.m"
    switch (hlds__hlds_out__hlds_out_module__Real_9) {
#line 852 "hlds_out_module.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 852 "hlds_out_module.m"
      case (MR_Integer) 1:
#line 853 "hlds_out_module.m"
        {
#line 854 "hlds_out_module.m"
          {
#line 854 "hlds_out_module.m"
            mercury__io__write_string_3_p_0((MR_String) "fake unify\n");
          }
#line 853 "hlds_out_module.m"
        }
#line 852 "hlds_out_module.m"
        break;
#line 852 "hlds_out_module.m"
      case (MR_Integer) 0:
#line 850 "hlds_out_module.m"
        {
#line 851 "hlds_out_module.m"
          {
#line 851 "hlds_out_module.m"
            mercury__io__write_string_3_p_0((MR_String) "real unify\n");
          }
#line 850 "hlds_out_module.m"
        }
#line 852 "hlds_out_module.m"
        break;
#line 852 "hlds_out_module.m"
    }
#line 860 "hlds_out_module.m"
    {
#line 860 "hlds_out_module.m"
      hlds__hlds_out__hlds_out_module__InstNameTerm_45 = hlds__hlds_out__hlds_out_mode__inst_name_to_term_2_f_0(hlds__hlds_out__hlds_out_module__Lang_5, hlds__hlds_out__hlds_out_module__InstName_6);
    }
#line 4557 "hlds.hlds_out.hlds_out_module.c"
    hlds__hlds_out__hlds_out_module__TypeCtorInfo_14_49 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 861 "hlds_out_module.m"
    {
#line 861 "hlds_out_module.m"
      mercury__varset__init_1_p_0(hlds__hlds_out__hlds_out_module__TypeCtorInfo_14_49, &hlds__hlds_out__hlds_out_module__VarSet_46);
    }
#line 862 "hlds_out_module.m"
    {
#line 862 "hlds_out_module.m"
      parse_tree__mercury_to_mercury__mercury_output_term_5_p_0(hlds__hlds_out__hlds_out_module__TypeCtorInfo_14_49, hlds__hlds_out__hlds_out_module__VarSet_46, (MR_Integer) 0, hlds__hlds_out__hlds_out_module__InstNameTerm_45);
    }
#line 820 "hlds_out_module.m"
    {
#line 820 "hlds_out_module.m"
      mercury__io__nl_2_p_0();
#line 820 "hlds_out_module.m"
      return;
    }
#line 817 "hlds_out_module.m"
  }
#line 814 "hlds_out_module.m"
}

#line 805 "hlds_out_module.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_key_ground_inst_4_p_0(
#line 805 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__Lang_5,
#line 805 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__HeadVar__2_2)
#line 805 "hlds_out_module.m"
{
#line 809 "hlds_out_module.m"
  {
#line 809 "hlds_out_module.m"
    MR_bool hlds__hlds_out__hlds_out_module__succeeded;
#line 809 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__TypeCtorInfo_14_49;
#line 809 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__InstName_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__HeadVar__2_2, (MR_Integer) 0)));
#line 809 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__Uniq_7 = ((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__HeadVar__2_2, (MR_Integer) 1)))) & (MR_Integer) 7);
#line 809 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__Live_8 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__HeadVar__2_2, (MR_Integer) 1)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 809 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__Real_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__HeadVar__2_2, (MR_Integer) 1)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 809 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__InstNameTerm_45;
#line 809 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__VarSet_46;

#line 829 "hlds_out_module.m"
#line 829 "hlds_out_module.m"
    switch (hlds__hlds_out__hlds_out_module__Uniq_7) {
#line 829 "hlds_out_module.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 829 "hlds_out_module.m"
      case (MR_Integer) 3:
#line 836 "hlds_out_module.m"
        {
#line 837 "hlds_out_module.m"
          {
#line 837 "hlds_out_module.m"
            mercury__io__write_string_3_p_0((MR_String) "clobbered");
          }
#line 836 "hlds_out_module.m"
        }
#line 829 "hlds_out_module.m"
        break;
#line 829 "hlds_out_module.m"
      case (MR_Integer) 4:
#line 839 "hlds_out_module.m"
        {
#line 840 "hlds_out_module.m"
          {
#line 840 "hlds_out_module.m"
            mercury__io__write_string_3_p_0((MR_String) "mostly_clobbered");
          }
#line 839 "hlds_out_module.m"
        }
#line 829 "hlds_out_module.m"
        break;
#line 829 "hlds_out_module.m"
      case (MR_Integer) 2:
#line 833 "hlds_out_module.m"
        {
#line 834 "hlds_out_module.m"
          {
#line 834 "hlds_out_module.m"
            mercury__io__write_string_3_p_0((MR_String) "mostly_unique ");
          }
#line 833 "hlds_out_module.m"
        }
#line 829 "hlds_out_module.m"
        break;
#line 829 "hlds_out_module.m"
      case (MR_Integer) 0:
#line 827 "hlds_out_module.m"
        {
#line 828 "hlds_out_module.m"
          {
#line 828 "hlds_out_module.m"
            mercury__io__write_string_3_p_0((MR_String) "shared ");
          }
#line 827 "hlds_out_module.m"
        }
#line 829 "hlds_out_module.m"
        break;
#line 829 "hlds_out_module.m"
      case (MR_Integer) 1:
#line 830 "hlds_out_module.m"
        {
#line 831 "hlds_out_module.m"
          {
#line 831 "hlds_out_module.m"
            mercury__io__write_string_3_p_0((MR_String) "unique ");
          }
#line 830 "hlds_out_module.m"
        }
#line 829 "hlds_out_module.m"
        break;
#line 829 "hlds_out_module.m"
    }
#line 845 "hlds_out_module.m"
#line 845 "hlds_out_module.m"
    switch (hlds__hlds_out__hlds_out_module__Live_8) {
#line 845 "hlds_out_module.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 845 "hlds_out_module.m"
      case (MR_Integer) 1:
#line 846 "hlds_out_module.m"
        {
#line 847 "hlds_out_module.m"
          {
#line 847 "hlds_out_module.m"
            mercury__io__write_string_3_p_0((MR_String) "dead ");
          }
#line 846 "hlds_out_module.m"
        }
#line 845 "hlds_out_module.m"
        break;
#line 845 "hlds_out_module.m"
      case (MR_Integer) 0:
#line 843 "hlds_out_module.m"
        {
#line 844 "hlds_out_module.m"
          {
#line 844 "hlds_out_module.m"
            mercury__io__write_string_3_p_0((MR_String) "live ");
          }
#line 843 "hlds_out_module.m"
        }
#line 845 "hlds_out_module.m"
        break;
#line 845 "hlds_out_module.m"
    }
#line 852 "hlds_out_module.m"
#line 852 "hlds_out_module.m"
    switch (hlds__hlds_out__hlds_out_module__Real_9) {
#line 852 "hlds_out_module.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 852 "hlds_out_module.m"
      case (MR_Integer) 1:
#line 853 "hlds_out_module.m"
        {
#line 854 "hlds_out_module.m"
          {
#line 854 "hlds_out_module.m"
            mercury__io__write_string_3_p_0((MR_String) "fake unify\n");
          }
#line 853 "hlds_out_module.m"
        }
#line 852 "hlds_out_module.m"
        break;
#line 852 "hlds_out_module.m"
      case (MR_Integer) 0:
#line 850 "hlds_out_module.m"
        {
#line 851 "hlds_out_module.m"
          {
#line 851 "hlds_out_module.m"
            mercury__io__write_string_3_p_0((MR_String) "real unify\n");
          }
#line 850 "hlds_out_module.m"
        }
#line 852 "hlds_out_module.m"
        break;
#line 852 "hlds_out_module.m"
    }
#line 860 "hlds_out_module.m"
    {
#line 860 "hlds_out_module.m"
      hlds__hlds_out__hlds_out_module__InstNameTerm_45 = hlds__hlds_out__hlds_out_mode__inst_name_to_term_2_f_0(hlds__hlds_out__hlds_out_module__Lang_5, hlds__hlds_out__hlds_out_module__InstName_6);
    }
#line 4752 "hlds.hlds_out.hlds_out_module.c"
    hlds__hlds_out__hlds_out_module__TypeCtorInfo_14_49 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 861 "hlds_out_module.m"
    {
#line 861 "hlds_out_module.m"
      mercury__varset__init_1_p_0(hlds__hlds_out__hlds_out_module__TypeCtorInfo_14_49, &hlds__hlds_out__hlds_out_module__VarSet_46);
    }
#line 862 "hlds_out_module.m"
    {
#line 862 "hlds_out_module.m"
      parse_tree__mercury_to_mercury__mercury_output_term_5_p_0(hlds__hlds_out__hlds_out_module__TypeCtorInfo_14_49, hlds__hlds_out__hlds_out_module__VarSet_46, (MR_Integer) 0, hlds__hlds_out__hlds_out_module__InstNameTerm_45);
    }
#line 812 "hlds_out_module.m"
    {
#line 812 "hlds_out_module.m"
      mercury__io__nl_2_p_0();
#line 812 "hlds_out_module.m"
      return;
    }
#line 809 "hlds_out_module.m"
  }
#line 805 "hlds_out_module.m"
}

#line 794 "hlds_out_module.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_key_merge_inst_4_p_0(
#line 794 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__Lang_5,
#line 794 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__HeadVar__2_2)
#line 794 "hlds_out_module.m"
{
#line 797 "hlds_out_module.m"
  {
#line 797 "hlds_out_module.m"
    MR_bool hlds__hlds_out__hlds_out_module__succeeded;
#line 797 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__TypeCtorInfo_14_28;
#line 797 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__TypeCtorInfo_14_38;
#line 797 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__InstA_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__HeadVar__2_2, (MR_Integer) 0)));
#line 797 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__InstB_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__HeadVar__2_2, (MR_Integer) 1)));
#line 797 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__InstTerm_24;
#line 797 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__VarSet_25;
#line 797 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__InstTerm_34;
#line 797 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__VarSet_35;

#line 798 "hlds_out_module.m"
    {
#line 798 "hlds_out_module.m"
      mercury__io__write_string_3_p_0((MR_String) "InstA: ");
    }
#line 867 "hlds_out_module.m"
    {
#line 867 "hlds_out_module.m"
      hlds__hlds_out__hlds_out_module__InstTerm_24 = hlds__hlds_out__hlds_out_mode__inst_to_term_2_f_0(hlds__hlds_out__hlds_out_module__Lang_5, hlds__hlds_out__hlds_out_module__InstA_6);
    }
#line 4816 "hlds.hlds_out.hlds_out_module.c"
    hlds__hlds_out__hlds_out_module__TypeCtorInfo_14_28 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 868 "hlds_out_module.m"
    {
#line 868 "hlds_out_module.m"
      mercury__varset__init_1_p_0(hlds__hlds_out__hlds_out_module__TypeCtorInfo_14_28, &hlds__hlds_out__hlds_out_module__VarSet_25);
    }
#line 869 "hlds_out_module.m"
    {
#line 869 "hlds_out_module.m"
      parse_tree__mercury_to_mercury__mercury_output_term_5_p_0(hlds__hlds_out__hlds_out_module__TypeCtorInfo_14_28, hlds__hlds_out__hlds_out_module__VarSet_25, (MR_Integer) 0, hlds__hlds_out__hlds_out_module__InstTerm_24);
    }
#line 800 "hlds_out_module.m"
    {
#line 800 "hlds_out_module.m"
      mercury__io__nl_2_p_0();
    }
#line 801 "hlds_out_module.m"
    {
#line 801 "hlds_out_module.m"
      mercury__io__write_string_3_p_0((MR_String) "InstB: ");
    }
#line 867 "hlds_out_module.m"
    {
#line 867 "hlds_out_module.m"
      hlds__hlds_out__hlds_out_module__InstTerm_34 = hlds__hlds_out__hlds_out_mode__inst_to_term_2_f_0(hlds__hlds_out__hlds_out_module__Lang_5, hlds__hlds_out__hlds_out_module__InstB_7);
    }
#line 4843 "hlds.hlds_out.hlds_out_module.c"
    hlds__hlds_out__hlds_out_module__TypeCtorInfo_14_38 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 868 "hlds_out_module.m"
    {
#line 868 "hlds_out_module.m"
      mercury__varset__init_1_p_0(hlds__hlds_out__hlds_out_module__TypeCtorInfo_14_38, &hlds__hlds_out__hlds_out_module__VarSet_35);
    }
#line 869 "hlds_out_module.m"
    {
#line 869 "hlds_out_module.m"
      parse_tree__mercury_to_mercury__mercury_output_term_5_p_0(hlds__hlds_out__hlds_out_module__TypeCtorInfo_14_38, hlds__hlds_out__hlds_out_module__VarSet_35, (MR_Integer) 0, hlds__hlds_out__hlds_out_module__InstTerm_34);
    }
#line 803 "hlds_out_module.m"
    {
#line 803 "hlds_out_module.m"
      mercury__io__nl_2_p_0();
#line 803 "hlds_out_module.m"
      return;
    }
#line 797 "hlds_out_module.m"
  }
#line 794 "hlds_out_module.m"
}

#line 769 "hlds_out_module.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_key_unify_inst_4_p_0(
#line 769 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__Lang_5,
#line 769 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__HeadVar__2_2)
#line 769 "hlds_out_module.m"
{
#line 772 "hlds_out_module.m"
  {
#line 772 "hlds_out_module.m"
    MR_bool hlds__hlds_out__hlds_out_module__succeeded;
#line 772 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__TypeCtorInfo_14_38;
#line 772 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__TypeCtorInfo_14_48;
#line 772 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__Live_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__HeadVar__2_2, (MR_Integer) 0)));
#line 772 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__Real_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__HeadVar__2_2, (MR_Integer) 1)));
#line 772 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__InstA_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__HeadVar__2_2, (MR_Integer) 2)));
#line 772 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__InstB_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__HeadVar__2_2, (MR_Integer) 3)));
#line 772 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__InstTerm_34;
#line 772 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__VarSet_35;
#line 772 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__InstTerm_44;
#line 772 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__VarSet_45;

#line 776 "hlds_out_module.m"
#line 776 "hlds_out_module.m"
    switch (hlds__hlds_out__hlds_out_module__Live_6) {
#line 776 "hlds_out_module.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 776 "hlds_out_module.m"
      case (MR_Integer) 1:
#line 777 "hlds_out_module.m"
        {
#line 778 "hlds_out_module.m"
          {
#line 778 "hlds_out_module.m"
            mercury__io__write_string_3_p_0((MR_String) "dead ");
          }
#line 777 "hlds_out_module.m"
        }
#line 776 "hlds_out_module.m"
        break;
#line 776 "hlds_out_module.m"
      case (MR_Integer) 0:
#line 774 "hlds_out_module.m"
        {
#line 775 "hlds_out_module.m"
          {
#line 775 "hlds_out_module.m"
            mercury__io__write_string_3_p_0((MR_String) "live ");
          }
#line 774 "hlds_out_module.m"
        }
#line 776 "hlds_out_module.m"
        break;
#line 776 "hlds_out_module.m"
    }
#line 783 "hlds_out_module.m"
#line 783 "hlds_out_module.m"
    switch (hlds__hlds_out__hlds_out_module__Real_7) {
#line 783 "hlds_out_module.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 783 "hlds_out_module.m"
      case (MR_Integer) 1:
#line 784 "hlds_out_module.m"
        {
#line 785 "hlds_out_module.m"
          {
#line 785 "hlds_out_module.m"
            mercury__io__write_string_3_p_0((MR_String) "fake unify\n");
          }
#line 784 "hlds_out_module.m"
        }
#line 783 "hlds_out_module.m"
        break;
#line 783 "hlds_out_module.m"
      case (MR_Integer) 0:
#line 781 "hlds_out_module.m"
        {
#line 782 "hlds_out_module.m"
          {
#line 782 "hlds_out_module.m"
            mercury__io__write_string_3_p_0((MR_String) "real unify\n");
          }
#line 781 "hlds_out_module.m"
        }
#line 783 "hlds_out_module.m"
        break;
#line 783 "hlds_out_module.m"
    }
#line 787 "hlds_out_module.m"
    {
#line 787 "hlds_out_module.m"
      mercury__io__write_string_3_p_0((MR_String) "InstA: ");
    }
#line 867 "hlds_out_module.m"
    {
#line 867 "hlds_out_module.m"
      hlds__hlds_out__hlds_out_module__InstTerm_34 = hlds__hlds_out__hlds_out_mode__inst_to_term_2_f_0(hlds__hlds_out__hlds_out_module__Lang_5, hlds__hlds_out__hlds_out_module__InstA_8);
    }
#line 4977 "hlds.hlds_out.hlds_out_module.c"
    hlds__hlds_out__hlds_out_module__TypeCtorInfo_14_38 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 868 "hlds_out_module.m"
    {
#line 868 "hlds_out_module.m"
      mercury__varset__init_1_p_0(hlds__hlds_out__hlds_out_module__TypeCtorInfo_14_38, &hlds__hlds_out__hlds_out_module__VarSet_35);
    }
#line 869 "hlds_out_module.m"
    {
#line 869 "hlds_out_module.m"
      parse_tree__mercury_to_mercury__mercury_output_term_5_p_0(hlds__hlds_out__hlds_out_module__TypeCtorInfo_14_38, hlds__hlds_out__hlds_out_module__VarSet_35, (MR_Integer) 0, hlds__hlds_out__hlds_out_module__InstTerm_34);
    }
#line 789 "hlds_out_module.m"
    {
#line 789 "hlds_out_module.m"
      mercury__io__nl_2_p_0();
    }
#line 790 "hlds_out_module.m"
    {
#line 790 "hlds_out_module.m"
      mercury__io__write_string_3_p_0((MR_String) "InstB: ");
    }
#line 867 "hlds_out_module.m"
    {
#line 867 "hlds_out_module.m"
      hlds__hlds_out__hlds_out_module__InstTerm_44 = hlds__hlds_out__hlds_out_mode__inst_to_term_2_f_0(hlds__hlds_out__hlds_out_module__Lang_5, hlds__hlds_out__hlds_out_module__InstB_9);
    }
#line 5004 "hlds.hlds_out.hlds_out_module.c"
    hlds__hlds_out__hlds_out_module__TypeCtorInfo_14_48 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 868 "hlds_out_module.m"
    {
#line 868 "hlds_out_module.m"
      mercury__varset__init_1_p_0(hlds__hlds_out__hlds_out_module__TypeCtorInfo_14_48, &hlds__hlds_out__hlds_out_module__VarSet_45);
    }
#line 869 "hlds_out_module.m"
    {
#line 869 "hlds_out_module.m"
      parse_tree__mercury_to_mercury__mercury_output_term_5_p_0(hlds__hlds_out__hlds_out_module__TypeCtorInfo_14_48, hlds__hlds_out__hlds_out_module__VarSet_45, (MR_Integer) 0, hlds__hlds_out__hlds_out_module__InstTerm_44);
    }
#line 792 "hlds_out_module.m"
    {
#line 792 "hlds_out_module.m"
      mercury__io__nl_2_p_0();
#line 792 "hlds_out_module.m"
      return;
    }
#line 772 "hlds_out_module.m"
  }
#line 769 "hlds_out_module.m"
}

#line 707 "hlds_out_module.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_inst_params_5_p_0(
#line 707 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__InstVar_6,
#line 707 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__InstVars_7,
#line 707 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__InstVarSet_8)
#line 707 "hlds_out_module.m"
{
#line 710 "hlds_out_module.m"
  while (MR_TRUE)
#line 710 "hlds_out_module.m"
    {
#line 710 "hlds_out_module.m"
      /* tailcall optimized into a loop */
#line 710 "hlds_out_module.m"
      {
#line 710 "hlds_out_module.m"
        MR_bool hlds__hlds_out__hlds_out_module__succeeded;
#line 710 "hlds_out_module.m"
        MR_String hlds__hlds_out__hlds_out_module__InstVarName_10;

#line 711 "hlds_out_module.m"
        {
#line 711 "hlds_out_module.m"
          mercury__varset__lookup_name_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0, hlds__hlds_out__hlds_out_module__InstVarSet_8, hlds__hlds_out__hlds_out_module__InstVar_6, &hlds__hlds_out__hlds_out_module__InstVarName_10);
        }
#line 712 "hlds_out_module.m"
        {
#line 712 "hlds_out_module.m"
          mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_module__InstVarName_10);
        }
#line 715 "hlds_out_module.m"
        if ((hlds__hlds_out__hlds_out_module__InstVars_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 714 "hlds_out_module.m"
          {
#line 714 "hlds_out_module.m"
          }
#line 715 "hlds_out_module.m"
        else
#line 716 "hlds_out_module.m"
          {
#line 716 "hlds_out_module.m"
            MR_Word hlds__hlds_out__hlds_out_module__HeadInstVar_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_module__InstVars_7, (MR_Integer) 0)));
#line 716 "hlds_out_module.m"
            MR_Word hlds__hlds_out__hlds_out_module__TailInstVars_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_module__InstVars_7, (MR_Integer) 1)));

#line 717 "hlds_out_module.m"
            {
#line 717 "hlds_out_module.m"
              mercury__io__write_string_3_p_0((MR_String) ", ");
            }
#line 718 "hlds_out_module.m"
            /* direct tailcall eliminated */
#line 718 "hlds_out_module.m"
            {
#line 718 "hlds_out_module.m"
              MR_Word hlds__hlds_out__hlds_out_module__InstVar__tmp_copy_6 = hlds__hlds_out__hlds_out_module__HeadInstVar_11;
#line 718 "hlds_out_module.m"
              MR_Word hlds__hlds_out__hlds_out_module__InstVars__tmp_copy_7 = hlds__hlds_out__hlds_out_module__TailInstVars_12;

#line 718 "hlds_out_module.m"
              hlds__hlds_out__hlds_out_module__InstVars_7 = hlds__hlds_out__hlds_out_module__InstVars__tmp_copy_7;
#line 718 "hlds_out_module.m"
              hlds__hlds_out__hlds_out_module__InstVar_6 = hlds__hlds_out__hlds_out_module__InstVar__tmp_copy_6;
#line 718 "hlds_out_module.m"
            }
#line 718 "hlds_out_module.m"
            continue;
#line 716 "hlds_out_module.m"
          }
#line 710 "hlds_out_module.m"
      }
#line 710 "hlds_out_module.m"
      break;
#line 710 "hlds_out_module.m"
    }
#line 707 "hlds_out_module.m"
}

#line 679 "hlds_out_module.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_user_inst_4_p_0(
#line 679 "hlds_out_module.m"
  MR_Integer hlds__hlds_out__hlds_out_module__Indent_5,
#line 679 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__HeadVar__2_2)
#line 679 "hlds_out_module.m"
{
#line 682 "hlds_out_module.m"
  {
#line 682 "hlds_out_module.m"
    MR_bool hlds__hlds_out__hlds_out_module__succeeded;
#line 682 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__InstId_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__HeadVar__2_2, (MR_Integer) 0)));
#line 682 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__InstDefn_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__HeadVar__2_2, (MR_Integer) 1)));
#line 682 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__InstName_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__InstId_6, (MR_Integer) 0)));
#line 682 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__InstVarSet_11;
#line 682 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__InstParams_12;
#line 682 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__InstBody_13;
#line 682 "hlds_out_module.m"
    MR_String hlds__hlds_out__hlds_out_module__V_27_27;
#line 682 "hlds_out_module.m"
    MR_String hlds__hlds_out__hlds_out_module__V_45_45;
#line 683 "hlds_out_module.m"
    MR_Integer hlds__hlds_out__hlds_out_module___InstArity_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__InstId_6, (MR_Integer) 1)));
#line 686 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module___MaybeMatchingTypeCtors_14;
#line 686 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module___Context_15;
#line 686 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module___Status_16;

#line 684 "hlds_out_module.m"
    {
#line 684 "hlds_out_module.m"
      hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_module__Indent_5);
    }
#line 685 "hlds_out_module.m"
    {
#line 685 "hlds_out_module.m"
      hlds__hlds_out__hlds_out_module__V_27_27 = mdbcomp__sym_name__sym_name_to_string_1_f_0(hlds__hlds_out__hlds_out_module__InstName_9);
    }
#line 685 "hlds_out_module.m"
    {
#line 685 "hlds_out_module.m"
      mercury__io__write_string_3_p_0((MR_String) "\n:- inst ");
    }
#line 685 "hlds_out_module.m"
    {
#line 685 "hlds_out_module.m"
      mercury__string__format__format_string_component_nowidth_noprec_3_p_0((MR_Word) &hlds__hlds_out__hlds_out_module_scalar_common_7[0], hlds__hlds_out__hlds_out_module__V_27_27, &hlds__hlds_out__hlds_out_module__V_45_45);
    }
#line 685 "hlds_out_module.m"
    {
#line 685 "hlds_out_module.m"
      mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_module__V_45_45);
    }
#line 686 "hlds_out_module.m"
    hlds__hlds_out__hlds_out_module__InstVarSet_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__InstDefn_7, (MR_Integer) 0)));
#line 686 "hlds_out_module.m"
    hlds__hlds_out__hlds_out_module__InstParams_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__InstDefn_7, (MR_Integer) 1)));
#line 686 "hlds_out_module.m"
    hlds__hlds_out__hlds_out_module__InstBody_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__InstDefn_7, (MR_Integer) 2)));
#line 686 "hlds_out_module.m"
    hlds__hlds_out__hlds_out_module___MaybeMatchingTypeCtors_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__InstDefn_7, (MR_Integer) 3)));
#line 686 "hlds_out_module.m"
    hlds__hlds_out__hlds_out_module___Context_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__InstDefn_7, (MR_Integer) 4)));
#line 686 "hlds_out_module.m"
    hlds__hlds_out__hlds_out_module___Status_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__InstDefn_7, (MR_Integer) 5)));
#line 690 "hlds_out_module.m"
    if ((hlds__hlds_out__hlds_out_module__InstParams_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 689 "hlds_out_module.m"
      {
#line 689 "hlds_out_module.m"
      }
#line 690 "hlds_out_module.m"
    else
#line 691 "hlds_out_module.m"
      {
#line 691 "hlds_out_module.m"
        MR_Word hlds__hlds_out__hlds_out_module__HeadInstParam_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_module__InstParams_12, (MR_Integer) 0)));
#line 691 "hlds_out_module.m"
        MR_Word hlds__hlds_out__hlds_out_module__TailInstParams_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_module__InstParams_12, (MR_Integer) 1)));

#line 692 "hlds_out_module.m"
        {
#line 692 "hlds_out_module.m"
          mercury__io__write_string_3_p_0((MR_String) "(");
        }
#line 693 "hlds_out_module.m"
        {
#line 693 "hlds_out_module.m"
          hlds__hlds_out__hlds_out_module__write_inst_params_5_p_0(hlds__hlds_out__hlds_out_module__HeadInstParam_17, hlds__hlds_out__hlds_out_module__TailInstParams_18, hlds__hlds_out__hlds_out_module__InstVarSet_11);
        }
#line 694 "hlds_out_module.m"
        {
#line 694 "hlds_out_module.m"
          mercury__io__write_string_3_p_0((MR_String) ")");
        }
#line 691 "hlds_out_module.m"
      }
#line 699 "hlds_out_module.m"
    if ((hlds__hlds_out__hlds_out_module__InstBody_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 697 "hlds_out_module.m"
      {
#line 698 "hlds_out_module.m"
        {
#line 698 "hlds_out_module.m"
          mercury__io__write_string_3_p_0((MR_String) ": is abstract\n");
#line 698 "hlds_out_module.m"
          return;
        }
#line 697 "hlds_out_module.m"
      }
#line 699 "hlds_out_module.m"
    else
#line 700 "hlds_out_module.m"
      {
#line 700 "hlds_out_module.m"
        MR_Word hlds__hlds_out__hlds_out_module__EqvInst_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_module__InstBody_13, (MR_Integer) 0)));

#line 701 "hlds_out_module.m"
        {
#line 701 "hlds_out_module.m"
          mercury__io__write_string_3_p_0((MR_String) ":\n");
        }
#line 702 "hlds_out_module.m"
        {
#line 702 "hlds_out_module.m"
          hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_module__Indent_5);
        }
#line 703 "hlds_out_module.m"
        {
#line 703 "hlds_out_module.m"
          parse_tree__mercury_to_mercury__mercury_output_inst_5_p_0((MR_Integer) 1, hlds__hlds_out__hlds_out_module__InstVarSet_11, hlds__hlds_out__hlds_out_module__EqvInst_19);
        }
#line 704 "hlds_out_module.m"
        {
#line 704 "hlds_out_module.m"
          mercury__io__write_string_3_p_0((MR_String) "\n");
#line 704 "hlds_out_module.m"
          return;
        }
#line 700 "hlds_out_module.m"
      }
#line 682 "hlds_out_module.m"
  }
#line 679 "hlds_out_module.m"
}

#line 672 "hlds_out_module.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_inst_table_6_p_0_13(
#line 672 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__closure_arg,
#line 672 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_1,
#line 672 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_2,
#line 672 "hlds_out_module.m"
  MR_Box * hlds__hlds_out__hlds_out_module__wrapper_arg_3,
#line 672 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_4,
#line 672 "hlds_out_module.m"
  MR_Box * hlds__hlds_out__hlds_out_module__wrapper_arg_5)
#line 672 "hlds_out_module.m"
{
#line 672 "hlds_out_module.m"
  {
#line 672 "hlds_out_module.m"
    MR_Box hlds__hlds_out__hlds_out_module__closure = hlds__hlds_out__hlds_out_module__closure_arg;
#line 672 "hlds_out_module.m"
    MR_Integer hlds__hlds_out__hlds_out_module__conv16_HeadVar__6_174;

#line 672 "hlds_out_module.m"
    {
#line 672 "hlds_out_module.m"
      hlds__hlds_out__hlds_out_module__IntroducedFrom__pred__write_inst_table__672__1_8_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__closure, (MR_Integer) 3))), ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__closure, (MR_Integer) 5))), ((MR_Word) hlds__hlds_out__hlds_out_module__wrapper_arg_1), ((MR_Integer) hlds__hlds_out__hlds_out_module__wrapper_arg_2), &hlds__hlds_out__hlds_out_module__conv16_HeadVar__6_174);
    }
#line 672 "hlds_out_module.m"
    *hlds__hlds_out__hlds_out_module__wrapper_arg_3 = ((MR_Box) (hlds__hlds_out__hlds_out_module__conv16_HeadVar__6_174));
#line 672 "hlds_out_module.m"
  }
#line 672 "hlds_out_module.m"
}

#line 672 "hlds_out_module.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_inst_table_6_p_0_12(
#line 672 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__closure_arg,
#line 672 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_1,
#line 672 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_2,
#line 672 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_3,
#line 672 "hlds_out_module.m"
  MR_Box * hlds__hlds_out__hlds_out_module__wrapper_arg_4)
#line 672 "hlds_out_module.m"
{
#line 672 "hlds_out_module.m"
  {
#line 672 "hlds_out_module.m"
    MR_Box hlds__hlds_out__hlds_out_module__closure = hlds__hlds_out__hlds_out_module__closure_arg;

#line 672 "hlds_out_module.m"
    {
#line 672 "hlds_out_module.m"
      hlds__hlds_out__hlds_out_module__write_inst_name_4_p_0(((MR_Word) hlds__hlds_out__hlds_out_module__wrapper_arg_1), ((MR_Word) hlds__hlds_out__hlds_out_module__wrapper_arg_2));
#line 672 "hlds_out_module.m"
      return;
    }
#line 672 "hlds_out_module.m"
  }
#line 672 "hlds_out_module.m"
}

#line 667 "hlds_out_module.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_inst_table_6_p_0_11(
#line 667 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__closure_arg,
#line 667 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_1,
#line 667 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_2,
#line 667 "hlds_out_module.m"
  MR_Box * hlds__hlds_out__hlds_out_module__wrapper_arg_3,
#line 667 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_4,
#line 667 "hlds_out_module.m"
  MR_Box * hlds__hlds_out__hlds_out_module__wrapper_arg_5)
#line 667 "hlds_out_module.m"
{
#line 667 "hlds_out_module.m"
  {
#line 667 "hlds_out_module.m"
    MR_Box hlds__hlds_out__hlds_out_module__closure = hlds__hlds_out__hlds_out_module__closure_arg;
#line 667 "hlds_out_module.m"
    MR_Integer hlds__hlds_out__hlds_out_module__conv13_HeadVar__6_163;

#line 667 "hlds_out_module.m"
    {
#line 667 "hlds_out_module.m"
      hlds__hlds_out__hlds_out_module__IntroducedFrom__pred__write_inst_table__667__1_8_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__closure, (MR_Integer) 3))), ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__closure, (MR_Integer) 5))), ((MR_Word) hlds__hlds_out__hlds_out_module__wrapper_arg_1), ((MR_Integer) hlds__hlds_out__hlds_out_module__wrapper_arg_2), &hlds__hlds_out__hlds_out_module__conv13_HeadVar__6_163);
    }
#line 667 "hlds_out_module.m"
    *hlds__hlds_out__hlds_out_module__wrapper_arg_3 = ((MR_Box) (hlds__hlds_out__hlds_out_module__conv13_HeadVar__6_163));
#line 667 "hlds_out_module.m"
  }
#line 667 "hlds_out_module.m"
}

#line 667 "hlds_out_module.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_inst_table_6_p_0_10(
#line 667 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__closure_arg,
#line 667 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_1,
#line 667 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_2,
#line 667 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_3,
#line 667 "hlds_out_module.m"
  MR_Box * hlds__hlds_out__hlds_out_module__wrapper_arg_4)
#line 667 "hlds_out_module.m"
{
#line 667 "hlds_out_module.m"
  {
#line 667 "hlds_out_module.m"
    MR_Box hlds__hlds_out__hlds_out_module__closure = hlds__hlds_out__hlds_out_module__closure_arg;

#line 667 "hlds_out_module.m"
    {
#line 667 "hlds_out_module.m"
      hlds__hlds_out__hlds_out_module__write_inst_name_4_p_0(((MR_Word) hlds__hlds_out__hlds_out_module__wrapper_arg_1), ((MR_Word) hlds__hlds_out__hlds_out_module__wrapper_arg_2));
#line 667 "hlds_out_module.m"
      return;
    }
#line 667 "hlds_out_module.m"
  }
#line 667 "hlds_out_module.m"
}

#line 662 "hlds_out_module.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_inst_table_6_p_0_9(
#line 662 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__closure_arg,
#line 662 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_1,
#line 662 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_2,
#line 662 "hlds_out_module.m"
  MR_Box * hlds__hlds_out__hlds_out_module__wrapper_arg_3,
#line 662 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_4,
#line 662 "hlds_out_module.m"
  MR_Box * hlds__hlds_out__hlds_out_module__wrapper_arg_5)
#line 662 "hlds_out_module.m"
{
#line 662 "hlds_out_module.m"
  {
#line 662 "hlds_out_module.m"
    MR_Box hlds__hlds_out__hlds_out_module__closure = hlds__hlds_out__hlds_out_module__closure_arg;
#line 662 "hlds_out_module.m"
    MR_Integer hlds__hlds_out__hlds_out_module__conv10_HeadVar__6_152;

#line 662 "hlds_out_module.m"
    {
#line 662 "hlds_out_module.m"
      hlds__hlds_out__hlds_out_module__IntroducedFrom__pred__write_inst_table__662__1_8_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__closure, (MR_Integer) 3))), ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__closure, (MR_Integer) 5))), ((MR_Word) hlds__hlds_out__hlds_out_module__wrapper_arg_1), ((MR_Integer) hlds__hlds_out__hlds_out_module__wrapper_arg_2), &hlds__hlds_out__hlds_out_module__conv10_HeadVar__6_152);
    }
#line 662 "hlds_out_module.m"
    *hlds__hlds_out__hlds_out_module__wrapper_arg_3 = ((MR_Box) (hlds__hlds_out__hlds_out_module__conv10_HeadVar__6_152));
#line 662 "hlds_out_module.m"
  }
#line 662 "hlds_out_module.m"
}

#line 662 "hlds_out_module.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_inst_table_6_p_0_8(
#line 662 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__closure_arg,
#line 662 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_1,
#line 662 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_2,
#line 662 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_3,
#line 662 "hlds_out_module.m"
  MR_Box * hlds__hlds_out__hlds_out_module__wrapper_arg_4)
#line 662 "hlds_out_module.m"
{
#line 662 "hlds_out_module.m"
  {
#line 662 "hlds_out_module.m"
    MR_Box hlds__hlds_out__hlds_out_module__closure = hlds__hlds_out__hlds_out_module__closure_arg;

#line 662 "hlds_out_module.m"
    {
#line 662 "hlds_out_module.m"
      hlds__hlds_out__hlds_out_module__write_key_any_inst_4_p_0(((MR_Word) hlds__hlds_out__hlds_out_module__wrapper_arg_1), ((MR_Word) hlds__hlds_out__hlds_out_module__wrapper_arg_2));
#line 662 "hlds_out_module.m"
      return;
    }
#line 662 "hlds_out_module.m"
  }
#line 662 "hlds_out_module.m"
}

#line 657 "hlds_out_module.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_inst_table_6_p_0_7(
#line 657 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__closure_arg,
#line 657 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_1,
#line 657 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_2,
#line 657 "hlds_out_module.m"
  MR_Box * hlds__hlds_out__hlds_out_module__wrapper_arg_3,
#line 657 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_4,
#line 657 "hlds_out_module.m"
  MR_Box * hlds__hlds_out__hlds_out_module__wrapper_arg_5)
#line 657 "hlds_out_module.m"
{
#line 657 "hlds_out_module.m"
  {
#line 657 "hlds_out_module.m"
    MR_Box hlds__hlds_out__hlds_out_module__closure = hlds__hlds_out__hlds_out_module__closure_arg;
#line 657 "hlds_out_module.m"
    MR_Integer hlds__hlds_out__hlds_out_module__conv7_HeadVar__6_141;

#line 657 "hlds_out_module.m"
    {
#line 657 "hlds_out_module.m"
      hlds__hlds_out__hlds_out_module__IntroducedFrom__pred__write_inst_table__657__1_8_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__closure, (MR_Integer) 3))), ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__closure, (MR_Integer) 5))), ((MR_Word) hlds__hlds_out__hlds_out_module__wrapper_arg_1), ((MR_Integer) hlds__hlds_out__hlds_out_module__wrapper_arg_2), &hlds__hlds_out__hlds_out_module__conv7_HeadVar__6_141);
    }
#line 657 "hlds_out_module.m"
    *hlds__hlds_out__hlds_out_module__wrapper_arg_3 = ((MR_Box) (hlds__hlds_out__hlds_out_module__conv7_HeadVar__6_141));
#line 657 "hlds_out_module.m"
  }
#line 657 "hlds_out_module.m"
}

#line 657 "hlds_out_module.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_inst_table_6_p_0_6(
#line 657 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__closure_arg,
#line 657 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_1,
#line 657 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_2,
#line 657 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_3,
#line 657 "hlds_out_module.m"
  MR_Box * hlds__hlds_out__hlds_out_module__wrapper_arg_4)
#line 657 "hlds_out_module.m"
{
#line 657 "hlds_out_module.m"
  {
#line 657 "hlds_out_module.m"
    MR_Box hlds__hlds_out__hlds_out_module__closure = hlds__hlds_out__hlds_out_module__closure_arg;

#line 657 "hlds_out_module.m"
    {
#line 657 "hlds_out_module.m"
      hlds__hlds_out__hlds_out_module__write_key_ground_inst_4_p_0(((MR_Word) hlds__hlds_out__hlds_out_module__wrapper_arg_1), ((MR_Word) hlds__hlds_out__hlds_out_module__wrapper_arg_2));
#line 657 "hlds_out_module.m"
      return;
    }
#line 657 "hlds_out_module.m"
  }
#line 657 "hlds_out_module.m"
}

#line 652 "hlds_out_module.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_inst_table_6_p_0_5(
#line 652 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__closure_arg,
#line 652 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_1,
#line 652 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_2,
#line 652 "hlds_out_module.m"
  MR_Box * hlds__hlds_out__hlds_out_module__wrapper_arg_3,
#line 652 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_4,
#line 652 "hlds_out_module.m"
  MR_Box * hlds__hlds_out__hlds_out_module__wrapper_arg_5)
#line 652 "hlds_out_module.m"
{
#line 652 "hlds_out_module.m"
  {
#line 652 "hlds_out_module.m"
    MR_Box hlds__hlds_out__hlds_out_module__closure = hlds__hlds_out__hlds_out_module__closure_arg;
#line 652 "hlds_out_module.m"
    MR_Integer hlds__hlds_out__hlds_out_module__conv4_HeadVar__6_130;

#line 652 "hlds_out_module.m"
    {
#line 652 "hlds_out_module.m"
      hlds__hlds_out__hlds_out_module__IntroducedFrom__pred__write_inst_table__652__1_8_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__closure, (MR_Integer) 3))), ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__closure, (MR_Integer) 5))), ((MR_Word) hlds__hlds_out__hlds_out_module__wrapper_arg_1), ((MR_Integer) hlds__hlds_out__hlds_out_module__wrapper_arg_2), &hlds__hlds_out__hlds_out_module__conv4_HeadVar__6_130);
    }
#line 652 "hlds_out_module.m"
    *hlds__hlds_out__hlds_out_module__wrapper_arg_3 = ((MR_Box) (hlds__hlds_out__hlds_out_module__conv4_HeadVar__6_130));
#line 652 "hlds_out_module.m"
  }
#line 652 "hlds_out_module.m"
}

#line 652 "hlds_out_module.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_inst_table_6_p_0_4(
#line 652 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__closure_arg,
#line 652 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_1,
#line 652 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_2,
#line 652 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_3,
#line 652 "hlds_out_module.m"
  MR_Box * hlds__hlds_out__hlds_out_module__wrapper_arg_4)
#line 652 "hlds_out_module.m"
{
#line 652 "hlds_out_module.m"
  {
#line 652 "hlds_out_module.m"
    MR_Box hlds__hlds_out__hlds_out_module__closure = hlds__hlds_out__hlds_out_module__closure_arg;

#line 652 "hlds_out_module.m"
    {
#line 652 "hlds_out_module.m"
      hlds__hlds_out__hlds_out_module__write_key_merge_inst_4_p_0(((MR_Word) hlds__hlds_out__hlds_out_module__wrapper_arg_1), ((MR_Word) hlds__hlds_out__hlds_out_module__wrapper_arg_2));
#line 652 "hlds_out_module.m"
      return;
    }
#line 652 "hlds_out_module.m"
  }
#line 652 "hlds_out_module.m"
}

#line 647 "hlds_out_module.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_inst_table_6_p_0_3(
#line 647 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__closure_arg,
#line 647 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_1,
#line 647 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_2,
#line 647 "hlds_out_module.m"
  MR_Box * hlds__hlds_out__hlds_out_module__wrapper_arg_3,
#line 647 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_4,
#line 647 "hlds_out_module.m"
  MR_Box * hlds__hlds_out__hlds_out_module__wrapper_arg_5)
#line 647 "hlds_out_module.m"
{
#line 647 "hlds_out_module.m"
  {
#line 647 "hlds_out_module.m"
    MR_Box hlds__hlds_out__hlds_out_module__closure = hlds__hlds_out__hlds_out_module__closure_arg;
#line 647 "hlds_out_module.m"
    MR_Integer hlds__hlds_out__hlds_out_module__conv1_HeadVar__6_118;

#line 647 "hlds_out_module.m"
    {
#line 647 "hlds_out_module.m"
      hlds__hlds_out__hlds_out_module__IntroducedFrom__pred__write_inst_table__647__1_8_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__closure, (MR_Integer) 3))), ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__closure, (MR_Integer) 5))), ((MR_Word) hlds__hlds_out__hlds_out_module__wrapper_arg_1), ((MR_Integer) hlds__hlds_out__hlds_out_module__wrapper_arg_2), &hlds__hlds_out__hlds_out_module__conv1_HeadVar__6_118);
    }
#line 647 "hlds_out_module.m"
    *hlds__hlds_out__hlds_out_module__wrapper_arg_3 = ((MR_Box) (hlds__hlds_out__hlds_out_module__conv1_HeadVar__6_118));
#line 647 "hlds_out_module.m"
  }
#line 647 "hlds_out_module.m"
}

#line 647 "hlds_out_module.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_inst_table_6_p_0_2(
#line 647 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__closure_arg,
#line 647 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_1,
#line 647 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_2,
#line 647 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_3,
#line 647 "hlds_out_module.m"
  MR_Box * hlds__hlds_out__hlds_out_module__wrapper_arg_4)
#line 647 "hlds_out_module.m"
{
#line 647 "hlds_out_module.m"
  {
#line 647 "hlds_out_module.m"
    MR_Box hlds__hlds_out__hlds_out_module__closure = hlds__hlds_out__hlds_out_module__closure_arg;

#line 647 "hlds_out_module.m"
    {
#line 647 "hlds_out_module.m"
      hlds__hlds_out__hlds_out_module__write_key_unify_inst_4_p_0(((MR_Word) hlds__hlds_out__hlds_out_module__wrapper_arg_1), ((MR_Word) hlds__hlds_out__hlds_out_module__wrapper_arg_2));
#line 647 "hlds_out_module.m"
      return;
    }
#line 647 "hlds_out_module.m"
  }
#line 647 "hlds_out_module.m"
}

#line 644 "hlds_out_module.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_inst_table_6_p_0_1(
#line 644 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__closure_arg,
#line 644 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_1,
#line 644 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_2,
#line 644 "hlds_out_module.m"
  MR_Box * hlds__hlds_out__hlds_out_module__wrapper_arg_3)
#line 644 "hlds_out_module.m"
{
#line 644 "hlds_out_module.m"
  {
#line 644 "hlds_out_module.m"
    MR_Box hlds__hlds_out__hlds_out_module__closure = hlds__hlds_out__hlds_out_module__closure_arg;

#line 644 "hlds_out_module.m"
    {
#line 644 "hlds_out_module.m"
      hlds__hlds_out__hlds_out_module__write_user_inst_4_p_0(((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__closure, (MR_Integer) 3))), ((MR_Word) hlds__hlds_out__hlds_out_module__wrapper_arg_1));
#line 644 "hlds_out_module.m"
      return;
    }
#line 644 "hlds_out_module.m"
  }
#line 644 "hlds_out_module.m"
}

#line 618 "hlds_out_module.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_inst_table_6_p_0(
#line 618 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__Lang_7,
#line 618 "hlds_out_module.m"
  MR_Integer hlds__hlds_out__hlds_out_module__Indent_8,
#line 618 "hlds_out_module.m"
  MR_Integer hlds__hlds_out__hlds_out_module__Limit_9,
#line 618 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__InstTable_10)
#line 618 "hlds_out_module.m"
{
#line 621 "hlds_out_module.m"
  {
#line 621 "hlds_out_module.m"
    MR_bool hlds__hlds_out__hlds_out_module__succeeded;
#line 621 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__TypeCtorInfo_115_115;
#line 621 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__TypeCtorInfo_127_127;
#line 621 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__TypeInfo_171_171;
#line 621 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__UserInstTable_12;
#line 621 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__UnifyInstTable_13;
#line 621 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__MergeInstTable_14;
#line 621 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__GroundInstTable_15;
#line 621 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__AnyInstTable_16;
#line 621 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__SharedInstTable_17;
#line 621 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__MostlyUniqInstTable_18;
#line 621 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__UserInstPairs_19;
#line 621 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__UnifyInstPairs_20;
#line 621 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__MergeInstPairs_21;
#line 621 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__GroundInstPairs_22;
#line 621 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__AnyInstPairs_23;
#line 621 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__SharedInstPairs_24;
#line 621 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__MostlyUniqInstPairs_25;
#line 621 "hlds_out_module.m"
    MR_Integer hlds__hlds_out__hlds_out_module__NumUnifyInsts_26;
#line 621 "hlds_out_module.m"
    MR_Integer hlds__hlds_out__hlds_out_module__NumMergeInsts_27;
#line 621 "hlds_out_module.m"
    MR_Integer hlds__hlds_out__hlds_out_module__NumGroundInsts_28;
#line 621 "hlds_out_module.m"
    MR_Integer hlds__hlds_out__hlds_out_module__NumAnyInsts_29;
#line 621 "hlds_out_module.m"
    MR_Integer hlds__hlds_out__hlds_out_module__NumSharedInsts_30;
#line 621 "hlds_out_module.m"
    MR_Integer hlds__hlds_out__hlds_out_module__NumMostlyUniqInsts_31;
#line 621 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__V_40_40;
#line 621 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__V_44_44;
#line 621 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__V_55_55;
#line 621 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__V_66_66;
#line 621 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__V_77_77;
#line 621 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__V_88_88;
#line 621 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__V_99_99;
#line 621 "hlds_out_module.m"
    MR_String hlds__hlds_out__hlds_out_module__V_185_185;
#line 621 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__V_191_191;
#line 621 "hlds_out_module.m"
    MR_String hlds__hlds_out__hlds_out_module__V_196_196;
#line 621 "hlds_out_module.m"
    MR_String hlds__hlds_out__hlds_out_module__V_207_207;
#line 621 "hlds_out_module.m"
    MR_String hlds__hlds_out__hlds_out_module__V_218_218;
#line 621 "hlds_out_module.m"
    MR_String hlds__hlds_out__hlds_out_module__V_229_229;
#line 621 "hlds_out_module.m"
    MR_String hlds__hlds_out__hlds_out_module__V_240_240;
#line 644 "hlds_out_module.m"
    MR_Box hlds__hlds_out__hlds_out_module__conv0_STATE_VARIABLE_IO_41_41;
#line 647 "hlds_out_module.m"
    MR_Box hlds__hlds_out__hlds_out_module__conv3_NumUnifyInsts_26;
#line 647 "hlds_out_module.m"
    MR_Box hlds__hlds_out__hlds_out_module__conv2_STATE_VARIABLE_IO_46_46;
#line 652 "hlds_out_module.m"
    MR_Box hlds__hlds_out__hlds_out_module__conv6_NumMergeInsts_27;
#line 652 "hlds_out_module.m"
    MR_Box hlds__hlds_out__hlds_out_module__conv5_STATE_VARIABLE_IO_57_57;
#line 657 "hlds_out_module.m"
    MR_Box hlds__hlds_out__hlds_out_module__conv9_NumGroundInsts_28;
#line 657 "hlds_out_module.m"
    MR_Box hlds__hlds_out__hlds_out_module__conv8_STATE_VARIABLE_IO_68_68;
#line 662 "hlds_out_module.m"
    MR_Box hlds__hlds_out__hlds_out_module__conv12_NumAnyInsts_29;
#line 662 "hlds_out_module.m"
    MR_Box hlds__hlds_out__hlds_out_module__conv11_STATE_VARIABLE_IO_79_79;
#line 667 "hlds_out_module.m"
    MR_Box hlds__hlds_out__hlds_out_module__conv15_NumSharedInsts_30;
#line 667 "hlds_out_module.m"
    MR_Box hlds__hlds_out__hlds_out_module__conv14_STATE_VARIABLE_IO_90_90;
#line 672 "hlds_out_module.m"
    MR_Box hlds__hlds_out__hlds_out_module__conv18_NumMostlyUniqInsts_31;
#line 672 "hlds_out_module.m"
    MR_Box hlds__hlds_out__hlds_out_module__conv17_STATE_VARIABLE_IO_101_101;

#line 622 "hlds_out_module.m"
    {
#line 622 "hlds_out_module.m"
      hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_module__Indent_8);
    }
#line 623 "hlds_out_module.m"
    {
#line 623 "hlds_out_module.m"
      mercury__io__write_string_3_p_0((MR_String) "%-------- Insts --------\n");
    }
#line 625 "hlds_out_module.m"
    {
#line 625 "hlds_out_module.m"
      hlds__hlds_data__inst_table_get_user_insts_2_p_0(hlds__hlds_out__hlds_out_module__InstTable_10, &hlds__hlds_out__hlds_out_module__UserInstTable_12);
    }
#line 626 "hlds_out_module.m"
    {
#line 626 "hlds_out_module.m"
      hlds__hlds_data__inst_table_get_unify_insts_2_p_0(hlds__hlds_out__hlds_out_module__InstTable_10, &hlds__hlds_out__hlds_out_module__UnifyInstTable_13);
    }
#line 627 "hlds_out_module.m"
    {
#line 627 "hlds_out_module.m"
      hlds__hlds_data__inst_table_get_merge_insts_2_p_0(hlds__hlds_out__hlds_out_module__InstTable_10, &hlds__hlds_out__hlds_out_module__MergeInstTable_14);
    }
#line 628 "hlds_out_module.m"
    {
#line 628 "hlds_out_module.m"
      hlds__hlds_data__inst_table_get_ground_insts_2_p_0(hlds__hlds_out__hlds_out_module__InstTable_10, &hlds__hlds_out__hlds_out_module__GroundInstTable_15);
    }
#line 629 "hlds_out_module.m"
    {
#line 629 "hlds_out_module.m"
      hlds__hlds_data__inst_table_get_any_insts_2_p_0(hlds__hlds_out__hlds_out_module__InstTable_10, &hlds__hlds_out__hlds_out_module__AnyInstTable_16);
    }
#line 630 "hlds_out_module.m"
    {
#line 630 "hlds_out_module.m"
      hlds__hlds_data__inst_table_get_shared_insts_2_p_0(hlds__hlds_out__hlds_out_module__InstTable_10, &hlds__hlds_out__hlds_out_module__SharedInstTable_17);
    }
#line 631 "hlds_out_module.m"
    {
#line 631 "hlds_out_module.m"
      hlds__hlds_data__inst_table_get_mostly_uniq_insts_2_p_0(hlds__hlds_out__hlds_out_module__InstTable_10, &hlds__hlds_out__hlds_out_module__MostlyUniqInstTable_18);
    }
#line 633 "hlds_out_module.m"
    {
#line 633 "hlds_out_module.m"
      mercury__map__to_sorted_assoc_list_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_id_0, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_inst_defn_0, hlds__hlds_out__hlds_out_module__UserInstTable_12, &hlds__hlds_out__hlds_out_module__UserInstPairs_19);
    }
#line 634 "hlds_out_module.m"
    {
#line 634 "hlds_out_module.m"
      hlds__hlds_data__unify_insts_to_sorted_pairs_2_p_0(hlds__hlds_out__hlds_out_module__UnifyInstTable_13, &hlds__hlds_out__hlds_out_module__UnifyInstPairs_20);
    }
#line 635 "hlds_out_module.m"
    {
#line 635 "hlds_out_module.m"
      hlds__hlds_data__merge_insts_to_sorted_pairs_2_p_0(hlds__hlds_out__hlds_out_module__MergeInstTable_14, &hlds__hlds_out__hlds_out_module__MergeInstPairs_21);
    }
#line 636 "hlds_out_module.m"
    {
#line 636 "hlds_out_module.m"
      hlds__hlds_data__ground_insts_to_sorted_pairs_2_p_0(hlds__hlds_out__hlds_out_module__GroundInstTable_15, &hlds__hlds_out__hlds_out_module__GroundInstPairs_22);
    }
#line 637 "hlds_out_module.m"
    {
#line 637 "hlds_out_module.m"
      hlds__hlds_data__any_insts_to_sorted_pairs_2_p_0(hlds__hlds_out__hlds_out_module__AnyInstTable_16, &hlds__hlds_out__hlds_out_module__AnyInstPairs_23);
    }
#line 638 "hlds_out_module.m"
    {
#line 638 "hlds_out_module.m"
      hlds__hlds_data__shared_insts_to_sorted_pairs_2_p_0(hlds__hlds_out__hlds_out_module__SharedInstTable_17, &hlds__hlds_out__hlds_out_module__SharedInstPairs_24);
    }
#line 639 "hlds_out_module.m"
    {
#line 639 "hlds_out_module.m"
      hlds__hlds_data__mostly_uniq_insts_to_sorted_pairs_2_p_0(hlds__hlds_out__hlds_out_module__MostlyUniqInstTable_18, &hlds__hlds_out__hlds_out_module__MostlyUniqInstPairs_25);
    }
#line 642 "hlds_out_module.m"
    {
#line 642 "hlds_out_module.m"
      hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_module__Indent_8);
    }
#line 643 "hlds_out_module.m"
    {
#line 643 "hlds_out_module.m"
      mercury__io__write_string_3_p_0((MR_String) "%-------- User defined insts --------\n");
    }
#line 644 "hlds_out_module.m"
    {
#line 644 "hlds_out_module.m"
      hlds__hlds_out__hlds_out_module__V_40_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 644 "hlds_out_module.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__V_40_40, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_module_scalar_common_5[0]));
#line 644 "hlds_out_module.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__V_40_40, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_module__write_inst_table_6_p_0_1));
#line 644 "hlds_out_module.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__V_40_40, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 644 "hlds_out_module.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__V_40_40, 3) = ((MR_Box) (hlds__hlds_out__hlds_out_module__Indent_8));
#line 644 "hlds_out_module.m"
    }
#line 5926 "hlds.hlds_out.hlds_out_module.c"
    hlds__hlds_out__hlds_out_module__TypeCtorInfo_115_115 = (MR_Word) &mercury__io__io__type_ctor_info_state_0;
#line 644 "hlds_out_module.m"
    {
#line 644 "hlds_out_module.m"
      mercury__list__foldl_4_p_2((MR_Word) &hlds__hlds_out__hlds_out_module_scalar_common_2[2], hlds__hlds_out__hlds_out_module__TypeCtorInfo_115_115, hlds__hlds_out__hlds_out_module__V_40_40, hlds__hlds_out__hlds_out_module__UserInstPairs_19, ((MR_Box) ((MR_Integer) 0)), &hlds__hlds_out__hlds_out_module__conv0_STATE_VARIABLE_IO_41_41);
    }
#line 646 "hlds_out_module.m"
    {
#line 646 "hlds_out_module.m"
      mercury__io__write_string_3_p_0((MR_String) "%-------- Unify insts --------\n");
    }
#line 647 "hlds_out_module.m"
    {
#line 647 "hlds_out_module.m"
      hlds__hlds_out__hlds_out_module__V_44_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 647 "hlds_out_module.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__V_44_44, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_module_scalar_common_6[0]));
#line 647 "hlds_out_module.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__V_44_44, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_module__write_inst_table_6_p_0_3));
#line 647 "hlds_out_module.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__V_44_44, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 647 "hlds_out_module.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__V_44_44, 3) = ((MR_Box) (hlds__hlds_out__hlds_out_module__Lang_7));
#line 647 "hlds_out_module.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__V_44_44, 4) = ((MR_Box) (hlds__hlds_out__hlds_out_module__Limit_9));
#line 647 "hlds_out_module.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__V_44_44, 5) = ((MR_Box) (&hlds__hlds_out__hlds_out_module_scalar_common_2[16]));
#line 647 "hlds_out_module.m"
    }
#line 5956 "hlds.hlds_out.hlds_out_module.c"
    hlds__hlds_out__hlds_out_module__TypeCtorInfo_127_127 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 647 "hlds_out_module.m"
    {
#line 647 "hlds_out_module.m"
      mercury__list__foldl2_6_p_2((MR_Word) &hlds__hlds_out__hlds_out_module_scalar_common_2[3], hlds__hlds_out__hlds_out_module__TypeCtorInfo_127_127, hlds__hlds_out__hlds_out_module__TypeCtorInfo_115_115, hlds__hlds_out__hlds_out_module__V_44_44, hlds__hlds_out__hlds_out_module__UnifyInstPairs_20, ((MR_Box) ((MR_Integer) 0)), &hlds__hlds_out__hlds_out_module__conv3_NumUnifyInsts_26, ((MR_Box) ((MR_Integer) 0)), &hlds__hlds_out__hlds_out_module__conv2_STATE_VARIABLE_IO_46_46);
    }
#line 647 "hlds_out_module.m"
    hlds__hlds_out__hlds_out_module__NumUnifyInsts_26 = ((MR_Integer) hlds__hlds_out__hlds_out_module__conv3_NumUnifyInsts_26);
#line 649 "hlds_out_module.m"
    {
#line 649 "hlds_out_module.m"
      mercury__io__write_string_3_p_0((MR_String) "Total number of unify insts: ");
    }
#line 5970 "hlds.hlds_out.hlds_out_module.c"
    hlds__hlds_out__hlds_out_module__V_191_191 = (MR_Word) &hlds__hlds_out__hlds_out_module_scalar_common_7[0];
#line 649 "hlds_out_module.m"
    {
#line 649 "hlds_out_module.m"
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(hlds__hlds_out__hlds_out_module__V_191_191, hlds__hlds_out__hlds_out_module__NumUnifyInsts_26, &hlds__hlds_out__hlds_out_module__V_185_185);
    }
#line 649 "hlds_out_module.m"
    {
#line 649 "hlds_out_module.m"
      mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_module__V_185_185);
    }
#line 649 "hlds_out_module.m"
    {
#line 649 "hlds_out_module.m"
      mercury__io__write_string_3_p_0((MR_String) "\n");
    }
#line 651 "hlds_out_module.m"
    {
#line 651 "hlds_out_module.m"
      mercury__io__write_string_3_p_0((MR_String) "%-------- Merge insts --------\n");
    }
#line 652 "hlds_out_module.m"
    {
#line 652 "hlds_out_module.m"
      hlds__hlds_out__hlds_out_module__V_55_55 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 652 "hlds_out_module.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__V_55_55, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_module_scalar_common_6[1]));
#line 652 "hlds_out_module.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__V_55_55, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_module__write_inst_table_6_p_0_5));
#line 652 "hlds_out_module.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__V_55_55, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 652 "hlds_out_module.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__V_55_55, 3) = ((MR_Box) (hlds__hlds_out__hlds_out_module__Lang_7));
#line 652 "hlds_out_module.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__V_55_55, 4) = ((MR_Box) (hlds__hlds_out__hlds_out_module__Limit_9));
#line 652 "hlds_out_module.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__V_55_55, 5) = ((MR_Box) (&hlds__hlds_out__hlds_out_module_scalar_common_2[17]));
#line 652 "hlds_out_module.m"
    }
#line 652 "hlds_out_module.m"
    {
#line 652 "hlds_out_module.m"
      mercury__list__foldl2_6_p_2((MR_Word) &hlds__hlds_out__hlds_out_module_scalar_common_2[4], hlds__hlds_out__hlds_out_module__TypeCtorInfo_127_127, hlds__hlds_out__hlds_out_module__TypeCtorInfo_115_115, hlds__hlds_out__hlds_out_module__V_55_55, hlds__hlds_out__hlds_out_module__MergeInstPairs_21, ((MR_Box) ((MR_Integer) 0)), &hlds__hlds_out__hlds_out_module__conv6_NumMergeInsts_27, ((MR_Box) ((MR_Integer) 0)), &hlds__hlds_out__hlds_out_module__conv5_STATE_VARIABLE_IO_57_57);
    }
#line 652 "hlds_out_module.m"
    hlds__hlds_out__hlds_out_module__NumMergeInsts_27 = ((MR_Integer) hlds__hlds_out__hlds_out_module__conv6_NumMergeInsts_27);
#line 654 "hlds_out_module.m"
    {
#line 654 "hlds_out_module.m"
      mercury__io__write_string_3_p_0((MR_String) "Total number of merge insts: ");
    }
#line 654 "hlds_out_module.m"
    {
#line 654 "hlds_out_module.m"
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(hlds__hlds_out__hlds_out_module__V_191_191, hlds__hlds_out__hlds_out_module__NumMergeInsts_27, &hlds__hlds_out__hlds_out_module__V_196_196);
    }
#line 654 "hlds_out_module.m"
    {
#line 654 "hlds_out_module.m"
      mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_module__V_196_196);
    }
#line 654 "hlds_out_module.m"
    {
#line 654 "hlds_out_module.m"
      mercury__io__write_string_3_p_0((MR_String) "\n");
    }
#line 656 "hlds_out_module.m"
    {
#line 656 "hlds_out_module.m"
      mercury__io__write_string_3_p_0((MR_String) "%-------- Ground insts --------\n");
    }
#line 657 "hlds_out_module.m"
    {
#line 657 "hlds_out_module.m"
      hlds__hlds_out__hlds_out_module__V_66_66 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 657 "hlds_out_module.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__V_66_66, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_module_scalar_common_6[2]));
#line 657 "hlds_out_module.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__V_66_66, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_module__write_inst_table_6_p_0_7));
#line 657 "hlds_out_module.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__V_66_66, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 657 "hlds_out_module.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__V_66_66, 3) = ((MR_Box) (hlds__hlds_out__hlds_out_module__Lang_7));
#line 657 "hlds_out_module.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__V_66_66, 4) = ((MR_Box) (hlds__hlds_out__hlds_out_module__Limit_9));
#line 657 "hlds_out_module.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__V_66_66, 5) = ((MR_Box) (&hlds__hlds_out__hlds_out_module_scalar_common_2[18]));
#line 657 "hlds_out_module.m"
    }
#line 657 "hlds_out_module.m"
    {
#line 657 "hlds_out_module.m"
      mercury__list__foldl2_6_p_2((MR_Word) &hlds__hlds_out__hlds_out_module_scalar_common_2[5], hlds__hlds_out__hlds_out_module__TypeCtorInfo_127_127, hlds__hlds_out__hlds_out_module__TypeCtorInfo_115_115, hlds__hlds_out__hlds_out_module__V_66_66, hlds__hlds_out__hlds_out_module__GroundInstPairs_22, ((MR_Box) ((MR_Integer) 0)), &hlds__hlds_out__hlds_out_module__conv9_NumGroundInsts_28, ((MR_Box) ((MR_Integer) 0)), &hlds__hlds_out__hlds_out_module__conv8_STATE_VARIABLE_IO_68_68);
    }
#line 657 "hlds_out_module.m"
    hlds__hlds_out__hlds_out_module__NumGroundInsts_28 = ((MR_Integer) hlds__hlds_out__hlds_out_module__conv9_NumGroundInsts_28);
#line 659 "hlds_out_module.m"
    {
#line 659 "hlds_out_module.m"
      mercury__io__write_string_3_p_0((MR_String) "Total number of ground insts: ");
    }
#line 659 "hlds_out_module.m"
    {
#line 659 "hlds_out_module.m"
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(hlds__hlds_out__hlds_out_module__V_191_191, hlds__hlds_out__hlds_out_module__NumGroundInsts_28, &hlds__hlds_out__hlds_out_module__V_207_207);
    }
#line 659 "hlds_out_module.m"
    {
#line 659 "hlds_out_module.m"
      mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_module__V_207_207);
    }
#line 659 "hlds_out_module.m"
    {
#line 659 "hlds_out_module.m"
      mercury__io__write_string_3_p_0((MR_String) "\n");
    }
#line 661 "hlds_out_module.m"
    {
#line 661 "hlds_out_module.m"
      mercury__io__write_string_3_p_0((MR_String) "%-------- Any insts --------\n");
    }
#line 662 "hlds_out_module.m"
    {
#line 662 "hlds_out_module.m"
      hlds__hlds_out__hlds_out_module__V_77_77 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 662 "hlds_out_module.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__V_77_77, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_module_scalar_common_6[3]));
#line 662 "hlds_out_module.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__V_77_77, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_module__write_inst_table_6_p_0_9));
#line 662 "hlds_out_module.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__V_77_77, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 662 "hlds_out_module.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__V_77_77, 3) = ((MR_Box) (hlds__hlds_out__hlds_out_module__Lang_7));
#line 662 "hlds_out_module.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__V_77_77, 4) = ((MR_Box) (hlds__hlds_out__hlds_out_module__Limit_9));
#line 662 "hlds_out_module.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__V_77_77, 5) = ((MR_Box) (&hlds__hlds_out__hlds_out_module_scalar_common_2[19]));
#line 662 "hlds_out_module.m"
    }
#line 662 "hlds_out_module.m"
    {
#line 662 "hlds_out_module.m"
      mercury__list__foldl2_6_p_2((MR_Word) &hlds__hlds_out__hlds_out_module_scalar_common_2[6], hlds__hlds_out__hlds_out_module__TypeCtorInfo_127_127, hlds__hlds_out__hlds_out_module__TypeCtorInfo_115_115, hlds__hlds_out__hlds_out_module__V_77_77, hlds__hlds_out__hlds_out_module__AnyInstPairs_23, ((MR_Box) ((MR_Integer) 0)), &hlds__hlds_out__hlds_out_module__conv12_NumAnyInsts_29, ((MR_Box) ((MR_Integer) 0)), &hlds__hlds_out__hlds_out_module__conv11_STATE_VARIABLE_IO_79_79);
    }
#line 662 "hlds_out_module.m"
    hlds__hlds_out__hlds_out_module__NumAnyInsts_29 = ((MR_Integer) hlds__hlds_out__hlds_out_module__conv12_NumAnyInsts_29);
#line 664 "hlds_out_module.m"
    {
#line 664 "hlds_out_module.m"
      mercury__io__write_string_3_p_0((MR_String) "Total number of any insts: ");
    }
#line 664 "hlds_out_module.m"
    {
#line 664 "hlds_out_module.m"
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(hlds__hlds_out__hlds_out_module__V_191_191, hlds__hlds_out__hlds_out_module__NumAnyInsts_29, &hlds__hlds_out__hlds_out_module__V_218_218);
    }
#line 664 "hlds_out_module.m"
    {
#line 664 "hlds_out_module.m"
      mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_module__V_218_218);
    }
#line 664 "hlds_out_module.m"
    {
#line 664 "hlds_out_module.m"
      mercury__io__write_string_3_p_0((MR_String) "\n");
    }
#line 666 "hlds_out_module.m"
    {
#line 666 "hlds_out_module.m"
      mercury__io__write_string_3_p_0((MR_String) "%-------- Shared insts --------\n");
    }
#line 667 "hlds_out_module.m"
    {
#line 667 "hlds_out_module.m"
      hlds__hlds_out__hlds_out_module__V_88_88 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 667 "hlds_out_module.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__V_88_88, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_module_scalar_common_6[4]));
#line 667 "hlds_out_module.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__V_88_88, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_module__write_inst_table_6_p_0_11));
#line 667 "hlds_out_module.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__V_88_88, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 667 "hlds_out_module.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__V_88_88, 3) = ((MR_Box) (hlds__hlds_out__hlds_out_module__Lang_7));
#line 667 "hlds_out_module.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__V_88_88, 4) = ((MR_Box) (hlds__hlds_out__hlds_out_module__Limit_9));
#line 667 "hlds_out_module.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__V_88_88, 5) = ((MR_Box) (&hlds__hlds_out__hlds_out_module_scalar_common_2[20]));
#line 667 "hlds_out_module.m"
    }
#line 6160 "hlds.hlds_out.hlds_out_module.c"
    hlds__hlds_out__hlds_out_module__TypeInfo_171_171 = (MR_Word) &hlds__hlds_out__hlds_out_module_scalar_common_2[7];
#line 667 "hlds_out_module.m"
    {
#line 667 "hlds_out_module.m"
      mercury__list__foldl2_6_p_2(hlds__hlds_out__hlds_out_module__TypeInfo_171_171, hlds__hlds_out__hlds_out_module__TypeCtorInfo_127_127, hlds__hlds_out__hlds_out_module__TypeCtorInfo_115_115, hlds__hlds_out__hlds_out_module__V_88_88, hlds__hlds_out__hlds_out_module__SharedInstPairs_24, ((MR_Box) ((MR_Integer) 0)), &hlds__hlds_out__hlds_out_module__conv15_NumSharedInsts_30, ((MR_Box) ((MR_Integer) 0)), &hlds__hlds_out__hlds_out_module__conv14_STATE_VARIABLE_IO_90_90);
    }
#line 667 "hlds_out_module.m"
    hlds__hlds_out__hlds_out_module__NumSharedInsts_30 = ((MR_Integer) hlds__hlds_out__hlds_out_module__conv15_NumSharedInsts_30);
#line 669 "hlds_out_module.m"
    {
#line 669 "hlds_out_module.m"
      mercury__io__write_string_3_p_0((MR_String) "Total number of shared insts: ");
    }
#line 669 "hlds_out_module.m"
    {
#line 669 "hlds_out_module.m"
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(hlds__hlds_out__hlds_out_module__V_191_191, hlds__hlds_out__hlds_out_module__NumSharedInsts_30, &hlds__hlds_out__hlds_out_module__V_229_229);
    }
#line 669 "hlds_out_module.m"
    {
#line 669 "hlds_out_module.m"
      mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_module__V_229_229);
    }
#line 669 "hlds_out_module.m"
    {
#line 669 "hlds_out_module.m"
      mercury__io__write_string_3_p_0((MR_String) "\n");
    }
#line 671 "hlds_out_module.m"
    {
#line 671 "hlds_out_module.m"
      mercury__io__write_string_3_p_0((MR_String) "%-------- MostlyUniq insts --------\n");
    }
#line 672 "hlds_out_module.m"
    {
#line 672 "hlds_out_module.m"
      hlds__hlds_out__hlds_out_module__V_99_99 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 672 "hlds_out_module.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__V_99_99, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_module_scalar_common_6[4]));
#line 672 "hlds_out_module.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__V_99_99, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_module__write_inst_table_6_p_0_13));
#line 672 "hlds_out_module.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__V_99_99, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 672 "hlds_out_module.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__V_99_99, 3) = ((MR_Box) (hlds__hlds_out__hlds_out_module__Lang_7));
#line 672 "hlds_out_module.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__V_99_99, 4) = ((MR_Box) (hlds__hlds_out__hlds_out_module__Limit_9));
#line 672 "hlds_out_module.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__V_99_99, 5) = ((MR_Box) (&hlds__hlds_out__hlds_out_module_scalar_common_2[21]));
#line 672 "hlds_out_module.m"
    }
#line 672 "hlds_out_module.m"
    {
#line 672 "hlds_out_module.m"
      mercury__list__foldl2_6_p_2(hlds__hlds_out__hlds_out_module__TypeInfo_171_171, hlds__hlds_out__hlds_out_module__TypeCtorInfo_127_127, hlds__hlds_out__hlds_out_module__TypeCtorInfo_115_115, hlds__hlds_out__hlds_out_module__V_99_99, hlds__hlds_out__hlds_out_module__MostlyUniqInstPairs_25, ((MR_Box) ((MR_Integer) 0)), &hlds__hlds_out__hlds_out_module__conv18_NumMostlyUniqInsts_31, ((MR_Box) ((MR_Integer) 0)), &hlds__hlds_out__hlds_out_module__conv17_STATE_VARIABLE_IO_101_101);
    }
#line 672 "hlds_out_module.m"
    hlds__hlds_out__hlds_out_module__NumMostlyUniqInsts_31 = ((MR_Integer) hlds__hlds_out__hlds_out_module__conv18_NumMostlyUniqInsts_31);
#line 674 "hlds_out_module.m"
    {
#line 674 "hlds_out_module.m"
      mercury__io__write_string_3_p_0((MR_String) "Total number of mostly uniq insts: ");
    }
#line 675 "hlds_out_module.m"
    {
#line 675 "hlds_out_module.m"
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(hlds__hlds_out__hlds_out_module__V_191_191, hlds__hlds_out__hlds_out_module__NumMostlyUniqInsts_31, &hlds__hlds_out__hlds_out_module__V_240_240);
    }
#line 675 "hlds_out_module.m"
    {
#line 675 "hlds_out_module.m"
      mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_module__V_240_240);
    }
#line 674 "hlds_out_module.m"
    {
#line 674 "hlds_out_module.m"
      mercury__io__write_string_3_p_0((MR_String) "\n");
    }
#line 677 "hlds_out_module.m"
    {
#line 677 "hlds_out_module.m"
      mercury__io__nl_2_p_0();
#line 677 "hlds_out_module.m"
      return;
    }
#line 621 "hlds_out_module.m"
  }
#line 618 "hlds_out_module.m"
}

#line 587 "hlds_out_module.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_instance_defn_5_p_0_2(
#line 587 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__closure_arg,
#line 587 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_1,
#line 587 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_2,
#line 587 "hlds_out_module.m"
  MR_Box * hlds__hlds_out__hlds_out_module__wrapper_arg_3)
#line 587 "hlds_out_module.m"
{
#line 587 "hlds_out_module.m"
  {
#line 587 "hlds_out_module.m"
    MR_Box hlds__hlds_out__hlds_out_module__closure = hlds__hlds_out__hlds_out_module__closure_arg;

#line 587 "hlds_out_module.m"
    {
#line 587 "hlds_out_module.m"
      parse_tree__mercury_to_mercury__mercury_output_constraint_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__closure, (MR_Integer) 4))), ((MR_Word) hlds__hlds_out__hlds_out_module__wrapper_arg_1));
#line 587 "hlds_out_module.m"
      return;
    }
#line 587 "hlds_out_module.m"
  }
#line 587 "hlds_out_module.m"
}

#line 572 "hlds_out_module.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_instance_defn_5_p_0_1(
#line 572 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__closure_arg,
#line 572 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_1,
#line 572 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_2,
#line 572 "hlds_out_module.m"
  MR_Box * hlds__hlds_out__hlds_out_module__wrapper_arg_3)
#line 572 "hlds_out_module.m"
{
#line 572 "hlds_out_module.m"
  {
#line 572 "hlds_out_module.m"
    MR_Box hlds__hlds_out__hlds_out_module__closure = hlds__hlds_out__hlds_out_module__closure_arg;

#line 572 "hlds_out_module.m"
    {
#line 572 "hlds_out_module.m"
      parse_tree__mercury_to_mercury__mercury_output_type_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__closure, (MR_Integer) 4))), ((MR_Word) hlds__hlds_out__hlds_out_module__wrapper_arg_1));
#line 572 "hlds_out_module.m"
      return;
    }
#line 572 "hlds_out_module.m"
  }
#line 572 "hlds_out_module.m"
}

#line 543 "hlds_out_module.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_instance_defn_5_p_0(
#line 543 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__Info_6,
#line 543 "hlds_out_module.m"
  MR_Integer hlds__hlds_out__hlds_out_module__Indent_7,
#line 543 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__InstanceDefn_8)
#line 543 "hlds_out_module.m"
{
#line 546 "hlds_out_module.m"
  {
#line 546 "hlds_out_module.m"
    MR_bool hlds__hlds_out__hlds_out_module__succeeded;
#line 546 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__TypeCtorInfo_84_84;
#line 546 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__Context_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__InstanceDefn_8, (MR_Integer) 2)));
#line 546 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__Constraints_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__InstanceDefn_8, (MR_Integer) 3)));
#line 546 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__Types_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__InstanceDefn_8, (MR_Integer) 4)));
#line 546 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__OriginalTypes_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__InstanceDefn_8, (MR_Integer) 5)));
#line 546 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__Body_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__InstanceDefn_8, (MR_Integer) 6)));
#line 546 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__MaybePredProcIds_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__InstanceDefn_8, (MR_Integer) 7)));
#line 546 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__VarSet_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__InstanceDefn_8, (MR_Integer) 8)));
#line 546 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__ProofMap_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__InstanceDefn_8, (MR_Integer) 9)));
#line 546 "hlds_out_module.m"
    MR_String hlds__hlds_out__hlds_out_module__FileName_20;
#line 546 "hlds_out_module.m"
    MR_Integer hlds__hlds_out__hlds_out_module__LineNumber_21;
#line 546 "hlds_out_module.m"
    MR_String hlds__hlds_out__hlds_out_module__DumpOptions_22;
#line 546 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__AppendVarNums_23;
#line 546 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__PrintTerm_24;
#line 546 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__V_60_60;
#line 547 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module___InstanceModule_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__InstanceDefn_8, (MR_Integer) 0)));
#line 547 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module___Status_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__InstanceDefn_8, (MR_Integer) 1)));
#line 564 "hlds_out_module.m"
    MR_String hlds__hlds_out__hlds_out_module__V_80_80;
#line 564 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__V_81_81;
#line 564 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__V_82_82;
#line 564 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__V_83_83;

#line 551 "hlds_out_module.m"
    {
#line 551 "hlds_out_module.m"
      mercury__term__context_file_2_p_0(hlds__hlds_out__hlds_out_module__Context_12, &hlds__hlds_out__hlds_out_module__FileName_20);
    }
#line 552 "hlds_out_module.m"
    {
#line 552 "hlds_out_module.m"
      mercury__term__context_line_2_p_0(hlds__hlds_out__hlds_out_module__Context_12, &hlds__hlds_out__hlds_out_module__LineNumber_21);
    }
#line 553 "hlds_out_module.m"
    hlds__hlds_out__hlds_out_module__succeeded = (strcmp(hlds__hlds_out__hlds_out_module__FileName_20, (MR_String) "") == 0);
#line 553 "hlds_out_module.m"
    hlds__hlds_out__hlds_out_module__succeeded = !(hlds__hlds_out__hlds_out_module__succeeded);
#line 560 "hlds_out_module.m"
    if (hlds__hlds_out__hlds_out_module__succeeded)
#line 554 "hlds_out_module.m"
      {
#line 554 "hlds_out_module.m"
        {
#line 554 "hlds_out_module.m"
          hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_module__Indent_7);
        }
#line 555 "hlds_out_module.m"
        {
#line 555 "hlds_out_module.m"
          mercury__io__write_string_3_p_0((MR_String) "% context: file \140");
        }
#line 556 "hlds_out_module.m"
        {
#line 556 "hlds_out_module.m"
          mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_module__FileName_20);
        }
#line 557 "hlds_out_module.m"
        {
#line 557 "hlds_out_module.m"
          mercury__io__write_string_3_p_0((MR_String) "\', line ");
        }
#line 558 "hlds_out_module.m"
        {
#line 558 "hlds_out_module.m"
          mercury__io__write_int_3_p_0(hlds__hlds_out__hlds_out_module__LineNumber_21);
        }
#line 559 "hlds_out_module.m"
        {
#line 559 "hlds_out_module.m"
          mercury__io__write_string_3_p_0((MR_String) "\n");
        }
#line 554 "hlds_out_module.m"
      }
#line 560 "hlds_out_module.m"
    else
#line 560 "hlds_out_module.m"
      {
#line 560 "hlds_out_module.m"
      }
#line 564 "hlds_out_module.m"
    hlds__hlds_out__hlds_out_module__DumpOptions_22 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__Info_6, (MR_Integer) 0)));
#line 564 "hlds_out_module.m"
    hlds__hlds_out__hlds_out_module__V_80_80 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__Info_6, (MR_Integer) 1)));
#line 564 "hlds_out_module.m"
    hlds__hlds_out__hlds_out_module__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__Info_6, (MR_Integer) 2)));
#line 564 "hlds_out_module.m"
    hlds__hlds_out__hlds_out_module__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__Info_6, (MR_Integer) 3)));
#line 564 "hlds_out_module.m"
    hlds__hlds_out__hlds_out_module__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__Info_6, (MR_Integer) 4)));
#line 565 "hlds_out_module.m"
    {
#line 565 "hlds_out_module.m"
      hlds__hlds_out__hlds_out_module__succeeded = mercury__string__contains_char_2_p_0(hlds__hlds_out__hlds_out_module__DumpOptions_22, (MR_Char) 118);
    }
#line 567 "hlds_out_module.m"
    if (hlds__hlds_out__hlds_out_module__succeeded)
#line 566 "hlds_out_module.m"
      hlds__hlds_out__hlds_out_module__AppendVarNums_23 = (MR_Integer) 1;
#line 567 "hlds_out_module.m"
    else
#line 568 "hlds_out_module.m"
      hlds__hlds_out__hlds_out_module__AppendVarNums_23 = (MR_Integer) 0;
#line 572 "hlds_out_module.m"
    {
#line 572 "hlds_out_module.m"
      hlds__hlds_out__hlds_out_module__PrintTerm_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 572 "hlds_out_module.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__PrintTerm_24, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_module_scalar_common_4[4]));
#line 572 "hlds_out_module.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__PrintTerm_24, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_module__write_instance_defn_5_p_0_1));
#line 572 "hlds_out_module.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__PrintTerm_24, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 572 "hlds_out_module.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__PrintTerm_24, 3) = ((MR_Box) (hlds__hlds_out__hlds_out_module__VarSet_18));
#line 572 "hlds_out_module.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__PrintTerm_24, 4) = ((MR_Box) (hlds__hlds_out__hlds_out_module__AppendVarNums_23));
#line 572 "hlds_out_module.m"
    }
#line 575 "hlds_out_module.m"
    {
#line 575 "hlds_out_module.m"
      hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_module__Indent_7);
    }
#line 576 "hlds_out_module.m"
    {
#line 576 "hlds_out_module.m"
      mercury__io__write_string_3_p_0((MR_String) "% Types: ");
    }
#line 6474 "hlds.hlds_out.hlds_out_module.c"
    hlds__hlds_out__hlds_out_module__TypeCtorInfo_84_84 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
#line 577 "hlds_out_module.m"
    {
#line 577 "hlds_out_module.m"
      mercury__io__write_list_5_p_0(hlds__hlds_out__hlds_out_module__TypeCtorInfo_84_84, hlds__hlds_out__hlds_out_module__Types_14, (MR_String) ", ", hlds__hlds_out__hlds_out_module__PrintTerm_24);
    }
#line 578 "hlds_out_module.m"
    {
#line 578 "hlds_out_module.m"
      mercury__io__nl_2_p_0();
    }
#line 579 "hlds_out_module.m"
    {
#line 579 "hlds_out_module.m"
      hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_module__Indent_7);
    }
#line 580 "hlds_out_module.m"
    {
#line 580 "hlds_out_module.m"
      mercury__io__write_string_3_p_0((MR_String) "% Original types: ");
    }
#line 581 "hlds_out_module.m"
    {
#line 581 "hlds_out_module.m"
      mercury__io__write_list_5_p_0(hlds__hlds_out__hlds_out_module__TypeCtorInfo_84_84, hlds__hlds_out__hlds_out_module__OriginalTypes_15, (MR_String) ", ", hlds__hlds_out__hlds_out_module__PrintTerm_24);
    }
#line 582 "hlds_out_module.m"
    {
#line 582 "hlds_out_module.m"
      mercury__io__nl_2_p_0();
    }
#line 584 "hlds_out_module.m"
    {
#line 584 "hlds_out_module.m"
      hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_module__Indent_7);
    }
#line 585 "hlds_out_module.m"
    {
#line 585 "hlds_out_module.m"
      mercury__io__write_string_3_p_0((MR_String) "% Constraints: ");
    }
#line 587 "hlds_out_module.m"
    {
#line 587 "hlds_out_module.m"
      hlds__hlds_out__hlds_out_module__V_60_60 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 587 "hlds_out_module.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__V_60_60, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_module_scalar_common_4[1]));
#line 587 "hlds_out_module.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__V_60_60, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_module__write_instance_defn_5_p_0_2));
#line 587 "hlds_out_module.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__V_60_60, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 587 "hlds_out_module.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__V_60_60, 3) = ((MR_Box) (hlds__hlds_out__hlds_out_module__VarSet_18));
#line 587 "hlds_out_module.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__V_60_60, 4) = ((MR_Box) (hlds__hlds_out__hlds_out_module__AppendVarNums_23));
#line 587 "hlds_out_module.m"
    }
#line 586 "hlds_out_module.m"
    {
#line 586 "hlds_out_module.m"
      mercury__io__write_list_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0, hlds__hlds_out__hlds_out_module__Constraints_13, (MR_String) ", ", hlds__hlds_out__hlds_out_module__V_60_60);
    }
#line 588 "hlds_out_module.m"
    {
#line 588 "hlds_out_module.m"
      mercury__io__nl_2_p_0();
    }
#line 590 "hlds_out_module.m"
    {
#line 590 "hlds_out_module.m"
      hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_module__Indent_7);
    }
#line 594 "hlds_out_module.m"
    if ((hlds__hlds_out__hlds_out_module__Body_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 592 "hlds_out_module.m"
      {
#line 593 "hlds_out_module.m"
        {
#line 593 "hlds_out_module.m"
          mercury__io__write_string_3_p_0((MR_String) "% abstract");
        }
#line 592 "hlds_out_module.m"
      }
#line 594 "hlds_out_module.m"
    else
#line 595 "hlds_out_module.m"
      {
#line 595 "hlds_out_module.m"
        MR_Word hlds__hlds_out__hlds_out_module__Methods_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_module__Body_16, (MR_Integer) 0)));

#line 596 "hlds_out_module.m"
        {
#line 596 "hlds_out_module.m"
          mercury__io__write_string_3_p_0((MR_String) "% Instance Methods: ");
        }
#line 597 "hlds_out_module.m"
        {
#line 597 "hlds_out_module.m"
          parse_tree__mercury_to_mercury__mercury_output_instance_methods_3_p_0(hlds__hlds_out__hlds_out_module__Methods_27);
        }
#line 595 "hlds_out_module.m"
      }
#line 599 "hlds_out_module.m"
    {
#line 599 "hlds_out_module.m"
      mercury__io__nl_2_p_0();
    }
#line 607 "hlds_out_module.m"
    if ((hlds__hlds_out__hlds_out_module__MaybePredProcIds_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 608 "hlds_out_module.m"
      {
#line 608 "hlds_out_module.m"
      }
#line 607 "hlds_out_module.m"
    else
#line 602 "hlds_out_module.m"
      {
#line 602 "hlds_out_module.m"
        MR_Word hlds__hlds_out__hlds_out_module__PredProcIds_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_module__MaybePredProcIds_17, (MR_Integer) 0)));

#line 603 "hlds_out_module.m"
        {
#line 603 "hlds_out_module.m"
          hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_module__Indent_7);
        }
#line 604 "hlds_out_module.m"
        {
#line 604 "hlds_out_module.m"
          mercury__io__write_string_3_p_0((MR_String) "% procedures: ");
        }
#line 605 "hlds_out_module.m"
        {
#line 605 "hlds_out_module.m"
          mercury__io__write_3_p_0((MR_Word) &hlds__hlds_out__hlds_out_module_scalar_common_1[2], ((MR_Box) (hlds__hlds_out__hlds_out_module__PredProcIds_28)));
        }
#line 606 "hlds_out_module.m"
        {
#line 606 "hlds_out_module.m"
          mercury__io__nl_2_p_0();
        }
#line 602 "hlds_out_module.m"
      }
#line 610 "hlds_out_module.m"
    {
#line 610 "hlds_out_module.m"
      hlds__hlds_out__hlds_out_util__write_constraint_proof_map_6_p_0(hlds__hlds_out__hlds_out_module__Indent_7, hlds__hlds_out__hlds_out_module__VarSet_18, hlds__hlds_out__hlds_out_module__ProofMap_19, hlds__hlds_out__hlds_out_module__AppendVarNums_23);
    }
#line 611 "hlds_out_module.m"
    {
#line 611 "hlds_out_module.m"
      mercury__io__nl_2_p_0();
#line 611 "hlds_out_module.m"
      return;
    }
#line 546 "hlds_out_module.m"
  }
#line 543 "hlds_out_module.m"
}

#line 540 "hlds_out_module.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_instance_defns_5_p_0_1(
#line 540 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__closure_arg,
#line 540 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_1,
#line 540 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_2,
#line 540 "hlds_out_module.m"
  MR_Box * hlds__hlds_out__hlds_out_module__wrapper_arg_3)
#line 540 "hlds_out_module.m"
{
#line 540 "hlds_out_module.m"
  {
#line 540 "hlds_out_module.m"
    MR_Box hlds__hlds_out__hlds_out_module__closure = hlds__hlds_out__hlds_out_module__closure_arg;

#line 540 "hlds_out_module.m"
    {
#line 540 "hlds_out_module.m"
      hlds__hlds_out__hlds_out_module__write_instance_defn_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__closure, (MR_Integer) 3))), ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__closure, (MR_Integer) 4))), ((MR_Word) hlds__hlds_out__hlds_out_module__wrapper_arg_1));
#line 540 "hlds_out_module.m"
      return;
    }
#line 540 "hlds_out_module.m"
  }
#line 540 "hlds_out_module.m"
}

#line 532 "hlds_out_module.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_instance_defns_5_p_0(
#line 532 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__Info_6,
#line 532 "hlds_out_module.m"
  MR_Integer hlds__hlds_out__hlds_out_module__Indent_7,
#line 532 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__HeadVar__3_3)
#line 532 "hlds_out_module.m"
{
#line 535 "hlds_out_module.m"
  {
#line 535 "hlds_out_module.m"
    MR_bool hlds__hlds_out__hlds_out_module__succeeded;
#line 535 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__ClassId_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__HeadVar__3_3, (MR_Integer) 0)));
#line 535 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__InstanceDefns_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__HeadVar__3_3, (MR_Integer) 1)));
#line 535 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__V_20_20;

#line 536 "hlds_out_module.m"
    {
#line 536 "hlds_out_module.m"
      hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_module__Indent_7);
    }
#line 537 "hlds_out_module.m"
    {
#line 537 "hlds_out_module.m"
      mercury__io__write_string_3_p_0((MR_String) "% ");
    }
#line 538 "hlds_out_module.m"
    {
#line 538 "hlds_out_module.m"
      parse_tree__prog_out__write_class_id_3_p_0(hlds__hlds_out__hlds_out_module__ClassId_8);
    }
#line 539 "hlds_out_module.m"
    {
#line 539 "hlds_out_module.m"
      mercury__io__write_string_3_p_0((MR_String) ":\n");
    }
#line 540 "hlds_out_module.m"
    {
#line 540 "hlds_out_module.m"
      hlds__hlds_out__hlds_out_module__V_20_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 540 "hlds_out_module.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__V_20_20, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_module_scalar_common_4[3]));
#line 540 "hlds_out_module.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__V_20_20, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_module__write_instance_defns_5_p_0_1));
#line 540 "hlds_out_module.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__V_20_20, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 540 "hlds_out_module.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__V_20_20, 3) = ((MR_Box) (hlds__hlds_out__hlds_out_module__Info_6));
#line 540 "hlds_out_module.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__V_20_20, 4) = ((MR_Box) (hlds__hlds_out__hlds_out_module__Indent_7));
#line 540 "hlds_out_module.m"
    }
#line 540 "hlds_out_module.m"
    {
#line 540 "hlds_out_module.m"
      mercury__io__write_list_5_p_0((MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_instance_defn_0, hlds__hlds_out__hlds_out_module__InstanceDefns_9, (MR_String) "\n", hlds__hlds_out__hlds_out_module__V_20_20);
#line 540 "hlds_out_module.m"
      return;
    }
#line 535 "hlds_out_module.m"
  }
#line 532 "hlds_out_module.m"
}

#line 529 "hlds_out_module.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_instances_5_p_0_1(
#line 529 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__closure_arg,
#line 529 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_1,
#line 529 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_2,
#line 529 "hlds_out_module.m"
  MR_Box * hlds__hlds_out__hlds_out_module__wrapper_arg_3)
#line 529 "hlds_out_module.m"
{
#line 529 "hlds_out_module.m"
  {
#line 529 "hlds_out_module.m"
    MR_Box hlds__hlds_out__hlds_out_module__closure = hlds__hlds_out__hlds_out_module__closure_arg;

#line 529 "hlds_out_module.m"
    {
#line 529 "hlds_out_module.m"
      hlds__hlds_out__hlds_out_module__write_instance_defns_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__closure, (MR_Integer) 3))), ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__closure, (MR_Integer) 4))), ((MR_Word) hlds__hlds_out__hlds_out_module__wrapper_arg_1));
#line 529 "hlds_out_module.m"
      return;
    }
#line 529 "hlds_out_module.m"
  }
#line 529 "hlds_out_module.m"
}

#line 521 "hlds_out_module.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_instances_5_p_0(
#line 521 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__Info_6,
#line 521 "hlds_out_module.m"
  MR_Integer hlds__hlds_out__hlds_out_module__Indent_7,
#line 521 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__InstanceTable_8)
#line 521 "hlds_out_module.m"
{
#line 524 "hlds_out_module.m"
  {
#line 524 "hlds_out_module.m"
    MR_bool hlds__hlds_out__hlds_out_module__succeeded;
#line 524 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__InstanceTableList_10;
#line 524 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__V_17_17;

#line 525 "hlds_out_module.m"
    {
#line 525 "hlds_out_module.m"
      hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_module__Indent_7);
    }
#line 526 "hlds_out_module.m"
    {
#line 526 "hlds_out_module.m"
      mercury__io__write_string_3_p_0((MR_String) "%-------- Instances --------\n");
    }
#line 527 "hlds_out_module.m"
    {
#line 527 "hlds_out_module.m"
      mercury__map__to_assoc_list_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0, (MR_Word) &hlds__hlds_out__hlds_out_module_scalar_common_1[1], hlds__hlds_out__hlds_out_module__InstanceTable_8, &hlds__hlds_out__hlds_out_module__InstanceTableList_10);
    }
#line 529 "hlds_out_module.m"
    {
#line 529 "hlds_out_module.m"
      hlds__hlds_out__hlds_out_module__V_17_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 529 "hlds_out_module.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__V_17_17, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_module_scalar_common_4[2]));
#line 529 "hlds_out_module.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__V_17_17, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_module__write_instances_5_p_0_1));
#line 529 "hlds_out_module.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__V_17_17, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 529 "hlds_out_module.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__V_17_17, 3) = ((MR_Box) (hlds__hlds_out__hlds_out_module__Info_6));
#line 529 "hlds_out_module.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__V_17_17, 4) = ((MR_Box) (hlds__hlds_out__hlds_out_module__Indent_7));
#line 529 "hlds_out_module.m"
    }
#line 528 "hlds_out_module.m"
    {
#line 528 "hlds_out_module.m"
      mercury__io__write_list_5_p_0((MR_Word) &hlds__hlds_out__hlds_out_module_scalar_common_2[1], hlds__hlds_out__hlds_out_module__InstanceTableList_10, (MR_String) "\n\n", hlds__hlds_out__hlds_out_module__V_17_17);
    }
#line 530 "hlds_out_module.m"
    {
#line 530 "hlds_out_module.m"
      mercury__io__nl_2_p_0();
#line 530 "hlds_out_module.m"
      return;
    }
#line 524 "hlds_out_module.m"
  }
#line 521 "hlds_out_module.m"
}

#line 505 "hlds_out_module.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_class_proc_3_p_0(
#line 505 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__HeadVar__1_1)
#line 505 "hlds_out_module.m"
{
#line 507 "hlds_out_module.m"
  {
#line 507 "hlds_out_module.m"
    MR_bool hlds__hlds_out__hlds_out_module__succeeded;
#line 507 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__PredId_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__HeadVar__1_1, (MR_Integer) 0)));
#line 507 "hlds_out_module.m"
    MR_Integer hlds__hlds_out__hlds_out_module__ProcId_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__HeadVar__1_1, (MR_Integer) 1)));
#line 507 "hlds_out_module.m"
    MR_Integer hlds__hlds_out__hlds_out_module__PredInt_7;
#line 507 "hlds_out_module.m"
    MR_Integer hlds__hlds_out__hlds_out_module__ProcInt_8;

#line 508 "hlds_out_module.m"
    {
#line 508 "hlds_out_module.m"
      mercury__io__write_string_3_p_0((MR_String) "hlds_class_proc(pred_id:");
    }
#line 509 "hlds_out_module.m"
    {
#line 509 "hlds_out_module.m"
      hlds__hlds_pred__pred_id_to_int_2_p_0(hlds__hlds_out__hlds_out_module__PredId_4, &hlds__hlds_out__hlds_out_module__PredInt_7);
    }
#line 510 "hlds_out_module.m"
    {
#line 510 "hlds_out_module.m"
      mercury__io__write_int_3_p_0(hlds__hlds_out__hlds_out_module__PredInt_7);
    }
#line 511 "hlds_out_module.m"
    {
#line 511 "hlds_out_module.m"
      mercury__io__write_string_3_p_0((MR_String) ", proc_id:");
    }
#line 512 "hlds_out_module.m"
    {
#line 512 "hlds_out_module.m"
      hlds__hlds_pred__proc_id_to_int_2_p_0(hlds__hlds_out__hlds_out_module__ProcId_5, &hlds__hlds_out__hlds_out_module__ProcInt_8);
    }
#line 513 "hlds_out_module.m"
    {
#line 513 "hlds_out_module.m"
      mercury__io__write_int_3_p_0(hlds__hlds_out__hlds_out_module__ProcInt_8);
    }
#line 514 "hlds_out_module.m"
    {
#line 514 "hlds_out_module.m"
      mercury__io__write_char_3_p_0((MR_Char) 41);
#line 514 "hlds_out_module.m"
      return;
    }
#line 507 "hlds_out_module.m"
  }
#line 505 "hlds_out_module.m"
}

#line 498 "hlds_out_module.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_module__hlds_output_fundep_3_p_0_2(
#line 498 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__closure_arg,
#line 498 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_1,
#line 498 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_2,
#line 498 "hlds_out_module.m"
  MR_Box * hlds__hlds_out__hlds_out_module__wrapper_arg_3)
#line 498 "hlds_out_module.m"
{
#line 498 "hlds_out_module.m"
  {
#line 498 "hlds_out_module.m"
    MR_Box hlds__hlds_out__hlds_out_module__closure = hlds__hlds_out__hlds_out_module__closure_arg;

#line 498 "hlds_out_module.m"
    {
#line 498 "hlds_out_module.m"
      mercury__io__write_int_3_p_0(((MR_Integer) hlds__hlds_out__hlds_out_module__wrapper_arg_1));
#line 498 "hlds_out_module.m"
      return;
    }
#line 498 "hlds_out_module.m"
  }
#line 498 "hlds_out_module.m"
}

#line 495 "hlds_out_module.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_module__hlds_output_fundep_3_p_0_1(
#line 495 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__closure_arg,
#line 495 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_1,
#line 495 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_2,
#line 495 "hlds_out_module.m"
  MR_Box * hlds__hlds_out__hlds_out_module__wrapper_arg_3)
#line 495 "hlds_out_module.m"
{
#line 495 "hlds_out_module.m"
  {
#line 495 "hlds_out_module.m"
    MR_Box hlds__hlds_out__hlds_out_module__closure = hlds__hlds_out__hlds_out_module__closure_arg;

#line 495 "hlds_out_module.m"
    {
#line 495 "hlds_out_module.m"
      mercury__io__write_int_3_p_0(((MR_Integer) hlds__hlds_out__hlds_out_module__wrapper_arg_1));
#line 495 "hlds_out_module.m"
      return;
    }
#line 495 "hlds_out_module.m"
  }
#line 495 "hlds_out_module.m"
}

#line 490 "hlds_out_module.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_module__hlds_output_fundep_3_p_0(
#line 490 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__HeadVar__1_1)
#line 490 "hlds_out_module.m"
{
#line 492 "hlds_out_module.m"
  {
#line 492 "hlds_out_module.m"
    MR_bool hlds__hlds_out__hlds_out_module__succeeded;
#line 492 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__TypeCtorInfo_23_23;
#line 492 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__Domain_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__HeadVar__1_1, (MR_Integer) 0)));
#line 492 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__Range_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__HeadVar__1_1, (MR_Integer) 1)));
#line 492 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__DomainList_7;
#line 492 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__RangeList_8;

#line 493 "hlds_out_module.m"
    {
#line 493 "hlds_out_module.m"
      mercury__io__write_char_3_p_0((MR_Char) 40);
    }
#line 6981 "hlds.hlds_out.hlds_out_module.c"
    hlds__hlds_out__hlds_out_module__TypeCtorInfo_23_23 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 494 "hlds_out_module.m"
    {
#line 494 "hlds_out_module.m"
      hlds__hlds_out__hlds_out_module__DomainList_7 = mercury__set__to_sorted_list_1_f_0(hlds__hlds_out__hlds_out_module__TypeCtorInfo_23_23, hlds__hlds_out__hlds_out_module__Domain_4);
    }
#line 495 "hlds_out_module.m"
    {
#line 495 "hlds_out_module.m"
      mercury__io__write_list_5_p_0(hlds__hlds_out__hlds_out_module__TypeCtorInfo_23_23, hlds__hlds_out__hlds_out_module__DomainList_7, (MR_String) ", ", (MR_Word) &hlds__hlds_out__hlds_out_module_scalar_common_2[14]);
    }
#line 496 "hlds_out_module.m"
    {
#line 496 "hlds_out_module.m"
      mercury__io__write_string_3_p_0((MR_String) " -> ");
    }
#line 497 "hlds_out_module.m"
    {
#line 497 "hlds_out_module.m"
      hlds__hlds_out__hlds_out_module__RangeList_8 = mercury__set__to_sorted_list_1_f_0(hlds__hlds_out__hlds_out_module__TypeCtorInfo_23_23, hlds__hlds_out__hlds_out_module__Range_5);
    }
#line 498 "hlds_out_module.m"
    {
#line 498 "hlds_out_module.m"
      mercury__io__write_list_5_p_0(hlds__hlds_out__hlds_out_module__TypeCtorInfo_23_23, hlds__hlds_out__hlds_out_module__RangeList_8, (MR_String) ", ", (MR_Word) &hlds__hlds_out__hlds_out_module_scalar_common_2[15]);
    }
#line 499 "hlds_out_module.m"
    {
#line 499 "hlds_out_module.m"
      mercury__io__write_char_3_p_0((MR_Char) 41);
#line 499 "hlds_out_module.m"
      return;
    }
#line 492 "hlds_out_module.m"
  }
#line 490 "hlds_out_module.m"
}

#line 487 "hlds_out_module.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_class_defn_5_p_0_3(
#line 487 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__closure_arg,
#line 487 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_1,
#line 487 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_2,
#line 487 "hlds_out_module.m"
  MR_Box * hlds__hlds_out__hlds_out_module__wrapper_arg_3)
#line 487 "hlds_out_module.m"
{
#line 487 "hlds_out_module.m"
  {
#line 487 "hlds_out_module.m"
    MR_Box hlds__hlds_out__hlds_out_module__closure = hlds__hlds_out__hlds_out_module__closure_arg;

#line 487 "hlds_out_module.m"
    {
#line 487 "hlds_out_module.m"
      hlds__hlds_out__hlds_out_module__write_class_proc_3_p_0(((MR_Word) hlds__hlds_out__hlds_out_module__wrapper_arg_1));
#line 487 "hlds_out_module.m"
      return;
    }
#line 487 "hlds_out_module.m"
  }
#line 487 "hlds_out_module.m"
}

#line 482 "hlds_out_module.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_class_defn_5_p_0_2(
#line 482 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__closure_arg,
#line 482 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_1,
#line 482 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_2,
#line 482 "hlds_out_module.m"
  MR_Box * hlds__hlds_out__hlds_out_module__wrapper_arg_3)
#line 482 "hlds_out_module.m"
{
#line 482 "hlds_out_module.m"
  {
#line 482 "hlds_out_module.m"
    MR_Box hlds__hlds_out__hlds_out_module__closure = hlds__hlds_out__hlds_out_module__closure_arg;

#line 482 "hlds_out_module.m"
    {
#line 482 "hlds_out_module.m"
      parse_tree__mercury_to_mercury__mercury_output_constraint_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__closure, (MR_Integer) 4))), ((MR_Word) hlds__hlds_out__hlds_out_module__wrapper_arg_1));
#line 482 "hlds_out_module.m"
      return;
    }
#line 482 "hlds_out_module.m"
  }
#line 482 "hlds_out_module.m"
}

#line 476 "hlds_out_module.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_class_defn_5_p_0_1(
#line 476 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__closure_arg,
#line 476 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_1,
#line 476 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_2,
#line 476 "hlds_out_module.m"
  MR_Box * hlds__hlds_out__hlds_out_module__wrapper_arg_3)
#line 476 "hlds_out_module.m"
{
#line 476 "hlds_out_module.m"
  {
#line 476 "hlds_out_module.m"
    MR_Box hlds__hlds_out__hlds_out_module__closure = hlds__hlds_out__hlds_out_module__closure_arg;

#line 476 "hlds_out_module.m"
    {
#line 476 "hlds_out_module.m"
      hlds__hlds_out__hlds_out_module__hlds_output_fundep_3_p_0(((MR_Word) hlds__hlds_out__hlds_out_module__wrapper_arg_1));
#line 476 "hlds_out_module.m"
      return;
    }
#line 476 "hlds_out_module.m"
  }
#line 476 "hlds_out_module.m"
}

#line 436 "hlds_out_module.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_class_defn_5_p_0(
#line 436 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__Info_6,
#line 436 "hlds_out_module.m"
  MR_Integer hlds__hlds_out__hlds_out_module__Indent_7,
#line 436 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__HeadVar__3_3)
#line 436 "hlds_out_module.m"
{
#line 439 "hlds_out_module.m"
  {
#line 439 "hlds_out_module.m"
    MR_bool hlds__hlds_out__hlds_out_module__succeeded;
#line 439 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__ClassId_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__HeadVar__3_3, (MR_Integer) 0)));
#line 439 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__ClassDefn_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__HeadVar__3_3, (MR_Integer) 1)));
#line 439 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__Constraints_12;
#line 439 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__FunDeps_13;
#line 439 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__Vars_15;
#line 439 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__Interface_18;
#line 439 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__VarSet_19;
#line 439 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__Context_20;
#line 439 "hlds_out_module.m"
    MR_String hlds__hlds_out__hlds_out_module__FileName_21;
#line 439 "hlds_out_module.m"
    MR_Integer hlds__hlds_out__hlds_out_module__LineNumber_22;
#line 439 "hlds_out_module.m"
    MR_String hlds__hlds_out__hlds_out_module__DumpOptions_23;
#line 439 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__AppendVarNums_24;
#line 439 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__V_59_59;
#line 446 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__V_11_11;
#line 446 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__V_14_14;
#line 446 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__V_16_16;
#line 446 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__V_17_17;
#line 462 "hlds_out_module.m"
    MR_String hlds__hlds_out__hlds_out_module__V_69_69;
#line 462 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__V_70_70;
#line 462 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__V_71_71;
#line 462 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__V_72_72;

#line 440 "hlds_out_module.m"
    {
#line 440 "hlds_out_module.m"
      hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_module__Indent_7);
    }
#line 441 "hlds_out_module.m"
    {
#line 441 "hlds_out_module.m"
      mercury__io__write_string_3_p_0((MR_String) "% ");
    }
#line 443 "hlds_out_module.m"
    {
#line 443 "hlds_out_module.m"
      parse_tree__prog_out__write_class_id_3_p_0(hlds__hlds_out__hlds_out_module__ClassId_8);
    }
#line 444 "hlds_out_module.m"
    {
#line 444 "hlds_out_module.m"
      mercury__io__write_string_3_p_0((MR_String) ":\n");
    }
#line 446 "hlds_out_module.m"
    hlds__hlds_out__hlds_out_module__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__ClassDefn_9, (MR_Integer) 0)));
#line 446 "hlds_out_module.m"
    hlds__hlds_out__hlds_out_module__Constraints_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__ClassDefn_9, (MR_Integer) 1)));
#line 446 "hlds_out_module.m"
    hlds__hlds_out__hlds_out_module__FunDeps_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__ClassDefn_9, (MR_Integer) 2)));
#line 446 "hlds_out_module.m"
    hlds__hlds_out__hlds_out_module__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__ClassDefn_9, (MR_Integer) 3)));
#line 446 "hlds_out_module.m"
    hlds__hlds_out__hlds_out_module__Vars_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__ClassDefn_9, (MR_Integer) 4)));
#line 446 "hlds_out_module.m"
    hlds__hlds_out__hlds_out_module__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__ClassDefn_9, (MR_Integer) 5)));
#line 446 "hlds_out_module.m"
    hlds__hlds_out__hlds_out_module__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__ClassDefn_9, (MR_Integer) 6)));
#line 446 "hlds_out_module.m"
    hlds__hlds_out__hlds_out_module__Interface_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__ClassDefn_9, (MR_Integer) 7)));
#line 446 "hlds_out_module.m"
    hlds__hlds_out__hlds_out_module__VarSet_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__ClassDefn_9, (MR_Integer) 8)));
#line 446 "hlds_out_module.m"
    hlds__hlds_out__hlds_out_module__Context_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__ClassDefn_9, (MR_Integer) 9)));
#line 449 "hlds_out_module.m"
    {
#line 449 "hlds_out_module.m"
      mercury__term__context_file_2_p_0(hlds__hlds_out__hlds_out_module__Context_20, &hlds__hlds_out__hlds_out_module__FileName_21);
    }
#line 450 "hlds_out_module.m"
    {
#line 450 "hlds_out_module.m"
      mercury__term__context_line_2_p_0(hlds__hlds_out__hlds_out_module__Context_20, &hlds__hlds_out__hlds_out_module__LineNumber_22);
    }
#line 451 "hlds_out_module.m"
    hlds__hlds_out__hlds_out_module__succeeded = (strcmp(hlds__hlds_out__hlds_out_module__FileName_21, (MR_String) "") == 0);
#line 451 "hlds_out_module.m"
    hlds__hlds_out__hlds_out_module__succeeded = !(hlds__hlds_out__hlds_out_module__succeeded);
#line 458 "hlds_out_module.m"
    if (hlds__hlds_out__hlds_out_module__succeeded)
#line 452 "hlds_out_module.m"
      {
#line 452 "hlds_out_module.m"
        {
#line 452 "hlds_out_module.m"
          hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_module__Indent_7);
        }
#line 453 "hlds_out_module.m"
        {
#line 453 "hlds_out_module.m"
          mercury__io__write_string_3_p_0((MR_String) "% context: file \140");
        }
#line 454 "hlds_out_module.m"
        {
#line 454 "hlds_out_module.m"
          mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_module__FileName_21);
        }
#line 455 "hlds_out_module.m"
        {
#line 455 "hlds_out_module.m"
          mercury__io__write_string_3_p_0((MR_String) "\', line ");
        }
#line 456 "hlds_out_module.m"
        {
#line 456 "hlds_out_module.m"
          mercury__io__write_int_3_p_0(hlds__hlds_out__hlds_out_module__LineNumber_22);
        }
#line 457 "hlds_out_module.m"
        {
#line 457 "hlds_out_module.m"
          mercury__io__write_string_3_p_0((MR_String) "\n");
        }
#line 452 "hlds_out_module.m"
      }
#line 458 "hlds_out_module.m"
    else
#line 458 "hlds_out_module.m"
      {
#line 458 "hlds_out_module.m"
      }
#line 462 "hlds_out_module.m"
    hlds__hlds_out__hlds_out_module__DumpOptions_23 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__Info_6, (MR_Integer) 0)));
#line 462 "hlds_out_module.m"
    hlds__hlds_out__hlds_out_module__V_69_69 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__Info_6, (MR_Integer) 1)));
#line 462 "hlds_out_module.m"
    hlds__hlds_out__hlds_out_module__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__Info_6, (MR_Integer) 2)));
#line 462 "hlds_out_module.m"
    hlds__hlds_out__hlds_out_module__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__Info_6, (MR_Integer) 3)));
#line 462 "hlds_out_module.m"
    hlds__hlds_out__hlds_out_module__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__Info_6, (MR_Integer) 4)));
#line 463 "hlds_out_module.m"
    {
#line 463 "hlds_out_module.m"
      hlds__hlds_out__hlds_out_module__succeeded = mercury__string__contains_char_2_p_0(hlds__hlds_out__hlds_out_module__DumpOptions_23, (MR_Char) 118);
    }
#line 465 "hlds_out_module.m"
    if (hlds__hlds_out__hlds_out_module__succeeded)
#line 464 "hlds_out_module.m"
      hlds__hlds_out__hlds_out_module__AppendVarNums_24 = (MR_Integer) 1;
#line 465 "hlds_out_module.m"
    else
#line 466 "hlds_out_module.m"
      hlds__hlds_out__hlds_out_module__AppendVarNums_24 = (MR_Integer) 0;
#line 469 "hlds_out_module.m"
    {
#line 469 "hlds_out_module.m"
      hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_module__Indent_7);
    }
#line 470 "hlds_out_module.m"
    {
#line 470 "hlds_out_module.m"
      mercury__io__write_string_3_p_0((MR_String) "% Vars: ");
    }
#line 471 "hlds_out_module.m"
    {
#line 471 "hlds_out_module.m"
      parse_tree__mercury_to_mercury__mercury_output_vars_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, hlds__hlds_out__hlds_out_module__VarSet_19, hlds__hlds_out__hlds_out_module__AppendVarNums_24, hlds__hlds_out__hlds_out_module__Vars_15);
    }
#line 472 "hlds_out_module.m"
    {
#line 472 "hlds_out_module.m"
      mercury__io__nl_2_p_0();
    }
#line 474 "hlds_out_module.m"
    {
#line 474 "hlds_out_module.m"
      hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_module__Indent_7);
    }
#line 475 "hlds_out_module.m"
    {
#line 475 "hlds_out_module.m"
      mercury__io__write_string_3_p_0((MR_String) "% Functional dependencies: ");
    }
#line 476 "hlds_out_module.m"
    {
#line 476 "hlds_out_module.m"
      mercury__io__write_list_5_p_0((MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_class_fundep_0, hlds__hlds_out__hlds_out_module__FunDeps_13, (MR_String) ", ", (MR_Word) &hlds__hlds_out__hlds_out_module_scalar_common_2[12]);
    }
#line 477 "hlds_out_module.m"
    {
#line 477 "hlds_out_module.m"
      mercury__io__nl_2_p_0();
    }
#line 479 "hlds_out_module.m"
    {
#line 479 "hlds_out_module.m"
      hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_module__Indent_7);
    }
#line 480 "hlds_out_module.m"
    {
#line 480 "hlds_out_module.m"
      mercury__io__write_string_3_p_0((MR_String) "% Constraints: ");
    }
#line 482 "hlds_out_module.m"
    {
#line 482 "hlds_out_module.m"
      hlds__hlds_out__hlds_out_module__V_59_59 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 482 "hlds_out_module.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__V_59_59, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_module_scalar_common_4[1]));
#line 482 "hlds_out_module.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__V_59_59, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_module__write_class_defn_5_p_0_2));
#line 482 "hlds_out_module.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__V_59_59, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 482 "hlds_out_module.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__V_59_59, 3) = ((MR_Box) (hlds__hlds_out__hlds_out_module__VarSet_19));
#line 482 "hlds_out_module.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__V_59_59, 4) = ((MR_Box) (hlds__hlds_out__hlds_out_module__AppendVarNums_24));
#line 482 "hlds_out_module.m"
    }
#line 481 "hlds_out_module.m"
    {
#line 481 "hlds_out_module.m"
      mercury__io__write_list_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0, hlds__hlds_out__hlds_out_module__Constraints_12, (MR_String) ", ", hlds__hlds_out__hlds_out_module__V_59_59);
    }
#line 483 "hlds_out_module.m"
    {
#line 483 "hlds_out_module.m"
      mercury__io__nl_2_p_0();
    }
#line 485 "hlds_out_module.m"
    {
#line 485 "hlds_out_module.m"
      hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_module__Indent_7);
    }
#line 486 "hlds_out_module.m"
    {
#line 486 "hlds_out_module.m"
      mercury__io__write_string_3_p_0((MR_String) "% Class Methods: ");
    }
#line 487 "hlds_out_module.m"
    {
#line 487 "hlds_out_module.m"
      mercury__io__write_list_5_p_0((MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_class_proc_0, hlds__hlds_out__hlds_out_module__Interface_18, (MR_String) ", ", (MR_Word) &hlds__hlds_out__hlds_out_module_scalar_common_2[13]);
    }
#line 488 "hlds_out_module.m"
    {
#line 488 "hlds_out_module.m"
      mercury__io__nl_2_p_0();
#line 488 "hlds_out_module.m"
      return;
    }
#line 439 "hlds_out_module.m"
  }
#line 436 "hlds_out_module.m"
}

#line 433 "hlds_out_module.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_classes_5_p_0_1(
#line 433 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__closure_arg,
#line 433 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_1,
#line 433 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_2,
#line 433 "hlds_out_module.m"
  MR_Box * hlds__hlds_out__hlds_out_module__wrapper_arg_3)
#line 433 "hlds_out_module.m"
{
#line 433 "hlds_out_module.m"
  {
#line 433 "hlds_out_module.m"
    MR_Box hlds__hlds_out__hlds_out_module__closure = hlds__hlds_out__hlds_out_module__closure_arg;

#line 433 "hlds_out_module.m"
    {
#line 433 "hlds_out_module.m"
      hlds__hlds_out__hlds_out_module__write_class_defn_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__closure, (MR_Integer) 3))), ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__closure, (MR_Integer) 4))), ((MR_Word) hlds__hlds_out__hlds_out_module__wrapper_arg_1));
#line 433 "hlds_out_module.m"
      return;
    }
#line 433 "hlds_out_module.m"
  }
#line 433 "hlds_out_module.m"
}

#line 426 "hlds_out_module.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_classes_5_p_0(
#line 426 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__Info_6,
#line 426 "hlds_out_module.m"
  MR_Integer hlds__hlds_out__hlds_out_module__Indent_7,
#line 426 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__ClassTable_8)
#line 426 "hlds_out_module.m"
{
#line 429 "hlds_out_module.m"
  {
#line 429 "hlds_out_module.m"
    MR_bool hlds__hlds_out__hlds_out_module__succeeded;
#line 429 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__ClassTableList_10;
#line 429 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__V_17_17;

#line 430 "hlds_out_module.m"
    {
#line 430 "hlds_out_module.m"
      hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_module__Indent_7);
    }
#line 431 "hlds_out_module.m"
    {
#line 431 "hlds_out_module.m"
      mercury__io__write_string_3_p_0((MR_String) "%-------- Classes --------\n");
    }
#line 432 "hlds_out_module.m"
    {
#line 432 "hlds_out_module.m"
      mercury__map__to_assoc_list_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_class_defn_0, hlds__hlds_out__hlds_out_module__ClassTable_8, &hlds__hlds_out__hlds_out_module__ClassTableList_10);
    }
#line 433 "hlds_out_module.m"
    {
#line 433 "hlds_out_module.m"
      hlds__hlds_out__hlds_out_module__V_17_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 433 "hlds_out_module.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__V_17_17, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_module_scalar_common_4[0]));
#line 433 "hlds_out_module.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__V_17_17, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_module__write_classes_5_p_0_1));
#line 433 "hlds_out_module.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__V_17_17, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 433 "hlds_out_module.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__V_17_17, 3) = ((MR_Box) (hlds__hlds_out__hlds_out_module__Info_6));
#line 433 "hlds_out_module.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__V_17_17, 4) = ((MR_Box) (hlds__hlds_out__hlds_out_module__Indent_7));
#line 433 "hlds_out_module.m"
    }
#line 433 "hlds_out_module.m"
    {
#line 433 "hlds_out_module.m"
      mercury__io__write_list_5_p_0((MR_Word) &hlds__hlds_out__hlds_out_module_scalar_common_2[0], hlds__hlds_out__hlds_out_module__ClassTableList_10, (MR_String) "\n", hlds__hlds_out__hlds_out_module__V_17_17);
    }
#line 434 "hlds_out_module.m"
    {
#line 434 "hlds_out_module.m"
      mercury__io__nl_2_p_0();
#line 434 "hlds_out_module.m"
      return;
    }
#line 429 "hlds_out_module.m"
  }
#line 426 "hlds_out_module.m"
}

#line 389 "hlds_out_module.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_constructors_loop_7_p_0(
#line 389 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__HeadVar__1_1,
#line 389 "hlds_out_module.m"
  MR_Integer hlds__hlds_out__hlds_out_module__HeadVar__2_2,
#line 389 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__HeadVar__3_3,
#line 389 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__HeadVar__4_4,
#line 389 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__TagValues_5)
#line 389 "hlds_out_module.m"
{
#line 392 "hlds_out_module.m"
  while (MR_TRUE)
#line 392 "hlds_out_module.m"
    {
#line 392 "hlds_out_module.m"
      /* tailcall optimized into a loop */
#line 392 "hlds_out_module.m"
      {
#line 392 "hlds_out_module.m"
        MR_bool hlds__hlds_out__hlds_out_module__succeeded;

#line 392 "hlds_out_module.m"
        if ((hlds__hlds_out__hlds_out_module__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 392 "hlds_out_module.m"
          {
#line 392 "hlds_out_module.m"
          }
#line 392 "hlds_out_module.m"
        else
#line 394 "hlds_out_module.m"
          {
#line 394 "hlds_out_module.m"
            MR_Word hlds__hlds_out__hlds_out_module__Ctor_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_module__HeadVar__4_4, (MR_Integer) 0)));
#line 394 "hlds_out_module.m"
            MR_Word hlds__hlds_out__hlds_out_module__Ctors_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_module__HeadVar__4_4, (MR_Integer) 1)));
#line 394 "hlds_out_module.m"
            MR_Word hlds__hlds_out__hlds_out_module__Name_42;
#line 394 "hlds_out_module.m"
            MR_Integer hlds__hlds_out__hlds_out_module__Arity_44;
#line 394 "hlds_out_module.m"
            MR_Word hlds__hlds_out__hlds_out_module__ConsId_46;
#line 412 "hlds_out_module.m"
            MR_Word hlds__hlds_out__hlds_out_module__V_40_40;
#line 412 "hlds_out_module.m"
            MR_Word hlds__hlds_out__hlds_out_module__V_41_41;
#line 412 "hlds_out_module.m"
            MR_Word hlds__hlds_out__hlds_out_module___Args_43;
#line 412 "hlds_out_module.m"
            MR_Word hlds__hlds_out__hlds_out_module__V_45_45;
#line 417 "hlds_out_module.m"
            MR_Word hlds__hlds_out__hlds_out_module__TagValue_47;
#line 414 "hlds_out_module.m"
            MR_Box hlds__hlds_out__hlds_out_module__conv0_TagValue_47;

#line 395 "hlds_out_module.m"
            {
#line 395 "hlds_out_module.m"
              hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_module__HeadVar__2_2);
            }
#line 396 "hlds_out_module.m"
            {
#line 396 "hlds_out_module.m"
              mercury__io__write_string_3_p_0((MR_String) ";       ");
            }
#line 411 "hlds_out_module.m"
            {
#line 411 "hlds_out_module.m"
              parse_tree__mercury_to_mercury__mercury_output_ctor_4_p_0(hlds__hlds_out__hlds_out_module__Ctor_18, hlds__hlds_out__hlds_out_module__HeadVar__3_3);
            }
#line 412 "hlds_out_module.m"
            hlds__hlds_out__hlds_out_module__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__Ctor_18, (MR_Integer) 0)));
#line 412 "hlds_out_module.m"
            hlds__hlds_out__hlds_out_module__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__Ctor_18, (MR_Integer) 1)));
#line 412 "hlds_out_module.m"
            hlds__hlds_out__hlds_out_module__Name_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__Ctor_18, (MR_Integer) 2)));
#line 412 "hlds_out_module.m"
            hlds__hlds_out__hlds_out_module___Args_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__Ctor_18, (MR_Integer) 3)));
#line 412 "hlds_out_module.m"
            hlds__hlds_out__hlds_out_module__Arity_44 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__Ctor_18, (MR_Integer) 4)));
#line 412 "hlds_out_module.m"
            hlds__hlds_out__hlds_out_module__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__Ctor_18, (MR_Integer) 5)));
#line 413 "hlds_out_module.m"
            {
#line 413 "hlds_out_module.m"
              hlds__hlds_out__hlds_out_module__ConsId_46 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 413 "hlds_out_module.m"
              MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_module__ConsId_46, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 413 "hlds_out_module.m"
              MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_module__ConsId_46, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_module__Name_42));
#line 413 "hlds_out_module.m"
              MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_module__ConsId_46, 2) = ((MR_Box) (hlds__hlds_out__hlds_out_module__Arity_44));
#line 413 "hlds_out_module.m"
              MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_module__ConsId_46, 3) = ((MR_Box) (hlds__hlds_out__hlds_out_module__HeadVar__1_1));
#line 413 "hlds_out_module.m"
            }
#line 414 "hlds_out_module.m"
            {
#line 414 "hlds_out_module.m"
              hlds__hlds_out__hlds_out_module__succeeded = mercury__map__search_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_cons_tag_0, hlds__hlds_out__hlds_out_module__TagValues_5, ((MR_Box) (hlds__hlds_out__hlds_out_module__ConsId_46)), &hlds__hlds_out__hlds_out_module__conv0_TagValue_47);
            }
#line 414 "hlds_out_module.m"
            if (hlds__hlds_out__hlds_out_module__succeeded)
#line 414 "hlds_out_module.m"
              {
#line 414 "hlds_out_module.m"
                hlds__hlds_out__hlds_out_module__TagValue_47 = ((MR_Word) hlds__hlds_out__hlds_out_module__conv0_TagValue_47);
#line 414 "hlds_out_module.m"
                hlds__hlds_out__hlds_out_module__succeeded = MR_TRUE;
#line 414 "hlds_out_module.m"
              }
#line 417 "hlds_out_module.m"
            if (hlds__hlds_out__hlds_out_module__succeeded)
#line 415 "hlds_out_module.m"
              {
#line 415 "hlds_out_module.m"
                {
#line 415 "hlds_out_module.m"
                  mercury__io__write_string_3_p_0((MR_String) "\t% tag: ");
                }
#line 416 "hlds_out_module.m"
                {
#line 416 "hlds_out_module.m"
                  mercury__io__print_3_p_0((MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_cons_tag_0, ((MR_Box) (hlds__hlds_out__hlds_out_module__TagValue_47)));
                }
#line 415 "hlds_out_module.m"
              }
#line 417 "hlds_out_module.m"
            else
#line 417 "hlds_out_module.m"
              {
#line 417 "hlds_out_module.m"
              }
#line 400 "hlds_out_module.m"
            if ((hlds__hlds_out__hlds_out_module__Ctors_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 399 "hlds_out_module.m"
              {
#line 399 "hlds_out_module.m"
              }
#line 400 "hlds_out_module.m"
            else
#line 401 "hlds_out_module.m"
              {
#line 402 "hlds_out_module.m"
                {
#line 402 "hlds_out_module.m"
                  mercury__io__write_string_3_p_0((MR_String) "\n");
                }
#line 403 "hlds_out_module.m"
                /* direct tailcall eliminated */
#line 403 "hlds_out_module.m"
                {
#line 403 "hlds_out_module.m"
                  MR_Word hlds__hlds_out__hlds_out_module__HeadVar__4__tmp_copy_4 = hlds__hlds_out__hlds_out_module__Ctors_19;

#line 403 "hlds_out_module.m"
                  hlds__hlds_out__hlds_out_module__HeadVar__4_4 = hlds__hlds_out__hlds_out_module__HeadVar__4__tmp_copy_4;
#line 403 "hlds_out_module.m"
                }
#line 403 "hlds_out_module.m"
                continue;
#line 401 "hlds_out_module.m"
              }
#line 394 "hlds_out_module.m"
          }
#line 392 "hlds_out_module.m"
      }
#line 392 "hlds_out_module.m"
      break;
#line 392 "hlds_out_module.m"
    }
#line 389 "hlds_out_module.m"
}

#line 371 "hlds_out_module.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_constructors_7_p_0(
#line 371 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__HeadVar__1_1,
#line 371 "hlds_out_module.m"
  MR_Integer hlds__hlds_out__hlds_out_module__HeadVar__2_2,
#line 371 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__HeadVar__3_3,
#line 371 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__HeadVar__4_4,
#line 371 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__TagValues_5)
#line 371 "hlds_out_module.m"
{
#line 374 "hlds_out_module.m"
  {
#line 374 "hlds_out_module.m"
    MR_bool hlds__hlds_out__hlds_out_module__succeeded;

#line 374 "hlds_out_module.m"
    if ((hlds__hlds_out__hlds_out_module__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 374 "hlds_out_module.m"
      {
#line 375 "hlds_out_module.m"
        {
#line 375 "hlds_out_module.m"
          mercury__require__unexpected_3_p_0((MR_String) "hlds.hlds_out.hlds_out_module", (MR_String) "predicate \140hlds.hlds_out.hlds_out_module.write_constructors\'/7", (MR_String) "empty constructor list");
#line 375 "hlds_out_module.m"
          return;
        }
#line 374 "hlds_out_module.m"
      }
#line 374 "hlds_out_module.m"
    else
#line 374 "hlds_out_module.m"
      {
#line 374 "hlds_out_module.m"
        MR_Word hlds__hlds_out__hlds_out_module__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_module__HeadVar__4_4, (MR_Integer) 1)));
#line 374 "hlds_out_module.m"
        MR_Word hlds__hlds_out__hlds_out_module__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_module__HeadVar__4_4, (MR_Integer) 0)));

#line 374 "hlds_out_module.m"
        if ((hlds__hlds_out__hlds_out_module__V_49_49 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 376 "hlds_out_module.m"
          {
#line 376 "hlds_out_module.m"
            MR_Word hlds__hlds_out__hlds_out_module__Name_60;
#line 376 "hlds_out_module.m"
            MR_Integer hlds__hlds_out__hlds_out_module__Arity_62;
#line 376 "hlds_out_module.m"
            MR_Word hlds__hlds_out__hlds_out_module__ConsId_64;
#line 412 "hlds_out_module.m"
            MR_Word hlds__hlds_out__hlds_out_module__V_58_58;
#line 412 "hlds_out_module.m"
            MR_Word hlds__hlds_out__hlds_out_module__V_59_59;
#line 412 "hlds_out_module.m"
            MR_Word hlds__hlds_out__hlds_out_module___Args_61;
#line 412 "hlds_out_module.m"
            MR_Word hlds__hlds_out__hlds_out_module__V_63_63;
#line 417 "hlds_out_module.m"
            MR_Word hlds__hlds_out__hlds_out_module__TagValue_65;
#line 414 "hlds_out_module.m"
            MR_Box hlds__hlds_out__hlds_out_module__conv0_TagValue_65;

#line 377 "hlds_out_module.m"
            {
#line 377 "hlds_out_module.m"
              hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_module__HeadVar__2_2);
            }
#line 378 "hlds_out_module.m"
            {
#line 378 "hlds_out_module.m"
              mercury__io__write_string_3_p_0((MR_String) "--->    ");
            }
#line 411 "hlds_out_module.m"
            {
#line 411 "hlds_out_module.m"
              parse_tree__mercury_to_mercury__mercury_output_ctor_4_p_0(hlds__hlds_out__hlds_out_module__V_50_50, hlds__hlds_out__hlds_out_module__HeadVar__3_3);
            }
#line 412 "hlds_out_module.m"
            hlds__hlds_out__hlds_out_module__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__V_50_50, (MR_Integer) 0)));
#line 412 "hlds_out_module.m"
            hlds__hlds_out__hlds_out_module__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__V_50_50, (MR_Integer) 1)));
#line 412 "hlds_out_module.m"
            hlds__hlds_out__hlds_out_module__Name_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__V_50_50, (MR_Integer) 2)));
#line 412 "hlds_out_module.m"
            hlds__hlds_out__hlds_out_module___Args_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__V_50_50, (MR_Integer) 3)));
#line 412 "hlds_out_module.m"
            hlds__hlds_out__hlds_out_module__Arity_62 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__V_50_50, (MR_Integer) 4)));
#line 412 "hlds_out_module.m"
            hlds__hlds_out__hlds_out_module__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__V_50_50, (MR_Integer) 5)));
#line 413 "hlds_out_module.m"
            {
#line 413 "hlds_out_module.m"
              hlds__hlds_out__hlds_out_module__ConsId_64 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 413 "hlds_out_module.m"
              MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_module__ConsId_64, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 413 "hlds_out_module.m"
              MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_module__ConsId_64, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_module__Name_60));
#line 413 "hlds_out_module.m"
              MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_module__ConsId_64, 2) = ((MR_Box) (hlds__hlds_out__hlds_out_module__Arity_62));
#line 413 "hlds_out_module.m"
              MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_module__ConsId_64, 3) = ((MR_Box) (hlds__hlds_out__hlds_out_module__HeadVar__1_1));
#line 413 "hlds_out_module.m"
            }
#line 414 "hlds_out_module.m"
            {
#line 414 "hlds_out_module.m"
              hlds__hlds_out__hlds_out_module__succeeded = mercury__map__search_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_cons_tag_0, hlds__hlds_out__hlds_out_module__TagValues_5, ((MR_Box) (hlds__hlds_out__hlds_out_module__ConsId_64)), &hlds__hlds_out__hlds_out_module__conv0_TagValue_65);
            }
#line 414 "hlds_out_module.m"
            if (hlds__hlds_out__hlds_out_module__succeeded)
#line 414 "hlds_out_module.m"
              {
#line 414 "hlds_out_module.m"
                hlds__hlds_out__hlds_out_module__TagValue_65 = ((MR_Word) hlds__hlds_out__hlds_out_module__conv0_TagValue_65);
#line 414 "hlds_out_module.m"
                hlds__hlds_out__hlds_out_module__succeeded = MR_TRUE;
#line 414 "hlds_out_module.m"
              }
#line 417 "hlds_out_module.m"
            if (hlds__hlds_out__hlds_out_module__succeeded)
#line 415 "hlds_out_module.m"
              {
#line 415 "hlds_out_module.m"
                {
#line 415 "hlds_out_module.m"
                  mercury__io__write_string_3_p_0((MR_String) "\t% tag: ");
                }
#line 416 "hlds_out_module.m"
                {
#line 416 "hlds_out_module.m"
                  mercury__io__print_3_p_0((MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_cons_tag_0, ((MR_Box) (hlds__hlds_out__hlds_out_module__TagValue_65)));
#line 416 "hlds_out_module.m"
                  return;
                }
#line 415 "hlds_out_module.m"
              }
#line 417 "hlds_out_module.m"
            else
#line 417 "hlds_out_module.m"
              {
#line 417 "hlds_out_module.m"
              }
#line 376 "hlds_out_module.m"
          }
#line 374 "hlds_out_module.m"
        else
#line 381 "hlds_out_module.m"
          {
#line 381 "hlds_out_module.m"
            MR_Word hlds__hlds_out__hlds_out_module__Name_82;
#line 381 "hlds_out_module.m"
            MR_Integer hlds__hlds_out__hlds_out_module__Arity_84;
#line 381 "hlds_out_module.m"
            MR_Word hlds__hlds_out__hlds_out_module__ConsId_86;
#line 412 "hlds_out_module.m"
            MR_Word hlds__hlds_out__hlds_out_module__V_80_80;
#line 412 "hlds_out_module.m"
            MR_Word hlds__hlds_out__hlds_out_module__V_81_81;
#line 412 "hlds_out_module.m"
            MR_Word hlds__hlds_out__hlds_out_module___Args_83;
#line 412 "hlds_out_module.m"
            MR_Word hlds__hlds_out__hlds_out_module__V_85_85;
#line 417 "hlds_out_module.m"
            MR_Word hlds__hlds_out__hlds_out_module__TagValue_87;
#line 414 "hlds_out_module.m"
            MR_Box hlds__hlds_out__hlds_out_module__conv1_TagValue_87;

#line 383 "hlds_out_module.m"
            {
#line 383 "hlds_out_module.m"
              hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_module__HeadVar__2_2);
            }
#line 384 "hlds_out_module.m"
            {
#line 384 "hlds_out_module.m"
              mercury__io__write_string_3_p_0((MR_String) "--->    ");
            }
#line 411 "hlds_out_module.m"
            {
#line 411 "hlds_out_module.m"
              parse_tree__mercury_to_mercury__mercury_output_ctor_4_p_0(hlds__hlds_out__hlds_out_module__V_50_50, hlds__hlds_out__hlds_out_module__HeadVar__3_3);
            }
#line 412 "hlds_out_module.m"
            hlds__hlds_out__hlds_out_module__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__V_50_50, (MR_Integer) 0)));
#line 412 "hlds_out_module.m"
            hlds__hlds_out__hlds_out_module__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__V_50_50, (MR_Integer) 1)));
#line 412 "hlds_out_module.m"
            hlds__hlds_out__hlds_out_module__Name_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__V_50_50, (MR_Integer) 2)));
#line 412 "hlds_out_module.m"
            hlds__hlds_out__hlds_out_module___Args_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__V_50_50, (MR_Integer) 3)));
#line 412 "hlds_out_module.m"
            hlds__hlds_out__hlds_out_module__Arity_84 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__V_50_50, (MR_Integer) 4)));
#line 412 "hlds_out_module.m"
            hlds__hlds_out__hlds_out_module__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__V_50_50, (MR_Integer) 5)));
#line 413 "hlds_out_module.m"
            {
#line 413 "hlds_out_module.m"
              hlds__hlds_out__hlds_out_module__ConsId_86 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 413 "hlds_out_module.m"
              MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_module__ConsId_86, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 413 "hlds_out_module.m"
              MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_module__ConsId_86, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_module__Name_82));
#line 413 "hlds_out_module.m"
              MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_module__ConsId_86, 2) = ((MR_Box) (hlds__hlds_out__hlds_out_module__Arity_84));
#line 413 "hlds_out_module.m"
              MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_module__ConsId_86, 3) = ((MR_Box) (hlds__hlds_out__hlds_out_module__HeadVar__1_1));
#line 413 "hlds_out_module.m"
            }
#line 414 "hlds_out_module.m"
            {
#line 414 "hlds_out_module.m"
              hlds__hlds_out__hlds_out_module__succeeded = mercury__map__search_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_cons_tag_0, hlds__hlds_out__hlds_out_module__TagValues_5, ((MR_Box) (hlds__hlds_out__hlds_out_module__ConsId_86)), &hlds__hlds_out__hlds_out_module__conv1_TagValue_87);
            }
#line 414 "hlds_out_module.m"
            if (hlds__hlds_out__hlds_out_module__succeeded)
#line 414 "hlds_out_module.m"
              {
#line 414 "hlds_out_module.m"
                hlds__hlds_out__hlds_out_module__TagValue_87 = ((MR_Word) hlds__hlds_out__hlds_out_module__conv1_TagValue_87);
#line 414 "hlds_out_module.m"
                hlds__hlds_out__hlds_out_module__succeeded = MR_TRUE;
#line 414 "hlds_out_module.m"
              }
#line 417 "hlds_out_module.m"
            if (hlds__hlds_out__hlds_out_module__succeeded)
#line 415 "hlds_out_module.m"
              {
#line 415 "hlds_out_module.m"
                {
#line 415 "hlds_out_module.m"
                  mercury__io__write_string_3_p_0((MR_String) "\t% tag: ");
                }
#line 416 "hlds_out_module.m"
                {
#line 416 "hlds_out_module.m"
                  mercury__io__print_3_p_0((MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_cons_tag_0, ((MR_Box) (hlds__hlds_out__hlds_out_module__TagValue_87)));
                }
#line 415 "hlds_out_module.m"
              }
#line 417 "hlds_out_module.m"
            else
#line 417 "hlds_out_module.m"
              {
#line 417 "hlds_out_module.m"
              }
#line 386 "hlds_out_module.m"
            {
#line 386 "hlds_out_module.m"
              mercury__io__write_string_3_p_0((MR_String) "\n");
            }
#line 387 "hlds_out_module.m"
            {
#line 387 "hlds_out_module.m"
              hlds__hlds_out__hlds_out_module__write_constructors_loop_7_p_0(hlds__hlds_out__hlds_out_module__HeadVar__1_1, hlds__hlds_out__hlds_out_module__HeadVar__2_2, hlds__hlds_out__hlds_out_module__HeadVar__3_3, hlds__hlds_out__hlds_out_module__V_49_49, hlds__hlds_out__hlds_out_module__TagValues_5);
#line 387 "hlds_out_module.m"
              return;
            }
#line 381 "hlds_out_module.m"
          }
#line 374 "hlds_out_module.m"
      }
#line 374 "hlds_out_module.m"
  }
#line 371 "hlds_out_module.m"
}

#line 265 "hlds_out_module.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_type_body_7_p_0(
#line 265 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__Info_8,
#line 265 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__TypeCtor_9,
#line 265 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__TypeBody_10,
#line 265 "hlds_out_module.m"
  MR_Integer hlds__hlds_out__hlds_out_module__Indent_11,
#line 265 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__TVarSet_12)
#line 265 "hlds_out_module.m"
{
#line 272 "hlds_out_module.m"
  {
#line 272 "hlds_out_module.m"
    MR_bool hlds__hlds_out__hlds_out_module__succeeded;

#line 272 "hlds_out_module.m"
#line 272 "hlds_out_module.m"
    switch (MR_tag((MR_Word) hlds__hlds_out__hlds_out_module__TypeBody_10)) {
#line 272 "hlds_out_module.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 272 "hlds_out_module.m"
      case (MR_Integer) 0:
#line 360 "hlds_out_module.m"
        {
#line 362 "hlds_out_module.m"
          {
#line 362 "hlds_out_module.m"
            mercury__io__write_string_3_p_0((MR_String) " == \044foreign_type.\n");
#line 362 "hlds_out_module.m"
            return;
          }
#line 360 "hlds_out_module.m"
        }
#line 272 "hlds_out_module.m"
        break;
#line 272 "hlds_out_module.m"
      case (MR_Integer) 1:
#line 272 "hlds_out_module.m"
        {
#line 272 "hlds_out_module.m"
          MR_Word hlds__hlds_out__hlds_out_module__Ctors_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_module__TypeBody_10, (MR_Integer) 0)));
#line 272 "hlds_out_module.m"
          MR_Word hlds__hlds_out__hlds_out_module__ConsTagMap_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_module__TypeBody_10, (MR_Integer) 1)));
#line 272 "hlds_out_module.m"
          MR_Word hlds__hlds_out__hlds_out_module__CheaperTagTest_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_module__TypeBody_10, (MR_Integer) 2)));
#line 272 "hlds_out_module.m"
          MR_Word hlds__hlds_out__hlds_out_module__DuTypeKind_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_module__TypeBody_10, (MR_Integer) 3)));
#line 272 "hlds_out_module.m"
          MR_Word hlds__hlds_out__hlds_out_module__MaybeUserEqComp_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_module__TypeBody_10, (MR_Integer) 4)));
#line 272 "hlds_out_module.m"
          MR_Word hlds__hlds_out__hlds_out_module__MaybeDirectArgCtors_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_module__TypeBody_10, (MR_Integer) 5)));
#line 272 "hlds_out_module.m"
          MR_Word hlds__hlds_out__hlds_out_module__ReservedTag_20 = ((((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_module__TypeBody_10, (MR_Integer) 6)))) & (MR_Integer) 1);
#line 272 "hlds_out_module.m"
          MR_Word hlds__hlds_out__hlds_out_module__ReservedAddr_21 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_module__TypeBody_10, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 272 "hlds_out_module.m"
          MR_Word hlds__hlds_out__hlds_out_module__Foreign_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_module__TypeBody_10, (MR_Integer) 7)));
#line 272 "hlds_out_module.m"
          MR_Word hlds__hlds_out__hlds_out_module__MercInfo_32;
#line 340 "hlds_out_module.m"
          MR_String hlds__hlds_out__hlds_out_module__V_119_119;
#line 340 "hlds_out_module.m"
          MR_String hlds__hlds_out__hlds_out_module__V_120_120;
#line 340 "hlds_out_module.m"
          MR_Word hlds__hlds_out__hlds_out_module__V_121_121;
#line 340 "hlds_out_module.m"
          MR_Word hlds__hlds_out__hlds_out_module__V_122_122;

#line 275 "hlds_out_module.m"
          if ((hlds__hlds_out__hlds_out_module__CheaperTagTest_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 274 "hlds_out_module.m"
            {
#line 274 "hlds_out_module.m"
            }
#line 275 "hlds_out_module.m"
          else
#line 277 "hlds_out_module.m"
            {
#line 277 "hlds_out_module.m"
              MR_Word hlds__hlds_out__hlds_out_module__TypeCtorInfo_127_127;
#line 277 "hlds_out_module.m"
              MR_Word hlds__hlds_out__hlds_out_module__ExpConsId_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_module__CheaperTagTest_16, (MR_Integer) 0)));
#line 277 "hlds_out_module.m"
              MR_Word hlds__hlds_out__hlds_out_module__ExpConsTag_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_module__CheaperTagTest_16, (MR_Integer) 1)));
#line 277 "hlds_out_module.m"
              MR_Word hlds__hlds_out__hlds_out_module__CheapConsId_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_module__CheaperTagTest_16, (MR_Integer) 2)));
#line 277 "hlds_out_module.m"
              MR_Word hlds__hlds_out__hlds_out_module__CheapConsTag_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_module__CheaperTagTest_16, (MR_Integer) 3)));
#line 277 "hlds_out_module.m"
              MR_String hlds__hlds_out__hlds_out_module__V_58_58;
#line 277 "hlds_out_module.m"
              MR_String hlds__hlds_out__hlds_out_module__V_65_65;

#line 278 "hlds_out_module.m"
              {
#line 278 "hlds_out_module.m"
                hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_module__Indent_11);
              }
#line 279 "hlds_out_module.m"
              {
#line 279 "hlds_out_module.m"
                mercury__io__write_string_3_p_0((MR_String) "/* cheaper tag test: ");
              }
#line 280 "hlds_out_module.m"
              {
#line 280 "hlds_out_module.m"
                hlds__hlds_out__hlds_out_module__V_58_58 = parse_tree__prog_out__cons_id_and_arity_to_string_1_f_0(hlds__hlds_out__hlds_out_module__ExpConsId_23);
              }
#line 280 "hlds_out_module.m"
              {
#line 280 "hlds_out_module.m"
                mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_module__V_58_58);
              }
#line 281 "hlds_out_module.m"
              {
#line 281 "hlds_out_module.m"
                mercury__io__write_string_3_p_0((MR_String) " tag ");
              }
#line 8058 "hlds.hlds_out.hlds_out_module.c"
              hlds__hlds_out__hlds_out_module__TypeCtorInfo_127_127 = (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_cons_tag_0;
#line 282 "hlds_out_module.m"
              {
#line 282 "hlds_out_module.m"
                mercury__io__print_3_p_0(hlds__hlds_out__hlds_out_module__TypeCtorInfo_127_127, ((MR_Box) (hlds__hlds_out__hlds_out_module__ExpConsTag_24)));
              }
#line 283 "hlds_out_module.m"
              {
#line 283 "hlds_out_module.m"
                mercury__io__write_string_3_p_0((MR_String) " -> ");
              }
#line 284 "hlds_out_module.m"
              {
#line 284 "hlds_out_module.m"
                hlds__hlds_out__hlds_out_module__V_65_65 = parse_tree__prog_out__cons_id_and_arity_to_string_1_f_0(hlds__hlds_out__hlds_out_module__CheapConsId_25);
              }
#line 284 "hlds_out_module.m"
              {
#line 284 "hlds_out_module.m"
                mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_module__V_65_65);
              }
#line 285 "hlds_out_module.m"
              {
#line 285 "hlds_out_module.m"
                mercury__io__write_string_3_p_0((MR_String) " tag ");
              }
#line 286 "hlds_out_module.m"
              {
#line 286 "hlds_out_module.m"
                mercury__io__print_3_p_0(hlds__hlds_out__hlds_out_module__TypeCtorInfo_127_127, ((MR_Box) (hlds__hlds_out__hlds_out_module__CheapConsTag_26)));
              }
#line 287 "hlds_out_module.m"
              {
#line 287 "hlds_out_module.m"
                mercury__io__write_string_3_p_0((MR_String) " */\n");
              }
#line 277 "hlds_out_module.m"
            }
#line 293 "hlds_out_module.m"
#line 293 "hlds_out_module.m"
          switch (MR_tag((MR_Word) hlds__hlds_out__hlds_out_module__DuTypeKind_17)) {
#line 293 "hlds_out_module.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 293 "hlds_out_module.m"
            case (MR_Integer) 0:
#line 293 "hlds_out_module.m"
#line 293 "hlds_out_module.m"
              switch (MR_unmkbody(hlds__hlds_out__hlds_out_module__DuTypeKind_17)) {
#line 293 "hlds_out_module.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 293 "hlds_out_module.m"
                case (MR_Integer) 0:
#line 290 "hlds_out_module.m"
                  {
#line 291 "hlds_out_module.m"
                    {
#line 291 "hlds_out_module.m"
                      hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_module__Indent_11);
                    }
#line 292 "hlds_out_module.m"
                    {
#line 292 "hlds_out_module.m"
                      mercury__io__write_string_3_p_0((MR_String) "/* KIND enumeration */\n");
                    }
#line 290 "hlds_out_module.m"
                  }
#line 293 "hlds_out_module.m"
                  break;
#line 293 "hlds_out_module.m"
                case (MR_Integer) 1:
#line 300 "hlds_out_module.m"
                  {
#line 301 "hlds_out_module.m"
                    {
#line 301 "hlds_out_module.m"
                      hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_module__Indent_11);
                    }
#line 302 "hlds_out_module.m"
                    {
#line 302 "hlds_out_module.m"
                      mercury__io__write_string_3_p_0((MR_String) "/* KIND dummy */\n");
                    }
#line 300 "hlds_out_module.m"
                  }
#line 293 "hlds_out_module.m"
                  break;
#line 293 "hlds_out_module.m"
                case (MR_Integer) 2:
#line 321 "hlds_out_module.m"
                  {
#line 322 "hlds_out_module.m"
                    {
#line 322 "hlds_out_module.m"
                      hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_module__Indent_11);
                    }
#line 323 "hlds_out_module.m"
                    {
#line 323 "hlds_out_module.m"
                      mercury__io__write_string_3_p_0((MR_String) "/* KIND general */\n");
                    }
#line 321 "hlds_out_module.m"
                  }
#line 293 "hlds_out_module.m"
                  break;
#line 293 "hlds_out_module.m"
              }
#line 293 "hlds_out_module.m"
              break;
#line 293 "hlds_out_module.m"
            case (MR_Integer) 1:
#line 294 "hlds_out_module.m"
              {
#line 294 "hlds_out_module.m"
                MR_Word hlds__hlds_out__hlds_out_module__Lang_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_module__DuTypeKind_17, (MR_Integer) 0)));
#line 294 "hlds_out_module.m"
                MR_String hlds__hlds_out__hlds_out_module__V_96_96;

#line 295 "hlds_out_module.m"
                {
#line 295 "hlds_out_module.m"
                  hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_module__Indent_11);
                }
#line 296 "hlds_out_module.m"
                {
#line 296 "hlds_out_module.m"
                  mercury__io__write_string_3_p_0((MR_String) "/* KIND foreign enumeration for ");
                }
#line 297 "hlds_out_module.m"
                {
#line 297 "hlds_out_module.m"
                  hlds__hlds_out__hlds_out_module__V_96_96 = libs__globals__foreign_language_string_1_f_0(hlds__hlds_out__hlds_out_module__Lang_27);
                }
#line 297 "hlds_out_module.m"
                {
#line 297 "hlds_out_module.m"
                  mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_module__V_96_96);
                }
#line 298 "hlds_out_module.m"
                {
#line 298 "hlds_out_module.m"
                  mercury__io__write_string_3_p_0((MR_String) " */\n");
                }
#line 294 "hlds_out_module.m"
              }
#line 293 "hlds_out_module.m"
              break;
#line 293 "hlds_out_module.m"
            case (MR_Integer) 2:
#line 305 "hlds_out_module.m"
              {
#line 305 "hlds_out_module.m"
                MR_Word hlds__hlds_out__hlds_out_module__FunctorName_28 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hlds_out__hlds_out_module__DuTypeKind_17, (MR_Integer) 0)));
#line 305 "hlds_out_module.m"
                MR_Word hlds__hlds_out__hlds_out_module__ArgType_29 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hlds_out__hlds_out_module__DuTypeKind_17, (MR_Integer) 1)));
#line 305 "hlds_out_module.m"
                MR_Word hlds__hlds_out__hlds_out_module__MaybeArgName_30 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hlds_out__hlds_out_module__DuTypeKind_17, (MR_Integer) 2)));

#line 306 "hlds_out_module.m"
                {
#line 306 "hlds_out_module.m"
                  hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_module__Indent_11);
                }
#line 307 "hlds_out_module.m"
                {
#line 307 "hlds_out_module.m"
                  mercury__io__write_string_3_p_0((MR_String) "/* KIND notag: ");
                }
#line 308 "hlds_out_module.m"
                {
#line 308 "hlds_out_module.m"
                  parse_tree__prog_out__write_sym_name_3_p_0(hlds__hlds_out__hlds_out_module__FunctorName_28);
                }
#line 309 "hlds_out_module.m"
                {
#line 309 "hlds_out_module.m"
                  mercury__io__write_string_3_p_0((MR_String) ", ");
                }
#line 310 "hlds_out_module.m"
                {
#line 310 "hlds_out_module.m"
                  parse_tree__mercury_to_mercury__mercury_output_type_5_p_0(hlds__hlds_out__hlds_out_module__TVarSet_12, (MR_Integer) 0, hlds__hlds_out__hlds_out_module__ArgType_29);
                }
#line 311 "hlds_out_module.m"
                {
#line 311 "hlds_out_module.m"
                  mercury__io__write_string_3_p_0((MR_String) ", ");
                }
#line 315 "hlds_out_module.m"
                if ((hlds__hlds_out__hlds_out_module__MaybeArgName_30 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 316 "hlds_out_module.m"
                  {
#line 317 "hlds_out_module.m"
                    {
#line 317 "hlds_out_module.m"
                      mercury__io__write_string_3_p_0((MR_String) "no arg name");
                    }
#line 316 "hlds_out_module.m"
                  }
#line 315 "hlds_out_module.m"
                else
#line 313 "hlds_out_module.m"
                  {
#line 313 "hlds_out_module.m"
                    MR_String hlds__hlds_out__hlds_out_module__ArgName_31 = ((MR_String) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_module__MaybeArgName_30, (MR_Integer) 0)));

#line 314 "hlds_out_module.m"
                    {
#line 314 "hlds_out_module.m"
                      mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_module__ArgName_31);
                    }
#line 313 "hlds_out_module.m"
                  }
#line 319 "hlds_out_module.m"
                {
#line 319 "hlds_out_module.m"
                  mercury__io__write_string_3_p_0((MR_String) " */\n");
                }
#line 305 "hlds_out_module.m"
              }
#line 293 "hlds_out_module.m"
              break;
#line 293 "hlds_out_module.m"
          }
#line 329 "hlds_out_module.m"
#line 329 "hlds_out_module.m"
          switch (hlds__hlds_out__hlds_out_module__ReservedTag_20) {
#line 329 "hlds_out_module.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 329 "hlds_out_module.m"
            case (MR_Integer) 1:
#line 330 "hlds_out_module.m"
              {
#line 330 "hlds_out_module.m"
              }
#line 329 "hlds_out_module.m"
              break;
#line 329 "hlds_out_module.m"
            case (MR_Integer) 0:
#line 326 "hlds_out_module.m"
              {
#line 327 "hlds_out_module.m"
                {
#line 327 "hlds_out_module.m"
                  hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_module__Indent_11);
                }
#line 328 "hlds_out_module.m"
                {
#line 328 "hlds_out_module.m"
                  mercury__io__write_string_3_p_0((MR_String) "/* reserved_tag */\n");
                }
#line 326 "hlds_out_module.m"
              }
#line 329 "hlds_out_module.m"
              break;
#line 329 "hlds_out_module.m"
          }
#line 336 "hlds_out_module.m"
#line 336 "hlds_out_module.m"
          switch (hlds__hlds_out__hlds_out_module__ReservedAddr_21) {
#line 336 "hlds_out_module.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 336 "hlds_out_module.m"
            case (MR_Integer) 1:
#line 337 "hlds_out_module.m"
              {
#line 337 "hlds_out_module.m"
              }
#line 336 "hlds_out_module.m"
              break;
#line 336 "hlds_out_module.m"
            case (MR_Integer) 0:
#line 333 "hlds_out_module.m"
              {
#line 334 "hlds_out_module.m"
                {
#line 334 "hlds_out_module.m"
                  hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_module__Indent_11);
                }
#line 335 "hlds_out_module.m"
                {
#line 335 "hlds_out_module.m"
                  mercury__io__write_string_3_p_0((MR_String) "/* reserved_address */\n");
                }
#line 333 "hlds_out_module.m"
              }
#line 336 "hlds_out_module.m"
              break;
#line 336 "hlds_out_module.m"
          }
#line 339 "hlds_out_module.m"
          {
#line 339 "hlds_out_module.m"
            hlds__hlds_out__hlds_out_module__write_constructors_7_p_0(hlds__hlds_out__hlds_out_module__TypeCtor_9, hlds__hlds_out__hlds_out_module__Indent_11, hlds__hlds_out__hlds_out_module__TVarSet_12, hlds__hlds_out__hlds_out_module__Ctors_14, hlds__hlds_out__hlds_out_module__ConsTagMap_15);
          }
#line 340 "hlds_out_module.m"
          hlds__hlds_out__hlds_out_module__V_119_119 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__Info_8, (MR_Integer) 0)));
#line 340 "hlds_out_module.m"
          hlds__hlds_out__hlds_out_module__V_120_120 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__Info_8, (MR_Integer) 1)));
#line 340 "hlds_out_module.m"
          hlds__hlds_out__hlds_out_module__V_121_121 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__Info_8, (MR_Integer) 2)));
#line 340 "hlds_out_module.m"
          hlds__hlds_out__hlds_out_module__V_122_122 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__Info_8, (MR_Integer) 3)));
#line 340 "hlds_out_module.m"
          hlds__hlds_out__hlds_out_module__MercInfo_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__Info_8, (MR_Integer) 4)));
#line 341 "hlds_out_module.m"
          {
#line 341 "hlds_out_module.m"
            parse_tree__mercury_to_mercury__mercury_output_where_attributes_7_p_0(hlds__hlds_out__hlds_out_module__MercInfo_32, hlds__hlds_out__hlds_out_module__TVarSet_12, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), hlds__hlds_out__hlds_out_module__MaybeUserEqComp_18, hlds__hlds_out__hlds_out_module__MaybeDirectArgCtors_19);
          }
#line 347 "hlds_out_module.m"
          if ((hlds__hlds_out__hlds_out_module__Foreign_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 348 "hlds_out_module.m"
            {
#line 348 "hlds_out_module.m"
            }
#line 347 "hlds_out_module.m"
          else
#line 344 "hlds_out_module.m"
            {
#line 345 "hlds_out_module.m"
              {
#line 345 "hlds_out_module.m"
                hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_module__Indent_11);
              }
#line 346 "hlds_out_module.m"
              {
#line 346 "hlds_out_module.m"
                mercury__io__write_string_3_p_0((MR_String) "/* has foreign_type */\n");
              }
#line 344 "hlds_out_module.m"
            }
#line 350 "hlds_out_module.m"
          {
#line 350 "hlds_out_module.m"
            mercury__io__write_string_3_p_0((MR_String) ".\n");
#line 350 "hlds_out_module.m"
            return;
          }
#line 272 "hlds_out_module.m"
        }
#line 272 "hlds_out_module.m"
        break;
#line 272 "hlds_out_module.m"
      case (MR_Integer) 2:
#line 352 "hlds_out_module.m"
        {
#line 352 "hlds_out_module.m"
          MR_Word hlds__hlds_out__hlds_out_module__Type_34 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hlds_out__hlds_out_module__TypeBody_10, (MR_Integer) 0)));

#line 353 "hlds_out_module.m"
          {
#line 353 "hlds_out_module.m"
            mercury__io__write_string_3_p_0((MR_String) " == ");
          }
#line 354 "hlds_out_module.m"
          {
#line 354 "hlds_out_module.m"
            parse_tree__mercury_to_mercury__mercury_output_type_5_p_0(hlds__hlds_out__hlds_out_module__TVarSet_12, (MR_Integer) 0, hlds__hlds_out__hlds_out_module__Type_34);
          }
#line 355 "hlds_out_module.m"
          {
#line 355 "hlds_out_module.m"
            mercury__io__write_string_3_p_0((MR_String) ".\n");
#line 355 "hlds_out_module.m"
            return;
          }
#line 352 "hlds_out_module.m"
        }
#line 272 "hlds_out_module.m"
        break;
#line 272 "hlds_out_module.m"
      case (MR_Integer) 3:
#line 272 "hlds_out_module.m"
#line 272 "hlds_out_module.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_module__TypeBody_10, (MR_Integer) 0)))) {
#line 272 "hlds_out_module.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 272 "hlds_out_module.m"
          case (MR_Integer) 0:
#line 364 "hlds_out_module.m"
            {
#line 364 "hlds_out_module.m"
              MR_Word hlds__hlds_out__hlds_out_module__SolverTypeDetails_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_module__TypeBody_10, (MR_Integer) 1)));
#line 364 "hlds_out_module.m"
              MR_Word hlds__hlds_out__hlds_out_module__V_40_40;
#line 364 "hlds_out_module.m"
              MR_Word hlds__hlds_out__hlds_out_module__MaybeUserEqComp_117 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_module__TypeBody_10, (MR_Integer) 2)));
#line 364 "hlds_out_module.m"
              MR_Word hlds__hlds_out__hlds_out_module__MercInfo_118 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__Info_8, (MR_Integer) 4)));
#line 365 "hlds_out_module.m"
              MR_String hlds__hlds_out__hlds_out_module__V_123_123 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__Info_8, (MR_Integer) 0)));
#line 365 "hlds_out_module.m"
              MR_String hlds__hlds_out__hlds_out_module__V_124_124 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__Info_8, (MR_Integer) 1)));
#line 365 "hlds_out_module.m"
              MR_Word hlds__hlds_out__hlds_out_module__V_125_125 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__Info_8, (MR_Integer) 2)));
#line 365 "hlds_out_module.m"
              MR_Word hlds__hlds_out__hlds_out_module__V_126_126 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__Info_8, (MR_Integer) 3)));

#line 367 "hlds_out_module.m"
              {
#line 367 "hlds_out_module.m"
                hlds__hlds_out__hlds_out_module__V_40_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 367 "hlds_out_module.m"
                MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_module__V_40_40, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_module__SolverTypeDetails_37));
#line 367 "hlds_out_module.m"
              }
#line 366 "hlds_out_module.m"
              {
#line 366 "hlds_out_module.m"
                parse_tree__mercury_to_mercury__mercury_output_where_attributes_7_p_0(hlds__hlds_out__hlds_out_module__MercInfo_118, hlds__hlds_out__hlds_out_module__TVarSet_12, hlds__hlds_out__hlds_out_module__V_40_40, hlds__hlds_out__hlds_out_module__MaybeUserEqComp_117, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
              }
#line 368 "hlds_out_module.m"
              {
#line 368 "hlds_out_module.m"
                mercury__io__write_string_3_p_0((MR_String) ".\n");
#line 368 "hlds_out_module.m"
                return;
              }
#line 364 "hlds_out_module.m"
            }
#line 272 "hlds_out_module.m"
            break;
#line 272 "hlds_out_module.m"
          case (MR_Integer) 1:
#line 357 "hlds_out_module.m"
            {
#line 358 "hlds_out_module.m"
              {
#line 358 "hlds_out_module.m"
                mercury__io__write_string_3_p_0((MR_String) ".\n");
#line 358 "hlds_out_module.m"
                return;
              }
#line 357 "hlds_out_module.m"
            }
#line 272 "hlds_out_module.m"
            break;
#line 272 "hlds_out_module.m"
        }
#line 272 "hlds_out_module.m"
        break;
#line 272 "hlds_out_module.m"
    }
#line 272 "hlds_out_module.m"
  }
#line 265 "hlds_out_module.m"
}

#line 256 "hlds_out_module.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_type_params_loop_4_p_0(
#line 256 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__HeadVar__1_1,
#line 256 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__HeadVar__2_2)
#line 256 "hlds_out_module.m"
{
#line 259 "hlds_out_module.m"
  while (MR_TRUE)
#line 259 "hlds_out_module.m"
    {
#line 259 "hlds_out_module.m"
      /* tailcall optimized into a loop */
#line 259 "hlds_out_module.m"
      {
#line 259 "hlds_out_module.m"
        MR_bool hlds__hlds_out__hlds_out_module__succeeded;

#line 259 "hlds_out_module.m"
        if ((hlds__hlds_out__hlds_out_module__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 259 "hlds_out_module.m"
          {
#line 259 "hlds_out_module.m"
          }
#line 259 "hlds_out_module.m"
        else
#line 260 "hlds_out_module.m"
          {
#line 260 "hlds_out_module.m"
            MR_Word hlds__hlds_out__hlds_out_module__P_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_module__HeadVar__2_2, (MR_Integer) 0)));
#line 260 "hlds_out_module.m"
            MR_Word hlds__hlds_out__hlds_out_module__Ps_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_module__HeadVar__2_2, (MR_Integer) 1)));

#line 261 "hlds_out_module.m"
            {
#line 261 "hlds_out_module.m"
              mercury__io__write_string_3_p_0((MR_String) ", ");
            }
#line 262 "hlds_out_module.m"
            {
#line 262 "hlds_out_module.m"
              parse_tree__mercury_to_mercury__mercury_output_var_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, hlds__hlds_out__hlds_out_module__HeadVar__1_1, (MR_Integer) 0, hlds__hlds_out__hlds_out_module__P_10);
            }
#line 263 "hlds_out_module.m"
            /* direct tailcall eliminated */
#line 263 "hlds_out_module.m"
            {
#line 263 "hlds_out_module.m"
              MR_Word hlds__hlds_out__hlds_out_module__HeadVar__2__tmp_copy_2 = hlds__hlds_out__hlds_out_module__Ps_11;

#line 263 "hlds_out_module.m"
              hlds__hlds_out__hlds_out_module__HeadVar__2_2 = hlds__hlds_out__hlds_out_module__HeadVar__2__tmp_copy_2;
#line 263 "hlds_out_module.m"
            }
#line 263 "hlds_out_module.m"
            continue;
#line 260 "hlds_out_module.m"
          }
#line 259 "hlds_out_module.m"
      }
#line 259 "hlds_out_module.m"
      break;
#line 259 "hlds_out_module.m"
    }
#line 256 "hlds_out_module.m"
}

#line 192 "hlds_out_module.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_type_table_entries_5_p_0(
#line 192 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__Info_1,
#line 192 "hlds_out_module.m"
  MR_Integer hlds__hlds_out__hlds_out_module__Indent_2,
#line 192 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__HeadVar__3_3)
#line 192 "hlds_out_module.m"
{
#line 195 "hlds_out_module.m"
  while (MR_TRUE)
#line 195 "hlds_out_module.m"
    {
#line 195 "hlds_out_module.m"
      /* tailcall optimized into a loop */
#line 195 "hlds_out_module.m"
      {
#line 195 "hlds_out_module.m"
        MR_bool hlds__hlds_out__hlds_out_module__succeeded;

#line 195 "hlds_out_module.m"
        if ((hlds__hlds_out__hlds_out_module__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 195 "hlds_out_module.m"
          {
#line 195 "hlds_out_module.m"
          }
#line 195 "hlds_out_module.m"
        else
#line 196 "hlds_out_module.m"
          {
#line 196 "hlds_out_module.m"
            MR_Word hlds__hlds_out__hlds_out_module__TypeCtor_13;
#line 196 "hlds_out_module.m"
            MR_Word hlds__hlds_out__hlds_out_module__TypeDefn_14;
#line 196 "hlds_out_module.m"
            MR_Word hlds__hlds_out__hlds_out_module__Types_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_module__HeadVar__3_3, (MR_Integer) 1)));
#line 196 "hlds_out_module.m"
            MR_Word hlds__hlds_out__hlds_out_module__TVarSet_17;
#line 196 "hlds_out_module.m"
            MR_Word hlds__hlds_out__hlds_out_module__TypeParams_18;
#line 196 "hlds_out_module.m"
            MR_Word hlds__hlds_out__hlds_out_module__TypeBody_19;
#line 196 "hlds_out_module.m"
            MR_Word hlds__hlds_out__hlds_out_module__Status_20;
#line 196 "hlds_out_module.m"
            MR_Word hlds__hlds_out__hlds_out_module__Context_21;
#line 196 "hlds_out_module.m"
            MR_String hlds__hlds_out__hlds_out_module__DumpOptions_22;
#line 196 "hlds_out_module.m"
            MR_Word hlds__hlds_out__hlds_out_module__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_module__HeadVar__3_3, (MR_Integer) 0)));
#line 196 "hlds_out_module.m"
            MR_Integer hlds__hlds_out__hlds_out_module__V_54_54;
#line 205 "hlds_out_module.m"
            MR_String hlds__hlds_out__hlds_out_module__V_58_58;
#line 205 "hlds_out_module.m"
            MR_Word hlds__hlds_out__hlds_out_module__V_59_59;
#line 205 "hlds_out_module.m"
            MR_Word hlds__hlds_out__hlds_out_module__V_60_60;
#line 205 "hlds_out_module.m"
            MR_Word hlds__hlds_out__hlds_out_module__V_61_61;

#line 196 "hlds_out_module.m"
            hlds__hlds_out__hlds_out_module__TypeCtor_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__V_29_29, (MR_Integer) 0)));
#line 196 "hlds_out_module.m"
            hlds__hlds_out__hlds_out_module__TypeDefn_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__V_29_29, (MR_Integer) 1)));
#line 197 "hlds_out_module.m"
            {
#line 197 "hlds_out_module.m"
              hlds__hlds_data__get_type_defn_tvarset_2_p_0(hlds__hlds_out__hlds_out_module__TypeDefn_14, &hlds__hlds_out__hlds_out_module__TVarSet_17);
            }
#line 198 "hlds_out_module.m"
            {
#line 198 "hlds_out_module.m"
              hlds__hlds_data__get_type_defn_tparams_2_p_0(hlds__hlds_out__hlds_out_module__TypeDefn_14, &hlds__hlds_out__hlds_out_module__TypeParams_18);
            }
#line 199 "hlds_out_module.m"
            {
#line 199 "hlds_out_module.m"
              hlds__hlds_data__get_type_defn_body_2_p_0(hlds__hlds_out__hlds_out_module__TypeDefn_14, &hlds__hlds_out__hlds_out_module__TypeBody_19);
            }
#line 200 "hlds_out_module.m"
            {
#line 200 "hlds_out_module.m"
              hlds__hlds_data__get_type_defn_status_2_p_0(hlds__hlds_out__hlds_out_module__TypeDefn_14, &hlds__hlds_out__hlds_out_module__Status_20);
            }
#line 201 "hlds_out_module.m"
            {
#line 201 "hlds_out_module.m"
              hlds__hlds_data__get_type_defn_context_2_p_0(hlds__hlds_out__hlds_out_module__TypeDefn_14, &hlds__hlds_out__hlds_out_module__Context_21);
            }
#line 204 "hlds_out_module.m"
            {
#line 204 "hlds_out_module.m"
              mercury__io__write_char_3_p_0((MR_Char) 10);
            }
#line 205 "hlds_out_module.m"
            hlds__hlds_out__hlds_out_module__DumpOptions_22 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__Info_1, (MR_Integer) 0)));
#line 205 "hlds_out_module.m"
            hlds__hlds_out__hlds_out_module__V_58_58 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__Info_1, (MR_Integer) 1)));
#line 205 "hlds_out_module.m"
            hlds__hlds_out__hlds_out_module__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__Info_1, (MR_Integer) 2)));
#line 205 "hlds_out_module.m"
            hlds__hlds_out__hlds_out_module__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__Info_1, (MR_Integer) 3)));
#line 205 "hlds_out_module.m"
            hlds__hlds_out__hlds_out_module__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__Info_1, (MR_Integer) 4)));
#line 206 "hlds_out_module.m"
            {
#line 206 "hlds_out_module.m"
              hlds__hlds_out__hlds_out_module__succeeded = mercury__string__contains_char_2_p_0(hlds__hlds_out__hlds_out_module__DumpOptions_22, (MR_Char) 99);
            }
#line 221 "hlds_out_module.m"
            if (hlds__hlds_out__hlds_out_module__succeeded)
#line 207 "hlds_out_module.m"
              {
#line 207 "hlds_out_module.m"
                MR_String hlds__hlds_out__hlds_out_module__FileName_23;
#line 207 "hlds_out_module.m"
                MR_Integer hlds__hlds_out__hlds_out_module__LineNumber_24;

#line 207 "hlds_out_module.m"
                {
#line 207 "hlds_out_module.m"
                  mercury__term__context_file_2_p_0(hlds__hlds_out__hlds_out_module__Context_21, &hlds__hlds_out__hlds_out_module__FileName_23);
                }
#line 208 "hlds_out_module.m"
                {
#line 208 "hlds_out_module.m"
                  mercury__term__context_line_2_p_0(hlds__hlds_out__hlds_out_module__Context_21, &hlds__hlds_out__hlds_out_module__LineNumber_24);
                }
#line 209 "hlds_out_module.m"
                hlds__hlds_out__hlds_out_module__succeeded = (strcmp(hlds__hlds_out__hlds_out_module__FileName_23, (MR_String) "") == 0);
#line 209 "hlds_out_module.m"
                hlds__hlds_out__hlds_out_module__succeeded = !(hlds__hlds_out__hlds_out_module__succeeded);
#line 218 "hlds_out_module.m"
                if (hlds__hlds_out__hlds_out_module__succeeded)
#line 210 "hlds_out_module.m"
                  {
#line 210 "hlds_out_module.m"
                    MR_String hlds__hlds_out__hlds_out_module__V_42_42;

#line 210 "hlds_out_module.m"
                    {
#line 210 "hlds_out_module.m"
                      hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_module__Indent_2);
                    }
#line 211 "hlds_out_module.m"
                    {
#line 211 "hlds_out_module.m"
                      mercury__io__write_string_3_p_0((MR_String) "% context: file \140");
                    }
#line 212 "hlds_out_module.m"
                    {
#line 212 "hlds_out_module.m"
                      mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_module__FileName_23);
                    }
#line 213 "hlds_out_module.m"
                    {
#line 213 "hlds_out_module.m"
                      mercury__io__write_string_3_p_0((MR_String) "\', line ");
                    }
#line 214 "hlds_out_module.m"
                    {
#line 214 "hlds_out_module.m"
                      mercury__io__write_int_3_p_0(hlds__hlds_out__hlds_out_module__LineNumber_24);
                    }
#line 215 "hlds_out_module.m"
                    {
#line 215 "hlds_out_module.m"
                      mercury__io__write_string_3_p_0((MR_String) ", status ");
                    }
#line 216 "hlds_out_module.m"
                    {
#line 216 "hlds_out_module.m"
                      hlds__hlds_out__hlds_out_module__V_42_42 = hlds__hlds_out__hlds_out_pred__import_status_to_string_1_f_0(hlds__hlds_out__hlds_out_module__Status_20);
                    }
#line 216 "hlds_out_module.m"
                    {
#line 216 "hlds_out_module.m"
                      mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_module__V_42_42);
                    }
#line 217 "hlds_out_module.m"
                    {
#line 217 "hlds_out_module.m"
                      mercury__io__write_char_3_p_0((MR_Char) 10);
                    }
#line 210 "hlds_out_module.m"
                  }
#line 218 "hlds_out_module.m"
                else
#line 218 "hlds_out_module.m"
                  {
#line 218 "hlds_out_module.m"
                  }
#line 207 "hlds_out_module.m"
              }
#line 221 "hlds_out_module.m"
            else
#line 221 "hlds_out_module.m"
              {
#line 221 "hlds_out_module.m"
              }
#line 225 "hlds_out_module.m"
            {
#line 225 "hlds_out_module.m"
              hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_module__Indent_2);
            }
#line 228 "hlds_out_module.m"
            if (((((MR_tag((MR_Word) hlds__hlds_out__hlds_out_module__TypeBody_19)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_module__TypeBody_19, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 228 "hlds_out_module.m"
              {
#line 228 "hlds_out_module.m"
                MR_Word hlds__hlds_out__hlds_out_module__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_module__TypeBody_19, (MR_Integer) 1)));

#line 228 "hlds_out_module.m"
                hlds__hlds_out__hlds_out_module__succeeded = (hlds__hlds_out__hlds_out_module__V_47_47 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 228 "hlds_out_module.m"
              }
#line 228 "hlds_out_module.m"
            else
#line 228 "hlds_out_module.m"
            if (((((MR_tag((MR_Word) hlds__hlds_out__hlds_out_module__TypeBody_19)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_module__TypeBody_19, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 227 "hlds_out_module.m"
              hlds__hlds_out__hlds_out_module__succeeded = MR_TRUE;
#line 228 "hlds_out_module.m"
            else
#line 228 "hlds_out_module.m"
              hlds__hlds_out__hlds_out_module__succeeded = MR_FALSE;
#line 232 "hlds_out_module.m"
            if (hlds__hlds_out__hlds_out_module__succeeded)
#line 231 "hlds_out_module.m"
              {
#line 231 "hlds_out_module.m"
                {
#line 231 "hlds_out_module.m"
                  mercury__io__write_string_3_p_0((MR_String) ":- solver type ");
                }
#line 231 "hlds_out_module.m"
              }
#line 232 "hlds_out_module.m"
            else
#line 233 "hlds_out_module.m"
              {
#line 233 "hlds_out_module.m"
                {
#line 233 "hlds_out_module.m"
                  mercury__io__write_string_3_p_0((MR_String) ":- type ");
                }
#line 233 "hlds_out_module.m"
              }
#line 235 "hlds_out_module.m"
            {
#line 235 "hlds_out_module.m"
              parse_tree__prog_out__write_type_name_3_p_0(hlds__hlds_out__hlds_out_module__TypeCtor_13);
            }
#line 244 "hlds_out_module.m"
            if ((hlds__hlds_out__hlds_out_module__TypeParams_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 244 "hlds_out_module.m"
              {
#line 244 "hlds_out_module.m"
              }
#line 244 "hlds_out_module.m"
            else
#line 244 "hlds_out_module.m"
              {
#line 244 "hlds_out_module.m"
                MR_Word hlds__hlds_out__hlds_out_module__V_95_95 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_module__TypeParams_18, (MR_Integer) 1)));
#line 244 "hlds_out_module.m"
                MR_Word hlds__hlds_out__hlds_out_module__V_96_96 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_module__TypeParams_18, (MR_Integer) 0)));

#line 244 "hlds_out_module.m"
                if ((hlds__hlds_out__hlds_out_module__V_95_95 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 245 "hlds_out_module.m"
                  {
#line 246 "hlds_out_module.m"
                    {
#line 246 "hlds_out_module.m"
                      mercury__io__write_string_3_p_0((MR_String) "(");
                    }
#line 247 "hlds_out_module.m"
                    {
#line 247 "hlds_out_module.m"
                      parse_tree__mercury_to_mercury__mercury_output_var_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, hlds__hlds_out__hlds_out_module__TVarSet_17, (MR_Integer) 0, hlds__hlds_out__hlds_out_module__V_96_96);
                    }
#line 248 "hlds_out_module.m"
                    {
#line 248 "hlds_out_module.m"
                      mercury__io__write_string_3_p_0((MR_String) ")");
                    }
#line 245 "hlds_out_module.m"
                  }
#line 244 "hlds_out_module.m"
                else
#line 249 "hlds_out_module.m"
                  {
#line 249 "hlds_out_module.m"
                    MR_Word hlds__hlds_out__hlds_out_module__P_102;
#line 249 "hlds_out_module.m"
                    MR_Word hlds__hlds_out__hlds_out_module__Ps_103;

#line 251 "hlds_out_module.m"
                    {
#line 251 "hlds_out_module.m"
                      mercury__io__write_string_3_p_0((MR_String) "(");
                    }
#line 252 "hlds_out_module.m"
                    {
#line 252 "hlds_out_module.m"
                      parse_tree__mercury_to_mercury__mercury_output_var_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, hlds__hlds_out__hlds_out_module__TVarSet_17, (MR_Integer) 0, hlds__hlds_out__hlds_out_module__V_96_96);
                    }
#line 260 "hlds_out_module.m"
                    hlds__hlds_out__hlds_out_module__P_102 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_module__V_95_95, (MR_Integer) 0)));
#line 260 "hlds_out_module.m"
                    hlds__hlds_out__hlds_out_module__Ps_103 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_module__V_95_95, (MR_Integer) 1)));
#line 261 "hlds_out_module.m"
                    {
#line 261 "hlds_out_module.m"
                      mercury__io__write_string_3_p_0((MR_String) ", ");
                    }
#line 262 "hlds_out_module.m"
                    {
#line 262 "hlds_out_module.m"
                      parse_tree__mercury_to_mercury__mercury_output_var_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, hlds__hlds_out__hlds_out_module__TVarSet_17, (MR_Integer) 0, hlds__hlds_out__hlds_out_module__P_102);
                    }
#line 263 "hlds_out_module.m"
                    {
#line 263 "hlds_out_module.m"
                      hlds__hlds_out__hlds_out_module__write_type_params_loop_4_p_0(hlds__hlds_out__hlds_out_module__TVarSet_17, hlds__hlds_out__hlds_out_module__Ps_103);
                    }
#line 254 "hlds_out_module.m"
                    {
#line 254 "hlds_out_module.m"
                      mercury__io__write_string_3_p_0((MR_String) ")");
                    }
#line 249 "hlds_out_module.m"
                  }
#line 244 "hlds_out_module.m"
              }
#line 237 "hlds_out_module.m"
            hlds__hlds_out__hlds_out_module__V_54_54 = (hlds__hlds_out__hlds_out_module__Indent_2 + (MR_Integer) 1);
#line 237 "hlds_out_module.m"
            {
#line 237 "hlds_out_module.m"
              hlds__hlds_out__hlds_out_module__write_type_body_7_p_0(hlds__hlds_out__hlds_out_module__Info_1, hlds__hlds_out__hlds_out_module__TypeCtor_13, hlds__hlds_out__hlds_out_module__TypeBody_19, hlds__hlds_out__hlds_out_module__V_54_54, hlds__hlds_out__hlds_out_module__TVarSet_17);
            }
#line 239 "hlds_out_module.m"
            /* direct tailcall eliminated */
#line 239 "hlds_out_module.m"
            {
#line 239 "hlds_out_module.m"
              MR_Word hlds__hlds_out__hlds_out_module__HeadVar__3__tmp_copy_3 = hlds__hlds_out__hlds_out_module__Types_15;

#line 239 "hlds_out_module.m"
              hlds__hlds_out__hlds_out_module__HeadVar__3_3 = hlds__hlds_out__hlds_out_module__HeadVar__3__tmp_copy_3;
#line 239 "hlds_out_module.m"
            }
#line 239 "hlds_out_module.m"
            continue;
#line 196 "hlds_out_module.m"
          }
#line 195 "hlds_out_module.m"
      }
#line 195 "hlds_out_module.m"
      break;
#line 195 "hlds_out_module.m"
    }
#line 192 "hlds_out_module.m"
}

#line 182 "hlds_out_module.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_types_5_p_0(
#line 182 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__Info_6,
#line 182 "hlds_out_module.m"
  MR_Integer hlds__hlds_out__hlds_out_module__Indent_7,
#line 182 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__TypeTable_8)
#line 182 "hlds_out_module.m"
{
#line 185 "hlds_out_module.m"
  {
#line 185 "hlds_out_module.m"
    MR_bool hlds__hlds_out__hlds_out_module__succeeded;
#line 185 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__TypeAssocList_10;

#line 186 "hlds_out_module.m"
    {
#line 186 "hlds_out_module.m"
      hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_module__Indent_7);
    }
#line 187 "hlds_out_module.m"
    {
#line 187 "hlds_out_module.m"
      mercury__io__write_string_3_p_0((MR_String) "%-------- Types --------\n");
    }
#line 188 "hlds_out_module.m"
    {
#line 188 "hlds_out_module.m"
      hlds__hlds_data__get_all_type_ctor_defns_2_p_0(hlds__hlds_out__hlds_out_module__TypeTable_8, &hlds__hlds_out__hlds_out_module__TypeAssocList_10);
    }
#line 189 "hlds_out_module.m"
    {
#line 189 "hlds_out_module.m"
      hlds__hlds_out__hlds_out_module__write_type_table_entries_5_p_0(hlds__hlds_out__hlds_out_module__Info_6, hlds__hlds_out__hlds_out_module__Indent_7, hlds__hlds_out__hlds_out_module__TypeAssocList_10);
    }
#line 190 "hlds_out_module.m"
    {
#line 190 "hlds_out_module.m"
      mercury__io__nl_2_p_0();
#line 190 "hlds_out_module.m"
      return;
    }
#line 185 "hlds_out_module.m"
  }
#line 182 "hlds_out_module.m"
}

#line 154 "hlds_out_module.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_footer_4_p_0(
#line 154 "hlds_out_module.m"
  MR_Integer hlds__hlds_out__hlds_out_module__Indent_5,
#line 154 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__Module_6)
#line 154 "hlds_out_module.m"
{
#line 156 "hlds_out_module.m"
  {
#line 156 "hlds_out_module.m"
    MR_bool hlds__hlds_out__hlds_out_module__succeeded;
#line 156 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__Name_8;

#line 157 "hlds_out_module.m"
    {
#line 157 "hlds_out_module.m"
      hlds__hlds_module__module_info_get_name_2_p_0(hlds__hlds_out__hlds_out_module__Module_6, &hlds__hlds_out__hlds_out_module__Name_8);
    }
#line 158 "hlds_out_module.m"
    {
#line 158 "hlds_out_module.m"
      hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_module__Indent_5);
    }
#line 159 "hlds_out_module.m"
    {
#line 159 "hlds_out_module.m"
      mercury__io__write_string_3_p_0((MR_String) ":- end_module ");
    }
#line 160 "hlds_out_module.m"
    {
#line 160 "hlds_out_module.m"
      parse_tree__prog_out__write_sym_name_3_p_0(hlds__hlds_out__hlds_out_module__Name_8);
    }
#line 161 "hlds_out_module.m"
    {
#line 161 "hlds_out_module.m"
      mercury__io__write_string_3_p_0((MR_String) ".\n");
#line 161 "hlds_out_module.m"
      return;
    }
#line 156 "hlds_out_module.m"
  }
#line 154 "hlds_out_module.m"
}

#line 34 "hlds_out_module.m"
void MR_CALL 
hlds__hlds_out__hlds_out_module__write_promise_13_p_0(
#line 34 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__Info_14,
#line 34 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__PromiseType_15,
#line 34 "hlds_out_module.m"
  MR_Integer hlds__hlds_out__hlds_out_module__Indent_16,
#line 34 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__ModuleInfo_17,
#line 34 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module___PredId_18,
#line 34 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__VarSet_19,
#line 34 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__AppendVarNums_20,
#line 34 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__HeadVars_21,
#line 34 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module___PredOrFunc_22,
#line 34 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__Clause_23,
#line 34 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__TypeQual_24)
#line 34 "hlds_out_module.m"
{
#line 1161 "hlds_out_module.m"
  {
#line 1161 "hlds_out_module.m"
    MR_bool hlds__hlds_out__hlds_out_module__succeeded;

#line 1161 "hlds_out_module.m"
    {
#line 1161 "hlds_out_module.m"
      hlds__hlds_out__hlds_out_module__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_112_114_111_109_105_115_101_95_95_91_53_44_32_57_93_95_48_13_p_0(hlds__hlds_out__hlds_out_module__Info_14, hlds__hlds_out__hlds_out_module__PromiseType_15, hlds__hlds_out__hlds_out_module__Indent_16, hlds__hlds_out__hlds_out_module__ModuleInfo_17, hlds__hlds_out__hlds_out_module__VarSet_19, hlds__hlds_out__hlds_out_module__AppendVarNums_20, hlds__hlds_out__hlds_out_module__HeadVars_21, hlds__hlds_out__hlds_out_module__Clause_23, hlds__hlds_out__hlds_out_module__TypeQual_24);
#line 1161 "hlds_out_module.m"
      return;
    }
#line 1161 "hlds_out_module.m"
  }
#line 34 "hlds_out_module.m"
}

#line 174 "hlds_out_module.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_hlds_4_p_0_1(
#line 174 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__closure_arg,
#line 174 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_1,
#line 174 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_2,
#line 174 "hlds_out_module.m"
  MR_Box * hlds__hlds_out__hlds_out_module__wrapper_arg_3)
#line 174 "hlds_out_module.m"
{
#line 174 "hlds_out_module.m"
  {
#line 174 "hlds_out_module.m"
    MR_Box hlds__hlds_out__hlds_out_module__closure = hlds__hlds_out__hlds_out_module__closure_arg;

#line 174 "hlds_out_module.m"
    {
#line 174 "hlds_out_module.m"
      parse_tree__prog_out__write_sym_name_3_p_0(((MR_Word) hlds__hlds_out__hlds_out_module__wrapper_arg_1));
#line 174 "hlds_out_module.m"
      return;
    }
#line 174 "hlds_out_module.m"
  }
#line 174 "hlds_out_module.m"
}

#line 32 "hlds_out_module.m"
void MR_CALL 
hlds__hlds_out__hlds_out_module__write_hlds_4_p_0(
#line 32 "hlds_out_module.m"
  MR_Integer hlds__hlds_out__hlds_out_module__Indent_5,
#line 32 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__ModuleInfo_6)
#line 32 "hlds_out_module.m"
{
#line 73 "hlds_out_module.m"
  {
#line 73 "hlds_out_module.m"
    MR_bool hlds__hlds_out__hlds_out_module__succeeded;
#line 73 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__Globals_8;
#line 73 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__DumpPredIdStrs_9;
#line 73 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__DumpPredNames_10;
#line 73 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__Info_11;
#line 73 "hlds_out_module.m"
    MR_String hlds__hlds_out__hlds_out_module__DumpOptions_13;
#line 73 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__Name_60;
#line 82 "hlds_out_module.m"
    MR_String hlds__hlds_out__hlds_out_module__V_51_51;
#line 82 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__V_52_52;
#line 82 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__V_53_53;
#line 82 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__V_54_54;

#line 74 "hlds_out_module.m"
    {
#line 74 "hlds_out_module.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(hlds__hlds_out__hlds_out_module__ModuleInfo_6, &hlds__hlds_out__hlds_out_module__Globals_8);
    }
#line 75 "hlds_out_module.m"
    {
#line 75 "hlds_out_module.m"
      libs__globals__lookup_accumulating_option_3_p_0(hlds__hlds_out__hlds_out_module__Globals_8, (MR_Integer) 147, &hlds__hlds_out__hlds_out_module__DumpPredIdStrs_9);
    }
#line 77 "hlds_out_module.m"
    {
#line 77 "hlds_out_module.m"
      libs__globals__lookup_accumulating_option_3_p_0(hlds__hlds_out__hlds_out_module__Globals_8, (MR_Integer) 148, &hlds__hlds_out__hlds_out_module__DumpPredNames_10);
    }
#line 146 "hlds_out_module.m"
    {
#line 146 "hlds_out_module.m"
      hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_module__Indent_5);
    }
#line 147 "hlds_out_module.m"
    {
#line 147 "hlds_out_module.m"
      mercury__io__write_string_3_p_0((MR_String) "% vim: ts=2 sw=2\n\n");
    }
#line 148 "hlds_out_module.m"
    {
#line 148 "hlds_out_module.m"
      hlds__hlds_module__module_info_get_name_2_p_0(hlds__hlds_out__hlds_out_module__ModuleInfo_6, &hlds__hlds_out__hlds_out_module__Name_60);
    }
#line 149 "hlds_out_module.m"
    {
#line 149 "hlds_out_module.m"
      hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_module__Indent_5);
    }
#line 150 "hlds_out_module.m"
    {
#line 150 "hlds_out_module.m"
      mercury__io__write_string_3_p_0((MR_String) ":- module ");
    }
#line 151 "hlds_out_module.m"
    {
#line 151 "hlds_out_module.m"
      parse_tree__prog_out__write_sym_name_3_p_0(hlds__hlds_out__hlds_out_module__Name_60);
    }
#line 152 "hlds_out_module.m"
    {
#line 152 "hlds_out_module.m"
      mercury__io__write_string_3_p_0((MR_String) ".\n\n");
    }
#line 80 "hlds_out_module.m"
    {
#line 80 "hlds_out_module.m"
      hlds__hlds_out__hlds_out_module__Info_11 = hlds__hlds_out__hlds_out_util__init_hlds_out_info_2_f_0(hlds__hlds_out__hlds_out_module__Globals_8, (MR_Integer) 1);
    }
#line 82 "hlds_out_module.m"
    hlds__hlds_out__hlds_out_module__DumpOptions_13 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__Info_11, (MR_Integer) 0)));
#line 82 "hlds_out_module.m"
    hlds__hlds_out__hlds_out_module__V_51_51 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__Info_11, (MR_Integer) 1)));
#line 82 "hlds_out_module.m"
    hlds__hlds_out__hlds_out_module__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__Info_11, (MR_Integer) 2)));
#line 82 "hlds_out_module.m"
    hlds__hlds_out__hlds_out_module__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__Info_11, (MR_Integer) 3)));
#line 82 "hlds_out_module.m"
    hlds__hlds_out__hlds_out_module__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__Info_11, (MR_Integer) 4)));
#line 87 "hlds_out_module.m"
    {
#line 87 "hlds_out_module.m"
      MR_String hlds__hlds_out__hlds_out_module__V_14_14;
#line 87 "hlds_out_module.m"
      MR_Word hlds__hlds_out__hlds_out_module__V_15_15;

#line 87 "hlds_out_module.m"
      hlds__hlds_out__hlds_out_module__succeeded = ((MR_tag((MR_Word) hlds__hlds_out__hlds_out_module__DumpPredIdStrs_9)) == (MR_mktag((MR_Integer) 1)));
#line 87 "hlds_out_module.m"
      if (hlds__hlds_out__hlds_out_module__succeeded)
#line 87 "hlds_out_module.m"
        {
#line 87 "hlds_out_module.m"
          hlds__hlds_out__hlds_out_module__V_14_14 = ((MR_String) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_module__DumpPredIdStrs_9, (MR_Integer) 0)));
#line 87 "hlds_out_module.m"
          hlds__hlds_out__hlds_out_module__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_module__DumpPredIdStrs_9, (MR_Integer) 1)));
#line 87 "hlds_out_module.m"
        }
#line 87 "hlds_out_module.m"
    }
#line 88 "hlds_out_module.m"
    if (!(hlds__hlds_out__hlds_out_module__succeeded))
#line 88 "hlds_out_module.m"
      {
#line 88 "hlds_out_module.m"
        MR_String hlds__hlds_out__hlds_out_module__V_16_16;
#line 88 "hlds_out_module.m"
        MR_Word hlds__hlds_out__hlds_out_module__V_17_17;

#line 88 "hlds_out_module.m"
        hlds__hlds_out__hlds_out_module__succeeded = ((MR_tag((MR_Word) hlds__hlds_out__hlds_out_module__DumpPredNames_10)) == (MR_mktag((MR_Integer) 1)));
#line 88 "hlds_out_module.m"
        if (hlds__hlds_out__hlds_out_module__succeeded)
#line 88 "hlds_out_module.m"
          {
#line 88 "hlds_out_module.m"
            hlds__hlds_out__hlds_out_module__V_16_16 = ((MR_String) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_module__DumpPredNames_10, (MR_Integer) 0)));
#line 88 "hlds_out_module.m"
            hlds__hlds_out__hlds_out_module__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_module__DumpPredNames_10, (MR_Integer) 1)));
#line 88 "hlds_out_module.m"
          }
#line 88 "hlds_out_module.m"
      }
#line 92 "hlds_out_module.m"
    if (hlds__hlds_out__hlds_out_module__succeeded)
#line 92 "hlds_out_module.m"
      {
#line 92 "hlds_out_module.m"
      }
#line 92 "hlds_out_module.m"
    else
#line 99 "hlds_out_module.m"
      {
#line 93 "hlds_out_module.m"
        {
#line 93 "hlds_out_module.m"
          hlds__hlds_out__hlds_out_module__succeeded = mercury__string__contains_char_2_p_0(hlds__hlds_out__hlds_out_module__DumpOptions_13, (MR_Char) 73);
        }
#line 97 "hlds_out_module.m"
        if (hlds__hlds_out__hlds_out_module__succeeded)
#line 95 "hlds_out_module.m"
          {
#line 95 "hlds_out_module.m"
            MR_Word hlds__hlds_out__hlds_out_module__TypeCtorInfo_19_84;
#line 95 "hlds_out_module.m"
            MR_Word hlds__hlds_out__hlds_out_module__ImportedModuleNames_18;
#line 95 "hlds_out_module.m"
            MR_Word hlds__hlds_out__hlds_out_module__V_78_78;

#line 94 "hlds_out_module.m"
            {
#line 94 "hlds_out_module.m"
              hlds__hlds_module__module_info_get_imported_module_names_2_p_0(hlds__hlds_out__hlds_out_module__ModuleInfo_6, &hlds__hlds_out__hlds_out_module__ImportedModuleNames_18);
            }
#line 172 "hlds_out_module.m"
            {
#line 172 "hlds_out_module.m"
              hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_module__Indent_5);
            }
#line 173 "hlds_out_module.m"
            {
#line 173 "hlds_out_module.m"
              mercury__io__write_string_3_p_0((MR_String) ":- import_module ");
            }
#line 9302 "hlds.hlds_out.hlds_out_module.c"
            hlds__hlds_out__hlds_out_module__TypeCtorInfo_19_84 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
#line 174 "hlds_out_module.m"
            {
#line 174 "hlds_out_module.m"
              hlds__hlds_out__hlds_out_module__V_78_78 = mercury__set__to_sorted_list_1_f_0(hlds__hlds_out__hlds_out_module__TypeCtorInfo_19_84, hlds__hlds_out__hlds_out_module__ImportedModuleNames_18);
            }
#line 174 "hlds_out_module.m"
            {
#line 174 "hlds_out_module.m"
              mercury__io__write_list_5_p_0(hlds__hlds_out__hlds_out_module__TypeCtorInfo_19_84, hlds__hlds_out__hlds_out_module__V_78_78, (MR_String) ", ", (MR_Word) &hlds__hlds_out__hlds_out_module_scalar_common_2[11]);
            }
#line 175 "hlds_out_module.m"
            {
#line 175 "hlds_out_module.m"
              mercury__io__write_string_3_p_0((MR_String) ".\n\n");
            }
#line 95 "hlds_out_module.m"
          }
#line 97 "hlds_out_module.m"
        else
#line 97 "hlds_out_module.m"
          {
#line 97 "hlds_out_module.m"
          }
#line 100 "hlds_out_module.m"
        {
#line 100 "hlds_out_module.m"
          hlds__hlds_out__hlds_out_module__succeeded = mercury__string__contains_char_2_p_0(hlds__hlds_out__hlds_out_module__DumpOptions_13, (MR_Char) 84);
        }
#line 107 "hlds_out_module.m"
        if (hlds__hlds_out__hlds_out_module__succeeded)
#line 101 "hlds_out_module.m"
          {
#line 101 "hlds_out_module.m"
            MR_Word hlds__hlds_out__hlds_out_module__TypeTable_19;
#line 101 "hlds_out_module.m"
            MR_Word hlds__hlds_out__hlds_out_module__InstanceTable_20;
#line 101 "hlds_out_module.m"
            MR_Word hlds__hlds_out__hlds_out_module__ClassTable_21;

#line 101 "hlds_out_module.m"
            {
#line 101 "hlds_out_module.m"
              hlds__hlds_module__module_info_get_type_table_2_p_0(hlds__hlds_out__hlds_out_module__ModuleInfo_6, &hlds__hlds_out__hlds_out_module__TypeTable_19);
            }
#line 102 "hlds_out_module.m"
            {
#line 102 "hlds_out_module.m"
              hlds__hlds_module__module_info_get_instance_table_2_p_0(hlds__hlds_out__hlds_out_module__ModuleInfo_6, &hlds__hlds_out__hlds_out_module__InstanceTable_20);
            }
#line 103 "hlds_out_module.m"
            {
#line 103 "hlds_out_module.m"
              hlds__hlds_module__module_info_get_class_table_2_p_0(hlds__hlds_out__hlds_out_module__ModuleInfo_6, &hlds__hlds_out__hlds_out_module__ClassTable_21);
            }
#line 104 "hlds_out_module.m"
            {
#line 104 "hlds_out_module.m"
              hlds__hlds_out__hlds_out_module__write_types_5_p_0(hlds__hlds_out__hlds_out_module__Info_11, hlds__hlds_out__hlds_out_module__Indent_5, hlds__hlds_out__hlds_out_module__TypeTable_19);
            }
#line 105 "hlds_out_module.m"
            {
#line 105 "hlds_out_module.m"
              hlds__hlds_out__hlds_out_module__write_classes_5_p_0(hlds__hlds_out__hlds_out_module__Info_11, hlds__hlds_out__hlds_out_module__Indent_5, hlds__hlds_out__hlds_out_module__ClassTable_21);
            }
#line 106 "hlds_out_module.m"
            {
#line 106 "hlds_out_module.m"
              hlds__hlds_out__hlds_out_module__write_instances_5_p_0(hlds__hlds_out__hlds_out_module__Info_11, hlds__hlds_out__hlds_out_module__Indent_5, hlds__hlds_out__hlds_out_module__InstanceTable_20);
            }
#line 101 "hlds_out_module.m"
          }
#line 107 "hlds_out_module.m"
        else
#line 107 "hlds_out_module.m"
          {
#line 107 "hlds_out_module.m"
          }
#line 110 "hlds_out_module.m"
        {
#line 110 "hlds_out_module.m"
          hlds__hlds_out__hlds_out_module__succeeded = mercury__string__contains_char_2_p_0(hlds__hlds_out__hlds_out_module__DumpOptions_13, (MR_Char) 77);
        }
#line 117 "hlds_out_module.m"
        if (hlds__hlds_out__hlds_out_module__succeeded)
#line 111 "hlds_out_module.m"
          {
#line 111 "hlds_out_module.m"
            MR_Word hlds__hlds_out__hlds_out_module__InstTable_22;
#line 111 "hlds_out_module.m"
            MR_Integer hlds__hlds_out__hlds_out_module__InstLimit_24;
#line 112 "hlds_out_module.m"
            MR_Word hlds__hlds_out__hlds_out_module__ModeTable_23;

#line 111 "hlds_out_module.m"
            {
#line 111 "hlds_out_module.m"
              hlds__hlds_module__module_info_get_inst_table_2_p_0(hlds__hlds_out__hlds_out_module__ModuleInfo_6, &hlds__hlds_out__hlds_out_module__InstTable_22);
            }
#line 112 "hlds_out_module.m"
            {
#line 112 "hlds_out_module.m"
              hlds__hlds_module__module_info_get_mode_table_2_p_0(hlds__hlds_out__hlds_out_module__ModuleInfo_6, &hlds__hlds_out__hlds_out_module__ModeTable_23);
            }
#line 113 "hlds_out_module.m"
            {
#line 113 "hlds_out_module.m"
              libs__globals__lookup_int_option_3_p_0(hlds__hlds_out__hlds_out_module__Globals_8, (MR_Integer) 152, &hlds__hlds_out__hlds_out_module__InstLimit_24);
            }
#line 115 "hlds_out_module.m"
            {
#line 115 "hlds_out_module.m"
              hlds__hlds_out__hlds_out_module__write_inst_table_6_p_0((MR_Integer) 1, hlds__hlds_out__hlds_out_module__Indent_5, hlds__hlds_out__hlds_out_module__InstLimit_24, hlds__hlds_out__hlds_out_module__InstTable_22);
            }
#line 116 "hlds_out_module.m"
            {
#line 116 "hlds_out_module.m"
              hlds__hlds_out__hlds_out_module__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_109_111_100_101_95_116_97_98_108_101_95_95_91_50_93_95_48_4_p_0(hlds__hlds_out__hlds_out_module__Indent_5);
            }
#line 111 "hlds_out_module.m"
          }
#line 117 "hlds_out_module.m"
        else
#line 117 "hlds_out_module.m"
          {
#line 117 "hlds_out_module.m"
          }
#line 120 "hlds_out_module.m"
        {
#line 120 "hlds_out_module.m"
          hlds__hlds_out__hlds_out_module__succeeded = mercury__string__contains_char_2_p_0(hlds__hlds_out__hlds_out_module__DumpOptions_13, (MR_Char) 90);
        }
#line 123 "hlds_out_module.m"
        if (hlds__hlds_out__hlds_out_module__succeeded)
#line 121 "hlds_out_module.m"
          {
#line 121 "hlds_out_module.m"
            MR_Word hlds__hlds_out__hlds_out_module__TableStructMap_25;

#line 121 "hlds_out_module.m"
            {
#line 121 "hlds_out_module.m"
              hlds__hlds_module__module_info_get_table_struct_map_2_p_0(hlds__hlds_out__hlds_out_module__ModuleInfo_6, &hlds__hlds_out__hlds_out_module__TableStructMap_25);
            }
#line 122 "hlds_out_module.m"
            {
#line 122 "hlds_out_module.m"
              hlds__hlds_out__hlds_out_module__write_table_structs_4_p_0(hlds__hlds_out__hlds_out_module__ModuleInfo_6, hlds__hlds_out__hlds_out_module__TableStructMap_25);
            }
#line 121 "hlds_out_module.m"
          }
#line 123 "hlds_out_module.m"
        else
#line 123 "hlds_out_module.m"
          {
#line 123 "hlds_out_module.m"
          }
#line 99 "hlds_out_module.m"
      }
#line 127 "hlds_out_module.m"
    {
#line 127 "hlds_out_module.m"
      hlds__hlds_out__hlds_out_module__succeeded = mercury__string__contains_char_2_p_0(hlds__hlds_out__hlds_out_module__DumpOptions_13, (MR_Char) 88);
    }
#line 130 "hlds_out_module.m"
    if (hlds__hlds_out__hlds_out_module__succeeded)
#line 128 "hlds_out_module.m"
      {
#line 128 "hlds_out_module.m"
        MR_Word hlds__hlds_out__hlds_out_module__ConstStructDb_26;

#line 128 "hlds_out_module.m"
        {
#line 128 "hlds_out_module.m"
          hlds__hlds_module__module_info_get_const_struct_db_2_p_0(hlds__hlds_out__hlds_out_module__ModuleInfo_6, &hlds__hlds_out__hlds_out_module__ConstStructDb_26);
        }
#line 129 "hlds_out_module.m"
        {
#line 129 "hlds_out_module.m"
          hlds__hlds_out__hlds_out_module__write_const_struct_db_3_p_0(hlds__hlds_out__hlds_out_module__ConstStructDb_26);
        }
#line 128 "hlds_out_module.m"
      }
#line 130 "hlds_out_module.m"
    else
#line 130 "hlds_out_module.m"
      {
#line 130 "hlds_out_module.m"
      }
#line 133 "hlds_out_module.m"
    {
#line 133 "hlds_out_module.m"
      hlds__hlds_out__hlds_out_module__succeeded = mercury__string__contains_char_2_p_0(hlds__hlds_out__hlds_out_module__DumpOptions_13, (MR_Char) 120);
    }
#line 136 "hlds_out_module.m"
    if (hlds__hlds_out__hlds_out_module__succeeded)
#line 134 "hlds_out_module.m"
      {
#line 134 "hlds_out_module.m"
        MR_Word hlds__hlds_out__hlds_out_module__PredTable_27;

#line 134 "hlds_out_module.m"
        {
#line 134 "hlds_out_module.m"
          hlds__hlds_module__module_info_get_preds_2_p_0(hlds__hlds_out__hlds_out_module__ModuleInfo_6, &hlds__hlds_out__hlds_out_module__PredTable_27);
        }
#line 135 "hlds_out_module.m"
        {
#line 135 "hlds_out_module.m"
          hlds__hlds_out__hlds_out_module__write_preds_7_p_0(hlds__hlds_out__hlds_out_module__Info_11, (MR_Integer) 1, hlds__hlds_out__hlds_out_module__Indent_5, hlds__hlds_out__hlds_out_module__ModuleInfo_6, hlds__hlds_out__hlds_out_module__PredTable_27);
        }
#line 134 "hlds_out_module.m"
      }
#line 136 "hlds_out_module.m"
    else
#line 136 "hlds_out_module.m"
      {
#line 136 "hlds_out_module.m"
      }
#line 139 "hlds_out_module.m"
    {
#line 139 "hlds_out_module.m"
      hlds__hlds_out__hlds_out_module__write_footer_4_p_0(hlds__hlds_out__hlds_out_module__Indent_5, hlds__hlds_out__hlds_out_module__ModuleInfo_6);
#line 139 "hlds_out_module.m"
      return;
    }
#line 73 "hlds_out_module.m"
  }
#line 32 "hlds_out_module.m"
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

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module hlds.hlds_out.hlds_out_module. */
