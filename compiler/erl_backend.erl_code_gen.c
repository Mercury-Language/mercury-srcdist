/*
** Automatically generated from `erl_code_gen.m'
** by the Mercury compiler,
** version rotd-2015-09-28
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


/* :- module erl_backend.erl_code_gen. */
/* :- implementation. */

/*
INIT mercury__erl_backend__erl_code_gen__init
ENDINIT
*/

#include "erl_backend.erl_code_gen.mih"


#include "analysis.mih"
#include "backend_libs.mih"
#include "check_hlds.mih"
#include "erl_backend.mih"
#include "hlds.mih"
#include "libs.mih"
#include "mdbcomp.mih"
#include "mode_robdd.mih"
#include "parse_tree.mih"
#include "recompilation.mih"
#include "backend_libs.foreign.mih"
#include "backend_libs.rtti.mih"
#include "check_hlds.delay_info.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.type_util.mih"
#include "check_hlds.unify_proc.mih"
#include "erl_backend.elds.mih"
#include "erl_backend.erl_call_gen.mih"
#include "erl_backend.erl_code_util.mih"
#include "erl_backend.erl_unify_gen.mih"
#include "hlds.code_model.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_util.mih"
#include "hlds.hlds_args.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.inst_graph.mih"
#include "hlds.instmap.mih"
#include "hlds.passes_aux.mih"
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "hlds.vartypes.mih"
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
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_kind.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"



#line 746 "erl_code_gen.m"
struct erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_95_49_48_95_112_95_48_95_101_110_118_0_s {
#line 746 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__CasesList_13;
#line 751 "erl_code_gen.m"
  MR_bool erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__succeeded;
#line 751 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__TypeCtorInfo_85_85;
#line 814 "erl_code_gen.m"
  jmp_buf erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__commit_0;
#line 814 "erl_code_gen.m"
  MR_String erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__String_32;
#line 814 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__MainConsId_33;
#line 814 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__OtherConsIds_34;
#line 814 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__V_57_57;
#line 816 "erl_code_gen.m"
  MR_Box erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__conv1_V_57_57;
#line 820 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__V_58_58;
#line 820 "erl_code_gen.m"
  MR_Box erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__conv2_V_58_58;
#line 746 "erl_code_gen.m"
};


#line 178 "erl_backend.erl_code_gen.c"
static const MR_FA_PseudoTypeInfo_Struct1 erl_backend__erl_code_gen__list__pti_list_1__plain_erl_backend__elds__type_ctor_info_elds_defn_0;

#line 181 "erl_backend.erl_code_gen.c"
static const MR_FA_PseudoTypeInfo_Struct1 erl_backend__erl_code_gen__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_cons_id_0;

#line 184 "erl_backend.erl_code_gen.c"
static const MR_FA_TypeInfo_Struct1 erl_backend__erl_code_gen__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 187 "erl_backend.erl_code_gen.c"
static const MR_FA_PseudoTypeInfo_Struct1 erl_backend__erl_code_gen__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 190 "erl_backend.erl_code_gen.c"
static const MR_FA_PseudoTypeInfo_Struct1 erl_backend__erl_code_gen__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 193 "erl_backend.erl_code_gen.c"
static const MR_FA_PseudoTypeInfo_Struct1 erl_backend__erl_code_gen__maybe__pti_maybe_1__plain_erl_backend__elds__type_ctor_info_elds_expr_0;

#line 1423 "erl_code_gen.m"
static void MR_CALL 
erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_100_105_115_106_117_110_99_116_95_95_91_52_93_95_48_8_p_0(
#line 1423 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__HeadVar__1_1,
#line 1423 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__CodeModel_2,
#line 1423 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__HeadVar__3_3,
#line 1423 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__HeadVar__5_5,
#line 1423 "erl_code_gen.m"
  MR_Word * erl_backend__erl_code_gen__Statement_6,
#line 1423 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__STATE_VARIABLE_Info_0_7,
#line 1423 "erl_code_gen.m"
  MR_Word * erl_backend__erl_code_gen__STATE_VARIABLE_Info_8);

#line 955 "erl_code_gen.m"
static void MR_CALL 
erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_100_105_115_106_95_95_91_52_93_95_48_8_p_0_1(
#line 955 "erl_code_gen.m"
  MR_Box erl_backend__erl_code_gen__closure_arg,
#line 955 "erl_code_gen.m"
  MR_Box erl_backend__erl_code_gen__wrapper_arg_1,
#line 955 "erl_code_gen.m"
  MR_Box * erl_backend__erl_code_gen__wrapper_arg_2);

#line 1382 "erl_code_gen.m"
static void MR_CALL 
erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_100_105_115_106_95_95_91_52_93_95_48_8_p_0(
#line 1382 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__HeadVar__1_1,
#line 1382 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__CodeModel_2,
#line 1382 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__HeadVar__3_3,
#line 1382 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__HeadVar__5_5,
#line 1382 "erl_code_gen.m"
  MR_Word * erl_backend__erl_code_gen__Statement_6,
#line 1382 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__STATE_VARIABLE_Info_0_7,
#line 1382 "erl_code_gen.m"
  MR_Word * erl_backend__erl_code_gen__STATE_VARIABLE_Info_8);

#line 1269 "erl_code_gen.m"
static void MR_CALL 
erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_99_111_110_106_95_50_95_95_91_52_93_95_48_8_p_0(
#line 1269 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__HeadVar__1_1,
#line 1269 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__CodeModel_2,
#line 1269 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__HeadVar__3_3,
#line 1269 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__MaybeSuccessExpr_5,
#line 1269 "erl_code_gen.m"
  MR_Word * erl_backend__erl_code_gen__Statement_6,
#line 1269 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__STATE_VARIABLE_Info_0_7,
#line 1269 "erl_code_gen.m"
  MR_Word * erl_backend__erl_code_gen__STATE_VARIABLE_Info_8);

#line 1246 "erl_code_gen.m"
static void MR_CALL 
erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_99_111_110_106_95_95_91_53_93_95_48_9_p_0(
#line 1246 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__Goals_10,
#line 1246 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__CodeModel_11,
#line 1246 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__Detism_12,
#line 1246 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__InstMap_13,
#line 1246 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__MaybeSuccessExpr_15,
#line 1246 "erl_code_gen.m"
  MR_Word * erl_backend__erl_code_gen__Statement_16,
#line 1246 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__STATE_VARIABLE_Info_0_21,
#line 1246 "erl_code_gen.m"
  MR_Word * erl_backend__erl_code_gen__STATE_VARIABLE_Info_22);

#line 1179 "erl_code_gen.m"
static void MR_CALL 
erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_110_101_103_97_116_105_111_110_95_95_91_52_93_95_48_8_p_0(
#line 1179 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__Cond_9,
#line 1179 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__CodeModel_10,
#line 1179 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__InstMap_11,
#line 1179 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__MaybeSuccessExpr_13,
#line 1179 "erl_code_gen.m"
  MR_Word * erl_backend__erl_code_gen__Statement_14,
#line 1179 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__STATE_VARIABLE_Info_0_24,
#line 1179 "erl_code_gen.m"
  MR_Word * erl_backend__erl_code_gen__STATE_VARIABLE_Info_25);

#line 1024 "erl_code_gen.m"
static void MR_CALL 
erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_105_116_101_95_95_91_54_93_95_48_10_p_0(
#line 1024 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__CodeModel_11,
#line 1024 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__InstMap0_12,
#line 1024 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__Cond_13,
#line 1024 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__Then_14,
#line 1024 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__Else_15,
#line 1024 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__MaybeSuccessExpr0_17,
#line 1024 "erl_code_gen.m"
  MR_Word * erl_backend__erl_code_gen__Statement_18,
#line 1024 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__STATE_VARIABLE_Info_0_57,
#line 1024 "erl_code_gen.m"
  MR_Word * erl_backend__erl_code_gen__STATE_VARIABLE_Info_58);

#line 839 "erl_code_gen.m"
static void MR_CALL 
erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_10_p_0_10(
#line 839 "erl_code_gen.m"
  MR_Box erl_backend__erl_code_gen__closure_arg,
#line 839 "erl_code_gen.m"
  MR_Box erl_backend__erl_code_gen__wrapper_arg_1,
#line 839 "erl_code_gen.m"
  MR_Box * erl_backend__erl_code_gen__wrapper_arg_2,
#line 839 "erl_code_gen.m"
  MR_Box erl_backend__erl_code_gen__wrapper_arg_3,
#line 839 "erl_code_gen.m"
  MR_Box * erl_backend__erl_code_gen__wrapper_arg_4);

#line 834 "erl_code_gen.m"
static void MR_CALL 
erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_10_p_0_9(
#line 834 "erl_code_gen.m"
  MR_Box erl_backend__erl_code_gen__closure_arg,
#line 834 "erl_code_gen.m"
  MR_Box erl_backend__erl_code_gen__wrapper_arg_1,
#line 834 "erl_code_gen.m"
  MR_Box * erl_backend__erl_code_gen__wrapper_arg_2,
#line 834 "erl_code_gen.m"
  MR_Box erl_backend__erl_code_gen__wrapper_arg_3,
#line 834 "erl_code_gen.m"
  MR_Box * erl_backend__erl_code_gen__wrapper_arg_4);

#line 781 "erl_code_gen.m"
static MR_Box MR_CALL 
erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_10_p_0_1(
#line 781 "erl_code_gen.m"
  MR_Box erl_backend__erl_code_gen__closure_arg,
#line 781 "erl_code_gen.m"
  MR_Box erl_backend__erl_code_gen__wrapper_arg_1);

#line 814 "erl_code_gen.m"
static void MR_CALL 
erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_10_p_0_2(
#line 814 "erl_code_gen.m"
  void * erl_backend__erl_code_gen__env_ptr_arg);

#line 816 "erl_code_gen.m"
static void MR_CALL 
erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_10_p_0_4(
#line 816 "erl_code_gen.m"
  void * erl_backend__erl_code_gen__env_ptr_arg);

#line 814 "erl_code_gen.m"
static void MR_CALL 
erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_10_p_0_5(
#line 814 "erl_code_gen.m"
  void * erl_backend__erl_code_gen__env_ptr_arg);

#line 820 "erl_code_gen.m"
static void MR_CALL 
erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_10_p_0_7(
#line 820 "erl_code_gen.m"
  void * erl_backend__erl_code_gen__env_ptr_arg);

#line 820 "erl_code_gen.m"
static void MR_CALL 
erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_10_p_0_6(
#line 820 "erl_code_gen.m"
  void * erl_backend__erl_code_gen__env_ptr_arg);

#line 814 "erl_code_gen.m"
static void MR_CALL 
erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_10_p_0_3(
#line 814 "erl_code_gen.m"
  void * erl_backend__erl_code_gen__env_ptr_arg);

#line 814 "erl_code_gen.m"
static void MR_CALL 
erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_10_p_0_8(
#line 814 "erl_code_gen.m"
  void * erl_backend__erl_code_gen__env_ptr_arg);

#line 746 "erl_code_gen.m"
static void MR_CALL 
erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_10_p_0(
#line 746 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__Var_11,
#line 746 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__CanFail_12,
#line 746 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__CasesList_13,
#line 746 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__CodeModel_14,
#line 746 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__InstMap0_15,
#line 746 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__MaybeSuccessExpr0_17,
#line 746 "erl_code_gen.m"
  MR_Word * erl_backend__erl_code_gen__Statement_18,
#line 746 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__STATE_VARIABLE_Info_0_46,
#line 746 "erl_code_gen.m"
  MR_Word * erl_backend__erl_code_gen__STATE_VARIABLE_Info_47);

#line 585 "erl_code_gen.m"
static void MR_CALL 
erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_99_111_109_109_105_116_95_112_105_101_99_101_115_95_95_91_51_93_95_48_8_p_0(
#line 585 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__Goal_9,
#line 585 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__InstMap_10,
#line 585 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__DoRenaming_12,
#line 585 "erl_code_gen.m"
  MR_Word * erl_backend__erl_code_gen__GoalStatement_13,
#line 585 "erl_code_gen.m"
  MR_Word * erl_backend__erl_code_gen__PackedNonLocals_14,
#line 585 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__STATE_VARIABLE_Info_0_22,
#line 585 "erl_code_gen.m"
  MR_Word * erl_backend__erl_code_gen__STATE_VARIABLE_Info_23);

#line 497 "erl_code_gen.m"
static void MR_CALL 
erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_99_111_109_109_105_116_95_95_91_53_93_95_48_9_p_0(
#line 497 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__Goal_10,
#line 497 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__CodeModel_11,
#line 497 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__ScopeDetism_12,
#line 497 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__InstMap_13,
#line 497 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__MaybeSuccessExpr_15,
#line 497 "erl_code_gen.m"
  MR_Word * erl_backend__erl_code_gen__Statement_16,
#line 497 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__STATE_VARIABLE_Info_0_29,
#line 497 "erl_code_gen.m"
  MR_Word * erl_backend__erl_code_gen__STATE_VARIABLE_Info_30);

#line 926 "erl_code_gen.m"
static MR_bool MR_CALL 
erl_backend__erl_code_gen__IntroducedFrom__pred__erl_gen_case_on_atom__926__1_2_p_0(
#line 926 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__OtherConsIds_17,
#line 926 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__HeadVar__2_30);

#line 868 "erl_code_gen.m"
static MR_bool MR_CALL 
erl_backend__erl_code_gen__IntroducedFrom__pred__erl_gen_case__868__1_2_p_0(
#line 868 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__OtherConsIds_19,
#line 868 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__HeadVar__2_35);

#line 781 "erl_code_gen.m"
static MR_Word MR_CALL 
erl_backend__erl_code_gen__IntroducedFrom__func__erl_gen_switch__781__1_1_f_0(
#line 781 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__HeadVar__1_49);

#line 686 "erl_code_gen.m"
static MR_bool MR_CALL 
erl_backend__erl_code_gen__IntroducedFrom__pred__erl_gen_goal_expr__686__1_2_p_0(
#line 686 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__CodeModel_11,
#line 686 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__CallCodeModel_57);

#line 1598 "erl_code_gen.m"
static MR_bool MR_CALL 
erl_backend__erl_code_gen__search_elds_defn_3_p_0(
#line 1598 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__HeadVar__1_1,
#line 1598 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__PredProcId_6,
#line 1598 "erl_code_gen.m"
  MR_Word * erl_backend__erl_code_gen__Defn_7);

#line 1577 "erl_code_gen.m"
static void MR_CALL 
erl_backend__erl_code_gen__erl_gen_foreign_export_defn_3_p_0(
#line 1577 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__ProcDefns_4,
#line 1577 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__PragmaExport_5,
#line 1577 "erl_code_gen.m"
  MR_Word * erl_backend__erl_code_gen__ForeignExportDefn_6);

#line 1008 "erl_code_gen.m"
static void MR_CALL 
erl_backend__erl_code_gen__ground_var_in_instmap_3_p_0(
#line 1008 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__Var_4,
#line 1008 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__STATE_VARIABLE_InstMap_0_6,
#line 1008 "erl_code_gen.m"
  MR_Word * erl_backend__erl_code_gen__STATE_VARIABLE_InstMap_7);

#line 1003 "erl_code_gen.m"
static MR_bool MR_CALL 
erl_backend__erl_code_gen__non_dummy_var_3_f_0(
#line 1003 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__ModuleInfo_5,
#line 1003 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__Var_6,
#line 1003 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__Type_7,
#line 1003 "erl_code_gen.m"
  MR_Word * erl_backend__erl_code_gen__Var_4);

#line 982 "erl_code_gen.m"
static MR_bool MR_CALL 
erl_backend__erl_code_gen__maybe_create_closure_for_success_expr_8_p_0_1(
#line 982 "erl_code_gen.m"
  MR_Box erl_backend__erl_code_gen__closure_arg,
#line 982 "erl_code_gen.m"
  MR_Box erl_backend__erl_code_gen__wrapper_arg_1,
#line 982 "erl_code_gen.m"
  MR_Box erl_backend__erl_code_gen__wrapper_arg_2,
#line 982 "erl_code_gen.m"
  MR_Box * erl_backend__erl_code_gen__wrapper_arg_3);

#line 964 "erl_code_gen.m"
static void MR_CALL 
erl_backend__erl_code_gen__maybe_create_closure_for_success_expr_8_p_0(
#line 964 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__NonLocals_9,
#line 964 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__MaybeSuccessExpr0_10,
#line 964 "erl_code_gen.m"
  MR_Word * erl_backend__erl_code_gen__MaybeMakeClosure_11,
#line 964 "erl_code_gen.m"
  MR_Word * erl_backend__erl_code_gen__MaybeSuccessExpr_12,
#line 964 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__InstMap0_13,
#line 964 "erl_code_gen.m"
  MR_Word * erl_backend__erl_code_gen__InstMap_14,
#line 964 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__STATE_VARIABLE_Info_0_28,
#line 964 "erl_code_gen.m"
  MR_Word * erl_backend__erl_code_gen__STATE_VARIABLE_Info_29);

#line 955 "erl_code_gen.m"
static void MR_CALL 
erl_backend__erl_code_gen__union_bound_nonlocals_in_goals_4_p_0_1(
#line 955 "erl_code_gen.m"
  MR_Box erl_backend__erl_code_gen__closure_arg,
#line 955 "erl_code_gen.m"
  MR_Box erl_backend__erl_code_gen__wrapper_arg_1,
#line 955 "erl_code_gen.m"
  MR_Box * erl_backend__erl_code_gen__wrapper_arg_2);

#line 951 "erl_code_gen.m"
static void MR_CALL 
erl_backend__erl_code_gen__union_bound_nonlocals_in_goals_4_p_0(
#line 951 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__Info_5,
#line 951 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__InstMap_6,
#line 951 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__Goals_7,
#line 951 "erl_code_gen.m"
  MR_Word * erl_backend__erl_code_gen__NonLocalsUnion_8);

#line 926 "erl_code_gen.m"
static MR_bool MR_CALL 
erl_backend__erl_code_gen__erl_gen_case_on_atom_8_p_0_1(
#line 926 "erl_code_gen.m"
  MR_Box erl_backend__erl_code_gen__closure_arg);

#line 919 "erl_code_gen.m"
static void MR_CALL 
erl_backend__erl_code_gen__erl_gen_case_on_atom_8_p_0(
#line 919 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__CodeModel_9,
#line 919 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__InstMap_10,
#line 919 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__MustBindNonLocals_11,
#line 919 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__MaybeSuccessExpr_12,
#line 919 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__Case_13,
#line 919 "erl_code_gen.m"
  MR_Word * erl_backend__erl_code_gen__ELDSCase_14,
#line 919 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__STATE_VARIABLE_Info_0_24,
#line 919 "erl_code_gen.m"
  MR_Word * erl_backend__erl_code_gen__STATE_VARIABLE_Info_25);

#line 868 "erl_code_gen.m"
static MR_bool MR_CALL 
erl_backend__erl_code_gen__erl_gen_case_9_p_0_1(
#line 868 "erl_code_gen.m"
  MR_Box erl_backend__erl_code_gen__closure_arg);

#line 860 "erl_code_gen.m"
static void MR_CALL 
erl_backend__erl_code_gen__erl_gen_case_9_p_0(
#line 860 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__Type_10,
#line 860 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__CodeModel_11,
#line 860 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__InstMap_12,
#line 860 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__MustBindNonLocals_13,
#line 860 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__MaybeSuccessExpr_14,
#line 860 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__Case_15,
#line 860 "erl_code_gen.m"
  MR_Word * erl_backend__erl_code_gen__ELDSCase_16,
#line 860 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__STATE_VARIABLE_Info_0_29,
#line 860 "erl_code_gen.m"
  MR_Word * erl_backend__erl_code_gen__STATE_VARIABLE_Info_30);

#line 686 "erl_code_gen.m"
static MR_bool MR_CALL 
erl_backend__erl_code_gen__erl_gen_goal_expr_9_p_0_1(
#line 686 "erl_code_gen.m"
  MR_Box erl_backend__erl_code_gen__closure_arg);

#line 618 "erl_code_gen.m"
static void MR_CALL 
erl_backend__erl_code_gen__erl_gen_goal_expr_9_p_0(
#line 618 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__GoalExpr_10,
#line 618 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__CodeModel_11,
#line 618 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__Detism_12,
#line 618 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__InstMap_13,
#line 618 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__Context_14,
#line 618 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__MaybeSuccessExpr_15,
#line 618 "erl_code_gen.m"
  MR_Word * erl_backend__erl_code_gen__Statement_16,
#line 618 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__STATE_VARIABLE_Info_0_88,
#line 618 "erl_code_gen.m"
  MR_Word * erl_backend__erl_code_gen__STATE_VARIABLE_Info_89);

#line 440 "erl_code_gen.m"
static void MR_CALL 
erl_backend__erl_code_gen__erl_gen_goal_7_p_0(
#line 440 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__CodeModel_8,
#line 440 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__InstMap_9,
#line 440 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__Goal_10,
#line 440 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__MaybeSuccessExpr0_11,
#line 440 "erl_code_gen.m"
  MR_Word * erl_backend__erl_code_gen__Code_12,
#line 440 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__STATE_VARIABLE_Info_0_20,
#line 440 "erl_code_gen.m"
  MR_Word * erl_backend__erl_code_gen__STATE_VARIABLE_Info_21);

#line 324 "erl_code_gen.m"
static void MR_CALL 
erl_backend__erl_code_gen__erl_gen_proc_7_p_0(
#line 324 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__ModuleInfo_8,
#line 324 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__PredId_9,
#line 324 "erl_code_gen.m"
  MR_Integer erl_backend__erl_code_gen__ProcId_10,
#line 324 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__PredInfo_11,
#line 324 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__ProcInfo_12,
#line 324 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__STATE_VARIABLE_Defns_0_18,
#line 324 "erl_code_gen.m"
  MR_Word * erl_backend__erl_code_gen__STATE_VARIABLE_Defns_19);

#line 281 "erl_code_gen.m"
static void MR_CALL 
erl_backend__erl_code_gen__erl_gen_simple_compare_6_p_0(
#line 281 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__ModuleInfo_7,
#line 281 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__PredId_8,
#line 281 "erl_code_gen.m"
  MR_Integer erl_backend__erl_code_gen__ProcId_9,
#line 281 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__X_10,
#line 281 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__Y_11,
#line 281 "erl_code_gen.m"
  MR_Word * erl_backend__erl_code_gen__ProcDefn_12);

#line 226 "erl_code_gen.m"
static MR_bool MR_CALL 
erl_backend__erl_code_gen__erl_maybe_gen_simple_special_pred_7_p_0(
#line 226 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__ModuleInfo_8,
#line 226 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__PredId_9,
#line 226 "erl_code_gen.m"
  MR_Integer erl_backend__erl_code_gen__ProcId_10,
#line 226 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__PredInfo_11,
#line 226 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__ProcInfo_12,
#line 226 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__STATE_VARIABLE_Defns_0_27,
#line 226 "erl_code_gen.m"
  MR_Word * erl_backend__erl_code_gen__STATE_VARIABLE_Defns_28);

#line 197 "erl_code_gen.m"
static void MR_CALL 
erl_backend__erl_code_gen__erl_gen_procs_7_p_0(
#line 197 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__HeadVar__1_1,
#line 197 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__ModuleInfo_2,
#line 197 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__PredId_3,
#line 197 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__PredInfo_4,
#line 197 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__ProcTable_5,
#line 197 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__STATE_VARIABLE_Defns_0_6,
#line 197 "erl_code_gen.m"
  MR_Word * erl_backend__erl_code_gen__STATE_VARIABLE_Defns_7);

#line 143 "erl_code_gen.m"
static void MR_CALL 
erl_backend__erl_code_gen__erl_gen_preds_2_7_p_0(
#line 143 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__ModuleInfo_8,
#line 143 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__PredIds0_9,
#line 143 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__PredTable_10,
#line 143 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__STATE_VARIABLE_Defns_0_20,
#line 143 "erl_code_gen.m"
  MR_Word * erl_backend__erl_code_gen__STATE_VARIABLE_Defns_21);

#line 1574 "erl_code_gen.m"
static void MR_CALL 
erl_backend__erl_code_gen__erl_code_gen_4_p_0_1(
#line 1574 "erl_code_gen.m"
  MR_Box erl_backend__erl_code_gen__closure_arg,
#line 1574 "erl_code_gen.m"
  MR_Box erl_backend__erl_code_gen__wrapper_arg_1,
#line 1574 "erl_code_gen.m"
  MR_Box * erl_backend__erl_code_gen__wrapper_arg_2);


static /* final */ const MR_Box erl_backend__erl_code_gen_scalar_common_1[4][2];

static /* final */ const MR_Box erl_backend__erl_code_gen_scalar_common_2[1][6];

static /* final */ const MR_Box erl_backend__erl_code_gen_scalar_common_3[2][3];

static /* final */ const MR_Box erl_backend__erl_code_gen_scalar_common_4[3][5];

static /* final */ const MR_Box erl_backend__erl_code_gen_scalar_common_5[2][7];

static /* final */ const MR_Box erl_backend__erl_code_gen_scalar_common_6[1][11];

static /* final */ const MR_Box erl_backend__erl_code_gen_scalar_common_7[1][12];




static /* final */ const MR_Box erl_backend__erl_code_gen_scalar_common_1[4][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1)),
    ((MR_Box) (&erl_backend__erl_code_gen_scalar_common_1[0]))
  },
};

static /* final */ const MR_Box erl_backend__erl_code_gen_scalar_common_2[1][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&erl_backend__erl_code_gen__list__pti_list_1__plain_erl_backend__elds__type_ctor_info_elds_defn_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_pragma_exported_proc_0)),
    ((MR_Box) (&erl_backend__elds__erl_backend__elds__type_ctor_info_elds_foreign_export_defn_0))
  },
};

static /* final */ const MR_Box erl_backend__erl_code_gen_scalar_common_3[2][3] = {
  /* row 0 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 1 */
  {
    ((MR_Box) (&erl_backend__erl_code_gen_scalar_common_4[2])),
    ((MR_Box) (erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_10_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box erl_backend__erl_code_gen_scalar_common_4[3][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__code_model__hlds__code_model__type_ctor_info_code_model_0)),
    ((MR_Box) (&hlds__code_model__hlds__code_model__type_ctor_info_code_model_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&erl_backend__erl_code_gen__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_cons_id_0)),
    ((MR_Box) (&erl_backend__erl_code_gen__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_cons_id_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0))
  },
};

static /* final */ const MR_Box erl_backend__erl_code_gen_scalar_common_5[2][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&erl_backend__erl_code_util__erl_backend__erl_code_util__type_ctor_info_erl_gen_info_0)),
    ((MR_Box) (&hlds__instmap__hlds__instmap__type_ctor_info_instmap_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&erl_backend__erl_code_gen__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&erl_backend__erl_code_gen__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&erl_backend__erl_code_gen__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};

static /* final */ const MR_Box erl_backend__erl_code_gen_scalar_common_6[1][11] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 8)),
    ((MR_Box) (&hlds__code_model__hlds__code_model__type_ctor_info_code_model_0)),
    ((MR_Box) (&hlds__instmap__hlds__instmap__type_ctor_info_instmap_0)),
    ((MR_Box) (&erl_backend__erl_code_gen__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&erl_backend__erl_code_gen__maybe__pti_maybe_1__plain_erl_backend__elds__type_ctor_info_elds_expr_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0)),
    ((MR_Box) (&erl_backend__elds__erl_backend__elds__type_ctor_info_elds_case_0)),
    ((MR_Box) (&erl_backend__erl_code_util__erl_backend__erl_code_util__type_ctor_info_erl_gen_info_0)),
    ((MR_Box) (&erl_backend__erl_code_util__erl_backend__erl_code_util__type_ctor_info_erl_gen_info_0))
  },
};

static /* final */ const MR_Box erl_backend__erl_code_gen_scalar_common_7[1][12] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 9)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&hlds__code_model__hlds__code_model__type_ctor_info_code_model_0)),
    ((MR_Box) (&hlds__instmap__hlds__instmap__type_ctor_info_instmap_0)),
    ((MR_Box) (&erl_backend__erl_code_gen__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&erl_backend__erl_code_gen__maybe__pti_maybe_1__plain_erl_backend__elds__type_ctor_info_elds_expr_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0)),
    ((MR_Box) (&erl_backend__elds__erl_backend__elds__type_ctor_info_elds_case_0)),
    ((MR_Box) (&erl_backend__erl_code_util__erl_backend__erl_code_util__type_ctor_info_erl_gen_info_0)),
    ((MR_Box) (&erl_backend__erl_code_util__erl_backend__erl_code_util__type_ctor_info_erl_gen_info_0))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



#line 940 "erl_backend.erl_code_gen.c"
static const MR_FA_PseudoTypeInfo_Struct1 erl_backend__erl_code_gen__list__pti_list_1__plain_erl_backend__elds__type_ctor_info_elds_defn_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_defn_0
  }
};

#line 948 "erl_backend.erl_code_gen.c"
static const MR_FA_PseudoTypeInfo_Struct1 erl_backend__erl_code_gen__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_cons_id_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0
  }
};

#line 956 "erl_backend.erl_code_gen.c"
static const MR_FA_TypeInfo_Struct1 erl_backend__erl_code_gen__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 964 "erl_backend.erl_code_gen.c"
static const MR_FA_PseudoTypeInfo_Struct1 erl_backend__erl_code_gen__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1,
  {
    (MR_PseudoTypeInfo) &erl_backend__erl_code_gen__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 972 "erl_backend.erl_code_gen.c"
static const MR_FA_PseudoTypeInfo_Struct1 erl_backend__erl_code_gen__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 980 "erl_backend.erl_code_gen.c"
static const MR_FA_PseudoTypeInfo_Struct1 erl_backend__erl_code_gen__maybe__pti_maybe_1__plain_erl_backend__elds__type_ctor_info_elds_expr_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_PseudoTypeInfo) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_expr_0
  }
};

#line 1423 "erl_code_gen.m"
static void MR_CALL 
erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_100_105_115_106_117_110_99_116_95_95_91_52_93_95_48_8_p_0(
#line 1423 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__HeadVar__1_1,
#line 1423 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__CodeModel_2,
#line 1423 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__HeadVar__3_3,
#line 1423 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__HeadVar__5_5,
#line 1423 "erl_code_gen.m"
  MR_Word * erl_backend__erl_code_gen__Statement_6,
#line 1423 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__STATE_VARIABLE_Info_0_7,
#line 1423 "erl_code_gen.m"
  MR_Word * erl_backend__erl_code_gen__STATE_VARIABLE_Info_8)
#line 1423 "erl_code_gen.m"
{
#line 1428 "erl_code_gen.m"
  {
#line 1428 "erl_code_gen.m"
    MR_bool erl_backend__erl_code_gen__succeeded;

#line 1428 "erl_code_gen.m"
    if ((erl_backend__erl_code_gen__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1428 "erl_code_gen.m"
      {
#line 1433 "erl_code_gen.m"
#line 1433 "erl_code_gen.m"
        switch (erl_backend__erl_code_gen__CodeModel_2) {
#line 1433 "erl_code_gen.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1433 "erl_code_gen.m"
          case (MR_Integer) 0:
#line 1431 "erl_code_gen.m"
            {
#line 1432 "erl_code_gen.m"
              {
#line 1432 "erl_code_gen.m"
                mercury__require__unexpected_3_p_0((MR_String) "erl_backend.erl_code_gen", (MR_String) "predicate \140erl_backend.erl_code_gen.erl_gen_disjunct\'/8", (MR_String) "\140fail\' has determinism \140det\'");
#line 1432 "erl_code_gen.m"
                return;
              }
#line 1431 "erl_code_gen.m"
            }
#line 1433 "erl_code_gen.m"
            break;
#line 1433 "erl_code_gen.m"
          case (MR_Integer) 2:
#line 1433 "erl_code_gen.m"
          case (MR_Integer) 1:
#line 1436 "erl_code_gen.m"
            {
#line 1436 "erl_code_gen.m"
              MR_Word erl_backend__erl_code_gen__V_17_17;

#line 1437 "erl_code_gen.m"
              {
#line 1437 "erl_code_gen.m"
                erl_backend__erl_code_gen__V_17_17 = erl_backend__elds__elds_fail_0_f_0();
              }
#line 1437 "erl_code_gen.m"
              {
#line 1437 "erl_code_gen.m"
                MR_Word base;
#line 1437 "erl_code_gen.m"
                base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1437 "erl_code_gen.m"
                *erl_backend__erl_code_gen__Statement_6 = base;
#line 1437 "erl_code_gen.m"
                MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (erl_backend__erl_code_gen__V_17_17));
#line 1437 "erl_code_gen.m"
              }
#line 1436 "erl_code_gen.m"
            }
#line 1433 "erl_code_gen.m"
            break;
#line 1433 "erl_code_gen.m"
        }
#line 1428 "erl_code_gen.m"
        *erl_backend__erl_code_gen__STATE_VARIABLE_Info_8 = erl_backend__erl_code_gen__STATE_VARIABLE_Info_0_7;
#line 1428 "erl_code_gen.m"
      }
#line 1428 "erl_code_gen.m"
    else
#line 1441 "erl_code_gen.m"
      {
#line 1441 "erl_code_gen.m"
        MR_Word erl_backend__erl_code_gen__First_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__erl_code_gen__HeadVar__1_1, (MR_Integer) 0)));
#line 1441 "erl_code_gen.m"
        MR_Word erl_backend__erl_code_gen__Rest_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__erl_code_gen__HeadVar__1_1, (MR_Integer) 1)));

#line 1533 "erl_code_gen.m"
#line 1533 "erl_code_gen.m"
        switch (erl_backend__erl_code_gen__CodeModel_2) {
#line 1533 "erl_code_gen.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1533 "erl_code_gen.m"
          case (MR_Integer) 0:
#line 1533 "erl_code_gen.m"
          case (MR_Integer) 1:
#line 1445 "erl_code_gen.m"
            {
#line 1445 "erl_code_gen.m"
              MR_Word erl_backend__erl_code_gen__FirstGoalInfo_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__First_21, (MR_Integer) 1)));
#line 1445 "erl_code_gen.m"
              MR_Word erl_backend__erl_code_gen__FirstCodeModel_31;
#line 1445 "erl_code_gen.m"
              MR_Word erl_backend__erl_code_gen__FirstDeterminism_32;
#line 1470 "erl_code_gen.m"
              MR_Word erl_backend__erl_code_gen__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__First_21, (MR_Integer) 0)));

#line 1471 "erl_code_gen.m"
              {
#line 1471 "erl_code_gen.m"
                erl_backend__erl_code_gen__FirstCodeModel_31 = hlds__code_model__goal_info_get_code_model_1_f_0(erl_backend__erl_code_gen__FirstGoalInfo_30);
              }
#line 1472 "erl_code_gen.m"
              {
#line 1472 "erl_code_gen.m"
                erl_backend__erl_code_gen__FirstDeterminism_32 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(erl_backend__erl_code_gen__FirstGoalInfo_30);
              }
#line 1479 "erl_code_gen.m"
#line 1479 "erl_code_gen.m"
              switch (erl_backend__erl_code_gen__FirstCodeModel_31) {
#line 1479 "erl_code_gen.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 1479 "erl_code_gen.m"
                case (MR_Integer) 0:
#line 1474 "erl_code_gen.m"
                  {
#line 1474 "erl_code_gen.m"
                    MR_Word erl_backend__erl_code_gen__MaybeSuccessExprForFirst_33;
#line 1474 "erl_code_gen.m"
                    MR_Word erl_backend__erl_code_gen__STATE_VARIABLE_Info_72_72;

#line 1475 "erl_code_gen.m"
                    {
#line 1475 "erl_code_gen.m"
                      erl_backend__erl_code_util__erl_fix_success_expr_6_p_0(erl_backend__erl_code_gen__HeadVar__3_3, erl_backend__erl_code_gen__First_21, erl_backend__erl_code_gen__HeadVar__5_5, &erl_backend__erl_code_gen__MaybeSuccessExprForFirst_33, erl_backend__erl_code_gen__STATE_VARIABLE_Info_0_7, &erl_backend__erl_code_gen__STATE_VARIABLE_Info_72_72);
                    }
#line 1477 "erl_code_gen.m"
                    {
#line 1477 "erl_code_gen.m"
                      erl_backend__erl_code_gen__erl_gen_goal_7_p_0((MR_Integer) 0, erl_backend__erl_code_gen__HeadVar__3_3, erl_backend__erl_code_gen__First_21, erl_backend__erl_code_gen__MaybeSuccessExprForFirst_33, erl_backend__erl_code_gen__Statement_6, erl_backend__erl_code_gen__STATE_VARIABLE_Info_72_72, erl_backend__erl_code_gen__STATE_VARIABLE_Info_8);
#line 1477 "erl_code_gen.m"
                      return;
                    }
#line 1474 "erl_code_gen.m"
                  }
#line 1479 "erl_code_gen.m"
                  break;
#line 1479 "erl_code_gen.m"
                case (MR_Integer) 2:
#line 1528 "erl_code_gen.m"
                  {
#line 1530 "erl_code_gen.m"
                    {
#line 1530 "erl_code_gen.m"
                      mercury__require__unexpected_3_p_0((MR_String) "erl_backend.erl_code_gen", (MR_String) "predicate \140erl_backend.erl_code_gen.erl_gen_disjunct\'/8", (MR_String) "model_non disj in model_det disjunction");
#line 1530 "erl_code_gen.m"
                      return;
                    }
#line 1528 "erl_code_gen.m"
                  }
#line 1479 "erl_code_gen.m"
                  break;
#line 1479 "erl_code_gen.m"
                case (MR_Integer) 1:
#line 1480 "erl_code_gen.m"
                  {
#line 1480 "erl_code_gen.m"
                    MR_Word erl_backend__erl_code_gen__FirstVarsSet_34;
#line 1480 "erl_code_gen.m"
                    MR_Word erl_backend__erl_code_gen__FirstVars_35;
#line 1480 "erl_code_gen.m"
                    MR_Word erl_backend__erl_code_gen__FirstVarsTerm_36;
#line 1480 "erl_code_gen.m"
                    MR_Word erl_backend__erl_code_gen__FirstStatement0_37;
#line 1480 "erl_code_gen.m"
                    MR_Word erl_backend__erl_code_gen__RestStatement_38;
#line 1480 "erl_code_gen.m"
                    MR_Word erl_backend__erl_code_gen__Subn_39;
#line 1480 "erl_code_gen.m"
                    MR_Word erl_backend__erl_code_gen__FirstStatement_40;
#line 1480 "erl_code_gen.m"
                    MR_Word erl_backend__erl_code_gen__V_57_57;
#line 1480 "erl_code_gen.m"
                    MR_Word erl_backend__erl_code_gen__V_59_59;
#line 1480 "erl_code_gen.m"
                    MR_Word erl_backend__erl_code_gen__STATE_VARIABLE_Info_60_60;
#line 1480 "erl_code_gen.m"
                    MR_Word erl_backend__erl_code_gen__V_61_61;
#line 1480 "erl_code_gen.m"
                    MR_Word erl_backend__erl_code_gen__STATE_VARIABLE_Info_62_62;
#line 1480 "erl_code_gen.m"
                    MR_Word erl_backend__erl_code_gen__STATE_VARIABLE_Info_63_63;

#line 1482 "erl_code_gen.m"
                    {
#line 1482 "erl_code_gen.m"
                      erl_backend__erl_code_util__erl_bound_nonlocals_in_goal_4_p_0(erl_backend__erl_code_gen__STATE_VARIABLE_Info_0_7, erl_backend__erl_code_gen__HeadVar__3_3, erl_backend__erl_code_gen__First_21, &erl_backend__erl_code_gen__FirstVarsSet_34);
                    }
#line 1483 "erl_code_gen.m"
                    {
#line 1483 "erl_code_gen.m"
                      erl_backend__erl_code_gen__FirstVars_35 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, erl_backend__erl_code_gen__FirstVarsSet_34);
                    }
#line 1484 "erl_code_gen.m"
                    {
#line 1484 "erl_code_gen.m"
                      erl_backend__erl_code_gen__V_57_57 = erl_backend__elds__exprs_from_vars_1_f_0(erl_backend__erl_code_gen__FirstVars_35);
                    }
#line 1484 "erl_code_gen.m"
                    {
#line 1484 "erl_code_gen.m"
                      erl_backend__erl_code_gen__FirstVarsTerm_36 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1484 "erl_code_gen.m"
                      MR_hl_field(MR_mktag(3), erl_backend__erl_code_gen__FirstVarsTerm_36, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 1484 "erl_code_gen.m"
                      MR_hl_field(MR_mktag(3), erl_backend__erl_code_gen__FirstVarsTerm_36, 1) = ((MR_Box) (erl_backend__erl_code_gen__V_57_57));
#line 1484 "erl_code_gen.m"
                    }
#line 1489 "erl_code_gen.m"
                    {
#line 1489 "erl_code_gen.m"
                      erl_backend__erl_code_gen__V_61_61 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1489 "erl_code_gen.m"
                      MR_hl_field(MR_mktag(2), erl_backend__erl_code_gen__V_61_61, 0) = ((MR_Box) (erl_backend__erl_code_gen__FirstVarsTerm_36));
#line 1489 "erl_code_gen.m"
                    }
#line 1489 "erl_code_gen.m"
                    {
#line 1489 "erl_code_gen.m"
                      erl_backend__erl_code_gen__V_59_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1489 "erl_code_gen.m"
                      MR_hl_field(MR_mktag(1), erl_backend__erl_code_gen__V_59_59, 0) = ((MR_Box) (erl_backend__erl_code_gen__V_61_61));
#line 1489 "erl_code_gen.m"
                    }
#line 1488 "erl_code_gen.m"
                    {
#line 1488 "erl_code_gen.m"
                      erl_backend__erl_code_gen__erl_gen_goal_7_p_0((MR_Integer) 1, erl_backend__erl_code_gen__HeadVar__3_3, erl_backend__erl_code_gen__First_21, erl_backend__erl_code_gen__V_59_59, &erl_backend__erl_code_gen__FirstStatement0_37, erl_backend__erl_code_gen__STATE_VARIABLE_Info_0_7, &erl_backend__erl_code_gen__STATE_VARIABLE_Info_60_60);
                    }
#line 1492 "erl_code_gen.m"
                    {
#line 1492 "erl_code_gen.m"
                      erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_100_105_115_106_117_110_99_116_95_95_91_52_93_95_48_8_p_0(erl_backend__erl_code_gen__Rest_22, erl_backend__erl_code_gen__CodeModel_2, erl_backend__erl_code_gen__HeadVar__3_3, erl_backend__erl_code_gen__HeadVar__5_5, &erl_backend__erl_code_gen__RestStatement_38, erl_backend__erl_code_gen__STATE_VARIABLE_Info_60_60, &erl_backend__erl_code_gen__STATE_VARIABLE_Info_62_62);
                    }
#line 1498 "erl_code_gen.m"
                    {
#line 1498 "erl_code_gen.m"
                      erl_backend__erl_code_util__erl_create_renaming_4_p_0(erl_backend__erl_code_gen__FirstVars_35, &erl_backend__erl_code_gen__Subn_39, erl_backend__erl_code_gen__STATE_VARIABLE_Info_62_62, &erl_backend__erl_code_gen__STATE_VARIABLE_Info_63_63);
                    }
#line 1499 "erl_code_gen.m"
                    {
#line 1499 "erl_code_gen.m"
                      erl_backend__erl_code_util__erl_rename_vars_in_expr_3_p_0(erl_backend__erl_code_gen__Subn_39, erl_backend__erl_code_gen__FirstStatement0_37, &erl_backend__erl_code_gen__FirstStatement_40);
                    }
#line 1501 "erl_code_gen.m"
                    erl_backend__erl_code_gen__succeeded = (erl_backend__erl_code_gen__FirstDeterminism_32 == (MR_Integer) 7);
#line 1509 "erl_code_gen.m"
                    if (erl_backend__erl_code_gen__succeeded)
#line 1508 "erl_code_gen.m"
                      {
#line 1508 "erl_code_gen.m"
                        {
#line 1508 "erl_code_gen.m"
                          *erl_backend__erl_code_gen__Statement_6 = erl_backend__elds__join_exprs_2_f_0(erl_backend__erl_code_gen__FirstStatement0_37, erl_backend__erl_code_gen__RestStatement_38);
                        }
#line 1508 "erl_code_gen.m"
                        *erl_backend__erl_code_gen__STATE_VARIABLE_Info_8 = erl_backend__erl_code_gen__STATE_VARIABLE_Info_63_63;
#line 1508 "erl_code_gen.m"
                      }
#line 1509 "erl_code_gen.m"
                    else
#line 1511 "erl_code_gen.m"
                      {
#line 1511 "erl_code_gen.m"
                        MR_Word erl_backend__erl_code_gen__MaybeSuccessExprForFirst_75;
#line 1513 "erl_code_gen.m"
                        MR_Word erl_backend__erl_code_gen__V_65_65;
#line 1513 "erl_code_gen.m"
                        MR_Word erl_backend__erl_code_gen__V_66_66;
#line 1513 "erl_code_gen.m"
                        MR_Word erl_backend__erl_code_gen__V_85_85;
#line 1513 "erl_code_gen.m"
                        MR_Word erl_backend__erl_code_gen__V_86_86;

#line 1510 "erl_code_gen.m"
                        {
#line 1510 "erl_code_gen.m"
                          erl_backend__erl_code_util__erl_fix_success_expr_6_p_0(erl_backend__erl_code_gen__HeadVar__3_3, erl_backend__erl_code_gen__First_21, erl_backend__erl_code_gen__HeadVar__5_5, &erl_backend__erl_code_gen__MaybeSuccessExprForFirst_75, erl_backend__erl_code_gen__STATE_VARIABLE_Info_63_63, erl_backend__erl_code_gen__STATE_VARIABLE_Info_8);
                        }
#line 1513 "erl_code_gen.m"
                        erl_backend__erl_code_gen__succeeded = ((MR_tag((MR_Word) erl_backend__erl_code_gen__MaybeSuccessExprForFirst_75)) == (MR_mktag((MR_Integer) 1)));
#line 1513 "erl_code_gen.m"
                        if (erl_backend__erl_code_gen__succeeded)
#line 1513 "erl_code_gen.m"
                          {
#line 1513 "erl_code_gen.m"
                            erl_backend__erl_code_gen__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__erl_code_gen__MaybeSuccessExprForFirst_75, (MR_Integer) 0)));
#line 1513 "erl_code_gen.m"
                            erl_backend__erl_code_gen__succeeded = ((MR_tag((MR_Word) erl_backend__erl_code_gen__V_65_65)) == (MR_mktag((MR_Integer) 2)));
#line 1513 "erl_code_gen.m"
                            if (erl_backend__erl_code_gen__succeeded)
#line 1513 "erl_code_gen.m"
                              {
#line 1513 "erl_code_gen.m"
                                erl_backend__erl_code_gen__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(2), erl_backend__erl_code_gen__V_65_65, (MR_Integer) 0)));
#line 1513 "erl_code_gen.m"
                                {
#line 1513 "erl_code_gen.m"
                                  erl_backend__erl_code_gen__succeeded = erl_backend__elds____Unify____elds_term_0_0(erl_backend__erl_code_gen__FirstVarsTerm_36, erl_backend__erl_code_gen__V_85_85);
                                }
#line 1513 "erl_code_gen.m"
                                if (erl_backend__erl_code_gen__succeeded)
#line 1513 "erl_code_gen.m"
                                  {
#line 1514 "erl_code_gen.m"
                                    erl_backend__erl_code_gen__succeeded = ((MR_tag((MR_Word) erl_backend__erl_code_gen__RestStatement_38)) == (MR_mktag((MR_Integer) 2)));
#line 1514 "erl_code_gen.m"
                                    if (erl_backend__erl_code_gen__succeeded)
#line 1514 "erl_code_gen.m"
                                      {
#line 1514 "erl_code_gen.m"
                                        erl_backend__erl_code_gen__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(2), erl_backend__erl_code_gen__RestStatement_38, (MR_Integer) 0)));
#line 1514 "erl_code_gen.m"
                                        {
#line 1514 "erl_code_gen.m"
                                          erl_backend__erl_code_gen__V_86_86 = erl_backend__elds__elds_fail_0_f_0();
                                        }
#line 1514 "erl_code_gen.m"
                                        {
#line 1514 "erl_code_gen.m"
                                          erl_backend__erl_code_gen__succeeded = erl_backend__elds____Unify____elds_term_0_0(erl_backend__erl_code_gen__V_66_66, erl_backend__erl_code_gen__V_86_86);
                                        }
#line 1514 "erl_code_gen.m"
                                      }
#line 1513 "erl_code_gen.m"
                                  }
#line 1513 "erl_code_gen.m"
                              }
#line 1513 "erl_code_gen.m"
                          }
#line 1518 "erl_code_gen.m"
                        if (erl_backend__erl_code_gen__succeeded)
#line 1517 "erl_code_gen.m"
                          *erl_backend__erl_code_gen__Statement_6 = erl_backend__erl_code_gen__FirstStatement_40;
#line 1518 "erl_code_gen.m"
                        else
#line 1520 "erl_code_gen.m"
                          {
#line 1520 "erl_code_gen.m"
                            MR_Word erl_backend__erl_code_gen__Statement0_41;
#line 1520 "erl_code_gen.m"
                            MR_Word erl_backend__erl_code_gen__SucceedCase_42;
#line 1520 "erl_code_gen.m"
                            MR_Word erl_backend__erl_code_gen__FailCase_43;
#line 1520 "erl_code_gen.m"
                            MR_Word erl_backend__erl_code_gen__V_67_67;
#line 1520 "erl_code_gen.m"
                            MR_Word erl_backend__erl_code_gen__V_68_68;
#line 1520 "erl_code_gen.m"
                            MR_Word erl_backend__erl_code_gen__V_70_70;
#line 1520 "erl_code_gen.m"
                            MR_Word erl_backend__erl_code_gen__V_71_71;

#line 1522 "erl_code_gen.m"
                            {
#line 1522 "erl_code_gen.m"
                              erl_backend__erl_code_gen__V_70_70 = erl_backend__elds__expr_or_void_1_f_0(erl_backend__erl_code_gen__MaybeSuccessExprForFirst_75);
                            }
#line 1521 "erl_code_gen.m"
                            {
#line 1521 "erl_code_gen.m"
                              erl_backend__erl_code_gen__SucceedCase_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1521 "erl_code_gen.m"
                              MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__SucceedCase_42, 0) = ((MR_Box) (erl_backend__erl_code_gen__FirstVarsTerm_36));
#line 1521 "erl_code_gen.m"
                              MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__SucceedCase_42, 1) = ((MR_Box) (erl_backend__erl_code_gen__V_70_70));
#line 1521 "erl_code_gen.m"
                            }
#line 1523 "erl_code_gen.m"
                            {
#line 1523 "erl_code_gen.m"
                              erl_backend__erl_code_gen__V_71_71 = erl_backend__elds__elds_fail_0_f_0();
                            }
#line 1523 "erl_code_gen.m"
                            {
#line 1523 "erl_code_gen.m"
                              erl_backend__erl_code_gen__FailCase_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1523 "erl_code_gen.m"
                              MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__FailCase_43, 0) = ((MR_Box) (erl_backend__erl_code_gen__V_71_71));
#line 1523 "erl_code_gen.m"
                              MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__FailCase_43, 1) = ((MR_Box) (erl_backend__erl_code_gen__RestStatement_38));
#line 1523 "erl_code_gen.m"
                            }
#line 1520 "erl_code_gen.m"
                            {
#line 1520 "erl_code_gen.m"
                              erl_backend__erl_code_gen__V_68_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1520 "erl_code_gen.m"
                              MR_hl_field(MR_mktag(1), erl_backend__erl_code_gen__V_68_68, 0) = ((MR_Box) (erl_backend__erl_code_gen__FailCase_43));
#line 1520 "erl_code_gen.m"
                              MR_hl_field(MR_mktag(1), erl_backend__erl_code_gen__V_68_68, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1520 "erl_code_gen.m"
                            }
#line 1520 "erl_code_gen.m"
                            {
#line 1520 "erl_code_gen.m"
                              erl_backend__erl_code_gen__V_67_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1520 "erl_code_gen.m"
                              MR_hl_field(MR_mktag(1), erl_backend__erl_code_gen__V_67_67, 0) = ((MR_Box) (erl_backend__erl_code_gen__SucceedCase_42));
#line 1520 "erl_code_gen.m"
                              MR_hl_field(MR_mktag(1), erl_backend__erl_code_gen__V_67_67, 1) = ((MR_Box) (erl_backend__erl_code_gen__V_68_68));
#line 1520 "erl_code_gen.m"
                            }
#line 1519 "erl_code_gen.m"
                            {
#line 1519 "erl_code_gen.m"
                              erl_backend__erl_code_gen__Statement0_41 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1519 "erl_code_gen.m"
                              MR_hl_field(MR_mktag(3), erl_backend__erl_code_gen__Statement0_41, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 1519 "erl_code_gen.m"
                              MR_hl_field(MR_mktag(3), erl_backend__erl_code_gen__Statement0_41, 1) = ((MR_Box) (erl_backend__erl_code_gen__FirstStatement_40));
#line 1519 "erl_code_gen.m"
                              MR_hl_field(MR_mktag(3), erl_backend__erl_code_gen__Statement0_41, 2) = ((MR_Box) (erl_backend__erl_code_gen__V_67_67));
#line 1519 "erl_code_gen.m"
                            }
#line 1524 "erl_code_gen.m"
                            {
#line 1524 "erl_code_gen.m"
                              erl_backend__erl_code_util__maybe_simplify_nested_cases_2_p_0(erl_backend__erl_code_gen__Statement0_41, erl_backend__erl_code_gen__Statement_6);
#line 1524 "erl_code_gen.m"
                              return;
                            }
#line 1520 "erl_code_gen.m"
                          }
#line 1511 "erl_code_gen.m"
                      }
#line 1480 "erl_code_gen.m"
                  }
#line 1479 "erl_code_gen.m"
                  break;
#line 1479 "erl_code_gen.m"
              }
#line 1445 "erl_code_gen.m"
            }
#line 1533 "erl_code_gen.m"
            break;
#line 1533 "erl_code_gen.m"
          case (MR_Integer) 2:
#line 1534 "erl_code_gen.m"
            {
#line 1534 "erl_code_gen.m"
              MR_Word erl_backend__erl_code_gen__Subst_44;
#line 1534 "erl_code_gen.m"
              MR_Word erl_backend__erl_code_gen__RestStatements_45;
#line 1534 "erl_code_gen.m"
              MR_Word erl_backend__erl_code_gen__STATE_VARIABLE_Info_48_48;
#line 1534 "erl_code_gen.m"
              MR_Word erl_backend__erl_code_gen__STATE_VARIABLE_Info_50_50;
#line 1534 "erl_code_gen.m"
              MR_Word erl_backend__erl_code_gen__STATE_VARIABLE_Info_51_51;
#line 1534 "erl_code_gen.m"
              MR_Word erl_backend__erl_code_gen__MaybeSuccessExprForFirst_78;
#line 1534 "erl_code_gen.m"
              MR_Word erl_backend__erl_code_gen__FirstVarsSet_79;
#line 1534 "erl_code_gen.m"
              MR_Word erl_backend__erl_code_gen__FirstVars_80;
#line 1534 "erl_code_gen.m"
              MR_Word erl_backend__erl_code_gen__FirstStatement0_81;
#line 1534 "erl_code_gen.m"
              MR_Word erl_backend__erl_code_gen__FirstStatement_82;

#line 1547 "erl_code_gen.m"
              {
#line 1547 "erl_code_gen.m"
                erl_backend__erl_code_util__erl_fix_success_expr_6_p_0(erl_backend__erl_code_gen__HeadVar__3_3, erl_backend__erl_code_gen__First_21, erl_backend__erl_code_gen__HeadVar__5_5, &erl_backend__erl_code_gen__MaybeSuccessExprForFirst_78, erl_backend__erl_code_gen__STATE_VARIABLE_Info_0_7, &erl_backend__erl_code_gen__STATE_VARIABLE_Info_48_48);
              }
#line 1549 "erl_code_gen.m"
              {
#line 1549 "erl_code_gen.m"
                erl_backend__erl_code_gen__erl_gen_goal_7_p_0((MR_Integer) 2, erl_backend__erl_code_gen__HeadVar__3_3, erl_backend__erl_code_gen__First_21, erl_backend__erl_code_gen__MaybeSuccessExprForFirst_78, &erl_backend__erl_code_gen__FirstStatement0_81, erl_backend__erl_code_gen__STATE_VARIABLE_Info_48_48, &erl_backend__erl_code_gen__STATE_VARIABLE_Info_50_50);
              }
#line 1552 "erl_code_gen.m"
              {
#line 1552 "erl_code_gen.m"
                erl_backend__erl_code_util__erl_bound_nonlocals_in_goal_4_p_0(erl_backend__erl_code_gen__STATE_VARIABLE_Info_50_50, erl_backend__erl_code_gen__HeadVar__3_3, erl_backend__erl_code_gen__First_21, &erl_backend__erl_code_gen__FirstVarsSet_79);
              }
#line 1553 "erl_code_gen.m"
              {
#line 1553 "erl_code_gen.m"
                erl_backend__erl_code_gen__FirstVars_80 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, erl_backend__erl_code_gen__FirstVarsSet_79);
              }
#line 1554 "erl_code_gen.m"
              {
#line 1554 "erl_code_gen.m"
                erl_backend__erl_code_util__erl_create_renaming_4_p_0(erl_backend__erl_code_gen__FirstVars_80, &erl_backend__erl_code_gen__Subst_44, erl_backend__erl_code_gen__STATE_VARIABLE_Info_50_50, &erl_backend__erl_code_gen__STATE_VARIABLE_Info_51_51);
              }
#line 1555 "erl_code_gen.m"
              {
#line 1555 "erl_code_gen.m"
                erl_backend__erl_code_util__erl_rename_vars_in_expr_3_p_0(erl_backend__erl_code_gen__Subst_44, erl_backend__erl_code_gen__FirstStatement0_81, &erl_backend__erl_code_gen__FirstStatement_82);
              }
#line 1558 "erl_code_gen.m"
              {
#line 1558 "erl_code_gen.m"
                erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_100_105_115_106_117_110_99_116_95_95_91_52_93_95_48_8_p_0(erl_backend__erl_code_gen__Rest_22, (MR_Integer) 2, erl_backend__erl_code_gen__HeadVar__3_3, erl_backend__erl_code_gen__HeadVar__5_5, &erl_backend__erl_code_gen__RestStatements_45, erl_backend__erl_code_gen__STATE_VARIABLE_Info_51_51, erl_backend__erl_code_gen__STATE_VARIABLE_Info_8);
              }
#line 1561 "erl_code_gen.m"
              {
#line 1561 "erl_code_gen.m"
                *erl_backend__erl_code_gen__Statement_6 = erl_backend__elds__join_exprs_2_f_0(erl_backend__erl_code_gen__FirstStatement_82, erl_backend__erl_code_gen__RestStatements_45);
              }
#line 1534 "erl_code_gen.m"
            }
#line 1533 "erl_code_gen.m"
            break;
#line 1533 "erl_code_gen.m"
        }
#line 1441 "erl_code_gen.m"
      }
#line 1428 "erl_code_gen.m"
  }
#line 1423 "erl_code_gen.m"
}

#line 955 "erl_code_gen.m"
static void MR_CALL 
erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_100_105_115_106_95_95_91_52_93_95_48_8_p_0_1(
#line 955 "erl_code_gen.m"
  MR_Box erl_backend__erl_code_gen__closure_arg,
#line 955 "erl_code_gen.m"
  MR_Box erl_backend__erl_code_gen__wrapper_arg_1,
#line 955 "erl_code_gen.m"
  MR_Box * erl_backend__erl_code_gen__wrapper_arg_2)
#line 955 "erl_code_gen.m"
{
#line 955 "erl_code_gen.m"
  {
#line 955 "erl_code_gen.m"
    MR_Box erl_backend__erl_code_gen__closure = erl_backend__erl_code_gen__closure_arg;
#line 955 "erl_code_gen.m"
    MR_Word erl_backend__erl_code_gen__conv0_HeadVar__4_4;

#line 955 "erl_code_gen.m"
    {
#line 955 "erl_code_gen.m"
      erl_backend__erl_code_util__erl_bound_nonlocals_in_goal_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__closure, (MR_Integer) 4))), ((MR_Word) erl_backend__erl_code_gen__wrapper_arg_1), &erl_backend__erl_code_gen__conv0_HeadVar__4_4);
    }
#line 955 "erl_code_gen.m"
    *erl_backend__erl_code_gen__wrapper_arg_2 = ((MR_Box) (erl_backend__erl_code_gen__conv0_HeadVar__4_4));
#line 955 "erl_code_gen.m"
  }
#line 955 "erl_code_gen.m"
}

#line 1382 "erl_code_gen.m"
static void MR_CALL 
erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_100_105_115_106_95_95_91_52_93_95_48_8_p_0(
#line 1382 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__HeadVar__1_1,
#line 1382 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__CodeModel_2,
#line 1382 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__HeadVar__3_3,
#line 1382 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__HeadVar__5_5,
#line 1382 "erl_code_gen.m"
  MR_Word * erl_backend__erl_code_gen__Statement_6,
#line 1382 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__STATE_VARIABLE_Info_0_7,
#line 1382 "erl_code_gen.m"
  MR_Word * erl_backend__erl_code_gen__STATE_VARIABLE_Info_8)
#line 1382 "erl_code_gen.m"
{
#line 1387 "erl_code_gen.m"
  {
#line 1387 "erl_code_gen.m"
    MR_bool erl_backend__erl_code_gen__succeeded;

#line 1387 "erl_code_gen.m"
    if ((erl_backend__erl_code_gen__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1387 "erl_code_gen.m"
      {
#line 1392 "erl_code_gen.m"
#line 1392 "erl_code_gen.m"
        switch (erl_backend__erl_code_gen__CodeModel_2) {
#line 1392 "erl_code_gen.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1392 "erl_code_gen.m"
          case (MR_Integer) 0:
#line 1390 "erl_code_gen.m"
            {
#line 1391 "erl_code_gen.m"
              {
#line 1391 "erl_code_gen.m"
                mercury__require__unexpected_3_p_0((MR_String) "erl_backend.erl_code_gen", (MR_String) "predicate \140erl_backend.erl_code_gen.erl_gen_disj\'/8", (MR_String) "\140fail\' has determinism \140det\'");
#line 1391 "erl_code_gen.m"
                return;
              }
#line 1390 "erl_code_gen.m"
            }
#line 1392 "erl_code_gen.m"
            break;
#line 1392 "erl_code_gen.m"
          case (MR_Integer) 2:
#line 1392 "erl_code_gen.m"
          case (MR_Integer) 1:
#line 1395 "erl_code_gen.m"
            {
#line 1395 "erl_code_gen.m"
              MR_Word erl_backend__erl_code_gen__V_17_17;

#line 1396 "erl_code_gen.m"
              {
#line 1396 "erl_code_gen.m"
                erl_backend__erl_code_gen__V_17_17 = erl_backend__elds__elds_fail_0_f_0();
              }
#line 1396 "erl_code_gen.m"
              {
#line 1396 "erl_code_gen.m"
                MR_Word base;
#line 1396 "erl_code_gen.m"
                base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1396 "erl_code_gen.m"
                *erl_backend__erl_code_gen__Statement_6 = base;
#line 1396 "erl_code_gen.m"
                MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (erl_backend__erl_code_gen__V_17_17));
#line 1396 "erl_code_gen.m"
              }
#line 1395 "erl_code_gen.m"
            }
#line 1392 "erl_code_gen.m"
            break;
#line 1392 "erl_code_gen.m"
        }
#line 1387 "erl_code_gen.m"
        *erl_backend__erl_code_gen__STATE_VARIABLE_Info_8 = erl_backend__erl_code_gen__STATE_VARIABLE_Info_0_7;
#line 1387 "erl_code_gen.m"
      }
#line 1387 "erl_code_gen.m"
    else
#line 1387 "erl_code_gen.m"
      {
#line 1387 "erl_code_gen.m"
        MR_Word erl_backend__erl_code_gen__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__erl_code_gen__HeadVar__1_1, (MR_Integer) 1)));
#line 1387 "erl_code_gen.m"
        MR_Word erl_backend__erl_code_gen__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__erl_code_gen__HeadVar__1_1, (MR_Integer) 0)));

#line 1387 "erl_code_gen.m"
        if ((erl_backend__erl_code_gen__V_53_53 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1402 "erl_code_gen.m"
          {
#line 1402 "erl_code_gen.m"
            erl_backend__erl_code_gen__erl_gen_goal_7_p_0(erl_backend__erl_code_gen__CodeModel_2, erl_backend__erl_code_gen__HeadVar__3_3, erl_backend__erl_code_gen__V_54_54, erl_backend__erl_code_gen__HeadVar__5_5, erl_backend__erl_code_gen__Statement_6, erl_backend__erl_code_gen__STATE_VARIABLE_Info_0_7, erl_backend__erl_code_gen__STATE_VARIABLE_Info_8);
#line 1402 "erl_code_gen.m"
            return;
          }
#line 1387 "erl_code_gen.m"
        else
#line 1406 "erl_code_gen.m"
          {
#line 1406 "erl_code_gen.m"
            MR_Word erl_backend__erl_code_gen__NonLocalsBoundInGoals_42;
#line 1406 "erl_code_gen.m"
            MR_Word erl_backend__erl_code_gen__MaybeMakeClosure_43;
#line 1406 "erl_code_gen.m"
            MR_Word erl_backend__erl_code_gen__MaybeSuccessExpr_44;
#line 1406 "erl_code_gen.m"
            MR_Word erl_backend__erl_code_gen__InstMap_45;
#line 1406 "erl_code_gen.m"
            MR_Word erl_backend__erl_code_gen__DisjStatement_46;
#line 1406 "erl_code_gen.m"
            MR_Word erl_backend__erl_code_gen__STATE_VARIABLE_Info_50_50;
#line 1406 "erl_code_gen.m"
            MR_Word erl_backend__erl_code_gen__IsBound_59;
#line 1406 "erl_code_gen.m"
            MR_Word erl_backend__erl_code_gen__NonLocalsLists_60;

#line 955 "erl_code_gen.m"
            {
#line 955 "erl_code_gen.m"
              erl_backend__erl_code_gen__IsBound_59 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 955 "erl_code_gen.m"
              MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__IsBound_59, 0) = ((MR_Box) (&erl_backend__erl_code_gen_scalar_common_5[0]));
#line 955 "erl_code_gen.m"
              MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__IsBound_59, 1) = ((MR_Box) (erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_100_105_115_106_95_95_91_52_93_95_48_8_p_0_1));
#line 955 "erl_code_gen.m"
              MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__IsBound_59, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 955 "erl_code_gen.m"
              MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__IsBound_59, 3) = ((MR_Box) (erl_backend__erl_code_gen__STATE_VARIABLE_Info_0_7));
#line 955 "erl_code_gen.m"
              MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__IsBound_59, 4) = ((MR_Box) (erl_backend__erl_code_gen__HeadVar__3_3));
#line 955 "erl_code_gen.m"
            }
#line 956 "erl_code_gen.m"
            {
#line 956 "erl_code_gen.m"
              mercury__list__map_3_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, (MR_Word) &erl_backend__erl_code_gen_scalar_common_1[3], erl_backend__erl_code_gen__IsBound_59, erl_backend__erl_code_gen__HeadVar__1_1, &erl_backend__erl_code_gen__NonLocalsLists_60);
            }
#line 957 "erl_code_gen.m"
            {
#line 957 "erl_code_gen.m"
              erl_backend__erl_code_gen__NonLocalsBoundInGoals_42 = parse_tree__set_of_var__union_list_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, erl_backend__erl_code_gen__NonLocalsLists_60);
            }
#line 1415 "erl_code_gen.m"
            {
#line 1415 "erl_code_gen.m"
              erl_backend__erl_code_gen__maybe_create_closure_for_success_expr_8_p_0(erl_backend__erl_code_gen__NonLocalsBoundInGoals_42, erl_backend__erl_code_gen__HeadVar__5_5, &erl_backend__erl_code_gen__MaybeMakeClosure_43, &erl_backend__erl_code_gen__MaybeSuccessExpr_44, erl_backend__erl_code_gen__HeadVar__3_3, &erl_backend__erl_code_gen__InstMap_45, erl_backend__erl_code_gen__STATE_VARIABLE_Info_0_7, &erl_backend__erl_code_gen__STATE_VARIABLE_Info_50_50);
            }
#line 1419 "erl_code_gen.m"
            {
#line 1419 "erl_code_gen.m"
              erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_100_105_115_106_117_110_99_116_95_95_91_52_93_95_48_8_p_0(erl_backend__erl_code_gen__HeadVar__1_1, erl_backend__erl_code_gen__CodeModel_2, erl_backend__erl_code_gen__InstMap_45, erl_backend__erl_code_gen__MaybeSuccessExpr_44, &erl_backend__erl_code_gen__DisjStatement_46, erl_backend__erl_code_gen__STATE_VARIABLE_Info_50_50, erl_backend__erl_code_gen__STATE_VARIABLE_Info_8);
            }
#line 1421 "erl_code_gen.m"
            {
#line 1421 "erl_code_gen.m"
              *erl_backend__erl_code_gen__Statement_6 = erl_backend__elds__maybe_join_exprs1_2_f_0(erl_backend__erl_code_gen__MaybeMakeClosure_43, erl_backend__erl_code_gen__DisjStatement_46);
            }
#line 1406 "erl_code_gen.m"
          }
#line 1387 "erl_code_gen.m"
      }
#line 1387 "erl_code_gen.m"
  }
#line 1382 "erl_code_gen.m"
}

#line 1269 "erl_code_gen.m"
static void MR_CALL 
erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_99_111_110_106_95_50_95_95_91_52_93_95_48_8_p_0(
#line 1269 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__HeadVar__1_1,
#line 1269 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__CodeModel_2,
#line 1269 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__HeadVar__3_3,
#line 1269 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__MaybeSuccessExpr_5,
#line 1269 "erl_code_gen.m"
  MR_Word * erl_backend__erl_code_gen__Statement_6,
#line 1269 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__STATE_VARIABLE_Info_0_7,
#line 1269 "erl_code_gen.m"
  MR_Word * erl_backend__erl_code_gen__STATE_VARIABLE_Info_8)
#line 1269 "erl_code_gen.m"
{
#line 1274 "erl_code_gen.m"
  {
#line 1274 "erl_code_gen.m"
    MR_bool erl_backend__erl_code_gen__succeeded;

#line 1274 "erl_code_gen.m"
    if ((erl_backend__erl_code_gen__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1274 "erl_code_gen.m"
      {
#line 1278 "erl_code_gen.m"
#line 1278 "erl_code_gen.m"
        switch (erl_backend__erl_code_gen__CodeModel_2) {
#line 1278 "erl_code_gen.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1278 "erl_code_gen.m"
          case (MR_Integer) 0:
#line 1276 "erl_code_gen.m"
            {
#line 1276 "erl_code_gen.m"
              *erl_backend__erl_code_gen__Statement_6 = erl_backend__elds__expr_or_void_1_f_0(erl_backend__erl_code_gen__MaybeSuccessExpr_5);
            }
#line 1278 "erl_code_gen.m"
            break;
#line 1278 "erl_code_gen.m"
          case (MR_Integer) 2:
#line 1278 "erl_code_gen.m"
          case (MR_Integer) 1:
#line 1281 "erl_code_gen.m"
            {
#line 1281 "erl_code_gen.m"
              *erl_backend__erl_code_gen__Statement_6 = erl_backend__elds__det_expr_1_f_0(erl_backend__erl_code_gen__MaybeSuccessExpr_5);
            }
#line 1278 "erl_code_gen.m"
            break;
#line 1278 "erl_code_gen.m"
        }
#line 1274 "erl_code_gen.m"
        *erl_backend__erl_code_gen__STATE_VARIABLE_Info_8 = erl_backend__erl_code_gen__STATE_VARIABLE_Info_0_7;
#line 1274 "erl_code_gen.m"
      }
#line 1274 "erl_code_gen.m"
    else
#line 1274 "erl_code_gen.m"
      {
#line 1274 "erl_code_gen.m"
        MR_Word erl_backend__erl_code_gen__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__erl_code_gen__HeadVar__1_1, (MR_Integer) 1)));
#line 1274 "erl_code_gen.m"
        MR_Word erl_backend__erl_code_gen__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__erl_code_gen__HeadVar__1_1, (MR_Integer) 0)));

#line 1274 "erl_code_gen.m"
        if ((erl_backend__erl_code_gen__V_85_85 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1286 "erl_code_gen.m"
          {
#line 1286 "erl_code_gen.m"
            erl_backend__erl_code_gen__erl_gen_goal_7_p_0(erl_backend__erl_code_gen__CodeModel_2, erl_backend__erl_code_gen__HeadVar__3_3, erl_backend__erl_code_gen__V_86_86, erl_backend__erl_code_gen__MaybeSuccessExpr_5, erl_backend__erl_code_gen__Statement_6, erl_backend__erl_code_gen__STATE_VARIABLE_Info_0_7, erl_backend__erl_code_gen__STATE_VARIABLE_Info_8);
#line 1286 "erl_code_gen.m"
            return;
          }
#line 1274 "erl_code_gen.m"
        else
#line 1289 "erl_code_gen.m"
          {
#line 1289 "erl_code_gen.m"
            MR_Word erl_backend__erl_code_gen__FirstGoalInfo_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__V_86_86, (MR_Integer) 1)));
#line 1289 "erl_code_gen.m"
            MR_Word erl_backend__erl_code_gen__FirstDeterminism_40;
#line 1291 "erl_code_gen.m"
            MR_Word erl_backend__erl_code_gen__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__V_86_86, (MR_Integer) 0)));
#line 1293 "erl_code_gen.m"
            MR_Word erl_backend__erl_code_gen__V_84_84;
#line 1293 "erl_code_gen.m"
            MR_Word erl_backend__erl_code_gen__V_41_41;

#line 1292 "erl_code_gen.m"
            {
#line 1292 "erl_code_gen.m"
              erl_backend__erl_code_gen__FirstDeterminism_40 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(erl_backend__erl_code_gen__FirstGoalInfo_39);
            }
#line 1293 "erl_code_gen.m"
            {
#line 1293 "erl_code_gen.m"
              parse_tree__prog_data__determinism_components_3_p_0(erl_backend__erl_code_gen__FirstDeterminism_40, &erl_backend__erl_code_gen__V_41_41, &erl_backend__erl_code_gen__V_84_84);
            }
#line 1293 "erl_code_gen.m"
            erl_backend__erl_code_gen__succeeded = ((MR_Integer) 0 == erl_backend__erl_code_gen__V_84_84);
#line 1297 "erl_code_gen.m"
            if (erl_backend__erl_code_gen__succeeded)
#line 1296 "erl_code_gen.m"
              {
#line 1296 "erl_code_gen.m"
                {
#line 1296 "erl_code_gen.m"
                  erl_backend__erl_code_gen__erl_gen_goal_7_p_0(erl_backend__erl_code_gen__CodeModel_2, erl_backend__erl_code_gen__HeadVar__3_3, erl_backend__erl_code_gen__V_86_86, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), erl_backend__erl_code_gen__Statement_6, erl_backend__erl_code_gen__STATE_VARIABLE_Info_0_7, erl_backend__erl_code_gen__STATE_VARIABLE_Info_8);
#line 1296 "erl_code_gen.m"
                  return;
                }
#line 1296 "erl_code_gen.m"
              }
#line 1297 "erl_code_gen.m"
            else
#line 1298 "erl_code_gen.m"
              {
#line 1298 "erl_code_gen.m"
                MR_Word erl_backend__erl_code_gen__FirstCodeModel_42;
#line 1298 "erl_code_gen.m"
                MR_Word erl_backend__erl_code_gen__InstMap1_43;

#line 1298 "erl_code_gen.m"
                {
#line 1298 "erl_code_gen.m"
                  hlds__code_model__determinism_to_code_model_2_p_0(erl_backend__erl_code_gen__FirstDeterminism_40, &erl_backend__erl_code_gen__FirstCodeModel_42);
                }
#line 1299 "erl_code_gen.m"
                {
#line 1299 "erl_code_gen.m"
                  hlds__goal_util__update_instmap_3_p_0(erl_backend__erl_code_gen__V_86_86, erl_backend__erl_code_gen__HeadVar__3_3, &erl_backend__erl_code_gen__InstMap1_43);
                }
#line 1314 "erl_code_gen.m"
#line 1314 "erl_code_gen.m"
                switch (erl_backend__erl_code_gen__FirstCodeModel_42) {
#line 1314 "erl_code_gen.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 1314 "erl_code_gen.m"
                  case (MR_Integer) 0:
#line 1301 "erl_code_gen.m"
                    {
#line 1301 "erl_code_gen.m"
                      MR_Word erl_backend__erl_code_gen__FirstStatement_44;
#line 1301 "erl_code_gen.m"
                      MR_Word erl_backend__erl_code_gen__RestStatement_45;
#line 1301 "erl_code_gen.m"
                      MR_Word erl_backend__erl_code_gen__STATE_VARIABLE_Info_78_78;

#line 1309 "erl_code_gen.m"
                      {
#line 1309 "erl_code_gen.m"
                        erl_backend__erl_code_gen__erl_gen_goal_7_p_0((MR_Integer) 0, erl_backend__erl_code_gen__HeadVar__3_3, erl_backend__erl_code_gen__V_86_86, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &erl_backend__erl_code_gen__FirstStatement_44, erl_backend__erl_code_gen__STATE_VARIABLE_Info_0_7, &erl_backend__erl_code_gen__STATE_VARIABLE_Info_78_78);
                      }
#line 1311 "erl_code_gen.m"
                      {
#line 1311 "erl_code_gen.m"
                        erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_99_111_110_106_95_50_95_95_91_52_93_95_48_8_p_0(erl_backend__erl_code_gen__V_85_85, erl_backend__erl_code_gen__CodeModel_2, erl_backend__erl_code_gen__InstMap1_43, erl_backend__erl_code_gen__MaybeSuccessExpr_5, &erl_backend__erl_code_gen__RestStatement_45, erl_backend__erl_code_gen__STATE_VARIABLE_Info_78_78, erl_backend__erl_code_gen__STATE_VARIABLE_Info_8);
                      }
#line 1313 "erl_code_gen.m"
                      {
#line 1313 "erl_code_gen.m"
                        *erl_backend__erl_code_gen__Statement_6 = erl_backend__elds__join_exprs_2_f_0(erl_backend__erl_code_gen__FirstStatement_44, erl_backend__erl_code_gen__RestStatement_45);
                      }
#line 1301 "erl_code_gen.m"
                    }
#line 1314 "erl_code_gen.m"
                    break;
#line 1314 "erl_code_gen.m"
                  case (MR_Integer) 2:
#line 1332 "erl_code_gen.m"
                    {
#line 1332 "erl_code_gen.m"
                      MR_Word erl_backend__erl_code_gen__NonLocalsSet_46;
#line 1332 "erl_code_gen.m"
                      MR_Word erl_backend__erl_code_gen__NonLocals_47;
#line 1332 "erl_code_gen.m"
                      MR_Word erl_backend__erl_code_gen__SucceedFunc0_48;
#line 1332 "erl_code_gen.m"
                      MR_Word erl_backend__erl_code_gen__Subst_49;
#line 1332 "erl_code_gen.m"
                      MR_Word erl_backend__erl_code_gen__SucceedFunc_50;
#line 1332 "erl_code_gen.m"
                      MR_Word erl_backend__erl_code_gen__SucceedVar_51;
#line 1332 "erl_code_gen.m"
                      MR_Word erl_backend__erl_code_gen__InstMap_52;
#line 1332 "erl_code_gen.m"
                      MR_Word erl_backend__erl_code_gen__SucceedVarExpr_53;
#line 1332 "erl_code_gen.m"
                      MR_Word erl_backend__erl_code_gen__MakeSucceed_54;
#line 1332 "erl_code_gen.m"
                      MR_Word erl_backend__erl_code_gen__CallSucceed_55;
#line 1332 "erl_code_gen.m"
                      MR_Word erl_backend__erl_code_gen__STATE_VARIABLE_Info_61_61;
#line 1332 "erl_code_gen.m"
                      MR_Word erl_backend__erl_code_gen__V_62_62;
#line 1332 "erl_code_gen.m"
                      MR_Word erl_backend__erl_code_gen__V_63_63;
#line 1332 "erl_code_gen.m"
                      MR_Word erl_backend__erl_code_gen__STATE_VARIABLE_Info_64_64;
#line 1332 "erl_code_gen.m"
                      MR_Word erl_backend__erl_code_gen__STATE_VARIABLE_Info_66_66;
#line 1332 "erl_code_gen.m"
                      MR_Word erl_backend__erl_code_gen__V_67_67;
#line 1332 "erl_code_gen.m"
                      MR_Word erl_backend__erl_code_gen__V_68_68;
#line 1332 "erl_code_gen.m"
                      MR_Word erl_backend__erl_code_gen__V_70_70;
#line 1332 "erl_code_gen.m"
                      MR_Word erl_backend__erl_code_gen__FirstStatement_81;
#line 1332 "erl_code_gen.m"
                      MR_Word erl_backend__erl_code_gen__RestStatement_82;

#line 1344 "erl_code_gen.m"
                      {
#line 1344 "erl_code_gen.m"
                        erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_99_111_110_106_95_50_95_95_91_52_93_95_48_8_p_0(erl_backend__erl_code_gen__V_85_85, erl_backend__erl_code_gen__CodeModel_2, erl_backend__erl_code_gen__InstMap1_43, erl_backend__erl_code_gen__MaybeSuccessExpr_5, &erl_backend__erl_code_gen__RestStatement_82, erl_backend__erl_code_gen__STATE_VARIABLE_Info_0_7, &erl_backend__erl_code_gen__STATE_VARIABLE_Info_61_61);
                      }
#line 1348 "erl_code_gen.m"
                      {
#line 1348 "erl_code_gen.m"
                        erl_backend__erl_code_util__erl_bound_nonlocals_in_goal_4_p_0(erl_backend__erl_code_gen__STATE_VARIABLE_Info_61_61, erl_backend__erl_code_gen__HeadVar__3_3, erl_backend__erl_code_gen__V_86_86, &erl_backend__erl_code_gen__NonLocalsSet_46);
                      }
#line 1349 "erl_code_gen.m"
                      {
#line 1349 "erl_code_gen.m"
                        erl_backend__erl_code_gen__NonLocals_47 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, erl_backend__erl_code_gen__NonLocalsSet_46);
                      }
#line 1353 "erl_code_gen.m"
                      {
#line 1353 "erl_code_gen.m"
                        erl_backend__erl_code_gen__V_63_63 = erl_backend__elds__terms_from_vars_1_f_0(erl_backend__erl_code_gen__NonLocals_47);
                      }
#line 1353 "erl_code_gen.m"
                      {
#line 1353 "erl_code_gen.m"
                        erl_backend__erl_code_gen__V_62_62 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1353 "erl_code_gen.m"
                        MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__V_62_62, 0) = ((MR_Box) (erl_backend__erl_code_gen__V_63_63));
#line 1353 "erl_code_gen.m"
                        MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__V_62_62, 1) = ((MR_Box) (erl_backend__erl_code_gen__RestStatement_82));
#line 1353 "erl_code_gen.m"
                      }
#line 1353 "erl_code_gen.m"
                      erl_backend__erl_code_gen__SucceedFunc0_48 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) erl_backend__erl_code_gen__V_62_62);
#line 1355 "erl_code_gen.m"
                      {
#line 1355 "erl_code_gen.m"
                        erl_backend__erl_code_util__erl_create_renaming_4_p_0(erl_backend__erl_code_gen__NonLocals_47, &erl_backend__erl_code_gen__Subst_49, erl_backend__erl_code_gen__STATE_VARIABLE_Info_61_61, &erl_backend__erl_code_gen__STATE_VARIABLE_Info_64_64);
                      }
#line 1356 "erl_code_gen.m"
                      {
#line 1356 "erl_code_gen.m"
                        erl_backend__erl_code_util__erl_rename_vars_in_expr_3_p_0(erl_backend__erl_code_gen__Subst_49, erl_backend__erl_code_gen__SucceedFunc0_48, &erl_backend__erl_code_gen__SucceedFunc_50);
                      }
#line 1360 "erl_code_gen.m"
                      {
#line 1360 "erl_code_gen.m"
                        erl_backend__erl_code_util__erl_gen_info_new_named_var_4_p_0((MR_String) "SucceedConj", &erl_backend__erl_code_gen__SucceedVar_51, erl_backend__erl_code_gen__STATE_VARIABLE_Info_64_64, &erl_backend__erl_code_gen__STATE_VARIABLE_Info_66_66);
                      }
#line 1017 "erl_code_gen.m"
                      {
#line 1017 "erl_code_gen.m"
                        hlds__instmap__instmap_set_var_4_p_0(erl_backend__erl_code_gen__SucceedVar_51, (MR_Word) MR_mkword(MR_mktag(3), &erl_backend__erl_code_gen_scalar_common_3[0]), erl_backend__erl_code_gen__HeadVar__3_3, &erl_backend__erl_code_gen__InstMap_52);
                      }
#line 1363 "erl_code_gen.m"
                      {
#line 1363 "erl_code_gen.m"
                        erl_backend__erl_code_gen__SucceedVarExpr_53 = erl_backend__elds__expr_from_var_1_f_0(erl_backend__erl_code_gen__SucceedVar_51);
                      }
#line 1364 "erl_code_gen.m"
                      {
#line 1364 "erl_code_gen.m"
                        erl_backend__erl_code_gen__MakeSucceed_54 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1364 "erl_code_gen.m"
                        MR_hl_field(MR_mktag(3), erl_backend__erl_code_gen__MakeSucceed_54, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 1364 "erl_code_gen.m"
                        MR_hl_field(MR_mktag(3), erl_backend__erl_code_gen__MakeSucceed_54, 1) = ((MR_Box) (erl_backend__erl_code_gen__SucceedVarExpr_53));
#line 1364 "erl_code_gen.m"
                        MR_hl_field(MR_mktag(3), erl_backend__erl_code_gen__MakeSucceed_54, 2) = ((MR_Box) (erl_backend__erl_code_gen__SucceedFunc_50));
#line 1364 "erl_code_gen.m"
                      }
#line 1365 "erl_code_gen.m"
                      {
#line 1365 "erl_code_gen.m"
                        erl_backend__erl_code_gen__V_67_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1365 "erl_code_gen.m"
                        MR_hl_field(MR_mktag(1), erl_backend__erl_code_gen__V_67_67, 0) = ((MR_Box) (erl_backend__erl_code_gen__SucceedVarExpr_53));
#line 1365 "erl_code_gen.m"
                      }
#line 1366 "erl_code_gen.m"
                      {
#line 1366 "erl_code_gen.m"
                        erl_backend__erl_code_gen__V_68_68 = erl_backend__elds__exprs_from_vars_1_f_0(erl_backend__erl_code_gen__NonLocals_47);
                      }
#line 1365 "erl_code_gen.m"
                      {
#line 1365 "erl_code_gen.m"
                        erl_backend__erl_code_gen__CallSucceed_55 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1365 "erl_code_gen.m"
                        MR_hl_field(MR_mktag(3), erl_backend__erl_code_gen__CallSucceed_55, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 1365 "erl_code_gen.m"
                        MR_hl_field(MR_mktag(3), erl_backend__erl_code_gen__CallSucceed_55, 1) = ((MR_Box) (erl_backend__erl_code_gen__V_67_67));
#line 1365 "erl_code_gen.m"
                        MR_hl_field(MR_mktag(3), erl_backend__erl_code_gen__CallSucceed_55, 2) = ((MR_Box) (erl_backend__erl_code_gen__V_68_68));
#line 1365 "erl_code_gen.m"
                      }
#line 1370 "erl_code_gen.m"
                      {
#line 1370 "erl_code_gen.m"
                        erl_backend__erl_code_gen__V_70_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1370 "erl_code_gen.m"
                        MR_hl_field(MR_mktag(1), erl_backend__erl_code_gen__V_70_70, 0) = ((MR_Box) (erl_backend__erl_code_gen__CallSucceed_55));
#line 1370 "erl_code_gen.m"
                      }
#line 1370 "erl_code_gen.m"
                      {
#line 1370 "erl_code_gen.m"
                        erl_backend__erl_code_gen__erl_gen_goal_7_p_0((MR_Integer) 2, erl_backend__erl_code_gen__InstMap_52, erl_backend__erl_code_gen__V_86_86, erl_backend__erl_code_gen__V_70_70, &erl_backend__erl_code_gen__FirstStatement_81, erl_backend__erl_code_gen__STATE_VARIABLE_Info_66_66, erl_backend__erl_code_gen__STATE_VARIABLE_Info_8);
                      }
#line 1373 "erl_code_gen.m"
                      {
#line 1373 "erl_code_gen.m"
                        *erl_backend__erl_code_gen__Statement_6 = erl_backend__elds__join_exprs_2_f_0(erl_backend__erl_code_gen__MakeSucceed_54, erl_backend__erl_code_gen__FirstStatement_81);
                      }
#line 1332 "erl_code_gen.m"
                    }
#line 1314 "erl_code_gen.m"
                    break;
#line 1314 "erl_code_gen.m"
                  case (MR_Integer) 1:
#line 1315 "erl_code_gen.m"
                    {
#line 1315 "erl_code_gen.m"
                      MR_Word erl_backend__erl_code_gen__STATE_VARIABLE_Info_72_72;
#line 1315 "erl_code_gen.m"
                      MR_Word erl_backend__erl_code_gen__V_74_74;
#line 1315 "erl_code_gen.m"
                      MR_Word erl_backend__erl_code_gen__RestStatement_80;

#line 1327 "erl_code_gen.m"
                      {
#line 1327 "erl_code_gen.m"
                        erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_99_111_110_106_95_50_95_95_91_52_93_95_48_8_p_0(erl_backend__erl_code_gen__V_85_85, erl_backend__erl_code_gen__CodeModel_2, erl_backend__erl_code_gen__InstMap1_43, erl_backend__erl_code_gen__MaybeSuccessExpr_5, &erl_backend__erl_code_gen__RestStatement_80, erl_backend__erl_code_gen__STATE_VARIABLE_Info_0_7, &erl_backend__erl_code_gen__STATE_VARIABLE_Info_72_72);
                      }
#line 1329 "erl_code_gen.m"
                      {
#line 1329 "erl_code_gen.m"
                        erl_backend__erl_code_gen__V_74_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1329 "erl_code_gen.m"
                        MR_hl_field(MR_mktag(1), erl_backend__erl_code_gen__V_74_74, 0) = ((MR_Box) (erl_backend__erl_code_gen__RestStatement_80));
#line 1329 "erl_code_gen.m"
                      }
#line 1329 "erl_code_gen.m"
                      {
#line 1329 "erl_code_gen.m"
                        erl_backend__erl_code_gen__erl_gen_goal_7_p_0((MR_Integer) 1, erl_backend__erl_code_gen__HeadVar__3_3, erl_backend__erl_code_gen__V_86_86, erl_backend__erl_code_gen__V_74_74, erl_backend__erl_code_gen__Statement_6, erl_backend__erl_code_gen__STATE_VARIABLE_Info_72_72, erl_backend__erl_code_gen__STATE_VARIABLE_Info_8);
#line 1329 "erl_code_gen.m"
                        return;
                      }
#line 1315 "erl_code_gen.m"
                    }
#line 1314 "erl_code_gen.m"
                    break;
#line 1314 "erl_code_gen.m"
                }
#line 1298 "erl_code_gen.m"
              }
#line 1289 "erl_code_gen.m"
          }
#line 1274 "erl_code_gen.m"
      }
#line 1274 "erl_code_gen.m"
  }
#line 1269 "erl_code_gen.m"
}

#line 1246 "erl_code_gen.m"
static void MR_CALL 
erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_99_111_110_106_95_95_91_53_93_95_48_9_p_0(
#line 1246 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__Goals_10,
#line 1246 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__CodeModel_11,
#line 1246 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__Detism_12,
#line 1246 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__InstMap_13,
#line 1246 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__MaybeSuccessExpr_15,
#line 1246 "erl_code_gen.m"
  MR_Word * erl_backend__erl_code_gen__Statement_16,
#line 1246 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__STATE_VARIABLE_Info_0_21,
#line 1246 "erl_code_gen.m"
  MR_Word * erl_backend__erl_code_gen__STATE_VARIABLE_Info_22)
#line 1246 "erl_code_gen.m"
{
#line 1251 "erl_code_gen.m"
  {
#line 1251 "erl_code_gen.m"
    MR_bool erl_backend__erl_code_gen__succeeded;
#line 1251 "erl_code_gen.m"
    MR_Word erl_backend__erl_code_gen__Statement0_18;
#line 1251 "erl_code_gen.m"
    MR_Word erl_backend__erl_code_gen__STATE_VARIABLE_Info_23_23;

#line 1252 "erl_code_gen.m"
    {
#line 1252 "erl_code_gen.m"
      erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_99_111_110_106_95_50_95_95_91_52_93_95_48_8_p_0(erl_backend__erl_code_gen__Goals_10, erl_backend__erl_code_gen__CodeModel_11, erl_backend__erl_code_gen__InstMap_13, erl_backend__erl_code_gen__MaybeSuccessExpr_15, &erl_backend__erl_code_gen__Statement0_18, erl_backend__erl_code_gen__STATE_VARIABLE_Info_0_21, &erl_backend__erl_code_gen__STATE_VARIABLE_Info_23_23);
    }
#line 1254 "erl_code_gen.m"
    erl_backend__erl_code_gen__succeeded = (erl_backend__erl_code_gen__Detism_12 == (MR_Integer) 6);
#line 1265 "erl_code_gen.m"
    if (erl_backend__erl_code_gen__succeeded)
#line 1262 "erl_code_gen.m"
      {
#line 1262 "erl_code_gen.m"
        MR_Word erl_backend__erl_code_gen__ModuleInfo_19;
#line 1262 "erl_code_gen.m"
        MR_Word erl_backend__erl_code_gen__BoundVars_20;

#line 1262 "erl_code_gen.m"
        {
#line 1262 "erl_code_gen.m"
          erl_backend__erl_code_util__erl_gen_info_get_module_info_2_p_0(erl_backend__erl_code_gen__STATE_VARIABLE_Info_23_23, &erl_backend__erl_code_gen__ModuleInfo_19);
        }
#line 1263 "erl_code_gen.m"
        {
#line 1263 "erl_code_gen.m"
          hlds__instmap__instmap_bound_vars_3_p_0(erl_backend__erl_code_gen__InstMap_13, erl_backend__erl_code_gen__ModuleInfo_19, &erl_backend__erl_code_gen__BoundVars_20);
        }
#line 1264 "erl_code_gen.m"
        {
#line 1264 "erl_code_gen.m"
          erl_backend__erl_code_util__erl_rename_vars_in_expr_except_5_p_0(erl_backend__erl_code_gen__BoundVars_20, erl_backend__erl_code_gen__Statement0_18, erl_backend__erl_code_gen__Statement_16, erl_backend__erl_code_gen__STATE_VARIABLE_Info_23_23, erl_backend__erl_code_gen__STATE_VARIABLE_Info_22);
#line 1264 "erl_code_gen.m"
          return;
        }
#line 1262 "erl_code_gen.m"
      }
#line 1265 "erl_code_gen.m"
    else
#line 1266 "erl_code_gen.m"
      {
#line 1266 "erl_code_gen.m"
        *erl_backend__erl_code_gen__Statement_16 = erl_backend__erl_code_gen__Statement0_18;
#line 1266 "erl_code_gen.m"
        *erl_backend__erl_code_gen__STATE_VARIABLE_Info_22 = erl_backend__erl_code_gen__STATE_VARIABLE_Info_23_23;
#line 1266 "erl_code_gen.m"
      }
#line 1251 "erl_code_gen.m"
  }
#line 1246 "erl_code_gen.m"
}

#line 1179 "erl_code_gen.m"
static void MR_CALL 
erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_110_101_103_97_116_105_111_110_95_95_91_52_93_95_48_8_p_0(
#line 1179 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__Cond_9,
#line 1179 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__CodeModel_10,
#line 1179 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__InstMap_11,
#line 1179 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__MaybeSuccessExpr_13,
#line 1179 "erl_code_gen.m"
  MR_Word * erl_backend__erl_code_gen__Statement_14,
#line 1179 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__STATE_VARIABLE_Info_0_24,
#line 1179 "erl_code_gen.m"
  MR_Word * erl_backend__erl_code_gen__STATE_VARIABLE_Info_25)
#line 1179 "erl_code_gen.m"
{
#line 1184 "erl_code_gen.m"
  {
#line 1184 "erl_code_gen.m"
    MR_bool erl_backend__erl_code_gen__succeeded;
#line 1184 "erl_code_gen.m"
    MR_Word erl_backend__erl_code_gen__CondGoalInfo_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__Cond_9, (MR_Integer) 1)));
#line 1184 "erl_code_gen.m"
    MR_Word erl_backend__erl_code_gen__CondCodeModel_18;
#line 1185 "erl_code_gen.m"
    MR_Word erl_backend__erl_code_gen__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__Cond_9, (MR_Integer) 0)));

#line 1186 "erl_code_gen.m"
    {
#line 1186 "erl_code_gen.m"
      erl_backend__erl_code_gen__CondCodeModel_18 = hlds__code_model__goal_info_get_code_model_1_f_0(erl_backend__erl_code_gen__CondGoalInfo_17);
    }
#line 1201 "erl_code_gen.m"
#line 1201 "erl_code_gen.m"
    switch (erl_backend__erl_code_gen__CodeModel_10) {
#line 1201 "erl_code_gen.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1201 "erl_code_gen.m"
      case (MR_Integer) 0:
#line 1193 "erl_code_gen.m"
        {
#line 1193 "erl_code_gen.m"
          MR_Word erl_backend__erl_code_gen__DummySuccessExpr_19;
#line 1193 "erl_code_gen.m"
          MR_Word erl_backend__erl_code_gen__CondStatement_20;
#line 1193 "erl_code_gen.m"
          MR_Word erl_backend__erl_code_gen__V_49_49;
#line 1193 "erl_code_gen.m"
          MR_Word erl_backend__erl_code_gen__V_51_51;

#line 1197 "erl_code_gen.m"
          {
#line 1197 "erl_code_gen.m"
            erl_backend__erl_code_gen__V_49_49 = erl_backend__elds__elds_empty_tuple_0_f_0();
          }
#line 1197 "erl_code_gen.m"
          {
#line 1197 "erl_code_gen.m"
            erl_backend__erl_code_gen__DummySuccessExpr_19 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1197 "erl_code_gen.m"
            MR_hl_field(MR_mktag(2), erl_backend__erl_code_gen__DummySuccessExpr_19, 0) = ((MR_Box) (erl_backend__erl_code_gen__V_49_49));
#line 1197 "erl_code_gen.m"
          }
#line 1198 "erl_code_gen.m"
          {
#line 1198 "erl_code_gen.m"
            erl_backend__erl_code_gen__V_51_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1198 "erl_code_gen.m"
            MR_hl_field(MR_mktag(1), erl_backend__erl_code_gen__V_51_51, 0) = ((MR_Box) (erl_backend__erl_code_gen__DummySuccessExpr_19));
#line 1198 "erl_code_gen.m"
          }
#line 1198 "erl_code_gen.m"
          {
#line 1198 "erl_code_gen.m"
            erl_backend__erl_code_gen__erl_gen_goal_7_p_0((MR_Integer) 1, erl_backend__erl_code_gen__InstMap_11, erl_backend__erl_code_gen__Cond_9, erl_backend__erl_code_gen__V_51_51, &erl_backend__erl_code_gen__CondStatement_20, erl_backend__erl_code_gen__STATE_VARIABLE_Info_0_24, erl_backend__erl_code_gen__STATE_VARIABLE_Info_25);
          }
#line 1200 "erl_code_gen.m"
          {
#line 1200 "erl_code_gen.m"
            *erl_backend__erl_code_gen__Statement_14 = erl_backend__elds__maybe_join_exprs_2_f_0(erl_backend__erl_code_gen__CondStatement_20, erl_backend__erl_code_gen__MaybeSuccessExpr_13);
          }
#line 1193 "erl_code_gen.m"
        }
#line 1201 "erl_code_gen.m"
        break;
#line 1201 "erl_code_gen.m"
      case (MR_Integer) 2:
#line 1237 "erl_code_gen.m"
        {
#line 1238 "erl_code_gen.m"
          {
#line 1238 "erl_code_gen.m"
            mercury__require__unexpected_3_p_0((MR_String) "erl_backend.erl_code_gen", (MR_String) "predicate \140erl_backend.erl_code_gen.erl_gen_negation\'/8", (MR_String) "nondet negation");
#line 1238 "erl_code_gen.m"
            return;
          }
#line 1237 "erl_code_gen.m"
        }
#line 1201 "erl_code_gen.m"
        break;
#line 1201 "erl_code_gen.m"
      case (MR_Integer) 1:
#line 1201 "erl_code_gen.m"
#line 1201 "erl_code_gen.m"
        switch (erl_backend__erl_code_gen__CondCodeModel_18) {
#line 1201 "erl_code_gen.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1201 "erl_code_gen.m"
          case (MR_Integer) 0:
#line 1208 "erl_code_gen.m"
            {
#line 1208 "erl_code_gen.m"
              MR_Word erl_backend__erl_code_gen__V_47_47;
#line 1208 "erl_code_gen.m"
              MR_Word erl_backend__erl_code_gen__V_48_48;
#line 1208 "erl_code_gen.m"
              MR_Word erl_backend__erl_code_gen__CondStatement_53;

#line 1209 "erl_code_gen.m"
              {
#line 1209 "erl_code_gen.m"
                erl_backend__erl_code_gen__erl_gen_goal_7_p_0((MR_Integer) 0, erl_backend__erl_code_gen__InstMap_11, erl_backend__erl_code_gen__Cond_9, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &erl_backend__erl_code_gen__CondStatement_53, erl_backend__erl_code_gen__STATE_VARIABLE_Info_0_24, erl_backend__erl_code_gen__STATE_VARIABLE_Info_25);
              }
#line 1210 "erl_code_gen.m"
              {
#line 1210 "erl_code_gen.m"
                erl_backend__erl_code_gen__V_48_48 = erl_backend__elds__elds_fail_0_f_0();
              }
#line 1210 "erl_code_gen.m"
              {
#line 1210 "erl_code_gen.m"
                erl_backend__erl_code_gen__V_47_47 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1210 "erl_code_gen.m"
                MR_hl_field(MR_mktag(2), erl_backend__erl_code_gen__V_47_47, 0) = ((MR_Box) (erl_backend__erl_code_gen__V_48_48));
#line 1210 "erl_code_gen.m"
              }
#line 1210 "erl_code_gen.m"
              {
#line 1210 "erl_code_gen.m"
                *erl_backend__erl_code_gen__Statement_14 = erl_backend__elds__join_exprs_2_f_0(erl_backend__erl_code_gen__CondStatement_53, erl_backend__erl_code_gen__V_47_47);
              }
#line 1208 "erl_code_gen.m"
            }
#line 1201 "erl_code_gen.m"
            break;
#line 1201 "erl_code_gen.m"
          case (MR_Integer) 2:
#line 1234 "erl_code_gen.m"
            {
#line 1235 "erl_code_gen.m"
              {
#line 1235 "erl_code_gen.m"
                mercury__require__unexpected_3_p_0((MR_String) "erl_backend.erl_code_gen", (MR_String) "predicate \140erl_backend.erl_code_gen.erl_gen_negation\'/8", (MR_String) "nondet cond");
#line 1235 "erl_code_gen.m"
                return;
              }
#line 1234 "erl_code_gen.m"
            }
#line 1201 "erl_code_gen.m"
            break;
#line 1201 "erl_code_gen.m"
          case (MR_Integer) 1:
#line 1225 "erl_code_gen.m"
            {
#line 1225 "erl_code_gen.m"
              MR_Word erl_backend__erl_code_gen__OnSuccess_21;
#line 1225 "erl_code_gen.m"
              MR_Word erl_backend__erl_code_gen__FailCase_22;
#line 1225 "erl_code_gen.m"
              MR_Word erl_backend__erl_code_gen__OtherCase_23;
#line 1225 "erl_code_gen.m"
              MR_Word erl_backend__erl_code_gen__V_32_32;
#line 1225 "erl_code_gen.m"
              MR_Word erl_backend__erl_code_gen__V_33_33;
#line 1225 "erl_code_gen.m"
              MR_Word erl_backend__erl_code_gen__V_36_36;
#line 1225 "erl_code_gen.m"
              MR_Word erl_backend__erl_code_gen__V_37_37;
#line 1225 "erl_code_gen.m"
              MR_Word erl_backend__erl_code_gen__V_39_39;
#line 1225 "erl_code_gen.m"
              MR_Word erl_backend__erl_code_gen__V_40_40;
#line 1225 "erl_code_gen.m"
              MR_Word erl_backend__erl_code_gen__V_42_42;
#line 1225 "erl_code_gen.m"
              MR_Word erl_backend__erl_code_gen__V_43_43;
#line 1225 "erl_code_gen.m"
              MR_Word erl_backend__erl_code_gen__CondStatement_54;

#line 1227 "erl_code_gen.m"
              {
#line 1227 "erl_code_gen.m"
                erl_backend__erl_code_gen__V_33_33 = erl_backend__elds__elds_true_0_f_0();
              }
#line 1227 "erl_code_gen.m"
              {
#line 1227 "erl_code_gen.m"
                erl_backend__erl_code_gen__V_32_32 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1227 "erl_code_gen.m"
                MR_hl_field(MR_mktag(2), erl_backend__erl_code_gen__V_32_32, 0) = ((MR_Box) (erl_backend__erl_code_gen__V_33_33));
#line 1227 "erl_code_gen.m"
              }
#line 1227 "erl_code_gen.m"
              {
#line 1227 "erl_code_gen.m"
                erl_backend__erl_code_gen__OnSuccess_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1227 "erl_code_gen.m"
                MR_hl_field(MR_mktag(1), erl_backend__erl_code_gen__OnSuccess_21, 0) = ((MR_Box) (erl_backend__erl_code_gen__V_32_32));
#line 1227 "erl_code_gen.m"
              }
#line 1228 "erl_code_gen.m"
              {
#line 1228 "erl_code_gen.m"
                erl_backend__erl_code_gen__erl_gen_goal_7_p_0((MR_Integer) 1, erl_backend__erl_code_gen__InstMap_11, erl_backend__erl_code_gen__Cond_9, erl_backend__erl_code_gen__OnSuccess_21, &erl_backend__erl_code_gen__CondStatement_54, erl_backend__erl_code_gen__STATE_VARIABLE_Info_0_24, erl_backend__erl_code_gen__STATE_VARIABLE_Info_25);
              }
#line 1231 "erl_code_gen.m"
              {
#line 1231 "erl_code_gen.m"
                erl_backend__erl_code_gen__V_39_39 = erl_backend__elds__elds_fail_0_f_0();
              }
#line 1231 "erl_code_gen.m"
              {
#line 1231 "erl_code_gen.m"
                erl_backend__erl_code_gen__V_40_40 = erl_backend__elds__expr_or_void_1_f_0(erl_backend__erl_code_gen__MaybeSuccessExpr_13);
              }
#line 1231 "erl_code_gen.m"
              {
#line 1231 "erl_code_gen.m"
                erl_backend__erl_code_gen__FailCase_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1231 "erl_code_gen.m"
                MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__FailCase_22, 0) = ((MR_Box) (erl_backend__erl_code_gen__V_39_39));
#line 1231 "erl_code_gen.m"
                MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__FailCase_22, 1) = ((MR_Box) (erl_backend__erl_code_gen__V_40_40));
#line 1231 "erl_code_gen.m"
              }
#line 1232 "erl_code_gen.m"
              {
#line 1232 "erl_code_gen.m"
                erl_backend__erl_code_gen__V_43_43 = erl_backend__elds__elds_fail_0_f_0();
              }
#line 1232 "erl_code_gen.m"
              {
#line 1232 "erl_code_gen.m"
                erl_backend__erl_code_gen__V_42_42 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1232 "erl_code_gen.m"
                MR_hl_field(MR_mktag(2), erl_backend__erl_code_gen__V_42_42, 0) = ((MR_Box) (erl_backend__erl_code_gen__V_43_43));
#line 1232 "erl_code_gen.m"
              }
#line 1232 "erl_code_gen.m"
              {
#line 1232 "erl_code_gen.m"
                erl_backend__erl_code_gen__OtherCase_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1232 "erl_code_gen.m"
                MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__OtherCase_23, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1232 "erl_code_gen.m"
                MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__OtherCase_23, 1) = ((MR_Box) (erl_backend__erl_code_gen__V_42_42));
#line 1232 "erl_code_gen.m"
              }
#line 1230 "erl_code_gen.m"
              {
#line 1230 "erl_code_gen.m"
                erl_backend__erl_code_gen__V_37_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1230 "erl_code_gen.m"
                MR_hl_field(MR_mktag(1), erl_backend__erl_code_gen__V_37_37, 0) = ((MR_Box) (erl_backend__erl_code_gen__OtherCase_23));
#line 1230 "erl_code_gen.m"
                MR_hl_field(MR_mktag(1), erl_backend__erl_code_gen__V_37_37, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1230 "erl_code_gen.m"
              }
#line 1230 "erl_code_gen.m"
              {
#line 1230 "erl_code_gen.m"
                erl_backend__erl_code_gen__V_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1230 "erl_code_gen.m"
                MR_hl_field(MR_mktag(1), erl_backend__erl_code_gen__V_36_36, 0) = ((MR_Box) (erl_backend__erl_code_gen__FailCase_22));
#line 1230 "erl_code_gen.m"
                MR_hl_field(MR_mktag(1), erl_backend__erl_code_gen__V_36_36, 1) = ((MR_Box) (erl_backend__erl_code_gen__V_37_37));
#line 1230 "erl_code_gen.m"
              }
#line 1230 "erl_code_gen.m"
              {
#line 1230 "erl_code_gen.m"
                MR_Word base;
#line 1230 "erl_code_gen.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1230 "erl_code_gen.m"
                *erl_backend__erl_code_gen__Statement_14 = base;
#line 1230 "erl_code_gen.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 1230 "erl_code_gen.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (erl_backend__erl_code_gen__CondStatement_54));
#line 1230 "erl_code_gen.m"
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (erl_backend__erl_code_gen__V_36_36));
#line 1230 "erl_code_gen.m"
              }
#line 1225 "erl_code_gen.m"
            }
#line 1201 "erl_code_gen.m"
            break;
#line 1201 "erl_code_gen.m"
        }
#line 1201 "erl_code_gen.m"
        break;
#line 1201 "erl_code_gen.m"
    }
#line 1184 "erl_code_gen.m"
  }
#line 1179 "erl_code_gen.m"
}

#line 1024 "erl_code_gen.m"
static void MR_CALL 
erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_105_116_101_95_95_91_54_93_95_48_10_p_0(
#line 1024 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__CodeModel_11,
#line 1024 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__InstMap0_12,
#line 1024 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__Cond_13,
#line 1024 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__Then_14,
#line 1024 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__Else_15,
#line 1024 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__MaybeSuccessExpr0_17,
#line 1024 "erl_code_gen.m"
  MR_Word * erl_backend__erl_code_gen__Statement_18,
#line 1024 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__STATE_VARIABLE_Info_0_57,
#line 1024 "erl_code_gen.m"
  MR_Word * erl_backend__erl_code_gen__STATE_VARIABLE_Info_58)
#line 1024 "erl_code_gen.m"
{
#line 1030 "erl_code_gen.m"
  {
#line 1030 "erl_code_gen.m"
    MR_bool erl_backend__erl_code_gen__succeeded;
#line 1030 "erl_code_gen.m"
    MR_Word erl_backend__erl_code_gen__CondGoalInfo_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__Cond_13, (MR_Integer) 1)));
#line 1030 "erl_code_gen.m"
    MR_Word erl_backend__erl_code_gen__CondCodeModel_22;
#line 1031 "erl_code_gen.m"
    MR_Word erl_backend__erl_code_gen__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__Cond_13, (MR_Integer) 0)));

#line 1032 "erl_code_gen.m"
    {
#line 1032 "erl_code_gen.m"
      erl_backend__erl_code_gen__CondCodeModel_22 = hlds__code_model__goal_info_get_code_model_1_f_0(erl_backend__erl_code_gen__CondGoalInfo_21);
    }
#line 1052 "erl_code_gen.m"
#line 1052 "erl_code_gen.m"
    switch (erl_backend__erl_code_gen__CondCodeModel_22) {
#line 1052 "erl_code_gen.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1052 "erl_code_gen.m"
      case (MR_Integer) 0:
#line 1040 "erl_code_gen.m"
        {
#line 1040 "erl_code_gen.m"
          MR_Word erl_backend__erl_code_gen__CondStatement_23;
#line 1040 "erl_code_gen.m"
          MR_Word erl_backend__erl_code_gen__CondDeterminism_24;
#line 1040 "erl_code_gen.m"
          MR_Word erl_backend__erl_code_gen__STATE_VARIABLE_Info_107_107;

#line 1041 "erl_code_gen.m"
          {
#line 1041 "erl_code_gen.m"
            erl_backend__erl_code_gen__erl_gen_goal_7_p_0((MR_Integer) 0, erl_backend__erl_code_gen__InstMap0_12, erl_backend__erl_code_gen__Cond_13, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &erl_backend__erl_code_gen__CondStatement_23, erl_backend__erl_code_gen__STATE_VARIABLE_Info_0_57, &erl_backend__erl_code_gen__STATE_VARIABLE_Info_107_107);
          }
#line 1042 "erl_code_gen.m"
          {
#line 1042 "erl_code_gen.m"
            erl_backend__erl_code_gen__CondDeterminism_24 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(erl_backend__erl_code_gen__CondGoalInfo_21);
          }
#line 1043 "erl_code_gen.m"
          erl_backend__erl_code_gen__succeeded = (erl_backend__erl_code_gen__CondDeterminism_24 == (MR_Integer) 6);
#line 1046 "erl_code_gen.m"
          if (erl_backend__erl_code_gen__succeeded)
#line 1045 "erl_code_gen.m"
            {
#line 1045 "erl_code_gen.m"
              *erl_backend__erl_code_gen__Statement_18 = erl_backend__erl_code_gen__CondStatement_23;
#line 1045 "erl_code_gen.m"
              *erl_backend__erl_code_gen__STATE_VARIABLE_Info_58 = erl_backend__erl_code_gen__STATE_VARIABLE_Info_107_107;
#line 1045 "erl_code_gen.m"
            }
#line 1046 "erl_code_gen.m"
          else
#line 1047 "erl_code_gen.m"
            {
#line 1047 "erl_code_gen.m"
              MR_Word erl_backend__erl_code_gen__CondInstMap_25;
#line 1047 "erl_code_gen.m"
              MR_Word erl_backend__erl_code_gen__ThenStatement_26;

#line 1047 "erl_code_gen.m"
              {
#line 1047 "erl_code_gen.m"
                hlds__goal_util__update_instmap_3_p_0(erl_backend__erl_code_gen__Cond_13, erl_backend__erl_code_gen__InstMap0_12, &erl_backend__erl_code_gen__CondInstMap_25);
              }
#line 1048 "erl_code_gen.m"
              {
#line 1048 "erl_code_gen.m"
                erl_backend__erl_code_gen__erl_gen_goal_7_p_0(erl_backend__erl_code_gen__CodeModel_11, erl_backend__erl_code_gen__CondInstMap_25, erl_backend__erl_code_gen__Then_14, erl_backend__erl_code_gen__MaybeSuccessExpr0_17, &erl_backend__erl_code_gen__ThenStatement_26, erl_backend__erl_code_gen__STATE_VARIABLE_Info_107_107, erl_backend__erl_code_gen__STATE_VARIABLE_Info_58);
              }
#line 1050 "erl_code_gen.m"
              {
#line 1050 "erl_code_gen.m"
                *erl_backend__erl_code_gen__Statement_18 = erl_backend__elds__join_exprs_2_f_0(erl_backend__erl_code_gen__CondStatement_23, erl_backend__erl_code_gen__ThenStatement_26);
              }
#line 1047 "erl_code_gen.m"
            }
#line 1040 "erl_code_gen.m"
        }
#line 1052 "erl_code_gen.m"
        break;
#line 1052 "erl_code_gen.m"
      case (MR_Integer) 2:
#line 1122 "erl_code_gen.m"
        {
#line 1122 "erl_code_gen.m"
          MR_Word erl_backend__erl_code_gen__Ref_47;
#line 1122 "erl_code_gen.m"
          MR_Word erl_backend__erl_code_gen__RefExpr_48;
#line 1122 "erl_code_gen.m"
          MR_Word erl_backend__erl_code_gen__MakeRef_49;
#line 1122 "erl_code_gen.m"
          MR_Word erl_backend__erl_code_gen__PutRef_50;
#line 1122 "erl_code_gen.m"
          MR_Word erl_backend__erl_code_gen__GetRef_51;
#line 1122 "erl_code_gen.m"
          MR_Word erl_backend__erl_code_gen__EraseRef_52;
#line 1122 "erl_code_gen.m"
          MR_Word erl_backend__erl_code_gen__PutAndThen_53;
#line 1122 "erl_code_gen.m"
          MR_Word erl_backend__erl_code_gen__CondThen_54;
#line 1122 "erl_code_gen.m"
          MR_Word erl_backend__erl_code_gen__CaseElse_55;
#line 1122 "erl_code_gen.m"
          MR_Word erl_backend__erl_code_gen__OtherCase_56;
#line 1122 "erl_code_gen.m"
          MR_Word erl_backend__erl_code_gen__STATE_VARIABLE_Info_60_60;
#line 1122 "erl_code_gen.m"
          MR_Word erl_backend__erl_code_gen__V_61_61;
#line 1122 "erl_code_gen.m"
          MR_Word erl_backend__erl_code_gen__V_65_65;
#line 1122 "erl_code_gen.m"
          MR_Word erl_backend__erl_code_gen__V_66_66;
#line 1122 "erl_code_gen.m"
          MR_Word erl_backend__erl_code_gen__V_67_67;
#line 1122 "erl_code_gen.m"
          MR_Word erl_backend__erl_code_gen__V_68_68;
#line 1122 "erl_code_gen.m"
          MR_Word erl_backend__erl_code_gen__V_71_71;
#line 1122 "erl_code_gen.m"
          MR_Word erl_backend__erl_code_gen__STATE_VARIABLE_Info_76_76;
#line 1122 "erl_code_gen.m"
          MR_Word erl_backend__erl_code_gen__V_77_77;
#line 1122 "erl_code_gen.m"
          MR_Word erl_backend__erl_code_gen__STATE_VARIABLE_Info_78_78;
#line 1122 "erl_code_gen.m"
          MR_Word erl_backend__erl_code_gen__V_80_80;
#line 1122 "erl_code_gen.m"
          MR_Word erl_backend__erl_code_gen__V_81_81;
#line 1122 "erl_code_gen.m"
          MR_Word erl_backend__erl_code_gen__V_83_83;
#line 1122 "erl_code_gen.m"
          MR_Word erl_backend__erl_code_gen__V_84_84;
#line 1122 "erl_code_gen.m"
          MR_Word erl_backend__erl_code_gen__V_85_85;
#line 1122 "erl_code_gen.m"
          MR_Word erl_backend__erl_code_gen__V_87_87;
#line 1122 "erl_code_gen.m"
          MR_Word erl_backend__erl_code_gen__V_88_88;
#line 1122 "erl_code_gen.m"
          MR_Word erl_backend__erl_code_gen__V_91_91;
#line 1122 "erl_code_gen.m"
          MR_Word erl_backend__erl_code_gen__ThenStatement_112;
#line 1122 "erl_code_gen.m"
          MR_Word erl_backend__erl_code_gen__InstMap1_113;
#line 1122 "erl_code_gen.m"
          MR_Word erl_backend__erl_code_gen__InstMap2_114;
#line 1122 "erl_code_gen.m"
          MR_Word erl_backend__erl_code_gen__ElseStatement_115;
#line 1122 "erl_code_gen.m"
          MR_Word erl_backend__erl_code_gen__TrueCase_116;

#line 1142 "erl_code_gen.m"
          {
#line 1142 "erl_code_gen.m"
            erl_backend__erl_code_util__erl_gen_info_new_named_var_4_p_0((MR_String) "Ref", &erl_backend__erl_code_gen__Ref_47, erl_backend__erl_code_gen__STATE_VARIABLE_Info_0_57, &erl_backend__erl_code_gen__STATE_VARIABLE_Info_60_60);
          }
#line 1143 "erl_code_gen.m"
          {
#line 1143 "erl_code_gen.m"
            erl_backend__erl_code_gen__ground_var_in_instmap_3_p_0(erl_backend__erl_code_gen__Ref_47, erl_backend__erl_code_gen__InstMap0_12, &erl_backend__erl_code_gen__InstMap1_113);
          }
#line 1145 "erl_code_gen.m"
          {
#line 1145 "erl_code_gen.m"
            erl_backend__erl_code_gen__RefExpr_48 = erl_backend__elds__expr_from_var_1_f_0(erl_backend__erl_code_gen__Ref_47);
          }
#line 1146 "erl_code_gen.m"
          {
#line 1146 "erl_code_gen.m"
            erl_backend__erl_code_gen__V_61_61 = erl_backend__elds__elds_call_builtin_2_f_0((MR_String) "make_ref", (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
          }
#line 1146 "erl_code_gen.m"
          {
#line 1146 "erl_code_gen.m"
            erl_backend__erl_code_gen__MakeRef_49 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1146 "erl_code_gen.m"
            MR_hl_field(MR_mktag(3), erl_backend__erl_code_gen__MakeRef_49, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 1146 "erl_code_gen.m"
            MR_hl_field(MR_mktag(3), erl_backend__erl_code_gen__MakeRef_49, 1) = ((MR_Box) (erl_backend__erl_code_gen__RefExpr_48));
#line 1146 "erl_code_gen.m"
            MR_hl_field(MR_mktag(3), erl_backend__erl_code_gen__MakeRef_49, 2) = ((MR_Box) (erl_backend__erl_code_gen__V_61_61));
#line 1146 "erl_code_gen.m"
          }
#line 1147 "erl_code_gen.m"
          {
#line 1147 "erl_code_gen.m"
            erl_backend__erl_code_gen__V_68_68 = erl_backend__elds__elds_true_0_f_0();
          }
#line 1147 "erl_code_gen.m"
          {
#line 1147 "erl_code_gen.m"
            erl_backend__erl_code_gen__V_67_67 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1147 "erl_code_gen.m"
            MR_hl_field(MR_mktag(2), erl_backend__erl_code_gen__V_67_67, 0) = ((MR_Box) (erl_backend__erl_code_gen__V_68_68));
#line 1147 "erl_code_gen.m"
          }
#line 1147 "erl_code_gen.m"
          {
#line 1147 "erl_code_gen.m"
            erl_backend__erl_code_gen__V_66_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1147 "erl_code_gen.m"
            MR_hl_field(MR_mktag(1), erl_backend__erl_code_gen__V_66_66, 0) = ((MR_Box) (erl_backend__erl_code_gen__V_67_67));
#line 1147 "erl_code_gen.m"
            MR_hl_field(MR_mktag(1), erl_backend__erl_code_gen__V_66_66, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1147 "erl_code_gen.m"
          }
#line 1147 "erl_code_gen.m"
          {
#line 1147 "erl_code_gen.m"
            erl_backend__erl_code_gen__V_65_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1147 "erl_code_gen.m"
            MR_hl_field(MR_mktag(1), erl_backend__erl_code_gen__V_65_65, 0) = ((MR_Box) (erl_backend__erl_code_gen__RefExpr_48));
#line 1147 "erl_code_gen.m"
            MR_hl_field(MR_mktag(1), erl_backend__erl_code_gen__V_65_65, 1) = ((MR_Box) (erl_backend__erl_code_gen__V_66_66));
#line 1147 "erl_code_gen.m"
          }
#line 1147 "erl_code_gen.m"
          {
#line 1147 "erl_code_gen.m"
            erl_backend__erl_code_gen__PutRef_50 = erl_backend__elds__elds_call_builtin_2_f_0((MR_String) "put", erl_backend__erl_code_gen__V_65_65);
          }
#line 1148 "erl_code_gen.m"
          {
#line 1148 "erl_code_gen.m"
            erl_backend__erl_code_gen__V_71_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1148 "erl_code_gen.m"
            MR_hl_field(MR_mktag(1), erl_backend__erl_code_gen__V_71_71, 0) = ((MR_Box) (erl_backend__erl_code_gen__RefExpr_48));
#line 1148 "erl_code_gen.m"
            MR_hl_field(MR_mktag(1), erl_backend__erl_code_gen__V_71_71, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1148 "erl_code_gen.m"
          }
#line 1148 "erl_code_gen.m"
          {
#line 1148 "erl_code_gen.m"
            erl_backend__erl_code_gen__GetRef_51 = erl_backend__elds__elds_call_builtin_2_f_0((MR_String) "get", erl_backend__erl_code_gen__V_71_71);
          }
#line 1149 "erl_code_gen.m"
          {
#line 1149 "erl_code_gen.m"
            erl_backend__erl_code_gen__EraseRef_52 = erl_backend__elds__elds_call_builtin_2_f_0((MR_String) "erase", erl_backend__erl_code_gen__V_71_71);
          }
#line 1155 "erl_code_gen.m"
          {
#line 1155 "erl_code_gen.m"
            hlds__goal_util__update_instmap_3_p_0(erl_backend__erl_code_gen__Cond_13, erl_backend__erl_code_gen__InstMap1_113, &erl_backend__erl_code_gen__InstMap2_114);
          }
#line 1156 "erl_code_gen.m"
          {
#line 1156 "erl_code_gen.m"
            erl_backend__erl_code_gen__erl_gen_goal_7_p_0(erl_backend__erl_code_gen__CodeModel_11, erl_backend__erl_code_gen__InstMap2_114, erl_backend__erl_code_gen__Then_14, erl_backend__erl_code_gen__MaybeSuccessExpr0_17, &erl_backend__erl_code_gen__ThenStatement_112, erl_backend__erl_code_gen__STATE_VARIABLE_Info_60_60, &erl_backend__erl_code_gen__STATE_VARIABLE_Info_76_76);
          }
#line 1158 "erl_code_gen.m"
          {
#line 1158 "erl_code_gen.m"
            erl_backend__erl_code_gen__PutAndThen_53 = erl_backend__elds__join_exprs_2_f_0(erl_backend__erl_code_gen__PutRef_50, erl_backend__erl_code_gen__ThenStatement_112);
          }
#line 1160 "erl_code_gen.m"
          {
#line 1160 "erl_code_gen.m"
            erl_backend__erl_code_gen__V_77_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1160 "erl_code_gen.m"
            MR_hl_field(MR_mktag(1), erl_backend__erl_code_gen__V_77_77, 0) = ((MR_Box) (erl_backend__erl_code_gen__PutAndThen_53));
#line 1160 "erl_code_gen.m"
          }
#line 1160 "erl_code_gen.m"
          {
#line 1160 "erl_code_gen.m"
            erl_backend__erl_code_gen__erl_gen_goal_7_p_0(erl_backend__erl_code_gen__CondCodeModel_22, erl_backend__erl_code_gen__InstMap1_113, erl_backend__erl_code_gen__Cond_13, erl_backend__erl_code_gen__V_77_77, &erl_backend__erl_code_gen__CondThen_54, erl_backend__erl_code_gen__STATE_VARIABLE_Info_76_76, &erl_backend__erl_code_gen__STATE_VARIABLE_Info_78_78);
          }
#line 1163 "erl_code_gen.m"
          {
#line 1163 "erl_code_gen.m"
            erl_backend__erl_code_gen__erl_gen_goal_7_p_0(erl_backend__erl_code_gen__CodeModel_11, erl_backend__erl_code_gen__InstMap1_113, erl_backend__erl_code_gen__Else_15, erl_backend__erl_code_gen__MaybeSuccessExpr0_17, &erl_backend__erl_code_gen__ElseStatement_115, erl_backend__erl_code_gen__STATE_VARIABLE_Info_78_78, erl_backend__erl_code_gen__STATE_VARIABLE_Info_58);
          }
#line 1167 "erl_code_gen.m"
          {
#line 1167 "erl_code_gen.m"
            erl_backend__erl_code_gen__V_83_83 = erl_backend__elds__elds_true_0_f_0();
          }
#line 1167 "erl_code_gen.m"
          {
#line 1167 "erl_code_gen.m"
            erl_backend__erl_code_gen__V_85_85 = erl_backend__elds__elds_true_0_f_0();
          }
#line 1167 "erl_code_gen.m"
          {
#line 1167 "erl_code_gen.m"
            erl_backend__erl_code_gen__V_84_84 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1167 "erl_code_gen.m"
            MR_hl_field(MR_mktag(2), erl_backend__erl_code_gen__V_84_84, 0) = ((MR_Box) (erl_backend__erl_code_gen__V_85_85));
#line 1167 "erl_code_gen.m"
          }
#line 1167 "erl_code_gen.m"
          {
#line 1167 "erl_code_gen.m"
            erl_backend__erl_code_gen__TrueCase_116 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1167 "erl_code_gen.m"
            MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__TrueCase_116, 0) = ((MR_Box) (erl_backend__erl_code_gen__V_83_83));
#line 1167 "erl_code_gen.m"
            MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__TrueCase_116, 1) = ((MR_Box) (erl_backend__erl_code_gen__V_84_84));
#line 1167 "erl_code_gen.m"
          }
#line 1168 "erl_code_gen.m"
          {
#line 1168 "erl_code_gen.m"
            erl_backend__erl_code_gen__OtherCase_56 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1168 "erl_code_gen.m"
            MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__OtherCase_56, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1168 "erl_code_gen.m"
            MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__OtherCase_56, 1) = ((MR_Box) (erl_backend__erl_code_gen__ElseStatement_115));
#line 1168 "erl_code_gen.m"
          }
#line 1166 "erl_code_gen.m"
          {
#line 1166 "erl_code_gen.m"
            erl_backend__erl_code_gen__V_81_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1166 "erl_code_gen.m"
            MR_hl_field(MR_mktag(1), erl_backend__erl_code_gen__V_81_81, 0) = ((MR_Box) (erl_backend__erl_code_gen__OtherCase_56));
#line 1166 "erl_code_gen.m"
            MR_hl_field(MR_mktag(1), erl_backend__erl_code_gen__V_81_81, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1166 "erl_code_gen.m"
          }
#line 1166 "erl_code_gen.m"
          {
#line 1166 "erl_code_gen.m"
            erl_backend__erl_code_gen__V_80_80 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1166 "erl_code_gen.m"
            MR_hl_field(MR_mktag(1), erl_backend__erl_code_gen__V_80_80, 0) = ((MR_Box) (erl_backend__erl_code_gen__TrueCase_116));
#line 1166 "erl_code_gen.m"
            MR_hl_field(MR_mktag(1), erl_backend__erl_code_gen__V_80_80, 1) = ((MR_Box) (erl_backend__erl_code_gen__V_81_81));
#line 1166 "erl_code_gen.m"
          }
#line 1166 "erl_code_gen.m"
          {
#line 1166 "erl_code_gen.m"
            erl_backend__erl_code_gen__CaseElse_55 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1166 "erl_code_gen.m"
            MR_hl_field(MR_mktag(3), erl_backend__erl_code_gen__CaseElse_55, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 1166 "erl_code_gen.m"
            MR_hl_field(MR_mktag(3), erl_backend__erl_code_gen__CaseElse_55, 1) = ((MR_Box) (erl_backend__erl_code_gen__GetRef_51));
#line 1166 "erl_code_gen.m"
            MR_hl_field(MR_mktag(3), erl_backend__erl_code_gen__CaseElse_55, 2) = ((MR_Box) (erl_backend__erl_code_gen__V_80_80));
#line 1166 "erl_code_gen.m"
          }
#line 1171 "erl_code_gen.m"
          {
#line 1171 "erl_code_gen.m"
            erl_backend__erl_code_gen__V_88_88 = erl_backend__elds__join_exprs_2_f_0(erl_backend__erl_code_gen__CondThen_54, erl_backend__erl_code_gen__CaseElse_55);
          }
#line 1171 "erl_code_gen.m"
          {
#line 1171 "erl_code_gen.m"
            erl_backend__erl_code_gen__V_91_91 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1171 "erl_code_gen.m"
            MR_hl_field(MR_mktag(1), erl_backend__erl_code_gen__V_91_91, 0) = ((MR_Box) (erl_backend__erl_code_gen__EraseRef_52));
#line 1171 "erl_code_gen.m"
          }
#line 1171 "erl_code_gen.m"
          {
#line 1171 "erl_code_gen.m"
            erl_backend__erl_code_gen__V_87_87 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 1171 "erl_code_gen.m"
            MR_hl_field(MR_mktag(3), erl_backend__erl_code_gen__V_87_87, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 1171 "erl_code_gen.m"
            MR_hl_field(MR_mktag(3), erl_backend__erl_code_gen__V_87_87, 1) = ((MR_Box) (erl_backend__erl_code_gen__V_88_88));
#line 1171 "erl_code_gen.m"
            MR_hl_field(MR_mktag(3), erl_backend__erl_code_gen__V_87_87, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1171 "erl_code_gen.m"
            MR_hl_field(MR_mktag(3), erl_backend__erl_code_gen__V_87_87, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1171 "erl_code_gen.m"
            MR_hl_field(MR_mktag(3), erl_backend__erl_code_gen__V_87_87, 4) = ((MR_Box) (erl_backend__erl_code_gen__V_91_91));
#line 1171 "erl_code_gen.m"
          }
#line 1170 "erl_code_gen.m"
          {
#line 1170 "erl_code_gen.m"
            *erl_backend__erl_code_gen__Statement_18 = erl_backend__elds__join_exprs_2_f_0(erl_backend__erl_code_gen__MakeRef_49, erl_backend__erl_code_gen__V_87_87);
          }
#line 1122 "erl_code_gen.m"
        }
#line 1052 "erl_code_gen.m"
        break;
#line 1052 "erl_code_gen.m"
      case (MR_Integer) 1:
#line 1069 "erl_code_gen.m"
        {
#line 1069 "erl_code_gen.m"
          MR_Word erl_backend__erl_code_gen__TypeCtorInfo_117_117;
#line 1069 "erl_code_gen.m"
          MR_Word erl_backend__erl_code_gen__CondVars_27;
#line 1069 "erl_code_gen.m"
          MR_Word erl_backend__erl_code_gen__InstMap0PostCond_28;
#line 1069 "erl_code_gen.m"
          MR_Word erl_backend__erl_code_gen__ThenVars_29;
#line 1069 "erl_code_gen.m"
          MR_Word erl_backend__erl_code_gen__ElseVars_30;
#line 1069 "erl_code_gen.m"
          MR_Word erl_backend__erl_code_gen__CondVarsList_31;
#line 1069 "erl_code_gen.m"
          MR_Word erl_backend__erl_code_gen__CondVarsTerm_32;
#line 1069 "erl_code_gen.m"
          MR_Word erl_backend__erl_code_gen__CondStatement0_33;
#line 1069 "erl_code_gen.m"
          MR_Word erl_backend__erl_code_gen__Subn_34;
#line 1069 "erl_code_gen.m"
          MR_Word erl_backend__erl_code_gen__BoundNonLocals_35;
#line 1069 "erl_code_gen.m"
          MR_Word erl_backend__erl_code_gen__MaybeMakeClosure_36;
#line 1069 "erl_code_gen.m"
          MR_Word erl_backend__erl_code_gen__MaybeSuccessExpr_37;
#line 1069 "erl_code_gen.m"
          MR_Word erl_backend__erl_code_gen__InstMap1_38;
#line 1069 "erl_code_gen.m"
          MR_Word erl_backend__erl_code_gen__InstMap2_39;
#line 1069 "erl_code_gen.m"
          MR_Word erl_backend__erl_code_gen__ThenStatement0_40;
#line 1069 "erl_code_gen.m"
          MR_Word erl_backend__erl_code_gen__ElseStatement0_41;
#line 1069 "erl_code_gen.m"
          MR_Word erl_backend__erl_code_gen__ElseStatement_42;
#line 1069 "erl_code_gen.m"
          MR_Word erl_backend__erl_code_gen__IfStatement_43;
#line 1069 "erl_code_gen.m"
          MR_Word erl_backend__erl_code_gen__V_92_92;
#line 1069 "erl_code_gen.m"
          MR_Word erl_backend__erl_code_gen__V_94_94;
#line 1069 "erl_code_gen.m"
          MR_Word erl_backend__erl_code_gen__STATE_VARIABLE_Info_95_95;
#line 1069 "erl_code_gen.m"
          MR_Word erl_backend__erl_code_gen__V_96_96;
#line 1069 "erl_code_gen.m"
          MR_Word erl_backend__erl_code_gen__STATE_VARIABLE_Info_97_97;
#line 1069 "erl_code_gen.m"
          MR_Word erl_backend__erl_code_gen__STATE_VARIABLE_Info_98_98;
#line 1069 "erl_code_gen.m"
          MR_Word erl_backend__erl_code_gen__STATE_VARIABLE_Info_99_99;
#line 1069 "erl_code_gen.m"
          MR_Word erl_backend__erl_code_gen__CondStatement_109;
#line 1069 "erl_code_gen.m"
          MR_Word erl_backend__erl_code_gen__CondDeterminism_110;
#line 1069 "erl_code_gen.m"
          MR_Word erl_backend__erl_code_gen__ThenStatement_111;

#line 1072 "erl_code_gen.m"
          {
#line 1072 "erl_code_gen.m"
            erl_backend__erl_code_util__erl_bound_nonlocals_in_goal_4_p_0(erl_backend__erl_code_gen__STATE_VARIABLE_Info_0_57, erl_backend__erl_code_gen__InstMap0_12, erl_backend__erl_code_gen__Cond_13, &erl_backend__erl_code_gen__CondVars_27);
          }
#line 1073 "erl_code_gen.m"
          {
#line 1073 "erl_code_gen.m"
            hlds__goal_util__update_instmap_3_p_0(erl_backend__erl_code_gen__Cond_13, erl_backend__erl_code_gen__InstMap0_12, &erl_backend__erl_code_gen__InstMap0PostCond_28);
          }
#line 1074 "erl_code_gen.m"
          {
#line 1074 "erl_code_gen.m"
            erl_backend__erl_code_util__erl_bound_nonlocals_in_goal_4_p_0(erl_backend__erl_code_gen__STATE_VARIABLE_Info_0_57, erl_backend__erl_code_gen__InstMap0PostCond_28, erl_backend__erl_code_gen__Then_14, &erl_backend__erl_code_gen__ThenVars_29);
          }
#line 1075 "erl_code_gen.m"
          {
#line 1075 "erl_code_gen.m"
            erl_backend__erl_code_util__erl_bound_nonlocals_in_goal_4_p_0(erl_backend__erl_code_gen__STATE_VARIABLE_Info_0_57, erl_backend__erl_code_gen__InstMap0_12, erl_backend__erl_code_gen__Else_15, &erl_backend__erl_code_gen__ElseVars_30);
          }
#line 2983 "erl_backend.erl_code_gen.c"
          erl_backend__erl_code_gen__TypeCtorInfo_117_117 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 1076 "erl_code_gen.m"
          {
#line 1076 "erl_code_gen.m"
            erl_backend__erl_code_gen__CondVarsList_31 = parse_tree__set_of_var__to_sorted_list_1_f_0(erl_backend__erl_code_gen__TypeCtorInfo_117_117, erl_backend__erl_code_gen__CondVars_27);
          }
#line 1080 "erl_code_gen.m"
          {
#line 1080 "erl_code_gen.m"
            erl_backend__erl_code_gen__V_92_92 = erl_backend__elds__exprs_from_vars_1_f_0(erl_backend__erl_code_gen__CondVarsList_31);
          }
#line 1080 "erl_code_gen.m"
          {
#line 1080 "erl_code_gen.m"
            erl_backend__erl_code_gen__CondVarsTerm_32 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1080 "erl_code_gen.m"
            MR_hl_field(MR_mktag(3), erl_backend__erl_code_gen__CondVarsTerm_32, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 1080 "erl_code_gen.m"
            MR_hl_field(MR_mktag(3), erl_backend__erl_code_gen__CondVarsTerm_32, 1) = ((MR_Box) (erl_backend__erl_code_gen__V_92_92));
#line 1080 "erl_code_gen.m"
          }
#line 1082 "erl_code_gen.m"
          {
#line 1082 "erl_code_gen.m"
            erl_backend__erl_code_gen__V_96_96 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1082 "erl_code_gen.m"
            MR_hl_field(MR_mktag(2), erl_backend__erl_code_gen__V_96_96, 0) = ((MR_Box) (erl_backend__erl_code_gen__CondVarsTerm_32));
#line 1082 "erl_code_gen.m"
          }
#line 1082 "erl_code_gen.m"
          {
#line 1082 "erl_code_gen.m"
            erl_backend__erl_code_gen__V_94_94 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1082 "erl_code_gen.m"
            MR_hl_field(MR_mktag(1), erl_backend__erl_code_gen__V_94_94, 0) = ((MR_Box) (erl_backend__erl_code_gen__V_96_96));
#line 1082 "erl_code_gen.m"
          }
#line 1081 "erl_code_gen.m"
          {
#line 1081 "erl_code_gen.m"
            erl_backend__erl_code_gen__erl_gen_goal_7_p_0((MR_Integer) 1, erl_backend__erl_code_gen__InstMap0_12, erl_backend__erl_code_gen__Cond_13, erl_backend__erl_code_gen__V_94_94, &erl_backend__erl_code_gen__CondStatement0_33, erl_backend__erl_code_gen__STATE_VARIABLE_Info_0_57, &erl_backend__erl_code_gen__STATE_VARIABLE_Info_95_95);
          }
#line 1085 "erl_code_gen.m"
          {
#line 1085 "erl_code_gen.m"
            erl_backend__erl_code_util__erl_create_renaming_4_p_0(erl_backend__erl_code_gen__CondVarsList_31, &erl_backend__erl_code_gen__Subn_34, erl_backend__erl_code_gen__STATE_VARIABLE_Info_95_95, &erl_backend__erl_code_gen__STATE_VARIABLE_Info_97_97);
          }
#line 1086 "erl_code_gen.m"
          {
#line 1086 "erl_code_gen.m"
            erl_backend__erl_code_util__erl_rename_vars_in_expr_3_p_0(erl_backend__erl_code_gen__Subn_34, erl_backend__erl_code_gen__CondStatement0_33, &erl_backend__erl_code_gen__CondStatement_109);
          }
#line 1091 "erl_code_gen.m"
          {
#line 1091 "erl_code_gen.m"
            erl_backend__erl_code_gen__BoundNonLocals_35 = parse_tree__set_of_var__union_2_f_0(erl_backend__erl_code_gen__TypeCtorInfo_117_117, erl_backend__erl_code_gen__ThenVars_29, erl_backend__erl_code_gen__ElseVars_30);
          }
#line 1092 "erl_code_gen.m"
          {
#line 1092 "erl_code_gen.m"
            erl_backend__erl_code_gen__maybe_create_closure_for_success_expr_8_p_0(erl_backend__erl_code_gen__BoundNonLocals_35, erl_backend__erl_code_gen__MaybeSuccessExpr0_17, &erl_backend__erl_code_gen__MaybeMakeClosure_36, &erl_backend__erl_code_gen__MaybeSuccessExpr_37, erl_backend__erl_code_gen__InstMap0_12, &erl_backend__erl_code_gen__InstMap1_38, erl_backend__erl_code_gen__STATE_VARIABLE_Info_97_97, &erl_backend__erl_code_gen__STATE_VARIABLE_Info_98_98);
          }
#line 1097 "erl_code_gen.m"
          {
#line 1097 "erl_code_gen.m"
            hlds__goal_util__update_instmap_3_p_0(erl_backend__erl_code_gen__Cond_13, erl_backend__erl_code_gen__InstMap1_38, &erl_backend__erl_code_gen__InstMap2_39);
          }
#line 1098 "erl_code_gen.m"
          {
#line 1098 "erl_code_gen.m"
            erl_backend__erl_code_gen__erl_gen_goal_7_p_0(erl_backend__erl_code_gen__CodeModel_11, erl_backend__erl_code_gen__InstMap2_39, erl_backend__erl_code_gen__Then_14, erl_backend__erl_code_gen__MaybeSuccessExpr_37, &erl_backend__erl_code_gen__ThenStatement0_40, erl_backend__erl_code_gen__STATE_VARIABLE_Info_98_98, &erl_backend__erl_code_gen__STATE_VARIABLE_Info_99_99);
          }
#line 1100 "erl_code_gen.m"
          {
#line 1100 "erl_code_gen.m"
            erl_backend__erl_code_gen__erl_gen_goal_7_p_0(erl_backend__erl_code_gen__CodeModel_11, erl_backend__erl_code_gen__InstMap1_38, erl_backend__erl_code_gen__Else_15, erl_backend__erl_code_gen__MaybeSuccessExpr_37, &erl_backend__erl_code_gen__ElseStatement0_41, erl_backend__erl_code_gen__STATE_VARIABLE_Info_99_99, erl_backend__erl_code_gen__STATE_VARIABLE_Info_58);
          }
#line 1104 "erl_code_gen.m"
          {
#line 1104 "erl_code_gen.m"
            erl_backend__erl_code_util__erl_bind_unbound_vars_6_p_0(*erl_backend__erl_code_gen__STATE_VARIABLE_Info_58, erl_backend__erl_code_gen__ElseVars_30, erl_backend__erl_code_gen__Then_14, erl_backend__erl_code_gen__InstMap1_38, erl_backend__erl_code_gen__ThenStatement0_40, &erl_backend__erl_code_gen__ThenStatement_111);
          }
#line 1106 "erl_code_gen.m"
          {
#line 1106 "erl_code_gen.m"
            erl_backend__erl_code_util__erl_bind_unbound_vars_6_p_0(*erl_backend__erl_code_gen__STATE_VARIABLE_Info_58, erl_backend__erl_code_gen__ThenVars_29, erl_backend__erl_code_gen__Else_15, erl_backend__erl_code_gen__InstMap0_12, erl_backend__erl_code_gen__ElseStatement0_41, &erl_backend__erl_code_gen__ElseStatement_42);
          }
#line 1109 "erl_code_gen.m"
          {
#line 1109 "erl_code_gen.m"
            erl_backend__erl_code_gen__CondDeterminism_110 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(erl_backend__erl_code_gen__CondGoalInfo_21);
          }
#line 1110 "erl_code_gen.m"
          erl_backend__erl_code_gen__succeeded = (erl_backend__erl_code_gen__CondDeterminism_110 == (MR_Integer) 7);
#line 1114 "erl_code_gen.m"
          if (erl_backend__erl_code_gen__succeeded)
#line 1113 "erl_code_gen.m"
            {
#line 1113 "erl_code_gen.m"
              erl_backend__erl_code_gen__IfStatement_43 = erl_backend__elds__join_exprs_2_f_0(erl_backend__erl_code_gen__CondStatement_109, erl_backend__erl_code_gen__ElseStatement_42);
            }
#line 1114 "erl_code_gen.m"
          else
#line 1115 "erl_code_gen.m"
            {
#line 1115 "erl_code_gen.m"
              MR_Word erl_backend__erl_code_gen__CaseExpr_44;
#line 1115 "erl_code_gen.m"
              MR_Word erl_backend__erl_code_gen__TrueCase_45;
#line 1115 "erl_code_gen.m"
              MR_Word erl_backend__erl_code_gen__FalseCase_46;
#line 1115 "erl_code_gen.m"
              MR_Word erl_backend__erl_code_gen__V_101_101;
#line 1115 "erl_code_gen.m"
              MR_Word erl_backend__erl_code_gen__V_102_102;

#line 1116 "erl_code_gen.m"
              {
#line 1116 "erl_code_gen.m"
                erl_backend__erl_code_gen__TrueCase_45 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1116 "erl_code_gen.m"
                MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__TrueCase_45, 0) = ((MR_Box) (erl_backend__erl_code_gen__CondVarsTerm_32));
#line 1116 "erl_code_gen.m"
                MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__TrueCase_45, 1) = ((MR_Box) (erl_backend__erl_code_gen__ThenStatement_111));
#line 1116 "erl_code_gen.m"
              }
#line 1117 "erl_code_gen.m"
              {
#line 1117 "erl_code_gen.m"
                erl_backend__erl_code_gen__FalseCase_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1117 "erl_code_gen.m"
                MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__FalseCase_46, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1117 "erl_code_gen.m"
                MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__FalseCase_46, 1) = ((MR_Box) (erl_backend__erl_code_gen__ElseStatement_42));
#line 1117 "erl_code_gen.m"
              }
#line 1115 "erl_code_gen.m"
              {
#line 1115 "erl_code_gen.m"
                erl_backend__erl_code_gen__V_102_102 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1115 "erl_code_gen.m"
                MR_hl_field(MR_mktag(1), erl_backend__erl_code_gen__V_102_102, 0) = ((MR_Box) (erl_backend__erl_code_gen__FalseCase_46));
#line 1115 "erl_code_gen.m"
                MR_hl_field(MR_mktag(1), erl_backend__erl_code_gen__V_102_102, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1115 "erl_code_gen.m"
              }
#line 1115 "erl_code_gen.m"
              {
#line 1115 "erl_code_gen.m"
                erl_backend__erl_code_gen__V_101_101 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1115 "erl_code_gen.m"
                MR_hl_field(MR_mktag(1), erl_backend__erl_code_gen__V_101_101, 0) = ((MR_Box) (erl_backend__erl_code_gen__TrueCase_45));
#line 1115 "erl_code_gen.m"
                MR_hl_field(MR_mktag(1), erl_backend__erl_code_gen__V_101_101, 1) = ((MR_Box) (erl_backend__erl_code_gen__V_102_102));
#line 1115 "erl_code_gen.m"
              }
#line 1115 "erl_code_gen.m"
              {
#line 1115 "erl_code_gen.m"
                erl_backend__erl_code_gen__CaseExpr_44 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1115 "erl_code_gen.m"
                MR_hl_field(MR_mktag(3), erl_backend__erl_code_gen__CaseExpr_44, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 1115 "erl_code_gen.m"
                MR_hl_field(MR_mktag(3), erl_backend__erl_code_gen__CaseExpr_44, 1) = ((MR_Box) (erl_backend__erl_code_gen__CondStatement_109));
#line 1115 "erl_code_gen.m"
                MR_hl_field(MR_mktag(3), erl_backend__erl_code_gen__CaseExpr_44, 2) = ((MR_Box) (erl_backend__erl_code_gen__V_101_101));
#line 1115 "erl_code_gen.m"
              }
#line 1118 "erl_code_gen.m"
              {
#line 1118 "erl_code_gen.m"
                erl_backend__erl_code_util__maybe_simplify_nested_cases_2_p_0(erl_backend__erl_code_gen__CaseExpr_44, &erl_backend__erl_code_gen__IfStatement_43);
              }
#line 1115 "erl_code_gen.m"
            }
#line 1120 "erl_code_gen.m"
          {
#line 1120 "erl_code_gen.m"
            *erl_backend__erl_code_gen__Statement_18 = erl_backend__elds__maybe_join_exprs1_2_f_0(erl_backend__erl_code_gen__MaybeMakeClosure_36, erl_backend__erl_code_gen__IfStatement_43);
          }
#line 1069 "erl_code_gen.m"
        }
#line 1052 "erl_code_gen.m"
        break;
#line 1052 "erl_code_gen.m"
    }
#line 1030 "erl_code_gen.m"
  }
#line 1024 "erl_code_gen.m"
}

#line 839 "erl_code_gen.m"
static void MR_CALL 
erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_10_p_0_10(
#line 839 "erl_code_gen.m"
  MR_Box erl_backend__erl_code_gen__closure_arg,
#line 839 "erl_code_gen.m"
  MR_Box erl_backend__erl_code_gen__wrapper_arg_1,
#line 839 "erl_code_gen.m"
  MR_Box * erl_backend__erl_code_gen__wrapper_arg_2,
#line 839 "erl_code_gen.m"
  MR_Box erl_backend__erl_code_gen__wrapper_arg_3,
#line 839 "erl_code_gen.m"
  MR_Box * erl_backend__erl_code_gen__wrapper_arg_4)
#line 839 "erl_code_gen.m"
{
#line 839 "erl_code_gen.m"
  {
#line 839 "erl_code_gen.m"
    MR_Box erl_backend__erl_code_gen__closure = erl_backend__erl_code_gen__closure_arg;
#line 839 "erl_code_gen.m"
    MR_Word erl_backend__erl_code_gen__conv6_ELDSCase_16;
#line 839 "erl_code_gen.m"
    MR_Word erl_backend__erl_code_gen__conv5_STATE_VARIABLE_Info_30;

#line 839 "erl_code_gen.m"
    {
#line 839 "erl_code_gen.m"
      erl_backend__erl_code_gen__erl_gen_case_9_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__closure, (MR_Integer) 6))), ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__closure, (MR_Integer) 7))), ((MR_Word) erl_backend__erl_code_gen__wrapper_arg_1), &erl_backend__erl_code_gen__conv6_ELDSCase_16, ((MR_Word) erl_backend__erl_code_gen__wrapper_arg_3), &erl_backend__erl_code_gen__conv5_STATE_VARIABLE_Info_30);
    }
#line 839 "erl_code_gen.m"
    *erl_backend__erl_code_gen__wrapper_arg_2 = ((MR_Box) (erl_backend__erl_code_gen__conv6_ELDSCase_16));
#line 839 "erl_code_gen.m"
    *erl_backend__erl_code_gen__wrapper_arg_4 = ((MR_Box) (erl_backend__erl_code_gen__conv5_STATE_VARIABLE_Info_30));
#line 839 "erl_code_gen.m"
  }
#line 839 "erl_code_gen.m"
}

#line 834 "erl_code_gen.m"
static void MR_CALL 
erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_10_p_0_9(
#line 834 "erl_code_gen.m"
  MR_Box erl_backend__erl_code_gen__closure_arg,
#line 834 "erl_code_gen.m"
  MR_Box erl_backend__erl_code_gen__wrapper_arg_1,
#line 834 "erl_code_gen.m"
  MR_Box * erl_backend__erl_code_gen__wrapper_arg_2,
#line 834 "erl_code_gen.m"
  MR_Box erl_backend__erl_code_gen__wrapper_arg_3,
#line 834 "erl_code_gen.m"
  MR_Box * erl_backend__erl_code_gen__wrapper_arg_4)
#line 834 "erl_code_gen.m"
{
#line 834 "erl_code_gen.m"
  {
#line 834 "erl_code_gen.m"
    MR_Box erl_backend__erl_code_gen__closure = erl_backend__erl_code_gen__closure_arg;
#line 834 "erl_code_gen.m"
    MR_Word erl_backend__erl_code_gen__conv4_ELDSCase_14;
#line 834 "erl_code_gen.m"
    MR_Word erl_backend__erl_code_gen__conv3_STATE_VARIABLE_Info_25;

#line 834 "erl_code_gen.m"
    {
#line 834 "erl_code_gen.m"
      erl_backend__erl_code_gen__erl_gen_case_on_atom_8_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__closure, (MR_Integer) 6))), ((MR_Word) erl_backend__erl_code_gen__wrapper_arg_1), &erl_backend__erl_code_gen__conv4_ELDSCase_14, ((MR_Word) erl_backend__erl_code_gen__wrapper_arg_3), &erl_backend__erl_code_gen__conv3_STATE_VARIABLE_Info_25);
    }
#line 834 "erl_code_gen.m"
    *erl_backend__erl_code_gen__wrapper_arg_2 = ((MR_Box) (erl_backend__erl_code_gen__conv4_ELDSCase_14));
#line 834 "erl_code_gen.m"
    *erl_backend__erl_code_gen__wrapper_arg_4 = ((MR_Box) (erl_backend__erl_code_gen__conv3_STATE_VARIABLE_Info_25));
#line 834 "erl_code_gen.m"
  }
#line 834 "erl_code_gen.m"
}

#line 781 "erl_code_gen.m"
static MR_Box MR_CALL 
erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_10_p_0_1(
#line 781 "erl_code_gen.m"
  MR_Box erl_backend__erl_code_gen__closure_arg,
#line 781 "erl_code_gen.m"
  MR_Box erl_backend__erl_code_gen__wrapper_arg_1)
#line 781 "erl_code_gen.m"
{
#line 781 "erl_code_gen.m"
  {
#line 781 "erl_code_gen.m"
    MR_Box erl_backend__erl_code_gen__wrapper_arg_2;
#line 781 "erl_code_gen.m"
    MR_Box erl_backend__erl_code_gen__closure = erl_backend__erl_code_gen__closure_arg;
#line 781 "erl_code_gen.m"
    MR_Word erl_backend__erl_code_gen__conv0_HeadVar__2_50;

#line 781 "erl_code_gen.m"
    {
#line 781 "erl_code_gen.m"
      erl_backend__erl_code_gen__conv0_HeadVar__2_50 = erl_backend__erl_code_gen__IntroducedFrom__func__erl_gen_switch__781__1_1_f_0(((MR_Word) erl_backend__erl_code_gen__wrapper_arg_1));
    }
#line 781 "erl_code_gen.m"
    erl_backend__erl_code_gen__wrapper_arg_2 = ((MR_Box) (erl_backend__erl_code_gen__conv0_HeadVar__2_50));
#line 781 "erl_code_gen.m"
    return erl_backend__erl_code_gen__wrapper_arg_2;
#line 781 "erl_code_gen.m"
  }
#line 781 "erl_code_gen.m"
}

#line 814 "erl_code_gen.m"
static void MR_CALL 
erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_10_p_0_2(
#line 814 "erl_code_gen.m"
  void * erl_backend__erl_code_gen__env_ptr_arg)
#line 814 "erl_code_gen.m"
{
#line 814 "erl_code_gen.m"
  {
#line 814 "erl_code_gen.m"
    struct erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_95_49_48_95_112_95_48_95_101_110_118_0_s * erl_backend__erl_code_gen__env_ptr = (struct erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_95_49_48_95_112_95_48_95_101_110_118_0_s *) erl_backend__erl_code_gen__env_ptr_arg;

#line 814 "erl_code_gen.m"
    MR_builtin_longjmp((erl_backend__erl_code_gen__env_ptr)->erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__commit_0, 1);
#line 814 "erl_code_gen.m"
  }
#line 814 "erl_code_gen.m"
}

#line 816 "erl_code_gen.m"
static void MR_CALL 
erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_10_p_0_4(
#line 816 "erl_code_gen.m"
  void * erl_backend__erl_code_gen__env_ptr_arg)
#line 816 "erl_code_gen.m"
{
#line 816 "erl_code_gen.m"
  {
#line 816 "erl_code_gen.m"
    struct erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_95_49_48_95_112_95_48_95_101_110_118_0_s * erl_backend__erl_code_gen__env_ptr = (struct erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_95_49_48_95_112_95_48_95_101_110_118_0_s *) erl_backend__erl_code_gen__env_ptr_arg;

#line 816 "erl_code_gen.m"
    (erl_backend__erl_code_gen__env_ptr)->erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__V_57_57 = ((MR_Word) (erl_backend__erl_code_gen__env_ptr)->erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__conv1_V_57_57);
#line 816 "erl_code_gen.m"
    {
#line 816 "erl_code_gen.m"
      erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_10_p_0_3(erl_backend__erl_code_gen__env_ptr);
#line 816 "erl_code_gen.m"
      return;
    }
#line 816 "erl_code_gen.m"
  }
#line 816 "erl_code_gen.m"
}

#line 814 "erl_code_gen.m"
static void MR_CALL 
erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_10_p_0_5(
#line 814 "erl_code_gen.m"
  void * erl_backend__erl_code_gen__env_ptr_arg)
#line 814 "erl_code_gen.m"
{
#line 814 "erl_code_gen.m"
  {
#line 814 "erl_code_gen.m"
    struct erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_95_49_48_95_112_95_48_95_101_110_118_0_s * erl_backend__erl_code_gen__env_ptr = (struct erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_95_49_48_95_112_95_48_95_101_110_118_0_s *) erl_backend__erl_code_gen__env_ptr_arg;

#line 814 "erl_code_gen.m"
    {
#line 824 "erl_code_gen.m"
      MR_Integer erl_backend__erl_code_gen__V_59_59;

#line 824 "erl_code_gen.m"
      {
#line 824 "erl_code_gen.m"
        erl_backend__erl_code_gen__V_59_59 = mercury__string__length_1_f_0((erl_backend__erl_code_gen__env_ptr)->erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__String_32);
      }
#line 824 "erl_code_gen.m"
      (erl_backend__erl_code_gen__env_ptr)->erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__succeeded = (erl_backend__erl_code_gen__V_59_59 <= (MR_Integer) 255);
#line 823 "erl_code_gen.m"
      (erl_backend__erl_code_gen__env_ptr)->erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__succeeded = !((erl_backend__erl_code_gen__env_ptr)->erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__succeeded);
#line 823 "erl_code_gen.m"
      if ((erl_backend__erl_code_gen__env_ptr)->erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__succeeded)
#line 823 "erl_code_gen.m"
        {
#line 823 "erl_code_gen.m"
          erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_10_p_0_2(erl_backend__erl_code_gen__env_ptr);
#line 823 "erl_code_gen.m"
          return;
        }
#line 814 "erl_code_gen.m"
    }
#line 814 "erl_code_gen.m"
  }
#line 814 "erl_code_gen.m"
}

#line 820 "erl_code_gen.m"
static void MR_CALL 
erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_10_p_0_7(
#line 820 "erl_code_gen.m"
  void * erl_backend__erl_code_gen__env_ptr_arg)
#line 820 "erl_code_gen.m"
{
#line 820 "erl_code_gen.m"
  {
#line 820 "erl_code_gen.m"
    struct erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_95_49_48_95_112_95_48_95_101_110_118_0_s * erl_backend__erl_code_gen__env_ptr = (struct erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_95_49_48_95_112_95_48_95_101_110_118_0_s *) erl_backend__erl_code_gen__env_ptr_arg;

#line 820 "erl_code_gen.m"
    (erl_backend__erl_code_gen__env_ptr)->erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__V_58_58 = ((MR_Word) (erl_backend__erl_code_gen__env_ptr)->erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__conv2_V_58_58);
#line 820 "erl_code_gen.m"
    {
#line 820 "erl_code_gen.m"
      erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_10_p_0_6(erl_backend__erl_code_gen__env_ptr);
#line 820 "erl_code_gen.m"
      return;
    }
#line 820 "erl_code_gen.m"
  }
#line 820 "erl_code_gen.m"
}

#line 820 "erl_code_gen.m"
static void MR_CALL 
erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_10_p_0_6(
#line 820 "erl_code_gen.m"
  void * erl_backend__erl_code_gen__env_ptr_arg)
#line 820 "erl_code_gen.m"
{
#line 820 "erl_code_gen.m"
  {
#line 820 "erl_code_gen.m"
    struct erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_95_49_48_95_112_95_48_95_101_110_118_0_s * erl_backend__erl_code_gen__env_ptr = (struct erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_95_49_48_95_112_95_48_95_101_110_118_0_s *) erl_backend__erl_code_gen__env_ptr_arg;

#line 820 "erl_code_gen.m"
    (erl_backend__erl_code_gen__env_ptr)->erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__succeeded = ((((MR_tag((MR_Word) (erl_backend__erl_code_gen__env_ptr)->erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__V_58_58)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), (erl_backend__erl_code_gen__env_ptr)->erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__V_58_58, (MR_Integer) 0)))) == (MR_Integer) 8)));
#line 820 "erl_code_gen.m"
    if ((erl_backend__erl_code_gen__env_ptr)->erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__succeeded)
#line 820 "erl_code_gen.m"
      {
#line 820 "erl_code_gen.m"
        (erl_backend__erl_code_gen__env_ptr)->erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__String_32 = ((MR_String) (MR_hl_field(MR_mktag(3), (erl_backend__erl_code_gen__env_ptr)->erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__V_58_58, (MR_Integer) 1)));
#line 820 "erl_code_gen.m"
        {
#line 820 "erl_code_gen.m"
          erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_10_p_0_5(erl_backend__erl_code_gen__env_ptr);
#line 820 "erl_code_gen.m"
          return;
        }
#line 820 "erl_code_gen.m"
      }
#line 820 "erl_code_gen.m"
  }
#line 820 "erl_code_gen.m"
}

#line 814 "erl_code_gen.m"
static void MR_CALL 
erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_10_p_0_3(
#line 814 "erl_code_gen.m"
  void * erl_backend__erl_code_gen__env_ptr_arg)
#line 814 "erl_code_gen.m"
{
#line 814 "erl_code_gen.m"
  {
#line 814 "erl_code_gen.m"
    struct erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_95_49_48_95_112_95_48_95_101_110_118_0_s * erl_backend__erl_code_gen__env_ptr = (struct erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_95_49_48_95_112_95_48_95_101_110_118_0_s *) erl_backend__erl_code_gen__env_ptr_arg;

#line 814 "erl_code_gen.m"
    {
#line 816 "erl_code_gen.m"
      MR_Word erl_backend__erl_code_gen__V_35_35;

#line 816 "erl_code_gen.m"
      (erl_backend__erl_code_gen__env_ptr)->erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__MainConsId_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), (erl_backend__erl_code_gen__env_ptr)->erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__V_57_57, (MR_Integer) 0)));
#line 816 "erl_code_gen.m"
      (erl_backend__erl_code_gen__env_ptr)->erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__OtherConsIds_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), (erl_backend__erl_code_gen__env_ptr)->erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__V_57_57, (MR_Integer) 1)));
#line 816 "erl_code_gen.m"
      erl_backend__erl_code_gen__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), (erl_backend__erl_code_gen__env_ptr)->erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__V_57_57, (MR_Integer) 2)));
#line 818 "erl_code_gen.m"
      (erl_backend__erl_code_gen__env_ptr)->erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__succeeded = ((((MR_tag((MR_Word) (erl_backend__erl_code_gen__env_ptr)->erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__MainConsId_33)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), (erl_backend__erl_code_gen__env_ptr)->erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__MainConsId_33, (MR_Integer) 0)))) == (MR_Integer) 8)));
#line 818 "erl_code_gen.m"
      if ((erl_backend__erl_code_gen__env_ptr)->erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__succeeded)
#line 818 "erl_code_gen.m"
        {
#line 818 "erl_code_gen.m"
          (erl_backend__erl_code_gen__env_ptr)->erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__String_32 = ((MR_String) (MR_hl_field(MR_mktag(3), (erl_backend__erl_code_gen__env_ptr)->erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__MainConsId_33, (MR_Integer) 1)));
#line 818 "erl_code_gen.m"
          {
#line 818 "erl_code_gen.m"
            erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_10_p_0_5(erl_backend__erl_code_gen__env_ptr);
          }
#line 818 "erl_code_gen.m"
        }
#line 820 "erl_code_gen.m"
      {
#line 820 "erl_code_gen.m"
        {
#line 820 "erl_code_gen.m"
          mercury__list__member_2_p_1((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0, &(erl_backend__erl_code_gen__env_ptr)->erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__conv2_V_58_58, (erl_backend__erl_code_gen__env_ptr)->erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__OtherConsIds_34, erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_10_p_0_7, erl_backend__erl_code_gen__env_ptr);
        }
#line 820 "erl_code_gen.m"
      }
#line 814 "erl_code_gen.m"
    }
#line 814 "erl_code_gen.m"
  }
#line 814 "erl_code_gen.m"
}

#line 814 "erl_code_gen.m"
static void MR_CALL 
erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_10_p_0_8(
#line 814 "erl_code_gen.m"
  void * erl_backend__erl_code_gen__env_ptr_arg)
#line 814 "erl_code_gen.m"
{
#line 814 "erl_code_gen.m"
  {
#line 814 "erl_code_gen.m"
    struct erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_95_49_48_95_112_95_48_95_101_110_118_0_s * erl_backend__erl_code_gen__env_ptr = (struct erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_95_49_48_95_112_95_48_95_101_110_118_0_s *) erl_backend__erl_code_gen__env_ptr_arg;

#line 814 "erl_code_gen.m"
    if (MR_builtin_setjmp((erl_backend__erl_code_gen__env_ptr)->erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__commit_0) == 0)
#line 814 "erl_code_gen.m"
      {
#line 816 "erl_code_gen.m"
        {
#line 816 "erl_code_gen.m"
          mercury__list__member_2_p_1((erl_backend__erl_code_gen__env_ptr)->erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__TypeCtorInfo_85_85, &(erl_backend__erl_code_gen__env_ptr)->erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__conv1_V_57_57, (erl_backend__erl_code_gen__env_ptr)->erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__CasesList_13, erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_10_p_0_4, erl_backend__erl_code_gen__env_ptr);
        }
#line 814 "erl_code_gen.m"
        (erl_backend__erl_code_gen__env_ptr)->erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__succeeded = MR_FALSE;
#line 814 "erl_code_gen.m"
      }
#line 814 "erl_code_gen.m"
    else
#line 814 "erl_code_gen.m"
      (erl_backend__erl_code_gen__env_ptr)->erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__succeeded = MR_TRUE;
#line 814 "erl_code_gen.m"
  }
#line 814 "erl_code_gen.m"
}

#line 746 "erl_code_gen.m"
static void MR_CALL 
erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_10_p_0(
#line 746 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__Var_11,
#line 746 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__CanFail_12,
#line 746 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__CasesList_13,
#line 746 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__CodeModel_14,
#line 746 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__InstMap0_15,
#line 746 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__MaybeSuccessExpr0_17,
#line 746 "erl_code_gen.m"
  MR_Word * erl_backend__erl_code_gen__Statement_18,
#line 746 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__STATE_VARIABLE_Info_0_46,
#line 746 "erl_code_gen.m"
  MR_Word * erl_backend__erl_code_gen__STATE_VARIABLE_Info_47)
#line 746 "erl_code_gen.m"
{
#line 746 "erl_code_gen.m"
  {
#line 746 "erl_code_gen.m"
    struct erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_95_49_48_95_112_95_48_95_101_110_118_0_s erl_backend__erl_code_gen__env;

#line 746 "erl_code_gen.m"
    (erl_backend__erl_code_gen__env).erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__CasesList_13 = erl_backend__erl_code_gen__CasesList_13;
#line 751 "erl_code_gen.m"
    {
#line 751 "erl_code_gen.m"
      MR_Word erl_backend__erl_code_gen__TypeCtorInfo_96_96;
#line 751 "erl_code_gen.m"
      MR_Word erl_backend__erl_code_gen__CasesGoals_20;
#line 751 "erl_code_gen.m"
      MR_Word erl_backend__erl_code_gen__NonLocalsBoundInCases_24;
#line 751 "erl_code_gen.m"
      MR_Word erl_backend__erl_code_gen__MaybeMakeClosure_25;
#line 751 "erl_code_gen.m"
      MR_Word erl_backend__erl_code_gen__MaybeSuccessExpr_26;
#line 751 "erl_code_gen.m"
      MR_Word erl_backend__erl_code_gen__InstMap_27;
#line 751 "erl_code_gen.m"
      MR_Word erl_backend__erl_code_gen__VarType_28;
#line 751 "erl_code_gen.m"
      MR_Word erl_backend__erl_code_gen__ModuleInfo_29;
#line 751 "erl_code_gen.m"
      MR_Word erl_backend__erl_code_gen__TypeCtorCategory_30;
#line 751 "erl_code_gen.m"
      MR_Word erl_backend__erl_code_gen__MaybeConvertToAtom_39;
#line 751 "erl_code_gen.m"
      MR_Word erl_backend__erl_code_gen__SwitchVar_40;
#line 751 "erl_code_gen.m"
      MR_Word erl_backend__erl_code_gen__GenCase_41;
#line 751 "erl_code_gen.m"
      MR_Word erl_backend__erl_code_gen__ErlCases0_42;
#line 751 "erl_code_gen.m"
      MR_Word erl_backend__erl_code_gen__ErlCases_44;
#line 751 "erl_code_gen.m"
      MR_Word erl_backend__erl_code_gen__CaseExpr_45;
#line 751 "erl_code_gen.m"
      MR_Word erl_backend__erl_code_gen__STATE_VARIABLE_Info_51_51;
#line 751 "erl_code_gen.m"
      MR_Word erl_backend__erl_code_gen__STATE_VARIABLE_Info_62_62;
#line 751 "erl_code_gen.m"
      MR_Word erl_backend__erl_code_gen__V_78_78;
#line 751 "erl_code_gen.m"
      MR_Word erl_backend__erl_code_gen__V_79_79;
#line 800 "erl_code_gen.m"
      MR_Word erl_backend__erl_code_gen__Globals_31;
#line 800 "erl_code_gen.m"
      MR_Word erl_backend__erl_code_gen__V_52_52;
#line 800 "erl_code_gen.m"
      MR_Word erl_backend__erl_code_gen__V_53_53;
#line 800 "erl_code_gen.m"
      MR_Word erl_backend__erl_code_gen__V_54_54;
#line 800 "erl_code_gen.m"
      MR_Integer erl_backend__erl_code_gen__V_55_55;
#line 800 "erl_code_gen.m"
      MR_Integer erl_backend__erl_code_gen__V_56_56;
#line 844 "erl_code_gen.m"
      MR_Box erl_backend__erl_code_gen__conv7_STATE_VARIABLE_Info_47;

#line 3603 "erl_backend.erl_code_gen.c"
      (erl_backend__erl_code_gen__env).erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__TypeCtorInfo_85_85 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0;
#line 781 "erl_code_gen.m"
      {
#line 781 "erl_code_gen.m"
        erl_backend__erl_code_gen__CasesGoals_20 = mercury__list__map_2_f_0((erl_backend__erl_code_gen__env).erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__TypeCtorInfo_85_85, (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, (MR_Word) &erl_backend__erl_code_gen_scalar_common_3[1], (erl_backend__erl_code_gen__env).erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__CasesList_13);
      }
#line 782 "erl_code_gen.m"
      {
#line 782 "erl_code_gen.m"
        erl_backend__erl_code_gen__union_bound_nonlocals_in_goals_4_p_0(erl_backend__erl_code_gen__STATE_VARIABLE_Info_0_46, erl_backend__erl_code_gen__InstMap0_15, erl_backend__erl_code_gen__CasesGoals_20, &erl_backend__erl_code_gen__NonLocalsBoundInCases_24);
      }
#line 787 "erl_code_gen.m"
      {
#line 787 "erl_code_gen.m"
        erl_backend__erl_code_gen__maybe_create_closure_for_success_expr_8_p_0(erl_backend__erl_code_gen__NonLocalsBoundInCases_24, erl_backend__erl_code_gen__MaybeSuccessExpr0_17, &erl_backend__erl_code_gen__MaybeMakeClosure_25, &erl_backend__erl_code_gen__MaybeSuccessExpr_26, erl_backend__erl_code_gen__InstMap0_15, &erl_backend__erl_code_gen__InstMap_27, erl_backend__erl_code_gen__STATE_VARIABLE_Info_0_46, &erl_backend__erl_code_gen__STATE_VARIABLE_Info_51_51);
      }
#line 791 "erl_code_gen.m"
      {
#line 791 "erl_code_gen.m"
        erl_backend__erl_code_util__erl_variable_type_3_p_0(erl_backend__erl_code_gen__STATE_VARIABLE_Info_51_51, erl_backend__erl_code_gen__Var_11, &erl_backend__erl_code_gen__VarType_28);
      }
#line 792 "erl_code_gen.m"
      {
#line 792 "erl_code_gen.m"
        erl_backend__erl_code_util__erl_gen_info_get_module_info_2_p_0(erl_backend__erl_code_gen__STATE_VARIABLE_Info_51_51, &erl_backend__erl_code_gen__ModuleInfo_29);
      }
#line 793 "erl_code_gen.m"
      {
#line 793 "erl_code_gen.m"
        erl_backend__erl_code_gen__TypeCtorCategory_30 = check_hlds__type_util__classify_type_2_f_0(erl_backend__erl_code_gen__ModuleInfo_29, erl_backend__erl_code_gen__VarType_28);
      }
#line 800 "erl_code_gen.m"
      (erl_backend__erl_code_gen__env).erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__succeeded = ((MR_tag((MR_Word) erl_backend__erl_code_gen__TypeCtorCategory_30)) == (MR_mktag((MR_Integer) 1)));
#line 800 "erl_code_gen.m"
      if ((erl_backend__erl_code_gen__env).erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__succeeded)
#line 800 "erl_code_gen.m"
        {
#line 800 "erl_code_gen.m"
          erl_backend__erl_code_gen__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__erl_code_gen__TypeCtorCategory_30, (MR_Integer) 0)));
#line 800 "erl_code_gen.m"
          (erl_backend__erl_code_gen__env).erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__succeeded = (erl_backend__erl_code_gen__V_52_52 == (MR_Integer) 3);
#line 800 "erl_code_gen.m"
          if ((erl_backend__erl_code_gen__env).erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__succeeded)
#line 800 "erl_code_gen.m"
            {
#line 805 "erl_code_gen.m"
              {
#line 805 "erl_code_gen.m"
                hlds__hlds_module__module_info_get_globals_2_p_0(erl_backend__erl_code_gen__ModuleInfo_29, &erl_backend__erl_code_gen__Globals_31);
              }
#line 806 "erl_code_gen.m"
              erl_backend__erl_code_gen__V_53_53 = (MR_Integer) 479;
#line 807 "erl_code_gen.m"
              erl_backend__erl_code_gen__V_54_54 = (MR_Integer) 1;
#line 806 "erl_code_gen.m"
              {
#line 806 "erl_code_gen.m"
                (erl_backend__erl_code_gen__env).erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__succeeded = libs__globals__lookup_bool_option_3_p_1(erl_backend__erl_code_gen__Globals_31, erl_backend__erl_code_gen__V_53_53, erl_backend__erl_code_gen__V_54_54);
              }
#line 800 "erl_code_gen.m"
              if ((erl_backend__erl_code_gen__env).erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__succeeded)
#line 800 "erl_code_gen.m"
                {
#line 809 "erl_code_gen.m"
                  {
#line 809 "erl_code_gen.m"
                    erl_backend__erl_code_gen__V_55_55 = mercury__list__length_1_f_0((erl_backend__erl_code_gen__env).erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__TypeCtorInfo_85_85, (erl_backend__erl_code_gen__env).erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__CasesList_13);
                  }
#line 744 "erl_code_gen.m"
                  erl_backend__erl_code_gen__V_56_56 = (MR_Integer) 50;
#line 809 "erl_code_gen.m"
                  (erl_backend__erl_code_gen__env).erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__succeeded = (erl_backend__erl_code_gen__V_55_55 > erl_backend__erl_code_gen__V_56_56);
#line 800 "erl_code_gen.m"
                  if ((erl_backend__erl_code_gen__env).erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__succeeded)
#line 800 "erl_code_gen.m"
                    {
#line 814 "erl_code_gen.m"
                      {
#line 814 "erl_code_gen.m"
                        erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_10_p_0_8(&erl_backend__erl_code_gen__env);
                      }
#line 814 "erl_code_gen.m"
                      (erl_backend__erl_code_gen__env).erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__succeeded = !((erl_backend__erl_code_gen__env).erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__succeeded);
#line 800 "erl_code_gen.m"
                    }
#line 800 "erl_code_gen.m"
                }
#line 800 "erl_code_gen.m"
            }
#line 800 "erl_code_gen.m"
        }
#line 836 "erl_code_gen.m"
      if ((erl_backend__erl_code_gen__env).erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__succeeded)
#line 828 "erl_code_gen.m"
        {
#line 828 "erl_code_gen.m"
          MR_Word erl_backend__erl_code_gen__CharList_37;
#line 828 "erl_code_gen.m"
          MR_Word erl_backend__erl_code_gen__StringToAtom_38;
#line 828 "erl_code_gen.m"
          MR_Word erl_backend__erl_code_gen__V_64_64;
#line 828 "erl_code_gen.m"
          MR_Word erl_backend__erl_code_gen__V_65_65;
#line 828 "erl_code_gen.m"
          MR_Word erl_backend__erl_code_gen__V_67_67;
#line 828 "erl_code_gen.m"
          MR_Word erl_backend__erl_code_gen__V_68_68;
#line 828 "erl_code_gen.m"
          MR_Word erl_backend__erl_code_gen__V_70_70;

#line 828 "erl_code_gen.m"
          {
#line 828 "erl_code_gen.m"
            erl_backend__erl_code_util__erl_gen_info_new_named_var_4_p_0((MR_String) "Atom", &erl_backend__erl_code_gen__SwitchVar_40, erl_backend__erl_code_gen__STATE_VARIABLE_Info_51_51, &erl_backend__erl_code_gen__STATE_VARIABLE_Info_62_62);
          }
#line 829 "erl_code_gen.m"
          {
#line 829 "erl_code_gen.m"
            erl_backend__erl_code_gen__V_65_65 = erl_backend__elds__expr_from_var_1_f_0(erl_backend__erl_code_gen__Var_11);
          }
#line 829 "erl_code_gen.m"
          {
#line 829 "erl_code_gen.m"
            erl_backend__erl_code_gen__V_64_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 829 "erl_code_gen.m"
            MR_hl_field(MR_mktag(1), erl_backend__erl_code_gen__V_64_64, 0) = ((MR_Box) (erl_backend__erl_code_gen__V_65_65));
#line 829 "erl_code_gen.m"
            MR_hl_field(MR_mktag(1), erl_backend__erl_code_gen__V_64_64, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 829 "erl_code_gen.m"
          }
#line 829 "erl_code_gen.m"
          {
#line 829 "erl_code_gen.m"
            erl_backend__erl_code_gen__CharList_37 = erl_backend__elds__elds_call_builtin_2_f_0((MR_String) "binary_to_list", erl_backend__erl_code_gen__V_64_64);
          }
#line 830 "erl_code_gen.m"
          {
#line 830 "erl_code_gen.m"
            erl_backend__erl_code_gen__V_67_67 = erl_backend__elds__expr_from_var_1_f_0(erl_backend__erl_code_gen__SwitchVar_40);
          }
#line 831 "erl_code_gen.m"
          {
#line 831 "erl_code_gen.m"
            erl_backend__erl_code_gen__V_70_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 831 "erl_code_gen.m"
            MR_hl_field(MR_mktag(1), erl_backend__erl_code_gen__V_70_70, 0) = ((MR_Box) (erl_backend__erl_code_gen__CharList_37));
#line 831 "erl_code_gen.m"
            MR_hl_field(MR_mktag(1), erl_backend__erl_code_gen__V_70_70, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 831 "erl_code_gen.m"
          }
#line 831 "erl_code_gen.m"
          {
#line 831 "erl_code_gen.m"
            erl_backend__erl_code_gen__V_68_68 = erl_backend__elds__elds_call_builtin_2_f_0((MR_String) "list_to_atom", erl_backend__erl_code_gen__V_70_70);
          }
#line 830 "erl_code_gen.m"
          {
#line 830 "erl_code_gen.m"
            erl_backend__erl_code_gen__StringToAtom_38 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 830 "erl_code_gen.m"
            MR_hl_field(MR_mktag(3), erl_backend__erl_code_gen__StringToAtom_38, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 830 "erl_code_gen.m"
            MR_hl_field(MR_mktag(3), erl_backend__erl_code_gen__StringToAtom_38, 1) = ((MR_Box) (erl_backend__erl_code_gen__V_67_67));
#line 830 "erl_code_gen.m"
            MR_hl_field(MR_mktag(3), erl_backend__erl_code_gen__StringToAtom_38, 2) = ((MR_Box) (erl_backend__erl_code_gen__V_68_68));
#line 830 "erl_code_gen.m"
          }
#line 832 "erl_code_gen.m"
          {
#line 832 "erl_code_gen.m"
            erl_backend__erl_code_gen__MaybeConvertToAtom_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 832 "erl_code_gen.m"
            MR_hl_field(MR_mktag(1), erl_backend__erl_code_gen__MaybeConvertToAtom_39, 0) = ((MR_Box) (erl_backend__erl_code_gen__StringToAtom_38));
#line 832 "erl_code_gen.m"
          }
#line 834 "erl_code_gen.m"
          {
#line 834 "erl_code_gen.m"
            erl_backend__erl_code_gen__GenCase_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 834 "erl_code_gen.m"
            MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__GenCase_41, 0) = ((MR_Box) (&erl_backend__erl_code_gen_scalar_common_6[0]));
#line 834 "erl_code_gen.m"
            MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__GenCase_41, 1) = ((MR_Box) (erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_10_p_0_9));
#line 834 "erl_code_gen.m"
            MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__GenCase_41, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 834 "erl_code_gen.m"
            MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__GenCase_41, 3) = ((MR_Box) (erl_backend__erl_code_gen__CodeModel_14));
#line 834 "erl_code_gen.m"
            MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__GenCase_41, 4) = ((MR_Box) (erl_backend__erl_code_gen__InstMap_27));
#line 834 "erl_code_gen.m"
            MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__GenCase_41, 5) = ((MR_Box) (erl_backend__erl_code_gen__NonLocalsBoundInCases_24));
#line 834 "erl_code_gen.m"
            MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__GenCase_41, 6) = ((MR_Box) (erl_backend__erl_code_gen__MaybeSuccessExpr_26));
#line 834 "erl_code_gen.m"
          }
#line 828 "erl_code_gen.m"
        }
#line 836 "erl_code_gen.m"
      else
#line 837 "erl_code_gen.m"
        {
#line 837 "erl_code_gen.m"
          erl_backend__erl_code_gen__MaybeConvertToAtom_39 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 838 "erl_code_gen.m"
          erl_backend__erl_code_gen__SwitchVar_40 = erl_backend__erl_code_gen__Var_11;
#line 839 "erl_code_gen.m"
          {
#line 839 "erl_code_gen.m"
            erl_backend__erl_code_gen__GenCase_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 839 "erl_code_gen.m"
            MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__GenCase_41, 0) = ((MR_Box) (&erl_backend__erl_code_gen_scalar_common_7[0]));
#line 839 "erl_code_gen.m"
            MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__GenCase_41, 1) = ((MR_Box) (erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_10_p_0_10));
#line 839 "erl_code_gen.m"
            MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__GenCase_41, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 839 "erl_code_gen.m"
            MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__GenCase_41, 3) = ((MR_Box) (erl_backend__erl_code_gen__VarType_28));
#line 839 "erl_code_gen.m"
            MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__GenCase_41, 4) = ((MR_Box) (erl_backend__erl_code_gen__CodeModel_14));
#line 839 "erl_code_gen.m"
            MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__GenCase_41, 5) = ((MR_Box) (erl_backend__erl_code_gen__InstMap_27));
#line 839 "erl_code_gen.m"
            MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__GenCase_41, 6) = ((MR_Box) (erl_backend__erl_code_gen__NonLocalsBoundInCases_24));
#line 839 "erl_code_gen.m"
            MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__GenCase_41, 7) = ((MR_Box) (erl_backend__erl_code_gen__MaybeSuccessExpr_26));
#line 839 "erl_code_gen.m"
          }
#line 837 "erl_code_gen.m"
          erl_backend__erl_code_gen__STATE_VARIABLE_Info_62_62 = erl_backend__erl_code_gen__STATE_VARIABLE_Info_51_51;
#line 837 "erl_code_gen.m"
        }
#line 3835 "erl_backend.erl_code_gen.c"
      erl_backend__erl_code_gen__TypeCtorInfo_96_96 = (MR_Word) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_case_0;
#line 844 "erl_code_gen.m"
      {
#line 844 "erl_code_gen.m"
        mercury__list__map_foldl_5_p_0((erl_backend__erl_code_gen__env).erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__TypeCtorInfo_85_85, erl_backend__erl_code_gen__TypeCtorInfo_96_96, (MR_Word) &erl_backend__erl_code_util__erl_backend__erl_code_util__type_ctor_info_erl_gen_info_0, erl_backend__erl_code_gen__GenCase_41, (erl_backend__erl_code_gen__env).erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__CasesList_13, &erl_backend__erl_code_gen__ErlCases0_42, ((MR_Box) (erl_backend__erl_code_gen__STATE_VARIABLE_Info_62_62)), &erl_backend__erl_code_gen__conv7_STATE_VARIABLE_Info_47);
      }
#line 844 "erl_code_gen.m"
      *erl_backend__erl_code_gen__STATE_VARIABLE_Info_47 = ((MR_Word) erl_backend__erl_code_gen__conv7_STATE_VARIABLE_Info_47);
#line 850 "erl_code_gen.m"
#line 850 "erl_code_gen.m"
      switch (erl_backend__erl_code_gen__CanFail_12) {
#line 850 "erl_code_gen.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 850 "erl_code_gen.m"
        case (MR_Integer) 0:
#line 846 "erl_code_gen.m"
          {
#line 846 "erl_code_gen.m"
            MR_Word erl_backend__erl_code_gen__DefaultCase_43;
#line 846 "erl_code_gen.m"
            MR_Word erl_backend__erl_code_gen__V_74_74;
#line 846 "erl_code_gen.m"
            MR_Word erl_backend__erl_code_gen__V_75_75;
#line 846 "erl_code_gen.m"
            MR_Word erl_backend__erl_code_gen__V_76_76;

#line 848 "erl_code_gen.m"
            {
#line 848 "erl_code_gen.m"
              erl_backend__erl_code_gen__V_75_75 = erl_backend__elds__elds_fail_0_f_0();
            }
#line 848 "erl_code_gen.m"
            {
#line 848 "erl_code_gen.m"
              erl_backend__erl_code_gen__V_74_74 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 848 "erl_code_gen.m"
              MR_hl_field(MR_mktag(2), erl_backend__erl_code_gen__V_74_74, 0) = ((MR_Box) (erl_backend__erl_code_gen__V_75_75));
#line 848 "erl_code_gen.m"
            }
#line 848 "erl_code_gen.m"
            {
#line 848 "erl_code_gen.m"
              erl_backend__erl_code_gen__DefaultCase_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 848 "erl_code_gen.m"
              MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__DefaultCase_43, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 848 "erl_code_gen.m"
              MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__DefaultCase_43, 1) = ((MR_Box) (erl_backend__erl_code_gen__V_74_74));
#line 848 "erl_code_gen.m"
            }
#line 849 "erl_code_gen.m"
            {
#line 849 "erl_code_gen.m"
              erl_backend__erl_code_gen__V_76_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 849 "erl_code_gen.m"
              MR_hl_field(MR_mktag(1), erl_backend__erl_code_gen__V_76_76, 0) = ((MR_Box) (erl_backend__erl_code_gen__DefaultCase_43));
#line 849 "erl_code_gen.m"
              MR_hl_field(MR_mktag(1), erl_backend__erl_code_gen__V_76_76, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 849 "erl_code_gen.m"
            }
#line 849 "erl_code_gen.m"
            {
#line 849 "erl_code_gen.m"
              erl_backend__erl_code_gen__ErlCases_44 = mercury__list__f_43_43_2_f_0(erl_backend__erl_code_gen__TypeCtorInfo_96_96, erl_backend__erl_code_gen__ErlCases0_42, erl_backend__erl_code_gen__V_76_76);
            }
#line 846 "erl_code_gen.m"
          }
#line 850 "erl_code_gen.m"
          break;
#line 850 "erl_code_gen.m"
        case (MR_Integer) 1:
#line 852 "erl_code_gen.m"
          erl_backend__erl_code_gen__ErlCases_44 = erl_backend__erl_code_gen__ErlCases0_42;
#line 850 "erl_code_gen.m"
          break;
#line 850 "erl_code_gen.m"
      }
#line 856 "erl_code_gen.m"
      {
#line 856 "erl_code_gen.m"
        erl_backend__erl_code_gen__V_78_78 = erl_backend__elds__expr_from_var_1_f_0(erl_backend__erl_code_gen__SwitchVar_40);
      }
#line 856 "erl_code_gen.m"
      {
#line 856 "erl_code_gen.m"
        erl_backend__erl_code_gen__CaseExpr_45 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 856 "erl_code_gen.m"
        MR_hl_field(MR_mktag(3), erl_backend__erl_code_gen__CaseExpr_45, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 856 "erl_code_gen.m"
        MR_hl_field(MR_mktag(3), erl_backend__erl_code_gen__CaseExpr_45, 1) = ((MR_Box) (erl_backend__erl_code_gen__V_78_78));
#line 856 "erl_code_gen.m"
        MR_hl_field(MR_mktag(3), erl_backend__erl_code_gen__CaseExpr_45, 2) = ((MR_Box) (erl_backend__erl_code_gen__ErlCases_44));
#line 856 "erl_code_gen.m"
      }
#line 858 "erl_code_gen.m"
      {
#line 858 "erl_code_gen.m"
        erl_backend__erl_code_gen__V_79_79 = erl_backend__elds__maybe_join_exprs1_2_f_0(erl_backend__erl_code_gen__MaybeConvertToAtom_39, erl_backend__erl_code_gen__CaseExpr_45);
      }
#line 857 "erl_code_gen.m"
      {
#line 857 "erl_code_gen.m"
        *erl_backend__erl_code_gen__Statement_18 = erl_backend__elds__maybe_join_exprs1_2_f_0(erl_backend__erl_code_gen__MaybeMakeClosure_25, erl_backend__erl_code_gen__V_79_79);
      }
#line 751 "erl_code_gen.m"
    }
#line 746 "erl_code_gen.m"
  }
#line 746 "erl_code_gen.m"
}

#line 585 "erl_code_gen.m"
static void MR_CALL 
erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_99_111_109_109_105_116_95_112_105_101_99_101_115_95_95_91_51_93_95_48_8_p_0(
#line 585 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__Goal_9,
#line 585 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__InstMap_10,
#line 585 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__DoRenaming_12,
#line 585 "erl_code_gen.m"
  MR_Word * erl_backend__erl_code_gen__GoalStatement_13,
#line 585 "erl_code_gen.m"
  MR_Word * erl_backend__erl_code_gen__PackedNonLocals_14,
#line 585 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__STATE_VARIABLE_Info_0_22,
#line 585 "erl_code_gen.m"
  MR_Word * erl_backend__erl_code_gen__STATE_VARIABLE_Info_23)
#line 585 "erl_code_gen.m"
{
#line 590 "erl_code_gen.m"
  {
#line 590 "erl_code_gen.m"
    MR_bool erl_backend__erl_code_gen__succeeded;
#line 590 "erl_code_gen.m"
    MR_Word erl_backend__erl_code_gen__NonLocalsSet_16;
#line 590 "erl_code_gen.m"
    MR_Word erl_backend__erl_code_gen__NonLocals_17;
#line 590 "erl_code_gen.m"
    MR_Word erl_backend__erl_code_gen__Throw_18;
#line 590 "erl_code_gen.m"
    MR_Word erl_backend__erl_code_gen__ThrowValue_19;
#line 590 "erl_code_gen.m"
    MR_Word erl_backend__erl_code_gen__GoalStatement0_20;
#line 590 "erl_code_gen.m"
    MR_Word erl_backend__erl_code_gen__V_24_24;
#line 590 "erl_code_gen.m"
    MR_Word erl_backend__erl_code_gen__V_25_25;
#line 590 "erl_code_gen.m"
    MR_Word erl_backend__erl_code_gen__V_26_26;
#line 590 "erl_code_gen.m"
    MR_Word erl_backend__erl_code_gen__V_27_27;
#line 590 "erl_code_gen.m"
    MR_Word erl_backend__erl_code_gen__V_29_29;
#line 590 "erl_code_gen.m"
    MR_Word erl_backend__erl_code_gen__V_30_30;
#line 590 "erl_code_gen.m"
    MR_Word erl_backend__erl_code_gen__V_32_32;
#line 590 "erl_code_gen.m"
    MR_Word erl_backend__erl_code_gen__STATE_VARIABLE_Info_33_33;

#line 592 "erl_code_gen.m"
    {
#line 592 "erl_code_gen.m"
      erl_backend__erl_code_util__erl_bound_nonlocals_in_goal_4_p_0(erl_backend__erl_code_gen__STATE_VARIABLE_Info_0_22, erl_backend__erl_code_gen__InstMap_10, erl_backend__erl_code_gen__Goal_9, &erl_backend__erl_code_gen__NonLocalsSet_16);
    }
#line 593 "erl_code_gen.m"
    {
#line 593 "erl_code_gen.m"
      erl_backend__erl_code_gen__NonLocals_17 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, erl_backend__erl_code_gen__NonLocalsSet_16);
    }
#line 597 "erl_code_gen.m"
    {
#line 597 "erl_code_gen.m"
      erl_backend__erl_code_gen__V_26_26 = erl_backend__elds__elds_commit_marker_0_f_0();
    }
#line 598 "erl_code_gen.m"
    {
#line 598 "erl_code_gen.m"
      erl_backend__erl_code_gen__V_30_30 = erl_backend__elds__exprs_from_vars_1_f_0(erl_backend__erl_code_gen__NonLocals_17);
    }
#line 598 "erl_code_gen.m"
    {
#line 598 "erl_code_gen.m"
      erl_backend__erl_code_gen__V_29_29 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 598 "erl_code_gen.m"
      MR_hl_field(MR_mktag(3), erl_backend__erl_code_gen__V_29_29, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 598 "erl_code_gen.m"
      MR_hl_field(MR_mktag(3), erl_backend__erl_code_gen__V_29_29, 1) = ((MR_Box) (erl_backend__erl_code_gen__V_30_30));
#line 598 "erl_code_gen.m"
    }
#line 598 "erl_code_gen.m"
    {
#line 598 "erl_code_gen.m"
      MR_Word base;
#line 598 "erl_code_gen.m"
      base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 598 "erl_code_gen.m"
      *erl_backend__erl_code_gen__PackedNonLocals_14 = base;
#line 598 "erl_code_gen.m"
      MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (erl_backend__erl_code_gen__V_29_29));
#line 598 "erl_code_gen.m"
    }
#line 597 "erl_code_gen.m"
    {
#line 597 "erl_code_gen.m"
      erl_backend__erl_code_gen__V_27_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 597 "erl_code_gen.m"
      MR_hl_field(MR_mktag(1), erl_backend__erl_code_gen__V_27_27, 0) = ((MR_Box) (*erl_backend__erl_code_gen__PackedNonLocals_14));
#line 597 "erl_code_gen.m"
      MR_hl_field(MR_mktag(1), erl_backend__erl_code_gen__V_27_27, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 597 "erl_code_gen.m"
    }
#line 597 "erl_code_gen.m"
    {
#line 597 "erl_code_gen.m"
      erl_backend__erl_code_gen__V_25_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 597 "erl_code_gen.m"
      MR_hl_field(MR_mktag(1), erl_backend__erl_code_gen__V_25_25, 0) = ((MR_Box) (erl_backend__erl_code_gen__V_26_26));
#line 597 "erl_code_gen.m"
      MR_hl_field(MR_mktag(1), erl_backend__erl_code_gen__V_25_25, 1) = ((MR_Box) (erl_backend__erl_code_gen__V_27_27));
#line 597 "erl_code_gen.m"
    }
#line 597 "erl_code_gen.m"
    {
#line 597 "erl_code_gen.m"
      erl_backend__erl_code_gen__ThrowValue_19 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 597 "erl_code_gen.m"
      MR_hl_field(MR_mktag(3), erl_backend__erl_code_gen__ThrowValue_19, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 597 "erl_code_gen.m"
      MR_hl_field(MR_mktag(3), erl_backend__erl_code_gen__ThrowValue_19, 1) = ((MR_Box) (erl_backend__erl_code_gen__V_25_25));
#line 597 "erl_code_gen.m"
    }
#line 596 "erl_code_gen.m"
    {
#line 596 "erl_code_gen.m"
      erl_backend__erl_code_gen__V_24_24 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 596 "erl_code_gen.m"
      MR_hl_field(MR_mktag(2), erl_backend__erl_code_gen__V_24_24, 0) = ((MR_Box) (erl_backend__erl_code_gen__ThrowValue_19));
#line 596 "erl_code_gen.m"
    }
#line 596 "erl_code_gen.m"
    {
#line 596 "erl_code_gen.m"
      erl_backend__erl_code_gen__Throw_18 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 596 "erl_code_gen.m"
      MR_hl_field(MR_mktag(3), erl_backend__erl_code_gen__Throw_18, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 596 "erl_code_gen.m"
      MR_hl_field(MR_mktag(3), erl_backend__erl_code_gen__Throw_18, 1) = ((MR_Box) (erl_backend__erl_code_gen__V_24_24));
#line 596 "erl_code_gen.m"
    }
#line 602 "erl_code_gen.m"
    {
#line 602 "erl_code_gen.m"
      erl_backend__erl_code_gen__V_32_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 602 "erl_code_gen.m"
      MR_hl_field(MR_mktag(1), erl_backend__erl_code_gen__V_32_32, 0) = ((MR_Box) (erl_backend__erl_code_gen__Throw_18));
#line 602 "erl_code_gen.m"
    }
#line 602 "erl_code_gen.m"
    {
#line 602 "erl_code_gen.m"
      erl_backend__erl_code_gen__erl_gen_goal_7_p_0((MR_Integer) 2, erl_backend__erl_code_gen__InstMap_10, erl_backend__erl_code_gen__Goal_9, erl_backend__erl_code_gen__V_32_32, &erl_backend__erl_code_gen__GoalStatement0_20, erl_backend__erl_code_gen__STATE_VARIABLE_Info_0_22, &erl_backend__erl_code_gen__STATE_VARIABLE_Info_33_33);
    }
#line 609 "erl_code_gen.m"
#line 609 "erl_code_gen.m"
    switch (erl_backend__erl_code_gen__DoRenaming_12) {
#line 609 "erl_code_gen.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 609 "erl_code_gen.m"
      case (MR_Integer) 0:
#line 610 "erl_code_gen.m"
        {
#line 611 "erl_code_gen.m"
          *erl_backend__erl_code_gen__GoalStatement_13 = erl_backend__erl_code_gen__GoalStatement0_20;
#line 610 "erl_code_gen.m"
          *erl_backend__erl_code_gen__STATE_VARIABLE_Info_23 = erl_backend__erl_code_gen__STATE_VARIABLE_Info_33_33;
#line 610 "erl_code_gen.m"
        }
#line 609 "erl_code_gen.m"
        break;
#line 609 "erl_code_gen.m"
      case (MR_Integer) 1:
#line 606 "erl_code_gen.m"
        {
#line 606 "erl_code_gen.m"
          MR_Word erl_backend__erl_code_gen__Subn_21;

#line 607 "erl_code_gen.m"
          {
#line 607 "erl_code_gen.m"
            erl_backend__erl_code_util__erl_create_renaming_4_p_0(erl_backend__erl_code_gen__NonLocals_17, &erl_backend__erl_code_gen__Subn_21, erl_backend__erl_code_gen__STATE_VARIABLE_Info_33_33, erl_backend__erl_code_gen__STATE_VARIABLE_Info_23);
          }
#line 608 "erl_code_gen.m"
          {
#line 608 "erl_code_gen.m"
            erl_backend__erl_code_util__erl_rename_vars_in_expr_3_p_0(erl_backend__erl_code_gen__Subn_21, erl_backend__erl_code_gen__GoalStatement0_20, erl_backend__erl_code_gen__GoalStatement_13);
#line 608 "erl_code_gen.m"
            return;
          }
#line 606 "erl_code_gen.m"
        }
#line 609 "erl_code_gen.m"
        break;
#line 609 "erl_code_gen.m"
    }
#line 590 "erl_code_gen.m"
  }
#line 585 "erl_code_gen.m"
}

#line 497 "erl_code_gen.m"
static void MR_CALL 
erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_99_111_109_109_105_116_95_95_91_53_93_95_48_9_p_0(
#line 497 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__Goal_10,
#line 497 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__CodeModel_11,
#line 497 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__ScopeDetism_12,
#line 497 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__InstMap_13,
#line 497 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__MaybeSuccessExpr_15,
#line 497 "erl_code_gen.m"
  MR_Word * erl_backend__erl_code_gen__Statement_16,
#line 497 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__STATE_VARIABLE_Info_0_29,
#line 497 "erl_code_gen.m"
  MR_Word * erl_backend__erl_code_gen__STATE_VARIABLE_Info_30)
#line 497 "erl_code_gen.m"
{
#line 502 "erl_code_gen.m"
  {
#line 502 "erl_code_gen.m"
    MR_bool erl_backend__erl_code_gen__succeeded;
#line 502 "erl_code_gen.m"
    MR_Word erl_backend__erl_code_gen__GoalInfo_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__Goal_10, (MR_Integer) 1)));
#line 502 "erl_code_gen.m"
    MR_Word erl_backend__erl_code_gen__GoalCodeModel_20;
#line 503 "erl_code_gen.m"
    MR_Word erl_backend__erl_code_gen__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__Goal_10, (MR_Integer) 0)));
#line 505 "erl_code_gen.m"
    MR_Word erl_backend__erl_code_gen___GoalContext_21;

#line 504 "erl_code_gen.m"
    {
#line 504 "erl_code_gen.m"
      erl_backend__erl_code_gen__GoalCodeModel_20 = hlds__code_model__goal_info_get_code_model_1_f_0(erl_backend__erl_code_gen__GoalInfo_19);
    }
#line 505 "erl_code_gen.m"
    {
#line 505 "erl_code_gen.m"
      erl_backend__erl_code_gen___GoalContext_21 = hlds__hlds_goal__goal_info_get_context_1_f_0(erl_backend__erl_code_gen__GoalInfo_19);
    }
#line 508 "erl_code_gen.m"
    erl_backend__erl_code_gen__succeeded = (erl_backend__erl_code_gen__GoalCodeModel_20 == (MR_Integer) 2);
#line 508 "erl_code_gen.m"
    if (erl_backend__erl_code_gen__succeeded)
#line 509 "erl_code_gen.m"
      erl_backend__erl_code_gen__succeeded = (erl_backend__erl_code_gen__CodeModel_11 == (MR_Integer) 1);
#line 551 "erl_code_gen.m"
    if (erl_backend__erl_code_gen__succeeded)
#line 525 "erl_code_gen.m"
      {
#line 511 "erl_code_gen.m"
        erl_backend__erl_code_gen__succeeded = (erl_backend__erl_code_gen__ScopeDetism_12 == (MR_Integer) 7);
#line 525 "erl_code_gen.m"
        if (erl_backend__erl_code_gen__succeeded)
#line 523 "erl_code_gen.m"
          {
#line 523 "erl_code_gen.m"
            MR_Word erl_backend__erl_code_gen__GoalStatement_22;
#line 523 "erl_code_gen.m"
            MR_Word erl_backend__erl_code_gen__V_32_32;
#line 523 "erl_code_gen.m"
            MR_Word erl_backend__erl_code_gen__V_33_33;

#line 522 "erl_code_gen.m"
            {
#line 522 "erl_code_gen.m"
              erl_backend__erl_code_gen__erl_gen_goal_7_p_0(erl_backend__erl_code_gen__GoalCodeModel_20, erl_backend__erl_code_gen__InstMap_13, erl_backend__erl_code_gen__Goal_10, erl_backend__erl_code_gen__MaybeSuccessExpr_15, &erl_backend__erl_code_gen__GoalStatement_22, erl_backend__erl_code_gen__STATE_VARIABLE_Info_0_29, erl_backend__erl_code_gen__STATE_VARIABLE_Info_30);
            }
#line 524 "erl_code_gen.m"
            {
#line 524 "erl_code_gen.m"
              erl_backend__erl_code_gen__V_33_33 = erl_backend__elds__elds_fail_0_f_0();
            }
#line 524 "erl_code_gen.m"
            {
#line 524 "erl_code_gen.m"
              erl_backend__erl_code_gen__V_32_32 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 524 "erl_code_gen.m"
              MR_hl_field(MR_mktag(2), erl_backend__erl_code_gen__V_32_32, 0) = ((MR_Box) (erl_backend__erl_code_gen__V_33_33));
#line 524 "erl_code_gen.m"
            }
#line 524 "erl_code_gen.m"
            {
#line 524 "erl_code_gen.m"
              *erl_backend__erl_code_gen__Statement_16 = erl_backend__elds__join_exprs_2_f_0(erl_backend__erl_code_gen__GoalStatement_22, erl_backend__erl_code_gen__V_32_32);
            }
#line 523 "erl_code_gen.m"
          }
#line 525 "erl_code_gen.m"
        else
#line 543 "erl_code_gen.m"
          {
#line 543 "erl_code_gen.m"
            MR_Word erl_backend__erl_code_gen__PackedNonLocals_23;
#line 543 "erl_code_gen.m"
            MR_Word erl_backend__erl_code_gen__AnyCase_24;
#line 543 "erl_code_gen.m"
            MR_Word erl_backend__erl_code_gen__Catch_25;
#line 543 "erl_code_gen.m"
            MR_Word erl_backend__erl_code_gen__V_36_36;
#line 543 "erl_code_gen.m"
            MR_Word erl_backend__erl_code_gen__V_38_38;
#line 543 "erl_code_gen.m"
            MR_Word erl_backend__erl_code_gen__V_41_41;
#line 543 "erl_code_gen.m"
            MR_Word erl_backend__erl_code_gen__V_42_42;
#line 543 "erl_code_gen.m"
            MR_Word erl_backend__erl_code_gen__V_43_43;
#line 543 "erl_code_gen.m"
            MR_Word erl_backend__erl_code_gen__V_44_44;
#line 543 "erl_code_gen.m"
            MR_Word erl_backend__erl_code_gen__V_45_45;
#line 543 "erl_code_gen.m"
            MR_Word erl_backend__erl_code_gen__V_46_46;
#line 543 "erl_code_gen.m"
            MR_Word erl_backend__erl_code_gen__V_47_47;
#line 543 "erl_code_gen.m"
            MR_Word erl_backend__erl_code_gen__V_49_49;
#line 543 "erl_code_gen.m"
            MR_Word erl_backend__erl_code_gen__GoalStatement_64;

#line 542 "erl_code_gen.m"
            {
#line 542 "erl_code_gen.m"
              erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_99_111_109_109_105_116_95_112_105_101_99_101_115_95_95_91_51_93_95_48_8_p_0(erl_backend__erl_code_gen__Goal_10, erl_backend__erl_code_gen__InstMap_13, (MR_Integer) 0, &erl_backend__erl_code_gen__GoalStatement_64, &erl_backend__erl_code_gen__PackedNonLocals_23, erl_backend__erl_code_gen__STATE_VARIABLE_Info_0_29, erl_backend__erl_code_gen__STATE_VARIABLE_Info_30);
            }
#line 546 "erl_code_gen.m"
            {
#line 546 "erl_code_gen.m"
              erl_backend__erl_code_gen__V_42_42 = erl_backend__elds__elds_fail_0_f_0();
            }
#line 546 "erl_code_gen.m"
            {
#line 546 "erl_code_gen.m"
              erl_backend__erl_code_gen__V_41_41 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 546 "erl_code_gen.m"
              MR_hl_field(MR_mktag(2), erl_backend__erl_code_gen__V_41_41, 0) = ((MR_Box) (erl_backend__erl_code_gen__V_42_42));
#line 546 "erl_code_gen.m"
            }
#line 546 "erl_code_gen.m"
            {
#line 546 "erl_code_gen.m"
              erl_backend__erl_code_gen__AnyCase_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 546 "erl_code_gen.m"
              MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__AnyCase_24, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 546 "erl_code_gen.m"
              MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__AnyCase_24, 1) = ((MR_Box) (erl_backend__erl_code_gen__V_41_41));
#line 546 "erl_code_gen.m"
            }
#line 545 "erl_code_gen.m"
            {
#line 545 "erl_code_gen.m"
              erl_backend__erl_code_gen__V_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 545 "erl_code_gen.m"
              MR_hl_field(MR_mktag(1), erl_backend__erl_code_gen__V_36_36, 0) = ((MR_Box) (erl_backend__erl_code_gen__AnyCase_24));
#line 545 "erl_code_gen.m"
              MR_hl_field(MR_mktag(1), erl_backend__erl_code_gen__V_36_36, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 545 "erl_code_gen.m"
            }
#line 547 "erl_code_gen.m"
            {
#line 547 "erl_code_gen.m"
              erl_backend__erl_code_gen__V_43_43 = erl_backend__elds__elds_throw_atom_0_f_0();
            }
#line 548 "erl_code_gen.m"
            {
#line 548 "erl_code_gen.m"
              erl_backend__erl_code_gen__V_46_46 = erl_backend__elds__elds_commit_marker_0_f_0();
            }
#line 548 "erl_code_gen.m"
            {
#line 548 "erl_code_gen.m"
              erl_backend__erl_code_gen__V_47_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 548 "erl_code_gen.m"
              MR_hl_field(MR_mktag(1), erl_backend__erl_code_gen__V_47_47, 0) = ((MR_Box) (erl_backend__erl_code_gen__PackedNonLocals_23));
#line 548 "erl_code_gen.m"
              MR_hl_field(MR_mktag(1), erl_backend__erl_code_gen__V_47_47, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 548 "erl_code_gen.m"
            }
#line 548 "erl_code_gen.m"
            {
#line 548 "erl_code_gen.m"
              erl_backend__erl_code_gen__V_45_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 548 "erl_code_gen.m"
              MR_hl_field(MR_mktag(1), erl_backend__erl_code_gen__V_45_45, 0) = ((MR_Box) (erl_backend__erl_code_gen__V_46_46));
#line 548 "erl_code_gen.m"
              MR_hl_field(MR_mktag(1), erl_backend__erl_code_gen__V_45_45, 1) = ((MR_Box) (erl_backend__erl_code_gen__V_47_47));
#line 548 "erl_code_gen.m"
            }
#line 548 "erl_code_gen.m"
            {
#line 548 "erl_code_gen.m"
              erl_backend__erl_code_gen__V_44_44 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 548 "erl_code_gen.m"
              MR_hl_field(MR_mktag(3), erl_backend__erl_code_gen__V_44_44, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 548 "erl_code_gen.m"
              MR_hl_field(MR_mktag(3), erl_backend__erl_code_gen__V_44_44, 1) = ((MR_Box) (erl_backend__erl_code_gen__V_45_45));
#line 548 "erl_code_gen.m"
            }
#line 549 "erl_code_gen.m"
            {
#line 549 "erl_code_gen.m"
              erl_backend__erl_code_gen__V_49_49 = erl_backend__elds__det_expr_1_f_0(erl_backend__erl_code_gen__MaybeSuccessExpr_15);
            }
#line 547 "erl_code_gen.m"
            {
#line 547 "erl_code_gen.m"
              erl_backend__erl_code_gen__Catch_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 547 "erl_code_gen.m"
              MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__Catch_25, 0) = ((MR_Box) (erl_backend__erl_code_gen__V_43_43));
#line 547 "erl_code_gen.m"
              MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__Catch_25, 1) = ((MR_Box) (erl_backend__erl_code_gen__V_44_44));
#line 547 "erl_code_gen.m"
              MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__Catch_25, 2) = ((MR_Box) (erl_backend__erl_code_gen__V_49_49));
#line 547 "erl_code_gen.m"
            }
#line 545 "erl_code_gen.m"
            {
#line 545 "erl_code_gen.m"
              erl_backend__erl_code_gen__V_38_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 545 "erl_code_gen.m"
              MR_hl_field(MR_mktag(1), erl_backend__erl_code_gen__V_38_38, 0) = ((MR_Box) (erl_backend__erl_code_gen__Catch_25));
#line 545 "erl_code_gen.m"
            }
#line 545 "erl_code_gen.m"
            {
#line 545 "erl_code_gen.m"
              MR_Word base;
#line 545 "erl_code_gen.m"
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 545 "erl_code_gen.m"
              *erl_backend__erl_code_gen__Statement_16 = base;
#line 545 "erl_code_gen.m"
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 545 "erl_code_gen.m"
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (erl_backend__erl_code_gen__GoalStatement_64));
#line 545 "erl_code_gen.m"
              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (erl_backend__erl_code_gen__V_36_36));
#line 545 "erl_code_gen.m"
              MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (erl_backend__erl_code_gen__V_38_38));
#line 545 "erl_code_gen.m"
              MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 545 "erl_code_gen.m"
            }
#line 543 "erl_code_gen.m"
          }
#line 525 "erl_code_gen.m"
      }
#line 551 "erl_code_gen.m"
    else
#line 579 "erl_code_gen.m"
      {
#line 552 "erl_code_gen.m"
        erl_backend__erl_code_gen__succeeded = (erl_backend__erl_code_gen__GoalCodeModel_20 == (MR_Integer) 2);
#line 552 "erl_code_gen.m"
        if (erl_backend__erl_code_gen__succeeded)
#line 553 "erl_code_gen.m"
          erl_backend__erl_code_gen__succeeded = (erl_backend__erl_code_gen__CodeModel_11 == (MR_Integer) 0);
#line 579 "erl_code_gen.m"
        if (erl_backend__erl_code_gen__succeeded)
#line 570 "erl_code_gen.m"
          {
#line 570 "erl_code_gen.m"
            MR_Word erl_backend__erl_code_gen__ResultsVar_26;
#line 570 "erl_code_gen.m"
            MR_Word erl_backend__erl_code_gen__ResultsVarExpr_27;
#line 570 "erl_code_gen.m"
            MR_Word erl_backend__erl_code_gen__TryExpr_28;
#line 570 "erl_code_gen.m"
            MR_Word erl_backend__erl_code_gen__STATE_VARIABLE_Info_51_51;
#line 570 "erl_code_gen.m"
            MR_Word erl_backend__erl_code_gen__V_55_55;
#line 570 "erl_code_gen.m"
            MR_Word erl_backend__erl_code_gen__V_57_57;
#line 570 "erl_code_gen.m"
            MR_Word erl_backend__erl_code_gen__V_58_58;
#line 570 "erl_code_gen.m"
            MR_Word erl_backend__erl_code_gen__V_59_59;
#line 570 "erl_code_gen.m"
            MR_Word erl_backend__erl_code_gen__V_60_60;
#line 570 "erl_code_gen.m"
            MR_Word erl_backend__erl_code_gen__V_61_61;
#line 570 "erl_code_gen.m"
            MR_Word erl_backend__erl_code_gen__GoalStatement_65;
#line 570 "erl_code_gen.m"
            MR_Word erl_backend__erl_code_gen__PackedNonLocals_66;
#line 570 "erl_code_gen.m"
            MR_Word erl_backend__erl_code_gen__Catch_67;

#line 569 "erl_code_gen.m"
            {
#line 569 "erl_code_gen.m"
              erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_99_111_109_109_105_116_95_112_105_101_99_101_115_95_95_91_51_93_95_48_8_p_0(erl_backend__erl_code_gen__Goal_10, erl_backend__erl_code_gen__InstMap_13, (MR_Integer) 1, &erl_backend__erl_code_gen__GoalStatement_65, &erl_backend__erl_code_gen__PackedNonLocals_66, erl_backend__erl_code_gen__STATE_VARIABLE_Info_0_29, &erl_backend__erl_code_gen__STATE_VARIABLE_Info_51_51);
            }
#line 572 "erl_code_gen.m"
            {
#line 572 "erl_code_gen.m"
              erl_backend__erl_code_util__erl_gen_info_new_named_var_4_p_0((MR_String) "Results", &erl_backend__erl_code_gen__ResultsVar_26, erl_backend__erl_code_gen__STATE_VARIABLE_Info_51_51, erl_backend__erl_code_gen__STATE_VARIABLE_Info_30);
            }
#line 573 "erl_code_gen.m"
            {
#line 573 "erl_code_gen.m"
              erl_backend__erl_code_gen__ResultsVarExpr_27 = erl_backend__elds__expr_from_var_1_f_0(erl_backend__erl_code_gen__ResultsVar_26);
            }
#line 577 "erl_code_gen.m"
            {
#line 577 "erl_code_gen.m"
              erl_backend__erl_code_gen__V_57_57 = erl_backend__elds__elds_throw_atom_0_f_0();
            }
#line 578 "erl_code_gen.m"
            {
#line 578 "erl_code_gen.m"
              erl_backend__erl_code_gen__V_60_60 = erl_backend__elds__elds_commit_marker_0_f_0();
            }
#line 578 "erl_code_gen.m"
            {
#line 578 "erl_code_gen.m"
              erl_backend__erl_code_gen__V_61_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 578 "erl_code_gen.m"
              MR_hl_field(MR_mktag(1), erl_backend__erl_code_gen__V_61_61, 0) = ((MR_Box) (erl_backend__erl_code_gen__ResultsVarExpr_27));
#line 578 "erl_code_gen.m"
              MR_hl_field(MR_mktag(1), erl_backend__erl_code_gen__V_61_61, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 578 "erl_code_gen.m"
            }
#line 578 "erl_code_gen.m"
            {
#line 578 "erl_code_gen.m"
              erl_backend__erl_code_gen__V_59_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 578 "erl_code_gen.m"
              MR_hl_field(MR_mktag(1), erl_backend__erl_code_gen__V_59_59, 0) = ((MR_Box) (erl_backend__erl_code_gen__V_60_60));
#line 578 "erl_code_gen.m"
              MR_hl_field(MR_mktag(1), erl_backend__erl_code_gen__V_59_59, 1) = ((MR_Box) (erl_backend__erl_code_gen__V_61_61));
#line 578 "erl_code_gen.m"
            }
#line 578 "erl_code_gen.m"
            {
#line 578 "erl_code_gen.m"
              erl_backend__erl_code_gen__V_58_58 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 578 "erl_code_gen.m"
              MR_hl_field(MR_mktag(3), erl_backend__erl_code_gen__V_58_58, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 578 "erl_code_gen.m"
              MR_hl_field(MR_mktag(3), erl_backend__erl_code_gen__V_58_58, 1) = ((MR_Box) (erl_backend__erl_code_gen__V_59_59));
#line 578 "erl_code_gen.m"
            }
#line 577 "erl_code_gen.m"
            {
#line 577 "erl_code_gen.m"
              erl_backend__erl_code_gen__Catch_67 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 577 "erl_code_gen.m"
              MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__Catch_67, 0) = ((MR_Box) (erl_backend__erl_code_gen__V_57_57));
#line 577 "erl_code_gen.m"
              MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__Catch_67, 1) = ((MR_Box) (erl_backend__erl_code_gen__V_58_58));
#line 577 "erl_code_gen.m"
              MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__Catch_67, 2) = ((MR_Box) (erl_backend__erl_code_gen__ResultsVarExpr_27));
#line 577 "erl_code_gen.m"
            }
#line 576 "erl_code_gen.m"
            {
#line 576 "erl_code_gen.m"
              erl_backend__erl_code_gen__V_55_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 576 "erl_code_gen.m"
              MR_hl_field(MR_mktag(1), erl_backend__erl_code_gen__V_55_55, 0) = ((MR_Box) (erl_backend__erl_code_gen__Catch_67));
#line 576 "erl_code_gen.m"
            }
#line 576 "erl_code_gen.m"
            {
#line 576 "erl_code_gen.m"
              erl_backend__erl_code_gen__TryExpr_28 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 576 "erl_code_gen.m"
              MR_hl_field(MR_mktag(3), erl_backend__erl_code_gen__TryExpr_28, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 576 "erl_code_gen.m"
              MR_hl_field(MR_mktag(3), erl_backend__erl_code_gen__TryExpr_28, 1) = ((MR_Box) (erl_backend__erl_code_gen__GoalStatement_65));
#line 576 "erl_code_gen.m"
              MR_hl_field(MR_mktag(3), erl_backend__erl_code_gen__TryExpr_28, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 576 "erl_code_gen.m"
              MR_hl_field(MR_mktag(3), erl_backend__erl_code_gen__TryExpr_28, 3) = ((MR_Box) (erl_backend__erl_code_gen__V_55_55));
#line 576 "erl_code_gen.m"
              MR_hl_field(MR_mktag(3), erl_backend__erl_code_gen__TryExpr_28, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 576 "erl_code_gen.m"
            }
#line 575 "erl_code_gen.m"
            {
#line 575 "erl_code_gen.m"
              MR_Word base;
#line 575 "erl_code_gen.m"
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 575 "erl_code_gen.m"
              *erl_backend__erl_code_gen__Statement_16 = base;
#line 575 "erl_code_gen.m"
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 575 "erl_code_gen.m"
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (erl_backend__erl_code_gen__PackedNonLocals_66));
#line 575 "erl_code_gen.m"
              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (erl_backend__erl_code_gen__TryExpr_28));
#line 575 "erl_code_gen.m"
            }
#line 570 "erl_code_gen.m"
          }
#line 579 "erl_code_gen.m"
        else
#line 581 "erl_code_gen.m"
          {
#line 581 "erl_code_gen.m"
            erl_backend__erl_code_gen__erl_gen_goal_7_p_0(erl_backend__erl_code_gen__CodeModel_11, erl_backend__erl_code_gen__InstMap_13, erl_backend__erl_code_gen__Goal_10, erl_backend__erl_code_gen__MaybeSuccessExpr_15, erl_backend__erl_code_gen__Statement_16, erl_backend__erl_code_gen__STATE_VARIABLE_Info_0_29, erl_backend__erl_code_gen__STATE_VARIABLE_Info_30);
#line 581 "erl_code_gen.m"
            return;
          }
#line 579 "erl_code_gen.m"
      }
#line 502 "erl_code_gen.m"
  }
#line 497 "erl_code_gen.m"
}

#line 926 "erl_code_gen.m"
static MR_bool MR_CALL 
erl_backend__erl_code_gen__IntroducedFrom__pred__erl_gen_case_on_atom__926__1_2_p_0(
#line 926 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__OtherConsIds_17,
#line 926 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__HeadVar__2_30)
#line 926 "erl_code_gen.m"
{
#line 926 "erl_code_gen.m"
  {
#line 926 "erl_code_gen.m"
    MR_bool erl_backend__erl_code_gen__succeeded;

#line 926 "erl_code_gen.m"
    {
#line 926 "erl_code_gen.m"
      return erl_backend__erl_code_gen__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &erl_backend__erl_code_gen_scalar_common_1[1], ((MR_Box) (erl_backend__erl_code_gen__OtherConsIds_17)), ((MR_Box) (erl_backend__erl_code_gen__HeadVar__2_30)));
    }
#line 926 "erl_code_gen.m"
    return erl_backend__erl_code_gen__succeeded;
#line 926 "erl_code_gen.m"
  }
#line 926 "erl_code_gen.m"
}

#line 868 "erl_code_gen.m"
static MR_bool MR_CALL 
erl_backend__erl_code_gen__IntroducedFrom__pred__erl_gen_case__868__1_2_p_0(
#line 868 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__OtherConsIds_19,
#line 868 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__HeadVar__2_35)
#line 868 "erl_code_gen.m"
{
#line 868 "erl_code_gen.m"
  {
#line 868 "erl_code_gen.m"
    MR_bool erl_backend__erl_code_gen__succeeded;

#line 868 "erl_code_gen.m"
    {
#line 868 "erl_code_gen.m"
      return erl_backend__erl_code_gen__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &erl_backend__erl_code_gen_scalar_common_1[1], ((MR_Box) (erl_backend__erl_code_gen__OtherConsIds_19)), ((MR_Box) (erl_backend__erl_code_gen__HeadVar__2_35)));
    }
#line 868 "erl_code_gen.m"
    return erl_backend__erl_code_gen__succeeded;
#line 868 "erl_code_gen.m"
  }
#line 868 "erl_code_gen.m"
}

#line 781 "erl_code_gen.m"
static MR_Word MR_CALL 
erl_backend__erl_code_gen__IntroducedFrom__func__erl_gen_switch__781__1_1_f_0(
#line 781 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__HeadVar__1_49)
#line 781 "erl_code_gen.m"
{
#line 781 "erl_code_gen.m"
  {
#line 781 "erl_code_gen.m"
    MR_bool erl_backend__erl_code_gen__succeeded;
#line 781 "erl_code_gen.m"
    MR_Word erl_backend__erl_code_gen__HeadVar__2_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__HeadVar__1_49, (MR_Integer) 2)));
#line 781 "erl_code_gen.m"
    MR_Word erl_backend__erl_code_gen__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__HeadVar__1_49, (MR_Integer) 0)));
#line 781 "erl_code_gen.m"
    MR_Word erl_backend__erl_code_gen__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__HeadVar__1_49, (MR_Integer) 1)));

#line 781 "erl_code_gen.m"
    return erl_backend__erl_code_gen__HeadVar__2_50;
#line 781 "erl_code_gen.m"
  }
#line 781 "erl_code_gen.m"
}

#line 686 "erl_code_gen.m"
static MR_bool MR_CALL 
erl_backend__erl_code_gen__IntroducedFrom__pred__erl_gen_goal_expr__686__1_2_p_0(
#line 686 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__CodeModel_11,
#line 686 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__CallCodeModel_57)
#line 686 "erl_code_gen.m"
{
#line 686 "erl_code_gen.m"
  {
#line 686 "erl_code_gen.m"
    MR_bool erl_backend__erl_code_gen__succeeded = (erl_backend__erl_code_gen__CodeModel_11 == erl_backend__erl_code_gen__CallCodeModel_57);

#line 686 "erl_code_gen.m"
    return erl_backend__erl_code_gen__succeeded;
#line 686 "erl_code_gen.m"
  }
#line 686 "erl_code_gen.m"
}

#line 1598 "erl_code_gen.m"
static MR_bool MR_CALL 
erl_backend__erl_code_gen__search_elds_defn_3_p_0(
#line 1598 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__HeadVar__1_1,
#line 1598 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__PredProcId_6,
#line 1598 "erl_code_gen.m"
  MR_Word * erl_backend__erl_code_gen__Defn_7)
#line 1598 "erl_code_gen.m"
{
#line 1601 "erl_code_gen.m"
  while (MR_TRUE)
#line 1601 "erl_code_gen.m"
    {
#line 1601 "erl_code_gen.m"
      /* tailcall optimized into a loop */
#line 1601 "erl_code_gen.m"
      {
#line 1601 "erl_code_gen.m"
        MR_bool erl_backend__erl_code_gen__succeeded = ((MR_tag((MR_Word) erl_backend__erl_code_gen__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
#line 1601 "erl_code_gen.m"
        MR_Word erl_backend__erl_code_gen__Defn0_4;
#line 1601 "erl_code_gen.m"
        MR_Word erl_backend__erl_code_gen__Defns_5;
#line 1602 "erl_code_gen.m"
        MR_Word erl_backend__erl_code_gen__V_11_11;
#line 1602 "erl_code_gen.m"
        MR_Word erl_backend__erl_code_gen__V_8_8;
#line 1602 "erl_code_gen.m"
        MR_Word erl_backend__erl_code_gen__V_9_9;
#line 1602 "erl_code_gen.m"
        MR_Word erl_backend__erl_code_gen__V_10_10;

#line 1601 "erl_code_gen.m"
        if (erl_backend__erl_code_gen__succeeded)
#line 1601 "erl_code_gen.m"
          {
#line 1601 "erl_code_gen.m"
            erl_backend__erl_code_gen__Defn0_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__erl_code_gen__HeadVar__1_1, (MR_Integer) 0)));
#line 1601 "erl_code_gen.m"
            erl_backend__erl_code_gen__Defns_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__erl_code_gen__HeadVar__1_1, (MR_Integer) 1)));
#line 1602 "erl_code_gen.m"
            erl_backend__erl_code_gen__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__Defn0_4, (MR_Integer) 0)));
#line 1602 "erl_code_gen.m"
            erl_backend__erl_code_gen__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__Defn0_4, (MR_Integer) 1)));
#line 1602 "erl_code_gen.m"
            erl_backend__erl_code_gen__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__Defn0_4, (MR_Integer) 2)));
#line 1602 "erl_code_gen.m"
            erl_backend__erl_code_gen__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__Defn0_4, (MR_Integer) 3)));
#line 1602 "erl_code_gen.m"
            {
#line 1602 "erl_code_gen.m"
              erl_backend__erl_code_gen__succeeded = hlds__hlds_pred____Unify____pred_proc_id_0_0(erl_backend__erl_code_gen__PredProcId_6, erl_backend__erl_code_gen__V_11_11);
            }
#line 1604 "erl_code_gen.m"
            if (erl_backend__erl_code_gen__succeeded)
#line 1603 "erl_code_gen.m"
              {
#line 1603 "erl_code_gen.m"
                *erl_backend__erl_code_gen__Defn_7 = erl_backend__erl_code_gen__Defn0_4;
#line 1603 "erl_code_gen.m"
                erl_backend__erl_code_gen__succeeded = MR_TRUE;
#line 1603 "erl_code_gen.m"
              }
#line 1604 "erl_code_gen.m"
            else
#line 1605 "erl_code_gen.m"
              {
#line 1605 "erl_code_gen.m"
                /* direct tailcall eliminated */
#line 1605 "erl_code_gen.m"
                {
#line 1605 "erl_code_gen.m"
                  MR_Word erl_backend__erl_code_gen__HeadVar__1__tmp_copy_1 = erl_backend__erl_code_gen__Defns_5;

#line 1605 "erl_code_gen.m"
                  erl_backend__erl_code_gen__HeadVar__1_1 = erl_backend__erl_code_gen__HeadVar__1__tmp_copy_1;
#line 1605 "erl_code_gen.m"
                }
#line 1605 "erl_code_gen.m"
                continue;
#line 1605 "erl_code_gen.m"
              }
#line 1601 "erl_code_gen.m"
          }
#line 1601 "erl_code_gen.m"
        return erl_backend__erl_code_gen__succeeded;
#line 1601 "erl_code_gen.m"
      }
#line 1601 "erl_code_gen.m"
      break;
#line 1601 "erl_code_gen.m"
    }
#line 1598 "erl_code_gen.m"
}

#line 1577 "erl_code_gen.m"
static void MR_CALL 
erl_backend__erl_code_gen__erl_gen_foreign_export_defn_3_p_0(
#line 1577 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__ProcDefns_4,
#line 1577 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__PragmaExport_5,
#line 1577 "erl_code_gen.m"
  MR_Word * erl_backend__erl_code_gen__ForeignExportDefn_6)
#line 1577 "erl_code_gen.m"
{
#line 1580 "erl_code_gen.m"
  {
#line 1580 "erl_code_gen.m"
    MR_bool erl_backend__erl_code_gen__succeeded;
#line 1580 "erl_code_gen.m"
    MR_Word erl_backend__erl_code_gen__PredId_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__PragmaExport_5, (MR_Integer) 1)));
#line 1580 "erl_code_gen.m"
    MR_Integer erl_backend__erl_code_gen__ProcId_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__PragmaExport_5, (MR_Integer) 2)));
#line 1580 "erl_code_gen.m"
    MR_String erl_backend__erl_code_gen__Name_10 = ((MR_String) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__PragmaExport_5, (MR_Integer) 3)));
#line 1580 "erl_code_gen.m"
    MR_Word erl_backend__erl_code_gen__PredProcId_12;
#line 1581 "erl_code_gen.m"
    MR_Word erl_backend__erl_code_gen___Lang_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__PragmaExport_5, (MR_Integer) 0)));
#line 1581 "erl_code_gen.m"
    MR_Word erl_backend__erl_code_gen___Context_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__PragmaExport_5, (MR_Integer) 4)));
#line 1593 "erl_code_gen.m"
    MR_Word erl_backend__erl_code_gen__TargetProc_13;

#line 1582 "erl_code_gen.m"
    {
#line 1582 "erl_code_gen.m"
      erl_backend__erl_code_gen__PredProcId_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1582 "erl_code_gen.m"
      MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__PredProcId_12, 0) = ((MR_Box) (erl_backend__erl_code_gen__PredId_8));
#line 1582 "erl_code_gen.m"
      MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__PredProcId_12, 1) = ((MR_Box) (erl_backend__erl_code_gen__ProcId_9));
#line 1582 "erl_code_gen.m"
    }
#line 1583 "erl_code_gen.m"
    {
#line 1583 "erl_code_gen.m"
      erl_backend__erl_code_gen__succeeded = erl_backend__erl_code_gen__search_elds_defn_3_p_0(erl_backend__erl_code_gen__ProcDefns_4, erl_backend__erl_code_gen__PredProcId_12, &erl_backend__erl_code_gen__TargetProc_13);
    }
#line 1593 "erl_code_gen.m"
    if (erl_backend__erl_code_gen__succeeded)
#line 1585 "erl_code_gen.m"
      {
#line 1585 "erl_code_gen.m"
        MR_Word erl_backend__erl_code_gen__TypeCtorInfo_30_30;
#line 1585 "erl_code_gen.m"
        MR_Word erl_backend__erl_code_gen__TargetBody_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__TargetProc_13, (MR_Integer) 2)));
#line 1585 "erl_code_gen.m"
        MR_Integer erl_backend__erl_code_gen__Arity_18;
#line 1585 "erl_code_gen.m"
        MR_Word erl_backend__erl_code_gen__Vars_19;
#line 1585 "erl_code_gen.m"
        MR_Word erl_backend__erl_code_gen__VarSet_20;
#line 1585 "erl_code_gen.m"
        MR_Word erl_backend__erl_code_gen__Clause_21;
#line 1585 "erl_code_gen.m"
        MR_Word erl_backend__erl_code_gen__V_22_22;
#line 1585 "erl_code_gen.m"
        MR_Word erl_backend__erl_code_gen__V_23_23;
#line 1585 "erl_code_gen.m"
        MR_Word erl_backend__erl_code_gen__V_24_24;
#line 1585 "erl_code_gen.m"
        MR_Word erl_backend__erl_code_gen__V_25_25;
#line 1585 "erl_code_gen.m"
        MR_Word erl_backend__erl_code_gen__V_26_26;
#line 1584 "erl_code_gen.m"
        MR_Word erl_backend__erl_code_gen___TargetPPId_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__TargetProc_13, (MR_Integer) 0)));
#line 1584 "erl_code_gen.m"
        MR_Word erl_backend__erl_code_gen___TargetVarSet_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__TargetProc_13, (MR_Integer) 1)));
#line 1584 "erl_code_gen.m"
        MR_Word erl_backend__erl_code_gen___EnvVarNames_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__TargetProc_13, (MR_Integer) 3)));

#line 1586 "erl_code_gen.m"
        {
#line 1586 "erl_code_gen.m"
          erl_backend__erl_code_gen__Arity_18 = erl_backend__elds__elds_body_arity_1_f_0(erl_backend__erl_code_gen__TargetBody_16);
        }
#line 4842 "erl_backend.erl_code_gen.c"
        erl_backend__erl_code_gen__TypeCtorInfo_30_30 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 1589 "erl_code_gen.m"
        {
#line 1589 "erl_code_gen.m"
          erl_backend__erl_code_gen__V_22_22 = mercury__varset__init_0_f_0(erl_backend__erl_code_gen__TypeCtorInfo_30_30);
        }
#line 1589 "erl_code_gen.m"
        {
#line 1589 "erl_code_gen.m"
          mercury__varset__new_vars_4_p_0(erl_backend__erl_code_gen__TypeCtorInfo_30_30, erl_backend__erl_code_gen__Arity_18, &erl_backend__erl_code_gen__Vars_19, erl_backend__erl_code_gen__V_22_22, &erl_backend__erl_code_gen__VarSet_20);
        }
#line 1590 "erl_code_gen.m"
        {
#line 1590 "erl_code_gen.m"
          erl_backend__erl_code_gen__V_23_23 = erl_backend__elds__terms_from_vars_1_f_0(erl_backend__erl_code_gen__Vars_19);
        }
#line 1591 "erl_code_gen.m"
        {
#line 1591 "erl_code_gen.m"
          erl_backend__erl_code_gen__V_25_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1591 "erl_code_gen.m"
          MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__V_25_25, 0) = ((MR_Box) (erl_backend__erl_code_gen__PredProcId_12));
#line 1591 "erl_code_gen.m"
        }
#line 1591 "erl_code_gen.m"
        {
#line 1591 "erl_code_gen.m"
          erl_backend__erl_code_gen__V_26_26 = erl_backend__elds__exprs_from_vars_1_f_0(erl_backend__erl_code_gen__Vars_19);
        }
#line 1591 "erl_code_gen.m"
        {
#line 1591 "erl_code_gen.m"
          erl_backend__erl_code_gen__V_24_24 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1591 "erl_code_gen.m"
          MR_hl_field(MR_mktag(3), erl_backend__erl_code_gen__V_24_24, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 1591 "erl_code_gen.m"
          MR_hl_field(MR_mktag(3), erl_backend__erl_code_gen__V_24_24, 1) = ((MR_Box) (erl_backend__erl_code_gen__V_25_25));
#line 1591 "erl_code_gen.m"
          MR_hl_field(MR_mktag(3), erl_backend__erl_code_gen__V_24_24, 2) = ((MR_Box) (erl_backend__erl_code_gen__V_26_26));
#line 1591 "erl_code_gen.m"
        }
#line 1590 "erl_code_gen.m"
        {
#line 1590 "erl_code_gen.m"
          erl_backend__erl_code_gen__Clause_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1590 "erl_code_gen.m"
          MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__Clause_21, 0) = ((MR_Box) (erl_backend__erl_code_gen__V_23_23));
#line 1590 "erl_code_gen.m"
          MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__Clause_21, 1) = ((MR_Box) (erl_backend__erl_code_gen__V_24_24));
#line 1590 "erl_code_gen.m"
        }
#line 1592 "erl_code_gen.m"
        {
#line 1592 "erl_code_gen.m"
          MR_Word base;
#line 1592 "erl_code_gen.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1592 "erl_code_gen.m"
          *erl_backend__erl_code_gen__ForeignExportDefn_6 = base;
#line 1592 "erl_code_gen.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (erl_backend__erl_code_gen__Name_10));
#line 1592 "erl_code_gen.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (erl_backend__erl_code_gen__VarSet_20));
#line 1592 "erl_code_gen.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (erl_backend__erl_code_gen__Clause_21));
#line 1592 "erl_code_gen.m"
        }
#line 1585 "erl_code_gen.m"
      }
#line 1593 "erl_code_gen.m"
    else
#line 1594 "erl_code_gen.m"
      {
#line 1594 "erl_code_gen.m"
        {
#line 1594 "erl_code_gen.m"
          mercury__require__unexpected_3_p_0((MR_String) "erl_backend.erl_code_gen", (MR_String) "predicate \140erl_backend.erl_code_gen.erl_gen_foreign_export_defn\'/3", (MR_String) "missing definition of foreign exported procedure");
#line 1594 "erl_code_gen.m"
          return;
        }
#line 1594 "erl_code_gen.m"
      }
#line 1580 "erl_code_gen.m"
  }
#line 1577 "erl_code_gen.m"
}

#line 1008 "erl_code_gen.m"
static void MR_CALL 
erl_backend__erl_code_gen__ground_var_in_instmap_3_p_0(
#line 1008 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__Var_4,
#line 1008 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__STATE_VARIABLE_InstMap_0_6,
#line 1008 "erl_code_gen.m"
  MR_Word * erl_backend__erl_code_gen__STATE_VARIABLE_InstMap_7)
#line 1008 "erl_code_gen.m"
{
#line 1010 "erl_code_gen.m"
  {
#line 1010 "erl_code_gen.m"
    MR_bool erl_backend__erl_code_gen__succeeded;

#line 1017 "erl_code_gen.m"
    {
#line 1017 "erl_code_gen.m"
      hlds__instmap__instmap_set_var_4_p_0(erl_backend__erl_code_gen__Var_4, (MR_Word) MR_mkword(MR_mktag(3), &erl_backend__erl_code_gen_scalar_common_3[0]), erl_backend__erl_code_gen__STATE_VARIABLE_InstMap_0_6, erl_backend__erl_code_gen__STATE_VARIABLE_InstMap_7);
#line 1017 "erl_code_gen.m"
      return;
    }
#line 1010 "erl_code_gen.m"
  }
#line 1008 "erl_code_gen.m"
}

#line 1003 "erl_code_gen.m"
static MR_bool MR_CALL 
erl_backend__erl_code_gen__non_dummy_var_3_f_0(
#line 1003 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__ModuleInfo_5,
#line 1003 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__Var_6,
#line 1003 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__Type_7,
#line 1003 "erl_code_gen.m"
  MR_Word * erl_backend__erl_code_gen__Var_4)
#line 1003 "erl_code_gen.m"
{
#line 1005 "erl_code_gen.m"
  {
#line 1005 "erl_code_gen.m"
    MR_bool erl_backend__erl_code_gen__succeeded;
#line 1005 "erl_code_gen.m"
    MR_Word erl_backend__erl_code_gen__V_8_8;

#line 1005 "erl_code_gen.m"
    *erl_backend__erl_code_gen__Var_4 = erl_backend__erl_code_gen__Var_6;
#line 1006 "erl_code_gen.m"
    {
#line 1006 "erl_code_gen.m"
      erl_backend__erl_code_gen__V_8_8 = check_hlds__type_util__check_dummy_type_2_f_0(erl_backend__erl_code_gen__ModuleInfo_5, erl_backend__erl_code_gen__Type_7);
    }
#line 1006 "erl_code_gen.m"
    erl_backend__erl_code_gen__succeeded = (erl_backend__erl_code_gen__V_8_8 == (MR_Integer) 1);
#line 1005 "erl_code_gen.m"
    return erl_backend__erl_code_gen__succeeded;
#line 1005 "erl_code_gen.m"
  }
#line 1003 "erl_code_gen.m"
}

#line 982 "erl_code_gen.m"
static MR_bool MR_CALL 
erl_backend__erl_code_gen__maybe_create_closure_for_success_expr_8_p_0_1(
#line 982 "erl_code_gen.m"
  MR_Box erl_backend__erl_code_gen__closure_arg,
#line 982 "erl_code_gen.m"
  MR_Box erl_backend__erl_code_gen__wrapper_arg_1,
#line 982 "erl_code_gen.m"
  MR_Box erl_backend__erl_code_gen__wrapper_arg_2,
#line 982 "erl_code_gen.m"
  MR_Box * erl_backend__erl_code_gen__wrapper_arg_3)
#line 982 "erl_code_gen.m"
{
#line 982 "erl_code_gen.m"
  {
#line 982 "erl_code_gen.m"
    MR_bool erl_backend__erl_code_gen__succeeded;
#line 982 "erl_code_gen.m"
    MR_Box erl_backend__erl_code_gen__closure = erl_backend__erl_code_gen__closure_arg;
#line 982 "erl_code_gen.m"
    MR_Word erl_backend__erl_code_gen__conv0_Var_4;

#line 982 "erl_code_gen.m"
    {
#line 982 "erl_code_gen.m"
      erl_backend__erl_code_gen__succeeded = erl_backend__erl_code_gen__non_dummy_var_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__closure, (MR_Integer) 3))), ((MR_Word) erl_backend__erl_code_gen__wrapper_arg_1), ((MR_Word) erl_backend__erl_code_gen__wrapper_arg_2), &erl_backend__erl_code_gen__conv0_Var_4);
    }
#line 982 "erl_code_gen.m"
    if (erl_backend__erl_code_gen__succeeded)
#line 982 "erl_code_gen.m"
      {
#line 982 "erl_code_gen.m"
        *erl_backend__erl_code_gen__wrapper_arg_3 = ((MR_Box) (erl_backend__erl_code_gen__conv0_Var_4));
#line 982 "erl_code_gen.m"
        erl_backend__erl_code_gen__succeeded = MR_TRUE;
#line 982 "erl_code_gen.m"
      }
#line 982 "erl_code_gen.m"
    return erl_backend__erl_code_gen__succeeded;
#line 982 "erl_code_gen.m"
  }
#line 982 "erl_code_gen.m"
}

#line 964 "erl_code_gen.m"
static void MR_CALL 
erl_backend__erl_code_gen__maybe_create_closure_for_success_expr_8_p_0(
#line 964 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__NonLocals_9,
#line 964 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__MaybeSuccessExpr0_10,
#line 964 "erl_code_gen.m"
  MR_Word * erl_backend__erl_code_gen__MaybeMakeClosure_11,
#line 964 "erl_code_gen.m"
  MR_Word * erl_backend__erl_code_gen__MaybeSuccessExpr_12,
#line 964 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__InstMap0_13,
#line 964 "erl_code_gen.m"
  MR_Word * erl_backend__erl_code_gen__InstMap_14,
#line 964 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__STATE_VARIABLE_Info_0_28,
#line 964 "erl_code_gen.m"
  MR_Word * erl_backend__erl_code_gen__STATE_VARIABLE_Info_29)
#line 964 "erl_code_gen.m"
{
#line 997 "erl_code_gen.m"
  {
#line 997 "erl_code_gen.m"
    MR_bool erl_backend__erl_code_gen__succeeded = ((MR_tag((MR_Word) erl_backend__erl_code_gen__MaybeSuccessExpr0_10)) == (MR_mktag((MR_Integer) 1)));
#line 997 "erl_code_gen.m"
    MR_Word erl_backend__erl_code_gen__SuccessExpr0_16;
#line 971 "erl_code_gen.m"
    MR_Integer erl_backend__erl_code_gen__V_30_30;
#line 971 "erl_code_gen.m"
    MR_Integer erl_backend__erl_code_gen__V_31_31;

#line 971 "erl_code_gen.m"
    if (erl_backend__erl_code_gen__succeeded)
#line 971 "erl_code_gen.m"
      {
#line 971 "erl_code_gen.m"
        erl_backend__erl_code_gen__SuccessExpr0_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__erl_code_gen__MaybeSuccessExpr0_10, (MR_Integer) 0)));
#line 972 "erl_code_gen.m"
        {
#line 972 "erl_code_gen.m"
          erl_backend__erl_code_gen__V_30_30 = erl_backend__erl_code_util__erl_expr_size_1_f_0(erl_backend__erl_code_gen__SuccessExpr0_16);
        }
#line 740 "erl_code_gen.m"
        erl_backend__erl_code_gen__V_31_31 = (MR_Integer) 10;
#line 972 "erl_code_gen.m"
        erl_backend__erl_code_gen__succeeded = (erl_backend__erl_code_gen__V_30_30 > erl_backend__erl_code_gen__V_31_31);
#line 971 "erl_code_gen.m"
      }
#line 997 "erl_code_gen.m"
    if (erl_backend__erl_code_gen__succeeded)
#line 974 "erl_code_gen.m"
      {
#line 974 "erl_code_gen.m"
        MR_Word erl_backend__erl_code_gen__TypeInfo_38_38;
#line 974 "erl_code_gen.m"
        MR_Word erl_backend__erl_code_gen__ClosureVar_17;
#line 974 "erl_code_gen.m"
        MR_Word erl_backend__erl_code_gen__ClosureVarExpr_18;
#line 974 "erl_code_gen.m"
        MR_Word erl_backend__erl_code_gen__ClosureArgs0_19;
#line 974 "erl_code_gen.m"
        MR_Word erl_backend__erl_code_gen__ModuleInfo_20;
#line 974 "erl_code_gen.m"
        MR_Word erl_backend__erl_code_gen__ClosureArgsTypes_21;
#line 974 "erl_code_gen.m"
        MR_Word erl_backend__erl_code_gen__ClosureArgs_22;
#line 974 "erl_code_gen.m"
        MR_Word erl_backend__erl_code_gen__ClosureArgsTerms_23;
#line 974 "erl_code_gen.m"
        MR_Word erl_backend__erl_code_gen__ClosureArgsExprs_24;
#line 974 "erl_code_gen.m"
        MR_Word erl_backend__erl_code_gen__MakeClosure_25;
#line 974 "erl_code_gen.m"
        MR_Word erl_backend__erl_code_gen__ClosureFun_26;
#line 974 "erl_code_gen.m"
        MR_Word erl_backend__erl_code_gen__CallClosure_27;
#line 974 "erl_code_gen.m"
        MR_Word erl_backend__erl_code_gen__V_34_34;
#line 974 "erl_code_gen.m"
        MR_Word erl_backend__erl_code_gen__V_35_35;
#line 974 "erl_code_gen.m"
        MR_Word erl_backend__erl_code_gen__V_36_36;

#line 974 "erl_code_gen.m"
        {
#line 974 "erl_code_gen.m"
          erl_backend__erl_code_util__erl_gen_info_new_named_var_4_p_0((MR_String) "SuccessClosure", &erl_backend__erl_code_gen__ClosureVar_17, erl_backend__erl_code_gen__STATE_VARIABLE_Info_0_28, erl_backend__erl_code_gen__STATE_VARIABLE_Info_29);
        }
#line 1017 "erl_code_gen.m"
        {
#line 1017 "erl_code_gen.m"
          hlds__instmap__instmap_set_var_4_p_0(erl_backend__erl_code_gen__ClosureVar_17, (MR_Word) MR_mkword(MR_mktag(3), &erl_backend__erl_code_gen_scalar_common_3[0]), erl_backend__erl_code_gen__InstMap0_13, erl_backend__erl_code_gen__InstMap_14);
        }
#line 976 "erl_code_gen.m"
        {
#line 976 "erl_code_gen.m"
          erl_backend__erl_code_gen__ClosureVarExpr_18 = erl_backend__elds__expr_from_var_1_f_0(erl_backend__erl_code_gen__ClosureVar_17);
        }
#line 977 "erl_code_gen.m"
        {
#line 977 "erl_code_gen.m"
          erl_backend__erl_code_gen__ClosureArgs0_19 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, erl_backend__erl_code_gen__NonLocals_9);
        }
#line 980 "erl_code_gen.m"
        {
#line 980 "erl_code_gen.m"
          erl_backend__erl_code_util__erl_gen_info_get_module_info_2_p_0(*erl_backend__erl_code_gen__STATE_VARIABLE_Info_29, &erl_backend__erl_code_gen__ModuleInfo_20);
        }
#line 981 "erl_code_gen.m"
        {
#line 981 "erl_code_gen.m"
          erl_backend__erl_code_util__erl_variable_types_3_p_0(*erl_backend__erl_code_gen__STATE_VARIABLE_Info_29, erl_backend__erl_code_gen__ClosureArgs0_19, &erl_backend__erl_code_gen__ClosureArgsTypes_21);
        }
#line 5152 "erl_backend.erl_code_gen.c"
        erl_backend__erl_code_gen__TypeInfo_38_38 = (MR_Word) &erl_backend__erl_code_gen_scalar_common_1[0];
#line 982 "erl_code_gen.m"
        {
#line 982 "erl_code_gen.m"
          erl_backend__erl_code_gen__V_34_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 982 "erl_code_gen.m"
          MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__V_34_34, 0) = ((MR_Box) (&erl_backend__erl_code_gen_scalar_common_5[1]));
#line 982 "erl_code_gen.m"
          MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__V_34_34, 1) = ((MR_Box) (erl_backend__erl_code_gen__maybe_create_closure_for_success_expr_8_p_0_1));
#line 982 "erl_code_gen.m"
          MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__V_34_34, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 982 "erl_code_gen.m"
          MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__V_34_34, 3) = ((MR_Box) (erl_backend__erl_code_gen__ModuleInfo_20));
#line 982 "erl_code_gen.m"
        }
#line 982 "erl_code_gen.m"
        {
#line 982 "erl_code_gen.m"
          erl_backend__erl_code_gen__ClosureArgs_22 = mercury__list__filter_map_corresponding_3_f_0(erl_backend__erl_code_gen__TypeInfo_38_38, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, erl_backend__erl_code_gen__TypeInfo_38_38, erl_backend__erl_code_gen__V_34_34, erl_backend__erl_code_gen__ClosureArgs0_19, erl_backend__erl_code_gen__ClosureArgsTypes_21);
        }
#line 984 "erl_code_gen.m"
        {
#line 984 "erl_code_gen.m"
          erl_backend__erl_code_gen__ClosureArgsTerms_23 = erl_backend__elds__terms_from_vars_1_f_0(erl_backend__erl_code_gen__ClosureArgs_22);
        }
#line 985 "erl_code_gen.m"
        {
#line 985 "erl_code_gen.m"
          erl_backend__erl_code_gen__ClosureArgsExprs_24 = erl_backend__elds__exprs_from_vars_1_f_0(erl_backend__erl_code_gen__ClosureArgs_22);
        }
#line 989 "erl_code_gen.m"
        {
#line 989 "erl_code_gen.m"
          erl_backend__erl_code_gen__V_35_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 989 "erl_code_gen.m"
          MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__V_35_35, 0) = ((MR_Box) (erl_backend__erl_code_gen__ClosureArgsTerms_23));
#line 989 "erl_code_gen.m"
          MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__V_35_35, 1) = ((MR_Box) (erl_backend__erl_code_gen__SuccessExpr0_16));
#line 989 "erl_code_gen.m"
        }
#line 989 "erl_code_gen.m"
        erl_backend__erl_code_gen__ClosureFun_26 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) erl_backend__erl_code_gen__V_35_35);
#line 988 "erl_code_gen.m"
        {
#line 988 "erl_code_gen.m"
          erl_backend__erl_code_gen__MakeClosure_25 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 988 "erl_code_gen.m"
          MR_hl_field(MR_mktag(3), erl_backend__erl_code_gen__MakeClosure_25, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 988 "erl_code_gen.m"
          MR_hl_field(MR_mktag(3), erl_backend__erl_code_gen__MakeClosure_25, 1) = ((MR_Box) (erl_backend__erl_code_gen__ClosureVarExpr_18));
#line 988 "erl_code_gen.m"
          MR_hl_field(MR_mktag(3), erl_backend__erl_code_gen__MakeClosure_25, 2) = ((MR_Box) (erl_backend__erl_code_gen__ClosureFun_26));
#line 988 "erl_code_gen.m"
        }
#line 992 "erl_code_gen.m"
        {
#line 992 "erl_code_gen.m"
          erl_backend__erl_code_gen__V_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 992 "erl_code_gen.m"
          MR_hl_field(MR_mktag(1), erl_backend__erl_code_gen__V_36_36, 0) = ((MR_Box) (erl_backend__erl_code_gen__ClosureVarExpr_18));
#line 992 "erl_code_gen.m"
        }
#line 992 "erl_code_gen.m"
        {
#line 992 "erl_code_gen.m"
          erl_backend__erl_code_gen__CallClosure_27 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 992 "erl_code_gen.m"
          MR_hl_field(MR_mktag(3), erl_backend__erl_code_gen__CallClosure_27, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 992 "erl_code_gen.m"
          MR_hl_field(MR_mktag(3), erl_backend__erl_code_gen__CallClosure_27, 1) = ((MR_Box) (erl_backend__erl_code_gen__V_36_36));
#line 992 "erl_code_gen.m"
          MR_hl_field(MR_mktag(3), erl_backend__erl_code_gen__CallClosure_27, 2) = ((MR_Box) (erl_backend__erl_code_gen__ClosureArgsExprs_24));
#line 992 "erl_code_gen.m"
        }
#line 995 "erl_code_gen.m"
        {
#line 995 "erl_code_gen.m"
          MR_Word base;
#line 995 "erl_code_gen.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 995 "erl_code_gen.m"
          *erl_backend__erl_code_gen__MaybeMakeClosure_11 = base;
#line 995 "erl_code_gen.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (erl_backend__erl_code_gen__MakeClosure_25));
#line 995 "erl_code_gen.m"
        }
#line 996 "erl_code_gen.m"
        {
#line 996 "erl_code_gen.m"
          MR_Word base;
#line 996 "erl_code_gen.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 996 "erl_code_gen.m"
          *erl_backend__erl_code_gen__MaybeSuccessExpr_12 = base;
#line 996 "erl_code_gen.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (erl_backend__erl_code_gen__CallClosure_27));
#line 996 "erl_code_gen.m"
        }
#line 974 "erl_code_gen.m"
      }
#line 997 "erl_code_gen.m"
    else
#line 998 "erl_code_gen.m"
      {
#line 998 "erl_code_gen.m"
        *erl_backend__erl_code_gen__InstMap_14 = erl_backend__erl_code_gen__InstMap0_13;
#line 999 "erl_code_gen.m"
        *erl_backend__erl_code_gen__MaybeMakeClosure_11 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1000 "erl_code_gen.m"
        *erl_backend__erl_code_gen__MaybeSuccessExpr_12 = erl_backend__erl_code_gen__MaybeSuccessExpr0_10;
#line 998 "erl_code_gen.m"
        *erl_backend__erl_code_gen__STATE_VARIABLE_Info_29 = erl_backend__erl_code_gen__STATE_VARIABLE_Info_0_28;
#line 998 "erl_code_gen.m"
      }
#line 997 "erl_code_gen.m"
  }
#line 964 "erl_code_gen.m"
}

#line 955 "erl_code_gen.m"
static void MR_CALL 
erl_backend__erl_code_gen__union_bound_nonlocals_in_goals_4_p_0_1(
#line 955 "erl_code_gen.m"
  MR_Box erl_backend__erl_code_gen__closure_arg,
#line 955 "erl_code_gen.m"
  MR_Box erl_backend__erl_code_gen__wrapper_arg_1,
#line 955 "erl_code_gen.m"
  MR_Box * erl_backend__erl_code_gen__wrapper_arg_2)
#line 955 "erl_code_gen.m"
{
#line 955 "erl_code_gen.m"
  {
#line 955 "erl_code_gen.m"
    MR_Box erl_backend__erl_code_gen__closure = erl_backend__erl_code_gen__closure_arg;
#line 955 "erl_code_gen.m"
    MR_Word erl_backend__erl_code_gen__conv0_HeadVar__4_4;

#line 955 "erl_code_gen.m"
    {
#line 955 "erl_code_gen.m"
      erl_backend__erl_code_util__erl_bound_nonlocals_in_goal_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__closure, (MR_Integer) 4))), ((MR_Word) erl_backend__erl_code_gen__wrapper_arg_1), &erl_backend__erl_code_gen__conv0_HeadVar__4_4);
    }
#line 955 "erl_code_gen.m"
    *erl_backend__erl_code_gen__wrapper_arg_2 = ((MR_Box) (erl_backend__erl_code_gen__conv0_HeadVar__4_4));
#line 955 "erl_code_gen.m"
  }
#line 955 "erl_code_gen.m"
}

#line 951 "erl_code_gen.m"
static void MR_CALL 
erl_backend__erl_code_gen__union_bound_nonlocals_in_goals_4_p_0(
#line 951 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__Info_5,
#line 951 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__InstMap_6,
#line 951 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__Goals_7,
#line 951 "erl_code_gen.m"
  MR_Word * erl_backend__erl_code_gen__NonLocalsUnion_8)
#line 951 "erl_code_gen.m"
{
#line 954 "erl_code_gen.m"
  {
#line 954 "erl_code_gen.m"
    MR_bool erl_backend__erl_code_gen__succeeded;
#line 954 "erl_code_gen.m"
    MR_Word erl_backend__erl_code_gen__IsBound_9;
#line 954 "erl_code_gen.m"
    MR_Word erl_backend__erl_code_gen__NonLocalsLists_10;

#line 955 "erl_code_gen.m"
    {
#line 955 "erl_code_gen.m"
      erl_backend__erl_code_gen__IsBound_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 955 "erl_code_gen.m"
      MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__IsBound_9, 0) = ((MR_Box) (&erl_backend__erl_code_gen_scalar_common_5[0]));
#line 955 "erl_code_gen.m"
      MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__IsBound_9, 1) = ((MR_Box) (erl_backend__erl_code_gen__union_bound_nonlocals_in_goals_4_p_0_1));
#line 955 "erl_code_gen.m"
      MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__IsBound_9, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 955 "erl_code_gen.m"
      MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__IsBound_9, 3) = ((MR_Box) (erl_backend__erl_code_gen__Info_5));
#line 955 "erl_code_gen.m"
      MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__IsBound_9, 4) = ((MR_Box) (erl_backend__erl_code_gen__InstMap_6));
#line 955 "erl_code_gen.m"
    }
#line 956 "erl_code_gen.m"
    {
#line 956 "erl_code_gen.m"
      mercury__list__map_3_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, (MR_Word) &erl_backend__erl_code_gen_scalar_common_1[3], erl_backend__erl_code_gen__IsBound_9, erl_backend__erl_code_gen__Goals_7, &erl_backend__erl_code_gen__NonLocalsLists_10);
    }
#line 957 "erl_code_gen.m"
    {
#line 957 "erl_code_gen.m"
      *erl_backend__erl_code_gen__NonLocalsUnion_8 = parse_tree__set_of_var__union_list_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, erl_backend__erl_code_gen__NonLocalsLists_10);
    }
#line 954 "erl_code_gen.m"
  }
#line 951 "erl_code_gen.m"
}

#line 926 "erl_code_gen.m"
static MR_bool MR_CALL 
erl_backend__erl_code_gen__erl_gen_case_on_atom_8_p_0_1(
#line 926 "erl_code_gen.m"
  MR_Box erl_backend__erl_code_gen__closure_arg)
#line 926 "erl_code_gen.m"
{
#line 926 "erl_code_gen.m"
  {
#line 926 "erl_code_gen.m"
    MR_bool erl_backend__erl_code_gen__succeeded;
#line 926 "erl_code_gen.m"
    MR_Box erl_backend__erl_code_gen__closure = erl_backend__erl_code_gen__closure_arg;

#line 926 "erl_code_gen.m"
    {
#line 926 "erl_code_gen.m"
      return erl_backend__erl_code_gen__succeeded = erl_backend__erl_code_gen__IntroducedFrom__pred__erl_gen_case_on_atom__926__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__closure, (MR_Integer) 4))));
    }
#line 926 "erl_code_gen.m"
    return erl_backend__erl_code_gen__succeeded;
#line 926 "erl_code_gen.m"
  }
#line 926 "erl_code_gen.m"
}

#line 919 "erl_code_gen.m"
static void MR_CALL 
erl_backend__erl_code_gen__erl_gen_case_on_atom_8_p_0(
#line 919 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__CodeModel_9,
#line 919 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__InstMap_10,
#line 919 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__MustBindNonLocals_11,
#line 919 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__MaybeSuccessExpr_12,
#line 919 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__Case_13,
#line 919 "erl_code_gen.m"
  MR_Word * erl_backend__erl_code_gen__ELDSCase_14,
#line 919 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__STATE_VARIABLE_Info_0_24,
#line 919 "erl_code_gen.m"
  MR_Word * erl_backend__erl_code_gen__STATE_VARIABLE_Info_25)
#line 919 "erl_code_gen.m"
{
#line 924 "erl_code_gen.m"
  {
#line 924 "erl_code_gen.m"
    MR_bool erl_backend__erl_code_gen__succeeded;
#line 924 "erl_code_gen.m"
    MR_Word erl_backend__erl_code_gen__MainConsId_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__Case_13, (MR_Integer) 0)));
#line 924 "erl_code_gen.m"
    MR_Word erl_backend__erl_code_gen__OtherConsIds_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__Case_13, (MR_Integer) 1)));
#line 924 "erl_code_gen.m"
    MR_Word erl_backend__erl_code_gen__Goal_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__Case_13, (MR_Integer) 2)));
#line 924 "erl_code_gen.m"
    MR_String erl_backend__erl_code_gen__String_20;
#line 924 "erl_code_gen.m"
    MR_Word erl_backend__erl_code_gen__MaybeSuccessExprForCase_21;
#line 924 "erl_code_gen.m"
    MR_Word erl_backend__erl_code_gen__Statement0_22;
#line 924 "erl_code_gen.m"
    MR_Word erl_backend__erl_code_gen__Statement_23;
#line 924 "erl_code_gen.m"
    MR_Word erl_backend__erl_code_gen__V_26_26;
#line 924 "erl_code_gen.m"
    MR_Word erl_backend__erl_code_gen__STATE_VARIABLE_Info_34_34;
#line 924 "erl_code_gen.m"
    MR_Word erl_backend__erl_code_gen__V_36_36;
#line 930 "erl_code_gen.m"
    MR_String erl_backend__erl_code_gen__String0_19;

#line 926 "erl_code_gen.m"
    {
#line 926 "erl_code_gen.m"
      erl_backend__erl_code_gen__V_26_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 926 "erl_code_gen.m"
      MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__V_26_26, 0) = ((MR_Box) (&erl_backend__erl_code_gen_scalar_common_4[1]));
#line 926 "erl_code_gen.m"
      MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__V_26_26, 1) = ((MR_Box) (erl_backend__erl_code_gen__erl_gen_case_on_atom_8_p_0_1));
#line 926 "erl_code_gen.m"
      MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__V_26_26, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 926 "erl_code_gen.m"
      MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__V_26_26, 3) = ((MR_Box) (erl_backend__erl_code_gen__OtherConsIds_17));
#line 926 "erl_code_gen.m"
      MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__V_26_26, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 926 "erl_code_gen.m"
    }
#line 926 "erl_code_gen.m"
    {
#line 926 "erl_code_gen.m"
      mercury__require__expect_4_p_0(erl_backend__erl_code_gen__V_26_26, (MR_String) "erl_backend.erl_code_gen", (MR_String) "predicate \140erl_backend.erl_code_gen.erl_gen_case_on_atom\'/8", (MR_String) "multi-cons-id switch arms NYI");
    }
#line 928 "erl_code_gen.m"
    erl_backend__erl_code_gen__succeeded = ((((MR_tag((MR_Word) erl_backend__erl_code_gen__MainConsId_16)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_code_gen__MainConsId_16, (MR_Integer) 0)))) == (MR_Integer) 8)));
#line 928 "erl_code_gen.m"
    if (erl_backend__erl_code_gen__succeeded)
#line 928 "erl_code_gen.m"
      {
#line 928 "erl_code_gen.m"
        erl_backend__erl_code_gen__String0_19 = ((MR_String) (MR_hl_field(MR_mktag(3), erl_backend__erl_code_gen__MainConsId_16, (MR_Integer) 1)));
#line 929 "erl_code_gen.m"
        erl_backend__erl_code_gen__String_20 = erl_backend__erl_code_gen__String0_19;
#line 928 "erl_code_gen.m"
      }
#line 928 "erl_code_gen.m"
    else
#line 931 "erl_code_gen.m"
      {
#line 931 "erl_code_gen.m"
        {
#line 931 "erl_code_gen.m"
          mercury__require__unexpected_3_p_0((MR_String) "erl_backend.erl_code_gen", (MR_String) "predicate \140erl_backend.erl_code_gen.erl_gen_case_on_atom\'/8", (MR_String) "non-string const");
#line 931 "erl_code_gen.m"
          return;
        }
#line 931 "erl_code_gen.m"
      }
#line 933 "erl_code_gen.m"
    {
#line 933 "erl_code_gen.m"
      erl_backend__erl_code_util__erl_fix_success_expr_6_p_0(erl_backend__erl_code_gen__InstMap_10, erl_backend__erl_code_gen__Goal_18, erl_backend__erl_code_gen__MaybeSuccessExpr_12, &erl_backend__erl_code_gen__MaybeSuccessExprForCase_21, erl_backend__erl_code_gen__STATE_VARIABLE_Info_0_24, &erl_backend__erl_code_gen__STATE_VARIABLE_Info_34_34);
    }
#line 935 "erl_code_gen.m"
    {
#line 935 "erl_code_gen.m"
      erl_backend__erl_code_gen__erl_gen_goal_7_p_0(erl_backend__erl_code_gen__CodeModel_9, erl_backend__erl_code_gen__InstMap_10, erl_backend__erl_code_gen__Goal_18, erl_backend__erl_code_gen__MaybeSuccessExprForCase_21, &erl_backend__erl_code_gen__Statement0_22, erl_backend__erl_code_gen__STATE_VARIABLE_Info_34_34, erl_backend__erl_code_gen__STATE_VARIABLE_Info_25);
    }
#line 942 "erl_code_gen.m"
    {
#line 942 "erl_code_gen.m"
      erl_backend__erl_code_util__erl_bind_unbound_vars_6_p_0(*erl_backend__erl_code_gen__STATE_VARIABLE_Info_25, erl_backend__erl_code_gen__MustBindNonLocals_11, erl_backend__erl_code_gen__Goal_18, erl_backend__erl_code_gen__InstMap_10, erl_backend__erl_code_gen__Statement0_22, &erl_backend__erl_code_gen__Statement_23);
    }
#line 944 "erl_code_gen.m"
    {
#line 944 "erl_code_gen.m"
      erl_backend__erl_code_gen__V_36_36 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 944 "erl_code_gen.m"
      MR_hl_field(MR_mktag(3), erl_backend__erl_code_gen__V_36_36, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 944 "erl_code_gen.m"
      MR_hl_field(MR_mktag(3), erl_backend__erl_code_gen__V_36_36, 1) = ((MR_Box) (erl_backend__erl_code_gen__String_20));
#line 944 "erl_code_gen.m"
    }
#line 944 "erl_code_gen.m"
    {
#line 944 "erl_code_gen.m"
      MR_Word base;
#line 944 "erl_code_gen.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 944 "erl_code_gen.m"
      *erl_backend__erl_code_gen__ELDSCase_14 = base;
#line 944 "erl_code_gen.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (erl_backend__erl_code_gen__V_36_36));
#line 944 "erl_code_gen.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (erl_backend__erl_code_gen__Statement_23));
#line 944 "erl_code_gen.m"
    }
#line 924 "erl_code_gen.m"
  }
#line 919 "erl_code_gen.m"
}

#line 868 "erl_code_gen.m"
static MR_bool MR_CALL 
erl_backend__erl_code_gen__erl_gen_case_9_p_0_1(
#line 868 "erl_code_gen.m"
  MR_Box erl_backend__erl_code_gen__closure_arg)
#line 868 "erl_code_gen.m"
{
#line 868 "erl_code_gen.m"
  {
#line 868 "erl_code_gen.m"
    MR_bool erl_backend__erl_code_gen__succeeded;
#line 868 "erl_code_gen.m"
    MR_Box erl_backend__erl_code_gen__closure = erl_backend__erl_code_gen__closure_arg;

#line 868 "erl_code_gen.m"
    {
#line 868 "erl_code_gen.m"
      return erl_backend__erl_code_gen__succeeded = erl_backend__erl_code_gen__IntroducedFrom__pred__erl_gen_case__868__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__closure, (MR_Integer) 4))));
    }
#line 868 "erl_code_gen.m"
    return erl_backend__erl_code_gen__succeeded;
#line 868 "erl_code_gen.m"
  }
#line 868 "erl_code_gen.m"
}

#line 860 "erl_code_gen.m"
static void MR_CALL 
erl_backend__erl_code_gen__erl_gen_case_9_p_0(
#line 860 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__Type_10,
#line 860 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__CodeModel_11,
#line 860 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__InstMap_12,
#line 860 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__MustBindNonLocals_13,
#line 860 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__MaybeSuccessExpr_14,
#line 860 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__Case_15,
#line 860 "erl_code_gen.m"
  MR_Word * erl_backend__erl_code_gen__ELDSCase_16,
#line 860 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__STATE_VARIABLE_Info_0_29,
#line 860 "erl_code_gen.m"
  MR_Word * erl_backend__erl_code_gen__STATE_VARIABLE_Info_30)
#line 860 "erl_code_gen.m"
{
#line 866 "erl_code_gen.m"
  {
#line 866 "erl_code_gen.m"
    MR_bool erl_backend__erl_code_gen__succeeded;
#line 866 "erl_code_gen.m"
    MR_Word erl_backend__erl_code_gen__MainConsId_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__Case_15, (MR_Integer) 0)));
#line 866 "erl_code_gen.m"
    MR_Word erl_backend__erl_code_gen__OtherConsIds_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__Case_15, (MR_Integer) 1)));
#line 866 "erl_code_gen.m"
    MR_Word erl_backend__erl_code_gen__Goal_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__Case_15, (MR_Integer) 2)));
#line 866 "erl_code_gen.m"
    MR_Word erl_backend__erl_code_gen__ModuleInfo_21;
#line 866 "erl_code_gen.m"
    MR_Integer erl_backend__erl_code_gen__Size_22;
#line 866 "erl_code_gen.m"
    MR_Word erl_backend__erl_code_gen__DummyVars_23;
#line 866 "erl_code_gen.m"
    MR_Word erl_backend__erl_code_gen__Pattern_25;
#line 866 "erl_code_gen.m"
    MR_Word erl_backend__erl_code_gen__MaybeSuccessExprForCase_26;
#line 866 "erl_code_gen.m"
    MR_Word erl_backend__erl_code_gen__Statement0_27;
#line 866 "erl_code_gen.m"
    MR_Word erl_backend__erl_code_gen__Statement_28;
#line 866 "erl_code_gen.m"
    MR_Word erl_backend__erl_code_gen__V_31_31;
#line 866 "erl_code_gen.m"
    MR_Word erl_backend__erl_code_gen__STATE_VARIABLE_Info_36_36;
#line 866 "erl_code_gen.m"
    MR_Word erl_backend__erl_code_gen__STATE_VARIABLE_Info_42_42;
#line 866 "erl_code_gen.m"
    MR_Word erl_backend__erl_code_gen__STATE_VARIABLE_Info_43_43;
#line 915 "erl_code_gen.m"
    MR_Word erl_backend__erl_code_gen__ConsDefn_51;
#line 900 "erl_code_gen.m"
    MR_Word erl_backend__erl_code_gen__TypeCtor_50;
#line 875 "erl_code_gen.m"
    MR_Word erl_backend__erl_code_gen__Pattern0_24;
#line 875 "erl_code_gen.m"
    MR_Word erl_backend__erl_code_gen__STATE_VARIABLE_Info_38_38;

#line 868 "erl_code_gen.m"
    {
#line 868 "erl_code_gen.m"
      erl_backend__erl_code_gen__V_31_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 868 "erl_code_gen.m"
      MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__V_31_31, 0) = ((MR_Box) (&erl_backend__erl_code_gen_scalar_common_4[1]));
#line 868 "erl_code_gen.m"
      MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__V_31_31, 1) = ((MR_Box) (erl_backend__erl_code_gen__erl_gen_case_9_p_0_1));
#line 868 "erl_code_gen.m"
      MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__V_31_31, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 868 "erl_code_gen.m"
      MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__V_31_31, 3) = ((MR_Box) (erl_backend__erl_code_gen__OtherConsIds_19));
#line 868 "erl_code_gen.m"
      MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__V_31_31, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 868 "erl_code_gen.m"
    }
#line 868 "erl_code_gen.m"
    {
#line 868 "erl_code_gen.m"
      mercury__require__expect_4_p_0(erl_backend__erl_code_gen__V_31_31, (MR_String) "erl_backend.erl_code_gen", (MR_String) "predicate \140erl_backend.erl_code_gen.erl_gen_case\'/9", (MR_String) "multi-cons-id switch arms NYI");
    }
#line 870 "erl_code_gen.m"
    {
#line 870 "erl_code_gen.m"
      erl_backend__erl_code_util__erl_gen_info_get_module_info_2_p_0(erl_backend__erl_code_gen__STATE_VARIABLE_Info_0_29, &erl_backend__erl_code_gen__ModuleInfo_21);
    }
#line 900 "erl_code_gen.m"
    {
#line 900 "erl_code_gen.m"
      erl_backend__erl_code_gen__succeeded = parse_tree__prog_type__type_to_ctor_2_p_0(erl_backend__erl_code_gen__Type_10, &erl_backend__erl_code_gen__TypeCtor_50);
    }
#line 900 "erl_code_gen.m"
    if (erl_backend__erl_code_gen__succeeded)
#line 901 "erl_code_gen.m"
      {
#line 901 "erl_code_gen.m"
        erl_backend__erl_code_gen__succeeded = check_hlds__type_util__get_cons_defn_4_p_0(erl_backend__erl_code_gen__ModuleInfo_21, erl_backend__erl_code_gen__TypeCtor_50, erl_backend__erl_code_gen__MainConsId_18, &erl_backend__erl_code_gen__ConsDefn_51);
      }
#line 915 "erl_code_gen.m"
    if (erl_backend__erl_code_gen__succeeded)
#line 908 "erl_code_gen.m"
      {
#line 908 "erl_code_gen.m"
        MR_Word erl_backend__erl_code_gen__TypeInfo_41_82;
#line 908 "erl_code_gen.m"
        MR_Word erl_backend__erl_code_gen__Constraints_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__ConsDefn_51, (MR_Integer) 5)));
#line 908 "erl_code_gen.m"
        MR_Word erl_backend__erl_code_gen__ConstrainedTVars_53;
#line 908 "erl_code_gen.m"
        MR_Word erl_backend__erl_code_gen__ExistTVars_54;
#line 908 "erl_code_gen.m"
        MR_Word erl_backend__erl_code_gen__UnconstrainedTVars_55;
#line 908 "erl_code_gen.m"
        MR_Integer erl_backend__erl_code_gen__V_56_56;
#line 908 "erl_code_gen.m"
        MR_Integer erl_backend__erl_code_gen__V_57_57;
#line 908 "erl_code_gen.m"
        MR_Integer erl_backend__erl_code_gen__V_58_58;
#line 908 "erl_code_gen.m"
        MR_Integer erl_backend__erl_code_gen__V_59_59;
#line 908 "erl_code_gen.m"
        MR_Word erl_backend__erl_code_gen__V_60_60;
#line 908 "erl_code_gen.m"
        MR_Word erl_backend__erl_code_gen__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__ConsDefn_51, (MR_Integer) 0)));
#line 908 "erl_code_gen.m"
        MR_Word erl_backend__erl_code_gen__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__ConsDefn_51, (MR_Integer) 1)));
#line 908 "erl_code_gen.m"
        MR_Word erl_backend__erl_code_gen__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__ConsDefn_51, (MR_Integer) 2)));
#line 908 "erl_code_gen.m"
        MR_Word erl_backend__erl_code_gen__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__ConsDefn_51, (MR_Integer) 3)));
#line 908 "erl_code_gen.m"
        MR_Word erl_backend__erl_code_gen__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__ConsDefn_51, (MR_Integer) 4)));
#line 908 "erl_code_gen.m"
        MR_Word erl_backend__erl_code_gen__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__ConsDefn_51, (MR_Integer) 6)));
#line 908 "erl_code_gen.m"
        MR_Word erl_backend__erl_code_gen__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__ConsDefn_51, (MR_Integer) 7)));
#line 910 "erl_code_gen.m"
        MR_Word erl_backend__erl_code_gen__V_68_68;
#line 910 "erl_code_gen.m"
        MR_Word erl_backend__erl_code_gen__V_69_69;
#line 910 "erl_code_gen.m"
        MR_Word erl_backend__erl_code_gen__V_70_70;
#line 910 "erl_code_gen.m"
        MR_Word erl_backend__erl_code_gen__V_71_71;
#line 910 "erl_code_gen.m"
        MR_Word erl_backend__erl_code_gen__V_72_72;
#line 910 "erl_code_gen.m"
        MR_Word erl_backend__erl_code_gen__V_73_73;
#line 910 "erl_code_gen.m"
        MR_Word erl_backend__erl_code_gen__V_74_74;
#line 914 "erl_code_gen.m"
        MR_Word erl_backend__erl_code_gen__V_75_75;
#line 914 "erl_code_gen.m"
        MR_Word erl_backend__erl_code_gen__V_76_76;
#line 914 "erl_code_gen.m"
        MR_Word erl_backend__erl_code_gen__V_77_77;
#line 914 "erl_code_gen.m"
        MR_Word erl_backend__erl_code_gen__V_78_78;
#line 914 "erl_code_gen.m"
        MR_Word erl_backend__erl_code_gen__V_79_79;
#line 914 "erl_code_gen.m"
        MR_Word erl_backend__erl_code_gen__V_80_80;
#line 914 "erl_code_gen.m"
        MR_Word erl_backend__erl_code_gen__V_81_81;

#line 909 "erl_code_gen.m"
        {
#line 909 "erl_code_gen.m"
          parse_tree__prog_type__constraint_list_get_tvars_2_p_0(erl_backend__erl_code_gen__Constraints_52, &erl_backend__erl_code_gen__ConstrainedTVars_53);
        }
#line 910 "erl_code_gen.m"
        erl_backend__erl_code_gen__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__ConsDefn_51, (MR_Integer) 0)));
#line 910 "erl_code_gen.m"
        erl_backend__erl_code_gen__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__ConsDefn_51, (MR_Integer) 1)));
#line 910 "erl_code_gen.m"
        erl_backend__erl_code_gen__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__ConsDefn_51, (MR_Integer) 2)));
#line 910 "erl_code_gen.m"
        erl_backend__erl_code_gen__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__ConsDefn_51, (MR_Integer) 3)));
#line 910 "erl_code_gen.m"
        erl_backend__erl_code_gen__ExistTVars_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__ConsDefn_51, (MR_Integer) 4)));
#line 910 "erl_code_gen.m"
        erl_backend__erl_code_gen__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__ConsDefn_51, (MR_Integer) 5)));
#line 910 "erl_code_gen.m"
        erl_backend__erl_code_gen__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__ConsDefn_51, (MR_Integer) 6)));
#line 910 "erl_code_gen.m"
        erl_backend__erl_code_gen__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__ConsDefn_51, (MR_Integer) 7)));
#line 5735 "erl_backend.erl_code_gen.c"
        erl_backend__erl_code_gen__TypeInfo_41_82 = (MR_Word) &erl_backend__erl_code_gen_scalar_common_1[2];
#line 911 "erl_code_gen.m"
        {
#line 911 "erl_code_gen.m"
          erl_backend__erl_code_gen__UnconstrainedTVars_55 = mercury__list__delete_elems_2_f_0(erl_backend__erl_code_gen__TypeInfo_41_82, erl_backend__erl_code_gen__ExistTVars_54, erl_backend__erl_code_gen__ConstrainedTVars_53);
        }
#line 913 "erl_code_gen.m"
        {
#line 913 "erl_code_gen.m"
          erl_backend__erl_code_gen__V_57_57 = mercury__list__length_1_f_0(erl_backend__erl_code_gen__TypeInfo_41_82, erl_backend__erl_code_gen__UnconstrainedTVars_55);
        }
#line 913 "erl_code_gen.m"
        {
#line 913 "erl_code_gen.m"
          erl_backend__erl_code_gen__V_58_58 = mercury__list__length_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0, erl_backend__erl_code_gen__Constraints_52);
        }
#line 913 "erl_code_gen.m"
        erl_backend__erl_code_gen__V_56_56 = (erl_backend__erl_code_gen__V_57_57 + erl_backend__erl_code_gen__V_58_58);
#line 914 "erl_code_gen.m"
        erl_backend__erl_code_gen__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__ConsDefn_51, (MR_Integer) 0)));
#line 914 "erl_code_gen.m"
        erl_backend__erl_code_gen__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__ConsDefn_51, (MR_Integer) 1)));
#line 914 "erl_code_gen.m"
        erl_backend__erl_code_gen__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__ConsDefn_51, (MR_Integer) 2)));
#line 914 "erl_code_gen.m"
        erl_backend__erl_code_gen__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__ConsDefn_51, (MR_Integer) 3)));
#line 914 "erl_code_gen.m"
        erl_backend__erl_code_gen__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__ConsDefn_51, (MR_Integer) 4)));
#line 914 "erl_code_gen.m"
        erl_backend__erl_code_gen__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__ConsDefn_51, (MR_Integer) 5)));
#line 914 "erl_code_gen.m"
        erl_backend__erl_code_gen__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__ConsDefn_51, (MR_Integer) 6)));
#line 914 "erl_code_gen.m"
        erl_backend__erl_code_gen__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__ConsDefn_51, (MR_Integer) 7)));
#line 914 "erl_code_gen.m"
        {
#line 914 "erl_code_gen.m"
          erl_backend__erl_code_gen__V_59_59 = mercury__list__length_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0, erl_backend__erl_code_gen__V_60_60);
        }
#line 913 "erl_code_gen.m"
        erl_backend__erl_code_gen__Size_22 = (erl_backend__erl_code_gen__V_56_56 + erl_backend__erl_code_gen__V_59_59);
#line 908 "erl_code_gen.m"
      }
#line 915 "erl_code_gen.m"
    else
#line 916 "erl_code_gen.m"
      erl_backend__erl_code_gen__Size_22 = (MR_Integer) 0;
#line 872 "erl_code_gen.m"
    {
#line 872 "erl_code_gen.m"
      erl_backend__erl_code_util__erl_gen_info_new_anonymous_vars_4_p_0(erl_backend__erl_code_gen__Size_22, &erl_backend__erl_code_gen__DummyVars_23, erl_backend__erl_code_gen__STATE_VARIABLE_Info_0_29, &erl_backend__erl_code_gen__STATE_VARIABLE_Info_36_36);
    }
#line 873 "erl_code_gen.m"
    {
#line 873 "erl_code_gen.m"
      erl_backend__erl_code_gen__succeeded = erl_backend__erl_unify_gen__cons_id_to_term_6_p_0(erl_backend__erl_code_gen__MainConsId_18, erl_backend__erl_code_gen__DummyVars_23, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &erl_backend__erl_code_gen__Pattern0_24, erl_backend__erl_code_gen__STATE_VARIABLE_Info_36_36, &erl_backend__erl_code_gen__STATE_VARIABLE_Info_38_38);
    }
#line 875 "erl_code_gen.m"
    if (erl_backend__erl_code_gen__succeeded)
#line 874 "erl_code_gen.m"
      {
#line 874 "erl_code_gen.m"
        erl_backend__erl_code_gen__STATE_VARIABLE_Info_42_42 = erl_backend__erl_code_gen__STATE_VARIABLE_Info_38_38;
#line 874 "erl_code_gen.m"
        erl_backend__erl_code_gen__Pattern_25 = erl_backend__erl_code_gen__Pattern0_24;
#line 874 "erl_code_gen.m"
      }
#line 875 "erl_code_gen.m"
    else
#line 876 "erl_code_gen.m"
      {
#line 876 "erl_code_gen.m"
        {
#line 876 "erl_code_gen.m"
          mercury__require__unexpected_3_p_0((MR_String) "erl_backend.erl_code_gen", (MR_String) "predicate \140erl_backend.erl_code_gen.erl_gen_case\'/9", (MR_String) "cannot pattern match on object");
#line 876 "erl_code_gen.m"
          return;
        }
#line 876 "erl_code_gen.m"
      }
#line 878 "erl_code_gen.m"
    {
#line 878 "erl_code_gen.m"
      erl_backend__erl_code_util__erl_fix_success_expr_6_p_0(erl_backend__erl_code_gen__InstMap_12, erl_backend__erl_code_gen__Goal_20, erl_backend__erl_code_gen__MaybeSuccessExpr_14, &erl_backend__erl_code_gen__MaybeSuccessExprForCase_26, erl_backend__erl_code_gen__STATE_VARIABLE_Info_42_42, &erl_backend__erl_code_gen__STATE_VARIABLE_Info_43_43);
    }
#line 880 "erl_code_gen.m"
    {
#line 880 "erl_code_gen.m"
      erl_backend__erl_code_gen__erl_gen_goal_7_p_0(erl_backend__erl_code_gen__CodeModel_11, erl_backend__erl_code_gen__InstMap_12, erl_backend__erl_code_gen__Goal_20, erl_backend__erl_code_gen__MaybeSuccessExprForCase_26, &erl_backend__erl_code_gen__Statement0_27, erl_backend__erl_code_gen__STATE_VARIABLE_Info_43_43, erl_backend__erl_code_gen__STATE_VARIABLE_Info_30);
    }
#line 887 "erl_code_gen.m"
    {
#line 887 "erl_code_gen.m"
      erl_backend__erl_code_util__erl_bind_unbound_vars_6_p_0(*erl_backend__erl_code_gen__STATE_VARIABLE_Info_30, erl_backend__erl_code_gen__MustBindNonLocals_13, erl_backend__erl_code_gen__Goal_20, erl_backend__erl_code_gen__InstMap_12, erl_backend__erl_code_gen__Statement0_27, &erl_backend__erl_code_gen__Statement_28);
    }
#line 889 "erl_code_gen.m"
    {
#line 889 "erl_code_gen.m"
      MR_Word base;
#line 889 "erl_code_gen.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 889 "erl_code_gen.m"
      *erl_backend__erl_code_gen__ELDSCase_16 = base;
#line 889 "erl_code_gen.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (erl_backend__erl_code_gen__Pattern_25));
#line 889 "erl_code_gen.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (erl_backend__erl_code_gen__Statement_28));
#line 889 "erl_code_gen.m"
    }
#line 866 "erl_code_gen.m"
  }
#line 860 "erl_code_gen.m"
}

#line 686 "erl_code_gen.m"
static MR_bool MR_CALL 
erl_backend__erl_code_gen__erl_gen_goal_expr_9_p_0_1(
#line 686 "erl_code_gen.m"
  MR_Box erl_backend__erl_code_gen__closure_arg)
#line 686 "erl_code_gen.m"
{
#line 686 "erl_code_gen.m"
  {
#line 686 "erl_code_gen.m"
    MR_bool erl_backend__erl_code_gen__succeeded;
#line 686 "erl_code_gen.m"
    MR_Box erl_backend__erl_code_gen__closure = erl_backend__erl_code_gen__closure_arg;

#line 686 "erl_code_gen.m"
    {
#line 686 "erl_code_gen.m"
      return erl_backend__erl_code_gen__succeeded = erl_backend__erl_code_gen__IntroducedFrom__pred__erl_gen_goal_expr__686__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__closure, (MR_Integer) 4))));
    }
#line 686 "erl_code_gen.m"
    return erl_backend__erl_code_gen__succeeded;
#line 686 "erl_code_gen.m"
  }
#line 686 "erl_code_gen.m"
}

#line 618 "erl_code_gen.m"
static void MR_CALL 
erl_backend__erl_code_gen__erl_gen_goal_expr_9_p_0(
#line 618 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__GoalExpr_10,
#line 618 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__CodeModel_11,
#line 618 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__Detism_12,
#line 618 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__InstMap_13,
#line 618 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__Context_14,
#line 618 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__MaybeSuccessExpr_15,
#line 618 "erl_code_gen.m"
  MR_Word * erl_backend__erl_code_gen__Statement_16,
#line 618 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__STATE_VARIABLE_Info_0_88,
#line 618 "erl_code_gen.m"
  MR_Word * erl_backend__erl_code_gen__STATE_VARIABLE_Info_89)
#line 618 "erl_code_gen.m"
{
#line 625 "erl_code_gen.m"
  while (MR_TRUE)
#line 625 "erl_code_gen.m"
    {
#line 625 "erl_code_gen.m"
      /* tailcall optimized into a loop */
#line 625 "erl_code_gen.m"
      {
#line 625 "erl_code_gen.m"
        MR_bool erl_backend__erl_code_gen__succeeded;

#line 625 "erl_code_gen.m"
#line 625 "erl_code_gen.m"
        switch (MR_tag((MR_Word) erl_backend__erl_code_gen__GoalExpr_10)) {
#line 625 "erl_code_gen.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 625 "erl_code_gen.m"
          case (MR_Integer) 0:
#line 670 "erl_code_gen.m"
            {
#line 670 "erl_code_gen.m"
              MR_Word erl_backend__erl_code_gen__SubGoal_129 = (MR_Word) MR_body(((MR_Word) erl_backend__erl_code_gen__GoalExpr_10), (MR_Integer) 0);

#line 671 "erl_code_gen.m"
              {
#line 671 "erl_code_gen.m"
                erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_110_101_103_97_116_105_111_110_95_95_91_52_93_95_48_8_p_0(erl_backend__erl_code_gen__SubGoal_129, erl_backend__erl_code_gen__CodeModel_11, erl_backend__erl_code_gen__InstMap_13, erl_backend__erl_code_gen__MaybeSuccessExpr_15, erl_backend__erl_code_gen__Statement_16, erl_backend__erl_code_gen__STATE_VARIABLE_Info_0_88, erl_backend__erl_code_gen__STATE_VARIABLE_Info_89);
#line 671 "erl_code_gen.m"
                return;
              }
#line 670 "erl_code_gen.m"
            }
#line 625 "erl_code_gen.m"
            break;
#line 625 "erl_code_gen.m"
          case (MR_Integer) 1:
#line 719 "erl_code_gen.m"
            {
#line 719 "erl_code_gen.m"
              MR_Word erl_backend__erl_code_gen__Unification_78 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__erl_code_gen__GoalExpr_10, (MR_Integer) 3)));
#line 719 "erl_code_gen.m"
              MR_Word erl_backend__erl_code_gen___LHS_75 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__erl_code_gen__GoalExpr_10, (MR_Integer) 0)));
#line 719 "erl_code_gen.m"
              MR_Word erl_backend__erl_code_gen___RHS_76 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__erl_code_gen__GoalExpr_10, (MR_Integer) 1)));
#line 719 "erl_code_gen.m"
              MR_Word erl_backend__erl_code_gen___Mode_77 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__erl_code_gen__GoalExpr_10, (MR_Integer) 2)));
#line 719 "erl_code_gen.m"
              MR_Word erl_backend__erl_code_gen___UnifyContext_79 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__erl_code_gen__GoalExpr_10, (MR_Integer) 4)));

#line 720 "erl_code_gen.m"
              {
#line 720 "erl_code_gen.m"
                erl_backend__erl_unify_gen__erl_gen_unification_7_p_0(erl_backend__erl_code_gen__Unification_78, erl_backend__erl_code_gen__CodeModel_11, erl_backend__erl_code_gen__Context_14, erl_backend__erl_code_gen__MaybeSuccessExpr_15, erl_backend__erl_code_gen__Statement_16, erl_backend__erl_code_gen__STATE_VARIABLE_Info_0_88, erl_backend__erl_code_gen__STATE_VARIABLE_Info_89);
#line 720 "erl_code_gen.m"
                return;
              }
#line 719 "erl_code_gen.m"
            }
#line 625 "erl_code_gen.m"
            break;
#line 625 "erl_code_gen.m"
          case (MR_Integer) 2:
#line 704 "erl_code_gen.m"
            {
#line 704 "erl_code_gen.m"
              MR_Word erl_backend__erl_code_gen__PredId_68 = ((MR_Word) (MR_hl_field(MR_mktag(2), erl_backend__erl_code_gen__GoalExpr_10, (MR_Integer) 0)));
#line 704 "erl_code_gen.m"
              MR_Integer erl_backend__erl_code_gen__ProcId_69 = ((MR_Integer) (MR_hl_field(MR_mktag(2), erl_backend__erl_code_gen__GoalExpr_10, (MR_Integer) 1)));
#line 704 "erl_code_gen.m"
              MR_Word erl_backend__erl_code_gen__ArgVars_70 = ((MR_Word) (MR_hl_field(MR_mktag(2), erl_backend__erl_code_gen__GoalExpr_10, (MR_Integer) 2)));
#line 704 "erl_code_gen.m"
              MR_Word erl_backend__erl_code_gen__BuiltinState_71 = ((MR_Word) (MR_hl_field(MR_mktag(2), erl_backend__erl_code_gen__GoalExpr_10, (MR_Integer) 3)));
#line 704 "erl_code_gen.m"
              MR_Word erl_backend__erl_code_gen__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(2), erl_backend__erl_code_gen__GoalExpr_10, (MR_Integer) 4)));
#line 704 "erl_code_gen.m"
              MR_Word erl_backend__erl_code_gen__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(2), erl_backend__erl_code_gen__GoalExpr_10, (MR_Integer) 5)));

#line 710 "erl_code_gen.m"
#line 710 "erl_code_gen.m"
              switch (erl_backend__erl_code_gen__BuiltinState_71) {
#line 710 "erl_code_gen.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 710 "erl_code_gen.m"
                case (MR_Integer) 0:
#line 712 "erl_code_gen.m"
                  {
#line 712 "erl_code_gen.m"
                    erl_backend__erl_call_gen__erl_gen_builtin_9_p_0(erl_backend__erl_code_gen__PredId_68, erl_backend__erl_code_gen__ProcId_69, erl_backend__erl_code_gen__ArgVars_70, erl_backend__erl_code_gen__CodeModel_11, erl_backend__erl_code_gen__Context_14, erl_backend__erl_code_gen__MaybeSuccessExpr_15, erl_backend__erl_code_gen__Statement_16, erl_backend__erl_code_gen__STATE_VARIABLE_Info_0_88, erl_backend__erl_code_gen__STATE_VARIABLE_Info_89);
#line 712 "erl_code_gen.m"
                    return;
                  }
#line 710 "erl_code_gen.m"
                  break;
#line 710 "erl_code_gen.m"
                case (MR_Integer) 2:
#line 706 "erl_code_gen.m"
                  {
#line 706 "erl_code_gen.m"
                    MR_Word erl_backend__erl_code_gen__ActualArgTypes_74;

#line 707 "erl_code_gen.m"
                    {
#line 707 "erl_code_gen.m"
                      erl_backend__erl_code_util__erl_variable_types_3_p_0(erl_backend__erl_code_gen__STATE_VARIABLE_Info_0_88, erl_backend__erl_code_gen__ArgVars_70, &erl_backend__erl_code_gen__ActualArgTypes_74);
                    }
#line 708 "erl_code_gen.m"
                    {
#line 708 "erl_code_gen.m"
                      erl_backend__erl_call_gen__erl_gen_call_10_p_0(erl_backend__erl_code_gen__PredId_68, erl_backend__erl_code_gen__ProcId_69, erl_backend__erl_code_gen__ArgVars_70, erl_backend__erl_code_gen__ActualArgTypes_74, erl_backend__erl_code_gen__CodeModel_11, erl_backend__erl_code_gen__Context_14, erl_backend__erl_code_gen__MaybeSuccessExpr_15, erl_backend__erl_code_gen__Statement_16, erl_backend__erl_code_gen__STATE_VARIABLE_Info_0_88, erl_backend__erl_code_gen__STATE_VARIABLE_Info_89);
#line 708 "erl_code_gen.m"
                      return;
                    }
#line 706 "erl_code_gen.m"
                  }
#line 710 "erl_code_gen.m"
                  break;
#line 710 "erl_code_gen.m"
                case (MR_Integer) 1:
#line 715 "erl_code_gen.m"
                  {
#line 716 "erl_code_gen.m"
                    {
#line 716 "erl_code_gen.m"
                      mercury__require__unexpected_3_p_0((MR_String) "erl_backend.erl_code_gen", (MR_String) "predicate \140erl_backend.erl_code_gen.erl_gen_goal_expr\'/9", (MR_String) "out_of_line_builtin");
#line 716 "erl_code_gen.m"
                      return;
                    }
#line 715 "erl_code_gen.m"
                  }
#line 710 "erl_code_gen.m"
                  break;
#line 710 "erl_code_gen.m"
              }
#line 704 "erl_code_gen.m"
            }
#line 625 "erl_code_gen.m"
            break;
#line 625 "erl_code_gen.m"
          case (MR_Integer) 3:
#line 625 "erl_code_gen.m"
#line 625 "erl_code_gen.m"
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_code_gen__GoalExpr_10, (MR_Integer) 0)))) {
#line 625 "erl_code_gen.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 625 "erl_code_gen.m"
              case (MR_Integer) 0:
#line 684 "erl_code_gen.m"
                {
#line 684 "erl_code_gen.m"
                  MR_Word erl_backend__erl_code_gen__GenericCall_52 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_code_gen__GoalExpr_10, (MR_Integer) 1)));
#line 684 "erl_code_gen.m"
                  MR_Word erl_backend__erl_code_gen__Vars_53 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_code_gen__GoalExpr_10, (MR_Integer) 2)));
#line 684 "erl_code_gen.m"
                  MR_Word erl_backend__erl_code_gen__Modes_54 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_code_gen__GoalExpr_10, (MR_Integer) 3)));
#line 684 "erl_code_gen.m"
                  MR_Word erl_backend__erl_code_gen__CallDetism_56 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_code_gen__GoalExpr_10, (MR_Integer) 5)));
#line 684 "erl_code_gen.m"
                  MR_Word erl_backend__erl_code_gen__CallCodeModel_57;
#line 684 "erl_code_gen.m"
                  MR_Word erl_backend__erl_code_gen__V_100_100;
#line 684 "erl_code_gen.m"
                  MR_Word erl_backend__erl_code_gen__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_code_gen__GoalExpr_10, (MR_Integer) 4)));

#line 685 "erl_code_gen.m"
                  {
#line 685 "erl_code_gen.m"
                    hlds__code_model__determinism_to_code_model_2_p_0(erl_backend__erl_code_gen__CallDetism_56, &erl_backend__erl_code_gen__CallCodeModel_57);
                  }
#line 686 "erl_code_gen.m"
                  {
#line 686 "erl_code_gen.m"
                    erl_backend__erl_code_gen__V_100_100 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 686 "erl_code_gen.m"
                    MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__V_100_100, 0) = ((MR_Box) (&erl_backend__erl_code_gen_scalar_common_4[0]));
#line 686 "erl_code_gen.m"
                    MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__V_100_100, 1) = ((MR_Box) (erl_backend__erl_code_gen__erl_gen_goal_expr_9_p_0_1));
#line 686 "erl_code_gen.m"
                    MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__V_100_100, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 686 "erl_code_gen.m"
                    MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__V_100_100, 3) = ((MR_Box) (erl_backend__erl_code_gen__CodeModel_11));
#line 686 "erl_code_gen.m"
                    MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__V_100_100, 4) = ((MR_Box) (erl_backend__erl_code_gen__CallCodeModel_57));
#line 686 "erl_code_gen.m"
                  }
#line 686 "erl_code_gen.m"
                  {
#line 686 "erl_code_gen.m"
                    mercury__require__expect_4_p_0(erl_backend__erl_code_gen__V_100_100, (MR_String) "erl_backend.erl_code_gen", (MR_String) "predicate \140erl_backend.erl_code_gen.erl_gen_goal_expr\'/9", (MR_String) "code model mismatch");
                  }
#line 692 "erl_code_gen.m"
#line 692 "erl_code_gen.m"
                  switch (MR_tag((MR_Word) erl_backend__erl_code_gen__GenericCall_52)) {
#line 692 "erl_code_gen.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 692 "erl_code_gen.m"
                    case (MR_Integer) 0:
#line 690 "erl_code_gen.m"
                      {
#line 690 "erl_code_gen.m"
                        erl_backend__erl_call_gen__erl_gen_higher_order_call_9_p_0(erl_backend__erl_code_gen__GenericCall_52, erl_backend__erl_code_gen__Vars_53, erl_backend__erl_code_gen__Modes_54, erl_backend__erl_code_gen__CallDetism_56, erl_backend__erl_code_gen__Context_14, erl_backend__erl_code_gen__MaybeSuccessExpr_15, erl_backend__erl_code_gen__Statement_16, erl_backend__erl_code_gen__STATE_VARIABLE_Info_0_88, erl_backend__erl_code_gen__STATE_VARIABLE_Info_89);
#line 690 "erl_code_gen.m"
                        return;
                      }
#line 692 "erl_code_gen.m"
                      break;
#line 692 "erl_code_gen.m"
                    case (MR_Integer) 1:
#line 694 "erl_code_gen.m"
                      {
#line 694 "erl_code_gen.m"
                        erl_backend__erl_call_gen__erl_gen_class_method_call_9_p_0(erl_backend__erl_code_gen__GenericCall_52, erl_backend__erl_code_gen__Vars_53, erl_backend__erl_code_gen__Modes_54, erl_backend__erl_code_gen__CallDetism_56, erl_backend__erl_code_gen__Context_14, erl_backend__erl_code_gen__MaybeSuccessExpr_15, erl_backend__erl_code_gen__Statement_16, erl_backend__erl_code_gen__STATE_VARIABLE_Info_0_88, erl_backend__erl_code_gen__STATE_VARIABLE_Info_89);
#line 694 "erl_code_gen.m"
                        return;
                      }
#line 692 "erl_code_gen.m"
                      break;
#line 692 "erl_code_gen.m"
                    case (MR_Integer) 2:
#line 697 "erl_code_gen.m"
                      {
#line 698 "erl_code_gen.m"
                        {
#line 698 "erl_code_gen.m"
                          mercury__require__sorry_3_p_0((MR_String) "erl_backend.erl_code_gen", (MR_String) "predicate \140erl_backend.erl_code_gen.erl_gen_goal_expr\'/9", (MR_String) "event_calls in erlang backend");
#line 698 "erl_code_gen.m"
                          return;
                        }
#line 697 "erl_code_gen.m"
                      }
#line 692 "erl_code_gen.m"
                      break;
#line 692 "erl_code_gen.m"
                    case (MR_Integer) 3:
#line 701 "erl_code_gen.m"
                      {
#line 701 "erl_code_gen.m"
                        erl_backend__erl_call_gen__erl_gen_cast_6_p_0(erl_backend__erl_code_gen__Context_14, erl_backend__erl_code_gen__Vars_53, erl_backend__erl_code_gen__MaybeSuccessExpr_15, erl_backend__erl_code_gen__Statement_16, erl_backend__erl_code_gen__STATE_VARIABLE_Info_0_88, erl_backend__erl_code_gen__STATE_VARIABLE_Info_89);
#line 701 "erl_code_gen.m"
                        return;
                      }
#line 692 "erl_code_gen.m"
                      break;
#line 692 "erl_code_gen.m"
                  }
#line 684 "erl_code_gen.m"
                }
#line 625 "erl_code_gen.m"
                break;
#line 625 "erl_code_gen.m"
              case (MR_Integer) 1:
#line 724 "erl_code_gen.m"
                {
#line 724 "erl_code_gen.m"
                  MR_Word erl_backend__erl_code_gen__Args_83 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_code_gen__GoalExpr_10, (MR_Integer) 4)));
#line 724 "erl_code_gen.m"
                  MR_Word erl_backend__erl_code_gen__MaybeTraceRuntimeCond_85 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_code_gen__GoalExpr_10, (MR_Integer) 6)));
#line 724 "erl_code_gen.m"
                  MR_Word erl_backend__erl_code_gen__PragmaImpl_86 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_code_gen__GoalExpr_10, (MR_Integer) 7)));
#line 723 "erl_code_gen.m"
                  MR_Word erl_backend__erl_code_gen___Attributes_80 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_code_gen__GoalExpr_10, (MR_Integer) 1)));
#line 723 "erl_code_gen.m"
                  MR_Word erl_backend__erl_code_gen___PredId_81 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_code_gen__GoalExpr_10, (MR_Integer) 2)));
#line 723 "erl_code_gen.m"
                  MR_Integer erl_backend__erl_code_gen___ProcId_82 = ((MR_Integer) (MR_hl_field(MR_mktag(3), erl_backend__erl_code_gen__GoalExpr_10, (MR_Integer) 3)));
#line 723 "erl_code_gen.m"
                  MR_Word erl_backend__erl_code_gen___ExtraArgs_84 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_code_gen__GoalExpr_10, (MR_Integer) 5)));

#line 725 "erl_code_gen.m"
                  {
#line 725 "erl_code_gen.m"
                    erl_backend__erl_call_gen__erl_gen_foreign_proc_call_9_p_0(erl_backend__erl_code_gen__Args_83, erl_backend__erl_code_gen__MaybeTraceRuntimeCond_85, erl_backend__erl_code_gen__PragmaImpl_86, erl_backend__erl_code_gen__CodeModel_11, erl_backend__erl_code_gen__Context_14, erl_backend__erl_code_gen__MaybeSuccessExpr_15, erl_backend__erl_code_gen__Statement_16, erl_backend__erl_code_gen__STATE_VARIABLE_Info_0_88, erl_backend__erl_code_gen__STATE_VARIABLE_Info_89);
#line 725 "erl_code_gen.m"
                    return;
                  }
#line 724 "erl_code_gen.m"
                }
#line 625 "erl_code_gen.m"
                break;
#line 625 "erl_code_gen.m"
              case (MR_Integer) 2:
#line 674 "erl_code_gen.m"
                {
#line 674 "erl_code_gen.m"
                  MR_Word erl_backend__erl_code_gen__Goals_51 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_code_gen__GoalExpr_10, (MR_Integer) 2)));
#line 674 "erl_code_gen.m"
                  MR_Word erl_backend__erl_code_gen___ConjType_50 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_code_gen__GoalExpr_10, (MR_Integer) 1)));

#line 677 "erl_code_gen.m"
                  {
#line 677 "erl_code_gen.m"
                    erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_99_111_110_106_95_95_91_53_93_95_48_9_p_0(erl_backend__erl_code_gen__Goals_51, erl_backend__erl_code_gen__CodeModel_11, erl_backend__erl_code_gen__Detism_12, erl_backend__erl_code_gen__InstMap_13, erl_backend__erl_code_gen__MaybeSuccessExpr_15, erl_backend__erl_code_gen__Statement_16, erl_backend__erl_code_gen__STATE_VARIABLE_Info_0_88, erl_backend__erl_code_gen__STATE_VARIABLE_Info_89);
#line 677 "erl_code_gen.m"
                    return;
                  }
#line 674 "erl_code_gen.m"
                }
#line 625 "erl_code_gen.m"
                break;
#line 625 "erl_code_gen.m"
              case (MR_Integer) 3:
#line 680 "erl_code_gen.m"
                {
#line 680 "erl_code_gen.m"
                  MR_Word erl_backend__erl_code_gen__Goals_130 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_code_gen__GoalExpr_10, (MR_Integer) 1)));

#line 681 "erl_code_gen.m"
                  {
#line 681 "erl_code_gen.m"
                    erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_100_105_115_106_95_95_91_52_93_95_48_8_p_0(erl_backend__erl_code_gen__Goals_130, erl_backend__erl_code_gen__CodeModel_11, erl_backend__erl_code_gen__InstMap_13, erl_backend__erl_code_gen__MaybeSuccessExpr_15, erl_backend__erl_code_gen__Statement_16, erl_backend__erl_code_gen__STATE_VARIABLE_Info_0_88, erl_backend__erl_code_gen__STATE_VARIABLE_Info_89);
#line 681 "erl_code_gen.m"
                    return;
                  }
#line 680 "erl_code_gen.m"
                }
#line 625 "erl_code_gen.m"
                break;
#line 625 "erl_code_gen.m"
              case (MR_Integer) 4:
#line 625 "erl_code_gen.m"
                {
#line 625 "erl_code_gen.m"
                  MR_Word erl_backend__erl_code_gen__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_code_gen__GoalExpr_10, (MR_Integer) 1)));
#line 625 "erl_code_gen.m"
                  MR_Word erl_backend__erl_code_gen__CanFail_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_code_gen__GoalExpr_10, (MR_Integer) 2)));
#line 625 "erl_code_gen.m"
                  MR_Word erl_backend__erl_code_gen__CasesList_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_code_gen__GoalExpr_10, (MR_Integer) 3)));

#line 626 "erl_code_gen.m"
                  {
#line 626 "erl_code_gen.m"
                    erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_10_p_0(erl_backend__erl_code_gen__Var_18, erl_backend__erl_code_gen__CanFail_19, erl_backend__erl_code_gen__CasesList_20, erl_backend__erl_code_gen__CodeModel_11, erl_backend__erl_code_gen__InstMap_13, erl_backend__erl_code_gen__MaybeSuccessExpr_15, erl_backend__erl_code_gen__Statement_16, erl_backend__erl_code_gen__STATE_VARIABLE_Info_0_88, erl_backend__erl_code_gen__STATE_VARIABLE_Info_89);
#line 626 "erl_code_gen.m"
                    return;
                  }
#line 625 "erl_code_gen.m"
                }
#line 625 "erl_code_gen.m"
                break;
#line 625 "erl_code_gen.m"
              case (MR_Integer) 5:
#line 629 "erl_code_gen.m"
                {
#line 629 "erl_code_gen.m"
                  MR_Word erl_backend__erl_code_gen__Reason_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_code_gen__GoalExpr_10, (MR_Integer) 1)));
#line 629 "erl_code_gen.m"
                  MR_Word erl_backend__erl_code_gen__SubGoal_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_code_gen__GoalExpr_10, (MR_Integer) 2)));

#line 636 "erl_code_gen.m"
#line 636 "erl_code_gen.m"
                  switch (MR_tag((MR_Word) erl_backend__erl_code_gen__Reason_21)) {
#line 636 "erl_code_gen.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 636 "erl_code_gen.m"
                    case (MR_Integer) 0:
#line 636 "erl_code_gen.m"
                    case (MR_Integer) 2:
#line 659 "erl_code_gen.m"
                      {
#line 659 "erl_code_gen.m"
                        MR_Word erl_backend__erl_code_gen__SubGoalExpr_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__SubGoal_22, (MR_Integer) 0)));
#line 659 "erl_code_gen.m"
                        MR_Word erl_backend__erl_code_gen__SubGoalInfo_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__SubGoal_22, (MR_Integer) 1)));
#line 659 "erl_code_gen.m"
                        MR_Word erl_backend__erl_code_gen__SubGoalDetism_45;

#line 661 "erl_code_gen.m"
                        {
#line 661 "erl_code_gen.m"
                          erl_backend__erl_code_gen__SubGoalDetism_45 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(erl_backend__erl_code_gen__SubGoalInfo_44);
                        }
#line 662 "erl_code_gen.m"
                        /* direct tailcall eliminated */
#line 662 "erl_code_gen.m"
                        {
#line 662 "erl_code_gen.m"
                          MR_Word erl_backend__erl_code_gen__GoalExpr__tmp_copy_10 = erl_backend__erl_code_gen__SubGoalExpr_43;
#line 662 "erl_code_gen.m"
                          MR_Word erl_backend__erl_code_gen__Detism__tmp_copy_12 = erl_backend__erl_code_gen__SubGoalDetism_45;

#line 662 "erl_code_gen.m"
                          erl_backend__erl_code_gen__Detism_12 = erl_backend__erl_code_gen__Detism__tmp_copy_12;
#line 662 "erl_code_gen.m"
                          erl_backend__erl_code_gen__GoalExpr_10 = erl_backend__erl_code_gen__GoalExpr__tmp_copy_10;
#line 662 "erl_code_gen.m"
                        }
#line 662 "erl_code_gen.m"
                        continue;
#line 659 "erl_code_gen.m"
                      }
#line 636 "erl_code_gen.m"
                      break;
#line 636 "erl_code_gen.m"
                    case (MR_Integer) 1:
#line 634 "erl_code_gen.m"
                      {
#line 634 "erl_code_gen.m"
                        erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_99_111_109_109_105_116_95_95_91_53_93_95_48_9_p_0(erl_backend__erl_code_gen__SubGoal_22, erl_backend__erl_code_gen__CodeModel_11, erl_backend__erl_code_gen__Detism_12, erl_backend__erl_code_gen__InstMap_13, erl_backend__erl_code_gen__MaybeSuccessExpr_15, erl_backend__erl_code_gen__Statement_16, erl_backend__erl_code_gen__STATE_VARIABLE_Info_0_88, erl_backend__erl_code_gen__STATE_VARIABLE_Info_89);
#line 634 "erl_code_gen.m"
                        return;
                      }
#line 636 "erl_code_gen.m"
                      break;
#line 636 "erl_code_gen.m"
                    case (MR_Integer) 3:
#line 636 "erl_code_gen.m"
#line 636 "erl_code_gen.m"
                      switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_code_gen__Reason_21, (MR_Integer) 0)))) {
#line 636 "erl_code_gen.m"
                        default: /*NOTREACHED*/ MR_assert(0);
#line 636 "erl_code_gen.m"
                        case (MR_Integer) 0:
#line 640 "erl_code_gen.m"
                          {
#line 641 "erl_code_gen.m"
                            {
#line 641 "erl_code_gen.m"
                              mercury__require__unexpected_3_p_0((MR_String) "erl_backend.erl_code_gen", (MR_String) "predicate \140erl_backend.erl_code_gen.erl_gen_goal_expr\'/9", (MR_String) "require_detism");
#line 641 "erl_code_gen.m"
                              return;
                            }
#line 640 "erl_code_gen.m"
                          }
#line 636 "erl_code_gen.m"
                          break;
#line 636 "erl_code_gen.m"
                        case (MR_Integer) 1:
#line 643 "erl_code_gen.m"
                          {
#line 644 "erl_code_gen.m"
                            {
#line 644 "erl_code_gen.m"
                              mercury__require__unexpected_3_p_0((MR_String) "erl_backend.erl_code_gen", (MR_String) "predicate \140erl_backend.erl_code_gen.erl_gen_goal_expr\'/9", (MR_String) "require_complete_switch");
#line 644 "erl_code_gen.m"
                              return;
                            }
#line 643 "erl_code_gen.m"
                          }
#line 636 "erl_code_gen.m"
                          break;
#line 636 "erl_code_gen.m"
                        case (MR_Integer) 2:
#line 646 "erl_code_gen.m"
                          {
#line 647 "erl_code_gen.m"
                            {
#line 647 "erl_code_gen.m"
                              mercury__require__unexpected_3_p_0((MR_String) "erl_backend.erl_code_gen", (MR_String) "predicate \140erl_backend.erl_code_gen.erl_gen_goal_expr\'/9", (MR_String) "require_complete_switch");
#line 647 "erl_code_gen.m"
                              return;
                            }
#line 646 "erl_code_gen.m"
                          }
#line 636 "erl_code_gen.m"
                          break;
#line 636 "erl_code_gen.m"
                        case (MR_Integer) 3:
#line 634 "erl_code_gen.m"
                          {
#line 634 "erl_code_gen.m"
                            erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_99_111_109_109_105_116_95_95_91_53_93_95_48_9_p_0(erl_backend__erl_code_gen__SubGoal_22, erl_backend__erl_code_gen__CodeModel_11, erl_backend__erl_code_gen__Detism_12, erl_backend__erl_code_gen__InstMap_13, erl_backend__erl_code_gen__MaybeSuccessExpr_15, erl_backend__erl_code_gen__Statement_16, erl_backend__erl_code_gen__STATE_VARIABLE_Info_0_88, erl_backend__erl_code_gen__STATE_VARIABLE_Info_89);
#line 634 "erl_code_gen.m"
                            return;
                          }
#line 636 "erl_code_gen.m"
                          break;
#line 636 "erl_code_gen.m"
                        case (MR_Integer) 4:
#line 636 "erl_code_gen.m"
                        case (MR_Integer) 5:
#line 636 "erl_code_gen.m"
                        case (MR_Integer) 6:
#line 659 "erl_code_gen.m"
                          {
#line 659 "erl_code_gen.m"
                            MR_Word erl_backend__erl_code_gen__SubGoalExpr_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__SubGoal_22, (MR_Integer) 0)));
#line 659 "erl_code_gen.m"
                            MR_Word erl_backend__erl_code_gen__SubGoalInfo_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__SubGoal_22, (MR_Integer) 1)));
#line 659 "erl_code_gen.m"
                            MR_Word erl_backend__erl_code_gen__SubGoalDetism_45;

#line 661 "erl_code_gen.m"
                            {
#line 661 "erl_code_gen.m"
                              erl_backend__erl_code_gen__SubGoalDetism_45 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(erl_backend__erl_code_gen__SubGoalInfo_44);
                            }
#line 662 "erl_code_gen.m"
                            /* direct tailcall eliminated */
#line 662 "erl_code_gen.m"
                            {
#line 662 "erl_code_gen.m"
                              MR_Word erl_backend__erl_code_gen__GoalExpr__tmp_copy_10 = erl_backend__erl_code_gen__SubGoalExpr_43;
#line 662 "erl_code_gen.m"
                              MR_Word erl_backend__erl_code_gen__Detism__tmp_copy_12 = erl_backend__erl_code_gen__SubGoalDetism_45;

#line 662 "erl_code_gen.m"
                              erl_backend__erl_code_gen__Detism_12 = erl_backend__erl_code_gen__Detism__tmp_copy_12;
#line 662 "erl_code_gen.m"
                              erl_backend__erl_code_gen__GoalExpr_10 = erl_backend__erl_code_gen__GoalExpr__tmp_copy_10;
#line 662 "erl_code_gen.m"
                            }
#line 662 "erl_code_gen.m"
                            continue;
#line 659 "erl_code_gen.m"
                          }
#line 636 "erl_code_gen.m"
                          break;
#line 636 "erl_code_gen.m"
                        case (MR_Integer) 7:
#line 637 "erl_code_gen.m"
                          {
#line 638 "erl_code_gen.m"
                            {
#line 638 "erl_code_gen.m"
                              mercury__require__unexpected_3_p_0((MR_String) "erl_backend.erl_code_gen", (MR_String) "predicate \140erl_backend.erl_code_gen.erl_gen_goal_expr\'/9", (MR_String) "loop_control");
#line 638 "erl_code_gen.m"
                              return;
                            }
#line 637 "erl_code_gen.m"
                          }
#line 636 "erl_code_gen.m"
                          break;
#line 636 "erl_code_gen.m"
                      }
#line 636 "erl_code_gen.m"
                      break;
#line 636 "erl_code_gen.m"
                  }
#line 629 "erl_code_gen.m"
                }
#line 625 "erl_code_gen.m"
                break;
#line 625 "erl_code_gen.m"
              case (MR_Integer) 6:
#line 666 "erl_code_gen.m"
                {
#line 666 "erl_code_gen.m"
                  MR_Word erl_backend__erl_code_gen__Cond_47 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_code_gen__GoalExpr_10, (MR_Integer) 2)));
#line 666 "erl_code_gen.m"
                  MR_Word erl_backend__erl_code_gen__Then_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_code_gen__GoalExpr_10, (MR_Integer) 3)));
#line 666 "erl_code_gen.m"
                  MR_Word erl_backend__erl_code_gen__Else_49 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_code_gen__GoalExpr_10, (MR_Integer) 4)));
#line 666 "erl_code_gen.m"
                  MR_Word erl_backend__erl_code_gen___Vars_46 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_code_gen__GoalExpr_10, (MR_Integer) 1)));

#line 667 "erl_code_gen.m"
                  {
#line 667 "erl_code_gen.m"
                    erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_105_116_101_95_95_91_54_93_95_48_10_p_0(erl_backend__erl_code_gen__CodeModel_11, erl_backend__erl_code_gen__InstMap_13, erl_backend__erl_code_gen__Cond_47, erl_backend__erl_code_gen__Then_48, erl_backend__erl_code_gen__Else_49, erl_backend__erl_code_gen__MaybeSuccessExpr_15, erl_backend__erl_code_gen__Statement_16, erl_backend__erl_code_gen__STATE_VARIABLE_Info_0_88, erl_backend__erl_code_gen__STATE_VARIABLE_Info_89);
#line 667 "erl_code_gen.m"
                    return;
                  }
#line 666 "erl_code_gen.m"
                }
#line 625 "erl_code_gen.m"
                break;
#line 625 "erl_code_gen.m"
              case (MR_Integer) 7:
#line 728 "erl_code_gen.m"
                {
#line 730 "erl_code_gen.m"
                  {
#line 730 "erl_code_gen.m"
                    mercury__require__unexpected_3_p_0((MR_String) "erl_backend.erl_code_gen", (MR_String) "predicate \140erl_backend.erl_code_gen.erl_gen_goal_expr\'/9", (MR_String) "shorthand");
#line 730 "erl_code_gen.m"
                    return;
                  }
#line 728 "erl_code_gen.m"
                }
#line 625 "erl_code_gen.m"
                break;
#line 625 "erl_code_gen.m"
            }
#line 625 "erl_code_gen.m"
            break;
#line 625 "erl_code_gen.m"
        }
#line 625 "erl_code_gen.m"
      }
#line 625 "erl_code_gen.m"
      break;
#line 625 "erl_code_gen.m"
    }
#line 618 "erl_code_gen.m"
}

#line 440 "erl_code_gen.m"
static void MR_CALL 
erl_backend__erl_code_gen__erl_gen_goal_7_p_0(
#line 440 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__CodeModel_8,
#line 440 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__InstMap_9,
#line 440 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__Goal_10,
#line 440 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__MaybeSuccessExpr0_11,
#line 440 "erl_code_gen.m"
  MR_Word * erl_backend__erl_code_gen__Code_12,
#line 440 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__STATE_VARIABLE_Info_0_20,
#line 440 "erl_code_gen.m"
  MR_Word * erl_backend__erl_code_gen__STATE_VARIABLE_Info_21)
#line 440 "erl_code_gen.m"
{
#line 452 "erl_code_gen.m"
  {
#line 452 "erl_code_gen.m"
    MR_bool erl_backend__erl_code_gen__succeeded;
#line 452 "erl_code_gen.m"
    MR_Word erl_backend__erl_code_gen__GoalExpr_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__Goal_10, (MR_Integer) 0)));
#line 452 "erl_code_gen.m"
    MR_Word erl_backend__erl_code_gen__GoalInfo_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__Goal_10, (MR_Integer) 1)));
#line 452 "erl_code_gen.m"
    MR_Word erl_backend__erl_code_gen__Context_16;
#line 452 "erl_code_gen.m"
    MR_Word erl_backend__erl_code_gen__GoalCodeModel_17;

#line 454 "erl_code_gen.m"
    {
#line 454 "erl_code_gen.m"
      erl_backend__erl_code_gen__Context_16 = hlds__hlds_goal__goal_info_get_context_1_f_0(erl_backend__erl_code_gen__GoalInfo_15);
    }
#line 455 "erl_code_gen.m"
    {
#line 455 "erl_code_gen.m"
      erl_backend__erl_code_gen__GoalCodeModel_17 = hlds__code_model__goal_info_get_code_model_1_f_0(erl_backend__erl_code_gen__GoalInfo_15);
    }
#line 460 "erl_code_gen.m"
#line 460 "erl_code_gen.m"
    switch (erl_backend__erl_code_gen__CodeModel_8) {
#line 460 "erl_code_gen.m"
      default:
#line 460 "erl_code_gen.m"
        erl_backend__erl_code_gen__succeeded = MR_FALSE;
#line 460 "erl_code_gen.m"
        break;
#line 460 "erl_code_gen.m"
      case (MR_Integer) 0:
#line 460 "erl_code_gen.m"
#line 460 "erl_code_gen.m"
        switch (erl_backend__erl_code_gen__GoalCodeModel_17) {
#line 460 "erl_code_gen.m"
          default:
#line 460 "erl_code_gen.m"
            erl_backend__erl_code_gen__succeeded = MR_FALSE;
#line 460 "erl_code_gen.m"
            break;
#line 460 "erl_code_gen.m"
          case (MR_Integer) 2:
#line 461 "erl_code_gen.m"
            erl_backend__erl_code_gen__succeeded = MR_TRUE;
#line 460 "erl_code_gen.m"
            break;
#line 460 "erl_code_gen.m"
          case (MR_Integer) 1:
#line 458 "erl_code_gen.m"
            erl_backend__erl_code_gen__succeeded = MR_TRUE;
#line 460 "erl_code_gen.m"
            break;
#line 460 "erl_code_gen.m"
        }
#line 460 "erl_code_gen.m"
        break;
#line 460 "erl_code_gen.m"
      case (MR_Integer) 1:
#line 465 "erl_code_gen.m"
        erl_backend__erl_code_gen__succeeded = (erl_backend__erl_code_gen__GoalCodeModel_17 == (MR_Integer) 2);
#line 460 "erl_code_gen.m"
        break;
#line 460 "erl_code_gen.m"
    }
#line 469 "erl_code_gen.m"
    if (erl_backend__erl_code_gen__succeeded)
#line 468 "erl_code_gen.m"
      {
#line 468 "erl_code_gen.m"
        {
#line 468 "erl_code_gen.m"
          mercury__require__unexpected_3_p_0((MR_String) "erl_backend.erl_code_gen", (MR_String) "predicate \140erl_backend.erl_code_gen.erl_gen_goal\'/7", (MR_String) "code model mismatch");
#line 468 "erl_code_gen.m"
          return;
        }
#line 468 "erl_code_gen.m"
      }
#line 469 "erl_code_gen.m"
    else
#line 470 "erl_code_gen.m"
      {
#line 470 "erl_code_gen.m"
        MR_Word erl_backend__erl_code_gen__Determinism_18;
#line 470 "erl_code_gen.m"
        MR_Word erl_backend__erl_code_gen__MaybeSuccessExpr_19;

#line 470 "erl_code_gen.m"
        {
#line 470 "erl_code_gen.m"
          erl_backend__erl_code_gen__Determinism_18 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(erl_backend__erl_code_gen__GoalInfo_15);
        }
#line 472 "erl_code_gen.m"
        erl_backend__erl_code_gen__succeeded = (erl_backend__erl_code_gen__Determinism_18 == (MR_Integer) 6);
#line 479 "erl_code_gen.m"
        if (erl_backend__erl_code_gen__succeeded)
#line 478 "erl_code_gen.m"
          erl_backend__erl_code_gen__MaybeSuccessExpr_19 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 479 "erl_code_gen.m"
        else
#line 486 "erl_code_gen.m"
          {
#line 480 "erl_code_gen.m"
            erl_backend__erl_code_gen__succeeded = (erl_backend__erl_code_gen__Determinism_18 == (MR_Integer) 7);
#line 486 "erl_code_gen.m"
            if (erl_backend__erl_code_gen__succeeded)
#line 485 "erl_code_gen.m"
              {
#line 485 "erl_code_gen.m"
                MR_Word erl_backend__erl_code_gen__V_25_25;
#line 485 "erl_code_gen.m"
                MR_Word erl_backend__erl_code_gen__V_26_26;

#line 485 "erl_code_gen.m"
                {
#line 485 "erl_code_gen.m"
                  erl_backend__erl_code_gen__V_26_26 = erl_backend__elds__elds_fail_0_f_0();
                }
#line 485 "erl_code_gen.m"
                {
#line 485 "erl_code_gen.m"
                  erl_backend__erl_code_gen__V_25_25 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 485 "erl_code_gen.m"
                  MR_hl_field(MR_mktag(2), erl_backend__erl_code_gen__V_25_25, 0) = ((MR_Box) (erl_backend__erl_code_gen__V_26_26));
#line 485 "erl_code_gen.m"
                }
#line 485 "erl_code_gen.m"
                {
#line 485 "erl_code_gen.m"
                  erl_backend__erl_code_gen__MaybeSuccessExpr_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 485 "erl_code_gen.m"
                  MR_hl_field(MR_mktag(1), erl_backend__erl_code_gen__MaybeSuccessExpr_19, 0) = ((MR_Box) (erl_backend__erl_code_gen__V_25_25));
#line 485 "erl_code_gen.m"
                }
#line 485 "erl_code_gen.m"
              }
#line 486 "erl_code_gen.m"
            else
#line 487 "erl_code_gen.m"
              erl_backend__erl_code_gen__MaybeSuccessExpr_19 = erl_backend__erl_code_gen__MaybeSuccessExpr0_11;
#line 486 "erl_code_gen.m"
          }
#line 489 "erl_code_gen.m"
        {
#line 489 "erl_code_gen.m"
          erl_backend__erl_code_gen__erl_gen_goal_expr_9_p_0(erl_backend__erl_code_gen__GoalExpr_14, erl_backend__erl_code_gen__GoalCodeModel_17, erl_backend__erl_code_gen__Determinism_18, erl_backend__erl_code_gen__InstMap_9, erl_backend__erl_code_gen__Context_16, erl_backend__erl_code_gen__MaybeSuccessExpr_19, erl_backend__erl_code_gen__Code_12, erl_backend__erl_code_gen__STATE_VARIABLE_Info_0_20, erl_backend__erl_code_gen__STATE_VARIABLE_Info_21);
#line 489 "erl_code_gen.m"
          return;
        }
#line 470 "erl_code_gen.m"
      }
#line 452 "erl_code_gen.m"
  }
#line 440 "erl_code_gen.m"
}

#line 324 "erl_code_gen.m"
static void MR_CALL 
erl_backend__erl_code_gen__erl_gen_proc_7_p_0(
#line 324 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__ModuleInfo_8,
#line 324 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__PredId_9,
#line 324 "erl_code_gen.m"
  MR_Integer erl_backend__erl_code_gen__ProcId_10,
#line 324 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__PredInfo_11,
#line 324 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__ProcInfo_12,
#line 324 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__STATE_VARIABLE_Defns_0_18,
#line 324 "erl_code_gen.m"
  MR_Word * erl_backend__erl_code_gen__STATE_VARIABLE_Defns_19)
#line 324 "erl_code_gen.m"
{
#line 327 "erl_code_gen.m"
  {
#line 327 "erl_code_gen.m"
    MR_bool erl_backend__erl_code_gen__succeeded;
#line 327 "erl_code_gen.m"
    MR_Word erl_backend__erl_code_gen__TypeCtorInfo_44_57;
#line 327 "erl_code_gen.m"
    MR_Word erl_backend__erl_code_gen__ProcVarSet_14;
#line 327 "erl_code_gen.m"
    MR_Word erl_backend__erl_code_gen__ProcBody_15;
#line 327 "erl_code_gen.m"
    MR_Word erl_backend__erl_code_gen__EnvVarNames_16;
#line 327 "erl_code_gen.m"
    MR_Word erl_backend__erl_code_gen__ProcDefn_17;
#line 327 "erl_code_gen.m"
    MR_Word erl_backend__erl_code_gen__V_20_20;
#line 327 "erl_code_gen.m"
    MR_Word erl_backend__erl_code_gen__PredStatus_30;
#line 327 "erl_code_gen.m"
    MR_Word erl_backend__erl_code_gen__CodeModel_31;
#line 327 "erl_code_gen.m"
    MR_Word erl_backend__erl_code_gen__HeadVars_32;
#line 327 "erl_code_gen.m"
    MR_Word erl_backend__erl_code_gen__InstMap0_33;
#line 327 "erl_code_gen.m"
    MR_Word erl_backend__erl_code_gen__Goal0_34;
#line 327 "erl_code_gen.m"
    MR_Word erl_backend__erl_code_gen__GoalExpr_35;
#line 327 "erl_code_gen.m"
    MR_Word erl_backend__erl_code_gen__GoalInfo0_36;
#line 327 "erl_code_gen.m"
    MR_Word erl_backend__erl_code_gen__NonLocals0_37;
#line 327 "erl_code_gen.m"
    MR_Word erl_backend__erl_code_gen__HeadVarsSet_38;
#line 327 "erl_code_gen.m"
    MR_Word erl_backend__erl_code_gen__NonLocals_39;
#line 327 "erl_code_gen.m"
    MR_Word erl_backend__erl_code_gen__GoalInfo_40;
#line 327 "erl_code_gen.m"
    MR_Word erl_backend__erl_code_gen__Goal_41;
#line 327 "erl_code_gen.m"
    MR_Word erl_backend__erl_code_gen__STATE_VARIABLE_Info_38_51;
#line 327 "erl_code_gen.m"
    MR_Word erl_backend__erl_code_gen__STATE_VARIABLE_Info_43_56;
#line 361 "erl_code_gen.m"
    MR_Word erl_backend__erl_code_gen___Context_42;
#line 366 "erl_code_gen.m"
    MR_Word erl_backend__erl_code_gen__V_52_52;
#line 366 "erl_code_gen.m"
    MR_Word erl_backend__erl_code_gen__V_44_44;

#line 342 "erl_code_gen.m"
    {
#line 342 "erl_code_gen.m"
      hlds__hlds_pred__pred_info_get_status_2_p_0(erl_backend__erl_code_gen__PredInfo_11, &erl_backend__erl_code_gen__PredStatus_30);
    }
#line 343 "erl_code_gen.m"
    {
#line 343 "erl_code_gen.m"
      erl_backend__erl_code_gen__CodeModel_31 = hlds__code_model__proc_info_interface_code_model_1_f_0(erl_backend__erl_code_gen__ProcInfo_12);
    }
#line 344 "erl_code_gen.m"
    {
#line 344 "erl_code_gen.m"
      hlds__hlds_pred__proc_info_get_headvars_2_p_0(erl_backend__erl_code_gen__ProcInfo_12, &erl_backend__erl_code_gen__HeadVars_32);
    }
#line 345 "erl_code_gen.m"
    {
#line 345 "erl_code_gen.m"
      hlds__hlds_pred__proc_info_get_initial_instmap_3_p_0(erl_backend__erl_code_gen__ProcInfo_12, erl_backend__erl_code_gen__ModuleInfo_8, &erl_backend__erl_code_gen__InstMap0_33);
    }
#line 346 "erl_code_gen.m"
    {
#line 346 "erl_code_gen.m"
      hlds__hlds_pred__proc_info_get_goal_2_p_0(erl_backend__erl_code_gen__ProcInfo_12, &erl_backend__erl_code_gen__Goal0_34);
    }
#line 354 "erl_code_gen.m"
    erl_backend__erl_code_gen__GoalExpr_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__Goal0_34, (MR_Integer) 0)));
#line 354 "erl_code_gen.m"
    erl_backend__erl_code_gen__GoalInfo0_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__Goal0_34, (MR_Integer) 1)));
#line 355 "erl_code_gen.m"
    {
#line 355 "erl_code_gen.m"
      erl_backend__erl_code_gen__NonLocals0_37 = hlds__hlds_goal__goal_info_get_code_gen_nonlocals_1_f_0(erl_backend__erl_code_gen__GoalInfo0_36);
    }
#line 6765 "erl_backend.erl_code_gen.c"
    erl_backend__erl_code_gen__TypeCtorInfo_44_57 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 356 "erl_code_gen.m"
    {
#line 356 "erl_code_gen.m"
      parse_tree__set_of_var__list_to_set_2_p_0(erl_backend__erl_code_gen__TypeCtorInfo_44_57, erl_backend__erl_code_gen__HeadVars_32, &erl_backend__erl_code_gen__HeadVarsSet_38);
    }
#line 357 "erl_code_gen.m"
    {
#line 357 "erl_code_gen.m"
      parse_tree__set_of_var__intersect_3_p_0(erl_backend__erl_code_gen__TypeCtorInfo_44_57, erl_backend__erl_code_gen__HeadVarsSet_38, erl_backend__erl_code_gen__NonLocals0_37, &erl_backend__erl_code_gen__NonLocals_39);
    }
#line 358 "erl_code_gen.m"
    {
#line 358 "erl_code_gen.m"
      hlds__hlds_goal__goal_info_set_code_gen_nonlocals_3_p_0(erl_backend__erl_code_gen__NonLocals_39, erl_backend__erl_code_gen__GoalInfo0_36, &erl_backend__erl_code_gen__GoalInfo_40);
    }
#line 359 "erl_code_gen.m"
    {
#line 359 "erl_code_gen.m"
      erl_backend__erl_code_gen__Goal_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 359 "erl_code_gen.m"
      MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__Goal_41, 0) = ((MR_Box) (erl_backend__erl_code_gen__GoalExpr_35));
#line 359 "erl_code_gen.m"
      MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__Goal_41, 1) = ((MR_Box) (erl_backend__erl_code_gen__GoalInfo_40));
#line 359 "erl_code_gen.m"
    }
#line 361 "erl_code_gen.m"
    {
#line 361 "erl_code_gen.m"
      erl_backend__erl_code_gen___Context_42 = hlds__hlds_goal__goal_info_get_context_1_f_0(erl_backend__erl_code_gen__GoalInfo_40);
    }
#line 364 "erl_code_gen.m"
    {
#line 364 "erl_code_gen.m"
      erl_backend__erl_code_gen__STATE_VARIABLE_Info_38_51 = erl_backend__erl_code_util__erl_gen_info_init_3_f_0(erl_backend__erl_code_gen__ModuleInfo_8, erl_backend__erl_code_gen__PredId_9, erl_backend__erl_code_gen__ProcId_10);
    }
#line 366 "erl_code_gen.m"
    erl_backend__erl_code_gen__V_52_52 = (MR_Word) erl_backend__erl_code_gen__PredStatus_30;
#line 366 "erl_code_gen.m"
    erl_backend__erl_code_gen__succeeded = ((MR_tag((MR_Word) erl_backend__erl_code_gen__V_52_52)) == (MR_mktag((MR_Integer) 1)));
#line 366 "erl_code_gen.m"
    if (erl_backend__erl_code_gen__succeeded)
#line 366 "erl_code_gen.m"
      {
#line 366 "erl_code_gen.m"
        erl_backend__erl_code_gen__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__erl_code_gen__V_52_52, (MR_Integer) 0)));
#line 368 "erl_code_gen.m"
        {
#line 368 "erl_code_gen.m"
          MR_Word erl_backend__erl_code_gen__TypeInfo_45_58;
#line 368 "erl_code_gen.m"
          MR_Word erl_backend__erl_code_gen__ArgTypes_45;
#line 368 "erl_code_gen.m"
          MR_Word erl_backend__erl_code_gen__ArgModes_46;
#line 368 "erl_code_gen.m"
          MR_Word erl_backend__erl_code_gen__InputArgs_47;
#line 368 "erl_code_gen.m"
          MR_Integer erl_backend__erl_code_gen__Arity_49;
#line 370 "erl_code_gen.m"
          MR_Word erl_backend__erl_code_gen___OutputArgs_48;

#line 368 "erl_code_gen.m"
          {
#line 368 "erl_code_gen.m"
            hlds__hlds_pred__pred_info_get_arg_types_2_p_0(erl_backend__erl_code_gen__PredInfo_11, &erl_backend__erl_code_gen__ArgTypes_45);
          }
#line 369 "erl_code_gen.m"
          {
#line 369 "erl_code_gen.m"
            hlds__hlds_pred__proc_info_get_argmodes_2_p_0(erl_backend__erl_code_gen__ProcInfo_12, &erl_backend__erl_code_gen__ArgModes_46);
          }
#line 6837 "erl_backend.erl_code_gen.c"
          erl_backend__erl_code_gen__TypeInfo_45_58 = (MR_Word) &erl_backend__erl_code_gen_scalar_common_1[0];
#line 370 "erl_code_gen.m"
          {
#line 370 "erl_code_gen.m"
            erl_backend__erl_code_util__erl_gen_arg_list_7_p_0(erl_backend__erl_code_gen__TypeInfo_45_58, erl_backend__erl_code_gen__ModuleInfo_8, (MR_Integer) 0, erl_backend__erl_code_gen__HeadVars_32, erl_backend__erl_code_gen__ArgTypes_45, erl_backend__erl_code_gen__ArgModes_46, &erl_backend__erl_code_gen__InputArgs_47, &erl_backend__erl_code_gen___OutputArgs_48);
          }
#line 377 "erl_code_gen.m"
#line 377 "erl_code_gen.m"
          switch (erl_backend__erl_code_gen__CodeModel_31) {
#line 377 "erl_code_gen.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 377 "erl_code_gen.m"
            case (MR_Integer) 0:
#line 377 "erl_code_gen.m"
            case (MR_Integer) 1:
#line 376 "erl_code_gen.m"
              {
#line 376 "erl_code_gen.m"
                erl_backend__erl_code_gen__Arity_49 = mercury__list__length_1_f_0(erl_backend__erl_code_gen__TypeInfo_45_58, erl_backend__erl_code_gen__InputArgs_47);
              }
#line 377 "erl_code_gen.m"
              break;
#line 377 "erl_code_gen.m"
            case (MR_Integer) 2:
#line 378 "erl_code_gen.m"
              {
#line 378 "erl_code_gen.m"
                MR_Integer erl_backend__erl_code_gen__V_54_54;

#line 380 "erl_code_gen.m"
                {
#line 380 "erl_code_gen.m"
                  erl_backend__erl_code_gen__V_54_54 = mercury__list__length_1_f_0(erl_backend__erl_code_gen__TypeInfo_45_58, erl_backend__erl_code_gen__InputArgs_47);
                }
#line 380 "erl_code_gen.m"
                erl_backend__erl_code_gen__Arity_49 = (erl_backend__erl_code_gen__V_54_54 + (MR_Integer) 1);
#line 378 "erl_code_gen.m"
              }
#line 377 "erl_code_gen.m"
              break;
#line 377 "erl_code_gen.m"
          }
#line 382 "erl_code_gen.m"
          {
#line 382 "erl_code_gen.m"
            erl_backend__erl_code_gen__ProcBody_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 382 "erl_code_gen.m"
            MR_hl_field(MR_mktag(1), erl_backend__erl_code_gen__ProcBody_15, 0) = ((MR_Box) (erl_backend__erl_code_gen__Arity_49));
#line 382 "erl_code_gen.m"
          }
#line 368 "erl_code_gen.m"
          erl_backend__erl_code_gen__STATE_VARIABLE_Info_43_56 = erl_backend__erl_code_gen__STATE_VARIABLE_Info_38_51;
#line 368 "erl_code_gen.m"
        }
#line 366 "erl_code_gen.m"
      }
#line 366 "erl_code_gen.m"
    else
#line 385 "erl_code_gen.m"
      {
#line 385 "erl_code_gen.m"
        MR_Word erl_backend__erl_code_gen__ProcClause_50;
#line 385 "erl_code_gen.m"
        MR_Word erl_backend__erl_code_gen__InputVars_66;
#line 385 "erl_code_gen.m"
        MR_Word erl_backend__erl_code_gen__OutputVars_67;
#line 385 "erl_code_gen.m"
        MR_Word erl_backend__erl_code_gen__OutputVarsExprs_68;
#line 385 "erl_code_gen.m"
        MR_Word erl_backend__erl_code_gen__InputVarsTerms_69;
#line 385 "erl_code_gen.m"
        MR_Word erl_backend__erl_code_gen__SuccessExpr_70;
#line 385 "erl_code_gen.m"
        MR_Word erl_backend__erl_code_gen__InstMap_71;
#line 385 "erl_code_gen.m"
        MR_Word erl_backend__erl_code_gen__Statement_73;
#line 385 "erl_code_gen.m"
        MR_Word erl_backend__erl_code_gen__STATE_VARIABLE_Info_23_75;
#line 385 "erl_code_gen.m"
        MR_Word erl_backend__erl_code_gen__V_82_82;

#line 397 "erl_code_gen.m"
        {
#line 397 "erl_code_gen.m"
          erl_backend__erl_code_util__erl_gen_info_get_input_vars_2_p_0(erl_backend__erl_code_gen__STATE_VARIABLE_Info_38_51, &erl_backend__erl_code_gen__InputVars_66);
        }
#line 398 "erl_code_gen.m"
        {
#line 398 "erl_code_gen.m"
          erl_backend__erl_code_util__erl_gen_info_get_output_vars_2_p_0(erl_backend__erl_code_gen__STATE_VARIABLE_Info_38_51, &erl_backend__erl_code_gen__OutputVars_67);
        }
#line 399 "erl_code_gen.m"
        {
#line 399 "erl_code_gen.m"
          erl_backend__erl_code_gen__OutputVarsExprs_68 = erl_backend__elds__exprs_from_vars_1_f_0(erl_backend__erl_code_gen__OutputVars_67);
        }
#line 411 "erl_code_gen.m"
#line 411 "erl_code_gen.m"
        switch (erl_backend__erl_code_gen__CodeModel_31) {
#line 411 "erl_code_gen.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 411 "erl_code_gen.m"
          case (MR_Integer) 0:
#line 401 "erl_code_gen.m"
            {
#line 402 "erl_code_gen.m"
              {
#line 402 "erl_code_gen.m"
                erl_backend__erl_code_gen__InputVarsTerms_69 = erl_backend__elds__terms_from_vars_1_f_0(erl_backend__erl_code_gen__InputVars_66);
              }
#line 409 "erl_code_gen.m"
              {
#line 409 "erl_code_gen.m"
                erl_backend__erl_code_gen__SuccessExpr_70 = erl_backend__elds__tuple_or_single_expr_1_f_0(erl_backend__erl_code_gen__OutputVarsExprs_68);
              }
#line 410 "erl_code_gen.m"
              erl_backend__erl_code_gen__InstMap_71 = erl_backend__erl_code_gen__InstMap0_33;
#line 401 "erl_code_gen.m"
              erl_backend__erl_code_gen__STATE_VARIABLE_Info_23_75 = erl_backend__erl_code_gen__STATE_VARIABLE_Info_38_51;
#line 401 "erl_code_gen.m"
            }
#line 411 "erl_code_gen.m"
            break;
#line 411 "erl_code_gen.m"
          case (MR_Integer) 2:
#line 420 "erl_code_gen.m"
            {
#line 420 "erl_code_gen.m"
              MR_Word erl_backend__erl_code_gen__SucceedVar_72;
#line 420 "erl_code_gen.m"
              MR_Word erl_backend__erl_code_gen__V_76_76;
#line 420 "erl_code_gen.m"
              MR_Word erl_backend__erl_code_gen__V_77_77;
#line 420 "erl_code_gen.m"
              MR_Word erl_backend__erl_code_gen__V_79_79;
#line 420 "erl_code_gen.m"
              MR_Word erl_backend__erl_code_gen__V_80_80;

#line 426 "erl_code_gen.m"
              {
#line 426 "erl_code_gen.m"
                erl_backend__erl_code_util__erl_gen_info_new_named_var_4_p_0((MR_String) "SucceedHeadVar", &erl_backend__erl_code_gen__SucceedVar_72, erl_backend__erl_code_gen__STATE_VARIABLE_Info_38_51, &erl_backend__erl_code_gen__STATE_VARIABLE_Info_23_75);
              }
#line 1017 "erl_code_gen.m"
              {
#line 1017 "erl_code_gen.m"
                hlds__instmap__instmap_set_var_4_p_0(erl_backend__erl_code_gen__SucceedVar_72, (MR_Word) MR_mkword(MR_mktag(3), &erl_backend__erl_code_gen_scalar_common_3[0]), erl_backend__erl_code_gen__InstMap0_33, &erl_backend__erl_code_gen__InstMap_71);
              }
#line 428 "erl_code_gen.m"
              {
#line 428 "erl_code_gen.m"
                erl_backend__erl_code_gen__V_77_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 428 "erl_code_gen.m"
                MR_hl_field(MR_mktag(1), erl_backend__erl_code_gen__V_77_77, 0) = ((MR_Box) (erl_backend__erl_code_gen__SucceedVar_72));
#line 428 "erl_code_gen.m"
                MR_hl_field(MR_mktag(1), erl_backend__erl_code_gen__V_77_77, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 428 "erl_code_gen.m"
              }
#line 428 "erl_code_gen.m"
              {
#line 428 "erl_code_gen.m"
                erl_backend__erl_code_gen__V_76_76 = mercury__list__f_43_43_2_f_0((MR_Word) &erl_backend__erl_code_gen_scalar_common_1[0], erl_backend__erl_code_gen__InputVars_66, erl_backend__erl_code_gen__V_77_77);
              }
#line 428 "erl_code_gen.m"
              {
#line 428 "erl_code_gen.m"
                erl_backend__erl_code_gen__InputVarsTerms_69 = erl_backend__elds__terms_from_vars_1_f_0(erl_backend__erl_code_gen__V_76_76);
              }
#line 429 "erl_code_gen.m"
              {
#line 429 "erl_code_gen.m"
                erl_backend__erl_code_gen__V_80_80 = erl_backend__elds__expr_from_var_1_f_0(erl_backend__erl_code_gen__SucceedVar_72);
              }
#line 429 "erl_code_gen.m"
              {
#line 429 "erl_code_gen.m"
                erl_backend__erl_code_gen__V_79_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 429 "erl_code_gen.m"
                MR_hl_field(MR_mktag(1), erl_backend__erl_code_gen__V_79_79, 0) = ((MR_Box) (erl_backend__erl_code_gen__V_80_80));
#line 429 "erl_code_gen.m"
              }
#line 429 "erl_code_gen.m"
              {
#line 429 "erl_code_gen.m"
                erl_backend__erl_code_gen__SuccessExpr_70 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 429 "erl_code_gen.m"
                MR_hl_field(MR_mktag(3), erl_backend__erl_code_gen__SuccessExpr_70, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 429 "erl_code_gen.m"
                MR_hl_field(MR_mktag(3), erl_backend__erl_code_gen__SuccessExpr_70, 1) = ((MR_Box) (erl_backend__erl_code_gen__V_79_79));
#line 429 "erl_code_gen.m"
                MR_hl_field(MR_mktag(3), erl_backend__erl_code_gen__SuccessExpr_70, 2) = ((MR_Box) (erl_backend__erl_code_gen__OutputVarsExprs_68));
#line 429 "erl_code_gen.m"
              }
#line 420 "erl_code_gen.m"
            }
#line 411 "erl_code_gen.m"
            break;
#line 411 "erl_code_gen.m"
          case (MR_Integer) 1:
#line 412 "erl_code_gen.m"
            {
#line 412 "erl_code_gen.m"
              MR_Word erl_backend__erl_code_gen__V_81_81;

#line 413 "erl_code_gen.m"
              {
#line 413 "erl_code_gen.m"
                erl_backend__erl_code_gen__InputVarsTerms_69 = erl_backend__elds__terms_from_vars_1_f_0(erl_backend__erl_code_gen__InputVars_66);
              }
#line 417 "erl_code_gen.m"
              {
#line 417 "erl_code_gen.m"
                erl_backend__erl_code_gen__V_81_81 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 417 "erl_code_gen.m"
                MR_hl_field(MR_mktag(3), erl_backend__erl_code_gen__V_81_81, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 417 "erl_code_gen.m"
                MR_hl_field(MR_mktag(3), erl_backend__erl_code_gen__V_81_81, 1) = ((MR_Box) (erl_backend__erl_code_gen__OutputVarsExprs_68));
#line 417 "erl_code_gen.m"
              }
#line 417 "erl_code_gen.m"
              {
#line 417 "erl_code_gen.m"
                erl_backend__erl_code_gen__SuccessExpr_70 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 417 "erl_code_gen.m"
                MR_hl_field(MR_mktag(2), erl_backend__erl_code_gen__SuccessExpr_70, 0) = ((MR_Box) (erl_backend__erl_code_gen__V_81_81));
#line 417 "erl_code_gen.m"
              }
#line 418 "erl_code_gen.m"
              erl_backend__erl_code_gen__InstMap_71 = erl_backend__erl_code_gen__InstMap0_33;
#line 412 "erl_code_gen.m"
              erl_backend__erl_code_gen__STATE_VARIABLE_Info_23_75 = erl_backend__erl_code_gen__STATE_VARIABLE_Info_38_51;
#line 412 "erl_code_gen.m"
            }
#line 411 "erl_code_gen.m"
            break;
#line 411 "erl_code_gen.m"
        }
#line 432 "erl_code_gen.m"
        {
#line 432 "erl_code_gen.m"
          erl_backend__erl_code_gen__V_82_82 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 432 "erl_code_gen.m"
          MR_hl_field(MR_mktag(1), erl_backend__erl_code_gen__V_82_82, 0) = ((MR_Box) (erl_backend__erl_code_gen__SuccessExpr_70));
#line 432 "erl_code_gen.m"
        }
#line 432 "erl_code_gen.m"
        {
#line 432 "erl_code_gen.m"
          erl_backend__erl_code_gen__erl_gen_goal_7_p_0(erl_backend__erl_code_gen__CodeModel_31, erl_backend__erl_code_gen__InstMap_71, erl_backend__erl_code_gen__Goal_41, erl_backend__erl_code_gen__V_82_82, &erl_backend__erl_code_gen__Statement_73, erl_backend__erl_code_gen__STATE_VARIABLE_Info_23_75, &erl_backend__erl_code_gen__STATE_VARIABLE_Info_43_56);
        }
#line 433 "erl_code_gen.m"
        {
#line 433 "erl_code_gen.m"
          erl_backend__erl_code_gen__ProcClause_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 433 "erl_code_gen.m"
          MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__ProcClause_50, 0) = ((MR_Box) (erl_backend__erl_code_gen__InputVarsTerms_69));
#line 433 "erl_code_gen.m"
          MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__ProcClause_50, 1) = ((MR_Box) (erl_backend__erl_code_gen__Statement_73));
#line 433 "erl_code_gen.m"
        }
#line 386 "erl_code_gen.m"
        erl_backend__erl_code_gen__ProcBody_15 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) erl_backend__erl_code_gen__ProcClause_50);
#line 385 "erl_code_gen.m"
      }
#line 389 "erl_code_gen.m"
    {
#line 389 "erl_code_gen.m"
      erl_backend__erl_code_util__erl_gen_info_get_varset_2_p_0(erl_backend__erl_code_gen__STATE_VARIABLE_Info_43_56, &erl_backend__erl_code_gen__ProcVarSet_14);
    }
#line 390 "erl_code_gen.m"
    {
#line 390 "erl_code_gen.m"
      erl_backend__erl_code_util__erl_gen_info_get_env_vars_2_p_0(erl_backend__erl_code_gen__STATE_VARIABLE_Info_43_56, &erl_backend__erl_code_gen__EnvVarNames_16);
    }
#line 330 "erl_code_gen.m"
    {
#line 330 "erl_code_gen.m"
      erl_backend__erl_code_gen__V_20_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 330 "erl_code_gen.m"
      MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__V_20_20, 0) = ((MR_Box) (erl_backend__erl_code_gen__PredId_9));
#line 330 "erl_code_gen.m"
      MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__V_20_20, 1) = ((MR_Box) (erl_backend__erl_code_gen__ProcId_10));
#line 330 "erl_code_gen.m"
    }
#line 330 "erl_code_gen.m"
    {
#line 330 "erl_code_gen.m"
      erl_backend__erl_code_gen__ProcDefn_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 330 "erl_code_gen.m"
      MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__ProcDefn_17, 0) = ((MR_Box) (erl_backend__erl_code_gen__V_20_20));
#line 330 "erl_code_gen.m"
      MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__ProcDefn_17, 1) = ((MR_Box) (erl_backend__erl_code_gen__ProcVarSet_14));
#line 330 "erl_code_gen.m"
      MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__ProcDefn_17, 2) = ((MR_Box) (erl_backend__erl_code_gen__ProcBody_15));
#line 330 "erl_code_gen.m"
      MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__ProcDefn_17, 3) = ((MR_Box) (erl_backend__erl_code_gen__EnvVarNames_16));
#line 330 "erl_code_gen.m"
    }
#line 332 "erl_code_gen.m"
    {
#line 332 "erl_code_gen.m"
      MR_Word base;
#line 332 "erl_code_gen.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 332 "erl_code_gen.m"
      *erl_backend__erl_code_gen__STATE_VARIABLE_Defns_19 = base;
#line 332 "erl_code_gen.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (erl_backend__erl_code_gen__ProcDefn_17));
#line 332 "erl_code_gen.m"
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (erl_backend__erl_code_gen__STATE_VARIABLE_Defns_0_18));
#line 332 "erl_code_gen.m"
    }
#line 327 "erl_code_gen.m"
  }
#line 324 "erl_code_gen.m"
}

#line 281 "erl_code_gen.m"
static void MR_CALL 
erl_backend__erl_code_gen__erl_gen_simple_compare_6_p_0(
#line 281 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__ModuleInfo_7,
#line 281 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__PredId_8,
#line 281 "erl_code_gen.m"
  MR_Integer erl_backend__erl_code_gen__ProcId_9,
#line 281 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__X_10,
#line 281 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__Y_11,
#line 281 "erl_code_gen.m"
  MR_Word * erl_backend__erl_code_gen__ProcDefn_12)
#line 281 "erl_code_gen.m"
{
#line 284 "erl_code_gen.m"
  {
#line 284 "erl_code_gen.m"
    MR_bool erl_backend__erl_code_gen__succeeded;
#line 284 "erl_code_gen.m"
    MR_Word erl_backend__erl_code_gen__Info_13;
#line 284 "erl_code_gen.m"
    MR_Word erl_backend__erl_code_gen__InputVars_14;
#line 284 "erl_code_gen.m"
    MR_Word erl_backend__erl_code_gen__XExpr_15;
#line 284 "erl_code_gen.m"
    MR_Word erl_backend__erl_code_gen__YExpr_16;
#line 284 "erl_code_gen.m"
    MR_Word erl_backend__erl_code_gen__Clause_17;
#line 284 "erl_code_gen.m"
    MR_Word erl_backend__erl_code_gen__ClauseExpr_18;
#line 284 "erl_code_gen.m"
    MR_Word erl_backend__erl_code_gen__CondEq_19;
#line 284 "erl_code_gen.m"
    MR_Word erl_backend__erl_code_gen__IsEq_20;
#line 284 "erl_code_gen.m"
    MR_Word erl_backend__erl_code_gen__IsNotEq_21;
#line 284 "erl_code_gen.m"
    MR_Word erl_backend__erl_code_gen__CondLt_22;
#line 284 "erl_code_gen.m"
    MR_Word erl_backend__erl_code_gen__IsLt_23;
#line 284 "erl_code_gen.m"
    MR_Word erl_backend__erl_code_gen__IsGt_24;
#line 284 "erl_code_gen.m"
    MR_Word erl_backend__erl_code_gen__ProcVarSet_25;
#line 284 "erl_code_gen.m"
    MR_Word erl_backend__erl_code_gen__EnvVarNames_26;
#line 284 "erl_code_gen.m"
    MR_Word erl_backend__erl_code_gen__V_27_27;
#line 284 "erl_code_gen.m"
    MR_Word erl_backend__erl_code_gen__V_28_28;
#line 284 "erl_code_gen.m"
    MR_Word erl_backend__erl_code_gen__V_29_29;
#line 284 "erl_code_gen.m"
    MR_Word erl_backend__erl_code_gen__V_32_32;
#line 284 "erl_code_gen.m"
    MR_Word erl_backend__erl_code_gen__V_33_33;
#line 284 "erl_code_gen.m"
    MR_Word erl_backend__erl_code_gen__V_34_34;
#line 284 "erl_code_gen.m"
    MR_Word erl_backend__erl_code_gen__V_36_36;
#line 284 "erl_code_gen.m"
    MR_Word erl_backend__erl_code_gen__V_37_37;
#line 284 "erl_code_gen.m"
    MR_Word erl_backend__erl_code_gen__V_38_38;
#line 284 "erl_code_gen.m"
    MR_Word erl_backend__erl_code_gen__V_39_39;
#line 284 "erl_code_gen.m"
    MR_Word erl_backend__erl_code_gen__V_42_42;
#line 284 "erl_code_gen.m"
    MR_Word erl_backend__erl_code_gen__V_43_43;
#line 284 "erl_code_gen.m"
    MR_Word erl_backend__erl_code_gen__V_44_44;
#line 284 "erl_code_gen.m"
    MR_Word erl_backend__erl_code_gen__V_46_46;
#line 284 "erl_code_gen.m"
    MR_Word erl_backend__erl_code_gen__V_47_47;
#line 284 "erl_code_gen.m"
    MR_Word erl_backend__erl_code_gen__V_48_48;
#line 284 "erl_code_gen.m"
    MR_Word erl_backend__erl_code_gen__V_50_50;
#line 284 "erl_code_gen.m"
    MR_Word erl_backend__erl_code_gen__V_51_51;

#line 285 "erl_code_gen.m"
    {
#line 285 "erl_code_gen.m"
      erl_backend__erl_code_gen__Info_13 = erl_backend__erl_code_util__erl_gen_info_init_3_f_0(erl_backend__erl_code_gen__ModuleInfo_7, erl_backend__erl_code_gen__PredId_8, erl_backend__erl_code_gen__ProcId_9);
    }
#line 286 "erl_code_gen.m"
    {
#line 286 "erl_code_gen.m"
      erl_backend__erl_code_util__erl_gen_info_get_input_vars_2_p_0(erl_backend__erl_code_gen__Info_13, &erl_backend__erl_code_gen__InputVars_14);
    }
#line 288 "erl_code_gen.m"
    {
#line 288 "erl_code_gen.m"
      erl_backend__erl_code_gen__XExpr_15 = erl_backend__elds__expr_from_var_1_f_0(erl_backend__erl_code_gen__X_10);
    }
#line 289 "erl_code_gen.m"
    {
#line 289 "erl_code_gen.m"
      erl_backend__erl_code_gen__YExpr_16 = erl_backend__elds__expr_from_var_1_f_0(erl_backend__erl_code_gen__Y_11);
    }
#line 301 "erl_code_gen.m"
    {
#line 301 "erl_code_gen.m"
      erl_backend__erl_code_gen__V_27_27 = erl_backend__elds__terms_from_vars_1_f_0(erl_backend__erl_code_gen__InputVars_14);
    }
#line 304 "erl_code_gen.m"
    {
#line 304 "erl_code_gen.m"
      erl_backend__erl_code_gen__CondEq_19 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 304 "erl_code_gen.m"
      MR_hl_field(MR_mktag(3), erl_backend__erl_code_gen__CondEq_19, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 304 "erl_code_gen.m"
      MR_hl_field(MR_mktag(3), erl_backend__erl_code_gen__CondEq_19, 1) = ((MR_Box) ((MR_Integer) 15));
#line 304 "erl_code_gen.m"
      MR_hl_field(MR_mktag(3), erl_backend__erl_code_gen__CondEq_19, 2) = ((MR_Box) (erl_backend__erl_code_gen__XExpr_15));
#line 304 "erl_code_gen.m"
      MR_hl_field(MR_mktag(3), erl_backend__erl_code_gen__CondEq_19, 3) = ((MR_Box) (erl_backend__erl_code_gen__YExpr_16));
#line 304 "erl_code_gen.m"
    }
#line 305 "erl_code_gen.m"
    {
#line 305 "erl_code_gen.m"
      erl_backend__erl_code_gen__V_32_32 = erl_backend__elds__elds_true_0_f_0();
    }
#line 305 "erl_code_gen.m"
    {
#line 305 "erl_code_gen.m"
      erl_backend__erl_code_gen__V_34_34 = erl_backend__elds__make_enum_alternative_1_f_0((MR_String) "=");
    }
#line 305 "erl_code_gen.m"
    {
#line 305 "erl_code_gen.m"
      erl_backend__erl_code_gen__V_33_33 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 305 "erl_code_gen.m"
      MR_hl_field(MR_mktag(2), erl_backend__erl_code_gen__V_33_33, 0) = ((MR_Box) (erl_backend__erl_code_gen__V_34_34));
#line 305 "erl_code_gen.m"
    }
#line 305 "erl_code_gen.m"
    {
#line 305 "erl_code_gen.m"
      erl_backend__erl_code_gen__IsEq_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 305 "erl_code_gen.m"
      MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__IsEq_20, 0) = ((MR_Box) (erl_backend__erl_code_gen__V_32_32));
#line 305 "erl_code_gen.m"
      MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__IsEq_20, 1) = ((MR_Box) (erl_backend__erl_code_gen__V_33_33));
#line 305 "erl_code_gen.m"
    }
#line 306 "erl_code_gen.m"
    {
#line 306 "erl_code_gen.m"
      erl_backend__erl_code_gen__V_36_36 = erl_backend__elds__elds_false_0_f_0();
    }
#line 308 "erl_code_gen.m"
    {
#line 308 "erl_code_gen.m"
      erl_backend__erl_code_gen__CondLt_22 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 308 "erl_code_gen.m"
      MR_hl_field(MR_mktag(3), erl_backend__erl_code_gen__CondLt_22, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 308 "erl_code_gen.m"
      MR_hl_field(MR_mktag(3), erl_backend__erl_code_gen__CondLt_22, 1) = ((MR_Box) ((MR_Integer) 12));
#line 308 "erl_code_gen.m"
      MR_hl_field(MR_mktag(3), erl_backend__erl_code_gen__CondLt_22, 2) = ((MR_Box) (erl_backend__erl_code_gen__XExpr_15));
#line 308 "erl_code_gen.m"
      MR_hl_field(MR_mktag(3), erl_backend__erl_code_gen__CondLt_22, 3) = ((MR_Box) (erl_backend__erl_code_gen__YExpr_16));
#line 308 "erl_code_gen.m"
    }
#line 309 "erl_code_gen.m"
    {
#line 309 "erl_code_gen.m"
      erl_backend__erl_code_gen__V_42_42 = erl_backend__elds__elds_true_0_f_0();
    }
#line 309 "erl_code_gen.m"
    {
#line 309 "erl_code_gen.m"
      erl_backend__erl_code_gen__V_44_44 = erl_backend__elds__make_enum_alternative_1_f_0((MR_String) "<");
    }
#line 309 "erl_code_gen.m"
    {
#line 309 "erl_code_gen.m"
      erl_backend__erl_code_gen__V_43_43 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 309 "erl_code_gen.m"
      MR_hl_field(MR_mktag(2), erl_backend__erl_code_gen__V_43_43, 0) = ((MR_Box) (erl_backend__erl_code_gen__V_44_44));
#line 309 "erl_code_gen.m"
    }
#line 309 "erl_code_gen.m"
    {
#line 309 "erl_code_gen.m"
      erl_backend__erl_code_gen__IsLt_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 309 "erl_code_gen.m"
      MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__IsLt_23, 0) = ((MR_Box) (erl_backend__erl_code_gen__V_42_42));
#line 309 "erl_code_gen.m"
      MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__IsLt_23, 1) = ((MR_Box) (erl_backend__erl_code_gen__V_43_43));
#line 309 "erl_code_gen.m"
    }
#line 310 "erl_code_gen.m"
    {
#line 310 "erl_code_gen.m"
      erl_backend__erl_code_gen__V_46_46 = erl_backend__elds__elds_false_0_f_0();
    }
#line 310 "erl_code_gen.m"
    {
#line 310 "erl_code_gen.m"
      erl_backend__erl_code_gen__V_48_48 = erl_backend__elds__make_enum_alternative_1_f_0((MR_String) ">");
    }
#line 310 "erl_code_gen.m"
    {
#line 310 "erl_code_gen.m"
      erl_backend__erl_code_gen__V_47_47 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 310 "erl_code_gen.m"
      MR_hl_field(MR_mktag(2), erl_backend__erl_code_gen__V_47_47, 0) = ((MR_Box) (erl_backend__erl_code_gen__V_48_48));
#line 310 "erl_code_gen.m"
    }
#line 310 "erl_code_gen.m"
    {
#line 310 "erl_code_gen.m"
      erl_backend__erl_code_gen__IsGt_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 310 "erl_code_gen.m"
      MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__IsGt_24, 0) = ((MR_Box) (erl_backend__erl_code_gen__V_46_46));
#line 310 "erl_code_gen.m"
      MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__IsGt_24, 1) = ((MR_Box) (erl_backend__erl_code_gen__V_47_47));
#line 310 "erl_code_gen.m"
    }
#line 306 "erl_code_gen.m"
    {
#line 306 "erl_code_gen.m"
      erl_backend__erl_code_gen__V_39_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 306 "erl_code_gen.m"
      MR_hl_field(MR_mktag(1), erl_backend__erl_code_gen__V_39_39, 0) = ((MR_Box) (erl_backend__erl_code_gen__IsGt_24));
#line 306 "erl_code_gen.m"
      MR_hl_field(MR_mktag(1), erl_backend__erl_code_gen__V_39_39, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 306 "erl_code_gen.m"
    }
#line 306 "erl_code_gen.m"
    {
#line 306 "erl_code_gen.m"
      erl_backend__erl_code_gen__V_38_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 306 "erl_code_gen.m"
      MR_hl_field(MR_mktag(1), erl_backend__erl_code_gen__V_38_38, 0) = ((MR_Box) (erl_backend__erl_code_gen__IsLt_23));
#line 306 "erl_code_gen.m"
      MR_hl_field(MR_mktag(1), erl_backend__erl_code_gen__V_38_38, 1) = ((MR_Box) (erl_backend__erl_code_gen__V_39_39));
#line 306 "erl_code_gen.m"
    }
#line 306 "erl_code_gen.m"
    {
#line 306 "erl_code_gen.m"
      erl_backend__erl_code_gen__V_37_37 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 306 "erl_code_gen.m"
      MR_hl_field(MR_mktag(3), erl_backend__erl_code_gen__V_37_37, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 306 "erl_code_gen.m"
      MR_hl_field(MR_mktag(3), erl_backend__erl_code_gen__V_37_37, 1) = ((MR_Box) (erl_backend__erl_code_gen__CondLt_22));
#line 306 "erl_code_gen.m"
      MR_hl_field(MR_mktag(3), erl_backend__erl_code_gen__V_37_37, 2) = ((MR_Box) (erl_backend__erl_code_gen__V_38_38));
#line 306 "erl_code_gen.m"
    }
#line 306 "erl_code_gen.m"
    {
#line 306 "erl_code_gen.m"
      erl_backend__erl_code_gen__IsNotEq_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 306 "erl_code_gen.m"
      MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__IsNotEq_21, 0) = ((MR_Box) (erl_backend__erl_code_gen__V_36_36));
#line 306 "erl_code_gen.m"
      MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__IsNotEq_21, 1) = ((MR_Box) (erl_backend__erl_code_gen__V_37_37));
#line 306 "erl_code_gen.m"
    }
#line 302 "erl_code_gen.m"
    {
#line 302 "erl_code_gen.m"
      erl_backend__erl_code_gen__V_29_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 302 "erl_code_gen.m"
      MR_hl_field(MR_mktag(1), erl_backend__erl_code_gen__V_29_29, 0) = ((MR_Box) (erl_backend__erl_code_gen__IsNotEq_21));
#line 302 "erl_code_gen.m"
      MR_hl_field(MR_mktag(1), erl_backend__erl_code_gen__V_29_29, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 302 "erl_code_gen.m"
    }
#line 302 "erl_code_gen.m"
    {
#line 302 "erl_code_gen.m"
      erl_backend__erl_code_gen__V_28_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 302 "erl_code_gen.m"
      MR_hl_field(MR_mktag(1), erl_backend__erl_code_gen__V_28_28, 0) = ((MR_Box) (erl_backend__erl_code_gen__IsEq_20));
#line 302 "erl_code_gen.m"
      MR_hl_field(MR_mktag(1), erl_backend__erl_code_gen__V_28_28, 1) = ((MR_Box) (erl_backend__erl_code_gen__V_29_29));
#line 302 "erl_code_gen.m"
    }
#line 302 "erl_code_gen.m"
    {
#line 302 "erl_code_gen.m"
      erl_backend__erl_code_gen__ClauseExpr_18 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 302 "erl_code_gen.m"
      MR_hl_field(MR_mktag(3), erl_backend__erl_code_gen__ClauseExpr_18, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 302 "erl_code_gen.m"
      MR_hl_field(MR_mktag(3), erl_backend__erl_code_gen__ClauseExpr_18, 1) = ((MR_Box) (erl_backend__erl_code_gen__CondEq_19));
#line 302 "erl_code_gen.m"
      MR_hl_field(MR_mktag(3), erl_backend__erl_code_gen__ClauseExpr_18, 2) = ((MR_Box) (erl_backend__erl_code_gen__V_28_28));
#line 302 "erl_code_gen.m"
    }
#line 301 "erl_code_gen.m"
    {
#line 301 "erl_code_gen.m"
      erl_backend__erl_code_gen__Clause_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 301 "erl_code_gen.m"
      MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__Clause_17, 0) = ((MR_Box) (erl_backend__erl_code_gen__V_27_27));
#line 301 "erl_code_gen.m"
      MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__Clause_17, 1) = ((MR_Box) (erl_backend__erl_code_gen__ClauseExpr_18));
#line 301 "erl_code_gen.m"
    }
#line 312 "erl_code_gen.m"
    {
#line 312 "erl_code_gen.m"
      erl_backend__erl_code_util__erl_gen_info_get_varset_2_p_0(erl_backend__erl_code_gen__Info_13, &erl_backend__erl_code_gen__ProcVarSet_25);
    }
#line 313 "erl_code_gen.m"
    {
#line 313 "erl_code_gen.m"
      erl_backend__erl_code_util__erl_gen_info_get_env_vars_2_p_0(erl_backend__erl_code_gen__Info_13, &erl_backend__erl_code_gen__EnvVarNames_26);
    }
#line 314 "erl_code_gen.m"
    {
#line 314 "erl_code_gen.m"
      erl_backend__erl_code_gen__V_50_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 314 "erl_code_gen.m"
      MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__V_50_50, 0) = ((MR_Box) (erl_backend__erl_code_gen__PredId_8));
#line 314 "erl_code_gen.m"
      MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__V_50_50, 1) = ((MR_Box) (erl_backend__erl_code_gen__ProcId_9));
#line 314 "erl_code_gen.m"
    }
#line 315 "erl_code_gen.m"
    erl_backend__erl_code_gen__V_51_51 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) erl_backend__erl_code_gen__Clause_17);
#line 314 "erl_code_gen.m"
    {
#line 314 "erl_code_gen.m"
      MR_Word base;
#line 314 "erl_code_gen.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 314 "erl_code_gen.m"
      *erl_backend__erl_code_gen__ProcDefn_12 = base;
#line 314 "erl_code_gen.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (erl_backend__erl_code_gen__V_50_50));
#line 314 "erl_code_gen.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (erl_backend__erl_code_gen__ProcVarSet_25));
#line 314 "erl_code_gen.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (erl_backend__erl_code_gen__V_51_51));
#line 314 "erl_code_gen.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (erl_backend__erl_code_gen__EnvVarNames_26));
#line 314 "erl_code_gen.m"
    }
#line 284 "erl_code_gen.m"
  }
#line 281 "erl_code_gen.m"
}

#line 226 "erl_code_gen.m"
static MR_bool MR_CALL 
erl_backend__erl_code_gen__erl_maybe_gen_simple_special_pred_7_p_0(
#line 226 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__ModuleInfo_8,
#line 226 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__PredId_9,
#line 226 "erl_code_gen.m"
  MR_Integer erl_backend__erl_code_gen__ProcId_10,
#line 226 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__PredInfo_11,
#line 226 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__ProcInfo_12,
#line 226 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__STATE_VARIABLE_Defns_0_27,
#line 226 "erl_code_gen.m"
  MR_Word * erl_backend__erl_code_gen__STATE_VARIABLE_Defns_28)
#line 226 "erl_code_gen.m"
{
#line 231 "erl_code_gen.m"
  {
#line 231 "erl_code_gen.m"
    MR_bool erl_backend__erl_code_gen__succeeded;
#line 231 "erl_code_gen.m"
    MR_String erl_backend__erl_code_gen__PredName_14;
#line 231 "erl_code_gen.m"
    MR_Integer erl_backend__erl_code_gen__PredArity_15;
#line 231 "erl_code_gen.m"
    MR_Word erl_backend__erl_code_gen__SpecialId_16;
#line 231 "erl_code_gen.m"
    MR_Word erl_backend__erl_code_gen__Args_18;
#line 231 "erl_code_gen.m"
    MR_Word erl_backend__erl_code_gen__VarTypes_19;
#line 231 "erl_code_gen.m"
    MR_Word erl_backend__erl_code_gen__ProcDefn_24;
#line 231 "erl_code_gen.m"
    MR_Integer erl_backend__erl_code_gen__V_42_42;
#line 234 "erl_code_gen.m"
    MR_String erl_backend__erl_code_gen__V_17_17;

#line 232 "erl_code_gen.m"
    {
#line 232 "erl_code_gen.m"
      erl_backend__erl_code_gen__PredName_14 = hlds__hlds_pred__pred_info_name_1_f_0(erl_backend__erl_code_gen__PredInfo_11);
    }
#line 233 "erl_code_gen.m"
    {
#line 233 "erl_code_gen.m"
      erl_backend__erl_code_gen__PredArity_15 = hlds__hlds_pred__pred_info_orig_arity_1_f_0(erl_backend__erl_code_gen__PredInfo_11);
    }
#line 234 "erl_code_gen.m"
    {
#line 234 "erl_code_gen.m"
      erl_backend__erl_code_gen__succeeded = mdbcomp__prim_data__special_pred_name_arity_4_p_2(&erl_backend__erl_code_gen__SpecialId_16, &erl_backend__erl_code_gen__V_17_17, erl_backend__erl_code_gen__PredName_14, &erl_backend__erl_code_gen__V_42_42);
    }
#line 231 "erl_code_gen.m"
    if (erl_backend__erl_code_gen__succeeded)
#line 231 "erl_code_gen.m"
      {
#line 234 "erl_code_gen.m"
        erl_backend__erl_code_gen__succeeded = (erl_backend__erl_code_gen__PredArity_15 == erl_backend__erl_code_gen__V_42_42);
#line 231 "erl_code_gen.m"
        if (erl_backend__erl_code_gen__succeeded)
#line 231 "erl_code_gen.m"
          {
#line 235 "erl_code_gen.m"
            {
#line 235 "erl_code_gen.m"
              hlds__hlds_pred__proc_info_get_headvars_2_p_0(erl_backend__erl_code_gen__ProcInfo_12, &erl_backend__erl_code_gen__Args_18);
            }
#line 236 "erl_code_gen.m"
            {
#line 236 "erl_code_gen.m"
              hlds__hlds_pred__proc_info_get_vartypes_2_p_0(erl_backend__erl_code_gen__ProcInfo_12, &erl_backend__erl_code_gen__VarTypes_19);
            }
#line 246 "erl_code_gen.m"
#line 246 "erl_code_gen.m"
            switch (erl_backend__erl_code_gen__SpecialId_16) {
#line 246 "erl_code_gen.m"
              default:
#line 246 "erl_code_gen.m"
                erl_backend__erl_code_gen__succeeded = MR_FALSE;
#line 246 "erl_code_gen.m"
                break;
#line 246 "erl_code_gen.m"
              case (MR_Integer) 2:
#line 247 "erl_code_gen.m"
                {
#line 247 "erl_code_gen.m"
                  MR_Word erl_backend__erl_code_gen__V_29_29;
#line 247 "erl_code_gen.m"
                  MR_Word erl_backend__erl_code_gen__V_30_30;
#line 247 "erl_code_gen.m"
                  MR_Word erl_backend__erl_code_gen__V_32_32;
#line 247 "erl_code_gen.m"
                  MR_Word erl_backend__erl_code_gen__Y_37;
#line 247 "erl_code_gen.m"
                  MR_Word erl_backend__erl_code_gen__X_38;
#line 247 "erl_code_gen.m"
                  MR_Word erl_backend__erl_code_gen__Type_39;
#line 247 "erl_code_gen.m"
                  MR_Word erl_backend__erl_code_gen__V_44_44;
#line 248 "erl_code_gen.m"
                  MR_Word erl_backend__erl_code_gen__V_50_50;
#line 248 "erl_code_gen.m"
                  MR_Word erl_backend__erl_code_gen__V_51_51;

#line 248 "erl_code_gen.m"
                  {
#line 248 "erl_code_gen.m"
                    mercury__list__reverse_2_p_0((MR_Word) &erl_backend__erl_code_gen_scalar_common_1[0], erl_backend__erl_code_gen__Args_18, &erl_backend__erl_code_gen__V_29_29);
                  }
#line 248 "erl_code_gen.m"
                  erl_backend__erl_code_gen__succeeded = ((MR_tag((MR_Word) erl_backend__erl_code_gen__V_29_29)) == (MR_mktag((MR_Integer) 1)));
#line 248 "erl_code_gen.m"
                  if (erl_backend__erl_code_gen__succeeded)
#line 248 "erl_code_gen.m"
                    {
#line 248 "erl_code_gen.m"
                      erl_backend__erl_code_gen__Y_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__erl_code_gen__V_29_29, (MR_Integer) 0)));
#line 248 "erl_code_gen.m"
                      erl_backend__erl_code_gen__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__erl_code_gen__V_29_29, (MR_Integer) 1)));
#line 248 "erl_code_gen.m"
                      erl_backend__erl_code_gen__succeeded = ((MR_tag((MR_Word) erl_backend__erl_code_gen__V_30_30)) == (MR_mktag((MR_Integer) 1)));
#line 248 "erl_code_gen.m"
                      if (erl_backend__erl_code_gen__succeeded)
#line 248 "erl_code_gen.m"
                        {
#line 248 "erl_code_gen.m"
                          erl_backend__erl_code_gen__X_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__erl_code_gen__V_30_30, (MR_Integer) 0)));
#line 248 "erl_code_gen.m"
                          erl_backend__erl_code_gen__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__erl_code_gen__V_30_30, (MR_Integer) 1)));
#line 248 "erl_code_gen.m"
                          erl_backend__erl_code_gen__succeeded = ((MR_tag((MR_Word) erl_backend__erl_code_gen__V_44_44)) == (MR_mktag((MR_Integer) 1)));
#line 248 "erl_code_gen.m"
                          if (erl_backend__erl_code_gen__succeeded)
#line 248 "erl_code_gen.m"
                            {
#line 248 "erl_code_gen.m"
                              erl_backend__erl_code_gen__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__erl_code_gen__V_44_44, (MR_Integer) 0)));
#line 248 "erl_code_gen.m"
                              erl_backend__erl_code_gen__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__erl_code_gen__V_44_44, (MR_Integer) 1)));
#line 249 "erl_code_gen.m"
                              {
#line 249 "erl_code_gen.m"
                                hlds__vartypes__lookup_var_type_3_p_0(erl_backend__erl_code_gen__VarTypes_19, erl_backend__erl_code_gen__Y_37, &erl_backend__erl_code_gen__Type_39);
                              }
#line 250 "erl_code_gen.m"
                              {
#line 250 "erl_code_gen.m"
                                erl_backend__erl_code_gen__V_32_32 = check_hlds__type_util__check_dummy_type_2_f_0(erl_backend__erl_code_gen__ModuleInfo_8, erl_backend__erl_code_gen__Type_39);
                              }
#line 250 "erl_code_gen.m"
                              erl_backend__erl_code_gen__succeeded = (erl_backend__erl_code_gen__V_32_32 == (MR_Integer) 1);
#line 247 "erl_code_gen.m"
                              if (erl_backend__erl_code_gen__succeeded)
#line 247 "erl_code_gen.m"
                                {
#line 251 "erl_code_gen.m"
                                  {
#line 251 "erl_code_gen.m"
                                    erl_backend__erl_code_gen__succeeded = check_hlds__type_util__type_definitely_has_no_user_defined_equality_pred_2_p_0(erl_backend__erl_code_gen__ModuleInfo_8, erl_backend__erl_code_gen__Type_39);
                                  }
#line 247 "erl_code_gen.m"
                                  if (erl_backend__erl_code_gen__succeeded)
#line 247 "erl_code_gen.m"
                                    {
#line 252 "erl_code_gen.m"
                                      {
#line 252 "erl_code_gen.m"
                                        erl_backend__erl_code_gen__erl_gen_simple_compare_6_p_0(erl_backend__erl_code_gen__ModuleInfo_8, erl_backend__erl_code_gen__PredId_9, erl_backend__erl_code_gen__ProcId_10, erl_backend__erl_code_gen__X_38, erl_backend__erl_code_gen__Y_37, &erl_backend__erl_code_gen__ProcDefn_24);
                                      }
#line 252 "erl_code_gen.m"
                                      erl_backend__erl_code_gen__succeeded = MR_TRUE;
#line 247 "erl_code_gen.m"
                                    }
#line 247 "erl_code_gen.m"
                                }
#line 248 "erl_code_gen.m"
                            }
#line 248 "erl_code_gen.m"
                        }
#line 248 "erl_code_gen.m"
                    }
#line 247 "erl_code_gen.m"
                }
#line 246 "erl_code_gen.m"
                break;
#line 246 "erl_code_gen.m"
              case (MR_Integer) 0:
#line 238 "erl_code_gen.m"
                {
#line 238 "erl_code_gen.m"
                  MR_Word erl_backend__erl_code_gen__TypeInfo_40_40;
#line 238 "erl_code_gen.m"
                  MR_Word erl_backend__erl_code_gen__Y_20;
#line 238 "erl_code_gen.m"
                  MR_Word erl_backend__erl_code_gen__X_21;
#line 238 "erl_code_gen.m"
                  MR_Word erl_backend__erl_code_gen__Type_23;
#line 238 "erl_code_gen.m"
                  MR_Word erl_backend__erl_code_gen__V_33_33;
#line 238 "erl_code_gen.m"
                  MR_Word erl_backend__erl_code_gen__V_34_34;
#line 238 "erl_code_gen.m"
                  MR_Word erl_backend__erl_code_gen__V_35_35;
#line 238 "erl_code_gen.m"
                  MR_Integer erl_backend__erl_code_gen__V_43_43;
#line 238 "erl_code_gen.m"
                  MR_Word erl_backend__erl_code_gen__Info_60;
#line 238 "erl_code_gen.m"
                  MR_Word erl_backend__erl_code_gen__InputVars_61;
#line 238 "erl_code_gen.m"
                  MR_Word erl_backend__erl_code_gen__Clause_62;
#line 238 "erl_code_gen.m"
                  MR_Word erl_backend__erl_code_gen__ClauseExpr_63;
#line 238 "erl_code_gen.m"
                  MR_Word erl_backend__erl_code_gen__CompareXY_64;
#line 238 "erl_code_gen.m"
                  MR_Word erl_backend__erl_code_gen__TrueCase_65;
#line 238 "erl_code_gen.m"
                  MR_Word erl_backend__erl_code_gen__FalseCase_66;
#line 238 "erl_code_gen.m"
                  MR_Word erl_backend__erl_code_gen__ProcVarSet_67;
#line 238 "erl_code_gen.m"
                  MR_Word erl_backend__erl_code_gen__EnvVarNames_68;
#line 238 "erl_code_gen.m"
                  MR_Word erl_backend__erl_code_gen__V_69_69;
#line 238 "erl_code_gen.m"
                  MR_Word erl_backend__erl_code_gen__V_70_70;
#line 238 "erl_code_gen.m"
                  MR_Word erl_backend__erl_code_gen__V_71_71;
#line 238 "erl_code_gen.m"
                  MR_Word erl_backend__erl_code_gen__V_72_72;
#line 238 "erl_code_gen.m"
                  MR_Word erl_backend__erl_code_gen__V_73_73;
#line 238 "erl_code_gen.m"
                  MR_Word erl_backend__erl_code_gen__V_74_74;
#line 238 "erl_code_gen.m"
                  MR_Word erl_backend__erl_code_gen__V_75_75;
#line 238 "erl_code_gen.m"
                  MR_Word erl_backend__erl_code_gen__V_76_76;
#line 238 "erl_code_gen.m"
                  MR_Word erl_backend__erl_code_gen__V_77_77;
#line 238 "erl_code_gen.m"
                  MR_Word erl_backend__erl_code_gen__V_78_78;
#line 238 "erl_code_gen.m"
                  MR_Word erl_backend__erl_code_gen__V_79_79;
#line 238 "erl_code_gen.m"
                  MR_Word erl_backend__erl_code_gen__V_80_80;
#line 238 "erl_code_gen.m"
                  MR_Word erl_backend__erl_code_gen__V_81_81;
#line 238 "erl_code_gen.m"
                  MR_Word erl_backend__erl_code_gen__V_82_82;
#line 238 "erl_code_gen.m"
                  MR_Word erl_backend__erl_code_gen__V_83_83;
#line 240 "erl_code_gen.m"
                  MR_Word erl_backend__erl_code_gen__V_22_22;

#line 239 "erl_code_gen.m"
                  {
#line 239 "erl_code_gen.m"
                    hlds__hlds_pred__in_in_unification_proc_id_1_p_0(&erl_backend__erl_code_gen__V_43_43);
                  }
#line 239 "erl_code_gen.m"
                  erl_backend__erl_code_gen__succeeded = (erl_backend__erl_code_gen__ProcId_10 == erl_backend__erl_code_gen__V_43_43);
#line 238 "erl_code_gen.m"
                  if (erl_backend__erl_code_gen__succeeded)
#line 238 "erl_code_gen.m"
                    {
#line 7782 "erl_backend.erl_code_gen.c"
                      erl_backend__erl_code_gen__TypeInfo_40_40 = (MR_Word) &erl_backend__erl_code_gen_scalar_common_1[0];
#line 240 "erl_code_gen.m"
                      {
#line 240 "erl_code_gen.m"
                        mercury__list__reverse_2_p_0(erl_backend__erl_code_gen__TypeInfo_40_40, erl_backend__erl_code_gen__Args_18, &erl_backend__erl_code_gen__V_33_33);
                      }
#line 240 "erl_code_gen.m"
                      erl_backend__erl_code_gen__succeeded = ((MR_tag((MR_Word) erl_backend__erl_code_gen__V_33_33)) == (MR_mktag((MR_Integer) 1)));
#line 240 "erl_code_gen.m"
                      if (erl_backend__erl_code_gen__succeeded)
#line 240 "erl_code_gen.m"
                        {
#line 240 "erl_code_gen.m"
                          erl_backend__erl_code_gen__Y_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__erl_code_gen__V_33_33, (MR_Integer) 0)));
#line 240 "erl_code_gen.m"
                          erl_backend__erl_code_gen__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__erl_code_gen__V_33_33, (MR_Integer) 1)));
#line 240 "erl_code_gen.m"
                          erl_backend__erl_code_gen__succeeded = ((MR_tag((MR_Word) erl_backend__erl_code_gen__V_34_34)) == (MR_mktag((MR_Integer) 1)));
#line 240 "erl_code_gen.m"
                          if (erl_backend__erl_code_gen__succeeded)
#line 240 "erl_code_gen.m"
                            {
#line 240 "erl_code_gen.m"
                              erl_backend__erl_code_gen__X_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__erl_code_gen__V_34_34, (MR_Integer) 0)));
#line 240 "erl_code_gen.m"
                              erl_backend__erl_code_gen__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__erl_code_gen__V_34_34, (MR_Integer) 1)));
#line 241 "erl_code_gen.m"
                              {
#line 241 "erl_code_gen.m"
                                hlds__vartypes__lookup_var_type_3_p_0(erl_backend__erl_code_gen__VarTypes_19, erl_backend__erl_code_gen__Y_20, &erl_backend__erl_code_gen__Type_23);
                              }
#line 242 "erl_code_gen.m"
                              {
#line 242 "erl_code_gen.m"
                                erl_backend__erl_code_gen__V_35_35 = check_hlds__type_util__check_dummy_type_2_f_0(erl_backend__erl_code_gen__ModuleInfo_8, erl_backend__erl_code_gen__Type_23);
                              }
#line 242 "erl_code_gen.m"
                              erl_backend__erl_code_gen__succeeded = (erl_backend__erl_code_gen__V_35_35 == (MR_Integer) 1);
#line 238 "erl_code_gen.m"
                              if (erl_backend__erl_code_gen__succeeded)
#line 238 "erl_code_gen.m"
                                {
#line 243 "erl_code_gen.m"
                                  {
#line 243 "erl_code_gen.m"
                                    erl_backend__erl_code_gen__succeeded = check_hlds__type_util__type_definitely_has_no_user_defined_equality_pred_2_p_0(erl_backend__erl_code_gen__ModuleInfo_8, erl_backend__erl_code_gen__Type_23);
                                  }
#line 238 "erl_code_gen.m"
                                  if (erl_backend__erl_code_gen__succeeded)
#line 238 "erl_code_gen.m"
                                    {
#line 261 "erl_code_gen.m"
                                      {
#line 261 "erl_code_gen.m"
                                        erl_backend__erl_code_gen__Info_60 = erl_backend__erl_code_util__erl_gen_info_init_3_f_0(erl_backend__erl_code_gen__ModuleInfo_8, erl_backend__erl_code_gen__PredId_9, erl_backend__erl_code_gen__ProcId_10);
                                      }
#line 262 "erl_code_gen.m"
                                      {
#line 262 "erl_code_gen.m"
                                        erl_backend__erl_code_util__erl_gen_info_get_input_vars_2_p_0(erl_backend__erl_code_gen__Info_60, &erl_backend__erl_code_gen__InputVars_61);
                                      }
#line 270 "erl_code_gen.m"
                                      {
#line 270 "erl_code_gen.m"
                                        erl_backend__erl_code_gen__V_69_69 = erl_backend__elds__terms_from_vars_1_f_0(erl_backend__erl_code_gen__InputVars_61);
                                      }
#line 271 "erl_code_gen.m"
                                      erl_backend__erl_code_gen__V_72_72 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 272 "erl_code_gen.m"
                                      erl_backend__erl_code_gen__V_73_73 = (MR_Integer) 15;
#line 272 "erl_code_gen.m"
                                      {
#line 272 "erl_code_gen.m"
                                        erl_backend__erl_code_gen__V_74_74 = erl_backend__elds__expr_from_var_1_f_0(erl_backend__erl_code_gen__X_21);
                                      }
#line 272 "erl_code_gen.m"
                                      {
#line 272 "erl_code_gen.m"
                                        erl_backend__erl_code_gen__V_75_75 = erl_backend__elds__expr_from_var_1_f_0(erl_backend__erl_code_gen__Y_20);
                                      }
#line 272 "erl_code_gen.m"
                                      {
#line 272 "erl_code_gen.m"
                                        erl_backend__erl_code_gen__CompareXY_64 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 272 "erl_code_gen.m"
                                        MR_hl_field(MR_mktag(3), erl_backend__erl_code_gen__CompareXY_64, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 272 "erl_code_gen.m"
                                        MR_hl_field(MR_mktag(3), erl_backend__erl_code_gen__CompareXY_64, 1) = ((MR_Box) (erl_backend__erl_code_gen__V_73_73));
#line 272 "erl_code_gen.m"
                                        MR_hl_field(MR_mktag(3), erl_backend__erl_code_gen__CompareXY_64, 2) = ((MR_Box) (erl_backend__erl_code_gen__V_74_74));
#line 272 "erl_code_gen.m"
                                        MR_hl_field(MR_mktag(3), erl_backend__erl_code_gen__CompareXY_64, 3) = ((MR_Box) (erl_backend__erl_code_gen__V_75_75));
#line 272 "erl_code_gen.m"
                                      }
#line 273 "erl_code_gen.m"
                                      {
#line 273 "erl_code_gen.m"
                                        erl_backend__erl_code_gen__V_76_76 = erl_backend__elds__elds_true_0_f_0();
                                      }
#line 273 "erl_code_gen.m"
                                      {
#line 273 "erl_code_gen.m"
                                        erl_backend__erl_code_gen__V_78_78 = erl_backend__elds__elds_empty_tuple_0_f_0();
                                      }
#line 273 "erl_code_gen.m"
                                      {
#line 273 "erl_code_gen.m"
                                        erl_backend__erl_code_gen__V_77_77 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 273 "erl_code_gen.m"
                                        MR_hl_field(MR_mktag(2), erl_backend__erl_code_gen__V_77_77, 0) = ((MR_Box) (erl_backend__erl_code_gen__V_78_78));
#line 273 "erl_code_gen.m"
                                      }
#line 273 "erl_code_gen.m"
                                      {
#line 273 "erl_code_gen.m"
                                        erl_backend__erl_code_gen__TrueCase_65 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 273 "erl_code_gen.m"
                                        MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__TrueCase_65, 0) = ((MR_Box) (erl_backend__erl_code_gen__V_76_76));
#line 273 "erl_code_gen.m"
                                        MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__TrueCase_65, 1) = ((MR_Box) (erl_backend__erl_code_gen__V_77_77));
#line 273 "erl_code_gen.m"
                                      }
#line 274 "erl_code_gen.m"
                                      {
#line 274 "erl_code_gen.m"
                                        erl_backend__erl_code_gen__V_79_79 = erl_backend__elds__elds_false_0_f_0();
                                      }
#line 274 "erl_code_gen.m"
                                      {
#line 274 "erl_code_gen.m"
                                        erl_backend__erl_code_gen__V_81_81 = erl_backend__elds__elds_fail_0_f_0();
                                      }
#line 274 "erl_code_gen.m"
                                      {
#line 274 "erl_code_gen.m"
                                        erl_backend__erl_code_gen__V_80_80 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 274 "erl_code_gen.m"
                                        MR_hl_field(MR_mktag(2), erl_backend__erl_code_gen__V_80_80, 0) = ((MR_Box) (erl_backend__erl_code_gen__V_81_81));
#line 274 "erl_code_gen.m"
                                      }
#line 274 "erl_code_gen.m"
                                      {
#line 274 "erl_code_gen.m"
                                        erl_backend__erl_code_gen__FalseCase_66 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 274 "erl_code_gen.m"
                                        MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__FalseCase_66, 0) = ((MR_Box) (erl_backend__erl_code_gen__V_79_79));
#line 274 "erl_code_gen.m"
                                        MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__FalseCase_66, 1) = ((MR_Box) (erl_backend__erl_code_gen__V_80_80));
#line 274 "erl_code_gen.m"
                                      }
#line 271 "erl_code_gen.m"
                                      {
#line 271 "erl_code_gen.m"
                                        erl_backend__erl_code_gen__V_71_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 271 "erl_code_gen.m"
                                        MR_hl_field(MR_mktag(1), erl_backend__erl_code_gen__V_71_71, 0) = ((MR_Box) (erl_backend__erl_code_gen__FalseCase_66));
#line 271 "erl_code_gen.m"
                                        MR_hl_field(MR_mktag(1), erl_backend__erl_code_gen__V_71_71, 1) = ((MR_Box) (erl_backend__erl_code_gen__V_72_72));
#line 271 "erl_code_gen.m"
                                      }
#line 271 "erl_code_gen.m"
                                      {
#line 271 "erl_code_gen.m"
                                        erl_backend__erl_code_gen__V_70_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 271 "erl_code_gen.m"
                                        MR_hl_field(MR_mktag(1), erl_backend__erl_code_gen__V_70_70, 0) = ((MR_Box) (erl_backend__erl_code_gen__TrueCase_65));
#line 271 "erl_code_gen.m"
                                        MR_hl_field(MR_mktag(1), erl_backend__erl_code_gen__V_70_70, 1) = ((MR_Box) (erl_backend__erl_code_gen__V_71_71));
#line 271 "erl_code_gen.m"
                                      }
#line 271 "erl_code_gen.m"
                                      {
#line 271 "erl_code_gen.m"
                                        erl_backend__erl_code_gen__ClauseExpr_63 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 271 "erl_code_gen.m"
                                        MR_hl_field(MR_mktag(3), erl_backend__erl_code_gen__ClauseExpr_63, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 271 "erl_code_gen.m"
                                        MR_hl_field(MR_mktag(3), erl_backend__erl_code_gen__ClauseExpr_63, 1) = ((MR_Box) (erl_backend__erl_code_gen__CompareXY_64));
#line 271 "erl_code_gen.m"
                                        MR_hl_field(MR_mktag(3), erl_backend__erl_code_gen__ClauseExpr_63, 2) = ((MR_Box) (erl_backend__erl_code_gen__V_70_70));
#line 271 "erl_code_gen.m"
                                      }
#line 270 "erl_code_gen.m"
                                      {
#line 270 "erl_code_gen.m"
                                        erl_backend__erl_code_gen__Clause_62 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 270 "erl_code_gen.m"
                                        MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__Clause_62, 0) = ((MR_Box) (erl_backend__erl_code_gen__V_69_69));
#line 270 "erl_code_gen.m"
                                        MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__Clause_62, 1) = ((MR_Box) (erl_backend__erl_code_gen__ClauseExpr_63));
#line 270 "erl_code_gen.m"
                                      }
#line 276 "erl_code_gen.m"
                                      {
#line 276 "erl_code_gen.m"
                                        erl_backend__erl_code_util__erl_gen_info_get_varset_2_p_0(erl_backend__erl_code_gen__Info_60, &erl_backend__erl_code_gen__ProcVarSet_67);
                                      }
#line 277 "erl_code_gen.m"
                                      {
#line 277 "erl_code_gen.m"
                                        erl_backend__erl_code_util__erl_gen_info_get_env_vars_2_p_0(erl_backend__erl_code_gen__Info_60, &erl_backend__erl_code_gen__EnvVarNames_68);
                                      }
#line 278 "erl_code_gen.m"
                                      {
#line 278 "erl_code_gen.m"
                                        erl_backend__erl_code_gen__V_82_82 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 278 "erl_code_gen.m"
                                        MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__V_82_82, 0) = ((MR_Box) (erl_backend__erl_code_gen__PredId_9));
#line 278 "erl_code_gen.m"
                                        MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__V_82_82, 1) = ((MR_Box) (erl_backend__erl_code_gen__ProcId_10));
#line 278 "erl_code_gen.m"
                                      }
#line 279 "erl_code_gen.m"
                                      erl_backend__erl_code_gen__V_83_83 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) erl_backend__erl_code_gen__Clause_62);
#line 278 "erl_code_gen.m"
                                      {
#line 278 "erl_code_gen.m"
                                        erl_backend__erl_code_gen__ProcDefn_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 278 "erl_code_gen.m"
                                        MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__ProcDefn_24, 0) = ((MR_Box) (erl_backend__erl_code_gen__V_82_82));
#line 278 "erl_code_gen.m"
                                        MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__ProcDefn_24, 1) = ((MR_Box) (erl_backend__erl_code_gen__ProcVarSet_67));
#line 278 "erl_code_gen.m"
                                        MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__ProcDefn_24, 2) = ((MR_Box) (erl_backend__erl_code_gen__V_83_83));
#line 278 "erl_code_gen.m"
                                        MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__ProcDefn_24, 3) = ((MR_Box) (erl_backend__erl_code_gen__EnvVarNames_68));
#line 278 "erl_code_gen.m"
                                      }
#line 278 "erl_code_gen.m"
                                      erl_backend__erl_code_gen__succeeded = MR_TRUE;
#line 238 "erl_code_gen.m"
                                    }
#line 238 "erl_code_gen.m"
                                }
#line 240 "erl_code_gen.m"
                            }
#line 240 "erl_code_gen.m"
                        }
#line 238 "erl_code_gen.m"
                    }
#line 238 "erl_code_gen.m"
                }
#line 246 "erl_code_gen.m"
                break;
#line 246 "erl_code_gen.m"
            }
#line 231 "erl_code_gen.m"
            if (erl_backend__erl_code_gen__succeeded)
#line 231 "erl_code_gen.m"
              {
#line 254 "erl_code_gen.m"
                {
#line 254 "erl_code_gen.m"
                  MR_Word base;
#line 254 "erl_code_gen.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 254 "erl_code_gen.m"
                  *erl_backend__erl_code_gen__STATE_VARIABLE_Defns_28 = base;
#line 254 "erl_code_gen.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (erl_backend__erl_code_gen__ProcDefn_24));
#line 254 "erl_code_gen.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (erl_backend__erl_code_gen__STATE_VARIABLE_Defns_0_27));
#line 254 "erl_code_gen.m"
                }
#line 254 "erl_code_gen.m"
                erl_backend__erl_code_gen__succeeded = MR_TRUE;
#line 231 "erl_code_gen.m"
              }
#line 231 "erl_code_gen.m"
          }
#line 231 "erl_code_gen.m"
      }
#line 231 "erl_code_gen.m"
    return erl_backend__erl_code_gen__succeeded;
#line 231 "erl_code_gen.m"
  }
#line 226 "erl_code_gen.m"
}

#line 197 "erl_code_gen.m"
static void MR_CALL 
erl_backend__erl_code_gen__erl_gen_procs_7_p_0(
#line 197 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__HeadVar__1_1,
#line 197 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__ModuleInfo_2,
#line 197 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__PredId_3,
#line 197 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__PredInfo_4,
#line 197 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__ProcTable_5,
#line 197 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__STATE_VARIABLE_Defns_0_6,
#line 197 "erl_code_gen.m"
  MR_Word * erl_backend__erl_code_gen__STATE_VARIABLE_Defns_7)
#line 197 "erl_code_gen.m"
{
#line 201 "erl_code_gen.m"
  while (MR_TRUE)
#line 201 "erl_code_gen.m"
    {
#line 201 "erl_code_gen.m"
      /* tailcall optimized into a loop */
#line 201 "erl_code_gen.m"
      {
#line 201 "erl_code_gen.m"
        MR_bool erl_backend__erl_code_gen__succeeded;

#line 201 "erl_code_gen.m"
        if ((erl_backend__erl_code_gen__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 201 "erl_code_gen.m"
          *erl_backend__erl_code_gen__STATE_VARIABLE_Defns_7 = erl_backend__erl_code_gen__STATE_VARIABLE_Defns_0_6;
#line 201 "erl_code_gen.m"
        else
#line 203 "erl_code_gen.m"
          {
#line 203 "erl_code_gen.m"
            MR_Integer erl_backend__erl_code_gen__ProcId_15 = ((MR_Integer) (MR_hl_field(MR_mktag(1), erl_backend__erl_code_gen__HeadVar__1_1, (MR_Integer) 0)));
#line 203 "erl_code_gen.m"
            MR_Word erl_backend__erl_code_gen__ProcIds_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__erl_code_gen__HeadVar__1_1, (MR_Integer) 1)));
#line 203 "erl_code_gen.m"
            MR_Word erl_backend__erl_code_gen__ProcInfo_22;
#line 203 "erl_code_gen.m"
            MR_Word erl_backend__erl_code_gen__STATE_VARIABLE_Defns_26_26;
#line 204 "erl_code_gen.m"
            MR_Box erl_backend__erl_code_gen__conv0_ProcInfo_22;
#line 210 "erl_code_gen.m"
            MR_Word erl_backend__erl_code_gen__STATE_VARIABLE_Defns_25_25;

#line 204 "erl_code_gen.m"
            {
#line 204 "erl_code_gen.m"
              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0, erl_backend__erl_code_gen__ProcTable_5, erl_backend__erl_code_gen__ProcId_15, &erl_backend__erl_code_gen__conv0_ProcInfo_22);
            }
#line 204 "erl_code_gen.m"
            erl_backend__erl_code_gen__ProcInfo_22 = ((MR_Word) erl_backend__erl_code_gen__conv0_ProcInfo_22);
#line 206 "erl_code_gen.m"
            {
#line 206 "erl_code_gen.m"
              erl_backend__erl_code_gen__succeeded = erl_backend__erl_code_gen__erl_maybe_gen_simple_special_pred_7_p_0(erl_backend__erl_code_gen__ModuleInfo_2, erl_backend__erl_code_gen__PredId_3, erl_backend__erl_code_gen__ProcId_15, erl_backend__erl_code_gen__PredInfo_4, erl_backend__erl_code_gen__ProcInfo_22, erl_backend__erl_code_gen__STATE_VARIABLE_Defns_0_6, &erl_backend__erl_code_gen__STATE_VARIABLE_Defns_25_25);
            }
#line 210 "erl_code_gen.m"
            if (erl_backend__erl_code_gen__succeeded)
#line 210 "erl_code_gen.m"
              erl_backend__erl_code_gen__STATE_VARIABLE_Defns_26_26 = erl_backend__erl_code_gen__STATE_VARIABLE_Defns_25_25;
#line 210 "erl_code_gen.m"
            else
#line 211 "erl_code_gen.m"
              {
#line 211 "erl_code_gen.m"
                erl_backend__erl_code_gen__erl_gen_proc_7_p_0(erl_backend__erl_code_gen__ModuleInfo_2, erl_backend__erl_code_gen__PredId_3, erl_backend__erl_code_gen__ProcId_15, erl_backend__erl_code_gen__PredInfo_4, erl_backend__erl_code_gen__ProcInfo_22, erl_backend__erl_code_gen__STATE_VARIABLE_Defns_0_6, &erl_backend__erl_code_gen__STATE_VARIABLE_Defns_26_26);
              }
#line 213 "erl_code_gen.m"
            /* direct tailcall eliminated */
#line 213 "erl_code_gen.m"
            {
#line 213 "erl_code_gen.m"
              MR_Word erl_backend__erl_code_gen__HeadVar__1__tmp_copy_1 = erl_backend__erl_code_gen__ProcIds_16;
#line 213 "erl_code_gen.m"
              MR_Word erl_backend__erl_code_gen__STATE_VARIABLE_Defns_0__tmp_copy_6 = erl_backend__erl_code_gen__STATE_VARIABLE_Defns_26_26;

#line 213 "erl_code_gen.m"
              erl_backend__erl_code_gen__STATE_VARIABLE_Defns_0_6 = erl_backend__erl_code_gen__STATE_VARIABLE_Defns_0__tmp_copy_6;
#line 213 "erl_code_gen.m"
              erl_backend__erl_code_gen__HeadVar__1_1 = erl_backend__erl_code_gen__HeadVar__1__tmp_copy_1;
#line 213 "erl_code_gen.m"
            }
#line 213 "erl_code_gen.m"
            continue;
#line 203 "erl_code_gen.m"
          }
#line 201 "erl_code_gen.m"
      }
#line 201 "erl_code_gen.m"
      break;
#line 201 "erl_code_gen.m"
    }
#line 197 "erl_code_gen.m"
}

#line 143 "erl_code_gen.m"
static void MR_CALL 
erl_backend__erl_code_gen__erl_gen_preds_2_7_p_0(
#line 143 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__ModuleInfo_8,
#line 143 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__PredIds0_9,
#line 143 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__PredTable_10,
#line 143 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__STATE_VARIABLE_Defns_0_20,
#line 143 "erl_code_gen.m"
  MR_Word * erl_backend__erl_code_gen__STATE_VARIABLE_Defns_21)
#line 143 "erl_code_gen.m"
{
#line 148 "erl_code_gen.m"
  while (MR_TRUE)
#line 148 "erl_code_gen.m"
    {
#line 148 "erl_code_gen.m"
      /* tailcall optimized into a loop */
#line 148 "erl_code_gen.m"
      {
#line 148 "erl_code_gen.m"
        MR_bool erl_backend__erl_code_gen__succeeded;

#line 148 "erl_code_gen.m"
        if ((erl_backend__erl_code_gen__PredIds0_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 176 "erl_code_gen.m"
          *erl_backend__erl_code_gen__STATE_VARIABLE_Defns_21 = erl_backend__erl_code_gen__STATE_VARIABLE_Defns_0_20;
#line 148 "erl_code_gen.m"
        else
#line 148 "erl_code_gen.m"
          {
#line 148 "erl_code_gen.m"
            MR_Word erl_backend__erl_code_gen__PredId_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__erl_code_gen__PredIds0_9, (MR_Integer) 0)));
#line 148 "erl_code_gen.m"
            MR_Word erl_backend__erl_code_gen__PredIds_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__erl_code_gen__PredIds0_9, (MR_Integer) 1)));
#line 148 "erl_code_gen.m"
            MR_Word erl_backend__erl_code_gen__PredInfo_15;
#line 148 "erl_code_gen.m"
            MR_Word erl_backend__erl_code_gen__PredStatus_16;
#line 148 "erl_code_gen.m"
            MR_Word erl_backend__erl_code_gen__STATE_VARIABLE_Defns_28_28;
#line 149 "erl_code_gen.m"
            MR_Box erl_backend__erl_code_gen__conv0_PredInfo_15;

#line 149 "erl_code_gen.m"
            {
#line 149 "erl_code_gen.m"
              mercury__map__lookup_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0, erl_backend__erl_code_gen__PredTable_10, ((MR_Box) (erl_backend__erl_code_gen__PredId_13)), &erl_backend__erl_code_gen__conv0_PredInfo_15);
            }
#line 149 "erl_code_gen.m"
            erl_backend__erl_code_gen__PredInfo_15 = ((MR_Word) erl_backend__erl_code_gen__conv0_PredInfo_15);
#line 150 "erl_code_gen.m"
            {
#line 150 "erl_code_gen.m"
              hlds__hlds_pred__pred_info_get_status_2_p_0(erl_backend__erl_code_gen__PredInfo_15, &erl_backend__erl_code_gen__PredStatus_16);
            }
#line 153 "erl_code_gen.m"
            {
#line 153 "erl_code_gen.m"
              MR_Word erl_backend__erl_code_gen__V_26_26 = (MR_Word) erl_backend__erl_code_gen__PredStatus_16;
#line 153 "erl_code_gen.m"
              MR_Word erl_backend__erl_code_gen__V_17_17;

#line 153 "erl_code_gen.m"
              erl_backend__erl_code_gen__succeeded = ((MR_tag((MR_Word) erl_backend__erl_code_gen__V_26_26)) == (MR_mktag((MR_Integer) 2)));
#line 153 "erl_code_gen.m"
              if (erl_backend__erl_code_gen__succeeded)
#line 153 "erl_code_gen.m"
                erl_backend__erl_code_gen__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(2), erl_backend__erl_code_gen__V_26_26, (MR_Integer) 0)));
#line 153 "erl_code_gen.m"
            }
#line 154 "erl_code_gen.m"
            if (!(erl_backend__erl_code_gen__succeeded))
#line 158 "erl_code_gen.m"
              {
#line 158 "erl_code_gen.m"
                MR_Word erl_backend__erl_code_gen__V_24_24;
#line 158 "erl_code_gen.m"
                MR_Word erl_backend__erl_code_gen__V_25_25;

#line 158 "erl_code_gen.m"
                {
#line 158 "erl_code_gen.m"
                  erl_backend__erl_code_gen__succeeded = hlds__hlds_pred__is_unify_or_compare_pred_1_p_0(erl_backend__erl_code_gen__PredInfo_15);
                }
#line 158 "erl_code_gen.m"
                if (erl_backend__erl_code_gen__succeeded)
#line 158 "erl_code_gen.m"
                  {
#line 160 "erl_code_gen.m"
                    erl_backend__erl_code_gen__V_24_24 = (MR_Word) erl_backend__erl_code_gen__PredStatus_16;
#line 160 "erl_code_gen.m"
                    erl_backend__erl_code_gen__succeeded = ((MR_tag((MR_Word) erl_backend__erl_code_gen__V_24_24)) == (MR_mktag((MR_Integer) 1)));
#line 160 "erl_code_gen.m"
                    if (erl_backend__erl_code_gen__succeeded)
#line 160 "erl_code_gen.m"
                      {
#line 160 "erl_code_gen.m"
                        erl_backend__erl_code_gen__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__erl_code_gen__V_24_24, (MR_Integer) 0)));
#line 160 "erl_code_gen.m"
                        erl_backend__erl_code_gen__succeeded = (erl_backend__erl_code_gen__V_25_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 160 "erl_code_gen.m"
                      }
#line 158 "erl_code_gen.m"
                  }
#line 158 "erl_code_gen.m"
              }
#line 164 "erl_code_gen.m"
            if (erl_backend__erl_code_gen__succeeded)
#line 163 "erl_code_gen.m"
              erl_backend__erl_code_gen__STATE_VARIABLE_Defns_28_28 = erl_backend__erl_code_gen__STATE_VARIABLE_Defns_0_20;
#line 164 "erl_code_gen.m"
            else
#line 171 "erl_code_gen.m"
              {
#line 171 "erl_code_gen.m"
                MR_Word erl_backend__erl_code_gen__ProcIds_19;
#line 167 "erl_code_gen.m"
                MR_Word erl_backend__erl_code_gen__V_27_27 = (MR_Word) erl_backend__erl_code_gen__PredStatus_16;
#line 167 "erl_code_gen.m"
                MR_Word erl_backend__erl_code_gen__V_18_18;

#line 167 "erl_code_gen.m"
                erl_backend__erl_code_gen__succeeded = ((MR_tag((MR_Word) erl_backend__erl_code_gen__V_27_27)) == (MR_mktag((MR_Integer) 1)));
#line 167 "erl_code_gen.m"
                if (erl_backend__erl_code_gen__succeeded)
#line 167 "erl_code_gen.m"
                  {
#line 167 "erl_code_gen.m"
                    erl_backend__erl_code_gen__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__erl_code_gen__V_27_27, (MR_Integer) 0)));
#line 168 "erl_code_gen.m"
                    {
#line 168 "erl_code_gen.m"
                      erl_backend__erl_code_gen__ProcIds_19 = hlds__hlds_pred__pred_info_procids_1_f_0(erl_backend__erl_code_gen__PredInfo_15);
                    }
#line 167 "erl_code_gen.m"
                  }
#line 167 "erl_code_gen.m"
                else
#line 170 "erl_code_gen.m"
                  {
#line 170 "erl_code_gen.m"
                    erl_backend__erl_code_gen__ProcIds_19 = hlds__hlds_pred__pred_info_non_imported_procids_1_f_0(erl_backend__erl_code_gen__PredInfo_15);
                  }
#line 188 "erl_code_gen.m"
                if ((erl_backend__erl_code_gen__ProcIds_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 188 "erl_code_gen.m"
                  erl_backend__erl_code_gen__STATE_VARIABLE_Defns_28_28 = erl_backend__erl_code_gen__STATE_VARIABLE_Defns_0_20;
#line 188 "erl_code_gen.m"
                else
#line 190 "erl_code_gen.m"
                  {
#line 190 "erl_code_gen.m"
                    MR_Word erl_backend__erl_code_gen__ProcTable_46;
#line 190 "erl_code_gen.m"
                    MR_Integer erl_backend__erl_code_gen__ProcId_57;
#line 190 "erl_code_gen.m"
                    MR_Word erl_backend__erl_code_gen__ProcIds_58;
#line 190 "erl_code_gen.m"
                    MR_Word erl_backend__erl_code_gen__ProcInfo_64;
#line 190 "erl_code_gen.m"
                    MR_Word erl_backend__erl_code_gen__STATE_VARIABLE_Defns_26_68;
#line 204 "erl_code_gen.m"
                    MR_Box erl_backend__erl_code_gen__conv1_ProcInfo_64;
#line 210 "erl_code_gen.m"
                    MR_Word erl_backend__erl_code_gen__STATE_VARIABLE_Defns_25_67;

#line 191 "erl_code_gen.m"
                    {
#line 191 "erl_code_gen.m"
                      hlds__passes_aux__write_pred_progress_message_5_p_0((MR_String) "% Generating ELDS code for ", erl_backend__erl_code_gen__PredId_13, erl_backend__erl_code_gen__ModuleInfo_8);
                    }
#line 193 "erl_code_gen.m"
                    {
#line 193 "erl_code_gen.m"
                      hlds__hlds_pred__pred_info_get_proc_table_2_p_0(erl_backend__erl_code_gen__PredInfo_15, &erl_backend__erl_code_gen__ProcTable_46);
                    }
#line 202 "erl_code_gen.m"
                    erl_backend__erl_code_gen__ProcId_57 = ((MR_Integer) (MR_hl_field(MR_mktag(1), erl_backend__erl_code_gen__ProcIds_19, (MR_Integer) 0)));
#line 202 "erl_code_gen.m"
                    erl_backend__erl_code_gen__ProcIds_58 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__erl_code_gen__ProcIds_19, (MR_Integer) 1)));
#line 204 "erl_code_gen.m"
                    {
#line 204 "erl_code_gen.m"
                      mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0, erl_backend__erl_code_gen__ProcTable_46, erl_backend__erl_code_gen__ProcId_57, &erl_backend__erl_code_gen__conv1_ProcInfo_64);
                    }
#line 204 "erl_code_gen.m"
                    erl_backend__erl_code_gen__ProcInfo_64 = ((MR_Word) erl_backend__erl_code_gen__conv1_ProcInfo_64);
#line 206 "erl_code_gen.m"
                    {
#line 206 "erl_code_gen.m"
                      erl_backend__erl_code_gen__succeeded = erl_backend__erl_code_gen__erl_maybe_gen_simple_special_pred_7_p_0(erl_backend__erl_code_gen__ModuleInfo_8, erl_backend__erl_code_gen__PredId_13, erl_backend__erl_code_gen__ProcId_57, erl_backend__erl_code_gen__PredInfo_15, erl_backend__erl_code_gen__ProcInfo_64, erl_backend__erl_code_gen__STATE_VARIABLE_Defns_0_20, &erl_backend__erl_code_gen__STATE_VARIABLE_Defns_25_67);
                    }
#line 210 "erl_code_gen.m"
                    if (erl_backend__erl_code_gen__succeeded)
#line 210 "erl_code_gen.m"
                      erl_backend__erl_code_gen__STATE_VARIABLE_Defns_26_68 = erl_backend__erl_code_gen__STATE_VARIABLE_Defns_25_67;
#line 210 "erl_code_gen.m"
                    else
#line 211 "erl_code_gen.m"
                      {
#line 211 "erl_code_gen.m"
                        erl_backend__erl_code_gen__erl_gen_proc_7_p_0(erl_backend__erl_code_gen__ModuleInfo_8, erl_backend__erl_code_gen__PredId_13, erl_backend__erl_code_gen__ProcId_57, erl_backend__erl_code_gen__PredInfo_15, erl_backend__erl_code_gen__ProcInfo_64, erl_backend__erl_code_gen__STATE_VARIABLE_Defns_0_20, &erl_backend__erl_code_gen__STATE_VARIABLE_Defns_26_68);
                      }
#line 213 "erl_code_gen.m"
                    {
#line 213 "erl_code_gen.m"
                      erl_backend__erl_code_gen__erl_gen_procs_7_p_0(erl_backend__erl_code_gen__ProcIds_58, erl_backend__erl_code_gen__ModuleInfo_8, erl_backend__erl_code_gen__PredId_13, erl_backend__erl_code_gen__PredInfo_15, erl_backend__erl_code_gen__ProcTable_46, erl_backend__erl_code_gen__STATE_VARIABLE_Defns_26_68, &erl_backend__erl_code_gen__STATE_VARIABLE_Defns_28_28);
                    }
#line 190 "erl_code_gen.m"
                  }
#line 171 "erl_code_gen.m"
              }
#line 174 "erl_code_gen.m"
            /* direct tailcall eliminated */
#line 174 "erl_code_gen.m"
            {
#line 174 "erl_code_gen.m"
              MR_Word erl_backend__erl_code_gen__PredIds0__tmp_copy_9 = erl_backend__erl_code_gen__PredIds_14;
#line 174 "erl_code_gen.m"
              MR_Word erl_backend__erl_code_gen__STATE_VARIABLE_Defns_0__tmp_copy_20 = erl_backend__erl_code_gen__STATE_VARIABLE_Defns_28_28;

#line 174 "erl_code_gen.m"
              erl_backend__erl_code_gen__STATE_VARIABLE_Defns_0_20 = erl_backend__erl_code_gen__STATE_VARIABLE_Defns_0__tmp_copy_20;
#line 174 "erl_code_gen.m"
              erl_backend__erl_code_gen__PredIds0_9 = erl_backend__erl_code_gen__PredIds0__tmp_copy_9;
#line 174 "erl_code_gen.m"
            }
#line 174 "erl_code_gen.m"
            continue;
#line 148 "erl_code_gen.m"
          }
#line 148 "erl_code_gen.m"
      }
#line 148 "erl_code_gen.m"
      break;
#line 148 "erl_code_gen.m"
    }
#line 143 "erl_code_gen.m"
}

#line 1574 "erl_code_gen.m"
static void MR_CALL 
erl_backend__erl_code_gen__erl_code_gen_4_p_0_1(
#line 1574 "erl_code_gen.m"
  MR_Box erl_backend__erl_code_gen__closure_arg,
#line 1574 "erl_code_gen.m"
  MR_Box erl_backend__erl_code_gen__wrapper_arg_1,
#line 1574 "erl_code_gen.m"
  MR_Box * erl_backend__erl_code_gen__wrapper_arg_2)
#line 1574 "erl_code_gen.m"
{
#line 1574 "erl_code_gen.m"
  {
#line 1574 "erl_code_gen.m"
    MR_Box erl_backend__erl_code_gen__closure = erl_backend__erl_code_gen__closure_arg;
#line 1574 "erl_code_gen.m"
    MR_Word erl_backend__erl_code_gen__conv0_ForeignExportDefn_6;

#line 1574 "erl_code_gen.m"
    {
#line 1574 "erl_code_gen.m"
      erl_backend__erl_code_gen__erl_gen_foreign_export_defn_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__closure, (MR_Integer) 3))), ((MR_Word) erl_backend__erl_code_gen__wrapper_arg_1), &erl_backend__erl_code_gen__conv0_ForeignExportDefn_6);
    }
#line 1574 "erl_code_gen.m"
    *erl_backend__erl_code_gen__wrapper_arg_2 = ((MR_Box) (erl_backend__erl_code_gen__conv0_ForeignExportDefn_6));
#line 1574 "erl_code_gen.m"
  }
#line 1574 "erl_code_gen.m"
}

#line 42 "erl_code_gen.m"
void MR_CALL 
erl_backend__erl_code_gen__erl_code_gen_4_p_0(
#line 42 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__ModuleInfo_5,
#line 42 "erl_code_gen.m"
  MR_Word * erl_backend__erl_code_gen__ELDS_6)
#line 42 "erl_code_gen.m"
{
#line 87 "erl_code_gen.m"
  {
#line 87 "erl_code_gen.m"
    MR_bool erl_backend__erl_code_gen__succeeded;
#line 87 "erl_code_gen.m"
    MR_Word erl_backend__erl_code_gen__ModuleName_8;
#line 87 "erl_code_gen.m"
    MR_Word erl_backend__erl_code_gen__ProcDefns_9;
#line 87 "erl_code_gen.m"
    MR_Word erl_backend__erl_code_gen__Imports_10;
#line 87 "erl_code_gen.m"
    MR_Word erl_backend__erl_code_gen__ForeignDecls_11;
#line 87 "erl_code_gen.m"
    MR_Word erl_backend__erl_code_gen__ForeignBodies_12;
#line 87 "erl_code_gen.m"
    MR_Word erl_backend__erl_code_gen__PragmaExports_13;
#line 87 "erl_code_gen.m"
    MR_Word erl_backend__erl_code_gen__ForeignExportDefns_14;
#line 87 "erl_code_gen.m"
    MR_Word erl_backend__erl_code_gen__InitPredProcs_16;
#line 87 "erl_code_gen.m"
    MR_Word erl_backend__erl_code_gen__FinalPredProcs_17;
#line 87 "erl_code_gen.m"
    MR_Word erl_backend__erl_code_gen__PredTable_27;
#line 87 "erl_code_gen.m"
    MR_Word erl_backend__erl_code_gen__PredIds_28;
#line 87 "erl_code_gen.m"
    MR_Word erl_backend__erl_code_gen__RevPredDefns_29;
#line 87 "erl_code_gen.m"
    MR_Word erl_backend__erl_code_gen__AllImports0_37;
#line 87 "erl_code_gen.m"
    MR_Word erl_backend__erl_code_gen__ThisModule_38;
#line 87 "erl_code_gen.m"
    MR_Word erl_backend__erl_code_gen__Globals_47;
#line 87 "erl_code_gen.m"
    MR_Word erl_backend__erl_code_gen__BackendForeignLanguages_48;
#line 87 "erl_code_gen.m"
    MR_Word erl_backend__erl_code_gen__ForeignDeclCodeCord_49;
#line 87 "erl_code_gen.m"
    MR_Word erl_backend__erl_code_gen__ForeignBodyCodeCord_50;
#line 87 "erl_code_gen.m"
    MR_Word erl_backend__erl_code_gen__PragmaExportsCord_51;
#line 87 "erl_code_gen.m"
    MR_Word erl_backend__erl_code_gen__V_61_61;
#line 87 "erl_code_gen.m"
    MR_Word erl_backend__erl_code_gen__V_63_63;
#line 87 "erl_code_gen.m"
    MR_Word erl_backend__erl_code_gen__V_65_65;
#line 87 "erl_code_gen.m"
    MR_Word erl_backend__erl_code_gen__V_72_72;
#line 117 "erl_code_gen.m"
    MR_Word erl_backend__erl_code_gen__V_55_55;
#line 117 "erl_code_gen.m"
    MR_Word erl_backend__erl_code_gen__V_56_56;
#line 125 "erl_code_gen.m"
    MR_Word erl_backend__erl_code_gen___OtherForeignDeclCodes_52;
#line 127 "erl_code_gen.m"
    MR_Word erl_backend__erl_code_gen___OtherForeignBodyCodes_53;
#line 129 "erl_code_gen.m"
    MR_Word erl_backend__erl_code_gen___OtherForeignExports_54;

#line 88 "erl_code_gen.m"
    {
#line 88 "erl_code_gen.m"
      hlds__hlds_module__module_info_get_name_2_p_0(erl_backend__erl_code_gen__ModuleInfo_5, &erl_backend__erl_code_gen__ModuleName_8);
    }
#line 138 "erl_code_gen.m"
    {
#line 138 "erl_code_gen.m"
      hlds__hlds_module__module_info_get_preds_2_p_0(erl_backend__erl_code_gen__ModuleInfo_5, &erl_backend__erl_code_gen__PredTable_27);
    }
#line 139 "erl_code_gen.m"
    {
#line 139 "erl_code_gen.m"
      mercury__map__keys_2_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0, erl_backend__erl_code_gen__PredTable_27, &erl_backend__erl_code_gen__PredIds_28);
    }
#line 140 "erl_code_gen.m"
    {
#line 140 "erl_code_gen.m"
      erl_backend__erl_code_gen__erl_gen_preds_2_7_p_0(erl_backend__erl_code_gen__ModuleInfo_5, erl_backend__erl_code_gen__PredIds_28, erl_backend__erl_code_gen__PredTable_27, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &erl_backend__erl_code_gen__RevPredDefns_29);
    }
#line 141 "erl_code_gen.m"
    {
#line 141 "erl_code_gen.m"
      erl_backend__erl_code_gen__ProcDefns_9 = mercury__list__reverse_1_f_0((MR_Word) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_defn_0, erl_backend__erl_code_gen__RevPredDefns_29);
    }
#line 104 "erl_code_gen.m"
    {
#line 104 "erl_code_gen.m"
      hlds__hlds_module__module_info_get_all_deps_2_p_0(erl_backend__erl_code_gen__ModuleInfo_5, &erl_backend__erl_code_gen__AllImports0_37);
    }
#line 106 "erl_code_gen.m"
    {
#line 106 "erl_code_gen.m"
      hlds__hlds_module__module_info_get_name_2_p_0(erl_backend__erl_code_gen__ModuleInfo_5, &erl_backend__erl_code_gen__ThisModule_38);
    }
#line 107 "erl_code_gen.m"
    {
#line 107 "erl_code_gen.m"
      erl_backend__erl_code_gen__Imports_10 = mercury__set__delete_2_f_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, erl_backend__erl_code_gen__AllImports0_37, ((MR_Box) (erl_backend__erl_code_gen__ThisModule_38)));
    }
#line 115 "erl_code_gen.m"
    {
#line 115 "erl_code_gen.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(erl_backend__erl_code_gen__ModuleInfo_5, &erl_backend__erl_code_gen__Globals_47);
    }
#line 116 "erl_code_gen.m"
    {
#line 116 "erl_code_gen.m"
      libs__globals__get_backend_foreign_languages_2_p_0(erl_backend__erl_code_gen__Globals_47, &erl_backend__erl_code_gen__BackendForeignLanguages_48);
    }
#line 117 "erl_code_gen.m"
    erl_backend__erl_code_gen__succeeded = ((MR_tag((MR_Word) erl_backend__erl_code_gen__BackendForeignLanguages_48)) == (MR_mktag((MR_Integer) 1)));
#line 117 "erl_code_gen.m"
    if (erl_backend__erl_code_gen__succeeded)
#line 117 "erl_code_gen.m"
      {
#line 117 "erl_code_gen.m"
        erl_backend__erl_code_gen__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__erl_code_gen__BackendForeignLanguages_48, (MR_Integer) 0)));
#line 117 "erl_code_gen.m"
        erl_backend__erl_code_gen__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__erl_code_gen__BackendForeignLanguages_48, (MR_Integer) 1)));
#line 117 "erl_code_gen.m"
        erl_backend__erl_code_gen__succeeded = (erl_backend__erl_code_gen__V_55_55 == (MR_Integer) 3);
#line 117 "erl_code_gen.m"
        if (erl_backend__erl_code_gen__succeeded)
#line 117 "erl_code_gen.m"
          erl_backend__erl_code_gen__succeeded = (erl_backend__erl_code_gen__V_56_56 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 117 "erl_code_gen.m"
      }
#line 119 "erl_code_gen.m"
    if (erl_backend__erl_code_gen__succeeded)
#line 118 "erl_code_gen.m"
      {
#line 118 "erl_code_gen.m"
      }
#line 119 "erl_code_gen.m"
    else
#line 120 "erl_code_gen.m"
      {
#line 120 "erl_code_gen.m"
        {
#line 120 "erl_code_gen.m"
          mercury__require__unexpected_3_p_0((MR_String) "erl_backend.erl_code_gen", (MR_String) "predicate \140erl_backend.erl_code_gen.filter_erlang_foreigns\'/6", (MR_String) "foreign language other than Erlang");
#line 120 "erl_code_gen.m"
          return;
        }
#line 120 "erl_code_gen.m"
      }
#line 122 "erl_code_gen.m"
    {
#line 122 "erl_code_gen.m"
      hlds__hlds_module__module_info_get_foreign_decl_codes_2_p_0(erl_backend__erl_code_gen__ModuleInfo_5, &erl_backend__erl_code_gen__ForeignDeclCodeCord_49);
    }
#line 123 "erl_code_gen.m"
    {
#line 123 "erl_code_gen.m"
      hlds__hlds_module__module_info_get_foreign_body_codes_2_p_0(erl_backend__erl_code_gen__ModuleInfo_5, &erl_backend__erl_code_gen__ForeignBodyCodeCord_50);
    }
#line 124 "erl_code_gen.m"
    {
#line 124 "erl_code_gen.m"
      hlds__hlds_module__module_info_get_pragma_exported_procs_2_p_0(erl_backend__erl_code_gen__ModuleInfo_5, &erl_backend__erl_code_gen__PragmaExportsCord_51);
    }
#line 125 "erl_code_gen.m"
    {
#line 125 "erl_code_gen.m"
      erl_backend__erl_code_gen__V_61_61 = mercury__cord__list_1_f_0((MR_Word) &parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_foreign_decl_code_0, erl_backend__erl_code_gen__ForeignDeclCodeCord_49);
    }
#line 125 "erl_code_gen.m"
    {
#line 125 "erl_code_gen.m"
      backend_libs__foreign__filter_decls_4_p_0((MR_Integer) 3, erl_backend__erl_code_gen__V_61_61, &erl_backend__erl_code_gen__ForeignDecls_11, &erl_backend__erl_code_gen___OtherForeignDeclCodes_52);
    }
#line 127 "erl_code_gen.m"
    {
#line 127 "erl_code_gen.m"
      erl_backend__erl_code_gen__V_63_63 = mercury__cord__list_1_f_0((MR_Word) &parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_foreign_body_code_0, erl_backend__erl_code_gen__ForeignBodyCodeCord_50);
    }
#line 127 "erl_code_gen.m"
    {
#line 127 "erl_code_gen.m"
      backend_libs__foreign__filter_bodys_4_p_0((MR_Integer) 3, erl_backend__erl_code_gen__V_63_63, &erl_backend__erl_code_gen__ForeignBodies_12, &erl_backend__erl_code_gen___OtherForeignBodyCodes_53);
    }
#line 129 "erl_code_gen.m"
    {
#line 129 "erl_code_gen.m"
      erl_backend__erl_code_gen__V_65_65 = mercury__cord__list_1_f_0((MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_pragma_exported_proc_0, erl_backend__erl_code_gen__PragmaExportsCord_51);
    }
#line 129 "erl_code_gen.m"
    {
#line 129 "erl_code_gen.m"
      backend_libs__foreign__filter_exports_4_p_0((MR_Integer) 3, erl_backend__erl_code_gen__V_65_65, &erl_backend__erl_code_gen__PragmaExports_13, &erl_backend__erl_code_gen___OtherForeignExports_54);
    }
#line 1574 "erl_code_gen.m"
    {
#line 1574 "erl_code_gen.m"
      erl_backend__erl_code_gen__V_72_72 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1574 "erl_code_gen.m"
      MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__V_72_72, 0) = ((MR_Box) (&erl_backend__erl_code_gen_scalar_common_2[0]));
#line 1574 "erl_code_gen.m"
      MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__V_72_72, 1) = ((MR_Box) (erl_backend__erl_code_gen__erl_code_gen_4_p_0_1));
#line 1574 "erl_code_gen.m"
      MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__V_72_72, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1574 "erl_code_gen.m"
      MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__V_72_72, 3) = ((MR_Box) (erl_backend__erl_code_gen__ProcDefns_9));
#line 1574 "erl_code_gen.m"
    }
#line 1574 "erl_code_gen.m"
    {
#line 1574 "erl_code_gen.m"
      mercury__list__map_3_p_0((MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_pragma_exported_proc_0, (MR_Word) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_foreign_export_defn_0, erl_backend__erl_code_gen__V_72_72, erl_backend__erl_code_gen__PragmaExports_13, &erl_backend__erl_code_gen__ForeignExportDefns_14);
    }
#line 96 "erl_code_gen.m"
    {
#line 96 "erl_code_gen.m"
      hlds__hlds_module__module_info_user_init_pred_procs_2_p_0(erl_backend__erl_code_gen__ModuleInfo_5, &erl_backend__erl_code_gen__InitPredProcs_16);
    }
#line 97 "erl_code_gen.m"
    {
#line 97 "erl_code_gen.m"
      hlds__hlds_module__module_info_user_final_pred_procs_2_p_0(erl_backend__erl_code_gen__ModuleInfo_5, &erl_backend__erl_code_gen__FinalPredProcs_17);
    }
#line 98 "erl_code_gen.m"
    {
#line 98 "erl_code_gen.m"
      MR_Word base;
#line 98 "erl_code_gen.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
#line 98 "erl_code_gen.m"
      *erl_backend__erl_code_gen__ELDS_6 = base;
#line 98 "erl_code_gen.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (erl_backend__erl_code_gen__ModuleName_8));
#line 98 "erl_code_gen.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (erl_backend__erl_code_gen__Imports_10));
#line 98 "erl_code_gen.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (erl_backend__erl_code_gen__ForeignDecls_11));
#line 98 "erl_code_gen.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (erl_backend__erl_code_gen__ForeignBodies_12));
#line 98 "erl_code_gen.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (erl_backend__erl_code_gen__ProcDefns_9));
#line 98 "erl_code_gen.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (erl_backend__erl_code_gen__ForeignExportDefns_14));
#line 98 "erl_code_gen.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 98 "erl_code_gen.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (erl_backend__erl_code_gen__InitPredProcs_16));
#line 98 "erl_code_gen.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (erl_backend__erl_code_gen__FinalPredProcs_17));
#line 98 "erl_code_gen.m"
    }
#line 87 "erl_code_gen.m"
  }
#line 42 "erl_code_gen.m"
}

void mercury__erl_backend__erl_code_gen__init(void)
{
}

void mercury__erl_backend__erl_code_gen__init_type_tables(void)
{
}

void mercury__erl_backend__erl_code_gen__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module erl_backend.erl_code_gen. */
