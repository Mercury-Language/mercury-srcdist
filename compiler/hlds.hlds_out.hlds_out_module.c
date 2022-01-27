/*
** Automatically generated from `hlds_out_module.m'
** by the Mercury compiler,
** version rotd-2015-02-20
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
#include "tree_bitset.mih"
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



#line 1024 "hlds_out_module.m"
struct hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_env_0_s {
#line 1027 "hlds_out_module.m"
  MR_bool hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_env_0__succeeded;
#line 1027 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_env_0__DumpPredIdStrs_16;
#line 1027 "hlds_out_module.m"
  MR_Integer hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_env_0__PredIdInt_18;
#line 1043 "hlds_out_module.m"
  jmp_buf hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_env_0__commit_0;
#line 1043 "hlds_out_module.m"
  MR_String hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_env_0__DumpPredIdStr_36;
#line 1043 "hlds_out_module.m"
  MR_Integer hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_env_0__DumpPredId_37;
#line 1043 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_env_0__conv0_DumpPredIdStr_36;
#line 1024 "hlds_out_module.m"
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
static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_out__hlds_out_module__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_mer_inst_0__plain_parse_tree__prog_data__type_ctor_info_mer_inst_0;

#line 180 "hlds.hlds_out.hlds_out_module.c"
static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_out__hlds_out_module__pair__pti_pair_2__plain_builtin__type_ctor_info_int_0__plain_hlds__const_struct__type_ctor_info_const_struct_0;

#line 183 "hlds.hlds_out.hlds_out_module.c"
static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_out__hlds_out_module__pair__pti_pair_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_hlds__hlds_module__type_ctor_info_table_struct_info_0;

#line 186 "hlds.hlds_out.hlds_out_module.c"
static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_out__hlds_out_module__pair__pti_pair_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_hlds__hlds_pred__type_ctor_info_pred_info_0;

#line 189 "hlds.hlds_out.hlds_out_module.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_out__hlds_out_module__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 192 "hlds.hlds_out.hlds_out_module.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_out__hlds_out_module__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 805 "hlds_out_module.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_module__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_109_111_100_101_95_116_97_98_108_101_95_95_91_50_93_95_48_4_p_0(
#line 805 "hlds_out_module.m"
  MR_Integer hlds__hlds_out__hlds_out_module__Indent_5);

#line 1092 "hlds_out_module.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_module__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_112_114_111_109_105_115_101_95_95_91_53_44_32_57_93_95_48_13_p_0_1(
#line 1092 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__closure_arg,
#line 1092 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_1,
#line 1092 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_2,
#line 1092 "hlds_out_module.m"
  MR_Box * hlds__hlds_out__hlds_out_module__wrapper_arg_3);

#line 1092 "hlds_out_module.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_module__IntroducedFrom__pred__write_promise__1092__1_4_p_0(
#line 1092 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__VarSet_19,
#line 1092 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__HeadVar__2_33);

#line 1043 "hlds_out_module.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_1(
#line 1043 "hlds_out_module.m"
  void * hlds__hlds_out__hlds_out_module__env_ptr_arg);

#line 1043 "hlds_out_module.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_3(
#line 1043 "hlds_out_module.m"
  void * hlds__hlds_out__hlds_out_module__env_ptr_arg);

#line 1043 "hlds_out_module.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_2(
#line 1043 "hlds_out_module.m"
  void * hlds__hlds_out__hlds_out_module__env_ptr_arg);

#line 1043 "hlds_out_module.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_4(
#line 1043 "hlds_out_module.m"
  void * hlds__hlds_out__hlds_out_module__env_ptr_arg);

#line 1024 "hlds_out_module.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0(
#line 1024 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__Info_8,
#line 1024 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__Lang_9,
#line 1024 "hlds_out_module.m"
  MR_Integer hlds__hlds_out__hlds_out_module__Indent_10,
#line 1024 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__ModuleInfo_11,
#line 1024 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__HeadVar__5_5);

#line 1005 "hlds_out_module.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_module__compare_in_name_order_3_p_0(
#line 1005 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__HeadVar__1_1,
#line 1005 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__HeadVar__2_2,
#line 1005 "hlds_out_module.m"
  MR_Word * hlds__hlds_out__hlds_out_module__Result_8);

#line 1002 "hlds_out_module.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_preds_7_p_0_2(
#line 1002 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__closure_arg,
#line 1002 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_1,
#line 1002 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_2,
#line 1002 "hlds_out_module.m"
  MR_Box * hlds__hlds_out__hlds_out_module__wrapper_arg_3);

#line 1000 "hlds_out_module.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_preds_7_p_0_1(
#line 1000 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__closure_arg,
#line 1000 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_1,
#line 1000 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_2,
#line 1000 "hlds_out_module.m"
  MR_Box * hlds__hlds_out__hlds_out_module__wrapper_arg_3);

#line 985 "hlds_out_module.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_preds_7_p_0(
#line 985 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__Info_8,
#line 985 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__Lang_9,
#line 985 "hlds_out_module.m"
  MR_Integer hlds__hlds_out__hlds_out_module__Indent_10,
#line 985 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__ModuleInfo_11,
#line 985 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__PredTable_12);

#line 959 "hlds_out_module.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_arg_tabling_methods_4_p_0(
#line 959 "hlds_out_module.m"
  MR_String hlds__hlds_out__hlds_out_module__HeadVar__1_1,
#line 959 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__HeadVar__2_2);

#line 904 "hlds_out_module.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_table_struct_info_4_p_0_1(
#line 904 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__closure_arg,
#line 904 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_1,
#line 904 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_2,
#line 904 "hlds_out_module.m"
  MR_Box * hlds__hlds_out__hlds_out_module__wrapper_arg_3);

#line 889 "hlds_out_module.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_table_struct_info_4_p_0(
#line 889 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__ModuleInfo_5,
#line 889 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__HeadVar__2_2);

#line 886 "hlds_out_module.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_table_structs_4_p_0_1(
#line 886 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__closure_arg,
#line 886 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_1,
#line 886 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_2,
#line 886 "hlds_out_module.m"
  MR_Box * hlds__hlds_out__hlds_out_module__wrapper_arg_3);

#line 880 "hlds_out_module.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_table_structs_4_p_0(
#line 880 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__ModuleInfo_5,
#line 880 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__TableStructMap_6);

#line 852 "hlds_out_module.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_const_struct_args_4_p_0(
#line 852 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__HeadConstArg_5,
#line 852 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__TailConstArgs_6);

#line 830 "hlds_out_module.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_const_struct_3_p_0(
#line 830 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__HeadVar__1_1);

#line 827 "hlds_out_module.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_const_struct_db_3_p_0_1(
#line 827 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__closure_arg,
#line 827 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_1,
#line 827 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_2,
#line 827 "hlds_out_module.m"
  MR_Box * hlds__hlds_out__hlds_out_module__wrapper_arg_3);

#line 822 "hlds_out_module.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_const_struct_db_3_p_0(
#line 822 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__ConstStructDb_4);

#line 793 "hlds_out_module.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_inst_4_p_0(
#line 793 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__Lang_5,
#line 793 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__Inst_6);

#line 786 "hlds_out_module.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_inst_name_4_p_0(
#line 786 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__Lang_5,
#line 786 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__InstName_6);

#line 759 "hlds_out_module.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_inst_pair_maybe_inst_8_p_0(
#line 759 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__Lang_9,
#line 759 "hlds_out_module.m"
  MR_Integer hlds__hlds_out__hlds_out_module__Limit_10,
#line 759 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__HeadVar__3_3,
#line 759 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__MaybeInst_13,
#line 759 "hlds_out_module.m"
  MR_Integer hlds__hlds_out__hlds_out_module__STATE_VARIABLE_N_0_17,
#line 759 "hlds_out_module.m"
  MR_Integer * hlds__hlds_out__hlds_out_module__STATE_VARIABLE_N_18);

#line 734 "hlds_out_module.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_inst_name_maybe_inst_det_8_p_0(
#line 734 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__Lang_9,
#line 734 "hlds_out_module.m"
  MR_Integer hlds__hlds_out__hlds_out_module__Limit_10,
#line 734 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__InstName_11,
#line 734 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__MaybeInstDet_12,
#line 734 "hlds_out_module.m"
  MR_Integer hlds__hlds_out__hlds_out_module__STATE_VARIABLE_N_0_18,
#line 734 "hlds_out_module.m"
  MR_Integer * hlds__hlds_out__hlds_out_module__STATE_VARIABLE_N_19);

#line 711 "hlds_out_module.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_inst_name_maybe_inst_8_p_0(
#line 711 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__Lang_9,
#line 711 "hlds_out_module.m"
  MR_Integer hlds__hlds_out__hlds_out_module__Limit_10,
#line 711 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__InstName_11,
#line 711 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__MaybeInst_12,
#line 711 "hlds_out_module.m"
  MR_Integer hlds__hlds_out__hlds_out_module__STATE_VARIABLE_N_0_16,
#line 711 "hlds_out_module.m"
  MR_Integer * hlds__hlds_out__hlds_out_module__STATE_VARIABLE_N_17);

#line 697 "hlds_out_module.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_inst_params_5_p_0(
#line 697 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__InstVar_6,
#line 697 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__InstVars_7,
#line 697 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__InstVarSet_8);

#line 669 "hlds_out_module.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_user_inst_5_p_0(
#line 669 "hlds_out_module.m"
  MR_Integer hlds__hlds_out__hlds_out_module__Indent_6,
#line 669 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__InstId_7,
#line 669 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__InstDefn_8);

#line 656 "hlds_out_module.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_inst_table_6_p_0_4(
#line 656 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__closure_arg,
#line 656 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_1,
#line 656 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_2,
#line 656 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_3,
#line 656 "hlds_out_module.m"
  MR_Box * hlds__hlds_out__hlds_out_module__wrapper_arg_4,
#line 656 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_5,
#line 656 "hlds_out_module.m"
  MR_Box * hlds__hlds_out__hlds_out_module__wrapper_arg_6);

#line 638 "hlds_out_module.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_inst_table_6_p_0_3(
#line 638 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__closure_arg,
#line 638 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_1,
#line 638 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_2,
#line 638 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_3,
#line 638 "hlds_out_module.m"
  MR_Box * hlds__hlds_out__hlds_out_module__wrapper_arg_4,
#line 638 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_5,
#line 638 "hlds_out_module.m"
  MR_Box * hlds__hlds_out__hlds_out_module__wrapper_arg_6);

#line 632 "hlds_out_module.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_inst_table_6_p_0_2(
#line 632 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__closure_arg,
#line 632 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_1,
#line 632 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_2,
#line 632 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_3,
#line 632 "hlds_out_module.m"
  MR_Box * hlds__hlds_out__hlds_out_module__wrapper_arg_4,
#line 632 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_5,
#line 632 "hlds_out_module.m"
  MR_Box * hlds__hlds_out__hlds_out_module__wrapper_arg_6);

#line 628 "hlds_out_module.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_inst_table_6_p_0_1(
#line 628 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__closure_arg,
#line 628 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_1,
#line 628 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_2,
#line 628 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_3,
#line 628 "hlds_out_module.m"
  MR_Box * hlds__hlds_out__hlds_out_module__wrapper_arg_4);

#line 617 "hlds_out_module.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_inst_table_6_p_0(
#line 617 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__Lang_7,
#line 617 "hlds_out_module.m"
  MR_Integer hlds__hlds_out__hlds_out_module__Indent_8,
#line 617 "hlds_out_module.m"
  MR_Integer hlds__hlds_out__hlds_out_module__Limit_9,
#line 617 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__InstTable_10);

#line 586 "hlds_out_module.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_instance_defn_5_p_0_2(
#line 586 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__closure_arg,
#line 586 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_1,
#line 586 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_2,
#line 586 "hlds_out_module.m"
  MR_Box * hlds__hlds_out__hlds_out_module__wrapper_arg_3);

#line 571 "hlds_out_module.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_instance_defn_5_p_0_1(
#line 571 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__closure_arg,
#line 571 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_1,
#line 571 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_2,
#line 571 "hlds_out_module.m"
  MR_Box * hlds__hlds_out__hlds_out_module__wrapper_arg_3);

#line 542 "hlds_out_module.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_instance_defn_5_p_0(
#line 542 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__Info_6,
#line 542 "hlds_out_module.m"
  MR_Integer hlds__hlds_out__hlds_out_module__Indent_7,
#line 542 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__InstanceDefn_8);

#line 539 "hlds_out_module.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_instance_defns_5_p_0_1(
#line 539 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__closure_arg,
#line 539 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_1,
#line 539 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_2,
#line 539 "hlds_out_module.m"
  MR_Box * hlds__hlds_out__hlds_out_module__wrapper_arg_3);

#line 531 "hlds_out_module.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_instance_defns_5_p_0(
#line 531 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__Info_6,
#line 531 "hlds_out_module.m"
  MR_Integer hlds__hlds_out__hlds_out_module__Indent_7,
#line 531 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__HeadVar__3_3);

#line 528 "hlds_out_module.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_instances_5_p_0_1(
#line 528 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__closure_arg,
#line 528 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_1,
#line 528 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_2,
#line 528 "hlds_out_module.m"
  MR_Box * hlds__hlds_out__hlds_out_module__wrapper_arg_3);

#line 520 "hlds_out_module.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_instances_5_p_0(
#line 520 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__Info_6,
#line 520 "hlds_out_module.m"
  MR_Integer hlds__hlds_out__hlds_out_module__Indent_7,
#line 520 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__InstanceTable_8);

#line 504 "hlds_out_module.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_class_proc_3_p_0(
#line 504 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__HeadVar__1_1);

#line 497 "hlds_out_module.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_module__hlds_output_fundep_3_p_0_2(
#line 497 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__closure_arg,
#line 497 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_1,
#line 497 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_2,
#line 497 "hlds_out_module.m"
  MR_Box * hlds__hlds_out__hlds_out_module__wrapper_arg_3);

#line 494 "hlds_out_module.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_module__hlds_output_fundep_3_p_0_1(
#line 494 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__closure_arg,
#line 494 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_1,
#line 494 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_2,
#line 494 "hlds_out_module.m"
  MR_Box * hlds__hlds_out__hlds_out_module__wrapper_arg_3);

#line 489 "hlds_out_module.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_module__hlds_output_fundep_3_p_0(
#line 489 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__HeadVar__1_1);

#line 486 "hlds_out_module.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_class_defn_5_p_0_3(
#line 486 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__closure_arg,
#line 486 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_1,
#line 486 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_2,
#line 486 "hlds_out_module.m"
  MR_Box * hlds__hlds_out__hlds_out_module__wrapper_arg_3);

#line 481 "hlds_out_module.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_class_defn_5_p_0_2(
#line 481 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__closure_arg,
#line 481 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_1,
#line 481 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_2,
#line 481 "hlds_out_module.m"
  MR_Box * hlds__hlds_out__hlds_out_module__wrapper_arg_3);

#line 475 "hlds_out_module.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_class_defn_5_p_0_1(
#line 475 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__closure_arg,
#line 475 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_1,
#line 475 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_2,
#line 475 "hlds_out_module.m"
  MR_Box * hlds__hlds_out__hlds_out_module__wrapper_arg_3);

#line 435 "hlds_out_module.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_class_defn_5_p_0(
#line 435 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__Info_6,
#line 435 "hlds_out_module.m"
  MR_Integer hlds__hlds_out__hlds_out_module__Indent_7,
#line 435 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__HeadVar__3_3);

#line 432 "hlds_out_module.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_classes_5_p_0_1(
#line 432 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__closure_arg,
#line 432 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_1,
#line 432 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_2,
#line 432 "hlds_out_module.m"
  MR_Box * hlds__hlds_out__hlds_out_module__wrapper_arg_3);

#line 425 "hlds_out_module.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_classes_5_p_0(
#line 425 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__Info_6,
#line 425 "hlds_out_module.m"
  MR_Integer hlds__hlds_out__hlds_out_module__Indent_7,
#line 425 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__ClassTable_8);

#line 406 "hlds_out_module.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_ctor_6_p_0(
#line 406 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__TypeCtor_7,
#line 406 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__Ctor_8,
#line 406 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__TVarSet_9,
#line 406 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__TagValues_10);

#line 388 "hlds_out_module.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_constructors_loop_7_p_0(
#line 388 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__HeadVar__1_1,
#line 388 "hlds_out_module.m"
  MR_Integer hlds__hlds_out__hlds_out_module__HeadVar__2_2,
#line 388 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__HeadVar__3_3,
#line 388 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__HeadVar__4_4,
#line 388 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__TagValues_5);

#line 370 "hlds_out_module.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_constructors_7_p_0(
#line 370 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__HeadVar__1_1,
#line 370 "hlds_out_module.m"
  MR_Integer hlds__hlds_out__hlds_out_module__HeadVar__2_2,
#line 370 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__HeadVar__3_3,
#line 370 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__HeadVar__4_4,
#line 370 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__TagValues_5);

#line 264 "hlds_out_module.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_type_body_7_p_0(
#line 264 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__Info_8,
#line 264 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__TypeCtor_9,
#line 264 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__TypeBody_10,
#line 264 "hlds_out_module.m"
  MR_Integer hlds__hlds_out__hlds_out_module__Indent_11,
#line 264 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__TVarSet_12);

#line 255 "hlds_out_module.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_type_params_loop_4_p_0(
#line 255 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__HeadVar__1_1,
#line 255 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__HeadVar__2_2);

#line 191 "hlds_out_module.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_type_table_entries_5_p_0(
#line 191 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__Info_1,
#line 191 "hlds_out_module.m"
  MR_Integer hlds__hlds_out__hlds_out_module__Indent_2,
#line 191 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__HeadVar__3_3);

#line 181 "hlds_out_module.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_types_5_p_0(
#line 181 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__Info_6,
#line 181 "hlds_out_module.m"
  MR_Integer hlds__hlds_out__hlds_out_module__Indent_7,
#line 181 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__TypeTable_8);

#line 153 "hlds_out_module.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_footer_4_p_0(
#line 153 "hlds_out_module.m"
  MR_Integer hlds__hlds_out__hlds_out_module__Indent_5,
#line 153 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__Module_6);

#line 173 "hlds_out_module.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_hlds_4_p_0_1(
#line 173 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__closure_arg,
#line 173 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_1,
#line 173 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_2,
#line 173 "hlds_out_module.m"
  MR_Box * hlds__hlds_out__hlds_out_module__wrapper_arg_3);


static /* final */ const MR_Box hlds__hlds_out__hlds_out_module_scalar_common_1[3][2];

static /* final */ const MR_Box hlds__hlds_out__hlds_out_module_scalar_common_2[13][3];

static /* final */ const MR_Box hlds__hlds_out__hlds_out_module_scalar_common_3[6][6];

static /* final */ const MR_Box hlds__hlds_out__hlds_out_module_scalar_common_4[6][8];

static /* final */ const MR_Box hlds__hlds_out__hlds_out_module_scalar_common_5[3][11];

static /* final */ const MR_Box hlds__hlds_out__hlds_out_module_scalar_common_6[1][1];

static /* final */ const MR_Box hlds__hlds_out__hlds_out_module_scalar_common_7[3][7];

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

static /* final */ const MR_Box hlds__hlds_out__hlds_out_module_scalar_common_2[13][3] = {
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
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&hlds__const_struct__hlds__const_struct__type_ctor_info_const_struct_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_table_struct_info_0))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0))
  },
  /* row 6 */
  {
    ((MR_Box) (&hlds__hlds_out__hlds_out_module_scalar_common_3[0])),
    ((MR_Box) (hlds__hlds_out__hlds_out_module__write_hlds_4_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 7 */
  {
    ((MR_Box) (&hlds__hlds_out__hlds_out_module_scalar_common_3[1])),
    ((MR_Box) (hlds__hlds_out__hlds_out_module__write_class_defn_5_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 8 */
  {
    ((MR_Box) (&hlds__hlds_out__hlds_out_module_scalar_common_3[2])),
    ((MR_Box) (hlds__hlds_out__hlds_out_module__write_class_defn_5_p_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 9 */
  {
    ((MR_Box) (&hlds__hlds_out__hlds_out_module_scalar_common_3[3])),
    ((MR_Box) (hlds__hlds_out__hlds_out_module__hlds_output_fundep_3_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 10 */
  {
    ((MR_Box) (&hlds__hlds_out__hlds_out_module_scalar_common_3[3])),
    ((MR_Box) (hlds__hlds_out__hlds_out_module__hlds_output_fundep_3_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 11 */
  {
    ((MR_Box) (&hlds__hlds_out__hlds_out_module_scalar_common_3[4])),
    ((MR_Box) (hlds__hlds_out__hlds_out_module__write_const_struct_db_3_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 12 */
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

static /* final */ const MR_Box hlds__hlds_out__hlds_out_module_scalar_common_4[6][8] = {
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
  /* row 5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_id_0)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_inst_defn_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box hlds__hlds_out__hlds_out_module_scalar_common_5[3][11] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 8)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__type_ctor_info_output_lang_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_maybe_inst_det_0)),
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
    ((MR_Box) (&hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__type_ctor_info_output_lang_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_module__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_mer_inst_0__plain_parse_tree__prog_data__type_ctor_info_mer_inst_0)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_maybe_inst_0)),
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
    ((MR_Box) (&hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__type_ctor_info_output_lang_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_maybe_inst_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box hlds__hlds_out__hlds_out_module_scalar_common_6[1][1] = {
  /* row 0 */
  {
    ((MR_Box) (((MR_Integer) 0 | (((((MR_Integer) 0 << (MR_Integer) 1)) | (((((MR_Integer) 0 << (MR_Integer) 2)) | (((((MR_Integer) 0 << (MR_Integer) 3)) | (((MR_Integer) 0 << (MR_Integer) 4)))))))))))
  },
};

static /* final */ const MR_Box hlds__hlds_out__hlds_out_module_scalar_common_7[3][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_module__pair__pti_pair_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_hlds__hlds_module__type_ctor_info_table_struct_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_module__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_table_step_desc_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 2 */
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

static /* final */ const MR_Box hlds__hlds_out__hlds_out_module_scalar_common_8[1][10] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 7)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__type_ctor_info_hlds_out_info_0)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__type_ctor_info_output_lang_0)),
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
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "array.mh"
#include "array.mh"
#include "mdbcomp.rtti_access.mh"
#include "mdbcomp.rtti_access.mh"



#line 1198 "hlds.hlds_out.hlds_out_module.c"
static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_out__hlds_out_module__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_class_id_0__plain_hlds__hlds_data__type_ctor_info_hlds_class_defn_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0,
    (MR_PseudoTypeInfo) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_class_defn_0
  }
};

#line 1207 "hlds.hlds_out.hlds_out_module.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_out__hlds_out_module__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 1215 "hlds.hlds_out.hlds_out_module.c"
static const MR_FA_TypeInfo_Struct1 hlds__hlds_out__hlds_out_module__list__ti_list_1hlds__hlds_data__type_ctor_info_hlds_instance_defn_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_instance_defn_0
  }
};

#line 1223 "hlds.hlds_out.hlds_out_module.c"
static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_out__hlds_out_module__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_class_id_0__plain_list__ti_list_1hlds__hlds_data__type_ctor_info_hlds_instance_defn_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0,
    (MR_PseudoTypeInfo) &hlds__hlds_out__hlds_out_module__list__ti_list_1hlds__hlds_data__type_ctor_info_hlds_instance_defn_0
  }
};

#line 1232 "hlds.hlds_out.hlds_out_module.c"
static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_out__hlds_out_module__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_mer_inst_0__plain_parse_tree__prog_data__type_ctor_info_mer_inst_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0,
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0
  }
};

#line 1241 "hlds.hlds_out.hlds_out_module.c"
static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_out__hlds_out_module__pair__pti_pair_2__plain_builtin__type_ctor_info_int_0__plain_hlds__const_struct__type_ctor_info_const_struct_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_PseudoTypeInfo) &hlds__const_struct__hlds__const_struct__type_ctor_info_const_struct_0
  }
};

#line 1250 "hlds.hlds_out.hlds_out_module.c"
static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_out__hlds_out_module__pair__pti_pair_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_hlds__hlds_module__type_ctor_info_table_struct_info_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
    (MR_PseudoTypeInfo) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_table_struct_info_0
  }
};

#line 1259 "hlds.hlds_out.hlds_out_module.c"
static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_out__hlds_out_module__pair__pti_pair_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_hlds__hlds_pred__type_ctor_info_pred_info_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0,
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0
  }
};

#line 1268 "hlds.hlds_out.hlds_out_module.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_out__hlds_out_module__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1276 "hlds.hlds_out.hlds_out_module.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_out__hlds_out_module__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 805 "hlds_out_module.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_module__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_109_111_100_101_95_116_97_98_108_101_95_95_91_50_93_95_48_4_p_0(
#line 805 "hlds_out_module.m"
  MR_Integer hlds__hlds_out__hlds_out_module__Indent_5)
#line 805 "hlds_out_module.m"
{
#line 807 "hlds_out_module.m"
  {
#line 807 "hlds_out_module.m"
    MR_bool hlds__hlds_out__hlds_out_module__succeeded;

#line 809 "hlds_out_module.m"
    {
#line 809 "hlds_out_module.m"
      hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_module__Indent_5);
    }
#line 810 "hlds_out_module.m"
    {
#line 810 "hlds_out_module.m"
      mercury__io__write_string_3_p_0((MR_String) "%-------- Modes --------\n");
    }
#line 811 "hlds_out_module.m"
    {
#line 811 "hlds_out_module.m"
      hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_module__Indent_5);
    }
#line 812 "hlds_out_module.m"
    {
#line 812 "hlds_out_module.m"
      mercury__io__write_string_3_p_0((MR_String) "%%% Not yet implemented, sorry.\n");
    }
#line 815 "hlds_out_module.m"
    {
#line 815 "hlds_out_module.m"
      mercury__io__nl_2_p_0();
#line 815 "hlds_out_module.m"
      return;
    }
#line 807 "hlds_out_module.m"
  }
#line 805 "hlds_out_module.m"
}

#line 1092 "hlds_out_module.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_module__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_112_114_111_109_105_115_101_95_95_91_53_44_32_57_93_95_48_13_p_0_1(
#line 1092 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__closure_arg,
#line 1092 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_1,
#line 1092 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_2,
#line 1092 "hlds_out_module.m"
  MR_Box * hlds__hlds_out__hlds_out_module__wrapper_arg_3)
#line 1092 "hlds_out_module.m"
{
#line 1092 "hlds_out_module.m"
  {
#line 1092 "hlds_out_module.m"
    MR_Box hlds__hlds_out__hlds_out_module__closure = hlds__hlds_out__hlds_out_module__closure_arg;

#line 1092 "hlds_out_module.m"
    {
#line 1092 "hlds_out_module.m"
      hlds__hlds_out__hlds_out_module__IntroducedFrom__pred__write_promise__1092__1_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__closure, (MR_Integer) 3))), ((MR_Word) hlds__hlds_out__hlds_out_module__wrapper_arg_1));
#line 1092 "hlds_out_module.m"
      return;
    }
#line 1092 "hlds_out_module.m"
  }
#line 1092 "hlds_out_module.m"
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
#line 1090 "hlds_out_module.m"
  {
#line 1090 "hlds_out_module.m"
    MR_bool hlds__hlds_out__hlds_out_module__succeeded;
#line 1090 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__PrintVar_26;
#line 1090 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__Goal_30;
#line 1090 "hlds_out_module.m"
    MR_Integer hlds__hlds_out__hlds_out_module__V_54_54;

#line 1092 "hlds_out_module.m"
    {
#line 1092 "hlds_out_module.m"
      hlds__hlds_out__hlds_out_module__PrintVar_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1092 "hlds_out_module.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__PrintVar_26, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_module_scalar_common_7[2]));
#line 1092 "hlds_out_module.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__PrintVar_26, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_module__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_112_114_111_109_105_115_101_95_95_91_53_44_32_57_93_95_48_13_p_0_1));
#line 1092 "hlds_out_module.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__PrintVar_26, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1092 "hlds_out_module.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__PrintVar_26, 3) = ((MR_Box) (hlds__hlds_out__hlds_out_module__VarSet_19));
#line 1092 "hlds_out_module.m"
    }
#line 1096 "hlds_out_module.m"
    {
#line 1096 "hlds_out_module.m"
      hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_module__Indent_16);
    }
#line 1104 "hlds_out_module.m"
    if ((hlds__hlds_out__hlds_out_module__PromiseType_15 == (MR_Integer) 3))
#line 1100 "hlds_out_module.m"
      {
#line 1101 "hlds_out_module.m"
        {
#line 1101 "hlds_out_module.m"
          mercury__io__write_string_3_p_0((MR_String) ":- promise all [");
        }
#line 1102 "hlds_out_module.m"
        {
#line 1102 "hlds_out_module.m"
          mercury__io__write_list_5_p_0((MR_Word) &hlds__hlds_out__hlds_out_module_scalar_common_1[0], hlds__hlds_out__hlds_out_module__HeadVars_21, (MR_String) ", ", hlds__hlds_out__hlds_out_module__PrintVar_26);
        }
#line 1103 "hlds_out_module.m"
        {
#line 1103 "hlds_out_module.m"
          mercury__io__write_string_3_p_0((MR_String) "] (\n");
        }
#line 1100 "hlds_out_module.m"
      }
#line 1104 "hlds_out_module.m"
    else
#line 1108 "hlds_out_module.m"
      {
#line 1109 "hlds_out_module.m"
        {
#line 1109 "hlds_out_module.m"
          mercury__io__write_string_3_p_0((MR_String) ":- all [");
        }
#line 1110 "hlds_out_module.m"
        {
#line 1110 "hlds_out_module.m"
          mercury__io__write_list_5_p_0((MR_Word) &hlds__hlds_out__hlds_out_module_scalar_common_1[0], hlds__hlds_out__hlds_out_module__HeadVars_21, (MR_String) ", ", hlds__hlds_out__hlds_out_module__PrintVar_26);
        }
#line 1111 "hlds_out_module.m"
        {
#line 1111 "hlds_out_module.m"
          mercury__io__write_string_3_p_0((MR_String) "]");
        }
#line 1112 "hlds_out_module.m"
        {
#line 1112 "hlds_out_module.m"
          parse_tree__mercury_to_mercury__mercury_output_newline_3_p_0(hlds__hlds_out__hlds_out_module__Indent_16);
        }
#line 1113 "hlds_out_module.m"
        {
#line 1113 "hlds_out_module.m"
          parse_tree__prog_out__write_promise_type_3_p_0(hlds__hlds_out__hlds_out_module__PromiseType_15);
        }
#line 1114 "hlds_out_module.m"
        {
#line 1114 "hlds_out_module.m"
          parse_tree__mercury_to_mercury__mercury_output_newline_3_p_0(hlds__hlds_out__hlds_out_module__Indent_16);
        }
#line 1115 "hlds_out_module.m"
        {
#line 1115 "hlds_out_module.m"
          mercury__io__write_string_3_p_0((MR_String) "(\n");
        }
#line 1108 "hlds_out_module.m"
      }
#line 1118 "hlds_out_module.m"
    {
#line 1118 "hlds_out_module.m"
      hlds__hlds_out__hlds_out_module__Goal_30 = hlds__hlds_clauses__clause_body_1_f_0(hlds__hlds_out__hlds_out_module__Clause_23);
    }
#line 1120 "hlds_out_module.m"
    hlds__hlds_out__hlds_out_module__V_54_54 = (hlds__hlds_out__hlds_out_module__Indent_16 + (MR_Integer) 1);
#line 1119 "hlds_out_module.m"
    {
#line 1119 "hlds_out_module.m"
      hlds__hlds_out__hlds_out_goal__do_write_goal_10_p_0(hlds__hlds_out__hlds_out_module__Info_14, hlds__hlds_out__hlds_out_module__Goal_30, hlds__hlds_out__hlds_out_module__ModuleInfo_17, hlds__hlds_out__hlds_out_module__VarSet_19, hlds__hlds_out__hlds_out_module__AppendVarNums_20, hlds__hlds_out__hlds_out_module__V_54_54, (MR_String) ").\n", hlds__hlds_out__hlds_out_module__TypeQual_24);
#line 1119 "hlds_out_module.m"
      return;
    }
#line 1090 "hlds_out_module.m"
  }
#line 34 "hlds_out_module.m"
}

#line 1092 "hlds_out_module.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_module__IntroducedFrom__pred__write_promise__1092__1_4_p_0(
#line 1092 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__VarSet_19,
#line 1092 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__HeadVar__2_33)
#line 1092 "hlds_out_module.m"
{
#line 1092 "hlds_out_module.m"
  {
#line 1092 "hlds_out_module.m"
    MR_bool hlds__hlds_out__hlds_out_module__succeeded;

#line 1093 "hlds_out_module.m"
    {
#line 1093 "hlds_out_module.m"
      mercury__term_io__write_variable_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__hlds_out__hlds_out_module__HeadVar__2_33, hlds__hlds_out__hlds_out_module__VarSet_19);
#line 1093 "hlds_out_module.m"
      return;
    }
#line 1092 "hlds_out_module.m"
  }
#line 1092 "hlds_out_module.m"
}

#line 1043 "hlds_out_module.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_1(
#line 1043 "hlds_out_module.m"
  void * hlds__hlds_out__hlds_out_module__env_ptr_arg)
#line 1043 "hlds_out_module.m"
{
#line 1043 "hlds_out_module.m"
  {
#line 1043 "hlds_out_module.m"
    struct hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_env_0_s * hlds__hlds_out__hlds_out_module__env_ptr = (struct hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_env_0_s *) hlds__hlds_out__hlds_out_module__env_ptr_arg;

#line 1043 "hlds_out_module.m"
    MR_builtin_longjmp((hlds__hlds_out__hlds_out_module__env_ptr)->hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_env_0__commit_0, 1);
#line 1043 "hlds_out_module.m"
  }
#line 1043 "hlds_out_module.m"
}

#line 1043 "hlds_out_module.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_3(
#line 1043 "hlds_out_module.m"
  void * hlds__hlds_out__hlds_out_module__env_ptr_arg)
#line 1043 "hlds_out_module.m"
{
#line 1043 "hlds_out_module.m"
  {
#line 1043 "hlds_out_module.m"
    struct hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_env_0_s * hlds__hlds_out__hlds_out_module__env_ptr = (struct hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_env_0_s *) hlds__hlds_out__hlds_out_module__env_ptr_arg;

#line 1043 "hlds_out_module.m"
    (hlds__hlds_out__hlds_out_module__env_ptr)->hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_env_0__DumpPredIdStr_36 = ((MR_String) (hlds__hlds_out__hlds_out_module__env_ptr)->hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_env_0__conv0_DumpPredIdStr_36);
#line 1043 "hlds_out_module.m"
    {
#line 1043 "hlds_out_module.m"
      hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_2(hlds__hlds_out__hlds_out_module__env_ptr);
#line 1043 "hlds_out_module.m"
      return;
    }
#line 1043 "hlds_out_module.m"
  }
#line 1043 "hlds_out_module.m"
}

#line 1043 "hlds_out_module.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_2(
#line 1043 "hlds_out_module.m"
  void * hlds__hlds_out__hlds_out_module__env_ptr_arg)
#line 1043 "hlds_out_module.m"
{
#line 1043 "hlds_out_module.m"
  {
#line 1043 "hlds_out_module.m"
    struct hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_env_0_s * hlds__hlds_out__hlds_out_module__env_ptr = (struct hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_env_0_s *) hlds__hlds_out__hlds_out_module__env_ptr_arg;

#line 1044 "hlds_out_module.m"
    {
#line 1044 "hlds_out_module.m"
      (hlds__hlds_out__hlds_out_module__env_ptr)->hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_env_0__succeeded = mercury__string__to_int_2_p_0((hlds__hlds_out__hlds_out_module__env_ptr)->hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_env_0__DumpPredIdStr_36, &(hlds__hlds_out__hlds_out_module__env_ptr)->hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_env_0__DumpPredId_37);
    }
#line 1043 "hlds_out_module.m"
    if ((hlds__hlds_out__hlds_out_module__env_ptr)->hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_env_0__succeeded)
#line 1043 "hlds_out_module.m"
      {
#line 1045 "hlds_out_module.m"
        (hlds__hlds_out__hlds_out_module__env_ptr)->hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_env_0__succeeded = ((hlds__hlds_out__hlds_out_module__env_ptr)->hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_env_0__PredIdInt_18 == (hlds__hlds_out__hlds_out_module__env_ptr)->hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_env_0__DumpPredId_37);
#line 1045 "hlds_out_module.m"
        if ((hlds__hlds_out__hlds_out_module__env_ptr)->hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_env_0__succeeded)
#line 1045 "hlds_out_module.m"
          {
#line 1045 "hlds_out_module.m"
            hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_1(hlds__hlds_out__hlds_out_module__env_ptr);
#line 1045 "hlds_out_module.m"
            return;
          }
#line 1043 "hlds_out_module.m"
      }
#line 1043 "hlds_out_module.m"
  }
#line 1043 "hlds_out_module.m"
}

#line 1043 "hlds_out_module.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_4(
#line 1043 "hlds_out_module.m"
  void * hlds__hlds_out__hlds_out_module__env_ptr_arg)
#line 1043 "hlds_out_module.m"
{
#line 1043 "hlds_out_module.m"
  {
#line 1043 "hlds_out_module.m"
    struct hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_env_0_s * hlds__hlds_out__hlds_out_module__env_ptr = (struct hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_env_0_s *) hlds__hlds_out__hlds_out_module__env_ptr_arg;

#line 1043 "hlds_out_module.m"
    if (MR_builtin_setjmp((hlds__hlds_out__hlds_out_module__env_ptr)->hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_env_0__commit_0) == 0)
#line 1043 "hlds_out_module.m"
      {
#line 1043 "hlds_out_module.m"
        {
#line 1043 "hlds_out_module.m"
          {
#line 1043 "hlds_out_module.m"
            mercury__list__member_2_p_1((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, &(hlds__hlds_out__hlds_out_module__env_ptr)->hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_env_0__conv0_DumpPredIdStr_36, (hlds__hlds_out__hlds_out_module__env_ptr)->hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_env_0__DumpPredIdStrs_16, hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_3, hlds__hlds_out__hlds_out_module__env_ptr);
          }
#line 1043 "hlds_out_module.m"
        }
#line 1043 "hlds_out_module.m"
        (hlds__hlds_out__hlds_out_module__env_ptr)->hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_env_0__succeeded = MR_FALSE;
#line 1043 "hlds_out_module.m"
      }
#line 1043 "hlds_out_module.m"
    else
#line 1043 "hlds_out_module.m"
      (hlds__hlds_out__hlds_out_module__env_ptr)->hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_env_0__succeeded = MR_TRUE;
#line 1043 "hlds_out_module.m"
  }
#line 1043 "hlds_out_module.m"
}

#line 1024 "hlds_out_module.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0(
#line 1024 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__Info_8,
#line 1024 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__Lang_9,
#line 1024 "hlds_out_module.m"
  MR_Integer hlds__hlds_out__hlds_out_module__Indent_10,
#line 1024 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__ModuleInfo_11,
#line 1024 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__HeadVar__5_5)
#line 1024 "hlds_out_module.m"
{
#line 1024 "hlds_out_module.m"
  {
#line 1024 "hlds_out_module.m"
    struct hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_env_0_s hlds__hlds_out__hlds_out_module__env;

#line 1027 "hlds_out_module.m"
    {
#line 1027 "hlds_out_module.m"
      MR_Word hlds__hlds_out__hlds_out_module__PredId_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__HeadVar__5_5, (MR_Integer) 0)));
#line 1027 "hlds_out_module.m"
      MR_Word hlds__hlds_out__hlds_out_module__PredInfo_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__HeadVar__5_5, (MR_Integer) 1)));
#line 1027 "hlds_out_module.m"
      MR_String hlds__hlds_out__hlds_out_module__DumpOptions_15 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__Info_8, (MR_Integer) 0)));
#line 1027 "hlds_out_module.m"
      MR_Word hlds__hlds_out__hlds_out_module__DumpPredNames_17;
#line 1028 "hlds_out_module.m"
      MR_String hlds__hlds_out__hlds_out_module__V_38_38 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__Info_8, (MR_Integer) 1)));
#line 1028 "hlds_out_module.m"
      MR_Word hlds__hlds_out__hlds_out_module__V_41_41;

#line 1028 "hlds_out_module.m"
      (hlds__hlds_out__hlds_out_module__env).hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_env_0__DumpPredIdStrs_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__Info_8, (MR_Integer) 2)));
#line 1028 "hlds_out_module.m"
      hlds__hlds_out__hlds_out_module__DumpPredNames_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__Info_8, (MR_Integer) 3)));
#line 1028 "hlds_out_module.m"
      hlds__hlds_out__hlds_out_module__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__Info_8, (MR_Integer) 4)));
#line 1031 "hlds_out_module.m"
      {
#line 1031 "hlds_out_module.m"
        hlds__hlds_pred__pred_id_to_int_2_p_0(hlds__hlds_out__hlds_out_module__PredId_12, &(hlds__hlds_out__hlds_out_module__env).hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_env_0__PredIdInt_18);
      }
#line 1036 "hlds_out_module.m"
      {
#line 1036 "hlds_out_module.m"
        MR_String hlds__hlds_out__hlds_out_module__V_19_19;
#line 1036 "hlds_out_module.m"
        MR_Word hlds__hlds_out__hlds_out_module__V_20_20;

#line 1036 "hlds_out_module.m"
        (hlds__hlds_out__hlds_out_module__env).hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_env_0__succeeded = ((MR_tag((MR_Word) (hlds__hlds_out__hlds_out_module__env).hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_env_0__DumpPredIdStrs_16)) == (MR_mktag((MR_Integer) 1)));
#line 1036 "hlds_out_module.m"
        if ((hlds__hlds_out__hlds_out_module__env).hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_env_0__succeeded)
#line 1036 "hlds_out_module.m"
          {
#line 1036 "hlds_out_module.m"
            hlds__hlds_out__hlds_out_module__V_19_19 = ((MR_String) (MR_hl_field(MR_mktag(1), (hlds__hlds_out__hlds_out_module__env).hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_env_0__DumpPredIdStrs_16, (MR_Integer) 0)));
#line 1036 "hlds_out_module.m"
            hlds__hlds_out__hlds_out_module__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), (hlds__hlds_out__hlds_out_module__env).hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_env_0__DumpPredIdStrs_16, (MR_Integer) 1)));
#line 1036 "hlds_out_module.m"
          }
#line 1036 "hlds_out_module.m"
      }
#line 1037 "hlds_out_module.m"
      if (!((hlds__hlds_out__hlds_out_module__env).hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_env_0__succeeded))
#line 1037 "hlds_out_module.m"
        {
#line 1037 "hlds_out_module.m"
          MR_String hlds__hlds_out__hlds_out_module__V_21_21;
#line 1037 "hlds_out_module.m"
          MR_Word hlds__hlds_out__hlds_out_module__V_22_22;

#line 1037 "hlds_out_module.m"
          (hlds__hlds_out__hlds_out_module__env).hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_env_0__succeeded = ((MR_tag((MR_Word) hlds__hlds_out__hlds_out_module__DumpPredNames_17)) == (MR_mktag((MR_Integer) 1)));
#line 1037 "hlds_out_module.m"
          if ((hlds__hlds_out__hlds_out_module__env).hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_env_0__succeeded)
#line 1037 "hlds_out_module.m"
            {
#line 1037 "hlds_out_module.m"
              hlds__hlds_out__hlds_out_module__V_21_21 = ((MR_String) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_module__DumpPredNames_17, (MR_Integer) 0)));
#line 1037 "hlds_out_module.m"
              hlds__hlds_out__hlds_out_module__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_module__DumpPredNames_17, (MR_Integer) 1)));
#line 1037 "hlds_out_module.m"
            }
#line 1037 "hlds_out_module.m"
        }
#line 1056 "hlds_out_module.m"
      if ((hlds__hlds_out__hlds_out_module__env).hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_env_0__succeeded)
#line 1053 "hlds_out_module.m"
        {
#line 1043 "hlds_out_module.m"
          {
#line 1043 "hlds_out_module.m"
            hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_4(&hlds__hlds_out__hlds_out_module__env);
          }
#line 1047 "hlds_out_module.m"
          if (!((hlds__hlds_out__hlds_out_module__env).hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_env_0__succeeded))
#line 1048 "hlds_out_module.m"
            {
#line 1048 "hlds_out_module.m"
              MR_String hlds__hlds_out__hlds_out_module__PredName_25;

#line 1048 "hlds_out_module.m"
              {
#line 1048 "hlds_out_module.m"
                hlds__hlds_out__hlds_out_module__PredName_25 = hlds__hlds_pred__pred_info_name_1_f_0(hlds__hlds_out__hlds_out_module__PredInfo_13);
              }
#line 1049 "hlds_out_module.m"
              {
#line 1049 "hlds_out_module.m"
                (hlds__hlds_out__hlds_out_module__env).hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_env_0__succeeded = mercury__list__member_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) (hlds__hlds_out__hlds_out_module__PredName_25)), hlds__hlds_out__hlds_out_module__DumpPredNames_17);
              }
#line 1048 "hlds_out_module.m"
            }
#line 1053 "hlds_out_module.m"
          if ((hlds__hlds_out__hlds_out_module__env).hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_env_0__succeeded)
#line 1052 "hlds_out_module.m"
            {
#line 1052 "hlds_out_module.m"
              hlds__hlds_out__hlds_out_pred__write_pred_8_p_0(hlds__hlds_out__hlds_out_module__Info_8, hlds__hlds_out__hlds_out_module__Lang_9, hlds__hlds_out__hlds_out_module__Indent_10, hlds__hlds_out__hlds_out_module__ModuleInfo_11, hlds__hlds_out__hlds_out_module__PredId_12, hlds__hlds_out__hlds_out_module__PredInfo_13);
#line 1052 "hlds_out_module.m"
              return;
            }
#line 1053 "hlds_out_module.m"
          else
#line 1053 "hlds_out_module.m"
            {
#line 1053 "hlds_out_module.m"
            }
#line 1053 "hlds_out_module.m"
        }
#line 1056 "hlds_out_module.m"
      else
#line 1079 "hlds_out_module.m"
        {
#line 1059 "hlds_out_module.m"
          {
#line 1059 "hlds_out_module.m"
            (hlds__hlds_out__hlds_out_module__env).hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_env_0__succeeded = mercury__string__contains_char_2_p_0(hlds__hlds_out__hlds_out_module__DumpOptions_15, (MR_Char) 73);
          }
#line 1059 "hlds_out_module.m"
          (hlds__hlds_out__hlds_out_module__env).hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_env_0__succeeded = !((hlds__hlds_out__hlds_out_module__env).hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_env_0__succeeded);
#line 1059 "hlds_out_module.m"
          if ((hlds__hlds_out__hlds_out_module__env).hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_env_0__succeeded)
#line 1060 "hlds_out_module.m"
            {
#line 1060 "hlds_out_module.m"
              (hlds__hlds_out__hlds_out_module__env).hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_env_0__succeeded = hlds__hlds_pred__pred_info_is_imported_1_p_0(hlds__hlds_out__hlds_out_module__PredInfo_13);
            }
#line 1061 "hlds_out_module.m"
          if (!((hlds__hlds_out__hlds_out_module__env).hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_env_0__succeeded))
#line 1061 "hlds_out_module.m"
            {
#line 1064 "hlds_out_module.m"
              {
#line 1064 "hlds_out_module.m"
                MR_Word hlds__hlds_out__hlds_out_module__ProcIds_26;
#line 1064 "hlds_out_module.m"
                MR_Integer hlds__hlds_out__hlds_out_module__ProcId_27;
#line 1064 "hlds_out_module.m"
                MR_Word hlds__hlds_out__hlds_out_module__V_33_33;
#line 1064 "hlds_out_module.m"
                MR_Integer hlds__hlds_out__hlds_out_module__V_52_52;

#line 1064 "hlds_out_module.m"
                {
#line 1064 "hlds_out_module.m"
                  (hlds__hlds_out__hlds_out_module__env).hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_env_0__succeeded = mercury__string__contains_char_2_p_0(hlds__hlds_out__hlds_out_module__DumpOptions_15, (MR_Char) 73);
                }
#line 1064 "hlds_out_module.m"
                (hlds__hlds_out__hlds_out_module__env).hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_env_0__succeeded = !((hlds__hlds_out__hlds_out_module__env).hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_env_0__succeeded);
#line 1064 "hlds_out_module.m"
                if ((hlds__hlds_out__hlds_out_module__env).hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_env_0__succeeded)
#line 1064 "hlds_out_module.m"
                  {
#line 1065 "hlds_out_module.m"
                    {
#line 1065 "hlds_out_module.m"
                      (hlds__hlds_out__hlds_out_module__env).hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_env_0__succeeded = hlds__hlds_pred__pred_info_is_pseudo_imported_1_p_0(hlds__hlds_out__hlds_out_module__PredInfo_13);
                    }
#line 1064 "hlds_out_module.m"
                    if ((hlds__hlds_out__hlds_out_module__env).hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_env_0__succeeded)
#line 1064 "hlds_out_module.m"
                      {
#line 1066 "hlds_out_module.m"
                        {
#line 1066 "hlds_out_module.m"
                          hlds__hlds_out__hlds_out_module__ProcIds_26 = hlds__hlds_pred__pred_info_procids_1_f_0(hlds__hlds_out__hlds_out_module__PredInfo_13);
                        }
#line 1067 "hlds_out_module.m"
                        {
#line 1067 "hlds_out_module.m"
                          hlds__hlds_pred__in_in_unification_proc_id_1_p_0(&hlds__hlds_out__hlds_out_module__ProcId_27);
                        }
#line 1068 "hlds_out_module.m"
                        (hlds__hlds_out__hlds_out_module__env).hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_env_0__succeeded = ((MR_tag((MR_Word) hlds__hlds_out__hlds_out_module__ProcIds_26)) == (MR_mktag((MR_Integer) 1)));
#line 1068 "hlds_out_module.m"
                        if ((hlds__hlds_out__hlds_out_module__env).hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_env_0__succeeded)
#line 1068 "hlds_out_module.m"
                          {
#line 1068 "hlds_out_module.m"
                            hlds__hlds_out__hlds_out_module__V_52_52 = ((MR_Integer) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_module__ProcIds_26, (MR_Integer) 0)));
#line 1068 "hlds_out_module.m"
                            hlds__hlds_out__hlds_out_module__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_module__ProcIds_26, (MR_Integer) 1)));
#line 1068 "hlds_out_module.m"
                            (hlds__hlds_out__hlds_out_module__env).hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_env_0__succeeded = (hlds__hlds_out__hlds_out_module__ProcId_27 == hlds__hlds_out__hlds_out_module__V_52_52);
#line 1064 "hlds_out_module.m"
                            if ((hlds__hlds_out__hlds_out_module__env).hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_env_0__succeeded)
#line 1068 "hlds_out_module.m"
                              (hlds__hlds_out__hlds_out_module__env).hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_env_0__succeeded = (hlds__hlds_out__hlds_out_module__V_33_33 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1068 "hlds_out_module.m"
                          }
#line 1064 "hlds_out_module.m"
                      }
#line 1064 "hlds_out_module.m"
                  }
#line 1064 "hlds_out_module.m"
              }
#line 1061 "hlds_out_module.m"
              if (!((hlds__hlds_out__hlds_out_module__env).hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_env_0__succeeded))
#line 1074 "hlds_out_module.m"
                {
#line 1074 "hlds_out_module.m"
                  {
#line 1074 "hlds_out_module.m"
                    (hlds__hlds_out__hlds_out_module__env).hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_env_0__succeeded = mercury__string__contains_char_2_p_0(hlds__hlds_out__hlds_out_module__DumpOptions_15, (MR_Char) 85);
                  }
#line 1074 "hlds_out_module.m"
                  (hlds__hlds_out__hlds_out_module__env).hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_env_0__succeeded = !((hlds__hlds_out__hlds_out_module__env).hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_env_0__succeeded);
#line 1074 "hlds_out_module.m"
                  if ((hlds__hlds_out__hlds_out_module__env).hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_env_0__succeeded)
#line 1075 "hlds_out_module.m"
                    {
#line 1075 "hlds_out_module.m"
                      (hlds__hlds_out__hlds_out_module__env).hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_env_0__succeeded = hlds__hlds_pred__is_unify_or_compare_pred_1_p_0(hlds__hlds_out__hlds_out_module__PredInfo_13);
                    }
#line 1074 "hlds_out_module.m"
                }
#line 1061 "hlds_out_module.m"
            }
#line 1079 "hlds_out_module.m"
          if ((hlds__hlds_out__hlds_out_module__env).hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_env_0__succeeded)
#line 1079 "hlds_out_module.m"
            {
#line 1079 "hlds_out_module.m"
            }
#line 1079 "hlds_out_module.m"
          else
#line 1080 "hlds_out_module.m"
            {
#line 1080 "hlds_out_module.m"
              hlds__hlds_out__hlds_out_pred__write_pred_8_p_0(hlds__hlds_out__hlds_out_module__Info_8, hlds__hlds_out__hlds_out_module__Lang_9, hlds__hlds_out__hlds_out_module__Indent_10, hlds__hlds_out__hlds_out_module__ModuleInfo_11, hlds__hlds_out__hlds_out_module__PredId_12, hlds__hlds_out__hlds_out_module__PredInfo_13);
#line 1080 "hlds_out_module.m"
              return;
            }
#line 1079 "hlds_out_module.m"
        }
#line 1027 "hlds_out_module.m"
    }
#line 1024 "hlds_out_module.m"
  }
#line 1024 "hlds_out_module.m"
}

#line 1005 "hlds_out_module.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_module__compare_in_name_order_3_p_0(
#line 1005 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__HeadVar__1_1,
#line 1005 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__HeadVar__2_2,
#line 1005 "hlds_out_module.m"
  MR_Word * hlds__hlds_out__hlds_out_module__Result_8)
#line 1005 "hlds_out_module.m"
{
#line 1010 "hlds_out_module.m"
  {
#line 1010 "hlds_out_module.m"
    MR_bool hlds__hlds_out__hlds_out_module__succeeded;
#line 1010 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__PredIdA_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__HeadVar__1_1, (MR_Integer) 0)));
#line 1010 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__PredInfoA_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__HeadVar__1_1, (MR_Integer) 1)));
#line 1010 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__PredIdB_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__HeadVar__2_2, (MR_Integer) 0)));
#line 1010 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__PredInfoB_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__HeadVar__2_2, (MR_Integer) 1)));
#line 1010 "hlds_out_module.m"
    MR_String hlds__hlds_out__hlds_out_module__PredNameA_9;
#line 1010 "hlds_out_module.m"
    MR_String hlds__hlds_out__hlds_out_module__PredNameB_10;
#line 1010 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__NameResult_11;

#line 1011 "hlds_out_module.m"
    {
#line 1011 "hlds_out_module.m"
      hlds__hlds_pred__pred_info_get_name_2_p_0(hlds__hlds_out__hlds_out_module__PredInfoA_5, &hlds__hlds_out__hlds_out_module__PredNameA_9);
    }
#line 1012 "hlds_out_module.m"
    {
#line 1012 "hlds_out_module.m"
      hlds__hlds_pred__pred_info_get_name_2_p_0(hlds__hlds_out__hlds_out_module__PredInfoB_7, &hlds__hlds_out__hlds_out_module__PredNameB_10);
    }
#line 1013 "hlds_out_module.m"
    {
#line 1013 "hlds_out_module.m"
      mercury__private_builtin__builtin_compare_string_3_p_0(&hlds__hlds_out__hlds_out_module__NameResult_11, hlds__hlds_out__hlds_out_module__PredNameA_9, hlds__hlds_out__hlds_out_module__PredNameB_10);
    }
#line 1019 "hlds_out_module.m"
    if ((hlds__hlds_out__hlds_out_module__NameResult_11 == (MR_Integer) 0))
#line 1021 "hlds_out_module.m"
      {
#line 1021 "hlds_out_module.m"
        hlds__hlds_pred____Compare____pred_id_0_0(hlds__hlds_out__hlds_out_module__Result_8, hlds__hlds_out__hlds_out_module__PredIdA_4, hlds__hlds_out__hlds_out_module__PredIdB_6);
#line 1021 "hlds_out_module.m"
        return;
      }
#line 1019 "hlds_out_module.m"
    else
#line 1018 "hlds_out_module.m"
      *hlds__hlds_out__hlds_out_module__Result_8 = hlds__hlds_out__hlds_out_module__NameResult_11;
#line 1010 "hlds_out_module.m"
  }
#line 1005 "hlds_out_module.m"
}

#line 1002 "hlds_out_module.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_preds_7_p_0_2(
#line 1002 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__closure_arg,
#line 1002 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_1,
#line 1002 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_2,
#line 1002 "hlds_out_module.m"
  MR_Box * hlds__hlds_out__hlds_out_module__wrapper_arg_3)
#line 1002 "hlds_out_module.m"
{
#line 1002 "hlds_out_module.m"
  {
#line 1002 "hlds_out_module.m"
    MR_Box hlds__hlds_out__hlds_out_module__closure = hlds__hlds_out__hlds_out_module__closure_arg;

#line 1002 "hlds_out_module.m"
    {
#line 1002 "hlds_out_module.m"
      hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__closure, (MR_Integer) 4))), ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__closure, (MR_Integer) 6))), ((MR_Word) hlds__hlds_out__hlds_out_module__wrapper_arg_1));
#line 1002 "hlds_out_module.m"
      return;
    }
#line 1002 "hlds_out_module.m"
  }
#line 1002 "hlds_out_module.m"
}

#line 1000 "hlds_out_module.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_preds_7_p_0_1(
#line 1000 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__closure_arg,
#line 1000 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_1,
#line 1000 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_2,
#line 1000 "hlds_out_module.m"
  MR_Box * hlds__hlds_out__hlds_out_module__wrapper_arg_3)
#line 1000 "hlds_out_module.m"
{
#line 1000 "hlds_out_module.m"
  {
#line 1000 "hlds_out_module.m"
    MR_Box hlds__hlds_out__hlds_out_module__closure = hlds__hlds_out__hlds_out_module__closure_arg;
#line 1000 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__conv0_Result_8;

#line 1000 "hlds_out_module.m"
    {
#line 1000 "hlds_out_module.m"
      hlds__hlds_out__hlds_out_module__compare_in_name_order_3_p_0(((MR_Word) hlds__hlds_out__hlds_out_module__wrapper_arg_1), ((MR_Word) hlds__hlds_out__hlds_out_module__wrapper_arg_2), &hlds__hlds_out__hlds_out_module__conv0_Result_8);
    }
#line 1000 "hlds_out_module.m"
    *hlds__hlds_out__hlds_out_module__wrapper_arg_3 = ((MR_Box) (hlds__hlds_out__hlds_out_module__conv0_Result_8));
#line 1000 "hlds_out_module.m"
  }
#line 1000 "hlds_out_module.m"
}

#line 985 "hlds_out_module.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_preds_7_p_0(
#line 985 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__Info_8,
#line 985 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__Lang_9,
#line 985 "hlds_out_module.m"
  MR_Integer hlds__hlds_out__hlds_out_module__Indent_10,
#line 985 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__ModuleInfo_11,
#line 985 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__PredTable_12)
#line 985 "hlds_out_module.m"
{
#line 988 "hlds_out_module.m"
  {
#line 988 "hlds_out_module.m"
    MR_bool hlds__hlds_out__hlds_out_module__succeeded;
#line 988 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__PredIdsInfos_14;
#line 988 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__Globals_15;
#line 988 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__NameOrder_16;
#line 988 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__PrintPredIdsInfos_17;
#line 988 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__V_25_25;
#line 1002 "hlds_out_module.m"
    MR_Box hlds__hlds_out__hlds_out_module__conv1_STATE_VARIABLE_IO_19;

#line 989 "hlds_out_module.m"
    {
#line 989 "hlds_out_module.m"
      mercury__io__write_string_3_p_0((MR_String) "%-------- Predicates --------\n\n");
    }
#line 990 "hlds_out_module.m"
    {
#line 990 "hlds_out_module.m"
      hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_module__Indent_10);
    }
#line 991 "hlds_out_module.m"
    {
#line 991 "hlds_out_module.m"
      mercury__map__to_assoc_list_2_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0, hlds__hlds_out__hlds_out_module__PredTable_12, &hlds__hlds_out__hlds_out_module__PredIdsInfos_14);
    }
#line 992 "hlds_out_module.m"
    {
#line 992 "hlds_out_module.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(hlds__hlds_out__hlds_out_module__ModuleInfo_11, &hlds__hlds_out__hlds_out_module__Globals_15);
    }
#line 993 "hlds_out_module.m"
    {
#line 993 "hlds_out_module.m"
      libs__globals__lookup_bool_option_3_p_0(hlds__hlds_out__hlds_out_module__Globals_15, (MR_Integer) 148, &hlds__hlds_out__hlds_out_module__NameOrder_16);
    }
#line 998 "hlds_out_module.m"
    if ((hlds__hlds_out__hlds_out_module__NameOrder_16 == (MR_Integer) 0))
#line 997 "hlds_out_module.m"
      hlds__hlds_out__hlds_out_module__PrintPredIdsInfos_17 = hlds__hlds_out__hlds_out_module__PredIdsInfos_14;
#line 998 "hlds_out_module.m"
    else
#line 999 "hlds_out_module.m"
      {
#line 1000 "hlds_out_module.m"
        {
#line 1000 "hlds_out_module.m"
          mercury__list__sort_3_p_0((MR_Word) &hlds__hlds_out__hlds_out_module_scalar_common_2[5], (MR_Word) &hlds__hlds_out__hlds_out_module_scalar_common_2[12], hlds__hlds_out__hlds_out_module__PredIdsInfos_14, &hlds__hlds_out__hlds_out_module__PrintPredIdsInfos_17);
        }
#line 999 "hlds_out_module.m"
      }
#line 1002 "hlds_out_module.m"
    {
#line 1002 "hlds_out_module.m"
      hlds__hlds_out__hlds_out_module__V_25_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 1002 "hlds_out_module.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__V_25_25, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_module_scalar_common_8[0]));
#line 1002 "hlds_out_module.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__V_25_25, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_module__write_preds_7_p_0_2));
#line 1002 "hlds_out_module.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__V_25_25, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 1002 "hlds_out_module.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__V_25_25, 3) = ((MR_Box) (hlds__hlds_out__hlds_out_module__Info_8));
#line 1002 "hlds_out_module.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__V_25_25, 4) = ((MR_Box) (hlds__hlds_out__hlds_out_module__Lang_9));
#line 1002 "hlds_out_module.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__V_25_25, 5) = ((MR_Box) (hlds__hlds_out__hlds_out_module__Indent_10));
#line 1002 "hlds_out_module.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__V_25_25, 6) = ((MR_Box) (hlds__hlds_out__hlds_out_module__ModuleInfo_11));
#line 1002 "hlds_out_module.m"
    }
#line 1002 "hlds_out_module.m"
    {
#line 1002 "hlds_out_module.m"
      mercury__list__foldl_4_p_2((MR_Word) &hlds__hlds_out__hlds_out_module_scalar_common_2[5], (MR_Word) &mercury__io__io__type_ctor_info_state_0, hlds__hlds_out__hlds_out_module__V_25_25, hlds__hlds_out__hlds_out_module__PrintPredIdsInfos_17, ((MR_Box) ((MR_Integer) 0)), &hlds__hlds_out__hlds_out_module__conv1_STATE_VARIABLE_IO_19);
    }
#line 988 "hlds_out_module.m"
  }
#line 985 "hlds_out_module.m"
}

#line 959 "hlds_out_module.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_arg_tabling_methods_4_p_0(
#line 959 "hlds_out_module.m"
  MR_String hlds__hlds_out__hlds_out_module__HeadVar__1_1,
#line 959 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__HeadVar__2_2)
#line 959 "hlds_out_module.m"
{
#line 962 "hlds_out_module.m"
  while (MR_TRUE)
#line 962 "hlds_out_module.m"
    {
#line 962 "hlds_out_module.m"
      /* tailcall optimized into a loop */
#line 962 "hlds_out_module.m"
      {
#line 962 "hlds_out_module.m"
        MR_bool hlds__hlds_out__hlds_out_module__succeeded;

#line 962 "hlds_out_module.m"
        if ((hlds__hlds_out__hlds_out_module__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 962 "hlds_out_module.m"
          {
#line 962 "hlds_out_module.m"
          }
#line 962 "hlds_out_module.m"
        else
#line 963 "hlds_out_module.m"
          {
#line 963 "hlds_out_module.m"
            MR_Word hlds__hlds_out__hlds_out_module__MaybeMethod_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_module__HeadVar__2_2, (MR_Integer) 0)));
#line 963 "hlds_out_module.m"
            MR_Word hlds__hlds_out__hlds_out_module__MaybeMethods_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_module__HeadVar__2_2, (MR_Integer) 1)));

#line 964 "hlds_out_module.m"
            {
#line 964 "hlds_out_module.m"
              mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_module__HeadVar__1_1);
            }
#line 968 "hlds_out_module.m"
            if ((hlds__hlds_out__hlds_out_module__MaybeMethod_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 966 "hlds_out_module.m"
              {
#line 967 "hlds_out_module.m"
                {
#line 967 "hlds_out_module.m"
                  mercury__io__write_string_3_p_0((MR_String) "output");
                }
#line 966 "hlds_out_module.m"
              }
#line 968 "hlds_out_module.m"
            else
#line 968 "hlds_out_module.m"
              {
#line 968 "hlds_out_module.m"
                MR_Word hlds__hlds_out__hlds_out_module__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_module__MaybeMethod_10, (MR_Integer) 0)));

#line 968 "hlds_out_module.m"
                if ((hlds__hlds_out__hlds_out_module__V_29_29 == (MR_Integer) 1))
#line 972 "hlds_out_module.m"
                  {
#line 973 "hlds_out_module.m"
                    {
#line 973 "hlds_out_module.m"
                      mercury__io__write_string_3_p_0((MR_String) "addr");
                    }
#line 972 "hlds_out_module.m"
                  }
#line 968 "hlds_out_module.m"
                else
#line 968 "hlds_out_module.m"
                  if ((hlds__hlds_out__hlds_out_module__V_29_29 == (MR_Integer) 2))
#line 975 "hlds_out_module.m"
                    {
#line 976 "hlds_out_module.m"
                      {
#line 976 "hlds_out_module.m"
                        mercury__io__write_string_3_p_0((MR_String) "promise_implied");
                      }
#line 975 "hlds_out_module.m"
                    }
#line 968 "hlds_out_module.m"
                  else
#line 969 "hlds_out_module.m"
                    {
#line 970 "hlds_out_module.m"
                      {
#line 970 "hlds_out_module.m"
                        mercury__io__write_string_3_p_0((MR_String) "value");
                      }
#line 969 "hlds_out_module.m"
                    }
#line 968 "hlds_out_module.m"
              }
#line 978 "hlds_out_module.m"
            /* direct tailcall eliminated */
#line 978 "hlds_out_module.m"
            {
#line 978 "hlds_out_module.m"
              MR_Word hlds__hlds_out__hlds_out_module__HeadVar__2__tmp_copy_2 = hlds__hlds_out__hlds_out_module__MaybeMethods_11;

#line 978 "hlds_out_module.m"
              hlds__hlds_out__hlds_out_module__HeadVar__2_2 = hlds__hlds_out__hlds_out_module__HeadVar__2__tmp_copy_2;
#line 978 "hlds_out_module.m"
              hlds__hlds_out__hlds_out_module__HeadVar__1_1 = (MR_String) ", ";
#line 978 "hlds_out_module.m"
            }
#line 978 "hlds_out_module.m"
            continue;
#line 963 "hlds_out_module.m"
          }
#line 962 "hlds_out_module.m"
      }
#line 962 "hlds_out_module.m"
      break;
#line 962 "hlds_out_module.m"
    }
#line 959 "hlds_out_module.m"
}

#line 904 "hlds_out_module.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_table_struct_info_4_p_0_1(
#line 904 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__closure_arg,
#line 904 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_1,
#line 904 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_2,
#line 904 "hlds_out_module.m"
  MR_Box * hlds__hlds_out__hlds_out_module__wrapper_arg_3)
#line 904 "hlds_out_module.m"
{
#line 904 "hlds_out_module.m"
  {
#line 904 "hlds_out_module.m"
    MR_Box hlds__hlds_out__hlds_out_module__closure = hlds__hlds_out__hlds_out_module__closure_arg;

#line 904 "hlds_out_module.m"
    {
#line 904 "hlds_out_module.m"
      hlds__hlds_out__hlds_out_pred__write_space_and_table_trie_step_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__closure, (MR_Integer) 3))), ((MR_Word) hlds__hlds_out__hlds_out_module__wrapper_arg_1));
#line 904 "hlds_out_module.m"
      return;
    }
#line 904 "hlds_out_module.m"
  }
#line 904 "hlds_out_module.m"
}

#line 889 "hlds_out_module.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_table_struct_info_4_p_0(
#line 889 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__ModuleInfo_5,
#line 889 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__HeadVar__2_2)
#line 889 "hlds_out_module.m"
{
#line 892 "hlds_out_module.m"
  {
#line 892 "hlds_out_module.m"
    MR_bool hlds__hlds_out__hlds_out_module__succeeded;
#line 892 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__TypeCtorInfo_87_87;
#line 892 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__TypeCtorInfo_88_88;
#line 892 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__PredProcId_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__HeadVar__2_2, (MR_Integer) 0)));
#line 892 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__TableStructInfo_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__HeadVar__2_2, (MR_Integer) 1)));
#line 892 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__ProcTableStructInfo_9;
#line 892 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__Attributes_10;
#line 892 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__TVarSet_12;
#line 892 "hlds_out_module.m"
    MR_Integer hlds__hlds_out__hlds_out_module__NumInputs_14;
#line 892 "hlds_out_module.m"
    MR_Integer hlds__hlds_out__hlds_out_module__NumOutputs_15;
#line 892 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__InputSteps_16;
#line 892 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__MaybeOutputSteps_17;
#line 892 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__ArgInfos_18;
#line 892 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__Strictness_21;
#line 892 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__SizeLimit_22;
#line 892 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__Stats_23;
#line 892 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__AllowReset_24;
#line 892 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__V_44_44;
#line 892 "hlds_out_module.m"
    MR_String hlds__hlds_out__hlds_out_module__V_95_95;
#line 892 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__V_101_101;
#line 892 "hlds_out_module.m"
    MR_String hlds__hlds_out__hlds_out_module__V_105_105;
#line 898 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module___ProcLabel_11;
#line 898 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module___Context_13;
#line 898 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module___EvalMethod_19;
#line 904 "hlds_out_module.m"
    MR_Box hlds__hlds_out__hlds_out_module__conv0_STATE_VARIABLE_IO_45_45;

#line 893 "hlds_out_module.m"
    {
#line 893 "hlds_out_module.m"
      mercury__io__nl_2_p_0();
    }
#line 894 "hlds_out_module.m"
    {
#line 894 "hlds_out_module.m"
      mercury__io__write_string_3_p_0((MR_String) "% table struct info for ");
    }
#line 895 "hlds_out_module.m"
    {
#line 895 "hlds_out_module.m"
      hlds__hlds_out__hlds_out_util__write_pred_proc_id_4_p_0(hlds__hlds_out__hlds_out_module__ModuleInfo_5, hlds__hlds_out__hlds_out_module__PredProcId_6);
    }
#line 896 "hlds_out_module.m"
    {
#line 896 "hlds_out_module.m"
      mercury__io__nl_2_p_0();
    }
#line 897 "hlds_out_module.m"
    hlds__hlds_out__hlds_out_module__ProcTableStructInfo_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__TableStructInfo_7, (MR_Integer) 0)));
#line 897 "hlds_out_module.m"
    hlds__hlds_out__hlds_out_module__Attributes_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__TableStructInfo_7, (MR_Integer) 1)));
#line 898 "hlds_out_module.m"
    hlds__hlds_out__hlds_out_module___ProcLabel_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__ProcTableStructInfo_9, (MR_Integer) 0)));
#line 898 "hlds_out_module.m"
    hlds__hlds_out__hlds_out_module__TVarSet_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__ProcTableStructInfo_9, (MR_Integer) 1)));
#line 898 "hlds_out_module.m"
    hlds__hlds_out__hlds_out_module___Context_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__ProcTableStructInfo_9, (MR_Integer) 2)));
#line 898 "hlds_out_module.m"
    hlds__hlds_out__hlds_out_module__NumInputs_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__ProcTableStructInfo_9, (MR_Integer) 3)));
#line 898 "hlds_out_module.m"
    hlds__hlds_out__hlds_out_module__NumOutputs_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__ProcTableStructInfo_9, (MR_Integer) 4)));
#line 898 "hlds_out_module.m"
    hlds__hlds_out__hlds_out_module__InputSteps_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__ProcTableStructInfo_9, (MR_Integer) 5)));
#line 898 "hlds_out_module.m"
    hlds__hlds_out__hlds_out_module__MaybeOutputSteps_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__ProcTableStructInfo_9, (MR_Integer) 6)));
#line 898 "hlds_out_module.m"
    hlds__hlds_out__hlds_out_module__ArgInfos_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__ProcTableStructInfo_9, (MR_Integer) 7)));
#line 898 "hlds_out_module.m"
    hlds__hlds_out__hlds_out_module___EvalMethod_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__ProcTableStructInfo_9, (MR_Integer) 8)));
#line 901 "hlds_out_module.m"
    {
#line 901 "hlds_out_module.m"
      mercury__io__write_string_3_p_0((MR_String) "% #inputs: ");
    }
#line 2395 "hlds.hlds_out.hlds_out_module.c"
    hlds__hlds_out__hlds_out_module__V_101_101 = (MR_Word) &hlds__hlds_out__hlds_out_module_scalar_common_6[0];
#line 901 "hlds_out_module.m"
    {
#line 901 "hlds_out_module.m"
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(hlds__hlds_out__hlds_out_module__V_101_101, hlds__hlds_out__hlds_out_module__NumInputs_14, &hlds__hlds_out__hlds_out_module__V_95_95);
    }
#line 901 "hlds_out_module.m"
    {
#line 901 "hlds_out_module.m"
      mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_module__V_95_95);
    }
#line 901 "hlds_out_module.m"
    {
#line 901 "hlds_out_module.m"
      mercury__io__write_string_3_p_0((MR_String) ", #outputs: ");
    }
#line 901 "hlds_out_module.m"
    {
#line 901 "hlds_out_module.m"
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(hlds__hlds_out__hlds_out_module__V_101_101, hlds__hlds_out__hlds_out_module__NumOutputs_15, &hlds__hlds_out__hlds_out_module__V_105_105);
    }
#line 901 "hlds_out_module.m"
    {
#line 901 "hlds_out_module.m"
      mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_module__V_105_105);
    }
#line 901 "hlds_out_module.m"
    {
#line 901 "hlds_out_module.m"
      mercury__io__write_string_3_p_0((MR_String) "\n");
    }
#line 903 "hlds_out_module.m"
    {
#line 903 "hlds_out_module.m"
      mercury__io__write_string_3_p_0((MR_String) "% input steps:");
    }
#line 904 "hlds_out_module.m"
    {
#line 904 "hlds_out_module.m"
      hlds__hlds_out__hlds_out_module__V_44_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 904 "hlds_out_module.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__V_44_44, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_module_scalar_common_7[1]));
#line 904 "hlds_out_module.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__V_44_44, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_module__write_table_struct_info_4_p_0_1));
#line 904 "hlds_out_module.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__V_44_44, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 904 "hlds_out_module.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__V_44_44, 3) = ((MR_Box) (hlds__hlds_out__hlds_out_module__TVarSet_12));
#line 904 "hlds_out_module.m"
    }
#line 2446 "hlds.hlds_out.hlds_out_module.c"
    hlds__hlds_out__hlds_out_module__TypeCtorInfo_87_87 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_table_step_desc_0;
#line 2448 "hlds.hlds_out.hlds_out_module.c"
    hlds__hlds_out__hlds_out_module__TypeCtorInfo_88_88 = (MR_Word) &mercury__io__io__type_ctor_info_state_0;
#line 904 "hlds_out_module.m"
    {
#line 904 "hlds_out_module.m"
      mercury__list__foldl_4_p_2(hlds__hlds_out__hlds_out_module__TypeCtorInfo_87_87, hlds__hlds_out__hlds_out_module__TypeCtorInfo_88_88, hlds__hlds_out__hlds_out_module__V_44_44, hlds__hlds_out__hlds_out_module__InputSteps_16, ((MR_Box) ((MR_Integer) 0)), &hlds__hlds_out__hlds_out_module__conv0_STATE_VARIABLE_IO_45_45);
    }
#line 905 "hlds_out_module.m"
    {
#line 905 "hlds_out_module.m"
      mercury__io__nl_2_p_0();
    }
#line 911 "hlds_out_module.m"
    if ((hlds__hlds_out__hlds_out_module__MaybeOutputSteps_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 912 "hlds_out_module.m"
      {
#line 913 "hlds_out_module.m"
        {
#line 913 "hlds_out_module.m"
          mercury__io__write_string_3_p_0((MR_String) "% no output steps");
        }
#line 912 "hlds_out_module.m"
      }
#line 911 "hlds_out_module.m"
    else
#line 907 "hlds_out_module.m"
      {
#line 907 "hlds_out_module.m"
        MR_Word hlds__hlds_out__hlds_out_module__OutputSteps_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_module__MaybeOutputSteps_17, (MR_Integer) 0)));
#line 909 "hlds_out_module.m"
        MR_Box hlds__hlds_out__hlds_out_module__conv1_STATE_VARIABLE_IO_52_52;

#line 908 "hlds_out_module.m"
        {
#line 908 "hlds_out_module.m"
          mercury__io__write_string_3_p_0((MR_String) "% output steps:");
        }
#line 909 "hlds_out_module.m"
        {
#line 909 "hlds_out_module.m"
          mercury__list__foldl_4_p_2(hlds__hlds_out__hlds_out_module__TypeCtorInfo_87_87, hlds__hlds_out__hlds_out_module__TypeCtorInfo_88_88, hlds__hlds_out__hlds_out_module__V_44_44, hlds__hlds_out__hlds_out_module__OutputSteps_20, ((MR_Box) ((MR_Integer) 0)), &hlds__hlds_out__hlds_out_module__conv1_STATE_VARIABLE_IO_52_52);
        }
#line 910 "hlds_out_module.m"
        {
#line 910 "hlds_out_module.m"
          mercury__io__nl_2_p_0();
        }
#line 907 "hlds_out_module.m"
      }
#line 915 "hlds_out_module.m"
    {
#line 915 "hlds_out_module.m"
      hlds__hlds_out__hlds_out_pred__write_table_arg_infos_4_p_0(hlds__hlds_out__hlds_out_module__TVarSet_12, hlds__hlds_out__hlds_out_module__ArgInfos_18);
    }
#line 917 "hlds_out_module.m"
    hlds__hlds_out__hlds_out_module__Strictness_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__Attributes_10, (MR_Integer) 0)));
#line 917 "hlds_out_module.m"
    hlds__hlds_out__hlds_out_module__SizeLimit_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__Attributes_10, (MR_Integer) 1)));
#line 917 "hlds_out_module.m"
    hlds__hlds_out__hlds_out_module__Stats_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__Attributes_10, (MR_Integer) 2)));
#line 917 "hlds_out_module.m"
    hlds__hlds_out__hlds_out_module__AllowReset_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__Attributes_10, (MR_Integer) 3)));
#line 921 "hlds_out_module.m"
    if ((hlds__hlds_out__hlds_out_module__Strictness_21 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 922 "hlds_out_module.m"
      {
#line 923 "hlds_out_module.m"
        {
#line 923 "hlds_out_module.m"
          mercury__io__write_string_3_p_0((MR_String) "% all fast_loose\n");
        }
#line 922 "hlds_out_module.m"
      }
#line 921 "hlds_out_module.m"
    else
#line 921 "hlds_out_module.m"
      if ((hlds__hlds_out__hlds_out_module__Strictness_21 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 919 "hlds_out_module.m"
        {
#line 920 "hlds_out_module.m"
          {
#line 920 "hlds_out_module.m"
            mercury__io__write_string_3_p_0((MR_String) "% all strict\n");
          }
#line 919 "hlds_out_module.m"
        }
#line 921 "hlds_out_module.m"
      else
#line 925 "hlds_out_module.m"
        {
#line 925 "hlds_out_module.m"
          MR_Word hlds__hlds_out__hlds_out_module__ArgMethods_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_module__Strictness_21, (MR_Integer) 0)));
#line 925 "hlds_out_module.m"
          MR_Word hlds__hlds_out__hlds_out_module__HiddenArgMethod_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_module__Strictness_21, (MR_Integer) 1)));

#line 926 "hlds_out_module.m"
          {
#line 926 "hlds_out_module.m"
            mercury__io__write_string_3_p_0((MR_String) "% specified [");
          }
#line 927 "hlds_out_module.m"
          {
#line 927 "hlds_out_module.m"
            hlds__hlds_out__hlds_out_module__write_arg_tabling_methods_4_p_0((MR_String) "", hlds__hlds_out__hlds_out_module__ArgMethods_25);
          }
#line 928 "hlds_out_module.m"
          {
#line 928 "hlds_out_module.m"
            mercury__io__write_string_3_p_0((MR_String) "]");
          }
#line 932 "hlds_out_module.m"
          if ((hlds__hlds_out__hlds_out_module__HiddenArgMethod_26 == (MR_Integer) 1))
#line 933 "hlds_out_module.m"
            {
#line 934 "hlds_out_module.m"
              {
#line 934 "hlds_out_module.m"
                mercury__io__write_string_3_p_0((MR_String) ", hidden args by addr\n");
              }
#line 933 "hlds_out_module.m"
            }
#line 932 "hlds_out_module.m"
          else
#line 930 "hlds_out_module.m"
            {
#line 931 "hlds_out_module.m"
              {
#line 931 "hlds_out_module.m"
                mercury__io__write_string_3_p_0((MR_String) ", hidden args by value\n");
              }
#line 930 "hlds_out_module.m"
            }
#line 925 "hlds_out_module.m"
        }
#line 940 "hlds_out_module.m"
    if ((hlds__hlds_out__hlds_out_module__SizeLimit_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 938 "hlds_out_module.m"
      {
#line 939 "hlds_out_module.m"
        {
#line 939 "hlds_out_module.m"
          mercury__io__write_string_3_p_0((MR_String) "% no size limit\n");
        }
#line 938 "hlds_out_module.m"
      }
#line 940 "hlds_out_module.m"
    else
#line 941 "hlds_out_module.m"
      {
#line 941 "hlds_out_module.m"
        MR_Integer hlds__hlds_out__hlds_out_module__Limit_27 = ((MR_Integer) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_module__SizeLimit_22, (MR_Integer) 0)));
#line 941 "hlds_out_module.m"
        MR_String hlds__hlds_out__hlds_out_module__V_116_116;

#line 942 "hlds_out_module.m"
        {
#line 942 "hlds_out_module.m"
          mercury__io__write_string_3_p_0((MR_String) "% size limit ");
        }
#line 942 "hlds_out_module.m"
        {
#line 942 "hlds_out_module.m"
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(hlds__hlds_out__hlds_out_module__V_101_101, hlds__hlds_out__hlds_out_module__Limit_27, &hlds__hlds_out__hlds_out_module__V_116_116);
        }
#line 942 "hlds_out_module.m"
        {
#line 942 "hlds_out_module.m"
          mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_module__V_116_116);
        }
#line 942 "hlds_out_module.m"
        {
#line 942 "hlds_out_module.m"
          mercury__io__write_string_3_p_0((MR_String) "\n");
        }
#line 941 "hlds_out_module.m"
      }
#line 947 "hlds_out_module.m"
    if ((hlds__hlds_out__hlds_out_module__Stats_23 == (MR_Integer) 1))
#line 948 "hlds_out_module.m"
      {
#line 949 "hlds_out_module.m"
        {
#line 949 "hlds_out_module.m"
          mercury__io__write_string_3_p_0((MR_String) "% do not gather statistics\n");
        }
#line 948 "hlds_out_module.m"
      }
#line 947 "hlds_out_module.m"
    else
#line 945 "hlds_out_module.m"
      {
#line 946 "hlds_out_module.m"
        {
#line 946 "hlds_out_module.m"
          mercury__io__write_string_3_p_0((MR_String) "% gather statistics\n");
        }
#line 945 "hlds_out_module.m"
      }
#line 954 "hlds_out_module.m"
    if ((hlds__hlds_out__hlds_out_module__AllowReset_24 == (MR_Integer) 0))
#line 952 "hlds_out_module.m"
      {
#line 953 "hlds_out_module.m"
        {
#line 953 "hlds_out_module.m"
          mercury__io__write_string_3_p_0((MR_String) "% allow reset\n");
#line 953 "hlds_out_module.m"
          return;
        }
#line 952 "hlds_out_module.m"
      }
#line 954 "hlds_out_module.m"
    else
#line 955 "hlds_out_module.m"
      {
#line 956 "hlds_out_module.m"
        {
#line 956 "hlds_out_module.m"
          mercury__io__write_string_3_p_0((MR_String) "% do not allow reset\n");
#line 956 "hlds_out_module.m"
          return;
        }
#line 955 "hlds_out_module.m"
      }
#line 892 "hlds_out_module.m"
  }
#line 889 "hlds_out_module.m"
}

#line 886 "hlds_out_module.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_table_structs_4_p_0_1(
#line 886 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__closure_arg,
#line 886 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_1,
#line 886 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_2,
#line 886 "hlds_out_module.m"
  MR_Box * hlds__hlds_out__hlds_out_module__wrapper_arg_3)
#line 886 "hlds_out_module.m"
{
#line 886 "hlds_out_module.m"
  {
#line 886 "hlds_out_module.m"
    MR_Box hlds__hlds_out__hlds_out_module__closure = hlds__hlds_out__hlds_out_module__closure_arg;

#line 886 "hlds_out_module.m"
    {
#line 886 "hlds_out_module.m"
      hlds__hlds_out__hlds_out_module__write_table_struct_info_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__closure, (MR_Integer) 3))), ((MR_Word) hlds__hlds_out__hlds_out_module__wrapper_arg_1));
#line 886 "hlds_out_module.m"
      return;
    }
#line 886 "hlds_out_module.m"
  }
#line 886 "hlds_out_module.m"
}

#line 880 "hlds_out_module.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_table_structs_4_p_0(
#line 880 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__ModuleInfo_5,
#line 880 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__TableStructMap_6)
#line 880 "hlds_out_module.m"
{
#line 883 "hlds_out_module.m"
  {
#line 883 "hlds_out_module.m"
    MR_bool hlds__hlds_out__hlds_out_module__succeeded;
#line 883 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__TableStructs_8;
#line 883 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__V_13_13;
#line 886 "hlds_out_module.m"
    MR_Box hlds__hlds_out__hlds_out_module__conv0_STATE_VARIABLE_IO_14_14;

#line 884 "hlds_out_module.m"
    {
#line 884 "hlds_out_module.m"
      mercury__map__to_assoc_list_2_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_table_struct_info_0, hlds__hlds_out__hlds_out_module__TableStructMap_6, &hlds__hlds_out__hlds_out_module__TableStructs_8);
    }
#line 885 "hlds_out_module.m"
    {
#line 885 "hlds_out_module.m"
      mercury__io__write_string_3_p_0((MR_String) "%-------- Table structs --------\n");
    }
#line 886 "hlds_out_module.m"
    {
#line 886 "hlds_out_module.m"
      hlds__hlds_out__hlds_out_module__V_13_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 886 "hlds_out_module.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__V_13_13, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_module_scalar_common_7[0]));
#line 886 "hlds_out_module.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__V_13_13, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_module__write_table_structs_4_p_0_1));
#line 886 "hlds_out_module.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__V_13_13, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 886 "hlds_out_module.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__V_13_13, 3) = ((MR_Box) (hlds__hlds_out__hlds_out_module__ModuleInfo_5));
#line 886 "hlds_out_module.m"
    }
#line 886 "hlds_out_module.m"
    {
#line 886 "hlds_out_module.m"
      mercury__list__foldl_4_p_2((MR_Word) &hlds__hlds_out__hlds_out_module_scalar_common_2[4], (MR_Word) &mercury__io__io__type_ctor_info_state_0, hlds__hlds_out__hlds_out_module__V_13_13, hlds__hlds_out__hlds_out_module__TableStructs_8, ((MR_Box) ((MR_Integer) 0)), &hlds__hlds_out__hlds_out_module__conv0_STATE_VARIABLE_IO_14_14);
    }
#line 887 "hlds_out_module.m"
    {
#line 887 "hlds_out_module.m"
      mercury__io__nl_2_p_0();
#line 887 "hlds_out_module.m"
      return;
    }
#line 883 "hlds_out_module.m"
  }
#line 880 "hlds_out_module.m"
}

#line 852 "hlds_out_module.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_const_struct_args_4_p_0(
#line 852 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__HeadConstArg_5,
#line 852 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__TailConstArgs_6)
#line 852 "hlds_out_module.m"
{
#line 855 "hlds_out_module.m"
  while (MR_TRUE)
#line 855 "hlds_out_module.m"
    {
#line 855 "hlds_out_module.m"
      /* tailcall optimized into a loop */
#line 855 "hlds_out_module.m"
      {
#line 855 "hlds_out_module.m"
        MR_bool hlds__hlds_out__hlds_out_module__succeeded;

#line 856 "hlds_out_module.m"
        {
#line 856 "hlds_out_module.m"
          mercury__io__write_string_3_p_0((MR_String) "    ");
        }
#line 860 "hlds_out_module.m"
        if (((MR_tag((MR_Word) hlds__hlds_out__hlds_out_module__HeadConstArg_5)) == (MR_mktag((MR_Integer) 0))))
#line 858 "hlds_out_module.m"
          {
#line 858 "hlds_out_module.m"
            MR_Integer hlds__hlds_out__hlds_out_module__N_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__HeadConstArg_5, (MR_Integer) 0)));
#line 858 "hlds_out_module.m"
            MR_String hlds__hlds_out__hlds_out_module__V_38_38;

#line 859 "hlds_out_module.m"
            {
#line 859 "hlds_out_module.m"
              mercury__io__write_string_3_p_0((MR_String) "cs(");
            }
#line 859 "hlds_out_module.m"
            {
#line 859 "hlds_out_module.m"
              mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &hlds__hlds_out__hlds_out_module_scalar_common_6[0], hlds__hlds_out__hlds_out_module__N_8, &hlds__hlds_out__hlds_out_module__V_38_38);
            }
#line 859 "hlds_out_module.m"
            {
#line 859 "hlds_out_module.m"
              mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_module__V_38_38);
            }
#line 859 "hlds_out_module.m"
            {
#line 859 "hlds_out_module.m"
              mercury__io__write_string_3_p_0((MR_String) ")");
            }
#line 858 "hlds_out_module.m"
          }
#line 860 "hlds_out_module.m"
        else
#line 861 "hlds_out_module.m"
          {
#line 861 "hlds_out_module.m"
            MR_Word hlds__hlds_out__hlds_out_module__ConsId_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_module__HeadConstArg_5, (MR_Integer) 0)));
#line 861 "hlds_out_module.m"
            MR_Word hlds__hlds_out__hlds_out_module__Type_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_module__HeadConstArg_5, (MR_Integer) 1)));
#line 861 "hlds_out_module.m"
            MR_Word hlds__hlds_out__hlds_out_module__V_21_21;

#line 862 "hlds_out_module.m"
            {
#line 862 "hlds_out_module.m"
              parse_tree__mercury_to_mercury__mercury_output_cons_id_4_p_0((MR_Integer) 1, hlds__hlds_out__hlds_out_module__ConsId_9);
            }
#line 863 "hlds_out_module.m"
            {
#line 863 "hlds_out_module.m"
              mercury__io__write_string_3_p_0((MR_String) "\n        with type ");
            }
#line 864 "hlds_out_module.m"
            {
#line 864 "hlds_out_module.m"
              hlds__hlds_out__hlds_out_module__V_21_21 = mercury__varset__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0);
            }
#line 864 "hlds_out_module.m"
            {
#line 864 "hlds_out_module.m"
              parse_tree__mercury_to_mercury__mercury_output_type_5_p_0(hlds__hlds_out__hlds_out_module__V_21_21, (MR_Integer) 0, hlds__hlds_out__hlds_out_module__Type_10);
            }
#line 861 "hlds_out_module.m"
          }
#line 869 "hlds_out_module.m"
        if ((hlds__hlds_out__hlds_out_module__TailConstArgs_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 867 "hlds_out_module.m"
          {
#line 868 "hlds_out_module.m"
            {
#line 868 "hlds_out_module.m"
              mercury__io__write_string_3_p_0((MR_String) "\n");
#line 868 "hlds_out_module.m"
              return;
            }
#line 867 "hlds_out_module.m"
          }
#line 869 "hlds_out_module.m"
        else
#line 870 "hlds_out_module.m"
          {
#line 870 "hlds_out_module.m"
            MR_Word hlds__hlds_out__hlds_out_module__HeadTailConstArg_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_module__TailConstArgs_6, (MR_Integer) 0)));
#line 870 "hlds_out_module.m"
            MR_Word hlds__hlds_out__hlds_out_module__TailTailConstArgs_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_module__TailConstArgs_6, (MR_Integer) 1)));

#line 871 "hlds_out_module.m"
            {
#line 871 "hlds_out_module.m"
              mercury__io__write_string_3_p_0((MR_String) ",\n");
            }
#line 872 "hlds_out_module.m"
            /* direct tailcall eliminated */
#line 872 "hlds_out_module.m"
            {
#line 872 "hlds_out_module.m"
              MR_Word hlds__hlds_out__hlds_out_module__HeadConstArg__tmp_copy_5 = hlds__hlds_out__hlds_out_module__HeadTailConstArg_11;
#line 872 "hlds_out_module.m"
              MR_Word hlds__hlds_out__hlds_out_module__TailConstArgs__tmp_copy_6 = hlds__hlds_out__hlds_out_module__TailTailConstArgs_12;

#line 872 "hlds_out_module.m"
              hlds__hlds_out__hlds_out_module__TailConstArgs_6 = hlds__hlds_out__hlds_out_module__TailConstArgs__tmp_copy_6;
#line 872 "hlds_out_module.m"
              hlds__hlds_out__hlds_out_module__HeadConstArg_5 = hlds__hlds_out__hlds_out_module__HeadConstArg__tmp_copy_5;
#line 872 "hlds_out_module.m"
            }
#line 872 "hlds_out_module.m"
            continue;
#line 870 "hlds_out_module.m"
          }
#line 855 "hlds_out_module.m"
      }
#line 855 "hlds_out_module.m"
      break;
#line 855 "hlds_out_module.m"
    }
#line 852 "hlds_out_module.m"
}

#line 830 "hlds_out_module.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_const_struct_3_p_0(
#line 830 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__HeadVar__1_1)
#line 830 "hlds_out_module.m"
{
#line 832 "hlds_out_module.m"
  {
#line 832 "hlds_out_module.m"
    MR_bool hlds__hlds_out__hlds_out_module__succeeded;
#line 832 "hlds_out_module.m"
    MR_Integer hlds__hlds_out__hlds_out_module__N_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__HeadVar__1_1, (MR_Integer) 0)));
#line 832 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__ConstStruct_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__HeadVar__1_1, (MR_Integer) 1)));
#line 832 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__ConsId_7;
#line 832 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__ConstArgs_8;
#line 832 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__Type_9;
#line 832 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__Inst_10;
#line 832 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__V_30_30;
#line 832 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__V_39_39;
#line 832 "hlds_out_module.m"
    MR_String hlds__hlds_out__hlds_out_module__V_46_46;

#line 833 "hlds_out_module.m"
    {
#line 833 "hlds_out_module.m"
      mercury__io__write_string_3_p_0((MR_String) "\nconst_struct ");
    }
#line 833 "hlds_out_module.m"
    {
#line 833 "hlds_out_module.m"
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &hlds__hlds_out__hlds_out_module_scalar_common_6[0], hlds__hlds_out__hlds_out_module__N_4, &hlds__hlds_out__hlds_out_module__V_46_46);
    }
#line 833 "hlds_out_module.m"
    {
#line 833 "hlds_out_module.m"
      mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_module__V_46_46);
    }
#line 833 "hlds_out_module.m"
    {
#line 833 "hlds_out_module.m"
      mercury__io__write_string_3_p_0((MR_String) ":\n");
    }
#line 834 "hlds_out_module.m"
    hlds__hlds_out__hlds_out_module__ConsId_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__ConstStruct_5, (MR_Integer) 0)));
#line 834 "hlds_out_module.m"
    hlds__hlds_out__hlds_out_module__ConstArgs_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__ConstStruct_5, (MR_Integer) 1)));
#line 834 "hlds_out_module.m"
    hlds__hlds_out__hlds_out_module__Type_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__ConstStruct_5, (MR_Integer) 2)));
#line 834 "hlds_out_module.m"
    hlds__hlds_out__hlds_out_module__Inst_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__ConstStruct_5, (MR_Integer) 3)));
#line 835 "hlds_out_module.m"
    {
#line 835 "hlds_out_module.m"
      parse_tree__mercury_to_mercury__mercury_output_cons_id_4_p_0((MR_Integer) 1, hlds__hlds_out__hlds_out_module__ConsId_7);
    }
#line 839 "hlds_out_module.m"
    if ((hlds__hlds_out__hlds_out_module__ConstArgs_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 838 "hlds_out_module.m"
      {
#line 838 "hlds_out_module.m"
        mercury__io__nl_2_p_0();
      }
#line 839 "hlds_out_module.m"
    else
#line 840 "hlds_out_module.m"
      {
#line 840 "hlds_out_module.m"
        MR_Word hlds__hlds_out__hlds_out_module__HeadConstArg_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_module__ConstArgs_8, (MR_Integer) 0)));
#line 840 "hlds_out_module.m"
        MR_Word hlds__hlds_out__hlds_out_module__TailConstArgs_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_module__ConstArgs_8, (MR_Integer) 1)));

#line 841 "hlds_out_module.m"
        {
#line 841 "hlds_out_module.m"
          mercury__io__write_string_3_p_0((MR_String) "(\n");
        }
#line 842 "hlds_out_module.m"
        {
#line 842 "hlds_out_module.m"
          hlds__hlds_out__hlds_out_module__write_const_struct_args_4_p_0(hlds__hlds_out__hlds_out_module__HeadConstArg_11, hlds__hlds_out__hlds_out_module__TailConstArgs_12);
        }
#line 843 "hlds_out_module.m"
        {
#line 843 "hlds_out_module.m"
          mercury__io__write_string_3_p_0((MR_String) ")\n");
        }
#line 840 "hlds_out_module.m"
      }
#line 845 "hlds_out_module.m"
    {
#line 845 "hlds_out_module.m"
      mercury__io__write_string_3_p_0((MR_String) "type: ");
    }
#line 846 "hlds_out_module.m"
    {
#line 846 "hlds_out_module.m"
      hlds__hlds_out__hlds_out_module__V_30_30 = mercury__varset__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0);
    }
#line 846 "hlds_out_module.m"
    {
#line 846 "hlds_out_module.m"
      parse_tree__mercury_to_mercury__mercury_output_type_5_p_0(hlds__hlds_out__hlds_out_module__V_30_30, (MR_Integer) 0, hlds__hlds_out__hlds_out_module__Type_9);
    }
#line 847 "hlds_out_module.m"
    {
#line 847 "hlds_out_module.m"
      mercury__io__nl_2_p_0();
    }
#line 848 "hlds_out_module.m"
    {
#line 848 "hlds_out_module.m"
      mercury__io__write_string_3_p_0((MR_String) "inst: ");
    }
#line 850 "hlds_out_module.m"
    {
#line 850 "hlds_out_module.m"
      hlds__hlds_out__hlds_out_module__V_39_39 = mercury__varset__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0);
    }
#line 849 "hlds_out_module.m"
    {
#line 849 "hlds_out_module.m"
      hlds__hlds_out__hlds_out_mode__mercury_output_structured_inst_7_p_0(hlds__hlds_out__hlds_out_module__Inst_10, (MR_Integer) 0, (MR_Integer) 1, (MR_Integer) 0, hlds__hlds_out__hlds_out_module__V_39_39);
#line 849 "hlds_out_module.m"
      return;
    }
#line 832 "hlds_out_module.m"
  }
#line 830 "hlds_out_module.m"
}

#line 827 "hlds_out_module.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_const_struct_db_3_p_0_1(
#line 827 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__closure_arg,
#line 827 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_1,
#line 827 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_2,
#line 827 "hlds_out_module.m"
  MR_Box * hlds__hlds_out__hlds_out_module__wrapper_arg_3)
#line 827 "hlds_out_module.m"
{
#line 827 "hlds_out_module.m"
  {
#line 827 "hlds_out_module.m"
    MR_Box hlds__hlds_out__hlds_out_module__closure = hlds__hlds_out__hlds_out_module__closure_arg;

#line 827 "hlds_out_module.m"
    {
#line 827 "hlds_out_module.m"
      hlds__hlds_out__hlds_out_module__write_const_struct_3_p_0(((MR_Word) hlds__hlds_out__hlds_out_module__wrapper_arg_1));
#line 827 "hlds_out_module.m"
      return;
    }
#line 827 "hlds_out_module.m"
  }
#line 827 "hlds_out_module.m"
}

#line 822 "hlds_out_module.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_const_struct_db_3_p_0(
#line 822 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__ConstStructDb_4)
#line 822 "hlds_out_module.m"
{
#line 824 "hlds_out_module.m"
  {
#line 824 "hlds_out_module.m"
    MR_bool hlds__hlds_out__hlds_out_module__succeeded;
#line 824 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__ConstStructs_6;
#line 827 "hlds_out_module.m"
    MR_Box hlds__hlds_out__hlds_out_module__conv0_STATE_VARIABLE_IO_12_12;

#line 825 "hlds_out_module.m"
    {
#line 825 "hlds_out_module.m"
      hlds__const_struct__const_struct_db_get_structs_2_p_0(hlds__hlds_out__hlds_out_module__ConstStructDb_4, &hlds__hlds_out__hlds_out_module__ConstStructs_6);
    }
#line 826 "hlds_out_module.m"
    {
#line 826 "hlds_out_module.m"
      mercury__io__write_string_3_p_0((MR_String) "%-------- Const structs --------\n\n");
    }
#line 827 "hlds_out_module.m"
    {
#line 827 "hlds_out_module.m"
      mercury__list__foldl_4_p_2((MR_Word) &hlds__hlds_out__hlds_out_module_scalar_common_2[3], (MR_Word) &mercury__io__io__type_ctor_info_state_0, (MR_Word) &hlds__hlds_out__hlds_out_module_scalar_common_2[11], hlds__hlds_out__hlds_out_module__ConstStructs_6, ((MR_Box) ((MR_Integer) 0)), &hlds__hlds_out__hlds_out_module__conv0_STATE_VARIABLE_IO_12_12);
    }
#line 828 "hlds_out_module.m"
    {
#line 828 "hlds_out_module.m"
      mercury__io__nl_2_p_0();
#line 828 "hlds_out_module.m"
      return;
    }
#line 824 "hlds_out_module.m"
  }
#line 822 "hlds_out_module.m"
}

#line 793 "hlds_out_module.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_inst_4_p_0(
#line 793 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__Lang_5,
#line 793 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__Inst_6)
#line 793 "hlds_out_module.m"
{
#line 795 "hlds_out_module.m"
  {
#line 795 "hlds_out_module.m"
    MR_bool hlds__hlds_out__hlds_out_module__succeeded;
#line 795 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__TypeCtorInfo_14_14;
#line 795 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__InstTerm_8;
#line 795 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__VarSet_9;

#line 796 "hlds_out_module.m"
    {
#line 796 "hlds_out_module.m"
      hlds__hlds_out__hlds_out_module__InstTerm_8 = hlds__hlds_out__hlds_out_mode__inst_to_term_2_f_0(hlds__hlds_out__hlds_out_module__Lang_5, hlds__hlds_out__hlds_out_module__Inst_6);
    }
#line 3148 "hlds.hlds_out.hlds_out_module.c"
    hlds__hlds_out__hlds_out_module__TypeCtorInfo_14_14 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 797 "hlds_out_module.m"
    {
#line 797 "hlds_out_module.m"
      mercury__varset__init_1_p_0(hlds__hlds_out__hlds_out_module__TypeCtorInfo_14_14, &hlds__hlds_out__hlds_out_module__VarSet_9);
    }
#line 798 "hlds_out_module.m"
    {
#line 798 "hlds_out_module.m"
      parse_tree__mercury_to_mercury__mercury_output_term_5_p_0(hlds__hlds_out__hlds_out_module__TypeCtorInfo_14_14, hlds__hlds_out__hlds_out_module__VarSet_9, (MR_Integer) 0, hlds__hlds_out__hlds_out_module__InstTerm_8);
#line 798 "hlds_out_module.m"
      return;
    }
#line 795 "hlds_out_module.m"
  }
#line 793 "hlds_out_module.m"
}

#line 786 "hlds_out_module.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_inst_name_4_p_0(
#line 786 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__Lang_5,
#line 786 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__InstName_6)
#line 786 "hlds_out_module.m"
{
#line 788 "hlds_out_module.m"
  {
#line 788 "hlds_out_module.m"
    MR_bool hlds__hlds_out__hlds_out_module__succeeded;
#line 788 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__TypeCtorInfo_14_14;
#line 788 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__InstNameTerm_8;
#line 788 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__VarSet_9;

#line 789 "hlds_out_module.m"
    {
#line 789 "hlds_out_module.m"
      hlds__hlds_out__hlds_out_module__InstNameTerm_8 = hlds__hlds_out__hlds_out_mode__inst_name_to_term_2_f_0(hlds__hlds_out__hlds_out_module__Lang_5, hlds__hlds_out__hlds_out_module__InstName_6);
    }
#line 3192 "hlds.hlds_out.hlds_out_module.c"
    hlds__hlds_out__hlds_out_module__TypeCtorInfo_14_14 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 790 "hlds_out_module.m"
    {
#line 790 "hlds_out_module.m"
      mercury__varset__init_1_p_0(hlds__hlds_out__hlds_out_module__TypeCtorInfo_14_14, &hlds__hlds_out__hlds_out_module__VarSet_9);
    }
#line 791 "hlds_out_module.m"
    {
#line 791 "hlds_out_module.m"
      parse_tree__mercury_to_mercury__mercury_output_term_5_p_0(hlds__hlds_out__hlds_out_module__TypeCtorInfo_14_14, hlds__hlds_out__hlds_out_module__VarSet_9, (MR_Integer) 0, hlds__hlds_out__hlds_out_module__InstNameTerm_8);
#line 791 "hlds_out_module.m"
      return;
    }
#line 788 "hlds_out_module.m"
  }
#line 786 "hlds_out_module.m"
}

#line 759 "hlds_out_module.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_inst_pair_maybe_inst_8_p_0(
#line 759 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__Lang_9,
#line 759 "hlds_out_module.m"
  MR_Integer hlds__hlds_out__hlds_out_module__Limit_10,
#line 759 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__HeadVar__3_3,
#line 759 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__MaybeInst_13,
#line 759 "hlds_out_module.m"
  MR_Integer hlds__hlds_out__hlds_out_module__STATE_VARIABLE_N_0_17,
#line 759 "hlds_out_module.m"
  MR_Integer * hlds__hlds_out__hlds_out_module__STATE_VARIABLE_N_18)
#line 759 "hlds_out_module.m"
{
#line 763 "hlds_out_module.m"
  {
#line 763 "hlds_out_module.m"
    MR_bool hlds__hlds_out__hlds_out_module__succeeded;
#line 763 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__InstA_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__HeadVar__3_3, (MR_Integer) 0)));
#line 763 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__InstB_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__HeadVar__3_3, (MR_Integer) 1)));

#line 764 "hlds_out_module.m"
    *hlds__hlds_out__hlds_out_module__STATE_VARIABLE_N_18 = (hlds__hlds_out__hlds_out_module__STATE_VARIABLE_N_0_17 + (MR_Integer) 1);
#line 765 "hlds_out_module.m"
    hlds__hlds_out__hlds_out_module__succeeded = (*hlds__hlds_out__hlds_out_module__STATE_VARIABLE_N_18 <= hlds__hlds_out__hlds_out_module__Limit_10);
#line 782 "hlds_out_module.m"
    if (hlds__hlds_out__hlds_out_module__succeeded)
#line 766 "hlds_out_module.m"
      {
#line 766 "hlds_out_module.m"
        MR_String hlds__hlds_out__hlds_out_module__V_53_53;
#line 766 "hlds_out_module.m"
        MR_Word hlds__hlds_out__hlds_out_module__V_59_59;
#line 766 "hlds_out_module.m"
        MR_String hlds__hlds_out__hlds_out_module__V_64_64;

#line 766 "hlds_out_module.m"
        {
#line 766 "hlds_out_module.m"
          mercury__io__nl_2_p_0();
        }
#line 767 "hlds_out_module.m"
        {
#line 767 "hlds_out_module.m"
          mercury__io__write_string_3_p_0((MR_String) "Entry ");
        }
#line 3262 "hlds.hlds_out.hlds_out_module.c"
        hlds__hlds_out__hlds_out_module__V_59_59 = (MR_Word) &hlds__hlds_out__hlds_out_module_scalar_common_6[0];
#line 767 "hlds_out_module.m"
        {
#line 767 "hlds_out_module.m"
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(hlds__hlds_out__hlds_out_module__V_59_59, *hlds__hlds_out__hlds_out_module__STATE_VARIABLE_N_18, &hlds__hlds_out__hlds_out_module__V_53_53);
        }
#line 767 "hlds_out_module.m"
        {
#line 767 "hlds_out_module.m"
          mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_module__V_53_53);
        }
#line 767 "hlds_out_module.m"
        {
#line 767 "hlds_out_module.m"
          mercury__io__write_string_3_p_0((MR_String) " left key\n");
        }
#line 768 "hlds_out_module.m"
        {
#line 768 "hlds_out_module.m"
          hlds__hlds_out__hlds_out_module__write_inst_4_p_0(hlds__hlds_out__hlds_out_module__Lang_9, hlds__hlds_out__hlds_out_module__InstA_11);
        }
#line 769 "hlds_out_module.m"
        {
#line 769 "hlds_out_module.m"
          mercury__io__nl_2_p_0();
        }
#line 770 "hlds_out_module.m"
        {
#line 770 "hlds_out_module.m"
          mercury__io__write_string_3_p_0((MR_String) "Entry ");
        }
#line 770 "hlds_out_module.m"
        {
#line 770 "hlds_out_module.m"
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(hlds__hlds_out__hlds_out_module__V_59_59, *hlds__hlds_out__hlds_out_module__STATE_VARIABLE_N_18, &hlds__hlds_out__hlds_out_module__V_64_64);
        }
#line 770 "hlds_out_module.m"
        {
#line 770 "hlds_out_module.m"
          mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_module__V_64_64);
        }
#line 770 "hlds_out_module.m"
        {
#line 770 "hlds_out_module.m"
          mercury__io__write_string_3_p_0((MR_String) " right key\n");
        }
#line 771 "hlds_out_module.m"
        {
#line 771 "hlds_out_module.m"
          hlds__hlds_out__hlds_out_module__write_inst_4_p_0(hlds__hlds_out__hlds_out_module__Lang_9, hlds__hlds_out__hlds_out_module__InstB_12);
        }
#line 772 "hlds_out_module.m"
        {
#line 772 "hlds_out_module.m"
          mercury__io__nl_2_p_0();
        }
#line 776 "hlds_out_module.m"
        if ((hlds__hlds_out__hlds_out_module__MaybeInst_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 774 "hlds_out_module.m"
          {
#line 774 "hlds_out_module.m"
            MR_String hlds__hlds_out__hlds_out_module__V_75_75;

#line 775 "hlds_out_module.m"
            {
#line 775 "hlds_out_module.m"
              mercury__io__write_string_3_p_0((MR_String) "Entry ");
            }
#line 775 "hlds_out_module.m"
            {
#line 775 "hlds_out_module.m"
              mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(hlds__hlds_out__hlds_out_module__V_59_59, *hlds__hlds_out__hlds_out_module__STATE_VARIABLE_N_18, &hlds__hlds_out__hlds_out_module__V_75_75);
            }
#line 775 "hlds_out_module.m"
            {
#line 775 "hlds_out_module.m"
              mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_module__V_75_75);
            }
#line 775 "hlds_out_module.m"
            {
#line 775 "hlds_out_module.m"
              mercury__io__write_string_3_p_0((MR_String) " value UNKNOWN\n");
#line 775 "hlds_out_module.m"
              return;
            }
#line 774 "hlds_out_module.m"
          }
#line 776 "hlds_out_module.m"
        else
#line 777 "hlds_out_module.m"
          {
#line 777 "hlds_out_module.m"
            MR_Word hlds__hlds_out__hlds_out_module__Inst_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_module__MaybeInst_13, (MR_Integer) 0)));
#line 777 "hlds_out_module.m"
            MR_String hlds__hlds_out__hlds_out_module__V_86_86;

#line 778 "hlds_out_module.m"
            {
#line 778 "hlds_out_module.m"
              mercury__io__write_string_3_p_0((MR_String) "Entry ");
            }
#line 778 "hlds_out_module.m"
            {
#line 778 "hlds_out_module.m"
              mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(hlds__hlds_out__hlds_out_module__V_59_59, *hlds__hlds_out__hlds_out_module__STATE_VARIABLE_N_18, &hlds__hlds_out__hlds_out_module__V_86_86);
            }
#line 778 "hlds_out_module.m"
            {
#line 778 "hlds_out_module.m"
              mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_module__V_86_86);
            }
#line 778 "hlds_out_module.m"
            {
#line 778 "hlds_out_module.m"
              mercury__io__write_string_3_p_0((MR_String) " value:\n");
            }
#line 779 "hlds_out_module.m"
            {
#line 779 "hlds_out_module.m"
              hlds__hlds_out__hlds_out_module__write_inst_4_p_0(hlds__hlds_out__hlds_out_module__Lang_9, hlds__hlds_out__hlds_out_module__Inst_16);
            }
#line 780 "hlds_out_module.m"
            {
#line 780 "hlds_out_module.m"
              mercury__io__nl_2_p_0();
#line 780 "hlds_out_module.m"
              return;
            }
#line 777 "hlds_out_module.m"
          }
#line 766 "hlds_out_module.m"
      }
#line 782 "hlds_out_module.m"
    else
#line 782 "hlds_out_module.m"
      {
#line 782 "hlds_out_module.m"
      }
#line 763 "hlds_out_module.m"
  }
#line 759 "hlds_out_module.m"
}

#line 734 "hlds_out_module.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_inst_name_maybe_inst_det_8_p_0(
#line 734 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__Lang_9,
#line 734 "hlds_out_module.m"
  MR_Integer hlds__hlds_out__hlds_out_module__Limit_10,
#line 734 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__InstName_11,
#line 734 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__MaybeInstDet_12,
#line 734 "hlds_out_module.m"
  MR_Integer hlds__hlds_out__hlds_out_module__STATE_VARIABLE_N_0_18,
#line 734 "hlds_out_module.m"
  MR_Integer * hlds__hlds_out__hlds_out_module__STATE_VARIABLE_N_19)
#line 734 "hlds_out_module.m"
{
#line 738 "hlds_out_module.m"
  {
#line 738 "hlds_out_module.m"
    MR_bool hlds__hlds_out__hlds_out_module__succeeded;

#line 739 "hlds_out_module.m"
    *hlds__hlds_out__hlds_out_module__STATE_VARIABLE_N_19 = (hlds__hlds_out__hlds_out_module__STATE_VARIABLE_N_0_18 + (MR_Integer) 1);
#line 740 "hlds_out_module.m"
    hlds__hlds_out__hlds_out_module__succeeded = (*hlds__hlds_out__hlds_out_module__STATE_VARIABLE_N_19 <= hlds__hlds_out__hlds_out_module__Limit_10);
#line 755 "hlds_out_module.m"
    if (hlds__hlds_out__hlds_out_module__succeeded)
#line 741 "hlds_out_module.m"
      {
#line 741 "hlds_out_module.m"
        MR_String hlds__hlds_out__hlds_out_module__V_49_49;
#line 741 "hlds_out_module.m"
        MR_Word hlds__hlds_out__hlds_out_module__V_55_55;

#line 741 "hlds_out_module.m"
        {
#line 741 "hlds_out_module.m"
          mercury__io__nl_2_p_0();
        }
#line 742 "hlds_out_module.m"
        {
#line 742 "hlds_out_module.m"
          mercury__io__write_string_3_p_0((MR_String) "Entry ");
        }
#line 3451 "hlds.hlds_out.hlds_out_module.c"
        hlds__hlds_out__hlds_out_module__V_55_55 = (MR_Word) &hlds__hlds_out__hlds_out_module_scalar_common_6[0];
#line 742 "hlds_out_module.m"
        {
#line 742 "hlds_out_module.m"
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(hlds__hlds_out__hlds_out_module__V_55_55, *hlds__hlds_out__hlds_out_module__STATE_VARIABLE_N_19, &hlds__hlds_out__hlds_out_module__V_49_49);
        }
#line 742 "hlds_out_module.m"
        {
#line 742 "hlds_out_module.m"
          mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_module__V_49_49);
        }
#line 742 "hlds_out_module.m"
        {
#line 742 "hlds_out_module.m"
          mercury__io__write_string_3_p_0((MR_String) " key\n");
        }
#line 743 "hlds_out_module.m"
        {
#line 743 "hlds_out_module.m"
          hlds__hlds_out__hlds_out_module__write_inst_name_4_p_0(hlds__hlds_out__hlds_out_module__Lang_9, hlds__hlds_out__hlds_out_module__InstName_11);
        }
#line 744 "hlds_out_module.m"
        {
#line 744 "hlds_out_module.m"
          mercury__io__nl_2_p_0();
        }
#line 748 "hlds_out_module.m"
        if ((hlds__hlds_out__hlds_out_module__MaybeInstDet_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 746 "hlds_out_module.m"
          {
#line 746 "hlds_out_module.m"
            MR_String hlds__hlds_out__hlds_out_module__V_60_60;

#line 747 "hlds_out_module.m"
            {
#line 747 "hlds_out_module.m"
              mercury__io__write_string_3_p_0((MR_String) "Entry ");
            }
#line 747 "hlds_out_module.m"
            {
#line 747 "hlds_out_module.m"
              mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(hlds__hlds_out__hlds_out_module__V_55_55, *hlds__hlds_out__hlds_out_module__STATE_VARIABLE_N_19, &hlds__hlds_out__hlds_out_module__V_60_60);
            }
#line 747 "hlds_out_module.m"
            {
#line 747 "hlds_out_module.m"
              mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_module__V_60_60);
            }
#line 747 "hlds_out_module.m"
            {
#line 747 "hlds_out_module.m"
              mercury__io__write_string_3_p_0((MR_String) " value UNKNOWN\n");
#line 747 "hlds_out_module.m"
              return;
            }
#line 746 "hlds_out_module.m"
          }
#line 748 "hlds_out_module.m"
        else
#line 749 "hlds_out_module.m"
          {
#line 749 "hlds_out_module.m"
            MR_Word hlds__hlds_out__hlds_out_module__Inst_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_module__MaybeInstDet_12, (MR_Integer) 0)));
#line 749 "hlds_out_module.m"
            MR_Word hlds__hlds_out__hlds_out_module__Detism_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_module__MaybeInstDet_12, (MR_Integer) 1)));
#line 749 "hlds_out_module.m"
            MR_String hlds__hlds_out__hlds_out_module__DetismStr_17;
#line 749 "hlds_out_module.m"
            MR_String hlds__hlds_out__hlds_out_module__V_71_71;
#line 749 "hlds_out_module.m"
            MR_String hlds__hlds_out__hlds_out_module__V_81_81;

#line 750 "hlds_out_module.m"
            {
#line 750 "hlds_out_module.m"
              hlds__hlds_out__hlds_out_module__DetismStr_17 = parse_tree__prog_out__determinism_to_string_1_f_0(hlds__hlds_out__hlds_out_module__Detism_16);
            }
#line 751 "hlds_out_module.m"
            {
#line 751 "hlds_out_module.m"
              mercury__io__write_string_3_p_0((MR_String) "Entry ");
            }
#line 751 "hlds_out_module.m"
            {
#line 751 "hlds_out_module.m"
              mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(hlds__hlds_out__hlds_out_module__V_55_55, *hlds__hlds_out__hlds_out_module__STATE_VARIABLE_N_19, &hlds__hlds_out__hlds_out_module__V_71_71);
            }
#line 751 "hlds_out_module.m"
            {
#line 751 "hlds_out_module.m"
              mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_module__V_71_71);
            }
#line 751 "hlds_out_module.m"
            {
#line 751 "hlds_out_module.m"
              mercury__io__write_string_3_p_0((MR_String) " value (");
            }
#line 751 "hlds_out_module.m"
            {
#line 751 "hlds_out_module.m"
              mercury__string__format__format_string_component_nowidth_noprec_3_p_0(hlds__hlds_out__hlds_out_module__V_55_55, hlds__hlds_out__hlds_out_module__DetismStr_17, &hlds__hlds_out__hlds_out_module__V_81_81);
            }
#line 751 "hlds_out_module.m"
            {
#line 751 "hlds_out_module.m"
              mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_module__V_81_81);
            }
#line 751 "hlds_out_module.m"
            {
#line 751 "hlds_out_module.m"
              mercury__io__write_string_3_p_0((MR_String) "):\n");
            }
#line 752 "hlds_out_module.m"
            {
#line 752 "hlds_out_module.m"
              hlds__hlds_out__hlds_out_module__write_inst_4_p_0(hlds__hlds_out__hlds_out_module__Lang_9, hlds__hlds_out__hlds_out_module__Inst_15);
            }
#line 753 "hlds_out_module.m"
            {
#line 753 "hlds_out_module.m"
              mercury__io__nl_2_p_0();
#line 753 "hlds_out_module.m"
              return;
            }
#line 749 "hlds_out_module.m"
          }
#line 741 "hlds_out_module.m"
      }
#line 755 "hlds_out_module.m"
    else
#line 755 "hlds_out_module.m"
      {
#line 755 "hlds_out_module.m"
      }
#line 738 "hlds_out_module.m"
  }
#line 734 "hlds_out_module.m"
}

#line 711 "hlds_out_module.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_inst_name_maybe_inst_8_p_0(
#line 711 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__Lang_9,
#line 711 "hlds_out_module.m"
  MR_Integer hlds__hlds_out__hlds_out_module__Limit_10,
#line 711 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__InstName_11,
#line 711 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__MaybeInst_12,
#line 711 "hlds_out_module.m"
  MR_Integer hlds__hlds_out__hlds_out_module__STATE_VARIABLE_N_0_16,
#line 711 "hlds_out_module.m"
  MR_Integer * hlds__hlds_out__hlds_out_module__STATE_VARIABLE_N_17)
#line 711 "hlds_out_module.m"
{
#line 714 "hlds_out_module.m"
  {
#line 714 "hlds_out_module.m"
    MR_bool hlds__hlds_out__hlds_out_module__succeeded;

#line 715 "hlds_out_module.m"
    *hlds__hlds_out__hlds_out_module__STATE_VARIABLE_N_17 = (hlds__hlds_out__hlds_out_module__STATE_VARIABLE_N_0_16 + (MR_Integer) 1);
#line 716 "hlds_out_module.m"
    hlds__hlds_out__hlds_out_module__succeeded = (*hlds__hlds_out__hlds_out_module__STATE_VARIABLE_N_17 <= hlds__hlds_out__hlds_out_module__Limit_10);
#line 730 "hlds_out_module.m"
    if (hlds__hlds_out__hlds_out_module__succeeded)
#line 717 "hlds_out_module.m"
      {
#line 717 "hlds_out_module.m"
        MR_Word hlds__hlds_out__hlds_out_module__TypeCtorInfo_14_84;
#line 717 "hlds_out_module.m"
        MR_String hlds__hlds_out__hlds_out_module__V_45_45;
#line 717 "hlds_out_module.m"
        MR_Word hlds__hlds_out__hlds_out_module__V_51_51;
#line 717 "hlds_out_module.m"
        MR_Word hlds__hlds_out__hlds_out_module__InstNameTerm_80;
#line 717 "hlds_out_module.m"
        MR_Word hlds__hlds_out__hlds_out_module__VarSet_81;

#line 717 "hlds_out_module.m"
        {
#line 717 "hlds_out_module.m"
          mercury__io__nl_2_p_0();
        }
#line 718 "hlds_out_module.m"
        {
#line 718 "hlds_out_module.m"
          mercury__io__write_string_3_p_0((MR_String) "Entry ");
        }
#line 3642 "hlds.hlds_out.hlds_out_module.c"
        hlds__hlds_out__hlds_out_module__V_51_51 = (MR_Word) &hlds__hlds_out__hlds_out_module_scalar_common_6[0];
#line 718 "hlds_out_module.m"
        {
#line 718 "hlds_out_module.m"
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(hlds__hlds_out__hlds_out_module__V_51_51, *hlds__hlds_out__hlds_out_module__STATE_VARIABLE_N_17, &hlds__hlds_out__hlds_out_module__V_45_45);
        }
#line 718 "hlds_out_module.m"
        {
#line 718 "hlds_out_module.m"
          mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_module__V_45_45);
        }
#line 718 "hlds_out_module.m"
        {
#line 718 "hlds_out_module.m"
          mercury__io__write_string_3_p_0((MR_String) " key\n");
        }
#line 789 "hlds_out_module.m"
        {
#line 789 "hlds_out_module.m"
          hlds__hlds_out__hlds_out_module__InstNameTerm_80 = hlds__hlds_out__hlds_out_mode__inst_name_to_term_2_f_0(hlds__hlds_out__hlds_out_module__Lang_9, hlds__hlds_out__hlds_out_module__InstName_11);
        }
#line 3664 "hlds.hlds_out.hlds_out_module.c"
        hlds__hlds_out__hlds_out_module__TypeCtorInfo_14_84 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 790 "hlds_out_module.m"
        {
#line 790 "hlds_out_module.m"
          mercury__varset__init_1_p_0(hlds__hlds_out__hlds_out_module__TypeCtorInfo_14_84, &hlds__hlds_out__hlds_out_module__VarSet_81);
        }
#line 791 "hlds_out_module.m"
        {
#line 791 "hlds_out_module.m"
          parse_tree__mercury_to_mercury__mercury_output_term_5_p_0(hlds__hlds_out__hlds_out_module__TypeCtorInfo_14_84, hlds__hlds_out__hlds_out_module__VarSet_81, (MR_Integer) 0, hlds__hlds_out__hlds_out_module__InstNameTerm_80);
        }
#line 720 "hlds_out_module.m"
        {
#line 720 "hlds_out_module.m"
          mercury__io__nl_2_p_0();
        }
#line 724 "hlds_out_module.m"
        if ((hlds__hlds_out__hlds_out_module__MaybeInst_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 722 "hlds_out_module.m"
          {
#line 722 "hlds_out_module.m"
            MR_String hlds__hlds_out__hlds_out_module__V_56_56;

#line 723 "hlds_out_module.m"
            {
#line 723 "hlds_out_module.m"
              mercury__io__write_string_3_p_0((MR_String) "Entry ");
            }
#line 723 "hlds_out_module.m"
            {
#line 723 "hlds_out_module.m"
              mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(hlds__hlds_out__hlds_out_module__V_51_51, *hlds__hlds_out__hlds_out_module__STATE_VARIABLE_N_17, &hlds__hlds_out__hlds_out_module__V_56_56);
            }
#line 723 "hlds_out_module.m"
            {
#line 723 "hlds_out_module.m"
              mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_module__V_56_56);
            }
#line 723 "hlds_out_module.m"
            {
#line 723 "hlds_out_module.m"
              mercury__io__write_string_3_p_0((MR_String) " value UNKNOWN\n");
#line 723 "hlds_out_module.m"
              return;
            }
#line 722 "hlds_out_module.m"
          }
#line 724 "hlds_out_module.m"
        else
#line 725 "hlds_out_module.m"
          {
#line 725 "hlds_out_module.m"
            MR_Word hlds__hlds_out__hlds_out_module__TypeCtorInfo_14_94;
#line 725 "hlds_out_module.m"
            MR_Word hlds__hlds_out__hlds_out_module__Inst_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_module__MaybeInst_12, (MR_Integer) 0)));
#line 725 "hlds_out_module.m"
            MR_String hlds__hlds_out__hlds_out_module__V_67_67;
#line 725 "hlds_out_module.m"
            MR_Word hlds__hlds_out__hlds_out_module__InstTerm_90;
#line 725 "hlds_out_module.m"
            MR_Word hlds__hlds_out__hlds_out_module__VarSet_91;

#line 726 "hlds_out_module.m"
            {
#line 726 "hlds_out_module.m"
              mercury__io__write_string_3_p_0((MR_String) "Entry ");
            }
#line 726 "hlds_out_module.m"
            {
#line 726 "hlds_out_module.m"
              mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(hlds__hlds_out__hlds_out_module__V_51_51, *hlds__hlds_out__hlds_out_module__STATE_VARIABLE_N_17, &hlds__hlds_out__hlds_out_module__V_67_67);
            }
#line 726 "hlds_out_module.m"
            {
#line 726 "hlds_out_module.m"
              mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_module__V_67_67);
            }
#line 726 "hlds_out_module.m"
            {
#line 726 "hlds_out_module.m"
              mercury__io__write_string_3_p_0((MR_String) " value:\n");
            }
#line 796 "hlds_out_module.m"
            {
#line 796 "hlds_out_module.m"
              hlds__hlds_out__hlds_out_module__InstTerm_90 = hlds__hlds_out__hlds_out_mode__inst_to_term_2_f_0(hlds__hlds_out__hlds_out_module__Lang_9, hlds__hlds_out__hlds_out_module__Inst_15);
            }
#line 3752 "hlds.hlds_out.hlds_out_module.c"
            hlds__hlds_out__hlds_out_module__TypeCtorInfo_14_94 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 797 "hlds_out_module.m"
            {
#line 797 "hlds_out_module.m"
              mercury__varset__init_1_p_0(hlds__hlds_out__hlds_out_module__TypeCtorInfo_14_94, &hlds__hlds_out__hlds_out_module__VarSet_91);
            }
#line 798 "hlds_out_module.m"
            {
#line 798 "hlds_out_module.m"
              parse_tree__mercury_to_mercury__mercury_output_term_5_p_0(hlds__hlds_out__hlds_out_module__TypeCtorInfo_14_94, hlds__hlds_out__hlds_out_module__VarSet_91, (MR_Integer) 0, hlds__hlds_out__hlds_out_module__InstTerm_90);
            }
#line 728 "hlds_out_module.m"
            {
#line 728 "hlds_out_module.m"
              mercury__io__nl_2_p_0();
#line 728 "hlds_out_module.m"
              return;
            }
#line 725 "hlds_out_module.m"
          }
#line 717 "hlds_out_module.m"
      }
#line 730 "hlds_out_module.m"
    else
#line 730 "hlds_out_module.m"
      {
#line 730 "hlds_out_module.m"
      }
#line 714 "hlds_out_module.m"
  }
#line 711 "hlds_out_module.m"
}

#line 697 "hlds_out_module.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_inst_params_5_p_0(
#line 697 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__InstVar_6,
#line 697 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__InstVars_7,
#line 697 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__InstVarSet_8)
#line 697 "hlds_out_module.m"
{
#line 700 "hlds_out_module.m"
  while (MR_TRUE)
#line 700 "hlds_out_module.m"
    {
#line 700 "hlds_out_module.m"
      /* tailcall optimized into a loop */
#line 700 "hlds_out_module.m"
      {
#line 700 "hlds_out_module.m"
        MR_bool hlds__hlds_out__hlds_out_module__succeeded;
#line 700 "hlds_out_module.m"
        MR_String hlds__hlds_out__hlds_out_module__InstVarName_10;

#line 701 "hlds_out_module.m"
        {
#line 701 "hlds_out_module.m"
          mercury__varset__lookup_name_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0, hlds__hlds_out__hlds_out_module__InstVarSet_8, hlds__hlds_out__hlds_out_module__InstVar_6, &hlds__hlds_out__hlds_out_module__InstVarName_10);
        }
#line 702 "hlds_out_module.m"
        {
#line 702 "hlds_out_module.m"
          mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_module__InstVarName_10);
        }
#line 705 "hlds_out_module.m"
        if ((hlds__hlds_out__hlds_out_module__InstVars_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 704 "hlds_out_module.m"
          {
#line 704 "hlds_out_module.m"
          }
#line 705 "hlds_out_module.m"
        else
#line 706 "hlds_out_module.m"
          {
#line 706 "hlds_out_module.m"
            MR_Word hlds__hlds_out__hlds_out_module__HeadInstVar_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_module__InstVars_7, (MR_Integer) 0)));
#line 706 "hlds_out_module.m"
            MR_Word hlds__hlds_out__hlds_out_module__TailInstVars_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_module__InstVars_7, (MR_Integer) 1)));

#line 707 "hlds_out_module.m"
            {
#line 707 "hlds_out_module.m"
              mercury__io__write_string_3_p_0((MR_String) ", ");
            }
#line 708 "hlds_out_module.m"
            /* direct tailcall eliminated */
#line 708 "hlds_out_module.m"
            {
#line 708 "hlds_out_module.m"
              MR_Word hlds__hlds_out__hlds_out_module__InstVar__tmp_copy_6 = hlds__hlds_out__hlds_out_module__HeadInstVar_11;
#line 708 "hlds_out_module.m"
              MR_Word hlds__hlds_out__hlds_out_module__InstVars__tmp_copy_7 = hlds__hlds_out__hlds_out_module__TailInstVars_12;

#line 708 "hlds_out_module.m"
              hlds__hlds_out__hlds_out_module__InstVars_7 = hlds__hlds_out__hlds_out_module__InstVars__tmp_copy_7;
#line 708 "hlds_out_module.m"
              hlds__hlds_out__hlds_out_module__InstVar_6 = hlds__hlds_out__hlds_out_module__InstVar__tmp_copy_6;
#line 708 "hlds_out_module.m"
            }
#line 708 "hlds_out_module.m"
            continue;
#line 706 "hlds_out_module.m"
          }
#line 700 "hlds_out_module.m"
      }
#line 700 "hlds_out_module.m"
      break;
#line 700 "hlds_out_module.m"
    }
#line 697 "hlds_out_module.m"
}

#line 669 "hlds_out_module.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_user_inst_5_p_0(
#line 669 "hlds_out_module.m"
  MR_Integer hlds__hlds_out__hlds_out_module__Indent_6,
#line 669 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__InstId_7,
#line 669 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__InstDefn_8)
#line 669 "hlds_out_module.m"
{
#line 672 "hlds_out_module.m"
  {
#line 672 "hlds_out_module.m"
    MR_bool hlds__hlds_out__hlds_out_module__succeeded;
#line 672 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__InstName_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__InstId_7, (MR_Integer) 0)));
#line 672 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__InstVarSet_12;
#line 672 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__InstParams_13;
#line 672 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__InstBody_14;
#line 672 "hlds_out_module.m"
    MR_String hlds__hlds_out__hlds_out_module__V_27_27;
#line 672 "hlds_out_module.m"
    MR_String hlds__hlds_out__hlds_out_module__V_44_44;
#line 673 "hlds_out_module.m"
    MR_Integer hlds__hlds_out__hlds_out_module___InstArity_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__InstId_7, (MR_Integer) 1)));
#line 676 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module___Context_15;
#line 676 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module___Status_16;

#line 674 "hlds_out_module.m"
    {
#line 674 "hlds_out_module.m"
      hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_module__Indent_6);
    }
#line 675 "hlds_out_module.m"
    {
#line 675 "hlds_out_module.m"
      hlds__hlds_out__hlds_out_module__V_27_27 = mdbcomp__sym_name__sym_name_to_string_1_f_0(hlds__hlds_out__hlds_out_module__InstName_10);
    }
#line 675 "hlds_out_module.m"
    {
#line 675 "hlds_out_module.m"
      mercury__io__write_string_3_p_0((MR_String) "\n:- inst ");
    }
#line 675 "hlds_out_module.m"
    {
#line 675 "hlds_out_module.m"
      mercury__string__format__format_string_component_nowidth_noprec_3_p_0((MR_Word) &hlds__hlds_out__hlds_out_module_scalar_common_6[0], hlds__hlds_out__hlds_out_module__V_27_27, &hlds__hlds_out__hlds_out_module__V_44_44);
    }
#line 675 "hlds_out_module.m"
    {
#line 675 "hlds_out_module.m"
      mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_module__V_44_44);
    }
#line 676 "hlds_out_module.m"
    hlds__hlds_out__hlds_out_module__InstVarSet_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__InstDefn_8, (MR_Integer) 0)));
#line 676 "hlds_out_module.m"
    hlds__hlds_out__hlds_out_module__InstParams_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__InstDefn_8, (MR_Integer) 1)));
#line 676 "hlds_out_module.m"
    hlds__hlds_out__hlds_out_module__InstBody_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__InstDefn_8, (MR_Integer) 2)));
#line 676 "hlds_out_module.m"
    hlds__hlds_out__hlds_out_module___Context_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__InstDefn_8, (MR_Integer) 3)));
#line 676 "hlds_out_module.m"
    hlds__hlds_out__hlds_out_module___Status_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__InstDefn_8, (MR_Integer) 4)));
#line 680 "hlds_out_module.m"
    if ((hlds__hlds_out__hlds_out_module__InstParams_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 679 "hlds_out_module.m"
      {
#line 679 "hlds_out_module.m"
      }
#line 680 "hlds_out_module.m"
    else
#line 681 "hlds_out_module.m"
      {
#line 681 "hlds_out_module.m"
        MR_Word hlds__hlds_out__hlds_out_module__HeadInstParam_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_module__InstParams_13, (MR_Integer) 0)));
#line 681 "hlds_out_module.m"
        MR_Word hlds__hlds_out__hlds_out_module__TailInstParams_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_module__InstParams_13, (MR_Integer) 1)));

#line 682 "hlds_out_module.m"
        {
#line 682 "hlds_out_module.m"
          mercury__io__write_string_3_p_0((MR_String) "(");
        }
#line 683 "hlds_out_module.m"
        {
#line 683 "hlds_out_module.m"
          hlds__hlds_out__hlds_out_module__write_inst_params_5_p_0(hlds__hlds_out__hlds_out_module__HeadInstParam_17, hlds__hlds_out__hlds_out_module__TailInstParams_18, hlds__hlds_out__hlds_out_module__InstVarSet_12);
        }
#line 684 "hlds_out_module.m"
        {
#line 684 "hlds_out_module.m"
          mercury__io__write_string_3_p_0((MR_String) ")");
        }
#line 681 "hlds_out_module.m"
      }
#line 689 "hlds_out_module.m"
    if ((hlds__hlds_out__hlds_out_module__InstBody_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 687 "hlds_out_module.m"
      {
#line 688 "hlds_out_module.m"
        {
#line 688 "hlds_out_module.m"
          mercury__io__write_string_3_p_0((MR_String) ": is abstract\n");
#line 688 "hlds_out_module.m"
          return;
        }
#line 687 "hlds_out_module.m"
      }
#line 689 "hlds_out_module.m"
    else
#line 690 "hlds_out_module.m"
      {
#line 690 "hlds_out_module.m"
        MR_Word hlds__hlds_out__hlds_out_module__EqvInst_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_module__InstBody_14, (MR_Integer) 0)));

#line 691 "hlds_out_module.m"
        {
#line 691 "hlds_out_module.m"
          mercury__io__write_string_3_p_0((MR_String) ":\n");
        }
#line 692 "hlds_out_module.m"
        {
#line 692 "hlds_out_module.m"
          hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_module__Indent_6);
        }
#line 693 "hlds_out_module.m"
        {
#line 693 "hlds_out_module.m"
          parse_tree__mercury_to_mercury__mercury_output_inst_4_p_0(hlds__hlds_out__hlds_out_module__EqvInst_19, hlds__hlds_out__hlds_out_module__InstVarSet_12);
        }
#line 694 "hlds_out_module.m"
        {
#line 694 "hlds_out_module.m"
          mercury__io__write_string_3_p_0((MR_String) "\n");
#line 694 "hlds_out_module.m"
          return;
        }
#line 690 "hlds_out_module.m"
      }
#line 672 "hlds_out_module.m"
  }
#line 669 "hlds_out_module.m"
}

#line 656 "hlds_out_module.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_inst_table_6_p_0_4(
#line 656 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__closure_arg,
#line 656 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_1,
#line 656 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_2,
#line 656 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_3,
#line 656 "hlds_out_module.m"
  MR_Box * hlds__hlds_out__hlds_out_module__wrapper_arg_4,
#line 656 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_5,
#line 656 "hlds_out_module.m"
  MR_Box * hlds__hlds_out__hlds_out_module__wrapper_arg_6)
#line 656 "hlds_out_module.m"
{
#line 656 "hlds_out_module.m"
  {
#line 656 "hlds_out_module.m"
    MR_Box hlds__hlds_out__hlds_out_module__closure = hlds__hlds_out__hlds_out_module__closure_arg;
#line 656 "hlds_out_module.m"
    MR_Integer hlds__hlds_out__hlds_out_module__conv11_STATE_VARIABLE_N_17;

#line 656 "hlds_out_module.m"
    {
#line 656 "hlds_out_module.m"
      hlds__hlds_out__hlds_out_module__write_inst_name_maybe_inst_8_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__closure, (MR_Integer) 3))), ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__closure, (MR_Integer) 4))), ((MR_Word) hlds__hlds_out__hlds_out_module__wrapper_arg_1), ((MR_Word) hlds__hlds_out__hlds_out_module__wrapper_arg_2), ((MR_Integer) hlds__hlds_out__hlds_out_module__wrapper_arg_3), &hlds__hlds_out__hlds_out_module__conv11_STATE_VARIABLE_N_17);
    }
#line 656 "hlds_out_module.m"
    *hlds__hlds_out__hlds_out_module__wrapper_arg_4 = ((MR_Box) (hlds__hlds_out__hlds_out_module__conv11_STATE_VARIABLE_N_17));
#line 656 "hlds_out_module.m"
  }
#line 656 "hlds_out_module.m"
}

#line 638 "hlds_out_module.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_inst_table_6_p_0_3(
#line 638 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__closure_arg,
#line 638 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_1,
#line 638 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_2,
#line 638 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_3,
#line 638 "hlds_out_module.m"
  MR_Box * hlds__hlds_out__hlds_out_module__wrapper_arg_4,
#line 638 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_5,
#line 638 "hlds_out_module.m"
  MR_Box * hlds__hlds_out__hlds_out_module__wrapper_arg_6)
#line 638 "hlds_out_module.m"
{
#line 638 "hlds_out_module.m"
  {
#line 638 "hlds_out_module.m"
    MR_Box hlds__hlds_out__hlds_out_module__closure = hlds__hlds_out__hlds_out_module__closure_arg;
#line 638 "hlds_out_module.m"
    MR_Integer hlds__hlds_out__hlds_out_module__conv4_STATE_VARIABLE_N_18;

#line 638 "hlds_out_module.m"
    {
#line 638 "hlds_out_module.m"
      hlds__hlds_out__hlds_out_module__write_inst_pair_maybe_inst_8_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__closure, (MR_Integer) 3))), ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__closure, (MR_Integer) 4))), ((MR_Word) hlds__hlds_out__hlds_out_module__wrapper_arg_1), ((MR_Word) hlds__hlds_out__hlds_out_module__wrapper_arg_2), ((MR_Integer) hlds__hlds_out__hlds_out_module__wrapper_arg_3), &hlds__hlds_out__hlds_out_module__conv4_STATE_VARIABLE_N_18);
    }
#line 638 "hlds_out_module.m"
    *hlds__hlds_out__hlds_out_module__wrapper_arg_4 = ((MR_Box) (hlds__hlds_out__hlds_out_module__conv4_STATE_VARIABLE_N_18));
#line 638 "hlds_out_module.m"
  }
#line 638 "hlds_out_module.m"
}

#line 632 "hlds_out_module.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_inst_table_6_p_0_2(
#line 632 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__closure_arg,
#line 632 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_1,
#line 632 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_2,
#line 632 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_3,
#line 632 "hlds_out_module.m"
  MR_Box * hlds__hlds_out__hlds_out_module__wrapper_arg_4,
#line 632 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_5,
#line 632 "hlds_out_module.m"
  MR_Box * hlds__hlds_out__hlds_out_module__wrapper_arg_6)
#line 632 "hlds_out_module.m"
{
#line 632 "hlds_out_module.m"
  {
#line 632 "hlds_out_module.m"
    MR_Box hlds__hlds_out__hlds_out_module__closure = hlds__hlds_out__hlds_out_module__closure_arg;
#line 632 "hlds_out_module.m"
    MR_Integer hlds__hlds_out__hlds_out_module__conv1_STATE_VARIABLE_N_19;

#line 632 "hlds_out_module.m"
    {
#line 632 "hlds_out_module.m"
      hlds__hlds_out__hlds_out_module__write_inst_name_maybe_inst_det_8_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__closure, (MR_Integer) 3))), ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__closure, (MR_Integer) 4))), ((MR_Word) hlds__hlds_out__hlds_out_module__wrapper_arg_1), ((MR_Word) hlds__hlds_out__hlds_out_module__wrapper_arg_2), ((MR_Integer) hlds__hlds_out__hlds_out_module__wrapper_arg_3), &hlds__hlds_out__hlds_out_module__conv1_STATE_VARIABLE_N_19);
    }
#line 632 "hlds_out_module.m"
    *hlds__hlds_out__hlds_out_module__wrapper_arg_4 = ((MR_Box) (hlds__hlds_out__hlds_out_module__conv1_STATE_VARIABLE_N_19));
#line 632 "hlds_out_module.m"
  }
#line 632 "hlds_out_module.m"
}

#line 628 "hlds_out_module.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_inst_table_6_p_0_1(
#line 628 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__closure_arg,
#line 628 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_1,
#line 628 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_2,
#line 628 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_3,
#line 628 "hlds_out_module.m"
  MR_Box * hlds__hlds_out__hlds_out_module__wrapper_arg_4)
#line 628 "hlds_out_module.m"
{
#line 628 "hlds_out_module.m"
  {
#line 628 "hlds_out_module.m"
    MR_Box hlds__hlds_out__hlds_out_module__closure = hlds__hlds_out__hlds_out_module__closure_arg;

#line 628 "hlds_out_module.m"
    {
#line 628 "hlds_out_module.m"
      hlds__hlds_out__hlds_out_module__write_user_inst_5_p_0(((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__closure, (MR_Integer) 3))), ((MR_Word) hlds__hlds_out__hlds_out_module__wrapper_arg_1), ((MR_Word) hlds__hlds_out__hlds_out_module__wrapper_arg_2));
#line 628 "hlds_out_module.m"
      return;
    }
#line 628 "hlds_out_module.m"
  }
#line 628 "hlds_out_module.m"
}

#line 617 "hlds_out_module.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_inst_table_6_p_0(
#line 617 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__Lang_7,
#line 617 "hlds_out_module.m"
  MR_Integer hlds__hlds_out__hlds_out_module__Indent_8,
#line 617 "hlds_out_module.m"
  MR_Integer hlds__hlds_out__hlds_out_module__Limit_9,
#line 617 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__InstTable_10)
#line 617 "hlds_out_module.m"
{
#line 620 "hlds_out_module.m"
  {
#line 620 "hlds_out_module.m"
    MR_bool hlds__hlds_out__hlds_out_module__succeeded;
#line 620 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__TypeCtorInfo_103_103;
#line 620 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__TypeCtorInfo_110_110;
#line 620 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__TypeCtorInfo_111_111;
#line 620 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__TypeCtorInfo_112_112;
#line 620 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__TypeCtorInfo_120_120;
#line 620 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__UserInstTable_12;
#line 620 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__UserInstMap_13;
#line 620 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__UnifyInstMap_14;
#line 620 "hlds_out_module.m"
    MR_Integer hlds__hlds_out__hlds_out_module__NumUnifyInsts_15;
#line 620 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__MergeInstMap_16;
#line 620 "hlds_out_module.m"
    MR_Integer hlds__hlds_out__hlds_out_module__NumMergeInsts_17;
#line 620 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__GroundInstMap_18;
#line 620 "hlds_out_module.m"
    MR_Integer hlds__hlds_out__hlds_out_module__NumGroundInsts_19;
#line 620 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__AnyInstMap_20;
#line 620 "hlds_out_module.m"
    MR_Integer hlds__hlds_out__hlds_out_module__NumAnyInsts_21;
#line 620 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__SharedInstMap_22;
#line 620 "hlds_out_module.m"
    MR_Integer hlds__hlds_out__hlds_out_module__NumSharedInsts_23;
#line 620 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__MostlyUniqInstMap_24;
#line 620 "hlds_out_module.m"
    MR_Integer hlds__hlds_out__hlds_out_module__NumMostlyUniqInsts_25;
#line 620 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__V_34_34;
#line 620 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__V_38_38;
#line 620 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__V_48_48;
#line 620 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__V_78_78;
#line 620 "hlds_out_module.m"
    MR_String hlds__hlds_out__hlds_out_module__V_148_148;
#line 620 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__V_154_154;
#line 620 "hlds_out_module.m"
    MR_String hlds__hlds_out__hlds_out_module__V_159_159;
#line 620 "hlds_out_module.m"
    MR_String hlds__hlds_out__hlds_out_module__V_170_170;
#line 620 "hlds_out_module.m"
    MR_String hlds__hlds_out__hlds_out_module__V_181_181;
#line 620 "hlds_out_module.m"
    MR_String hlds__hlds_out__hlds_out_module__V_192_192;
#line 620 "hlds_out_module.m"
    MR_String hlds__hlds_out__hlds_out_module__V_203_203;
#line 628 "hlds_out_module.m"
    MR_Box hlds__hlds_out__hlds_out_module__conv0_STATE_VARIABLE_IO_35_35;
#line 632 "hlds_out_module.m"
    MR_Box hlds__hlds_out__hlds_out_module__conv3_NumUnifyInsts_15;
#line 632 "hlds_out_module.m"
    MR_Box hlds__hlds_out__hlds_out_module__conv2_STATE_VARIABLE_IO_40_40;
#line 638 "hlds_out_module.m"
    MR_Box hlds__hlds_out__hlds_out_module__conv6_NumMergeInsts_17;
#line 638 "hlds_out_module.m"
    MR_Box hlds__hlds_out__hlds_out_module__conv5_STATE_VARIABLE_IO_50_50;
#line 644 "hlds_out_module.m"
    MR_Box hlds__hlds_out__hlds_out_module__conv8_NumGroundInsts_19;
#line 644 "hlds_out_module.m"
    MR_Box hlds__hlds_out__hlds_out_module__conv7_STATE_VARIABLE_IO_60_60;
#line 650 "hlds_out_module.m"
    MR_Box hlds__hlds_out__hlds_out_module__conv10_NumAnyInsts_21;
#line 650 "hlds_out_module.m"
    MR_Box hlds__hlds_out__hlds_out_module__conv9_STATE_VARIABLE_IO_70_70;
#line 656 "hlds_out_module.m"
    MR_Box hlds__hlds_out__hlds_out_module__conv13_NumSharedInsts_23;
#line 656 "hlds_out_module.m"
    MR_Box hlds__hlds_out__hlds_out_module__conv12_STATE_VARIABLE_IO_80_80;
#line 662 "hlds_out_module.m"
    MR_Box hlds__hlds_out__hlds_out_module__conv15_NumMostlyUniqInsts_25;
#line 662 "hlds_out_module.m"
    MR_Box hlds__hlds_out__hlds_out_module__conv14_STATE_VARIABLE_IO_90_90;

#line 621 "hlds_out_module.m"
    {
#line 621 "hlds_out_module.m"
      hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_module__Indent_8);
    }
#line 622 "hlds_out_module.m"
    {
#line 622 "hlds_out_module.m"
      mercury__io__write_string_3_p_0((MR_String) "%-------- Insts --------\n");
    }
#line 624 "hlds_out_module.m"
    {
#line 624 "hlds_out_module.m"
      hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_module__Indent_8);
    }
#line 625 "hlds_out_module.m"
    {
#line 625 "hlds_out_module.m"
      mercury__io__write_string_3_p_0((MR_String) "%-------- User defined insts --------\n");
    }
#line 626 "hlds_out_module.m"
    {
#line 626 "hlds_out_module.m"
      hlds__hlds_data__inst_table_get_user_insts_2_p_0(hlds__hlds_out__hlds_out_module__InstTable_10, &hlds__hlds_out__hlds_out_module__UserInstTable_12);
    }
#line 627 "hlds_out_module.m"
    {
#line 627 "hlds_out_module.m"
      hlds__hlds_data__user_inst_table_get_inst_defns_2_p_0(hlds__hlds_out__hlds_out_module__UserInstTable_12, &hlds__hlds_out__hlds_out_module__UserInstMap_13);
    }
#line 628 "hlds_out_module.m"
    {
#line 628 "hlds_out_module.m"
      hlds__hlds_out__hlds_out_module__V_34_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 628 "hlds_out_module.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__V_34_34, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_module_scalar_common_4[5]));
#line 628 "hlds_out_module.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__V_34_34, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_module__write_inst_table_6_p_0_1));
#line 628 "hlds_out_module.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__V_34_34, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 628 "hlds_out_module.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__V_34_34, 3) = ((MR_Box) (hlds__hlds_out__hlds_out_module__Indent_8));
#line 628 "hlds_out_module.m"
    }
#line 4312 "hlds.hlds_out.hlds_out_module.c"
    hlds__hlds_out__hlds_out_module__TypeCtorInfo_103_103 = (MR_Word) &mercury__io__io__type_ctor_info_state_0;
#line 628 "hlds_out_module.m"
    {
#line 628 "hlds_out_module.m"
      mercury__map__foldl_4_p_2((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_id_0, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_inst_defn_0, hlds__hlds_out__hlds_out_module__TypeCtorInfo_103_103, hlds__hlds_out__hlds_out_module__V_34_34, hlds__hlds_out__hlds_out_module__UserInstMap_13, ((MR_Box) ((MR_Integer) 0)), &hlds__hlds_out__hlds_out_module__conv0_STATE_VARIABLE_IO_35_35);
    }
#line 630 "hlds_out_module.m"
    {
#line 630 "hlds_out_module.m"
      mercury__io__write_string_3_p_0((MR_String) "%-------- Unify insts --------\n");
    }
#line 631 "hlds_out_module.m"
    {
#line 631 "hlds_out_module.m"
      hlds__hlds_data__inst_table_get_unify_insts_2_p_0(hlds__hlds_out__hlds_out_module__InstTable_10, &hlds__hlds_out__hlds_out_module__UnifyInstMap_14);
    }
#line 632 "hlds_out_module.m"
    {
#line 632 "hlds_out_module.m"
      hlds__hlds_out__hlds_out_module__V_38_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 632 "hlds_out_module.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__V_38_38, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_module_scalar_common_5[0]));
#line 632 "hlds_out_module.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__V_38_38, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_module__write_inst_table_6_p_0_2));
#line 632 "hlds_out_module.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__V_38_38, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 632 "hlds_out_module.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__V_38_38, 3) = ((MR_Box) (hlds__hlds_out__hlds_out_module__Lang_7));
#line 632 "hlds_out_module.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__V_38_38, 4) = ((MR_Box) (hlds__hlds_out__hlds_out_module__Limit_9));
#line 632 "hlds_out_module.m"
    }
#line 4345 "hlds.hlds_out.hlds_out_module.c"
    hlds__hlds_out__hlds_out_module__TypeCtorInfo_110_110 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0;
#line 4347 "hlds.hlds_out.hlds_out_module.c"
    hlds__hlds_out__hlds_out_module__TypeCtorInfo_111_111 = (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_maybe_inst_det_0;
#line 4349 "hlds.hlds_out.hlds_out_module.c"
    hlds__hlds_out__hlds_out_module__TypeCtorInfo_112_112 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 632 "hlds_out_module.m"
    {
#line 632 "hlds_out_module.m"
      mercury__map__foldl2_6_p_2(hlds__hlds_out__hlds_out_module__TypeCtorInfo_110_110, hlds__hlds_out__hlds_out_module__TypeCtorInfo_111_111, hlds__hlds_out__hlds_out_module__TypeCtorInfo_112_112, hlds__hlds_out__hlds_out_module__TypeCtorInfo_103_103, hlds__hlds_out__hlds_out_module__V_38_38, hlds__hlds_out__hlds_out_module__UnifyInstMap_14, ((MR_Box) ((MR_Integer) 0)), &hlds__hlds_out__hlds_out_module__conv3_NumUnifyInsts_15, ((MR_Box) ((MR_Integer) 0)), &hlds__hlds_out__hlds_out_module__conv2_STATE_VARIABLE_IO_40_40);
    }
#line 632 "hlds_out_module.m"
    hlds__hlds_out__hlds_out_module__NumUnifyInsts_15 = ((MR_Integer) hlds__hlds_out__hlds_out_module__conv3_NumUnifyInsts_15);
#line 634 "hlds_out_module.m"
    {
#line 634 "hlds_out_module.m"
      mercury__io__write_string_3_p_0((MR_String) "Total number of unify insts: ");
    }
#line 4363 "hlds.hlds_out.hlds_out_module.c"
    hlds__hlds_out__hlds_out_module__V_154_154 = (MR_Word) &hlds__hlds_out__hlds_out_module_scalar_common_6[0];
#line 634 "hlds_out_module.m"
    {
#line 634 "hlds_out_module.m"
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(hlds__hlds_out__hlds_out_module__V_154_154, hlds__hlds_out__hlds_out_module__NumUnifyInsts_15, &hlds__hlds_out__hlds_out_module__V_148_148);
    }
#line 634 "hlds_out_module.m"
    {
#line 634 "hlds_out_module.m"
      mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_module__V_148_148);
    }
#line 634 "hlds_out_module.m"
    {
#line 634 "hlds_out_module.m"
      mercury__io__write_string_3_p_0((MR_String) "\n");
    }
#line 636 "hlds_out_module.m"
    {
#line 636 "hlds_out_module.m"
      mercury__io__write_string_3_p_0((MR_String) "%-------- Merge insts --------\n");
    }
#line 637 "hlds_out_module.m"
    {
#line 637 "hlds_out_module.m"
      hlds__hlds_data__inst_table_get_merge_insts_2_p_0(hlds__hlds_out__hlds_out_module__InstTable_10, &hlds__hlds_out__hlds_out_module__MergeInstMap_16);
    }
#line 638 "hlds_out_module.m"
    {
#line 638 "hlds_out_module.m"
      hlds__hlds_out__hlds_out_module__V_48_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 638 "hlds_out_module.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__V_48_48, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_module_scalar_common_5[1]));
#line 638 "hlds_out_module.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__V_48_48, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_module__write_inst_table_6_p_0_3));
#line 638 "hlds_out_module.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__V_48_48, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 638 "hlds_out_module.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__V_48_48, 3) = ((MR_Box) (hlds__hlds_out__hlds_out_module__Lang_7));
#line 638 "hlds_out_module.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__V_48_48, 4) = ((MR_Box) (hlds__hlds_out__hlds_out_module__Limit_9));
#line 638 "hlds_out_module.m"
    }
#line 4406 "hlds.hlds_out.hlds_out_module.c"
    hlds__hlds_out__hlds_out_module__TypeCtorInfo_120_120 = (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_maybe_inst_0;
#line 638 "hlds_out_module.m"
    {
#line 638 "hlds_out_module.m"
      mercury__map__foldl2_6_p_2((MR_Word) &hlds__hlds_out__hlds_out_module_scalar_common_2[2], hlds__hlds_out__hlds_out_module__TypeCtorInfo_120_120, hlds__hlds_out__hlds_out_module__TypeCtorInfo_112_112, hlds__hlds_out__hlds_out_module__TypeCtorInfo_103_103, hlds__hlds_out__hlds_out_module__V_48_48, hlds__hlds_out__hlds_out_module__MergeInstMap_16, ((MR_Box) ((MR_Integer) 0)), &hlds__hlds_out__hlds_out_module__conv6_NumMergeInsts_17, ((MR_Box) ((MR_Integer) 0)), &hlds__hlds_out__hlds_out_module__conv5_STATE_VARIABLE_IO_50_50);
    }
#line 638 "hlds_out_module.m"
    hlds__hlds_out__hlds_out_module__NumMergeInsts_17 = ((MR_Integer) hlds__hlds_out__hlds_out_module__conv6_NumMergeInsts_17);
#line 640 "hlds_out_module.m"
    {
#line 640 "hlds_out_module.m"
      mercury__io__write_string_3_p_0((MR_String) "Total number of merge insts: ");
    }
#line 640 "hlds_out_module.m"
    {
#line 640 "hlds_out_module.m"
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(hlds__hlds_out__hlds_out_module__V_154_154, hlds__hlds_out__hlds_out_module__NumMergeInsts_17, &hlds__hlds_out__hlds_out_module__V_159_159);
    }
#line 640 "hlds_out_module.m"
    {
#line 640 "hlds_out_module.m"
      mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_module__V_159_159);
    }
#line 640 "hlds_out_module.m"
    {
#line 640 "hlds_out_module.m"
      mercury__io__write_string_3_p_0((MR_String) "\n");
    }
#line 642 "hlds_out_module.m"
    {
#line 642 "hlds_out_module.m"
      mercury__io__write_string_3_p_0((MR_String) "%-------- Ground insts --------\n");
    }
#line 643 "hlds_out_module.m"
    {
#line 643 "hlds_out_module.m"
      hlds__hlds_data__inst_table_get_unify_insts_2_p_0(hlds__hlds_out__hlds_out_module__InstTable_10, &hlds__hlds_out__hlds_out_module__GroundInstMap_18);
    }
#line 644 "hlds_out_module.m"
    {
#line 644 "hlds_out_module.m"
      mercury__map__foldl2_6_p_2(hlds__hlds_out__hlds_out_module__TypeCtorInfo_110_110, hlds__hlds_out__hlds_out_module__TypeCtorInfo_111_111, hlds__hlds_out__hlds_out_module__TypeCtorInfo_112_112, hlds__hlds_out__hlds_out_module__TypeCtorInfo_103_103, hlds__hlds_out__hlds_out_module__V_38_38, hlds__hlds_out__hlds_out_module__GroundInstMap_18, ((MR_Box) ((MR_Integer) 0)), &hlds__hlds_out__hlds_out_module__conv8_NumGroundInsts_19, ((MR_Box) ((MR_Integer) 0)), &hlds__hlds_out__hlds_out_module__conv7_STATE_VARIABLE_IO_60_60);
    }
#line 644 "hlds_out_module.m"
    hlds__hlds_out__hlds_out_module__NumGroundInsts_19 = ((MR_Integer) hlds__hlds_out__hlds_out_module__conv8_NumGroundInsts_19);
#line 646 "hlds_out_module.m"
    {
#line 646 "hlds_out_module.m"
      mercury__io__write_string_3_p_0((MR_String) "Total number of ground insts: ");
    }
#line 646 "hlds_out_module.m"
    {
#line 646 "hlds_out_module.m"
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(hlds__hlds_out__hlds_out_module__V_154_154, hlds__hlds_out__hlds_out_module__NumGroundInsts_19, &hlds__hlds_out__hlds_out_module__V_170_170);
    }
#line 646 "hlds_out_module.m"
    {
#line 646 "hlds_out_module.m"
      mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_module__V_170_170);
    }
#line 646 "hlds_out_module.m"
    {
#line 646 "hlds_out_module.m"
      mercury__io__write_string_3_p_0((MR_String) "\n");
    }
#line 648 "hlds_out_module.m"
    {
#line 648 "hlds_out_module.m"
      mercury__io__write_string_3_p_0((MR_String) "%-------- Any insts --------\n");
    }
#line 649 "hlds_out_module.m"
    {
#line 649 "hlds_out_module.m"
      hlds__hlds_data__inst_table_get_any_insts_2_p_0(hlds__hlds_out__hlds_out_module__InstTable_10, &hlds__hlds_out__hlds_out_module__AnyInstMap_20);
    }
#line 650 "hlds_out_module.m"
    {
#line 650 "hlds_out_module.m"
      mercury__map__foldl2_6_p_2(hlds__hlds_out__hlds_out_module__TypeCtorInfo_110_110, hlds__hlds_out__hlds_out_module__TypeCtorInfo_111_111, hlds__hlds_out__hlds_out_module__TypeCtorInfo_112_112, hlds__hlds_out__hlds_out_module__TypeCtorInfo_103_103, hlds__hlds_out__hlds_out_module__V_38_38, hlds__hlds_out__hlds_out_module__AnyInstMap_20, ((MR_Box) ((MR_Integer) 0)), &hlds__hlds_out__hlds_out_module__conv10_NumAnyInsts_21, ((MR_Box) ((MR_Integer) 0)), &hlds__hlds_out__hlds_out_module__conv9_STATE_VARIABLE_IO_70_70);
    }
#line 650 "hlds_out_module.m"
    hlds__hlds_out__hlds_out_module__NumAnyInsts_21 = ((MR_Integer) hlds__hlds_out__hlds_out_module__conv10_NumAnyInsts_21);
#line 652 "hlds_out_module.m"
    {
#line 652 "hlds_out_module.m"
      mercury__io__write_string_3_p_0((MR_String) "Total number of any insts: ");
    }
#line 652 "hlds_out_module.m"
    {
#line 652 "hlds_out_module.m"
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(hlds__hlds_out__hlds_out_module__V_154_154, hlds__hlds_out__hlds_out_module__NumAnyInsts_21, &hlds__hlds_out__hlds_out_module__V_181_181);
    }
#line 652 "hlds_out_module.m"
    {
#line 652 "hlds_out_module.m"
      mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_module__V_181_181);
    }
#line 652 "hlds_out_module.m"
    {
#line 652 "hlds_out_module.m"
      mercury__io__write_string_3_p_0((MR_String) "\n");
    }
#line 654 "hlds_out_module.m"
    {
#line 654 "hlds_out_module.m"
      mercury__io__write_string_3_p_0((MR_String) "%-------- Shared insts --------\n");
    }
#line 655 "hlds_out_module.m"
    {
#line 655 "hlds_out_module.m"
      hlds__hlds_data__inst_table_get_shared_insts_2_p_0(hlds__hlds_out__hlds_out_module__InstTable_10, &hlds__hlds_out__hlds_out_module__SharedInstMap_22);
    }
#line 656 "hlds_out_module.m"
    {
#line 656 "hlds_out_module.m"
      hlds__hlds_out__hlds_out_module__V_78_78 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 656 "hlds_out_module.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__V_78_78, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_module_scalar_common_5[2]));
#line 656 "hlds_out_module.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__V_78_78, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_module__write_inst_table_6_p_0_4));
#line 656 "hlds_out_module.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__V_78_78, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 656 "hlds_out_module.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__V_78_78, 3) = ((MR_Box) (hlds__hlds_out__hlds_out_module__Lang_7));
#line 656 "hlds_out_module.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__V_78_78, 4) = ((MR_Box) (hlds__hlds_out__hlds_out_module__Limit_9));
#line 656 "hlds_out_module.m"
    }
#line 656 "hlds_out_module.m"
    {
#line 656 "hlds_out_module.m"
      mercury__map__foldl2_6_p_2(hlds__hlds_out__hlds_out_module__TypeCtorInfo_110_110, hlds__hlds_out__hlds_out_module__TypeCtorInfo_120_120, hlds__hlds_out__hlds_out_module__TypeCtorInfo_112_112, hlds__hlds_out__hlds_out_module__TypeCtorInfo_103_103, hlds__hlds_out__hlds_out_module__V_78_78, hlds__hlds_out__hlds_out_module__SharedInstMap_22, ((MR_Box) ((MR_Integer) 0)), &hlds__hlds_out__hlds_out_module__conv13_NumSharedInsts_23, ((MR_Box) ((MR_Integer) 0)), &hlds__hlds_out__hlds_out_module__conv12_STATE_VARIABLE_IO_80_80);
    }
#line 656 "hlds_out_module.m"
    hlds__hlds_out__hlds_out_module__NumSharedInsts_23 = ((MR_Integer) hlds__hlds_out__hlds_out_module__conv13_NumSharedInsts_23);
#line 658 "hlds_out_module.m"
    {
#line 658 "hlds_out_module.m"
      mercury__io__write_string_3_p_0((MR_String) "Total number of shared insts: ");
    }
#line 658 "hlds_out_module.m"
    {
#line 658 "hlds_out_module.m"
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(hlds__hlds_out__hlds_out_module__V_154_154, hlds__hlds_out__hlds_out_module__NumSharedInsts_23, &hlds__hlds_out__hlds_out_module__V_192_192);
    }
#line 658 "hlds_out_module.m"
    {
#line 658 "hlds_out_module.m"
      mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_module__V_192_192);
    }
#line 658 "hlds_out_module.m"
    {
#line 658 "hlds_out_module.m"
      mercury__io__write_string_3_p_0((MR_String) "\n");
    }
#line 660 "hlds_out_module.m"
    {
#line 660 "hlds_out_module.m"
      mercury__io__write_string_3_p_0((MR_String) "%-------- MostlyUniq insts --------\n");
    }
#line 661 "hlds_out_module.m"
    {
#line 661 "hlds_out_module.m"
      hlds__hlds_data__inst_table_get_mostly_uniq_insts_2_p_0(hlds__hlds_out__hlds_out_module__InstTable_10, &hlds__hlds_out__hlds_out_module__MostlyUniqInstMap_24);
    }
#line 662 "hlds_out_module.m"
    {
#line 662 "hlds_out_module.m"
      mercury__map__foldl2_6_p_2(hlds__hlds_out__hlds_out_module__TypeCtorInfo_110_110, hlds__hlds_out__hlds_out_module__TypeCtorInfo_120_120, hlds__hlds_out__hlds_out_module__TypeCtorInfo_112_112, hlds__hlds_out__hlds_out_module__TypeCtorInfo_103_103, hlds__hlds_out__hlds_out_module__V_78_78, hlds__hlds_out__hlds_out_module__MostlyUniqInstMap_24, ((MR_Box) ((MR_Integer) 0)), &hlds__hlds_out__hlds_out_module__conv15_NumMostlyUniqInsts_25, ((MR_Box) ((MR_Integer) 0)), &hlds__hlds_out__hlds_out_module__conv14_STATE_VARIABLE_IO_90_90);
    }
#line 662 "hlds_out_module.m"
    hlds__hlds_out__hlds_out_module__NumMostlyUniqInsts_25 = ((MR_Integer) hlds__hlds_out__hlds_out_module__conv15_NumMostlyUniqInsts_25);
#line 664 "hlds_out_module.m"
    {
#line 664 "hlds_out_module.m"
      mercury__io__write_string_3_p_0((MR_String) "Total number of mostly uniq insts: ");
    }
#line 665 "hlds_out_module.m"
    {
#line 665 "hlds_out_module.m"
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(hlds__hlds_out__hlds_out_module__V_154_154, hlds__hlds_out__hlds_out_module__NumMostlyUniqInsts_25, &hlds__hlds_out__hlds_out_module__V_203_203);
    }
#line 665 "hlds_out_module.m"
    {
#line 665 "hlds_out_module.m"
      mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_module__V_203_203);
    }
#line 664 "hlds_out_module.m"
    {
#line 664 "hlds_out_module.m"
      mercury__io__write_string_3_p_0((MR_String) "\n");
    }
#line 667 "hlds_out_module.m"
    {
#line 667 "hlds_out_module.m"
      mercury__io__nl_2_p_0();
#line 667 "hlds_out_module.m"
      return;
    }
#line 620 "hlds_out_module.m"
  }
#line 617 "hlds_out_module.m"
}

#line 586 "hlds_out_module.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_instance_defn_5_p_0_2(
#line 586 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__closure_arg,
#line 586 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_1,
#line 586 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_2,
#line 586 "hlds_out_module.m"
  MR_Box * hlds__hlds_out__hlds_out_module__wrapper_arg_3)
#line 586 "hlds_out_module.m"
{
#line 586 "hlds_out_module.m"
  {
#line 586 "hlds_out_module.m"
    MR_Box hlds__hlds_out__hlds_out_module__closure = hlds__hlds_out__hlds_out_module__closure_arg;

#line 586 "hlds_out_module.m"
    {
#line 586 "hlds_out_module.m"
      parse_tree__mercury_to_mercury__mercury_output_constraint_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__closure, (MR_Integer) 4))), ((MR_Word) hlds__hlds_out__hlds_out_module__wrapper_arg_1));
#line 586 "hlds_out_module.m"
      return;
    }
#line 586 "hlds_out_module.m"
  }
#line 586 "hlds_out_module.m"
}

#line 571 "hlds_out_module.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_instance_defn_5_p_0_1(
#line 571 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__closure_arg,
#line 571 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_1,
#line 571 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_2,
#line 571 "hlds_out_module.m"
  MR_Box * hlds__hlds_out__hlds_out_module__wrapper_arg_3)
#line 571 "hlds_out_module.m"
{
#line 571 "hlds_out_module.m"
  {
#line 571 "hlds_out_module.m"
    MR_Box hlds__hlds_out__hlds_out_module__closure = hlds__hlds_out__hlds_out_module__closure_arg;

#line 571 "hlds_out_module.m"
    {
#line 571 "hlds_out_module.m"
      parse_tree__mercury_to_mercury__mercury_output_type_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__closure, (MR_Integer) 4))), ((MR_Word) hlds__hlds_out__hlds_out_module__wrapper_arg_1));
#line 571 "hlds_out_module.m"
      return;
    }
#line 571 "hlds_out_module.m"
  }
#line 571 "hlds_out_module.m"
}

#line 542 "hlds_out_module.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_instance_defn_5_p_0(
#line 542 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__Info_6,
#line 542 "hlds_out_module.m"
  MR_Integer hlds__hlds_out__hlds_out_module__Indent_7,
#line 542 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__InstanceDefn_8)
#line 542 "hlds_out_module.m"
{
#line 545 "hlds_out_module.m"
  {
#line 545 "hlds_out_module.m"
    MR_bool hlds__hlds_out__hlds_out_module__succeeded;
#line 545 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__TypeCtorInfo_84_84;
#line 545 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__Context_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__InstanceDefn_8, (MR_Integer) 2)));
#line 545 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__Constraints_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__InstanceDefn_8, (MR_Integer) 3)));
#line 545 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__Types_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__InstanceDefn_8, (MR_Integer) 4)));
#line 545 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__OriginalTypes_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__InstanceDefn_8, (MR_Integer) 5)));
#line 545 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__Body_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__InstanceDefn_8, (MR_Integer) 6)));
#line 545 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__MaybePredProcIds_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__InstanceDefn_8, (MR_Integer) 7)));
#line 545 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__VarSet_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__InstanceDefn_8, (MR_Integer) 8)));
#line 545 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__ProofMap_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__InstanceDefn_8, (MR_Integer) 9)));
#line 545 "hlds_out_module.m"
    MR_String hlds__hlds_out__hlds_out_module__FileName_20;
#line 545 "hlds_out_module.m"
    MR_Integer hlds__hlds_out__hlds_out_module__LineNumber_21;
#line 545 "hlds_out_module.m"
    MR_String hlds__hlds_out__hlds_out_module__DumpOptions_22;
#line 545 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__AppendVarNums_23;
#line 545 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__PrintTerm_24;
#line 545 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__V_60_60;
#line 546 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module___InstanceModule_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__InstanceDefn_8, (MR_Integer) 0)));
#line 546 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module___Status_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__InstanceDefn_8, (MR_Integer) 1)));
#line 563 "hlds_out_module.m"
    MR_String hlds__hlds_out__hlds_out_module__V_80_80;
#line 563 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__V_81_81;
#line 563 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__V_82_82;
#line 563 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__V_83_83;

#line 550 "hlds_out_module.m"
    {
#line 550 "hlds_out_module.m"
      mercury__term__context_file_2_p_0(hlds__hlds_out__hlds_out_module__Context_12, &hlds__hlds_out__hlds_out_module__FileName_20);
    }
#line 551 "hlds_out_module.m"
    {
#line 551 "hlds_out_module.m"
      mercury__term__context_line_2_p_0(hlds__hlds_out__hlds_out_module__Context_12, &hlds__hlds_out__hlds_out_module__LineNumber_21);
    }
#line 552 "hlds_out_module.m"
    hlds__hlds_out__hlds_out_module__succeeded = (strcmp(hlds__hlds_out__hlds_out_module__FileName_20, (MR_String) "") == 0);
#line 552 "hlds_out_module.m"
    hlds__hlds_out__hlds_out_module__succeeded = !(hlds__hlds_out__hlds_out_module__succeeded);
#line 559 "hlds_out_module.m"
    if (hlds__hlds_out__hlds_out_module__succeeded)
#line 553 "hlds_out_module.m"
      {
#line 553 "hlds_out_module.m"
        {
#line 553 "hlds_out_module.m"
          hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_module__Indent_7);
        }
#line 554 "hlds_out_module.m"
        {
#line 554 "hlds_out_module.m"
          mercury__io__write_string_3_p_0((MR_String) "% context: file \140");
        }
#line 555 "hlds_out_module.m"
        {
#line 555 "hlds_out_module.m"
          mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_module__FileName_20);
        }
#line 556 "hlds_out_module.m"
        {
#line 556 "hlds_out_module.m"
          mercury__io__write_string_3_p_0((MR_String) "\', line ");
        }
#line 557 "hlds_out_module.m"
        {
#line 557 "hlds_out_module.m"
          mercury__io__write_int_3_p_0(hlds__hlds_out__hlds_out_module__LineNumber_21);
        }
#line 558 "hlds_out_module.m"
        {
#line 558 "hlds_out_module.m"
          mercury__io__write_string_3_p_0((MR_String) "\n");
        }
#line 553 "hlds_out_module.m"
      }
#line 559 "hlds_out_module.m"
    else
#line 559 "hlds_out_module.m"
      {
#line 559 "hlds_out_module.m"
      }
#line 563 "hlds_out_module.m"
    hlds__hlds_out__hlds_out_module__DumpOptions_22 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__Info_6, (MR_Integer) 0)));
#line 563 "hlds_out_module.m"
    hlds__hlds_out__hlds_out_module__V_80_80 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__Info_6, (MR_Integer) 1)));
#line 563 "hlds_out_module.m"
    hlds__hlds_out__hlds_out_module__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__Info_6, (MR_Integer) 2)));
#line 563 "hlds_out_module.m"
    hlds__hlds_out__hlds_out_module__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__Info_6, (MR_Integer) 3)));
#line 563 "hlds_out_module.m"
    hlds__hlds_out__hlds_out_module__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__Info_6, (MR_Integer) 4)));
#line 564 "hlds_out_module.m"
    {
#line 564 "hlds_out_module.m"
      hlds__hlds_out__hlds_out_module__succeeded = mercury__string__contains_char_2_p_0(hlds__hlds_out__hlds_out_module__DumpOptions_22, (MR_Char) 118);
    }
#line 566 "hlds_out_module.m"
    if (hlds__hlds_out__hlds_out_module__succeeded)
#line 565 "hlds_out_module.m"
      hlds__hlds_out__hlds_out_module__AppendVarNums_23 = (MR_Integer) 1;
#line 566 "hlds_out_module.m"
    else
#line 567 "hlds_out_module.m"
      hlds__hlds_out__hlds_out_module__AppendVarNums_23 = (MR_Integer) 0;
#line 571 "hlds_out_module.m"
    {
#line 571 "hlds_out_module.m"
      hlds__hlds_out__hlds_out_module__PrintTerm_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 571 "hlds_out_module.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__PrintTerm_24, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_module_scalar_common_4[4]));
#line 571 "hlds_out_module.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__PrintTerm_24, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_module__write_instance_defn_5_p_0_1));
#line 571 "hlds_out_module.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__PrintTerm_24, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 571 "hlds_out_module.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__PrintTerm_24, 3) = ((MR_Box) (hlds__hlds_out__hlds_out_module__VarSet_18));
#line 571 "hlds_out_module.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__PrintTerm_24, 4) = ((MR_Box) (hlds__hlds_out__hlds_out_module__AppendVarNums_23));
#line 571 "hlds_out_module.m"
    }
#line 574 "hlds_out_module.m"
    {
#line 574 "hlds_out_module.m"
      hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_module__Indent_7);
    }
#line 575 "hlds_out_module.m"
    {
#line 575 "hlds_out_module.m"
      mercury__io__write_string_3_p_0((MR_String) "% Types: ");
    }
#line 4834 "hlds.hlds_out.hlds_out_module.c"
    hlds__hlds_out__hlds_out_module__TypeCtorInfo_84_84 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
#line 576 "hlds_out_module.m"
    {
#line 576 "hlds_out_module.m"
      mercury__io__write_list_5_p_0(hlds__hlds_out__hlds_out_module__TypeCtorInfo_84_84, hlds__hlds_out__hlds_out_module__Types_14, (MR_String) ", ", hlds__hlds_out__hlds_out_module__PrintTerm_24);
    }
#line 577 "hlds_out_module.m"
    {
#line 577 "hlds_out_module.m"
      mercury__io__nl_2_p_0();
    }
#line 578 "hlds_out_module.m"
    {
#line 578 "hlds_out_module.m"
      hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_module__Indent_7);
    }
#line 579 "hlds_out_module.m"
    {
#line 579 "hlds_out_module.m"
      mercury__io__write_string_3_p_0((MR_String) "% Original types: ");
    }
#line 580 "hlds_out_module.m"
    {
#line 580 "hlds_out_module.m"
      mercury__io__write_list_5_p_0(hlds__hlds_out__hlds_out_module__TypeCtorInfo_84_84, hlds__hlds_out__hlds_out_module__OriginalTypes_15, (MR_String) ", ", hlds__hlds_out__hlds_out_module__PrintTerm_24);
    }
#line 581 "hlds_out_module.m"
    {
#line 581 "hlds_out_module.m"
      mercury__io__nl_2_p_0();
    }
#line 583 "hlds_out_module.m"
    {
#line 583 "hlds_out_module.m"
      hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_module__Indent_7);
    }
#line 584 "hlds_out_module.m"
    {
#line 584 "hlds_out_module.m"
      mercury__io__write_string_3_p_0((MR_String) "% Constraints: ");
    }
#line 586 "hlds_out_module.m"
    {
#line 586 "hlds_out_module.m"
      hlds__hlds_out__hlds_out_module__V_60_60 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 586 "hlds_out_module.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__V_60_60, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_module_scalar_common_4[1]));
#line 586 "hlds_out_module.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__V_60_60, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_module__write_instance_defn_5_p_0_2));
#line 586 "hlds_out_module.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__V_60_60, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 586 "hlds_out_module.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__V_60_60, 3) = ((MR_Box) (hlds__hlds_out__hlds_out_module__VarSet_18));
#line 586 "hlds_out_module.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__V_60_60, 4) = ((MR_Box) (hlds__hlds_out__hlds_out_module__AppendVarNums_23));
#line 586 "hlds_out_module.m"
    }
#line 585 "hlds_out_module.m"
    {
#line 585 "hlds_out_module.m"
      mercury__io__write_list_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0, hlds__hlds_out__hlds_out_module__Constraints_13, (MR_String) ", ", hlds__hlds_out__hlds_out_module__V_60_60);
    }
#line 587 "hlds_out_module.m"
    {
#line 587 "hlds_out_module.m"
      mercury__io__nl_2_p_0();
    }
#line 589 "hlds_out_module.m"
    {
#line 589 "hlds_out_module.m"
      hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_module__Indent_7);
    }
#line 593 "hlds_out_module.m"
    if ((hlds__hlds_out__hlds_out_module__Body_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 591 "hlds_out_module.m"
      {
#line 592 "hlds_out_module.m"
        {
#line 592 "hlds_out_module.m"
          mercury__io__write_string_3_p_0((MR_String) "% abstract");
        }
#line 591 "hlds_out_module.m"
      }
#line 593 "hlds_out_module.m"
    else
#line 594 "hlds_out_module.m"
      {
#line 594 "hlds_out_module.m"
        MR_Word hlds__hlds_out__hlds_out_module__Methods_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_module__Body_16, (MR_Integer) 0)));

#line 595 "hlds_out_module.m"
        {
#line 595 "hlds_out_module.m"
          mercury__io__write_string_3_p_0((MR_String) "% Instance Methods: ");
        }
#line 596 "hlds_out_module.m"
        {
#line 596 "hlds_out_module.m"
          parse_tree__mercury_to_mercury__mercury_output_instance_methods_3_p_0(hlds__hlds_out__hlds_out_module__Methods_27);
        }
#line 594 "hlds_out_module.m"
      }
#line 598 "hlds_out_module.m"
    {
#line 598 "hlds_out_module.m"
      mercury__io__nl_2_p_0();
    }
#line 606 "hlds_out_module.m"
    if ((hlds__hlds_out__hlds_out_module__MaybePredProcIds_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 607 "hlds_out_module.m"
      {
#line 607 "hlds_out_module.m"
      }
#line 606 "hlds_out_module.m"
    else
#line 601 "hlds_out_module.m"
      {
#line 601 "hlds_out_module.m"
        MR_Word hlds__hlds_out__hlds_out_module__PredProcIds_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_module__MaybePredProcIds_17, (MR_Integer) 0)));

#line 602 "hlds_out_module.m"
        {
#line 602 "hlds_out_module.m"
          hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_module__Indent_7);
        }
#line 603 "hlds_out_module.m"
        {
#line 603 "hlds_out_module.m"
          mercury__io__write_string_3_p_0((MR_String) "% procedures: ");
        }
#line 604 "hlds_out_module.m"
        {
#line 604 "hlds_out_module.m"
          mercury__io__write_3_p_0((MR_Word) &hlds__hlds_out__hlds_out_module_scalar_common_1[2], ((MR_Box) (hlds__hlds_out__hlds_out_module__PredProcIds_28)));
        }
#line 605 "hlds_out_module.m"
        {
#line 605 "hlds_out_module.m"
          mercury__io__nl_2_p_0();
        }
#line 601 "hlds_out_module.m"
      }
#line 609 "hlds_out_module.m"
    {
#line 609 "hlds_out_module.m"
      hlds__hlds_out__hlds_out_util__write_constraint_proof_map_6_p_0(hlds__hlds_out__hlds_out_module__Indent_7, hlds__hlds_out__hlds_out_module__VarSet_18, hlds__hlds_out__hlds_out_module__ProofMap_19, hlds__hlds_out__hlds_out_module__AppendVarNums_23);
    }
#line 610 "hlds_out_module.m"
    {
#line 610 "hlds_out_module.m"
      mercury__io__nl_2_p_0();
#line 610 "hlds_out_module.m"
      return;
    }
#line 545 "hlds_out_module.m"
  }
#line 542 "hlds_out_module.m"
}

#line 539 "hlds_out_module.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_instance_defns_5_p_0_1(
#line 539 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__closure_arg,
#line 539 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_1,
#line 539 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_2,
#line 539 "hlds_out_module.m"
  MR_Box * hlds__hlds_out__hlds_out_module__wrapper_arg_3)
#line 539 "hlds_out_module.m"
{
#line 539 "hlds_out_module.m"
  {
#line 539 "hlds_out_module.m"
    MR_Box hlds__hlds_out__hlds_out_module__closure = hlds__hlds_out__hlds_out_module__closure_arg;

#line 539 "hlds_out_module.m"
    {
#line 539 "hlds_out_module.m"
      hlds__hlds_out__hlds_out_module__write_instance_defn_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__closure, (MR_Integer) 3))), ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__closure, (MR_Integer) 4))), ((MR_Word) hlds__hlds_out__hlds_out_module__wrapper_arg_1));
#line 539 "hlds_out_module.m"
      return;
    }
#line 539 "hlds_out_module.m"
  }
#line 539 "hlds_out_module.m"
}

#line 531 "hlds_out_module.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_instance_defns_5_p_0(
#line 531 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__Info_6,
#line 531 "hlds_out_module.m"
  MR_Integer hlds__hlds_out__hlds_out_module__Indent_7,
#line 531 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__HeadVar__3_3)
#line 531 "hlds_out_module.m"
{
#line 534 "hlds_out_module.m"
  {
#line 534 "hlds_out_module.m"
    MR_bool hlds__hlds_out__hlds_out_module__succeeded;
#line 534 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__ClassId_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__HeadVar__3_3, (MR_Integer) 0)));
#line 534 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__InstanceDefns_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__HeadVar__3_3, (MR_Integer) 1)));
#line 534 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__V_20_20;

#line 535 "hlds_out_module.m"
    {
#line 535 "hlds_out_module.m"
      hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_module__Indent_7);
    }
#line 536 "hlds_out_module.m"
    {
#line 536 "hlds_out_module.m"
      mercury__io__write_string_3_p_0((MR_String) "% ");
    }
#line 537 "hlds_out_module.m"
    {
#line 537 "hlds_out_module.m"
      parse_tree__prog_out__write_class_id_3_p_0(hlds__hlds_out__hlds_out_module__ClassId_8);
    }
#line 538 "hlds_out_module.m"
    {
#line 538 "hlds_out_module.m"
      mercury__io__write_string_3_p_0((MR_String) ":\n");
    }
#line 539 "hlds_out_module.m"
    {
#line 539 "hlds_out_module.m"
      hlds__hlds_out__hlds_out_module__V_20_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 539 "hlds_out_module.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__V_20_20, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_module_scalar_common_4[3]));
#line 539 "hlds_out_module.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__V_20_20, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_module__write_instance_defns_5_p_0_1));
#line 539 "hlds_out_module.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__V_20_20, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 539 "hlds_out_module.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__V_20_20, 3) = ((MR_Box) (hlds__hlds_out__hlds_out_module__Info_6));
#line 539 "hlds_out_module.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__V_20_20, 4) = ((MR_Box) (hlds__hlds_out__hlds_out_module__Indent_7));
#line 539 "hlds_out_module.m"
    }
#line 539 "hlds_out_module.m"
    {
#line 539 "hlds_out_module.m"
      mercury__io__write_list_5_p_0((MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_instance_defn_0, hlds__hlds_out__hlds_out_module__InstanceDefns_9, (MR_String) "\n", hlds__hlds_out__hlds_out_module__V_20_20);
#line 539 "hlds_out_module.m"
      return;
    }
#line 534 "hlds_out_module.m"
  }
#line 531 "hlds_out_module.m"
}

#line 528 "hlds_out_module.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_instances_5_p_0_1(
#line 528 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__closure_arg,
#line 528 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_1,
#line 528 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_2,
#line 528 "hlds_out_module.m"
  MR_Box * hlds__hlds_out__hlds_out_module__wrapper_arg_3)
#line 528 "hlds_out_module.m"
{
#line 528 "hlds_out_module.m"
  {
#line 528 "hlds_out_module.m"
    MR_Box hlds__hlds_out__hlds_out_module__closure = hlds__hlds_out__hlds_out_module__closure_arg;

#line 528 "hlds_out_module.m"
    {
#line 528 "hlds_out_module.m"
      hlds__hlds_out__hlds_out_module__write_instance_defns_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__closure, (MR_Integer) 3))), ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__closure, (MR_Integer) 4))), ((MR_Word) hlds__hlds_out__hlds_out_module__wrapper_arg_1));
#line 528 "hlds_out_module.m"
      return;
    }
#line 528 "hlds_out_module.m"
  }
#line 528 "hlds_out_module.m"
}

#line 520 "hlds_out_module.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_instances_5_p_0(
#line 520 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__Info_6,
#line 520 "hlds_out_module.m"
  MR_Integer hlds__hlds_out__hlds_out_module__Indent_7,
#line 520 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__InstanceTable_8)
#line 520 "hlds_out_module.m"
{
#line 523 "hlds_out_module.m"
  {
#line 523 "hlds_out_module.m"
    MR_bool hlds__hlds_out__hlds_out_module__succeeded;
#line 523 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__InstanceTableList_10;
#line 523 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__V_17_17;

#line 524 "hlds_out_module.m"
    {
#line 524 "hlds_out_module.m"
      hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_module__Indent_7);
    }
#line 525 "hlds_out_module.m"
    {
#line 525 "hlds_out_module.m"
      mercury__io__write_string_3_p_0((MR_String) "%-------- Instances --------\n");
    }
#line 526 "hlds_out_module.m"
    {
#line 526 "hlds_out_module.m"
      mercury__map__to_assoc_list_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0, (MR_Word) &hlds__hlds_out__hlds_out_module_scalar_common_1[1], hlds__hlds_out__hlds_out_module__InstanceTable_8, &hlds__hlds_out__hlds_out_module__InstanceTableList_10);
    }
#line 528 "hlds_out_module.m"
    {
#line 528 "hlds_out_module.m"
      hlds__hlds_out__hlds_out_module__V_17_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 528 "hlds_out_module.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__V_17_17, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_module_scalar_common_4[2]));
#line 528 "hlds_out_module.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__V_17_17, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_module__write_instances_5_p_0_1));
#line 528 "hlds_out_module.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__V_17_17, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 528 "hlds_out_module.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__V_17_17, 3) = ((MR_Box) (hlds__hlds_out__hlds_out_module__Info_6));
#line 528 "hlds_out_module.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__V_17_17, 4) = ((MR_Box) (hlds__hlds_out__hlds_out_module__Indent_7));
#line 528 "hlds_out_module.m"
    }
#line 527 "hlds_out_module.m"
    {
#line 527 "hlds_out_module.m"
      mercury__io__write_list_5_p_0((MR_Word) &hlds__hlds_out__hlds_out_module_scalar_common_2[1], hlds__hlds_out__hlds_out_module__InstanceTableList_10, (MR_String) "\n\n", hlds__hlds_out__hlds_out_module__V_17_17);
    }
#line 529 "hlds_out_module.m"
    {
#line 529 "hlds_out_module.m"
      mercury__io__nl_2_p_0();
#line 529 "hlds_out_module.m"
      return;
    }
#line 523 "hlds_out_module.m"
  }
#line 520 "hlds_out_module.m"
}

#line 504 "hlds_out_module.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_class_proc_3_p_0(
#line 504 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__HeadVar__1_1)
#line 504 "hlds_out_module.m"
{
#line 506 "hlds_out_module.m"
  {
#line 506 "hlds_out_module.m"
    MR_bool hlds__hlds_out__hlds_out_module__succeeded;
#line 506 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__PredId_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__HeadVar__1_1, (MR_Integer) 0)));
#line 506 "hlds_out_module.m"
    MR_Integer hlds__hlds_out__hlds_out_module__ProcId_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__HeadVar__1_1, (MR_Integer) 1)));
#line 506 "hlds_out_module.m"
    MR_Integer hlds__hlds_out__hlds_out_module__PredInt_7;
#line 506 "hlds_out_module.m"
    MR_Integer hlds__hlds_out__hlds_out_module__ProcInt_8;

#line 507 "hlds_out_module.m"
    {
#line 507 "hlds_out_module.m"
      mercury__io__write_string_3_p_0((MR_String) "hlds_class_proc(pred_id:");
    }
#line 508 "hlds_out_module.m"
    {
#line 508 "hlds_out_module.m"
      hlds__hlds_pred__pred_id_to_int_2_p_0(hlds__hlds_out__hlds_out_module__PredId_4, &hlds__hlds_out__hlds_out_module__PredInt_7);
    }
#line 509 "hlds_out_module.m"
    {
#line 509 "hlds_out_module.m"
      mercury__io__write_int_3_p_0(hlds__hlds_out__hlds_out_module__PredInt_7);
    }
#line 510 "hlds_out_module.m"
    {
#line 510 "hlds_out_module.m"
      mercury__io__write_string_3_p_0((MR_String) ", proc_id:");
    }
#line 511 "hlds_out_module.m"
    {
#line 511 "hlds_out_module.m"
      hlds__hlds_pred__proc_id_to_int_2_p_0(hlds__hlds_out__hlds_out_module__ProcId_5, &hlds__hlds_out__hlds_out_module__ProcInt_8);
    }
#line 512 "hlds_out_module.m"
    {
#line 512 "hlds_out_module.m"
      mercury__io__write_int_3_p_0(hlds__hlds_out__hlds_out_module__ProcInt_8);
    }
#line 513 "hlds_out_module.m"
    {
#line 513 "hlds_out_module.m"
      mercury__io__write_char_3_p_0((MR_Char) 41);
#line 513 "hlds_out_module.m"
      return;
    }
#line 506 "hlds_out_module.m"
  }
#line 504 "hlds_out_module.m"
}

#line 497 "hlds_out_module.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_module__hlds_output_fundep_3_p_0_2(
#line 497 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__closure_arg,
#line 497 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_1,
#line 497 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_2,
#line 497 "hlds_out_module.m"
  MR_Box * hlds__hlds_out__hlds_out_module__wrapper_arg_3)
#line 497 "hlds_out_module.m"
{
#line 497 "hlds_out_module.m"
  {
#line 497 "hlds_out_module.m"
    MR_Box hlds__hlds_out__hlds_out_module__closure = hlds__hlds_out__hlds_out_module__closure_arg;

#line 497 "hlds_out_module.m"
    {
#line 497 "hlds_out_module.m"
      mercury__io__write_int_3_p_0(((MR_Integer) hlds__hlds_out__hlds_out_module__wrapper_arg_1));
#line 497 "hlds_out_module.m"
      return;
    }
#line 497 "hlds_out_module.m"
  }
#line 497 "hlds_out_module.m"
}

#line 494 "hlds_out_module.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_module__hlds_output_fundep_3_p_0_1(
#line 494 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__closure_arg,
#line 494 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_1,
#line 494 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_2,
#line 494 "hlds_out_module.m"
  MR_Box * hlds__hlds_out__hlds_out_module__wrapper_arg_3)
#line 494 "hlds_out_module.m"
{
#line 494 "hlds_out_module.m"
  {
#line 494 "hlds_out_module.m"
    MR_Box hlds__hlds_out__hlds_out_module__closure = hlds__hlds_out__hlds_out_module__closure_arg;

#line 494 "hlds_out_module.m"
    {
#line 494 "hlds_out_module.m"
      mercury__io__write_int_3_p_0(((MR_Integer) hlds__hlds_out__hlds_out_module__wrapper_arg_1));
#line 494 "hlds_out_module.m"
      return;
    }
#line 494 "hlds_out_module.m"
  }
#line 494 "hlds_out_module.m"
}

#line 489 "hlds_out_module.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_module__hlds_output_fundep_3_p_0(
#line 489 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__HeadVar__1_1)
#line 489 "hlds_out_module.m"
{
#line 491 "hlds_out_module.m"
  {
#line 491 "hlds_out_module.m"
    MR_bool hlds__hlds_out__hlds_out_module__succeeded;
#line 491 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__TypeCtorInfo_23_23;
#line 491 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__Domain_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__HeadVar__1_1, (MR_Integer) 0)));
#line 491 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__Range_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__HeadVar__1_1, (MR_Integer) 1)));
#line 491 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__DomainList_7;
#line 491 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__RangeList_8;

#line 492 "hlds_out_module.m"
    {
#line 492 "hlds_out_module.m"
      mercury__io__write_char_3_p_0((MR_Char) 40);
    }
#line 5341 "hlds.hlds_out.hlds_out_module.c"
    hlds__hlds_out__hlds_out_module__TypeCtorInfo_23_23 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 493 "hlds_out_module.m"
    {
#line 493 "hlds_out_module.m"
      hlds__hlds_out__hlds_out_module__DomainList_7 = mercury__set__to_sorted_list_1_f_0(hlds__hlds_out__hlds_out_module__TypeCtorInfo_23_23, hlds__hlds_out__hlds_out_module__Domain_4);
    }
#line 494 "hlds_out_module.m"
    {
#line 494 "hlds_out_module.m"
      mercury__io__write_list_5_p_0(hlds__hlds_out__hlds_out_module__TypeCtorInfo_23_23, hlds__hlds_out__hlds_out_module__DomainList_7, (MR_String) ", ", (MR_Word) &hlds__hlds_out__hlds_out_module_scalar_common_2[9]);
    }
#line 495 "hlds_out_module.m"
    {
#line 495 "hlds_out_module.m"
      mercury__io__write_string_3_p_0((MR_String) " -> ");
    }
#line 496 "hlds_out_module.m"
    {
#line 496 "hlds_out_module.m"
      hlds__hlds_out__hlds_out_module__RangeList_8 = mercury__set__to_sorted_list_1_f_0(hlds__hlds_out__hlds_out_module__TypeCtorInfo_23_23, hlds__hlds_out__hlds_out_module__Range_5);
    }
#line 497 "hlds_out_module.m"
    {
#line 497 "hlds_out_module.m"
      mercury__io__write_list_5_p_0(hlds__hlds_out__hlds_out_module__TypeCtorInfo_23_23, hlds__hlds_out__hlds_out_module__RangeList_8, (MR_String) ", ", (MR_Word) &hlds__hlds_out__hlds_out_module_scalar_common_2[10]);
    }
#line 498 "hlds_out_module.m"
    {
#line 498 "hlds_out_module.m"
      mercury__io__write_char_3_p_0((MR_Char) 41);
#line 498 "hlds_out_module.m"
      return;
    }
#line 491 "hlds_out_module.m"
  }
#line 489 "hlds_out_module.m"
}

#line 486 "hlds_out_module.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_class_defn_5_p_0_3(
#line 486 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__closure_arg,
#line 486 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_1,
#line 486 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_2,
#line 486 "hlds_out_module.m"
  MR_Box * hlds__hlds_out__hlds_out_module__wrapper_arg_3)
#line 486 "hlds_out_module.m"
{
#line 486 "hlds_out_module.m"
  {
#line 486 "hlds_out_module.m"
    MR_Box hlds__hlds_out__hlds_out_module__closure = hlds__hlds_out__hlds_out_module__closure_arg;

#line 486 "hlds_out_module.m"
    {
#line 486 "hlds_out_module.m"
      hlds__hlds_out__hlds_out_module__write_class_proc_3_p_0(((MR_Word) hlds__hlds_out__hlds_out_module__wrapper_arg_1));
#line 486 "hlds_out_module.m"
      return;
    }
#line 486 "hlds_out_module.m"
  }
#line 486 "hlds_out_module.m"
}

#line 481 "hlds_out_module.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_class_defn_5_p_0_2(
#line 481 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__closure_arg,
#line 481 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_1,
#line 481 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_2,
#line 481 "hlds_out_module.m"
  MR_Box * hlds__hlds_out__hlds_out_module__wrapper_arg_3)
#line 481 "hlds_out_module.m"
{
#line 481 "hlds_out_module.m"
  {
#line 481 "hlds_out_module.m"
    MR_Box hlds__hlds_out__hlds_out_module__closure = hlds__hlds_out__hlds_out_module__closure_arg;

#line 481 "hlds_out_module.m"
    {
#line 481 "hlds_out_module.m"
      parse_tree__mercury_to_mercury__mercury_output_constraint_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__closure, (MR_Integer) 4))), ((MR_Word) hlds__hlds_out__hlds_out_module__wrapper_arg_1));
#line 481 "hlds_out_module.m"
      return;
    }
#line 481 "hlds_out_module.m"
  }
#line 481 "hlds_out_module.m"
}

#line 475 "hlds_out_module.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_class_defn_5_p_0_1(
#line 475 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__closure_arg,
#line 475 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_1,
#line 475 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_2,
#line 475 "hlds_out_module.m"
  MR_Box * hlds__hlds_out__hlds_out_module__wrapper_arg_3)
#line 475 "hlds_out_module.m"
{
#line 475 "hlds_out_module.m"
  {
#line 475 "hlds_out_module.m"
    MR_Box hlds__hlds_out__hlds_out_module__closure = hlds__hlds_out__hlds_out_module__closure_arg;

#line 475 "hlds_out_module.m"
    {
#line 475 "hlds_out_module.m"
      hlds__hlds_out__hlds_out_module__hlds_output_fundep_3_p_0(((MR_Word) hlds__hlds_out__hlds_out_module__wrapper_arg_1));
#line 475 "hlds_out_module.m"
      return;
    }
#line 475 "hlds_out_module.m"
  }
#line 475 "hlds_out_module.m"
}

#line 435 "hlds_out_module.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_class_defn_5_p_0(
#line 435 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__Info_6,
#line 435 "hlds_out_module.m"
  MR_Integer hlds__hlds_out__hlds_out_module__Indent_7,
#line 435 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__HeadVar__3_3)
#line 435 "hlds_out_module.m"
{
#line 438 "hlds_out_module.m"
  {
#line 438 "hlds_out_module.m"
    MR_bool hlds__hlds_out__hlds_out_module__succeeded;
#line 438 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__ClassId_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__HeadVar__3_3, (MR_Integer) 0)));
#line 438 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__ClassDefn_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__HeadVar__3_3, (MR_Integer) 1)));
#line 438 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__Constraints_12;
#line 438 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__FunDeps_13;
#line 438 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__Vars_15;
#line 438 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__Interface_18;
#line 438 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__VarSet_19;
#line 438 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__Context_20;
#line 438 "hlds_out_module.m"
    MR_String hlds__hlds_out__hlds_out_module__FileName_21;
#line 438 "hlds_out_module.m"
    MR_Integer hlds__hlds_out__hlds_out_module__LineNumber_22;
#line 438 "hlds_out_module.m"
    MR_String hlds__hlds_out__hlds_out_module__DumpOptions_23;
#line 438 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__AppendVarNums_24;
#line 438 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__V_59_59;
#line 445 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__V_11_11;
#line 445 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__V_14_14;
#line 445 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__V_16_16;
#line 445 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__V_17_17;
#line 461 "hlds_out_module.m"
    MR_String hlds__hlds_out__hlds_out_module__V_69_69;
#line 461 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__V_70_70;
#line 461 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__V_71_71;
#line 461 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__V_72_72;

#line 439 "hlds_out_module.m"
    {
#line 439 "hlds_out_module.m"
      hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_module__Indent_7);
    }
#line 440 "hlds_out_module.m"
    {
#line 440 "hlds_out_module.m"
      mercury__io__write_string_3_p_0((MR_String) "% ");
    }
#line 442 "hlds_out_module.m"
    {
#line 442 "hlds_out_module.m"
      parse_tree__prog_out__write_class_id_3_p_0(hlds__hlds_out__hlds_out_module__ClassId_8);
    }
#line 443 "hlds_out_module.m"
    {
#line 443 "hlds_out_module.m"
      mercury__io__write_string_3_p_0((MR_String) ":\n");
    }
#line 445 "hlds_out_module.m"
    hlds__hlds_out__hlds_out_module__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__ClassDefn_9, (MR_Integer) 0)));
#line 445 "hlds_out_module.m"
    hlds__hlds_out__hlds_out_module__Constraints_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__ClassDefn_9, (MR_Integer) 1)));
#line 445 "hlds_out_module.m"
    hlds__hlds_out__hlds_out_module__FunDeps_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__ClassDefn_9, (MR_Integer) 2)));
#line 445 "hlds_out_module.m"
    hlds__hlds_out__hlds_out_module__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__ClassDefn_9, (MR_Integer) 3)));
#line 445 "hlds_out_module.m"
    hlds__hlds_out__hlds_out_module__Vars_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__ClassDefn_9, (MR_Integer) 4)));
#line 445 "hlds_out_module.m"
    hlds__hlds_out__hlds_out_module__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__ClassDefn_9, (MR_Integer) 5)));
#line 445 "hlds_out_module.m"
    hlds__hlds_out__hlds_out_module__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__ClassDefn_9, (MR_Integer) 6)));
#line 445 "hlds_out_module.m"
    hlds__hlds_out__hlds_out_module__Interface_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__ClassDefn_9, (MR_Integer) 7)));
#line 445 "hlds_out_module.m"
    hlds__hlds_out__hlds_out_module__VarSet_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__ClassDefn_9, (MR_Integer) 8)));
#line 445 "hlds_out_module.m"
    hlds__hlds_out__hlds_out_module__Context_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__ClassDefn_9, (MR_Integer) 9)));
#line 448 "hlds_out_module.m"
    {
#line 448 "hlds_out_module.m"
      mercury__term__context_file_2_p_0(hlds__hlds_out__hlds_out_module__Context_20, &hlds__hlds_out__hlds_out_module__FileName_21);
    }
#line 449 "hlds_out_module.m"
    {
#line 449 "hlds_out_module.m"
      mercury__term__context_line_2_p_0(hlds__hlds_out__hlds_out_module__Context_20, &hlds__hlds_out__hlds_out_module__LineNumber_22);
    }
#line 450 "hlds_out_module.m"
    hlds__hlds_out__hlds_out_module__succeeded = (strcmp(hlds__hlds_out__hlds_out_module__FileName_21, (MR_String) "") == 0);
#line 450 "hlds_out_module.m"
    hlds__hlds_out__hlds_out_module__succeeded = !(hlds__hlds_out__hlds_out_module__succeeded);
#line 457 "hlds_out_module.m"
    if (hlds__hlds_out__hlds_out_module__succeeded)
#line 451 "hlds_out_module.m"
      {
#line 451 "hlds_out_module.m"
        {
#line 451 "hlds_out_module.m"
          hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_module__Indent_7);
        }
#line 452 "hlds_out_module.m"
        {
#line 452 "hlds_out_module.m"
          mercury__io__write_string_3_p_0((MR_String) "% context: file \140");
        }
#line 453 "hlds_out_module.m"
        {
#line 453 "hlds_out_module.m"
          mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_module__FileName_21);
        }
#line 454 "hlds_out_module.m"
        {
#line 454 "hlds_out_module.m"
          mercury__io__write_string_3_p_0((MR_String) "\', line ");
        }
#line 455 "hlds_out_module.m"
        {
#line 455 "hlds_out_module.m"
          mercury__io__write_int_3_p_0(hlds__hlds_out__hlds_out_module__LineNumber_22);
        }
#line 456 "hlds_out_module.m"
        {
#line 456 "hlds_out_module.m"
          mercury__io__write_string_3_p_0((MR_String) "\n");
        }
#line 451 "hlds_out_module.m"
      }
#line 457 "hlds_out_module.m"
    else
#line 457 "hlds_out_module.m"
      {
#line 457 "hlds_out_module.m"
      }
#line 461 "hlds_out_module.m"
    hlds__hlds_out__hlds_out_module__DumpOptions_23 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__Info_6, (MR_Integer) 0)));
#line 461 "hlds_out_module.m"
    hlds__hlds_out__hlds_out_module__V_69_69 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__Info_6, (MR_Integer) 1)));
#line 461 "hlds_out_module.m"
    hlds__hlds_out__hlds_out_module__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__Info_6, (MR_Integer) 2)));
#line 461 "hlds_out_module.m"
    hlds__hlds_out__hlds_out_module__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__Info_6, (MR_Integer) 3)));
#line 461 "hlds_out_module.m"
    hlds__hlds_out__hlds_out_module__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__Info_6, (MR_Integer) 4)));
#line 462 "hlds_out_module.m"
    {
#line 462 "hlds_out_module.m"
      hlds__hlds_out__hlds_out_module__succeeded = mercury__string__contains_char_2_p_0(hlds__hlds_out__hlds_out_module__DumpOptions_23, (MR_Char) 118);
    }
#line 464 "hlds_out_module.m"
    if (hlds__hlds_out__hlds_out_module__succeeded)
#line 463 "hlds_out_module.m"
      hlds__hlds_out__hlds_out_module__AppendVarNums_24 = (MR_Integer) 1;
#line 464 "hlds_out_module.m"
    else
#line 465 "hlds_out_module.m"
      hlds__hlds_out__hlds_out_module__AppendVarNums_24 = (MR_Integer) 0;
#line 468 "hlds_out_module.m"
    {
#line 468 "hlds_out_module.m"
      hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_module__Indent_7);
    }
#line 469 "hlds_out_module.m"
    {
#line 469 "hlds_out_module.m"
      mercury__io__write_string_3_p_0((MR_String) "% Vars: ");
    }
#line 470 "hlds_out_module.m"
    {
#line 470 "hlds_out_module.m"
      parse_tree__mercury_to_mercury__mercury_output_vars_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, hlds__hlds_out__hlds_out_module__VarSet_19, hlds__hlds_out__hlds_out_module__AppendVarNums_24, hlds__hlds_out__hlds_out_module__Vars_15);
    }
#line 471 "hlds_out_module.m"
    {
#line 471 "hlds_out_module.m"
      mercury__io__nl_2_p_0();
    }
#line 473 "hlds_out_module.m"
    {
#line 473 "hlds_out_module.m"
      hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_module__Indent_7);
    }
#line 474 "hlds_out_module.m"
    {
#line 474 "hlds_out_module.m"
      mercury__io__write_string_3_p_0((MR_String) "% Functional dependencies: ");
    }
#line 475 "hlds_out_module.m"
    {
#line 475 "hlds_out_module.m"
      mercury__io__write_list_5_p_0((MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_class_fundep_0, hlds__hlds_out__hlds_out_module__FunDeps_13, (MR_String) ", ", (MR_Word) &hlds__hlds_out__hlds_out_module_scalar_common_2[7]);
    }
#line 476 "hlds_out_module.m"
    {
#line 476 "hlds_out_module.m"
      mercury__io__nl_2_p_0();
    }
#line 478 "hlds_out_module.m"
    {
#line 478 "hlds_out_module.m"
      hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_module__Indent_7);
    }
#line 479 "hlds_out_module.m"
    {
#line 479 "hlds_out_module.m"
      mercury__io__write_string_3_p_0((MR_String) "% Constraints: ");
    }
#line 481 "hlds_out_module.m"
    {
#line 481 "hlds_out_module.m"
      hlds__hlds_out__hlds_out_module__V_59_59 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 481 "hlds_out_module.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__V_59_59, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_module_scalar_common_4[1]));
#line 481 "hlds_out_module.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__V_59_59, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_module__write_class_defn_5_p_0_2));
#line 481 "hlds_out_module.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__V_59_59, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 481 "hlds_out_module.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__V_59_59, 3) = ((MR_Box) (hlds__hlds_out__hlds_out_module__VarSet_19));
#line 481 "hlds_out_module.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__V_59_59, 4) = ((MR_Box) (hlds__hlds_out__hlds_out_module__AppendVarNums_24));
#line 481 "hlds_out_module.m"
    }
#line 480 "hlds_out_module.m"
    {
#line 480 "hlds_out_module.m"
      mercury__io__write_list_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0, hlds__hlds_out__hlds_out_module__Constraints_12, (MR_String) ", ", hlds__hlds_out__hlds_out_module__V_59_59);
    }
#line 482 "hlds_out_module.m"
    {
#line 482 "hlds_out_module.m"
      mercury__io__nl_2_p_0();
    }
#line 484 "hlds_out_module.m"
    {
#line 484 "hlds_out_module.m"
      hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_module__Indent_7);
    }
#line 485 "hlds_out_module.m"
    {
#line 485 "hlds_out_module.m"
      mercury__io__write_string_3_p_0((MR_String) "% Class Methods: ");
    }
#line 486 "hlds_out_module.m"
    {
#line 486 "hlds_out_module.m"
      mercury__io__write_list_5_p_0((MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_class_proc_0, hlds__hlds_out__hlds_out_module__Interface_18, (MR_String) ", ", (MR_Word) &hlds__hlds_out__hlds_out_module_scalar_common_2[8]);
    }
#line 487 "hlds_out_module.m"
    {
#line 487 "hlds_out_module.m"
      mercury__io__nl_2_p_0();
#line 487 "hlds_out_module.m"
      return;
    }
#line 438 "hlds_out_module.m"
  }
#line 435 "hlds_out_module.m"
}

#line 432 "hlds_out_module.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_classes_5_p_0_1(
#line 432 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__closure_arg,
#line 432 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_1,
#line 432 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_2,
#line 432 "hlds_out_module.m"
  MR_Box * hlds__hlds_out__hlds_out_module__wrapper_arg_3)
#line 432 "hlds_out_module.m"
{
#line 432 "hlds_out_module.m"
  {
#line 432 "hlds_out_module.m"
    MR_Box hlds__hlds_out__hlds_out_module__closure = hlds__hlds_out__hlds_out_module__closure_arg;

#line 432 "hlds_out_module.m"
    {
#line 432 "hlds_out_module.m"
      hlds__hlds_out__hlds_out_module__write_class_defn_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__closure, (MR_Integer) 3))), ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__closure, (MR_Integer) 4))), ((MR_Word) hlds__hlds_out__hlds_out_module__wrapper_arg_1));
#line 432 "hlds_out_module.m"
      return;
    }
#line 432 "hlds_out_module.m"
  }
#line 432 "hlds_out_module.m"
}

#line 425 "hlds_out_module.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_classes_5_p_0(
#line 425 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__Info_6,
#line 425 "hlds_out_module.m"
  MR_Integer hlds__hlds_out__hlds_out_module__Indent_7,
#line 425 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__ClassTable_8)
#line 425 "hlds_out_module.m"
{
#line 428 "hlds_out_module.m"
  {
#line 428 "hlds_out_module.m"
    MR_bool hlds__hlds_out__hlds_out_module__succeeded;
#line 428 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__ClassTableList_10;
#line 428 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__V_17_17;

#line 429 "hlds_out_module.m"
    {
#line 429 "hlds_out_module.m"
      hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_module__Indent_7);
    }
#line 430 "hlds_out_module.m"
    {
#line 430 "hlds_out_module.m"
      mercury__io__write_string_3_p_0((MR_String) "%-------- Classes --------\n");
    }
#line 431 "hlds_out_module.m"
    {
#line 431 "hlds_out_module.m"
      mercury__map__to_assoc_list_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_class_defn_0, hlds__hlds_out__hlds_out_module__ClassTable_8, &hlds__hlds_out__hlds_out_module__ClassTableList_10);
    }
#line 432 "hlds_out_module.m"
    {
#line 432 "hlds_out_module.m"
      hlds__hlds_out__hlds_out_module__V_17_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 432 "hlds_out_module.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__V_17_17, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_module_scalar_common_4[0]));
#line 432 "hlds_out_module.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__V_17_17, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_module__write_classes_5_p_0_1));
#line 432 "hlds_out_module.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__V_17_17, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 432 "hlds_out_module.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__V_17_17, 3) = ((MR_Box) (hlds__hlds_out__hlds_out_module__Info_6));
#line 432 "hlds_out_module.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__V_17_17, 4) = ((MR_Box) (hlds__hlds_out__hlds_out_module__Indent_7));
#line 432 "hlds_out_module.m"
    }
#line 432 "hlds_out_module.m"
    {
#line 432 "hlds_out_module.m"
      mercury__io__write_list_5_p_0((MR_Word) &hlds__hlds_out__hlds_out_module_scalar_common_2[0], hlds__hlds_out__hlds_out_module__ClassTableList_10, (MR_String) "\n", hlds__hlds_out__hlds_out_module__V_17_17);
    }
#line 433 "hlds_out_module.m"
    {
#line 433 "hlds_out_module.m"
      mercury__io__nl_2_p_0();
#line 433 "hlds_out_module.m"
      return;
    }
#line 428 "hlds_out_module.m"
  }
#line 425 "hlds_out_module.m"
}

#line 406 "hlds_out_module.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_ctor_6_p_0(
#line 406 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__TypeCtor_7,
#line 406 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__Ctor_8,
#line 406 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__TVarSet_9,
#line 406 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__TagValues_10)
#line 406 "hlds_out_module.m"
{
#line 409 "hlds_out_module.m"
  {
#line 409 "hlds_out_module.m"
    MR_bool hlds__hlds_out__hlds_out_module__succeeded;
#line 409 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__Name_14;
#line 409 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__Args_15;
#line 409 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__ConsId_17;
#line 409 "hlds_out_module.m"
    MR_Integer hlds__hlds_out__hlds_out_module__V_22_22;
#line 411 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__V_12_12;
#line 411 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__V_13_13;
#line 411 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__V_16_16;
#line 416 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__TagValue_18;
#line 413 "hlds_out_module.m"
    MR_Box hlds__hlds_out__hlds_out_module__conv0_TagValue_18;

#line 410 "hlds_out_module.m"
    {
#line 410 "hlds_out_module.m"
      parse_tree__mercury_to_mercury__mercury_output_ctor_4_p_0(hlds__hlds_out__hlds_out_module__Ctor_8, hlds__hlds_out__hlds_out_module__TVarSet_9);
    }
#line 411 "hlds_out_module.m"
    hlds__hlds_out__hlds_out_module__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__Ctor_8, (MR_Integer) 0)));
#line 411 "hlds_out_module.m"
    hlds__hlds_out__hlds_out_module__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__Ctor_8, (MR_Integer) 1)));
#line 411 "hlds_out_module.m"
    hlds__hlds_out__hlds_out_module__Name_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__Ctor_8, (MR_Integer) 2)));
#line 411 "hlds_out_module.m"
    hlds__hlds_out__hlds_out_module__Args_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__Ctor_8, (MR_Integer) 3)));
#line 411 "hlds_out_module.m"
    hlds__hlds_out__hlds_out_module__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__Ctor_8, (MR_Integer) 4)));
#line 412 "hlds_out_module.m"
    {
#line 412 "hlds_out_module.m"
      hlds__hlds_out__hlds_out_module__V_22_22 = mercury__list__length_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0, hlds__hlds_out__hlds_out_module__Args_15);
    }
#line 412 "hlds_out_module.m"
    {
#line 412 "hlds_out_module.m"
      hlds__hlds_out__hlds_out_module__ConsId_17 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 412 "hlds_out_module.m"
      MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_module__ConsId_17, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 412 "hlds_out_module.m"
      MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_module__ConsId_17, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_module__Name_14));
#line 412 "hlds_out_module.m"
      MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_module__ConsId_17, 2) = ((MR_Box) (hlds__hlds_out__hlds_out_module__V_22_22));
#line 412 "hlds_out_module.m"
      MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_module__ConsId_17, 3) = ((MR_Box) (hlds__hlds_out__hlds_out_module__TypeCtor_7));
#line 412 "hlds_out_module.m"
    }
#line 413 "hlds_out_module.m"
    {
#line 413 "hlds_out_module.m"
      hlds__hlds_out__hlds_out_module__succeeded = mercury__map__search_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_cons_tag_0, hlds__hlds_out__hlds_out_module__TagValues_10, ((MR_Box) (hlds__hlds_out__hlds_out_module__ConsId_17)), &hlds__hlds_out__hlds_out_module__conv0_TagValue_18);
    }
#line 413 "hlds_out_module.m"
    if (hlds__hlds_out__hlds_out_module__succeeded)
#line 413 "hlds_out_module.m"
      {
#line 413 "hlds_out_module.m"
        hlds__hlds_out__hlds_out_module__TagValue_18 = ((MR_Word) hlds__hlds_out__hlds_out_module__conv0_TagValue_18);
#line 413 "hlds_out_module.m"
        hlds__hlds_out__hlds_out_module__succeeded = MR_TRUE;
#line 413 "hlds_out_module.m"
      }
#line 416 "hlds_out_module.m"
    if (hlds__hlds_out__hlds_out_module__succeeded)
#line 414 "hlds_out_module.m"
      {
#line 414 "hlds_out_module.m"
        {
#line 414 "hlds_out_module.m"
          mercury__io__write_string_3_p_0((MR_String) "\t% tag: ");
        }
#line 415 "hlds_out_module.m"
        {
#line 415 "hlds_out_module.m"
          mercury__io__print_3_p_0((MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_cons_tag_0, ((MR_Box) (hlds__hlds_out__hlds_out_module__TagValue_18)));
#line 415 "hlds_out_module.m"
          return;
        }
#line 414 "hlds_out_module.m"
      }
#line 416 "hlds_out_module.m"
    else
#line 416 "hlds_out_module.m"
      {
#line 416 "hlds_out_module.m"
      }
#line 409 "hlds_out_module.m"
  }
#line 406 "hlds_out_module.m"
}

#line 388 "hlds_out_module.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_constructors_loop_7_p_0(
#line 388 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__HeadVar__1_1,
#line 388 "hlds_out_module.m"
  MR_Integer hlds__hlds_out__hlds_out_module__HeadVar__2_2,
#line 388 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__HeadVar__3_3,
#line 388 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__HeadVar__4_4,
#line 388 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__TagValues_5)
#line 388 "hlds_out_module.m"
{
#line 391 "hlds_out_module.m"
  while (MR_TRUE)
#line 391 "hlds_out_module.m"
    {
#line 391 "hlds_out_module.m"
      /* tailcall optimized into a loop */
#line 391 "hlds_out_module.m"
      {
#line 391 "hlds_out_module.m"
        MR_bool hlds__hlds_out__hlds_out_module__succeeded;

#line 391 "hlds_out_module.m"
        if ((hlds__hlds_out__hlds_out_module__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 391 "hlds_out_module.m"
          {
#line 391 "hlds_out_module.m"
          }
#line 391 "hlds_out_module.m"
        else
#line 393 "hlds_out_module.m"
          {
#line 393 "hlds_out_module.m"
            MR_Word hlds__hlds_out__hlds_out_module__Ctor_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_module__HeadVar__4_4, (MR_Integer) 0)));
#line 393 "hlds_out_module.m"
            MR_Word hlds__hlds_out__hlds_out_module__Ctors_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_module__HeadVar__4_4, (MR_Integer) 1)));
#line 393 "hlds_out_module.m"
            MR_Word hlds__hlds_out__hlds_out_module__Name_42;
#line 393 "hlds_out_module.m"
            MR_Word hlds__hlds_out__hlds_out_module__Args_43;
#line 393 "hlds_out_module.m"
            MR_Word hlds__hlds_out__hlds_out_module__ConsId_45;
#line 393 "hlds_out_module.m"
            MR_Integer hlds__hlds_out__hlds_out_module__V_48_48;
#line 411 "hlds_out_module.m"
            MR_Word hlds__hlds_out__hlds_out_module__V_40_40;
#line 411 "hlds_out_module.m"
            MR_Word hlds__hlds_out__hlds_out_module__V_41_41;
#line 411 "hlds_out_module.m"
            MR_Word hlds__hlds_out__hlds_out_module__V_44_44;
#line 416 "hlds_out_module.m"
            MR_Word hlds__hlds_out__hlds_out_module__TagValue_46;
#line 413 "hlds_out_module.m"
            MR_Box hlds__hlds_out__hlds_out_module__conv0_TagValue_46;

#line 394 "hlds_out_module.m"
            {
#line 394 "hlds_out_module.m"
              hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_module__HeadVar__2_2);
            }
#line 395 "hlds_out_module.m"
            {
#line 395 "hlds_out_module.m"
              mercury__io__write_string_3_p_0((MR_String) ";       ");
            }
#line 410 "hlds_out_module.m"
            {
#line 410 "hlds_out_module.m"
              parse_tree__mercury_to_mercury__mercury_output_ctor_4_p_0(hlds__hlds_out__hlds_out_module__Ctor_18, hlds__hlds_out__hlds_out_module__HeadVar__3_3);
            }
#line 411 "hlds_out_module.m"
            hlds__hlds_out__hlds_out_module__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__Ctor_18, (MR_Integer) 0)));
#line 411 "hlds_out_module.m"
            hlds__hlds_out__hlds_out_module__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__Ctor_18, (MR_Integer) 1)));
#line 411 "hlds_out_module.m"
            hlds__hlds_out__hlds_out_module__Name_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__Ctor_18, (MR_Integer) 2)));
#line 411 "hlds_out_module.m"
            hlds__hlds_out__hlds_out_module__Args_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__Ctor_18, (MR_Integer) 3)));
#line 411 "hlds_out_module.m"
            hlds__hlds_out__hlds_out_module__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__Ctor_18, (MR_Integer) 4)));
#line 412 "hlds_out_module.m"
            {
#line 412 "hlds_out_module.m"
              hlds__hlds_out__hlds_out_module__V_48_48 = mercury__list__length_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0, hlds__hlds_out__hlds_out_module__Args_43);
            }
#line 412 "hlds_out_module.m"
            {
#line 412 "hlds_out_module.m"
              hlds__hlds_out__hlds_out_module__ConsId_45 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 412 "hlds_out_module.m"
              MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_module__ConsId_45, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 412 "hlds_out_module.m"
              MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_module__ConsId_45, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_module__Name_42));
#line 412 "hlds_out_module.m"
              MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_module__ConsId_45, 2) = ((MR_Box) (hlds__hlds_out__hlds_out_module__V_48_48));
#line 412 "hlds_out_module.m"
              MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_module__ConsId_45, 3) = ((MR_Box) (hlds__hlds_out__hlds_out_module__HeadVar__1_1));
#line 412 "hlds_out_module.m"
            }
#line 413 "hlds_out_module.m"
            {
#line 413 "hlds_out_module.m"
              hlds__hlds_out__hlds_out_module__succeeded = mercury__map__search_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_cons_tag_0, hlds__hlds_out__hlds_out_module__TagValues_5, ((MR_Box) (hlds__hlds_out__hlds_out_module__ConsId_45)), &hlds__hlds_out__hlds_out_module__conv0_TagValue_46);
            }
#line 413 "hlds_out_module.m"
            if (hlds__hlds_out__hlds_out_module__succeeded)
#line 413 "hlds_out_module.m"
              {
#line 413 "hlds_out_module.m"
                hlds__hlds_out__hlds_out_module__TagValue_46 = ((MR_Word) hlds__hlds_out__hlds_out_module__conv0_TagValue_46);
#line 413 "hlds_out_module.m"
                hlds__hlds_out__hlds_out_module__succeeded = MR_TRUE;
#line 413 "hlds_out_module.m"
              }
#line 416 "hlds_out_module.m"
            if (hlds__hlds_out__hlds_out_module__succeeded)
#line 414 "hlds_out_module.m"
              {
#line 414 "hlds_out_module.m"
                {
#line 414 "hlds_out_module.m"
                  mercury__io__write_string_3_p_0((MR_String) "\t% tag: ");
                }
#line 415 "hlds_out_module.m"
                {
#line 415 "hlds_out_module.m"
                  mercury__io__print_3_p_0((MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_cons_tag_0, ((MR_Box) (hlds__hlds_out__hlds_out_module__TagValue_46)));
                }
#line 414 "hlds_out_module.m"
              }
#line 416 "hlds_out_module.m"
            else
#line 416 "hlds_out_module.m"
              {
#line 416 "hlds_out_module.m"
              }
#line 399 "hlds_out_module.m"
            if ((hlds__hlds_out__hlds_out_module__Ctors_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 398 "hlds_out_module.m"
              {
#line 398 "hlds_out_module.m"
              }
#line 399 "hlds_out_module.m"
            else
#line 400 "hlds_out_module.m"
              {
#line 401 "hlds_out_module.m"
                {
#line 401 "hlds_out_module.m"
                  mercury__io__write_string_3_p_0((MR_String) "\n");
                }
#line 402 "hlds_out_module.m"
                /* direct tailcall eliminated */
#line 402 "hlds_out_module.m"
                {
#line 402 "hlds_out_module.m"
                  MR_Word hlds__hlds_out__hlds_out_module__HeadVar__4__tmp_copy_4 = hlds__hlds_out__hlds_out_module__Ctors_19;

#line 402 "hlds_out_module.m"
                  hlds__hlds_out__hlds_out_module__HeadVar__4_4 = hlds__hlds_out__hlds_out_module__HeadVar__4__tmp_copy_4;
#line 402 "hlds_out_module.m"
                }
#line 402 "hlds_out_module.m"
                continue;
#line 400 "hlds_out_module.m"
              }
#line 393 "hlds_out_module.m"
          }
#line 391 "hlds_out_module.m"
      }
#line 391 "hlds_out_module.m"
      break;
#line 391 "hlds_out_module.m"
    }
#line 388 "hlds_out_module.m"
}

#line 370 "hlds_out_module.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_constructors_7_p_0(
#line 370 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__HeadVar__1_1,
#line 370 "hlds_out_module.m"
  MR_Integer hlds__hlds_out__hlds_out_module__HeadVar__2_2,
#line 370 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__HeadVar__3_3,
#line 370 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__HeadVar__4_4,
#line 370 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__TagValues_5)
#line 370 "hlds_out_module.m"
{
#line 373 "hlds_out_module.m"
  {
#line 373 "hlds_out_module.m"
    MR_bool hlds__hlds_out__hlds_out_module__succeeded;

#line 373 "hlds_out_module.m"
    if ((hlds__hlds_out__hlds_out_module__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 373 "hlds_out_module.m"
      {
#line 374 "hlds_out_module.m"
        {
#line 374 "hlds_out_module.m"
          mercury__require__unexpected_3_p_0((MR_String) "hlds.hlds_out.hlds_out_module", (MR_String) "predicate \140hlds.hlds_out.hlds_out_module.write_constructors\'/7", (MR_String) "empty constructor list");
#line 374 "hlds_out_module.m"
          return;
        }
#line 373 "hlds_out_module.m"
      }
#line 373 "hlds_out_module.m"
    else
#line 373 "hlds_out_module.m"
      {
#line 373 "hlds_out_module.m"
        MR_Word hlds__hlds_out__hlds_out_module__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_module__HeadVar__4_4, (MR_Integer) 1)));
#line 373 "hlds_out_module.m"
        MR_Word hlds__hlds_out__hlds_out_module__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_module__HeadVar__4_4, (MR_Integer) 0)));

#line 373 "hlds_out_module.m"
        if ((hlds__hlds_out__hlds_out_module__V_49_49 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 375 "hlds_out_module.m"
          {
#line 375 "hlds_out_module.m"
            MR_Word hlds__hlds_out__hlds_out_module__Name_60;
#line 375 "hlds_out_module.m"
            MR_Word hlds__hlds_out__hlds_out_module__Args_61;
#line 375 "hlds_out_module.m"
            MR_Word hlds__hlds_out__hlds_out_module__ConsId_63;
#line 375 "hlds_out_module.m"
            MR_Integer hlds__hlds_out__hlds_out_module__V_66_66;
#line 411 "hlds_out_module.m"
            MR_Word hlds__hlds_out__hlds_out_module__V_58_58;
#line 411 "hlds_out_module.m"
            MR_Word hlds__hlds_out__hlds_out_module__V_59_59;
#line 411 "hlds_out_module.m"
            MR_Word hlds__hlds_out__hlds_out_module__V_62_62;
#line 416 "hlds_out_module.m"
            MR_Word hlds__hlds_out__hlds_out_module__TagValue_64;
#line 413 "hlds_out_module.m"
            MR_Box hlds__hlds_out__hlds_out_module__conv0_TagValue_64;

#line 376 "hlds_out_module.m"
            {
#line 376 "hlds_out_module.m"
              hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_module__HeadVar__2_2);
            }
#line 377 "hlds_out_module.m"
            {
#line 377 "hlds_out_module.m"
              mercury__io__write_string_3_p_0((MR_String) "--->    ");
            }
#line 410 "hlds_out_module.m"
            {
#line 410 "hlds_out_module.m"
              parse_tree__mercury_to_mercury__mercury_output_ctor_4_p_0(hlds__hlds_out__hlds_out_module__V_50_50, hlds__hlds_out__hlds_out_module__HeadVar__3_3);
            }
#line 411 "hlds_out_module.m"
            hlds__hlds_out__hlds_out_module__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__V_50_50, (MR_Integer) 0)));
#line 411 "hlds_out_module.m"
            hlds__hlds_out__hlds_out_module__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__V_50_50, (MR_Integer) 1)));
#line 411 "hlds_out_module.m"
            hlds__hlds_out__hlds_out_module__Name_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__V_50_50, (MR_Integer) 2)));
#line 411 "hlds_out_module.m"
            hlds__hlds_out__hlds_out_module__Args_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__V_50_50, (MR_Integer) 3)));
#line 411 "hlds_out_module.m"
            hlds__hlds_out__hlds_out_module__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__V_50_50, (MR_Integer) 4)));
#line 412 "hlds_out_module.m"
            {
#line 412 "hlds_out_module.m"
              hlds__hlds_out__hlds_out_module__V_66_66 = mercury__list__length_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0, hlds__hlds_out__hlds_out_module__Args_61);
            }
#line 412 "hlds_out_module.m"
            {
#line 412 "hlds_out_module.m"
              hlds__hlds_out__hlds_out_module__ConsId_63 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 412 "hlds_out_module.m"
              MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_module__ConsId_63, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 412 "hlds_out_module.m"
              MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_module__ConsId_63, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_module__Name_60));
#line 412 "hlds_out_module.m"
              MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_module__ConsId_63, 2) = ((MR_Box) (hlds__hlds_out__hlds_out_module__V_66_66));
#line 412 "hlds_out_module.m"
              MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_module__ConsId_63, 3) = ((MR_Box) (hlds__hlds_out__hlds_out_module__HeadVar__1_1));
#line 412 "hlds_out_module.m"
            }
#line 413 "hlds_out_module.m"
            {
#line 413 "hlds_out_module.m"
              hlds__hlds_out__hlds_out_module__succeeded = mercury__map__search_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_cons_tag_0, hlds__hlds_out__hlds_out_module__TagValues_5, ((MR_Box) (hlds__hlds_out__hlds_out_module__ConsId_63)), &hlds__hlds_out__hlds_out_module__conv0_TagValue_64);
            }
#line 413 "hlds_out_module.m"
            if (hlds__hlds_out__hlds_out_module__succeeded)
#line 413 "hlds_out_module.m"
              {
#line 413 "hlds_out_module.m"
                hlds__hlds_out__hlds_out_module__TagValue_64 = ((MR_Word) hlds__hlds_out__hlds_out_module__conv0_TagValue_64);
#line 413 "hlds_out_module.m"
                hlds__hlds_out__hlds_out_module__succeeded = MR_TRUE;
#line 413 "hlds_out_module.m"
              }
#line 416 "hlds_out_module.m"
            if (hlds__hlds_out__hlds_out_module__succeeded)
#line 414 "hlds_out_module.m"
              {
#line 414 "hlds_out_module.m"
                {
#line 414 "hlds_out_module.m"
                  mercury__io__write_string_3_p_0((MR_String) "\t% tag: ");
                }
#line 415 "hlds_out_module.m"
                {
#line 415 "hlds_out_module.m"
                  mercury__io__print_3_p_0((MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_cons_tag_0, ((MR_Box) (hlds__hlds_out__hlds_out_module__TagValue_64)));
#line 415 "hlds_out_module.m"
                  return;
                }
#line 414 "hlds_out_module.m"
              }
#line 416 "hlds_out_module.m"
            else
#line 416 "hlds_out_module.m"
              {
#line 416 "hlds_out_module.m"
              }
#line 375 "hlds_out_module.m"
          }
#line 373 "hlds_out_module.m"
        else
#line 380 "hlds_out_module.m"
          {
#line 382 "hlds_out_module.m"
            {
#line 382 "hlds_out_module.m"
              hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_module__HeadVar__2_2);
            }
#line 383 "hlds_out_module.m"
            {
#line 383 "hlds_out_module.m"
              mercury__io__write_string_3_p_0((MR_String) "--->    ");
            }
#line 384 "hlds_out_module.m"
            {
#line 384 "hlds_out_module.m"
              hlds__hlds_out__hlds_out_module__write_ctor_6_p_0(hlds__hlds_out__hlds_out_module__HeadVar__1_1, hlds__hlds_out__hlds_out_module__V_50_50, hlds__hlds_out__hlds_out_module__HeadVar__3_3, hlds__hlds_out__hlds_out_module__TagValues_5);
            }
#line 385 "hlds_out_module.m"
            {
#line 385 "hlds_out_module.m"
              mercury__io__write_string_3_p_0((MR_String) "\n");
            }
#line 386 "hlds_out_module.m"
            {
#line 386 "hlds_out_module.m"
              hlds__hlds_out__hlds_out_module__write_constructors_loop_7_p_0(hlds__hlds_out__hlds_out_module__HeadVar__1_1, hlds__hlds_out__hlds_out_module__HeadVar__2_2, hlds__hlds_out__hlds_out_module__HeadVar__3_3, hlds__hlds_out__hlds_out_module__V_49_49, hlds__hlds_out__hlds_out_module__TagValues_5);
#line 386 "hlds_out_module.m"
              return;
            }
#line 380 "hlds_out_module.m"
          }
#line 373 "hlds_out_module.m"
      }
#line 373 "hlds_out_module.m"
  }
#line 370 "hlds_out_module.m"
}

#line 264 "hlds_out_module.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_type_body_7_p_0(
#line 264 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__Info_8,
#line 264 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__TypeCtor_9,
#line 264 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__TypeBody_10,
#line 264 "hlds_out_module.m"
  MR_Integer hlds__hlds_out__hlds_out_module__Indent_11,
#line 264 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__TVarSet_12)
#line 264 "hlds_out_module.m"
{
#line 271 "hlds_out_module.m"
  {
#line 271 "hlds_out_module.m"
    MR_bool hlds__hlds_out__hlds_out_module__succeeded;

#line 271 "hlds_out_module.m"
    if (((MR_tag((MR_Word) hlds__hlds_out__hlds_out_module__TypeBody_10)) == (MR_mktag((MR_Integer) 1))))
#line 271 "hlds_out_module.m"
      {
#line 271 "hlds_out_module.m"
        MR_Word hlds__hlds_out__hlds_out_module__Ctors_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_module__TypeBody_10, (MR_Integer) 0)));
#line 271 "hlds_out_module.m"
        MR_Word hlds__hlds_out__hlds_out_module__ConsTagMap_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_module__TypeBody_10, (MR_Integer) 1)));
#line 271 "hlds_out_module.m"
        MR_Word hlds__hlds_out__hlds_out_module__CheaperTagTest_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_module__TypeBody_10, (MR_Integer) 2)));
#line 271 "hlds_out_module.m"
        MR_Word hlds__hlds_out__hlds_out_module__DuTypeKind_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_module__TypeBody_10, (MR_Integer) 3)));
#line 271 "hlds_out_module.m"
        MR_Word hlds__hlds_out__hlds_out_module__MaybeUserEqComp_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_module__TypeBody_10, (MR_Integer) 4)));
#line 271 "hlds_out_module.m"
        MR_Word hlds__hlds_out__hlds_out_module__MaybeDirectArgCtors_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_module__TypeBody_10, (MR_Integer) 5)));
#line 271 "hlds_out_module.m"
        MR_Word hlds__hlds_out__hlds_out_module__ReservedTag_20 = ((((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_module__TypeBody_10, (MR_Integer) 6)))) & (MR_Integer) 1);
#line 271 "hlds_out_module.m"
        MR_Word hlds__hlds_out__hlds_out_module__ReservedAddr_21 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_module__TypeBody_10, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 271 "hlds_out_module.m"
        MR_Word hlds__hlds_out__hlds_out_module__Foreign_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_module__TypeBody_10, (MR_Integer) 7)));
#line 271 "hlds_out_module.m"
        MR_Word hlds__hlds_out__hlds_out_module__MercInfo_32;
#line 339 "hlds_out_module.m"
        MR_String hlds__hlds_out__hlds_out_module__V_119_119;
#line 339 "hlds_out_module.m"
        MR_String hlds__hlds_out__hlds_out_module__V_120_120;
#line 339 "hlds_out_module.m"
        MR_Word hlds__hlds_out__hlds_out_module__V_121_121;
#line 339 "hlds_out_module.m"
        MR_Word hlds__hlds_out__hlds_out_module__V_122_122;

#line 274 "hlds_out_module.m"
        if ((hlds__hlds_out__hlds_out_module__CheaperTagTest_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 273 "hlds_out_module.m"
          {
#line 273 "hlds_out_module.m"
          }
#line 274 "hlds_out_module.m"
        else
#line 276 "hlds_out_module.m"
          {
#line 276 "hlds_out_module.m"
            MR_Word hlds__hlds_out__hlds_out_module__TypeCtorInfo_127_127;
#line 276 "hlds_out_module.m"
            MR_Word hlds__hlds_out__hlds_out_module__ExpConsId_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_module__CheaperTagTest_16, (MR_Integer) 0)));
#line 276 "hlds_out_module.m"
            MR_Word hlds__hlds_out__hlds_out_module__ExpConsTag_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_module__CheaperTagTest_16, (MR_Integer) 1)));
#line 276 "hlds_out_module.m"
            MR_Word hlds__hlds_out__hlds_out_module__CheapConsId_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_module__CheaperTagTest_16, (MR_Integer) 2)));
#line 276 "hlds_out_module.m"
            MR_Word hlds__hlds_out__hlds_out_module__CheapConsTag_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_module__CheaperTagTest_16, (MR_Integer) 3)));
#line 276 "hlds_out_module.m"
            MR_String hlds__hlds_out__hlds_out_module__V_58_58;
#line 276 "hlds_out_module.m"
            MR_String hlds__hlds_out__hlds_out_module__V_65_65;

#line 277 "hlds_out_module.m"
            {
#line 277 "hlds_out_module.m"
              hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_module__Indent_11);
            }
#line 278 "hlds_out_module.m"
            {
#line 278 "hlds_out_module.m"
              mercury__io__write_string_3_p_0((MR_String) "/* cheaper tag test: ");
            }
#line 279 "hlds_out_module.m"
            {
#line 279 "hlds_out_module.m"
              hlds__hlds_out__hlds_out_module__V_58_58 = parse_tree__prog_out__cons_id_and_arity_to_string_1_f_0(hlds__hlds_out__hlds_out_module__ExpConsId_23);
            }
#line 279 "hlds_out_module.m"
            {
#line 279 "hlds_out_module.m"
              mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_module__V_58_58);
            }
#line 280 "hlds_out_module.m"
            {
#line 280 "hlds_out_module.m"
              mercury__io__write_string_3_p_0((MR_String) " tag ");
            }
#line 6436 "hlds.hlds_out.hlds_out_module.c"
            hlds__hlds_out__hlds_out_module__TypeCtorInfo_127_127 = (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_cons_tag_0;
#line 281 "hlds_out_module.m"
            {
#line 281 "hlds_out_module.m"
              mercury__io__print_3_p_0(hlds__hlds_out__hlds_out_module__TypeCtorInfo_127_127, ((MR_Box) (hlds__hlds_out__hlds_out_module__ExpConsTag_24)));
            }
#line 282 "hlds_out_module.m"
            {
#line 282 "hlds_out_module.m"
              mercury__io__write_string_3_p_0((MR_String) " -> ");
            }
#line 283 "hlds_out_module.m"
            {
#line 283 "hlds_out_module.m"
              hlds__hlds_out__hlds_out_module__V_65_65 = parse_tree__prog_out__cons_id_and_arity_to_string_1_f_0(hlds__hlds_out__hlds_out_module__CheapConsId_25);
            }
#line 283 "hlds_out_module.m"
            {
#line 283 "hlds_out_module.m"
              mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_module__V_65_65);
            }
#line 284 "hlds_out_module.m"
            {
#line 284 "hlds_out_module.m"
              mercury__io__write_string_3_p_0((MR_String) " tag ");
            }
#line 285 "hlds_out_module.m"
            {
#line 285 "hlds_out_module.m"
              mercury__io__print_3_p_0(hlds__hlds_out__hlds_out_module__TypeCtorInfo_127_127, ((MR_Box) (hlds__hlds_out__hlds_out_module__CheapConsTag_26)));
            }
#line 286 "hlds_out_module.m"
            {
#line 286 "hlds_out_module.m"
              mercury__io__write_string_3_p_0((MR_String) " */\n");
            }
#line 276 "hlds_out_module.m"
          }
#line 292 "hlds_out_module.m"
        if ((hlds__hlds_out__hlds_out_module__DuTypeKind_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 299 "hlds_out_module.m"
          {
#line 300 "hlds_out_module.m"
            {
#line 300 "hlds_out_module.m"
              hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_module__Indent_11);
            }
#line 301 "hlds_out_module.m"
            {
#line 301 "hlds_out_module.m"
              mercury__io__write_string_3_p_0((MR_String) "/* KIND dummy */\n");
            }
#line 299 "hlds_out_module.m"
          }
#line 292 "hlds_out_module.m"
        else
#line 292 "hlds_out_module.m"
          if ((hlds__hlds_out__hlds_out_module__DuTypeKind_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 320 "hlds_out_module.m"
            {
#line 321 "hlds_out_module.m"
              {
#line 321 "hlds_out_module.m"
                hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_module__Indent_11);
              }
#line 322 "hlds_out_module.m"
              {
#line 322 "hlds_out_module.m"
                mercury__io__write_string_3_p_0((MR_String) "/* KIND general */\n");
              }
#line 320 "hlds_out_module.m"
            }
#line 292 "hlds_out_module.m"
          else
#line 292 "hlds_out_module.m"
            if ((hlds__hlds_out__hlds_out_module__DuTypeKind_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 289 "hlds_out_module.m"
              {
#line 290 "hlds_out_module.m"
                {
#line 290 "hlds_out_module.m"
                  hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_module__Indent_11);
                }
#line 291 "hlds_out_module.m"
                {
#line 291 "hlds_out_module.m"
                  mercury__io__write_string_3_p_0((MR_String) "/* KIND enumeration */\n");
                }
#line 289 "hlds_out_module.m"
              }
#line 292 "hlds_out_module.m"
            else
#line 292 "hlds_out_module.m"
              if (((MR_tag((MR_Word) hlds__hlds_out__hlds_out_module__DuTypeKind_17)) == (MR_mktag((MR_Integer) 1))))
#line 293 "hlds_out_module.m"
                {
#line 293 "hlds_out_module.m"
                  MR_Word hlds__hlds_out__hlds_out_module__Lang_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_module__DuTypeKind_17, (MR_Integer) 0)));
#line 293 "hlds_out_module.m"
                  MR_String hlds__hlds_out__hlds_out_module__V_96_96;

#line 294 "hlds_out_module.m"
                  {
#line 294 "hlds_out_module.m"
                    hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_module__Indent_11);
                  }
#line 295 "hlds_out_module.m"
                  {
#line 295 "hlds_out_module.m"
                    mercury__io__write_string_3_p_0((MR_String) "/* KIND foreign enumeration for ");
                  }
#line 296 "hlds_out_module.m"
                  {
#line 296 "hlds_out_module.m"
                    hlds__hlds_out__hlds_out_module__V_96_96 = libs__globals__foreign_language_string_1_f_0(hlds__hlds_out__hlds_out_module__Lang_27);
                  }
#line 296 "hlds_out_module.m"
                  {
#line 296 "hlds_out_module.m"
                    mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_module__V_96_96);
                  }
#line 297 "hlds_out_module.m"
                  {
#line 297 "hlds_out_module.m"
                    mercury__io__write_string_3_p_0((MR_String) " */\n");
                  }
#line 293 "hlds_out_module.m"
                }
#line 292 "hlds_out_module.m"
              else
#line 304 "hlds_out_module.m"
                {
#line 304 "hlds_out_module.m"
                  MR_Word hlds__hlds_out__hlds_out_module__FunctorName_28 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hlds_out__hlds_out_module__DuTypeKind_17, (MR_Integer) 0)));
#line 304 "hlds_out_module.m"
                  MR_Word hlds__hlds_out__hlds_out_module__ArgType_29 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hlds_out__hlds_out_module__DuTypeKind_17, (MR_Integer) 1)));
#line 304 "hlds_out_module.m"
                  MR_Word hlds__hlds_out__hlds_out_module__MaybeArgName_30 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hlds_out__hlds_out_module__DuTypeKind_17, (MR_Integer) 2)));

#line 305 "hlds_out_module.m"
                  {
#line 305 "hlds_out_module.m"
                    hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_module__Indent_11);
                  }
#line 306 "hlds_out_module.m"
                  {
#line 306 "hlds_out_module.m"
                    mercury__io__write_string_3_p_0((MR_String) "/* KIND notag: ");
                  }
#line 307 "hlds_out_module.m"
                  {
#line 307 "hlds_out_module.m"
                    parse_tree__prog_out__write_sym_name_3_p_0(hlds__hlds_out__hlds_out_module__FunctorName_28);
                  }
#line 308 "hlds_out_module.m"
                  {
#line 308 "hlds_out_module.m"
                    mercury__io__write_string_3_p_0((MR_String) ", ");
                  }
#line 309 "hlds_out_module.m"
                  {
#line 309 "hlds_out_module.m"
                    parse_tree__mercury_to_mercury__mercury_output_type_5_p_0(hlds__hlds_out__hlds_out_module__TVarSet_12, (MR_Integer) 0, hlds__hlds_out__hlds_out_module__ArgType_29);
                  }
#line 310 "hlds_out_module.m"
                  {
#line 310 "hlds_out_module.m"
                    mercury__io__write_string_3_p_0((MR_String) ", ");
                  }
#line 314 "hlds_out_module.m"
                  if ((hlds__hlds_out__hlds_out_module__MaybeArgName_30 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 315 "hlds_out_module.m"
                    {
#line 316 "hlds_out_module.m"
                      {
#line 316 "hlds_out_module.m"
                        mercury__io__write_string_3_p_0((MR_String) "no arg name");
                      }
#line 315 "hlds_out_module.m"
                    }
#line 314 "hlds_out_module.m"
                  else
#line 312 "hlds_out_module.m"
                    {
#line 312 "hlds_out_module.m"
                      MR_String hlds__hlds_out__hlds_out_module__ArgName_31 = ((MR_String) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_module__MaybeArgName_30, (MR_Integer) 0)));

#line 313 "hlds_out_module.m"
                      {
#line 313 "hlds_out_module.m"
                        mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_module__ArgName_31);
                      }
#line 312 "hlds_out_module.m"
                    }
#line 318 "hlds_out_module.m"
                  {
#line 318 "hlds_out_module.m"
                    mercury__io__write_string_3_p_0((MR_String) " */\n");
                  }
#line 304 "hlds_out_module.m"
                }
#line 328 "hlds_out_module.m"
        if ((hlds__hlds_out__hlds_out_module__ReservedTag_20 == (MR_Integer) 1))
#line 329 "hlds_out_module.m"
          {
#line 329 "hlds_out_module.m"
          }
#line 328 "hlds_out_module.m"
        else
#line 325 "hlds_out_module.m"
          {
#line 326 "hlds_out_module.m"
            {
#line 326 "hlds_out_module.m"
              hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_module__Indent_11);
            }
#line 327 "hlds_out_module.m"
            {
#line 327 "hlds_out_module.m"
              mercury__io__write_string_3_p_0((MR_String) "/* reserved_tag */\n");
            }
#line 325 "hlds_out_module.m"
          }
#line 335 "hlds_out_module.m"
        if ((hlds__hlds_out__hlds_out_module__ReservedAddr_21 == (MR_Integer) 1))
#line 336 "hlds_out_module.m"
          {
#line 336 "hlds_out_module.m"
          }
#line 335 "hlds_out_module.m"
        else
#line 332 "hlds_out_module.m"
          {
#line 333 "hlds_out_module.m"
            {
#line 333 "hlds_out_module.m"
              hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_module__Indent_11);
            }
#line 334 "hlds_out_module.m"
            {
#line 334 "hlds_out_module.m"
              mercury__io__write_string_3_p_0((MR_String) "/* reserved_address */\n");
            }
#line 332 "hlds_out_module.m"
          }
#line 338 "hlds_out_module.m"
        {
#line 338 "hlds_out_module.m"
          hlds__hlds_out__hlds_out_module__write_constructors_7_p_0(hlds__hlds_out__hlds_out_module__TypeCtor_9, hlds__hlds_out__hlds_out_module__Indent_11, hlds__hlds_out__hlds_out_module__TVarSet_12, hlds__hlds_out__hlds_out_module__Ctors_14, hlds__hlds_out__hlds_out_module__ConsTagMap_15);
        }
#line 339 "hlds_out_module.m"
        hlds__hlds_out__hlds_out_module__V_119_119 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__Info_8, (MR_Integer) 0)));
#line 339 "hlds_out_module.m"
        hlds__hlds_out__hlds_out_module__V_120_120 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__Info_8, (MR_Integer) 1)));
#line 339 "hlds_out_module.m"
        hlds__hlds_out__hlds_out_module__V_121_121 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__Info_8, (MR_Integer) 2)));
#line 339 "hlds_out_module.m"
        hlds__hlds_out__hlds_out_module__V_122_122 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__Info_8, (MR_Integer) 3)));
#line 339 "hlds_out_module.m"
        hlds__hlds_out__hlds_out_module__MercInfo_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__Info_8, (MR_Integer) 4)));
#line 340 "hlds_out_module.m"
        {
#line 340 "hlds_out_module.m"
          parse_tree__mercury_to_mercury__mercury_output_where_attributes_7_p_0(hlds__hlds_out__hlds_out_module__MercInfo_32, hlds__hlds_out__hlds_out_module__TVarSet_12, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), hlds__hlds_out__hlds_out_module__MaybeUserEqComp_18, hlds__hlds_out__hlds_out_module__MaybeDirectArgCtors_19);
        }
#line 346 "hlds_out_module.m"
        if ((hlds__hlds_out__hlds_out_module__Foreign_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 347 "hlds_out_module.m"
          {
#line 347 "hlds_out_module.m"
          }
#line 346 "hlds_out_module.m"
        else
#line 343 "hlds_out_module.m"
          {
#line 344 "hlds_out_module.m"
            {
#line 344 "hlds_out_module.m"
              hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_module__Indent_11);
            }
#line 345 "hlds_out_module.m"
            {
#line 345 "hlds_out_module.m"
              mercury__io__write_string_3_p_0((MR_String) "/* has foreign_type */\n");
            }
#line 343 "hlds_out_module.m"
          }
#line 349 "hlds_out_module.m"
        {
#line 349 "hlds_out_module.m"
          mercury__io__write_string_3_p_0((MR_String) ".\n");
#line 349 "hlds_out_module.m"
          return;
        }
#line 271 "hlds_out_module.m"
      }
#line 271 "hlds_out_module.m"
    else
#line 271 "hlds_out_module.m"
      if (((MR_tag((MR_Word) hlds__hlds_out__hlds_out_module__TypeBody_10)) == (MR_mktag((MR_Integer) 2))))
#line 351 "hlds_out_module.m"
        {
#line 351 "hlds_out_module.m"
          MR_Word hlds__hlds_out__hlds_out_module__Type_34 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hlds_out__hlds_out_module__TypeBody_10, (MR_Integer) 0)));

#line 352 "hlds_out_module.m"
          {
#line 352 "hlds_out_module.m"
            mercury__io__write_string_3_p_0((MR_String) " == ");
          }
#line 353 "hlds_out_module.m"
          {
#line 353 "hlds_out_module.m"
            parse_tree__mercury_to_mercury__mercury_output_type_5_p_0(hlds__hlds_out__hlds_out_module__TVarSet_12, (MR_Integer) 0, hlds__hlds_out__hlds_out_module__Type_34);
          }
#line 354 "hlds_out_module.m"
          {
#line 354 "hlds_out_module.m"
            mercury__io__write_string_3_p_0((MR_String) ".\n");
#line 354 "hlds_out_module.m"
            return;
          }
#line 351 "hlds_out_module.m"
        }
#line 271 "hlds_out_module.m"
      else
#line 271 "hlds_out_module.m"
        if (((MR_tag((MR_Word) hlds__hlds_out__hlds_out_module__TypeBody_10)) == (MR_mktag((MR_Integer) 0))))
#line 359 "hlds_out_module.m"
          {
#line 361 "hlds_out_module.m"
            {
#line 361 "hlds_out_module.m"
              mercury__io__write_string_3_p_0((MR_String) " == \044foreign_type.\n");
#line 361 "hlds_out_module.m"
              return;
            }
#line 359 "hlds_out_module.m"
          }
#line 271 "hlds_out_module.m"
        else
#line 271 "hlds_out_module.m"
          if (((((MR_tag((MR_Word) hlds__hlds_out__hlds_out_module__TypeBody_10)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_module__TypeBody_10, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 356 "hlds_out_module.m"
            {
#line 357 "hlds_out_module.m"
              {
#line 357 "hlds_out_module.m"
                mercury__io__write_string_3_p_0((MR_String) ".\n");
#line 357 "hlds_out_module.m"
                return;
              }
#line 356 "hlds_out_module.m"
            }
#line 271 "hlds_out_module.m"
          else
#line 363 "hlds_out_module.m"
            {
#line 363 "hlds_out_module.m"
              MR_Word hlds__hlds_out__hlds_out_module__SolverTypeDetails_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_module__TypeBody_10, (MR_Integer) 1)));
#line 363 "hlds_out_module.m"
              MR_Word hlds__hlds_out__hlds_out_module__V_40_40;
#line 363 "hlds_out_module.m"
              MR_Word hlds__hlds_out__hlds_out_module__MaybeUserEqComp_117 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_module__TypeBody_10, (MR_Integer) 2)));
#line 363 "hlds_out_module.m"
              MR_Word hlds__hlds_out__hlds_out_module__MercInfo_118 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__Info_8, (MR_Integer) 4)));
#line 364 "hlds_out_module.m"
              MR_String hlds__hlds_out__hlds_out_module__V_123_123 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__Info_8, (MR_Integer) 0)));
#line 364 "hlds_out_module.m"
              MR_String hlds__hlds_out__hlds_out_module__V_124_124 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__Info_8, (MR_Integer) 1)));
#line 364 "hlds_out_module.m"
              MR_Word hlds__hlds_out__hlds_out_module__V_125_125 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__Info_8, (MR_Integer) 2)));
#line 364 "hlds_out_module.m"
              MR_Word hlds__hlds_out__hlds_out_module__V_126_126 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__Info_8, (MR_Integer) 3)));

#line 366 "hlds_out_module.m"
              {
#line 366 "hlds_out_module.m"
                hlds__hlds_out__hlds_out_module__V_40_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 366 "hlds_out_module.m"
                MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_module__V_40_40, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_module__SolverTypeDetails_37));
#line 366 "hlds_out_module.m"
              }
#line 365 "hlds_out_module.m"
              {
#line 365 "hlds_out_module.m"
                parse_tree__mercury_to_mercury__mercury_output_where_attributes_7_p_0(hlds__hlds_out__hlds_out_module__MercInfo_118, hlds__hlds_out__hlds_out_module__TVarSet_12, hlds__hlds_out__hlds_out_module__V_40_40, hlds__hlds_out__hlds_out_module__MaybeUserEqComp_117, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
              }
#line 367 "hlds_out_module.m"
              {
#line 367 "hlds_out_module.m"
                mercury__io__write_string_3_p_0((MR_String) ".\n");
#line 367 "hlds_out_module.m"
                return;
              }
#line 363 "hlds_out_module.m"
            }
#line 271 "hlds_out_module.m"
  }
#line 264 "hlds_out_module.m"
}

#line 255 "hlds_out_module.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_type_params_loop_4_p_0(
#line 255 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__HeadVar__1_1,
#line 255 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__HeadVar__2_2)
#line 255 "hlds_out_module.m"
{
#line 258 "hlds_out_module.m"
  while (MR_TRUE)
#line 258 "hlds_out_module.m"
    {
#line 258 "hlds_out_module.m"
      /* tailcall optimized into a loop */
#line 258 "hlds_out_module.m"
      {
#line 258 "hlds_out_module.m"
        MR_bool hlds__hlds_out__hlds_out_module__succeeded;

#line 258 "hlds_out_module.m"
        if ((hlds__hlds_out__hlds_out_module__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 258 "hlds_out_module.m"
          {
#line 258 "hlds_out_module.m"
          }
#line 258 "hlds_out_module.m"
        else
#line 259 "hlds_out_module.m"
          {
#line 259 "hlds_out_module.m"
            MR_Word hlds__hlds_out__hlds_out_module__P_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_module__HeadVar__2_2, (MR_Integer) 0)));
#line 259 "hlds_out_module.m"
            MR_Word hlds__hlds_out__hlds_out_module__Ps_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_module__HeadVar__2_2, (MR_Integer) 1)));

#line 260 "hlds_out_module.m"
            {
#line 260 "hlds_out_module.m"
              mercury__io__write_string_3_p_0((MR_String) ", ");
            }
#line 261 "hlds_out_module.m"
            {
#line 261 "hlds_out_module.m"
              parse_tree__mercury_to_mercury__mercury_output_var_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, hlds__hlds_out__hlds_out_module__HeadVar__1_1, (MR_Integer) 0, hlds__hlds_out__hlds_out_module__P_10);
            }
#line 262 "hlds_out_module.m"
            /* direct tailcall eliminated */
#line 262 "hlds_out_module.m"
            {
#line 262 "hlds_out_module.m"
              MR_Word hlds__hlds_out__hlds_out_module__HeadVar__2__tmp_copy_2 = hlds__hlds_out__hlds_out_module__Ps_11;

#line 262 "hlds_out_module.m"
              hlds__hlds_out__hlds_out_module__HeadVar__2_2 = hlds__hlds_out__hlds_out_module__HeadVar__2__tmp_copy_2;
#line 262 "hlds_out_module.m"
            }
#line 262 "hlds_out_module.m"
            continue;
#line 259 "hlds_out_module.m"
          }
#line 258 "hlds_out_module.m"
      }
#line 258 "hlds_out_module.m"
      break;
#line 258 "hlds_out_module.m"
    }
#line 255 "hlds_out_module.m"
}

#line 191 "hlds_out_module.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_type_table_entries_5_p_0(
#line 191 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__Info_1,
#line 191 "hlds_out_module.m"
  MR_Integer hlds__hlds_out__hlds_out_module__Indent_2,
#line 191 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__HeadVar__3_3)
#line 191 "hlds_out_module.m"
{
#line 194 "hlds_out_module.m"
  while (MR_TRUE)
#line 194 "hlds_out_module.m"
    {
#line 194 "hlds_out_module.m"
      /* tailcall optimized into a loop */
#line 194 "hlds_out_module.m"
      {
#line 194 "hlds_out_module.m"
        MR_bool hlds__hlds_out__hlds_out_module__succeeded;

#line 194 "hlds_out_module.m"
        if ((hlds__hlds_out__hlds_out_module__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 194 "hlds_out_module.m"
          {
#line 194 "hlds_out_module.m"
          }
#line 194 "hlds_out_module.m"
        else
#line 195 "hlds_out_module.m"
          {
#line 195 "hlds_out_module.m"
            MR_Word hlds__hlds_out__hlds_out_module__TypeCtor_13;
#line 195 "hlds_out_module.m"
            MR_Word hlds__hlds_out__hlds_out_module__TypeDefn_14;
#line 195 "hlds_out_module.m"
            MR_Word hlds__hlds_out__hlds_out_module__Types_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_module__HeadVar__3_3, (MR_Integer) 1)));
#line 195 "hlds_out_module.m"
            MR_Word hlds__hlds_out__hlds_out_module__TVarSet_17;
#line 195 "hlds_out_module.m"
            MR_Word hlds__hlds_out__hlds_out_module__TypeParams_18;
#line 195 "hlds_out_module.m"
            MR_Word hlds__hlds_out__hlds_out_module__TypeBody_19;
#line 195 "hlds_out_module.m"
            MR_Word hlds__hlds_out__hlds_out_module__Status_20;
#line 195 "hlds_out_module.m"
            MR_Word hlds__hlds_out__hlds_out_module__Context_21;
#line 195 "hlds_out_module.m"
            MR_String hlds__hlds_out__hlds_out_module__DumpOptions_22;
#line 195 "hlds_out_module.m"
            MR_Word hlds__hlds_out__hlds_out_module__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_module__HeadVar__3_3, (MR_Integer) 0)));
#line 195 "hlds_out_module.m"
            MR_Integer hlds__hlds_out__hlds_out_module__V_54_54;
#line 204 "hlds_out_module.m"
            MR_String hlds__hlds_out__hlds_out_module__V_58_58;
#line 204 "hlds_out_module.m"
            MR_Word hlds__hlds_out__hlds_out_module__V_59_59;
#line 204 "hlds_out_module.m"
            MR_Word hlds__hlds_out__hlds_out_module__V_60_60;
#line 204 "hlds_out_module.m"
            MR_Word hlds__hlds_out__hlds_out_module__V_61_61;

#line 195 "hlds_out_module.m"
            hlds__hlds_out__hlds_out_module__TypeCtor_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__V_29_29, (MR_Integer) 0)));
#line 195 "hlds_out_module.m"
            hlds__hlds_out__hlds_out_module__TypeDefn_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__V_29_29, (MR_Integer) 1)));
#line 196 "hlds_out_module.m"
            {
#line 196 "hlds_out_module.m"
              hlds__hlds_data__get_type_defn_tvarset_2_p_0(hlds__hlds_out__hlds_out_module__TypeDefn_14, &hlds__hlds_out__hlds_out_module__TVarSet_17);
            }
#line 197 "hlds_out_module.m"
            {
#line 197 "hlds_out_module.m"
              hlds__hlds_data__get_type_defn_tparams_2_p_0(hlds__hlds_out__hlds_out_module__TypeDefn_14, &hlds__hlds_out__hlds_out_module__TypeParams_18);
            }
#line 198 "hlds_out_module.m"
            {
#line 198 "hlds_out_module.m"
              hlds__hlds_data__get_type_defn_body_2_p_0(hlds__hlds_out__hlds_out_module__TypeDefn_14, &hlds__hlds_out__hlds_out_module__TypeBody_19);
            }
#line 199 "hlds_out_module.m"
            {
#line 199 "hlds_out_module.m"
              hlds__hlds_data__get_type_defn_status_2_p_0(hlds__hlds_out__hlds_out_module__TypeDefn_14, &hlds__hlds_out__hlds_out_module__Status_20);
            }
#line 200 "hlds_out_module.m"
            {
#line 200 "hlds_out_module.m"
              hlds__hlds_data__get_type_defn_context_2_p_0(hlds__hlds_out__hlds_out_module__TypeDefn_14, &hlds__hlds_out__hlds_out_module__Context_21);
            }
#line 203 "hlds_out_module.m"
            {
#line 203 "hlds_out_module.m"
              mercury__io__write_char_3_p_0((MR_Char) 10);
            }
#line 204 "hlds_out_module.m"
            hlds__hlds_out__hlds_out_module__DumpOptions_22 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__Info_1, (MR_Integer) 0)));
#line 204 "hlds_out_module.m"
            hlds__hlds_out__hlds_out_module__V_58_58 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__Info_1, (MR_Integer) 1)));
#line 204 "hlds_out_module.m"
            hlds__hlds_out__hlds_out_module__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__Info_1, (MR_Integer) 2)));
#line 204 "hlds_out_module.m"
            hlds__hlds_out__hlds_out_module__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__Info_1, (MR_Integer) 3)));
#line 204 "hlds_out_module.m"
            hlds__hlds_out__hlds_out_module__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__Info_1, (MR_Integer) 4)));
#line 205 "hlds_out_module.m"
            {
#line 205 "hlds_out_module.m"
              hlds__hlds_out__hlds_out_module__succeeded = mercury__string__contains_char_2_p_0(hlds__hlds_out__hlds_out_module__DumpOptions_22, (MR_Char) 99);
            }
#line 220 "hlds_out_module.m"
            if (hlds__hlds_out__hlds_out_module__succeeded)
#line 206 "hlds_out_module.m"
              {
#line 206 "hlds_out_module.m"
                MR_String hlds__hlds_out__hlds_out_module__FileName_23;
#line 206 "hlds_out_module.m"
                MR_Integer hlds__hlds_out__hlds_out_module__LineNumber_24;

#line 206 "hlds_out_module.m"
                {
#line 206 "hlds_out_module.m"
                  mercury__term__context_file_2_p_0(hlds__hlds_out__hlds_out_module__Context_21, &hlds__hlds_out__hlds_out_module__FileName_23);
                }
#line 207 "hlds_out_module.m"
                {
#line 207 "hlds_out_module.m"
                  mercury__term__context_line_2_p_0(hlds__hlds_out__hlds_out_module__Context_21, &hlds__hlds_out__hlds_out_module__LineNumber_24);
                }
#line 208 "hlds_out_module.m"
                hlds__hlds_out__hlds_out_module__succeeded = (strcmp(hlds__hlds_out__hlds_out_module__FileName_23, (MR_String) "") == 0);
#line 208 "hlds_out_module.m"
                hlds__hlds_out__hlds_out_module__succeeded = !(hlds__hlds_out__hlds_out_module__succeeded);
#line 217 "hlds_out_module.m"
                if (hlds__hlds_out__hlds_out_module__succeeded)
#line 209 "hlds_out_module.m"
                  {
#line 209 "hlds_out_module.m"
                    MR_String hlds__hlds_out__hlds_out_module__V_42_42;

#line 209 "hlds_out_module.m"
                    {
#line 209 "hlds_out_module.m"
                      hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_module__Indent_2);
                    }
#line 210 "hlds_out_module.m"
                    {
#line 210 "hlds_out_module.m"
                      mercury__io__write_string_3_p_0((MR_String) "% context: file \140");
                    }
#line 211 "hlds_out_module.m"
                    {
#line 211 "hlds_out_module.m"
                      mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_module__FileName_23);
                    }
#line 212 "hlds_out_module.m"
                    {
#line 212 "hlds_out_module.m"
                      mercury__io__write_string_3_p_0((MR_String) "\', line ");
                    }
#line 213 "hlds_out_module.m"
                    {
#line 213 "hlds_out_module.m"
                      mercury__io__write_int_3_p_0(hlds__hlds_out__hlds_out_module__LineNumber_24);
                    }
#line 214 "hlds_out_module.m"
                    {
#line 214 "hlds_out_module.m"
                      mercury__io__write_string_3_p_0((MR_String) ", status ");
                    }
#line 215 "hlds_out_module.m"
                    {
#line 215 "hlds_out_module.m"
                      hlds__hlds_out__hlds_out_module__V_42_42 = hlds__hlds_out__hlds_out_pred__import_status_to_string_1_f_0(hlds__hlds_out__hlds_out_module__Status_20);
                    }
#line 215 "hlds_out_module.m"
                    {
#line 215 "hlds_out_module.m"
                      mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_module__V_42_42);
                    }
#line 216 "hlds_out_module.m"
                    {
#line 216 "hlds_out_module.m"
                      mercury__io__write_char_3_p_0((MR_Char) 10);
                    }
#line 209 "hlds_out_module.m"
                  }
#line 217 "hlds_out_module.m"
                else
#line 217 "hlds_out_module.m"
                  {
#line 217 "hlds_out_module.m"
                  }
#line 206 "hlds_out_module.m"
              }
#line 220 "hlds_out_module.m"
            else
#line 220 "hlds_out_module.m"
              {
#line 220 "hlds_out_module.m"
              }
#line 224 "hlds_out_module.m"
            {
#line 224 "hlds_out_module.m"
              hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_module__Indent_2);
            }
#line 227 "hlds_out_module.m"
            if (((((MR_tag((MR_Word) hlds__hlds_out__hlds_out_module__TypeBody_19)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_module__TypeBody_19, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 227 "hlds_out_module.m"
              {
#line 227 "hlds_out_module.m"
                MR_Word hlds__hlds_out__hlds_out_module__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_module__TypeBody_19, (MR_Integer) 1)));

#line 227 "hlds_out_module.m"
                hlds__hlds_out__hlds_out_module__succeeded = (hlds__hlds_out__hlds_out_module__V_47_47 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 227 "hlds_out_module.m"
              }
#line 227 "hlds_out_module.m"
            else
#line 227 "hlds_out_module.m"
              if (((((MR_tag((MR_Word) hlds__hlds_out__hlds_out_module__TypeBody_19)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_module__TypeBody_19, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 226 "hlds_out_module.m"
                hlds__hlds_out__hlds_out_module__succeeded = MR_TRUE;
#line 227 "hlds_out_module.m"
              else
#line 227 "hlds_out_module.m"
                hlds__hlds_out__hlds_out_module__succeeded = MR_FALSE;
#line 231 "hlds_out_module.m"
            if (hlds__hlds_out__hlds_out_module__succeeded)
#line 230 "hlds_out_module.m"
              {
#line 230 "hlds_out_module.m"
                {
#line 230 "hlds_out_module.m"
                  mercury__io__write_string_3_p_0((MR_String) ":- solver type ");
                }
#line 230 "hlds_out_module.m"
              }
#line 231 "hlds_out_module.m"
            else
#line 232 "hlds_out_module.m"
              {
#line 232 "hlds_out_module.m"
                {
#line 232 "hlds_out_module.m"
                  mercury__io__write_string_3_p_0((MR_String) ":- type ");
                }
#line 232 "hlds_out_module.m"
              }
#line 234 "hlds_out_module.m"
            {
#line 234 "hlds_out_module.m"
              parse_tree__prog_out__write_type_name_3_p_0(hlds__hlds_out__hlds_out_module__TypeCtor_13);
            }
#line 243 "hlds_out_module.m"
            if ((hlds__hlds_out__hlds_out_module__TypeParams_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 243 "hlds_out_module.m"
              {
#line 243 "hlds_out_module.m"
              }
#line 243 "hlds_out_module.m"
            else
#line 243 "hlds_out_module.m"
              {
#line 243 "hlds_out_module.m"
                MR_Word hlds__hlds_out__hlds_out_module__V_95_95 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_module__TypeParams_18, (MR_Integer) 1)));
#line 243 "hlds_out_module.m"
                MR_Word hlds__hlds_out__hlds_out_module__V_96_96 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_module__TypeParams_18, (MR_Integer) 0)));

#line 243 "hlds_out_module.m"
                if ((hlds__hlds_out__hlds_out_module__V_95_95 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 244 "hlds_out_module.m"
                  {
#line 245 "hlds_out_module.m"
                    {
#line 245 "hlds_out_module.m"
                      mercury__io__write_string_3_p_0((MR_String) "(");
                    }
#line 246 "hlds_out_module.m"
                    {
#line 246 "hlds_out_module.m"
                      parse_tree__mercury_to_mercury__mercury_output_var_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, hlds__hlds_out__hlds_out_module__TVarSet_17, (MR_Integer) 0, hlds__hlds_out__hlds_out_module__V_96_96);
                    }
#line 247 "hlds_out_module.m"
                    {
#line 247 "hlds_out_module.m"
                      mercury__io__write_string_3_p_0((MR_String) ")");
                    }
#line 244 "hlds_out_module.m"
                  }
#line 243 "hlds_out_module.m"
                else
#line 248 "hlds_out_module.m"
                  {
#line 248 "hlds_out_module.m"
                    MR_Word hlds__hlds_out__hlds_out_module__P_102;
#line 248 "hlds_out_module.m"
                    MR_Word hlds__hlds_out__hlds_out_module__Ps_103;

#line 250 "hlds_out_module.m"
                    {
#line 250 "hlds_out_module.m"
                      mercury__io__write_string_3_p_0((MR_String) "(");
                    }
#line 251 "hlds_out_module.m"
                    {
#line 251 "hlds_out_module.m"
                      parse_tree__mercury_to_mercury__mercury_output_var_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, hlds__hlds_out__hlds_out_module__TVarSet_17, (MR_Integer) 0, hlds__hlds_out__hlds_out_module__V_96_96);
                    }
#line 259 "hlds_out_module.m"
                    hlds__hlds_out__hlds_out_module__P_102 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_module__V_95_95, (MR_Integer) 0)));
#line 259 "hlds_out_module.m"
                    hlds__hlds_out__hlds_out_module__Ps_103 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_module__V_95_95, (MR_Integer) 1)));
#line 260 "hlds_out_module.m"
                    {
#line 260 "hlds_out_module.m"
                      mercury__io__write_string_3_p_0((MR_String) ", ");
                    }
#line 261 "hlds_out_module.m"
                    {
#line 261 "hlds_out_module.m"
                      parse_tree__mercury_to_mercury__mercury_output_var_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, hlds__hlds_out__hlds_out_module__TVarSet_17, (MR_Integer) 0, hlds__hlds_out__hlds_out_module__P_102);
                    }
#line 262 "hlds_out_module.m"
                    {
#line 262 "hlds_out_module.m"
                      hlds__hlds_out__hlds_out_module__write_type_params_loop_4_p_0(hlds__hlds_out__hlds_out_module__TVarSet_17, hlds__hlds_out__hlds_out_module__Ps_103);
                    }
#line 253 "hlds_out_module.m"
                    {
#line 253 "hlds_out_module.m"
                      mercury__io__write_string_3_p_0((MR_String) ")");
                    }
#line 248 "hlds_out_module.m"
                  }
#line 243 "hlds_out_module.m"
              }
#line 236 "hlds_out_module.m"
            hlds__hlds_out__hlds_out_module__V_54_54 = (hlds__hlds_out__hlds_out_module__Indent_2 + (MR_Integer) 1);
#line 236 "hlds_out_module.m"
            {
#line 236 "hlds_out_module.m"
              hlds__hlds_out__hlds_out_module__write_type_body_7_p_0(hlds__hlds_out__hlds_out_module__Info_1, hlds__hlds_out__hlds_out_module__TypeCtor_13, hlds__hlds_out__hlds_out_module__TypeBody_19, hlds__hlds_out__hlds_out_module__V_54_54, hlds__hlds_out__hlds_out_module__TVarSet_17);
            }
#line 238 "hlds_out_module.m"
            /* direct tailcall eliminated */
#line 238 "hlds_out_module.m"
            {
#line 238 "hlds_out_module.m"
              MR_Word hlds__hlds_out__hlds_out_module__HeadVar__3__tmp_copy_3 = hlds__hlds_out__hlds_out_module__Types_15;

#line 238 "hlds_out_module.m"
              hlds__hlds_out__hlds_out_module__HeadVar__3_3 = hlds__hlds_out__hlds_out_module__HeadVar__3__tmp_copy_3;
#line 238 "hlds_out_module.m"
            }
#line 238 "hlds_out_module.m"
            continue;
#line 195 "hlds_out_module.m"
          }
#line 194 "hlds_out_module.m"
      }
#line 194 "hlds_out_module.m"
      break;
#line 194 "hlds_out_module.m"
    }
#line 191 "hlds_out_module.m"
}

#line 181 "hlds_out_module.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_types_5_p_0(
#line 181 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__Info_6,
#line 181 "hlds_out_module.m"
  MR_Integer hlds__hlds_out__hlds_out_module__Indent_7,
#line 181 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__TypeTable_8)
#line 181 "hlds_out_module.m"
{
#line 184 "hlds_out_module.m"
  {
#line 184 "hlds_out_module.m"
    MR_bool hlds__hlds_out__hlds_out_module__succeeded;
#line 184 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__TypeAssocList_10;

#line 185 "hlds_out_module.m"
    {
#line 185 "hlds_out_module.m"
      hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_module__Indent_7);
    }
#line 186 "hlds_out_module.m"
    {
#line 186 "hlds_out_module.m"
      mercury__io__write_string_3_p_0((MR_String) "%-------- Types --------\n");
    }
#line 187 "hlds_out_module.m"
    {
#line 187 "hlds_out_module.m"
      hlds__hlds_data__get_all_type_ctor_defns_2_p_0(hlds__hlds_out__hlds_out_module__TypeTable_8, &hlds__hlds_out__hlds_out_module__TypeAssocList_10);
    }
#line 188 "hlds_out_module.m"
    {
#line 188 "hlds_out_module.m"
      hlds__hlds_out__hlds_out_module__write_type_table_entries_5_p_0(hlds__hlds_out__hlds_out_module__Info_6, hlds__hlds_out__hlds_out_module__Indent_7, hlds__hlds_out__hlds_out_module__TypeAssocList_10);
    }
#line 189 "hlds_out_module.m"
    {
#line 189 "hlds_out_module.m"
      mercury__io__nl_2_p_0();
#line 189 "hlds_out_module.m"
      return;
    }
#line 184 "hlds_out_module.m"
  }
#line 181 "hlds_out_module.m"
}

#line 153 "hlds_out_module.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_footer_4_p_0(
#line 153 "hlds_out_module.m"
  MR_Integer hlds__hlds_out__hlds_out_module__Indent_5,
#line 153 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__Module_6)
#line 153 "hlds_out_module.m"
{
#line 155 "hlds_out_module.m"
  {
#line 155 "hlds_out_module.m"
    MR_bool hlds__hlds_out__hlds_out_module__succeeded;
#line 155 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__Name_8;

#line 156 "hlds_out_module.m"
    {
#line 156 "hlds_out_module.m"
      hlds__hlds_module__module_info_get_name_2_p_0(hlds__hlds_out__hlds_out_module__Module_6, &hlds__hlds_out__hlds_out_module__Name_8);
    }
#line 157 "hlds_out_module.m"
    {
#line 157 "hlds_out_module.m"
      hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_module__Indent_5);
    }
#line 158 "hlds_out_module.m"
    {
#line 158 "hlds_out_module.m"
      mercury__io__write_string_3_p_0((MR_String) ":- end_module ");
    }
#line 159 "hlds_out_module.m"
    {
#line 159 "hlds_out_module.m"
      parse_tree__prog_out__write_sym_name_3_p_0(hlds__hlds_out__hlds_out_module__Name_8);
    }
#line 160 "hlds_out_module.m"
    {
#line 160 "hlds_out_module.m"
      mercury__io__write_string_3_p_0((MR_String) ".\n");
#line 160 "hlds_out_module.m"
      return;
    }
#line 155 "hlds_out_module.m"
  }
#line 153 "hlds_out_module.m"
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
#line 1090 "hlds_out_module.m"
  {
#line 1090 "hlds_out_module.m"
    MR_bool hlds__hlds_out__hlds_out_module__succeeded;

#line 1090 "hlds_out_module.m"
    {
#line 1090 "hlds_out_module.m"
      hlds__hlds_out__hlds_out_module__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_112_114_111_109_105_115_101_95_95_91_53_44_32_57_93_95_48_13_p_0(hlds__hlds_out__hlds_out_module__Info_14, hlds__hlds_out__hlds_out_module__PromiseType_15, hlds__hlds_out__hlds_out_module__Indent_16, hlds__hlds_out__hlds_out_module__ModuleInfo_17, hlds__hlds_out__hlds_out_module__VarSet_19, hlds__hlds_out__hlds_out_module__AppendVarNums_20, hlds__hlds_out__hlds_out_module__HeadVars_21, hlds__hlds_out__hlds_out_module__Clause_23, hlds__hlds_out__hlds_out_module__TypeQual_24);
#line 1090 "hlds_out_module.m"
      return;
    }
#line 1090 "hlds_out_module.m"
  }
#line 34 "hlds_out_module.m"
}

#line 173 "hlds_out_module.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_hlds_4_p_0_1(
#line 173 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__closure_arg,
#line 173 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_1,
#line 173 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_2,
#line 173 "hlds_out_module.m"
  MR_Box * hlds__hlds_out__hlds_out_module__wrapper_arg_3)
#line 173 "hlds_out_module.m"
{
#line 173 "hlds_out_module.m"
  {
#line 173 "hlds_out_module.m"
    MR_Box hlds__hlds_out__hlds_out_module__closure = hlds__hlds_out__hlds_out_module__closure_arg;

#line 173 "hlds_out_module.m"
    {
#line 173 "hlds_out_module.m"
      parse_tree__prog_out__write_sym_name_3_p_0(((MR_Word) hlds__hlds_out__hlds_out_module__wrapper_arg_1));
#line 173 "hlds_out_module.m"
      return;
    }
#line 173 "hlds_out_module.m"
  }
#line 173 "hlds_out_module.m"
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
    MR_Word hlds__hlds_out__hlds_out_module__Name_59;
#line 82 "hlds_out_module.m"
    MR_String hlds__hlds_out__hlds_out_module__V_50_50;
#line 82 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__V_51_51;
#line 82 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__V_52_52;
#line 82 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__V_53_53;

#line 74 "hlds_out_module.m"
    {
#line 74 "hlds_out_module.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(hlds__hlds_out__hlds_out_module__ModuleInfo_6, &hlds__hlds_out__hlds_out_module__Globals_8);
    }
#line 75 "hlds_out_module.m"
    {
#line 75 "hlds_out_module.m"
      libs__globals__lookup_accumulating_option_3_p_0(hlds__hlds_out__hlds_out_module__Globals_8, (MR_Integer) 146, &hlds__hlds_out__hlds_out_module__DumpPredIdStrs_9);
    }
#line 77 "hlds_out_module.m"
    {
#line 77 "hlds_out_module.m"
      libs__globals__lookup_accumulating_option_3_p_0(hlds__hlds_out__hlds_out_module__Globals_8, (MR_Integer) 147, &hlds__hlds_out__hlds_out_module__DumpPredNames_10);
    }
#line 145 "hlds_out_module.m"
    {
#line 145 "hlds_out_module.m"
      hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_module__Indent_5);
    }
#line 146 "hlds_out_module.m"
    {
#line 146 "hlds_out_module.m"
      mercury__io__write_string_3_p_0((MR_String) "% vim: ts=2 sw=2\n\n");
    }
#line 147 "hlds_out_module.m"
    {
#line 147 "hlds_out_module.m"
      hlds__hlds_module__module_info_get_name_2_p_0(hlds__hlds_out__hlds_out_module__ModuleInfo_6, &hlds__hlds_out__hlds_out_module__Name_59);
    }
#line 148 "hlds_out_module.m"
    {
#line 148 "hlds_out_module.m"
      hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_module__Indent_5);
    }
#line 149 "hlds_out_module.m"
    {
#line 149 "hlds_out_module.m"
      mercury__io__write_string_3_p_0((MR_String) ":- module ");
    }
#line 150 "hlds_out_module.m"
    {
#line 150 "hlds_out_module.m"
      parse_tree__prog_out__write_sym_name_3_p_0(hlds__hlds_out__hlds_out_module__Name_59);
    }
#line 151 "hlds_out_module.m"
    {
#line 151 "hlds_out_module.m"
      mercury__io__write_string_3_p_0((MR_String) ".\n\n");
    }
#line 80 "hlds_out_module.m"
    {
#line 80 "hlds_out_module.m"
      hlds__hlds_out__hlds_out_module__Info_11 = hlds__hlds_out__hlds_out_util__init_hlds_out_info_1_f_0(hlds__hlds_out__hlds_out_module__Globals_8);
    }
#line 82 "hlds_out_module.m"
    hlds__hlds_out__hlds_out_module__DumpOptions_13 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__Info_11, (MR_Integer) 0)));
#line 82 "hlds_out_module.m"
    hlds__hlds_out__hlds_out_module__V_50_50 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__Info_11, (MR_Integer) 1)));
#line 82 "hlds_out_module.m"
    hlds__hlds_out__hlds_out_module__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__Info_11, (MR_Integer) 2)));
#line 82 "hlds_out_module.m"
    hlds__hlds_out__hlds_out_module__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__Info_11, (MR_Integer) 3)));
#line 82 "hlds_out_module.m"
    hlds__hlds_out__hlds_out_module__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__Info_11, (MR_Integer) 4)));
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
#line 98 "hlds_out_module.m"
      {
#line 93 "hlds_out_module.m"
        {
#line 93 "hlds_out_module.m"
          hlds__hlds_out__hlds_out_module__succeeded = mercury__string__contains_char_2_p_0(hlds__hlds_out__hlds_out_module__DumpOptions_13, (MR_Char) 73);
        }
#line 96 "hlds_out_module.m"
        if (hlds__hlds_out__hlds_out_module__succeeded)
#line 94 "hlds_out_module.m"
          {
#line 94 "hlds_out_module.m"
            MR_Word hlds__hlds_out__hlds_out_module__TypeCtorInfo_19_83;
#line 94 "hlds_out_module.m"
            MR_Word hlds__hlds_out__hlds_out_module__Imports_18;
#line 94 "hlds_out_module.m"
            MR_Word hlds__hlds_out__hlds_out_module__V_77_77;

#line 94 "hlds_out_module.m"
            {
#line 94 "hlds_out_module.m"
              hlds__hlds_module__module_info_get_imported_module_specifiers_2_p_0(hlds__hlds_out__hlds_out_module__ModuleInfo_6, &hlds__hlds_out__hlds_out_module__Imports_18);
            }
#line 171 "hlds_out_module.m"
            {
#line 171 "hlds_out_module.m"
              hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_module__Indent_5);
            }
#line 172 "hlds_out_module.m"
            {
#line 172 "hlds_out_module.m"
              mercury__io__write_string_3_p_0((MR_String) ":- import_module ");
            }
#line 7634 "hlds.hlds_out.hlds_out_module.c"
            hlds__hlds_out__hlds_out_module__TypeCtorInfo_19_83 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
#line 173 "hlds_out_module.m"
            {
#line 173 "hlds_out_module.m"
              hlds__hlds_out__hlds_out_module__V_77_77 = mercury__set__to_sorted_list_1_f_0(hlds__hlds_out__hlds_out_module__TypeCtorInfo_19_83, hlds__hlds_out__hlds_out_module__Imports_18);
            }
#line 173 "hlds_out_module.m"
            {
#line 173 "hlds_out_module.m"
              mercury__io__write_list_5_p_0(hlds__hlds_out__hlds_out_module__TypeCtorInfo_19_83, hlds__hlds_out__hlds_out_module__V_77_77, (MR_String) ", ", (MR_Word) &hlds__hlds_out__hlds_out_module_scalar_common_2[6]);
            }
#line 174 "hlds_out_module.m"
            {
#line 174 "hlds_out_module.m"
              mercury__io__write_string_3_p_0((MR_String) ".\n\n");
            }
#line 94 "hlds_out_module.m"
          }
#line 96 "hlds_out_module.m"
        else
#line 96 "hlds_out_module.m"
          {
#line 96 "hlds_out_module.m"
          }
#line 99 "hlds_out_module.m"
        {
#line 99 "hlds_out_module.m"
          hlds__hlds_out__hlds_out_module__succeeded = mercury__string__contains_char_2_p_0(hlds__hlds_out__hlds_out_module__DumpOptions_13, (MR_Char) 84);
        }
#line 106 "hlds_out_module.m"
        if (hlds__hlds_out__hlds_out_module__succeeded)
#line 100 "hlds_out_module.m"
          {
#line 100 "hlds_out_module.m"
            MR_Word hlds__hlds_out__hlds_out_module__TypeTable_19;
#line 100 "hlds_out_module.m"
            MR_Word hlds__hlds_out__hlds_out_module__InstanceTable_20;
#line 100 "hlds_out_module.m"
            MR_Word hlds__hlds_out__hlds_out_module__ClassTable_21;

#line 100 "hlds_out_module.m"
            {
#line 100 "hlds_out_module.m"
              hlds__hlds_module__module_info_get_type_table_2_p_0(hlds__hlds_out__hlds_out_module__ModuleInfo_6, &hlds__hlds_out__hlds_out_module__TypeTable_19);
            }
#line 101 "hlds_out_module.m"
            {
#line 101 "hlds_out_module.m"
              hlds__hlds_module__module_info_get_instance_table_2_p_0(hlds__hlds_out__hlds_out_module__ModuleInfo_6, &hlds__hlds_out__hlds_out_module__InstanceTable_20);
            }
#line 102 "hlds_out_module.m"
            {
#line 102 "hlds_out_module.m"
              hlds__hlds_module__module_info_get_class_table_2_p_0(hlds__hlds_out__hlds_out_module__ModuleInfo_6, &hlds__hlds_out__hlds_out_module__ClassTable_21);
            }
#line 103 "hlds_out_module.m"
            {
#line 103 "hlds_out_module.m"
              hlds__hlds_out__hlds_out_module__write_types_5_p_0(hlds__hlds_out__hlds_out_module__Info_11, hlds__hlds_out__hlds_out_module__Indent_5, hlds__hlds_out__hlds_out_module__TypeTable_19);
            }
#line 104 "hlds_out_module.m"
            {
#line 104 "hlds_out_module.m"
              hlds__hlds_out__hlds_out_module__write_classes_5_p_0(hlds__hlds_out__hlds_out_module__Info_11, hlds__hlds_out__hlds_out_module__Indent_5, hlds__hlds_out__hlds_out_module__ClassTable_21);
            }
#line 105 "hlds_out_module.m"
            {
#line 105 "hlds_out_module.m"
              hlds__hlds_out__hlds_out_module__write_instances_5_p_0(hlds__hlds_out__hlds_out_module__Info_11, hlds__hlds_out__hlds_out_module__Indent_5, hlds__hlds_out__hlds_out_module__InstanceTable_20);
            }
#line 100 "hlds_out_module.m"
          }
#line 106 "hlds_out_module.m"
        else
#line 106 "hlds_out_module.m"
          {
#line 106 "hlds_out_module.m"
          }
#line 109 "hlds_out_module.m"
        {
#line 109 "hlds_out_module.m"
          hlds__hlds_out__hlds_out_module__succeeded = mercury__string__contains_char_2_p_0(hlds__hlds_out__hlds_out_module__DumpOptions_13, (MR_Char) 77);
        }
#line 116 "hlds_out_module.m"
        if (hlds__hlds_out__hlds_out_module__succeeded)
#line 110 "hlds_out_module.m"
          {
#line 110 "hlds_out_module.m"
            MR_Word hlds__hlds_out__hlds_out_module__InstTable_22;
#line 110 "hlds_out_module.m"
            MR_Integer hlds__hlds_out__hlds_out_module__InstLimit_24;
#line 111 "hlds_out_module.m"
            MR_Word hlds__hlds_out__hlds_out_module__ModeTable_23;

#line 110 "hlds_out_module.m"
            {
#line 110 "hlds_out_module.m"
              hlds__hlds_module__module_info_get_inst_table_2_p_0(hlds__hlds_out__hlds_out_module__ModuleInfo_6, &hlds__hlds_out__hlds_out_module__InstTable_22);
            }
#line 111 "hlds_out_module.m"
            {
#line 111 "hlds_out_module.m"
              hlds__hlds_module__module_info_get_mode_table_2_p_0(hlds__hlds_out__hlds_out_module__ModuleInfo_6, &hlds__hlds_out__hlds_out_module__ModeTable_23);
            }
#line 112 "hlds_out_module.m"
            {
#line 112 "hlds_out_module.m"
              libs__globals__lookup_int_option_3_p_0(hlds__hlds_out__hlds_out_module__Globals_8, (MR_Integer) 151, &hlds__hlds_out__hlds_out_module__InstLimit_24);
            }
#line 114 "hlds_out_module.m"
            {
#line 114 "hlds_out_module.m"
              hlds__hlds_out__hlds_out_module__write_inst_table_6_p_0((MR_Integer) 1, hlds__hlds_out__hlds_out_module__Indent_5, hlds__hlds_out__hlds_out_module__InstLimit_24, hlds__hlds_out__hlds_out_module__InstTable_22);
            }
#line 115 "hlds_out_module.m"
            {
#line 115 "hlds_out_module.m"
              hlds__hlds_out__hlds_out_module__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_109_111_100_101_95_116_97_98_108_101_95_95_91_50_93_95_48_4_p_0(hlds__hlds_out__hlds_out_module__Indent_5);
            }
#line 110 "hlds_out_module.m"
          }
#line 116 "hlds_out_module.m"
        else
#line 116 "hlds_out_module.m"
          {
#line 116 "hlds_out_module.m"
          }
#line 119 "hlds_out_module.m"
        {
#line 119 "hlds_out_module.m"
          hlds__hlds_out__hlds_out_module__succeeded = mercury__string__contains_char_2_p_0(hlds__hlds_out__hlds_out_module__DumpOptions_13, (MR_Char) 90);
        }
#line 122 "hlds_out_module.m"
        if (hlds__hlds_out__hlds_out_module__succeeded)
#line 120 "hlds_out_module.m"
          {
#line 120 "hlds_out_module.m"
            MR_Word hlds__hlds_out__hlds_out_module__TableStructMap_25;

#line 120 "hlds_out_module.m"
            {
#line 120 "hlds_out_module.m"
              hlds__hlds_module__module_info_get_table_struct_map_2_p_0(hlds__hlds_out__hlds_out_module__ModuleInfo_6, &hlds__hlds_out__hlds_out_module__TableStructMap_25);
            }
#line 121 "hlds_out_module.m"
            {
#line 121 "hlds_out_module.m"
              hlds__hlds_out__hlds_out_module__write_table_structs_4_p_0(hlds__hlds_out__hlds_out_module__ModuleInfo_6, hlds__hlds_out__hlds_out_module__TableStructMap_25);
            }
#line 120 "hlds_out_module.m"
          }
#line 122 "hlds_out_module.m"
        else
#line 122 "hlds_out_module.m"
          {
#line 122 "hlds_out_module.m"
          }
#line 98 "hlds_out_module.m"
      }
#line 126 "hlds_out_module.m"
    {
#line 126 "hlds_out_module.m"
      hlds__hlds_out__hlds_out_module__succeeded = mercury__string__contains_char_2_p_0(hlds__hlds_out__hlds_out_module__DumpOptions_13, (MR_Char) 88);
    }
#line 129 "hlds_out_module.m"
    if (hlds__hlds_out__hlds_out_module__succeeded)
#line 127 "hlds_out_module.m"
      {
#line 127 "hlds_out_module.m"
        MR_Word hlds__hlds_out__hlds_out_module__ConstStructDb_26;

#line 127 "hlds_out_module.m"
        {
#line 127 "hlds_out_module.m"
          hlds__hlds_module__module_info_get_const_struct_db_2_p_0(hlds__hlds_out__hlds_out_module__ModuleInfo_6, &hlds__hlds_out__hlds_out_module__ConstStructDb_26);
        }
#line 128 "hlds_out_module.m"
        {
#line 128 "hlds_out_module.m"
          hlds__hlds_out__hlds_out_module__write_const_struct_db_3_p_0(hlds__hlds_out__hlds_out_module__ConstStructDb_26);
        }
#line 127 "hlds_out_module.m"
      }
#line 129 "hlds_out_module.m"
    else
#line 129 "hlds_out_module.m"
      {
#line 129 "hlds_out_module.m"
      }
#line 132 "hlds_out_module.m"
    {
#line 132 "hlds_out_module.m"
      hlds__hlds_out__hlds_out_module__succeeded = mercury__string__contains_char_2_p_0(hlds__hlds_out__hlds_out_module__DumpOptions_13, (MR_Char) 120);
    }
#line 135 "hlds_out_module.m"
    if (hlds__hlds_out__hlds_out_module__succeeded)
#line 133 "hlds_out_module.m"
      {
#line 133 "hlds_out_module.m"
        MR_Word hlds__hlds_out__hlds_out_module__PredTable_27;

#line 133 "hlds_out_module.m"
        {
#line 133 "hlds_out_module.m"
          hlds__hlds_module__module_info_get_preds_2_p_0(hlds__hlds_out__hlds_out_module__ModuleInfo_6, &hlds__hlds_out__hlds_out_module__PredTable_27);
        }
#line 134 "hlds_out_module.m"
        {
#line 134 "hlds_out_module.m"
          hlds__hlds_out__hlds_out_module__write_preds_7_p_0(hlds__hlds_out__hlds_out_module__Info_11, (MR_Integer) 1, hlds__hlds_out__hlds_out_module__Indent_5, hlds__hlds_out__hlds_out_module__ModuleInfo_6, hlds__hlds_out__hlds_out_module__PredTable_27);
        }
#line 133 "hlds_out_module.m"
      }
#line 135 "hlds_out_module.m"
    else
#line 135 "hlds_out_module.m"
      {
#line 135 "hlds_out_module.m"
      }
#line 138 "hlds_out_module.m"
    {
#line 138 "hlds_out_module.m"
      hlds__hlds_out__hlds_out_module__write_footer_4_p_0(hlds__hlds_out__hlds_out_module__Indent_5, hlds__hlds_out__hlds_out_module__ModuleInfo_6);
#line 138 "hlds_out_module.m"
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
