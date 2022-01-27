/*
** Automatically generated from `hlds_out_module.m'
** by the Mercury compiler,
** version 13.05.1, configured for x86_64-apple-darwin12.3.0.
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
#include "deconstruct.mih"
#include "digraph.mih"
#include "enum.mih"
#include "getopt_io.mih"
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



#line 993 "hlds_out_module.m"
struct hlds__hlds_out__hlds_out_module__maybe_write_pred_8_p_0_env_0_s {
#line 996 "hlds_out_module.m"
  MR_bool hlds__hlds_out__hlds_out_module__maybe_write_pred_8_p_0_env_0__succeeded;
#line 996 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__maybe_write_pred_8_p_0_env_0__DumpPredIdStrs_17;
#line 996 "hlds_out_module.m"
  MR_Integer hlds__hlds_out__hlds_out_module__maybe_write_pred_8_p_0_env_0__PredIdInt_19;
#line 1013 "hlds_out_module.m"
  jmp_buf hlds__hlds_out__hlds_out_module__maybe_write_pred_8_p_0_env_0__commit_0;
#line 1013 "hlds_out_module.m"
  MR_String hlds__hlds_out__hlds_out_module__maybe_write_pred_8_p_0_env_0__DumpPredIdStr_38;
#line 1013 "hlds_out_module.m"
  MR_Integer hlds__hlds_out__hlds_out_module__maybe_write_pred_8_p_0_env_0__DumpPredId_39;
#line 1013 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__maybe_write_pred_8_p_0_env_0__conv1_DumpPredIdStr_38;
#line 993 "hlds_out_module.m"
};


#line 158 "hlds.hlds_out.hlds_out_module.c"
static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_out__hlds_out_module__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_class_id_0__plain_hlds__hlds_data__type_ctor_info_hlds_class_defn_0;

#line 161 "hlds.hlds_out.hlds_out_module.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_out__hlds_out_module__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 164 "hlds.hlds_out.hlds_out_module.c"
static const MR_FA_TypeInfo_Struct1 hlds__hlds_out__hlds_out_module__list__ti_list_1hlds__hlds_data__type_ctor_info_hlds_instance_defn_0;

#line 167 "hlds.hlds_out.hlds_out_module.c"
static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_out__hlds_out_module__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_class_id_0__plain_list__ti_list_1hlds__hlds_data__type_ctor_info_hlds_instance_defn_0;

#line 170 "hlds.hlds_out.hlds_out_module.c"
static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_out__hlds_out_module__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_mer_inst_0__plain_parse_tree__prog_data__type_ctor_info_mer_inst_0;

#line 173 "hlds.hlds_out.hlds_out_module.c"
static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_out__hlds_out_module__pair__pti_pair_2__plain_builtin__type_ctor_info_int_0__plain_hlds__const_struct__type_ctor_info_const_struct_0;

#line 176 "hlds.hlds_out.hlds_out_module.c"
static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_out__hlds_out_module__pair__pti_pair_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_hlds__hlds_module__type_ctor_info_table_struct_info_0;

#line 179 "hlds.hlds_out.hlds_out_module.c"
static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_out__hlds_out_module__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_hlds__hlds_pred__type_ctor_info_pred_info_0;

#line 182 "hlds.hlds_out.hlds_out_module.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_out__hlds_out_module__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 185 "hlds.hlds_out.hlds_out_module.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_out__hlds_out_module__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 803 "hlds_out_module.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_module__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_109_111_100_101_95_116_97_98_108_101_95_95_91_50_93_95_48_4_p_0(
#line 803 "hlds_out_module.m"
  MR_Integer hlds__hlds_out__hlds_out_module__Indent_5);

#line 1062 "hlds_out_module.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_module__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_112_114_111_109_105_115_101_95_95_91_53_44_32_57_93_95_48_13_p_0_1(
#line 1062 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__closure_arg,
#line 1062 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_1,
#line 1062 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_2,
#line 1062 "hlds_out_module.m"
  MR_Box * hlds__hlds_out__hlds_out_module__wrapper_arg_3);

#line 1062 "hlds_out_module.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_module__IntroducedFrom__pred__write_promise__1062__1_4_p_0(
#line 1062 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__VarSet_19,
#line 1062 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__HeadVar__2_33);

#line 1013 "hlds_out_module.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_module__maybe_write_pred_8_p_0_1(
#line 1013 "hlds_out_module.m"
  void * hlds__hlds_out__hlds_out_module__env_ptr_arg);

#line 1013 "hlds_out_module.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_module__maybe_write_pred_8_p_0_3(
#line 1013 "hlds_out_module.m"
  void * hlds__hlds_out__hlds_out_module__env_ptr_arg);

#line 1013 "hlds_out_module.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_module__maybe_write_pred_8_p_0_2(
#line 1013 "hlds_out_module.m"
  void * hlds__hlds_out__hlds_out_module__env_ptr_arg);

#line 1013 "hlds_out_module.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_module__maybe_write_pred_8_p_0_4(
#line 1013 "hlds_out_module.m"
  void * hlds__hlds_out__hlds_out_module__env_ptr_arg);

#line 993 "hlds_out_module.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_module__maybe_write_pred_8_p_0(
#line 993 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__Info_9,
#line 993 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__Lang_10,
#line 993 "hlds_out_module.m"
  MR_Integer hlds__hlds_out__hlds_out_module__Indent_11,
#line 993 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__ModuleInfo_12,
#line 993 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__PredTable_13,
#line 993 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__PredId_14);

#line 990 "hlds_out_module.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_preds_7_p_0_1(
#line 990 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__closure_arg,
#line 990 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_1,
#line 990 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_2,
#line 990 "hlds_out_module.m"
  MR_Box * hlds__hlds_out__hlds_out_module__wrapper_arg_3);

#line 983 "hlds_out_module.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_preds_7_p_0(
#line 983 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__Info_8,
#line 983 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__Lang_9,
#line 983 "hlds_out_module.m"
  MR_Integer hlds__hlds_out__hlds_out_module__Indent_10,
#line 983 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__ModuleInfo_11,
#line 983 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__PredTable_12);

#line 957 "hlds_out_module.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_arg_tabling_methods_4_p_0(
#line 957 "hlds_out_module.m"
  MR_String hlds__hlds_out__hlds_out_module__HeadVar__1_1,
#line 957 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__HeadVar__2_2);

#line 902 "hlds_out_module.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_table_struct_info_4_p_0_1(
#line 902 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__closure_arg,
#line 902 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_1,
#line 902 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_2,
#line 902 "hlds_out_module.m"
  MR_Box * hlds__hlds_out__hlds_out_module__wrapper_arg_3);

#line 887 "hlds_out_module.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_table_struct_info_4_p_0(
#line 887 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__ModuleInfo_5,
#line 887 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__HeadVar__2_2);

#line 884 "hlds_out_module.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_table_structs_4_p_0_1(
#line 884 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__closure_arg,
#line 884 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_1,
#line 884 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_2,
#line 884 "hlds_out_module.m"
  MR_Box * hlds__hlds_out__hlds_out_module__wrapper_arg_3);

#line 878 "hlds_out_module.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_table_structs_4_p_0(
#line 878 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__ModuleInfo_5,
#line 878 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__TableStructMap_6);

#line 850 "hlds_out_module.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_const_struct_args_4_p_0(
#line 850 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__HeadConstArg_5,
#line 850 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__TailConstArgs_6);

#line 828 "hlds_out_module.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_const_struct_3_p_0(
#line 828 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__HeadVar__1_1);

#line 825 "hlds_out_module.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_const_struct_db_3_p_0_1(
#line 825 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__closure_arg,
#line 825 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_1,
#line 825 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_2,
#line 825 "hlds_out_module.m"
  MR_Box * hlds__hlds_out__hlds_out_module__wrapper_arg_3);

#line 820 "hlds_out_module.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_const_struct_db_3_p_0(
#line 820 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__ConstStructDb_4);

#line 791 "hlds_out_module.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_inst_4_p_0(
#line 791 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__Lang_5,
#line 791 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__Inst_6);

#line 757 "hlds_out_module.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_inst_pair_maybe_inst_8_p_0(
#line 757 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__Lang_9,
#line 757 "hlds_out_module.m"
  MR_Integer hlds__hlds_out__hlds_out_module__Limit_10,
#line 757 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__HeadVar__3_3,
#line 757 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__MaybeInst_13,
#line 757 "hlds_out_module.m"
  MR_Integer hlds__hlds_out__hlds_out_module__STATE_VARIABLE_N_0_17,
#line 757 "hlds_out_module.m"
  MR_Integer * hlds__hlds_out__hlds_out_module__STATE_VARIABLE_N_18);

#line 732 "hlds_out_module.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_inst_name_maybe_inst_det_8_p_0(
#line 732 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__Lang_9,
#line 732 "hlds_out_module.m"
  MR_Integer hlds__hlds_out__hlds_out_module__Limit_10,
#line 732 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__InstName_11,
#line 732 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__MaybeInstDet_12,
#line 732 "hlds_out_module.m"
  MR_Integer hlds__hlds_out__hlds_out_module__STATE_VARIABLE_N_0_18,
#line 732 "hlds_out_module.m"
  MR_Integer * hlds__hlds_out__hlds_out_module__STATE_VARIABLE_N_19);

#line 709 "hlds_out_module.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_inst_name_maybe_inst_8_p_0(
#line 709 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__Lang_9,
#line 709 "hlds_out_module.m"
  MR_Integer hlds__hlds_out__hlds_out_module__Limit_10,
#line 709 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__InstName_11,
#line 709 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__MaybeInst_12,
#line 709 "hlds_out_module.m"
  MR_Integer hlds__hlds_out__hlds_out_module__STATE_VARIABLE_N_0_16,
#line 709 "hlds_out_module.m"
  MR_Integer * hlds__hlds_out__hlds_out_module__STATE_VARIABLE_N_17);

#line 695 "hlds_out_module.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_inst_params_5_p_0(
#line 695 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__InstVar_6,
#line 695 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__InstVars_7,
#line 695 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__InstVarSet_8);

#line 667 "hlds_out_module.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_user_inst_5_p_0(
#line 667 "hlds_out_module.m"
  MR_Integer hlds__hlds_out__hlds_out_module__Indent_6,
#line 667 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__InstId_7,
#line 667 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__InstDefn_8);

#line 654 "hlds_out_module.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_inst_table_6_p_0_4(
#line 654 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__closure_arg,
#line 654 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_1,
#line 654 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_2,
#line 654 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_3,
#line 654 "hlds_out_module.m"
  MR_Box * hlds__hlds_out__hlds_out_module__wrapper_arg_4,
#line 654 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_5,
#line 654 "hlds_out_module.m"
  MR_Box * hlds__hlds_out__hlds_out_module__wrapper_arg_6);

#line 636 "hlds_out_module.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_inst_table_6_p_0_3(
#line 636 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__closure_arg,
#line 636 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_1,
#line 636 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_2,
#line 636 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_3,
#line 636 "hlds_out_module.m"
  MR_Box * hlds__hlds_out__hlds_out_module__wrapper_arg_4,
#line 636 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_5,
#line 636 "hlds_out_module.m"
  MR_Box * hlds__hlds_out__hlds_out_module__wrapper_arg_6);

#line 630 "hlds_out_module.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_inst_table_6_p_0_2(
#line 630 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__closure_arg,
#line 630 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_1,
#line 630 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_2,
#line 630 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_3,
#line 630 "hlds_out_module.m"
  MR_Box * hlds__hlds_out__hlds_out_module__wrapper_arg_4,
#line 630 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_5,
#line 630 "hlds_out_module.m"
  MR_Box * hlds__hlds_out__hlds_out_module__wrapper_arg_6);

#line 626 "hlds_out_module.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_inst_table_6_p_0_1(
#line 626 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__closure_arg,
#line 626 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_1,
#line 626 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_2,
#line 626 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_3,
#line 626 "hlds_out_module.m"
  MR_Box * hlds__hlds_out__hlds_out_module__wrapper_arg_4);

#line 615 "hlds_out_module.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_inst_table_6_p_0(
#line 615 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__Lang_7,
#line 615 "hlds_out_module.m"
  MR_Integer hlds__hlds_out__hlds_out_module__Indent_8,
#line 615 "hlds_out_module.m"
  MR_Integer hlds__hlds_out__hlds_out_module__Limit_9,
#line 615 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__InstTable_10);

#line 583 "hlds_out_module.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_instance_defn_5_p_0_2(
#line 583 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__closure_arg,
#line 583 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_1,
#line 583 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_2,
#line 583 "hlds_out_module.m"
  MR_Box * hlds__hlds_out__hlds_out_module__wrapper_arg_3);

#line 569 "hlds_out_module.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_instance_defn_5_p_0_1(
#line 569 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__closure_arg,
#line 569 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_1,
#line 569 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_2,
#line 569 "hlds_out_module.m"
  MR_Box * hlds__hlds_out__hlds_out_module__wrapper_arg_3);

#line 540 "hlds_out_module.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_instance_defn_5_p_0(
#line 540 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__Info_6,
#line 540 "hlds_out_module.m"
  MR_Integer hlds__hlds_out__hlds_out_module__Indent_7,
#line 540 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__InstanceDefn_8);

#line 537 "hlds_out_module.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_instance_defns_5_p_0_1(
#line 537 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__closure_arg,
#line 537 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_1,
#line 537 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_2,
#line 537 "hlds_out_module.m"
  MR_Box * hlds__hlds_out__hlds_out_module__wrapper_arg_3);

#line 529 "hlds_out_module.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_instance_defns_5_p_0(
#line 529 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__Info_6,
#line 529 "hlds_out_module.m"
  MR_Integer hlds__hlds_out__hlds_out_module__Indent_7,
#line 529 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__HeadVar__3_3);

#line 525 "hlds_out_module.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_instances_5_p_0_1(
#line 525 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__closure_arg,
#line 525 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_1,
#line 525 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_2,
#line 525 "hlds_out_module.m"
  MR_Box * hlds__hlds_out__hlds_out_module__wrapper_arg_3);

#line 518 "hlds_out_module.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_instances_5_p_0(
#line 518 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__Info_6,
#line 518 "hlds_out_module.m"
  MR_Integer hlds__hlds_out__hlds_out_module__Indent_7,
#line 518 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__InstanceTable_8);

#line 502 "hlds_out_module.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_class_proc_3_p_0(
#line 502 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__HeadVar__1_1);

#line 495 "hlds_out_module.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_module__hlds_output_fundep_3_p_0_2(
#line 495 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__closure_arg,
#line 495 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_1,
#line 495 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_2,
#line 495 "hlds_out_module.m"
  MR_Box * hlds__hlds_out__hlds_out_module__wrapper_arg_3);

#line 492 "hlds_out_module.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_module__hlds_output_fundep_3_p_0_1(
#line 492 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__closure_arg,
#line 492 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_1,
#line 492 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_2,
#line 492 "hlds_out_module.m"
  MR_Box * hlds__hlds_out__hlds_out_module__wrapper_arg_3);

#line 487 "hlds_out_module.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_module__hlds_output_fundep_3_p_0(
#line 487 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__HeadVar__1_1);

#line 484 "hlds_out_module.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_class_defn_5_p_0_3(
#line 484 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__closure_arg,
#line 484 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_1,
#line 484 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_2,
#line 484 "hlds_out_module.m"
  MR_Box * hlds__hlds_out__hlds_out_module__wrapper_arg_3);

#line 478 "hlds_out_module.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_class_defn_5_p_0_2(
#line 478 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__closure_arg,
#line 478 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_1,
#line 478 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_2,
#line 478 "hlds_out_module.m"
  MR_Box * hlds__hlds_out__hlds_out_module__wrapper_arg_3);

#line 473 "hlds_out_module.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_class_defn_5_p_0_1(
#line 473 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__closure_arg,
#line 473 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_1,
#line 473 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_2,
#line 473 "hlds_out_module.m"
  MR_Box * hlds__hlds_out__hlds_out_module__wrapper_arg_3);

#line 433 "hlds_out_module.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_class_defn_5_p_0(
#line 433 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__Info_6,
#line 433 "hlds_out_module.m"
  MR_Integer hlds__hlds_out__hlds_out_module__Indent_7,
#line 433 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__HeadVar__3_3);

#line 430 "hlds_out_module.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_classes_5_p_0_1(
#line 430 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__closure_arg,
#line 430 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_1,
#line 430 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_2,
#line 430 "hlds_out_module.m"
  MR_Box * hlds__hlds_out__hlds_out_module__wrapper_arg_3);

#line 423 "hlds_out_module.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_classes_5_p_0(
#line 423 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__Info_6,
#line 423 "hlds_out_module.m"
  MR_Integer hlds__hlds_out__hlds_out_module__Indent_7,
#line 423 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__ClassTable_8);

#line 404 "hlds_out_module.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_ctor_6_p_0(
#line 404 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__TypeCtor_7,
#line 404 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__Ctor_8,
#line 404 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__TVarSet_9,
#line 404 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__TagValues_10);

#line 386 "hlds_out_module.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_constructors_loop_7_p_0(
#line 386 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__HeadVar__1_1,
#line 386 "hlds_out_module.m"
  MR_Integer hlds__hlds_out__hlds_out_module__HeadVar__2_2,
#line 386 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__HeadVar__3_3,
#line 386 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__HeadVar__4_4,
#line 386 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__TagValues_5);

#line 368 "hlds_out_module.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_constructors_7_p_0(
#line 368 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__HeadVar__1_1,
#line 368 "hlds_out_module.m"
  MR_Integer hlds__hlds_out__hlds_out_module__HeadVar__2_2,
#line 368 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__HeadVar__3_3,
#line 368 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__HeadVar__4_4,
#line 368 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__TagValues_5);

#line 263 "hlds_out_module.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_type_body_7_p_0(
#line 263 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__Info_8,
#line 263 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__TypeCtor_9,
#line 263 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__TypeBody_10,
#line 263 "hlds_out_module.m"
  MR_Integer hlds__hlds_out__hlds_out_module__Indent_11,
#line 263 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__TVarSet_12);

#line 254 "hlds_out_module.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_type_params_loop_4_p_0(
#line 254 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__HeadVar__1_1,
#line 254 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__HeadVar__2_2);

#line 190 "hlds_out_module.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_type_table_entries_5_p_0(
#line 190 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__Info_1,
#line 190 "hlds_out_module.m"
  MR_Integer hlds__hlds_out__hlds_out_module__Indent_2,
#line 190 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__HeadVar__3_3);

#line 180 "hlds_out_module.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_types_5_p_0(
#line 180 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__Info_6,
#line 180 "hlds_out_module.m"
  MR_Integer hlds__hlds_out__hlds_out_module__Indent_7,
#line 180 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__TypeTable_8);

#line 152 "hlds_out_module.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_footer_4_p_0(
#line 152 "hlds_out_module.m"
  MR_Integer hlds__hlds_out__hlds_out_module__Indent_5,
#line 152 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__Module_6);

#line 172 "hlds_out_module.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_hlds_4_p_0_1(
#line 172 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__closure_arg,
#line 172 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_1,
#line 172 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_2,
#line 172 "hlds_out_module.m"
  MR_Box * hlds__hlds_out__hlds_out_module__wrapper_arg_3);


static /* final */ const MR_Box hlds__hlds_out__hlds_out_module_scalar_common_1[3][2];

static /* final */ const MR_Box hlds__hlds_out__hlds_out_module_scalar_common_2[11][3];

static /* final */ const MR_Box hlds__hlds_out__hlds_out_module_scalar_common_3[5][6];

static /* final */ const MR_Box hlds__hlds_out__hlds_out_module_scalar_common_4[6][8];

static /* final */ const MR_Box hlds__hlds_out__hlds_out_module_scalar_common_5[4][11];

static /* final */ const MR_Box hlds__hlds_out__hlds_out_module_scalar_common_6[3][7];




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

static /* final */ const MR_Box hlds__hlds_out__hlds_out_module_scalar_common_2[11][3] = {
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
    ((MR_Box) (&hlds__hlds_out__hlds_out_module_scalar_common_3[0])),
    ((MR_Box) (hlds__hlds_out__hlds_out_module__write_hlds_4_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 6 */
  {
    ((MR_Box) (&hlds__hlds_out__hlds_out_module_scalar_common_3[1])),
    ((MR_Box) (hlds__hlds_out__hlds_out_module__write_class_defn_5_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 7 */
  {
    ((MR_Box) (&hlds__hlds_out__hlds_out_module_scalar_common_3[2])),
    ((MR_Box) (hlds__hlds_out__hlds_out_module__write_class_defn_5_p_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 8 */
  {
    ((MR_Box) (&hlds__hlds_out__hlds_out_module_scalar_common_3[3])),
    ((MR_Box) (hlds__hlds_out__hlds_out_module__hlds_output_fundep_3_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 9 */
  {
    ((MR_Box) (&hlds__hlds_out__hlds_out_module_scalar_common_3[3])),
    ((MR_Box) (hlds__hlds_out__hlds_out_module__hlds_output_fundep_3_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 10 */
  {
    ((MR_Box) (&hlds__hlds_out__hlds_out_module_scalar_common_3[4])),
    ((MR_Box) (hlds__hlds_out__hlds_out_module__write_const_struct_db_3_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box hlds__hlds_out__hlds_out_module_scalar_common_3[5][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0)),
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

static /* final */ const MR_Box hlds__hlds_out__hlds_out_module_scalar_common_5[4][11] = {
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
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 8)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__type_ctor_info_hlds_out_info_0)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__type_ctor_info_output_lang_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_module__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_hlds__hlds_pred__type_ctor_info_pred_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box hlds__hlds_out__hlds_out_module_scalar_common_6[3][7] = {
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



#line 1129 "hlds.hlds_out.hlds_out_module.c"
static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_out__hlds_out_module__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_class_id_0__plain_hlds__hlds_data__type_ctor_info_hlds_class_defn_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0,
    (MR_PseudoTypeInfo) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_class_defn_0
  }
};

#line 1138 "hlds.hlds_out.hlds_out_module.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_out__hlds_out_module__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 1146 "hlds.hlds_out.hlds_out_module.c"
static const MR_FA_TypeInfo_Struct1 hlds__hlds_out__hlds_out_module__list__ti_list_1hlds__hlds_data__type_ctor_info_hlds_instance_defn_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_instance_defn_0
  }
};

#line 1154 "hlds.hlds_out.hlds_out_module.c"
static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_out__hlds_out_module__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_class_id_0__plain_list__ti_list_1hlds__hlds_data__type_ctor_info_hlds_instance_defn_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0,
    (MR_PseudoTypeInfo) &hlds__hlds_out__hlds_out_module__list__ti_list_1hlds__hlds_data__type_ctor_info_hlds_instance_defn_0
  }
};

#line 1163 "hlds.hlds_out.hlds_out_module.c"
static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_out__hlds_out_module__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_mer_inst_0__plain_parse_tree__prog_data__type_ctor_info_mer_inst_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0,
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0
  }
};

#line 1172 "hlds.hlds_out.hlds_out_module.c"
static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_out__hlds_out_module__pair__pti_pair_2__plain_builtin__type_ctor_info_int_0__plain_hlds__const_struct__type_ctor_info_const_struct_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_PseudoTypeInfo) &hlds__const_struct__hlds__const_struct__type_ctor_info_const_struct_0
  }
};

#line 1181 "hlds.hlds_out.hlds_out_module.c"
static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_out__hlds_out_module__pair__pti_pair_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_hlds__hlds_module__type_ctor_info_table_struct_info_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
    (MR_PseudoTypeInfo) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_table_struct_info_0
  }
};

#line 1190 "hlds.hlds_out.hlds_out_module.c"
static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_out__hlds_out_module__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_hlds__hlds_pred__type_ctor_info_pred_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0,
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0
  }
};

#line 1199 "hlds.hlds_out.hlds_out_module.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_out__hlds_out_module__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1207 "hlds.hlds_out.hlds_out_module.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_out__hlds_out_module__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 803 "hlds_out_module.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_module__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_109_111_100_101_95_116_97_98_108_101_95_95_91_50_93_95_48_4_p_0(
#line 803 "hlds_out_module.m"
  MR_Integer hlds__hlds_out__hlds_out_module__Indent_5)
#line 803 "hlds_out_module.m"
{
#line 805 "hlds_out_module.m"
  {
#line 805 "hlds_out_module.m"
    MR_bool hlds__hlds_out__hlds_out_module__succeeded;

#line 807 "hlds_out_module.m"
    {
#line 807 "hlds_out_module.m"
      hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_module__Indent_5);
    }
#line 808 "hlds_out_module.m"
    {
#line 808 "hlds_out_module.m"
      mercury__io__write_string_3_p_0((MR_String) "%-------- Modes --------\n");
    }
#line 809 "hlds_out_module.m"
    {
#line 809 "hlds_out_module.m"
      hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_module__Indent_5);
    }
#line 810 "hlds_out_module.m"
    {
#line 810 "hlds_out_module.m"
      mercury__io__write_string_3_p_0((MR_String) "%%% Not yet implemented, sorry.\n");
    }
#line 813 "hlds_out_module.m"
    {
#line 813 "hlds_out_module.m"
      mercury__io__nl_2_p_0();
#line 813 "hlds_out_module.m"
      return;
    }
#line 805 "hlds_out_module.m"
  }
#line 803 "hlds_out_module.m"
}

#line 1062 "hlds_out_module.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_module__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_112_114_111_109_105_115_101_95_95_91_53_44_32_57_93_95_48_13_p_0_1(
#line 1062 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__closure_arg,
#line 1062 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_1,
#line 1062 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_2,
#line 1062 "hlds_out_module.m"
  MR_Box * hlds__hlds_out__hlds_out_module__wrapper_arg_3)
#line 1062 "hlds_out_module.m"
{
#line 1062 "hlds_out_module.m"
  {
#line 1062 "hlds_out_module.m"
    MR_Box hlds__hlds_out__hlds_out_module__closure = hlds__hlds_out__hlds_out_module__closure_arg;

#line 1062 "hlds_out_module.m"
    {
#line 1062 "hlds_out_module.m"
      hlds__hlds_out__hlds_out_module__IntroducedFrom__pred__write_promise__1062__1_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__closure, (MR_Integer) 3))), ((MR_Word) hlds__hlds_out__hlds_out_module__wrapper_arg_1));
#line 1062 "hlds_out_module.m"
      return;
    }
#line 1062 "hlds_out_module.m"
  }
#line 1062 "hlds_out_module.m"
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
#line 1060 "hlds_out_module.m"
  {
#line 1060 "hlds_out_module.m"
    MR_bool hlds__hlds_out__hlds_out_module__succeeded;
#line 1060 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__PrintVar_26;
#line 1060 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__Goal_30;
#line 1060 "hlds_out_module.m"
    MR_Integer hlds__hlds_out__hlds_out_module__V_54_54;

#line 1062 "hlds_out_module.m"
    {
#line 1062 "hlds_out_module.m"
      hlds__hlds_out__hlds_out_module__PrintVar_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1062 "hlds_out_module.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__PrintVar_26, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_module_scalar_common_6[2]));
#line 1062 "hlds_out_module.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__PrintVar_26, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_module__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_112_114_111_109_105_115_101_95_95_91_53_44_32_57_93_95_48_13_p_0_1));
#line 1062 "hlds_out_module.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__PrintVar_26, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1062 "hlds_out_module.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__PrintVar_26, 3) = ((MR_Box) (hlds__hlds_out__hlds_out_module__VarSet_19));
#line 1062 "hlds_out_module.m"
    }
#line 1066 "hlds_out_module.m"
    {
#line 1066 "hlds_out_module.m"
      hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_module__Indent_16);
    }
#line 1074 "hlds_out_module.m"
    if ((hlds__hlds_out__hlds_out_module__PromiseType_15 == (MR_Integer) 3))
#line 1070 "hlds_out_module.m"
      {
#line 1071 "hlds_out_module.m"
        {
#line 1071 "hlds_out_module.m"
          mercury__io__write_string_3_p_0((MR_String) ":- promise all [");
        }
#line 1072 "hlds_out_module.m"
        {
#line 1072 "hlds_out_module.m"
          mercury__io__write_list_5_p_0((MR_Word) &hlds__hlds_out__hlds_out_module_scalar_common_1[0], hlds__hlds_out__hlds_out_module__HeadVars_21, (MR_String) ", ", hlds__hlds_out__hlds_out_module__PrintVar_26);
        }
#line 1073 "hlds_out_module.m"
        {
#line 1073 "hlds_out_module.m"
          mercury__io__write_string_3_p_0((MR_String) "] (\n");
        }
#line 1070 "hlds_out_module.m"
      }
#line 1074 "hlds_out_module.m"
    else
#line 1078 "hlds_out_module.m"
      {
#line 1079 "hlds_out_module.m"
        {
#line 1079 "hlds_out_module.m"
          mercury__io__write_string_3_p_0((MR_String) ":- all [");
        }
#line 1080 "hlds_out_module.m"
        {
#line 1080 "hlds_out_module.m"
          mercury__io__write_list_5_p_0((MR_Word) &hlds__hlds_out__hlds_out_module_scalar_common_1[0], hlds__hlds_out__hlds_out_module__HeadVars_21, (MR_String) ", ", hlds__hlds_out__hlds_out_module__PrintVar_26);
        }
#line 1081 "hlds_out_module.m"
        {
#line 1081 "hlds_out_module.m"
          mercury__io__write_string_3_p_0((MR_String) "]");
        }
#line 1082 "hlds_out_module.m"
        {
#line 1082 "hlds_out_module.m"
          parse_tree__mercury_to_mercury__mercury_output_newline_3_p_0(hlds__hlds_out__hlds_out_module__Indent_16);
        }
#line 1083 "hlds_out_module.m"
        {
#line 1083 "hlds_out_module.m"
          parse_tree__prog_out__write_promise_type_3_p_0(hlds__hlds_out__hlds_out_module__PromiseType_15);
        }
#line 1084 "hlds_out_module.m"
        {
#line 1084 "hlds_out_module.m"
          parse_tree__mercury_to_mercury__mercury_output_newline_3_p_0(hlds__hlds_out__hlds_out_module__Indent_16);
        }
#line 1085 "hlds_out_module.m"
        {
#line 1085 "hlds_out_module.m"
          mercury__io__write_string_3_p_0((MR_String) "(\n");
        }
#line 1078 "hlds_out_module.m"
      }
#line 1088 "hlds_out_module.m"
    {
#line 1088 "hlds_out_module.m"
      hlds__hlds_out__hlds_out_module__Goal_30 = hlds__hlds_clauses__clause_body_1_f_0(hlds__hlds_out__hlds_out_module__Clause_23);
    }
#line 1089 "hlds_out_module.m"
    hlds__hlds_out__hlds_out_module__V_54_54 = (hlds__hlds_out__hlds_out_module__Indent_16 + (MR_Integer) 1);
#line 1089 "hlds_out_module.m"
    {
#line 1089 "hlds_out_module.m"
      hlds__hlds_out__hlds_out_goal__do_write_goal_10_p_0(hlds__hlds_out__hlds_out_module__Info_14, hlds__hlds_out__hlds_out_module__Goal_30, hlds__hlds_out__hlds_out_module__ModuleInfo_17, hlds__hlds_out__hlds_out_module__VarSet_19, hlds__hlds_out__hlds_out_module__AppendVarNums_20, hlds__hlds_out__hlds_out_module__V_54_54, (MR_String) ").\n", hlds__hlds_out__hlds_out_module__TypeQual_24);
#line 1089 "hlds_out_module.m"
      return;
    }
#line 1060 "hlds_out_module.m"
  }
#line 34 "hlds_out_module.m"
}

#line 1062 "hlds_out_module.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_module__IntroducedFrom__pred__write_promise__1062__1_4_p_0(
#line 1062 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__VarSet_19,
#line 1062 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__HeadVar__2_33)
#line 1062 "hlds_out_module.m"
{
#line 1062 "hlds_out_module.m"
  {
#line 1062 "hlds_out_module.m"
    MR_bool hlds__hlds_out__hlds_out_module__succeeded;

#line 1063 "hlds_out_module.m"
    {
#line 1063 "hlds_out_module.m"
      mercury__term_io__write_variable_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__hlds_out__hlds_out_module__HeadVar__2_33, hlds__hlds_out__hlds_out_module__VarSet_19);
#line 1063 "hlds_out_module.m"
      return;
    }
#line 1062 "hlds_out_module.m"
  }
#line 1062 "hlds_out_module.m"
}

#line 1013 "hlds_out_module.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_module__maybe_write_pred_8_p_0_1(
#line 1013 "hlds_out_module.m"
  void * hlds__hlds_out__hlds_out_module__env_ptr_arg)
#line 1013 "hlds_out_module.m"
{
#line 1013 "hlds_out_module.m"
  {
#line 1013 "hlds_out_module.m"
    struct hlds__hlds_out__hlds_out_module__maybe_write_pred_8_p_0_env_0_s * hlds__hlds_out__hlds_out_module__env_ptr = (struct hlds__hlds_out__hlds_out_module__maybe_write_pred_8_p_0_env_0_s *) hlds__hlds_out__hlds_out_module__env_ptr_arg;

#line 1013 "hlds_out_module.m"
    MR_builtin_longjmp((hlds__hlds_out__hlds_out_module__env_ptr)->hlds__hlds_out__hlds_out_module__maybe_write_pred_8_p_0_env_0__commit_0, 1);
#line 1013 "hlds_out_module.m"
  }
#line 1013 "hlds_out_module.m"
}

#line 1013 "hlds_out_module.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_module__maybe_write_pred_8_p_0_3(
#line 1013 "hlds_out_module.m"
  void * hlds__hlds_out__hlds_out_module__env_ptr_arg)
#line 1013 "hlds_out_module.m"
{
#line 1013 "hlds_out_module.m"
  {
#line 1013 "hlds_out_module.m"
    struct hlds__hlds_out__hlds_out_module__maybe_write_pred_8_p_0_env_0_s * hlds__hlds_out__hlds_out_module__env_ptr = (struct hlds__hlds_out__hlds_out_module__maybe_write_pred_8_p_0_env_0_s *) hlds__hlds_out__hlds_out_module__env_ptr_arg;

#line 1013 "hlds_out_module.m"
    (hlds__hlds_out__hlds_out_module__env_ptr)->hlds__hlds_out__hlds_out_module__maybe_write_pred_8_p_0_env_0__DumpPredIdStr_38 = ((MR_String) (hlds__hlds_out__hlds_out_module__env_ptr)->hlds__hlds_out__hlds_out_module__maybe_write_pred_8_p_0_env_0__conv1_DumpPredIdStr_38);
#line 1013 "hlds_out_module.m"
    {
#line 1013 "hlds_out_module.m"
      hlds__hlds_out__hlds_out_module__maybe_write_pred_8_p_0_2(hlds__hlds_out__hlds_out_module__env_ptr);
#line 1013 "hlds_out_module.m"
      return;
    }
#line 1013 "hlds_out_module.m"
  }
#line 1013 "hlds_out_module.m"
}

#line 1013 "hlds_out_module.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_module__maybe_write_pred_8_p_0_2(
#line 1013 "hlds_out_module.m"
  void * hlds__hlds_out__hlds_out_module__env_ptr_arg)
#line 1013 "hlds_out_module.m"
{
#line 1013 "hlds_out_module.m"
  {
#line 1013 "hlds_out_module.m"
    struct hlds__hlds_out__hlds_out_module__maybe_write_pred_8_p_0_env_0_s * hlds__hlds_out__hlds_out_module__env_ptr = (struct hlds__hlds_out__hlds_out_module__maybe_write_pred_8_p_0_env_0_s *) hlds__hlds_out__hlds_out_module__env_ptr_arg;

#line 1014 "hlds_out_module.m"
    {
#line 1014 "hlds_out_module.m"
      (hlds__hlds_out__hlds_out_module__env_ptr)->hlds__hlds_out__hlds_out_module__maybe_write_pred_8_p_0_env_0__succeeded = mercury__string__to_int_2_p_0((hlds__hlds_out__hlds_out_module__env_ptr)->hlds__hlds_out__hlds_out_module__maybe_write_pred_8_p_0_env_0__DumpPredIdStr_38, &(hlds__hlds_out__hlds_out_module__env_ptr)->hlds__hlds_out__hlds_out_module__maybe_write_pred_8_p_0_env_0__DumpPredId_39);
    }
#line 1013 "hlds_out_module.m"
    if ((hlds__hlds_out__hlds_out_module__env_ptr)->hlds__hlds_out__hlds_out_module__maybe_write_pred_8_p_0_env_0__succeeded)
#line 1013 "hlds_out_module.m"
      {
#line 1015 "hlds_out_module.m"
        (hlds__hlds_out__hlds_out_module__env_ptr)->hlds__hlds_out__hlds_out_module__maybe_write_pred_8_p_0_env_0__succeeded = ((hlds__hlds_out__hlds_out_module__env_ptr)->hlds__hlds_out__hlds_out_module__maybe_write_pred_8_p_0_env_0__PredIdInt_19 == (hlds__hlds_out__hlds_out_module__env_ptr)->hlds__hlds_out__hlds_out_module__maybe_write_pred_8_p_0_env_0__DumpPredId_39);
#line 1015 "hlds_out_module.m"
        if ((hlds__hlds_out__hlds_out_module__env_ptr)->hlds__hlds_out__hlds_out_module__maybe_write_pred_8_p_0_env_0__succeeded)
#line 1015 "hlds_out_module.m"
          {
#line 1015 "hlds_out_module.m"
            hlds__hlds_out__hlds_out_module__maybe_write_pred_8_p_0_1(hlds__hlds_out__hlds_out_module__env_ptr);
#line 1015 "hlds_out_module.m"
            return;
          }
#line 1013 "hlds_out_module.m"
      }
#line 1013 "hlds_out_module.m"
  }
#line 1013 "hlds_out_module.m"
}

#line 1013 "hlds_out_module.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_module__maybe_write_pred_8_p_0_4(
#line 1013 "hlds_out_module.m"
  void * hlds__hlds_out__hlds_out_module__env_ptr_arg)
#line 1013 "hlds_out_module.m"
{
#line 1013 "hlds_out_module.m"
  {
#line 1013 "hlds_out_module.m"
    struct hlds__hlds_out__hlds_out_module__maybe_write_pred_8_p_0_env_0_s * hlds__hlds_out__hlds_out_module__env_ptr = (struct hlds__hlds_out__hlds_out_module__maybe_write_pred_8_p_0_env_0_s *) hlds__hlds_out__hlds_out_module__env_ptr_arg;

#line 1013 "hlds_out_module.m"
    if (MR_builtin_setjmp((hlds__hlds_out__hlds_out_module__env_ptr)->hlds__hlds_out__hlds_out_module__maybe_write_pred_8_p_0_env_0__commit_0) == 0)
#line 1013 "hlds_out_module.m"
      {
#line 1013 "hlds_out_module.m"
        {
#line 1013 "hlds_out_module.m"
          {
#line 1013 "hlds_out_module.m"
            mercury__list__member_2_p_1((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, &(hlds__hlds_out__hlds_out_module__env_ptr)->hlds__hlds_out__hlds_out_module__maybe_write_pred_8_p_0_env_0__conv1_DumpPredIdStr_38, (hlds__hlds_out__hlds_out_module__env_ptr)->hlds__hlds_out__hlds_out_module__maybe_write_pred_8_p_0_env_0__DumpPredIdStrs_17, hlds__hlds_out__hlds_out_module__maybe_write_pred_8_p_0_3, hlds__hlds_out__hlds_out_module__env_ptr);
          }
#line 1013 "hlds_out_module.m"
        }
#line 1013 "hlds_out_module.m"
        (hlds__hlds_out__hlds_out_module__env_ptr)->hlds__hlds_out__hlds_out_module__maybe_write_pred_8_p_0_env_0__succeeded = MR_FALSE;
#line 1013 "hlds_out_module.m"
      }
#line 1013 "hlds_out_module.m"
    else
#line 1013 "hlds_out_module.m"
      (hlds__hlds_out__hlds_out_module__env_ptr)->hlds__hlds_out__hlds_out_module__maybe_write_pred_8_p_0_env_0__succeeded = MR_TRUE;
#line 1013 "hlds_out_module.m"
  }
#line 1013 "hlds_out_module.m"
}

#line 993 "hlds_out_module.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_module__maybe_write_pred_8_p_0(
#line 993 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__Info_9,
#line 993 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__Lang_10,
#line 993 "hlds_out_module.m"
  MR_Integer hlds__hlds_out__hlds_out_module__Indent_11,
#line 993 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__ModuleInfo_12,
#line 993 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__PredTable_13,
#line 993 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__PredId_14)
#line 993 "hlds_out_module.m"
{
#line 993 "hlds_out_module.m"
  {
#line 993 "hlds_out_module.m"
    struct hlds__hlds_out__hlds_out_module__maybe_write_pred_8_p_0_env_0_s hlds__hlds_out__hlds_out_module__env;

#line 996 "hlds_out_module.m"
    {
#line 996 "hlds_out_module.m"
      MR_String hlds__hlds_out__hlds_out_module__DumpOptions_16 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__Info_9, (MR_Integer) 0)));
#line 996 "hlds_out_module.m"
      MR_Word hlds__hlds_out__hlds_out_module__DumpPredNames_18;
#line 996 "hlds_out_module.m"
      MR_Word hlds__hlds_out__hlds_out_module__PredInfo_20;
#line 997 "hlds_out_module.m"
      MR_String hlds__hlds_out__hlds_out_module__V_40_40 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__Info_9, (MR_Integer) 1)));
#line 997 "hlds_out_module.m"
      MR_Word hlds__hlds_out__hlds_out_module__V_43_43;
#line 1001 "hlds_out_module.m"
      MR_Box hlds__hlds_out__hlds_out_module__conv0_PredInfo_20;

#line 997 "hlds_out_module.m"
      (hlds__hlds_out__hlds_out_module__env).hlds__hlds_out__hlds_out_module__maybe_write_pred_8_p_0_env_0__DumpPredIdStrs_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__Info_9, (MR_Integer) 2)));
#line 997 "hlds_out_module.m"
      hlds__hlds_out__hlds_out_module__DumpPredNames_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__Info_9, (MR_Integer) 3)));
#line 997 "hlds_out_module.m"
      hlds__hlds_out__hlds_out_module__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__Info_9, (MR_Integer) 4)));
#line 1000 "hlds_out_module.m"
      {
#line 1000 "hlds_out_module.m"
        hlds__hlds_pred__pred_id_to_int_2_p_0(hlds__hlds_out__hlds_out_module__PredId_14, &(hlds__hlds_out__hlds_out_module__env).hlds__hlds_out__hlds_out_module__maybe_write_pred_8_p_0_env_0__PredIdInt_19);
      }
#line 1001 "hlds_out_module.m"
      {
#line 1001 "hlds_out_module.m"
        mercury__map__lookup_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0, hlds__hlds_out__hlds_out_module__PredTable_13, ((MR_Box) (hlds__hlds_out__hlds_out_module__PredId_14)), &hlds__hlds_out__hlds_out_module__conv0_PredInfo_20);
      }
#line 1001 "hlds_out_module.m"
      hlds__hlds_out__hlds_out_module__PredInfo_20 = ((MR_Word) hlds__hlds_out__hlds_out_module__conv0_PredInfo_20);
#line 1006 "hlds_out_module.m"
      {
#line 1006 "hlds_out_module.m"
        MR_String hlds__hlds_out__hlds_out_module__V_21_21;
#line 1006 "hlds_out_module.m"
        MR_Word hlds__hlds_out__hlds_out_module__V_22_22;

#line 1006 "hlds_out_module.m"
        (hlds__hlds_out__hlds_out_module__env).hlds__hlds_out__hlds_out_module__maybe_write_pred_8_p_0_env_0__succeeded = ((MR_tag((MR_Word) (hlds__hlds_out__hlds_out_module__env).hlds__hlds_out__hlds_out_module__maybe_write_pred_8_p_0_env_0__DumpPredIdStrs_17)) == (MR_mktag((MR_Integer) 1)));
#line 1006 "hlds_out_module.m"
        if ((hlds__hlds_out__hlds_out_module__env).hlds__hlds_out__hlds_out_module__maybe_write_pred_8_p_0_env_0__succeeded)
#line 1006 "hlds_out_module.m"
          {
#line 1006 "hlds_out_module.m"
            hlds__hlds_out__hlds_out_module__V_21_21 = ((MR_String) (MR_hl_field(MR_mktag(1), (hlds__hlds_out__hlds_out_module__env).hlds__hlds_out__hlds_out_module__maybe_write_pred_8_p_0_env_0__DumpPredIdStrs_17, (MR_Integer) 0)));
#line 1006 "hlds_out_module.m"
            hlds__hlds_out__hlds_out_module__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), (hlds__hlds_out__hlds_out_module__env).hlds__hlds_out__hlds_out_module__maybe_write_pred_8_p_0_env_0__DumpPredIdStrs_17, (MR_Integer) 1)));
#line 1006 "hlds_out_module.m"
          }
#line 1006 "hlds_out_module.m"
      }
#line 1007 "hlds_out_module.m"
      if (!((hlds__hlds_out__hlds_out_module__env).hlds__hlds_out__hlds_out_module__maybe_write_pred_8_p_0_env_0__succeeded))
#line 1007 "hlds_out_module.m"
        {
#line 1007 "hlds_out_module.m"
          MR_String hlds__hlds_out__hlds_out_module__V_23_23;
#line 1007 "hlds_out_module.m"
          MR_Word hlds__hlds_out__hlds_out_module__V_24_24;

#line 1007 "hlds_out_module.m"
          (hlds__hlds_out__hlds_out_module__env).hlds__hlds_out__hlds_out_module__maybe_write_pred_8_p_0_env_0__succeeded = ((MR_tag((MR_Word) hlds__hlds_out__hlds_out_module__DumpPredNames_18)) == (MR_mktag((MR_Integer) 1)));
#line 1007 "hlds_out_module.m"
          if ((hlds__hlds_out__hlds_out_module__env).hlds__hlds_out__hlds_out_module__maybe_write_pred_8_p_0_env_0__succeeded)
#line 1007 "hlds_out_module.m"
            {
#line 1007 "hlds_out_module.m"
              hlds__hlds_out__hlds_out_module__V_23_23 = ((MR_String) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_module__DumpPredNames_18, (MR_Integer) 0)));
#line 1007 "hlds_out_module.m"
              hlds__hlds_out__hlds_out_module__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_module__DumpPredNames_18, (MR_Integer) 1)));
#line 1007 "hlds_out_module.m"
            }
#line 1007 "hlds_out_module.m"
        }
#line 1026 "hlds_out_module.m"
      if ((hlds__hlds_out__hlds_out_module__env).hlds__hlds_out__hlds_out_module__maybe_write_pred_8_p_0_env_0__succeeded)
#line 1023 "hlds_out_module.m"
        {
#line 1013 "hlds_out_module.m"
          {
#line 1013 "hlds_out_module.m"
            hlds__hlds_out__hlds_out_module__maybe_write_pred_8_p_0_4(&hlds__hlds_out__hlds_out_module__env);
          }
#line 1017 "hlds_out_module.m"
          if (!((hlds__hlds_out__hlds_out_module__env).hlds__hlds_out__hlds_out_module__maybe_write_pred_8_p_0_env_0__succeeded))
#line 1018 "hlds_out_module.m"
            {
#line 1018 "hlds_out_module.m"
              MR_String hlds__hlds_out__hlds_out_module__PredName_27;

#line 1018 "hlds_out_module.m"
              {
#line 1018 "hlds_out_module.m"
                hlds__hlds_out__hlds_out_module__PredName_27 = hlds__hlds_pred__pred_info_name_1_f_0(hlds__hlds_out__hlds_out_module__PredInfo_20);
              }
#line 1019 "hlds_out_module.m"
              {
#line 1019 "hlds_out_module.m"
                (hlds__hlds_out__hlds_out_module__env).hlds__hlds_out__hlds_out_module__maybe_write_pred_8_p_0_env_0__succeeded = mercury__list__member_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) (hlds__hlds_out__hlds_out_module__PredName_27)), hlds__hlds_out__hlds_out_module__DumpPredNames_18);
              }
#line 1018 "hlds_out_module.m"
            }
#line 1023 "hlds_out_module.m"
          if ((hlds__hlds_out__hlds_out_module__env).hlds__hlds_out__hlds_out_module__maybe_write_pred_8_p_0_env_0__succeeded)
#line 1022 "hlds_out_module.m"
            {
#line 1022 "hlds_out_module.m"
              hlds__hlds_out__hlds_out_pred__write_pred_8_p_0(hlds__hlds_out__hlds_out_module__Info_9, hlds__hlds_out__hlds_out_module__Lang_10, hlds__hlds_out__hlds_out_module__Indent_11, hlds__hlds_out__hlds_out_module__ModuleInfo_12, hlds__hlds_out__hlds_out_module__PredId_14, hlds__hlds_out__hlds_out_module__PredInfo_20);
#line 1022 "hlds_out_module.m"
              return;
            }
#line 1023 "hlds_out_module.m"
          else
#line 1022 "hlds_out_module.m"
            {
#line 1022 "hlds_out_module.m"
            }
#line 1023 "hlds_out_module.m"
        }
#line 1026 "hlds_out_module.m"
      else
#line 1049 "hlds_out_module.m"
        {
#line 1029 "hlds_out_module.m"
          {
#line 1029 "hlds_out_module.m"
            (hlds__hlds_out__hlds_out_module__env).hlds__hlds_out__hlds_out_module__maybe_write_pred_8_p_0_env_0__succeeded = mercury__string__contains_char_2_p_0(hlds__hlds_out__hlds_out_module__DumpOptions_16, (MR_Char) 73);
          }
#line 1029 "hlds_out_module.m"
          (hlds__hlds_out__hlds_out_module__env).hlds__hlds_out__hlds_out_module__maybe_write_pred_8_p_0_env_0__succeeded = !((hlds__hlds_out__hlds_out_module__env).hlds__hlds_out__hlds_out_module__maybe_write_pred_8_p_0_env_0__succeeded);
#line 1029 "hlds_out_module.m"
          if ((hlds__hlds_out__hlds_out_module__env).hlds__hlds_out__hlds_out_module__maybe_write_pred_8_p_0_env_0__succeeded)
#line 1030 "hlds_out_module.m"
            {
#line 1030 "hlds_out_module.m"
              (hlds__hlds_out__hlds_out_module__env).hlds__hlds_out__hlds_out_module__maybe_write_pred_8_p_0_env_0__succeeded = hlds__hlds_pred__pred_info_is_imported_1_p_0(hlds__hlds_out__hlds_out_module__PredInfo_20);
            }
#line 1031 "hlds_out_module.m"
          if (!((hlds__hlds_out__hlds_out_module__env).hlds__hlds_out__hlds_out_module__maybe_write_pred_8_p_0_env_0__succeeded))
#line 1031 "hlds_out_module.m"
            {
#line 1034 "hlds_out_module.m"
              {
#line 1034 "hlds_out_module.m"
                MR_Word hlds__hlds_out__hlds_out_module__ProcIds_28;
#line 1034 "hlds_out_module.m"
                MR_Integer hlds__hlds_out__hlds_out_module__ProcId_29;
#line 1034 "hlds_out_module.m"
                MR_Word hlds__hlds_out__hlds_out_module__V_35_35;
#line 1034 "hlds_out_module.m"
                MR_Integer hlds__hlds_out__hlds_out_module__V_56_56;

#line 1034 "hlds_out_module.m"
                {
#line 1034 "hlds_out_module.m"
                  (hlds__hlds_out__hlds_out_module__env).hlds__hlds_out__hlds_out_module__maybe_write_pred_8_p_0_env_0__succeeded = mercury__string__contains_char_2_p_0(hlds__hlds_out__hlds_out_module__DumpOptions_16, (MR_Char) 73);
                }
#line 1034 "hlds_out_module.m"
                (hlds__hlds_out__hlds_out_module__env).hlds__hlds_out__hlds_out_module__maybe_write_pred_8_p_0_env_0__succeeded = !((hlds__hlds_out__hlds_out_module__env).hlds__hlds_out__hlds_out_module__maybe_write_pred_8_p_0_env_0__succeeded);
#line 1034 "hlds_out_module.m"
                if ((hlds__hlds_out__hlds_out_module__env).hlds__hlds_out__hlds_out_module__maybe_write_pred_8_p_0_env_0__succeeded)
#line 1034 "hlds_out_module.m"
                  {
#line 1035 "hlds_out_module.m"
                    {
#line 1035 "hlds_out_module.m"
                      (hlds__hlds_out__hlds_out_module__env).hlds__hlds_out__hlds_out_module__maybe_write_pred_8_p_0_env_0__succeeded = hlds__hlds_pred__pred_info_is_pseudo_imported_1_p_0(hlds__hlds_out__hlds_out_module__PredInfo_20);
                    }
#line 1034 "hlds_out_module.m"
                    if ((hlds__hlds_out__hlds_out_module__env).hlds__hlds_out__hlds_out_module__maybe_write_pred_8_p_0_env_0__succeeded)
#line 1034 "hlds_out_module.m"
                      {
#line 1036 "hlds_out_module.m"
                        {
#line 1036 "hlds_out_module.m"
                          hlds__hlds_out__hlds_out_module__ProcIds_28 = hlds__hlds_pred__pred_info_procids_1_f_0(hlds__hlds_out__hlds_out_module__PredInfo_20);
                        }
#line 1037 "hlds_out_module.m"
                        {
#line 1037 "hlds_out_module.m"
                          hlds__hlds_pred__in_in_unification_proc_id_1_p_0(&hlds__hlds_out__hlds_out_module__ProcId_29);
                        }
#line 1038 "hlds_out_module.m"
                        (hlds__hlds_out__hlds_out_module__env).hlds__hlds_out__hlds_out_module__maybe_write_pred_8_p_0_env_0__succeeded = ((MR_tag((MR_Word) hlds__hlds_out__hlds_out_module__ProcIds_28)) == (MR_mktag((MR_Integer) 1)));
#line 1038 "hlds_out_module.m"
                        if ((hlds__hlds_out__hlds_out_module__env).hlds__hlds_out__hlds_out_module__maybe_write_pred_8_p_0_env_0__succeeded)
#line 1038 "hlds_out_module.m"
                          {
#line 1038 "hlds_out_module.m"
                            hlds__hlds_out__hlds_out_module__V_56_56 = ((MR_Integer) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_module__ProcIds_28, (MR_Integer) 0)));
#line 1038 "hlds_out_module.m"
                            hlds__hlds_out__hlds_out_module__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_module__ProcIds_28, (MR_Integer) 1)));
#line 1038 "hlds_out_module.m"
                            (hlds__hlds_out__hlds_out_module__env).hlds__hlds_out__hlds_out_module__maybe_write_pred_8_p_0_env_0__succeeded = (hlds__hlds_out__hlds_out_module__ProcId_29 == hlds__hlds_out__hlds_out_module__V_56_56);
#line 1034 "hlds_out_module.m"
                            if ((hlds__hlds_out__hlds_out_module__env).hlds__hlds_out__hlds_out_module__maybe_write_pred_8_p_0_env_0__succeeded)
#line 1038 "hlds_out_module.m"
                              (hlds__hlds_out__hlds_out_module__env).hlds__hlds_out__hlds_out_module__maybe_write_pred_8_p_0_env_0__succeeded = (hlds__hlds_out__hlds_out_module__V_35_35 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1038 "hlds_out_module.m"
                          }
#line 1034 "hlds_out_module.m"
                      }
#line 1034 "hlds_out_module.m"
                  }
#line 1034 "hlds_out_module.m"
              }
#line 1031 "hlds_out_module.m"
              if (!((hlds__hlds_out__hlds_out_module__env).hlds__hlds_out__hlds_out_module__maybe_write_pred_8_p_0_env_0__succeeded))
#line 1044 "hlds_out_module.m"
                {
#line 1044 "hlds_out_module.m"
                  {
#line 1044 "hlds_out_module.m"
                    (hlds__hlds_out__hlds_out_module__env).hlds__hlds_out__hlds_out_module__maybe_write_pred_8_p_0_env_0__succeeded = mercury__string__contains_char_2_p_0(hlds__hlds_out__hlds_out_module__DumpOptions_16, (MR_Char) 85);
                  }
#line 1044 "hlds_out_module.m"
                  (hlds__hlds_out__hlds_out_module__env).hlds__hlds_out__hlds_out_module__maybe_write_pred_8_p_0_env_0__succeeded = !((hlds__hlds_out__hlds_out_module__env).hlds__hlds_out__hlds_out_module__maybe_write_pred_8_p_0_env_0__succeeded);
#line 1044 "hlds_out_module.m"
                  if ((hlds__hlds_out__hlds_out_module__env).hlds__hlds_out__hlds_out_module__maybe_write_pred_8_p_0_env_0__succeeded)
#line 1045 "hlds_out_module.m"
                    {
#line 1045 "hlds_out_module.m"
                      (hlds__hlds_out__hlds_out_module__env).hlds__hlds_out__hlds_out_module__maybe_write_pred_8_p_0_env_0__succeeded = hlds__hlds_pred__is_unify_or_compare_pred_1_p_0(hlds__hlds_out__hlds_out_module__PredInfo_20);
                    }
#line 1044 "hlds_out_module.m"
                }
#line 1031 "hlds_out_module.m"
            }
#line 1049 "hlds_out_module.m"
          if ((hlds__hlds_out__hlds_out_module__env).hlds__hlds_out__hlds_out_module__maybe_write_pred_8_p_0_env_0__succeeded)
#line 1045 "hlds_out_module.m"
            {
#line 1045 "hlds_out_module.m"
            }
#line 1049 "hlds_out_module.m"
          else
#line 1050 "hlds_out_module.m"
            {
#line 1050 "hlds_out_module.m"
              hlds__hlds_out__hlds_out_pred__write_pred_8_p_0(hlds__hlds_out__hlds_out_module__Info_9, hlds__hlds_out__hlds_out_module__Lang_10, hlds__hlds_out__hlds_out_module__Indent_11, hlds__hlds_out__hlds_out_module__ModuleInfo_12, hlds__hlds_out__hlds_out_module__PredId_14, hlds__hlds_out__hlds_out_module__PredInfo_20);
#line 1050 "hlds_out_module.m"
              return;
            }
#line 1049 "hlds_out_module.m"
        }
#line 996 "hlds_out_module.m"
    }
#line 993 "hlds_out_module.m"
  }
#line 993 "hlds_out_module.m"
}

#line 990 "hlds_out_module.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_preds_7_p_0_1(
#line 990 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__closure_arg,
#line 990 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_1,
#line 990 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_2,
#line 990 "hlds_out_module.m"
  MR_Box * hlds__hlds_out__hlds_out_module__wrapper_arg_3)
#line 990 "hlds_out_module.m"
{
#line 990 "hlds_out_module.m"
  {
#line 990 "hlds_out_module.m"
    MR_Box hlds__hlds_out__hlds_out_module__closure = hlds__hlds_out__hlds_out_module__closure_arg;

#line 990 "hlds_out_module.m"
    {
#line 990 "hlds_out_module.m"
      hlds__hlds_out__hlds_out_module__maybe_write_pred_8_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__closure, (MR_Integer) 4))), ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__closure, (MR_Integer) 6))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__closure, (MR_Integer) 7))), ((MR_Word) hlds__hlds_out__hlds_out_module__wrapper_arg_1));
#line 990 "hlds_out_module.m"
      return;
    }
#line 990 "hlds_out_module.m"
  }
#line 990 "hlds_out_module.m"
}

#line 983 "hlds_out_module.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_preds_7_p_0(
#line 983 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__Info_8,
#line 983 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__Lang_9,
#line 983 "hlds_out_module.m"
  MR_Integer hlds__hlds_out__hlds_out_module__Indent_10,
#line 983 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__ModuleInfo_11,
#line 983 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__PredTable_12)
#line 983 "hlds_out_module.m"
{
#line 986 "hlds_out_module.m"
  {
#line 986 "hlds_out_module.m"
    MR_bool hlds__hlds_out__hlds_out_module__succeeded;
#line 986 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__TypeCtorInfo_22_22;
#line 986 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__PredIds_14;
#line 986 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__V_20_20;
#line 990 "hlds_out_module.m"
    MR_Box hlds__hlds_out__hlds_out_module__conv0_STATE_VARIABLE_IO_16;

#line 987 "hlds_out_module.m"
    {
#line 987 "hlds_out_module.m"
      mercury__io__write_string_3_p_0((MR_String) "%-------- Predicates --------\n\n");
    }
#line 988 "hlds_out_module.m"
    {
#line 988 "hlds_out_module.m"
      hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_module__Indent_10);
    }
#line 1916 "hlds.hlds_out.hlds_out_module.c"
    hlds__hlds_out__hlds_out_module__TypeCtorInfo_22_22 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
#line 989 "hlds_out_module.m"
    {
#line 989 "hlds_out_module.m"
      mercury__map__keys_2_p_0(hlds__hlds_out__hlds_out_module__TypeCtorInfo_22_22, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0, hlds__hlds_out__hlds_out_module__PredTable_12, &hlds__hlds_out__hlds_out_module__PredIds_14);
    }
#line 990 "hlds_out_module.m"
    {
#line 990 "hlds_out_module.m"
      hlds__hlds_out__hlds_out_module__V_20_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 990 "hlds_out_module.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__V_20_20, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_module_scalar_common_5[3]));
#line 990 "hlds_out_module.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__V_20_20, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_module__write_preds_7_p_0_1));
#line 990 "hlds_out_module.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__V_20_20, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 990 "hlds_out_module.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__V_20_20, 3) = ((MR_Box) (hlds__hlds_out__hlds_out_module__Info_8));
#line 990 "hlds_out_module.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__V_20_20, 4) = ((MR_Box) (hlds__hlds_out__hlds_out_module__Lang_9));
#line 990 "hlds_out_module.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__V_20_20, 5) = ((MR_Box) (hlds__hlds_out__hlds_out_module__Indent_10));
#line 990 "hlds_out_module.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__V_20_20, 6) = ((MR_Box) (hlds__hlds_out__hlds_out_module__ModuleInfo_11));
#line 990 "hlds_out_module.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__V_20_20, 7) = ((MR_Box) (hlds__hlds_out__hlds_out_module__PredTable_12));
#line 990 "hlds_out_module.m"
    }
#line 990 "hlds_out_module.m"
    {
#line 990 "hlds_out_module.m"
      mercury__list__foldl_4_p_2(hlds__hlds_out__hlds_out_module__TypeCtorInfo_22_22, (MR_Word) &mercury__io__io__type_ctor_info_state_0, hlds__hlds_out__hlds_out_module__V_20_20, hlds__hlds_out__hlds_out_module__PredIds_14, ((MR_Box) ((MR_Integer) 0)), &hlds__hlds_out__hlds_out_module__conv0_STATE_VARIABLE_IO_16);
    }
#line 986 "hlds_out_module.m"
  }
#line 983 "hlds_out_module.m"
}

#line 957 "hlds_out_module.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_arg_tabling_methods_4_p_0(
#line 957 "hlds_out_module.m"
  MR_String hlds__hlds_out__hlds_out_module__HeadVar__1_1,
#line 957 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__HeadVar__2_2)
#line 957 "hlds_out_module.m"
{
#line 960 "hlds_out_module.m"
  while (MR_TRUE)
#line 960 "hlds_out_module.m"
    {
#line 960 "hlds_out_module.m"
      /* tailcall optimized into a loop */
#line 960 "hlds_out_module.m"
      {
#line 960 "hlds_out_module.m"
        MR_bool hlds__hlds_out__hlds_out_module__succeeded;

#line 960 "hlds_out_module.m"
        if ((hlds__hlds_out__hlds_out_module__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 960 "hlds_out_module.m"
          {
#line 960 "hlds_out_module.m"
          }
#line 960 "hlds_out_module.m"
        else
#line 961 "hlds_out_module.m"
          {
#line 961 "hlds_out_module.m"
            MR_Word hlds__hlds_out__hlds_out_module__MaybeMethod_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_module__HeadVar__2_2, (MR_Integer) 0)));
#line 961 "hlds_out_module.m"
            MR_Word hlds__hlds_out__hlds_out_module__MaybeMethods_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_module__HeadVar__2_2, (MR_Integer) 1)));

#line 962 "hlds_out_module.m"
            {
#line 962 "hlds_out_module.m"
              mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_module__HeadVar__1_1);
            }
#line 966 "hlds_out_module.m"
            if ((hlds__hlds_out__hlds_out_module__MaybeMethod_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 964 "hlds_out_module.m"
              {
#line 965 "hlds_out_module.m"
                {
#line 965 "hlds_out_module.m"
                  mercury__io__write_string_3_p_0((MR_String) "output");
                }
#line 964 "hlds_out_module.m"
              }
#line 966 "hlds_out_module.m"
            else
#line 966 "hlds_out_module.m"
              {
#line 966 "hlds_out_module.m"
                MR_Word hlds__hlds_out__hlds_out_module__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_module__MaybeMethod_10, (MR_Integer) 0)));

#line 966 "hlds_out_module.m"
                if ((hlds__hlds_out__hlds_out_module__V_29_29 == (MR_Integer) 1))
#line 970 "hlds_out_module.m"
                  {
#line 971 "hlds_out_module.m"
                    {
#line 971 "hlds_out_module.m"
                      mercury__io__write_string_3_p_0((MR_String) "addr");
                    }
#line 970 "hlds_out_module.m"
                  }
#line 966 "hlds_out_module.m"
                else
#line 966 "hlds_out_module.m"
                  if ((hlds__hlds_out__hlds_out_module__V_29_29 == (MR_Integer) 2))
#line 973 "hlds_out_module.m"
                    {
#line 974 "hlds_out_module.m"
                      {
#line 974 "hlds_out_module.m"
                        mercury__io__write_string_3_p_0((MR_String) "promise_implied");
                      }
#line 973 "hlds_out_module.m"
                    }
#line 966 "hlds_out_module.m"
                  else
#line 967 "hlds_out_module.m"
                    {
#line 968 "hlds_out_module.m"
                      {
#line 968 "hlds_out_module.m"
                        mercury__io__write_string_3_p_0((MR_String) "value");
                      }
#line 967 "hlds_out_module.m"
                    }
#line 966 "hlds_out_module.m"
              }
#line 976 "hlds_out_module.m"
            /* direct tailcall eliminated */
#line 976 "hlds_out_module.m"
            {
#line 976 "hlds_out_module.m"
              MR_Word hlds__hlds_out__hlds_out_module__HeadVar__2__tmp_copy_2 = hlds__hlds_out__hlds_out_module__MaybeMethods_11;

#line 976 "hlds_out_module.m"
              hlds__hlds_out__hlds_out_module__HeadVar__2_2 = hlds__hlds_out__hlds_out_module__HeadVar__2__tmp_copy_2;
#line 976 "hlds_out_module.m"
              hlds__hlds_out__hlds_out_module__HeadVar__1_1 = (MR_String) ", ";
#line 976 "hlds_out_module.m"
            }
#line 976 "hlds_out_module.m"
            continue;
#line 961 "hlds_out_module.m"
          }
#line 960 "hlds_out_module.m"
      }
#line 960 "hlds_out_module.m"
      break;
#line 960 "hlds_out_module.m"
    }
#line 957 "hlds_out_module.m"
}

#line 902 "hlds_out_module.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_table_struct_info_4_p_0_1(
#line 902 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__closure_arg,
#line 902 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_1,
#line 902 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_2,
#line 902 "hlds_out_module.m"
  MR_Box * hlds__hlds_out__hlds_out_module__wrapper_arg_3)
#line 902 "hlds_out_module.m"
{
#line 902 "hlds_out_module.m"
  {
#line 902 "hlds_out_module.m"
    MR_Box hlds__hlds_out__hlds_out_module__closure = hlds__hlds_out__hlds_out_module__closure_arg;

#line 902 "hlds_out_module.m"
    {
#line 902 "hlds_out_module.m"
      hlds__hlds_out__hlds_out_pred__write_space_and_table_trie_step_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__closure, (MR_Integer) 3))), ((MR_Word) hlds__hlds_out__hlds_out_module__wrapper_arg_1));
#line 902 "hlds_out_module.m"
      return;
    }
#line 902 "hlds_out_module.m"
  }
#line 902 "hlds_out_module.m"
}

#line 887 "hlds_out_module.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_table_struct_info_4_p_0(
#line 887 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__ModuleInfo_5,
#line 887 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__HeadVar__2_2)
#line 887 "hlds_out_module.m"
{
#line 890 "hlds_out_module.m"
  {
#line 890 "hlds_out_module.m"
    MR_bool hlds__hlds_out__hlds_out_module__succeeded;
#line 890 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__TypeCtorInfo_87_87;
#line 890 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__TypeCtorInfo_88_88;
#line 890 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__PredProcId_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__HeadVar__2_2, (MR_Integer) 0)));
#line 890 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__TableStructInfo_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__HeadVar__2_2, (MR_Integer) 1)));
#line 890 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__ProcTableStructInfo_9;
#line 890 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__Attributes_10;
#line 890 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__TVarSet_12;
#line 890 "hlds_out_module.m"
    MR_Integer hlds__hlds_out__hlds_out_module__NumInputs_14;
#line 890 "hlds_out_module.m"
    MR_Integer hlds__hlds_out__hlds_out_module__NumOutputs_15;
#line 890 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__InputSteps_16;
#line 890 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__MaybeOutputSteps_17;
#line 890 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__ArgInfos_18;
#line 890 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__Strictness_21;
#line 890 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__SizeLimit_22;
#line 890 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__Stats_23;
#line 890 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__AllowReset_24;
#line 890 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__V_44_44;
#line 890 "hlds_out_module.m"
    MR_String hlds__hlds_out__hlds_out_module__V_93_93;
#line 890 "hlds_out_module.m"
    MR_String hlds__hlds_out__hlds_out_module__V_94_94;
#line 890 "hlds_out_module.m"
    MR_String hlds__hlds_out__hlds_out_module__V_96_96;
#line 890 "hlds_out_module.m"
    MR_String hlds__hlds_out__hlds_out_module__V_97_97;
#line 890 "hlds_out_module.m"
    MR_String hlds__hlds_out__hlds_out_module__V_98_98;
#line 890 "hlds_out_module.m"
    MR_String hlds__hlds_out__hlds_out_module__V_100_100;
#line 896 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module___ProcLabel_11;
#line 896 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module___Context_13;
#line 896 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module___EvalMethod_19;
#line 902 "hlds_out_module.m"
    MR_Box hlds__hlds_out__hlds_out_module__conv0_STATE_VARIABLE_IO_45_45;

#line 891 "hlds_out_module.m"
    {
#line 891 "hlds_out_module.m"
      mercury__io__nl_2_p_0();
    }
#line 892 "hlds_out_module.m"
    {
#line 892 "hlds_out_module.m"
      mercury__io__write_string_3_p_0((MR_String) "% table struct info for ");
    }
#line 893 "hlds_out_module.m"
    {
#line 893 "hlds_out_module.m"
      hlds__hlds_out__hlds_out_util__write_pred_proc_id_4_p_0(hlds__hlds_out__hlds_out_module__ModuleInfo_5, hlds__hlds_out__hlds_out_module__PredProcId_6);
    }
#line 894 "hlds_out_module.m"
    {
#line 894 "hlds_out_module.m"
      mercury__io__nl_2_p_0();
    }
#line 895 "hlds_out_module.m"
    hlds__hlds_out__hlds_out_module__ProcTableStructInfo_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__TableStructInfo_7, (MR_Integer) 0)));
#line 895 "hlds_out_module.m"
    hlds__hlds_out__hlds_out_module__Attributes_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__TableStructInfo_7, (MR_Integer) 1)));
#line 896 "hlds_out_module.m"
    hlds__hlds_out__hlds_out_module___ProcLabel_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__ProcTableStructInfo_9, (MR_Integer) 0)));
#line 896 "hlds_out_module.m"
    hlds__hlds_out__hlds_out_module__TVarSet_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__ProcTableStructInfo_9, (MR_Integer) 1)));
#line 896 "hlds_out_module.m"
    hlds__hlds_out__hlds_out_module___Context_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__ProcTableStructInfo_9, (MR_Integer) 2)));
#line 896 "hlds_out_module.m"
    hlds__hlds_out__hlds_out_module__NumInputs_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__ProcTableStructInfo_9, (MR_Integer) 3)));
#line 896 "hlds_out_module.m"
    hlds__hlds_out__hlds_out_module__NumOutputs_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__ProcTableStructInfo_9, (MR_Integer) 4)));
#line 896 "hlds_out_module.m"
    hlds__hlds_out__hlds_out_module__InputSteps_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__ProcTableStructInfo_9, (MR_Integer) 5)));
#line 896 "hlds_out_module.m"
    hlds__hlds_out__hlds_out_module__MaybeOutputSteps_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__ProcTableStructInfo_9, (MR_Integer) 6)));
#line 896 "hlds_out_module.m"
    hlds__hlds_out__hlds_out_module__ArgInfos_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__ProcTableStructInfo_9, (MR_Integer) 7)));
#line 896 "hlds_out_module.m"
    hlds__hlds_out__hlds_out_module___EvalMethod_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__ProcTableStructInfo_9, (MR_Integer) 8)));
#line 2216 "hlds.hlds_out.hlds_out_module.c"
    {
#line 2218 "hlds.hlds_out.hlds_out_module.c"
      hlds__hlds_out__hlds_out_module__V_93_93 = mercury__string__int_to_string_1_f_0(hlds__hlds_out__hlds_out_module__NumOutputs_15);
    }
#line 2221 "hlds.hlds_out.hlds_out_module.c"
    {
#line 2223 "hlds.hlds_out.hlds_out_module.c"
      hlds__hlds_out__hlds_out_module__V_94_94 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_module__V_93_93, (MR_String) "\n");
    }
#line 2226 "hlds.hlds_out.hlds_out_module.c"
    {
#line 2228 "hlds.hlds_out.hlds_out_module.c"
      hlds__hlds_out__hlds_out_module__V_96_96 = mercury__string__f_43_43_2_f_0((MR_String) ", #outputs: ", hlds__hlds_out__hlds_out_module__V_94_94);
    }
#line 2231 "hlds.hlds_out.hlds_out_module.c"
    {
#line 2233 "hlds.hlds_out.hlds_out_module.c"
      hlds__hlds_out__hlds_out_module__V_97_97 = mercury__string__int_to_string_1_f_0(hlds__hlds_out__hlds_out_module__NumInputs_14);
    }
#line 2236 "hlds.hlds_out.hlds_out_module.c"
    {
#line 2238 "hlds.hlds_out.hlds_out_module.c"
      hlds__hlds_out__hlds_out_module__V_98_98 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_module__V_97_97, hlds__hlds_out__hlds_out_module__V_96_96);
    }
#line 2241 "hlds.hlds_out.hlds_out_module.c"
    {
#line 2243 "hlds.hlds_out.hlds_out_module.c"
      hlds__hlds_out__hlds_out_module__V_100_100 = mercury__string__f_43_43_2_f_0((MR_String) "% #inputs: ", hlds__hlds_out__hlds_out_module__V_98_98);
    }
#line 2246 "hlds.hlds_out.hlds_out_module.c"
    {
#line 2248 "hlds.hlds_out.hlds_out_module.c"
      mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_module__V_100_100);
    }
#line 901 "hlds_out_module.m"
    {
#line 901 "hlds_out_module.m"
      mercury__io__write_string_3_p_0((MR_String) "% input steps:");
    }
#line 902 "hlds_out_module.m"
    {
#line 902 "hlds_out_module.m"
      hlds__hlds_out__hlds_out_module__V_44_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 902 "hlds_out_module.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__V_44_44, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_module_scalar_common_6[1]));
#line 902 "hlds_out_module.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__V_44_44, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_module__write_table_struct_info_4_p_0_1));
#line 902 "hlds_out_module.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__V_44_44, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 902 "hlds_out_module.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__V_44_44, 3) = ((MR_Box) (hlds__hlds_out__hlds_out_module__TVarSet_12));
#line 902 "hlds_out_module.m"
    }
#line 2270 "hlds.hlds_out.hlds_out_module.c"
    hlds__hlds_out__hlds_out_module__TypeCtorInfo_87_87 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_table_step_desc_0;
#line 2272 "hlds.hlds_out.hlds_out_module.c"
    hlds__hlds_out__hlds_out_module__TypeCtorInfo_88_88 = (MR_Word) &mercury__io__io__type_ctor_info_state_0;
#line 902 "hlds_out_module.m"
    {
#line 902 "hlds_out_module.m"
      mercury__list__foldl_4_p_2(hlds__hlds_out__hlds_out_module__TypeCtorInfo_87_87, hlds__hlds_out__hlds_out_module__TypeCtorInfo_88_88, hlds__hlds_out__hlds_out_module__V_44_44, hlds__hlds_out__hlds_out_module__InputSteps_16, ((MR_Box) ((MR_Integer) 0)), &hlds__hlds_out__hlds_out_module__conv0_STATE_VARIABLE_IO_45_45);
    }
#line 903 "hlds_out_module.m"
    {
#line 903 "hlds_out_module.m"
      mercury__io__nl_2_p_0();
    }
#line 909 "hlds_out_module.m"
    if ((hlds__hlds_out__hlds_out_module__MaybeOutputSteps_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 910 "hlds_out_module.m"
      {
#line 911 "hlds_out_module.m"
        {
#line 911 "hlds_out_module.m"
          mercury__io__write_string_3_p_0((MR_String) "% no output steps");
        }
#line 910 "hlds_out_module.m"
      }
#line 909 "hlds_out_module.m"
    else
#line 905 "hlds_out_module.m"
      {
#line 905 "hlds_out_module.m"
        MR_Word hlds__hlds_out__hlds_out_module__OutputSteps_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_module__MaybeOutputSteps_17, (MR_Integer) 0)));
#line 907 "hlds_out_module.m"
        MR_Box hlds__hlds_out__hlds_out_module__conv1_STATE_VARIABLE_IO_52_52;

#line 906 "hlds_out_module.m"
        {
#line 906 "hlds_out_module.m"
          mercury__io__write_string_3_p_0((MR_String) "% output steps:");
        }
#line 907 "hlds_out_module.m"
        {
#line 907 "hlds_out_module.m"
          mercury__list__foldl_4_p_2(hlds__hlds_out__hlds_out_module__TypeCtorInfo_87_87, hlds__hlds_out__hlds_out_module__TypeCtorInfo_88_88, hlds__hlds_out__hlds_out_module__V_44_44, hlds__hlds_out__hlds_out_module__OutputSteps_20, ((MR_Box) ((MR_Integer) 0)), &hlds__hlds_out__hlds_out_module__conv1_STATE_VARIABLE_IO_52_52);
        }
#line 908 "hlds_out_module.m"
        {
#line 908 "hlds_out_module.m"
          mercury__io__nl_2_p_0();
        }
#line 905 "hlds_out_module.m"
      }
#line 913 "hlds_out_module.m"
    {
#line 913 "hlds_out_module.m"
      hlds__hlds_out__hlds_out_pred__write_table_arg_infos_4_p_0(hlds__hlds_out__hlds_out_module__TVarSet_12, hlds__hlds_out__hlds_out_module__ArgInfos_18);
    }
#line 915 "hlds_out_module.m"
    hlds__hlds_out__hlds_out_module__Strictness_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__Attributes_10, (MR_Integer) 0)));
#line 915 "hlds_out_module.m"
    hlds__hlds_out__hlds_out_module__SizeLimit_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__Attributes_10, (MR_Integer) 1)));
#line 915 "hlds_out_module.m"
    hlds__hlds_out__hlds_out_module__Stats_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__Attributes_10, (MR_Integer) 2)));
#line 915 "hlds_out_module.m"
    hlds__hlds_out__hlds_out_module__AllowReset_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__Attributes_10, (MR_Integer) 3)));
#line 919 "hlds_out_module.m"
    if ((hlds__hlds_out__hlds_out_module__Strictness_21 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 920 "hlds_out_module.m"
      {
#line 921 "hlds_out_module.m"
        {
#line 921 "hlds_out_module.m"
          mercury__io__write_string_3_p_0((MR_String) "% all fast_loose\n");
        }
#line 920 "hlds_out_module.m"
      }
#line 919 "hlds_out_module.m"
    else
#line 919 "hlds_out_module.m"
      if ((hlds__hlds_out__hlds_out_module__Strictness_21 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 917 "hlds_out_module.m"
        {
#line 918 "hlds_out_module.m"
          {
#line 918 "hlds_out_module.m"
            mercury__io__write_string_3_p_0((MR_String) "% all strict\n");
          }
#line 917 "hlds_out_module.m"
        }
#line 919 "hlds_out_module.m"
      else
#line 923 "hlds_out_module.m"
        {
#line 923 "hlds_out_module.m"
          MR_Word hlds__hlds_out__hlds_out_module__ArgMethods_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_module__Strictness_21, (MR_Integer) 0)));
#line 923 "hlds_out_module.m"
          MR_Word hlds__hlds_out__hlds_out_module__HiddenArgMethod_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_module__Strictness_21, (MR_Integer) 1)));

#line 924 "hlds_out_module.m"
          {
#line 924 "hlds_out_module.m"
            mercury__io__write_string_3_p_0((MR_String) "% specified [");
          }
#line 925 "hlds_out_module.m"
          {
#line 925 "hlds_out_module.m"
            hlds__hlds_out__hlds_out_module__write_arg_tabling_methods_4_p_0((MR_String) "", hlds__hlds_out__hlds_out_module__ArgMethods_25);
          }
#line 926 "hlds_out_module.m"
          {
#line 926 "hlds_out_module.m"
            mercury__io__write_string_3_p_0((MR_String) "]");
          }
#line 930 "hlds_out_module.m"
          if ((hlds__hlds_out__hlds_out_module__HiddenArgMethod_26 == (MR_Integer) 1))
#line 931 "hlds_out_module.m"
            {
#line 932 "hlds_out_module.m"
              {
#line 932 "hlds_out_module.m"
                mercury__io__write_string_3_p_0((MR_String) ", hidden args by addr\n");
              }
#line 931 "hlds_out_module.m"
            }
#line 930 "hlds_out_module.m"
          else
#line 928 "hlds_out_module.m"
            {
#line 929 "hlds_out_module.m"
              {
#line 929 "hlds_out_module.m"
                mercury__io__write_string_3_p_0((MR_String) ", hidden args by value\n");
              }
#line 928 "hlds_out_module.m"
            }
#line 923 "hlds_out_module.m"
        }
#line 938 "hlds_out_module.m"
    if ((hlds__hlds_out__hlds_out_module__SizeLimit_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 936 "hlds_out_module.m"
      {
#line 937 "hlds_out_module.m"
        {
#line 937 "hlds_out_module.m"
          mercury__io__write_string_3_p_0((MR_String) "% no size limit\n");
        }
#line 936 "hlds_out_module.m"
      }
#line 938 "hlds_out_module.m"
    else
#line 939 "hlds_out_module.m"
      {
#line 939 "hlds_out_module.m"
        MR_Integer hlds__hlds_out__hlds_out_module__Limit_27 = ((MR_Integer) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_module__SizeLimit_22, (MR_Integer) 0)));
#line 939 "hlds_out_module.m"
        MR_String hlds__hlds_out__hlds_out_module__V_102_102;
#line 939 "hlds_out_module.m"
        MR_String hlds__hlds_out__hlds_out_module__V_103_103;
#line 939 "hlds_out_module.m"
        MR_String hlds__hlds_out__hlds_out_module__V_105_105;

#line 2430 "hlds.hlds_out.hlds_out_module.c"
        {
#line 2432 "hlds.hlds_out.hlds_out_module.c"
          hlds__hlds_out__hlds_out_module__V_102_102 = mercury__string__int_to_string_1_f_0(hlds__hlds_out__hlds_out_module__Limit_27);
        }
#line 2435 "hlds.hlds_out.hlds_out_module.c"
        {
#line 2437 "hlds.hlds_out.hlds_out_module.c"
          hlds__hlds_out__hlds_out_module__V_103_103 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_module__V_102_102, (MR_String) "\n");
        }
#line 2440 "hlds.hlds_out.hlds_out_module.c"
        {
#line 2442 "hlds.hlds_out.hlds_out_module.c"
          hlds__hlds_out__hlds_out_module__V_105_105 = mercury__string__f_43_43_2_f_0((MR_String) "% size limit ", hlds__hlds_out__hlds_out_module__V_103_103);
        }
#line 2445 "hlds.hlds_out.hlds_out_module.c"
        {
#line 2447 "hlds.hlds_out.hlds_out_module.c"
          mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_module__V_105_105);
        }
#line 939 "hlds_out_module.m"
      }
#line 945 "hlds_out_module.m"
    if ((hlds__hlds_out__hlds_out_module__Stats_23 == (MR_Integer) 1))
#line 946 "hlds_out_module.m"
      {
#line 947 "hlds_out_module.m"
        {
#line 947 "hlds_out_module.m"
          mercury__io__write_string_3_p_0((MR_String) "% do not gather statistics\n");
        }
#line 946 "hlds_out_module.m"
      }
#line 945 "hlds_out_module.m"
    else
#line 943 "hlds_out_module.m"
      {
#line 944 "hlds_out_module.m"
        {
#line 944 "hlds_out_module.m"
          mercury__io__write_string_3_p_0((MR_String) "% gather statistics\n");
        }
#line 943 "hlds_out_module.m"
      }
#line 952 "hlds_out_module.m"
    if ((hlds__hlds_out__hlds_out_module__AllowReset_24 == (MR_Integer) 0))
#line 950 "hlds_out_module.m"
      {
#line 951 "hlds_out_module.m"
        {
#line 951 "hlds_out_module.m"
          mercury__io__write_string_3_p_0((MR_String) "% allow reset\n");
#line 951 "hlds_out_module.m"
          return;
        }
#line 950 "hlds_out_module.m"
      }
#line 952 "hlds_out_module.m"
    else
#line 953 "hlds_out_module.m"
      {
#line 954 "hlds_out_module.m"
        {
#line 954 "hlds_out_module.m"
          mercury__io__write_string_3_p_0((MR_String) "% do not allow reset\n");
#line 954 "hlds_out_module.m"
          return;
        }
#line 953 "hlds_out_module.m"
      }
#line 890 "hlds_out_module.m"
  }
#line 887 "hlds_out_module.m"
}

#line 884 "hlds_out_module.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_table_structs_4_p_0_1(
#line 884 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__closure_arg,
#line 884 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_1,
#line 884 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_2,
#line 884 "hlds_out_module.m"
  MR_Box * hlds__hlds_out__hlds_out_module__wrapper_arg_3)
#line 884 "hlds_out_module.m"
{
#line 884 "hlds_out_module.m"
  {
#line 884 "hlds_out_module.m"
    MR_Box hlds__hlds_out__hlds_out_module__closure = hlds__hlds_out__hlds_out_module__closure_arg;

#line 884 "hlds_out_module.m"
    {
#line 884 "hlds_out_module.m"
      hlds__hlds_out__hlds_out_module__write_table_struct_info_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__closure, (MR_Integer) 3))), ((MR_Word) hlds__hlds_out__hlds_out_module__wrapper_arg_1));
#line 884 "hlds_out_module.m"
      return;
    }
#line 884 "hlds_out_module.m"
  }
#line 884 "hlds_out_module.m"
}

#line 878 "hlds_out_module.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_table_structs_4_p_0(
#line 878 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__ModuleInfo_5,
#line 878 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__TableStructMap_6)
#line 878 "hlds_out_module.m"
{
#line 881 "hlds_out_module.m"
  {
#line 881 "hlds_out_module.m"
    MR_bool hlds__hlds_out__hlds_out_module__succeeded;
#line 881 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__TableStructs_8;
#line 881 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__V_13_13;
#line 884 "hlds_out_module.m"
    MR_Box hlds__hlds_out__hlds_out_module__conv0_STATE_VARIABLE_IO_14_14;

#line 882 "hlds_out_module.m"
    {
#line 882 "hlds_out_module.m"
      mercury__map__to_assoc_list_2_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_table_struct_info_0, hlds__hlds_out__hlds_out_module__TableStructMap_6, &hlds__hlds_out__hlds_out_module__TableStructs_8);
    }
#line 883 "hlds_out_module.m"
    {
#line 883 "hlds_out_module.m"
      mercury__io__write_string_3_p_0((MR_String) "%-------- Table structs --------\n");
    }
#line 884 "hlds_out_module.m"
    {
#line 884 "hlds_out_module.m"
      hlds__hlds_out__hlds_out_module__V_13_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 884 "hlds_out_module.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__V_13_13, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_module_scalar_common_6[0]));
#line 884 "hlds_out_module.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__V_13_13, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_module__write_table_structs_4_p_0_1));
#line 884 "hlds_out_module.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__V_13_13, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 884 "hlds_out_module.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__V_13_13, 3) = ((MR_Box) (hlds__hlds_out__hlds_out_module__ModuleInfo_5));
#line 884 "hlds_out_module.m"
    }
#line 884 "hlds_out_module.m"
    {
#line 884 "hlds_out_module.m"
      mercury__list__foldl_4_p_2((MR_Word) &hlds__hlds_out__hlds_out_module_scalar_common_2[4], (MR_Word) &mercury__io__io__type_ctor_info_state_0, hlds__hlds_out__hlds_out_module__V_13_13, hlds__hlds_out__hlds_out_module__TableStructs_8, ((MR_Box) ((MR_Integer) 0)), &hlds__hlds_out__hlds_out_module__conv0_STATE_VARIABLE_IO_14_14);
    }
#line 885 "hlds_out_module.m"
    {
#line 885 "hlds_out_module.m"
      mercury__io__nl_2_p_0();
#line 885 "hlds_out_module.m"
      return;
    }
#line 881 "hlds_out_module.m"
  }
#line 878 "hlds_out_module.m"
}

#line 850 "hlds_out_module.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_const_struct_args_4_p_0(
#line 850 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__HeadConstArg_5,
#line 850 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__TailConstArgs_6)
#line 850 "hlds_out_module.m"
{
#line 853 "hlds_out_module.m"
  while (MR_TRUE)
#line 853 "hlds_out_module.m"
    {
#line 853 "hlds_out_module.m"
      /* tailcall optimized into a loop */
#line 853 "hlds_out_module.m"
      {
#line 853 "hlds_out_module.m"
        MR_bool hlds__hlds_out__hlds_out_module__succeeded;

#line 854 "hlds_out_module.m"
        {
#line 854 "hlds_out_module.m"
          mercury__io__write_string_3_p_0((MR_String) "    ");
        }
#line 858 "hlds_out_module.m"
        if (((MR_tag((MR_Word) hlds__hlds_out__hlds_out_module__HeadConstArg_5)) == (MR_mktag((MR_Integer) 0))))
#line 856 "hlds_out_module.m"
          {
#line 856 "hlds_out_module.m"
            MR_Integer hlds__hlds_out__hlds_out_module__N_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__HeadConstArg_5, (MR_Integer) 0)));
#line 856 "hlds_out_module.m"
            MR_String hlds__hlds_out__hlds_out_module__V_36_36;
#line 856 "hlds_out_module.m"
            MR_String hlds__hlds_out__hlds_out_module__V_37_37;
#line 856 "hlds_out_module.m"
            MR_String hlds__hlds_out__hlds_out_module__V_39_39;

#line 2634 "hlds.hlds_out.hlds_out_module.c"
            {
#line 2636 "hlds.hlds_out.hlds_out_module.c"
              hlds__hlds_out__hlds_out_module__V_36_36 = mercury__string__int_to_string_1_f_0(hlds__hlds_out__hlds_out_module__N_8);
            }
#line 2639 "hlds.hlds_out.hlds_out_module.c"
            {
#line 2641 "hlds.hlds_out.hlds_out_module.c"
              hlds__hlds_out__hlds_out_module__V_37_37 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_module__V_36_36, (MR_String) ")");
            }
#line 2644 "hlds.hlds_out.hlds_out_module.c"
            {
#line 2646 "hlds.hlds_out.hlds_out_module.c"
              hlds__hlds_out__hlds_out_module__V_39_39 = mercury__string__f_43_43_2_f_0((MR_String) "cs(", hlds__hlds_out__hlds_out_module__V_37_37);
            }
#line 2649 "hlds.hlds_out.hlds_out_module.c"
            {
#line 2651 "hlds.hlds_out.hlds_out_module.c"
              mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_module__V_39_39);
            }
#line 856 "hlds_out_module.m"
          }
#line 858 "hlds_out_module.m"
        else
#line 859 "hlds_out_module.m"
          {
#line 859 "hlds_out_module.m"
            MR_Word hlds__hlds_out__hlds_out_module__ConsId_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_module__HeadConstArg_5, (MR_Integer) 0)));
#line 859 "hlds_out_module.m"
            MR_Word hlds__hlds_out__hlds_out_module__Type_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_module__HeadConstArg_5, (MR_Integer) 1)));
#line 859 "hlds_out_module.m"
            MR_Word hlds__hlds_out__hlds_out_module__V_21_21;

#line 860 "hlds_out_module.m"
            {
#line 860 "hlds_out_module.m"
              parse_tree__mercury_to_mercury__mercury_output_cons_id_4_p_0((MR_Integer) 1, hlds__hlds_out__hlds_out_module__ConsId_9);
            }
#line 861 "hlds_out_module.m"
            {
#line 861 "hlds_out_module.m"
              mercury__io__write_string_3_p_0((MR_String) "\n        with type ");
            }
#line 862 "hlds_out_module.m"
            {
#line 862 "hlds_out_module.m"
              hlds__hlds_out__hlds_out_module__V_21_21 = mercury__varset__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0);
            }
#line 862 "hlds_out_module.m"
            {
#line 862 "hlds_out_module.m"
              parse_tree__mercury_to_mercury__mercury_output_type_5_p_0(hlds__hlds_out__hlds_out_module__V_21_21, (MR_Integer) 0, hlds__hlds_out__hlds_out_module__Type_10);
            }
#line 859 "hlds_out_module.m"
          }
#line 867 "hlds_out_module.m"
        if ((hlds__hlds_out__hlds_out_module__TailConstArgs_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 865 "hlds_out_module.m"
          {
#line 866 "hlds_out_module.m"
            {
#line 866 "hlds_out_module.m"
              mercury__io__write_string_3_p_0((MR_String) "\n");
#line 866 "hlds_out_module.m"
              return;
            }
#line 865 "hlds_out_module.m"
          }
#line 867 "hlds_out_module.m"
        else
#line 868 "hlds_out_module.m"
          {
#line 868 "hlds_out_module.m"
            MR_Word hlds__hlds_out__hlds_out_module__HeadTailConstArg_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_module__TailConstArgs_6, (MR_Integer) 0)));
#line 868 "hlds_out_module.m"
            MR_Word hlds__hlds_out__hlds_out_module__TailTailConstArgs_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_module__TailConstArgs_6, (MR_Integer) 1)));

#line 869 "hlds_out_module.m"
            {
#line 869 "hlds_out_module.m"
              mercury__io__write_string_3_p_0((MR_String) ",\n");
            }
#line 870 "hlds_out_module.m"
            /* direct tailcall eliminated */
#line 870 "hlds_out_module.m"
            {
#line 870 "hlds_out_module.m"
              MR_Word hlds__hlds_out__hlds_out_module__HeadConstArg__tmp_copy_5 = hlds__hlds_out__hlds_out_module__HeadTailConstArg_11;
#line 870 "hlds_out_module.m"
              MR_Word hlds__hlds_out__hlds_out_module__TailConstArgs__tmp_copy_6 = hlds__hlds_out__hlds_out_module__TailTailConstArgs_12;

#line 870 "hlds_out_module.m"
              hlds__hlds_out__hlds_out_module__TailConstArgs_6 = hlds__hlds_out__hlds_out_module__TailConstArgs__tmp_copy_6;
#line 870 "hlds_out_module.m"
              hlds__hlds_out__hlds_out_module__HeadConstArg_5 = hlds__hlds_out__hlds_out_module__HeadConstArg__tmp_copy_5;
#line 870 "hlds_out_module.m"
            }
#line 870 "hlds_out_module.m"
            continue;
#line 868 "hlds_out_module.m"
          }
#line 853 "hlds_out_module.m"
      }
#line 853 "hlds_out_module.m"
      break;
#line 853 "hlds_out_module.m"
    }
#line 850 "hlds_out_module.m"
}

#line 828 "hlds_out_module.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_const_struct_3_p_0(
#line 828 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__HeadVar__1_1)
#line 828 "hlds_out_module.m"
{
#line 830 "hlds_out_module.m"
  {
#line 830 "hlds_out_module.m"
    MR_bool hlds__hlds_out__hlds_out_module__succeeded;
#line 830 "hlds_out_module.m"
    MR_Integer hlds__hlds_out__hlds_out_module__N_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__HeadVar__1_1, (MR_Integer) 0)));
#line 830 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__ConstStruct_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__HeadVar__1_1, (MR_Integer) 1)));
#line 830 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__ConsId_7;
#line 830 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__ConstArgs_8;
#line 830 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__Type_9;
#line 830 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__Inst_10;
#line 830 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__V_30_30;
#line 830 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__V_39_39;
#line 830 "hlds_out_module.m"
    MR_String hlds__hlds_out__hlds_out_module__V_44_44;
#line 830 "hlds_out_module.m"
    MR_String hlds__hlds_out__hlds_out_module__V_45_45;
#line 830 "hlds_out_module.m"
    MR_String hlds__hlds_out__hlds_out_module__V_47_47;

#line 2778 "hlds.hlds_out.hlds_out_module.c"
    {
#line 2780 "hlds.hlds_out.hlds_out_module.c"
      hlds__hlds_out__hlds_out_module__V_44_44 = mercury__string__int_to_string_1_f_0(hlds__hlds_out__hlds_out_module__N_4);
    }
#line 2783 "hlds.hlds_out.hlds_out_module.c"
    {
#line 2785 "hlds.hlds_out.hlds_out_module.c"
      hlds__hlds_out__hlds_out_module__V_45_45 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_module__V_44_44, (MR_String) ":\n");
    }
#line 2788 "hlds.hlds_out.hlds_out_module.c"
    {
#line 2790 "hlds.hlds_out.hlds_out_module.c"
      hlds__hlds_out__hlds_out_module__V_47_47 = mercury__string__f_43_43_2_f_0((MR_String) "\nconst_struct ", hlds__hlds_out__hlds_out_module__V_45_45);
    }
#line 2793 "hlds.hlds_out.hlds_out_module.c"
    {
#line 2795 "hlds.hlds_out.hlds_out_module.c"
      mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_module__V_47_47);
    }
#line 832 "hlds_out_module.m"
    hlds__hlds_out__hlds_out_module__ConsId_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__ConstStruct_5, (MR_Integer) 0)));
#line 832 "hlds_out_module.m"
    hlds__hlds_out__hlds_out_module__ConstArgs_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__ConstStruct_5, (MR_Integer) 1)));
#line 832 "hlds_out_module.m"
    hlds__hlds_out__hlds_out_module__Type_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__ConstStruct_5, (MR_Integer) 2)));
#line 832 "hlds_out_module.m"
    hlds__hlds_out__hlds_out_module__Inst_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__ConstStruct_5, (MR_Integer) 3)));
#line 833 "hlds_out_module.m"
    {
#line 833 "hlds_out_module.m"
      parse_tree__mercury_to_mercury__mercury_output_cons_id_4_p_0((MR_Integer) 1, hlds__hlds_out__hlds_out_module__ConsId_7);
    }
#line 837 "hlds_out_module.m"
    if ((hlds__hlds_out__hlds_out_module__ConstArgs_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 836 "hlds_out_module.m"
      {
#line 836 "hlds_out_module.m"
        mercury__io__nl_2_p_0();
      }
#line 837 "hlds_out_module.m"
    else
#line 838 "hlds_out_module.m"
      {
#line 838 "hlds_out_module.m"
        MR_Word hlds__hlds_out__hlds_out_module__HeadConstArg_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_module__ConstArgs_8, (MR_Integer) 0)));
#line 838 "hlds_out_module.m"
        MR_Word hlds__hlds_out__hlds_out_module__TailConstArgs_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_module__ConstArgs_8, (MR_Integer) 1)));

#line 839 "hlds_out_module.m"
        {
#line 839 "hlds_out_module.m"
          mercury__io__write_string_3_p_0((MR_String) "(\n");
        }
#line 840 "hlds_out_module.m"
        {
#line 840 "hlds_out_module.m"
          hlds__hlds_out__hlds_out_module__write_const_struct_args_4_p_0(hlds__hlds_out__hlds_out_module__HeadConstArg_11, hlds__hlds_out__hlds_out_module__TailConstArgs_12);
        }
#line 841 "hlds_out_module.m"
        {
#line 841 "hlds_out_module.m"
          mercury__io__write_string_3_p_0((MR_String) ")\n");
        }
#line 838 "hlds_out_module.m"
      }
#line 843 "hlds_out_module.m"
    {
#line 843 "hlds_out_module.m"
      mercury__io__write_string_3_p_0((MR_String) "type: ");
    }
#line 844 "hlds_out_module.m"
    {
#line 844 "hlds_out_module.m"
      hlds__hlds_out__hlds_out_module__V_30_30 = mercury__varset__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0);
    }
#line 844 "hlds_out_module.m"
    {
#line 844 "hlds_out_module.m"
      parse_tree__mercury_to_mercury__mercury_output_type_5_p_0(hlds__hlds_out__hlds_out_module__V_30_30, (MR_Integer) 0, hlds__hlds_out__hlds_out_module__Type_9);
    }
#line 845 "hlds_out_module.m"
    {
#line 845 "hlds_out_module.m"
      mercury__io__nl_2_p_0();
    }
#line 846 "hlds_out_module.m"
    {
#line 846 "hlds_out_module.m"
      mercury__io__write_string_3_p_0((MR_String) "inst: ");
    }
#line 847 "hlds_out_module.m"
    {
#line 847 "hlds_out_module.m"
      hlds__hlds_out__hlds_out_module__V_39_39 = mercury__varset__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0);
    }
#line 847 "hlds_out_module.m"
    {
#line 847 "hlds_out_module.m"
      hlds__hlds_out__hlds_out_mode__mercury_output_structured_inst_7_p_0(hlds__hlds_out__hlds_out_module__Inst_10, (MR_Integer) 0, (MR_Integer) 1, (MR_Integer) 0, hlds__hlds_out__hlds_out_module__V_39_39);
#line 847 "hlds_out_module.m"
      return;
    }
#line 830 "hlds_out_module.m"
  }
#line 828 "hlds_out_module.m"
}

#line 825 "hlds_out_module.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_const_struct_db_3_p_0_1(
#line 825 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__closure_arg,
#line 825 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_1,
#line 825 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_2,
#line 825 "hlds_out_module.m"
  MR_Box * hlds__hlds_out__hlds_out_module__wrapper_arg_3)
#line 825 "hlds_out_module.m"
{
#line 825 "hlds_out_module.m"
  {
#line 825 "hlds_out_module.m"
    MR_Box hlds__hlds_out__hlds_out_module__closure = hlds__hlds_out__hlds_out_module__closure_arg;

#line 825 "hlds_out_module.m"
    {
#line 825 "hlds_out_module.m"
      hlds__hlds_out__hlds_out_module__write_const_struct_3_p_0(((MR_Word) hlds__hlds_out__hlds_out_module__wrapper_arg_1));
#line 825 "hlds_out_module.m"
      return;
    }
#line 825 "hlds_out_module.m"
  }
#line 825 "hlds_out_module.m"
}

#line 820 "hlds_out_module.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_const_struct_db_3_p_0(
#line 820 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__ConstStructDb_4)
#line 820 "hlds_out_module.m"
{
#line 822 "hlds_out_module.m"
  {
#line 822 "hlds_out_module.m"
    MR_bool hlds__hlds_out__hlds_out_module__succeeded;
#line 822 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__ConstStructs_6;
#line 825 "hlds_out_module.m"
    MR_Box hlds__hlds_out__hlds_out_module__conv0_STATE_VARIABLE_IO_12_12;

#line 823 "hlds_out_module.m"
    {
#line 823 "hlds_out_module.m"
      hlds__const_struct__const_struct_db_get_structs_2_p_0(hlds__hlds_out__hlds_out_module__ConstStructDb_4, &hlds__hlds_out__hlds_out_module__ConstStructs_6);
    }
#line 824 "hlds_out_module.m"
    {
#line 824 "hlds_out_module.m"
      mercury__io__write_string_3_p_0((MR_String) "%-------- Const structs --------\n\n");
    }
#line 825 "hlds_out_module.m"
    {
#line 825 "hlds_out_module.m"
      mercury__list__foldl_4_p_2((MR_Word) &hlds__hlds_out__hlds_out_module_scalar_common_2[3], (MR_Word) &mercury__io__io__type_ctor_info_state_0, (MR_Word) &hlds__hlds_out__hlds_out_module_scalar_common_2[10], hlds__hlds_out__hlds_out_module__ConstStructs_6, ((MR_Box) ((MR_Integer) 0)), &hlds__hlds_out__hlds_out_module__conv0_STATE_VARIABLE_IO_12_12);
    }
#line 826 "hlds_out_module.m"
    {
#line 826 "hlds_out_module.m"
      mercury__io__nl_2_p_0();
#line 826 "hlds_out_module.m"
      return;
    }
#line 822 "hlds_out_module.m"
  }
#line 820 "hlds_out_module.m"
}

#line 791 "hlds_out_module.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_inst_4_p_0(
#line 791 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__Lang_5,
#line 791 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__Inst_6)
#line 791 "hlds_out_module.m"
{
#line 793 "hlds_out_module.m"
  {
#line 793 "hlds_out_module.m"
    MR_bool hlds__hlds_out__hlds_out_module__succeeded;
#line 793 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__TypeCtorInfo_14_14;
#line 793 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__InstTerm_8;
#line 793 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__VarSet_9;

#line 794 "hlds_out_module.m"
    {
#line 794 "hlds_out_module.m"
      hlds__hlds_out__hlds_out_module__InstTerm_8 = hlds__hlds_out__hlds_out_mode__inst_to_term_2_f_0(hlds__hlds_out__hlds_out_module__Lang_5, hlds__hlds_out__hlds_out_module__Inst_6);
    }
#line 2984 "hlds.hlds_out.hlds_out_module.c"
    hlds__hlds_out__hlds_out_module__TypeCtorInfo_14_14 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 795 "hlds_out_module.m"
    {
#line 795 "hlds_out_module.m"
      mercury__varset__init_1_p_0(hlds__hlds_out__hlds_out_module__TypeCtorInfo_14_14, &hlds__hlds_out__hlds_out_module__VarSet_9);
    }
#line 796 "hlds_out_module.m"
    {
#line 796 "hlds_out_module.m"
      parse_tree__mercury_to_mercury__mercury_output_term_5_p_0(hlds__hlds_out__hlds_out_module__TypeCtorInfo_14_14, hlds__hlds_out__hlds_out_module__VarSet_9, (MR_Integer) 0, hlds__hlds_out__hlds_out_module__InstTerm_8);
#line 796 "hlds_out_module.m"
      return;
    }
#line 793 "hlds_out_module.m"
  }
#line 791 "hlds_out_module.m"
}

#line 757 "hlds_out_module.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_inst_pair_maybe_inst_8_p_0(
#line 757 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__Lang_9,
#line 757 "hlds_out_module.m"
  MR_Integer hlds__hlds_out__hlds_out_module__Limit_10,
#line 757 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__HeadVar__3_3,
#line 757 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__MaybeInst_13,
#line 757 "hlds_out_module.m"
  MR_Integer hlds__hlds_out__hlds_out_module__STATE_VARIABLE_N_0_17,
#line 757 "hlds_out_module.m"
  MR_Integer * hlds__hlds_out__hlds_out_module__STATE_VARIABLE_N_18)
#line 757 "hlds_out_module.m"
{
#line 761 "hlds_out_module.m"
  {
#line 761 "hlds_out_module.m"
    MR_bool hlds__hlds_out__hlds_out_module__succeeded;
#line 761 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__InstA_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__HeadVar__3_3, (MR_Integer) 0)));
#line 761 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__InstB_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__HeadVar__3_3, (MR_Integer) 1)));

#line 762 "hlds_out_module.m"
    *hlds__hlds_out__hlds_out_module__STATE_VARIABLE_N_18 = (hlds__hlds_out__hlds_out_module__STATE_VARIABLE_N_0_17 + (MR_Integer) 1);
#line 763 "hlds_out_module.m"
    hlds__hlds_out__hlds_out_module__succeeded = (*hlds__hlds_out__hlds_out_module__STATE_VARIABLE_N_18 <= hlds__hlds_out__hlds_out_module__Limit_10);
#line 780 "hlds_out_module.m"
    if (hlds__hlds_out__hlds_out_module__succeeded)
#line 764 "hlds_out_module.m"
      {
#line 764 "hlds_out_module.m"
        MR_Word hlds__hlds_out__hlds_out_module__TypeCtorInfo_14_79;
#line 764 "hlds_out_module.m"
        MR_Word hlds__hlds_out__hlds_out_module__TypeCtorInfo_14_89;
#line 764 "hlds_out_module.m"
        MR_String hlds__hlds_out__hlds_out_module__V_51_51;
#line 764 "hlds_out_module.m"
        MR_String hlds__hlds_out__hlds_out_module__V_52_52;
#line 764 "hlds_out_module.m"
        MR_String hlds__hlds_out__hlds_out_module__V_54_54;
#line 764 "hlds_out_module.m"
        MR_String hlds__hlds_out__hlds_out_module__V_56_56;
#line 764 "hlds_out_module.m"
        MR_String hlds__hlds_out__hlds_out_module__V_57_57;
#line 764 "hlds_out_module.m"
        MR_String hlds__hlds_out__hlds_out_module__V_59_59;
#line 764 "hlds_out_module.m"
        MR_Word hlds__hlds_out__hlds_out_module__InstTerm_75;
#line 764 "hlds_out_module.m"
        MR_Word hlds__hlds_out__hlds_out_module__VarSet_76;
#line 764 "hlds_out_module.m"
        MR_Word hlds__hlds_out__hlds_out_module__InstTerm_85;
#line 764 "hlds_out_module.m"
        MR_Word hlds__hlds_out__hlds_out_module__VarSet_86;

#line 764 "hlds_out_module.m"
        {
#line 764 "hlds_out_module.m"
          mercury__io__nl_2_p_0();
        }
#line 3067 "hlds.hlds_out.hlds_out_module.c"
        {
#line 3069 "hlds.hlds_out.hlds_out_module.c"
          hlds__hlds_out__hlds_out_module__V_51_51 = mercury__string__int_to_string_1_f_0(*hlds__hlds_out__hlds_out_module__STATE_VARIABLE_N_18);
        }
#line 3072 "hlds.hlds_out.hlds_out_module.c"
        {
#line 3074 "hlds.hlds_out.hlds_out_module.c"
          hlds__hlds_out__hlds_out_module__V_52_52 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_module__V_51_51, (MR_String) " left key\n");
        }
#line 3077 "hlds.hlds_out.hlds_out_module.c"
        {
#line 3079 "hlds.hlds_out.hlds_out_module.c"
          hlds__hlds_out__hlds_out_module__V_54_54 = mercury__string__f_43_43_2_f_0((MR_String) "Entry ", hlds__hlds_out__hlds_out_module__V_52_52);
        }
#line 3082 "hlds.hlds_out.hlds_out_module.c"
        {
#line 3084 "hlds.hlds_out.hlds_out_module.c"
          mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_module__V_54_54);
        }
#line 794 "hlds_out_module.m"
        {
#line 794 "hlds_out_module.m"
          hlds__hlds_out__hlds_out_module__InstTerm_75 = hlds__hlds_out__hlds_out_mode__inst_to_term_2_f_0(hlds__hlds_out__hlds_out_module__Lang_9, hlds__hlds_out__hlds_out_module__InstA_11);
        }
#line 3092 "hlds.hlds_out.hlds_out_module.c"
        hlds__hlds_out__hlds_out_module__TypeCtorInfo_14_79 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 795 "hlds_out_module.m"
        {
#line 795 "hlds_out_module.m"
          mercury__varset__init_1_p_0(hlds__hlds_out__hlds_out_module__TypeCtorInfo_14_79, &hlds__hlds_out__hlds_out_module__VarSet_76);
        }
#line 796 "hlds_out_module.m"
        {
#line 796 "hlds_out_module.m"
          parse_tree__mercury_to_mercury__mercury_output_term_5_p_0(hlds__hlds_out__hlds_out_module__TypeCtorInfo_14_79, hlds__hlds_out__hlds_out_module__VarSet_76, (MR_Integer) 0, hlds__hlds_out__hlds_out_module__InstTerm_75);
        }
#line 767 "hlds_out_module.m"
        {
#line 767 "hlds_out_module.m"
          mercury__io__nl_2_p_0();
        }
#line 3109 "hlds.hlds_out.hlds_out_module.c"
        {
#line 3111 "hlds.hlds_out.hlds_out_module.c"
          hlds__hlds_out__hlds_out_module__V_56_56 = mercury__string__int_to_string_1_f_0(*hlds__hlds_out__hlds_out_module__STATE_VARIABLE_N_18);
        }
#line 3114 "hlds.hlds_out.hlds_out_module.c"
        {
#line 3116 "hlds.hlds_out.hlds_out_module.c"
          hlds__hlds_out__hlds_out_module__V_57_57 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_module__V_56_56, (MR_String) " right key\n");
        }
#line 3119 "hlds.hlds_out.hlds_out_module.c"
        {
#line 3121 "hlds.hlds_out.hlds_out_module.c"
          hlds__hlds_out__hlds_out_module__V_59_59 = mercury__string__f_43_43_2_f_0((MR_String) "Entry ", hlds__hlds_out__hlds_out_module__V_57_57);
        }
#line 3124 "hlds.hlds_out.hlds_out_module.c"
        {
#line 3126 "hlds.hlds_out.hlds_out_module.c"
          mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_module__V_59_59);
        }
#line 794 "hlds_out_module.m"
        {
#line 794 "hlds_out_module.m"
          hlds__hlds_out__hlds_out_module__InstTerm_85 = hlds__hlds_out__hlds_out_mode__inst_to_term_2_f_0(hlds__hlds_out__hlds_out_module__Lang_9, hlds__hlds_out__hlds_out_module__InstB_12);
        }
#line 3134 "hlds.hlds_out.hlds_out_module.c"
        hlds__hlds_out__hlds_out_module__TypeCtorInfo_14_89 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 795 "hlds_out_module.m"
        {
#line 795 "hlds_out_module.m"
          mercury__varset__init_1_p_0(hlds__hlds_out__hlds_out_module__TypeCtorInfo_14_89, &hlds__hlds_out__hlds_out_module__VarSet_86);
        }
#line 796 "hlds_out_module.m"
        {
#line 796 "hlds_out_module.m"
          parse_tree__mercury_to_mercury__mercury_output_term_5_p_0(hlds__hlds_out__hlds_out_module__TypeCtorInfo_14_89, hlds__hlds_out__hlds_out_module__VarSet_86, (MR_Integer) 0, hlds__hlds_out__hlds_out_module__InstTerm_85);
        }
#line 770 "hlds_out_module.m"
        {
#line 770 "hlds_out_module.m"
          mercury__io__nl_2_p_0();
        }
#line 774 "hlds_out_module.m"
        if ((hlds__hlds_out__hlds_out_module__MaybeInst_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 772 "hlds_out_module.m"
          {
#line 772 "hlds_out_module.m"
            MR_String hlds__hlds_out__hlds_out_module__V_66_66;
#line 772 "hlds_out_module.m"
            MR_String hlds__hlds_out__hlds_out_module__V_67_67;
#line 772 "hlds_out_module.m"
            MR_String hlds__hlds_out__hlds_out_module__V_69_69;

#line 3162 "hlds.hlds_out.hlds_out_module.c"
            {
#line 3164 "hlds.hlds_out.hlds_out_module.c"
              hlds__hlds_out__hlds_out_module__V_66_66 = mercury__string__int_to_string_1_f_0(*hlds__hlds_out__hlds_out_module__STATE_VARIABLE_N_18);
            }
#line 3167 "hlds.hlds_out.hlds_out_module.c"
            {
#line 3169 "hlds.hlds_out.hlds_out_module.c"
              hlds__hlds_out__hlds_out_module__V_67_67 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_module__V_66_66, (MR_String) " value UNKNOWN\n");
            }
#line 3172 "hlds.hlds_out.hlds_out_module.c"
            {
#line 3174 "hlds.hlds_out.hlds_out_module.c"
              hlds__hlds_out__hlds_out_module__V_69_69 = mercury__string__f_43_43_2_f_0((MR_String) "Entry ", hlds__hlds_out__hlds_out_module__V_67_67);
            }
#line 3177 "hlds.hlds_out.hlds_out_module.c"
            {
#line 3179 "hlds.hlds_out.hlds_out_module.c"
              mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_module__V_69_69);
#line 3181 "hlds.hlds_out.hlds_out_module.c"
              return;
            }
#line 772 "hlds_out_module.m"
          }
#line 774 "hlds_out_module.m"
        else
#line 775 "hlds_out_module.m"
          {
#line 775 "hlds_out_module.m"
            MR_Word hlds__hlds_out__hlds_out_module__Inst_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_module__MaybeInst_13, (MR_Integer) 0)));
#line 775 "hlds_out_module.m"
            MR_String hlds__hlds_out__hlds_out_module__V_61_61;
#line 775 "hlds_out_module.m"
            MR_String hlds__hlds_out__hlds_out_module__V_62_62;
#line 775 "hlds_out_module.m"
            MR_String hlds__hlds_out__hlds_out_module__V_64_64;

#line 3199 "hlds.hlds_out.hlds_out_module.c"
            {
#line 3201 "hlds.hlds_out.hlds_out_module.c"
              hlds__hlds_out__hlds_out_module__V_61_61 = mercury__string__int_to_string_1_f_0(*hlds__hlds_out__hlds_out_module__STATE_VARIABLE_N_18);
            }
#line 3204 "hlds.hlds_out.hlds_out_module.c"
            {
#line 3206 "hlds.hlds_out.hlds_out_module.c"
              hlds__hlds_out__hlds_out_module__V_62_62 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_module__V_61_61, (MR_String) " value:\n");
            }
#line 3209 "hlds.hlds_out.hlds_out_module.c"
            {
#line 3211 "hlds.hlds_out.hlds_out_module.c"
              hlds__hlds_out__hlds_out_module__V_64_64 = mercury__string__f_43_43_2_f_0((MR_String) "Entry ", hlds__hlds_out__hlds_out_module__V_62_62);
            }
#line 3214 "hlds.hlds_out.hlds_out_module.c"
            {
#line 3216 "hlds.hlds_out.hlds_out_module.c"
              mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_module__V_64_64);
            }
#line 777 "hlds_out_module.m"
            {
#line 777 "hlds_out_module.m"
              hlds__hlds_out__hlds_out_module__write_inst_4_p_0(hlds__hlds_out__hlds_out_module__Lang_9, hlds__hlds_out__hlds_out_module__Inst_16);
            }
#line 778 "hlds_out_module.m"
            {
#line 778 "hlds_out_module.m"
              mercury__io__nl_2_p_0();
#line 778 "hlds_out_module.m"
              return;
            }
#line 775 "hlds_out_module.m"
          }
#line 764 "hlds_out_module.m"
      }
#line 780 "hlds_out_module.m"
    else
#line 778 "hlds_out_module.m"
      {
#line 778 "hlds_out_module.m"
      }
#line 761 "hlds_out_module.m"
  }
#line 757 "hlds_out_module.m"
}

#line 732 "hlds_out_module.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_inst_name_maybe_inst_det_8_p_0(
#line 732 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__Lang_9,
#line 732 "hlds_out_module.m"
  MR_Integer hlds__hlds_out__hlds_out_module__Limit_10,
#line 732 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__InstName_11,
#line 732 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__MaybeInstDet_12,
#line 732 "hlds_out_module.m"
  MR_Integer hlds__hlds_out__hlds_out_module__STATE_VARIABLE_N_0_18,
#line 732 "hlds_out_module.m"
  MR_Integer * hlds__hlds_out__hlds_out_module__STATE_VARIABLE_N_19)
#line 732 "hlds_out_module.m"
{
#line 736 "hlds_out_module.m"
  {
#line 736 "hlds_out_module.m"
    MR_bool hlds__hlds_out__hlds_out_module__succeeded;

#line 737 "hlds_out_module.m"
    *hlds__hlds_out__hlds_out_module__STATE_VARIABLE_N_19 = (hlds__hlds_out__hlds_out_module__STATE_VARIABLE_N_0_18 + (MR_Integer) 1);
#line 738 "hlds_out_module.m"
    hlds__hlds_out__hlds_out_module__succeeded = (*hlds__hlds_out__hlds_out_module__STATE_VARIABLE_N_19 <= hlds__hlds_out__hlds_out_module__Limit_10);
#line 753 "hlds_out_module.m"
    if (hlds__hlds_out__hlds_out_module__succeeded)
#line 739 "hlds_out_module.m"
      {
#line 739 "hlds_out_module.m"
        MR_Word hlds__hlds_out__hlds_out_module__TypeCtorInfo_14_73;
#line 739 "hlds_out_module.m"
        MR_String hlds__hlds_out__hlds_out_module__V_47_47;
#line 739 "hlds_out_module.m"
        MR_String hlds__hlds_out__hlds_out_module__V_48_48;
#line 739 "hlds_out_module.m"
        MR_String hlds__hlds_out__hlds_out_module__V_50_50;
#line 739 "hlds_out_module.m"
        MR_Word hlds__hlds_out__hlds_out_module__InstNameTerm_69;
#line 739 "hlds_out_module.m"
        MR_Word hlds__hlds_out__hlds_out_module__VarSet_70;

#line 739 "hlds_out_module.m"
        {
#line 739 "hlds_out_module.m"
          mercury__io__nl_2_p_0();
        }
#line 3294 "hlds.hlds_out.hlds_out_module.c"
        {
#line 3296 "hlds.hlds_out.hlds_out_module.c"
          hlds__hlds_out__hlds_out_module__V_47_47 = mercury__string__int_to_string_1_f_0(*hlds__hlds_out__hlds_out_module__STATE_VARIABLE_N_19);
        }
#line 3299 "hlds.hlds_out.hlds_out_module.c"
        {
#line 3301 "hlds.hlds_out.hlds_out_module.c"
          hlds__hlds_out__hlds_out_module__V_48_48 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_module__V_47_47, (MR_String) " key\n");
        }
#line 3304 "hlds.hlds_out.hlds_out_module.c"
        {
#line 3306 "hlds.hlds_out.hlds_out_module.c"
          hlds__hlds_out__hlds_out_module__V_50_50 = mercury__string__f_43_43_2_f_0((MR_String) "Entry ", hlds__hlds_out__hlds_out_module__V_48_48);
        }
#line 3309 "hlds.hlds_out.hlds_out_module.c"
        {
#line 3311 "hlds.hlds_out.hlds_out_module.c"
          mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_module__V_50_50);
        }
#line 787 "hlds_out_module.m"
        {
#line 787 "hlds_out_module.m"
          hlds__hlds_out__hlds_out_module__InstNameTerm_69 = hlds__hlds_out__hlds_out_mode__inst_name_to_term_2_f_0(hlds__hlds_out__hlds_out_module__Lang_9, hlds__hlds_out__hlds_out_module__InstName_11);
        }
#line 3319 "hlds.hlds_out.hlds_out_module.c"
        hlds__hlds_out__hlds_out_module__TypeCtorInfo_14_73 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 788 "hlds_out_module.m"
        {
#line 788 "hlds_out_module.m"
          mercury__varset__init_1_p_0(hlds__hlds_out__hlds_out_module__TypeCtorInfo_14_73, &hlds__hlds_out__hlds_out_module__VarSet_70);
        }
#line 789 "hlds_out_module.m"
        {
#line 789 "hlds_out_module.m"
          parse_tree__mercury_to_mercury__mercury_output_term_5_p_0(hlds__hlds_out__hlds_out_module__TypeCtorInfo_14_73, hlds__hlds_out__hlds_out_module__VarSet_70, (MR_Integer) 0, hlds__hlds_out__hlds_out_module__InstNameTerm_69);
        }
#line 742 "hlds_out_module.m"
        {
#line 742 "hlds_out_module.m"
          mercury__io__nl_2_p_0();
        }
#line 746 "hlds_out_module.m"
        if ((hlds__hlds_out__hlds_out_module__MaybeInstDet_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 744 "hlds_out_module.m"
          {
#line 744 "hlds_out_module.m"
            MR_String hlds__hlds_out__hlds_out_module__V_60_60;
#line 744 "hlds_out_module.m"
            MR_String hlds__hlds_out__hlds_out_module__V_61_61;
#line 744 "hlds_out_module.m"
            MR_String hlds__hlds_out__hlds_out_module__V_63_63;

#line 3347 "hlds.hlds_out.hlds_out_module.c"
            {
#line 3349 "hlds.hlds_out.hlds_out_module.c"
              hlds__hlds_out__hlds_out_module__V_60_60 = mercury__string__int_to_string_1_f_0(*hlds__hlds_out__hlds_out_module__STATE_VARIABLE_N_19);
            }
#line 3352 "hlds.hlds_out.hlds_out_module.c"
            {
#line 3354 "hlds.hlds_out.hlds_out_module.c"
              hlds__hlds_out__hlds_out_module__V_61_61 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_module__V_60_60, (MR_String) " value UNKNOWN\n");
            }
#line 3357 "hlds.hlds_out.hlds_out_module.c"
            {
#line 3359 "hlds.hlds_out.hlds_out_module.c"
              hlds__hlds_out__hlds_out_module__V_63_63 = mercury__string__f_43_43_2_f_0((MR_String) "Entry ", hlds__hlds_out__hlds_out_module__V_61_61);
            }
#line 3362 "hlds.hlds_out.hlds_out_module.c"
            {
#line 3364 "hlds.hlds_out.hlds_out_module.c"
              mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_module__V_63_63);
#line 3366 "hlds.hlds_out.hlds_out_module.c"
              return;
            }
#line 744 "hlds_out_module.m"
          }
#line 746 "hlds_out_module.m"
        else
#line 747 "hlds_out_module.m"
          {
#line 747 "hlds_out_module.m"
            MR_Word hlds__hlds_out__hlds_out_module__TypeCtorInfo_14_83;
#line 747 "hlds_out_module.m"
            MR_Word hlds__hlds_out__hlds_out_module__Inst_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_module__MaybeInstDet_12, (MR_Integer) 0)));
#line 747 "hlds_out_module.m"
            MR_Word hlds__hlds_out__hlds_out_module__Detism_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_module__MaybeInstDet_12, (MR_Integer) 1)));
#line 747 "hlds_out_module.m"
            MR_String hlds__hlds_out__hlds_out_module__DetismStr_17;
#line 747 "hlds_out_module.m"
            MR_String hlds__hlds_out__hlds_out_module__V_52_52;
#line 747 "hlds_out_module.m"
            MR_String hlds__hlds_out__hlds_out_module__V_54_54;
#line 747 "hlds_out_module.m"
            MR_String hlds__hlds_out__hlds_out_module__V_55_55;
#line 747 "hlds_out_module.m"
            MR_String hlds__hlds_out__hlds_out_module__V_56_56;
#line 747 "hlds_out_module.m"
            MR_String hlds__hlds_out__hlds_out_module__V_58_58;
#line 747 "hlds_out_module.m"
            MR_Word hlds__hlds_out__hlds_out_module__InstTerm_79;
#line 747 "hlds_out_module.m"
            MR_Word hlds__hlds_out__hlds_out_module__VarSet_80;

#line 748 "hlds_out_module.m"
            {
#line 748 "hlds_out_module.m"
              hlds__hlds_out__hlds_out_module__DetismStr_17 = parse_tree__prog_out__determinism_to_string_1_f_0(hlds__hlds_out__hlds_out_module__Detism_16);
            }
#line 3403 "hlds.hlds_out.hlds_out_module.c"
            {
#line 3405 "hlds.hlds_out.hlds_out_module.c"
              hlds__hlds_out__hlds_out_module__V_52_52 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_module__DetismStr_17, (MR_String) "):\n");
            }
#line 3408 "hlds.hlds_out.hlds_out_module.c"
            {
#line 3410 "hlds.hlds_out.hlds_out_module.c"
              hlds__hlds_out__hlds_out_module__V_54_54 = mercury__string__f_43_43_2_f_0((MR_String) " value (", hlds__hlds_out__hlds_out_module__V_52_52);
            }
#line 3413 "hlds.hlds_out.hlds_out_module.c"
            {
#line 3415 "hlds.hlds_out.hlds_out_module.c"
              hlds__hlds_out__hlds_out_module__V_55_55 = mercury__string__int_to_string_1_f_0(*hlds__hlds_out__hlds_out_module__STATE_VARIABLE_N_19);
            }
#line 3418 "hlds.hlds_out.hlds_out_module.c"
            {
#line 3420 "hlds.hlds_out.hlds_out_module.c"
              hlds__hlds_out__hlds_out_module__V_56_56 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_module__V_55_55, hlds__hlds_out__hlds_out_module__V_54_54);
            }
#line 3423 "hlds.hlds_out.hlds_out_module.c"
            {
#line 3425 "hlds.hlds_out.hlds_out_module.c"
              hlds__hlds_out__hlds_out_module__V_58_58 = mercury__string__f_43_43_2_f_0((MR_String) "Entry ", hlds__hlds_out__hlds_out_module__V_56_56);
            }
#line 3428 "hlds.hlds_out.hlds_out_module.c"
            {
#line 3430 "hlds.hlds_out.hlds_out_module.c"
              mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_module__V_58_58);
            }
#line 794 "hlds_out_module.m"
            {
#line 794 "hlds_out_module.m"
              hlds__hlds_out__hlds_out_module__InstTerm_79 = hlds__hlds_out__hlds_out_mode__inst_to_term_2_f_0(hlds__hlds_out__hlds_out_module__Lang_9, hlds__hlds_out__hlds_out_module__Inst_15);
            }
#line 3438 "hlds.hlds_out.hlds_out_module.c"
            hlds__hlds_out__hlds_out_module__TypeCtorInfo_14_83 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 795 "hlds_out_module.m"
            {
#line 795 "hlds_out_module.m"
              mercury__varset__init_1_p_0(hlds__hlds_out__hlds_out_module__TypeCtorInfo_14_83, &hlds__hlds_out__hlds_out_module__VarSet_80);
            }
#line 796 "hlds_out_module.m"
            {
#line 796 "hlds_out_module.m"
              parse_tree__mercury_to_mercury__mercury_output_term_5_p_0(hlds__hlds_out__hlds_out_module__TypeCtorInfo_14_83, hlds__hlds_out__hlds_out_module__VarSet_80, (MR_Integer) 0, hlds__hlds_out__hlds_out_module__InstTerm_79);
            }
#line 751 "hlds_out_module.m"
            {
#line 751 "hlds_out_module.m"
              mercury__io__nl_2_p_0();
#line 751 "hlds_out_module.m"
              return;
            }
#line 747 "hlds_out_module.m"
          }
#line 739 "hlds_out_module.m"
      }
#line 753 "hlds_out_module.m"
    else
#line 751 "hlds_out_module.m"
      {
#line 751 "hlds_out_module.m"
      }
#line 736 "hlds_out_module.m"
  }
#line 732 "hlds_out_module.m"
}

#line 709 "hlds_out_module.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_inst_name_maybe_inst_8_p_0(
#line 709 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__Lang_9,
#line 709 "hlds_out_module.m"
  MR_Integer hlds__hlds_out__hlds_out_module__Limit_10,
#line 709 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__InstName_11,
#line 709 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__MaybeInst_12,
#line 709 "hlds_out_module.m"
  MR_Integer hlds__hlds_out__hlds_out_module__STATE_VARIABLE_N_0_16,
#line 709 "hlds_out_module.m"
  MR_Integer * hlds__hlds_out__hlds_out_module__STATE_VARIABLE_N_17)
#line 709 "hlds_out_module.m"
{
#line 712 "hlds_out_module.m"
  {
#line 712 "hlds_out_module.m"
    MR_bool hlds__hlds_out__hlds_out_module__succeeded;

#line 713 "hlds_out_module.m"
    *hlds__hlds_out__hlds_out_module__STATE_VARIABLE_N_17 = (hlds__hlds_out__hlds_out_module__STATE_VARIABLE_N_0_16 + (MR_Integer) 1);
#line 714 "hlds_out_module.m"
    hlds__hlds_out__hlds_out_module__succeeded = (*hlds__hlds_out__hlds_out_module__STATE_VARIABLE_N_17 <= hlds__hlds_out__hlds_out_module__Limit_10);
#line 728 "hlds_out_module.m"
    if (hlds__hlds_out__hlds_out_module__succeeded)
#line 715 "hlds_out_module.m"
      {
#line 715 "hlds_out_module.m"
        MR_Word hlds__hlds_out__hlds_out_module__TypeCtorInfo_14_66;
#line 715 "hlds_out_module.m"
        MR_String hlds__hlds_out__hlds_out_module__V_43_43;
#line 715 "hlds_out_module.m"
        MR_String hlds__hlds_out__hlds_out_module__V_44_44;
#line 715 "hlds_out_module.m"
        MR_String hlds__hlds_out__hlds_out_module__V_46_46;
#line 715 "hlds_out_module.m"
        MR_Word hlds__hlds_out__hlds_out_module__InstNameTerm_62;
#line 715 "hlds_out_module.m"
        MR_Word hlds__hlds_out__hlds_out_module__VarSet_63;

#line 715 "hlds_out_module.m"
        {
#line 715 "hlds_out_module.m"
          mercury__io__nl_2_p_0();
        }
#line 3520 "hlds.hlds_out.hlds_out_module.c"
        {
#line 3522 "hlds.hlds_out.hlds_out_module.c"
          hlds__hlds_out__hlds_out_module__V_43_43 = mercury__string__int_to_string_1_f_0(*hlds__hlds_out__hlds_out_module__STATE_VARIABLE_N_17);
        }
#line 3525 "hlds.hlds_out.hlds_out_module.c"
        {
#line 3527 "hlds.hlds_out.hlds_out_module.c"
          hlds__hlds_out__hlds_out_module__V_44_44 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_module__V_43_43, (MR_String) " key\n");
        }
#line 3530 "hlds.hlds_out.hlds_out_module.c"
        {
#line 3532 "hlds.hlds_out.hlds_out_module.c"
          hlds__hlds_out__hlds_out_module__V_46_46 = mercury__string__f_43_43_2_f_0((MR_String) "Entry ", hlds__hlds_out__hlds_out_module__V_44_44);
        }
#line 3535 "hlds.hlds_out.hlds_out_module.c"
        {
#line 3537 "hlds.hlds_out.hlds_out_module.c"
          mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_module__V_46_46);
        }
#line 787 "hlds_out_module.m"
        {
#line 787 "hlds_out_module.m"
          hlds__hlds_out__hlds_out_module__InstNameTerm_62 = hlds__hlds_out__hlds_out_mode__inst_name_to_term_2_f_0(hlds__hlds_out__hlds_out_module__Lang_9, hlds__hlds_out__hlds_out_module__InstName_11);
        }
#line 3545 "hlds.hlds_out.hlds_out_module.c"
        hlds__hlds_out__hlds_out_module__TypeCtorInfo_14_66 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 788 "hlds_out_module.m"
        {
#line 788 "hlds_out_module.m"
          mercury__varset__init_1_p_0(hlds__hlds_out__hlds_out_module__TypeCtorInfo_14_66, &hlds__hlds_out__hlds_out_module__VarSet_63);
        }
#line 789 "hlds_out_module.m"
        {
#line 789 "hlds_out_module.m"
          parse_tree__mercury_to_mercury__mercury_output_term_5_p_0(hlds__hlds_out__hlds_out_module__TypeCtorInfo_14_66, hlds__hlds_out__hlds_out_module__VarSet_63, (MR_Integer) 0, hlds__hlds_out__hlds_out_module__InstNameTerm_62);
        }
#line 718 "hlds_out_module.m"
        {
#line 718 "hlds_out_module.m"
          mercury__io__nl_2_p_0();
        }
#line 722 "hlds_out_module.m"
        if ((hlds__hlds_out__hlds_out_module__MaybeInst_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 720 "hlds_out_module.m"
          {
#line 720 "hlds_out_module.m"
            MR_String hlds__hlds_out__hlds_out_module__V_53_53;
#line 720 "hlds_out_module.m"
            MR_String hlds__hlds_out__hlds_out_module__V_54_54;
#line 720 "hlds_out_module.m"
            MR_String hlds__hlds_out__hlds_out_module__V_56_56;

#line 3573 "hlds.hlds_out.hlds_out_module.c"
            {
#line 3575 "hlds.hlds_out.hlds_out_module.c"
              hlds__hlds_out__hlds_out_module__V_53_53 = mercury__string__int_to_string_1_f_0(*hlds__hlds_out__hlds_out_module__STATE_VARIABLE_N_17);
            }
#line 3578 "hlds.hlds_out.hlds_out_module.c"
            {
#line 3580 "hlds.hlds_out.hlds_out_module.c"
              hlds__hlds_out__hlds_out_module__V_54_54 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_module__V_53_53, (MR_String) " value UNKNOWN\n");
            }
#line 3583 "hlds.hlds_out.hlds_out_module.c"
            {
#line 3585 "hlds.hlds_out.hlds_out_module.c"
              hlds__hlds_out__hlds_out_module__V_56_56 = mercury__string__f_43_43_2_f_0((MR_String) "Entry ", hlds__hlds_out__hlds_out_module__V_54_54);
            }
#line 3588 "hlds.hlds_out.hlds_out_module.c"
            {
#line 3590 "hlds.hlds_out.hlds_out_module.c"
              mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_module__V_56_56);
#line 3592 "hlds.hlds_out.hlds_out_module.c"
              return;
            }
#line 720 "hlds_out_module.m"
          }
#line 722 "hlds_out_module.m"
        else
#line 723 "hlds_out_module.m"
          {
#line 723 "hlds_out_module.m"
            MR_Word hlds__hlds_out__hlds_out_module__TypeCtorInfo_14_76;
#line 723 "hlds_out_module.m"
            MR_Word hlds__hlds_out__hlds_out_module__Inst_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_module__MaybeInst_12, (MR_Integer) 0)));
#line 723 "hlds_out_module.m"
            MR_String hlds__hlds_out__hlds_out_module__V_48_48;
#line 723 "hlds_out_module.m"
            MR_String hlds__hlds_out__hlds_out_module__V_49_49;
#line 723 "hlds_out_module.m"
            MR_String hlds__hlds_out__hlds_out_module__V_51_51;
#line 723 "hlds_out_module.m"
            MR_Word hlds__hlds_out__hlds_out_module__InstTerm_72;
#line 723 "hlds_out_module.m"
            MR_Word hlds__hlds_out__hlds_out_module__VarSet_73;

#line 3616 "hlds.hlds_out.hlds_out_module.c"
            {
#line 3618 "hlds.hlds_out.hlds_out_module.c"
              hlds__hlds_out__hlds_out_module__V_48_48 = mercury__string__int_to_string_1_f_0(*hlds__hlds_out__hlds_out_module__STATE_VARIABLE_N_17);
            }
#line 3621 "hlds.hlds_out.hlds_out_module.c"
            {
#line 3623 "hlds.hlds_out.hlds_out_module.c"
              hlds__hlds_out__hlds_out_module__V_49_49 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_module__V_48_48, (MR_String) " value:\n");
            }
#line 3626 "hlds.hlds_out.hlds_out_module.c"
            {
#line 3628 "hlds.hlds_out.hlds_out_module.c"
              hlds__hlds_out__hlds_out_module__V_51_51 = mercury__string__f_43_43_2_f_0((MR_String) "Entry ", hlds__hlds_out__hlds_out_module__V_49_49);
            }
#line 3631 "hlds.hlds_out.hlds_out_module.c"
            {
#line 3633 "hlds.hlds_out.hlds_out_module.c"
              mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_module__V_51_51);
            }
#line 794 "hlds_out_module.m"
            {
#line 794 "hlds_out_module.m"
              hlds__hlds_out__hlds_out_module__InstTerm_72 = hlds__hlds_out__hlds_out_mode__inst_to_term_2_f_0(hlds__hlds_out__hlds_out_module__Lang_9, hlds__hlds_out__hlds_out_module__Inst_15);
            }
#line 3641 "hlds.hlds_out.hlds_out_module.c"
            hlds__hlds_out__hlds_out_module__TypeCtorInfo_14_76 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 795 "hlds_out_module.m"
            {
#line 795 "hlds_out_module.m"
              mercury__varset__init_1_p_0(hlds__hlds_out__hlds_out_module__TypeCtorInfo_14_76, &hlds__hlds_out__hlds_out_module__VarSet_73);
            }
#line 796 "hlds_out_module.m"
            {
#line 796 "hlds_out_module.m"
              parse_tree__mercury_to_mercury__mercury_output_term_5_p_0(hlds__hlds_out__hlds_out_module__TypeCtorInfo_14_76, hlds__hlds_out__hlds_out_module__VarSet_73, (MR_Integer) 0, hlds__hlds_out__hlds_out_module__InstTerm_72);
            }
#line 726 "hlds_out_module.m"
            {
#line 726 "hlds_out_module.m"
              mercury__io__nl_2_p_0();
#line 726 "hlds_out_module.m"
              return;
            }
#line 723 "hlds_out_module.m"
          }
#line 715 "hlds_out_module.m"
      }
#line 728 "hlds_out_module.m"
    else
#line 726 "hlds_out_module.m"
      {
#line 726 "hlds_out_module.m"
      }
#line 712 "hlds_out_module.m"
  }
#line 709 "hlds_out_module.m"
}

#line 695 "hlds_out_module.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_inst_params_5_p_0(
#line 695 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__InstVar_6,
#line 695 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__InstVars_7,
#line 695 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__InstVarSet_8)
#line 695 "hlds_out_module.m"
{
#line 698 "hlds_out_module.m"
  while (MR_TRUE)
#line 698 "hlds_out_module.m"
    {
#line 698 "hlds_out_module.m"
      /* tailcall optimized into a loop */
#line 698 "hlds_out_module.m"
      {
#line 698 "hlds_out_module.m"
        MR_bool hlds__hlds_out__hlds_out_module__succeeded;
#line 698 "hlds_out_module.m"
        MR_String hlds__hlds_out__hlds_out_module__InstVarName_10;

#line 699 "hlds_out_module.m"
        {
#line 699 "hlds_out_module.m"
          mercury__varset__lookup_name_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0, hlds__hlds_out__hlds_out_module__InstVarSet_8, hlds__hlds_out__hlds_out_module__InstVar_6, &hlds__hlds_out__hlds_out_module__InstVarName_10);
        }
#line 700 "hlds_out_module.m"
        {
#line 700 "hlds_out_module.m"
          mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_module__InstVarName_10);
        }
#line 703 "hlds_out_module.m"
        if ((hlds__hlds_out__hlds_out_module__InstVars_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 702 "hlds_out_module.m"
          {
#line 702 "hlds_out_module.m"
          }
#line 703 "hlds_out_module.m"
        else
#line 704 "hlds_out_module.m"
          {
#line 704 "hlds_out_module.m"
            MR_Word hlds__hlds_out__hlds_out_module__HeadInstVar_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_module__InstVars_7, (MR_Integer) 0)));
#line 704 "hlds_out_module.m"
            MR_Word hlds__hlds_out__hlds_out_module__TailInstVars_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_module__InstVars_7, (MR_Integer) 1)));

#line 705 "hlds_out_module.m"
            {
#line 705 "hlds_out_module.m"
              mercury__io__write_string_3_p_0((MR_String) ", ");
            }
#line 706 "hlds_out_module.m"
            /* direct tailcall eliminated */
#line 706 "hlds_out_module.m"
            {
#line 706 "hlds_out_module.m"
              MR_Word hlds__hlds_out__hlds_out_module__InstVar__tmp_copy_6 = hlds__hlds_out__hlds_out_module__HeadInstVar_11;
#line 706 "hlds_out_module.m"
              MR_Word hlds__hlds_out__hlds_out_module__InstVars__tmp_copy_7 = hlds__hlds_out__hlds_out_module__TailInstVars_12;

#line 706 "hlds_out_module.m"
              hlds__hlds_out__hlds_out_module__InstVars_7 = hlds__hlds_out__hlds_out_module__InstVars__tmp_copy_7;
#line 706 "hlds_out_module.m"
              hlds__hlds_out__hlds_out_module__InstVar_6 = hlds__hlds_out__hlds_out_module__InstVar__tmp_copy_6;
#line 706 "hlds_out_module.m"
            }
#line 706 "hlds_out_module.m"
            continue;
#line 704 "hlds_out_module.m"
          }
#line 698 "hlds_out_module.m"
      }
#line 698 "hlds_out_module.m"
      break;
#line 698 "hlds_out_module.m"
    }
#line 695 "hlds_out_module.m"
}

#line 667 "hlds_out_module.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_user_inst_5_p_0(
#line 667 "hlds_out_module.m"
  MR_Integer hlds__hlds_out__hlds_out_module__Indent_6,
#line 667 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__InstId_7,
#line 667 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__InstDefn_8)
#line 667 "hlds_out_module.m"
{
#line 670 "hlds_out_module.m"
  {
#line 670 "hlds_out_module.m"
    MR_bool hlds__hlds_out__hlds_out_module__succeeded;
#line 670 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__InstName_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__InstId_7, (MR_Integer) 0)));
#line 670 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__InstVarSet_12;
#line 670 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__InstParams_13;
#line 670 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__InstBody_14;
#line 670 "hlds_out_module.m"
    MR_String hlds__hlds_out__hlds_out_module__V_27_27;
#line 670 "hlds_out_module.m"
    MR_String hlds__hlds_out__hlds_out_module__V_43_43;
#line 671 "hlds_out_module.m"
    MR_Integer hlds__hlds_out__hlds_out_module___InstArity_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__InstId_7, (MR_Integer) 1)));
#line 674 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module___Context_15;
#line 674 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module___Status_16;

#line 672 "hlds_out_module.m"
    {
#line 672 "hlds_out_module.m"
      hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_module__Indent_6);
    }
#line 673 "hlds_out_module.m"
    {
#line 673 "hlds_out_module.m"
      hlds__hlds_out__hlds_out_module__V_27_27 = mdbcomp__prim_data__sym_name_to_string_1_f_0(hlds__hlds_out__hlds_out_module__InstName_10);
    }
#line 3801 "hlds.hlds_out.hlds_out_module.c"
    {
#line 3803 "hlds.hlds_out.hlds_out_module.c"
      hlds__hlds_out__hlds_out_module__V_43_43 = mercury__string__f_43_43_2_f_0((MR_String) "\n:- inst ", hlds__hlds_out__hlds_out_module__V_27_27);
    }
#line 3806 "hlds.hlds_out.hlds_out_module.c"
    {
#line 3808 "hlds.hlds_out.hlds_out_module.c"
      mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_module__V_43_43);
    }
#line 674 "hlds_out_module.m"
    hlds__hlds_out__hlds_out_module__InstVarSet_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__InstDefn_8, (MR_Integer) 0)));
#line 674 "hlds_out_module.m"
    hlds__hlds_out__hlds_out_module__InstParams_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__InstDefn_8, (MR_Integer) 1)));
#line 674 "hlds_out_module.m"
    hlds__hlds_out__hlds_out_module__InstBody_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__InstDefn_8, (MR_Integer) 2)));
#line 674 "hlds_out_module.m"
    hlds__hlds_out__hlds_out_module___Context_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__InstDefn_8, (MR_Integer) 3)));
#line 674 "hlds_out_module.m"
    hlds__hlds_out__hlds_out_module___Status_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__InstDefn_8, (MR_Integer) 4)));
#line 678 "hlds_out_module.m"
    if ((hlds__hlds_out__hlds_out_module__InstParams_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 677 "hlds_out_module.m"
      {
#line 677 "hlds_out_module.m"
      }
#line 678 "hlds_out_module.m"
    else
#line 679 "hlds_out_module.m"
      {
#line 679 "hlds_out_module.m"
        MR_Word hlds__hlds_out__hlds_out_module__HeadInstParam_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_module__InstParams_13, (MR_Integer) 0)));
#line 679 "hlds_out_module.m"
        MR_Word hlds__hlds_out__hlds_out_module__TailInstParams_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_module__InstParams_13, (MR_Integer) 1)));

#line 680 "hlds_out_module.m"
        {
#line 680 "hlds_out_module.m"
          mercury__io__write_string_3_p_0((MR_String) "(");
        }
#line 681 "hlds_out_module.m"
        {
#line 681 "hlds_out_module.m"
          hlds__hlds_out__hlds_out_module__write_inst_params_5_p_0(hlds__hlds_out__hlds_out_module__HeadInstParam_17, hlds__hlds_out__hlds_out_module__TailInstParams_18, hlds__hlds_out__hlds_out_module__InstVarSet_12);
        }
#line 682 "hlds_out_module.m"
        {
#line 682 "hlds_out_module.m"
          mercury__io__write_string_3_p_0((MR_String) ")");
        }
#line 679 "hlds_out_module.m"
      }
#line 687 "hlds_out_module.m"
    if ((hlds__hlds_out__hlds_out_module__InstBody_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 685 "hlds_out_module.m"
      {
#line 686 "hlds_out_module.m"
        {
#line 686 "hlds_out_module.m"
          mercury__io__write_string_3_p_0((MR_String) ": is abstract\n");
#line 686 "hlds_out_module.m"
          return;
        }
#line 685 "hlds_out_module.m"
      }
#line 687 "hlds_out_module.m"
    else
#line 688 "hlds_out_module.m"
      {
#line 688 "hlds_out_module.m"
        MR_Word hlds__hlds_out__hlds_out_module__EqvInst_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_module__InstBody_14, (MR_Integer) 0)));

#line 689 "hlds_out_module.m"
        {
#line 689 "hlds_out_module.m"
          mercury__io__write_string_3_p_0((MR_String) ":\n");
        }
#line 690 "hlds_out_module.m"
        {
#line 690 "hlds_out_module.m"
          hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_module__Indent_6);
        }
#line 691 "hlds_out_module.m"
        {
#line 691 "hlds_out_module.m"
          parse_tree__mercury_to_mercury__mercury_output_inst_4_p_0(hlds__hlds_out__hlds_out_module__EqvInst_19, hlds__hlds_out__hlds_out_module__InstVarSet_12);
        }
#line 692 "hlds_out_module.m"
        {
#line 692 "hlds_out_module.m"
          mercury__io__write_string_3_p_0((MR_String) "\n");
#line 692 "hlds_out_module.m"
          return;
        }
#line 688 "hlds_out_module.m"
      }
#line 670 "hlds_out_module.m"
  }
#line 667 "hlds_out_module.m"
}

#line 654 "hlds_out_module.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_inst_table_6_p_0_4(
#line 654 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__closure_arg,
#line 654 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_1,
#line 654 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_2,
#line 654 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_3,
#line 654 "hlds_out_module.m"
  MR_Box * hlds__hlds_out__hlds_out_module__wrapper_arg_4,
#line 654 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_5,
#line 654 "hlds_out_module.m"
  MR_Box * hlds__hlds_out__hlds_out_module__wrapper_arg_6)
#line 654 "hlds_out_module.m"
{
#line 654 "hlds_out_module.m"
  {
#line 654 "hlds_out_module.m"
    MR_Box hlds__hlds_out__hlds_out_module__closure = hlds__hlds_out__hlds_out_module__closure_arg;
#line 654 "hlds_out_module.m"
    MR_Integer hlds__hlds_out__hlds_out_module__conv11_STATE_VARIABLE_N_17;

#line 654 "hlds_out_module.m"
    {
#line 654 "hlds_out_module.m"
      hlds__hlds_out__hlds_out_module__write_inst_name_maybe_inst_8_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__closure, (MR_Integer) 3))), ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__closure, (MR_Integer) 4))), ((MR_Word) hlds__hlds_out__hlds_out_module__wrapper_arg_1), ((MR_Word) hlds__hlds_out__hlds_out_module__wrapper_arg_2), ((MR_Integer) hlds__hlds_out__hlds_out_module__wrapper_arg_3), &hlds__hlds_out__hlds_out_module__conv11_STATE_VARIABLE_N_17);
    }
#line 654 "hlds_out_module.m"
    *hlds__hlds_out__hlds_out_module__wrapper_arg_4 = ((MR_Box) (hlds__hlds_out__hlds_out_module__conv11_STATE_VARIABLE_N_17));
#line 654 "hlds_out_module.m"
  }
#line 654 "hlds_out_module.m"
}

#line 636 "hlds_out_module.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_inst_table_6_p_0_3(
#line 636 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__closure_arg,
#line 636 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_1,
#line 636 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_2,
#line 636 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_3,
#line 636 "hlds_out_module.m"
  MR_Box * hlds__hlds_out__hlds_out_module__wrapper_arg_4,
#line 636 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_5,
#line 636 "hlds_out_module.m"
  MR_Box * hlds__hlds_out__hlds_out_module__wrapper_arg_6)
#line 636 "hlds_out_module.m"
{
#line 636 "hlds_out_module.m"
  {
#line 636 "hlds_out_module.m"
    MR_Box hlds__hlds_out__hlds_out_module__closure = hlds__hlds_out__hlds_out_module__closure_arg;
#line 636 "hlds_out_module.m"
    MR_Integer hlds__hlds_out__hlds_out_module__conv4_STATE_VARIABLE_N_18;

#line 636 "hlds_out_module.m"
    {
#line 636 "hlds_out_module.m"
      hlds__hlds_out__hlds_out_module__write_inst_pair_maybe_inst_8_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__closure, (MR_Integer) 3))), ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__closure, (MR_Integer) 4))), ((MR_Word) hlds__hlds_out__hlds_out_module__wrapper_arg_1), ((MR_Word) hlds__hlds_out__hlds_out_module__wrapper_arg_2), ((MR_Integer) hlds__hlds_out__hlds_out_module__wrapper_arg_3), &hlds__hlds_out__hlds_out_module__conv4_STATE_VARIABLE_N_18);
    }
#line 636 "hlds_out_module.m"
    *hlds__hlds_out__hlds_out_module__wrapper_arg_4 = ((MR_Box) (hlds__hlds_out__hlds_out_module__conv4_STATE_VARIABLE_N_18));
#line 636 "hlds_out_module.m"
  }
#line 636 "hlds_out_module.m"
}

#line 630 "hlds_out_module.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_inst_table_6_p_0_2(
#line 630 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__closure_arg,
#line 630 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_1,
#line 630 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_2,
#line 630 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_3,
#line 630 "hlds_out_module.m"
  MR_Box * hlds__hlds_out__hlds_out_module__wrapper_arg_4,
#line 630 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_5,
#line 630 "hlds_out_module.m"
  MR_Box * hlds__hlds_out__hlds_out_module__wrapper_arg_6)
#line 630 "hlds_out_module.m"
{
#line 630 "hlds_out_module.m"
  {
#line 630 "hlds_out_module.m"
    MR_Box hlds__hlds_out__hlds_out_module__closure = hlds__hlds_out__hlds_out_module__closure_arg;
#line 630 "hlds_out_module.m"
    MR_Integer hlds__hlds_out__hlds_out_module__conv1_STATE_VARIABLE_N_19;

#line 630 "hlds_out_module.m"
    {
#line 630 "hlds_out_module.m"
      hlds__hlds_out__hlds_out_module__write_inst_name_maybe_inst_det_8_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__closure, (MR_Integer) 3))), ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__closure, (MR_Integer) 4))), ((MR_Word) hlds__hlds_out__hlds_out_module__wrapper_arg_1), ((MR_Word) hlds__hlds_out__hlds_out_module__wrapper_arg_2), ((MR_Integer) hlds__hlds_out__hlds_out_module__wrapper_arg_3), &hlds__hlds_out__hlds_out_module__conv1_STATE_VARIABLE_N_19);
    }
#line 630 "hlds_out_module.m"
    *hlds__hlds_out__hlds_out_module__wrapper_arg_4 = ((MR_Box) (hlds__hlds_out__hlds_out_module__conv1_STATE_VARIABLE_N_19));
#line 630 "hlds_out_module.m"
  }
#line 630 "hlds_out_module.m"
}

#line 626 "hlds_out_module.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_inst_table_6_p_0_1(
#line 626 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__closure_arg,
#line 626 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_1,
#line 626 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_2,
#line 626 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_3,
#line 626 "hlds_out_module.m"
  MR_Box * hlds__hlds_out__hlds_out_module__wrapper_arg_4)
#line 626 "hlds_out_module.m"
{
#line 626 "hlds_out_module.m"
  {
#line 626 "hlds_out_module.m"
    MR_Box hlds__hlds_out__hlds_out_module__closure = hlds__hlds_out__hlds_out_module__closure_arg;

#line 626 "hlds_out_module.m"
    {
#line 626 "hlds_out_module.m"
      hlds__hlds_out__hlds_out_module__write_user_inst_5_p_0(((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__closure, (MR_Integer) 3))), ((MR_Word) hlds__hlds_out__hlds_out_module__wrapper_arg_1), ((MR_Word) hlds__hlds_out__hlds_out_module__wrapper_arg_2));
#line 626 "hlds_out_module.m"
      return;
    }
#line 626 "hlds_out_module.m"
  }
#line 626 "hlds_out_module.m"
}

#line 615 "hlds_out_module.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_inst_table_6_p_0(
#line 615 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__Lang_7,
#line 615 "hlds_out_module.m"
  MR_Integer hlds__hlds_out__hlds_out_module__Indent_8,
#line 615 "hlds_out_module.m"
  MR_Integer hlds__hlds_out__hlds_out_module__Limit_9,
#line 615 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__InstTable_10)
#line 615 "hlds_out_module.m"
{
#line 618 "hlds_out_module.m"
  {
#line 618 "hlds_out_module.m"
    MR_bool hlds__hlds_out__hlds_out_module__succeeded;
#line 618 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__TypeCtorInfo_103_103;
#line 618 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__TypeCtorInfo_110_110;
#line 618 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__TypeCtorInfo_111_111;
#line 618 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__TypeCtorInfo_112_112;
#line 618 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__TypeCtorInfo_120_120;
#line 618 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__UserInstTable_12;
#line 618 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__UserInstMap_13;
#line 618 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__UnifyInstMap_14;
#line 618 "hlds_out_module.m"
    MR_Integer hlds__hlds_out__hlds_out_module__NumUnifyInsts_15;
#line 618 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__MergeInstMap_16;
#line 618 "hlds_out_module.m"
    MR_Integer hlds__hlds_out__hlds_out_module__NumMergeInsts_17;
#line 618 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__GroundInstMap_18;
#line 618 "hlds_out_module.m"
    MR_Integer hlds__hlds_out__hlds_out_module__NumGroundInsts_19;
#line 618 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__AnyInstMap_20;
#line 618 "hlds_out_module.m"
    MR_Integer hlds__hlds_out__hlds_out_module__NumAnyInsts_21;
#line 618 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__SharedInstMap_22;
#line 618 "hlds_out_module.m"
    MR_Integer hlds__hlds_out__hlds_out_module__NumSharedInsts_23;
#line 618 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__MostlyUniqInstMap_24;
#line 618 "hlds_out_module.m"
    MR_Integer hlds__hlds_out__hlds_out_module__NumMostlyUniqInsts_25;
#line 618 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__V_34_34;
#line 618 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__V_38_38;
#line 618 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__V_48_48;
#line 618 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__V_78_78;
#line 618 "hlds_out_module.m"
    MR_String hlds__hlds_out__hlds_out_module__V_146_146;
#line 618 "hlds_out_module.m"
    MR_String hlds__hlds_out__hlds_out_module__V_147_147;
#line 618 "hlds_out_module.m"
    MR_String hlds__hlds_out__hlds_out_module__V_149_149;
#line 618 "hlds_out_module.m"
    MR_String hlds__hlds_out__hlds_out_module__V_151_151;
#line 618 "hlds_out_module.m"
    MR_String hlds__hlds_out__hlds_out_module__V_152_152;
#line 618 "hlds_out_module.m"
    MR_String hlds__hlds_out__hlds_out_module__V_154_154;
#line 618 "hlds_out_module.m"
    MR_String hlds__hlds_out__hlds_out_module__V_156_156;
#line 618 "hlds_out_module.m"
    MR_String hlds__hlds_out__hlds_out_module__V_157_157;
#line 618 "hlds_out_module.m"
    MR_String hlds__hlds_out__hlds_out_module__V_159_159;
#line 618 "hlds_out_module.m"
    MR_String hlds__hlds_out__hlds_out_module__V_161_161;
#line 618 "hlds_out_module.m"
    MR_String hlds__hlds_out__hlds_out_module__V_162_162;
#line 618 "hlds_out_module.m"
    MR_String hlds__hlds_out__hlds_out_module__V_164_164;
#line 618 "hlds_out_module.m"
    MR_String hlds__hlds_out__hlds_out_module__V_166_166;
#line 618 "hlds_out_module.m"
    MR_String hlds__hlds_out__hlds_out_module__V_167_167;
#line 618 "hlds_out_module.m"
    MR_String hlds__hlds_out__hlds_out_module__V_169_169;
#line 618 "hlds_out_module.m"
    MR_String hlds__hlds_out__hlds_out_module__V_171_171;
#line 618 "hlds_out_module.m"
    MR_String hlds__hlds_out__hlds_out_module__V_172_172;
#line 618 "hlds_out_module.m"
    MR_String hlds__hlds_out__hlds_out_module__V_174_174;
#line 626 "hlds_out_module.m"
    MR_Box hlds__hlds_out__hlds_out_module__conv0_STATE_VARIABLE_IO_35_35;
#line 630 "hlds_out_module.m"
    MR_Box hlds__hlds_out__hlds_out_module__conv3_NumUnifyInsts_15;
#line 630 "hlds_out_module.m"
    MR_Box hlds__hlds_out__hlds_out_module__conv2_STATE_VARIABLE_IO_40_40;
#line 636 "hlds_out_module.m"
    MR_Box hlds__hlds_out__hlds_out_module__conv6_NumMergeInsts_17;
#line 636 "hlds_out_module.m"
    MR_Box hlds__hlds_out__hlds_out_module__conv5_STATE_VARIABLE_IO_50_50;
#line 642 "hlds_out_module.m"
    MR_Box hlds__hlds_out__hlds_out_module__conv8_NumGroundInsts_19;
#line 642 "hlds_out_module.m"
    MR_Box hlds__hlds_out__hlds_out_module__conv7_STATE_VARIABLE_IO_60_60;
#line 648 "hlds_out_module.m"
    MR_Box hlds__hlds_out__hlds_out_module__conv10_NumAnyInsts_21;
#line 648 "hlds_out_module.m"
    MR_Box hlds__hlds_out__hlds_out_module__conv9_STATE_VARIABLE_IO_70_70;
#line 654 "hlds_out_module.m"
    MR_Box hlds__hlds_out__hlds_out_module__conv13_NumSharedInsts_23;
#line 654 "hlds_out_module.m"
    MR_Box hlds__hlds_out__hlds_out_module__conv12_STATE_VARIABLE_IO_80_80;
#line 660 "hlds_out_module.m"
    MR_Box hlds__hlds_out__hlds_out_module__conv15_NumMostlyUniqInsts_25;
#line 660 "hlds_out_module.m"
    MR_Box hlds__hlds_out__hlds_out_module__conv14_STATE_VARIABLE_IO_90_90;

#line 619 "hlds_out_module.m"
    {
#line 619 "hlds_out_module.m"
      hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_module__Indent_8);
    }
#line 620 "hlds_out_module.m"
    {
#line 620 "hlds_out_module.m"
      mercury__io__write_string_3_p_0((MR_String) "%-------- Insts --------\n");
    }
#line 622 "hlds_out_module.m"
    {
#line 622 "hlds_out_module.m"
      hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_module__Indent_8);
    }
#line 623 "hlds_out_module.m"
    {
#line 623 "hlds_out_module.m"
      mercury__io__write_string_3_p_0((MR_String) "%-------- User defined insts --------\n");
    }
#line 624 "hlds_out_module.m"
    {
#line 624 "hlds_out_module.m"
      hlds__hlds_data__inst_table_get_user_insts_2_p_0(hlds__hlds_out__hlds_out_module__InstTable_10, &hlds__hlds_out__hlds_out_module__UserInstTable_12);
    }
#line 625 "hlds_out_module.m"
    {
#line 625 "hlds_out_module.m"
      hlds__hlds_data__user_inst_table_get_inst_defns_2_p_0(hlds__hlds_out__hlds_out_module__UserInstTable_12, &hlds__hlds_out__hlds_out_module__UserInstMap_13);
    }
#line 626 "hlds_out_module.m"
    {
#line 626 "hlds_out_module.m"
      hlds__hlds_out__hlds_out_module__V_34_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 626 "hlds_out_module.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__V_34_34, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_module_scalar_common_4[5]));
#line 626 "hlds_out_module.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__V_34_34, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_module__write_inst_table_6_p_0_1));
#line 626 "hlds_out_module.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__V_34_34, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 626 "hlds_out_module.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__V_34_34, 3) = ((MR_Box) (hlds__hlds_out__hlds_out_module__Indent_8));
#line 626 "hlds_out_module.m"
    }
#line 4218 "hlds.hlds_out.hlds_out_module.c"
    hlds__hlds_out__hlds_out_module__TypeCtorInfo_103_103 = (MR_Word) &mercury__io__io__type_ctor_info_state_0;
#line 626 "hlds_out_module.m"
    {
#line 626 "hlds_out_module.m"
      mercury__map__foldl_4_p_2((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_id_0, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_inst_defn_0, hlds__hlds_out__hlds_out_module__TypeCtorInfo_103_103, hlds__hlds_out__hlds_out_module__V_34_34, hlds__hlds_out__hlds_out_module__UserInstMap_13, ((MR_Box) ((MR_Integer) 0)), &hlds__hlds_out__hlds_out_module__conv0_STATE_VARIABLE_IO_35_35);
    }
#line 628 "hlds_out_module.m"
    {
#line 628 "hlds_out_module.m"
      mercury__io__write_string_3_p_0((MR_String) "%-------- Unify insts --------\n");
    }
#line 629 "hlds_out_module.m"
    {
#line 629 "hlds_out_module.m"
      hlds__hlds_data__inst_table_get_unify_insts_2_p_0(hlds__hlds_out__hlds_out_module__InstTable_10, &hlds__hlds_out__hlds_out_module__UnifyInstMap_14);
    }
#line 630 "hlds_out_module.m"
    {
#line 630 "hlds_out_module.m"
      hlds__hlds_out__hlds_out_module__V_38_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 630 "hlds_out_module.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__V_38_38, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_module_scalar_common_5[0]));
#line 630 "hlds_out_module.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__V_38_38, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_module__write_inst_table_6_p_0_2));
#line 630 "hlds_out_module.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__V_38_38, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 630 "hlds_out_module.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__V_38_38, 3) = ((MR_Box) (hlds__hlds_out__hlds_out_module__Lang_7));
#line 630 "hlds_out_module.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__V_38_38, 4) = ((MR_Box) (hlds__hlds_out__hlds_out_module__Limit_9));
#line 630 "hlds_out_module.m"
    }
#line 4251 "hlds.hlds_out.hlds_out_module.c"
    hlds__hlds_out__hlds_out_module__TypeCtorInfo_110_110 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0;
#line 4253 "hlds.hlds_out.hlds_out_module.c"
    hlds__hlds_out__hlds_out_module__TypeCtorInfo_111_111 = (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_maybe_inst_det_0;
#line 4255 "hlds.hlds_out.hlds_out_module.c"
    hlds__hlds_out__hlds_out_module__TypeCtorInfo_112_112 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 630 "hlds_out_module.m"
    {
#line 630 "hlds_out_module.m"
      mercury__map__foldl2_6_p_2(hlds__hlds_out__hlds_out_module__TypeCtorInfo_110_110, hlds__hlds_out__hlds_out_module__TypeCtorInfo_111_111, hlds__hlds_out__hlds_out_module__TypeCtorInfo_112_112, hlds__hlds_out__hlds_out_module__TypeCtorInfo_103_103, hlds__hlds_out__hlds_out_module__V_38_38, hlds__hlds_out__hlds_out_module__UnifyInstMap_14, ((MR_Box) ((MR_Integer) 0)), &hlds__hlds_out__hlds_out_module__conv3_NumUnifyInsts_15, ((MR_Box) ((MR_Integer) 0)), &hlds__hlds_out__hlds_out_module__conv2_STATE_VARIABLE_IO_40_40);
    }
#line 630 "hlds_out_module.m"
    hlds__hlds_out__hlds_out_module__NumUnifyInsts_15 = ((MR_Integer) hlds__hlds_out__hlds_out_module__conv3_NumUnifyInsts_15);
#line 4264 "hlds.hlds_out.hlds_out_module.c"
    {
#line 4266 "hlds.hlds_out.hlds_out_module.c"
      hlds__hlds_out__hlds_out_module__V_146_146 = mercury__string__int_to_string_1_f_0(hlds__hlds_out__hlds_out_module__NumUnifyInsts_15);
    }
#line 4269 "hlds.hlds_out.hlds_out_module.c"
    {
#line 4271 "hlds.hlds_out.hlds_out_module.c"
      hlds__hlds_out__hlds_out_module__V_147_147 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_module__V_146_146, (MR_String) "\n");
    }
#line 4274 "hlds.hlds_out.hlds_out_module.c"
    {
#line 4276 "hlds.hlds_out.hlds_out_module.c"
      hlds__hlds_out__hlds_out_module__V_149_149 = mercury__string__f_43_43_2_f_0((MR_String) "Total number of unify insts: ", hlds__hlds_out__hlds_out_module__V_147_147);
    }
#line 4279 "hlds.hlds_out.hlds_out_module.c"
    {
#line 4281 "hlds.hlds_out.hlds_out_module.c"
      mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_module__V_149_149);
    }
#line 634 "hlds_out_module.m"
    {
#line 634 "hlds_out_module.m"
      mercury__io__write_string_3_p_0((MR_String) "%-------- Merge insts --------\n");
    }
#line 635 "hlds_out_module.m"
    {
#line 635 "hlds_out_module.m"
      hlds__hlds_data__inst_table_get_merge_insts_2_p_0(hlds__hlds_out__hlds_out_module__InstTable_10, &hlds__hlds_out__hlds_out_module__MergeInstMap_16);
    }
#line 636 "hlds_out_module.m"
    {
#line 636 "hlds_out_module.m"
      hlds__hlds_out__hlds_out_module__V_48_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 636 "hlds_out_module.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__V_48_48, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_module_scalar_common_5[1]));
#line 636 "hlds_out_module.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__V_48_48, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_module__write_inst_table_6_p_0_3));
#line 636 "hlds_out_module.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__V_48_48, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 636 "hlds_out_module.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__V_48_48, 3) = ((MR_Box) (hlds__hlds_out__hlds_out_module__Lang_7));
#line 636 "hlds_out_module.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__V_48_48, 4) = ((MR_Box) (hlds__hlds_out__hlds_out_module__Limit_9));
#line 636 "hlds_out_module.m"
    }
#line 4310 "hlds.hlds_out.hlds_out_module.c"
    hlds__hlds_out__hlds_out_module__TypeCtorInfo_120_120 = (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_maybe_inst_0;
#line 636 "hlds_out_module.m"
    {
#line 636 "hlds_out_module.m"
      mercury__map__foldl2_6_p_2((MR_Word) &hlds__hlds_out__hlds_out_module_scalar_common_2[2], hlds__hlds_out__hlds_out_module__TypeCtorInfo_120_120, hlds__hlds_out__hlds_out_module__TypeCtorInfo_112_112, hlds__hlds_out__hlds_out_module__TypeCtorInfo_103_103, hlds__hlds_out__hlds_out_module__V_48_48, hlds__hlds_out__hlds_out_module__MergeInstMap_16, ((MR_Box) ((MR_Integer) 0)), &hlds__hlds_out__hlds_out_module__conv6_NumMergeInsts_17, ((MR_Box) ((MR_Integer) 0)), &hlds__hlds_out__hlds_out_module__conv5_STATE_VARIABLE_IO_50_50);
    }
#line 636 "hlds_out_module.m"
    hlds__hlds_out__hlds_out_module__NumMergeInsts_17 = ((MR_Integer) hlds__hlds_out__hlds_out_module__conv6_NumMergeInsts_17);
#line 4319 "hlds.hlds_out.hlds_out_module.c"
    {
#line 4321 "hlds.hlds_out.hlds_out_module.c"
      hlds__hlds_out__hlds_out_module__V_151_151 = mercury__string__int_to_string_1_f_0(hlds__hlds_out__hlds_out_module__NumMergeInsts_17);
    }
#line 4324 "hlds.hlds_out.hlds_out_module.c"
    {
#line 4326 "hlds.hlds_out.hlds_out_module.c"
      hlds__hlds_out__hlds_out_module__V_152_152 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_module__V_151_151, (MR_String) "\n");
    }
#line 4329 "hlds.hlds_out.hlds_out_module.c"
    {
#line 4331 "hlds.hlds_out.hlds_out_module.c"
      hlds__hlds_out__hlds_out_module__V_154_154 = mercury__string__f_43_43_2_f_0((MR_String) "Total number of merge insts: ", hlds__hlds_out__hlds_out_module__V_152_152);
    }
#line 4334 "hlds.hlds_out.hlds_out_module.c"
    {
#line 4336 "hlds.hlds_out.hlds_out_module.c"
      mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_module__V_154_154);
    }
#line 640 "hlds_out_module.m"
    {
#line 640 "hlds_out_module.m"
      mercury__io__write_string_3_p_0((MR_String) "%-------- Ground insts --------\n");
    }
#line 641 "hlds_out_module.m"
    {
#line 641 "hlds_out_module.m"
      hlds__hlds_data__inst_table_get_unify_insts_2_p_0(hlds__hlds_out__hlds_out_module__InstTable_10, &hlds__hlds_out__hlds_out_module__GroundInstMap_18);
    }
#line 642 "hlds_out_module.m"
    {
#line 642 "hlds_out_module.m"
      mercury__map__foldl2_6_p_2(hlds__hlds_out__hlds_out_module__TypeCtorInfo_110_110, hlds__hlds_out__hlds_out_module__TypeCtorInfo_111_111, hlds__hlds_out__hlds_out_module__TypeCtorInfo_112_112, hlds__hlds_out__hlds_out_module__TypeCtorInfo_103_103, hlds__hlds_out__hlds_out_module__V_38_38, hlds__hlds_out__hlds_out_module__GroundInstMap_18, ((MR_Box) ((MR_Integer) 0)), &hlds__hlds_out__hlds_out_module__conv8_NumGroundInsts_19, ((MR_Box) ((MR_Integer) 0)), &hlds__hlds_out__hlds_out_module__conv7_STATE_VARIABLE_IO_60_60);
    }
#line 642 "hlds_out_module.m"
    hlds__hlds_out__hlds_out_module__NumGroundInsts_19 = ((MR_Integer) hlds__hlds_out__hlds_out_module__conv8_NumGroundInsts_19);
#line 4356 "hlds.hlds_out.hlds_out_module.c"
    {
#line 4358 "hlds.hlds_out.hlds_out_module.c"
      hlds__hlds_out__hlds_out_module__V_156_156 = mercury__string__int_to_string_1_f_0(hlds__hlds_out__hlds_out_module__NumGroundInsts_19);
    }
#line 4361 "hlds.hlds_out.hlds_out_module.c"
    {
#line 4363 "hlds.hlds_out.hlds_out_module.c"
      hlds__hlds_out__hlds_out_module__V_157_157 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_module__V_156_156, (MR_String) "\n");
    }
#line 4366 "hlds.hlds_out.hlds_out_module.c"
    {
#line 4368 "hlds.hlds_out.hlds_out_module.c"
      hlds__hlds_out__hlds_out_module__V_159_159 = mercury__string__f_43_43_2_f_0((MR_String) "Total number of ground insts: ", hlds__hlds_out__hlds_out_module__V_157_157);
    }
#line 4371 "hlds.hlds_out.hlds_out_module.c"
    {
#line 4373 "hlds.hlds_out.hlds_out_module.c"
      mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_module__V_159_159);
    }
#line 646 "hlds_out_module.m"
    {
#line 646 "hlds_out_module.m"
      mercury__io__write_string_3_p_0((MR_String) "%-------- Any insts --------\n");
    }
#line 647 "hlds_out_module.m"
    {
#line 647 "hlds_out_module.m"
      hlds__hlds_data__inst_table_get_any_insts_2_p_0(hlds__hlds_out__hlds_out_module__InstTable_10, &hlds__hlds_out__hlds_out_module__AnyInstMap_20);
    }
#line 648 "hlds_out_module.m"
    {
#line 648 "hlds_out_module.m"
      mercury__map__foldl2_6_p_2(hlds__hlds_out__hlds_out_module__TypeCtorInfo_110_110, hlds__hlds_out__hlds_out_module__TypeCtorInfo_111_111, hlds__hlds_out__hlds_out_module__TypeCtorInfo_112_112, hlds__hlds_out__hlds_out_module__TypeCtorInfo_103_103, hlds__hlds_out__hlds_out_module__V_38_38, hlds__hlds_out__hlds_out_module__AnyInstMap_20, ((MR_Box) ((MR_Integer) 0)), &hlds__hlds_out__hlds_out_module__conv10_NumAnyInsts_21, ((MR_Box) ((MR_Integer) 0)), &hlds__hlds_out__hlds_out_module__conv9_STATE_VARIABLE_IO_70_70);
    }
#line 648 "hlds_out_module.m"
    hlds__hlds_out__hlds_out_module__NumAnyInsts_21 = ((MR_Integer) hlds__hlds_out__hlds_out_module__conv10_NumAnyInsts_21);
#line 4393 "hlds.hlds_out.hlds_out_module.c"
    {
#line 4395 "hlds.hlds_out.hlds_out_module.c"
      hlds__hlds_out__hlds_out_module__V_161_161 = mercury__string__int_to_string_1_f_0(hlds__hlds_out__hlds_out_module__NumAnyInsts_21);
    }
#line 4398 "hlds.hlds_out.hlds_out_module.c"
    {
#line 4400 "hlds.hlds_out.hlds_out_module.c"
      hlds__hlds_out__hlds_out_module__V_162_162 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_module__V_161_161, (MR_String) "\n");
    }
#line 4403 "hlds.hlds_out.hlds_out_module.c"
    {
#line 4405 "hlds.hlds_out.hlds_out_module.c"
      hlds__hlds_out__hlds_out_module__V_164_164 = mercury__string__f_43_43_2_f_0((MR_String) "Total number of any insts: ", hlds__hlds_out__hlds_out_module__V_162_162);
    }
#line 4408 "hlds.hlds_out.hlds_out_module.c"
    {
#line 4410 "hlds.hlds_out.hlds_out_module.c"
      mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_module__V_164_164);
    }
#line 652 "hlds_out_module.m"
    {
#line 652 "hlds_out_module.m"
      mercury__io__write_string_3_p_0((MR_String) "%-------- Shared insts --------\n");
    }
#line 653 "hlds_out_module.m"
    {
#line 653 "hlds_out_module.m"
      hlds__hlds_data__inst_table_get_shared_insts_2_p_0(hlds__hlds_out__hlds_out_module__InstTable_10, &hlds__hlds_out__hlds_out_module__SharedInstMap_22);
    }
#line 654 "hlds_out_module.m"
    {
#line 654 "hlds_out_module.m"
      hlds__hlds_out__hlds_out_module__V_78_78 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 654 "hlds_out_module.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__V_78_78, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_module_scalar_common_5[2]));
#line 654 "hlds_out_module.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__V_78_78, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_module__write_inst_table_6_p_0_4));
#line 654 "hlds_out_module.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__V_78_78, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 654 "hlds_out_module.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__V_78_78, 3) = ((MR_Box) (hlds__hlds_out__hlds_out_module__Lang_7));
#line 654 "hlds_out_module.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__V_78_78, 4) = ((MR_Box) (hlds__hlds_out__hlds_out_module__Limit_9));
#line 654 "hlds_out_module.m"
    }
#line 654 "hlds_out_module.m"
    {
#line 654 "hlds_out_module.m"
      mercury__map__foldl2_6_p_2(hlds__hlds_out__hlds_out_module__TypeCtorInfo_110_110, hlds__hlds_out__hlds_out_module__TypeCtorInfo_120_120, hlds__hlds_out__hlds_out_module__TypeCtorInfo_112_112, hlds__hlds_out__hlds_out_module__TypeCtorInfo_103_103, hlds__hlds_out__hlds_out_module__V_78_78, hlds__hlds_out__hlds_out_module__SharedInstMap_22, ((MR_Box) ((MR_Integer) 0)), &hlds__hlds_out__hlds_out_module__conv13_NumSharedInsts_23, ((MR_Box) ((MR_Integer) 0)), &hlds__hlds_out__hlds_out_module__conv12_STATE_VARIABLE_IO_80_80);
    }
#line 654 "hlds_out_module.m"
    hlds__hlds_out__hlds_out_module__NumSharedInsts_23 = ((MR_Integer) hlds__hlds_out__hlds_out_module__conv13_NumSharedInsts_23);
#line 4446 "hlds.hlds_out.hlds_out_module.c"
    {
#line 4448 "hlds.hlds_out.hlds_out_module.c"
      hlds__hlds_out__hlds_out_module__V_166_166 = mercury__string__int_to_string_1_f_0(hlds__hlds_out__hlds_out_module__NumSharedInsts_23);
    }
#line 4451 "hlds.hlds_out.hlds_out_module.c"
    {
#line 4453 "hlds.hlds_out.hlds_out_module.c"
      hlds__hlds_out__hlds_out_module__V_167_167 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_module__V_166_166, (MR_String) "\n");
    }
#line 4456 "hlds.hlds_out.hlds_out_module.c"
    {
#line 4458 "hlds.hlds_out.hlds_out_module.c"
      hlds__hlds_out__hlds_out_module__V_169_169 = mercury__string__f_43_43_2_f_0((MR_String) "Total number of shared insts: ", hlds__hlds_out__hlds_out_module__V_167_167);
    }
#line 4461 "hlds.hlds_out.hlds_out_module.c"
    {
#line 4463 "hlds.hlds_out.hlds_out_module.c"
      mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_module__V_169_169);
    }
#line 658 "hlds_out_module.m"
    {
#line 658 "hlds_out_module.m"
      mercury__io__write_string_3_p_0((MR_String) "%-------- MostlyUniq insts --------\n");
    }
#line 659 "hlds_out_module.m"
    {
#line 659 "hlds_out_module.m"
      hlds__hlds_data__inst_table_get_mostly_uniq_insts_2_p_0(hlds__hlds_out__hlds_out_module__InstTable_10, &hlds__hlds_out__hlds_out_module__MostlyUniqInstMap_24);
    }
#line 660 "hlds_out_module.m"
    {
#line 660 "hlds_out_module.m"
      mercury__map__foldl2_6_p_2(hlds__hlds_out__hlds_out_module__TypeCtorInfo_110_110, hlds__hlds_out__hlds_out_module__TypeCtorInfo_120_120, hlds__hlds_out__hlds_out_module__TypeCtorInfo_112_112, hlds__hlds_out__hlds_out_module__TypeCtorInfo_103_103, hlds__hlds_out__hlds_out_module__V_78_78, hlds__hlds_out__hlds_out_module__MostlyUniqInstMap_24, ((MR_Box) ((MR_Integer) 0)), &hlds__hlds_out__hlds_out_module__conv15_NumMostlyUniqInsts_25, ((MR_Box) ((MR_Integer) 0)), &hlds__hlds_out__hlds_out_module__conv14_STATE_VARIABLE_IO_90_90);
    }
#line 660 "hlds_out_module.m"
    hlds__hlds_out__hlds_out_module__NumMostlyUniqInsts_25 = ((MR_Integer) hlds__hlds_out__hlds_out_module__conv15_NumMostlyUniqInsts_25);
#line 4483 "hlds.hlds_out.hlds_out_module.c"
    {
#line 4485 "hlds.hlds_out.hlds_out_module.c"
      hlds__hlds_out__hlds_out_module__V_171_171 = mercury__string__int_to_string_1_f_0(hlds__hlds_out__hlds_out_module__NumMostlyUniqInsts_25);
    }
#line 4488 "hlds.hlds_out.hlds_out_module.c"
    {
#line 4490 "hlds.hlds_out.hlds_out_module.c"
      hlds__hlds_out__hlds_out_module__V_172_172 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_module__V_171_171, (MR_String) "\n");
    }
#line 4493 "hlds.hlds_out.hlds_out_module.c"
    {
#line 4495 "hlds.hlds_out.hlds_out_module.c"
      hlds__hlds_out__hlds_out_module__V_174_174 = mercury__string__f_43_43_2_f_0((MR_String) "Total number of mostly uniq insts: ", hlds__hlds_out__hlds_out_module__V_172_172);
    }
#line 4498 "hlds.hlds_out.hlds_out_module.c"
    {
#line 4500 "hlds.hlds_out.hlds_out_module.c"
      mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_module__V_174_174);
    }
#line 665 "hlds_out_module.m"
    {
#line 665 "hlds_out_module.m"
      mercury__io__nl_2_p_0();
#line 665 "hlds_out_module.m"
      return;
    }
#line 618 "hlds_out_module.m"
  }
#line 615 "hlds_out_module.m"
}

#line 583 "hlds_out_module.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_instance_defn_5_p_0_2(
#line 583 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__closure_arg,
#line 583 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_1,
#line 583 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_2,
#line 583 "hlds_out_module.m"
  MR_Box * hlds__hlds_out__hlds_out_module__wrapper_arg_3)
#line 583 "hlds_out_module.m"
{
#line 583 "hlds_out_module.m"
  {
#line 583 "hlds_out_module.m"
    MR_Box hlds__hlds_out__hlds_out_module__closure = hlds__hlds_out__hlds_out_module__closure_arg;

#line 583 "hlds_out_module.m"
    {
#line 583 "hlds_out_module.m"
      parse_tree__mercury_to_mercury__mercury_output_constraint_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__closure, (MR_Integer) 4))), ((MR_Word) hlds__hlds_out__hlds_out_module__wrapper_arg_1));
#line 583 "hlds_out_module.m"
      return;
    }
#line 583 "hlds_out_module.m"
  }
#line 583 "hlds_out_module.m"
}

#line 569 "hlds_out_module.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_instance_defn_5_p_0_1(
#line 569 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__closure_arg,
#line 569 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_1,
#line 569 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_2,
#line 569 "hlds_out_module.m"
  MR_Box * hlds__hlds_out__hlds_out_module__wrapper_arg_3)
#line 569 "hlds_out_module.m"
{
#line 569 "hlds_out_module.m"
  {
#line 569 "hlds_out_module.m"
    MR_Box hlds__hlds_out__hlds_out_module__closure = hlds__hlds_out__hlds_out_module__closure_arg;

#line 569 "hlds_out_module.m"
    {
#line 569 "hlds_out_module.m"
      parse_tree__mercury_to_mercury__mercury_output_type_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__closure, (MR_Integer) 4))), ((MR_Word) hlds__hlds_out__hlds_out_module__wrapper_arg_1));
#line 569 "hlds_out_module.m"
      return;
    }
#line 569 "hlds_out_module.m"
  }
#line 569 "hlds_out_module.m"
}

#line 540 "hlds_out_module.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_instance_defn_5_p_0(
#line 540 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__Info_6,
#line 540 "hlds_out_module.m"
  MR_Integer hlds__hlds_out__hlds_out_module__Indent_7,
#line 540 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__InstanceDefn_8)
#line 540 "hlds_out_module.m"
{
#line 543 "hlds_out_module.m"
  {
#line 543 "hlds_out_module.m"
    MR_bool hlds__hlds_out__hlds_out_module__succeeded;
#line 543 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__TypeCtorInfo_84_84;
#line 543 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__Context_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__InstanceDefn_8, (MR_Integer) 2)));
#line 543 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__Constraints_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__InstanceDefn_8, (MR_Integer) 3)));
#line 543 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__Types_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__InstanceDefn_8, (MR_Integer) 4)));
#line 543 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__OriginalTypes_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__InstanceDefn_8, (MR_Integer) 5)));
#line 543 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__Body_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__InstanceDefn_8, (MR_Integer) 6)));
#line 543 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__MaybePredProcIds_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__InstanceDefn_8, (MR_Integer) 7)));
#line 543 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__VarSet_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__InstanceDefn_8, (MR_Integer) 8)));
#line 543 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__Proofs_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__InstanceDefn_8, (MR_Integer) 9)));
#line 543 "hlds_out_module.m"
    MR_String hlds__hlds_out__hlds_out_module__FileName_20;
#line 543 "hlds_out_module.m"
    MR_Integer hlds__hlds_out__hlds_out_module__LineNumber_21;
#line 543 "hlds_out_module.m"
    MR_String hlds__hlds_out__hlds_out_module__DumpOptions_22;
#line 543 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__AppendVarNums_23;
#line 543 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__PrintTerm_24;
#line 543 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__V_60_60;
#line 544 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module___InstanceModule_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__InstanceDefn_8, (MR_Integer) 0)));
#line 544 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module___Status_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__InstanceDefn_8, (MR_Integer) 1)));
#line 561 "hlds_out_module.m"
    MR_String hlds__hlds_out__hlds_out_module__V_80_80;
#line 561 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__V_81_81;
#line 561 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__V_82_82;
#line 561 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__V_83_83;

#line 548 "hlds_out_module.m"
    {
#line 548 "hlds_out_module.m"
      mercury__term__context_file_2_p_0(hlds__hlds_out__hlds_out_module__Context_12, &hlds__hlds_out__hlds_out_module__FileName_20);
    }
#line 549 "hlds_out_module.m"
    {
#line 549 "hlds_out_module.m"
      mercury__term__context_line_2_p_0(hlds__hlds_out__hlds_out_module__Context_12, &hlds__hlds_out__hlds_out_module__LineNumber_21);
    }
#line 550 "hlds_out_module.m"
    hlds__hlds_out__hlds_out_module__succeeded = (strcmp(hlds__hlds_out__hlds_out_module__FileName_20, (MR_String) "") == 0);
#line 550 "hlds_out_module.m"
    hlds__hlds_out__hlds_out_module__succeeded = !(hlds__hlds_out__hlds_out_module__succeeded);
#line 557 "hlds_out_module.m"
    if (hlds__hlds_out__hlds_out_module__succeeded)
#line 551 "hlds_out_module.m"
      {
#line 551 "hlds_out_module.m"
        {
#line 551 "hlds_out_module.m"
          hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_module__Indent_7);
        }
#line 552 "hlds_out_module.m"
        {
#line 552 "hlds_out_module.m"
          mercury__io__write_string_3_p_0((MR_String) "% context: file \140");
        }
#line 553 "hlds_out_module.m"
        {
#line 553 "hlds_out_module.m"
          mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_module__FileName_20);
        }
#line 554 "hlds_out_module.m"
        {
#line 554 "hlds_out_module.m"
          mercury__io__write_string_3_p_0((MR_String) "\', line ");
        }
#line 555 "hlds_out_module.m"
        {
#line 555 "hlds_out_module.m"
          mercury__io__write_int_3_p_0(hlds__hlds_out__hlds_out_module__LineNumber_21);
        }
#line 556 "hlds_out_module.m"
        {
#line 556 "hlds_out_module.m"
          mercury__io__write_string_3_p_0((MR_String) "\n");
        }
#line 551 "hlds_out_module.m"
      }
#line 557 "hlds_out_module.m"
    else
#line 556 "hlds_out_module.m"
      {
#line 556 "hlds_out_module.m"
      }
#line 561 "hlds_out_module.m"
    hlds__hlds_out__hlds_out_module__DumpOptions_22 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__Info_6, (MR_Integer) 0)));
#line 561 "hlds_out_module.m"
    hlds__hlds_out__hlds_out_module__V_80_80 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__Info_6, (MR_Integer) 1)));
#line 561 "hlds_out_module.m"
    hlds__hlds_out__hlds_out_module__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__Info_6, (MR_Integer) 2)));
#line 561 "hlds_out_module.m"
    hlds__hlds_out__hlds_out_module__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__Info_6, (MR_Integer) 3)));
#line 561 "hlds_out_module.m"
    hlds__hlds_out__hlds_out_module__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__Info_6, (MR_Integer) 4)));
#line 562 "hlds_out_module.m"
    {
#line 562 "hlds_out_module.m"
      hlds__hlds_out__hlds_out_module__succeeded = mercury__string__contains_char_2_p_0(hlds__hlds_out__hlds_out_module__DumpOptions_22, (MR_Char) 118);
    }
#line 564 "hlds_out_module.m"
    if (hlds__hlds_out__hlds_out_module__succeeded)
#line 563 "hlds_out_module.m"
      hlds__hlds_out__hlds_out_module__AppendVarNums_23 = (MR_Integer) 1;
#line 564 "hlds_out_module.m"
    else
#line 565 "hlds_out_module.m"
      hlds__hlds_out__hlds_out_module__AppendVarNums_23 = (MR_Integer) 0;
#line 569 "hlds_out_module.m"
    {
#line 569 "hlds_out_module.m"
      hlds__hlds_out__hlds_out_module__PrintTerm_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 569 "hlds_out_module.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__PrintTerm_24, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_module_scalar_common_4[4]));
#line 569 "hlds_out_module.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__PrintTerm_24, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_module__write_instance_defn_5_p_0_1));
#line 569 "hlds_out_module.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__PrintTerm_24, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 569 "hlds_out_module.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__PrintTerm_24, 3) = ((MR_Box) (hlds__hlds_out__hlds_out_module__VarSet_18));
#line 569 "hlds_out_module.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__PrintTerm_24, 4) = ((MR_Box) (hlds__hlds_out__hlds_out_module__AppendVarNums_23));
#line 569 "hlds_out_module.m"
    }
#line 572 "hlds_out_module.m"
    {
#line 572 "hlds_out_module.m"
      hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_module__Indent_7);
    }
#line 573 "hlds_out_module.m"
    {
#line 573 "hlds_out_module.m"
      mercury__io__write_string_3_p_0((MR_String) "% Types: ");
    }
#line 4738 "hlds.hlds_out.hlds_out_module.c"
    hlds__hlds_out__hlds_out_module__TypeCtorInfo_84_84 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
#line 574 "hlds_out_module.m"
    {
#line 574 "hlds_out_module.m"
      mercury__io__write_list_5_p_0(hlds__hlds_out__hlds_out_module__TypeCtorInfo_84_84, hlds__hlds_out__hlds_out_module__Types_14, (MR_String) ", ", hlds__hlds_out__hlds_out_module__PrintTerm_24);
    }
#line 575 "hlds_out_module.m"
    {
#line 575 "hlds_out_module.m"
      mercury__io__nl_2_p_0();
    }
#line 576 "hlds_out_module.m"
    {
#line 576 "hlds_out_module.m"
      hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_module__Indent_7);
    }
#line 577 "hlds_out_module.m"
    {
#line 577 "hlds_out_module.m"
      mercury__io__write_string_3_p_0((MR_String) "% Original types: ");
    }
#line 578 "hlds_out_module.m"
    {
#line 578 "hlds_out_module.m"
      mercury__io__write_list_5_p_0(hlds__hlds_out__hlds_out_module__TypeCtorInfo_84_84, hlds__hlds_out__hlds_out_module__OriginalTypes_15, (MR_String) ", ", hlds__hlds_out__hlds_out_module__PrintTerm_24);
    }
#line 579 "hlds_out_module.m"
    {
#line 579 "hlds_out_module.m"
      mercury__io__nl_2_p_0();
    }
#line 581 "hlds_out_module.m"
    {
#line 581 "hlds_out_module.m"
      hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_module__Indent_7);
    }
#line 582 "hlds_out_module.m"
    {
#line 582 "hlds_out_module.m"
      mercury__io__write_string_3_p_0((MR_String) "% Constraints: ");
    }
#line 583 "hlds_out_module.m"
    {
#line 583 "hlds_out_module.m"
      hlds__hlds_out__hlds_out_module__V_60_60 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 583 "hlds_out_module.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__V_60_60, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_module_scalar_common_4[1]));
#line 583 "hlds_out_module.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__V_60_60, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_module__write_instance_defn_5_p_0_2));
#line 583 "hlds_out_module.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__V_60_60, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 583 "hlds_out_module.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__V_60_60, 3) = ((MR_Box) (hlds__hlds_out__hlds_out_module__VarSet_18));
#line 583 "hlds_out_module.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__V_60_60, 4) = ((MR_Box) (hlds__hlds_out__hlds_out_module__AppendVarNums_23));
#line 583 "hlds_out_module.m"
    }
#line 583 "hlds_out_module.m"
    {
#line 583 "hlds_out_module.m"
      mercury__io__write_list_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0, hlds__hlds_out__hlds_out_module__Constraints_13, (MR_String) ", ", hlds__hlds_out__hlds_out_module__V_60_60);
    }
#line 585 "hlds_out_module.m"
    {
#line 585 "hlds_out_module.m"
      mercury__io__nl_2_p_0();
    }
#line 587 "hlds_out_module.m"
    {
#line 587 "hlds_out_module.m"
      hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_module__Indent_7);
    }
#line 591 "hlds_out_module.m"
    if ((hlds__hlds_out__hlds_out_module__Body_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 589 "hlds_out_module.m"
      {
#line 590 "hlds_out_module.m"
        {
#line 590 "hlds_out_module.m"
          mercury__io__write_string_3_p_0((MR_String) "% abstract");
        }
#line 589 "hlds_out_module.m"
      }
#line 591 "hlds_out_module.m"
    else
#line 592 "hlds_out_module.m"
      {
#line 592 "hlds_out_module.m"
        MR_Word hlds__hlds_out__hlds_out_module__Methods_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_module__Body_16, (MR_Integer) 0)));

#line 593 "hlds_out_module.m"
        {
#line 593 "hlds_out_module.m"
          mercury__io__write_string_3_p_0((MR_String) "% Instance Methods: ");
        }
#line 594 "hlds_out_module.m"
        {
#line 594 "hlds_out_module.m"
          parse_tree__mercury_to_mercury__mercury_output_instance_methods_3_p_0(hlds__hlds_out__hlds_out_module__Methods_27);
        }
#line 592 "hlds_out_module.m"
      }
#line 596 "hlds_out_module.m"
    {
#line 596 "hlds_out_module.m"
      mercury__io__nl_2_p_0();
    }
#line 604 "hlds_out_module.m"
    if ((hlds__hlds_out__hlds_out_module__MaybePredProcIds_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 605 "hlds_out_module.m"
      {
#line 605 "hlds_out_module.m"
      }
#line 604 "hlds_out_module.m"
    else
#line 599 "hlds_out_module.m"
      {
#line 599 "hlds_out_module.m"
        MR_Word hlds__hlds_out__hlds_out_module__PredProcIds_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_module__MaybePredProcIds_17, (MR_Integer) 0)));

#line 600 "hlds_out_module.m"
        {
#line 600 "hlds_out_module.m"
          hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_module__Indent_7);
        }
#line 601 "hlds_out_module.m"
        {
#line 601 "hlds_out_module.m"
          mercury__io__write_string_3_p_0((MR_String) "% procedures: ");
        }
#line 602 "hlds_out_module.m"
        {
#line 602 "hlds_out_module.m"
          mercury__io__write_3_p_0((MR_Word) &hlds__hlds_out__hlds_out_module_scalar_common_1[2], ((MR_Box) (hlds__hlds_out__hlds_out_module__PredProcIds_28)));
        }
#line 603 "hlds_out_module.m"
        {
#line 603 "hlds_out_module.m"
          mercury__io__nl_2_p_0();
        }
#line 599 "hlds_out_module.m"
      }
#line 607 "hlds_out_module.m"
    {
#line 607 "hlds_out_module.m"
      hlds__hlds_out__hlds_out_util__write_constraint_proofs_6_p_0(hlds__hlds_out__hlds_out_module__Indent_7, hlds__hlds_out__hlds_out_module__VarSet_18, hlds__hlds_out__hlds_out_module__Proofs_19, hlds__hlds_out__hlds_out_module__AppendVarNums_23);
    }
#line 608 "hlds_out_module.m"
    {
#line 608 "hlds_out_module.m"
      mercury__io__nl_2_p_0();
#line 608 "hlds_out_module.m"
      return;
    }
#line 543 "hlds_out_module.m"
  }
#line 540 "hlds_out_module.m"
}

#line 537 "hlds_out_module.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_instance_defns_5_p_0_1(
#line 537 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__closure_arg,
#line 537 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_1,
#line 537 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_2,
#line 537 "hlds_out_module.m"
  MR_Box * hlds__hlds_out__hlds_out_module__wrapper_arg_3)
#line 537 "hlds_out_module.m"
{
#line 537 "hlds_out_module.m"
  {
#line 537 "hlds_out_module.m"
    MR_Box hlds__hlds_out__hlds_out_module__closure = hlds__hlds_out__hlds_out_module__closure_arg;

#line 537 "hlds_out_module.m"
    {
#line 537 "hlds_out_module.m"
      hlds__hlds_out__hlds_out_module__write_instance_defn_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__closure, (MR_Integer) 3))), ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__closure, (MR_Integer) 4))), ((MR_Word) hlds__hlds_out__hlds_out_module__wrapper_arg_1));
#line 537 "hlds_out_module.m"
      return;
    }
#line 537 "hlds_out_module.m"
  }
#line 537 "hlds_out_module.m"
}

#line 529 "hlds_out_module.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_instance_defns_5_p_0(
#line 529 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__Info_6,
#line 529 "hlds_out_module.m"
  MR_Integer hlds__hlds_out__hlds_out_module__Indent_7,
#line 529 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__HeadVar__3_3)
#line 529 "hlds_out_module.m"
{
#line 532 "hlds_out_module.m"
  {
#line 532 "hlds_out_module.m"
    MR_bool hlds__hlds_out__hlds_out_module__succeeded;
#line 532 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__ClassId_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__HeadVar__3_3, (MR_Integer) 0)));
#line 532 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__InstanceDefns_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__HeadVar__3_3, (MR_Integer) 1)));
#line 532 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__V_20_20;

#line 533 "hlds_out_module.m"
    {
#line 533 "hlds_out_module.m"
      hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_module__Indent_7);
    }
#line 534 "hlds_out_module.m"
    {
#line 534 "hlds_out_module.m"
      mercury__io__write_string_3_p_0((MR_String) "% ");
    }
#line 535 "hlds_out_module.m"
    {
#line 535 "hlds_out_module.m"
      hlds__hlds_out__hlds_out_util__write_class_id_3_p_0(hlds__hlds_out__hlds_out_module__ClassId_8);
    }
#line 536 "hlds_out_module.m"
    {
#line 536 "hlds_out_module.m"
      mercury__io__write_string_3_p_0((MR_String) ":\n");
    }
#line 537 "hlds_out_module.m"
    {
#line 537 "hlds_out_module.m"
      hlds__hlds_out__hlds_out_module__V_20_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 537 "hlds_out_module.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__V_20_20, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_module_scalar_common_4[3]));
#line 537 "hlds_out_module.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__V_20_20, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_module__write_instance_defns_5_p_0_1));
#line 537 "hlds_out_module.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__V_20_20, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 537 "hlds_out_module.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__V_20_20, 3) = ((MR_Box) (hlds__hlds_out__hlds_out_module__Info_6));
#line 537 "hlds_out_module.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__V_20_20, 4) = ((MR_Box) (hlds__hlds_out__hlds_out_module__Indent_7));
#line 537 "hlds_out_module.m"
    }
#line 537 "hlds_out_module.m"
    {
#line 537 "hlds_out_module.m"
      mercury__io__write_list_5_p_0((MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_instance_defn_0, hlds__hlds_out__hlds_out_module__InstanceDefns_9, (MR_String) "\n", hlds__hlds_out__hlds_out_module__V_20_20);
#line 537 "hlds_out_module.m"
      return;
    }
#line 532 "hlds_out_module.m"
  }
#line 529 "hlds_out_module.m"
}

#line 525 "hlds_out_module.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_instances_5_p_0_1(
#line 525 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__closure_arg,
#line 525 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_1,
#line 525 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_2,
#line 525 "hlds_out_module.m"
  MR_Box * hlds__hlds_out__hlds_out_module__wrapper_arg_3)
#line 525 "hlds_out_module.m"
{
#line 525 "hlds_out_module.m"
  {
#line 525 "hlds_out_module.m"
    MR_Box hlds__hlds_out__hlds_out_module__closure = hlds__hlds_out__hlds_out_module__closure_arg;

#line 525 "hlds_out_module.m"
    {
#line 525 "hlds_out_module.m"
      hlds__hlds_out__hlds_out_module__write_instance_defns_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__closure, (MR_Integer) 3))), ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__closure, (MR_Integer) 4))), ((MR_Word) hlds__hlds_out__hlds_out_module__wrapper_arg_1));
#line 525 "hlds_out_module.m"
      return;
    }
#line 525 "hlds_out_module.m"
  }
#line 525 "hlds_out_module.m"
}

#line 518 "hlds_out_module.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_instances_5_p_0(
#line 518 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__Info_6,
#line 518 "hlds_out_module.m"
  MR_Integer hlds__hlds_out__hlds_out_module__Indent_7,
#line 518 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__InstanceTable_8)
#line 518 "hlds_out_module.m"
{
#line 521 "hlds_out_module.m"
  {
#line 521 "hlds_out_module.m"
    MR_bool hlds__hlds_out__hlds_out_module__succeeded;
#line 521 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__InstanceTableList_10;
#line 521 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__V_17_17;

#line 522 "hlds_out_module.m"
    {
#line 522 "hlds_out_module.m"
      hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_module__Indent_7);
    }
#line 523 "hlds_out_module.m"
    {
#line 523 "hlds_out_module.m"
      mercury__io__write_string_3_p_0((MR_String) "%-------- Instances --------\n");
    }
#line 524 "hlds_out_module.m"
    {
#line 524 "hlds_out_module.m"
      mercury__map__to_assoc_list_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0, (MR_Word) &hlds__hlds_out__hlds_out_module_scalar_common_1[1], hlds__hlds_out__hlds_out_module__InstanceTable_8, &hlds__hlds_out__hlds_out_module__InstanceTableList_10);
    }
#line 525 "hlds_out_module.m"
    {
#line 525 "hlds_out_module.m"
      hlds__hlds_out__hlds_out_module__V_17_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 525 "hlds_out_module.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__V_17_17, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_module_scalar_common_4[2]));
#line 525 "hlds_out_module.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__V_17_17, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_module__write_instances_5_p_0_1));
#line 525 "hlds_out_module.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__V_17_17, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 525 "hlds_out_module.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__V_17_17, 3) = ((MR_Box) (hlds__hlds_out__hlds_out_module__Info_6));
#line 525 "hlds_out_module.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__V_17_17, 4) = ((MR_Box) (hlds__hlds_out__hlds_out_module__Indent_7));
#line 525 "hlds_out_module.m"
    }
#line 525 "hlds_out_module.m"
    {
#line 525 "hlds_out_module.m"
      mercury__io__write_list_5_p_0((MR_Word) &hlds__hlds_out__hlds_out_module_scalar_common_2[1], hlds__hlds_out__hlds_out_module__InstanceTableList_10, (MR_String) "\n\n", hlds__hlds_out__hlds_out_module__V_17_17);
    }
#line 527 "hlds_out_module.m"
    {
#line 527 "hlds_out_module.m"
      mercury__io__nl_2_p_0();
#line 527 "hlds_out_module.m"
      return;
    }
#line 521 "hlds_out_module.m"
  }
#line 518 "hlds_out_module.m"
}

#line 502 "hlds_out_module.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_class_proc_3_p_0(
#line 502 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__HeadVar__1_1)
#line 502 "hlds_out_module.m"
{
#line 504 "hlds_out_module.m"
  {
#line 504 "hlds_out_module.m"
    MR_bool hlds__hlds_out__hlds_out_module__succeeded;
#line 504 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__PredId_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__HeadVar__1_1, (MR_Integer) 0)));
#line 504 "hlds_out_module.m"
    MR_Integer hlds__hlds_out__hlds_out_module__ProcId_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__HeadVar__1_1, (MR_Integer) 1)));
#line 504 "hlds_out_module.m"
    MR_Integer hlds__hlds_out__hlds_out_module__PredInt_7;
#line 504 "hlds_out_module.m"
    MR_Integer hlds__hlds_out__hlds_out_module__ProcInt_8;

#line 505 "hlds_out_module.m"
    {
#line 505 "hlds_out_module.m"
      mercury__io__write_string_3_p_0((MR_String) "hlds_class_proc(pred_id:");
    }
#line 506 "hlds_out_module.m"
    {
#line 506 "hlds_out_module.m"
      hlds__hlds_pred__pred_id_to_int_2_p_0(hlds__hlds_out__hlds_out_module__PredId_4, &hlds__hlds_out__hlds_out_module__PredInt_7);
    }
#line 507 "hlds_out_module.m"
    {
#line 507 "hlds_out_module.m"
      mercury__io__write_int_3_p_0(hlds__hlds_out__hlds_out_module__PredInt_7);
    }
#line 508 "hlds_out_module.m"
    {
#line 508 "hlds_out_module.m"
      mercury__io__write_string_3_p_0((MR_String) ", proc_id:");
    }
#line 509 "hlds_out_module.m"
    {
#line 509 "hlds_out_module.m"
      hlds__hlds_pred__proc_id_to_int_2_p_0(hlds__hlds_out__hlds_out_module__ProcId_5, &hlds__hlds_out__hlds_out_module__ProcInt_8);
    }
#line 510 "hlds_out_module.m"
    {
#line 510 "hlds_out_module.m"
      mercury__io__write_int_3_p_0(hlds__hlds_out__hlds_out_module__ProcInt_8);
    }
#line 511 "hlds_out_module.m"
    {
#line 511 "hlds_out_module.m"
      mercury__io__write_char_3_p_0((MR_Char) 41);
#line 511 "hlds_out_module.m"
      return;
    }
#line 504 "hlds_out_module.m"
  }
#line 502 "hlds_out_module.m"
}

#line 495 "hlds_out_module.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_module__hlds_output_fundep_3_p_0_2(
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

#line 492 "hlds_out_module.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_module__hlds_output_fundep_3_p_0_1(
#line 492 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__closure_arg,
#line 492 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_1,
#line 492 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_2,
#line 492 "hlds_out_module.m"
  MR_Box * hlds__hlds_out__hlds_out_module__wrapper_arg_3)
#line 492 "hlds_out_module.m"
{
#line 492 "hlds_out_module.m"
  {
#line 492 "hlds_out_module.m"
    MR_Box hlds__hlds_out__hlds_out_module__closure = hlds__hlds_out__hlds_out_module__closure_arg;

#line 492 "hlds_out_module.m"
    {
#line 492 "hlds_out_module.m"
      mercury__io__write_int_3_p_0(((MR_Integer) hlds__hlds_out__hlds_out_module__wrapper_arg_1));
#line 492 "hlds_out_module.m"
      return;
    }
#line 492 "hlds_out_module.m"
  }
#line 492 "hlds_out_module.m"
}

#line 487 "hlds_out_module.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_module__hlds_output_fundep_3_p_0(
#line 487 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__HeadVar__1_1)
#line 487 "hlds_out_module.m"
{
#line 489 "hlds_out_module.m"
  {
#line 489 "hlds_out_module.m"
    MR_bool hlds__hlds_out__hlds_out_module__succeeded;
#line 489 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__TypeCtorInfo_23_23;
#line 489 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__Domain_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__HeadVar__1_1, (MR_Integer) 0)));
#line 489 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__Range_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__HeadVar__1_1, (MR_Integer) 1)));
#line 489 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__DomainList_7;
#line 489 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__RangeList_8;

#line 490 "hlds_out_module.m"
    {
#line 490 "hlds_out_module.m"
      mercury__io__write_char_3_p_0((MR_Char) 40);
    }
#line 5245 "hlds.hlds_out.hlds_out_module.c"
    hlds__hlds_out__hlds_out_module__TypeCtorInfo_23_23 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 491 "hlds_out_module.m"
    {
#line 491 "hlds_out_module.m"
      hlds__hlds_out__hlds_out_module__DomainList_7 = mercury__set__to_sorted_list_1_f_0(hlds__hlds_out__hlds_out_module__TypeCtorInfo_23_23, hlds__hlds_out__hlds_out_module__Domain_4);
    }
#line 492 "hlds_out_module.m"
    {
#line 492 "hlds_out_module.m"
      mercury__io__write_list_5_p_0(hlds__hlds_out__hlds_out_module__TypeCtorInfo_23_23, hlds__hlds_out__hlds_out_module__DomainList_7, (MR_String) ", ", (MR_Word) &hlds__hlds_out__hlds_out_module_scalar_common_2[8]);
    }
#line 493 "hlds_out_module.m"
    {
#line 493 "hlds_out_module.m"
      mercury__io__write_string_3_p_0((MR_String) " -> ");
    }
#line 494 "hlds_out_module.m"
    {
#line 494 "hlds_out_module.m"
      hlds__hlds_out__hlds_out_module__RangeList_8 = mercury__set__to_sorted_list_1_f_0(hlds__hlds_out__hlds_out_module__TypeCtorInfo_23_23, hlds__hlds_out__hlds_out_module__Range_5);
    }
#line 495 "hlds_out_module.m"
    {
#line 495 "hlds_out_module.m"
      mercury__io__write_list_5_p_0(hlds__hlds_out__hlds_out_module__TypeCtorInfo_23_23, hlds__hlds_out__hlds_out_module__RangeList_8, (MR_String) ", ", (MR_Word) &hlds__hlds_out__hlds_out_module_scalar_common_2[9]);
    }
#line 496 "hlds_out_module.m"
    {
#line 496 "hlds_out_module.m"
      mercury__io__write_char_3_p_0((MR_Char) 41);
#line 496 "hlds_out_module.m"
      return;
    }
#line 489 "hlds_out_module.m"
  }
#line 487 "hlds_out_module.m"
}

#line 484 "hlds_out_module.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_class_defn_5_p_0_3(
#line 484 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__closure_arg,
#line 484 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_1,
#line 484 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_2,
#line 484 "hlds_out_module.m"
  MR_Box * hlds__hlds_out__hlds_out_module__wrapper_arg_3)
#line 484 "hlds_out_module.m"
{
#line 484 "hlds_out_module.m"
  {
#line 484 "hlds_out_module.m"
    MR_Box hlds__hlds_out__hlds_out_module__closure = hlds__hlds_out__hlds_out_module__closure_arg;

#line 484 "hlds_out_module.m"
    {
#line 484 "hlds_out_module.m"
      hlds__hlds_out__hlds_out_module__write_class_proc_3_p_0(((MR_Word) hlds__hlds_out__hlds_out_module__wrapper_arg_1));
#line 484 "hlds_out_module.m"
      return;
    }
#line 484 "hlds_out_module.m"
  }
#line 484 "hlds_out_module.m"
}

#line 478 "hlds_out_module.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_class_defn_5_p_0_2(
#line 478 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__closure_arg,
#line 478 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_1,
#line 478 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_2,
#line 478 "hlds_out_module.m"
  MR_Box * hlds__hlds_out__hlds_out_module__wrapper_arg_3)
#line 478 "hlds_out_module.m"
{
#line 478 "hlds_out_module.m"
  {
#line 478 "hlds_out_module.m"
    MR_Box hlds__hlds_out__hlds_out_module__closure = hlds__hlds_out__hlds_out_module__closure_arg;

#line 478 "hlds_out_module.m"
    {
#line 478 "hlds_out_module.m"
      parse_tree__mercury_to_mercury__mercury_output_constraint_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__closure, (MR_Integer) 4))), ((MR_Word) hlds__hlds_out__hlds_out_module__wrapper_arg_1));
#line 478 "hlds_out_module.m"
      return;
    }
#line 478 "hlds_out_module.m"
  }
#line 478 "hlds_out_module.m"
}

#line 473 "hlds_out_module.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_class_defn_5_p_0_1(
#line 473 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__closure_arg,
#line 473 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_1,
#line 473 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_2,
#line 473 "hlds_out_module.m"
  MR_Box * hlds__hlds_out__hlds_out_module__wrapper_arg_3)
#line 473 "hlds_out_module.m"
{
#line 473 "hlds_out_module.m"
  {
#line 473 "hlds_out_module.m"
    MR_Box hlds__hlds_out__hlds_out_module__closure = hlds__hlds_out__hlds_out_module__closure_arg;

#line 473 "hlds_out_module.m"
    {
#line 473 "hlds_out_module.m"
      hlds__hlds_out__hlds_out_module__hlds_output_fundep_3_p_0(((MR_Word) hlds__hlds_out__hlds_out_module__wrapper_arg_1));
#line 473 "hlds_out_module.m"
      return;
    }
#line 473 "hlds_out_module.m"
  }
#line 473 "hlds_out_module.m"
}

#line 433 "hlds_out_module.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_class_defn_5_p_0(
#line 433 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__Info_6,
#line 433 "hlds_out_module.m"
  MR_Integer hlds__hlds_out__hlds_out_module__Indent_7,
#line 433 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__HeadVar__3_3)
#line 433 "hlds_out_module.m"
{
#line 436 "hlds_out_module.m"
  {
#line 436 "hlds_out_module.m"
    MR_bool hlds__hlds_out__hlds_out_module__succeeded;
#line 436 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__ClassId_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__HeadVar__3_3, (MR_Integer) 0)));
#line 436 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__ClassDefn_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__HeadVar__3_3, (MR_Integer) 1)));
#line 436 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__Constraints_12;
#line 436 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__FunDeps_13;
#line 436 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__Vars_15;
#line 436 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__Interface_18;
#line 436 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__VarSet_19;
#line 436 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__Context_20;
#line 436 "hlds_out_module.m"
    MR_String hlds__hlds_out__hlds_out_module__FileName_21;
#line 436 "hlds_out_module.m"
    MR_Integer hlds__hlds_out__hlds_out_module__LineNumber_22;
#line 436 "hlds_out_module.m"
    MR_String hlds__hlds_out__hlds_out_module__DumpOptions_23;
#line 436 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__AppendVarNums_24;
#line 436 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__V_59_59;
#line 443 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__V_11_11;
#line 443 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__V_14_14;
#line 443 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__V_16_16;
#line 443 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__V_17_17;
#line 459 "hlds_out_module.m"
    MR_String hlds__hlds_out__hlds_out_module__V_69_69;
#line 459 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__V_70_70;
#line 459 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__V_71_71;
#line 459 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__V_72_72;

#line 437 "hlds_out_module.m"
    {
#line 437 "hlds_out_module.m"
      hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_module__Indent_7);
    }
#line 438 "hlds_out_module.m"
    {
#line 438 "hlds_out_module.m"
      mercury__io__write_string_3_p_0((MR_String) "% ");
    }
#line 440 "hlds_out_module.m"
    {
#line 440 "hlds_out_module.m"
      hlds__hlds_out__hlds_out_util__write_class_id_3_p_0(hlds__hlds_out__hlds_out_module__ClassId_8);
    }
#line 441 "hlds_out_module.m"
    {
#line 441 "hlds_out_module.m"
      mercury__io__write_string_3_p_0((MR_String) ":\n");
    }
#line 443 "hlds_out_module.m"
    hlds__hlds_out__hlds_out_module__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__ClassDefn_9, (MR_Integer) 0)));
#line 443 "hlds_out_module.m"
    hlds__hlds_out__hlds_out_module__Constraints_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__ClassDefn_9, (MR_Integer) 1)));
#line 443 "hlds_out_module.m"
    hlds__hlds_out__hlds_out_module__FunDeps_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__ClassDefn_9, (MR_Integer) 2)));
#line 443 "hlds_out_module.m"
    hlds__hlds_out__hlds_out_module__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__ClassDefn_9, (MR_Integer) 3)));
#line 443 "hlds_out_module.m"
    hlds__hlds_out__hlds_out_module__Vars_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__ClassDefn_9, (MR_Integer) 4)));
#line 443 "hlds_out_module.m"
    hlds__hlds_out__hlds_out_module__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__ClassDefn_9, (MR_Integer) 5)));
#line 443 "hlds_out_module.m"
    hlds__hlds_out__hlds_out_module__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__ClassDefn_9, (MR_Integer) 6)));
#line 443 "hlds_out_module.m"
    hlds__hlds_out__hlds_out_module__Interface_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__ClassDefn_9, (MR_Integer) 7)));
#line 443 "hlds_out_module.m"
    hlds__hlds_out__hlds_out_module__VarSet_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__ClassDefn_9, (MR_Integer) 8)));
#line 443 "hlds_out_module.m"
    hlds__hlds_out__hlds_out_module__Context_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__ClassDefn_9, (MR_Integer) 9)));
#line 446 "hlds_out_module.m"
    {
#line 446 "hlds_out_module.m"
      mercury__term__context_file_2_p_0(hlds__hlds_out__hlds_out_module__Context_20, &hlds__hlds_out__hlds_out_module__FileName_21);
    }
#line 447 "hlds_out_module.m"
    {
#line 447 "hlds_out_module.m"
      mercury__term__context_line_2_p_0(hlds__hlds_out__hlds_out_module__Context_20, &hlds__hlds_out__hlds_out_module__LineNumber_22);
    }
#line 448 "hlds_out_module.m"
    hlds__hlds_out__hlds_out_module__succeeded = (strcmp(hlds__hlds_out__hlds_out_module__FileName_21, (MR_String) "") == 0);
#line 448 "hlds_out_module.m"
    hlds__hlds_out__hlds_out_module__succeeded = !(hlds__hlds_out__hlds_out_module__succeeded);
#line 455 "hlds_out_module.m"
    if (hlds__hlds_out__hlds_out_module__succeeded)
#line 449 "hlds_out_module.m"
      {
#line 449 "hlds_out_module.m"
        {
#line 449 "hlds_out_module.m"
          hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_module__Indent_7);
        }
#line 450 "hlds_out_module.m"
        {
#line 450 "hlds_out_module.m"
          mercury__io__write_string_3_p_0((MR_String) "% context: file \140");
        }
#line 451 "hlds_out_module.m"
        {
#line 451 "hlds_out_module.m"
          mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_module__FileName_21);
        }
#line 452 "hlds_out_module.m"
        {
#line 452 "hlds_out_module.m"
          mercury__io__write_string_3_p_0((MR_String) "\', line ");
        }
#line 453 "hlds_out_module.m"
        {
#line 453 "hlds_out_module.m"
          mercury__io__write_int_3_p_0(hlds__hlds_out__hlds_out_module__LineNumber_22);
        }
#line 454 "hlds_out_module.m"
        {
#line 454 "hlds_out_module.m"
          mercury__io__write_string_3_p_0((MR_String) "\n");
        }
#line 449 "hlds_out_module.m"
      }
#line 455 "hlds_out_module.m"
    else
#line 454 "hlds_out_module.m"
      {
#line 454 "hlds_out_module.m"
      }
#line 459 "hlds_out_module.m"
    hlds__hlds_out__hlds_out_module__DumpOptions_23 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__Info_6, (MR_Integer) 0)));
#line 459 "hlds_out_module.m"
    hlds__hlds_out__hlds_out_module__V_69_69 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__Info_6, (MR_Integer) 1)));
#line 459 "hlds_out_module.m"
    hlds__hlds_out__hlds_out_module__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__Info_6, (MR_Integer) 2)));
#line 459 "hlds_out_module.m"
    hlds__hlds_out__hlds_out_module__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__Info_6, (MR_Integer) 3)));
#line 459 "hlds_out_module.m"
    hlds__hlds_out__hlds_out_module__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__Info_6, (MR_Integer) 4)));
#line 460 "hlds_out_module.m"
    {
#line 460 "hlds_out_module.m"
      hlds__hlds_out__hlds_out_module__succeeded = mercury__string__contains_char_2_p_0(hlds__hlds_out__hlds_out_module__DumpOptions_23, (MR_Char) 118);
    }
#line 462 "hlds_out_module.m"
    if (hlds__hlds_out__hlds_out_module__succeeded)
#line 461 "hlds_out_module.m"
      hlds__hlds_out__hlds_out_module__AppendVarNums_24 = (MR_Integer) 1;
#line 462 "hlds_out_module.m"
    else
#line 463 "hlds_out_module.m"
      hlds__hlds_out__hlds_out_module__AppendVarNums_24 = (MR_Integer) 0;
#line 466 "hlds_out_module.m"
    {
#line 466 "hlds_out_module.m"
      hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_module__Indent_7);
    }
#line 467 "hlds_out_module.m"
    {
#line 467 "hlds_out_module.m"
      mercury__io__write_string_3_p_0((MR_String) "% Vars: ");
    }
#line 468 "hlds_out_module.m"
    {
#line 468 "hlds_out_module.m"
      parse_tree__mercury_to_mercury__mercury_output_vars_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, hlds__hlds_out__hlds_out_module__VarSet_19, hlds__hlds_out__hlds_out_module__AppendVarNums_24, hlds__hlds_out__hlds_out_module__Vars_15);
    }
#line 469 "hlds_out_module.m"
    {
#line 469 "hlds_out_module.m"
      mercury__io__nl_2_p_0();
    }
#line 471 "hlds_out_module.m"
    {
#line 471 "hlds_out_module.m"
      hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_module__Indent_7);
    }
#line 472 "hlds_out_module.m"
    {
#line 472 "hlds_out_module.m"
      mercury__io__write_string_3_p_0((MR_String) "% Functional dependencies: ");
    }
#line 473 "hlds_out_module.m"
    {
#line 473 "hlds_out_module.m"
      mercury__io__write_list_5_p_0((MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_class_fundep_0, hlds__hlds_out__hlds_out_module__FunDeps_13, (MR_String) ", ", (MR_Word) &hlds__hlds_out__hlds_out_module_scalar_common_2[6]);
    }
#line 474 "hlds_out_module.m"
    {
#line 474 "hlds_out_module.m"
      mercury__io__nl_2_p_0();
    }
#line 476 "hlds_out_module.m"
    {
#line 476 "hlds_out_module.m"
      hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_module__Indent_7);
    }
#line 477 "hlds_out_module.m"
    {
#line 477 "hlds_out_module.m"
      mercury__io__write_string_3_p_0((MR_String) "% Constraints: ");
    }
#line 478 "hlds_out_module.m"
    {
#line 478 "hlds_out_module.m"
      hlds__hlds_out__hlds_out_module__V_59_59 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 478 "hlds_out_module.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__V_59_59, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_module_scalar_common_4[1]));
#line 478 "hlds_out_module.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__V_59_59, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_module__write_class_defn_5_p_0_2));
#line 478 "hlds_out_module.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__V_59_59, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 478 "hlds_out_module.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__V_59_59, 3) = ((MR_Box) (hlds__hlds_out__hlds_out_module__VarSet_19));
#line 478 "hlds_out_module.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__V_59_59, 4) = ((MR_Box) (hlds__hlds_out__hlds_out_module__AppendVarNums_24));
#line 478 "hlds_out_module.m"
    }
#line 478 "hlds_out_module.m"
    {
#line 478 "hlds_out_module.m"
      mercury__io__write_list_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0, hlds__hlds_out__hlds_out_module__Constraints_12, (MR_String) ", ", hlds__hlds_out__hlds_out_module__V_59_59);
    }
#line 480 "hlds_out_module.m"
    {
#line 480 "hlds_out_module.m"
      mercury__io__nl_2_p_0();
    }
#line 482 "hlds_out_module.m"
    {
#line 482 "hlds_out_module.m"
      hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_module__Indent_7);
    }
#line 483 "hlds_out_module.m"
    {
#line 483 "hlds_out_module.m"
      mercury__io__write_string_3_p_0((MR_String) "% Class Methods: ");
    }
#line 484 "hlds_out_module.m"
    {
#line 484 "hlds_out_module.m"
      mercury__io__write_list_5_p_0((MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_class_proc_0, hlds__hlds_out__hlds_out_module__Interface_18, (MR_String) ", ", (MR_Word) &hlds__hlds_out__hlds_out_module_scalar_common_2[7]);
    }
#line 485 "hlds_out_module.m"
    {
#line 485 "hlds_out_module.m"
      mercury__io__nl_2_p_0();
#line 485 "hlds_out_module.m"
      return;
    }
#line 436 "hlds_out_module.m"
  }
#line 433 "hlds_out_module.m"
}

#line 430 "hlds_out_module.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_classes_5_p_0_1(
#line 430 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__closure_arg,
#line 430 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_1,
#line 430 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_2,
#line 430 "hlds_out_module.m"
  MR_Box * hlds__hlds_out__hlds_out_module__wrapper_arg_3)
#line 430 "hlds_out_module.m"
{
#line 430 "hlds_out_module.m"
  {
#line 430 "hlds_out_module.m"
    MR_Box hlds__hlds_out__hlds_out_module__closure = hlds__hlds_out__hlds_out_module__closure_arg;

#line 430 "hlds_out_module.m"
    {
#line 430 "hlds_out_module.m"
      hlds__hlds_out__hlds_out_module__write_class_defn_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__closure, (MR_Integer) 3))), ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__closure, (MR_Integer) 4))), ((MR_Word) hlds__hlds_out__hlds_out_module__wrapper_arg_1));
#line 430 "hlds_out_module.m"
      return;
    }
#line 430 "hlds_out_module.m"
  }
#line 430 "hlds_out_module.m"
}

#line 423 "hlds_out_module.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_classes_5_p_0(
#line 423 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__Info_6,
#line 423 "hlds_out_module.m"
  MR_Integer hlds__hlds_out__hlds_out_module__Indent_7,
#line 423 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__ClassTable_8)
#line 423 "hlds_out_module.m"
{
#line 426 "hlds_out_module.m"
  {
#line 426 "hlds_out_module.m"
    MR_bool hlds__hlds_out__hlds_out_module__succeeded;
#line 426 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__ClassTableList_10;
#line 426 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__V_17_17;

#line 427 "hlds_out_module.m"
    {
#line 427 "hlds_out_module.m"
      hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_module__Indent_7);
    }
#line 428 "hlds_out_module.m"
    {
#line 428 "hlds_out_module.m"
      mercury__io__write_string_3_p_0((MR_String) "%-------- Classes --------\n");
    }
#line 429 "hlds_out_module.m"
    {
#line 429 "hlds_out_module.m"
      mercury__map__to_assoc_list_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_class_defn_0, hlds__hlds_out__hlds_out_module__ClassTable_8, &hlds__hlds_out__hlds_out_module__ClassTableList_10);
    }
#line 430 "hlds_out_module.m"
    {
#line 430 "hlds_out_module.m"
      hlds__hlds_out__hlds_out_module__V_17_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 430 "hlds_out_module.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__V_17_17, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_module_scalar_common_4[0]));
#line 430 "hlds_out_module.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__V_17_17, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_module__write_classes_5_p_0_1));
#line 430 "hlds_out_module.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__V_17_17, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 430 "hlds_out_module.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__V_17_17, 3) = ((MR_Box) (hlds__hlds_out__hlds_out_module__Info_6));
#line 430 "hlds_out_module.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__V_17_17, 4) = ((MR_Box) (hlds__hlds_out__hlds_out_module__Indent_7));
#line 430 "hlds_out_module.m"
    }
#line 430 "hlds_out_module.m"
    {
#line 430 "hlds_out_module.m"
      mercury__io__write_list_5_p_0((MR_Word) &hlds__hlds_out__hlds_out_module_scalar_common_2[0], hlds__hlds_out__hlds_out_module__ClassTableList_10, (MR_String) "\n", hlds__hlds_out__hlds_out_module__V_17_17);
    }
#line 431 "hlds_out_module.m"
    {
#line 431 "hlds_out_module.m"
      mercury__io__nl_2_p_0();
#line 431 "hlds_out_module.m"
      return;
    }
#line 426 "hlds_out_module.m"
  }
#line 423 "hlds_out_module.m"
}

#line 404 "hlds_out_module.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_ctor_6_p_0(
#line 404 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__TypeCtor_7,
#line 404 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__Ctor_8,
#line 404 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__TVarSet_9,
#line 404 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__TagValues_10)
#line 404 "hlds_out_module.m"
{
#line 407 "hlds_out_module.m"
  {
#line 407 "hlds_out_module.m"
    MR_bool hlds__hlds_out__hlds_out_module__succeeded;
#line 407 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__Name_14;
#line 407 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__Args_15;
#line 407 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__ConsId_17;
#line 407 "hlds_out_module.m"
    MR_Integer hlds__hlds_out__hlds_out_module__V_22_22;
#line 409 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__V_12_12;
#line 409 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__V_13_13;
#line 409 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__V_16_16;
#line 414 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__TagValue_18;
#line 411 "hlds_out_module.m"
    MR_Box hlds__hlds_out__hlds_out_module__conv0_TagValue_18;

#line 408 "hlds_out_module.m"
    {
#line 408 "hlds_out_module.m"
      parse_tree__mercury_to_mercury__mercury_output_ctor_4_p_0(hlds__hlds_out__hlds_out_module__Ctor_8, hlds__hlds_out__hlds_out_module__TVarSet_9);
    }
#line 409 "hlds_out_module.m"
    hlds__hlds_out__hlds_out_module__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__Ctor_8, (MR_Integer) 0)));
#line 409 "hlds_out_module.m"
    hlds__hlds_out__hlds_out_module__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__Ctor_8, (MR_Integer) 1)));
#line 409 "hlds_out_module.m"
    hlds__hlds_out__hlds_out_module__Name_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__Ctor_8, (MR_Integer) 2)));
#line 409 "hlds_out_module.m"
    hlds__hlds_out__hlds_out_module__Args_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__Ctor_8, (MR_Integer) 3)));
#line 409 "hlds_out_module.m"
    hlds__hlds_out__hlds_out_module__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__Ctor_8, (MR_Integer) 4)));
#line 410 "hlds_out_module.m"
    {
#line 410 "hlds_out_module.m"
      hlds__hlds_out__hlds_out_module__V_22_22 = mercury__list__length_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0, hlds__hlds_out__hlds_out_module__Args_15);
    }
#line 410 "hlds_out_module.m"
    {
#line 410 "hlds_out_module.m"
      hlds__hlds_out__hlds_out_module__ConsId_17 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 410 "hlds_out_module.m"
      MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_module__ConsId_17, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 410 "hlds_out_module.m"
      MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_module__ConsId_17, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_module__Name_14));
#line 410 "hlds_out_module.m"
      MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_module__ConsId_17, 2) = ((MR_Box) (hlds__hlds_out__hlds_out_module__V_22_22));
#line 410 "hlds_out_module.m"
      MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_module__ConsId_17, 3) = ((MR_Box) (hlds__hlds_out__hlds_out_module__TypeCtor_7));
#line 410 "hlds_out_module.m"
    }
#line 411 "hlds_out_module.m"
    {
#line 411 "hlds_out_module.m"
      hlds__hlds_out__hlds_out_module__succeeded = mercury__map__search_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_cons_tag_0, hlds__hlds_out__hlds_out_module__TagValues_10, ((MR_Box) (hlds__hlds_out__hlds_out_module__ConsId_17)), &hlds__hlds_out__hlds_out_module__conv0_TagValue_18);
    }
#line 411 "hlds_out_module.m"
    if (hlds__hlds_out__hlds_out_module__succeeded)
#line 411 "hlds_out_module.m"
      {
#line 411 "hlds_out_module.m"
        hlds__hlds_out__hlds_out_module__TagValue_18 = ((MR_Word) hlds__hlds_out__hlds_out_module__conv0_TagValue_18);
#line 411 "hlds_out_module.m"
        hlds__hlds_out__hlds_out_module__succeeded = MR_TRUE;
#line 411 "hlds_out_module.m"
      }
#line 414 "hlds_out_module.m"
    if (hlds__hlds_out__hlds_out_module__succeeded)
#line 412 "hlds_out_module.m"
      {
#line 412 "hlds_out_module.m"
        {
#line 412 "hlds_out_module.m"
          mercury__io__write_string_3_p_0((MR_String) "\t% tag: ");
        }
#line 413 "hlds_out_module.m"
        {
#line 413 "hlds_out_module.m"
          mercury__io__print_3_p_0((MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_cons_tag_0, ((MR_Box) (hlds__hlds_out__hlds_out_module__TagValue_18)));
#line 413 "hlds_out_module.m"
          return;
        }
#line 412 "hlds_out_module.m"
      }
#line 414 "hlds_out_module.m"
    else
#line 413 "hlds_out_module.m"
      {
#line 413 "hlds_out_module.m"
      }
#line 407 "hlds_out_module.m"
  }
#line 404 "hlds_out_module.m"
}

#line 386 "hlds_out_module.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_constructors_loop_7_p_0(
#line 386 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__HeadVar__1_1,
#line 386 "hlds_out_module.m"
  MR_Integer hlds__hlds_out__hlds_out_module__HeadVar__2_2,
#line 386 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__HeadVar__3_3,
#line 386 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__HeadVar__4_4,
#line 386 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__TagValues_5)
#line 386 "hlds_out_module.m"
{
#line 389 "hlds_out_module.m"
  while (MR_TRUE)
#line 389 "hlds_out_module.m"
    {
#line 389 "hlds_out_module.m"
      /* tailcall optimized into a loop */
#line 389 "hlds_out_module.m"
      {
#line 389 "hlds_out_module.m"
        MR_bool hlds__hlds_out__hlds_out_module__succeeded;

#line 389 "hlds_out_module.m"
        if ((hlds__hlds_out__hlds_out_module__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 389 "hlds_out_module.m"
          {
#line 389 "hlds_out_module.m"
          }
#line 389 "hlds_out_module.m"
        else
#line 391 "hlds_out_module.m"
          {
#line 391 "hlds_out_module.m"
            MR_Word hlds__hlds_out__hlds_out_module__Ctor_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_module__HeadVar__4_4, (MR_Integer) 0)));
#line 391 "hlds_out_module.m"
            MR_Word hlds__hlds_out__hlds_out_module__Ctors_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_module__HeadVar__4_4, (MR_Integer) 1)));
#line 391 "hlds_out_module.m"
            MR_Word hlds__hlds_out__hlds_out_module__Name_42;
#line 391 "hlds_out_module.m"
            MR_Word hlds__hlds_out__hlds_out_module__Args_43;
#line 391 "hlds_out_module.m"
            MR_Word hlds__hlds_out__hlds_out_module__ConsId_45;
#line 391 "hlds_out_module.m"
            MR_Integer hlds__hlds_out__hlds_out_module__V_48_48;
#line 409 "hlds_out_module.m"
            MR_Word hlds__hlds_out__hlds_out_module__V_40_40;
#line 409 "hlds_out_module.m"
            MR_Word hlds__hlds_out__hlds_out_module__V_41_41;
#line 409 "hlds_out_module.m"
            MR_Word hlds__hlds_out__hlds_out_module__V_44_44;
#line 414 "hlds_out_module.m"
            MR_Word hlds__hlds_out__hlds_out_module__TagValue_46;
#line 411 "hlds_out_module.m"
            MR_Box hlds__hlds_out__hlds_out_module__conv0_TagValue_46;

#line 392 "hlds_out_module.m"
            {
#line 392 "hlds_out_module.m"
              hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_module__HeadVar__2_2);
            }
#line 393 "hlds_out_module.m"
            {
#line 393 "hlds_out_module.m"
              mercury__io__write_string_3_p_0((MR_String) ";\t");
            }
#line 408 "hlds_out_module.m"
            {
#line 408 "hlds_out_module.m"
              parse_tree__mercury_to_mercury__mercury_output_ctor_4_p_0(hlds__hlds_out__hlds_out_module__Ctor_18, hlds__hlds_out__hlds_out_module__HeadVar__3_3);
            }
#line 409 "hlds_out_module.m"
            hlds__hlds_out__hlds_out_module__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__Ctor_18, (MR_Integer) 0)));
#line 409 "hlds_out_module.m"
            hlds__hlds_out__hlds_out_module__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__Ctor_18, (MR_Integer) 1)));
#line 409 "hlds_out_module.m"
            hlds__hlds_out__hlds_out_module__Name_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__Ctor_18, (MR_Integer) 2)));
#line 409 "hlds_out_module.m"
            hlds__hlds_out__hlds_out_module__Args_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__Ctor_18, (MR_Integer) 3)));
#line 409 "hlds_out_module.m"
            hlds__hlds_out__hlds_out_module__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__Ctor_18, (MR_Integer) 4)));
#line 410 "hlds_out_module.m"
            {
#line 410 "hlds_out_module.m"
              hlds__hlds_out__hlds_out_module__V_48_48 = mercury__list__length_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0, hlds__hlds_out__hlds_out_module__Args_43);
            }
#line 410 "hlds_out_module.m"
            {
#line 410 "hlds_out_module.m"
              hlds__hlds_out__hlds_out_module__ConsId_45 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 410 "hlds_out_module.m"
              MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_module__ConsId_45, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 410 "hlds_out_module.m"
              MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_module__ConsId_45, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_module__Name_42));
#line 410 "hlds_out_module.m"
              MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_module__ConsId_45, 2) = ((MR_Box) (hlds__hlds_out__hlds_out_module__V_48_48));
#line 410 "hlds_out_module.m"
              MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_module__ConsId_45, 3) = ((MR_Box) (hlds__hlds_out__hlds_out_module__HeadVar__1_1));
#line 410 "hlds_out_module.m"
            }
#line 411 "hlds_out_module.m"
            {
#line 411 "hlds_out_module.m"
              hlds__hlds_out__hlds_out_module__succeeded = mercury__map__search_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_cons_tag_0, hlds__hlds_out__hlds_out_module__TagValues_5, ((MR_Box) (hlds__hlds_out__hlds_out_module__ConsId_45)), &hlds__hlds_out__hlds_out_module__conv0_TagValue_46);
            }
#line 411 "hlds_out_module.m"
            if (hlds__hlds_out__hlds_out_module__succeeded)
#line 411 "hlds_out_module.m"
              {
#line 411 "hlds_out_module.m"
                hlds__hlds_out__hlds_out_module__TagValue_46 = ((MR_Word) hlds__hlds_out__hlds_out_module__conv0_TagValue_46);
#line 411 "hlds_out_module.m"
                hlds__hlds_out__hlds_out_module__succeeded = MR_TRUE;
#line 411 "hlds_out_module.m"
              }
#line 414 "hlds_out_module.m"
            if (hlds__hlds_out__hlds_out_module__succeeded)
#line 412 "hlds_out_module.m"
              {
#line 412 "hlds_out_module.m"
                {
#line 412 "hlds_out_module.m"
                  mercury__io__write_string_3_p_0((MR_String) "\t% tag: ");
                }
#line 413 "hlds_out_module.m"
                {
#line 413 "hlds_out_module.m"
                  mercury__io__print_3_p_0((MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_cons_tag_0, ((MR_Box) (hlds__hlds_out__hlds_out_module__TagValue_46)));
                }
#line 412 "hlds_out_module.m"
              }
#line 414 "hlds_out_module.m"
            else
#line 413 "hlds_out_module.m"
              {
#line 413 "hlds_out_module.m"
              }
#line 397 "hlds_out_module.m"
            if ((hlds__hlds_out__hlds_out_module__Ctors_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 396 "hlds_out_module.m"
              {
#line 396 "hlds_out_module.m"
              }
#line 397 "hlds_out_module.m"
            else
#line 398 "hlds_out_module.m"
              {
#line 399 "hlds_out_module.m"
                {
#line 399 "hlds_out_module.m"
                  mercury__io__write_string_3_p_0((MR_String) "\n");
                }
#line 400 "hlds_out_module.m"
                /* direct tailcall eliminated */
#line 400 "hlds_out_module.m"
                {
#line 400 "hlds_out_module.m"
                  MR_Word hlds__hlds_out__hlds_out_module__HeadVar__4__tmp_copy_4 = hlds__hlds_out__hlds_out_module__Ctors_19;

#line 400 "hlds_out_module.m"
                  hlds__hlds_out__hlds_out_module__HeadVar__4_4 = hlds__hlds_out__hlds_out_module__HeadVar__4__tmp_copy_4;
#line 400 "hlds_out_module.m"
                }
#line 400 "hlds_out_module.m"
                continue;
#line 398 "hlds_out_module.m"
              }
#line 391 "hlds_out_module.m"
          }
#line 389 "hlds_out_module.m"
      }
#line 389 "hlds_out_module.m"
      break;
#line 389 "hlds_out_module.m"
    }
#line 386 "hlds_out_module.m"
}

#line 368 "hlds_out_module.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_constructors_7_p_0(
#line 368 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__HeadVar__1_1,
#line 368 "hlds_out_module.m"
  MR_Integer hlds__hlds_out__hlds_out_module__HeadVar__2_2,
#line 368 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__HeadVar__3_3,
#line 368 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__HeadVar__4_4,
#line 368 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__TagValues_5)
#line 368 "hlds_out_module.m"
{
#line 371 "hlds_out_module.m"
  {
#line 371 "hlds_out_module.m"
    MR_bool hlds__hlds_out__hlds_out_module__succeeded;

#line 371 "hlds_out_module.m"
    if ((hlds__hlds_out__hlds_out_module__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 371 "hlds_out_module.m"
      {
#line 372 "hlds_out_module.m"
        {
#line 372 "hlds_out_module.m"
          mercury__require__unexpected_3_p_0((MR_String) "hlds.hlds_out.hlds_out_module", (MR_String) "predicate \140hlds.hlds_out.hlds_out_module.write_constructors\'/7", (MR_String) "empty constructor list");
#line 372 "hlds_out_module.m"
          return;
        }
#line 371 "hlds_out_module.m"
      }
#line 371 "hlds_out_module.m"
    else
#line 371 "hlds_out_module.m"
      {
#line 371 "hlds_out_module.m"
        MR_Word hlds__hlds_out__hlds_out_module__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_module__HeadVar__4_4, (MR_Integer) 1)));
#line 371 "hlds_out_module.m"
        MR_Word hlds__hlds_out__hlds_out_module__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_module__HeadVar__4_4, (MR_Integer) 0)));

#line 371 "hlds_out_module.m"
        if ((hlds__hlds_out__hlds_out_module__V_49_49 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 373 "hlds_out_module.m"
          {
#line 373 "hlds_out_module.m"
            MR_Word hlds__hlds_out__hlds_out_module__Name_60;
#line 373 "hlds_out_module.m"
            MR_Word hlds__hlds_out__hlds_out_module__Args_61;
#line 373 "hlds_out_module.m"
            MR_Word hlds__hlds_out__hlds_out_module__ConsId_63;
#line 373 "hlds_out_module.m"
            MR_Integer hlds__hlds_out__hlds_out_module__V_66_66;
#line 409 "hlds_out_module.m"
            MR_Word hlds__hlds_out__hlds_out_module__V_58_58;
#line 409 "hlds_out_module.m"
            MR_Word hlds__hlds_out__hlds_out_module__V_59_59;
#line 409 "hlds_out_module.m"
            MR_Word hlds__hlds_out__hlds_out_module__V_62_62;
#line 414 "hlds_out_module.m"
            MR_Word hlds__hlds_out__hlds_out_module__TagValue_64;
#line 411 "hlds_out_module.m"
            MR_Box hlds__hlds_out__hlds_out_module__conv0_TagValue_64;

#line 374 "hlds_out_module.m"
            {
#line 374 "hlds_out_module.m"
              hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_module__HeadVar__2_2);
            }
#line 375 "hlds_out_module.m"
            {
#line 375 "hlds_out_module.m"
              mercury__io__write_char_3_p_0((MR_Char) 9);
            }
#line 408 "hlds_out_module.m"
            {
#line 408 "hlds_out_module.m"
              parse_tree__mercury_to_mercury__mercury_output_ctor_4_p_0(hlds__hlds_out__hlds_out_module__V_50_50, hlds__hlds_out__hlds_out_module__HeadVar__3_3);
            }
#line 409 "hlds_out_module.m"
            hlds__hlds_out__hlds_out_module__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__V_50_50, (MR_Integer) 0)));
#line 409 "hlds_out_module.m"
            hlds__hlds_out__hlds_out_module__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__V_50_50, (MR_Integer) 1)));
#line 409 "hlds_out_module.m"
            hlds__hlds_out__hlds_out_module__Name_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__V_50_50, (MR_Integer) 2)));
#line 409 "hlds_out_module.m"
            hlds__hlds_out__hlds_out_module__Args_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__V_50_50, (MR_Integer) 3)));
#line 409 "hlds_out_module.m"
            hlds__hlds_out__hlds_out_module__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__V_50_50, (MR_Integer) 4)));
#line 410 "hlds_out_module.m"
            {
#line 410 "hlds_out_module.m"
              hlds__hlds_out__hlds_out_module__V_66_66 = mercury__list__length_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0, hlds__hlds_out__hlds_out_module__Args_61);
            }
#line 410 "hlds_out_module.m"
            {
#line 410 "hlds_out_module.m"
              hlds__hlds_out__hlds_out_module__ConsId_63 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 410 "hlds_out_module.m"
              MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_module__ConsId_63, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 410 "hlds_out_module.m"
              MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_module__ConsId_63, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_module__Name_60));
#line 410 "hlds_out_module.m"
              MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_module__ConsId_63, 2) = ((MR_Box) (hlds__hlds_out__hlds_out_module__V_66_66));
#line 410 "hlds_out_module.m"
              MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_module__ConsId_63, 3) = ((MR_Box) (hlds__hlds_out__hlds_out_module__HeadVar__1_1));
#line 410 "hlds_out_module.m"
            }
#line 411 "hlds_out_module.m"
            {
#line 411 "hlds_out_module.m"
              hlds__hlds_out__hlds_out_module__succeeded = mercury__map__search_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_cons_tag_0, hlds__hlds_out__hlds_out_module__TagValues_5, ((MR_Box) (hlds__hlds_out__hlds_out_module__ConsId_63)), &hlds__hlds_out__hlds_out_module__conv0_TagValue_64);
            }
#line 411 "hlds_out_module.m"
            if (hlds__hlds_out__hlds_out_module__succeeded)
#line 411 "hlds_out_module.m"
              {
#line 411 "hlds_out_module.m"
                hlds__hlds_out__hlds_out_module__TagValue_64 = ((MR_Word) hlds__hlds_out__hlds_out_module__conv0_TagValue_64);
#line 411 "hlds_out_module.m"
                hlds__hlds_out__hlds_out_module__succeeded = MR_TRUE;
#line 411 "hlds_out_module.m"
              }
#line 414 "hlds_out_module.m"
            if (hlds__hlds_out__hlds_out_module__succeeded)
#line 412 "hlds_out_module.m"
              {
#line 412 "hlds_out_module.m"
                {
#line 412 "hlds_out_module.m"
                  mercury__io__write_string_3_p_0((MR_String) "\t% tag: ");
                }
#line 413 "hlds_out_module.m"
                {
#line 413 "hlds_out_module.m"
                  mercury__io__print_3_p_0((MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_cons_tag_0, ((MR_Box) (hlds__hlds_out__hlds_out_module__TagValue_64)));
#line 413 "hlds_out_module.m"
                  return;
                }
#line 412 "hlds_out_module.m"
              }
#line 414 "hlds_out_module.m"
            else
#line 413 "hlds_out_module.m"
              {
#line 413 "hlds_out_module.m"
              }
#line 373 "hlds_out_module.m"
          }
#line 371 "hlds_out_module.m"
        else
#line 378 "hlds_out_module.m"
          {
#line 380 "hlds_out_module.m"
            {
#line 380 "hlds_out_module.m"
              hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_module__HeadVar__2_2);
            }
#line 381 "hlds_out_module.m"
            {
#line 381 "hlds_out_module.m"
              mercury__io__write_char_3_p_0((MR_Char) 9);
            }
#line 382 "hlds_out_module.m"
            {
#line 382 "hlds_out_module.m"
              hlds__hlds_out__hlds_out_module__write_ctor_6_p_0(hlds__hlds_out__hlds_out_module__HeadVar__1_1, hlds__hlds_out__hlds_out_module__V_50_50, hlds__hlds_out__hlds_out_module__HeadVar__3_3, hlds__hlds_out__hlds_out_module__TagValues_5);
            }
#line 383 "hlds_out_module.m"
            {
#line 383 "hlds_out_module.m"
              mercury__io__write_string_3_p_0((MR_String) "\n");
            }
#line 384 "hlds_out_module.m"
            {
#line 384 "hlds_out_module.m"
              hlds__hlds_out__hlds_out_module__write_constructors_loop_7_p_0(hlds__hlds_out__hlds_out_module__HeadVar__1_1, hlds__hlds_out__hlds_out_module__HeadVar__2_2, hlds__hlds_out__hlds_out_module__HeadVar__3_3, hlds__hlds_out__hlds_out_module__V_49_49, hlds__hlds_out__hlds_out_module__TagValues_5);
#line 384 "hlds_out_module.m"
              return;
            }
#line 378 "hlds_out_module.m"
          }
#line 371 "hlds_out_module.m"
      }
#line 371 "hlds_out_module.m"
  }
#line 368 "hlds_out_module.m"
}

#line 263 "hlds_out_module.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_type_body_7_p_0(
#line 263 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__Info_8,
#line 263 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__TypeCtor_9,
#line 263 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__TypeBody_10,
#line 263 "hlds_out_module.m"
  MR_Integer hlds__hlds_out__hlds_out_module__Indent_11,
#line 263 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__TVarSet_12)
#line 263 "hlds_out_module.m"
{
#line 270 "hlds_out_module.m"
  {
#line 270 "hlds_out_module.m"
    MR_bool hlds__hlds_out__hlds_out_module__succeeded;

#line 270 "hlds_out_module.m"
    if (((MR_tag((MR_Word) hlds__hlds_out__hlds_out_module__TypeBody_10)) == (MR_mktag((MR_Integer) 1))))
#line 270 "hlds_out_module.m"
      {
#line 270 "hlds_out_module.m"
        MR_Word hlds__hlds_out__hlds_out_module__Ctors_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_module__TypeBody_10, (MR_Integer) 0)));
#line 270 "hlds_out_module.m"
        MR_Word hlds__hlds_out__hlds_out_module__ConsTagMap_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_module__TypeBody_10, (MR_Integer) 1)));
#line 270 "hlds_out_module.m"
        MR_Word hlds__hlds_out__hlds_out_module__CheaperTagTest_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_module__TypeBody_10, (MR_Integer) 2)));
#line 270 "hlds_out_module.m"
        MR_Word hlds__hlds_out__hlds_out_module__DuTypeKind_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_module__TypeBody_10, (MR_Integer) 3)));
#line 270 "hlds_out_module.m"
        MR_Word hlds__hlds_out__hlds_out_module__MaybeUserEqComp_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_module__TypeBody_10, (MR_Integer) 4)));
#line 270 "hlds_out_module.m"
        MR_Word hlds__hlds_out__hlds_out_module__MaybeDirectArgCtors_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_module__TypeBody_10, (MR_Integer) 5)));
#line 270 "hlds_out_module.m"
        MR_Word hlds__hlds_out__hlds_out_module__ReservedTag_20 = ((((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_module__TypeBody_10, (MR_Integer) 6)))) & (MR_Integer) 1);
#line 270 "hlds_out_module.m"
        MR_Word hlds__hlds_out__hlds_out_module__ReservedAddr_21 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_module__TypeBody_10, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 270 "hlds_out_module.m"
        MR_Word hlds__hlds_out__hlds_out_module__Foreign_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_module__TypeBody_10, (MR_Integer) 7)));
#line 270 "hlds_out_module.m"
        MR_Word hlds__hlds_out__hlds_out_module__MercInfo_32;
#line 337 "hlds_out_module.m"
        MR_String hlds__hlds_out__hlds_out_module__V_117_117;
#line 337 "hlds_out_module.m"
        MR_String hlds__hlds_out__hlds_out_module__V_118_118;
#line 337 "hlds_out_module.m"
        MR_Word hlds__hlds_out__hlds_out_module__V_119_119;
#line 337 "hlds_out_module.m"
        MR_Word hlds__hlds_out__hlds_out_module__V_120_120;

#line 271 "hlds_out_module.m"
        {
#line 271 "hlds_out_module.m"
          mercury__io__write_string_3_p_0((MR_String) " --->\n");
        }
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
            MR_Word hlds__hlds_out__hlds_out_module__TypeCtorInfo_125_125;
#line 276 "hlds_out_module.m"
            MR_Word hlds__hlds_out__hlds_out_module__ExpConsId_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_module__CheaperTagTest_16, (MR_Integer) 0)));
#line 276 "hlds_out_module.m"
            MR_Word hlds__hlds_out__hlds_out_module__ExpConsTag_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_module__CheaperTagTest_16, (MR_Integer) 1)));
#line 276 "hlds_out_module.m"
            MR_Word hlds__hlds_out__hlds_out_module__CheapConsId_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_module__CheaperTagTest_16, (MR_Integer) 2)));
#line 276 "hlds_out_module.m"
            MR_Word hlds__hlds_out__hlds_out_module__CheapConsTag_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_module__CheaperTagTest_16, (MR_Integer) 3)));

#line 277 "hlds_out_module.m"
            {
#line 277 "hlds_out_module.m"
              mercury__io__write_string_3_p_0((MR_String) "/* cheaper tag test: ");
            }
#line 278 "hlds_out_module.m"
            {
#line 278 "hlds_out_module.m"
              hlds__hlds_out__hlds_out_util__write_cons_id_and_arity_3_p_0(hlds__hlds_out__hlds_out_module__ExpConsId_23);
            }
#line 279 "hlds_out_module.m"
            {
#line 279 "hlds_out_module.m"
              mercury__io__write_string_3_p_0((MR_String) " tag ");
            }
#line 6331 "hlds.hlds_out.hlds_out_module.c"
            hlds__hlds_out__hlds_out_module__TypeCtorInfo_125_125 = (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_cons_tag_0;
#line 280 "hlds_out_module.m"
            {
#line 280 "hlds_out_module.m"
              mercury__io__print_3_p_0(hlds__hlds_out__hlds_out_module__TypeCtorInfo_125_125, ((MR_Box) (hlds__hlds_out__hlds_out_module__ExpConsTag_24)));
            }
#line 281 "hlds_out_module.m"
            {
#line 281 "hlds_out_module.m"
              mercury__io__write_string_3_p_0((MR_String) " -> ");
            }
#line 282 "hlds_out_module.m"
            {
#line 282 "hlds_out_module.m"
              hlds__hlds_out__hlds_out_util__write_cons_id_and_arity_3_p_0(hlds__hlds_out__hlds_out_module__CheapConsId_25);
            }
#line 283 "hlds_out_module.m"
            {
#line 283 "hlds_out_module.m"
              mercury__io__write_string_3_p_0((MR_String) " tag ");
            }
#line 284 "hlds_out_module.m"
            {
#line 284 "hlds_out_module.m"
              mercury__io__print_3_p_0(hlds__hlds_out__hlds_out_module__TypeCtorInfo_125_125, ((MR_Box) (hlds__hlds_out__hlds_out_module__CheapConsTag_26)));
            }
#line 285 "hlds_out_module.m"
            {
#line 285 "hlds_out_module.m"
              mercury__io__write_string_3_p_0((MR_String) " */\n");
            }
#line 276 "hlds_out_module.m"
          }
#line 291 "hlds_out_module.m"
        if ((hlds__hlds_out__hlds_out_module__DuTypeKind_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 298 "hlds_out_module.m"
          {
#line 299 "hlds_out_module.m"
            {
#line 299 "hlds_out_module.m"
              hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_module__Indent_11);
            }
#line 300 "hlds_out_module.m"
            {
#line 300 "hlds_out_module.m"
              mercury__io__write_string_3_p_0((MR_String) "/* KIND dummy */\n");
            }
#line 298 "hlds_out_module.m"
          }
#line 291 "hlds_out_module.m"
        else
#line 291 "hlds_out_module.m"
          if ((hlds__hlds_out__hlds_out_module__DuTypeKind_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 319 "hlds_out_module.m"
            {
#line 320 "hlds_out_module.m"
              {
#line 320 "hlds_out_module.m"
                mercury__io__write_string_3_p_0((MR_String) "/* KIND general */\n");
              }
#line 319 "hlds_out_module.m"
            }
#line 291 "hlds_out_module.m"
          else
#line 291 "hlds_out_module.m"
            if ((hlds__hlds_out__hlds_out_module__DuTypeKind_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 288 "hlds_out_module.m"
              {
#line 289 "hlds_out_module.m"
                {
#line 289 "hlds_out_module.m"
                  hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_module__Indent_11);
                }
#line 290 "hlds_out_module.m"
                {
#line 290 "hlds_out_module.m"
                  mercury__io__write_string_3_p_0((MR_String) "/* KIND enumeration */\n");
                }
#line 288 "hlds_out_module.m"
              }
#line 291 "hlds_out_module.m"
            else
#line 291 "hlds_out_module.m"
              if (((MR_tag((MR_Word) hlds__hlds_out__hlds_out_module__DuTypeKind_17)) == (MR_mktag((MR_Integer) 1))))
#line 292 "hlds_out_module.m"
                {
#line 292 "hlds_out_module.m"
                  MR_Word hlds__hlds_out__hlds_out_module__Lang_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_module__DuTypeKind_17, (MR_Integer) 0)));
#line 292 "hlds_out_module.m"
                  MR_String hlds__hlds_out__hlds_out_module__V_94_94;

#line 293 "hlds_out_module.m"
                  {
#line 293 "hlds_out_module.m"
                    hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_module__Indent_11);
                  }
#line 294 "hlds_out_module.m"
                  {
#line 294 "hlds_out_module.m"
                    mercury__io__write_string_3_p_0((MR_String) "/* KIND foreign enumeration for ");
                  }
#line 295 "hlds_out_module.m"
                  {
#line 295 "hlds_out_module.m"
                    hlds__hlds_out__hlds_out_module__V_94_94 = libs__globals__foreign_language_string_1_f_0(hlds__hlds_out__hlds_out_module__Lang_27);
                  }
#line 295 "hlds_out_module.m"
                  {
#line 295 "hlds_out_module.m"
                    mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_module__V_94_94);
                  }
#line 296 "hlds_out_module.m"
                  {
#line 296 "hlds_out_module.m"
                    mercury__io__write_string_3_p_0((MR_String) " */\n");
                  }
#line 292 "hlds_out_module.m"
                }
#line 291 "hlds_out_module.m"
              else
#line 303 "hlds_out_module.m"
                {
#line 303 "hlds_out_module.m"
                  MR_Word hlds__hlds_out__hlds_out_module__FunctorName_28 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hlds_out__hlds_out_module__DuTypeKind_17, (MR_Integer) 0)));
#line 303 "hlds_out_module.m"
                  MR_Word hlds__hlds_out__hlds_out_module__ArgType_29 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hlds_out__hlds_out_module__DuTypeKind_17, (MR_Integer) 1)));
#line 303 "hlds_out_module.m"
                  MR_Word hlds__hlds_out__hlds_out_module__MaybeArgName_30 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hlds_out__hlds_out_module__DuTypeKind_17, (MR_Integer) 2)));

#line 304 "hlds_out_module.m"
                  {
#line 304 "hlds_out_module.m"
                    hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_module__Indent_11);
                  }
#line 305 "hlds_out_module.m"
                  {
#line 305 "hlds_out_module.m"
                    mercury__io__write_string_3_p_0((MR_String) "/* KIND notag: ");
                  }
#line 306 "hlds_out_module.m"
                  {
#line 306 "hlds_out_module.m"
                    parse_tree__prog_out__write_sym_name_3_p_0(hlds__hlds_out__hlds_out_module__FunctorName_28);
                  }
#line 307 "hlds_out_module.m"
                  {
#line 307 "hlds_out_module.m"
                    mercury__io__write_string_3_p_0((MR_String) ", ");
                  }
#line 308 "hlds_out_module.m"
                  {
#line 308 "hlds_out_module.m"
                    parse_tree__mercury_to_mercury__mercury_output_type_5_p_0(hlds__hlds_out__hlds_out_module__TVarSet_12, (MR_Integer) 0, hlds__hlds_out__hlds_out_module__ArgType_29);
                  }
#line 309 "hlds_out_module.m"
                  {
#line 309 "hlds_out_module.m"
                    mercury__io__write_string_3_p_0((MR_String) ", ");
                  }
#line 313 "hlds_out_module.m"
                  if ((hlds__hlds_out__hlds_out_module__MaybeArgName_30 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 314 "hlds_out_module.m"
                    {
#line 315 "hlds_out_module.m"
                      {
#line 315 "hlds_out_module.m"
                        mercury__io__write_string_3_p_0((MR_String) "no arg name");
                      }
#line 314 "hlds_out_module.m"
                    }
#line 313 "hlds_out_module.m"
                  else
#line 311 "hlds_out_module.m"
                    {
#line 311 "hlds_out_module.m"
                      MR_String hlds__hlds_out__hlds_out_module__ArgName_31 = ((MR_String) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_module__MaybeArgName_30, (MR_Integer) 0)));

#line 312 "hlds_out_module.m"
                      {
#line 312 "hlds_out_module.m"
                        mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_module__ArgName_31);
                      }
#line 311 "hlds_out_module.m"
                    }
#line 317 "hlds_out_module.m"
                  {
#line 317 "hlds_out_module.m"
                    mercury__io__write_string_3_p_0((MR_String) " */\n");
                  }
#line 303 "hlds_out_module.m"
                }
#line 326 "hlds_out_module.m"
        if ((hlds__hlds_out__hlds_out_module__ReservedTag_20 == (MR_Integer) 1))
#line 327 "hlds_out_module.m"
          {
#line 327 "hlds_out_module.m"
          }
#line 326 "hlds_out_module.m"
        else
#line 323 "hlds_out_module.m"
          {
#line 324 "hlds_out_module.m"
            {
#line 324 "hlds_out_module.m"
              hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_module__Indent_11);
            }
#line 325 "hlds_out_module.m"
            {
#line 325 "hlds_out_module.m"
              mercury__io__write_string_3_p_0((MR_String) "/* reserved_tag */\n");
            }
#line 323 "hlds_out_module.m"
          }
#line 333 "hlds_out_module.m"
        if ((hlds__hlds_out__hlds_out_module__ReservedAddr_21 == (MR_Integer) 1))
#line 334 "hlds_out_module.m"
          {
#line 334 "hlds_out_module.m"
          }
#line 333 "hlds_out_module.m"
        else
#line 330 "hlds_out_module.m"
          {
#line 331 "hlds_out_module.m"
            {
#line 331 "hlds_out_module.m"
              hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_module__Indent_11);
            }
#line 332 "hlds_out_module.m"
            {
#line 332 "hlds_out_module.m"
              mercury__io__write_string_3_p_0((MR_String) "/* reserved_address */\n");
            }
#line 330 "hlds_out_module.m"
          }
#line 336 "hlds_out_module.m"
        {
#line 336 "hlds_out_module.m"
          hlds__hlds_out__hlds_out_module__write_constructors_7_p_0(hlds__hlds_out__hlds_out_module__TypeCtor_9, hlds__hlds_out__hlds_out_module__Indent_11, hlds__hlds_out__hlds_out_module__TVarSet_12, hlds__hlds_out__hlds_out_module__Ctors_14, hlds__hlds_out__hlds_out_module__ConsTagMap_15);
        }
#line 337 "hlds_out_module.m"
        hlds__hlds_out__hlds_out_module__V_117_117 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__Info_8, (MR_Integer) 0)));
#line 337 "hlds_out_module.m"
        hlds__hlds_out__hlds_out_module__V_118_118 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__Info_8, (MR_Integer) 1)));
#line 337 "hlds_out_module.m"
        hlds__hlds_out__hlds_out_module__V_119_119 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__Info_8, (MR_Integer) 2)));
#line 337 "hlds_out_module.m"
        hlds__hlds_out__hlds_out_module__V_120_120 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__Info_8, (MR_Integer) 3)));
#line 337 "hlds_out_module.m"
        hlds__hlds_out__hlds_out_module__MercInfo_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__Info_8, (MR_Integer) 4)));
#line 338 "hlds_out_module.m"
        {
#line 338 "hlds_out_module.m"
          parse_tree__mercury_to_mercury__mercury_output_where_attributes_7_p_0(hlds__hlds_out__hlds_out_module__MercInfo_32, hlds__hlds_out__hlds_out_module__TVarSet_12, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), hlds__hlds_out__hlds_out_module__MaybeUserEqComp_18, hlds__hlds_out__hlds_out_module__MaybeDirectArgCtors_19);
        }
#line 344 "hlds_out_module.m"
        if ((hlds__hlds_out__hlds_out_module__Foreign_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 345 "hlds_out_module.m"
          {
#line 345 "hlds_out_module.m"
          }
#line 344 "hlds_out_module.m"
        else
#line 341 "hlds_out_module.m"
          {
#line 342 "hlds_out_module.m"
            {
#line 342 "hlds_out_module.m"
              hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_module__Indent_11);
            }
#line 343 "hlds_out_module.m"
            {
#line 343 "hlds_out_module.m"
              mercury__io__write_string_3_p_0((MR_String) "/* has foreign_type */\n");
            }
#line 341 "hlds_out_module.m"
          }
#line 347 "hlds_out_module.m"
        {
#line 347 "hlds_out_module.m"
          mercury__io__write_string_3_p_0((MR_String) ".\n");
#line 347 "hlds_out_module.m"
          return;
        }
#line 270 "hlds_out_module.m"
      }
#line 270 "hlds_out_module.m"
    else
#line 270 "hlds_out_module.m"
      if (((MR_tag((MR_Word) hlds__hlds_out__hlds_out_module__TypeBody_10)) == (MR_mktag((MR_Integer) 2))))
#line 349 "hlds_out_module.m"
        {
#line 349 "hlds_out_module.m"
          MR_Word hlds__hlds_out__hlds_out_module__Type_34 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hlds_out__hlds_out_module__TypeBody_10, (MR_Integer) 0)));

#line 350 "hlds_out_module.m"
          {
#line 350 "hlds_out_module.m"
            mercury__io__write_string_3_p_0((MR_String) " == ");
          }
#line 351 "hlds_out_module.m"
          {
#line 351 "hlds_out_module.m"
            parse_tree__mercury_to_mercury__mercury_output_type_5_p_0(hlds__hlds_out__hlds_out_module__TVarSet_12, (MR_Integer) 0, hlds__hlds_out__hlds_out_module__Type_34);
          }
#line 352 "hlds_out_module.m"
          {
#line 352 "hlds_out_module.m"
            mercury__io__write_string_3_p_0((MR_String) ".\n");
#line 352 "hlds_out_module.m"
            return;
          }
#line 349 "hlds_out_module.m"
        }
#line 270 "hlds_out_module.m"
      else
#line 270 "hlds_out_module.m"
        if (((MR_tag((MR_Word) hlds__hlds_out__hlds_out_module__TypeBody_10)) == (MR_mktag((MR_Integer) 0))))
#line 357 "hlds_out_module.m"
          {
#line 359 "hlds_out_module.m"
            {
#line 359 "hlds_out_module.m"
              mercury__io__write_string_3_p_0((MR_String) " == \044foreign_type.\n");
#line 359 "hlds_out_module.m"
              return;
            }
#line 357 "hlds_out_module.m"
          }
#line 270 "hlds_out_module.m"
        else
#line 270 "hlds_out_module.m"
          if (((((MR_tag((MR_Word) hlds__hlds_out__hlds_out_module__TypeBody_10)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_module__TypeBody_10, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 354 "hlds_out_module.m"
            {
#line 355 "hlds_out_module.m"
              {
#line 355 "hlds_out_module.m"
                mercury__io__write_string_3_p_0((MR_String) ".\n");
#line 355 "hlds_out_module.m"
                return;
              }
#line 354 "hlds_out_module.m"
            }
#line 270 "hlds_out_module.m"
          else
#line 361 "hlds_out_module.m"
            {
#line 361 "hlds_out_module.m"
              MR_Word hlds__hlds_out__hlds_out_module__SolverTypeDetails_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_module__TypeBody_10, (MR_Integer) 1)));
#line 361 "hlds_out_module.m"
              MR_Word hlds__hlds_out__hlds_out_module__V_40_40;
#line 361 "hlds_out_module.m"
              MR_Word hlds__hlds_out__hlds_out_module__MaybeUserEqComp_115 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_module__TypeBody_10, (MR_Integer) 2)));
#line 361 "hlds_out_module.m"
              MR_Word hlds__hlds_out__hlds_out_module__MercInfo_116 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__Info_8, (MR_Integer) 4)));
#line 362 "hlds_out_module.m"
              MR_String hlds__hlds_out__hlds_out_module__V_121_121 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__Info_8, (MR_Integer) 0)));
#line 362 "hlds_out_module.m"
              MR_String hlds__hlds_out__hlds_out_module__V_122_122 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__Info_8, (MR_Integer) 1)));
#line 362 "hlds_out_module.m"
              MR_Word hlds__hlds_out__hlds_out_module__V_123_123 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__Info_8, (MR_Integer) 2)));
#line 362 "hlds_out_module.m"
              MR_Word hlds__hlds_out__hlds_out_module__V_124_124 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__Info_8, (MR_Integer) 3)));

#line 363 "hlds_out_module.m"
              {
#line 363 "hlds_out_module.m"
                hlds__hlds_out__hlds_out_module__V_40_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 363 "hlds_out_module.m"
                MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_module__V_40_40, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_module__SolverTypeDetails_37));
#line 363 "hlds_out_module.m"
              }
#line 363 "hlds_out_module.m"
              {
#line 363 "hlds_out_module.m"
                parse_tree__mercury_to_mercury__mercury_output_where_attributes_7_p_0(hlds__hlds_out__hlds_out_module__MercInfo_116, hlds__hlds_out__hlds_out_module__TVarSet_12, hlds__hlds_out__hlds_out_module__V_40_40, hlds__hlds_out__hlds_out_module__MaybeUserEqComp_115, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
              }
#line 365 "hlds_out_module.m"
              {
#line 365 "hlds_out_module.m"
                mercury__io__write_string_3_p_0((MR_String) ".\n");
#line 365 "hlds_out_module.m"
                return;
              }
#line 361 "hlds_out_module.m"
            }
#line 270 "hlds_out_module.m"
  }
#line 263 "hlds_out_module.m"
}

#line 254 "hlds_out_module.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_type_params_loop_4_p_0(
#line 254 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__HeadVar__1_1,
#line 254 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__HeadVar__2_2)
#line 254 "hlds_out_module.m"
{
#line 257 "hlds_out_module.m"
  while (MR_TRUE)
#line 257 "hlds_out_module.m"
    {
#line 257 "hlds_out_module.m"
      /* tailcall optimized into a loop */
#line 257 "hlds_out_module.m"
      {
#line 257 "hlds_out_module.m"
        MR_bool hlds__hlds_out__hlds_out_module__succeeded;

#line 257 "hlds_out_module.m"
        if ((hlds__hlds_out__hlds_out_module__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 257 "hlds_out_module.m"
          {
#line 257 "hlds_out_module.m"
          }
#line 257 "hlds_out_module.m"
        else
#line 258 "hlds_out_module.m"
          {
#line 258 "hlds_out_module.m"
            MR_Word hlds__hlds_out__hlds_out_module__P_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_module__HeadVar__2_2, (MR_Integer) 0)));
#line 258 "hlds_out_module.m"
            MR_Word hlds__hlds_out__hlds_out_module__Ps_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_module__HeadVar__2_2, (MR_Integer) 1)));

#line 259 "hlds_out_module.m"
            {
#line 259 "hlds_out_module.m"
              mercury__io__write_string_3_p_0((MR_String) ", ");
            }
#line 260 "hlds_out_module.m"
            {
#line 260 "hlds_out_module.m"
              parse_tree__mercury_to_mercury__mercury_output_var_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, hlds__hlds_out__hlds_out_module__HeadVar__1_1, (MR_Integer) 0, hlds__hlds_out__hlds_out_module__P_10);
            }
#line 261 "hlds_out_module.m"
            /* direct tailcall eliminated */
#line 261 "hlds_out_module.m"
            {
#line 261 "hlds_out_module.m"
              MR_Word hlds__hlds_out__hlds_out_module__HeadVar__2__tmp_copy_2 = hlds__hlds_out__hlds_out_module__Ps_11;

#line 261 "hlds_out_module.m"
              hlds__hlds_out__hlds_out_module__HeadVar__2_2 = hlds__hlds_out__hlds_out_module__HeadVar__2__tmp_copy_2;
#line 261 "hlds_out_module.m"
            }
#line 261 "hlds_out_module.m"
            continue;
#line 258 "hlds_out_module.m"
          }
#line 257 "hlds_out_module.m"
      }
#line 257 "hlds_out_module.m"
      break;
#line 257 "hlds_out_module.m"
    }
#line 254 "hlds_out_module.m"
}

#line 190 "hlds_out_module.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_type_table_entries_5_p_0(
#line 190 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__Info_1,
#line 190 "hlds_out_module.m"
  MR_Integer hlds__hlds_out__hlds_out_module__Indent_2,
#line 190 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__HeadVar__3_3)
#line 190 "hlds_out_module.m"
{
#line 193 "hlds_out_module.m"
  while (MR_TRUE)
#line 193 "hlds_out_module.m"
    {
#line 193 "hlds_out_module.m"
      /* tailcall optimized into a loop */
#line 193 "hlds_out_module.m"
      {
#line 193 "hlds_out_module.m"
        MR_bool hlds__hlds_out__hlds_out_module__succeeded;

#line 193 "hlds_out_module.m"
        if ((hlds__hlds_out__hlds_out_module__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 193 "hlds_out_module.m"
          {
#line 193 "hlds_out_module.m"
          }
#line 193 "hlds_out_module.m"
        else
#line 194 "hlds_out_module.m"
          {
#line 194 "hlds_out_module.m"
            MR_Word hlds__hlds_out__hlds_out_module__TypeCtor_13;
#line 194 "hlds_out_module.m"
            MR_Word hlds__hlds_out__hlds_out_module__TypeDefn_14;
#line 194 "hlds_out_module.m"
            MR_Word hlds__hlds_out__hlds_out_module__Types_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_module__HeadVar__3_3, (MR_Integer) 1)));
#line 194 "hlds_out_module.m"
            MR_Word hlds__hlds_out__hlds_out_module__TVarSet_17;
#line 194 "hlds_out_module.m"
            MR_Word hlds__hlds_out__hlds_out_module__TypeParams_18;
#line 194 "hlds_out_module.m"
            MR_Word hlds__hlds_out__hlds_out_module__TypeBody_19;
#line 194 "hlds_out_module.m"
            MR_Word hlds__hlds_out__hlds_out_module__Status_20;
#line 194 "hlds_out_module.m"
            MR_Word hlds__hlds_out__hlds_out_module__Context_21;
#line 194 "hlds_out_module.m"
            MR_String hlds__hlds_out__hlds_out_module__DumpOptions_22;
#line 194 "hlds_out_module.m"
            MR_Word hlds__hlds_out__hlds_out_module__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_module__HeadVar__3_3, (MR_Integer) 0)));
#line 194 "hlds_out_module.m"
            MR_Integer hlds__hlds_out__hlds_out_module__V_54_54;
#line 203 "hlds_out_module.m"
            MR_String hlds__hlds_out__hlds_out_module__V_58_58;
#line 203 "hlds_out_module.m"
            MR_Word hlds__hlds_out__hlds_out_module__V_59_59;
#line 203 "hlds_out_module.m"
            MR_Word hlds__hlds_out__hlds_out_module__V_60_60;
#line 203 "hlds_out_module.m"
            MR_Word hlds__hlds_out__hlds_out_module__V_61_61;

#line 194 "hlds_out_module.m"
            hlds__hlds_out__hlds_out_module__TypeCtor_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__V_29_29, (MR_Integer) 0)));
#line 194 "hlds_out_module.m"
            hlds__hlds_out__hlds_out_module__TypeDefn_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__V_29_29, (MR_Integer) 1)));
#line 195 "hlds_out_module.m"
            {
#line 195 "hlds_out_module.m"
              hlds__hlds_data__get_type_defn_tvarset_2_p_0(hlds__hlds_out__hlds_out_module__TypeDefn_14, &hlds__hlds_out__hlds_out_module__TVarSet_17);
            }
#line 196 "hlds_out_module.m"
            {
#line 196 "hlds_out_module.m"
              hlds__hlds_data__get_type_defn_tparams_2_p_0(hlds__hlds_out__hlds_out_module__TypeDefn_14, &hlds__hlds_out__hlds_out_module__TypeParams_18);
            }
#line 197 "hlds_out_module.m"
            {
#line 197 "hlds_out_module.m"
              hlds__hlds_data__get_type_defn_body_2_p_0(hlds__hlds_out__hlds_out_module__TypeDefn_14, &hlds__hlds_out__hlds_out_module__TypeBody_19);
            }
#line 198 "hlds_out_module.m"
            {
#line 198 "hlds_out_module.m"
              hlds__hlds_data__get_type_defn_status_2_p_0(hlds__hlds_out__hlds_out_module__TypeDefn_14, &hlds__hlds_out__hlds_out_module__Status_20);
            }
#line 199 "hlds_out_module.m"
            {
#line 199 "hlds_out_module.m"
              hlds__hlds_data__get_type_defn_context_2_p_0(hlds__hlds_out__hlds_out_module__TypeDefn_14, &hlds__hlds_out__hlds_out_module__Context_21);
            }
#line 202 "hlds_out_module.m"
            {
#line 202 "hlds_out_module.m"
              mercury__io__write_char_3_p_0((MR_Char) 10);
            }
#line 203 "hlds_out_module.m"
            hlds__hlds_out__hlds_out_module__DumpOptions_22 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__Info_1, (MR_Integer) 0)));
#line 203 "hlds_out_module.m"
            hlds__hlds_out__hlds_out_module__V_58_58 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__Info_1, (MR_Integer) 1)));
#line 203 "hlds_out_module.m"
            hlds__hlds_out__hlds_out_module__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__Info_1, (MR_Integer) 2)));
#line 203 "hlds_out_module.m"
            hlds__hlds_out__hlds_out_module__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__Info_1, (MR_Integer) 3)));
#line 203 "hlds_out_module.m"
            hlds__hlds_out__hlds_out_module__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__Info_1, (MR_Integer) 4)));
#line 204 "hlds_out_module.m"
            {
#line 204 "hlds_out_module.m"
              hlds__hlds_out__hlds_out_module__succeeded = mercury__string__contains_char_2_p_0(hlds__hlds_out__hlds_out_module__DumpOptions_22, (MR_Char) 99);
            }
#line 219 "hlds_out_module.m"
            if (hlds__hlds_out__hlds_out_module__succeeded)
#line 205 "hlds_out_module.m"
              {
#line 205 "hlds_out_module.m"
                MR_String hlds__hlds_out__hlds_out_module__FileName_23;
#line 205 "hlds_out_module.m"
                MR_Integer hlds__hlds_out__hlds_out_module__LineNumber_24;

#line 205 "hlds_out_module.m"
                {
#line 205 "hlds_out_module.m"
                  mercury__term__context_file_2_p_0(hlds__hlds_out__hlds_out_module__Context_21, &hlds__hlds_out__hlds_out_module__FileName_23);
                }
#line 206 "hlds_out_module.m"
                {
#line 206 "hlds_out_module.m"
                  mercury__term__context_line_2_p_0(hlds__hlds_out__hlds_out_module__Context_21, &hlds__hlds_out__hlds_out_module__LineNumber_24);
                }
#line 207 "hlds_out_module.m"
                hlds__hlds_out__hlds_out_module__succeeded = (strcmp(hlds__hlds_out__hlds_out_module__FileName_23, (MR_String) "") == 0);
#line 207 "hlds_out_module.m"
                hlds__hlds_out__hlds_out_module__succeeded = !(hlds__hlds_out__hlds_out_module__succeeded);
#line 216 "hlds_out_module.m"
                if (hlds__hlds_out__hlds_out_module__succeeded)
#line 208 "hlds_out_module.m"
                  {
#line 208 "hlds_out_module.m"
                    MR_String hlds__hlds_out__hlds_out_module__V_42_42;

#line 208 "hlds_out_module.m"
                    {
#line 208 "hlds_out_module.m"
                      hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_module__Indent_2);
                    }
#line 209 "hlds_out_module.m"
                    {
#line 209 "hlds_out_module.m"
                      mercury__io__write_string_3_p_0((MR_String) "% context: file \140");
                    }
#line 210 "hlds_out_module.m"
                    {
#line 210 "hlds_out_module.m"
                      mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_module__FileName_23);
                    }
#line 211 "hlds_out_module.m"
                    {
#line 211 "hlds_out_module.m"
                      mercury__io__write_string_3_p_0((MR_String) "\', line ");
                    }
#line 212 "hlds_out_module.m"
                    {
#line 212 "hlds_out_module.m"
                      mercury__io__write_int_3_p_0(hlds__hlds_out__hlds_out_module__LineNumber_24);
                    }
#line 213 "hlds_out_module.m"
                    {
#line 213 "hlds_out_module.m"
                      mercury__io__write_string_3_p_0((MR_String) ", status ");
                    }
#line 214 "hlds_out_module.m"
                    {
#line 214 "hlds_out_module.m"
                      hlds__hlds_out__hlds_out_module__V_42_42 = hlds__hlds_out__hlds_out_pred__import_status_to_string_1_f_0(hlds__hlds_out__hlds_out_module__Status_20);
                    }
#line 214 "hlds_out_module.m"
                    {
#line 214 "hlds_out_module.m"
                      mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_module__V_42_42);
                    }
#line 215 "hlds_out_module.m"
                    {
#line 215 "hlds_out_module.m"
                      mercury__io__write_char_3_p_0((MR_Char) 10);
                    }
#line 208 "hlds_out_module.m"
                  }
#line 216 "hlds_out_module.m"
                else
#line 215 "hlds_out_module.m"
                  {
#line 215 "hlds_out_module.m"
                  }
#line 205 "hlds_out_module.m"
              }
#line 219 "hlds_out_module.m"
            else
#line 215 "hlds_out_module.m"
              {
#line 215 "hlds_out_module.m"
              }
#line 223 "hlds_out_module.m"
            {
#line 223 "hlds_out_module.m"
              hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_module__Indent_2);
            }
#line 226 "hlds_out_module.m"
            if (((((MR_tag((MR_Word) hlds__hlds_out__hlds_out_module__TypeBody_19)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_module__TypeBody_19, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 226 "hlds_out_module.m"
              {
#line 226 "hlds_out_module.m"
                MR_Word hlds__hlds_out__hlds_out_module__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_module__TypeBody_19, (MR_Integer) 1)));

#line 226 "hlds_out_module.m"
                hlds__hlds_out__hlds_out_module__succeeded = (hlds__hlds_out__hlds_out_module__V_47_47 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 226 "hlds_out_module.m"
              }
#line 226 "hlds_out_module.m"
            else
#line 226 "hlds_out_module.m"
              if (((((MR_tag((MR_Word) hlds__hlds_out__hlds_out_module__TypeBody_19)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_module__TypeBody_19, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 225 "hlds_out_module.m"
                hlds__hlds_out__hlds_out_module__succeeded = MR_TRUE;
#line 226 "hlds_out_module.m"
              else
#line 226 "hlds_out_module.m"
                hlds__hlds_out__hlds_out_module__succeeded = MR_FALSE;
#line 230 "hlds_out_module.m"
            if (hlds__hlds_out__hlds_out_module__succeeded)
#line 229 "hlds_out_module.m"
              {
#line 229 "hlds_out_module.m"
                {
#line 229 "hlds_out_module.m"
                  mercury__io__write_string_3_p_0((MR_String) ":- solver type ");
                }
#line 229 "hlds_out_module.m"
              }
#line 230 "hlds_out_module.m"
            else
#line 231 "hlds_out_module.m"
              {
#line 231 "hlds_out_module.m"
                {
#line 231 "hlds_out_module.m"
                  mercury__io__write_string_3_p_0((MR_String) ":- type ");
                }
#line 231 "hlds_out_module.m"
              }
#line 233 "hlds_out_module.m"
            {
#line 233 "hlds_out_module.m"
              parse_tree__prog_out__write_type_name_3_p_0(hlds__hlds_out__hlds_out_module__TypeCtor_13);
            }
#line 242 "hlds_out_module.m"
            if ((hlds__hlds_out__hlds_out_module__TypeParams_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 242 "hlds_out_module.m"
              {
#line 242 "hlds_out_module.m"
              }
#line 242 "hlds_out_module.m"
            else
#line 242 "hlds_out_module.m"
              {
#line 242 "hlds_out_module.m"
                MR_Word hlds__hlds_out__hlds_out_module__V_95_95 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_module__TypeParams_18, (MR_Integer) 1)));
#line 242 "hlds_out_module.m"
                MR_Word hlds__hlds_out__hlds_out_module__V_96_96 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_module__TypeParams_18, (MR_Integer) 0)));

#line 242 "hlds_out_module.m"
                if ((hlds__hlds_out__hlds_out_module__V_95_95 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 243 "hlds_out_module.m"
                  {
#line 244 "hlds_out_module.m"
                    {
#line 244 "hlds_out_module.m"
                      mercury__io__write_string_3_p_0((MR_String) "(");
                    }
#line 245 "hlds_out_module.m"
                    {
#line 245 "hlds_out_module.m"
                      parse_tree__mercury_to_mercury__mercury_output_var_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, hlds__hlds_out__hlds_out_module__TVarSet_17, (MR_Integer) 0, hlds__hlds_out__hlds_out_module__V_96_96);
                    }
#line 246 "hlds_out_module.m"
                    {
#line 246 "hlds_out_module.m"
                      mercury__io__write_string_3_p_0((MR_String) ")");
                    }
#line 243 "hlds_out_module.m"
                  }
#line 242 "hlds_out_module.m"
                else
#line 247 "hlds_out_module.m"
                  {
#line 247 "hlds_out_module.m"
                    MR_Word hlds__hlds_out__hlds_out_module__P_102;
#line 247 "hlds_out_module.m"
                    MR_Word hlds__hlds_out__hlds_out_module__Ps_103;

#line 249 "hlds_out_module.m"
                    {
#line 249 "hlds_out_module.m"
                      mercury__io__write_string_3_p_0((MR_String) "(");
                    }
#line 250 "hlds_out_module.m"
                    {
#line 250 "hlds_out_module.m"
                      parse_tree__mercury_to_mercury__mercury_output_var_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, hlds__hlds_out__hlds_out_module__TVarSet_17, (MR_Integer) 0, hlds__hlds_out__hlds_out_module__V_96_96);
                    }
#line 258 "hlds_out_module.m"
                    hlds__hlds_out__hlds_out_module__P_102 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_module__V_95_95, (MR_Integer) 0)));
#line 258 "hlds_out_module.m"
                    hlds__hlds_out__hlds_out_module__Ps_103 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_module__V_95_95, (MR_Integer) 1)));
#line 259 "hlds_out_module.m"
                    {
#line 259 "hlds_out_module.m"
                      mercury__io__write_string_3_p_0((MR_String) ", ");
                    }
#line 260 "hlds_out_module.m"
                    {
#line 260 "hlds_out_module.m"
                      parse_tree__mercury_to_mercury__mercury_output_var_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, hlds__hlds_out__hlds_out_module__TVarSet_17, (MR_Integer) 0, hlds__hlds_out__hlds_out_module__P_102);
                    }
#line 261 "hlds_out_module.m"
                    {
#line 261 "hlds_out_module.m"
                      hlds__hlds_out__hlds_out_module__write_type_params_loop_4_p_0(hlds__hlds_out__hlds_out_module__TVarSet_17, hlds__hlds_out__hlds_out_module__Ps_103);
                    }
#line 252 "hlds_out_module.m"
                    {
#line 252 "hlds_out_module.m"
                      mercury__io__write_string_3_p_0((MR_String) ")");
                    }
#line 247 "hlds_out_module.m"
                  }
#line 242 "hlds_out_module.m"
              }
#line 235 "hlds_out_module.m"
            hlds__hlds_out__hlds_out_module__V_54_54 = (hlds__hlds_out__hlds_out_module__Indent_2 + (MR_Integer) 1);
#line 235 "hlds_out_module.m"
            {
#line 235 "hlds_out_module.m"
              hlds__hlds_out__hlds_out_module__write_type_body_7_p_0(hlds__hlds_out__hlds_out_module__Info_1, hlds__hlds_out__hlds_out_module__TypeCtor_13, hlds__hlds_out__hlds_out_module__TypeBody_19, hlds__hlds_out__hlds_out_module__V_54_54, hlds__hlds_out__hlds_out_module__TVarSet_17);
            }
#line 237 "hlds_out_module.m"
            /* direct tailcall eliminated */
#line 237 "hlds_out_module.m"
            {
#line 237 "hlds_out_module.m"
              MR_Word hlds__hlds_out__hlds_out_module__HeadVar__3__tmp_copy_3 = hlds__hlds_out__hlds_out_module__Types_15;

#line 237 "hlds_out_module.m"
              hlds__hlds_out__hlds_out_module__HeadVar__3_3 = hlds__hlds_out__hlds_out_module__HeadVar__3__tmp_copy_3;
#line 237 "hlds_out_module.m"
            }
#line 237 "hlds_out_module.m"
            continue;
#line 194 "hlds_out_module.m"
          }
#line 193 "hlds_out_module.m"
      }
#line 193 "hlds_out_module.m"
      break;
#line 193 "hlds_out_module.m"
    }
#line 190 "hlds_out_module.m"
}

#line 180 "hlds_out_module.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_types_5_p_0(
#line 180 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__Info_6,
#line 180 "hlds_out_module.m"
  MR_Integer hlds__hlds_out__hlds_out_module__Indent_7,
#line 180 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__TypeTable_8)
#line 180 "hlds_out_module.m"
{
#line 183 "hlds_out_module.m"
  {
#line 183 "hlds_out_module.m"
    MR_bool hlds__hlds_out__hlds_out_module__succeeded;
#line 183 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__TypeAssocList_10;

#line 184 "hlds_out_module.m"
    {
#line 184 "hlds_out_module.m"
      hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_module__Indent_7);
    }
#line 185 "hlds_out_module.m"
    {
#line 185 "hlds_out_module.m"
      mercury__io__write_string_3_p_0((MR_String) "%-------- Types --------\n");
    }
#line 186 "hlds_out_module.m"
    {
#line 186 "hlds_out_module.m"
      hlds__hlds_data__get_all_type_ctor_defns_2_p_0(hlds__hlds_out__hlds_out_module__TypeTable_8, &hlds__hlds_out__hlds_out_module__TypeAssocList_10);
    }
#line 187 "hlds_out_module.m"
    {
#line 187 "hlds_out_module.m"
      hlds__hlds_out__hlds_out_module__write_type_table_entries_5_p_0(hlds__hlds_out__hlds_out_module__Info_6, hlds__hlds_out__hlds_out_module__Indent_7, hlds__hlds_out__hlds_out_module__TypeAssocList_10);
    }
#line 188 "hlds_out_module.m"
    {
#line 188 "hlds_out_module.m"
      mercury__io__nl_2_p_0();
#line 188 "hlds_out_module.m"
      return;
    }
#line 183 "hlds_out_module.m"
  }
#line 180 "hlds_out_module.m"
}

#line 152 "hlds_out_module.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_footer_4_p_0(
#line 152 "hlds_out_module.m"
  MR_Integer hlds__hlds_out__hlds_out_module__Indent_5,
#line 152 "hlds_out_module.m"
  MR_Word hlds__hlds_out__hlds_out_module__Module_6)
#line 152 "hlds_out_module.m"
{
#line 154 "hlds_out_module.m"
  {
#line 154 "hlds_out_module.m"
    MR_bool hlds__hlds_out__hlds_out_module__succeeded;
#line 154 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__Name_8;

#line 155 "hlds_out_module.m"
    {
#line 155 "hlds_out_module.m"
      hlds__hlds_module__module_info_get_name_2_p_0(hlds__hlds_out__hlds_out_module__Module_6, &hlds__hlds_out__hlds_out_module__Name_8);
    }
#line 156 "hlds_out_module.m"
    {
#line 156 "hlds_out_module.m"
      hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_module__Indent_5);
    }
#line 157 "hlds_out_module.m"
    {
#line 157 "hlds_out_module.m"
      mercury__io__write_string_3_p_0((MR_String) ":- end_module ");
    }
#line 158 "hlds_out_module.m"
    {
#line 158 "hlds_out_module.m"
      parse_tree__prog_out__write_sym_name_3_p_0(hlds__hlds_out__hlds_out_module__Name_8);
    }
#line 159 "hlds_out_module.m"
    {
#line 159 "hlds_out_module.m"
      mercury__io__write_string_3_p_0((MR_String) ".\n");
#line 159 "hlds_out_module.m"
      return;
    }
#line 154 "hlds_out_module.m"
  }
#line 152 "hlds_out_module.m"
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
#line 1060 "hlds_out_module.m"
  {
#line 1060 "hlds_out_module.m"
    MR_bool hlds__hlds_out__hlds_out_module__succeeded;

#line 1060 "hlds_out_module.m"
    {
#line 1060 "hlds_out_module.m"
      hlds__hlds_out__hlds_out_module__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_112_114_111_109_105_115_101_95_95_91_53_44_32_57_93_95_48_13_p_0(hlds__hlds_out__hlds_out_module__Info_14, hlds__hlds_out__hlds_out_module__PromiseType_15, hlds__hlds_out__hlds_out_module__Indent_16, hlds__hlds_out__hlds_out_module__ModuleInfo_17, hlds__hlds_out__hlds_out_module__VarSet_19, hlds__hlds_out__hlds_out_module__AppendVarNums_20, hlds__hlds_out__hlds_out_module__HeadVars_21, hlds__hlds_out__hlds_out_module__Clause_23, hlds__hlds_out__hlds_out_module__TypeQual_24);
#line 1060 "hlds_out_module.m"
      return;
    }
#line 1060 "hlds_out_module.m"
  }
#line 34 "hlds_out_module.m"
}

#line 172 "hlds_out_module.m"
static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_hlds_4_p_0_1(
#line 172 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__closure_arg,
#line 172 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_1,
#line 172 "hlds_out_module.m"
  MR_Box hlds__hlds_out__hlds_out_module__wrapper_arg_2,
#line 172 "hlds_out_module.m"
  MR_Box * hlds__hlds_out__hlds_out_module__wrapper_arg_3)
#line 172 "hlds_out_module.m"
{
#line 172 "hlds_out_module.m"
  {
#line 172 "hlds_out_module.m"
    MR_Box hlds__hlds_out__hlds_out_module__closure = hlds__hlds_out__hlds_out_module__closure_arg;

#line 172 "hlds_out_module.m"
    {
#line 172 "hlds_out_module.m"
      parse_tree__prog_out__write_sym_name_3_p_0(((MR_Word) hlds__hlds_out__hlds_out_module__wrapper_arg_1));
#line 172 "hlds_out_module.m"
      return;
    }
#line 172 "hlds_out_module.m"
  }
#line 172 "hlds_out_module.m"
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
#line 72 "hlds_out_module.m"
  {
#line 72 "hlds_out_module.m"
    MR_bool hlds__hlds_out__hlds_out_module__succeeded;
#line 72 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__Globals_8;
#line 72 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__DumpPredIdStrs_9;
#line 72 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__DumpPredNames_10;
#line 72 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__Info_11;
#line 72 "hlds_out_module.m"
    MR_String hlds__hlds_out__hlds_out_module__DumpOptions_13;
#line 72 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__Name_59;
#line 81 "hlds_out_module.m"
    MR_String hlds__hlds_out__hlds_out_module__V_50_50;
#line 81 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__V_51_51;
#line 81 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__V_52_52;
#line 81 "hlds_out_module.m"
    MR_Word hlds__hlds_out__hlds_out_module__V_53_53;

#line 73 "hlds_out_module.m"
    {
#line 73 "hlds_out_module.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(hlds__hlds_out__hlds_out_module__ModuleInfo_6, &hlds__hlds_out__hlds_out_module__Globals_8);
    }
#line 74 "hlds_out_module.m"
    {
#line 74 "hlds_out_module.m"
      libs__globals__lookup_accumulating_option_3_p_0(hlds__hlds_out__hlds_out_module__Globals_8, (MR_Integer) 141, &hlds__hlds_out__hlds_out_module__DumpPredIdStrs_9);
    }
#line 76 "hlds_out_module.m"
    {
#line 76 "hlds_out_module.m"
      libs__globals__lookup_accumulating_option_3_p_0(hlds__hlds_out__hlds_out_module__Globals_8, (MR_Integer) 142, &hlds__hlds_out__hlds_out_module__DumpPredNames_10);
    }
#line 144 "hlds_out_module.m"
    {
#line 144 "hlds_out_module.m"
      hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_module__Indent_5);
    }
#line 145 "hlds_out_module.m"
    {
#line 145 "hlds_out_module.m"
      mercury__io__write_string_3_p_0((MR_String) "% vim: ts=2 sw=2\n\n");
    }
#line 146 "hlds_out_module.m"
    {
#line 146 "hlds_out_module.m"
      hlds__hlds_module__module_info_get_name_2_p_0(hlds__hlds_out__hlds_out_module__ModuleInfo_6, &hlds__hlds_out__hlds_out_module__Name_59);
    }
#line 147 "hlds_out_module.m"
    {
#line 147 "hlds_out_module.m"
      hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_module__Indent_5);
    }
#line 148 "hlds_out_module.m"
    {
#line 148 "hlds_out_module.m"
      mercury__io__write_string_3_p_0((MR_String) ":- module ");
    }
#line 149 "hlds_out_module.m"
    {
#line 149 "hlds_out_module.m"
      parse_tree__prog_out__write_sym_name_3_p_0(hlds__hlds_out__hlds_out_module__Name_59);
    }
#line 150 "hlds_out_module.m"
    {
#line 150 "hlds_out_module.m"
      mercury__io__write_string_3_p_0((MR_String) ".\n\n");
    }
#line 79 "hlds_out_module.m"
    {
#line 79 "hlds_out_module.m"
      hlds__hlds_out__hlds_out_module__Info_11 = hlds__hlds_out__hlds_out_util__init_hlds_out_info_1_f_0(hlds__hlds_out__hlds_out_module__Globals_8);
    }
#line 81 "hlds_out_module.m"
    hlds__hlds_out__hlds_out_module__DumpOptions_13 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__Info_11, (MR_Integer) 0)));
#line 81 "hlds_out_module.m"
    hlds__hlds_out__hlds_out_module__V_50_50 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__Info_11, (MR_Integer) 1)));
#line 81 "hlds_out_module.m"
    hlds__hlds_out__hlds_out_module__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__Info_11, (MR_Integer) 2)));
#line 81 "hlds_out_module.m"
    hlds__hlds_out__hlds_out_module__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__Info_11, (MR_Integer) 3)));
#line 81 "hlds_out_module.m"
    hlds__hlds_out__hlds_out_module__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_module__Info_11, (MR_Integer) 4)));
#line 86 "hlds_out_module.m"
    {
#line 86 "hlds_out_module.m"
      MR_String hlds__hlds_out__hlds_out_module__V_14_14;
#line 86 "hlds_out_module.m"
      MR_Word hlds__hlds_out__hlds_out_module__V_15_15;

#line 86 "hlds_out_module.m"
      hlds__hlds_out__hlds_out_module__succeeded = ((MR_tag((MR_Word) hlds__hlds_out__hlds_out_module__DumpPredIdStrs_9)) == (MR_mktag((MR_Integer) 1)));
#line 86 "hlds_out_module.m"
      if (hlds__hlds_out__hlds_out_module__succeeded)
#line 86 "hlds_out_module.m"
        {
#line 86 "hlds_out_module.m"
          hlds__hlds_out__hlds_out_module__V_14_14 = ((MR_String) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_module__DumpPredIdStrs_9, (MR_Integer) 0)));
#line 86 "hlds_out_module.m"
          hlds__hlds_out__hlds_out_module__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_module__DumpPredIdStrs_9, (MR_Integer) 1)));
#line 86 "hlds_out_module.m"
        }
#line 86 "hlds_out_module.m"
    }
#line 87 "hlds_out_module.m"
    if (!(hlds__hlds_out__hlds_out_module__succeeded))
#line 87 "hlds_out_module.m"
      {
#line 87 "hlds_out_module.m"
        MR_String hlds__hlds_out__hlds_out_module__V_16_16;
#line 87 "hlds_out_module.m"
        MR_Word hlds__hlds_out__hlds_out_module__V_17_17;

#line 87 "hlds_out_module.m"
        hlds__hlds_out__hlds_out_module__succeeded = ((MR_tag((MR_Word) hlds__hlds_out__hlds_out_module__DumpPredNames_10)) == (MR_mktag((MR_Integer) 1)));
#line 87 "hlds_out_module.m"
        if (hlds__hlds_out__hlds_out_module__succeeded)
#line 87 "hlds_out_module.m"
          {
#line 87 "hlds_out_module.m"
            hlds__hlds_out__hlds_out_module__V_16_16 = ((MR_String) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_module__DumpPredNames_10, (MR_Integer) 0)));
#line 87 "hlds_out_module.m"
            hlds__hlds_out__hlds_out_module__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_module__DumpPredNames_10, (MR_Integer) 1)));
#line 87 "hlds_out_module.m"
          }
#line 87 "hlds_out_module.m"
      }
#line 91 "hlds_out_module.m"
    if (hlds__hlds_out__hlds_out_module__succeeded)
#line 87 "hlds_out_module.m"
      {
#line 87 "hlds_out_module.m"
      }
#line 91 "hlds_out_module.m"
    else
#line 97 "hlds_out_module.m"
      {
#line 92 "hlds_out_module.m"
        {
#line 92 "hlds_out_module.m"
          hlds__hlds_out__hlds_out_module__succeeded = mercury__string__contains_char_2_p_0(hlds__hlds_out__hlds_out_module__DumpOptions_13, (MR_Char) 73);
        }
#line 95 "hlds_out_module.m"
        if (hlds__hlds_out__hlds_out_module__succeeded)
#line 93 "hlds_out_module.m"
          {
#line 93 "hlds_out_module.m"
            MR_Word hlds__hlds_out__hlds_out_module__TypeCtorInfo_19_83;
#line 93 "hlds_out_module.m"
            MR_Word hlds__hlds_out__hlds_out_module__Imports_18;
#line 93 "hlds_out_module.m"
            MR_Word hlds__hlds_out__hlds_out_module__V_77_77;

#line 93 "hlds_out_module.m"
            {
#line 93 "hlds_out_module.m"
              hlds__hlds_module__module_info_get_imported_module_specifiers_2_p_0(hlds__hlds_out__hlds_out_module__ModuleInfo_6, &hlds__hlds_out__hlds_out_module__Imports_18);
            }
#line 170 "hlds_out_module.m"
            {
#line 170 "hlds_out_module.m"
              hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_module__Indent_5);
            }
#line 171 "hlds_out_module.m"
            {
#line 171 "hlds_out_module.m"
              mercury__io__write_string_3_p_0((MR_String) ":- import_module ");
            }
#line 7519 "hlds.hlds_out.hlds_out_module.c"
            hlds__hlds_out__hlds_out_module__TypeCtorInfo_19_83 = (MR_Word) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0;
#line 172 "hlds_out_module.m"
            {
#line 172 "hlds_out_module.m"
              hlds__hlds_out__hlds_out_module__V_77_77 = mercury__set__to_sorted_list_1_f_0(hlds__hlds_out__hlds_out_module__TypeCtorInfo_19_83, hlds__hlds_out__hlds_out_module__Imports_18);
            }
#line 172 "hlds_out_module.m"
            {
#line 172 "hlds_out_module.m"
              mercury__io__write_list_5_p_0(hlds__hlds_out__hlds_out_module__TypeCtorInfo_19_83, hlds__hlds_out__hlds_out_module__V_77_77, (MR_String) ", ", (MR_Word) &hlds__hlds_out__hlds_out_module_scalar_common_2[5]);
            }
#line 173 "hlds_out_module.m"
            {
#line 173 "hlds_out_module.m"
              mercury__io__write_string_3_p_0((MR_String) ".\n\n");
            }
#line 93 "hlds_out_module.m"
          }
#line 95 "hlds_out_module.m"
        else
#line 94 "hlds_out_module.m"
          {
#line 94 "hlds_out_module.m"
          }
#line 98 "hlds_out_module.m"
        {
#line 98 "hlds_out_module.m"
          hlds__hlds_out__hlds_out_module__succeeded = mercury__string__contains_char_2_p_0(hlds__hlds_out__hlds_out_module__DumpOptions_13, (MR_Char) 84);
        }
#line 105 "hlds_out_module.m"
        if (hlds__hlds_out__hlds_out_module__succeeded)
#line 99 "hlds_out_module.m"
          {
#line 99 "hlds_out_module.m"
            MR_Word hlds__hlds_out__hlds_out_module__TypeTable_19;
#line 99 "hlds_out_module.m"
            MR_Word hlds__hlds_out__hlds_out_module__InstanceTable_20;
#line 99 "hlds_out_module.m"
            MR_Word hlds__hlds_out__hlds_out_module__ClassTable_21;

#line 99 "hlds_out_module.m"
            {
#line 99 "hlds_out_module.m"
              hlds__hlds_module__module_info_get_type_table_2_p_0(hlds__hlds_out__hlds_out_module__ModuleInfo_6, &hlds__hlds_out__hlds_out_module__TypeTable_19);
            }
#line 100 "hlds_out_module.m"
            {
#line 100 "hlds_out_module.m"
              hlds__hlds_module__module_info_get_instance_table_2_p_0(hlds__hlds_out__hlds_out_module__ModuleInfo_6, &hlds__hlds_out__hlds_out_module__InstanceTable_20);
            }
#line 101 "hlds_out_module.m"
            {
#line 101 "hlds_out_module.m"
              hlds__hlds_module__module_info_get_class_table_2_p_0(hlds__hlds_out__hlds_out_module__ModuleInfo_6, &hlds__hlds_out__hlds_out_module__ClassTable_21);
            }
#line 102 "hlds_out_module.m"
            {
#line 102 "hlds_out_module.m"
              hlds__hlds_out__hlds_out_module__write_types_5_p_0(hlds__hlds_out__hlds_out_module__Info_11, hlds__hlds_out__hlds_out_module__Indent_5, hlds__hlds_out__hlds_out_module__TypeTable_19);
            }
#line 103 "hlds_out_module.m"
            {
#line 103 "hlds_out_module.m"
              hlds__hlds_out__hlds_out_module__write_classes_5_p_0(hlds__hlds_out__hlds_out_module__Info_11, hlds__hlds_out__hlds_out_module__Indent_5, hlds__hlds_out__hlds_out_module__ClassTable_21);
            }
#line 104 "hlds_out_module.m"
            {
#line 104 "hlds_out_module.m"
              hlds__hlds_out__hlds_out_module__write_instances_5_p_0(hlds__hlds_out__hlds_out_module__Info_11, hlds__hlds_out__hlds_out_module__Indent_5, hlds__hlds_out__hlds_out_module__InstanceTable_20);
            }
#line 99 "hlds_out_module.m"
          }
#line 105 "hlds_out_module.m"
        else
#line 104 "hlds_out_module.m"
          {
#line 104 "hlds_out_module.m"
          }
#line 108 "hlds_out_module.m"
        {
#line 108 "hlds_out_module.m"
          hlds__hlds_out__hlds_out_module__succeeded = mercury__string__contains_char_2_p_0(hlds__hlds_out__hlds_out_module__DumpOptions_13, (MR_Char) 77);
        }
#line 115 "hlds_out_module.m"
        if (hlds__hlds_out__hlds_out_module__succeeded)
#line 109 "hlds_out_module.m"
          {
#line 109 "hlds_out_module.m"
            MR_Word hlds__hlds_out__hlds_out_module__InstTable_22;
#line 109 "hlds_out_module.m"
            MR_Integer hlds__hlds_out__hlds_out_module__InstLimit_24;
#line 110 "hlds_out_module.m"
            MR_Word hlds__hlds_out__hlds_out_module__ModeTable_23;

#line 109 "hlds_out_module.m"
            {
#line 109 "hlds_out_module.m"
              hlds__hlds_module__module_info_get_inst_table_2_p_0(hlds__hlds_out__hlds_out_module__ModuleInfo_6, &hlds__hlds_out__hlds_out_module__InstTable_22);
            }
#line 110 "hlds_out_module.m"
            {
#line 110 "hlds_out_module.m"
              hlds__hlds_module__module_info_get_mode_table_2_p_0(hlds__hlds_out__hlds_out_module__ModuleInfo_6, &hlds__hlds_out__hlds_out_module__ModeTable_23);
            }
#line 111 "hlds_out_module.m"
            {
#line 111 "hlds_out_module.m"
              libs__globals__lookup_int_option_3_p_0(hlds__hlds_out__hlds_out_module__Globals_8, (MR_Integer) 145, &hlds__hlds_out__hlds_out_module__InstLimit_24);
            }
#line 113 "hlds_out_module.m"
            {
#line 113 "hlds_out_module.m"
              hlds__hlds_out__hlds_out_module__write_inst_table_6_p_0((MR_Integer) 1, hlds__hlds_out__hlds_out_module__Indent_5, hlds__hlds_out__hlds_out_module__InstLimit_24, hlds__hlds_out__hlds_out_module__InstTable_22);
            }
#line 114 "hlds_out_module.m"
            {
#line 114 "hlds_out_module.m"
              hlds__hlds_out__hlds_out_module__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_109_111_100_101_95_116_97_98_108_101_95_95_91_50_93_95_48_4_p_0(hlds__hlds_out__hlds_out_module__Indent_5);
            }
#line 109 "hlds_out_module.m"
          }
#line 115 "hlds_out_module.m"
        else
#line 114 "hlds_out_module.m"
          {
#line 114 "hlds_out_module.m"
          }
#line 118 "hlds_out_module.m"
        {
#line 118 "hlds_out_module.m"
          hlds__hlds_out__hlds_out_module__succeeded = mercury__string__contains_char_2_p_0(hlds__hlds_out__hlds_out_module__DumpOptions_13, (MR_Char) 90);
        }
#line 121 "hlds_out_module.m"
        if (hlds__hlds_out__hlds_out_module__succeeded)
#line 119 "hlds_out_module.m"
          {
#line 119 "hlds_out_module.m"
            MR_Word hlds__hlds_out__hlds_out_module__TableStructMap_25;

#line 119 "hlds_out_module.m"
            {
#line 119 "hlds_out_module.m"
              hlds__hlds_module__module_info_get_table_struct_map_2_p_0(hlds__hlds_out__hlds_out_module__ModuleInfo_6, &hlds__hlds_out__hlds_out_module__TableStructMap_25);
            }
#line 120 "hlds_out_module.m"
            {
#line 120 "hlds_out_module.m"
              hlds__hlds_out__hlds_out_module__write_table_structs_4_p_0(hlds__hlds_out__hlds_out_module__ModuleInfo_6, hlds__hlds_out__hlds_out_module__TableStructMap_25);
            }
#line 119 "hlds_out_module.m"
          }
#line 121 "hlds_out_module.m"
        else
#line 120 "hlds_out_module.m"
          {
#line 120 "hlds_out_module.m"
          }
#line 97 "hlds_out_module.m"
      }
#line 125 "hlds_out_module.m"
    {
#line 125 "hlds_out_module.m"
      hlds__hlds_out__hlds_out_module__succeeded = mercury__string__contains_char_2_p_0(hlds__hlds_out__hlds_out_module__DumpOptions_13, (MR_Char) 88);
    }
#line 128 "hlds_out_module.m"
    if (hlds__hlds_out__hlds_out_module__succeeded)
#line 126 "hlds_out_module.m"
      {
#line 126 "hlds_out_module.m"
        MR_Word hlds__hlds_out__hlds_out_module__ConstStructDb_26;

#line 126 "hlds_out_module.m"
        {
#line 126 "hlds_out_module.m"
          hlds__hlds_module__module_info_get_const_struct_db_2_p_0(hlds__hlds_out__hlds_out_module__ModuleInfo_6, &hlds__hlds_out__hlds_out_module__ConstStructDb_26);
        }
#line 127 "hlds_out_module.m"
        {
#line 127 "hlds_out_module.m"
          hlds__hlds_out__hlds_out_module__write_const_struct_db_3_p_0(hlds__hlds_out__hlds_out_module__ConstStructDb_26);
        }
#line 126 "hlds_out_module.m"
      }
#line 128 "hlds_out_module.m"
    else
#line 127 "hlds_out_module.m"
      {
#line 127 "hlds_out_module.m"
      }
#line 131 "hlds_out_module.m"
    {
#line 131 "hlds_out_module.m"
      hlds__hlds_out__hlds_out_module__succeeded = mercury__string__contains_char_2_p_0(hlds__hlds_out__hlds_out_module__DumpOptions_13, (MR_Char) 120);
    }
#line 134 "hlds_out_module.m"
    if (hlds__hlds_out__hlds_out_module__succeeded)
#line 132 "hlds_out_module.m"
      {
#line 132 "hlds_out_module.m"
        MR_Word hlds__hlds_out__hlds_out_module__PredTable_27;

#line 132 "hlds_out_module.m"
        {
#line 132 "hlds_out_module.m"
          hlds__hlds_module__module_info_get_preds_2_p_0(hlds__hlds_out__hlds_out_module__ModuleInfo_6, &hlds__hlds_out__hlds_out_module__PredTable_27);
        }
#line 133 "hlds_out_module.m"
        {
#line 133 "hlds_out_module.m"
          hlds__hlds_out__hlds_out_module__write_preds_7_p_0(hlds__hlds_out__hlds_out_module__Info_11, (MR_Integer) 1, hlds__hlds_out__hlds_out_module__Indent_5, hlds__hlds_out__hlds_out_module__ModuleInfo_6, hlds__hlds_out__hlds_out_module__PredTable_27);
        }
#line 132 "hlds_out_module.m"
      }
#line 134 "hlds_out_module.m"
    else
#line 133 "hlds_out_module.m"
      {
#line 133 "hlds_out_module.m"
      }
#line 137 "hlds_out_module.m"
    {
#line 137 "hlds_out_module.m"
      hlds__hlds_out__hlds_out_module__write_footer_4_p_0(hlds__hlds_out__hlds_out_module__Indent_5, hlds__hlds_out__hlds_out_module__ModuleInfo_6);
#line 137 "hlds_out_module.m"
      return;
    }
#line 72 "hlds_out_module.m"
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
