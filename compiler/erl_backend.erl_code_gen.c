/*
** Automatically generated from `erl_code_gen.m'
** by the Mercury compiler,
** version rotd-2015-11-30
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
#include "transform_hlds.mih"
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



#line 753 "erl_code_gen.m"
struct erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_95_49_48_95_112_95_48_95_101_110_118_0_s {
#line 753 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__CasesList_13;
#line 758 "erl_code_gen.m"
  MR_bool erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__succeeded;
#line 758 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__TypeCtorInfo_85_85;
#line 821 "erl_code_gen.m"
  jmp_buf erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__commit_0;
#line 821 "erl_code_gen.m"
  MR_String erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__String_32;
#line 821 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__MainConsId_33;
#line 821 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__OtherConsIds_34;
#line 821 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__V_57_57;
#line 823 "erl_code_gen.m"
  MR_Box erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__conv1_V_57_57;
#line 827 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__V_58_58;
#line 827 "erl_code_gen.m"
  MR_Box erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__conv2_V_58_58;
#line 753 "erl_code_gen.m"
};


#line 181 "erl_backend.erl_code_gen.c"
static const MR_FA_PseudoTypeInfo_Struct1 erl_backend__erl_code_gen__list__pti_list_1__plain_erl_backend__elds__type_ctor_info_elds_defn_0;

#line 184 "erl_backend.erl_code_gen.c"
static const MR_FA_PseudoTypeInfo_Struct1 erl_backend__erl_code_gen__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_cons_id_0;

#line 187 "erl_backend.erl_code_gen.c"
static const MR_FA_TypeInfo_Struct1 erl_backend__erl_code_gen__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 190 "erl_backend.erl_code_gen.c"
static const MR_FA_PseudoTypeInfo_Struct1 erl_backend__erl_code_gen__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 193 "erl_backend.erl_code_gen.c"
static const MR_FA_PseudoTypeInfo_Struct1 erl_backend__erl_code_gen__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 196 "erl_backend.erl_code_gen.c"
static const MR_FA_PseudoTypeInfo_Struct1 erl_backend__erl_code_gen__maybe__pti_maybe_1__plain_erl_backend__elds__type_ctor_info_elds_expr_0;

#line 1430 "erl_code_gen.m"
static void MR_CALL 
erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_100_105_115_106_117_110_99_116_95_95_91_52_93_95_48_8_p_0(
#line 1430 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__HeadVar__1_1,
#line 1430 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__CodeModel_2,
#line 1430 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__HeadVar__3_3,
#line 1430 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__HeadVar__5_5,
#line 1430 "erl_code_gen.m"
  MR_Word * erl_backend__erl_code_gen__Statement_6,
#line 1430 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__STATE_VARIABLE_Info_0_7,
#line 1430 "erl_code_gen.m"
  MR_Word * erl_backend__erl_code_gen__STATE_VARIABLE_Info_8);

#line 962 "erl_code_gen.m"
static void MR_CALL 
erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_100_105_115_106_95_95_91_52_93_95_48_8_p_0_1(
#line 962 "erl_code_gen.m"
  MR_Box erl_backend__erl_code_gen__closure_arg,
#line 962 "erl_code_gen.m"
  MR_Box erl_backend__erl_code_gen__wrapper_arg_1,
#line 962 "erl_code_gen.m"
  MR_Box * erl_backend__erl_code_gen__wrapper_arg_2);

#line 1389 "erl_code_gen.m"
static void MR_CALL 
erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_100_105_115_106_95_95_91_52_93_95_48_8_p_0(
#line 1389 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__HeadVar__1_1,
#line 1389 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__CodeModel_2,
#line 1389 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__HeadVar__3_3,
#line 1389 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__HeadVar__5_5,
#line 1389 "erl_code_gen.m"
  MR_Word * erl_backend__erl_code_gen__Statement_6,
#line 1389 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__STATE_VARIABLE_Info_0_7,
#line 1389 "erl_code_gen.m"
  MR_Word * erl_backend__erl_code_gen__STATE_VARIABLE_Info_8);

#line 1276 "erl_code_gen.m"
static void MR_CALL 
erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_99_111_110_106_95_50_95_95_91_52_93_95_48_8_p_0(
#line 1276 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__HeadVar__1_1,
#line 1276 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__CodeModel_2,
#line 1276 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__HeadVar__3_3,
#line 1276 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__MaybeSuccessExpr_5,
#line 1276 "erl_code_gen.m"
  MR_Word * erl_backend__erl_code_gen__Statement_6,
#line 1276 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__STATE_VARIABLE_Info_0_7,
#line 1276 "erl_code_gen.m"
  MR_Word * erl_backend__erl_code_gen__STATE_VARIABLE_Info_8);

#line 1253 "erl_code_gen.m"
static void MR_CALL 
erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_99_111_110_106_95_95_91_53_93_95_48_9_p_0(
#line 1253 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__Goals_10,
#line 1253 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__CodeModel_11,
#line 1253 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__Detism_12,
#line 1253 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__InstMap_13,
#line 1253 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__MaybeSuccessExpr_15,
#line 1253 "erl_code_gen.m"
  MR_Word * erl_backend__erl_code_gen__Statement_16,
#line 1253 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__STATE_VARIABLE_Info_0_21,
#line 1253 "erl_code_gen.m"
  MR_Word * erl_backend__erl_code_gen__STATE_VARIABLE_Info_22);

#line 1186 "erl_code_gen.m"
static void MR_CALL 
erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_110_101_103_97_116_105_111_110_95_95_91_52_93_95_48_8_p_0(
#line 1186 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__Cond_9,
#line 1186 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__CodeModel_10,
#line 1186 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__InstMap_11,
#line 1186 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__MaybeSuccessExpr_13,
#line 1186 "erl_code_gen.m"
  MR_Word * erl_backend__erl_code_gen__Statement_14,
#line 1186 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__STATE_VARIABLE_Info_0_24,
#line 1186 "erl_code_gen.m"
  MR_Word * erl_backend__erl_code_gen__STATE_VARIABLE_Info_25);

#line 1031 "erl_code_gen.m"
static void MR_CALL 
erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_105_116_101_95_95_91_54_93_95_48_10_p_0(
#line 1031 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__CodeModel_11,
#line 1031 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__InstMap0_12,
#line 1031 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__Cond_13,
#line 1031 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__Then_14,
#line 1031 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__Else_15,
#line 1031 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__MaybeSuccessExpr0_17,
#line 1031 "erl_code_gen.m"
  MR_Word * erl_backend__erl_code_gen__Statement_18,
#line 1031 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__STATE_VARIABLE_Info_0_57,
#line 1031 "erl_code_gen.m"
  MR_Word * erl_backend__erl_code_gen__STATE_VARIABLE_Info_58);

#line 846 "erl_code_gen.m"
static void MR_CALL 
erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_10_p_0_10(
#line 846 "erl_code_gen.m"
  MR_Box erl_backend__erl_code_gen__closure_arg,
#line 846 "erl_code_gen.m"
  MR_Box erl_backend__erl_code_gen__wrapper_arg_1,
#line 846 "erl_code_gen.m"
  MR_Box * erl_backend__erl_code_gen__wrapper_arg_2,
#line 846 "erl_code_gen.m"
  MR_Box erl_backend__erl_code_gen__wrapper_arg_3,
#line 846 "erl_code_gen.m"
  MR_Box * erl_backend__erl_code_gen__wrapper_arg_4);

#line 841 "erl_code_gen.m"
static void MR_CALL 
erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_10_p_0_9(
#line 841 "erl_code_gen.m"
  MR_Box erl_backend__erl_code_gen__closure_arg,
#line 841 "erl_code_gen.m"
  MR_Box erl_backend__erl_code_gen__wrapper_arg_1,
#line 841 "erl_code_gen.m"
  MR_Box * erl_backend__erl_code_gen__wrapper_arg_2,
#line 841 "erl_code_gen.m"
  MR_Box erl_backend__erl_code_gen__wrapper_arg_3,
#line 841 "erl_code_gen.m"
  MR_Box * erl_backend__erl_code_gen__wrapper_arg_4);

#line 788 "erl_code_gen.m"
static MR_Box MR_CALL 
erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_10_p_0_1(
#line 788 "erl_code_gen.m"
  MR_Box erl_backend__erl_code_gen__closure_arg,
#line 788 "erl_code_gen.m"
  MR_Box erl_backend__erl_code_gen__wrapper_arg_1);

#line 821 "erl_code_gen.m"
static void MR_CALL 
erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_10_p_0_2(
#line 821 "erl_code_gen.m"
  void * erl_backend__erl_code_gen__env_ptr_arg);

#line 823 "erl_code_gen.m"
static void MR_CALL 
erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_10_p_0_4(
#line 823 "erl_code_gen.m"
  void * erl_backend__erl_code_gen__env_ptr_arg);

#line 821 "erl_code_gen.m"
static void MR_CALL 
erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_10_p_0_5(
#line 821 "erl_code_gen.m"
  void * erl_backend__erl_code_gen__env_ptr_arg);

#line 827 "erl_code_gen.m"
static void MR_CALL 
erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_10_p_0_7(
#line 827 "erl_code_gen.m"
  void * erl_backend__erl_code_gen__env_ptr_arg);

#line 827 "erl_code_gen.m"
static void MR_CALL 
erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_10_p_0_6(
#line 827 "erl_code_gen.m"
  void * erl_backend__erl_code_gen__env_ptr_arg);

#line 821 "erl_code_gen.m"
static void MR_CALL 
erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_10_p_0_3(
#line 821 "erl_code_gen.m"
  void * erl_backend__erl_code_gen__env_ptr_arg);

#line 821 "erl_code_gen.m"
static void MR_CALL 
erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_10_p_0_8(
#line 821 "erl_code_gen.m"
  void * erl_backend__erl_code_gen__env_ptr_arg);

#line 753 "erl_code_gen.m"
static void MR_CALL 
erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_10_p_0(
#line 753 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__Var_11,
#line 753 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__CanFail_12,
#line 753 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__CasesList_13,
#line 753 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__CodeModel_14,
#line 753 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__InstMap0_15,
#line 753 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__MaybeSuccessExpr0_17,
#line 753 "erl_code_gen.m"
  MR_Word * erl_backend__erl_code_gen__Statement_18,
#line 753 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__STATE_VARIABLE_Info_0_46,
#line 753 "erl_code_gen.m"
  MR_Word * erl_backend__erl_code_gen__STATE_VARIABLE_Info_47);

#line 592 "erl_code_gen.m"
static void MR_CALL 
erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_99_111_109_109_105_116_95_112_105_101_99_101_115_95_95_91_51_93_95_48_8_p_0(
#line 592 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__Goal_9,
#line 592 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__InstMap_10,
#line 592 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__DoRenaming_12,
#line 592 "erl_code_gen.m"
  MR_Word * erl_backend__erl_code_gen__GoalStatement_13,
#line 592 "erl_code_gen.m"
  MR_Word * erl_backend__erl_code_gen__PackedNonLocals_14,
#line 592 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__STATE_VARIABLE_Info_0_22,
#line 592 "erl_code_gen.m"
  MR_Word * erl_backend__erl_code_gen__STATE_VARIABLE_Info_23);

#line 504 "erl_code_gen.m"
static void MR_CALL 
erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_99_111_109_109_105_116_95_95_91_53_93_95_48_9_p_0(
#line 504 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__Goal_10,
#line 504 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__CodeModel_11,
#line 504 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__ScopeDetism_12,
#line 504 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__InstMap_13,
#line 504 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__MaybeSuccessExpr_15,
#line 504 "erl_code_gen.m"
  MR_Word * erl_backend__erl_code_gen__Statement_16,
#line 504 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__STATE_VARIABLE_Info_0_29,
#line 504 "erl_code_gen.m"
  MR_Word * erl_backend__erl_code_gen__STATE_VARIABLE_Info_30);

#line 933 "erl_code_gen.m"
static MR_bool MR_CALL 
erl_backend__erl_code_gen__IntroducedFrom__pred__erl_gen_case_on_atom__933__1_2_p_0(
#line 933 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__OtherConsIds_17,
#line 933 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__HeadVar__2_30);

#line 875 "erl_code_gen.m"
static MR_bool MR_CALL 
erl_backend__erl_code_gen__IntroducedFrom__pred__erl_gen_case__875__1_2_p_0(
#line 875 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__OtherConsIds_19,
#line 875 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__HeadVar__2_35);

#line 788 "erl_code_gen.m"
static MR_Word MR_CALL 
erl_backend__erl_code_gen__IntroducedFrom__func__erl_gen_switch__788__1_1_f_0(
#line 788 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__LambdaHeadVar__1_49);

#line 693 "erl_code_gen.m"
static MR_bool MR_CALL 
erl_backend__erl_code_gen__IntroducedFrom__pred__erl_gen_goal_expr__693__1_2_p_0(
#line 693 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__CodeModel_11,
#line 693 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__CallCodeModel_57);

#line 1605 "erl_code_gen.m"
static MR_bool MR_CALL 
erl_backend__erl_code_gen__search_elds_defn_3_p_0(
#line 1605 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__HeadVar__1_1,
#line 1605 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__PredProcId_6,
#line 1605 "erl_code_gen.m"
  MR_Word * erl_backend__erl_code_gen__Defn_7);

#line 1584 "erl_code_gen.m"
static void MR_CALL 
erl_backend__erl_code_gen__erl_gen_foreign_export_defn_3_p_0(
#line 1584 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__ProcDefns_4,
#line 1584 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__PragmaExport_5,
#line 1584 "erl_code_gen.m"
  MR_Word * erl_backend__erl_code_gen__ForeignExportDefn_6);

#line 1015 "erl_code_gen.m"
static void MR_CALL 
erl_backend__erl_code_gen__ground_var_in_instmap_3_p_0(
#line 1015 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__Var_4,
#line 1015 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__STATE_VARIABLE_InstMap_0_6,
#line 1015 "erl_code_gen.m"
  MR_Word * erl_backend__erl_code_gen__STATE_VARIABLE_InstMap_7);

#line 1010 "erl_code_gen.m"
static MR_bool MR_CALL 
erl_backend__erl_code_gen__non_dummy_var_3_f_0(
#line 1010 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__ModuleInfo_5,
#line 1010 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__Var_6,
#line 1010 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__Type_7,
#line 1010 "erl_code_gen.m"
  MR_Word * erl_backend__erl_code_gen__Var_4);

#line 989 "erl_code_gen.m"
static MR_bool MR_CALL 
erl_backend__erl_code_gen__maybe_create_closure_for_success_expr_8_p_0_1(
#line 989 "erl_code_gen.m"
  MR_Box erl_backend__erl_code_gen__closure_arg,
#line 989 "erl_code_gen.m"
  MR_Box erl_backend__erl_code_gen__wrapper_arg_1,
#line 989 "erl_code_gen.m"
  MR_Box erl_backend__erl_code_gen__wrapper_arg_2,
#line 989 "erl_code_gen.m"
  MR_Box * erl_backend__erl_code_gen__wrapper_arg_3);

#line 971 "erl_code_gen.m"
static void MR_CALL 
erl_backend__erl_code_gen__maybe_create_closure_for_success_expr_8_p_0(
#line 971 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__NonLocals_9,
#line 971 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__MaybeSuccessExpr0_10,
#line 971 "erl_code_gen.m"
  MR_Word * erl_backend__erl_code_gen__MaybeMakeClosure_11,
#line 971 "erl_code_gen.m"
  MR_Word * erl_backend__erl_code_gen__MaybeSuccessExpr_12,
#line 971 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__InstMap0_13,
#line 971 "erl_code_gen.m"
  MR_Word * erl_backend__erl_code_gen__InstMap_14,
#line 971 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__STATE_VARIABLE_Info_0_28,
#line 971 "erl_code_gen.m"
  MR_Word * erl_backend__erl_code_gen__STATE_VARIABLE_Info_29);

#line 962 "erl_code_gen.m"
static void MR_CALL 
erl_backend__erl_code_gen__union_bound_nonlocals_in_goals_4_p_0_1(
#line 962 "erl_code_gen.m"
  MR_Box erl_backend__erl_code_gen__closure_arg,
#line 962 "erl_code_gen.m"
  MR_Box erl_backend__erl_code_gen__wrapper_arg_1,
#line 962 "erl_code_gen.m"
  MR_Box * erl_backend__erl_code_gen__wrapper_arg_2);

#line 958 "erl_code_gen.m"
static void MR_CALL 
erl_backend__erl_code_gen__union_bound_nonlocals_in_goals_4_p_0(
#line 958 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__Info_5,
#line 958 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__InstMap_6,
#line 958 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__Goals_7,
#line 958 "erl_code_gen.m"
  MR_Word * erl_backend__erl_code_gen__NonLocalsUnion_8);

#line 933 "erl_code_gen.m"
static MR_bool MR_CALL 
erl_backend__erl_code_gen__erl_gen_case_on_atom_8_p_0_1(
#line 933 "erl_code_gen.m"
  MR_Box erl_backend__erl_code_gen__closure_arg);

#line 926 "erl_code_gen.m"
static void MR_CALL 
erl_backend__erl_code_gen__erl_gen_case_on_atom_8_p_0(
#line 926 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__CodeModel_9,
#line 926 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__InstMap_10,
#line 926 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__MustBindNonLocals_11,
#line 926 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__MaybeSuccessExpr_12,
#line 926 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__Case_13,
#line 926 "erl_code_gen.m"
  MR_Word * erl_backend__erl_code_gen__ELDSCase_14,
#line 926 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__STATE_VARIABLE_Info_0_24,
#line 926 "erl_code_gen.m"
  MR_Word * erl_backend__erl_code_gen__STATE_VARIABLE_Info_25);

#line 875 "erl_code_gen.m"
static MR_bool MR_CALL 
erl_backend__erl_code_gen__erl_gen_case_9_p_0_1(
#line 875 "erl_code_gen.m"
  MR_Box erl_backend__erl_code_gen__closure_arg);

#line 867 "erl_code_gen.m"
static void MR_CALL 
erl_backend__erl_code_gen__erl_gen_case_9_p_0(
#line 867 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__Type_10,
#line 867 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__CodeModel_11,
#line 867 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__InstMap_12,
#line 867 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__MustBindNonLocals_13,
#line 867 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__MaybeSuccessExpr_14,
#line 867 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__Case_15,
#line 867 "erl_code_gen.m"
  MR_Word * erl_backend__erl_code_gen__ELDSCase_16,
#line 867 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__STATE_VARIABLE_Info_0_29,
#line 867 "erl_code_gen.m"
  MR_Word * erl_backend__erl_code_gen__STATE_VARIABLE_Info_30);

#line 693 "erl_code_gen.m"
static MR_bool MR_CALL 
erl_backend__erl_code_gen__erl_gen_goal_expr_9_p_0_1(
#line 693 "erl_code_gen.m"
  MR_Box erl_backend__erl_code_gen__closure_arg);

#line 625 "erl_code_gen.m"
static void MR_CALL 
erl_backend__erl_code_gen__erl_gen_goal_expr_9_p_0(
#line 625 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__GoalExpr_10,
#line 625 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__CodeModel_11,
#line 625 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__Detism_12,
#line 625 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__InstMap_13,
#line 625 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__Context_14,
#line 625 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__MaybeSuccessExpr_15,
#line 625 "erl_code_gen.m"
  MR_Word * erl_backend__erl_code_gen__Statement_16,
#line 625 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__STATE_VARIABLE_Info_0_88,
#line 625 "erl_code_gen.m"
  MR_Word * erl_backend__erl_code_gen__STATE_VARIABLE_Info_89);

#line 447 "erl_code_gen.m"
static void MR_CALL 
erl_backend__erl_code_gen__erl_gen_goal_7_p_0(
#line 447 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__CodeModel_8,
#line 447 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__InstMap_9,
#line 447 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__Goal_10,
#line 447 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__MaybeSuccessExpr0_11,
#line 447 "erl_code_gen.m"
  MR_Word * erl_backend__erl_code_gen__Code_12,
#line 447 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__STATE_VARIABLE_Info_0_20,
#line 447 "erl_code_gen.m"
  MR_Word * erl_backend__erl_code_gen__STATE_VARIABLE_Info_21);

#line 331 "erl_code_gen.m"
static void MR_CALL 
erl_backend__erl_code_gen__erl_gen_proc_7_p_0(
#line 331 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__ModuleInfo_8,
#line 331 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__PredId_9,
#line 331 "erl_code_gen.m"
  MR_Integer erl_backend__erl_code_gen__ProcId_10,
#line 331 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__PredInfo_11,
#line 331 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__ProcInfo_12,
#line 331 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__STATE_VARIABLE_Defns_0_18,
#line 331 "erl_code_gen.m"
  MR_Word * erl_backend__erl_code_gen__STATE_VARIABLE_Defns_19);

#line 288 "erl_code_gen.m"
static void MR_CALL 
erl_backend__erl_code_gen__erl_gen_simple_compare_6_p_0(
#line 288 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__ModuleInfo_7,
#line 288 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__PredId_8,
#line 288 "erl_code_gen.m"
  MR_Integer erl_backend__erl_code_gen__ProcId_9,
#line 288 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__X_10,
#line 288 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__Y_11,
#line 288 "erl_code_gen.m"
  MR_Word * erl_backend__erl_code_gen__ProcDefn_12);

#line 233 "erl_code_gen.m"
static MR_bool MR_CALL 
erl_backend__erl_code_gen__erl_maybe_gen_simple_special_pred_7_p_0(
#line 233 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__ModuleInfo_8,
#line 233 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__PredId_9,
#line 233 "erl_code_gen.m"
  MR_Integer erl_backend__erl_code_gen__ProcId_10,
#line 233 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__PredInfo_11,
#line 233 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__ProcInfo_12,
#line 233 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__STATE_VARIABLE_Defns_0_27,
#line 233 "erl_code_gen.m"
  MR_Word * erl_backend__erl_code_gen__STATE_VARIABLE_Defns_28);

#line 204 "erl_code_gen.m"
static void MR_CALL 
erl_backend__erl_code_gen__erl_gen_procs_7_p_0(
#line 204 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__HeadVar__1_1,
#line 204 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__ModuleInfo_2,
#line 204 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__PredId_3,
#line 204 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__PredInfo_4,
#line 204 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__ProcTable_5,
#line 204 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__STATE_VARIABLE_Defns_0_6,
#line 204 "erl_code_gen.m"
  MR_Word * erl_backend__erl_code_gen__STATE_VARIABLE_Defns_7);

#line 150 "erl_code_gen.m"
static void MR_CALL 
erl_backend__erl_code_gen__erl_gen_preds_2_7_p_0(
#line 150 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__ModuleInfo_8,
#line 150 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__PredIds0_9,
#line 150 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__PredTable_10,
#line 150 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__STATE_VARIABLE_Defns_0_20,
#line 150 "erl_code_gen.m"
  MR_Word * erl_backend__erl_code_gen__STATE_VARIABLE_Defns_21);

#line 1581 "erl_code_gen.m"
static void MR_CALL 
erl_backend__erl_code_gen__erl_code_gen_4_p_0_1(
#line 1581 "erl_code_gen.m"
  MR_Box erl_backend__erl_code_gen__closure_arg,
#line 1581 "erl_code_gen.m"
  MR_Box erl_backend__erl_code_gen__wrapper_arg_1,
#line 1581 "erl_code_gen.m"
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



#line 943 "erl_backend.erl_code_gen.c"
static const MR_FA_PseudoTypeInfo_Struct1 erl_backend__erl_code_gen__list__pti_list_1__plain_erl_backend__elds__type_ctor_info_elds_defn_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_defn_0
  }
};

#line 951 "erl_backend.erl_code_gen.c"
static const MR_FA_PseudoTypeInfo_Struct1 erl_backend__erl_code_gen__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_cons_id_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0
  }
};

#line 959 "erl_backend.erl_code_gen.c"
static const MR_FA_TypeInfo_Struct1 erl_backend__erl_code_gen__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 967 "erl_backend.erl_code_gen.c"
static const MR_FA_PseudoTypeInfo_Struct1 erl_backend__erl_code_gen__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1,
  {
    (MR_PseudoTypeInfo) &erl_backend__erl_code_gen__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 975 "erl_backend.erl_code_gen.c"
static const MR_FA_PseudoTypeInfo_Struct1 erl_backend__erl_code_gen__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 983 "erl_backend.erl_code_gen.c"
static const MR_FA_PseudoTypeInfo_Struct1 erl_backend__erl_code_gen__maybe__pti_maybe_1__plain_erl_backend__elds__type_ctor_info_elds_expr_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_PseudoTypeInfo) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_expr_0
  }
};

#line 1430 "erl_code_gen.m"
static void MR_CALL 
erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_100_105_115_106_117_110_99_116_95_95_91_52_93_95_48_8_p_0(
#line 1430 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__HeadVar__1_1,
#line 1430 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__CodeModel_2,
#line 1430 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__HeadVar__3_3,
#line 1430 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__HeadVar__5_5,
#line 1430 "erl_code_gen.m"
  MR_Word * erl_backend__erl_code_gen__Statement_6,
#line 1430 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__STATE_VARIABLE_Info_0_7,
#line 1430 "erl_code_gen.m"
  MR_Word * erl_backend__erl_code_gen__STATE_VARIABLE_Info_8)
#line 1430 "erl_code_gen.m"
{
#line 1435 "erl_code_gen.m"
  {
#line 1435 "erl_code_gen.m"
    MR_bool erl_backend__erl_code_gen__succeeded;

#line 1435 "erl_code_gen.m"
    if ((erl_backend__erl_code_gen__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1435 "erl_code_gen.m"
      {
#line 1440 "erl_code_gen.m"
#line 1440 "erl_code_gen.m"
        switch (erl_backend__erl_code_gen__CodeModel_2) {
#line 1440 "erl_code_gen.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1440 "erl_code_gen.m"
          case (MR_Integer) 0:
#line 1438 "erl_code_gen.m"
            {
#line 1439 "erl_code_gen.m"
              {
#line 1439 "erl_code_gen.m"
                mercury__require__unexpected_3_p_0((MR_String) "erl_backend.erl_code_gen", (MR_String) "predicate \140erl_backend.erl_code_gen.erl_gen_disjunct\'/8", (MR_String) "\140fail\' has determinism \140det\'");
#line 1439 "erl_code_gen.m"
                return;
              }
#line 1438 "erl_code_gen.m"
            }
#line 1440 "erl_code_gen.m"
            break;
#line 1440 "erl_code_gen.m"
          case (MR_Integer) 2:
#line 1440 "erl_code_gen.m"
          case (MR_Integer) 1:
#line 1443 "erl_code_gen.m"
            {
#line 1443 "erl_code_gen.m"
              MR_Word erl_backend__erl_code_gen__V_17_17;

#line 1444 "erl_code_gen.m"
              {
#line 1444 "erl_code_gen.m"
                erl_backend__erl_code_gen__V_17_17 = erl_backend__elds__elds_fail_0_f_0();
              }
#line 1444 "erl_code_gen.m"
              {
#line 1444 "erl_code_gen.m"
                MR_Word base;
#line 1444 "erl_code_gen.m"
                base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1444 "erl_code_gen.m"
                *erl_backend__erl_code_gen__Statement_6 = base;
#line 1444 "erl_code_gen.m"
                MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (erl_backend__erl_code_gen__V_17_17));
#line 1444 "erl_code_gen.m"
              }
#line 1443 "erl_code_gen.m"
            }
#line 1440 "erl_code_gen.m"
            break;
#line 1440 "erl_code_gen.m"
        }
#line 1435 "erl_code_gen.m"
        *erl_backend__erl_code_gen__STATE_VARIABLE_Info_8 = erl_backend__erl_code_gen__STATE_VARIABLE_Info_0_7;
#line 1435 "erl_code_gen.m"
      }
#line 1435 "erl_code_gen.m"
    else
#line 1448 "erl_code_gen.m"
      {
#line 1448 "erl_code_gen.m"
        MR_Word erl_backend__erl_code_gen__First_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__erl_code_gen__HeadVar__1_1, (MR_Integer) 0)));
#line 1448 "erl_code_gen.m"
        MR_Word erl_backend__erl_code_gen__Rest_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__erl_code_gen__HeadVar__1_1, (MR_Integer) 1)));

#line 1540 "erl_code_gen.m"
#line 1540 "erl_code_gen.m"
        switch (erl_backend__erl_code_gen__CodeModel_2) {
#line 1540 "erl_code_gen.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1540 "erl_code_gen.m"
          case (MR_Integer) 0:
#line 1540 "erl_code_gen.m"
          case (MR_Integer) 1:
#line 1452 "erl_code_gen.m"
            {
#line 1452 "erl_code_gen.m"
              MR_Word erl_backend__erl_code_gen__FirstGoalInfo_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__First_21, (MR_Integer) 1)));
#line 1452 "erl_code_gen.m"
              MR_Word erl_backend__erl_code_gen__FirstCodeModel_31;
#line 1452 "erl_code_gen.m"
              MR_Word erl_backend__erl_code_gen__FirstDeterminism_32;
#line 1477 "erl_code_gen.m"
              MR_Word erl_backend__erl_code_gen__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__First_21, (MR_Integer) 0)));

#line 1478 "erl_code_gen.m"
              {
#line 1478 "erl_code_gen.m"
                erl_backend__erl_code_gen__FirstCodeModel_31 = hlds__code_model__goal_info_get_code_model_1_f_0(erl_backend__erl_code_gen__FirstGoalInfo_30);
              }
#line 1479 "erl_code_gen.m"
              {
#line 1479 "erl_code_gen.m"
                erl_backend__erl_code_gen__FirstDeterminism_32 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(erl_backend__erl_code_gen__FirstGoalInfo_30);
              }
#line 1486 "erl_code_gen.m"
#line 1486 "erl_code_gen.m"
              switch (erl_backend__erl_code_gen__FirstCodeModel_31) {
#line 1486 "erl_code_gen.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 1486 "erl_code_gen.m"
                case (MR_Integer) 0:
#line 1481 "erl_code_gen.m"
                  {
#line 1481 "erl_code_gen.m"
                    MR_Word erl_backend__erl_code_gen__MaybeSuccessExprForFirst_33;
#line 1481 "erl_code_gen.m"
                    MR_Word erl_backend__erl_code_gen__STATE_VARIABLE_Info_72_72;

#line 1482 "erl_code_gen.m"
                    {
#line 1482 "erl_code_gen.m"
                      erl_backend__erl_code_util__erl_fix_success_expr_6_p_0(erl_backend__erl_code_gen__HeadVar__3_3, erl_backend__erl_code_gen__First_21, erl_backend__erl_code_gen__HeadVar__5_5, &erl_backend__erl_code_gen__MaybeSuccessExprForFirst_33, erl_backend__erl_code_gen__STATE_VARIABLE_Info_0_7, &erl_backend__erl_code_gen__STATE_VARIABLE_Info_72_72);
                    }
#line 1484 "erl_code_gen.m"
                    {
#line 1484 "erl_code_gen.m"
                      erl_backend__erl_code_gen__erl_gen_goal_7_p_0((MR_Integer) 0, erl_backend__erl_code_gen__HeadVar__3_3, erl_backend__erl_code_gen__First_21, erl_backend__erl_code_gen__MaybeSuccessExprForFirst_33, erl_backend__erl_code_gen__Statement_6, erl_backend__erl_code_gen__STATE_VARIABLE_Info_72_72, erl_backend__erl_code_gen__STATE_VARIABLE_Info_8);
                    }
#line 1481 "erl_code_gen.m"
                  }
#line 1486 "erl_code_gen.m"
                  break;
#line 1486 "erl_code_gen.m"
                case (MR_Integer) 2:
#line 1535 "erl_code_gen.m"
                  {
#line 1537 "erl_code_gen.m"
                    {
#line 1537 "erl_code_gen.m"
                      mercury__require__unexpected_3_p_0((MR_String) "erl_backend.erl_code_gen", (MR_String) "predicate \140erl_backend.erl_code_gen.erl_gen_disjunct\'/8", (MR_String) "model_non disj in model_det disjunction");
#line 1537 "erl_code_gen.m"
                      return;
                    }
#line 1535 "erl_code_gen.m"
                  }
#line 1486 "erl_code_gen.m"
                  break;
#line 1486 "erl_code_gen.m"
                case (MR_Integer) 1:
#line 1487 "erl_code_gen.m"
                  {
#line 1487 "erl_code_gen.m"
                    MR_Word erl_backend__erl_code_gen__FirstVarsSet_34;
#line 1487 "erl_code_gen.m"
                    MR_Word erl_backend__erl_code_gen__FirstVars_35;
#line 1487 "erl_code_gen.m"
                    MR_Word erl_backend__erl_code_gen__FirstVarsTerm_36;
#line 1487 "erl_code_gen.m"
                    MR_Word erl_backend__erl_code_gen__FirstStatement0_37;
#line 1487 "erl_code_gen.m"
                    MR_Word erl_backend__erl_code_gen__RestStatement_38;
#line 1487 "erl_code_gen.m"
                    MR_Word erl_backend__erl_code_gen__Subn_39;
#line 1487 "erl_code_gen.m"
                    MR_Word erl_backend__erl_code_gen__FirstStatement_40;
#line 1487 "erl_code_gen.m"
                    MR_Word erl_backend__erl_code_gen__V_57_57;
#line 1487 "erl_code_gen.m"
                    MR_Word erl_backend__erl_code_gen__V_59_59;
#line 1487 "erl_code_gen.m"
                    MR_Word erl_backend__erl_code_gen__STATE_VARIABLE_Info_60_60;
#line 1487 "erl_code_gen.m"
                    MR_Word erl_backend__erl_code_gen__V_61_61;
#line 1487 "erl_code_gen.m"
                    MR_Word erl_backend__erl_code_gen__STATE_VARIABLE_Info_62_62;
#line 1487 "erl_code_gen.m"
                    MR_Word erl_backend__erl_code_gen__STATE_VARIABLE_Info_63_63;

#line 1489 "erl_code_gen.m"
                    {
#line 1489 "erl_code_gen.m"
                      erl_backend__erl_code_util__erl_bound_nonlocals_in_goal_4_p_0(erl_backend__erl_code_gen__STATE_VARIABLE_Info_0_7, erl_backend__erl_code_gen__HeadVar__3_3, erl_backend__erl_code_gen__First_21, &erl_backend__erl_code_gen__FirstVarsSet_34);
                    }
#line 1490 "erl_code_gen.m"
                    {
#line 1490 "erl_code_gen.m"
                      erl_backend__erl_code_gen__FirstVars_35 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, erl_backend__erl_code_gen__FirstVarsSet_34);
                    }
#line 1491 "erl_code_gen.m"
                    {
#line 1491 "erl_code_gen.m"
                      erl_backend__erl_code_gen__V_57_57 = erl_backend__elds__exprs_from_vars_1_f_0(erl_backend__erl_code_gen__FirstVars_35);
                    }
#line 1491 "erl_code_gen.m"
                    {
#line 1491 "erl_code_gen.m"
                      erl_backend__erl_code_gen__FirstVarsTerm_36 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1491 "erl_code_gen.m"
                      MR_hl_field(MR_mktag(3), erl_backend__erl_code_gen__FirstVarsTerm_36, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 1491 "erl_code_gen.m"
                      MR_hl_field(MR_mktag(3), erl_backend__erl_code_gen__FirstVarsTerm_36, 1) = ((MR_Box) (erl_backend__erl_code_gen__V_57_57));
#line 1491 "erl_code_gen.m"
                    }
#line 1496 "erl_code_gen.m"
                    {
#line 1496 "erl_code_gen.m"
                      erl_backend__erl_code_gen__V_61_61 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1496 "erl_code_gen.m"
                      MR_hl_field(MR_mktag(2), erl_backend__erl_code_gen__V_61_61, 0) = ((MR_Box) (erl_backend__erl_code_gen__FirstVarsTerm_36));
#line 1496 "erl_code_gen.m"
                    }
#line 1496 "erl_code_gen.m"
                    {
#line 1496 "erl_code_gen.m"
                      erl_backend__erl_code_gen__V_59_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1496 "erl_code_gen.m"
                      MR_hl_field(MR_mktag(1), erl_backend__erl_code_gen__V_59_59, 0) = ((MR_Box) (erl_backend__erl_code_gen__V_61_61));
#line 1496 "erl_code_gen.m"
                    }
#line 1495 "erl_code_gen.m"
                    {
#line 1495 "erl_code_gen.m"
                      erl_backend__erl_code_gen__erl_gen_goal_7_p_0((MR_Integer) 1, erl_backend__erl_code_gen__HeadVar__3_3, erl_backend__erl_code_gen__First_21, erl_backend__erl_code_gen__V_59_59, &erl_backend__erl_code_gen__FirstStatement0_37, erl_backend__erl_code_gen__STATE_VARIABLE_Info_0_7, &erl_backend__erl_code_gen__STATE_VARIABLE_Info_60_60);
                    }
#line 1499 "erl_code_gen.m"
                    {
#line 1499 "erl_code_gen.m"
                      erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_100_105_115_106_117_110_99_116_95_95_91_52_93_95_48_8_p_0(erl_backend__erl_code_gen__Rest_22, erl_backend__erl_code_gen__CodeModel_2, erl_backend__erl_code_gen__HeadVar__3_3, erl_backend__erl_code_gen__HeadVar__5_5, &erl_backend__erl_code_gen__RestStatement_38, erl_backend__erl_code_gen__STATE_VARIABLE_Info_60_60, &erl_backend__erl_code_gen__STATE_VARIABLE_Info_62_62);
                    }
#line 1505 "erl_code_gen.m"
                    {
#line 1505 "erl_code_gen.m"
                      erl_backend__erl_code_util__erl_create_renaming_4_p_0(erl_backend__erl_code_gen__FirstVars_35, &erl_backend__erl_code_gen__Subn_39, erl_backend__erl_code_gen__STATE_VARIABLE_Info_62_62, &erl_backend__erl_code_gen__STATE_VARIABLE_Info_63_63);
                    }
#line 1506 "erl_code_gen.m"
                    {
#line 1506 "erl_code_gen.m"
                      erl_backend__erl_code_util__erl_rename_vars_in_expr_3_p_0(erl_backend__erl_code_gen__Subn_39, erl_backend__erl_code_gen__FirstStatement0_37, &erl_backend__erl_code_gen__FirstStatement_40);
                    }
#line 1508 "erl_code_gen.m"
                    erl_backend__erl_code_gen__succeeded = (erl_backend__erl_code_gen__FirstDeterminism_32 == (MR_Integer) 7);
#line 1516 "erl_code_gen.m"
                    if (erl_backend__erl_code_gen__succeeded)
#line 1515 "erl_code_gen.m"
                      {
#line 1515 "erl_code_gen.m"
                        {
#line 1515 "erl_code_gen.m"
                          *erl_backend__erl_code_gen__Statement_6 = erl_backend__elds__join_exprs_2_f_0(erl_backend__erl_code_gen__FirstStatement0_37, erl_backend__erl_code_gen__RestStatement_38);
                        }
#line 1515 "erl_code_gen.m"
                        *erl_backend__erl_code_gen__STATE_VARIABLE_Info_8 = erl_backend__erl_code_gen__STATE_VARIABLE_Info_63_63;
#line 1515 "erl_code_gen.m"
                      }
#line 1516 "erl_code_gen.m"
                    else
#line 1518 "erl_code_gen.m"
                      {
#line 1518 "erl_code_gen.m"
                        MR_Word erl_backend__erl_code_gen__MaybeSuccessExprForFirst_75;
#line 1520 "erl_code_gen.m"
                        MR_Word erl_backend__erl_code_gen__V_65_65;
#line 1520 "erl_code_gen.m"
                        MR_Word erl_backend__erl_code_gen__V_66_66;
#line 1520 "erl_code_gen.m"
                        MR_Word erl_backend__erl_code_gen__V_85_85;
#line 1520 "erl_code_gen.m"
                        MR_Word erl_backend__erl_code_gen__V_86_86;

#line 1517 "erl_code_gen.m"
                        {
#line 1517 "erl_code_gen.m"
                          erl_backend__erl_code_util__erl_fix_success_expr_6_p_0(erl_backend__erl_code_gen__HeadVar__3_3, erl_backend__erl_code_gen__First_21, erl_backend__erl_code_gen__HeadVar__5_5, &erl_backend__erl_code_gen__MaybeSuccessExprForFirst_75, erl_backend__erl_code_gen__STATE_VARIABLE_Info_63_63, erl_backend__erl_code_gen__STATE_VARIABLE_Info_8);
                        }
#line 1520 "erl_code_gen.m"
                        erl_backend__erl_code_gen__succeeded = ((MR_tag((MR_Word) erl_backend__erl_code_gen__MaybeSuccessExprForFirst_75)) == (MR_mktag((MR_Integer) 1)));
#line 1520 "erl_code_gen.m"
                        if (erl_backend__erl_code_gen__succeeded)
#line 1520 "erl_code_gen.m"
                          {
#line 1520 "erl_code_gen.m"
                            erl_backend__erl_code_gen__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__erl_code_gen__MaybeSuccessExprForFirst_75, (MR_Integer) 0)));
#line 1520 "erl_code_gen.m"
                            erl_backend__erl_code_gen__succeeded = ((MR_tag((MR_Word) erl_backend__erl_code_gen__V_65_65)) == (MR_mktag((MR_Integer) 2)));
#line 1520 "erl_code_gen.m"
                            if (erl_backend__erl_code_gen__succeeded)
#line 1520 "erl_code_gen.m"
                              {
#line 1520 "erl_code_gen.m"
                                erl_backend__erl_code_gen__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(2), erl_backend__erl_code_gen__V_65_65, (MR_Integer) 0)));
#line 1520 "erl_code_gen.m"
                                {
#line 1520 "erl_code_gen.m"
                                  erl_backend__erl_code_gen__succeeded = erl_backend__elds____Unify____elds_term_0_0(erl_backend__erl_code_gen__FirstVarsTerm_36, erl_backend__erl_code_gen__V_85_85);
                                }
#line 1520 "erl_code_gen.m"
                                if (erl_backend__erl_code_gen__succeeded)
#line 1520 "erl_code_gen.m"
                                  {
#line 1521 "erl_code_gen.m"
                                    erl_backend__erl_code_gen__succeeded = ((MR_tag((MR_Word) erl_backend__erl_code_gen__RestStatement_38)) == (MR_mktag((MR_Integer) 2)));
#line 1521 "erl_code_gen.m"
                                    if (erl_backend__erl_code_gen__succeeded)
#line 1521 "erl_code_gen.m"
                                      {
#line 1521 "erl_code_gen.m"
                                        erl_backend__erl_code_gen__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(2), erl_backend__erl_code_gen__RestStatement_38, (MR_Integer) 0)));
#line 1521 "erl_code_gen.m"
                                        {
#line 1521 "erl_code_gen.m"
                                          erl_backend__erl_code_gen__V_86_86 = erl_backend__elds__elds_fail_0_f_0();
                                        }
#line 1521 "erl_code_gen.m"
                                        {
#line 1521 "erl_code_gen.m"
                                          erl_backend__erl_code_gen__succeeded = erl_backend__elds____Unify____elds_term_0_0(erl_backend__erl_code_gen__V_66_66, erl_backend__erl_code_gen__V_86_86);
                                        }
#line 1521 "erl_code_gen.m"
                                      }
#line 1520 "erl_code_gen.m"
                                  }
#line 1520 "erl_code_gen.m"
                              }
#line 1520 "erl_code_gen.m"
                          }
#line 1525 "erl_code_gen.m"
                        if (erl_backend__erl_code_gen__succeeded)
#line 1524 "erl_code_gen.m"
                          *erl_backend__erl_code_gen__Statement_6 = erl_backend__erl_code_gen__FirstStatement_40;
#line 1525 "erl_code_gen.m"
                        else
#line 1527 "erl_code_gen.m"
                          {
#line 1527 "erl_code_gen.m"
                            MR_Word erl_backend__erl_code_gen__Statement0_41;
#line 1527 "erl_code_gen.m"
                            MR_Word erl_backend__erl_code_gen__SucceedCase_42;
#line 1527 "erl_code_gen.m"
                            MR_Word erl_backend__erl_code_gen__FailCase_43;
#line 1527 "erl_code_gen.m"
                            MR_Word erl_backend__erl_code_gen__V_67_67;
#line 1527 "erl_code_gen.m"
                            MR_Word erl_backend__erl_code_gen__V_68_68;
#line 1527 "erl_code_gen.m"
                            MR_Word erl_backend__erl_code_gen__V_70_70;
#line 1527 "erl_code_gen.m"
                            MR_Word erl_backend__erl_code_gen__V_71_71;

#line 1529 "erl_code_gen.m"
                            {
#line 1529 "erl_code_gen.m"
                              erl_backend__erl_code_gen__V_70_70 = erl_backend__elds__expr_or_void_1_f_0(erl_backend__erl_code_gen__MaybeSuccessExprForFirst_75);
                            }
#line 1528 "erl_code_gen.m"
                            {
#line 1528 "erl_code_gen.m"
                              erl_backend__erl_code_gen__SucceedCase_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1528 "erl_code_gen.m"
                              MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__SucceedCase_42, 0) = ((MR_Box) (erl_backend__erl_code_gen__FirstVarsTerm_36));
#line 1528 "erl_code_gen.m"
                              MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__SucceedCase_42, 1) = ((MR_Box) (erl_backend__erl_code_gen__V_70_70));
#line 1528 "erl_code_gen.m"
                            }
#line 1530 "erl_code_gen.m"
                            {
#line 1530 "erl_code_gen.m"
                              erl_backend__erl_code_gen__V_71_71 = erl_backend__elds__elds_fail_0_f_0();
                            }
#line 1530 "erl_code_gen.m"
                            {
#line 1530 "erl_code_gen.m"
                              erl_backend__erl_code_gen__FailCase_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1530 "erl_code_gen.m"
                              MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__FailCase_43, 0) = ((MR_Box) (erl_backend__erl_code_gen__V_71_71));
#line 1530 "erl_code_gen.m"
                              MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__FailCase_43, 1) = ((MR_Box) (erl_backend__erl_code_gen__RestStatement_38));
#line 1530 "erl_code_gen.m"
                            }
#line 1527 "erl_code_gen.m"
                            {
#line 1527 "erl_code_gen.m"
                              erl_backend__erl_code_gen__V_68_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1527 "erl_code_gen.m"
                              MR_hl_field(MR_mktag(1), erl_backend__erl_code_gen__V_68_68, 0) = ((MR_Box) (erl_backend__erl_code_gen__FailCase_43));
#line 1527 "erl_code_gen.m"
                              MR_hl_field(MR_mktag(1), erl_backend__erl_code_gen__V_68_68, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1527 "erl_code_gen.m"
                            }
#line 1527 "erl_code_gen.m"
                            {
#line 1527 "erl_code_gen.m"
                              erl_backend__erl_code_gen__V_67_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1527 "erl_code_gen.m"
                              MR_hl_field(MR_mktag(1), erl_backend__erl_code_gen__V_67_67, 0) = ((MR_Box) (erl_backend__erl_code_gen__SucceedCase_42));
#line 1527 "erl_code_gen.m"
                              MR_hl_field(MR_mktag(1), erl_backend__erl_code_gen__V_67_67, 1) = ((MR_Box) (erl_backend__erl_code_gen__V_68_68));
#line 1527 "erl_code_gen.m"
                            }
#line 1526 "erl_code_gen.m"
                            {
#line 1526 "erl_code_gen.m"
                              erl_backend__erl_code_gen__Statement0_41 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1526 "erl_code_gen.m"
                              MR_hl_field(MR_mktag(3), erl_backend__erl_code_gen__Statement0_41, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 1526 "erl_code_gen.m"
                              MR_hl_field(MR_mktag(3), erl_backend__erl_code_gen__Statement0_41, 1) = ((MR_Box) (erl_backend__erl_code_gen__FirstStatement_40));
#line 1526 "erl_code_gen.m"
                              MR_hl_field(MR_mktag(3), erl_backend__erl_code_gen__Statement0_41, 2) = ((MR_Box) (erl_backend__erl_code_gen__V_67_67));
#line 1526 "erl_code_gen.m"
                            }
#line 1531 "erl_code_gen.m"
                            {
#line 1531 "erl_code_gen.m"
                              erl_backend__erl_code_util__maybe_simplify_nested_cases_2_p_0(erl_backend__erl_code_gen__Statement0_41, erl_backend__erl_code_gen__Statement_6);
                            }
#line 1527 "erl_code_gen.m"
                          }
#line 1518 "erl_code_gen.m"
                      }
#line 1487 "erl_code_gen.m"
                  }
#line 1486 "erl_code_gen.m"
                  break;
#line 1486 "erl_code_gen.m"
              }
#line 1452 "erl_code_gen.m"
            }
#line 1540 "erl_code_gen.m"
            break;
#line 1540 "erl_code_gen.m"
          case (MR_Integer) 2:
#line 1541 "erl_code_gen.m"
            {
#line 1541 "erl_code_gen.m"
              MR_Word erl_backend__erl_code_gen__Subst_44;
#line 1541 "erl_code_gen.m"
              MR_Word erl_backend__erl_code_gen__RestStatements_45;
#line 1541 "erl_code_gen.m"
              MR_Word erl_backend__erl_code_gen__STATE_VARIABLE_Info_48_48;
#line 1541 "erl_code_gen.m"
              MR_Word erl_backend__erl_code_gen__STATE_VARIABLE_Info_50_50;
#line 1541 "erl_code_gen.m"
              MR_Word erl_backend__erl_code_gen__STATE_VARIABLE_Info_51_51;
#line 1541 "erl_code_gen.m"
              MR_Word erl_backend__erl_code_gen__MaybeSuccessExprForFirst_78;
#line 1541 "erl_code_gen.m"
              MR_Word erl_backend__erl_code_gen__FirstVarsSet_79;
#line 1541 "erl_code_gen.m"
              MR_Word erl_backend__erl_code_gen__FirstVars_80;
#line 1541 "erl_code_gen.m"
              MR_Word erl_backend__erl_code_gen__FirstStatement0_81;
#line 1541 "erl_code_gen.m"
              MR_Word erl_backend__erl_code_gen__FirstStatement_82;

#line 1554 "erl_code_gen.m"
              {
#line 1554 "erl_code_gen.m"
                erl_backend__erl_code_util__erl_fix_success_expr_6_p_0(erl_backend__erl_code_gen__HeadVar__3_3, erl_backend__erl_code_gen__First_21, erl_backend__erl_code_gen__HeadVar__5_5, &erl_backend__erl_code_gen__MaybeSuccessExprForFirst_78, erl_backend__erl_code_gen__STATE_VARIABLE_Info_0_7, &erl_backend__erl_code_gen__STATE_VARIABLE_Info_48_48);
              }
#line 1556 "erl_code_gen.m"
              {
#line 1556 "erl_code_gen.m"
                erl_backend__erl_code_gen__erl_gen_goal_7_p_0((MR_Integer) 2, erl_backend__erl_code_gen__HeadVar__3_3, erl_backend__erl_code_gen__First_21, erl_backend__erl_code_gen__MaybeSuccessExprForFirst_78, &erl_backend__erl_code_gen__FirstStatement0_81, erl_backend__erl_code_gen__STATE_VARIABLE_Info_48_48, &erl_backend__erl_code_gen__STATE_VARIABLE_Info_50_50);
              }
#line 1559 "erl_code_gen.m"
              {
#line 1559 "erl_code_gen.m"
                erl_backend__erl_code_util__erl_bound_nonlocals_in_goal_4_p_0(erl_backend__erl_code_gen__STATE_VARIABLE_Info_50_50, erl_backend__erl_code_gen__HeadVar__3_3, erl_backend__erl_code_gen__First_21, &erl_backend__erl_code_gen__FirstVarsSet_79);
              }
#line 1560 "erl_code_gen.m"
              {
#line 1560 "erl_code_gen.m"
                erl_backend__erl_code_gen__FirstVars_80 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, erl_backend__erl_code_gen__FirstVarsSet_79);
              }
#line 1561 "erl_code_gen.m"
              {
#line 1561 "erl_code_gen.m"
                erl_backend__erl_code_util__erl_create_renaming_4_p_0(erl_backend__erl_code_gen__FirstVars_80, &erl_backend__erl_code_gen__Subst_44, erl_backend__erl_code_gen__STATE_VARIABLE_Info_50_50, &erl_backend__erl_code_gen__STATE_VARIABLE_Info_51_51);
              }
#line 1562 "erl_code_gen.m"
              {
#line 1562 "erl_code_gen.m"
                erl_backend__erl_code_util__erl_rename_vars_in_expr_3_p_0(erl_backend__erl_code_gen__Subst_44, erl_backend__erl_code_gen__FirstStatement0_81, &erl_backend__erl_code_gen__FirstStatement_82);
              }
#line 1565 "erl_code_gen.m"
              {
#line 1565 "erl_code_gen.m"
                erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_100_105_115_106_117_110_99_116_95_95_91_52_93_95_48_8_p_0(erl_backend__erl_code_gen__Rest_22, (MR_Integer) 2, erl_backend__erl_code_gen__HeadVar__3_3, erl_backend__erl_code_gen__HeadVar__5_5, &erl_backend__erl_code_gen__RestStatements_45, erl_backend__erl_code_gen__STATE_VARIABLE_Info_51_51, erl_backend__erl_code_gen__STATE_VARIABLE_Info_8);
              }
#line 1568 "erl_code_gen.m"
              {
#line 1568 "erl_code_gen.m"
                *erl_backend__erl_code_gen__Statement_6 = erl_backend__elds__join_exprs_2_f_0(erl_backend__erl_code_gen__FirstStatement_82, erl_backend__erl_code_gen__RestStatements_45);
              }
#line 1541 "erl_code_gen.m"
            }
#line 1540 "erl_code_gen.m"
            break;
#line 1540 "erl_code_gen.m"
        }
#line 1448 "erl_code_gen.m"
      }
#line 1435 "erl_code_gen.m"
  }
#line 1430 "erl_code_gen.m"
}

#line 962 "erl_code_gen.m"
static void MR_CALL 
erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_100_105_115_106_95_95_91_52_93_95_48_8_p_0_1(
#line 962 "erl_code_gen.m"
  MR_Box erl_backend__erl_code_gen__closure_arg,
#line 962 "erl_code_gen.m"
  MR_Box erl_backend__erl_code_gen__wrapper_arg_1,
#line 962 "erl_code_gen.m"
  MR_Box * erl_backend__erl_code_gen__wrapper_arg_2)
#line 962 "erl_code_gen.m"
{
#line 962 "erl_code_gen.m"
  {
#line 962 "erl_code_gen.m"
    MR_Box erl_backend__erl_code_gen__closure = erl_backend__erl_code_gen__closure_arg;
#line 962 "erl_code_gen.m"
    MR_Word erl_backend__erl_code_gen__conv0_HeadVar__4_4;

#line 962 "erl_code_gen.m"
    {
#line 962 "erl_code_gen.m"
      erl_backend__erl_code_util__erl_bound_nonlocals_in_goal_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__closure, (MR_Integer) 4))), ((MR_Word) erl_backend__erl_code_gen__wrapper_arg_1), &erl_backend__erl_code_gen__conv0_HeadVar__4_4);
    }
#line 962 "erl_code_gen.m"
    *erl_backend__erl_code_gen__wrapper_arg_2 = ((MR_Box) (erl_backend__erl_code_gen__conv0_HeadVar__4_4));
#line 962 "erl_code_gen.m"
  }
#line 962 "erl_code_gen.m"
}

#line 1389 "erl_code_gen.m"
static void MR_CALL 
erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_100_105_115_106_95_95_91_52_93_95_48_8_p_0(
#line 1389 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__HeadVar__1_1,
#line 1389 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__CodeModel_2,
#line 1389 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__HeadVar__3_3,
#line 1389 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__HeadVar__5_5,
#line 1389 "erl_code_gen.m"
  MR_Word * erl_backend__erl_code_gen__Statement_6,
#line 1389 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__STATE_VARIABLE_Info_0_7,
#line 1389 "erl_code_gen.m"
  MR_Word * erl_backend__erl_code_gen__STATE_VARIABLE_Info_8)
#line 1389 "erl_code_gen.m"
{
#line 1394 "erl_code_gen.m"
  {
#line 1394 "erl_code_gen.m"
    MR_bool erl_backend__erl_code_gen__succeeded;

#line 1394 "erl_code_gen.m"
    if ((erl_backend__erl_code_gen__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1394 "erl_code_gen.m"
      {
#line 1399 "erl_code_gen.m"
#line 1399 "erl_code_gen.m"
        switch (erl_backend__erl_code_gen__CodeModel_2) {
#line 1399 "erl_code_gen.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1399 "erl_code_gen.m"
          case (MR_Integer) 0:
#line 1397 "erl_code_gen.m"
            {
#line 1398 "erl_code_gen.m"
              {
#line 1398 "erl_code_gen.m"
                mercury__require__unexpected_3_p_0((MR_String) "erl_backend.erl_code_gen", (MR_String) "predicate \140erl_backend.erl_code_gen.erl_gen_disj\'/8", (MR_String) "\140fail\' has determinism \140det\'");
#line 1398 "erl_code_gen.m"
                return;
              }
#line 1397 "erl_code_gen.m"
            }
#line 1399 "erl_code_gen.m"
            break;
#line 1399 "erl_code_gen.m"
          case (MR_Integer) 2:
#line 1399 "erl_code_gen.m"
          case (MR_Integer) 1:
#line 1402 "erl_code_gen.m"
            {
#line 1402 "erl_code_gen.m"
              MR_Word erl_backend__erl_code_gen__V_17_17;

#line 1403 "erl_code_gen.m"
              {
#line 1403 "erl_code_gen.m"
                erl_backend__erl_code_gen__V_17_17 = erl_backend__elds__elds_fail_0_f_0();
              }
#line 1403 "erl_code_gen.m"
              {
#line 1403 "erl_code_gen.m"
                MR_Word base;
#line 1403 "erl_code_gen.m"
                base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1403 "erl_code_gen.m"
                *erl_backend__erl_code_gen__Statement_6 = base;
#line 1403 "erl_code_gen.m"
                MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (erl_backend__erl_code_gen__V_17_17));
#line 1403 "erl_code_gen.m"
              }
#line 1402 "erl_code_gen.m"
            }
#line 1399 "erl_code_gen.m"
            break;
#line 1399 "erl_code_gen.m"
        }
#line 1394 "erl_code_gen.m"
        *erl_backend__erl_code_gen__STATE_VARIABLE_Info_8 = erl_backend__erl_code_gen__STATE_VARIABLE_Info_0_7;
#line 1394 "erl_code_gen.m"
      }
#line 1394 "erl_code_gen.m"
    else
#line 1394 "erl_code_gen.m"
      {
#line 1394 "erl_code_gen.m"
        MR_Word erl_backend__erl_code_gen__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__erl_code_gen__HeadVar__1_1, (MR_Integer) 1)));
#line 1394 "erl_code_gen.m"
        MR_Word erl_backend__erl_code_gen__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__erl_code_gen__HeadVar__1_1, (MR_Integer) 0)));

#line 1394 "erl_code_gen.m"
        if ((erl_backend__erl_code_gen__V_53_53 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1409 "erl_code_gen.m"
          {
#line 1409 "erl_code_gen.m"
            erl_backend__erl_code_gen__erl_gen_goal_7_p_0(erl_backend__erl_code_gen__CodeModel_2, erl_backend__erl_code_gen__HeadVar__3_3, erl_backend__erl_code_gen__V_54_54, erl_backend__erl_code_gen__HeadVar__5_5, erl_backend__erl_code_gen__Statement_6, erl_backend__erl_code_gen__STATE_VARIABLE_Info_0_7, erl_backend__erl_code_gen__STATE_VARIABLE_Info_8);
          }
#line 1394 "erl_code_gen.m"
        else
#line 1413 "erl_code_gen.m"
          {
#line 1413 "erl_code_gen.m"
            MR_Word erl_backend__erl_code_gen__NonLocalsBoundInGoals_42;
#line 1413 "erl_code_gen.m"
            MR_Word erl_backend__erl_code_gen__MaybeMakeClosure_43;
#line 1413 "erl_code_gen.m"
            MR_Word erl_backend__erl_code_gen__MaybeSuccessExpr_44;
#line 1413 "erl_code_gen.m"
            MR_Word erl_backend__erl_code_gen__InstMap_45;
#line 1413 "erl_code_gen.m"
            MR_Word erl_backend__erl_code_gen__DisjStatement_46;
#line 1413 "erl_code_gen.m"
            MR_Word erl_backend__erl_code_gen__STATE_VARIABLE_Info_50_50;
#line 1413 "erl_code_gen.m"
            MR_Word erl_backend__erl_code_gen__IsBound_59;
#line 1413 "erl_code_gen.m"
            MR_Word erl_backend__erl_code_gen__NonLocalsLists_60;

#line 962 "erl_code_gen.m"
            {
#line 962 "erl_code_gen.m"
              erl_backend__erl_code_gen__IsBound_59 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 962 "erl_code_gen.m"
              MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__IsBound_59, 0) = ((MR_Box) (&erl_backend__erl_code_gen_scalar_common_5[0]));
#line 962 "erl_code_gen.m"
              MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__IsBound_59, 1) = ((MR_Box) (erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_100_105_115_106_95_95_91_52_93_95_48_8_p_0_1));
#line 962 "erl_code_gen.m"
              MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__IsBound_59, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 962 "erl_code_gen.m"
              MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__IsBound_59, 3) = ((MR_Box) (erl_backend__erl_code_gen__STATE_VARIABLE_Info_0_7));
#line 962 "erl_code_gen.m"
              MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__IsBound_59, 4) = ((MR_Box) (erl_backend__erl_code_gen__HeadVar__3_3));
#line 962 "erl_code_gen.m"
            }
#line 963 "erl_code_gen.m"
            {
#line 963 "erl_code_gen.m"
              mercury__list__map_3_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, (MR_Word) &erl_backend__erl_code_gen_scalar_common_1[3], erl_backend__erl_code_gen__IsBound_59, erl_backend__erl_code_gen__HeadVar__1_1, &erl_backend__erl_code_gen__NonLocalsLists_60);
            }
#line 964 "erl_code_gen.m"
            {
#line 964 "erl_code_gen.m"
              erl_backend__erl_code_gen__NonLocalsBoundInGoals_42 = parse_tree__set_of_var__union_list_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, erl_backend__erl_code_gen__NonLocalsLists_60);
            }
#line 1422 "erl_code_gen.m"
            {
#line 1422 "erl_code_gen.m"
              erl_backend__erl_code_gen__maybe_create_closure_for_success_expr_8_p_0(erl_backend__erl_code_gen__NonLocalsBoundInGoals_42, erl_backend__erl_code_gen__HeadVar__5_5, &erl_backend__erl_code_gen__MaybeMakeClosure_43, &erl_backend__erl_code_gen__MaybeSuccessExpr_44, erl_backend__erl_code_gen__HeadVar__3_3, &erl_backend__erl_code_gen__InstMap_45, erl_backend__erl_code_gen__STATE_VARIABLE_Info_0_7, &erl_backend__erl_code_gen__STATE_VARIABLE_Info_50_50);
            }
#line 1426 "erl_code_gen.m"
            {
#line 1426 "erl_code_gen.m"
              erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_100_105_115_106_117_110_99_116_95_95_91_52_93_95_48_8_p_0(erl_backend__erl_code_gen__HeadVar__1_1, erl_backend__erl_code_gen__CodeModel_2, erl_backend__erl_code_gen__InstMap_45, erl_backend__erl_code_gen__MaybeSuccessExpr_44, &erl_backend__erl_code_gen__DisjStatement_46, erl_backend__erl_code_gen__STATE_VARIABLE_Info_50_50, erl_backend__erl_code_gen__STATE_VARIABLE_Info_8);
            }
#line 1428 "erl_code_gen.m"
            {
#line 1428 "erl_code_gen.m"
              *erl_backend__erl_code_gen__Statement_6 = erl_backend__elds__maybe_join_exprs1_2_f_0(erl_backend__erl_code_gen__MaybeMakeClosure_43, erl_backend__erl_code_gen__DisjStatement_46);
            }
#line 1413 "erl_code_gen.m"
          }
#line 1394 "erl_code_gen.m"
      }
#line 1394 "erl_code_gen.m"
  }
#line 1389 "erl_code_gen.m"
}

#line 1276 "erl_code_gen.m"
static void MR_CALL 
erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_99_111_110_106_95_50_95_95_91_52_93_95_48_8_p_0(
#line 1276 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__HeadVar__1_1,
#line 1276 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__CodeModel_2,
#line 1276 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__HeadVar__3_3,
#line 1276 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__MaybeSuccessExpr_5,
#line 1276 "erl_code_gen.m"
  MR_Word * erl_backend__erl_code_gen__Statement_6,
#line 1276 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__STATE_VARIABLE_Info_0_7,
#line 1276 "erl_code_gen.m"
  MR_Word * erl_backend__erl_code_gen__STATE_VARIABLE_Info_8)
#line 1276 "erl_code_gen.m"
{
#line 1281 "erl_code_gen.m"
  {
#line 1281 "erl_code_gen.m"
    MR_bool erl_backend__erl_code_gen__succeeded;

#line 1281 "erl_code_gen.m"
    if ((erl_backend__erl_code_gen__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1281 "erl_code_gen.m"
      {
#line 1285 "erl_code_gen.m"
#line 1285 "erl_code_gen.m"
        switch (erl_backend__erl_code_gen__CodeModel_2) {
#line 1285 "erl_code_gen.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1285 "erl_code_gen.m"
          case (MR_Integer) 0:
#line 1283 "erl_code_gen.m"
            {
#line 1283 "erl_code_gen.m"
              *erl_backend__erl_code_gen__Statement_6 = erl_backend__elds__expr_or_void_1_f_0(erl_backend__erl_code_gen__MaybeSuccessExpr_5);
            }
#line 1285 "erl_code_gen.m"
            break;
#line 1285 "erl_code_gen.m"
          case (MR_Integer) 2:
#line 1285 "erl_code_gen.m"
          case (MR_Integer) 1:
#line 1288 "erl_code_gen.m"
            {
#line 1288 "erl_code_gen.m"
              *erl_backend__erl_code_gen__Statement_6 = erl_backend__elds__det_expr_1_f_0(erl_backend__erl_code_gen__MaybeSuccessExpr_5);
            }
#line 1285 "erl_code_gen.m"
            break;
#line 1285 "erl_code_gen.m"
        }
#line 1281 "erl_code_gen.m"
        *erl_backend__erl_code_gen__STATE_VARIABLE_Info_8 = erl_backend__erl_code_gen__STATE_VARIABLE_Info_0_7;
#line 1281 "erl_code_gen.m"
      }
#line 1281 "erl_code_gen.m"
    else
#line 1281 "erl_code_gen.m"
      {
#line 1281 "erl_code_gen.m"
        MR_Word erl_backend__erl_code_gen__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__erl_code_gen__HeadVar__1_1, (MR_Integer) 1)));
#line 1281 "erl_code_gen.m"
        MR_Word erl_backend__erl_code_gen__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__erl_code_gen__HeadVar__1_1, (MR_Integer) 0)));

#line 1281 "erl_code_gen.m"
        if ((erl_backend__erl_code_gen__V_85_85 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1293 "erl_code_gen.m"
          {
#line 1293 "erl_code_gen.m"
            erl_backend__erl_code_gen__erl_gen_goal_7_p_0(erl_backend__erl_code_gen__CodeModel_2, erl_backend__erl_code_gen__HeadVar__3_3, erl_backend__erl_code_gen__V_86_86, erl_backend__erl_code_gen__MaybeSuccessExpr_5, erl_backend__erl_code_gen__Statement_6, erl_backend__erl_code_gen__STATE_VARIABLE_Info_0_7, erl_backend__erl_code_gen__STATE_VARIABLE_Info_8);
          }
#line 1281 "erl_code_gen.m"
        else
#line 1296 "erl_code_gen.m"
          {
#line 1296 "erl_code_gen.m"
            MR_Word erl_backend__erl_code_gen__FirstGoalInfo_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__V_86_86, (MR_Integer) 1)));
#line 1296 "erl_code_gen.m"
            MR_Word erl_backend__erl_code_gen__FirstDeterminism_40;
#line 1298 "erl_code_gen.m"
            MR_Word erl_backend__erl_code_gen__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__V_86_86, (MR_Integer) 0)));
#line 1300 "erl_code_gen.m"
            MR_Word erl_backend__erl_code_gen__V_84_84;
#line 1300 "erl_code_gen.m"
            MR_Word erl_backend__erl_code_gen__V_41_41;

#line 1299 "erl_code_gen.m"
            {
#line 1299 "erl_code_gen.m"
              erl_backend__erl_code_gen__FirstDeterminism_40 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(erl_backend__erl_code_gen__FirstGoalInfo_39);
            }
#line 1300 "erl_code_gen.m"
            {
#line 1300 "erl_code_gen.m"
              parse_tree__prog_data__determinism_components_3_p_0(erl_backend__erl_code_gen__FirstDeterminism_40, &erl_backend__erl_code_gen__V_41_41, &erl_backend__erl_code_gen__V_84_84);
            }
#line 1300 "erl_code_gen.m"
            erl_backend__erl_code_gen__succeeded = ((MR_Integer) 0 == erl_backend__erl_code_gen__V_84_84);
#line 1304 "erl_code_gen.m"
            if (erl_backend__erl_code_gen__succeeded)
#line 1303 "erl_code_gen.m"
              {
#line 1303 "erl_code_gen.m"
                {
#line 1303 "erl_code_gen.m"
                  erl_backend__erl_code_gen__erl_gen_goal_7_p_0(erl_backend__erl_code_gen__CodeModel_2, erl_backend__erl_code_gen__HeadVar__3_3, erl_backend__erl_code_gen__V_86_86, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), erl_backend__erl_code_gen__Statement_6, erl_backend__erl_code_gen__STATE_VARIABLE_Info_0_7, erl_backend__erl_code_gen__STATE_VARIABLE_Info_8);
                }
#line 1303 "erl_code_gen.m"
              }
#line 1304 "erl_code_gen.m"
            else
#line 1305 "erl_code_gen.m"
              {
#line 1305 "erl_code_gen.m"
                MR_Word erl_backend__erl_code_gen__FirstCodeModel_42;
#line 1305 "erl_code_gen.m"
                MR_Word erl_backend__erl_code_gen__InstMap1_43;

#line 1305 "erl_code_gen.m"
                {
#line 1305 "erl_code_gen.m"
                  hlds__code_model__determinism_to_code_model_2_p_0(erl_backend__erl_code_gen__FirstDeterminism_40, &erl_backend__erl_code_gen__FirstCodeModel_42);
                }
#line 1306 "erl_code_gen.m"
                {
#line 1306 "erl_code_gen.m"
                  hlds__goal_util__update_instmap_3_p_0(erl_backend__erl_code_gen__V_86_86, erl_backend__erl_code_gen__HeadVar__3_3, &erl_backend__erl_code_gen__InstMap1_43);
                }
#line 1321 "erl_code_gen.m"
#line 1321 "erl_code_gen.m"
                switch (erl_backend__erl_code_gen__FirstCodeModel_42) {
#line 1321 "erl_code_gen.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 1321 "erl_code_gen.m"
                  case (MR_Integer) 0:
#line 1308 "erl_code_gen.m"
                    {
#line 1308 "erl_code_gen.m"
                      MR_Word erl_backend__erl_code_gen__FirstStatement_44;
#line 1308 "erl_code_gen.m"
                      MR_Word erl_backend__erl_code_gen__RestStatement_45;
#line 1308 "erl_code_gen.m"
                      MR_Word erl_backend__erl_code_gen__STATE_VARIABLE_Info_78_78;

#line 1316 "erl_code_gen.m"
                      {
#line 1316 "erl_code_gen.m"
                        erl_backend__erl_code_gen__erl_gen_goal_7_p_0((MR_Integer) 0, erl_backend__erl_code_gen__HeadVar__3_3, erl_backend__erl_code_gen__V_86_86, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &erl_backend__erl_code_gen__FirstStatement_44, erl_backend__erl_code_gen__STATE_VARIABLE_Info_0_7, &erl_backend__erl_code_gen__STATE_VARIABLE_Info_78_78);
                      }
#line 1318 "erl_code_gen.m"
                      {
#line 1318 "erl_code_gen.m"
                        erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_99_111_110_106_95_50_95_95_91_52_93_95_48_8_p_0(erl_backend__erl_code_gen__V_85_85, erl_backend__erl_code_gen__CodeModel_2, erl_backend__erl_code_gen__InstMap1_43, erl_backend__erl_code_gen__MaybeSuccessExpr_5, &erl_backend__erl_code_gen__RestStatement_45, erl_backend__erl_code_gen__STATE_VARIABLE_Info_78_78, erl_backend__erl_code_gen__STATE_VARIABLE_Info_8);
                      }
#line 1320 "erl_code_gen.m"
                      {
#line 1320 "erl_code_gen.m"
                        *erl_backend__erl_code_gen__Statement_6 = erl_backend__elds__join_exprs_2_f_0(erl_backend__erl_code_gen__FirstStatement_44, erl_backend__erl_code_gen__RestStatement_45);
                      }
#line 1308 "erl_code_gen.m"
                    }
#line 1321 "erl_code_gen.m"
                    break;
#line 1321 "erl_code_gen.m"
                  case (MR_Integer) 2:
#line 1339 "erl_code_gen.m"
                    {
#line 1339 "erl_code_gen.m"
                      MR_Word erl_backend__erl_code_gen__NonLocalsSet_46;
#line 1339 "erl_code_gen.m"
                      MR_Word erl_backend__erl_code_gen__NonLocals_47;
#line 1339 "erl_code_gen.m"
                      MR_Word erl_backend__erl_code_gen__SucceedFunc0_48;
#line 1339 "erl_code_gen.m"
                      MR_Word erl_backend__erl_code_gen__Subst_49;
#line 1339 "erl_code_gen.m"
                      MR_Word erl_backend__erl_code_gen__SucceedFunc_50;
#line 1339 "erl_code_gen.m"
                      MR_Word erl_backend__erl_code_gen__SucceedVar_51;
#line 1339 "erl_code_gen.m"
                      MR_Word erl_backend__erl_code_gen__InstMap_52;
#line 1339 "erl_code_gen.m"
                      MR_Word erl_backend__erl_code_gen__SucceedVarExpr_53;
#line 1339 "erl_code_gen.m"
                      MR_Word erl_backend__erl_code_gen__MakeSucceed_54;
#line 1339 "erl_code_gen.m"
                      MR_Word erl_backend__erl_code_gen__CallSucceed_55;
#line 1339 "erl_code_gen.m"
                      MR_Word erl_backend__erl_code_gen__STATE_VARIABLE_Info_61_61;
#line 1339 "erl_code_gen.m"
                      MR_Word erl_backend__erl_code_gen__V_62_62;
#line 1339 "erl_code_gen.m"
                      MR_Word erl_backend__erl_code_gen__V_63_63;
#line 1339 "erl_code_gen.m"
                      MR_Word erl_backend__erl_code_gen__STATE_VARIABLE_Info_64_64;
#line 1339 "erl_code_gen.m"
                      MR_Word erl_backend__erl_code_gen__STATE_VARIABLE_Info_66_66;
#line 1339 "erl_code_gen.m"
                      MR_Word erl_backend__erl_code_gen__V_67_67;
#line 1339 "erl_code_gen.m"
                      MR_Word erl_backend__erl_code_gen__V_68_68;
#line 1339 "erl_code_gen.m"
                      MR_Word erl_backend__erl_code_gen__V_70_70;
#line 1339 "erl_code_gen.m"
                      MR_Word erl_backend__erl_code_gen__FirstStatement_81;
#line 1339 "erl_code_gen.m"
                      MR_Word erl_backend__erl_code_gen__RestStatement_82;

#line 1351 "erl_code_gen.m"
                      {
#line 1351 "erl_code_gen.m"
                        erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_99_111_110_106_95_50_95_95_91_52_93_95_48_8_p_0(erl_backend__erl_code_gen__V_85_85, erl_backend__erl_code_gen__CodeModel_2, erl_backend__erl_code_gen__InstMap1_43, erl_backend__erl_code_gen__MaybeSuccessExpr_5, &erl_backend__erl_code_gen__RestStatement_82, erl_backend__erl_code_gen__STATE_VARIABLE_Info_0_7, &erl_backend__erl_code_gen__STATE_VARIABLE_Info_61_61);
                      }
#line 1355 "erl_code_gen.m"
                      {
#line 1355 "erl_code_gen.m"
                        erl_backend__erl_code_util__erl_bound_nonlocals_in_goal_4_p_0(erl_backend__erl_code_gen__STATE_VARIABLE_Info_61_61, erl_backend__erl_code_gen__HeadVar__3_3, erl_backend__erl_code_gen__V_86_86, &erl_backend__erl_code_gen__NonLocalsSet_46);
                      }
#line 1356 "erl_code_gen.m"
                      {
#line 1356 "erl_code_gen.m"
                        erl_backend__erl_code_gen__NonLocals_47 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, erl_backend__erl_code_gen__NonLocalsSet_46);
                      }
#line 1360 "erl_code_gen.m"
                      {
#line 1360 "erl_code_gen.m"
                        erl_backend__erl_code_gen__V_63_63 = erl_backend__elds__terms_from_vars_1_f_0(erl_backend__erl_code_gen__NonLocals_47);
                      }
#line 1360 "erl_code_gen.m"
                      {
#line 1360 "erl_code_gen.m"
                        erl_backend__erl_code_gen__V_62_62 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1360 "erl_code_gen.m"
                        MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__V_62_62, 0) = ((MR_Box) (erl_backend__erl_code_gen__V_63_63));
#line 1360 "erl_code_gen.m"
                        MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__V_62_62, 1) = ((MR_Box) (erl_backend__erl_code_gen__RestStatement_82));
#line 1360 "erl_code_gen.m"
                      }
#line 1360 "erl_code_gen.m"
                      erl_backend__erl_code_gen__SucceedFunc0_48 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) erl_backend__erl_code_gen__V_62_62);
#line 1362 "erl_code_gen.m"
                      {
#line 1362 "erl_code_gen.m"
                        erl_backend__erl_code_util__erl_create_renaming_4_p_0(erl_backend__erl_code_gen__NonLocals_47, &erl_backend__erl_code_gen__Subst_49, erl_backend__erl_code_gen__STATE_VARIABLE_Info_61_61, &erl_backend__erl_code_gen__STATE_VARIABLE_Info_64_64);
                      }
#line 1363 "erl_code_gen.m"
                      {
#line 1363 "erl_code_gen.m"
                        erl_backend__erl_code_util__erl_rename_vars_in_expr_3_p_0(erl_backend__erl_code_gen__Subst_49, erl_backend__erl_code_gen__SucceedFunc0_48, &erl_backend__erl_code_gen__SucceedFunc_50);
                      }
#line 1367 "erl_code_gen.m"
                      {
#line 1367 "erl_code_gen.m"
                        erl_backend__erl_code_util__erl_gen_info_new_named_var_4_p_0((MR_String) "SucceedConj", &erl_backend__erl_code_gen__SucceedVar_51, erl_backend__erl_code_gen__STATE_VARIABLE_Info_64_64, &erl_backend__erl_code_gen__STATE_VARIABLE_Info_66_66);
                      }
#line 1024 "erl_code_gen.m"
                      {
#line 1024 "erl_code_gen.m"
                        hlds__instmap__instmap_set_var_4_p_0(erl_backend__erl_code_gen__SucceedVar_51, (MR_Word) MR_mkword(MR_mktag(3), &erl_backend__erl_code_gen_scalar_common_3[0]), erl_backend__erl_code_gen__HeadVar__3_3, &erl_backend__erl_code_gen__InstMap_52);
                      }
#line 1370 "erl_code_gen.m"
                      {
#line 1370 "erl_code_gen.m"
                        erl_backend__erl_code_gen__SucceedVarExpr_53 = erl_backend__elds__expr_from_var_1_f_0(erl_backend__erl_code_gen__SucceedVar_51);
                      }
#line 1371 "erl_code_gen.m"
                      {
#line 1371 "erl_code_gen.m"
                        erl_backend__erl_code_gen__MakeSucceed_54 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1371 "erl_code_gen.m"
                        MR_hl_field(MR_mktag(3), erl_backend__erl_code_gen__MakeSucceed_54, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 1371 "erl_code_gen.m"
                        MR_hl_field(MR_mktag(3), erl_backend__erl_code_gen__MakeSucceed_54, 1) = ((MR_Box) (erl_backend__erl_code_gen__SucceedVarExpr_53));
#line 1371 "erl_code_gen.m"
                        MR_hl_field(MR_mktag(3), erl_backend__erl_code_gen__MakeSucceed_54, 2) = ((MR_Box) (erl_backend__erl_code_gen__SucceedFunc_50));
#line 1371 "erl_code_gen.m"
                      }
#line 1372 "erl_code_gen.m"
                      {
#line 1372 "erl_code_gen.m"
                        erl_backend__erl_code_gen__V_67_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1372 "erl_code_gen.m"
                        MR_hl_field(MR_mktag(1), erl_backend__erl_code_gen__V_67_67, 0) = ((MR_Box) (erl_backend__erl_code_gen__SucceedVarExpr_53));
#line 1372 "erl_code_gen.m"
                      }
#line 1373 "erl_code_gen.m"
                      {
#line 1373 "erl_code_gen.m"
                        erl_backend__erl_code_gen__V_68_68 = erl_backend__elds__exprs_from_vars_1_f_0(erl_backend__erl_code_gen__NonLocals_47);
                      }
#line 1372 "erl_code_gen.m"
                      {
#line 1372 "erl_code_gen.m"
                        erl_backend__erl_code_gen__CallSucceed_55 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1372 "erl_code_gen.m"
                        MR_hl_field(MR_mktag(3), erl_backend__erl_code_gen__CallSucceed_55, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 1372 "erl_code_gen.m"
                        MR_hl_field(MR_mktag(3), erl_backend__erl_code_gen__CallSucceed_55, 1) = ((MR_Box) (erl_backend__erl_code_gen__V_67_67));
#line 1372 "erl_code_gen.m"
                        MR_hl_field(MR_mktag(3), erl_backend__erl_code_gen__CallSucceed_55, 2) = ((MR_Box) (erl_backend__erl_code_gen__V_68_68));
#line 1372 "erl_code_gen.m"
                      }
#line 1377 "erl_code_gen.m"
                      {
#line 1377 "erl_code_gen.m"
                        erl_backend__erl_code_gen__V_70_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1377 "erl_code_gen.m"
                        MR_hl_field(MR_mktag(1), erl_backend__erl_code_gen__V_70_70, 0) = ((MR_Box) (erl_backend__erl_code_gen__CallSucceed_55));
#line 1377 "erl_code_gen.m"
                      }
#line 1377 "erl_code_gen.m"
                      {
#line 1377 "erl_code_gen.m"
                        erl_backend__erl_code_gen__erl_gen_goal_7_p_0((MR_Integer) 2, erl_backend__erl_code_gen__InstMap_52, erl_backend__erl_code_gen__V_86_86, erl_backend__erl_code_gen__V_70_70, &erl_backend__erl_code_gen__FirstStatement_81, erl_backend__erl_code_gen__STATE_VARIABLE_Info_66_66, erl_backend__erl_code_gen__STATE_VARIABLE_Info_8);
                      }
#line 1380 "erl_code_gen.m"
                      {
#line 1380 "erl_code_gen.m"
                        *erl_backend__erl_code_gen__Statement_6 = erl_backend__elds__join_exprs_2_f_0(erl_backend__erl_code_gen__MakeSucceed_54, erl_backend__erl_code_gen__FirstStatement_81);
                      }
#line 1339 "erl_code_gen.m"
                    }
#line 1321 "erl_code_gen.m"
                    break;
#line 1321 "erl_code_gen.m"
                  case (MR_Integer) 1:
#line 1322 "erl_code_gen.m"
                    {
#line 1322 "erl_code_gen.m"
                      MR_Word erl_backend__erl_code_gen__STATE_VARIABLE_Info_72_72;
#line 1322 "erl_code_gen.m"
                      MR_Word erl_backend__erl_code_gen__V_74_74;
#line 1322 "erl_code_gen.m"
                      MR_Word erl_backend__erl_code_gen__RestStatement_80;

#line 1334 "erl_code_gen.m"
                      {
#line 1334 "erl_code_gen.m"
                        erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_99_111_110_106_95_50_95_95_91_52_93_95_48_8_p_0(erl_backend__erl_code_gen__V_85_85, erl_backend__erl_code_gen__CodeModel_2, erl_backend__erl_code_gen__InstMap1_43, erl_backend__erl_code_gen__MaybeSuccessExpr_5, &erl_backend__erl_code_gen__RestStatement_80, erl_backend__erl_code_gen__STATE_VARIABLE_Info_0_7, &erl_backend__erl_code_gen__STATE_VARIABLE_Info_72_72);
                      }
#line 1336 "erl_code_gen.m"
                      {
#line 1336 "erl_code_gen.m"
                        erl_backend__erl_code_gen__V_74_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1336 "erl_code_gen.m"
                        MR_hl_field(MR_mktag(1), erl_backend__erl_code_gen__V_74_74, 0) = ((MR_Box) (erl_backend__erl_code_gen__RestStatement_80));
#line 1336 "erl_code_gen.m"
                      }
#line 1336 "erl_code_gen.m"
                      {
#line 1336 "erl_code_gen.m"
                        erl_backend__erl_code_gen__erl_gen_goal_7_p_0((MR_Integer) 1, erl_backend__erl_code_gen__HeadVar__3_3, erl_backend__erl_code_gen__V_86_86, erl_backend__erl_code_gen__V_74_74, erl_backend__erl_code_gen__Statement_6, erl_backend__erl_code_gen__STATE_VARIABLE_Info_72_72, erl_backend__erl_code_gen__STATE_VARIABLE_Info_8);
                      }
#line 1322 "erl_code_gen.m"
                    }
#line 1321 "erl_code_gen.m"
                    break;
#line 1321 "erl_code_gen.m"
                }
#line 1305 "erl_code_gen.m"
              }
#line 1296 "erl_code_gen.m"
          }
#line 1281 "erl_code_gen.m"
      }
#line 1281 "erl_code_gen.m"
  }
#line 1276 "erl_code_gen.m"
}

#line 1253 "erl_code_gen.m"
static void MR_CALL 
erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_99_111_110_106_95_95_91_53_93_95_48_9_p_0(
#line 1253 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__Goals_10,
#line 1253 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__CodeModel_11,
#line 1253 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__Detism_12,
#line 1253 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__InstMap_13,
#line 1253 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__MaybeSuccessExpr_15,
#line 1253 "erl_code_gen.m"
  MR_Word * erl_backend__erl_code_gen__Statement_16,
#line 1253 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__STATE_VARIABLE_Info_0_21,
#line 1253 "erl_code_gen.m"
  MR_Word * erl_backend__erl_code_gen__STATE_VARIABLE_Info_22)
#line 1253 "erl_code_gen.m"
{
#line 1258 "erl_code_gen.m"
  {
#line 1258 "erl_code_gen.m"
    MR_bool erl_backend__erl_code_gen__succeeded;
#line 1258 "erl_code_gen.m"
    MR_Word erl_backend__erl_code_gen__Statement0_18;
#line 1258 "erl_code_gen.m"
    MR_Word erl_backend__erl_code_gen__STATE_VARIABLE_Info_23_23;

#line 1259 "erl_code_gen.m"
    {
#line 1259 "erl_code_gen.m"
      erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_99_111_110_106_95_50_95_95_91_52_93_95_48_8_p_0(erl_backend__erl_code_gen__Goals_10, erl_backend__erl_code_gen__CodeModel_11, erl_backend__erl_code_gen__InstMap_13, erl_backend__erl_code_gen__MaybeSuccessExpr_15, &erl_backend__erl_code_gen__Statement0_18, erl_backend__erl_code_gen__STATE_VARIABLE_Info_0_21, &erl_backend__erl_code_gen__STATE_VARIABLE_Info_23_23);
    }
#line 1261 "erl_code_gen.m"
    erl_backend__erl_code_gen__succeeded = (erl_backend__erl_code_gen__Detism_12 == (MR_Integer) 6);
#line 1272 "erl_code_gen.m"
    if (erl_backend__erl_code_gen__succeeded)
#line 1269 "erl_code_gen.m"
      {
#line 1269 "erl_code_gen.m"
        MR_Word erl_backend__erl_code_gen__ModuleInfo_19;
#line 1269 "erl_code_gen.m"
        MR_Word erl_backend__erl_code_gen__BoundVars_20;

#line 1269 "erl_code_gen.m"
        {
#line 1269 "erl_code_gen.m"
          erl_backend__erl_code_util__erl_gen_info_get_module_info_2_p_0(erl_backend__erl_code_gen__STATE_VARIABLE_Info_23_23, &erl_backend__erl_code_gen__ModuleInfo_19);
        }
#line 1270 "erl_code_gen.m"
        {
#line 1270 "erl_code_gen.m"
          hlds__instmap__instmap_bound_vars_3_p_0(erl_backend__erl_code_gen__InstMap_13, erl_backend__erl_code_gen__ModuleInfo_19, &erl_backend__erl_code_gen__BoundVars_20);
        }
#line 1271 "erl_code_gen.m"
        {
#line 1271 "erl_code_gen.m"
          erl_backend__erl_code_util__erl_rename_vars_in_expr_except_5_p_0(erl_backend__erl_code_gen__BoundVars_20, erl_backend__erl_code_gen__Statement0_18, erl_backend__erl_code_gen__Statement_16, erl_backend__erl_code_gen__STATE_VARIABLE_Info_23_23, erl_backend__erl_code_gen__STATE_VARIABLE_Info_22);
        }
#line 1269 "erl_code_gen.m"
      }
#line 1272 "erl_code_gen.m"
    else
#line 1273 "erl_code_gen.m"
      {
#line 1273 "erl_code_gen.m"
        *erl_backend__erl_code_gen__Statement_16 = erl_backend__erl_code_gen__Statement0_18;
#line 1273 "erl_code_gen.m"
        *erl_backend__erl_code_gen__STATE_VARIABLE_Info_22 = erl_backend__erl_code_gen__STATE_VARIABLE_Info_23_23;
#line 1273 "erl_code_gen.m"
      }
#line 1258 "erl_code_gen.m"
  }
#line 1253 "erl_code_gen.m"
}

#line 1186 "erl_code_gen.m"
static void MR_CALL 
erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_110_101_103_97_116_105_111_110_95_95_91_52_93_95_48_8_p_0(
#line 1186 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__Cond_9,
#line 1186 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__CodeModel_10,
#line 1186 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__InstMap_11,
#line 1186 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__MaybeSuccessExpr_13,
#line 1186 "erl_code_gen.m"
  MR_Word * erl_backend__erl_code_gen__Statement_14,
#line 1186 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__STATE_VARIABLE_Info_0_24,
#line 1186 "erl_code_gen.m"
  MR_Word * erl_backend__erl_code_gen__STATE_VARIABLE_Info_25)
#line 1186 "erl_code_gen.m"
{
#line 1191 "erl_code_gen.m"
  {
#line 1191 "erl_code_gen.m"
    MR_bool erl_backend__erl_code_gen__succeeded;
#line 1191 "erl_code_gen.m"
    MR_Word erl_backend__erl_code_gen__CondGoalInfo_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__Cond_9, (MR_Integer) 1)));
#line 1191 "erl_code_gen.m"
    MR_Word erl_backend__erl_code_gen__CondCodeModel_18;
#line 1192 "erl_code_gen.m"
    MR_Word erl_backend__erl_code_gen__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__Cond_9, (MR_Integer) 0)));

#line 1193 "erl_code_gen.m"
    {
#line 1193 "erl_code_gen.m"
      erl_backend__erl_code_gen__CondCodeModel_18 = hlds__code_model__goal_info_get_code_model_1_f_0(erl_backend__erl_code_gen__CondGoalInfo_17);
    }
#line 1208 "erl_code_gen.m"
#line 1208 "erl_code_gen.m"
    switch (erl_backend__erl_code_gen__CodeModel_10) {
#line 1208 "erl_code_gen.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1208 "erl_code_gen.m"
      case (MR_Integer) 0:
#line 1200 "erl_code_gen.m"
        {
#line 1200 "erl_code_gen.m"
          MR_Word erl_backend__erl_code_gen__DummySuccessExpr_19;
#line 1200 "erl_code_gen.m"
          MR_Word erl_backend__erl_code_gen__CondStatement_20;
#line 1200 "erl_code_gen.m"
          MR_Word erl_backend__erl_code_gen__V_49_49;
#line 1200 "erl_code_gen.m"
          MR_Word erl_backend__erl_code_gen__V_51_51;

#line 1204 "erl_code_gen.m"
          {
#line 1204 "erl_code_gen.m"
            erl_backend__erl_code_gen__V_49_49 = erl_backend__elds__elds_empty_tuple_0_f_0();
          }
#line 1204 "erl_code_gen.m"
          {
#line 1204 "erl_code_gen.m"
            erl_backend__erl_code_gen__DummySuccessExpr_19 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1204 "erl_code_gen.m"
            MR_hl_field(MR_mktag(2), erl_backend__erl_code_gen__DummySuccessExpr_19, 0) = ((MR_Box) (erl_backend__erl_code_gen__V_49_49));
#line 1204 "erl_code_gen.m"
          }
#line 1205 "erl_code_gen.m"
          {
#line 1205 "erl_code_gen.m"
            erl_backend__erl_code_gen__V_51_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1205 "erl_code_gen.m"
            MR_hl_field(MR_mktag(1), erl_backend__erl_code_gen__V_51_51, 0) = ((MR_Box) (erl_backend__erl_code_gen__DummySuccessExpr_19));
#line 1205 "erl_code_gen.m"
          }
#line 1205 "erl_code_gen.m"
          {
#line 1205 "erl_code_gen.m"
            erl_backend__erl_code_gen__erl_gen_goal_7_p_0((MR_Integer) 1, erl_backend__erl_code_gen__InstMap_11, erl_backend__erl_code_gen__Cond_9, erl_backend__erl_code_gen__V_51_51, &erl_backend__erl_code_gen__CondStatement_20, erl_backend__erl_code_gen__STATE_VARIABLE_Info_0_24, erl_backend__erl_code_gen__STATE_VARIABLE_Info_25);
          }
#line 1207 "erl_code_gen.m"
          {
#line 1207 "erl_code_gen.m"
            *erl_backend__erl_code_gen__Statement_14 = erl_backend__elds__maybe_join_exprs_2_f_0(erl_backend__erl_code_gen__CondStatement_20, erl_backend__erl_code_gen__MaybeSuccessExpr_13);
          }
#line 1200 "erl_code_gen.m"
        }
#line 1208 "erl_code_gen.m"
        break;
#line 1208 "erl_code_gen.m"
      case (MR_Integer) 2:
#line 1244 "erl_code_gen.m"
        {
#line 1245 "erl_code_gen.m"
          {
#line 1245 "erl_code_gen.m"
            mercury__require__unexpected_3_p_0((MR_String) "erl_backend.erl_code_gen", (MR_String) "predicate \140erl_backend.erl_code_gen.erl_gen_negation\'/8", (MR_String) "nondet negation");
#line 1245 "erl_code_gen.m"
            return;
          }
#line 1244 "erl_code_gen.m"
        }
#line 1208 "erl_code_gen.m"
        break;
#line 1208 "erl_code_gen.m"
      case (MR_Integer) 1:
#line 1208 "erl_code_gen.m"
#line 1208 "erl_code_gen.m"
        switch (erl_backend__erl_code_gen__CondCodeModel_18) {
#line 1208 "erl_code_gen.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1208 "erl_code_gen.m"
          case (MR_Integer) 0:
#line 1215 "erl_code_gen.m"
            {
#line 1215 "erl_code_gen.m"
              MR_Word erl_backend__erl_code_gen__V_47_47;
#line 1215 "erl_code_gen.m"
              MR_Word erl_backend__erl_code_gen__V_48_48;
#line 1215 "erl_code_gen.m"
              MR_Word erl_backend__erl_code_gen__CondStatement_53;

#line 1216 "erl_code_gen.m"
              {
#line 1216 "erl_code_gen.m"
                erl_backend__erl_code_gen__erl_gen_goal_7_p_0((MR_Integer) 0, erl_backend__erl_code_gen__InstMap_11, erl_backend__erl_code_gen__Cond_9, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &erl_backend__erl_code_gen__CondStatement_53, erl_backend__erl_code_gen__STATE_VARIABLE_Info_0_24, erl_backend__erl_code_gen__STATE_VARIABLE_Info_25);
              }
#line 1217 "erl_code_gen.m"
              {
#line 1217 "erl_code_gen.m"
                erl_backend__erl_code_gen__V_48_48 = erl_backend__elds__elds_fail_0_f_0();
              }
#line 1217 "erl_code_gen.m"
              {
#line 1217 "erl_code_gen.m"
                erl_backend__erl_code_gen__V_47_47 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1217 "erl_code_gen.m"
                MR_hl_field(MR_mktag(2), erl_backend__erl_code_gen__V_47_47, 0) = ((MR_Box) (erl_backend__erl_code_gen__V_48_48));
#line 1217 "erl_code_gen.m"
              }
#line 1217 "erl_code_gen.m"
              {
#line 1217 "erl_code_gen.m"
                *erl_backend__erl_code_gen__Statement_14 = erl_backend__elds__join_exprs_2_f_0(erl_backend__erl_code_gen__CondStatement_53, erl_backend__erl_code_gen__V_47_47);
              }
#line 1215 "erl_code_gen.m"
            }
#line 1208 "erl_code_gen.m"
            break;
#line 1208 "erl_code_gen.m"
          case (MR_Integer) 2:
#line 1241 "erl_code_gen.m"
            {
#line 1242 "erl_code_gen.m"
              {
#line 1242 "erl_code_gen.m"
                mercury__require__unexpected_3_p_0((MR_String) "erl_backend.erl_code_gen", (MR_String) "predicate \140erl_backend.erl_code_gen.erl_gen_negation\'/8", (MR_String) "nondet cond");
#line 1242 "erl_code_gen.m"
                return;
              }
#line 1241 "erl_code_gen.m"
            }
#line 1208 "erl_code_gen.m"
            break;
#line 1208 "erl_code_gen.m"
          case (MR_Integer) 1:
#line 1232 "erl_code_gen.m"
            {
#line 1232 "erl_code_gen.m"
              MR_Word erl_backend__erl_code_gen__OnSuccess_21;
#line 1232 "erl_code_gen.m"
              MR_Word erl_backend__erl_code_gen__FailCase_22;
#line 1232 "erl_code_gen.m"
              MR_Word erl_backend__erl_code_gen__OtherCase_23;
#line 1232 "erl_code_gen.m"
              MR_Word erl_backend__erl_code_gen__V_32_32;
#line 1232 "erl_code_gen.m"
              MR_Word erl_backend__erl_code_gen__V_33_33;
#line 1232 "erl_code_gen.m"
              MR_Word erl_backend__erl_code_gen__V_36_36;
#line 1232 "erl_code_gen.m"
              MR_Word erl_backend__erl_code_gen__V_37_37;
#line 1232 "erl_code_gen.m"
              MR_Word erl_backend__erl_code_gen__V_39_39;
#line 1232 "erl_code_gen.m"
              MR_Word erl_backend__erl_code_gen__V_40_40;
#line 1232 "erl_code_gen.m"
              MR_Word erl_backend__erl_code_gen__V_42_42;
#line 1232 "erl_code_gen.m"
              MR_Word erl_backend__erl_code_gen__V_43_43;
#line 1232 "erl_code_gen.m"
              MR_Word erl_backend__erl_code_gen__CondStatement_54;

#line 1234 "erl_code_gen.m"
              {
#line 1234 "erl_code_gen.m"
                erl_backend__erl_code_gen__V_33_33 = erl_backend__elds__elds_true_0_f_0();
              }
#line 1234 "erl_code_gen.m"
              {
#line 1234 "erl_code_gen.m"
                erl_backend__erl_code_gen__V_32_32 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1234 "erl_code_gen.m"
                MR_hl_field(MR_mktag(2), erl_backend__erl_code_gen__V_32_32, 0) = ((MR_Box) (erl_backend__erl_code_gen__V_33_33));
#line 1234 "erl_code_gen.m"
              }
#line 1234 "erl_code_gen.m"
              {
#line 1234 "erl_code_gen.m"
                erl_backend__erl_code_gen__OnSuccess_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1234 "erl_code_gen.m"
                MR_hl_field(MR_mktag(1), erl_backend__erl_code_gen__OnSuccess_21, 0) = ((MR_Box) (erl_backend__erl_code_gen__V_32_32));
#line 1234 "erl_code_gen.m"
              }
#line 1235 "erl_code_gen.m"
              {
#line 1235 "erl_code_gen.m"
                erl_backend__erl_code_gen__erl_gen_goal_7_p_0((MR_Integer) 1, erl_backend__erl_code_gen__InstMap_11, erl_backend__erl_code_gen__Cond_9, erl_backend__erl_code_gen__OnSuccess_21, &erl_backend__erl_code_gen__CondStatement_54, erl_backend__erl_code_gen__STATE_VARIABLE_Info_0_24, erl_backend__erl_code_gen__STATE_VARIABLE_Info_25);
              }
#line 1238 "erl_code_gen.m"
              {
#line 1238 "erl_code_gen.m"
                erl_backend__erl_code_gen__V_39_39 = erl_backend__elds__elds_fail_0_f_0();
              }
#line 1238 "erl_code_gen.m"
              {
#line 1238 "erl_code_gen.m"
                erl_backend__erl_code_gen__V_40_40 = erl_backend__elds__expr_or_void_1_f_0(erl_backend__erl_code_gen__MaybeSuccessExpr_13);
              }
#line 1238 "erl_code_gen.m"
              {
#line 1238 "erl_code_gen.m"
                erl_backend__erl_code_gen__FailCase_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1238 "erl_code_gen.m"
                MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__FailCase_22, 0) = ((MR_Box) (erl_backend__erl_code_gen__V_39_39));
#line 1238 "erl_code_gen.m"
                MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__FailCase_22, 1) = ((MR_Box) (erl_backend__erl_code_gen__V_40_40));
#line 1238 "erl_code_gen.m"
              }
#line 1239 "erl_code_gen.m"
              {
#line 1239 "erl_code_gen.m"
                erl_backend__erl_code_gen__V_43_43 = erl_backend__elds__elds_fail_0_f_0();
              }
#line 1239 "erl_code_gen.m"
              {
#line 1239 "erl_code_gen.m"
                erl_backend__erl_code_gen__V_42_42 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1239 "erl_code_gen.m"
                MR_hl_field(MR_mktag(2), erl_backend__erl_code_gen__V_42_42, 0) = ((MR_Box) (erl_backend__erl_code_gen__V_43_43));
#line 1239 "erl_code_gen.m"
              }
#line 1239 "erl_code_gen.m"
              {
#line 1239 "erl_code_gen.m"
                erl_backend__erl_code_gen__OtherCase_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1239 "erl_code_gen.m"
                MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__OtherCase_23, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1239 "erl_code_gen.m"
                MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__OtherCase_23, 1) = ((MR_Box) (erl_backend__erl_code_gen__V_42_42));
#line 1239 "erl_code_gen.m"
              }
#line 1237 "erl_code_gen.m"
              {
#line 1237 "erl_code_gen.m"
                erl_backend__erl_code_gen__V_37_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1237 "erl_code_gen.m"
                MR_hl_field(MR_mktag(1), erl_backend__erl_code_gen__V_37_37, 0) = ((MR_Box) (erl_backend__erl_code_gen__OtherCase_23));
#line 1237 "erl_code_gen.m"
                MR_hl_field(MR_mktag(1), erl_backend__erl_code_gen__V_37_37, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1237 "erl_code_gen.m"
              }
#line 1237 "erl_code_gen.m"
              {
#line 1237 "erl_code_gen.m"
                erl_backend__erl_code_gen__V_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1237 "erl_code_gen.m"
                MR_hl_field(MR_mktag(1), erl_backend__erl_code_gen__V_36_36, 0) = ((MR_Box) (erl_backend__erl_code_gen__FailCase_22));
#line 1237 "erl_code_gen.m"
                MR_hl_field(MR_mktag(1), erl_backend__erl_code_gen__V_36_36, 1) = ((MR_Box) (erl_backend__erl_code_gen__V_37_37));
#line 1237 "erl_code_gen.m"
              }
#line 1237 "erl_code_gen.m"
              {
#line 1237 "erl_code_gen.m"
                MR_Word base;
#line 1237 "erl_code_gen.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1237 "erl_code_gen.m"
                *erl_backend__erl_code_gen__Statement_14 = base;
#line 1237 "erl_code_gen.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 1237 "erl_code_gen.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (erl_backend__erl_code_gen__CondStatement_54));
#line 1237 "erl_code_gen.m"
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (erl_backend__erl_code_gen__V_36_36));
#line 1237 "erl_code_gen.m"
              }
#line 1232 "erl_code_gen.m"
            }
#line 1208 "erl_code_gen.m"
            break;
#line 1208 "erl_code_gen.m"
        }
#line 1208 "erl_code_gen.m"
        break;
#line 1208 "erl_code_gen.m"
    }
#line 1191 "erl_code_gen.m"
  }
#line 1186 "erl_code_gen.m"
}

#line 1031 "erl_code_gen.m"
static void MR_CALL 
erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_105_116_101_95_95_91_54_93_95_48_10_p_0(
#line 1031 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__CodeModel_11,
#line 1031 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__InstMap0_12,
#line 1031 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__Cond_13,
#line 1031 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__Then_14,
#line 1031 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__Else_15,
#line 1031 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__MaybeSuccessExpr0_17,
#line 1031 "erl_code_gen.m"
  MR_Word * erl_backend__erl_code_gen__Statement_18,
#line 1031 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__STATE_VARIABLE_Info_0_57,
#line 1031 "erl_code_gen.m"
  MR_Word * erl_backend__erl_code_gen__STATE_VARIABLE_Info_58)
#line 1031 "erl_code_gen.m"
{
#line 1037 "erl_code_gen.m"
  {
#line 1037 "erl_code_gen.m"
    MR_bool erl_backend__erl_code_gen__succeeded;
#line 1037 "erl_code_gen.m"
    MR_Word erl_backend__erl_code_gen__CondGoalInfo_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__Cond_13, (MR_Integer) 1)));
#line 1037 "erl_code_gen.m"
    MR_Word erl_backend__erl_code_gen__CondCodeModel_22;
#line 1038 "erl_code_gen.m"
    MR_Word erl_backend__erl_code_gen__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__Cond_13, (MR_Integer) 0)));

#line 1039 "erl_code_gen.m"
    {
#line 1039 "erl_code_gen.m"
      erl_backend__erl_code_gen__CondCodeModel_22 = hlds__code_model__goal_info_get_code_model_1_f_0(erl_backend__erl_code_gen__CondGoalInfo_21);
    }
#line 1059 "erl_code_gen.m"
#line 1059 "erl_code_gen.m"
    switch (erl_backend__erl_code_gen__CondCodeModel_22) {
#line 1059 "erl_code_gen.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1059 "erl_code_gen.m"
      case (MR_Integer) 0:
#line 1047 "erl_code_gen.m"
        {
#line 1047 "erl_code_gen.m"
          MR_Word erl_backend__erl_code_gen__CondStatement_23;
#line 1047 "erl_code_gen.m"
          MR_Word erl_backend__erl_code_gen__CondDeterminism_24;
#line 1047 "erl_code_gen.m"
          MR_Word erl_backend__erl_code_gen__STATE_VARIABLE_Info_107_107;

#line 1048 "erl_code_gen.m"
          {
#line 1048 "erl_code_gen.m"
            erl_backend__erl_code_gen__erl_gen_goal_7_p_0((MR_Integer) 0, erl_backend__erl_code_gen__InstMap0_12, erl_backend__erl_code_gen__Cond_13, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &erl_backend__erl_code_gen__CondStatement_23, erl_backend__erl_code_gen__STATE_VARIABLE_Info_0_57, &erl_backend__erl_code_gen__STATE_VARIABLE_Info_107_107);
          }
#line 1049 "erl_code_gen.m"
          {
#line 1049 "erl_code_gen.m"
            erl_backend__erl_code_gen__CondDeterminism_24 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(erl_backend__erl_code_gen__CondGoalInfo_21);
          }
#line 1050 "erl_code_gen.m"
          erl_backend__erl_code_gen__succeeded = (erl_backend__erl_code_gen__CondDeterminism_24 == (MR_Integer) 6);
#line 1053 "erl_code_gen.m"
          if (erl_backend__erl_code_gen__succeeded)
#line 1052 "erl_code_gen.m"
            {
#line 1052 "erl_code_gen.m"
              *erl_backend__erl_code_gen__Statement_18 = erl_backend__erl_code_gen__CondStatement_23;
#line 1052 "erl_code_gen.m"
              *erl_backend__erl_code_gen__STATE_VARIABLE_Info_58 = erl_backend__erl_code_gen__STATE_VARIABLE_Info_107_107;
#line 1052 "erl_code_gen.m"
            }
#line 1053 "erl_code_gen.m"
          else
#line 1054 "erl_code_gen.m"
            {
#line 1054 "erl_code_gen.m"
              MR_Word erl_backend__erl_code_gen__CondInstMap_25;
#line 1054 "erl_code_gen.m"
              MR_Word erl_backend__erl_code_gen__ThenStatement_26;

#line 1054 "erl_code_gen.m"
              {
#line 1054 "erl_code_gen.m"
                hlds__goal_util__update_instmap_3_p_0(erl_backend__erl_code_gen__Cond_13, erl_backend__erl_code_gen__InstMap0_12, &erl_backend__erl_code_gen__CondInstMap_25);
              }
#line 1055 "erl_code_gen.m"
              {
#line 1055 "erl_code_gen.m"
                erl_backend__erl_code_gen__erl_gen_goal_7_p_0(erl_backend__erl_code_gen__CodeModel_11, erl_backend__erl_code_gen__CondInstMap_25, erl_backend__erl_code_gen__Then_14, erl_backend__erl_code_gen__MaybeSuccessExpr0_17, &erl_backend__erl_code_gen__ThenStatement_26, erl_backend__erl_code_gen__STATE_VARIABLE_Info_107_107, erl_backend__erl_code_gen__STATE_VARIABLE_Info_58);
              }
#line 1057 "erl_code_gen.m"
              {
#line 1057 "erl_code_gen.m"
                *erl_backend__erl_code_gen__Statement_18 = erl_backend__elds__join_exprs_2_f_0(erl_backend__erl_code_gen__CondStatement_23, erl_backend__erl_code_gen__ThenStatement_26);
              }
#line 1054 "erl_code_gen.m"
            }
#line 1047 "erl_code_gen.m"
        }
#line 1059 "erl_code_gen.m"
        break;
#line 1059 "erl_code_gen.m"
      case (MR_Integer) 2:
#line 1129 "erl_code_gen.m"
        {
#line 1129 "erl_code_gen.m"
          MR_Word erl_backend__erl_code_gen__Ref_47;
#line 1129 "erl_code_gen.m"
          MR_Word erl_backend__erl_code_gen__RefExpr_48;
#line 1129 "erl_code_gen.m"
          MR_Word erl_backend__erl_code_gen__MakeRef_49;
#line 1129 "erl_code_gen.m"
          MR_Word erl_backend__erl_code_gen__PutRef_50;
#line 1129 "erl_code_gen.m"
          MR_Word erl_backend__erl_code_gen__GetRef_51;
#line 1129 "erl_code_gen.m"
          MR_Word erl_backend__erl_code_gen__EraseRef_52;
#line 1129 "erl_code_gen.m"
          MR_Word erl_backend__erl_code_gen__PutAndThen_53;
#line 1129 "erl_code_gen.m"
          MR_Word erl_backend__erl_code_gen__CondThen_54;
#line 1129 "erl_code_gen.m"
          MR_Word erl_backend__erl_code_gen__CaseElse_55;
#line 1129 "erl_code_gen.m"
          MR_Word erl_backend__erl_code_gen__OtherCase_56;
#line 1129 "erl_code_gen.m"
          MR_Word erl_backend__erl_code_gen__STATE_VARIABLE_Info_60_60;
#line 1129 "erl_code_gen.m"
          MR_Word erl_backend__erl_code_gen__V_61_61;
#line 1129 "erl_code_gen.m"
          MR_Word erl_backend__erl_code_gen__V_65_65;
#line 1129 "erl_code_gen.m"
          MR_Word erl_backend__erl_code_gen__V_66_66;
#line 1129 "erl_code_gen.m"
          MR_Word erl_backend__erl_code_gen__V_67_67;
#line 1129 "erl_code_gen.m"
          MR_Word erl_backend__erl_code_gen__V_68_68;
#line 1129 "erl_code_gen.m"
          MR_Word erl_backend__erl_code_gen__V_71_71;
#line 1129 "erl_code_gen.m"
          MR_Word erl_backend__erl_code_gen__STATE_VARIABLE_Info_76_76;
#line 1129 "erl_code_gen.m"
          MR_Word erl_backend__erl_code_gen__V_77_77;
#line 1129 "erl_code_gen.m"
          MR_Word erl_backend__erl_code_gen__STATE_VARIABLE_Info_78_78;
#line 1129 "erl_code_gen.m"
          MR_Word erl_backend__erl_code_gen__V_80_80;
#line 1129 "erl_code_gen.m"
          MR_Word erl_backend__erl_code_gen__V_81_81;
#line 1129 "erl_code_gen.m"
          MR_Word erl_backend__erl_code_gen__V_83_83;
#line 1129 "erl_code_gen.m"
          MR_Word erl_backend__erl_code_gen__V_84_84;
#line 1129 "erl_code_gen.m"
          MR_Word erl_backend__erl_code_gen__V_85_85;
#line 1129 "erl_code_gen.m"
          MR_Word erl_backend__erl_code_gen__V_87_87;
#line 1129 "erl_code_gen.m"
          MR_Word erl_backend__erl_code_gen__V_88_88;
#line 1129 "erl_code_gen.m"
          MR_Word erl_backend__erl_code_gen__V_91_91;
#line 1129 "erl_code_gen.m"
          MR_Word erl_backend__erl_code_gen__ThenStatement_112;
#line 1129 "erl_code_gen.m"
          MR_Word erl_backend__erl_code_gen__InstMap1_113;
#line 1129 "erl_code_gen.m"
          MR_Word erl_backend__erl_code_gen__InstMap2_114;
#line 1129 "erl_code_gen.m"
          MR_Word erl_backend__erl_code_gen__ElseStatement_115;
#line 1129 "erl_code_gen.m"
          MR_Word erl_backend__erl_code_gen__TrueCase_116;

#line 1149 "erl_code_gen.m"
          {
#line 1149 "erl_code_gen.m"
            erl_backend__erl_code_util__erl_gen_info_new_named_var_4_p_0((MR_String) "Ref", &erl_backend__erl_code_gen__Ref_47, erl_backend__erl_code_gen__STATE_VARIABLE_Info_0_57, &erl_backend__erl_code_gen__STATE_VARIABLE_Info_60_60);
          }
#line 1150 "erl_code_gen.m"
          {
#line 1150 "erl_code_gen.m"
            erl_backend__erl_code_gen__ground_var_in_instmap_3_p_0(erl_backend__erl_code_gen__Ref_47, erl_backend__erl_code_gen__InstMap0_12, &erl_backend__erl_code_gen__InstMap1_113);
          }
#line 1152 "erl_code_gen.m"
          {
#line 1152 "erl_code_gen.m"
            erl_backend__erl_code_gen__RefExpr_48 = erl_backend__elds__expr_from_var_1_f_0(erl_backend__erl_code_gen__Ref_47);
          }
#line 1153 "erl_code_gen.m"
          {
#line 1153 "erl_code_gen.m"
            erl_backend__erl_code_gen__V_61_61 = erl_backend__elds__elds_call_builtin_2_f_0((MR_String) "make_ref", (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
          }
#line 1153 "erl_code_gen.m"
          {
#line 1153 "erl_code_gen.m"
            erl_backend__erl_code_gen__MakeRef_49 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1153 "erl_code_gen.m"
            MR_hl_field(MR_mktag(3), erl_backend__erl_code_gen__MakeRef_49, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 1153 "erl_code_gen.m"
            MR_hl_field(MR_mktag(3), erl_backend__erl_code_gen__MakeRef_49, 1) = ((MR_Box) (erl_backend__erl_code_gen__RefExpr_48));
#line 1153 "erl_code_gen.m"
            MR_hl_field(MR_mktag(3), erl_backend__erl_code_gen__MakeRef_49, 2) = ((MR_Box) (erl_backend__erl_code_gen__V_61_61));
#line 1153 "erl_code_gen.m"
          }
#line 1154 "erl_code_gen.m"
          {
#line 1154 "erl_code_gen.m"
            erl_backend__erl_code_gen__V_68_68 = erl_backend__elds__elds_true_0_f_0();
          }
#line 1154 "erl_code_gen.m"
          {
#line 1154 "erl_code_gen.m"
            erl_backend__erl_code_gen__V_67_67 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1154 "erl_code_gen.m"
            MR_hl_field(MR_mktag(2), erl_backend__erl_code_gen__V_67_67, 0) = ((MR_Box) (erl_backend__erl_code_gen__V_68_68));
#line 1154 "erl_code_gen.m"
          }
#line 1154 "erl_code_gen.m"
          {
#line 1154 "erl_code_gen.m"
            erl_backend__erl_code_gen__V_66_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1154 "erl_code_gen.m"
            MR_hl_field(MR_mktag(1), erl_backend__erl_code_gen__V_66_66, 0) = ((MR_Box) (erl_backend__erl_code_gen__V_67_67));
#line 1154 "erl_code_gen.m"
            MR_hl_field(MR_mktag(1), erl_backend__erl_code_gen__V_66_66, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1154 "erl_code_gen.m"
          }
#line 1154 "erl_code_gen.m"
          {
#line 1154 "erl_code_gen.m"
            erl_backend__erl_code_gen__V_65_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1154 "erl_code_gen.m"
            MR_hl_field(MR_mktag(1), erl_backend__erl_code_gen__V_65_65, 0) = ((MR_Box) (erl_backend__erl_code_gen__RefExpr_48));
#line 1154 "erl_code_gen.m"
            MR_hl_field(MR_mktag(1), erl_backend__erl_code_gen__V_65_65, 1) = ((MR_Box) (erl_backend__erl_code_gen__V_66_66));
#line 1154 "erl_code_gen.m"
          }
#line 1154 "erl_code_gen.m"
          {
#line 1154 "erl_code_gen.m"
            erl_backend__erl_code_gen__PutRef_50 = erl_backend__elds__elds_call_builtin_2_f_0((MR_String) "put", erl_backend__erl_code_gen__V_65_65);
          }
#line 1155 "erl_code_gen.m"
          {
#line 1155 "erl_code_gen.m"
            erl_backend__erl_code_gen__V_71_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1155 "erl_code_gen.m"
            MR_hl_field(MR_mktag(1), erl_backend__erl_code_gen__V_71_71, 0) = ((MR_Box) (erl_backend__erl_code_gen__RefExpr_48));
#line 1155 "erl_code_gen.m"
            MR_hl_field(MR_mktag(1), erl_backend__erl_code_gen__V_71_71, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1155 "erl_code_gen.m"
          }
#line 1155 "erl_code_gen.m"
          {
#line 1155 "erl_code_gen.m"
            erl_backend__erl_code_gen__GetRef_51 = erl_backend__elds__elds_call_builtin_2_f_0((MR_String) "get", erl_backend__erl_code_gen__V_71_71);
          }
#line 1156 "erl_code_gen.m"
          {
#line 1156 "erl_code_gen.m"
            erl_backend__erl_code_gen__EraseRef_52 = erl_backend__elds__elds_call_builtin_2_f_0((MR_String) "erase", erl_backend__erl_code_gen__V_71_71);
          }
#line 1162 "erl_code_gen.m"
          {
#line 1162 "erl_code_gen.m"
            hlds__goal_util__update_instmap_3_p_0(erl_backend__erl_code_gen__Cond_13, erl_backend__erl_code_gen__InstMap1_113, &erl_backend__erl_code_gen__InstMap2_114);
          }
#line 1163 "erl_code_gen.m"
          {
#line 1163 "erl_code_gen.m"
            erl_backend__erl_code_gen__erl_gen_goal_7_p_0(erl_backend__erl_code_gen__CodeModel_11, erl_backend__erl_code_gen__InstMap2_114, erl_backend__erl_code_gen__Then_14, erl_backend__erl_code_gen__MaybeSuccessExpr0_17, &erl_backend__erl_code_gen__ThenStatement_112, erl_backend__erl_code_gen__STATE_VARIABLE_Info_60_60, &erl_backend__erl_code_gen__STATE_VARIABLE_Info_76_76);
          }
#line 1165 "erl_code_gen.m"
          {
#line 1165 "erl_code_gen.m"
            erl_backend__erl_code_gen__PutAndThen_53 = erl_backend__elds__join_exprs_2_f_0(erl_backend__erl_code_gen__PutRef_50, erl_backend__erl_code_gen__ThenStatement_112);
          }
#line 1167 "erl_code_gen.m"
          {
#line 1167 "erl_code_gen.m"
            erl_backend__erl_code_gen__V_77_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1167 "erl_code_gen.m"
            MR_hl_field(MR_mktag(1), erl_backend__erl_code_gen__V_77_77, 0) = ((MR_Box) (erl_backend__erl_code_gen__PutAndThen_53));
#line 1167 "erl_code_gen.m"
          }
#line 1167 "erl_code_gen.m"
          {
#line 1167 "erl_code_gen.m"
            erl_backend__erl_code_gen__erl_gen_goal_7_p_0(erl_backend__erl_code_gen__CondCodeModel_22, erl_backend__erl_code_gen__InstMap1_113, erl_backend__erl_code_gen__Cond_13, erl_backend__erl_code_gen__V_77_77, &erl_backend__erl_code_gen__CondThen_54, erl_backend__erl_code_gen__STATE_VARIABLE_Info_76_76, &erl_backend__erl_code_gen__STATE_VARIABLE_Info_78_78);
          }
#line 1170 "erl_code_gen.m"
          {
#line 1170 "erl_code_gen.m"
            erl_backend__erl_code_gen__erl_gen_goal_7_p_0(erl_backend__erl_code_gen__CodeModel_11, erl_backend__erl_code_gen__InstMap1_113, erl_backend__erl_code_gen__Else_15, erl_backend__erl_code_gen__MaybeSuccessExpr0_17, &erl_backend__erl_code_gen__ElseStatement_115, erl_backend__erl_code_gen__STATE_VARIABLE_Info_78_78, erl_backend__erl_code_gen__STATE_VARIABLE_Info_58);
          }
#line 1174 "erl_code_gen.m"
          {
#line 1174 "erl_code_gen.m"
            erl_backend__erl_code_gen__V_83_83 = erl_backend__elds__elds_true_0_f_0();
          }
#line 1174 "erl_code_gen.m"
          {
#line 1174 "erl_code_gen.m"
            erl_backend__erl_code_gen__V_85_85 = erl_backend__elds__elds_true_0_f_0();
          }
#line 1174 "erl_code_gen.m"
          {
#line 1174 "erl_code_gen.m"
            erl_backend__erl_code_gen__V_84_84 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1174 "erl_code_gen.m"
            MR_hl_field(MR_mktag(2), erl_backend__erl_code_gen__V_84_84, 0) = ((MR_Box) (erl_backend__erl_code_gen__V_85_85));
#line 1174 "erl_code_gen.m"
          }
#line 1174 "erl_code_gen.m"
          {
#line 1174 "erl_code_gen.m"
            erl_backend__erl_code_gen__TrueCase_116 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1174 "erl_code_gen.m"
            MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__TrueCase_116, 0) = ((MR_Box) (erl_backend__erl_code_gen__V_83_83));
#line 1174 "erl_code_gen.m"
            MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__TrueCase_116, 1) = ((MR_Box) (erl_backend__erl_code_gen__V_84_84));
#line 1174 "erl_code_gen.m"
          }
#line 1175 "erl_code_gen.m"
          {
#line 1175 "erl_code_gen.m"
            erl_backend__erl_code_gen__OtherCase_56 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1175 "erl_code_gen.m"
            MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__OtherCase_56, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1175 "erl_code_gen.m"
            MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__OtherCase_56, 1) = ((MR_Box) (erl_backend__erl_code_gen__ElseStatement_115));
#line 1175 "erl_code_gen.m"
          }
#line 1173 "erl_code_gen.m"
          {
#line 1173 "erl_code_gen.m"
            erl_backend__erl_code_gen__V_81_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1173 "erl_code_gen.m"
            MR_hl_field(MR_mktag(1), erl_backend__erl_code_gen__V_81_81, 0) = ((MR_Box) (erl_backend__erl_code_gen__OtherCase_56));
#line 1173 "erl_code_gen.m"
            MR_hl_field(MR_mktag(1), erl_backend__erl_code_gen__V_81_81, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1173 "erl_code_gen.m"
          }
#line 1173 "erl_code_gen.m"
          {
#line 1173 "erl_code_gen.m"
            erl_backend__erl_code_gen__V_80_80 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1173 "erl_code_gen.m"
            MR_hl_field(MR_mktag(1), erl_backend__erl_code_gen__V_80_80, 0) = ((MR_Box) (erl_backend__erl_code_gen__TrueCase_116));
#line 1173 "erl_code_gen.m"
            MR_hl_field(MR_mktag(1), erl_backend__erl_code_gen__V_80_80, 1) = ((MR_Box) (erl_backend__erl_code_gen__V_81_81));
#line 1173 "erl_code_gen.m"
          }
#line 1173 "erl_code_gen.m"
          {
#line 1173 "erl_code_gen.m"
            erl_backend__erl_code_gen__CaseElse_55 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1173 "erl_code_gen.m"
            MR_hl_field(MR_mktag(3), erl_backend__erl_code_gen__CaseElse_55, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 1173 "erl_code_gen.m"
            MR_hl_field(MR_mktag(3), erl_backend__erl_code_gen__CaseElse_55, 1) = ((MR_Box) (erl_backend__erl_code_gen__GetRef_51));
#line 1173 "erl_code_gen.m"
            MR_hl_field(MR_mktag(3), erl_backend__erl_code_gen__CaseElse_55, 2) = ((MR_Box) (erl_backend__erl_code_gen__V_80_80));
#line 1173 "erl_code_gen.m"
          }
#line 1178 "erl_code_gen.m"
          {
#line 1178 "erl_code_gen.m"
            erl_backend__erl_code_gen__V_88_88 = erl_backend__elds__join_exprs_2_f_0(erl_backend__erl_code_gen__CondThen_54, erl_backend__erl_code_gen__CaseElse_55);
          }
#line 1178 "erl_code_gen.m"
          {
#line 1178 "erl_code_gen.m"
            erl_backend__erl_code_gen__V_91_91 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1178 "erl_code_gen.m"
            MR_hl_field(MR_mktag(1), erl_backend__erl_code_gen__V_91_91, 0) = ((MR_Box) (erl_backend__erl_code_gen__EraseRef_52));
#line 1178 "erl_code_gen.m"
          }
#line 1178 "erl_code_gen.m"
          {
#line 1178 "erl_code_gen.m"
            erl_backend__erl_code_gen__V_87_87 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 1178 "erl_code_gen.m"
            MR_hl_field(MR_mktag(3), erl_backend__erl_code_gen__V_87_87, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 1178 "erl_code_gen.m"
            MR_hl_field(MR_mktag(3), erl_backend__erl_code_gen__V_87_87, 1) = ((MR_Box) (erl_backend__erl_code_gen__V_88_88));
#line 1178 "erl_code_gen.m"
            MR_hl_field(MR_mktag(3), erl_backend__erl_code_gen__V_87_87, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1178 "erl_code_gen.m"
            MR_hl_field(MR_mktag(3), erl_backend__erl_code_gen__V_87_87, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1178 "erl_code_gen.m"
            MR_hl_field(MR_mktag(3), erl_backend__erl_code_gen__V_87_87, 4) = ((MR_Box) (erl_backend__erl_code_gen__V_91_91));
#line 1178 "erl_code_gen.m"
          }
#line 1177 "erl_code_gen.m"
          {
#line 1177 "erl_code_gen.m"
            *erl_backend__erl_code_gen__Statement_18 = erl_backend__elds__join_exprs_2_f_0(erl_backend__erl_code_gen__MakeRef_49, erl_backend__erl_code_gen__V_87_87);
          }
#line 1129 "erl_code_gen.m"
        }
#line 1059 "erl_code_gen.m"
        break;
#line 1059 "erl_code_gen.m"
      case (MR_Integer) 1:
#line 1076 "erl_code_gen.m"
        {
#line 1076 "erl_code_gen.m"
          MR_Word erl_backend__erl_code_gen__TypeCtorInfo_117_117;
#line 1076 "erl_code_gen.m"
          MR_Word erl_backend__erl_code_gen__CondVars_27;
#line 1076 "erl_code_gen.m"
          MR_Word erl_backend__erl_code_gen__InstMap0PostCond_28;
#line 1076 "erl_code_gen.m"
          MR_Word erl_backend__erl_code_gen__ThenVars_29;
#line 1076 "erl_code_gen.m"
          MR_Word erl_backend__erl_code_gen__ElseVars_30;
#line 1076 "erl_code_gen.m"
          MR_Word erl_backend__erl_code_gen__CondVarsList_31;
#line 1076 "erl_code_gen.m"
          MR_Word erl_backend__erl_code_gen__CondVarsTerm_32;
#line 1076 "erl_code_gen.m"
          MR_Word erl_backend__erl_code_gen__CondStatement0_33;
#line 1076 "erl_code_gen.m"
          MR_Word erl_backend__erl_code_gen__Subn_34;
#line 1076 "erl_code_gen.m"
          MR_Word erl_backend__erl_code_gen__BoundNonLocals_35;
#line 1076 "erl_code_gen.m"
          MR_Word erl_backend__erl_code_gen__MaybeMakeClosure_36;
#line 1076 "erl_code_gen.m"
          MR_Word erl_backend__erl_code_gen__MaybeSuccessExpr_37;
#line 1076 "erl_code_gen.m"
          MR_Word erl_backend__erl_code_gen__InstMap1_38;
#line 1076 "erl_code_gen.m"
          MR_Word erl_backend__erl_code_gen__InstMap2_39;
#line 1076 "erl_code_gen.m"
          MR_Word erl_backend__erl_code_gen__ThenStatement0_40;
#line 1076 "erl_code_gen.m"
          MR_Word erl_backend__erl_code_gen__ElseStatement0_41;
#line 1076 "erl_code_gen.m"
          MR_Word erl_backend__erl_code_gen__ElseStatement_42;
#line 1076 "erl_code_gen.m"
          MR_Word erl_backend__erl_code_gen__IfStatement_43;
#line 1076 "erl_code_gen.m"
          MR_Word erl_backend__erl_code_gen__V_92_92;
#line 1076 "erl_code_gen.m"
          MR_Word erl_backend__erl_code_gen__V_94_94;
#line 1076 "erl_code_gen.m"
          MR_Word erl_backend__erl_code_gen__STATE_VARIABLE_Info_95_95;
#line 1076 "erl_code_gen.m"
          MR_Word erl_backend__erl_code_gen__V_96_96;
#line 1076 "erl_code_gen.m"
          MR_Word erl_backend__erl_code_gen__STATE_VARIABLE_Info_97_97;
#line 1076 "erl_code_gen.m"
          MR_Word erl_backend__erl_code_gen__STATE_VARIABLE_Info_98_98;
#line 1076 "erl_code_gen.m"
          MR_Word erl_backend__erl_code_gen__STATE_VARIABLE_Info_99_99;
#line 1076 "erl_code_gen.m"
          MR_Word erl_backend__erl_code_gen__CondStatement_109;
#line 1076 "erl_code_gen.m"
          MR_Word erl_backend__erl_code_gen__CondDeterminism_110;
#line 1076 "erl_code_gen.m"
          MR_Word erl_backend__erl_code_gen__ThenStatement_111;

#line 1079 "erl_code_gen.m"
          {
#line 1079 "erl_code_gen.m"
            erl_backend__erl_code_util__erl_bound_nonlocals_in_goal_4_p_0(erl_backend__erl_code_gen__STATE_VARIABLE_Info_0_57, erl_backend__erl_code_gen__InstMap0_12, erl_backend__erl_code_gen__Cond_13, &erl_backend__erl_code_gen__CondVars_27);
          }
#line 1080 "erl_code_gen.m"
          {
#line 1080 "erl_code_gen.m"
            hlds__goal_util__update_instmap_3_p_0(erl_backend__erl_code_gen__Cond_13, erl_backend__erl_code_gen__InstMap0_12, &erl_backend__erl_code_gen__InstMap0PostCond_28);
          }
#line 1081 "erl_code_gen.m"
          {
#line 1081 "erl_code_gen.m"
            erl_backend__erl_code_util__erl_bound_nonlocals_in_goal_4_p_0(erl_backend__erl_code_gen__STATE_VARIABLE_Info_0_57, erl_backend__erl_code_gen__InstMap0PostCond_28, erl_backend__erl_code_gen__Then_14, &erl_backend__erl_code_gen__ThenVars_29);
          }
#line 1082 "erl_code_gen.m"
          {
#line 1082 "erl_code_gen.m"
            erl_backend__erl_code_util__erl_bound_nonlocals_in_goal_4_p_0(erl_backend__erl_code_gen__STATE_VARIABLE_Info_0_57, erl_backend__erl_code_gen__InstMap0_12, erl_backend__erl_code_gen__Else_15, &erl_backend__erl_code_gen__ElseVars_30);
          }
#line 2972 "erl_backend.erl_code_gen.c"
          erl_backend__erl_code_gen__TypeCtorInfo_117_117 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 1083 "erl_code_gen.m"
          {
#line 1083 "erl_code_gen.m"
            erl_backend__erl_code_gen__CondVarsList_31 = parse_tree__set_of_var__to_sorted_list_1_f_0(erl_backend__erl_code_gen__TypeCtorInfo_117_117, erl_backend__erl_code_gen__CondVars_27);
          }
#line 1087 "erl_code_gen.m"
          {
#line 1087 "erl_code_gen.m"
            erl_backend__erl_code_gen__V_92_92 = erl_backend__elds__exprs_from_vars_1_f_0(erl_backend__erl_code_gen__CondVarsList_31);
          }
#line 1087 "erl_code_gen.m"
          {
#line 1087 "erl_code_gen.m"
            erl_backend__erl_code_gen__CondVarsTerm_32 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1087 "erl_code_gen.m"
            MR_hl_field(MR_mktag(3), erl_backend__erl_code_gen__CondVarsTerm_32, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 1087 "erl_code_gen.m"
            MR_hl_field(MR_mktag(3), erl_backend__erl_code_gen__CondVarsTerm_32, 1) = ((MR_Box) (erl_backend__erl_code_gen__V_92_92));
#line 1087 "erl_code_gen.m"
          }
#line 1089 "erl_code_gen.m"
          {
#line 1089 "erl_code_gen.m"
            erl_backend__erl_code_gen__V_96_96 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1089 "erl_code_gen.m"
            MR_hl_field(MR_mktag(2), erl_backend__erl_code_gen__V_96_96, 0) = ((MR_Box) (erl_backend__erl_code_gen__CondVarsTerm_32));
#line 1089 "erl_code_gen.m"
          }
#line 1089 "erl_code_gen.m"
          {
#line 1089 "erl_code_gen.m"
            erl_backend__erl_code_gen__V_94_94 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1089 "erl_code_gen.m"
            MR_hl_field(MR_mktag(1), erl_backend__erl_code_gen__V_94_94, 0) = ((MR_Box) (erl_backend__erl_code_gen__V_96_96));
#line 1089 "erl_code_gen.m"
          }
#line 1088 "erl_code_gen.m"
          {
#line 1088 "erl_code_gen.m"
            erl_backend__erl_code_gen__erl_gen_goal_7_p_0((MR_Integer) 1, erl_backend__erl_code_gen__InstMap0_12, erl_backend__erl_code_gen__Cond_13, erl_backend__erl_code_gen__V_94_94, &erl_backend__erl_code_gen__CondStatement0_33, erl_backend__erl_code_gen__STATE_VARIABLE_Info_0_57, &erl_backend__erl_code_gen__STATE_VARIABLE_Info_95_95);
          }
#line 1092 "erl_code_gen.m"
          {
#line 1092 "erl_code_gen.m"
            erl_backend__erl_code_util__erl_create_renaming_4_p_0(erl_backend__erl_code_gen__CondVarsList_31, &erl_backend__erl_code_gen__Subn_34, erl_backend__erl_code_gen__STATE_VARIABLE_Info_95_95, &erl_backend__erl_code_gen__STATE_VARIABLE_Info_97_97);
          }
#line 1093 "erl_code_gen.m"
          {
#line 1093 "erl_code_gen.m"
            erl_backend__erl_code_util__erl_rename_vars_in_expr_3_p_0(erl_backend__erl_code_gen__Subn_34, erl_backend__erl_code_gen__CondStatement0_33, &erl_backend__erl_code_gen__CondStatement_109);
          }
#line 1098 "erl_code_gen.m"
          {
#line 1098 "erl_code_gen.m"
            erl_backend__erl_code_gen__BoundNonLocals_35 = parse_tree__set_of_var__union_2_f_0(erl_backend__erl_code_gen__TypeCtorInfo_117_117, erl_backend__erl_code_gen__ThenVars_29, erl_backend__erl_code_gen__ElseVars_30);
          }
#line 1099 "erl_code_gen.m"
          {
#line 1099 "erl_code_gen.m"
            erl_backend__erl_code_gen__maybe_create_closure_for_success_expr_8_p_0(erl_backend__erl_code_gen__BoundNonLocals_35, erl_backend__erl_code_gen__MaybeSuccessExpr0_17, &erl_backend__erl_code_gen__MaybeMakeClosure_36, &erl_backend__erl_code_gen__MaybeSuccessExpr_37, erl_backend__erl_code_gen__InstMap0_12, &erl_backend__erl_code_gen__InstMap1_38, erl_backend__erl_code_gen__STATE_VARIABLE_Info_97_97, &erl_backend__erl_code_gen__STATE_VARIABLE_Info_98_98);
          }
#line 1104 "erl_code_gen.m"
          {
#line 1104 "erl_code_gen.m"
            hlds__goal_util__update_instmap_3_p_0(erl_backend__erl_code_gen__Cond_13, erl_backend__erl_code_gen__InstMap1_38, &erl_backend__erl_code_gen__InstMap2_39);
          }
#line 1105 "erl_code_gen.m"
          {
#line 1105 "erl_code_gen.m"
            erl_backend__erl_code_gen__erl_gen_goal_7_p_0(erl_backend__erl_code_gen__CodeModel_11, erl_backend__erl_code_gen__InstMap2_39, erl_backend__erl_code_gen__Then_14, erl_backend__erl_code_gen__MaybeSuccessExpr_37, &erl_backend__erl_code_gen__ThenStatement0_40, erl_backend__erl_code_gen__STATE_VARIABLE_Info_98_98, &erl_backend__erl_code_gen__STATE_VARIABLE_Info_99_99);
          }
#line 1107 "erl_code_gen.m"
          {
#line 1107 "erl_code_gen.m"
            erl_backend__erl_code_gen__erl_gen_goal_7_p_0(erl_backend__erl_code_gen__CodeModel_11, erl_backend__erl_code_gen__InstMap1_38, erl_backend__erl_code_gen__Else_15, erl_backend__erl_code_gen__MaybeSuccessExpr_37, &erl_backend__erl_code_gen__ElseStatement0_41, erl_backend__erl_code_gen__STATE_VARIABLE_Info_99_99, erl_backend__erl_code_gen__STATE_VARIABLE_Info_58);
          }
#line 1111 "erl_code_gen.m"
          {
#line 1111 "erl_code_gen.m"
            erl_backend__erl_code_util__erl_bind_unbound_vars_6_p_0(*erl_backend__erl_code_gen__STATE_VARIABLE_Info_58, erl_backend__erl_code_gen__ElseVars_30, erl_backend__erl_code_gen__Then_14, erl_backend__erl_code_gen__InstMap1_38, erl_backend__erl_code_gen__ThenStatement0_40, &erl_backend__erl_code_gen__ThenStatement_111);
          }
#line 1113 "erl_code_gen.m"
          {
#line 1113 "erl_code_gen.m"
            erl_backend__erl_code_util__erl_bind_unbound_vars_6_p_0(*erl_backend__erl_code_gen__STATE_VARIABLE_Info_58, erl_backend__erl_code_gen__ThenVars_29, erl_backend__erl_code_gen__Else_15, erl_backend__erl_code_gen__InstMap0_12, erl_backend__erl_code_gen__ElseStatement0_41, &erl_backend__erl_code_gen__ElseStatement_42);
          }
#line 1116 "erl_code_gen.m"
          {
#line 1116 "erl_code_gen.m"
            erl_backend__erl_code_gen__CondDeterminism_110 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(erl_backend__erl_code_gen__CondGoalInfo_21);
          }
#line 1117 "erl_code_gen.m"
          erl_backend__erl_code_gen__succeeded = (erl_backend__erl_code_gen__CondDeterminism_110 == (MR_Integer) 7);
#line 1121 "erl_code_gen.m"
          if (erl_backend__erl_code_gen__succeeded)
#line 1120 "erl_code_gen.m"
            {
#line 1120 "erl_code_gen.m"
              erl_backend__erl_code_gen__IfStatement_43 = erl_backend__elds__join_exprs_2_f_0(erl_backend__erl_code_gen__CondStatement_109, erl_backend__erl_code_gen__ElseStatement_42);
            }
#line 1121 "erl_code_gen.m"
          else
#line 1122 "erl_code_gen.m"
            {
#line 1122 "erl_code_gen.m"
              MR_Word erl_backend__erl_code_gen__CaseExpr_44;
#line 1122 "erl_code_gen.m"
              MR_Word erl_backend__erl_code_gen__TrueCase_45;
#line 1122 "erl_code_gen.m"
              MR_Word erl_backend__erl_code_gen__FalseCase_46;
#line 1122 "erl_code_gen.m"
              MR_Word erl_backend__erl_code_gen__V_101_101;
#line 1122 "erl_code_gen.m"
              MR_Word erl_backend__erl_code_gen__V_102_102;

#line 1123 "erl_code_gen.m"
              {
#line 1123 "erl_code_gen.m"
                erl_backend__erl_code_gen__TrueCase_45 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1123 "erl_code_gen.m"
                MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__TrueCase_45, 0) = ((MR_Box) (erl_backend__erl_code_gen__CondVarsTerm_32));
#line 1123 "erl_code_gen.m"
                MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__TrueCase_45, 1) = ((MR_Box) (erl_backend__erl_code_gen__ThenStatement_111));
#line 1123 "erl_code_gen.m"
              }
#line 1124 "erl_code_gen.m"
              {
#line 1124 "erl_code_gen.m"
                erl_backend__erl_code_gen__FalseCase_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1124 "erl_code_gen.m"
                MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__FalseCase_46, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1124 "erl_code_gen.m"
                MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__FalseCase_46, 1) = ((MR_Box) (erl_backend__erl_code_gen__ElseStatement_42));
#line 1124 "erl_code_gen.m"
              }
#line 1122 "erl_code_gen.m"
              {
#line 1122 "erl_code_gen.m"
                erl_backend__erl_code_gen__V_102_102 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1122 "erl_code_gen.m"
                MR_hl_field(MR_mktag(1), erl_backend__erl_code_gen__V_102_102, 0) = ((MR_Box) (erl_backend__erl_code_gen__FalseCase_46));
#line 1122 "erl_code_gen.m"
                MR_hl_field(MR_mktag(1), erl_backend__erl_code_gen__V_102_102, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1122 "erl_code_gen.m"
              }
#line 1122 "erl_code_gen.m"
              {
#line 1122 "erl_code_gen.m"
                erl_backend__erl_code_gen__V_101_101 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1122 "erl_code_gen.m"
                MR_hl_field(MR_mktag(1), erl_backend__erl_code_gen__V_101_101, 0) = ((MR_Box) (erl_backend__erl_code_gen__TrueCase_45));
#line 1122 "erl_code_gen.m"
                MR_hl_field(MR_mktag(1), erl_backend__erl_code_gen__V_101_101, 1) = ((MR_Box) (erl_backend__erl_code_gen__V_102_102));
#line 1122 "erl_code_gen.m"
              }
#line 1122 "erl_code_gen.m"
              {
#line 1122 "erl_code_gen.m"
                erl_backend__erl_code_gen__CaseExpr_44 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1122 "erl_code_gen.m"
                MR_hl_field(MR_mktag(3), erl_backend__erl_code_gen__CaseExpr_44, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 1122 "erl_code_gen.m"
                MR_hl_field(MR_mktag(3), erl_backend__erl_code_gen__CaseExpr_44, 1) = ((MR_Box) (erl_backend__erl_code_gen__CondStatement_109));
#line 1122 "erl_code_gen.m"
                MR_hl_field(MR_mktag(3), erl_backend__erl_code_gen__CaseExpr_44, 2) = ((MR_Box) (erl_backend__erl_code_gen__V_101_101));
#line 1122 "erl_code_gen.m"
              }
#line 1125 "erl_code_gen.m"
              {
#line 1125 "erl_code_gen.m"
                erl_backend__erl_code_util__maybe_simplify_nested_cases_2_p_0(erl_backend__erl_code_gen__CaseExpr_44, &erl_backend__erl_code_gen__IfStatement_43);
              }
#line 1122 "erl_code_gen.m"
            }
#line 1127 "erl_code_gen.m"
          {
#line 1127 "erl_code_gen.m"
            *erl_backend__erl_code_gen__Statement_18 = erl_backend__elds__maybe_join_exprs1_2_f_0(erl_backend__erl_code_gen__MaybeMakeClosure_36, erl_backend__erl_code_gen__IfStatement_43);
          }
#line 1076 "erl_code_gen.m"
        }
#line 1059 "erl_code_gen.m"
        break;
#line 1059 "erl_code_gen.m"
    }
#line 1037 "erl_code_gen.m"
  }
#line 1031 "erl_code_gen.m"
}

#line 846 "erl_code_gen.m"
static void MR_CALL 
erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_10_p_0_10(
#line 846 "erl_code_gen.m"
  MR_Box erl_backend__erl_code_gen__closure_arg,
#line 846 "erl_code_gen.m"
  MR_Box erl_backend__erl_code_gen__wrapper_arg_1,
#line 846 "erl_code_gen.m"
  MR_Box * erl_backend__erl_code_gen__wrapper_arg_2,
#line 846 "erl_code_gen.m"
  MR_Box erl_backend__erl_code_gen__wrapper_arg_3,
#line 846 "erl_code_gen.m"
  MR_Box * erl_backend__erl_code_gen__wrapper_arg_4)
#line 846 "erl_code_gen.m"
{
#line 846 "erl_code_gen.m"
  {
#line 846 "erl_code_gen.m"
    MR_Box erl_backend__erl_code_gen__closure = erl_backend__erl_code_gen__closure_arg;
#line 846 "erl_code_gen.m"
    MR_Word erl_backend__erl_code_gen__conv6_ELDSCase_16;
#line 846 "erl_code_gen.m"
    MR_Word erl_backend__erl_code_gen__conv5_STATE_VARIABLE_Info_30;

#line 846 "erl_code_gen.m"
    {
#line 846 "erl_code_gen.m"
      erl_backend__erl_code_gen__erl_gen_case_9_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__closure, (MR_Integer) 6))), ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__closure, (MR_Integer) 7))), ((MR_Word) erl_backend__erl_code_gen__wrapper_arg_1), &erl_backend__erl_code_gen__conv6_ELDSCase_16, ((MR_Word) erl_backend__erl_code_gen__wrapper_arg_3), &erl_backend__erl_code_gen__conv5_STATE_VARIABLE_Info_30);
    }
#line 846 "erl_code_gen.m"
    *erl_backend__erl_code_gen__wrapper_arg_2 = ((MR_Box) (erl_backend__erl_code_gen__conv6_ELDSCase_16));
#line 846 "erl_code_gen.m"
    *erl_backend__erl_code_gen__wrapper_arg_4 = ((MR_Box) (erl_backend__erl_code_gen__conv5_STATE_VARIABLE_Info_30));
#line 846 "erl_code_gen.m"
  }
#line 846 "erl_code_gen.m"
}

#line 841 "erl_code_gen.m"
static void MR_CALL 
erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_10_p_0_9(
#line 841 "erl_code_gen.m"
  MR_Box erl_backend__erl_code_gen__closure_arg,
#line 841 "erl_code_gen.m"
  MR_Box erl_backend__erl_code_gen__wrapper_arg_1,
#line 841 "erl_code_gen.m"
  MR_Box * erl_backend__erl_code_gen__wrapper_arg_2,
#line 841 "erl_code_gen.m"
  MR_Box erl_backend__erl_code_gen__wrapper_arg_3,
#line 841 "erl_code_gen.m"
  MR_Box * erl_backend__erl_code_gen__wrapper_arg_4)
#line 841 "erl_code_gen.m"
{
#line 841 "erl_code_gen.m"
  {
#line 841 "erl_code_gen.m"
    MR_Box erl_backend__erl_code_gen__closure = erl_backend__erl_code_gen__closure_arg;
#line 841 "erl_code_gen.m"
    MR_Word erl_backend__erl_code_gen__conv4_ELDSCase_14;
#line 841 "erl_code_gen.m"
    MR_Word erl_backend__erl_code_gen__conv3_STATE_VARIABLE_Info_25;

#line 841 "erl_code_gen.m"
    {
#line 841 "erl_code_gen.m"
      erl_backend__erl_code_gen__erl_gen_case_on_atom_8_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__closure, (MR_Integer) 6))), ((MR_Word) erl_backend__erl_code_gen__wrapper_arg_1), &erl_backend__erl_code_gen__conv4_ELDSCase_14, ((MR_Word) erl_backend__erl_code_gen__wrapper_arg_3), &erl_backend__erl_code_gen__conv3_STATE_VARIABLE_Info_25);
    }
#line 841 "erl_code_gen.m"
    *erl_backend__erl_code_gen__wrapper_arg_2 = ((MR_Box) (erl_backend__erl_code_gen__conv4_ELDSCase_14));
#line 841 "erl_code_gen.m"
    *erl_backend__erl_code_gen__wrapper_arg_4 = ((MR_Box) (erl_backend__erl_code_gen__conv3_STATE_VARIABLE_Info_25));
#line 841 "erl_code_gen.m"
  }
#line 841 "erl_code_gen.m"
}

#line 788 "erl_code_gen.m"
static MR_Box MR_CALL 
erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_10_p_0_1(
#line 788 "erl_code_gen.m"
  MR_Box erl_backend__erl_code_gen__closure_arg,
#line 788 "erl_code_gen.m"
  MR_Box erl_backend__erl_code_gen__wrapper_arg_1)
#line 788 "erl_code_gen.m"
{
#line 788 "erl_code_gen.m"
  {
#line 788 "erl_code_gen.m"
    MR_Box erl_backend__erl_code_gen__wrapper_arg_2;
#line 788 "erl_code_gen.m"
    MR_Box erl_backend__erl_code_gen__closure = erl_backend__erl_code_gen__closure_arg;
#line 788 "erl_code_gen.m"
    MR_Word erl_backend__erl_code_gen__conv0_LambdaHeadVar__2_50;

#line 788 "erl_code_gen.m"
    {
#line 788 "erl_code_gen.m"
      erl_backend__erl_code_gen__conv0_LambdaHeadVar__2_50 = erl_backend__erl_code_gen__IntroducedFrom__func__erl_gen_switch__788__1_1_f_0(((MR_Word) erl_backend__erl_code_gen__wrapper_arg_1));
    }
#line 788 "erl_code_gen.m"
    erl_backend__erl_code_gen__wrapper_arg_2 = ((MR_Box) (erl_backend__erl_code_gen__conv0_LambdaHeadVar__2_50));
#line 788 "erl_code_gen.m"
    return erl_backend__erl_code_gen__wrapper_arg_2;
#line 788 "erl_code_gen.m"
  }
#line 788 "erl_code_gen.m"
}

#line 821 "erl_code_gen.m"
static void MR_CALL 
erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_10_p_0_2(
#line 821 "erl_code_gen.m"
  void * erl_backend__erl_code_gen__env_ptr_arg)
#line 821 "erl_code_gen.m"
{
#line 821 "erl_code_gen.m"
  {
#line 821 "erl_code_gen.m"
    struct erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_95_49_48_95_112_95_48_95_101_110_118_0_s * erl_backend__erl_code_gen__env_ptr = (struct erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_95_49_48_95_112_95_48_95_101_110_118_0_s *) erl_backend__erl_code_gen__env_ptr_arg;

#line 821 "erl_code_gen.m"
    MR_builtin_longjmp((erl_backend__erl_code_gen__env_ptr)->erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__commit_0, 1);
#line 821 "erl_code_gen.m"
  }
#line 821 "erl_code_gen.m"
}

#line 823 "erl_code_gen.m"
static void MR_CALL 
erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_10_p_0_4(
#line 823 "erl_code_gen.m"
  void * erl_backend__erl_code_gen__env_ptr_arg)
#line 823 "erl_code_gen.m"
{
#line 823 "erl_code_gen.m"
  {
#line 823 "erl_code_gen.m"
    struct erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_95_49_48_95_112_95_48_95_101_110_118_0_s * erl_backend__erl_code_gen__env_ptr = (struct erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_95_49_48_95_112_95_48_95_101_110_118_0_s *) erl_backend__erl_code_gen__env_ptr_arg;

#line 823 "erl_code_gen.m"
    (erl_backend__erl_code_gen__env_ptr)->erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__V_57_57 = ((MR_Word) (erl_backend__erl_code_gen__env_ptr)->erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__conv1_V_57_57);
#line 823 "erl_code_gen.m"
    {
#line 823 "erl_code_gen.m"
      erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_10_p_0_3(erl_backend__erl_code_gen__env_ptr);
    }
#line 823 "erl_code_gen.m"
  }
#line 823 "erl_code_gen.m"
}

#line 821 "erl_code_gen.m"
static void MR_CALL 
erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_10_p_0_5(
#line 821 "erl_code_gen.m"
  void * erl_backend__erl_code_gen__env_ptr_arg)
#line 821 "erl_code_gen.m"
{
#line 821 "erl_code_gen.m"
  {
#line 821 "erl_code_gen.m"
    struct erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_95_49_48_95_112_95_48_95_101_110_118_0_s * erl_backend__erl_code_gen__env_ptr = (struct erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_95_49_48_95_112_95_48_95_101_110_118_0_s *) erl_backend__erl_code_gen__env_ptr_arg;

#line 821 "erl_code_gen.m"
    {
#line 831 "erl_code_gen.m"
      MR_Integer erl_backend__erl_code_gen__V_59_59;

#line 831 "erl_code_gen.m"
      {
#line 831 "erl_code_gen.m"
        erl_backend__erl_code_gen__V_59_59 = mercury__string__length_1_f_0((erl_backend__erl_code_gen__env_ptr)->erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__String_32);
      }
#line 831 "erl_code_gen.m"
      (erl_backend__erl_code_gen__env_ptr)->erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__succeeded = (erl_backend__erl_code_gen__V_59_59 <= (MR_Integer) 255);
#line 830 "erl_code_gen.m"
      (erl_backend__erl_code_gen__env_ptr)->erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__succeeded = !((erl_backend__erl_code_gen__env_ptr)->erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__succeeded);
#line 830 "erl_code_gen.m"
      if ((erl_backend__erl_code_gen__env_ptr)->erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__succeeded)
#line 830 "erl_code_gen.m"
        {
#line 830 "erl_code_gen.m"
          erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_10_p_0_2(erl_backend__erl_code_gen__env_ptr);
        }
#line 821 "erl_code_gen.m"
    }
#line 821 "erl_code_gen.m"
  }
#line 821 "erl_code_gen.m"
}

#line 827 "erl_code_gen.m"
static void MR_CALL 
erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_10_p_0_7(
#line 827 "erl_code_gen.m"
  void * erl_backend__erl_code_gen__env_ptr_arg)
#line 827 "erl_code_gen.m"
{
#line 827 "erl_code_gen.m"
  {
#line 827 "erl_code_gen.m"
    struct erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_95_49_48_95_112_95_48_95_101_110_118_0_s * erl_backend__erl_code_gen__env_ptr = (struct erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_95_49_48_95_112_95_48_95_101_110_118_0_s *) erl_backend__erl_code_gen__env_ptr_arg;

#line 827 "erl_code_gen.m"
    (erl_backend__erl_code_gen__env_ptr)->erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__V_58_58 = ((MR_Word) (erl_backend__erl_code_gen__env_ptr)->erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__conv2_V_58_58);
#line 827 "erl_code_gen.m"
    {
#line 827 "erl_code_gen.m"
      erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_10_p_0_6(erl_backend__erl_code_gen__env_ptr);
    }
#line 827 "erl_code_gen.m"
  }
#line 827 "erl_code_gen.m"
}

#line 827 "erl_code_gen.m"
static void MR_CALL 
erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_10_p_0_6(
#line 827 "erl_code_gen.m"
  void * erl_backend__erl_code_gen__env_ptr_arg)
#line 827 "erl_code_gen.m"
{
#line 827 "erl_code_gen.m"
  {
#line 827 "erl_code_gen.m"
    struct erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_95_49_48_95_112_95_48_95_101_110_118_0_s * erl_backend__erl_code_gen__env_ptr = (struct erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_95_49_48_95_112_95_48_95_101_110_118_0_s *) erl_backend__erl_code_gen__env_ptr_arg;

#line 827 "erl_code_gen.m"
    (erl_backend__erl_code_gen__env_ptr)->erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__succeeded = ((((MR_tag((MR_Word) (erl_backend__erl_code_gen__env_ptr)->erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__V_58_58)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), (erl_backend__erl_code_gen__env_ptr)->erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__V_58_58, (MR_Integer) 0)))) == (MR_Integer) 8)));
#line 827 "erl_code_gen.m"
    if ((erl_backend__erl_code_gen__env_ptr)->erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__succeeded)
#line 827 "erl_code_gen.m"
      {
#line 827 "erl_code_gen.m"
        (erl_backend__erl_code_gen__env_ptr)->erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__String_32 = ((MR_String) (MR_hl_field(MR_mktag(3), (erl_backend__erl_code_gen__env_ptr)->erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__V_58_58, (MR_Integer) 1)));
#line 827 "erl_code_gen.m"
        {
#line 827 "erl_code_gen.m"
          erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_10_p_0_5(erl_backend__erl_code_gen__env_ptr);
        }
#line 827 "erl_code_gen.m"
      }
#line 827 "erl_code_gen.m"
  }
#line 827 "erl_code_gen.m"
}

#line 821 "erl_code_gen.m"
static void MR_CALL 
erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_10_p_0_3(
#line 821 "erl_code_gen.m"
  void * erl_backend__erl_code_gen__env_ptr_arg)
#line 821 "erl_code_gen.m"
{
#line 821 "erl_code_gen.m"
  {
#line 821 "erl_code_gen.m"
    struct erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_95_49_48_95_112_95_48_95_101_110_118_0_s * erl_backend__erl_code_gen__env_ptr = (struct erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_95_49_48_95_112_95_48_95_101_110_118_0_s *) erl_backend__erl_code_gen__env_ptr_arg;

#line 821 "erl_code_gen.m"
    {
#line 823 "erl_code_gen.m"
      MR_Word erl_backend__erl_code_gen__V_35_35;

#line 823 "erl_code_gen.m"
      (erl_backend__erl_code_gen__env_ptr)->erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__MainConsId_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), (erl_backend__erl_code_gen__env_ptr)->erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__V_57_57, (MR_Integer) 0)));
#line 823 "erl_code_gen.m"
      (erl_backend__erl_code_gen__env_ptr)->erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__OtherConsIds_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), (erl_backend__erl_code_gen__env_ptr)->erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__V_57_57, (MR_Integer) 1)));
#line 823 "erl_code_gen.m"
      erl_backend__erl_code_gen__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), (erl_backend__erl_code_gen__env_ptr)->erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__V_57_57, (MR_Integer) 2)));
#line 825 "erl_code_gen.m"
      (erl_backend__erl_code_gen__env_ptr)->erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__succeeded = ((((MR_tag((MR_Word) (erl_backend__erl_code_gen__env_ptr)->erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__MainConsId_33)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), (erl_backend__erl_code_gen__env_ptr)->erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__MainConsId_33, (MR_Integer) 0)))) == (MR_Integer) 8)));
#line 825 "erl_code_gen.m"
      if ((erl_backend__erl_code_gen__env_ptr)->erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__succeeded)
#line 825 "erl_code_gen.m"
        {
#line 825 "erl_code_gen.m"
          (erl_backend__erl_code_gen__env_ptr)->erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__String_32 = ((MR_String) (MR_hl_field(MR_mktag(3), (erl_backend__erl_code_gen__env_ptr)->erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__MainConsId_33, (MR_Integer) 1)));
#line 825 "erl_code_gen.m"
          {
#line 825 "erl_code_gen.m"
            erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_10_p_0_5(erl_backend__erl_code_gen__env_ptr);
          }
#line 825 "erl_code_gen.m"
        }
#line 827 "erl_code_gen.m"
      {
#line 827 "erl_code_gen.m"
        {
#line 827 "erl_code_gen.m"
          mercury__list__member_2_p_1((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0, &(erl_backend__erl_code_gen__env_ptr)->erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__conv2_V_58_58, (erl_backend__erl_code_gen__env_ptr)->erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__OtherConsIds_34, erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_10_p_0_7, erl_backend__erl_code_gen__env_ptr);
        }
#line 827 "erl_code_gen.m"
      }
#line 821 "erl_code_gen.m"
    }
#line 821 "erl_code_gen.m"
  }
#line 821 "erl_code_gen.m"
}

#line 821 "erl_code_gen.m"
static void MR_CALL 
erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_10_p_0_8(
#line 821 "erl_code_gen.m"
  void * erl_backend__erl_code_gen__env_ptr_arg)
#line 821 "erl_code_gen.m"
{
#line 821 "erl_code_gen.m"
  {
#line 821 "erl_code_gen.m"
    struct erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_95_49_48_95_112_95_48_95_101_110_118_0_s * erl_backend__erl_code_gen__env_ptr = (struct erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_95_49_48_95_112_95_48_95_101_110_118_0_s *) erl_backend__erl_code_gen__env_ptr_arg;

#line 821 "erl_code_gen.m"
    if (MR_builtin_setjmp((erl_backend__erl_code_gen__env_ptr)->erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__commit_0) == 0)
#line 821 "erl_code_gen.m"
      {
#line 823 "erl_code_gen.m"
        {
#line 823 "erl_code_gen.m"
          mercury__list__member_2_p_1((erl_backend__erl_code_gen__env_ptr)->erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__TypeCtorInfo_85_85, &(erl_backend__erl_code_gen__env_ptr)->erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__conv1_V_57_57, (erl_backend__erl_code_gen__env_ptr)->erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__CasesList_13, erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_10_p_0_4, erl_backend__erl_code_gen__env_ptr);
        }
#line 821 "erl_code_gen.m"
        (erl_backend__erl_code_gen__env_ptr)->erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__succeeded = MR_FALSE;
#line 821 "erl_code_gen.m"
      }
#line 821 "erl_code_gen.m"
    else
#line 821 "erl_code_gen.m"
      (erl_backend__erl_code_gen__env_ptr)->erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__succeeded = MR_TRUE;
#line 821 "erl_code_gen.m"
  }
#line 821 "erl_code_gen.m"
}

#line 753 "erl_code_gen.m"
static void MR_CALL 
erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_10_p_0(
#line 753 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__Var_11,
#line 753 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__CanFail_12,
#line 753 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__CasesList_13,
#line 753 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__CodeModel_14,
#line 753 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__InstMap0_15,
#line 753 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__MaybeSuccessExpr0_17,
#line 753 "erl_code_gen.m"
  MR_Word * erl_backend__erl_code_gen__Statement_18,
#line 753 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__STATE_VARIABLE_Info_0_46,
#line 753 "erl_code_gen.m"
  MR_Word * erl_backend__erl_code_gen__STATE_VARIABLE_Info_47)
#line 753 "erl_code_gen.m"
{
#line 753 "erl_code_gen.m"
  {
#line 753 "erl_code_gen.m"
    struct erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_95_49_48_95_112_95_48_95_101_110_118_0_s erl_backend__erl_code_gen__env;

#line 753 "erl_code_gen.m"
    (erl_backend__erl_code_gen__env).erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__CasesList_13 = erl_backend__erl_code_gen__CasesList_13;
#line 758 "erl_code_gen.m"
    {
#line 758 "erl_code_gen.m"
      MR_Word erl_backend__erl_code_gen__TypeCtorInfo_96_96;
#line 758 "erl_code_gen.m"
      MR_Word erl_backend__erl_code_gen__CasesGoals_20;
#line 758 "erl_code_gen.m"
      MR_Word erl_backend__erl_code_gen__NonLocalsBoundInCases_24;
#line 758 "erl_code_gen.m"
      MR_Word erl_backend__erl_code_gen__MaybeMakeClosure_25;
#line 758 "erl_code_gen.m"
      MR_Word erl_backend__erl_code_gen__MaybeSuccessExpr_26;
#line 758 "erl_code_gen.m"
      MR_Word erl_backend__erl_code_gen__InstMap_27;
#line 758 "erl_code_gen.m"
      MR_Word erl_backend__erl_code_gen__VarType_28;
#line 758 "erl_code_gen.m"
      MR_Word erl_backend__erl_code_gen__ModuleInfo_29;
#line 758 "erl_code_gen.m"
      MR_Word erl_backend__erl_code_gen__TypeCtorCategory_30;
#line 758 "erl_code_gen.m"
      MR_Word erl_backend__erl_code_gen__MaybeConvertToAtom_39;
#line 758 "erl_code_gen.m"
      MR_Word erl_backend__erl_code_gen__SwitchVar_40;
#line 758 "erl_code_gen.m"
      MR_Word erl_backend__erl_code_gen__GenCase_41;
#line 758 "erl_code_gen.m"
      MR_Word erl_backend__erl_code_gen__ErlCases0_42;
#line 758 "erl_code_gen.m"
      MR_Word erl_backend__erl_code_gen__ErlCases_44;
#line 758 "erl_code_gen.m"
      MR_Word erl_backend__erl_code_gen__CaseExpr_45;
#line 758 "erl_code_gen.m"
      MR_Word erl_backend__erl_code_gen__STATE_VARIABLE_Info_51_51;
#line 758 "erl_code_gen.m"
      MR_Word erl_backend__erl_code_gen__STATE_VARIABLE_Info_62_62;
#line 758 "erl_code_gen.m"
      MR_Word erl_backend__erl_code_gen__V_78_78;
#line 758 "erl_code_gen.m"
      MR_Word erl_backend__erl_code_gen__V_79_79;
#line 807 "erl_code_gen.m"
      MR_Word erl_backend__erl_code_gen__Globals_31;
#line 807 "erl_code_gen.m"
      MR_Word erl_backend__erl_code_gen__V_52_52;
#line 807 "erl_code_gen.m"
      MR_Word erl_backend__erl_code_gen__V_53_53;
#line 807 "erl_code_gen.m"
      MR_Word erl_backend__erl_code_gen__V_54_54;
#line 807 "erl_code_gen.m"
      MR_Integer erl_backend__erl_code_gen__V_55_55;
#line 807 "erl_code_gen.m"
      MR_Integer erl_backend__erl_code_gen__V_56_56;
#line 851 "erl_code_gen.m"
      MR_Box erl_backend__erl_code_gen__conv7_STATE_VARIABLE_Info_47;

#line 3584 "erl_backend.erl_code_gen.c"
      (erl_backend__erl_code_gen__env).erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__TypeCtorInfo_85_85 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0;
#line 788 "erl_code_gen.m"
      {
#line 788 "erl_code_gen.m"
        erl_backend__erl_code_gen__CasesGoals_20 = mercury__list__map_2_f_0((erl_backend__erl_code_gen__env).erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__TypeCtorInfo_85_85, (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, (MR_Word) &erl_backend__erl_code_gen_scalar_common_3[1], (erl_backend__erl_code_gen__env).erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__CasesList_13);
      }
#line 789 "erl_code_gen.m"
      {
#line 789 "erl_code_gen.m"
        erl_backend__erl_code_gen__union_bound_nonlocals_in_goals_4_p_0(erl_backend__erl_code_gen__STATE_VARIABLE_Info_0_46, erl_backend__erl_code_gen__InstMap0_15, erl_backend__erl_code_gen__CasesGoals_20, &erl_backend__erl_code_gen__NonLocalsBoundInCases_24);
      }
#line 794 "erl_code_gen.m"
      {
#line 794 "erl_code_gen.m"
        erl_backend__erl_code_gen__maybe_create_closure_for_success_expr_8_p_0(erl_backend__erl_code_gen__NonLocalsBoundInCases_24, erl_backend__erl_code_gen__MaybeSuccessExpr0_17, &erl_backend__erl_code_gen__MaybeMakeClosure_25, &erl_backend__erl_code_gen__MaybeSuccessExpr_26, erl_backend__erl_code_gen__InstMap0_15, &erl_backend__erl_code_gen__InstMap_27, erl_backend__erl_code_gen__STATE_VARIABLE_Info_0_46, &erl_backend__erl_code_gen__STATE_VARIABLE_Info_51_51);
      }
#line 798 "erl_code_gen.m"
      {
#line 798 "erl_code_gen.m"
        erl_backend__erl_code_util__erl_variable_type_3_p_0(erl_backend__erl_code_gen__STATE_VARIABLE_Info_51_51, erl_backend__erl_code_gen__Var_11, &erl_backend__erl_code_gen__VarType_28);
      }
#line 799 "erl_code_gen.m"
      {
#line 799 "erl_code_gen.m"
        erl_backend__erl_code_util__erl_gen_info_get_module_info_2_p_0(erl_backend__erl_code_gen__STATE_VARIABLE_Info_51_51, &erl_backend__erl_code_gen__ModuleInfo_29);
      }
#line 800 "erl_code_gen.m"
      {
#line 800 "erl_code_gen.m"
        erl_backend__erl_code_gen__TypeCtorCategory_30 = check_hlds__type_util__classify_type_2_f_0(erl_backend__erl_code_gen__ModuleInfo_29, erl_backend__erl_code_gen__VarType_28);
      }
#line 807 "erl_code_gen.m"
      (erl_backend__erl_code_gen__env).erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__succeeded = ((MR_tag((MR_Word) erl_backend__erl_code_gen__TypeCtorCategory_30)) == (MR_mktag((MR_Integer) 1)));
#line 807 "erl_code_gen.m"
      if ((erl_backend__erl_code_gen__env).erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__succeeded)
#line 807 "erl_code_gen.m"
        {
#line 807 "erl_code_gen.m"
          erl_backend__erl_code_gen__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__erl_code_gen__TypeCtorCategory_30, (MR_Integer) 0)));
#line 807 "erl_code_gen.m"
          (erl_backend__erl_code_gen__env).erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__succeeded = (erl_backend__erl_code_gen__V_52_52 == (MR_Integer) 3);
#line 807 "erl_code_gen.m"
          if ((erl_backend__erl_code_gen__env).erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__succeeded)
#line 807 "erl_code_gen.m"
            {
#line 812 "erl_code_gen.m"
              {
#line 812 "erl_code_gen.m"
                hlds__hlds_module__module_info_get_globals_2_p_0(erl_backend__erl_code_gen__ModuleInfo_29, &erl_backend__erl_code_gen__Globals_31);
              }
#line 813 "erl_code_gen.m"
              erl_backend__erl_code_gen__V_53_53 = (MR_Integer) 479;
#line 814 "erl_code_gen.m"
              erl_backend__erl_code_gen__V_54_54 = (MR_Integer) 1;
#line 813 "erl_code_gen.m"
              {
#line 813 "erl_code_gen.m"
                (erl_backend__erl_code_gen__env).erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__succeeded = libs__globals__lookup_bool_option_3_p_1(erl_backend__erl_code_gen__Globals_31, erl_backend__erl_code_gen__V_53_53, erl_backend__erl_code_gen__V_54_54);
              }
#line 807 "erl_code_gen.m"
              if ((erl_backend__erl_code_gen__env).erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__succeeded)
#line 807 "erl_code_gen.m"
                {
#line 816 "erl_code_gen.m"
                  {
#line 816 "erl_code_gen.m"
                    erl_backend__erl_code_gen__V_55_55 = mercury__list__length_1_f_0((erl_backend__erl_code_gen__env).erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__TypeCtorInfo_85_85, (erl_backend__erl_code_gen__env).erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__CasesList_13);
                  }
#line 751 "erl_code_gen.m"
                  erl_backend__erl_code_gen__V_56_56 = (MR_Integer) 50;
#line 816 "erl_code_gen.m"
                  (erl_backend__erl_code_gen__env).erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__succeeded = (erl_backend__erl_code_gen__V_55_55 > erl_backend__erl_code_gen__V_56_56);
#line 807 "erl_code_gen.m"
                  if ((erl_backend__erl_code_gen__env).erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__succeeded)
#line 807 "erl_code_gen.m"
                    {
#line 821 "erl_code_gen.m"
                      {
#line 821 "erl_code_gen.m"
                        erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_10_p_0_8(&erl_backend__erl_code_gen__env);
                      }
#line 821 "erl_code_gen.m"
                      (erl_backend__erl_code_gen__env).erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__succeeded = !((erl_backend__erl_code_gen__env).erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__succeeded);
#line 807 "erl_code_gen.m"
                    }
#line 807 "erl_code_gen.m"
                }
#line 807 "erl_code_gen.m"
            }
#line 807 "erl_code_gen.m"
        }
#line 802 "erl_code_gen.m"
      if ((erl_backend__erl_code_gen__env).erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__succeeded)
#line 835 "erl_code_gen.m"
        {
#line 835 "erl_code_gen.m"
          MR_Word erl_backend__erl_code_gen__CharList_37;
#line 835 "erl_code_gen.m"
          MR_Word erl_backend__erl_code_gen__StringToAtom_38;
#line 835 "erl_code_gen.m"
          MR_Word erl_backend__erl_code_gen__V_64_64;
#line 835 "erl_code_gen.m"
          MR_Word erl_backend__erl_code_gen__V_65_65;
#line 835 "erl_code_gen.m"
          MR_Word erl_backend__erl_code_gen__V_67_67;
#line 835 "erl_code_gen.m"
          MR_Word erl_backend__erl_code_gen__V_68_68;
#line 835 "erl_code_gen.m"
          MR_Word erl_backend__erl_code_gen__V_70_70;

#line 835 "erl_code_gen.m"
          {
#line 835 "erl_code_gen.m"
            erl_backend__erl_code_util__erl_gen_info_new_named_var_4_p_0((MR_String) "Atom", &erl_backend__erl_code_gen__SwitchVar_40, erl_backend__erl_code_gen__STATE_VARIABLE_Info_51_51, &erl_backend__erl_code_gen__STATE_VARIABLE_Info_62_62);
          }
#line 836 "erl_code_gen.m"
          {
#line 836 "erl_code_gen.m"
            erl_backend__erl_code_gen__V_65_65 = erl_backend__elds__expr_from_var_1_f_0(erl_backend__erl_code_gen__Var_11);
          }
#line 836 "erl_code_gen.m"
          {
#line 836 "erl_code_gen.m"
            erl_backend__erl_code_gen__V_64_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 836 "erl_code_gen.m"
            MR_hl_field(MR_mktag(1), erl_backend__erl_code_gen__V_64_64, 0) = ((MR_Box) (erl_backend__erl_code_gen__V_65_65));
#line 836 "erl_code_gen.m"
            MR_hl_field(MR_mktag(1), erl_backend__erl_code_gen__V_64_64, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 836 "erl_code_gen.m"
          }
#line 836 "erl_code_gen.m"
          {
#line 836 "erl_code_gen.m"
            erl_backend__erl_code_gen__CharList_37 = erl_backend__elds__elds_call_builtin_2_f_0((MR_String) "binary_to_list", erl_backend__erl_code_gen__V_64_64);
          }
#line 837 "erl_code_gen.m"
          {
#line 837 "erl_code_gen.m"
            erl_backend__erl_code_gen__V_67_67 = erl_backend__elds__expr_from_var_1_f_0(erl_backend__erl_code_gen__SwitchVar_40);
          }
#line 838 "erl_code_gen.m"
          {
#line 838 "erl_code_gen.m"
            erl_backend__erl_code_gen__V_70_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 838 "erl_code_gen.m"
            MR_hl_field(MR_mktag(1), erl_backend__erl_code_gen__V_70_70, 0) = ((MR_Box) (erl_backend__erl_code_gen__CharList_37));
#line 838 "erl_code_gen.m"
            MR_hl_field(MR_mktag(1), erl_backend__erl_code_gen__V_70_70, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 838 "erl_code_gen.m"
          }
#line 838 "erl_code_gen.m"
          {
#line 838 "erl_code_gen.m"
            erl_backend__erl_code_gen__V_68_68 = erl_backend__elds__elds_call_builtin_2_f_0((MR_String) "list_to_atom", erl_backend__erl_code_gen__V_70_70);
          }
#line 837 "erl_code_gen.m"
          {
#line 837 "erl_code_gen.m"
            erl_backend__erl_code_gen__StringToAtom_38 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 837 "erl_code_gen.m"
            MR_hl_field(MR_mktag(3), erl_backend__erl_code_gen__StringToAtom_38, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 837 "erl_code_gen.m"
            MR_hl_field(MR_mktag(3), erl_backend__erl_code_gen__StringToAtom_38, 1) = ((MR_Box) (erl_backend__erl_code_gen__V_67_67));
#line 837 "erl_code_gen.m"
            MR_hl_field(MR_mktag(3), erl_backend__erl_code_gen__StringToAtom_38, 2) = ((MR_Box) (erl_backend__erl_code_gen__V_68_68));
#line 837 "erl_code_gen.m"
          }
#line 839 "erl_code_gen.m"
          {
#line 839 "erl_code_gen.m"
            erl_backend__erl_code_gen__MaybeConvertToAtom_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 839 "erl_code_gen.m"
            MR_hl_field(MR_mktag(1), erl_backend__erl_code_gen__MaybeConvertToAtom_39, 0) = ((MR_Box) (erl_backend__erl_code_gen__StringToAtom_38));
#line 839 "erl_code_gen.m"
          }
#line 841 "erl_code_gen.m"
          {
#line 841 "erl_code_gen.m"
            erl_backend__erl_code_gen__GenCase_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 841 "erl_code_gen.m"
            MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__GenCase_41, 0) = ((MR_Box) (&erl_backend__erl_code_gen_scalar_common_6[0]));
#line 841 "erl_code_gen.m"
            MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__GenCase_41, 1) = ((MR_Box) (erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_10_p_0_9));
#line 841 "erl_code_gen.m"
            MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__GenCase_41, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 841 "erl_code_gen.m"
            MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__GenCase_41, 3) = ((MR_Box) (erl_backend__erl_code_gen__CodeModel_14));
#line 841 "erl_code_gen.m"
            MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__GenCase_41, 4) = ((MR_Box) (erl_backend__erl_code_gen__InstMap_27));
#line 841 "erl_code_gen.m"
            MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__GenCase_41, 5) = ((MR_Box) (erl_backend__erl_code_gen__NonLocalsBoundInCases_24));
#line 841 "erl_code_gen.m"
            MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__GenCase_41, 6) = ((MR_Box) (erl_backend__erl_code_gen__MaybeSuccessExpr_26));
#line 841 "erl_code_gen.m"
          }
#line 835 "erl_code_gen.m"
        }
#line 802 "erl_code_gen.m"
      else
#line 844 "erl_code_gen.m"
        {
#line 844 "erl_code_gen.m"
          erl_backend__erl_code_gen__MaybeConvertToAtom_39 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 845 "erl_code_gen.m"
          erl_backend__erl_code_gen__SwitchVar_40 = erl_backend__erl_code_gen__Var_11;
#line 846 "erl_code_gen.m"
          {
#line 846 "erl_code_gen.m"
            erl_backend__erl_code_gen__GenCase_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 846 "erl_code_gen.m"
            MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__GenCase_41, 0) = ((MR_Box) (&erl_backend__erl_code_gen_scalar_common_7[0]));
#line 846 "erl_code_gen.m"
            MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__GenCase_41, 1) = ((MR_Box) (erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_10_p_0_10));
#line 846 "erl_code_gen.m"
            MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__GenCase_41, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 846 "erl_code_gen.m"
            MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__GenCase_41, 3) = ((MR_Box) (erl_backend__erl_code_gen__VarType_28));
#line 846 "erl_code_gen.m"
            MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__GenCase_41, 4) = ((MR_Box) (erl_backend__erl_code_gen__CodeModel_14));
#line 846 "erl_code_gen.m"
            MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__GenCase_41, 5) = ((MR_Box) (erl_backend__erl_code_gen__InstMap_27));
#line 846 "erl_code_gen.m"
            MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__GenCase_41, 6) = ((MR_Box) (erl_backend__erl_code_gen__NonLocalsBoundInCases_24));
#line 846 "erl_code_gen.m"
            MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__GenCase_41, 7) = ((MR_Box) (erl_backend__erl_code_gen__MaybeSuccessExpr_26));
#line 846 "erl_code_gen.m"
          }
#line 844 "erl_code_gen.m"
          erl_backend__erl_code_gen__STATE_VARIABLE_Info_62_62 = erl_backend__erl_code_gen__STATE_VARIABLE_Info_51_51;
#line 844 "erl_code_gen.m"
        }
#line 3816 "erl_backend.erl_code_gen.c"
      erl_backend__erl_code_gen__TypeCtorInfo_96_96 = (MR_Word) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_case_0;
#line 851 "erl_code_gen.m"
      {
#line 851 "erl_code_gen.m"
        mercury__list__map_foldl_5_p_0((erl_backend__erl_code_gen__env).erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__TypeCtorInfo_85_85, erl_backend__erl_code_gen__TypeCtorInfo_96_96, (MR_Word) &erl_backend__erl_code_util__erl_backend__erl_code_util__type_ctor_info_erl_gen_info_0, erl_backend__erl_code_gen__GenCase_41, (erl_backend__erl_code_gen__env).erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__CasesList_13, &erl_backend__erl_code_gen__ErlCases0_42, ((MR_Box) (erl_backend__erl_code_gen__STATE_VARIABLE_Info_62_62)), &erl_backend__erl_code_gen__conv7_STATE_VARIABLE_Info_47);
      }
#line 851 "erl_code_gen.m"
      *erl_backend__erl_code_gen__STATE_VARIABLE_Info_47 = ((MR_Word) erl_backend__erl_code_gen__conv7_STATE_VARIABLE_Info_47);
#line 857 "erl_code_gen.m"
#line 857 "erl_code_gen.m"
      switch (erl_backend__erl_code_gen__CanFail_12) {
#line 857 "erl_code_gen.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 857 "erl_code_gen.m"
        case (MR_Integer) 0:
#line 853 "erl_code_gen.m"
          {
#line 853 "erl_code_gen.m"
            MR_Word erl_backend__erl_code_gen__DefaultCase_43;
#line 853 "erl_code_gen.m"
            MR_Word erl_backend__erl_code_gen__V_74_74;
#line 853 "erl_code_gen.m"
            MR_Word erl_backend__erl_code_gen__V_75_75;
#line 853 "erl_code_gen.m"
            MR_Word erl_backend__erl_code_gen__V_76_76;

#line 855 "erl_code_gen.m"
            {
#line 855 "erl_code_gen.m"
              erl_backend__erl_code_gen__V_75_75 = erl_backend__elds__elds_fail_0_f_0();
            }
#line 855 "erl_code_gen.m"
            {
#line 855 "erl_code_gen.m"
              erl_backend__erl_code_gen__V_74_74 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 855 "erl_code_gen.m"
              MR_hl_field(MR_mktag(2), erl_backend__erl_code_gen__V_74_74, 0) = ((MR_Box) (erl_backend__erl_code_gen__V_75_75));
#line 855 "erl_code_gen.m"
            }
#line 855 "erl_code_gen.m"
            {
#line 855 "erl_code_gen.m"
              erl_backend__erl_code_gen__DefaultCase_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 855 "erl_code_gen.m"
              MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__DefaultCase_43, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 855 "erl_code_gen.m"
              MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__DefaultCase_43, 1) = ((MR_Box) (erl_backend__erl_code_gen__V_74_74));
#line 855 "erl_code_gen.m"
            }
#line 856 "erl_code_gen.m"
            {
#line 856 "erl_code_gen.m"
              erl_backend__erl_code_gen__V_76_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 856 "erl_code_gen.m"
              MR_hl_field(MR_mktag(1), erl_backend__erl_code_gen__V_76_76, 0) = ((MR_Box) (erl_backend__erl_code_gen__DefaultCase_43));
#line 856 "erl_code_gen.m"
              MR_hl_field(MR_mktag(1), erl_backend__erl_code_gen__V_76_76, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 856 "erl_code_gen.m"
            }
#line 856 "erl_code_gen.m"
            {
#line 856 "erl_code_gen.m"
              erl_backend__erl_code_gen__ErlCases_44 = mercury__list__f_43_43_2_f_0(erl_backend__erl_code_gen__TypeCtorInfo_96_96, erl_backend__erl_code_gen__ErlCases0_42, erl_backend__erl_code_gen__V_76_76);
            }
#line 853 "erl_code_gen.m"
          }
#line 857 "erl_code_gen.m"
          break;
#line 857 "erl_code_gen.m"
        case (MR_Integer) 1:
#line 859 "erl_code_gen.m"
          erl_backend__erl_code_gen__ErlCases_44 = erl_backend__erl_code_gen__ErlCases0_42;
#line 857 "erl_code_gen.m"
          break;
#line 857 "erl_code_gen.m"
      }
#line 863 "erl_code_gen.m"
      {
#line 863 "erl_code_gen.m"
        erl_backend__erl_code_gen__V_78_78 = erl_backend__elds__expr_from_var_1_f_0(erl_backend__erl_code_gen__SwitchVar_40);
      }
#line 863 "erl_code_gen.m"
      {
#line 863 "erl_code_gen.m"
        erl_backend__erl_code_gen__CaseExpr_45 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 863 "erl_code_gen.m"
        MR_hl_field(MR_mktag(3), erl_backend__erl_code_gen__CaseExpr_45, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 863 "erl_code_gen.m"
        MR_hl_field(MR_mktag(3), erl_backend__erl_code_gen__CaseExpr_45, 1) = ((MR_Box) (erl_backend__erl_code_gen__V_78_78));
#line 863 "erl_code_gen.m"
        MR_hl_field(MR_mktag(3), erl_backend__erl_code_gen__CaseExpr_45, 2) = ((MR_Box) (erl_backend__erl_code_gen__ErlCases_44));
#line 863 "erl_code_gen.m"
      }
#line 865 "erl_code_gen.m"
      {
#line 865 "erl_code_gen.m"
        erl_backend__erl_code_gen__V_79_79 = erl_backend__elds__maybe_join_exprs1_2_f_0(erl_backend__erl_code_gen__MaybeConvertToAtom_39, erl_backend__erl_code_gen__CaseExpr_45);
      }
#line 864 "erl_code_gen.m"
      {
#line 864 "erl_code_gen.m"
        *erl_backend__erl_code_gen__Statement_18 = erl_backend__elds__maybe_join_exprs1_2_f_0(erl_backend__erl_code_gen__MaybeMakeClosure_25, erl_backend__erl_code_gen__V_79_79);
      }
#line 758 "erl_code_gen.m"
    }
#line 753 "erl_code_gen.m"
  }
#line 753 "erl_code_gen.m"
}

#line 592 "erl_code_gen.m"
static void MR_CALL 
erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_99_111_109_109_105_116_95_112_105_101_99_101_115_95_95_91_51_93_95_48_8_p_0(
#line 592 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__Goal_9,
#line 592 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__InstMap_10,
#line 592 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__DoRenaming_12,
#line 592 "erl_code_gen.m"
  MR_Word * erl_backend__erl_code_gen__GoalStatement_13,
#line 592 "erl_code_gen.m"
  MR_Word * erl_backend__erl_code_gen__PackedNonLocals_14,
#line 592 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__STATE_VARIABLE_Info_0_22,
#line 592 "erl_code_gen.m"
  MR_Word * erl_backend__erl_code_gen__STATE_VARIABLE_Info_23)
#line 592 "erl_code_gen.m"
{
#line 597 "erl_code_gen.m"
  {
#line 597 "erl_code_gen.m"
    MR_bool erl_backend__erl_code_gen__succeeded;
#line 597 "erl_code_gen.m"
    MR_Word erl_backend__erl_code_gen__NonLocalsSet_16;
#line 597 "erl_code_gen.m"
    MR_Word erl_backend__erl_code_gen__NonLocals_17;
#line 597 "erl_code_gen.m"
    MR_Word erl_backend__erl_code_gen__Throw_18;
#line 597 "erl_code_gen.m"
    MR_Word erl_backend__erl_code_gen__ThrowValue_19;
#line 597 "erl_code_gen.m"
    MR_Word erl_backend__erl_code_gen__GoalStatement0_20;
#line 597 "erl_code_gen.m"
    MR_Word erl_backend__erl_code_gen__V_24_24;
#line 597 "erl_code_gen.m"
    MR_Word erl_backend__erl_code_gen__V_25_25;
#line 597 "erl_code_gen.m"
    MR_Word erl_backend__erl_code_gen__V_26_26;
#line 597 "erl_code_gen.m"
    MR_Word erl_backend__erl_code_gen__V_27_27;
#line 597 "erl_code_gen.m"
    MR_Word erl_backend__erl_code_gen__V_29_29;
#line 597 "erl_code_gen.m"
    MR_Word erl_backend__erl_code_gen__V_30_30;
#line 597 "erl_code_gen.m"
    MR_Word erl_backend__erl_code_gen__V_32_32;
#line 597 "erl_code_gen.m"
    MR_Word erl_backend__erl_code_gen__STATE_VARIABLE_Info_33_33;

#line 599 "erl_code_gen.m"
    {
#line 599 "erl_code_gen.m"
      erl_backend__erl_code_util__erl_bound_nonlocals_in_goal_4_p_0(erl_backend__erl_code_gen__STATE_VARIABLE_Info_0_22, erl_backend__erl_code_gen__InstMap_10, erl_backend__erl_code_gen__Goal_9, &erl_backend__erl_code_gen__NonLocalsSet_16);
    }
#line 600 "erl_code_gen.m"
    {
#line 600 "erl_code_gen.m"
      erl_backend__erl_code_gen__NonLocals_17 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, erl_backend__erl_code_gen__NonLocalsSet_16);
    }
#line 604 "erl_code_gen.m"
    {
#line 604 "erl_code_gen.m"
      erl_backend__erl_code_gen__V_26_26 = erl_backend__elds__elds_commit_marker_0_f_0();
    }
#line 605 "erl_code_gen.m"
    {
#line 605 "erl_code_gen.m"
      erl_backend__erl_code_gen__V_30_30 = erl_backend__elds__exprs_from_vars_1_f_0(erl_backend__erl_code_gen__NonLocals_17);
    }
#line 605 "erl_code_gen.m"
    {
#line 605 "erl_code_gen.m"
      erl_backend__erl_code_gen__V_29_29 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 605 "erl_code_gen.m"
      MR_hl_field(MR_mktag(3), erl_backend__erl_code_gen__V_29_29, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 605 "erl_code_gen.m"
      MR_hl_field(MR_mktag(3), erl_backend__erl_code_gen__V_29_29, 1) = ((MR_Box) (erl_backend__erl_code_gen__V_30_30));
#line 605 "erl_code_gen.m"
    }
#line 605 "erl_code_gen.m"
    {
#line 605 "erl_code_gen.m"
      MR_Word base;
#line 605 "erl_code_gen.m"
      base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 605 "erl_code_gen.m"
      *erl_backend__erl_code_gen__PackedNonLocals_14 = base;
#line 605 "erl_code_gen.m"
      MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (erl_backend__erl_code_gen__V_29_29));
#line 605 "erl_code_gen.m"
    }
#line 604 "erl_code_gen.m"
    {
#line 604 "erl_code_gen.m"
      erl_backend__erl_code_gen__V_27_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 604 "erl_code_gen.m"
      MR_hl_field(MR_mktag(1), erl_backend__erl_code_gen__V_27_27, 0) = ((MR_Box) (*erl_backend__erl_code_gen__PackedNonLocals_14));
#line 604 "erl_code_gen.m"
      MR_hl_field(MR_mktag(1), erl_backend__erl_code_gen__V_27_27, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 604 "erl_code_gen.m"
    }
#line 604 "erl_code_gen.m"
    {
#line 604 "erl_code_gen.m"
      erl_backend__erl_code_gen__V_25_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 604 "erl_code_gen.m"
      MR_hl_field(MR_mktag(1), erl_backend__erl_code_gen__V_25_25, 0) = ((MR_Box) (erl_backend__erl_code_gen__V_26_26));
#line 604 "erl_code_gen.m"
      MR_hl_field(MR_mktag(1), erl_backend__erl_code_gen__V_25_25, 1) = ((MR_Box) (erl_backend__erl_code_gen__V_27_27));
#line 604 "erl_code_gen.m"
    }
#line 604 "erl_code_gen.m"
    {
#line 604 "erl_code_gen.m"
      erl_backend__erl_code_gen__ThrowValue_19 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 604 "erl_code_gen.m"
      MR_hl_field(MR_mktag(3), erl_backend__erl_code_gen__ThrowValue_19, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 604 "erl_code_gen.m"
      MR_hl_field(MR_mktag(3), erl_backend__erl_code_gen__ThrowValue_19, 1) = ((MR_Box) (erl_backend__erl_code_gen__V_25_25));
#line 604 "erl_code_gen.m"
    }
#line 603 "erl_code_gen.m"
    {
#line 603 "erl_code_gen.m"
      erl_backend__erl_code_gen__V_24_24 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 603 "erl_code_gen.m"
      MR_hl_field(MR_mktag(2), erl_backend__erl_code_gen__V_24_24, 0) = ((MR_Box) (erl_backend__erl_code_gen__ThrowValue_19));
#line 603 "erl_code_gen.m"
    }
#line 603 "erl_code_gen.m"
    {
#line 603 "erl_code_gen.m"
      erl_backend__erl_code_gen__Throw_18 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 603 "erl_code_gen.m"
      MR_hl_field(MR_mktag(3), erl_backend__erl_code_gen__Throw_18, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 603 "erl_code_gen.m"
      MR_hl_field(MR_mktag(3), erl_backend__erl_code_gen__Throw_18, 1) = ((MR_Box) (erl_backend__erl_code_gen__V_24_24));
#line 603 "erl_code_gen.m"
    }
#line 609 "erl_code_gen.m"
    {
#line 609 "erl_code_gen.m"
      erl_backend__erl_code_gen__V_32_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 609 "erl_code_gen.m"
      MR_hl_field(MR_mktag(1), erl_backend__erl_code_gen__V_32_32, 0) = ((MR_Box) (erl_backend__erl_code_gen__Throw_18));
#line 609 "erl_code_gen.m"
    }
#line 609 "erl_code_gen.m"
    {
#line 609 "erl_code_gen.m"
      erl_backend__erl_code_gen__erl_gen_goal_7_p_0((MR_Integer) 2, erl_backend__erl_code_gen__InstMap_10, erl_backend__erl_code_gen__Goal_9, erl_backend__erl_code_gen__V_32_32, &erl_backend__erl_code_gen__GoalStatement0_20, erl_backend__erl_code_gen__STATE_VARIABLE_Info_0_22, &erl_backend__erl_code_gen__STATE_VARIABLE_Info_33_33);
    }
#line 616 "erl_code_gen.m"
#line 616 "erl_code_gen.m"
    switch (erl_backend__erl_code_gen__DoRenaming_12) {
#line 616 "erl_code_gen.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 616 "erl_code_gen.m"
      case (MR_Integer) 0:
#line 617 "erl_code_gen.m"
        {
#line 618 "erl_code_gen.m"
          *erl_backend__erl_code_gen__GoalStatement_13 = erl_backend__erl_code_gen__GoalStatement0_20;
#line 617 "erl_code_gen.m"
          *erl_backend__erl_code_gen__STATE_VARIABLE_Info_23 = erl_backend__erl_code_gen__STATE_VARIABLE_Info_33_33;
#line 617 "erl_code_gen.m"
        }
#line 616 "erl_code_gen.m"
        break;
#line 616 "erl_code_gen.m"
      case (MR_Integer) 1:
#line 613 "erl_code_gen.m"
        {
#line 613 "erl_code_gen.m"
          MR_Word erl_backend__erl_code_gen__Subn_21;

#line 614 "erl_code_gen.m"
          {
#line 614 "erl_code_gen.m"
            erl_backend__erl_code_util__erl_create_renaming_4_p_0(erl_backend__erl_code_gen__NonLocals_17, &erl_backend__erl_code_gen__Subn_21, erl_backend__erl_code_gen__STATE_VARIABLE_Info_33_33, erl_backend__erl_code_gen__STATE_VARIABLE_Info_23);
          }
#line 615 "erl_code_gen.m"
          {
#line 615 "erl_code_gen.m"
            erl_backend__erl_code_util__erl_rename_vars_in_expr_3_p_0(erl_backend__erl_code_gen__Subn_21, erl_backend__erl_code_gen__GoalStatement0_20, erl_backend__erl_code_gen__GoalStatement_13);
          }
#line 613 "erl_code_gen.m"
        }
#line 616 "erl_code_gen.m"
        break;
#line 616 "erl_code_gen.m"
    }
#line 597 "erl_code_gen.m"
  }
#line 592 "erl_code_gen.m"
}

#line 504 "erl_code_gen.m"
static void MR_CALL 
erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_99_111_109_109_105_116_95_95_91_53_93_95_48_9_p_0(
#line 504 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__Goal_10,
#line 504 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__CodeModel_11,
#line 504 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__ScopeDetism_12,
#line 504 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__InstMap_13,
#line 504 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__MaybeSuccessExpr_15,
#line 504 "erl_code_gen.m"
  MR_Word * erl_backend__erl_code_gen__Statement_16,
#line 504 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__STATE_VARIABLE_Info_0_29,
#line 504 "erl_code_gen.m"
  MR_Word * erl_backend__erl_code_gen__STATE_VARIABLE_Info_30)
#line 504 "erl_code_gen.m"
{
#line 509 "erl_code_gen.m"
  {
#line 509 "erl_code_gen.m"
    MR_bool erl_backend__erl_code_gen__succeeded;
#line 509 "erl_code_gen.m"
    MR_Word erl_backend__erl_code_gen__GoalInfo_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__Goal_10, (MR_Integer) 1)));
#line 509 "erl_code_gen.m"
    MR_Word erl_backend__erl_code_gen__GoalCodeModel_20;
#line 510 "erl_code_gen.m"
    MR_Word erl_backend__erl_code_gen__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__Goal_10, (MR_Integer) 0)));
#line 512 "erl_code_gen.m"
    MR_Word erl_backend__erl_code_gen___GoalContext_21;

#line 511 "erl_code_gen.m"
    {
#line 511 "erl_code_gen.m"
      erl_backend__erl_code_gen__GoalCodeModel_20 = hlds__code_model__goal_info_get_code_model_1_f_0(erl_backend__erl_code_gen__GoalInfo_19);
    }
#line 512 "erl_code_gen.m"
    {
#line 512 "erl_code_gen.m"
      erl_backend__erl_code_gen___GoalContext_21 = hlds__hlds_goal__goal_info_get_context_1_f_0(erl_backend__erl_code_gen__GoalInfo_19);
    }
#line 515 "erl_code_gen.m"
    erl_backend__erl_code_gen__succeeded = (erl_backend__erl_code_gen__GoalCodeModel_20 == (MR_Integer) 2);
#line 515 "erl_code_gen.m"
    if (erl_backend__erl_code_gen__succeeded)
#line 516 "erl_code_gen.m"
      erl_backend__erl_code_gen__succeeded = (erl_backend__erl_code_gen__CodeModel_11 == (MR_Integer) 1);
#line 558 "erl_code_gen.m"
    if (erl_backend__erl_code_gen__succeeded)
#line 532 "erl_code_gen.m"
      {
#line 518 "erl_code_gen.m"
        erl_backend__erl_code_gen__succeeded = (erl_backend__erl_code_gen__ScopeDetism_12 == (MR_Integer) 7);
#line 532 "erl_code_gen.m"
        if (erl_backend__erl_code_gen__succeeded)
#line 530 "erl_code_gen.m"
          {
#line 530 "erl_code_gen.m"
            MR_Word erl_backend__erl_code_gen__GoalStatement_22;
#line 530 "erl_code_gen.m"
            MR_Word erl_backend__erl_code_gen__V_32_32;
#line 530 "erl_code_gen.m"
            MR_Word erl_backend__erl_code_gen__V_33_33;

#line 529 "erl_code_gen.m"
            {
#line 529 "erl_code_gen.m"
              erl_backend__erl_code_gen__erl_gen_goal_7_p_0(erl_backend__erl_code_gen__GoalCodeModel_20, erl_backend__erl_code_gen__InstMap_13, erl_backend__erl_code_gen__Goal_10, erl_backend__erl_code_gen__MaybeSuccessExpr_15, &erl_backend__erl_code_gen__GoalStatement_22, erl_backend__erl_code_gen__STATE_VARIABLE_Info_0_29, erl_backend__erl_code_gen__STATE_VARIABLE_Info_30);
            }
#line 531 "erl_code_gen.m"
            {
#line 531 "erl_code_gen.m"
              erl_backend__erl_code_gen__V_33_33 = erl_backend__elds__elds_fail_0_f_0();
            }
#line 531 "erl_code_gen.m"
            {
#line 531 "erl_code_gen.m"
              erl_backend__erl_code_gen__V_32_32 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 531 "erl_code_gen.m"
              MR_hl_field(MR_mktag(2), erl_backend__erl_code_gen__V_32_32, 0) = ((MR_Box) (erl_backend__erl_code_gen__V_33_33));
#line 531 "erl_code_gen.m"
            }
#line 531 "erl_code_gen.m"
            {
#line 531 "erl_code_gen.m"
              *erl_backend__erl_code_gen__Statement_16 = erl_backend__elds__join_exprs_2_f_0(erl_backend__erl_code_gen__GoalStatement_22, erl_backend__erl_code_gen__V_32_32);
            }
#line 530 "erl_code_gen.m"
          }
#line 532 "erl_code_gen.m"
        else
#line 550 "erl_code_gen.m"
          {
#line 550 "erl_code_gen.m"
            MR_Word erl_backend__erl_code_gen__PackedNonLocals_23;
#line 550 "erl_code_gen.m"
            MR_Word erl_backend__erl_code_gen__AnyCase_24;
#line 550 "erl_code_gen.m"
            MR_Word erl_backend__erl_code_gen__Catch_25;
#line 550 "erl_code_gen.m"
            MR_Word erl_backend__erl_code_gen__V_36_36;
#line 550 "erl_code_gen.m"
            MR_Word erl_backend__erl_code_gen__V_38_38;
#line 550 "erl_code_gen.m"
            MR_Word erl_backend__erl_code_gen__V_41_41;
#line 550 "erl_code_gen.m"
            MR_Word erl_backend__erl_code_gen__V_42_42;
#line 550 "erl_code_gen.m"
            MR_Word erl_backend__erl_code_gen__V_43_43;
#line 550 "erl_code_gen.m"
            MR_Word erl_backend__erl_code_gen__V_44_44;
#line 550 "erl_code_gen.m"
            MR_Word erl_backend__erl_code_gen__V_45_45;
#line 550 "erl_code_gen.m"
            MR_Word erl_backend__erl_code_gen__V_46_46;
#line 550 "erl_code_gen.m"
            MR_Word erl_backend__erl_code_gen__V_47_47;
#line 550 "erl_code_gen.m"
            MR_Word erl_backend__erl_code_gen__V_49_49;
#line 550 "erl_code_gen.m"
            MR_Word erl_backend__erl_code_gen__GoalStatement_64;

#line 549 "erl_code_gen.m"
            {
#line 549 "erl_code_gen.m"
              erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_99_111_109_109_105_116_95_112_105_101_99_101_115_95_95_91_51_93_95_48_8_p_0(erl_backend__erl_code_gen__Goal_10, erl_backend__erl_code_gen__InstMap_13, (MR_Integer) 0, &erl_backend__erl_code_gen__GoalStatement_64, &erl_backend__erl_code_gen__PackedNonLocals_23, erl_backend__erl_code_gen__STATE_VARIABLE_Info_0_29, erl_backend__erl_code_gen__STATE_VARIABLE_Info_30);
            }
#line 553 "erl_code_gen.m"
            {
#line 553 "erl_code_gen.m"
              erl_backend__erl_code_gen__V_42_42 = erl_backend__elds__elds_fail_0_f_0();
            }
#line 553 "erl_code_gen.m"
            {
#line 553 "erl_code_gen.m"
              erl_backend__erl_code_gen__V_41_41 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 553 "erl_code_gen.m"
              MR_hl_field(MR_mktag(2), erl_backend__erl_code_gen__V_41_41, 0) = ((MR_Box) (erl_backend__erl_code_gen__V_42_42));
#line 553 "erl_code_gen.m"
            }
#line 553 "erl_code_gen.m"
            {
#line 553 "erl_code_gen.m"
              erl_backend__erl_code_gen__AnyCase_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 553 "erl_code_gen.m"
              MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__AnyCase_24, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 553 "erl_code_gen.m"
              MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__AnyCase_24, 1) = ((MR_Box) (erl_backend__erl_code_gen__V_41_41));
#line 553 "erl_code_gen.m"
            }
#line 552 "erl_code_gen.m"
            {
#line 552 "erl_code_gen.m"
              erl_backend__erl_code_gen__V_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 552 "erl_code_gen.m"
              MR_hl_field(MR_mktag(1), erl_backend__erl_code_gen__V_36_36, 0) = ((MR_Box) (erl_backend__erl_code_gen__AnyCase_24));
#line 552 "erl_code_gen.m"
              MR_hl_field(MR_mktag(1), erl_backend__erl_code_gen__V_36_36, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 552 "erl_code_gen.m"
            }
#line 554 "erl_code_gen.m"
            {
#line 554 "erl_code_gen.m"
              erl_backend__erl_code_gen__V_43_43 = erl_backend__elds__elds_throw_atom_0_f_0();
            }
#line 555 "erl_code_gen.m"
            {
#line 555 "erl_code_gen.m"
              erl_backend__erl_code_gen__V_46_46 = erl_backend__elds__elds_commit_marker_0_f_0();
            }
#line 555 "erl_code_gen.m"
            {
#line 555 "erl_code_gen.m"
              erl_backend__erl_code_gen__V_47_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 555 "erl_code_gen.m"
              MR_hl_field(MR_mktag(1), erl_backend__erl_code_gen__V_47_47, 0) = ((MR_Box) (erl_backend__erl_code_gen__PackedNonLocals_23));
#line 555 "erl_code_gen.m"
              MR_hl_field(MR_mktag(1), erl_backend__erl_code_gen__V_47_47, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 555 "erl_code_gen.m"
            }
#line 555 "erl_code_gen.m"
            {
#line 555 "erl_code_gen.m"
              erl_backend__erl_code_gen__V_45_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 555 "erl_code_gen.m"
              MR_hl_field(MR_mktag(1), erl_backend__erl_code_gen__V_45_45, 0) = ((MR_Box) (erl_backend__erl_code_gen__V_46_46));
#line 555 "erl_code_gen.m"
              MR_hl_field(MR_mktag(1), erl_backend__erl_code_gen__V_45_45, 1) = ((MR_Box) (erl_backend__erl_code_gen__V_47_47));
#line 555 "erl_code_gen.m"
            }
#line 555 "erl_code_gen.m"
            {
#line 555 "erl_code_gen.m"
              erl_backend__erl_code_gen__V_44_44 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 555 "erl_code_gen.m"
              MR_hl_field(MR_mktag(3), erl_backend__erl_code_gen__V_44_44, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 555 "erl_code_gen.m"
              MR_hl_field(MR_mktag(3), erl_backend__erl_code_gen__V_44_44, 1) = ((MR_Box) (erl_backend__erl_code_gen__V_45_45));
#line 555 "erl_code_gen.m"
            }
#line 556 "erl_code_gen.m"
            {
#line 556 "erl_code_gen.m"
              erl_backend__erl_code_gen__V_49_49 = erl_backend__elds__det_expr_1_f_0(erl_backend__erl_code_gen__MaybeSuccessExpr_15);
            }
#line 554 "erl_code_gen.m"
            {
#line 554 "erl_code_gen.m"
              erl_backend__erl_code_gen__Catch_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 554 "erl_code_gen.m"
              MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__Catch_25, 0) = ((MR_Box) (erl_backend__erl_code_gen__V_43_43));
#line 554 "erl_code_gen.m"
              MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__Catch_25, 1) = ((MR_Box) (erl_backend__erl_code_gen__V_44_44));
#line 554 "erl_code_gen.m"
              MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__Catch_25, 2) = ((MR_Box) (erl_backend__erl_code_gen__V_49_49));
#line 554 "erl_code_gen.m"
            }
#line 552 "erl_code_gen.m"
            {
#line 552 "erl_code_gen.m"
              erl_backend__erl_code_gen__V_38_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 552 "erl_code_gen.m"
              MR_hl_field(MR_mktag(1), erl_backend__erl_code_gen__V_38_38, 0) = ((MR_Box) (erl_backend__erl_code_gen__Catch_25));
#line 552 "erl_code_gen.m"
            }
#line 552 "erl_code_gen.m"
            {
#line 552 "erl_code_gen.m"
              MR_Word base;
#line 552 "erl_code_gen.m"
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 552 "erl_code_gen.m"
              *erl_backend__erl_code_gen__Statement_16 = base;
#line 552 "erl_code_gen.m"
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 552 "erl_code_gen.m"
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (erl_backend__erl_code_gen__GoalStatement_64));
#line 552 "erl_code_gen.m"
              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (erl_backend__erl_code_gen__V_36_36));
#line 552 "erl_code_gen.m"
              MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (erl_backend__erl_code_gen__V_38_38));
#line 552 "erl_code_gen.m"
              MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 552 "erl_code_gen.m"
            }
#line 550 "erl_code_gen.m"
          }
#line 532 "erl_code_gen.m"
      }
#line 558 "erl_code_gen.m"
    else
#line 586 "erl_code_gen.m"
      {
#line 559 "erl_code_gen.m"
        erl_backend__erl_code_gen__succeeded = (erl_backend__erl_code_gen__GoalCodeModel_20 == (MR_Integer) 2);
#line 559 "erl_code_gen.m"
        if (erl_backend__erl_code_gen__succeeded)
#line 560 "erl_code_gen.m"
          erl_backend__erl_code_gen__succeeded = (erl_backend__erl_code_gen__CodeModel_11 == (MR_Integer) 0);
#line 586 "erl_code_gen.m"
        if (erl_backend__erl_code_gen__succeeded)
#line 577 "erl_code_gen.m"
          {
#line 577 "erl_code_gen.m"
            MR_Word erl_backend__erl_code_gen__ResultsVar_26;
#line 577 "erl_code_gen.m"
            MR_Word erl_backend__erl_code_gen__ResultsVarExpr_27;
#line 577 "erl_code_gen.m"
            MR_Word erl_backend__erl_code_gen__TryExpr_28;
#line 577 "erl_code_gen.m"
            MR_Word erl_backend__erl_code_gen__STATE_VARIABLE_Info_51_51;
#line 577 "erl_code_gen.m"
            MR_Word erl_backend__erl_code_gen__V_55_55;
#line 577 "erl_code_gen.m"
            MR_Word erl_backend__erl_code_gen__V_57_57;
#line 577 "erl_code_gen.m"
            MR_Word erl_backend__erl_code_gen__V_58_58;
#line 577 "erl_code_gen.m"
            MR_Word erl_backend__erl_code_gen__V_59_59;
#line 577 "erl_code_gen.m"
            MR_Word erl_backend__erl_code_gen__V_60_60;
#line 577 "erl_code_gen.m"
            MR_Word erl_backend__erl_code_gen__V_61_61;
#line 577 "erl_code_gen.m"
            MR_Word erl_backend__erl_code_gen__GoalStatement_65;
#line 577 "erl_code_gen.m"
            MR_Word erl_backend__erl_code_gen__PackedNonLocals_66;
#line 577 "erl_code_gen.m"
            MR_Word erl_backend__erl_code_gen__Catch_67;

#line 576 "erl_code_gen.m"
            {
#line 576 "erl_code_gen.m"
              erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_99_111_109_109_105_116_95_112_105_101_99_101_115_95_95_91_51_93_95_48_8_p_0(erl_backend__erl_code_gen__Goal_10, erl_backend__erl_code_gen__InstMap_13, (MR_Integer) 1, &erl_backend__erl_code_gen__GoalStatement_65, &erl_backend__erl_code_gen__PackedNonLocals_66, erl_backend__erl_code_gen__STATE_VARIABLE_Info_0_29, &erl_backend__erl_code_gen__STATE_VARIABLE_Info_51_51);
            }
#line 579 "erl_code_gen.m"
            {
#line 579 "erl_code_gen.m"
              erl_backend__erl_code_util__erl_gen_info_new_named_var_4_p_0((MR_String) "Results", &erl_backend__erl_code_gen__ResultsVar_26, erl_backend__erl_code_gen__STATE_VARIABLE_Info_51_51, erl_backend__erl_code_gen__STATE_VARIABLE_Info_30);
            }
#line 580 "erl_code_gen.m"
            {
#line 580 "erl_code_gen.m"
              erl_backend__erl_code_gen__ResultsVarExpr_27 = erl_backend__elds__expr_from_var_1_f_0(erl_backend__erl_code_gen__ResultsVar_26);
            }
#line 584 "erl_code_gen.m"
            {
#line 584 "erl_code_gen.m"
              erl_backend__erl_code_gen__V_57_57 = erl_backend__elds__elds_throw_atom_0_f_0();
            }
#line 585 "erl_code_gen.m"
            {
#line 585 "erl_code_gen.m"
              erl_backend__erl_code_gen__V_60_60 = erl_backend__elds__elds_commit_marker_0_f_0();
            }
#line 585 "erl_code_gen.m"
            {
#line 585 "erl_code_gen.m"
              erl_backend__erl_code_gen__V_61_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 585 "erl_code_gen.m"
              MR_hl_field(MR_mktag(1), erl_backend__erl_code_gen__V_61_61, 0) = ((MR_Box) (erl_backend__erl_code_gen__ResultsVarExpr_27));
#line 585 "erl_code_gen.m"
              MR_hl_field(MR_mktag(1), erl_backend__erl_code_gen__V_61_61, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 585 "erl_code_gen.m"
            }
#line 585 "erl_code_gen.m"
            {
#line 585 "erl_code_gen.m"
              erl_backend__erl_code_gen__V_59_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 585 "erl_code_gen.m"
              MR_hl_field(MR_mktag(1), erl_backend__erl_code_gen__V_59_59, 0) = ((MR_Box) (erl_backend__erl_code_gen__V_60_60));
#line 585 "erl_code_gen.m"
              MR_hl_field(MR_mktag(1), erl_backend__erl_code_gen__V_59_59, 1) = ((MR_Box) (erl_backend__erl_code_gen__V_61_61));
#line 585 "erl_code_gen.m"
            }
#line 585 "erl_code_gen.m"
            {
#line 585 "erl_code_gen.m"
              erl_backend__erl_code_gen__V_58_58 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 585 "erl_code_gen.m"
              MR_hl_field(MR_mktag(3), erl_backend__erl_code_gen__V_58_58, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 585 "erl_code_gen.m"
              MR_hl_field(MR_mktag(3), erl_backend__erl_code_gen__V_58_58, 1) = ((MR_Box) (erl_backend__erl_code_gen__V_59_59));
#line 585 "erl_code_gen.m"
            }
#line 584 "erl_code_gen.m"
            {
#line 584 "erl_code_gen.m"
              erl_backend__erl_code_gen__Catch_67 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 584 "erl_code_gen.m"
              MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__Catch_67, 0) = ((MR_Box) (erl_backend__erl_code_gen__V_57_57));
#line 584 "erl_code_gen.m"
              MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__Catch_67, 1) = ((MR_Box) (erl_backend__erl_code_gen__V_58_58));
#line 584 "erl_code_gen.m"
              MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__Catch_67, 2) = ((MR_Box) (erl_backend__erl_code_gen__ResultsVarExpr_27));
#line 584 "erl_code_gen.m"
            }
#line 583 "erl_code_gen.m"
            {
#line 583 "erl_code_gen.m"
              erl_backend__erl_code_gen__V_55_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 583 "erl_code_gen.m"
              MR_hl_field(MR_mktag(1), erl_backend__erl_code_gen__V_55_55, 0) = ((MR_Box) (erl_backend__erl_code_gen__Catch_67));
#line 583 "erl_code_gen.m"
            }
#line 583 "erl_code_gen.m"
            {
#line 583 "erl_code_gen.m"
              erl_backend__erl_code_gen__TryExpr_28 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 583 "erl_code_gen.m"
              MR_hl_field(MR_mktag(3), erl_backend__erl_code_gen__TryExpr_28, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 583 "erl_code_gen.m"
              MR_hl_field(MR_mktag(3), erl_backend__erl_code_gen__TryExpr_28, 1) = ((MR_Box) (erl_backend__erl_code_gen__GoalStatement_65));
#line 583 "erl_code_gen.m"
              MR_hl_field(MR_mktag(3), erl_backend__erl_code_gen__TryExpr_28, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 583 "erl_code_gen.m"
              MR_hl_field(MR_mktag(3), erl_backend__erl_code_gen__TryExpr_28, 3) = ((MR_Box) (erl_backend__erl_code_gen__V_55_55));
#line 583 "erl_code_gen.m"
              MR_hl_field(MR_mktag(3), erl_backend__erl_code_gen__TryExpr_28, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 583 "erl_code_gen.m"
            }
#line 582 "erl_code_gen.m"
            {
#line 582 "erl_code_gen.m"
              MR_Word base;
#line 582 "erl_code_gen.m"
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 582 "erl_code_gen.m"
              *erl_backend__erl_code_gen__Statement_16 = base;
#line 582 "erl_code_gen.m"
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 582 "erl_code_gen.m"
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (erl_backend__erl_code_gen__PackedNonLocals_66));
#line 582 "erl_code_gen.m"
              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (erl_backend__erl_code_gen__TryExpr_28));
#line 582 "erl_code_gen.m"
            }
#line 577 "erl_code_gen.m"
          }
#line 586 "erl_code_gen.m"
        else
#line 588 "erl_code_gen.m"
          {
#line 588 "erl_code_gen.m"
            erl_backend__erl_code_gen__erl_gen_goal_7_p_0(erl_backend__erl_code_gen__CodeModel_11, erl_backend__erl_code_gen__InstMap_13, erl_backend__erl_code_gen__Goal_10, erl_backend__erl_code_gen__MaybeSuccessExpr_15, erl_backend__erl_code_gen__Statement_16, erl_backend__erl_code_gen__STATE_VARIABLE_Info_0_29, erl_backend__erl_code_gen__STATE_VARIABLE_Info_30);
          }
#line 586 "erl_code_gen.m"
      }
#line 509 "erl_code_gen.m"
  }
#line 504 "erl_code_gen.m"
}

#line 933 "erl_code_gen.m"
static MR_bool MR_CALL 
erl_backend__erl_code_gen__IntroducedFrom__pred__erl_gen_case_on_atom__933__1_2_p_0(
#line 933 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__OtherConsIds_17,
#line 933 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__HeadVar__2_30)
#line 933 "erl_code_gen.m"
{
#line 933 "erl_code_gen.m"
  {
#line 933 "erl_code_gen.m"
    MR_bool erl_backend__erl_code_gen__succeeded;

#line 933 "erl_code_gen.m"
    {
#line 933 "erl_code_gen.m"
      erl_backend__erl_code_gen__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &erl_backend__erl_code_gen_scalar_common_1[1], ((MR_Box) (erl_backend__erl_code_gen__OtherConsIds_17)), ((MR_Box) (erl_backend__erl_code_gen__HeadVar__2_30)));
    }
#line 933 "erl_code_gen.m"
    return erl_backend__erl_code_gen__succeeded;
#line 933 "erl_code_gen.m"
  }
#line 933 "erl_code_gen.m"
}

#line 875 "erl_code_gen.m"
static MR_bool MR_CALL 
erl_backend__erl_code_gen__IntroducedFrom__pred__erl_gen_case__875__1_2_p_0(
#line 875 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__OtherConsIds_19,
#line 875 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__HeadVar__2_35)
#line 875 "erl_code_gen.m"
{
#line 875 "erl_code_gen.m"
  {
#line 875 "erl_code_gen.m"
    MR_bool erl_backend__erl_code_gen__succeeded;

#line 875 "erl_code_gen.m"
    {
#line 875 "erl_code_gen.m"
      erl_backend__erl_code_gen__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &erl_backend__erl_code_gen_scalar_common_1[1], ((MR_Box) (erl_backend__erl_code_gen__OtherConsIds_19)), ((MR_Box) (erl_backend__erl_code_gen__HeadVar__2_35)));
    }
#line 875 "erl_code_gen.m"
    return erl_backend__erl_code_gen__succeeded;
#line 875 "erl_code_gen.m"
  }
#line 875 "erl_code_gen.m"
}

#line 788 "erl_code_gen.m"
static MR_Word MR_CALL 
erl_backend__erl_code_gen__IntroducedFrom__func__erl_gen_switch__788__1_1_f_0(
#line 788 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__LambdaHeadVar__1_49)
#line 788 "erl_code_gen.m"
{
#line 788 "erl_code_gen.m"
  {
#line 788 "erl_code_gen.m"
    MR_bool erl_backend__erl_code_gen__succeeded;
#line 788 "erl_code_gen.m"
    MR_Word erl_backend__erl_code_gen__LambdaHeadVar__2_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__LambdaHeadVar__1_49, (MR_Integer) 2)));
#line 788 "erl_code_gen.m"
    MR_Word erl_backend__erl_code_gen__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__LambdaHeadVar__1_49, (MR_Integer) 0)));
#line 788 "erl_code_gen.m"
    MR_Word erl_backend__erl_code_gen__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__LambdaHeadVar__1_49, (MR_Integer) 1)));

#line 788 "erl_code_gen.m"
    return erl_backend__erl_code_gen__LambdaHeadVar__2_50;
#line 788 "erl_code_gen.m"
  }
#line 788 "erl_code_gen.m"
}

#line 693 "erl_code_gen.m"
static MR_bool MR_CALL 
erl_backend__erl_code_gen__IntroducedFrom__pred__erl_gen_goal_expr__693__1_2_p_0(
#line 693 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__CodeModel_11,
#line 693 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__CallCodeModel_57)
#line 693 "erl_code_gen.m"
{
#line 693 "erl_code_gen.m"
  {
#line 693 "erl_code_gen.m"
    MR_bool erl_backend__erl_code_gen__succeeded = (erl_backend__erl_code_gen__CodeModel_11 == erl_backend__erl_code_gen__CallCodeModel_57);

#line 693 "erl_code_gen.m"
    return erl_backend__erl_code_gen__succeeded;
#line 693 "erl_code_gen.m"
  }
#line 693 "erl_code_gen.m"
}

#line 1605 "erl_code_gen.m"
static MR_bool MR_CALL 
erl_backend__erl_code_gen__search_elds_defn_3_p_0(
#line 1605 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__HeadVar__1_1,
#line 1605 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__PredProcId_6,
#line 1605 "erl_code_gen.m"
  MR_Word * erl_backend__erl_code_gen__Defn_7)
#line 1605 "erl_code_gen.m"
{
#line 1608 "erl_code_gen.m"
  while (MR_TRUE)
#line 1608 "erl_code_gen.m"
    {
#line 1608 "erl_code_gen.m"
      /* tailcall optimized into a loop */
#line 1608 "erl_code_gen.m"
      {
#line 1608 "erl_code_gen.m"
        MR_bool erl_backend__erl_code_gen__succeeded = ((MR_tag((MR_Word) erl_backend__erl_code_gen__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
#line 1608 "erl_code_gen.m"
        MR_Word erl_backend__erl_code_gen__Defn0_4;
#line 1608 "erl_code_gen.m"
        MR_Word erl_backend__erl_code_gen__Defns_5;
#line 1609 "erl_code_gen.m"
        MR_Word erl_backend__erl_code_gen__V_11_11;
#line 1609 "erl_code_gen.m"
        MR_Word erl_backend__erl_code_gen__V_8_8;
#line 1609 "erl_code_gen.m"
        MR_Word erl_backend__erl_code_gen__V_9_9;
#line 1609 "erl_code_gen.m"
        MR_Word erl_backend__erl_code_gen__V_10_10;

#line 1608 "erl_code_gen.m"
        if (erl_backend__erl_code_gen__succeeded)
#line 1608 "erl_code_gen.m"
          {
#line 1608 "erl_code_gen.m"
            erl_backend__erl_code_gen__Defn0_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__erl_code_gen__HeadVar__1_1, (MR_Integer) 0)));
#line 1608 "erl_code_gen.m"
            erl_backend__erl_code_gen__Defns_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__erl_code_gen__HeadVar__1_1, (MR_Integer) 1)));
#line 1609 "erl_code_gen.m"
            erl_backend__erl_code_gen__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__Defn0_4, (MR_Integer) 0)));
#line 1609 "erl_code_gen.m"
            erl_backend__erl_code_gen__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__Defn0_4, (MR_Integer) 1)));
#line 1609 "erl_code_gen.m"
            erl_backend__erl_code_gen__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__Defn0_4, (MR_Integer) 2)));
#line 1609 "erl_code_gen.m"
            erl_backend__erl_code_gen__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__Defn0_4, (MR_Integer) 3)));
#line 1609 "erl_code_gen.m"
            {
#line 1609 "erl_code_gen.m"
              erl_backend__erl_code_gen__succeeded = hlds__hlds_pred____Unify____pred_proc_id_0_0(erl_backend__erl_code_gen__PredProcId_6, erl_backend__erl_code_gen__V_11_11);
            }
#line 1611 "erl_code_gen.m"
            if (erl_backend__erl_code_gen__succeeded)
#line 1610 "erl_code_gen.m"
              {
#line 1610 "erl_code_gen.m"
                *erl_backend__erl_code_gen__Defn_7 = erl_backend__erl_code_gen__Defn0_4;
#line 1610 "erl_code_gen.m"
                erl_backend__erl_code_gen__succeeded = MR_TRUE;
#line 1610 "erl_code_gen.m"
              }
#line 1611 "erl_code_gen.m"
            else
#line 1612 "erl_code_gen.m"
              {
#line 1612 "erl_code_gen.m"
                /* direct tailcall eliminated */
#line 1612 "erl_code_gen.m"
                {
#line 1612 "erl_code_gen.m"
                  MR_Word erl_backend__erl_code_gen__HeadVar__1__tmp_copy_1 = erl_backend__erl_code_gen__Defns_5;

#line 1612 "erl_code_gen.m"
                  erl_backend__erl_code_gen__HeadVar__1_1 = erl_backend__erl_code_gen__HeadVar__1__tmp_copy_1;
#line 1612 "erl_code_gen.m"
                }
#line 1612 "erl_code_gen.m"
                continue;
#line 1612 "erl_code_gen.m"
              }
#line 1608 "erl_code_gen.m"
          }
#line 1608 "erl_code_gen.m"
        return erl_backend__erl_code_gen__succeeded;
#line 1608 "erl_code_gen.m"
      }
#line 1608 "erl_code_gen.m"
      break;
#line 1608 "erl_code_gen.m"
    }
#line 1605 "erl_code_gen.m"
}

#line 1584 "erl_code_gen.m"
static void MR_CALL 
erl_backend__erl_code_gen__erl_gen_foreign_export_defn_3_p_0(
#line 1584 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__ProcDefns_4,
#line 1584 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__PragmaExport_5,
#line 1584 "erl_code_gen.m"
  MR_Word * erl_backend__erl_code_gen__ForeignExportDefn_6)
#line 1584 "erl_code_gen.m"
{
#line 1587 "erl_code_gen.m"
  {
#line 1587 "erl_code_gen.m"
    MR_bool erl_backend__erl_code_gen__succeeded;
#line 1587 "erl_code_gen.m"
    MR_Word erl_backend__erl_code_gen__PredId_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__PragmaExport_5, (MR_Integer) 1)));
#line 1587 "erl_code_gen.m"
    MR_Integer erl_backend__erl_code_gen__ProcId_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__PragmaExport_5, (MR_Integer) 2)));
#line 1587 "erl_code_gen.m"
    MR_String erl_backend__erl_code_gen__Name_10 = ((MR_String) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__PragmaExport_5, (MR_Integer) 3)));
#line 1587 "erl_code_gen.m"
    MR_Word erl_backend__erl_code_gen__PredProcId_12;
#line 1588 "erl_code_gen.m"
    MR_Word erl_backend__erl_code_gen___Lang_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__PragmaExport_5, (MR_Integer) 0)));
#line 1588 "erl_code_gen.m"
    MR_Word erl_backend__erl_code_gen___Context_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__PragmaExport_5, (MR_Integer) 4)));
#line 1600 "erl_code_gen.m"
    MR_Word erl_backend__erl_code_gen__TargetProc_13;

#line 1589 "erl_code_gen.m"
    {
#line 1589 "erl_code_gen.m"
      erl_backend__erl_code_gen__PredProcId_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1589 "erl_code_gen.m"
      MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__PredProcId_12, 0) = ((MR_Box) (erl_backend__erl_code_gen__PredId_8));
#line 1589 "erl_code_gen.m"
      MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__PredProcId_12, 1) = ((MR_Box) (erl_backend__erl_code_gen__ProcId_9));
#line 1589 "erl_code_gen.m"
    }
#line 1590 "erl_code_gen.m"
    {
#line 1590 "erl_code_gen.m"
      erl_backend__erl_code_gen__succeeded = erl_backend__erl_code_gen__search_elds_defn_3_p_0(erl_backend__erl_code_gen__ProcDefns_4, erl_backend__erl_code_gen__PredProcId_12, &erl_backend__erl_code_gen__TargetProc_13);
    }
#line 1600 "erl_code_gen.m"
    if (erl_backend__erl_code_gen__succeeded)
#line 1592 "erl_code_gen.m"
      {
#line 1592 "erl_code_gen.m"
        MR_Word erl_backend__erl_code_gen__TypeCtorInfo_30_30;
#line 1592 "erl_code_gen.m"
        MR_Word erl_backend__erl_code_gen__TargetBody_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__TargetProc_13, (MR_Integer) 2)));
#line 1592 "erl_code_gen.m"
        MR_Integer erl_backend__erl_code_gen__Arity_18;
#line 1592 "erl_code_gen.m"
        MR_Word erl_backend__erl_code_gen__Vars_19;
#line 1592 "erl_code_gen.m"
        MR_Word erl_backend__erl_code_gen__VarSet_20;
#line 1592 "erl_code_gen.m"
        MR_Word erl_backend__erl_code_gen__Clause_21;
#line 1592 "erl_code_gen.m"
        MR_Word erl_backend__erl_code_gen__V_22_22;
#line 1592 "erl_code_gen.m"
        MR_Word erl_backend__erl_code_gen__V_23_23;
#line 1592 "erl_code_gen.m"
        MR_Word erl_backend__erl_code_gen__V_24_24;
#line 1592 "erl_code_gen.m"
        MR_Word erl_backend__erl_code_gen__V_25_25;
#line 1592 "erl_code_gen.m"
        MR_Word erl_backend__erl_code_gen__V_26_26;
#line 1591 "erl_code_gen.m"
        MR_Word erl_backend__erl_code_gen___TargetPPId_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__TargetProc_13, (MR_Integer) 0)));
#line 1591 "erl_code_gen.m"
        MR_Word erl_backend__erl_code_gen___TargetVarSet_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__TargetProc_13, (MR_Integer) 1)));
#line 1591 "erl_code_gen.m"
        MR_Word erl_backend__erl_code_gen___EnvVarNames_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__TargetProc_13, (MR_Integer) 3)));

#line 1593 "erl_code_gen.m"
        {
#line 1593 "erl_code_gen.m"
          erl_backend__erl_code_gen__Arity_18 = erl_backend__elds__elds_body_arity_1_f_0(erl_backend__erl_code_gen__TargetBody_16);
        }
#line 4819 "erl_backend.erl_code_gen.c"
        erl_backend__erl_code_gen__TypeCtorInfo_30_30 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 1596 "erl_code_gen.m"
        {
#line 1596 "erl_code_gen.m"
          erl_backend__erl_code_gen__V_22_22 = mercury__varset__init_0_f_0(erl_backend__erl_code_gen__TypeCtorInfo_30_30);
        }
#line 1596 "erl_code_gen.m"
        {
#line 1596 "erl_code_gen.m"
          mercury__varset__new_vars_4_p_0(erl_backend__erl_code_gen__TypeCtorInfo_30_30, erl_backend__erl_code_gen__Arity_18, &erl_backend__erl_code_gen__Vars_19, erl_backend__erl_code_gen__V_22_22, &erl_backend__erl_code_gen__VarSet_20);
        }
#line 1597 "erl_code_gen.m"
        {
#line 1597 "erl_code_gen.m"
          erl_backend__erl_code_gen__V_23_23 = erl_backend__elds__terms_from_vars_1_f_0(erl_backend__erl_code_gen__Vars_19);
        }
#line 1598 "erl_code_gen.m"
        {
#line 1598 "erl_code_gen.m"
          erl_backend__erl_code_gen__V_25_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1598 "erl_code_gen.m"
          MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__V_25_25, 0) = ((MR_Box) (erl_backend__erl_code_gen__PredProcId_12));
#line 1598 "erl_code_gen.m"
        }
#line 1598 "erl_code_gen.m"
        {
#line 1598 "erl_code_gen.m"
          erl_backend__erl_code_gen__V_26_26 = erl_backend__elds__exprs_from_vars_1_f_0(erl_backend__erl_code_gen__Vars_19);
        }
#line 1598 "erl_code_gen.m"
        {
#line 1598 "erl_code_gen.m"
          erl_backend__erl_code_gen__V_24_24 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1598 "erl_code_gen.m"
          MR_hl_field(MR_mktag(3), erl_backend__erl_code_gen__V_24_24, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 1598 "erl_code_gen.m"
          MR_hl_field(MR_mktag(3), erl_backend__erl_code_gen__V_24_24, 1) = ((MR_Box) (erl_backend__erl_code_gen__V_25_25));
#line 1598 "erl_code_gen.m"
          MR_hl_field(MR_mktag(3), erl_backend__erl_code_gen__V_24_24, 2) = ((MR_Box) (erl_backend__erl_code_gen__V_26_26));
#line 1598 "erl_code_gen.m"
        }
#line 1597 "erl_code_gen.m"
        {
#line 1597 "erl_code_gen.m"
          erl_backend__erl_code_gen__Clause_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1597 "erl_code_gen.m"
          MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__Clause_21, 0) = ((MR_Box) (erl_backend__erl_code_gen__V_23_23));
#line 1597 "erl_code_gen.m"
          MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__Clause_21, 1) = ((MR_Box) (erl_backend__erl_code_gen__V_24_24));
#line 1597 "erl_code_gen.m"
        }
#line 1599 "erl_code_gen.m"
        {
#line 1599 "erl_code_gen.m"
          MR_Word base;
#line 1599 "erl_code_gen.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1599 "erl_code_gen.m"
          *erl_backend__erl_code_gen__ForeignExportDefn_6 = base;
#line 1599 "erl_code_gen.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (erl_backend__erl_code_gen__Name_10));
#line 1599 "erl_code_gen.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (erl_backend__erl_code_gen__VarSet_20));
#line 1599 "erl_code_gen.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (erl_backend__erl_code_gen__Clause_21));
#line 1599 "erl_code_gen.m"
        }
#line 1592 "erl_code_gen.m"
      }
#line 1600 "erl_code_gen.m"
    else
#line 1601 "erl_code_gen.m"
      {
#line 1601 "erl_code_gen.m"
        {
#line 1601 "erl_code_gen.m"
          mercury__require__unexpected_3_p_0((MR_String) "erl_backend.erl_code_gen", (MR_String) "predicate \140erl_backend.erl_code_gen.erl_gen_foreign_export_defn\'/3", (MR_String) "missing definition of foreign exported procedure");
#line 1601 "erl_code_gen.m"
          return;
        }
#line 1601 "erl_code_gen.m"
      }
#line 1587 "erl_code_gen.m"
  }
#line 1584 "erl_code_gen.m"
}

#line 1015 "erl_code_gen.m"
static void MR_CALL 
erl_backend__erl_code_gen__ground_var_in_instmap_3_p_0(
#line 1015 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__Var_4,
#line 1015 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__STATE_VARIABLE_InstMap_0_6,
#line 1015 "erl_code_gen.m"
  MR_Word * erl_backend__erl_code_gen__STATE_VARIABLE_InstMap_7)
#line 1015 "erl_code_gen.m"
{
#line 1017 "erl_code_gen.m"
  {
#line 1017 "erl_code_gen.m"
    MR_bool erl_backend__erl_code_gen__succeeded;

#line 1024 "erl_code_gen.m"
    {
#line 1024 "erl_code_gen.m"
      hlds__instmap__instmap_set_var_4_p_0(erl_backend__erl_code_gen__Var_4, (MR_Word) MR_mkword(MR_mktag(3), &erl_backend__erl_code_gen_scalar_common_3[0]), erl_backend__erl_code_gen__STATE_VARIABLE_InstMap_0_6, erl_backend__erl_code_gen__STATE_VARIABLE_InstMap_7);
    }
#line 1017 "erl_code_gen.m"
  }
#line 1015 "erl_code_gen.m"
}

#line 1010 "erl_code_gen.m"
static MR_bool MR_CALL 
erl_backend__erl_code_gen__non_dummy_var_3_f_0(
#line 1010 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__ModuleInfo_5,
#line 1010 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__Var_6,
#line 1010 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__Type_7,
#line 1010 "erl_code_gen.m"
  MR_Word * erl_backend__erl_code_gen__Var_4)
#line 1010 "erl_code_gen.m"
{
#line 1012 "erl_code_gen.m"
  {
#line 1012 "erl_code_gen.m"
    MR_bool erl_backend__erl_code_gen__succeeded;
#line 1012 "erl_code_gen.m"
    MR_Word erl_backend__erl_code_gen__V_8_8;

#line 1012 "erl_code_gen.m"
    *erl_backend__erl_code_gen__Var_4 = erl_backend__erl_code_gen__Var_6;
#line 1013 "erl_code_gen.m"
    {
#line 1013 "erl_code_gen.m"
      erl_backend__erl_code_gen__V_8_8 = check_hlds__type_util__check_dummy_type_2_f_0(erl_backend__erl_code_gen__ModuleInfo_5, erl_backend__erl_code_gen__Type_7);
    }
#line 1013 "erl_code_gen.m"
    erl_backend__erl_code_gen__succeeded = (erl_backend__erl_code_gen__V_8_8 == (MR_Integer) 1);
#line 1012 "erl_code_gen.m"
    return erl_backend__erl_code_gen__succeeded;
#line 1012 "erl_code_gen.m"
  }
#line 1010 "erl_code_gen.m"
}

#line 989 "erl_code_gen.m"
static MR_bool MR_CALL 
erl_backend__erl_code_gen__maybe_create_closure_for_success_expr_8_p_0_1(
#line 989 "erl_code_gen.m"
  MR_Box erl_backend__erl_code_gen__closure_arg,
#line 989 "erl_code_gen.m"
  MR_Box erl_backend__erl_code_gen__wrapper_arg_1,
#line 989 "erl_code_gen.m"
  MR_Box erl_backend__erl_code_gen__wrapper_arg_2,
#line 989 "erl_code_gen.m"
  MR_Box * erl_backend__erl_code_gen__wrapper_arg_3)
#line 989 "erl_code_gen.m"
{
#line 989 "erl_code_gen.m"
  {
#line 989 "erl_code_gen.m"
    MR_bool erl_backend__erl_code_gen__succeeded;
#line 989 "erl_code_gen.m"
    MR_Box erl_backend__erl_code_gen__closure = erl_backend__erl_code_gen__closure_arg;
#line 989 "erl_code_gen.m"
    MR_Word erl_backend__erl_code_gen__conv0_Var_4;

#line 989 "erl_code_gen.m"
    {
#line 989 "erl_code_gen.m"
      erl_backend__erl_code_gen__succeeded = erl_backend__erl_code_gen__non_dummy_var_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__closure, (MR_Integer) 3))), ((MR_Word) erl_backend__erl_code_gen__wrapper_arg_1), ((MR_Word) erl_backend__erl_code_gen__wrapper_arg_2), &erl_backend__erl_code_gen__conv0_Var_4);
    }
#line 989 "erl_code_gen.m"
    if (erl_backend__erl_code_gen__succeeded)
#line 989 "erl_code_gen.m"
      {
#line 989 "erl_code_gen.m"
        *erl_backend__erl_code_gen__wrapper_arg_3 = ((MR_Box) (erl_backend__erl_code_gen__conv0_Var_4));
#line 989 "erl_code_gen.m"
        erl_backend__erl_code_gen__succeeded = MR_TRUE;
#line 989 "erl_code_gen.m"
      }
#line 989 "erl_code_gen.m"
    return erl_backend__erl_code_gen__succeeded;
#line 989 "erl_code_gen.m"
  }
#line 989 "erl_code_gen.m"
}

#line 971 "erl_code_gen.m"
static void MR_CALL 
erl_backend__erl_code_gen__maybe_create_closure_for_success_expr_8_p_0(
#line 971 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__NonLocals_9,
#line 971 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__MaybeSuccessExpr0_10,
#line 971 "erl_code_gen.m"
  MR_Word * erl_backend__erl_code_gen__MaybeMakeClosure_11,
#line 971 "erl_code_gen.m"
  MR_Word * erl_backend__erl_code_gen__MaybeSuccessExpr_12,
#line 971 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__InstMap0_13,
#line 971 "erl_code_gen.m"
  MR_Word * erl_backend__erl_code_gen__InstMap_14,
#line 971 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__STATE_VARIABLE_Info_0_28,
#line 971 "erl_code_gen.m"
  MR_Word * erl_backend__erl_code_gen__STATE_VARIABLE_Info_29)
#line 971 "erl_code_gen.m"
{
#line 977 "erl_code_gen.m"
  {
#line 977 "erl_code_gen.m"
    MR_bool erl_backend__erl_code_gen__succeeded = ((MR_tag((MR_Word) erl_backend__erl_code_gen__MaybeSuccessExpr0_10)) == (MR_mktag((MR_Integer) 1)));
#line 977 "erl_code_gen.m"
    MR_Word erl_backend__erl_code_gen__SuccessExpr0_16;
#line 978 "erl_code_gen.m"
    MR_Integer erl_backend__erl_code_gen__V_30_30;
#line 978 "erl_code_gen.m"
    MR_Integer erl_backend__erl_code_gen__V_31_31;

#line 978 "erl_code_gen.m"
    if (erl_backend__erl_code_gen__succeeded)
#line 978 "erl_code_gen.m"
      {
#line 978 "erl_code_gen.m"
        erl_backend__erl_code_gen__SuccessExpr0_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__erl_code_gen__MaybeSuccessExpr0_10, (MR_Integer) 0)));
#line 979 "erl_code_gen.m"
        {
#line 979 "erl_code_gen.m"
          erl_backend__erl_code_gen__V_30_30 = erl_backend__erl_code_util__erl_expr_size_1_f_0(erl_backend__erl_code_gen__SuccessExpr0_16);
        }
#line 747 "erl_code_gen.m"
        erl_backend__erl_code_gen__V_31_31 = (MR_Integer) 10;
#line 979 "erl_code_gen.m"
        erl_backend__erl_code_gen__succeeded = (erl_backend__erl_code_gen__V_30_30 > erl_backend__erl_code_gen__V_31_31);
#line 978 "erl_code_gen.m"
      }
#line 977 "erl_code_gen.m"
    if (erl_backend__erl_code_gen__succeeded)
#line 981 "erl_code_gen.m"
      {
#line 981 "erl_code_gen.m"
        MR_Word erl_backend__erl_code_gen__TypeInfo_38_38;
#line 981 "erl_code_gen.m"
        MR_Word erl_backend__erl_code_gen__ClosureVar_17;
#line 981 "erl_code_gen.m"
        MR_Word erl_backend__erl_code_gen__ClosureVarExpr_18;
#line 981 "erl_code_gen.m"
        MR_Word erl_backend__erl_code_gen__ClosureArgs0_19;
#line 981 "erl_code_gen.m"
        MR_Word erl_backend__erl_code_gen__ModuleInfo_20;
#line 981 "erl_code_gen.m"
        MR_Word erl_backend__erl_code_gen__ClosureArgsTypes_21;
#line 981 "erl_code_gen.m"
        MR_Word erl_backend__erl_code_gen__ClosureArgs_22;
#line 981 "erl_code_gen.m"
        MR_Word erl_backend__erl_code_gen__ClosureArgsTerms_23;
#line 981 "erl_code_gen.m"
        MR_Word erl_backend__erl_code_gen__ClosureArgsExprs_24;
#line 981 "erl_code_gen.m"
        MR_Word erl_backend__erl_code_gen__MakeClosure_25;
#line 981 "erl_code_gen.m"
        MR_Word erl_backend__erl_code_gen__ClosureFun_26;
#line 981 "erl_code_gen.m"
        MR_Word erl_backend__erl_code_gen__CallClosure_27;
#line 981 "erl_code_gen.m"
        MR_Word erl_backend__erl_code_gen__V_34_34;
#line 981 "erl_code_gen.m"
        MR_Word erl_backend__erl_code_gen__V_35_35;
#line 981 "erl_code_gen.m"
        MR_Word erl_backend__erl_code_gen__V_36_36;

#line 981 "erl_code_gen.m"
        {
#line 981 "erl_code_gen.m"
          erl_backend__erl_code_util__erl_gen_info_new_named_var_4_p_0((MR_String) "SuccessClosure", &erl_backend__erl_code_gen__ClosureVar_17, erl_backend__erl_code_gen__STATE_VARIABLE_Info_0_28, erl_backend__erl_code_gen__STATE_VARIABLE_Info_29);
        }
#line 1024 "erl_code_gen.m"
        {
#line 1024 "erl_code_gen.m"
          hlds__instmap__instmap_set_var_4_p_0(erl_backend__erl_code_gen__ClosureVar_17, (MR_Word) MR_mkword(MR_mktag(3), &erl_backend__erl_code_gen_scalar_common_3[0]), erl_backend__erl_code_gen__InstMap0_13, erl_backend__erl_code_gen__InstMap_14);
        }
#line 983 "erl_code_gen.m"
        {
#line 983 "erl_code_gen.m"
          erl_backend__erl_code_gen__ClosureVarExpr_18 = erl_backend__elds__expr_from_var_1_f_0(erl_backend__erl_code_gen__ClosureVar_17);
        }
#line 984 "erl_code_gen.m"
        {
#line 984 "erl_code_gen.m"
          erl_backend__erl_code_gen__ClosureArgs0_19 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, erl_backend__erl_code_gen__NonLocals_9);
        }
#line 987 "erl_code_gen.m"
        {
#line 987 "erl_code_gen.m"
          erl_backend__erl_code_util__erl_gen_info_get_module_info_2_p_0(*erl_backend__erl_code_gen__STATE_VARIABLE_Info_29, &erl_backend__erl_code_gen__ModuleInfo_20);
        }
#line 988 "erl_code_gen.m"
        {
#line 988 "erl_code_gen.m"
          erl_backend__erl_code_util__erl_variable_types_3_p_0(*erl_backend__erl_code_gen__STATE_VARIABLE_Info_29, erl_backend__erl_code_gen__ClosureArgs0_19, &erl_backend__erl_code_gen__ClosureArgsTypes_21);
        }
#line 5127 "erl_backend.erl_code_gen.c"
        erl_backend__erl_code_gen__TypeInfo_38_38 = (MR_Word) &erl_backend__erl_code_gen_scalar_common_1[0];
#line 989 "erl_code_gen.m"
        {
#line 989 "erl_code_gen.m"
          erl_backend__erl_code_gen__V_34_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 989 "erl_code_gen.m"
          MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__V_34_34, 0) = ((MR_Box) (&erl_backend__erl_code_gen_scalar_common_5[1]));
#line 989 "erl_code_gen.m"
          MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__V_34_34, 1) = ((MR_Box) (erl_backend__erl_code_gen__maybe_create_closure_for_success_expr_8_p_0_1));
#line 989 "erl_code_gen.m"
          MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__V_34_34, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 989 "erl_code_gen.m"
          MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__V_34_34, 3) = ((MR_Box) (erl_backend__erl_code_gen__ModuleInfo_20));
#line 989 "erl_code_gen.m"
        }
#line 989 "erl_code_gen.m"
        {
#line 989 "erl_code_gen.m"
          erl_backend__erl_code_gen__ClosureArgs_22 = mercury__list__filter_map_corresponding_3_f_0(erl_backend__erl_code_gen__TypeInfo_38_38, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, erl_backend__erl_code_gen__TypeInfo_38_38, erl_backend__erl_code_gen__V_34_34, erl_backend__erl_code_gen__ClosureArgs0_19, erl_backend__erl_code_gen__ClosureArgsTypes_21);
        }
#line 991 "erl_code_gen.m"
        {
#line 991 "erl_code_gen.m"
          erl_backend__erl_code_gen__ClosureArgsTerms_23 = erl_backend__elds__terms_from_vars_1_f_0(erl_backend__erl_code_gen__ClosureArgs_22);
        }
#line 992 "erl_code_gen.m"
        {
#line 992 "erl_code_gen.m"
          erl_backend__erl_code_gen__ClosureArgsExprs_24 = erl_backend__elds__exprs_from_vars_1_f_0(erl_backend__erl_code_gen__ClosureArgs_22);
        }
#line 996 "erl_code_gen.m"
        {
#line 996 "erl_code_gen.m"
          erl_backend__erl_code_gen__V_35_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 996 "erl_code_gen.m"
          MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__V_35_35, 0) = ((MR_Box) (erl_backend__erl_code_gen__ClosureArgsTerms_23));
#line 996 "erl_code_gen.m"
          MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__V_35_35, 1) = ((MR_Box) (erl_backend__erl_code_gen__SuccessExpr0_16));
#line 996 "erl_code_gen.m"
        }
#line 996 "erl_code_gen.m"
        erl_backend__erl_code_gen__ClosureFun_26 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) erl_backend__erl_code_gen__V_35_35);
#line 995 "erl_code_gen.m"
        {
#line 995 "erl_code_gen.m"
          erl_backend__erl_code_gen__MakeClosure_25 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 995 "erl_code_gen.m"
          MR_hl_field(MR_mktag(3), erl_backend__erl_code_gen__MakeClosure_25, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 995 "erl_code_gen.m"
          MR_hl_field(MR_mktag(3), erl_backend__erl_code_gen__MakeClosure_25, 1) = ((MR_Box) (erl_backend__erl_code_gen__ClosureVarExpr_18));
#line 995 "erl_code_gen.m"
          MR_hl_field(MR_mktag(3), erl_backend__erl_code_gen__MakeClosure_25, 2) = ((MR_Box) (erl_backend__erl_code_gen__ClosureFun_26));
#line 995 "erl_code_gen.m"
        }
#line 999 "erl_code_gen.m"
        {
#line 999 "erl_code_gen.m"
          erl_backend__erl_code_gen__V_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 999 "erl_code_gen.m"
          MR_hl_field(MR_mktag(1), erl_backend__erl_code_gen__V_36_36, 0) = ((MR_Box) (erl_backend__erl_code_gen__ClosureVarExpr_18));
#line 999 "erl_code_gen.m"
        }
#line 999 "erl_code_gen.m"
        {
#line 999 "erl_code_gen.m"
          erl_backend__erl_code_gen__CallClosure_27 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 999 "erl_code_gen.m"
          MR_hl_field(MR_mktag(3), erl_backend__erl_code_gen__CallClosure_27, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 999 "erl_code_gen.m"
          MR_hl_field(MR_mktag(3), erl_backend__erl_code_gen__CallClosure_27, 1) = ((MR_Box) (erl_backend__erl_code_gen__V_36_36));
#line 999 "erl_code_gen.m"
          MR_hl_field(MR_mktag(3), erl_backend__erl_code_gen__CallClosure_27, 2) = ((MR_Box) (erl_backend__erl_code_gen__ClosureArgsExprs_24));
#line 999 "erl_code_gen.m"
        }
#line 1002 "erl_code_gen.m"
        {
#line 1002 "erl_code_gen.m"
          MR_Word base;
#line 1002 "erl_code_gen.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1002 "erl_code_gen.m"
          *erl_backend__erl_code_gen__MaybeMakeClosure_11 = base;
#line 1002 "erl_code_gen.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (erl_backend__erl_code_gen__MakeClosure_25));
#line 1002 "erl_code_gen.m"
        }
#line 1003 "erl_code_gen.m"
        {
#line 1003 "erl_code_gen.m"
          MR_Word base;
#line 1003 "erl_code_gen.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1003 "erl_code_gen.m"
          *erl_backend__erl_code_gen__MaybeSuccessExpr_12 = base;
#line 1003 "erl_code_gen.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (erl_backend__erl_code_gen__CallClosure_27));
#line 1003 "erl_code_gen.m"
        }
#line 981 "erl_code_gen.m"
      }
#line 977 "erl_code_gen.m"
    else
#line 1005 "erl_code_gen.m"
      {
#line 1005 "erl_code_gen.m"
        *erl_backend__erl_code_gen__InstMap_14 = erl_backend__erl_code_gen__InstMap0_13;
#line 1006 "erl_code_gen.m"
        *erl_backend__erl_code_gen__MaybeMakeClosure_11 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1007 "erl_code_gen.m"
        *erl_backend__erl_code_gen__MaybeSuccessExpr_12 = erl_backend__erl_code_gen__MaybeSuccessExpr0_10;
#line 1005 "erl_code_gen.m"
        *erl_backend__erl_code_gen__STATE_VARIABLE_Info_29 = erl_backend__erl_code_gen__STATE_VARIABLE_Info_0_28;
#line 1005 "erl_code_gen.m"
      }
#line 977 "erl_code_gen.m"
  }
#line 971 "erl_code_gen.m"
}

#line 962 "erl_code_gen.m"
static void MR_CALL 
erl_backend__erl_code_gen__union_bound_nonlocals_in_goals_4_p_0_1(
#line 962 "erl_code_gen.m"
  MR_Box erl_backend__erl_code_gen__closure_arg,
#line 962 "erl_code_gen.m"
  MR_Box erl_backend__erl_code_gen__wrapper_arg_1,
#line 962 "erl_code_gen.m"
  MR_Box * erl_backend__erl_code_gen__wrapper_arg_2)
#line 962 "erl_code_gen.m"
{
#line 962 "erl_code_gen.m"
  {
#line 962 "erl_code_gen.m"
    MR_Box erl_backend__erl_code_gen__closure = erl_backend__erl_code_gen__closure_arg;
#line 962 "erl_code_gen.m"
    MR_Word erl_backend__erl_code_gen__conv0_HeadVar__4_4;

#line 962 "erl_code_gen.m"
    {
#line 962 "erl_code_gen.m"
      erl_backend__erl_code_util__erl_bound_nonlocals_in_goal_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__closure, (MR_Integer) 4))), ((MR_Word) erl_backend__erl_code_gen__wrapper_arg_1), &erl_backend__erl_code_gen__conv0_HeadVar__4_4);
    }
#line 962 "erl_code_gen.m"
    *erl_backend__erl_code_gen__wrapper_arg_2 = ((MR_Box) (erl_backend__erl_code_gen__conv0_HeadVar__4_4));
#line 962 "erl_code_gen.m"
  }
#line 962 "erl_code_gen.m"
}

#line 958 "erl_code_gen.m"
static void MR_CALL 
erl_backend__erl_code_gen__union_bound_nonlocals_in_goals_4_p_0(
#line 958 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__Info_5,
#line 958 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__InstMap_6,
#line 958 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__Goals_7,
#line 958 "erl_code_gen.m"
  MR_Word * erl_backend__erl_code_gen__NonLocalsUnion_8)
#line 958 "erl_code_gen.m"
{
#line 961 "erl_code_gen.m"
  {
#line 961 "erl_code_gen.m"
    MR_bool erl_backend__erl_code_gen__succeeded;
#line 961 "erl_code_gen.m"
    MR_Word erl_backend__erl_code_gen__IsBound_9;
#line 961 "erl_code_gen.m"
    MR_Word erl_backend__erl_code_gen__NonLocalsLists_10;

#line 962 "erl_code_gen.m"
    {
#line 962 "erl_code_gen.m"
      erl_backend__erl_code_gen__IsBound_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 962 "erl_code_gen.m"
      MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__IsBound_9, 0) = ((MR_Box) (&erl_backend__erl_code_gen_scalar_common_5[0]));
#line 962 "erl_code_gen.m"
      MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__IsBound_9, 1) = ((MR_Box) (erl_backend__erl_code_gen__union_bound_nonlocals_in_goals_4_p_0_1));
#line 962 "erl_code_gen.m"
      MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__IsBound_9, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 962 "erl_code_gen.m"
      MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__IsBound_9, 3) = ((MR_Box) (erl_backend__erl_code_gen__Info_5));
#line 962 "erl_code_gen.m"
      MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__IsBound_9, 4) = ((MR_Box) (erl_backend__erl_code_gen__InstMap_6));
#line 962 "erl_code_gen.m"
    }
#line 963 "erl_code_gen.m"
    {
#line 963 "erl_code_gen.m"
      mercury__list__map_3_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, (MR_Word) &erl_backend__erl_code_gen_scalar_common_1[3], erl_backend__erl_code_gen__IsBound_9, erl_backend__erl_code_gen__Goals_7, &erl_backend__erl_code_gen__NonLocalsLists_10);
    }
#line 964 "erl_code_gen.m"
    {
#line 964 "erl_code_gen.m"
      *erl_backend__erl_code_gen__NonLocalsUnion_8 = parse_tree__set_of_var__union_list_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, erl_backend__erl_code_gen__NonLocalsLists_10);
    }
#line 961 "erl_code_gen.m"
  }
#line 958 "erl_code_gen.m"
}

#line 933 "erl_code_gen.m"
static MR_bool MR_CALL 
erl_backend__erl_code_gen__erl_gen_case_on_atom_8_p_0_1(
#line 933 "erl_code_gen.m"
  MR_Box erl_backend__erl_code_gen__closure_arg)
#line 933 "erl_code_gen.m"
{
#line 933 "erl_code_gen.m"
  {
#line 933 "erl_code_gen.m"
    MR_bool erl_backend__erl_code_gen__succeeded;
#line 933 "erl_code_gen.m"
    MR_Box erl_backend__erl_code_gen__closure = erl_backend__erl_code_gen__closure_arg;

#line 933 "erl_code_gen.m"
    {
#line 933 "erl_code_gen.m"
      erl_backend__erl_code_gen__succeeded = erl_backend__erl_code_gen__IntroducedFrom__pred__erl_gen_case_on_atom__933__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__closure, (MR_Integer) 4))));
    }
#line 933 "erl_code_gen.m"
    return erl_backend__erl_code_gen__succeeded;
#line 933 "erl_code_gen.m"
  }
#line 933 "erl_code_gen.m"
}

#line 926 "erl_code_gen.m"
static void MR_CALL 
erl_backend__erl_code_gen__erl_gen_case_on_atom_8_p_0(
#line 926 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__CodeModel_9,
#line 926 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__InstMap_10,
#line 926 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__MustBindNonLocals_11,
#line 926 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__MaybeSuccessExpr_12,
#line 926 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__Case_13,
#line 926 "erl_code_gen.m"
  MR_Word * erl_backend__erl_code_gen__ELDSCase_14,
#line 926 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__STATE_VARIABLE_Info_0_24,
#line 926 "erl_code_gen.m"
  MR_Word * erl_backend__erl_code_gen__STATE_VARIABLE_Info_25)
#line 926 "erl_code_gen.m"
{
#line 931 "erl_code_gen.m"
  {
#line 931 "erl_code_gen.m"
    MR_bool erl_backend__erl_code_gen__succeeded;
#line 931 "erl_code_gen.m"
    MR_Word erl_backend__erl_code_gen__MainConsId_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__Case_13, (MR_Integer) 0)));
#line 931 "erl_code_gen.m"
    MR_Word erl_backend__erl_code_gen__OtherConsIds_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__Case_13, (MR_Integer) 1)));
#line 931 "erl_code_gen.m"
    MR_Word erl_backend__erl_code_gen__Goal_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__Case_13, (MR_Integer) 2)));
#line 931 "erl_code_gen.m"
    MR_String erl_backend__erl_code_gen__String_20;
#line 931 "erl_code_gen.m"
    MR_Word erl_backend__erl_code_gen__MaybeSuccessExprForCase_21;
#line 931 "erl_code_gen.m"
    MR_Word erl_backend__erl_code_gen__Statement0_22;
#line 931 "erl_code_gen.m"
    MR_Word erl_backend__erl_code_gen__Statement_23;
#line 931 "erl_code_gen.m"
    MR_Word erl_backend__erl_code_gen__V_26_26;
#line 931 "erl_code_gen.m"
    MR_Word erl_backend__erl_code_gen__STATE_VARIABLE_Info_34_34;
#line 931 "erl_code_gen.m"
    MR_Word erl_backend__erl_code_gen__V_36_36;
#line 937 "erl_code_gen.m"
    MR_String erl_backend__erl_code_gen__String0_19;

#line 933 "erl_code_gen.m"
    {
#line 933 "erl_code_gen.m"
      erl_backend__erl_code_gen__V_26_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 933 "erl_code_gen.m"
      MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__V_26_26, 0) = ((MR_Box) (&erl_backend__erl_code_gen_scalar_common_4[1]));
#line 933 "erl_code_gen.m"
      MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__V_26_26, 1) = ((MR_Box) (erl_backend__erl_code_gen__erl_gen_case_on_atom_8_p_0_1));
#line 933 "erl_code_gen.m"
      MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__V_26_26, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 933 "erl_code_gen.m"
      MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__V_26_26, 3) = ((MR_Box) (erl_backend__erl_code_gen__OtherConsIds_17));
#line 933 "erl_code_gen.m"
      MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__V_26_26, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 933 "erl_code_gen.m"
    }
#line 933 "erl_code_gen.m"
    {
#line 933 "erl_code_gen.m"
      mercury__require__expect_4_p_0(erl_backend__erl_code_gen__V_26_26, (MR_String) "erl_backend.erl_code_gen", (MR_String) "predicate \140erl_backend.erl_code_gen.erl_gen_case_on_atom\'/8", (MR_String) "multi-cons-id switch arms NYI");
    }
#line 935 "erl_code_gen.m"
    erl_backend__erl_code_gen__succeeded = ((((MR_tag((MR_Word) erl_backend__erl_code_gen__MainConsId_16)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_code_gen__MainConsId_16, (MR_Integer) 0)))) == (MR_Integer) 8)));
#line 935 "erl_code_gen.m"
    if (erl_backend__erl_code_gen__succeeded)
#line 935 "erl_code_gen.m"
      {
#line 935 "erl_code_gen.m"
        erl_backend__erl_code_gen__String0_19 = ((MR_String) (MR_hl_field(MR_mktag(3), erl_backend__erl_code_gen__MainConsId_16, (MR_Integer) 1)));
#line 936 "erl_code_gen.m"
        erl_backend__erl_code_gen__String_20 = erl_backend__erl_code_gen__String0_19;
#line 935 "erl_code_gen.m"
      }
#line 935 "erl_code_gen.m"
    else
#line 938 "erl_code_gen.m"
      {
#line 938 "erl_code_gen.m"
        {
#line 938 "erl_code_gen.m"
          mercury__require__unexpected_3_p_0((MR_String) "erl_backend.erl_code_gen", (MR_String) "predicate \140erl_backend.erl_code_gen.erl_gen_case_on_atom\'/8", (MR_String) "non-string const");
#line 938 "erl_code_gen.m"
          return;
        }
#line 938 "erl_code_gen.m"
      }
#line 940 "erl_code_gen.m"
    {
#line 940 "erl_code_gen.m"
      erl_backend__erl_code_util__erl_fix_success_expr_6_p_0(erl_backend__erl_code_gen__InstMap_10, erl_backend__erl_code_gen__Goal_18, erl_backend__erl_code_gen__MaybeSuccessExpr_12, &erl_backend__erl_code_gen__MaybeSuccessExprForCase_21, erl_backend__erl_code_gen__STATE_VARIABLE_Info_0_24, &erl_backend__erl_code_gen__STATE_VARIABLE_Info_34_34);
    }
#line 942 "erl_code_gen.m"
    {
#line 942 "erl_code_gen.m"
      erl_backend__erl_code_gen__erl_gen_goal_7_p_0(erl_backend__erl_code_gen__CodeModel_9, erl_backend__erl_code_gen__InstMap_10, erl_backend__erl_code_gen__Goal_18, erl_backend__erl_code_gen__MaybeSuccessExprForCase_21, &erl_backend__erl_code_gen__Statement0_22, erl_backend__erl_code_gen__STATE_VARIABLE_Info_34_34, erl_backend__erl_code_gen__STATE_VARIABLE_Info_25);
    }
#line 949 "erl_code_gen.m"
    {
#line 949 "erl_code_gen.m"
      erl_backend__erl_code_util__erl_bind_unbound_vars_6_p_0(*erl_backend__erl_code_gen__STATE_VARIABLE_Info_25, erl_backend__erl_code_gen__MustBindNonLocals_11, erl_backend__erl_code_gen__Goal_18, erl_backend__erl_code_gen__InstMap_10, erl_backend__erl_code_gen__Statement0_22, &erl_backend__erl_code_gen__Statement_23);
    }
#line 951 "erl_code_gen.m"
    {
#line 951 "erl_code_gen.m"
      erl_backend__erl_code_gen__V_36_36 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 951 "erl_code_gen.m"
      MR_hl_field(MR_mktag(3), erl_backend__erl_code_gen__V_36_36, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 951 "erl_code_gen.m"
      MR_hl_field(MR_mktag(3), erl_backend__erl_code_gen__V_36_36, 1) = ((MR_Box) (erl_backend__erl_code_gen__String_20));
#line 951 "erl_code_gen.m"
    }
#line 951 "erl_code_gen.m"
    {
#line 951 "erl_code_gen.m"
      MR_Word base;
#line 951 "erl_code_gen.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 951 "erl_code_gen.m"
      *erl_backend__erl_code_gen__ELDSCase_14 = base;
#line 951 "erl_code_gen.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (erl_backend__erl_code_gen__V_36_36));
#line 951 "erl_code_gen.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (erl_backend__erl_code_gen__Statement_23));
#line 951 "erl_code_gen.m"
    }
#line 931 "erl_code_gen.m"
  }
#line 926 "erl_code_gen.m"
}

#line 875 "erl_code_gen.m"
static MR_bool MR_CALL 
erl_backend__erl_code_gen__erl_gen_case_9_p_0_1(
#line 875 "erl_code_gen.m"
  MR_Box erl_backend__erl_code_gen__closure_arg)
#line 875 "erl_code_gen.m"
{
#line 875 "erl_code_gen.m"
  {
#line 875 "erl_code_gen.m"
    MR_bool erl_backend__erl_code_gen__succeeded;
#line 875 "erl_code_gen.m"
    MR_Box erl_backend__erl_code_gen__closure = erl_backend__erl_code_gen__closure_arg;

#line 875 "erl_code_gen.m"
    {
#line 875 "erl_code_gen.m"
      erl_backend__erl_code_gen__succeeded = erl_backend__erl_code_gen__IntroducedFrom__pred__erl_gen_case__875__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__closure, (MR_Integer) 4))));
    }
#line 875 "erl_code_gen.m"
    return erl_backend__erl_code_gen__succeeded;
#line 875 "erl_code_gen.m"
  }
#line 875 "erl_code_gen.m"
}

#line 867 "erl_code_gen.m"
static void MR_CALL 
erl_backend__erl_code_gen__erl_gen_case_9_p_0(
#line 867 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__Type_10,
#line 867 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__CodeModel_11,
#line 867 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__InstMap_12,
#line 867 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__MustBindNonLocals_13,
#line 867 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__MaybeSuccessExpr_14,
#line 867 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__Case_15,
#line 867 "erl_code_gen.m"
  MR_Word * erl_backend__erl_code_gen__ELDSCase_16,
#line 867 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__STATE_VARIABLE_Info_0_29,
#line 867 "erl_code_gen.m"
  MR_Word * erl_backend__erl_code_gen__STATE_VARIABLE_Info_30)
#line 867 "erl_code_gen.m"
{
#line 873 "erl_code_gen.m"
  {
#line 873 "erl_code_gen.m"
    MR_bool erl_backend__erl_code_gen__succeeded;
#line 873 "erl_code_gen.m"
    MR_Word erl_backend__erl_code_gen__MainConsId_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__Case_15, (MR_Integer) 0)));
#line 873 "erl_code_gen.m"
    MR_Word erl_backend__erl_code_gen__OtherConsIds_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__Case_15, (MR_Integer) 1)));
#line 873 "erl_code_gen.m"
    MR_Word erl_backend__erl_code_gen__Goal_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__Case_15, (MR_Integer) 2)));
#line 873 "erl_code_gen.m"
    MR_Word erl_backend__erl_code_gen__ModuleInfo_21;
#line 873 "erl_code_gen.m"
    MR_Integer erl_backend__erl_code_gen__Size_22;
#line 873 "erl_code_gen.m"
    MR_Word erl_backend__erl_code_gen__DummyVars_23;
#line 873 "erl_code_gen.m"
    MR_Word erl_backend__erl_code_gen__Pattern_25;
#line 873 "erl_code_gen.m"
    MR_Word erl_backend__erl_code_gen__MaybeSuccessExprForCase_26;
#line 873 "erl_code_gen.m"
    MR_Word erl_backend__erl_code_gen__Statement0_27;
#line 873 "erl_code_gen.m"
    MR_Word erl_backend__erl_code_gen__Statement_28;
#line 873 "erl_code_gen.m"
    MR_Word erl_backend__erl_code_gen__V_31_31;
#line 873 "erl_code_gen.m"
    MR_Word erl_backend__erl_code_gen__STATE_VARIABLE_Info_36_36;
#line 873 "erl_code_gen.m"
    MR_Word erl_backend__erl_code_gen__STATE_VARIABLE_Info_42_42;
#line 873 "erl_code_gen.m"
    MR_Word erl_backend__erl_code_gen__STATE_VARIABLE_Info_43_43;
#line 922 "erl_code_gen.m"
    MR_Word erl_backend__erl_code_gen__ConsDefn_51;
#line 907 "erl_code_gen.m"
    MR_Word erl_backend__erl_code_gen__TypeCtor_50;
#line 882 "erl_code_gen.m"
    MR_Word erl_backend__erl_code_gen__Pattern0_24;
#line 882 "erl_code_gen.m"
    MR_Word erl_backend__erl_code_gen__STATE_VARIABLE_Info_38_38;

#line 875 "erl_code_gen.m"
    {
#line 875 "erl_code_gen.m"
      erl_backend__erl_code_gen__V_31_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 875 "erl_code_gen.m"
      MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__V_31_31, 0) = ((MR_Box) (&erl_backend__erl_code_gen_scalar_common_4[1]));
#line 875 "erl_code_gen.m"
      MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__V_31_31, 1) = ((MR_Box) (erl_backend__erl_code_gen__erl_gen_case_9_p_0_1));
#line 875 "erl_code_gen.m"
      MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__V_31_31, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 875 "erl_code_gen.m"
      MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__V_31_31, 3) = ((MR_Box) (erl_backend__erl_code_gen__OtherConsIds_19));
#line 875 "erl_code_gen.m"
      MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__V_31_31, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 875 "erl_code_gen.m"
    }
#line 875 "erl_code_gen.m"
    {
#line 875 "erl_code_gen.m"
      mercury__require__expect_4_p_0(erl_backend__erl_code_gen__V_31_31, (MR_String) "erl_backend.erl_code_gen", (MR_String) "predicate \140erl_backend.erl_code_gen.erl_gen_case\'/9", (MR_String) "multi-cons-id switch arms NYI");
    }
#line 877 "erl_code_gen.m"
    {
#line 877 "erl_code_gen.m"
      erl_backend__erl_code_util__erl_gen_info_get_module_info_2_p_0(erl_backend__erl_code_gen__STATE_VARIABLE_Info_0_29, &erl_backend__erl_code_gen__ModuleInfo_21);
    }
#line 907 "erl_code_gen.m"
    {
#line 907 "erl_code_gen.m"
      erl_backend__erl_code_gen__succeeded = parse_tree__prog_type__type_to_ctor_2_p_0(erl_backend__erl_code_gen__Type_10, &erl_backend__erl_code_gen__TypeCtor_50);
    }
#line 907 "erl_code_gen.m"
    if (erl_backend__erl_code_gen__succeeded)
#line 908 "erl_code_gen.m"
      {
#line 908 "erl_code_gen.m"
        erl_backend__erl_code_gen__succeeded = check_hlds__type_util__get_cons_defn_4_p_0(erl_backend__erl_code_gen__ModuleInfo_21, erl_backend__erl_code_gen__TypeCtor_50, erl_backend__erl_code_gen__MainConsId_18, &erl_backend__erl_code_gen__ConsDefn_51);
      }
#line 922 "erl_code_gen.m"
    if (erl_backend__erl_code_gen__succeeded)
#line 915 "erl_code_gen.m"
      {
#line 915 "erl_code_gen.m"
        MR_Word erl_backend__erl_code_gen__TypeInfo_41_82;
#line 915 "erl_code_gen.m"
        MR_Word erl_backend__erl_code_gen__Constraints_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__ConsDefn_51, (MR_Integer) 5)));
#line 915 "erl_code_gen.m"
        MR_Word erl_backend__erl_code_gen__ConstrainedTVars_53;
#line 915 "erl_code_gen.m"
        MR_Word erl_backend__erl_code_gen__ExistTVars_54;
#line 915 "erl_code_gen.m"
        MR_Word erl_backend__erl_code_gen__UnconstrainedTVars_55;
#line 915 "erl_code_gen.m"
        MR_Integer erl_backend__erl_code_gen__V_56_56;
#line 915 "erl_code_gen.m"
        MR_Integer erl_backend__erl_code_gen__V_57_57;
#line 915 "erl_code_gen.m"
        MR_Integer erl_backend__erl_code_gen__V_58_58;
#line 915 "erl_code_gen.m"
        MR_Integer erl_backend__erl_code_gen__V_59_59;
#line 915 "erl_code_gen.m"
        MR_Word erl_backend__erl_code_gen__V_60_60;
#line 915 "erl_code_gen.m"
        MR_Word erl_backend__erl_code_gen__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__ConsDefn_51, (MR_Integer) 0)));
#line 915 "erl_code_gen.m"
        MR_Word erl_backend__erl_code_gen__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__ConsDefn_51, (MR_Integer) 1)));
#line 915 "erl_code_gen.m"
        MR_Word erl_backend__erl_code_gen__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__ConsDefn_51, (MR_Integer) 2)));
#line 915 "erl_code_gen.m"
        MR_Word erl_backend__erl_code_gen__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__ConsDefn_51, (MR_Integer) 3)));
#line 915 "erl_code_gen.m"
        MR_Word erl_backend__erl_code_gen__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__ConsDefn_51, (MR_Integer) 4)));
#line 915 "erl_code_gen.m"
        MR_Word erl_backend__erl_code_gen__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__ConsDefn_51, (MR_Integer) 6)));
#line 915 "erl_code_gen.m"
        MR_Word erl_backend__erl_code_gen__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__ConsDefn_51, (MR_Integer) 7)));
#line 917 "erl_code_gen.m"
        MR_Word erl_backend__erl_code_gen__V_68_68;
#line 917 "erl_code_gen.m"
        MR_Word erl_backend__erl_code_gen__V_69_69;
#line 917 "erl_code_gen.m"
        MR_Word erl_backend__erl_code_gen__V_70_70;
#line 917 "erl_code_gen.m"
        MR_Word erl_backend__erl_code_gen__V_71_71;
#line 917 "erl_code_gen.m"
        MR_Word erl_backend__erl_code_gen__V_72_72;
#line 917 "erl_code_gen.m"
        MR_Word erl_backend__erl_code_gen__V_73_73;
#line 917 "erl_code_gen.m"
        MR_Word erl_backend__erl_code_gen__V_74_74;
#line 921 "erl_code_gen.m"
        MR_Word erl_backend__erl_code_gen__V_75_75;
#line 921 "erl_code_gen.m"
        MR_Word erl_backend__erl_code_gen__V_76_76;
#line 921 "erl_code_gen.m"
        MR_Word erl_backend__erl_code_gen__V_77_77;
#line 921 "erl_code_gen.m"
        MR_Word erl_backend__erl_code_gen__V_78_78;
#line 921 "erl_code_gen.m"
        MR_Word erl_backend__erl_code_gen__V_79_79;
#line 921 "erl_code_gen.m"
        MR_Word erl_backend__erl_code_gen__V_80_80;
#line 921 "erl_code_gen.m"
        MR_Word erl_backend__erl_code_gen__V_81_81;

#line 916 "erl_code_gen.m"
        {
#line 916 "erl_code_gen.m"
          parse_tree__prog_type__constraint_list_get_tvars_2_p_0(erl_backend__erl_code_gen__Constraints_52, &erl_backend__erl_code_gen__ConstrainedTVars_53);
        }
#line 917 "erl_code_gen.m"
        erl_backend__erl_code_gen__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__ConsDefn_51, (MR_Integer) 0)));
#line 917 "erl_code_gen.m"
        erl_backend__erl_code_gen__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__ConsDefn_51, (MR_Integer) 1)));
#line 917 "erl_code_gen.m"
        erl_backend__erl_code_gen__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__ConsDefn_51, (MR_Integer) 2)));
#line 917 "erl_code_gen.m"
        erl_backend__erl_code_gen__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__ConsDefn_51, (MR_Integer) 3)));
#line 917 "erl_code_gen.m"
        erl_backend__erl_code_gen__ExistTVars_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__ConsDefn_51, (MR_Integer) 4)));
#line 917 "erl_code_gen.m"
        erl_backend__erl_code_gen__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__ConsDefn_51, (MR_Integer) 5)));
#line 917 "erl_code_gen.m"
        erl_backend__erl_code_gen__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__ConsDefn_51, (MR_Integer) 6)));
#line 917 "erl_code_gen.m"
        erl_backend__erl_code_gen__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__ConsDefn_51, (MR_Integer) 7)));
#line 5710 "erl_backend.erl_code_gen.c"
        erl_backend__erl_code_gen__TypeInfo_41_82 = (MR_Word) &erl_backend__erl_code_gen_scalar_common_1[2];
#line 918 "erl_code_gen.m"
        {
#line 918 "erl_code_gen.m"
          erl_backend__erl_code_gen__UnconstrainedTVars_55 = mercury__list__delete_elems_2_f_0(erl_backend__erl_code_gen__TypeInfo_41_82, erl_backend__erl_code_gen__ExistTVars_54, erl_backend__erl_code_gen__ConstrainedTVars_53);
        }
#line 920 "erl_code_gen.m"
        {
#line 920 "erl_code_gen.m"
          erl_backend__erl_code_gen__V_57_57 = mercury__list__length_1_f_0(erl_backend__erl_code_gen__TypeInfo_41_82, erl_backend__erl_code_gen__UnconstrainedTVars_55);
        }
#line 920 "erl_code_gen.m"
        {
#line 920 "erl_code_gen.m"
          erl_backend__erl_code_gen__V_58_58 = mercury__list__length_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0, erl_backend__erl_code_gen__Constraints_52);
        }
#line 920 "erl_code_gen.m"
        erl_backend__erl_code_gen__V_56_56 = (erl_backend__erl_code_gen__V_57_57 + erl_backend__erl_code_gen__V_58_58);
#line 921 "erl_code_gen.m"
        erl_backend__erl_code_gen__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__ConsDefn_51, (MR_Integer) 0)));
#line 921 "erl_code_gen.m"
        erl_backend__erl_code_gen__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__ConsDefn_51, (MR_Integer) 1)));
#line 921 "erl_code_gen.m"
        erl_backend__erl_code_gen__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__ConsDefn_51, (MR_Integer) 2)));
#line 921 "erl_code_gen.m"
        erl_backend__erl_code_gen__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__ConsDefn_51, (MR_Integer) 3)));
#line 921 "erl_code_gen.m"
        erl_backend__erl_code_gen__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__ConsDefn_51, (MR_Integer) 4)));
#line 921 "erl_code_gen.m"
        erl_backend__erl_code_gen__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__ConsDefn_51, (MR_Integer) 5)));
#line 921 "erl_code_gen.m"
        erl_backend__erl_code_gen__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__ConsDefn_51, (MR_Integer) 6)));
#line 921 "erl_code_gen.m"
        erl_backend__erl_code_gen__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__ConsDefn_51, (MR_Integer) 7)));
#line 921 "erl_code_gen.m"
        {
#line 921 "erl_code_gen.m"
          erl_backend__erl_code_gen__V_59_59 = mercury__list__length_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0, erl_backend__erl_code_gen__V_60_60);
        }
#line 920 "erl_code_gen.m"
        erl_backend__erl_code_gen__Size_22 = (erl_backend__erl_code_gen__V_56_56 + erl_backend__erl_code_gen__V_59_59);
#line 915 "erl_code_gen.m"
      }
#line 922 "erl_code_gen.m"
    else
#line 923 "erl_code_gen.m"
      erl_backend__erl_code_gen__Size_22 = (MR_Integer) 0;
#line 879 "erl_code_gen.m"
    {
#line 879 "erl_code_gen.m"
      erl_backend__erl_code_util__erl_gen_info_new_anonymous_vars_4_p_0(erl_backend__erl_code_gen__Size_22, &erl_backend__erl_code_gen__DummyVars_23, erl_backend__erl_code_gen__STATE_VARIABLE_Info_0_29, &erl_backend__erl_code_gen__STATE_VARIABLE_Info_36_36);
    }
#line 880 "erl_code_gen.m"
    {
#line 880 "erl_code_gen.m"
      erl_backend__erl_code_gen__succeeded = erl_backend__erl_unify_gen__cons_id_to_term_6_p_0(erl_backend__erl_code_gen__MainConsId_18, erl_backend__erl_code_gen__DummyVars_23, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &erl_backend__erl_code_gen__Pattern0_24, erl_backend__erl_code_gen__STATE_VARIABLE_Info_36_36, &erl_backend__erl_code_gen__STATE_VARIABLE_Info_38_38);
    }
#line 882 "erl_code_gen.m"
    if (erl_backend__erl_code_gen__succeeded)
#line 881 "erl_code_gen.m"
      {
#line 881 "erl_code_gen.m"
        erl_backend__erl_code_gen__STATE_VARIABLE_Info_42_42 = erl_backend__erl_code_gen__STATE_VARIABLE_Info_38_38;
#line 881 "erl_code_gen.m"
        erl_backend__erl_code_gen__Pattern_25 = erl_backend__erl_code_gen__Pattern0_24;
#line 881 "erl_code_gen.m"
      }
#line 882 "erl_code_gen.m"
    else
#line 883 "erl_code_gen.m"
      {
#line 883 "erl_code_gen.m"
        {
#line 883 "erl_code_gen.m"
          mercury__require__unexpected_3_p_0((MR_String) "erl_backend.erl_code_gen", (MR_String) "predicate \140erl_backend.erl_code_gen.erl_gen_case\'/9", (MR_String) "cannot pattern match on object");
#line 883 "erl_code_gen.m"
          return;
        }
#line 883 "erl_code_gen.m"
      }
#line 885 "erl_code_gen.m"
    {
#line 885 "erl_code_gen.m"
      erl_backend__erl_code_util__erl_fix_success_expr_6_p_0(erl_backend__erl_code_gen__InstMap_12, erl_backend__erl_code_gen__Goal_20, erl_backend__erl_code_gen__MaybeSuccessExpr_14, &erl_backend__erl_code_gen__MaybeSuccessExprForCase_26, erl_backend__erl_code_gen__STATE_VARIABLE_Info_42_42, &erl_backend__erl_code_gen__STATE_VARIABLE_Info_43_43);
    }
#line 887 "erl_code_gen.m"
    {
#line 887 "erl_code_gen.m"
      erl_backend__erl_code_gen__erl_gen_goal_7_p_0(erl_backend__erl_code_gen__CodeModel_11, erl_backend__erl_code_gen__InstMap_12, erl_backend__erl_code_gen__Goal_20, erl_backend__erl_code_gen__MaybeSuccessExprForCase_26, &erl_backend__erl_code_gen__Statement0_27, erl_backend__erl_code_gen__STATE_VARIABLE_Info_43_43, erl_backend__erl_code_gen__STATE_VARIABLE_Info_30);
    }
#line 894 "erl_code_gen.m"
    {
#line 894 "erl_code_gen.m"
      erl_backend__erl_code_util__erl_bind_unbound_vars_6_p_0(*erl_backend__erl_code_gen__STATE_VARIABLE_Info_30, erl_backend__erl_code_gen__MustBindNonLocals_13, erl_backend__erl_code_gen__Goal_20, erl_backend__erl_code_gen__InstMap_12, erl_backend__erl_code_gen__Statement0_27, &erl_backend__erl_code_gen__Statement_28);
    }
#line 896 "erl_code_gen.m"
    {
#line 896 "erl_code_gen.m"
      MR_Word base;
#line 896 "erl_code_gen.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 896 "erl_code_gen.m"
      *erl_backend__erl_code_gen__ELDSCase_16 = base;
#line 896 "erl_code_gen.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (erl_backend__erl_code_gen__Pattern_25));
#line 896 "erl_code_gen.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (erl_backend__erl_code_gen__Statement_28));
#line 896 "erl_code_gen.m"
    }
#line 873 "erl_code_gen.m"
  }
#line 867 "erl_code_gen.m"
}

#line 693 "erl_code_gen.m"
static MR_bool MR_CALL 
erl_backend__erl_code_gen__erl_gen_goal_expr_9_p_0_1(
#line 693 "erl_code_gen.m"
  MR_Box erl_backend__erl_code_gen__closure_arg)
#line 693 "erl_code_gen.m"
{
#line 693 "erl_code_gen.m"
  {
#line 693 "erl_code_gen.m"
    MR_bool erl_backend__erl_code_gen__succeeded;
#line 693 "erl_code_gen.m"
    MR_Box erl_backend__erl_code_gen__closure = erl_backend__erl_code_gen__closure_arg;

#line 693 "erl_code_gen.m"
    {
#line 693 "erl_code_gen.m"
      erl_backend__erl_code_gen__succeeded = erl_backend__erl_code_gen__IntroducedFrom__pred__erl_gen_goal_expr__693__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__closure, (MR_Integer) 4))));
    }
#line 693 "erl_code_gen.m"
    return erl_backend__erl_code_gen__succeeded;
#line 693 "erl_code_gen.m"
  }
#line 693 "erl_code_gen.m"
}

#line 625 "erl_code_gen.m"
static void MR_CALL 
erl_backend__erl_code_gen__erl_gen_goal_expr_9_p_0(
#line 625 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__GoalExpr_10,
#line 625 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__CodeModel_11,
#line 625 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__Detism_12,
#line 625 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__InstMap_13,
#line 625 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__Context_14,
#line 625 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__MaybeSuccessExpr_15,
#line 625 "erl_code_gen.m"
  MR_Word * erl_backend__erl_code_gen__Statement_16,
#line 625 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__STATE_VARIABLE_Info_0_88,
#line 625 "erl_code_gen.m"
  MR_Word * erl_backend__erl_code_gen__STATE_VARIABLE_Info_89)
#line 625 "erl_code_gen.m"
{
#line 632 "erl_code_gen.m"
  while (MR_TRUE)
#line 632 "erl_code_gen.m"
    {
#line 632 "erl_code_gen.m"
      /* tailcall optimized into a loop */
#line 632 "erl_code_gen.m"
      {
#line 632 "erl_code_gen.m"
        MR_bool erl_backend__erl_code_gen__succeeded;

#line 632 "erl_code_gen.m"
#line 632 "erl_code_gen.m"
        switch (MR_tag((MR_Word) erl_backend__erl_code_gen__GoalExpr_10)) {
#line 632 "erl_code_gen.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 632 "erl_code_gen.m"
          case (MR_Integer) 0:
#line 677 "erl_code_gen.m"
            {
#line 677 "erl_code_gen.m"
              MR_Word erl_backend__erl_code_gen__SubGoal_129 = (MR_Word) MR_body(((MR_Word) erl_backend__erl_code_gen__GoalExpr_10), (MR_Integer) 0);

#line 678 "erl_code_gen.m"
              {
#line 678 "erl_code_gen.m"
                erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_110_101_103_97_116_105_111_110_95_95_91_52_93_95_48_8_p_0(erl_backend__erl_code_gen__SubGoal_129, erl_backend__erl_code_gen__CodeModel_11, erl_backend__erl_code_gen__InstMap_13, erl_backend__erl_code_gen__MaybeSuccessExpr_15, erl_backend__erl_code_gen__Statement_16, erl_backend__erl_code_gen__STATE_VARIABLE_Info_0_88, erl_backend__erl_code_gen__STATE_VARIABLE_Info_89);
              }
#line 677 "erl_code_gen.m"
            }
#line 632 "erl_code_gen.m"
            break;
#line 632 "erl_code_gen.m"
          case (MR_Integer) 1:
#line 726 "erl_code_gen.m"
            {
#line 726 "erl_code_gen.m"
              MR_Word erl_backend__erl_code_gen__Unification_78 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__erl_code_gen__GoalExpr_10, (MR_Integer) 3)));
#line 726 "erl_code_gen.m"
              MR_Word erl_backend__erl_code_gen___LHS_75 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__erl_code_gen__GoalExpr_10, (MR_Integer) 0)));
#line 726 "erl_code_gen.m"
              MR_Word erl_backend__erl_code_gen___RHS_76 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__erl_code_gen__GoalExpr_10, (MR_Integer) 1)));
#line 726 "erl_code_gen.m"
              MR_Word erl_backend__erl_code_gen___Mode_77 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__erl_code_gen__GoalExpr_10, (MR_Integer) 2)));
#line 726 "erl_code_gen.m"
              MR_Word erl_backend__erl_code_gen___UnifyContext_79 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__erl_code_gen__GoalExpr_10, (MR_Integer) 4)));

#line 727 "erl_code_gen.m"
              {
#line 727 "erl_code_gen.m"
                erl_backend__erl_unify_gen__erl_gen_unification_7_p_0(erl_backend__erl_code_gen__Unification_78, erl_backend__erl_code_gen__CodeModel_11, erl_backend__erl_code_gen__Context_14, erl_backend__erl_code_gen__MaybeSuccessExpr_15, erl_backend__erl_code_gen__Statement_16, erl_backend__erl_code_gen__STATE_VARIABLE_Info_0_88, erl_backend__erl_code_gen__STATE_VARIABLE_Info_89);
              }
#line 726 "erl_code_gen.m"
            }
#line 632 "erl_code_gen.m"
            break;
#line 632 "erl_code_gen.m"
          case (MR_Integer) 2:
#line 711 "erl_code_gen.m"
            {
#line 711 "erl_code_gen.m"
              MR_Word erl_backend__erl_code_gen__PredId_68 = ((MR_Word) (MR_hl_field(MR_mktag(2), erl_backend__erl_code_gen__GoalExpr_10, (MR_Integer) 0)));
#line 711 "erl_code_gen.m"
              MR_Integer erl_backend__erl_code_gen__ProcId_69 = ((MR_Integer) (MR_hl_field(MR_mktag(2), erl_backend__erl_code_gen__GoalExpr_10, (MR_Integer) 1)));
#line 711 "erl_code_gen.m"
              MR_Word erl_backend__erl_code_gen__ArgVars_70 = ((MR_Word) (MR_hl_field(MR_mktag(2), erl_backend__erl_code_gen__GoalExpr_10, (MR_Integer) 2)));
#line 711 "erl_code_gen.m"
              MR_Word erl_backend__erl_code_gen__BuiltinState_71 = ((MR_Word) (MR_hl_field(MR_mktag(2), erl_backend__erl_code_gen__GoalExpr_10, (MR_Integer) 3)));
#line 711 "erl_code_gen.m"
              MR_Word erl_backend__erl_code_gen__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(2), erl_backend__erl_code_gen__GoalExpr_10, (MR_Integer) 4)));
#line 711 "erl_code_gen.m"
              MR_Word erl_backend__erl_code_gen__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(2), erl_backend__erl_code_gen__GoalExpr_10, (MR_Integer) 5)));

#line 717 "erl_code_gen.m"
#line 717 "erl_code_gen.m"
              switch (erl_backend__erl_code_gen__BuiltinState_71) {
#line 717 "erl_code_gen.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 717 "erl_code_gen.m"
                case (MR_Integer) 0:
#line 719 "erl_code_gen.m"
                  {
#line 719 "erl_code_gen.m"
                    erl_backend__erl_call_gen__erl_gen_builtin_9_p_0(erl_backend__erl_code_gen__PredId_68, erl_backend__erl_code_gen__ProcId_69, erl_backend__erl_code_gen__ArgVars_70, erl_backend__erl_code_gen__CodeModel_11, erl_backend__erl_code_gen__Context_14, erl_backend__erl_code_gen__MaybeSuccessExpr_15, erl_backend__erl_code_gen__Statement_16, erl_backend__erl_code_gen__STATE_VARIABLE_Info_0_88, erl_backend__erl_code_gen__STATE_VARIABLE_Info_89);
                  }
#line 717 "erl_code_gen.m"
                  break;
#line 717 "erl_code_gen.m"
                case (MR_Integer) 2:
#line 713 "erl_code_gen.m"
                  {
#line 713 "erl_code_gen.m"
                    MR_Word erl_backend__erl_code_gen__ActualArgTypes_74;

#line 714 "erl_code_gen.m"
                    {
#line 714 "erl_code_gen.m"
                      erl_backend__erl_code_util__erl_variable_types_3_p_0(erl_backend__erl_code_gen__STATE_VARIABLE_Info_0_88, erl_backend__erl_code_gen__ArgVars_70, &erl_backend__erl_code_gen__ActualArgTypes_74);
                    }
#line 715 "erl_code_gen.m"
                    {
#line 715 "erl_code_gen.m"
                      erl_backend__erl_call_gen__erl_gen_call_10_p_0(erl_backend__erl_code_gen__PredId_68, erl_backend__erl_code_gen__ProcId_69, erl_backend__erl_code_gen__ArgVars_70, erl_backend__erl_code_gen__ActualArgTypes_74, erl_backend__erl_code_gen__CodeModel_11, erl_backend__erl_code_gen__Context_14, erl_backend__erl_code_gen__MaybeSuccessExpr_15, erl_backend__erl_code_gen__Statement_16, erl_backend__erl_code_gen__STATE_VARIABLE_Info_0_88, erl_backend__erl_code_gen__STATE_VARIABLE_Info_89);
                    }
#line 713 "erl_code_gen.m"
                  }
#line 717 "erl_code_gen.m"
                  break;
#line 717 "erl_code_gen.m"
                case (MR_Integer) 1:
#line 722 "erl_code_gen.m"
                  {
#line 723 "erl_code_gen.m"
                    {
#line 723 "erl_code_gen.m"
                      mercury__require__unexpected_3_p_0((MR_String) "erl_backend.erl_code_gen", (MR_String) "predicate \140erl_backend.erl_code_gen.erl_gen_goal_expr\'/9", (MR_String) "out_of_line_builtin");
#line 723 "erl_code_gen.m"
                      return;
                    }
#line 722 "erl_code_gen.m"
                  }
#line 717 "erl_code_gen.m"
                  break;
#line 717 "erl_code_gen.m"
              }
#line 711 "erl_code_gen.m"
            }
#line 632 "erl_code_gen.m"
            break;
#line 632 "erl_code_gen.m"
          case (MR_Integer) 3:
#line 632 "erl_code_gen.m"
#line 632 "erl_code_gen.m"
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_code_gen__GoalExpr_10, (MR_Integer) 0)))) {
#line 632 "erl_code_gen.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 632 "erl_code_gen.m"
              case (MR_Integer) 0:
#line 691 "erl_code_gen.m"
                {
#line 691 "erl_code_gen.m"
                  MR_Word erl_backend__erl_code_gen__GenericCall_52 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_code_gen__GoalExpr_10, (MR_Integer) 1)));
#line 691 "erl_code_gen.m"
                  MR_Word erl_backend__erl_code_gen__Vars_53 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_code_gen__GoalExpr_10, (MR_Integer) 2)));
#line 691 "erl_code_gen.m"
                  MR_Word erl_backend__erl_code_gen__Modes_54 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_code_gen__GoalExpr_10, (MR_Integer) 3)));
#line 691 "erl_code_gen.m"
                  MR_Word erl_backend__erl_code_gen__CallDetism_56 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_code_gen__GoalExpr_10, (MR_Integer) 5)));
#line 691 "erl_code_gen.m"
                  MR_Word erl_backend__erl_code_gen__CallCodeModel_57;
#line 691 "erl_code_gen.m"
                  MR_Word erl_backend__erl_code_gen__V_100_100;
#line 691 "erl_code_gen.m"
                  MR_Word erl_backend__erl_code_gen__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_code_gen__GoalExpr_10, (MR_Integer) 4)));

#line 692 "erl_code_gen.m"
                  {
#line 692 "erl_code_gen.m"
                    hlds__code_model__determinism_to_code_model_2_p_0(erl_backend__erl_code_gen__CallDetism_56, &erl_backend__erl_code_gen__CallCodeModel_57);
                  }
#line 693 "erl_code_gen.m"
                  {
#line 693 "erl_code_gen.m"
                    erl_backend__erl_code_gen__V_100_100 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 693 "erl_code_gen.m"
                    MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__V_100_100, 0) = ((MR_Box) (&erl_backend__erl_code_gen_scalar_common_4[0]));
#line 693 "erl_code_gen.m"
                    MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__V_100_100, 1) = ((MR_Box) (erl_backend__erl_code_gen__erl_gen_goal_expr_9_p_0_1));
#line 693 "erl_code_gen.m"
                    MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__V_100_100, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 693 "erl_code_gen.m"
                    MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__V_100_100, 3) = ((MR_Box) (erl_backend__erl_code_gen__CodeModel_11));
#line 693 "erl_code_gen.m"
                    MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__V_100_100, 4) = ((MR_Box) (erl_backend__erl_code_gen__CallCodeModel_57));
#line 693 "erl_code_gen.m"
                  }
#line 693 "erl_code_gen.m"
                  {
#line 693 "erl_code_gen.m"
                    mercury__require__expect_4_p_0(erl_backend__erl_code_gen__V_100_100, (MR_String) "erl_backend.erl_code_gen", (MR_String) "predicate \140erl_backend.erl_code_gen.erl_gen_goal_expr\'/9", (MR_String) "code model mismatch");
                  }
#line 699 "erl_code_gen.m"
#line 699 "erl_code_gen.m"
                  switch (MR_tag((MR_Word) erl_backend__erl_code_gen__GenericCall_52)) {
#line 699 "erl_code_gen.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 699 "erl_code_gen.m"
                    case (MR_Integer) 0:
#line 697 "erl_code_gen.m"
                      {
#line 697 "erl_code_gen.m"
                        erl_backend__erl_call_gen__erl_gen_higher_order_call_9_p_0(erl_backend__erl_code_gen__GenericCall_52, erl_backend__erl_code_gen__Vars_53, erl_backend__erl_code_gen__Modes_54, erl_backend__erl_code_gen__CallDetism_56, erl_backend__erl_code_gen__Context_14, erl_backend__erl_code_gen__MaybeSuccessExpr_15, erl_backend__erl_code_gen__Statement_16, erl_backend__erl_code_gen__STATE_VARIABLE_Info_0_88, erl_backend__erl_code_gen__STATE_VARIABLE_Info_89);
                      }
#line 699 "erl_code_gen.m"
                      break;
#line 699 "erl_code_gen.m"
                    case (MR_Integer) 1:
#line 701 "erl_code_gen.m"
                      {
#line 701 "erl_code_gen.m"
                        erl_backend__erl_call_gen__erl_gen_class_method_call_9_p_0(erl_backend__erl_code_gen__GenericCall_52, erl_backend__erl_code_gen__Vars_53, erl_backend__erl_code_gen__Modes_54, erl_backend__erl_code_gen__CallDetism_56, erl_backend__erl_code_gen__Context_14, erl_backend__erl_code_gen__MaybeSuccessExpr_15, erl_backend__erl_code_gen__Statement_16, erl_backend__erl_code_gen__STATE_VARIABLE_Info_0_88, erl_backend__erl_code_gen__STATE_VARIABLE_Info_89);
                      }
#line 699 "erl_code_gen.m"
                      break;
#line 699 "erl_code_gen.m"
                    case (MR_Integer) 2:
#line 704 "erl_code_gen.m"
                      {
#line 705 "erl_code_gen.m"
                        {
#line 705 "erl_code_gen.m"
                          mercury__require__sorry_3_p_0((MR_String) "erl_backend.erl_code_gen", (MR_String) "predicate \140erl_backend.erl_code_gen.erl_gen_goal_expr\'/9", (MR_String) "event_calls in erlang backend");
#line 705 "erl_code_gen.m"
                          return;
                        }
#line 704 "erl_code_gen.m"
                      }
#line 699 "erl_code_gen.m"
                      break;
#line 699 "erl_code_gen.m"
                    case (MR_Integer) 3:
#line 708 "erl_code_gen.m"
                      {
#line 708 "erl_code_gen.m"
                        erl_backend__erl_call_gen__erl_gen_cast_6_p_0(erl_backend__erl_code_gen__Context_14, erl_backend__erl_code_gen__Vars_53, erl_backend__erl_code_gen__MaybeSuccessExpr_15, erl_backend__erl_code_gen__Statement_16, erl_backend__erl_code_gen__STATE_VARIABLE_Info_0_88, erl_backend__erl_code_gen__STATE_VARIABLE_Info_89);
                      }
#line 699 "erl_code_gen.m"
                      break;
#line 699 "erl_code_gen.m"
                  }
#line 691 "erl_code_gen.m"
                }
#line 632 "erl_code_gen.m"
                break;
#line 632 "erl_code_gen.m"
              case (MR_Integer) 1:
#line 731 "erl_code_gen.m"
                {
#line 731 "erl_code_gen.m"
                  MR_Word erl_backend__erl_code_gen__Args_83 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_code_gen__GoalExpr_10, (MR_Integer) 4)));
#line 731 "erl_code_gen.m"
                  MR_Word erl_backend__erl_code_gen__MaybeTraceRuntimeCond_85 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_code_gen__GoalExpr_10, (MR_Integer) 6)));
#line 731 "erl_code_gen.m"
                  MR_Word erl_backend__erl_code_gen__PragmaImpl_86 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_code_gen__GoalExpr_10, (MR_Integer) 7)));
#line 730 "erl_code_gen.m"
                  MR_Word erl_backend__erl_code_gen___Attributes_80 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_code_gen__GoalExpr_10, (MR_Integer) 1)));
#line 730 "erl_code_gen.m"
                  MR_Word erl_backend__erl_code_gen___PredId_81 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_code_gen__GoalExpr_10, (MR_Integer) 2)));
#line 730 "erl_code_gen.m"
                  MR_Integer erl_backend__erl_code_gen___ProcId_82 = ((MR_Integer) (MR_hl_field(MR_mktag(3), erl_backend__erl_code_gen__GoalExpr_10, (MR_Integer) 3)));
#line 730 "erl_code_gen.m"
                  MR_Word erl_backend__erl_code_gen___ExtraArgs_84 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_code_gen__GoalExpr_10, (MR_Integer) 5)));

#line 732 "erl_code_gen.m"
                  {
#line 732 "erl_code_gen.m"
                    erl_backend__erl_call_gen__erl_gen_foreign_proc_call_9_p_0(erl_backend__erl_code_gen__Args_83, erl_backend__erl_code_gen__MaybeTraceRuntimeCond_85, erl_backend__erl_code_gen__PragmaImpl_86, erl_backend__erl_code_gen__CodeModel_11, erl_backend__erl_code_gen__Context_14, erl_backend__erl_code_gen__MaybeSuccessExpr_15, erl_backend__erl_code_gen__Statement_16, erl_backend__erl_code_gen__STATE_VARIABLE_Info_0_88, erl_backend__erl_code_gen__STATE_VARIABLE_Info_89);
                  }
#line 731 "erl_code_gen.m"
                }
#line 632 "erl_code_gen.m"
                break;
#line 632 "erl_code_gen.m"
              case (MR_Integer) 2:
#line 681 "erl_code_gen.m"
                {
#line 681 "erl_code_gen.m"
                  MR_Word erl_backend__erl_code_gen__Goals_51 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_code_gen__GoalExpr_10, (MR_Integer) 2)));
#line 681 "erl_code_gen.m"
                  MR_Word erl_backend__erl_code_gen___ConjType_50 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_code_gen__GoalExpr_10, (MR_Integer) 1)));

#line 684 "erl_code_gen.m"
                  {
#line 684 "erl_code_gen.m"
                    erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_99_111_110_106_95_95_91_53_93_95_48_9_p_0(erl_backend__erl_code_gen__Goals_51, erl_backend__erl_code_gen__CodeModel_11, erl_backend__erl_code_gen__Detism_12, erl_backend__erl_code_gen__InstMap_13, erl_backend__erl_code_gen__MaybeSuccessExpr_15, erl_backend__erl_code_gen__Statement_16, erl_backend__erl_code_gen__STATE_VARIABLE_Info_0_88, erl_backend__erl_code_gen__STATE_VARIABLE_Info_89);
                  }
#line 681 "erl_code_gen.m"
                }
#line 632 "erl_code_gen.m"
                break;
#line 632 "erl_code_gen.m"
              case (MR_Integer) 3:
#line 687 "erl_code_gen.m"
                {
#line 687 "erl_code_gen.m"
                  MR_Word erl_backend__erl_code_gen__Goals_130 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_code_gen__GoalExpr_10, (MR_Integer) 1)));

#line 688 "erl_code_gen.m"
                  {
#line 688 "erl_code_gen.m"
                    erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_100_105_115_106_95_95_91_52_93_95_48_8_p_0(erl_backend__erl_code_gen__Goals_130, erl_backend__erl_code_gen__CodeModel_11, erl_backend__erl_code_gen__InstMap_13, erl_backend__erl_code_gen__MaybeSuccessExpr_15, erl_backend__erl_code_gen__Statement_16, erl_backend__erl_code_gen__STATE_VARIABLE_Info_0_88, erl_backend__erl_code_gen__STATE_VARIABLE_Info_89);
                  }
#line 687 "erl_code_gen.m"
                }
#line 632 "erl_code_gen.m"
                break;
#line 632 "erl_code_gen.m"
              case (MR_Integer) 4:
#line 632 "erl_code_gen.m"
                {
#line 632 "erl_code_gen.m"
                  MR_Word erl_backend__erl_code_gen__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_code_gen__GoalExpr_10, (MR_Integer) 1)));
#line 632 "erl_code_gen.m"
                  MR_Word erl_backend__erl_code_gen__CanFail_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_code_gen__GoalExpr_10, (MR_Integer) 2)));
#line 632 "erl_code_gen.m"
                  MR_Word erl_backend__erl_code_gen__CasesList_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_code_gen__GoalExpr_10, (MR_Integer) 3)));

#line 633 "erl_code_gen.m"
                  {
#line 633 "erl_code_gen.m"
                    erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_10_p_0(erl_backend__erl_code_gen__Var_18, erl_backend__erl_code_gen__CanFail_19, erl_backend__erl_code_gen__CasesList_20, erl_backend__erl_code_gen__CodeModel_11, erl_backend__erl_code_gen__InstMap_13, erl_backend__erl_code_gen__MaybeSuccessExpr_15, erl_backend__erl_code_gen__Statement_16, erl_backend__erl_code_gen__STATE_VARIABLE_Info_0_88, erl_backend__erl_code_gen__STATE_VARIABLE_Info_89);
                  }
#line 632 "erl_code_gen.m"
                }
#line 632 "erl_code_gen.m"
                break;
#line 632 "erl_code_gen.m"
              case (MR_Integer) 5:
#line 636 "erl_code_gen.m"
                {
#line 636 "erl_code_gen.m"
                  MR_Word erl_backend__erl_code_gen__Reason_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_code_gen__GoalExpr_10, (MR_Integer) 1)));
#line 636 "erl_code_gen.m"
                  MR_Word erl_backend__erl_code_gen__SubGoal_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_code_gen__GoalExpr_10, (MR_Integer) 2)));

#line 643 "erl_code_gen.m"
#line 643 "erl_code_gen.m"
                  switch (MR_tag((MR_Word) erl_backend__erl_code_gen__Reason_21)) {
#line 643 "erl_code_gen.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 643 "erl_code_gen.m"
                    case (MR_Integer) 0:
#line 643 "erl_code_gen.m"
                    case (MR_Integer) 2:
#line 666 "erl_code_gen.m"
                      {
#line 666 "erl_code_gen.m"
                        MR_Word erl_backend__erl_code_gen__SubGoalExpr_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__SubGoal_22, (MR_Integer) 0)));
#line 666 "erl_code_gen.m"
                        MR_Word erl_backend__erl_code_gen__SubGoalInfo_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__SubGoal_22, (MR_Integer) 1)));
#line 666 "erl_code_gen.m"
                        MR_Word erl_backend__erl_code_gen__SubGoalDetism_45;

#line 668 "erl_code_gen.m"
                        {
#line 668 "erl_code_gen.m"
                          erl_backend__erl_code_gen__SubGoalDetism_45 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(erl_backend__erl_code_gen__SubGoalInfo_44);
                        }
#line 669 "erl_code_gen.m"
                        /* direct tailcall eliminated */
#line 669 "erl_code_gen.m"
                        {
#line 669 "erl_code_gen.m"
                          MR_Word erl_backend__erl_code_gen__GoalExpr__tmp_copy_10 = erl_backend__erl_code_gen__SubGoalExpr_43;
#line 669 "erl_code_gen.m"
                          MR_Word erl_backend__erl_code_gen__Detism__tmp_copy_12 = erl_backend__erl_code_gen__SubGoalDetism_45;

#line 669 "erl_code_gen.m"
                          erl_backend__erl_code_gen__Detism_12 = erl_backend__erl_code_gen__Detism__tmp_copy_12;
#line 669 "erl_code_gen.m"
                          erl_backend__erl_code_gen__GoalExpr_10 = erl_backend__erl_code_gen__GoalExpr__tmp_copy_10;
#line 669 "erl_code_gen.m"
                        }
#line 669 "erl_code_gen.m"
                        continue;
#line 666 "erl_code_gen.m"
                      }
#line 643 "erl_code_gen.m"
                      break;
#line 643 "erl_code_gen.m"
                    case (MR_Integer) 1:
#line 641 "erl_code_gen.m"
                      {
#line 641 "erl_code_gen.m"
                        erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_99_111_109_109_105_116_95_95_91_53_93_95_48_9_p_0(erl_backend__erl_code_gen__SubGoal_22, erl_backend__erl_code_gen__CodeModel_11, erl_backend__erl_code_gen__Detism_12, erl_backend__erl_code_gen__InstMap_13, erl_backend__erl_code_gen__MaybeSuccessExpr_15, erl_backend__erl_code_gen__Statement_16, erl_backend__erl_code_gen__STATE_VARIABLE_Info_0_88, erl_backend__erl_code_gen__STATE_VARIABLE_Info_89);
                      }
#line 643 "erl_code_gen.m"
                      break;
#line 643 "erl_code_gen.m"
                    case (MR_Integer) 3:
#line 643 "erl_code_gen.m"
#line 643 "erl_code_gen.m"
                      switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_code_gen__Reason_21, (MR_Integer) 0)))) {
#line 643 "erl_code_gen.m"
                        default: /*NOTREACHED*/ MR_assert(0);
#line 643 "erl_code_gen.m"
                        case (MR_Integer) 0:
#line 647 "erl_code_gen.m"
                          {
#line 648 "erl_code_gen.m"
                            {
#line 648 "erl_code_gen.m"
                              mercury__require__unexpected_3_p_0((MR_String) "erl_backend.erl_code_gen", (MR_String) "predicate \140erl_backend.erl_code_gen.erl_gen_goal_expr\'/9", (MR_String) "require_detism");
#line 648 "erl_code_gen.m"
                              return;
                            }
#line 647 "erl_code_gen.m"
                          }
#line 643 "erl_code_gen.m"
                          break;
#line 643 "erl_code_gen.m"
                        case (MR_Integer) 1:
#line 650 "erl_code_gen.m"
                          {
#line 651 "erl_code_gen.m"
                            {
#line 651 "erl_code_gen.m"
                              mercury__require__unexpected_3_p_0((MR_String) "erl_backend.erl_code_gen", (MR_String) "predicate \140erl_backend.erl_code_gen.erl_gen_goal_expr\'/9", (MR_String) "require_complete_switch");
#line 651 "erl_code_gen.m"
                              return;
                            }
#line 650 "erl_code_gen.m"
                          }
#line 643 "erl_code_gen.m"
                          break;
#line 643 "erl_code_gen.m"
                        case (MR_Integer) 2:
#line 653 "erl_code_gen.m"
                          {
#line 654 "erl_code_gen.m"
                            {
#line 654 "erl_code_gen.m"
                              mercury__require__unexpected_3_p_0((MR_String) "erl_backend.erl_code_gen", (MR_String) "predicate \140erl_backend.erl_code_gen.erl_gen_goal_expr\'/9", (MR_String) "require_complete_switch");
#line 654 "erl_code_gen.m"
                              return;
                            }
#line 653 "erl_code_gen.m"
                          }
#line 643 "erl_code_gen.m"
                          break;
#line 643 "erl_code_gen.m"
                        case (MR_Integer) 3:
#line 641 "erl_code_gen.m"
                          {
#line 641 "erl_code_gen.m"
                            erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_99_111_109_109_105_116_95_95_91_53_93_95_48_9_p_0(erl_backend__erl_code_gen__SubGoal_22, erl_backend__erl_code_gen__CodeModel_11, erl_backend__erl_code_gen__Detism_12, erl_backend__erl_code_gen__InstMap_13, erl_backend__erl_code_gen__MaybeSuccessExpr_15, erl_backend__erl_code_gen__Statement_16, erl_backend__erl_code_gen__STATE_VARIABLE_Info_0_88, erl_backend__erl_code_gen__STATE_VARIABLE_Info_89);
                          }
#line 643 "erl_code_gen.m"
                          break;
#line 643 "erl_code_gen.m"
                        case (MR_Integer) 4:
#line 643 "erl_code_gen.m"
                        case (MR_Integer) 5:
#line 643 "erl_code_gen.m"
                        case (MR_Integer) 6:
#line 666 "erl_code_gen.m"
                          {
#line 666 "erl_code_gen.m"
                            MR_Word erl_backend__erl_code_gen__SubGoalExpr_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__SubGoal_22, (MR_Integer) 0)));
#line 666 "erl_code_gen.m"
                            MR_Word erl_backend__erl_code_gen__SubGoalInfo_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__SubGoal_22, (MR_Integer) 1)));
#line 666 "erl_code_gen.m"
                            MR_Word erl_backend__erl_code_gen__SubGoalDetism_45;

#line 668 "erl_code_gen.m"
                            {
#line 668 "erl_code_gen.m"
                              erl_backend__erl_code_gen__SubGoalDetism_45 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(erl_backend__erl_code_gen__SubGoalInfo_44);
                            }
#line 669 "erl_code_gen.m"
                            /* direct tailcall eliminated */
#line 669 "erl_code_gen.m"
                            {
#line 669 "erl_code_gen.m"
                              MR_Word erl_backend__erl_code_gen__GoalExpr__tmp_copy_10 = erl_backend__erl_code_gen__SubGoalExpr_43;
#line 669 "erl_code_gen.m"
                              MR_Word erl_backend__erl_code_gen__Detism__tmp_copy_12 = erl_backend__erl_code_gen__SubGoalDetism_45;

#line 669 "erl_code_gen.m"
                              erl_backend__erl_code_gen__Detism_12 = erl_backend__erl_code_gen__Detism__tmp_copy_12;
#line 669 "erl_code_gen.m"
                              erl_backend__erl_code_gen__GoalExpr_10 = erl_backend__erl_code_gen__GoalExpr__tmp_copy_10;
#line 669 "erl_code_gen.m"
                            }
#line 669 "erl_code_gen.m"
                            continue;
#line 666 "erl_code_gen.m"
                          }
#line 643 "erl_code_gen.m"
                          break;
#line 643 "erl_code_gen.m"
                        case (MR_Integer) 7:
#line 644 "erl_code_gen.m"
                          {
#line 645 "erl_code_gen.m"
                            {
#line 645 "erl_code_gen.m"
                              mercury__require__unexpected_3_p_0((MR_String) "erl_backend.erl_code_gen", (MR_String) "predicate \140erl_backend.erl_code_gen.erl_gen_goal_expr\'/9", (MR_String) "loop_control");
#line 645 "erl_code_gen.m"
                              return;
                            }
#line 644 "erl_code_gen.m"
                          }
#line 643 "erl_code_gen.m"
                          break;
#line 643 "erl_code_gen.m"
                      }
#line 643 "erl_code_gen.m"
                      break;
#line 643 "erl_code_gen.m"
                  }
#line 636 "erl_code_gen.m"
                }
#line 632 "erl_code_gen.m"
                break;
#line 632 "erl_code_gen.m"
              case (MR_Integer) 6:
#line 673 "erl_code_gen.m"
                {
#line 673 "erl_code_gen.m"
                  MR_Word erl_backend__erl_code_gen__Cond_47 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_code_gen__GoalExpr_10, (MR_Integer) 2)));
#line 673 "erl_code_gen.m"
                  MR_Word erl_backend__erl_code_gen__Then_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_code_gen__GoalExpr_10, (MR_Integer) 3)));
#line 673 "erl_code_gen.m"
                  MR_Word erl_backend__erl_code_gen__Else_49 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_code_gen__GoalExpr_10, (MR_Integer) 4)));
#line 673 "erl_code_gen.m"
                  MR_Word erl_backend__erl_code_gen___Vars_46 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_code_gen__GoalExpr_10, (MR_Integer) 1)));

#line 674 "erl_code_gen.m"
                  {
#line 674 "erl_code_gen.m"
                    erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_105_116_101_95_95_91_54_93_95_48_10_p_0(erl_backend__erl_code_gen__CodeModel_11, erl_backend__erl_code_gen__InstMap_13, erl_backend__erl_code_gen__Cond_47, erl_backend__erl_code_gen__Then_48, erl_backend__erl_code_gen__Else_49, erl_backend__erl_code_gen__MaybeSuccessExpr_15, erl_backend__erl_code_gen__Statement_16, erl_backend__erl_code_gen__STATE_VARIABLE_Info_0_88, erl_backend__erl_code_gen__STATE_VARIABLE_Info_89);
                  }
#line 673 "erl_code_gen.m"
                }
#line 632 "erl_code_gen.m"
                break;
#line 632 "erl_code_gen.m"
              case (MR_Integer) 7:
#line 735 "erl_code_gen.m"
                {
#line 737 "erl_code_gen.m"
                  {
#line 737 "erl_code_gen.m"
                    mercury__require__unexpected_3_p_0((MR_String) "erl_backend.erl_code_gen", (MR_String) "predicate \140erl_backend.erl_code_gen.erl_gen_goal_expr\'/9", (MR_String) "shorthand");
#line 737 "erl_code_gen.m"
                    return;
                  }
#line 735 "erl_code_gen.m"
                }
#line 632 "erl_code_gen.m"
                break;
#line 632 "erl_code_gen.m"
            }
#line 632 "erl_code_gen.m"
            break;
#line 632 "erl_code_gen.m"
        }
#line 632 "erl_code_gen.m"
      }
#line 632 "erl_code_gen.m"
      break;
#line 632 "erl_code_gen.m"
    }
#line 625 "erl_code_gen.m"
}

#line 447 "erl_code_gen.m"
static void MR_CALL 
erl_backend__erl_code_gen__erl_gen_goal_7_p_0(
#line 447 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__CodeModel_8,
#line 447 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__InstMap_9,
#line 447 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__Goal_10,
#line 447 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__MaybeSuccessExpr0_11,
#line 447 "erl_code_gen.m"
  MR_Word * erl_backend__erl_code_gen__Code_12,
#line 447 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__STATE_VARIABLE_Info_0_20,
#line 447 "erl_code_gen.m"
  MR_Word * erl_backend__erl_code_gen__STATE_VARIABLE_Info_21)
#line 447 "erl_code_gen.m"
{
#line 459 "erl_code_gen.m"
  {
#line 459 "erl_code_gen.m"
    MR_bool erl_backend__erl_code_gen__succeeded;
#line 459 "erl_code_gen.m"
    MR_Word erl_backend__erl_code_gen__GoalExpr_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__Goal_10, (MR_Integer) 0)));
#line 459 "erl_code_gen.m"
    MR_Word erl_backend__erl_code_gen__GoalInfo_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__Goal_10, (MR_Integer) 1)));
#line 459 "erl_code_gen.m"
    MR_Word erl_backend__erl_code_gen__Context_16;
#line 459 "erl_code_gen.m"
    MR_Word erl_backend__erl_code_gen__GoalCodeModel_17;

#line 461 "erl_code_gen.m"
    {
#line 461 "erl_code_gen.m"
      erl_backend__erl_code_gen__Context_16 = hlds__hlds_goal__goal_info_get_context_1_f_0(erl_backend__erl_code_gen__GoalInfo_15);
    }
#line 462 "erl_code_gen.m"
    {
#line 462 "erl_code_gen.m"
      erl_backend__erl_code_gen__GoalCodeModel_17 = hlds__code_model__goal_info_get_code_model_1_f_0(erl_backend__erl_code_gen__GoalInfo_15);
    }
#line 467 "erl_code_gen.m"
#line 467 "erl_code_gen.m"
    switch (erl_backend__erl_code_gen__CodeModel_8) {
#line 467 "erl_code_gen.m"
      default:
#line 467 "erl_code_gen.m"
        erl_backend__erl_code_gen__succeeded = MR_FALSE;
#line 467 "erl_code_gen.m"
        break;
#line 467 "erl_code_gen.m"
      case (MR_Integer) 0:
#line 467 "erl_code_gen.m"
#line 467 "erl_code_gen.m"
        switch (erl_backend__erl_code_gen__GoalCodeModel_17) {
#line 467 "erl_code_gen.m"
          default:
#line 467 "erl_code_gen.m"
            erl_backend__erl_code_gen__succeeded = MR_FALSE;
#line 467 "erl_code_gen.m"
            break;
#line 467 "erl_code_gen.m"
          case (MR_Integer) 2:
#line 468 "erl_code_gen.m"
            erl_backend__erl_code_gen__succeeded = MR_TRUE;
#line 467 "erl_code_gen.m"
            break;
#line 467 "erl_code_gen.m"
          case (MR_Integer) 1:
#line 465 "erl_code_gen.m"
            erl_backend__erl_code_gen__succeeded = MR_TRUE;
#line 467 "erl_code_gen.m"
            break;
#line 467 "erl_code_gen.m"
        }
#line 467 "erl_code_gen.m"
        break;
#line 467 "erl_code_gen.m"
      case (MR_Integer) 1:
#line 472 "erl_code_gen.m"
        erl_backend__erl_code_gen__succeeded = (erl_backend__erl_code_gen__GoalCodeModel_17 == (MR_Integer) 2);
#line 467 "erl_code_gen.m"
        break;
#line 467 "erl_code_gen.m"
    }
#line 476 "erl_code_gen.m"
    if (erl_backend__erl_code_gen__succeeded)
#line 475 "erl_code_gen.m"
      {
#line 475 "erl_code_gen.m"
        {
#line 475 "erl_code_gen.m"
          mercury__require__unexpected_3_p_0((MR_String) "erl_backend.erl_code_gen", (MR_String) "predicate \140erl_backend.erl_code_gen.erl_gen_goal\'/7", (MR_String) "code model mismatch");
#line 475 "erl_code_gen.m"
          return;
        }
#line 475 "erl_code_gen.m"
      }
#line 476 "erl_code_gen.m"
    else
#line 477 "erl_code_gen.m"
      {
#line 477 "erl_code_gen.m"
        MR_Word erl_backend__erl_code_gen__Determinism_18;
#line 477 "erl_code_gen.m"
        MR_Word erl_backend__erl_code_gen__MaybeSuccessExpr_19;

#line 477 "erl_code_gen.m"
        {
#line 477 "erl_code_gen.m"
          erl_backend__erl_code_gen__Determinism_18 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(erl_backend__erl_code_gen__GoalInfo_15);
        }
#line 479 "erl_code_gen.m"
        erl_backend__erl_code_gen__succeeded = (erl_backend__erl_code_gen__Determinism_18 == (MR_Integer) 6);
#line 486 "erl_code_gen.m"
        if (erl_backend__erl_code_gen__succeeded)
#line 485 "erl_code_gen.m"
          erl_backend__erl_code_gen__MaybeSuccessExpr_19 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 486 "erl_code_gen.m"
        else
#line 493 "erl_code_gen.m"
          {
#line 487 "erl_code_gen.m"
            erl_backend__erl_code_gen__succeeded = (erl_backend__erl_code_gen__Determinism_18 == (MR_Integer) 7);
#line 493 "erl_code_gen.m"
            if (erl_backend__erl_code_gen__succeeded)
#line 492 "erl_code_gen.m"
              {
#line 492 "erl_code_gen.m"
                MR_Word erl_backend__erl_code_gen__V_25_25;
#line 492 "erl_code_gen.m"
                MR_Word erl_backend__erl_code_gen__V_26_26;

#line 492 "erl_code_gen.m"
                {
#line 492 "erl_code_gen.m"
                  erl_backend__erl_code_gen__V_26_26 = erl_backend__elds__elds_fail_0_f_0();
                }
#line 492 "erl_code_gen.m"
                {
#line 492 "erl_code_gen.m"
                  erl_backend__erl_code_gen__V_25_25 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 492 "erl_code_gen.m"
                  MR_hl_field(MR_mktag(2), erl_backend__erl_code_gen__V_25_25, 0) = ((MR_Box) (erl_backend__erl_code_gen__V_26_26));
#line 492 "erl_code_gen.m"
                }
#line 492 "erl_code_gen.m"
                {
#line 492 "erl_code_gen.m"
                  erl_backend__erl_code_gen__MaybeSuccessExpr_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 492 "erl_code_gen.m"
                  MR_hl_field(MR_mktag(1), erl_backend__erl_code_gen__MaybeSuccessExpr_19, 0) = ((MR_Box) (erl_backend__erl_code_gen__V_25_25));
#line 492 "erl_code_gen.m"
                }
#line 492 "erl_code_gen.m"
              }
#line 493 "erl_code_gen.m"
            else
#line 494 "erl_code_gen.m"
              erl_backend__erl_code_gen__MaybeSuccessExpr_19 = erl_backend__erl_code_gen__MaybeSuccessExpr0_11;
#line 493 "erl_code_gen.m"
          }
#line 496 "erl_code_gen.m"
        {
#line 496 "erl_code_gen.m"
          erl_backend__erl_code_gen__erl_gen_goal_expr_9_p_0(erl_backend__erl_code_gen__GoalExpr_14, erl_backend__erl_code_gen__GoalCodeModel_17, erl_backend__erl_code_gen__Determinism_18, erl_backend__erl_code_gen__InstMap_9, erl_backend__erl_code_gen__Context_16, erl_backend__erl_code_gen__MaybeSuccessExpr_19, erl_backend__erl_code_gen__Code_12, erl_backend__erl_code_gen__STATE_VARIABLE_Info_0_20, erl_backend__erl_code_gen__STATE_VARIABLE_Info_21);
        }
#line 477 "erl_code_gen.m"
      }
#line 459 "erl_code_gen.m"
  }
#line 447 "erl_code_gen.m"
}

#line 331 "erl_code_gen.m"
static void MR_CALL 
erl_backend__erl_code_gen__erl_gen_proc_7_p_0(
#line 331 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__ModuleInfo_8,
#line 331 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__PredId_9,
#line 331 "erl_code_gen.m"
  MR_Integer erl_backend__erl_code_gen__ProcId_10,
#line 331 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__PredInfo_11,
#line 331 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__ProcInfo_12,
#line 331 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__STATE_VARIABLE_Defns_0_18,
#line 331 "erl_code_gen.m"
  MR_Word * erl_backend__erl_code_gen__STATE_VARIABLE_Defns_19)
#line 331 "erl_code_gen.m"
{
#line 334 "erl_code_gen.m"
  {
#line 334 "erl_code_gen.m"
    MR_bool erl_backend__erl_code_gen__succeeded;
#line 334 "erl_code_gen.m"
    MR_Word erl_backend__erl_code_gen__TypeCtorInfo_44_57;
#line 334 "erl_code_gen.m"
    MR_Word erl_backend__erl_code_gen__ProcVarSet_14;
#line 334 "erl_code_gen.m"
    MR_Word erl_backend__erl_code_gen__ProcBody_15;
#line 334 "erl_code_gen.m"
    MR_Word erl_backend__erl_code_gen__EnvVarNames_16;
#line 334 "erl_code_gen.m"
    MR_Word erl_backend__erl_code_gen__ProcDefn_17;
#line 334 "erl_code_gen.m"
    MR_Word erl_backend__erl_code_gen__V_20_20;
#line 334 "erl_code_gen.m"
    MR_Word erl_backend__erl_code_gen__PredStatus_30;
#line 334 "erl_code_gen.m"
    MR_Word erl_backend__erl_code_gen__CodeModel_31;
#line 334 "erl_code_gen.m"
    MR_Word erl_backend__erl_code_gen__HeadVars_32;
#line 334 "erl_code_gen.m"
    MR_Word erl_backend__erl_code_gen__InstMap0_33;
#line 334 "erl_code_gen.m"
    MR_Word erl_backend__erl_code_gen__Goal0_34;
#line 334 "erl_code_gen.m"
    MR_Word erl_backend__erl_code_gen__GoalExpr_35;
#line 334 "erl_code_gen.m"
    MR_Word erl_backend__erl_code_gen__GoalInfo0_36;
#line 334 "erl_code_gen.m"
    MR_Word erl_backend__erl_code_gen__NonLocals0_37;
#line 334 "erl_code_gen.m"
    MR_Word erl_backend__erl_code_gen__HeadVarsSet_38;
#line 334 "erl_code_gen.m"
    MR_Word erl_backend__erl_code_gen__NonLocals_39;
#line 334 "erl_code_gen.m"
    MR_Word erl_backend__erl_code_gen__GoalInfo_40;
#line 334 "erl_code_gen.m"
    MR_Word erl_backend__erl_code_gen__Goal_41;
#line 334 "erl_code_gen.m"
    MR_Word erl_backend__erl_code_gen__STATE_VARIABLE_Info_38_51;
#line 334 "erl_code_gen.m"
    MR_Word erl_backend__erl_code_gen__STATE_VARIABLE_Info_43_56;
#line 368 "erl_code_gen.m"
    MR_Word erl_backend__erl_code_gen___Context_42;
#line 373 "erl_code_gen.m"
    MR_Word erl_backend__erl_code_gen__V_52_52;
#line 373 "erl_code_gen.m"
    MR_Word erl_backend__erl_code_gen__V_44_44;

#line 349 "erl_code_gen.m"
    {
#line 349 "erl_code_gen.m"
      hlds__hlds_pred__pred_info_get_status_2_p_0(erl_backend__erl_code_gen__PredInfo_11, &erl_backend__erl_code_gen__PredStatus_30);
    }
#line 350 "erl_code_gen.m"
    {
#line 350 "erl_code_gen.m"
      erl_backend__erl_code_gen__CodeModel_31 = hlds__code_model__proc_info_interface_code_model_1_f_0(erl_backend__erl_code_gen__ProcInfo_12);
    }
#line 351 "erl_code_gen.m"
    {
#line 351 "erl_code_gen.m"
      hlds__hlds_pred__proc_info_get_headvars_2_p_0(erl_backend__erl_code_gen__ProcInfo_12, &erl_backend__erl_code_gen__HeadVars_32);
    }
#line 352 "erl_code_gen.m"
    {
#line 352 "erl_code_gen.m"
      hlds__hlds_pred__proc_info_get_initial_instmap_3_p_0(erl_backend__erl_code_gen__ProcInfo_12, erl_backend__erl_code_gen__ModuleInfo_8, &erl_backend__erl_code_gen__InstMap0_33);
    }
#line 353 "erl_code_gen.m"
    {
#line 353 "erl_code_gen.m"
      hlds__hlds_pred__proc_info_get_goal_2_p_0(erl_backend__erl_code_gen__ProcInfo_12, &erl_backend__erl_code_gen__Goal0_34);
    }
#line 361 "erl_code_gen.m"
    erl_backend__erl_code_gen__GoalExpr_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__Goal0_34, (MR_Integer) 0)));
#line 361 "erl_code_gen.m"
    erl_backend__erl_code_gen__GoalInfo0_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__Goal0_34, (MR_Integer) 1)));
#line 362 "erl_code_gen.m"
    {
#line 362 "erl_code_gen.m"
      erl_backend__erl_code_gen__NonLocals0_37 = hlds__hlds_goal__goal_info_get_code_gen_nonlocals_1_f_0(erl_backend__erl_code_gen__GoalInfo0_36);
    }
#line 6710 "erl_backend.erl_code_gen.c"
    erl_backend__erl_code_gen__TypeCtorInfo_44_57 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 363 "erl_code_gen.m"
    {
#line 363 "erl_code_gen.m"
      parse_tree__set_of_var__list_to_set_2_p_0(erl_backend__erl_code_gen__TypeCtorInfo_44_57, erl_backend__erl_code_gen__HeadVars_32, &erl_backend__erl_code_gen__HeadVarsSet_38);
    }
#line 364 "erl_code_gen.m"
    {
#line 364 "erl_code_gen.m"
      parse_tree__set_of_var__intersect_3_p_0(erl_backend__erl_code_gen__TypeCtorInfo_44_57, erl_backend__erl_code_gen__HeadVarsSet_38, erl_backend__erl_code_gen__NonLocals0_37, &erl_backend__erl_code_gen__NonLocals_39);
    }
#line 365 "erl_code_gen.m"
    {
#line 365 "erl_code_gen.m"
      hlds__hlds_goal__goal_info_set_code_gen_nonlocals_3_p_0(erl_backend__erl_code_gen__NonLocals_39, erl_backend__erl_code_gen__GoalInfo0_36, &erl_backend__erl_code_gen__GoalInfo_40);
    }
#line 366 "erl_code_gen.m"
    {
#line 366 "erl_code_gen.m"
      erl_backend__erl_code_gen__Goal_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 366 "erl_code_gen.m"
      MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__Goal_41, 0) = ((MR_Box) (erl_backend__erl_code_gen__GoalExpr_35));
#line 366 "erl_code_gen.m"
      MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__Goal_41, 1) = ((MR_Box) (erl_backend__erl_code_gen__GoalInfo_40));
#line 366 "erl_code_gen.m"
    }
#line 368 "erl_code_gen.m"
    {
#line 368 "erl_code_gen.m"
      erl_backend__erl_code_gen___Context_42 = hlds__hlds_goal__goal_info_get_context_1_f_0(erl_backend__erl_code_gen__GoalInfo_40);
    }
#line 371 "erl_code_gen.m"
    {
#line 371 "erl_code_gen.m"
      erl_backend__erl_code_gen__STATE_VARIABLE_Info_38_51 = erl_backend__erl_code_util__erl_gen_info_init_3_f_0(erl_backend__erl_code_gen__ModuleInfo_8, erl_backend__erl_code_gen__PredId_9, erl_backend__erl_code_gen__ProcId_10);
    }
#line 373 "erl_code_gen.m"
    erl_backend__erl_code_gen__V_52_52 = (MR_Word) erl_backend__erl_code_gen__PredStatus_30;
#line 373 "erl_code_gen.m"
    erl_backend__erl_code_gen__succeeded = ((MR_tag((MR_Word) erl_backend__erl_code_gen__V_52_52)) == (MR_mktag((MR_Integer) 1)));
#line 373 "erl_code_gen.m"
    if (erl_backend__erl_code_gen__succeeded)
#line 373 "erl_code_gen.m"
      {
#line 373 "erl_code_gen.m"
        erl_backend__erl_code_gen__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__erl_code_gen__V_52_52, (MR_Integer) 0)));
#line 375 "erl_code_gen.m"
        {
#line 375 "erl_code_gen.m"
          MR_Word erl_backend__erl_code_gen__TypeInfo_45_58;
#line 375 "erl_code_gen.m"
          MR_Word erl_backend__erl_code_gen__ArgTypes_45;
#line 375 "erl_code_gen.m"
          MR_Word erl_backend__erl_code_gen__ArgModes_46;
#line 375 "erl_code_gen.m"
          MR_Word erl_backend__erl_code_gen__InputArgs_47;
#line 375 "erl_code_gen.m"
          MR_Integer erl_backend__erl_code_gen__Arity_49;
#line 377 "erl_code_gen.m"
          MR_Word erl_backend__erl_code_gen___OutputArgs_48;

#line 375 "erl_code_gen.m"
          {
#line 375 "erl_code_gen.m"
            hlds__hlds_pred__pred_info_get_arg_types_2_p_0(erl_backend__erl_code_gen__PredInfo_11, &erl_backend__erl_code_gen__ArgTypes_45);
          }
#line 376 "erl_code_gen.m"
          {
#line 376 "erl_code_gen.m"
            hlds__hlds_pred__proc_info_get_argmodes_2_p_0(erl_backend__erl_code_gen__ProcInfo_12, &erl_backend__erl_code_gen__ArgModes_46);
          }
#line 6782 "erl_backend.erl_code_gen.c"
          erl_backend__erl_code_gen__TypeInfo_45_58 = (MR_Word) &erl_backend__erl_code_gen_scalar_common_1[0];
#line 377 "erl_code_gen.m"
          {
#line 377 "erl_code_gen.m"
            erl_backend__erl_code_util__erl_gen_arg_list_7_p_0(erl_backend__erl_code_gen__TypeInfo_45_58, erl_backend__erl_code_gen__ModuleInfo_8, (MR_Integer) 0, erl_backend__erl_code_gen__HeadVars_32, erl_backend__erl_code_gen__ArgTypes_45, erl_backend__erl_code_gen__ArgModes_46, &erl_backend__erl_code_gen__InputArgs_47, &erl_backend__erl_code_gen___OutputArgs_48);
          }
#line 384 "erl_code_gen.m"
#line 384 "erl_code_gen.m"
          switch (erl_backend__erl_code_gen__CodeModel_31) {
#line 384 "erl_code_gen.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 384 "erl_code_gen.m"
            case (MR_Integer) 0:
#line 384 "erl_code_gen.m"
            case (MR_Integer) 1:
#line 383 "erl_code_gen.m"
              {
#line 383 "erl_code_gen.m"
                erl_backend__erl_code_gen__Arity_49 = mercury__list__length_1_f_0(erl_backend__erl_code_gen__TypeInfo_45_58, erl_backend__erl_code_gen__InputArgs_47);
              }
#line 384 "erl_code_gen.m"
              break;
#line 384 "erl_code_gen.m"
            case (MR_Integer) 2:
#line 385 "erl_code_gen.m"
              {
#line 385 "erl_code_gen.m"
                MR_Integer erl_backend__erl_code_gen__V_54_54;

#line 387 "erl_code_gen.m"
                {
#line 387 "erl_code_gen.m"
                  erl_backend__erl_code_gen__V_54_54 = mercury__list__length_1_f_0(erl_backend__erl_code_gen__TypeInfo_45_58, erl_backend__erl_code_gen__InputArgs_47);
                }
#line 387 "erl_code_gen.m"
                erl_backend__erl_code_gen__Arity_49 = (erl_backend__erl_code_gen__V_54_54 + (MR_Integer) 1);
#line 385 "erl_code_gen.m"
              }
#line 384 "erl_code_gen.m"
              break;
#line 384 "erl_code_gen.m"
          }
#line 389 "erl_code_gen.m"
          {
#line 389 "erl_code_gen.m"
            erl_backend__erl_code_gen__ProcBody_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 389 "erl_code_gen.m"
            MR_hl_field(MR_mktag(1), erl_backend__erl_code_gen__ProcBody_15, 0) = ((MR_Box) (erl_backend__erl_code_gen__Arity_49));
#line 389 "erl_code_gen.m"
          }
#line 375 "erl_code_gen.m"
          erl_backend__erl_code_gen__STATE_VARIABLE_Info_43_56 = erl_backend__erl_code_gen__STATE_VARIABLE_Info_38_51;
#line 375 "erl_code_gen.m"
        }
#line 373 "erl_code_gen.m"
      }
#line 373 "erl_code_gen.m"
    else
#line 392 "erl_code_gen.m"
      {
#line 392 "erl_code_gen.m"
        MR_Word erl_backend__erl_code_gen__ProcClause_50;
#line 392 "erl_code_gen.m"
        MR_Word erl_backend__erl_code_gen__InputVars_66;
#line 392 "erl_code_gen.m"
        MR_Word erl_backend__erl_code_gen__OutputVars_67;
#line 392 "erl_code_gen.m"
        MR_Word erl_backend__erl_code_gen__OutputVarsExprs_68;
#line 392 "erl_code_gen.m"
        MR_Word erl_backend__erl_code_gen__InputVarsTerms_69;
#line 392 "erl_code_gen.m"
        MR_Word erl_backend__erl_code_gen__SuccessExpr_70;
#line 392 "erl_code_gen.m"
        MR_Word erl_backend__erl_code_gen__InstMap_71;
#line 392 "erl_code_gen.m"
        MR_Word erl_backend__erl_code_gen__Statement_73;
#line 392 "erl_code_gen.m"
        MR_Word erl_backend__erl_code_gen__STATE_VARIABLE_Info_23_75;
#line 392 "erl_code_gen.m"
        MR_Word erl_backend__erl_code_gen__V_82_82;

#line 404 "erl_code_gen.m"
        {
#line 404 "erl_code_gen.m"
          erl_backend__erl_code_util__erl_gen_info_get_input_vars_2_p_0(erl_backend__erl_code_gen__STATE_VARIABLE_Info_38_51, &erl_backend__erl_code_gen__InputVars_66);
        }
#line 405 "erl_code_gen.m"
        {
#line 405 "erl_code_gen.m"
          erl_backend__erl_code_util__erl_gen_info_get_output_vars_2_p_0(erl_backend__erl_code_gen__STATE_VARIABLE_Info_38_51, &erl_backend__erl_code_gen__OutputVars_67);
        }
#line 406 "erl_code_gen.m"
        {
#line 406 "erl_code_gen.m"
          erl_backend__erl_code_gen__OutputVarsExprs_68 = erl_backend__elds__exprs_from_vars_1_f_0(erl_backend__erl_code_gen__OutputVars_67);
        }
#line 418 "erl_code_gen.m"
#line 418 "erl_code_gen.m"
        switch (erl_backend__erl_code_gen__CodeModel_31) {
#line 418 "erl_code_gen.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 418 "erl_code_gen.m"
          case (MR_Integer) 0:
#line 408 "erl_code_gen.m"
            {
#line 409 "erl_code_gen.m"
              {
#line 409 "erl_code_gen.m"
                erl_backend__erl_code_gen__InputVarsTerms_69 = erl_backend__elds__terms_from_vars_1_f_0(erl_backend__erl_code_gen__InputVars_66);
              }
#line 416 "erl_code_gen.m"
              {
#line 416 "erl_code_gen.m"
                erl_backend__erl_code_gen__SuccessExpr_70 = erl_backend__elds__tuple_or_single_expr_1_f_0(erl_backend__erl_code_gen__OutputVarsExprs_68);
              }
#line 417 "erl_code_gen.m"
              erl_backend__erl_code_gen__InstMap_71 = erl_backend__erl_code_gen__InstMap0_33;
#line 408 "erl_code_gen.m"
              erl_backend__erl_code_gen__STATE_VARIABLE_Info_23_75 = erl_backend__erl_code_gen__STATE_VARIABLE_Info_38_51;
#line 408 "erl_code_gen.m"
            }
#line 418 "erl_code_gen.m"
            break;
#line 418 "erl_code_gen.m"
          case (MR_Integer) 2:
#line 427 "erl_code_gen.m"
            {
#line 427 "erl_code_gen.m"
              MR_Word erl_backend__erl_code_gen__SucceedVar_72;
#line 427 "erl_code_gen.m"
              MR_Word erl_backend__erl_code_gen__V_76_76;
#line 427 "erl_code_gen.m"
              MR_Word erl_backend__erl_code_gen__V_77_77;
#line 427 "erl_code_gen.m"
              MR_Word erl_backend__erl_code_gen__V_79_79;
#line 427 "erl_code_gen.m"
              MR_Word erl_backend__erl_code_gen__V_80_80;

#line 433 "erl_code_gen.m"
              {
#line 433 "erl_code_gen.m"
                erl_backend__erl_code_util__erl_gen_info_new_named_var_4_p_0((MR_String) "SucceedHeadVar", &erl_backend__erl_code_gen__SucceedVar_72, erl_backend__erl_code_gen__STATE_VARIABLE_Info_38_51, &erl_backend__erl_code_gen__STATE_VARIABLE_Info_23_75);
              }
#line 1024 "erl_code_gen.m"
              {
#line 1024 "erl_code_gen.m"
                hlds__instmap__instmap_set_var_4_p_0(erl_backend__erl_code_gen__SucceedVar_72, (MR_Word) MR_mkword(MR_mktag(3), &erl_backend__erl_code_gen_scalar_common_3[0]), erl_backend__erl_code_gen__InstMap0_33, &erl_backend__erl_code_gen__InstMap_71);
              }
#line 435 "erl_code_gen.m"
              {
#line 435 "erl_code_gen.m"
                erl_backend__erl_code_gen__V_77_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 435 "erl_code_gen.m"
                MR_hl_field(MR_mktag(1), erl_backend__erl_code_gen__V_77_77, 0) = ((MR_Box) (erl_backend__erl_code_gen__SucceedVar_72));
#line 435 "erl_code_gen.m"
                MR_hl_field(MR_mktag(1), erl_backend__erl_code_gen__V_77_77, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 435 "erl_code_gen.m"
              }
#line 435 "erl_code_gen.m"
              {
#line 435 "erl_code_gen.m"
                erl_backend__erl_code_gen__V_76_76 = mercury__list__f_43_43_2_f_0((MR_Word) &erl_backend__erl_code_gen_scalar_common_1[0], erl_backend__erl_code_gen__InputVars_66, erl_backend__erl_code_gen__V_77_77);
              }
#line 435 "erl_code_gen.m"
              {
#line 435 "erl_code_gen.m"
                erl_backend__erl_code_gen__InputVarsTerms_69 = erl_backend__elds__terms_from_vars_1_f_0(erl_backend__erl_code_gen__V_76_76);
              }
#line 436 "erl_code_gen.m"
              {
#line 436 "erl_code_gen.m"
                erl_backend__erl_code_gen__V_80_80 = erl_backend__elds__expr_from_var_1_f_0(erl_backend__erl_code_gen__SucceedVar_72);
              }
#line 436 "erl_code_gen.m"
              {
#line 436 "erl_code_gen.m"
                erl_backend__erl_code_gen__V_79_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 436 "erl_code_gen.m"
                MR_hl_field(MR_mktag(1), erl_backend__erl_code_gen__V_79_79, 0) = ((MR_Box) (erl_backend__erl_code_gen__V_80_80));
#line 436 "erl_code_gen.m"
              }
#line 436 "erl_code_gen.m"
              {
#line 436 "erl_code_gen.m"
                erl_backend__erl_code_gen__SuccessExpr_70 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 436 "erl_code_gen.m"
                MR_hl_field(MR_mktag(3), erl_backend__erl_code_gen__SuccessExpr_70, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 436 "erl_code_gen.m"
                MR_hl_field(MR_mktag(3), erl_backend__erl_code_gen__SuccessExpr_70, 1) = ((MR_Box) (erl_backend__erl_code_gen__V_79_79));
#line 436 "erl_code_gen.m"
                MR_hl_field(MR_mktag(3), erl_backend__erl_code_gen__SuccessExpr_70, 2) = ((MR_Box) (erl_backend__erl_code_gen__OutputVarsExprs_68));
#line 436 "erl_code_gen.m"
              }
#line 427 "erl_code_gen.m"
            }
#line 418 "erl_code_gen.m"
            break;
#line 418 "erl_code_gen.m"
          case (MR_Integer) 1:
#line 419 "erl_code_gen.m"
            {
#line 419 "erl_code_gen.m"
              MR_Word erl_backend__erl_code_gen__V_81_81;

#line 420 "erl_code_gen.m"
              {
#line 420 "erl_code_gen.m"
                erl_backend__erl_code_gen__InputVarsTerms_69 = erl_backend__elds__terms_from_vars_1_f_0(erl_backend__erl_code_gen__InputVars_66);
              }
#line 424 "erl_code_gen.m"
              {
#line 424 "erl_code_gen.m"
                erl_backend__erl_code_gen__V_81_81 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 424 "erl_code_gen.m"
                MR_hl_field(MR_mktag(3), erl_backend__erl_code_gen__V_81_81, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 424 "erl_code_gen.m"
                MR_hl_field(MR_mktag(3), erl_backend__erl_code_gen__V_81_81, 1) = ((MR_Box) (erl_backend__erl_code_gen__OutputVarsExprs_68));
#line 424 "erl_code_gen.m"
              }
#line 424 "erl_code_gen.m"
              {
#line 424 "erl_code_gen.m"
                erl_backend__erl_code_gen__SuccessExpr_70 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 424 "erl_code_gen.m"
                MR_hl_field(MR_mktag(2), erl_backend__erl_code_gen__SuccessExpr_70, 0) = ((MR_Box) (erl_backend__erl_code_gen__V_81_81));
#line 424 "erl_code_gen.m"
              }
#line 425 "erl_code_gen.m"
              erl_backend__erl_code_gen__InstMap_71 = erl_backend__erl_code_gen__InstMap0_33;
#line 419 "erl_code_gen.m"
              erl_backend__erl_code_gen__STATE_VARIABLE_Info_23_75 = erl_backend__erl_code_gen__STATE_VARIABLE_Info_38_51;
#line 419 "erl_code_gen.m"
            }
#line 418 "erl_code_gen.m"
            break;
#line 418 "erl_code_gen.m"
        }
#line 439 "erl_code_gen.m"
        {
#line 439 "erl_code_gen.m"
          erl_backend__erl_code_gen__V_82_82 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 439 "erl_code_gen.m"
          MR_hl_field(MR_mktag(1), erl_backend__erl_code_gen__V_82_82, 0) = ((MR_Box) (erl_backend__erl_code_gen__SuccessExpr_70));
#line 439 "erl_code_gen.m"
        }
#line 439 "erl_code_gen.m"
        {
#line 439 "erl_code_gen.m"
          erl_backend__erl_code_gen__erl_gen_goal_7_p_0(erl_backend__erl_code_gen__CodeModel_31, erl_backend__erl_code_gen__InstMap_71, erl_backend__erl_code_gen__Goal_41, erl_backend__erl_code_gen__V_82_82, &erl_backend__erl_code_gen__Statement_73, erl_backend__erl_code_gen__STATE_VARIABLE_Info_23_75, &erl_backend__erl_code_gen__STATE_VARIABLE_Info_43_56);
        }
#line 440 "erl_code_gen.m"
        {
#line 440 "erl_code_gen.m"
          erl_backend__erl_code_gen__ProcClause_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 440 "erl_code_gen.m"
          MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__ProcClause_50, 0) = ((MR_Box) (erl_backend__erl_code_gen__InputVarsTerms_69));
#line 440 "erl_code_gen.m"
          MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__ProcClause_50, 1) = ((MR_Box) (erl_backend__erl_code_gen__Statement_73));
#line 440 "erl_code_gen.m"
        }
#line 393 "erl_code_gen.m"
        erl_backend__erl_code_gen__ProcBody_15 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) erl_backend__erl_code_gen__ProcClause_50);
#line 392 "erl_code_gen.m"
      }
#line 396 "erl_code_gen.m"
    {
#line 396 "erl_code_gen.m"
      erl_backend__erl_code_util__erl_gen_info_get_varset_2_p_0(erl_backend__erl_code_gen__STATE_VARIABLE_Info_43_56, &erl_backend__erl_code_gen__ProcVarSet_14);
    }
#line 397 "erl_code_gen.m"
    {
#line 397 "erl_code_gen.m"
      erl_backend__erl_code_util__erl_gen_info_get_env_vars_2_p_0(erl_backend__erl_code_gen__STATE_VARIABLE_Info_43_56, &erl_backend__erl_code_gen__EnvVarNames_16);
    }
#line 337 "erl_code_gen.m"
    {
#line 337 "erl_code_gen.m"
      erl_backend__erl_code_gen__V_20_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 337 "erl_code_gen.m"
      MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__V_20_20, 0) = ((MR_Box) (erl_backend__erl_code_gen__PredId_9));
#line 337 "erl_code_gen.m"
      MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__V_20_20, 1) = ((MR_Box) (erl_backend__erl_code_gen__ProcId_10));
#line 337 "erl_code_gen.m"
    }
#line 337 "erl_code_gen.m"
    {
#line 337 "erl_code_gen.m"
      erl_backend__erl_code_gen__ProcDefn_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 337 "erl_code_gen.m"
      MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__ProcDefn_17, 0) = ((MR_Box) (erl_backend__erl_code_gen__V_20_20));
#line 337 "erl_code_gen.m"
      MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__ProcDefn_17, 1) = ((MR_Box) (erl_backend__erl_code_gen__ProcVarSet_14));
#line 337 "erl_code_gen.m"
      MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__ProcDefn_17, 2) = ((MR_Box) (erl_backend__erl_code_gen__ProcBody_15));
#line 337 "erl_code_gen.m"
      MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__ProcDefn_17, 3) = ((MR_Box) (erl_backend__erl_code_gen__EnvVarNames_16));
#line 337 "erl_code_gen.m"
    }
#line 339 "erl_code_gen.m"
    {
#line 339 "erl_code_gen.m"
      MR_Word base;
#line 339 "erl_code_gen.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 339 "erl_code_gen.m"
      *erl_backend__erl_code_gen__STATE_VARIABLE_Defns_19 = base;
#line 339 "erl_code_gen.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (erl_backend__erl_code_gen__ProcDefn_17));
#line 339 "erl_code_gen.m"
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (erl_backend__erl_code_gen__STATE_VARIABLE_Defns_0_18));
#line 339 "erl_code_gen.m"
    }
#line 334 "erl_code_gen.m"
  }
#line 331 "erl_code_gen.m"
}

#line 288 "erl_code_gen.m"
static void MR_CALL 
erl_backend__erl_code_gen__erl_gen_simple_compare_6_p_0(
#line 288 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__ModuleInfo_7,
#line 288 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__PredId_8,
#line 288 "erl_code_gen.m"
  MR_Integer erl_backend__erl_code_gen__ProcId_9,
#line 288 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__X_10,
#line 288 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__Y_11,
#line 288 "erl_code_gen.m"
  MR_Word * erl_backend__erl_code_gen__ProcDefn_12)
#line 288 "erl_code_gen.m"
{
#line 291 "erl_code_gen.m"
  {
#line 291 "erl_code_gen.m"
    MR_bool erl_backend__erl_code_gen__succeeded;
#line 291 "erl_code_gen.m"
    MR_Word erl_backend__erl_code_gen__Info_13;
#line 291 "erl_code_gen.m"
    MR_Word erl_backend__erl_code_gen__InputVars_14;
#line 291 "erl_code_gen.m"
    MR_Word erl_backend__erl_code_gen__XExpr_15;
#line 291 "erl_code_gen.m"
    MR_Word erl_backend__erl_code_gen__YExpr_16;
#line 291 "erl_code_gen.m"
    MR_Word erl_backend__erl_code_gen__Clause_17;
#line 291 "erl_code_gen.m"
    MR_Word erl_backend__erl_code_gen__ClauseExpr_18;
#line 291 "erl_code_gen.m"
    MR_Word erl_backend__erl_code_gen__CondEq_19;
#line 291 "erl_code_gen.m"
    MR_Word erl_backend__erl_code_gen__IsEq_20;
#line 291 "erl_code_gen.m"
    MR_Word erl_backend__erl_code_gen__IsNotEq_21;
#line 291 "erl_code_gen.m"
    MR_Word erl_backend__erl_code_gen__CondLt_22;
#line 291 "erl_code_gen.m"
    MR_Word erl_backend__erl_code_gen__IsLt_23;
#line 291 "erl_code_gen.m"
    MR_Word erl_backend__erl_code_gen__IsGt_24;
#line 291 "erl_code_gen.m"
    MR_Word erl_backend__erl_code_gen__ProcVarSet_25;
#line 291 "erl_code_gen.m"
    MR_Word erl_backend__erl_code_gen__EnvVarNames_26;
#line 291 "erl_code_gen.m"
    MR_Word erl_backend__erl_code_gen__V_27_27;
#line 291 "erl_code_gen.m"
    MR_Word erl_backend__erl_code_gen__V_28_28;
#line 291 "erl_code_gen.m"
    MR_Word erl_backend__erl_code_gen__V_29_29;
#line 291 "erl_code_gen.m"
    MR_Word erl_backend__erl_code_gen__V_32_32;
#line 291 "erl_code_gen.m"
    MR_Word erl_backend__erl_code_gen__V_33_33;
#line 291 "erl_code_gen.m"
    MR_Word erl_backend__erl_code_gen__V_34_34;
#line 291 "erl_code_gen.m"
    MR_Word erl_backend__erl_code_gen__V_36_36;
#line 291 "erl_code_gen.m"
    MR_Word erl_backend__erl_code_gen__V_37_37;
#line 291 "erl_code_gen.m"
    MR_Word erl_backend__erl_code_gen__V_38_38;
#line 291 "erl_code_gen.m"
    MR_Word erl_backend__erl_code_gen__V_39_39;
#line 291 "erl_code_gen.m"
    MR_Word erl_backend__erl_code_gen__V_42_42;
#line 291 "erl_code_gen.m"
    MR_Word erl_backend__erl_code_gen__V_43_43;
#line 291 "erl_code_gen.m"
    MR_Word erl_backend__erl_code_gen__V_44_44;
#line 291 "erl_code_gen.m"
    MR_Word erl_backend__erl_code_gen__V_46_46;
#line 291 "erl_code_gen.m"
    MR_Word erl_backend__erl_code_gen__V_47_47;
#line 291 "erl_code_gen.m"
    MR_Word erl_backend__erl_code_gen__V_48_48;
#line 291 "erl_code_gen.m"
    MR_Word erl_backend__erl_code_gen__V_50_50;
#line 291 "erl_code_gen.m"
    MR_Word erl_backend__erl_code_gen__V_51_51;

#line 292 "erl_code_gen.m"
    {
#line 292 "erl_code_gen.m"
      erl_backend__erl_code_gen__Info_13 = erl_backend__erl_code_util__erl_gen_info_init_3_f_0(erl_backend__erl_code_gen__ModuleInfo_7, erl_backend__erl_code_gen__PredId_8, erl_backend__erl_code_gen__ProcId_9);
    }
#line 293 "erl_code_gen.m"
    {
#line 293 "erl_code_gen.m"
      erl_backend__erl_code_util__erl_gen_info_get_input_vars_2_p_0(erl_backend__erl_code_gen__Info_13, &erl_backend__erl_code_gen__InputVars_14);
    }
#line 295 "erl_code_gen.m"
    {
#line 295 "erl_code_gen.m"
      erl_backend__erl_code_gen__XExpr_15 = erl_backend__elds__expr_from_var_1_f_0(erl_backend__erl_code_gen__X_10);
    }
#line 296 "erl_code_gen.m"
    {
#line 296 "erl_code_gen.m"
      erl_backend__erl_code_gen__YExpr_16 = erl_backend__elds__expr_from_var_1_f_0(erl_backend__erl_code_gen__Y_11);
    }
#line 308 "erl_code_gen.m"
    {
#line 308 "erl_code_gen.m"
      erl_backend__erl_code_gen__V_27_27 = erl_backend__elds__terms_from_vars_1_f_0(erl_backend__erl_code_gen__InputVars_14);
    }
#line 311 "erl_code_gen.m"
    {
#line 311 "erl_code_gen.m"
      erl_backend__erl_code_gen__CondEq_19 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 311 "erl_code_gen.m"
      MR_hl_field(MR_mktag(3), erl_backend__erl_code_gen__CondEq_19, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 311 "erl_code_gen.m"
      MR_hl_field(MR_mktag(3), erl_backend__erl_code_gen__CondEq_19, 1) = ((MR_Box) ((MR_Integer) 15));
#line 311 "erl_code_gen.m"
      MR_hl_field(MR_mktag(3), erl_backend__erl_code_gen__CondEq_19, 2) = ((MR_Box) (erl_backend__erl_code_gen__XExpr_15));
#line 311 "erl_code_gen.m"
      MR_hl_field(MR_mktag(3), erl_backend__erl_code_gen__CondEq_19, 3) = ((MR_Box) (erl_backend__erl_code_gen__YExpr_16));
#line 311 "erl_code_gen.m"
    }
#line 312 "erl_code_gen.m"
    {
#line 312 "erl_code_gen.m"
      erl_backend__erl_code_gen__V_32_32 = erl_backend__elds__elds_true_0_f_0();
    }
#line 312 "erl_code_gen.m"
    {
#line 312 "erl_code_gen.m"
      erl_backend__erl_code_gen__V_34_34 = erl_backend__elds__make_enum_alternative_1_f_0((MR_String) "=");
    }
#line 312 "erl_code_gen.m"
    {
#line 312 "erl_code_gen.m"
      erl_backend__erl_code_gen__V_33_33 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 312 "erl_code_gen.m"
      MR_hl_field(MR_mktag(2), erl_backend__erl_code_gen__V_33_33, 0) = ((MR_Box) (erl_backend__erl_code_gen__V_34_34));
#line 312 "erl_code_gen.m"
    }
#line 312 "erl_code_gen.m"
    {
#line 312 "erl_code_gen.m"
      erl_backend__erl_code_gen__IsEq_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 312 "erl_code_gen.m"
      MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__IsEq_20, 0) = ((MR_Box) (erl_backend__erl_code_gen__V_32_32));
#line 312 "erl_code_gen.m"
      MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__IsEq_20, 1) = ((MR_Box) (erl_backend__erl_code_gen__V_33_33));
#line 312 "erl_code_gen.m"
    }
#line 313 "erl_code_gen.m"
    {
#line 313 "erl_code_gen.m"
      erl_backend__erl_code_gen__V_36_36 = erl_backend__elds__elds_false_0_f_0();
    }
#line 315 "erl_code_gen.m"
    {
#line 315 "erl_code_gen.m"
      erl_backend__erl_code_gen__CondLt_22 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 315 "erl_code_gen.m"
      MR_hl_field(MR_mktag(3), erl_backend__erl_code_gen__CondLt_22, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 315 "erl_code_gen.m"
      MR_hl_field(MR_mktag(3), erl_backend__erl_code_gen__CondLt_22, 1) = ((MR_Box) ((MR_Integer) 12));
#line 315 "erl_code_gen.m"
      MR_hl_field(MR_mktag(3), erl_backend__erl_code_gen__CondLt_22, 2) = ((MR_Box) (erl_backend__erl_code_gen__XExpr_15));
#line 315 "erl_code_gen.m"
      MR_hl_field(MR_mktag(3), erl_backend__erl_code_gen__CondLt_22, 3) = ((MR_Box) (erl_backend__erl_code_gen__YExpr_16));
#line 315 "erl_code_gen.m"
    }
#line 316 "erl_code_gen.m"
    {
#line 316 "erl_code_gen.m"
      erl_backend__erl_code_gen__V_42_42 = erl_backend__elds__elds_true_0_f_0();
    }
#line 316 "erl_code_gen.m"
    {
#line 316 "erl_code_gen.m"
      erl_backend__erl_code_gen__V_44_44 = erl_backend__elds__make_enum_alternative_1_f_0((MR_String) "<");
    }
#line 316 "erl_code_gen.m"
    {
#line 316 "erl_code_gen.m"
      erl_backend__erl_code_gen__V_43_43 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 316 "erl_code_gen.m"
      MR_hl_field(MR_mktag(2), erl_backend__erl_code_gen__V_43_43, 0) = ((MR_Box) (erl_backend__erl_code_gen__V_44_44));
#line 316 "erl_code_gen.m"
    }
#line 316 "erl_code_gen.m"
    {
#line 316 "erl_code_gen.m"
      erl_backend__erl_code_gen__IsLt_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 316 "erl_code_gen.m"
      MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__IsLt_23, 0) = ((MR_Box) (erl_backend__erl_code_gen__V_42_42));
#line 316 "erl_code_gen.m"
      MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__IsLt_23, 1) = ((MR_Box) (erl_backend__erl_code_gen__V_43_43));
#line 316 "erl_code_gen.m"
    }
#line 317 "erl_code_gen.m"
    {
#line 317 "erl_code_gen.m"
      erl_backend__erl_code_gen__V_46_46 = erl_backend__elds__elds_false_0_f_0();
    }
#line 317 "erl_code_gen.m"
    {
#line 317 "erl_code_gen.m"
      erl_backend__erl_code_gen__V_48_48 = erl_backend__elds__make_enum_alternative_1_f_0((MR_String) ">");
    }
#line 317 "erl_code_gen.m"
    {
#line 317 "erl_code_gen.m"
      erl_backend__erl_code_gen__V_47_47 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 317 "erl_code_gen.m"
      MR_hl_field(MR_mktag(2), erl_backend__erl_code_gen__V_47_47, 0) = ((MR_Box) (erl_backend__erl_code_gen__V_48_48));
#line 317 "erl_code_gen.m"
    }
#line 317 "erl_code_gen.m"
    {
#line 317 "erl_code_gen.m"
      erl_backend__erl_code_gen__IsGt_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 317 "erl_code_gen.m"
      MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__IsGt_24, 0) = ((MR_Box) (erl_backend__erl_code_gen__V_46_46));
#line 317 "erl_code_gen.m"
      MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__IsGt_24, 1) = ((MR_Box) (erl_backend__erl_code_gen__V_47_47));
#line 317 "erl_code_gen.m"
    }
#line 313 "erl_code_gen.m"
    {
#line 313 "erl_code_gen.m"
      erl_backend__erl_code_gen__V_39_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 313 "erl_code_gen.m"
      MR_hl_field(MR_mktag(1), erl_backend__erl_code_gen__V_39_39, 0) = ((MR_Box) (erl_backend__erl_code_gen__IsGt_24));
#line 313 "erl_code_gen.m"
      MR_hl_field(MR_mktag(1), erl_backend__erl_code_gen__V_39_39, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 313 "erl_code_gen.m"
    }
#line 313 "erl_code_gen.m"
    {
#line 313 "erl_code_gen.m"
      erl_backend__erl_code_gen__V_38_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 313 "erl_code_gen.m"
      MR_hl_field(MR_mktag(1), erl_backend__erl_code_gen__V_38_38, 0) = ((MR_Box) (erl_backend__erl_code_gen__IsLt_23));
#line 313 "erl_code_gen.m"
      MR_hl_field(MR_mktag(1), erl_backend__erl_code_gen__V_38_38, 1) = ((MR_Box) (erl_backend__erl_code_gen__V_39_39));
#line 313 "erl_code_gen.m"
    }
#line 313 "erl_code_gen.m"
    {
#line 313 "erl_code_gen.m"
      erl_backend__erl_code_gen__V_37_37 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 313 "erl_code_gen.m"
      MR_hl_field(MR_mktag(3), erl_backend__erl_code_gen__V_37_37, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 313 "erl_code_gen.m"
      MR_hl_field(MR_mktag(3), erl_backend__erl_code_gen__V_37_37, 1) = ((MR_Box) (erl_backend__erl_code_gen__CondLt_22));
#line 313 "erl_code_gen.m"
      MR_hl_field(MR_mktag(3), erl_backend__erl_code_gen__V_37_37, 2) = ((MR_Box) (erl_backend__erl_code_gen__V_38_38));
#line 313 "erl_code_gen.m"
    }
#line 313 "erl_code_gen.m"
    {
#line 313 "erl_code_gen.m"
      erl_backend__erl_code_gen__IsNotEq_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 313 "erl_code_gen.m"
      MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__IsNotEq_21, 0) = ((MR_Box) (erl_backend__erl_code_gen__V_36_36));
#line 313 "erl_code_gen.m"
      MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__IsNotEq_21, 1) = ((MR_Box) (erl_backend__erl_code_gen__V_37_37));
#line 313 "erl_code_gen.m"
    }
#line 309 "erl_code_gen.m"
    {
#line 309 "erl_code_gen.m"
      erl_backend__erl_code_gen__V_29_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 309 "erl_code_gen.m"
      MR_hl_field(MR_mktag(1), erl_backend__erl_code_gen__V_29_29, 0) = ((MR_Box) (erl_backend__erl_code_gen__IsNotEq_21));
#line 309 "erl_code_gen.m"
      MR_hl_field(MR_mktag(1), erl_backend__erl_code_gen__V_29_29, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 309 "erl_code_gen.m"
    }
#line 309 "erl_code_gen.m"
    {
#line 309 "erl_code_gen.m"
      erl_backend__erl_code_gen__V_28_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 309 "erl_code_gen.m"
      MR_hl_field(MR_mktag(1), erl_backend__erl_code_gen__V_28_28, 0) = ((MR_Box) (erl_backend__erl_code_gen__IsEq_20));
#line 309 "erl_code_gen.m"
      MR_hl_field(MR_mktag(1), erl_backend__erl_code_gen__V_28_28, 1) = ((MR_Box) (erl_backend__erl_code_gen__V_29_29));
#line 309 "erl_code_gen.m"
    }
#line 309 "erl_code_gen.m"
    {
#line 309 "erl_code_gen.m"
      erl_backend__erl_code_gen__ClauseExpr_18 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 309 "erl_code_gen.m"
      MR_hl_field(MR_mktag(3), erl_backend__erl_code_gen__ClauseExpr_18, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 309 "erl_code_gen.m"
      MR_hl_field(MR_mktag(3), erl_backend__erl_code_gen__ClauseExpr_18, 1) = ((MR_Box) (erl_backend__erl_code_gen__CondEq_19));
#line 309 "erl_code_gen.m"
      MR_hl_field(MR_mktag(3), erl_backend__erl_code_gen__ClauseExpr_18, 2) = ((MR_Box) (erl_backend__erl_code_gen__V_28_28));
#line 309 "erl_code_gen.m"
    }
#line 308 "erl_code_gen.m"
    {
#line 308 "erl_code_gen.m"
      erl_backend__erl_code_gen__Clause_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 308 "erl_code_gen.m"
      MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__Clause_17, 0) = ((MR_Box) (erl_backend__erl_code_gen__V_27_27));
#line 308 "erl_code_gen.m"
      MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__Clause_17, 1) = ((MR_Box) (erl_backend__erl_code_gen__ClauseExpr_18));
#line 308 "erl_code_gen.m"
    }
#line 319 "erl_code_gen.m"
    {
#line 319 "erl_code_gen.m"
      erl_backend__erl_code_util__erl_gen_info_get_varset_2_p_0(erl_backend__erl_code_gen__Info_13, &erl_backend__erl_code_gen__ProcVarSet_25);
    }
#line 320 "erl_code_gen.m"
    {
#line 320 "erl_code_gen.m"
      erl_backend__erl_code_util__erl_gen_info_get_env_vars_2_p_0(erl_backend__erl_code_gen__Info_13, &erl_backend__erl_code_gen__EnvVarNames_26);
    }
#line 321 "erl_code_gen.m"
    {
#line 321 "erl_code_gen.m"
      erl_backend__erl_code_gen__V_50_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 321 "erl_code_gen.m"
      MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__V_50_50, 0) = ((MR_Box) (erl_backend__erl_code_gen__PredId_8));
#line 321 "erl_code_gen.m"
      MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__V_50_50, 1) = ((MR_Box) (erl_backend__erl_code_gen__ProcId_9));
#line 321 "erl_code_gen.m"
    }
#line 322 "erl_code_gen.m"
    erl_backend__erl_code_gen__V_51_51 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) erl_backend__erl_code_gen__Clause_17);
#line 321 "erl_code_gen.m"
    {
#line 321 "erl_code_gen.m"
      MR_Word base;
#line 321 "erl_code_gen.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 321 "erl_code_gen.m"
      *erl_backend__erl_code_gen__ProcDefn_12 = base;
#line 321 "erl_code_gen.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (erl_backend__erl_code_gen__V_50_50));
#line 321 "erl_code_gen.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (erl_backend__erl_code_gen__ProcVarSet_25));
#line 321 "erl_code_gen.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (erl_backend__erl_code_gen__V_51_51));
#line 321 "erl_code_gen.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (erl_backend__erl_code_gen__EnvVarNames_26));
#line 321 "erl_code_gen.m"
    }
#line 291 "erl_code_gen.m"
  }
#line 288 "erl_code_gen.m"
}

#line 233 "erl_code_gen.m"
static MR_bool MR_CALL 
erl_backend__erl_code_gen__erl_maybe_gen_simple_special_pred_7_p_0(
#line 233 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__ModuleInfo_8,
#line 233 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__PredId_9,
#line 233 "erl_code_gen.m"
  MR_Integer erl_backend__erl_code_gen__ProcId_10,
#line 233 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__PredInfo_11,
#line 233 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__ProcInfo_12,
#line 233 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__STATE_VARIABLE_Defns_0_27,
#line 233 "erl_code_gen.m"
  MR_Word * erl_backend__erl_code_gen__STATE_VARIABLE_Defns_28)
#line 233 "erl_code_gen.m"
{
#line 238 "erl_code_gen.m"
  {
#line 238 "erl_code_gen.m"
    MR_bool erl_backend__erl_code_gen__succeeded;
#line 238 "erl_code_gen.m"
    MR_String erl_backend__erl_code_gen__PredName_14;
#line 238 "erl_code_gen.m"
    MR_Integer erl_backend__erl_code_gen__PredArity_15;
#line 238 "erl_code_gen.m"
    MR_Word erl_backend__erl_code_gen__SpecialId_16;
#line 238 "erl_code_gen.m"
    MR_Word erl_backend__erl_code_gen__Args_18;
#line 238 "erl_code_gen.m"
    MR_Word erl_backend__erl_code_gen__VarTypes_19;
#line 238 "erl_code_gen.m"
    MR_Word erl_backend__erl_code_gen__ProcDefn_24;
#line 238 "erl_code_gen.m"
    MR_Integer erl_backend__erl_code_gen__V_42_42;
#line 241 "erl_code_gen.m"
    MR_String erl_backend__erl_code_gen__V_17_17;

#line 239 "erl_code_gen.m"
    {
#line 239 "erl_code_gen.m"
      erl_backend__erl_code_gen__PredName_14 = hlds__hlds_pred__pred_info_name_1_f_0(erl_backend__erl_code_gen__PredInfo_11);
    }
#line 240 "erl_code_gen.m"
    {
#line 240 "erl_code_gen.m"
      erl_backend__erl_code_gen__PredArity_15 = hlds__hlds_pred__pred_info_orig_arity_1_f_0(erl_backend__erl_code_gen__PredInfo_11);
    }
#line 241 "erl_code_gen.m"
    {
#line 241 "erl_code_gen.m"
      erl_backend__erl_code_gen__succeeded = mdbcomp__prim_data__special_pred_name_arity_4_p_2(&erl_backend__erl_code_gen__SpecialId_16, &erl_backend__erl_code_gen__V_17_17, erl_backend__erl_code_gen__PredName_14, &erl_backend__erl_code_gen__V_42_42);
    }
#line 238 "erl_code_gen.m"
    if (erl_backend__erl_code_gen__succeeded)
#line 238 "erl_code_gen.m"
      {
#line 241 "erl_code_gen.m"
        erl_backend__erl_code_gen__succeeded = (erl_backend__erl_code_gen__PredArity_15 == erl_backend__erl_code_gen__V_42_42);
#line 238 "erl_code_gen.m"
        if (erl_backend__erl_code_gen__succeeded)
#line 238 "erl_code_gen.m"
          {
#line 242 "erl_code_gen.m"
            {
#line 242 "erl_code_gen.m"
              hlds__hlds_pred__proc_info_get_headvars_2_p_0(erl_backend__erl_code_gen__ProcInfo_12, &erl_backend__erl_code_gen__Args_18);
            }
#line 243 "erl_code_gen.m"
            {
#line 243 "erl_code_gen.m"
              hlds__hlds_pred__proc_info_get_vartypes_2_p_0(erl_backend__erl_code_gen__ProcInfo_12, &erl_backend__erl_code_gen__VarTypes_19);
            }
#line 253 "erl_code_gen.m"
#line 253 "erl_code_gen.m"
            switch (erl_backend__erl_code_gen__SpecialId_16) {
#line 253 "erl_code_gen.m"
              default:
#line 253 "erl_code_gen.m"
                erl_backend__erl_code_gen__succeeded = MR_FALSE;
#line 253 "erl_code_gen.m"
                break;
#line 253 "erl_code_gen.m"
              case (MR_Integer) 2:
#line 254 "erl_code_gen.m"
                {
#line 254 "erl_code_gen.m"
                  MR_Word erl_backend__erl_code_gen__V_29_29;
#line 254 "erl_code_gen.m"
                  MR_Word erl_backend__erl_code_gen__V_30_30;
#line 254 "erl_code_gen.m"
                  MR_Word erl_backend__erl_code_gen__V_32_32;
#line 254 "erl_code_gen.m"
                  MR_Word erl_backend__erl_code_gen__Y_37;
#line 254 "erl_code_gen.m"
                  MR_Word erl_backend__erl_code_gen__X_38;
#line 254 "erl_code_gen.m"
                  MR_Word erl_backend__erl_code_gen__Type_39;
#line 254 "erl_code_gen.m"
                  MR_Word erl_backend__erl_code_gen__V_44_44;
#line 255 "erl_code_gen.m"
                  MR_Word erl_backend__erl_code_gen__V_50_50;
#line 255 "erl_code_gen.m"
                  MR_Word erl_backend__erl_code_gen__V_51_51;

#line 255 "erl_code_gen.m"
                  {
#line 255 "erl_code_gen.m"
                    mercury__list__reverse_2_p_0((MR_Word) &erl_backend__erl_code_gen_scalar_common_1[0], erl_backend__erl_code_gen__Args_18, &erl_backend__erl_code_gen__V_29_29);
                  }
#line 255 "erl_code_gen.m"
                  erl_backend__erl_code_gen__succeeded = ((MR_tag((MR_Word) erl_backend__erl_code_gen__V_29_29)) == (MR_mktag((MR_Integer) 1)));
#line 255 "erl_code_gen.m"
                  if (erl_backend__erl_code_gen__succeeded)
#line 255 "erl_code_gen.m"
                    {
#line 255 "erl_code_gen.m"
                      erl_backend__erl_code_gen__Y_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__erl_code_gen__V_29_29, (MR_Integer) 0)));
#line 255 "erl_code_gen.m"
                      erl_backend__erl_code_gen__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__erl_code_gen__V_29_29, (MR_Integer) 1)));
#line 255 "erl_code_gen.m"
                      erl_backend__erl_code_gen__succeeded = ((MR_tag((MR_Word) erl_backend__erl_code_gen__V_30_30)) == (MR_mktag((MR_Integer) 1)));
#line 255 "erl_code_gen.m"
                      if (erl_backend__erl_code_gen__succeeded)
#line 255 "erl_code_gen.m"
                        {
#line 255 "erl_code_gen.m"
                          erl_backend__erl_code_gen__X_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__erl_code_gen__V_30_30, (MR_Integer) 0)));
#line 255 "erl_code_gen.m"
                          erl_backend__erl_code_gen__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__erl_code_gen__V_30_30, (MR_Integer) 1)));
#line 255 "erl_code_gen.m"
                          erl_backend__erl_code_gen__succeeded = ((MR_tag((MR_Word) erl_backend__erl_code_gen__V_44_44)) == (MR_mktag((MR_Integer) 1)));
#line 255 "erl_code_gen.m"
                          if (erl_backend__erl_code_gen__succeeded)
#line 255 "erl_code_gen.m"
                            {
#line 255 "erl_code_gen.m"
                              erl_backend__erl_code_gen__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__erl_code_gen__V_44_44, (MR_Integer) 0)));
#line 255 "erl_code_gen.m"
                              erl_backend__erl_code_gen__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__erl_code_gen__V_44_44, (MR_Integer) 1)));
#line 256 "erl_code_gen.m"
                              {
#line 256 "erl_code_gen.m"
                                hlds__vartypes__lookup_var_type_3_p_0(erl_backend__erl_code_gen__VarTypes_19, erl_backend__erl_code_gen__Y_37, &erl_backend__erl_code_gen__Type_39);
                              }
#line 257 "erl_code_gen.m"
                              {
#line 257 "erl_code_gen.m"
                                erl_backend__erl_code_gen__V_32_32 = check_hlds__type_util__check_dummy_type_2_f_0(erl_backend__erl_code_gen__ModuleInfo_8, erl_backend__erl_code_gen__Type_39);
                              }
#line 257 "erl_code_gen.m"
                              erl_backend__erl_code_gen__succeeded = (erl_backend__erl_code_gen__V_32_32 == (MR_Integer) 1);
#line 254 "erl_code_gen.m"
                              if (erl_backend__erl_code_gen__succeeded)
#line 254 "erl_code_gen.m"
                                {
#line 258 "erl_code_gen.m"
                                  {
#line 258 "erl_code_gen.m"
                                    erl_backend__erl_code_gen__succeeded = check_hlds__type_util__type_definitely_has_no_user_defined_equality_pred_2_p_0(erl_backend__erl_code_gen__ModuleInfo_8, erl_backend__erl_code_gen__Type_39);
                                  }
#line 254 "erl_code_gen.m"
                                  if (erl_backend__erl_code_gen__succeeded)
#line 254 "erl_code_gen.m"
                                    {
#line 259 "erl_code_gen.m"
                                      {
#line 259 "erl_code_gen.m"
                                        erl_backend__erl_code_gen__erl_gen_simple_compare_6_p_0(erl_backend__erl_code_gen__ModuleInfo_8, erl_backend__erl_code_gen__PredId_9, erl_backend__erl_code_gen__ProcId_10, erl_backend__erl_code_gen__X_38, erl_backend__erl_code_gen__Y_37, &erl_backend__erl_code_gen__ProcDefn_24);
                                      }
#line 259 "erl_code_gen.m"
                                      erl_backend__erl_code_gen__succeeded = MR_TRUE;
#line 254 "erl_code_gen.m"
                                    }
#line 254 "erl_code_gen.m"
                                }
#line 255 "erl_code_gen.m"
                            }
#line 255 "erl_code_gen.m"
                        }
#line 255 "erl_code_gen.m"
                    }
#line 254 "erl_code_gen.m"
                }
#line 253 "erl_code_gen.m"
                break;
#line 253 "erl_code_gen.m"
              case (MR_Integer) 0:
#line 245 "erl_code_gen.m"
                {
#line 245 "erl_code_gen.m"
                  MR_Word erl_backend__erl_code_gen__TypeInfo_40_40;
#line 245 "erl_code_gen.m"
                  MR_Word erl_backend__erl_code_gen__Y_20;
#line 245 "erl_code_gen.m"
                  MR_Word erl_backend__erl_code_gen__X_21;
#line 245 "erl_code_gen.m"
                  MR_Word erl_backend__erl_code_gen__Type_23;
#line 245 "erl_code_gen.m"
                  MR_Word erl_backend__erl_code_gen__V_33_33;
#line 245 "erl_code_gen.m"
                  MR_Word erl_backend__erl_code_gen__V_34_34;
#line 245 "erl_code_gen.m"
                  MR_Word erl_backend__erl_code_gen__V_35_35;
#line 245 "erl_code_gen.m"
                  MR_Integer erl_backend__erl_code_gen__V_43_43;
#line 245 "erl_code_gen.m"
                  MR_Word erl_backend__erl_code_gen__Info_60;
#line 245 "erl_code_gen.m"
                  MR_Word erl_backend__erl_code_gen__InputVars_61;
#line 245 "erl_code_gen.m"
                  MR_Word erl_backend__erl_code_gen__Clause_62;
#line 245 "erl_code_gen.m"
                  MR_Word erl_backend__erl_code_gen__ClauseExpr_63;
#line 245 "erl_code_gen.m"
                  MR_Word erl_backend__erl_code_gen__CompareXY_64;
#line 245 "erl_code_gen.m"
                  MR_Word erl_backend__erl_code_gen__TrueCase_65;
#line 245 "erl_code_gen.m"
                  MR_Word erl_backend__erl_code_gen__FalseCase_66;
#line 245 "erl_code_gen.m"
                  MR_Word erl_backend__erl_code_gen__ProcVarSet_67;
#line 245 "erl_code_gen.m"
                  MR_Word erl_backend__erl_code_gen__EnvVarNames_68;
#line 245 "erl_code_gen.m"
                  MR_Word erl_backend__erl_code_gen__V_69_69;
#line 245 "erl_code_gen.m"
                  MR_Word erl_backend__erl_code_gen__V_70_70;
#line 245 "erl_code_gen.m"
                  MR_Word erl_backend__erl_code_gen__V_71_71;
#line 245 "erl_code_gen.m"
                  MR_Word erl_backend__erl_code_gen__V_72_72;
#line 245 "erl_code_gen.m"
                  MR_Word erl_backend__erl_code_gen__V_73_73;
#line 245 "erl_code_gen.m"
                  MR_Word erl_backend__erl_code_gen__V_74_74;
#line 245 "erl_code_gen.m"
                  MR_Word erl_backend__erl_code_gen__V_75_75;
#line 245 "erl_code_gen.m"
                  MR_Word erl_backend__erl_code_gen__V_76_76;
#line 245 "erl_code_gen.m"
                  MR_Word erl_backend__erl_code_gen__V_77_77;
#line 245 "erl_code_gen.m"
                  MR_Word erl_backend__erl_code_gen__V_78_78;
#line 245 "erl_code_gen.m"
                  MR_Word erl_backend__erl_code_gen__V_79_79;
#line 245 "erl_code_gen.m"
                  MR_Word erl_backend__erl_code_gen__V_80_80;
#line 245 "erl_code_gen.m"
                  MR_Word erl_backend__erl_code_gen__V_81_81;
#line 245 "erl_code_gen.m"
                  MR_Word erl_backend__erl_code_gen__V_82_82;
#line 245 "erl_code_gen.m"
                  MR_Word erl_backend__erl_code_gen__V_83_83;
#line 247 "erl_code_gen.m"
                  MR_Word erl_backend__erl_code_gen__V_22_22;

#line 246 "erl_code_gen.m"
                  {
#line 246 "erl_code_gen.m"
                    hlds__hlds_pred__in_in_unification_proc_id_1_p_0(&erl_backend__erl_code_gen__V_43_43);
                  }
#line 246 "erl_code_gen.m"
                  erl_backend__erl_code_gen__succeeded = (erl_backend__erl_code_gen__ProcId_10 == erl_backend__erl_code_gen__V_43_43);
#line 245 "erl_code_gen.m"
                  if (erl_backend__erl_code_gen__succeeded)
#line 245 "erl_code_gen.m"
                    {
#line 7727 "erl_backend.erl_code_gen.c"
                      erl_backend__erl_code_gen__TypeInfo_40_40 = (MR_Word) &erl_backend__erl_code_gen_scalar_common_1[0];
#line 247 "erl_code_gen.m"
                      {
#line 247 "erl_code_gen.m"
                        mercury__list__reverse_2_p_0(erl_backend__erl_code_gen__TypeInfo_40_40, erl_backend__erl_code_gen__Args_18, &erl_backend__erl_code_gen__V_33_33);
                      }
#line 247 "erl_code_gen.m"
                      erl_backend__erl_code_gen__succeeded = ((MR_tag((MR_Word) erl_backend__erl_code_gen__V_33_33)) == (MR_mktag((MR_Integer) 1)));
#line 247 "erl_code_gen.m"
                      if (erl_backend__erl_code_gen__succeeded)
#line 247 "erl_code_gen.m"
                        {
#line 247 "erl_code_gen.m"
                          erl_backend__erl_code_gen__Y_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__erl_code_gen__V_33_33, (MR_Integer) 0)));
#line 247 "erl_code_gen.m"
                          erl_backend__erl_code_gen__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__erl_code_gen__V_33_33, (MR_Integer) 1)));
#line 247 "erl_code_gen.m"
                          erl_backend__erl_code_gen__succeeded = ((MR_tag((MR_Word) erl_backend__erl_code_gen__V_34_34)) == (MR_mktag((MR_Integer) 1)));
#line 247 "erl_code_gen.m"
                          if (erl_backend__erl_code_gen__succeeded)
#line 247 "erl_code_gen.m"
                            {
#line 247 "erl_code_gen.m"
                              erl_backend__erl_code_gen__X_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__erl_code_gen__V_34_34, (MR_Integer) 0)));
#line 247 "erl_code_gen.m"
                              erl_backend__erl_code_gen__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__erl_code_gen__V_34_34, (MR_Integer) 1)));
#line 248 "erl_code_gen.m"
                              {
#line 248 "erl_code_gen.m"
                                hlds__vartypes__lookup_var_type_3_p_0(erl_backend__erl_code_gen__VarTypes_19, erl_backend__erl_code_gen__Y_20, &erl_backend__erl_code_gen__Type_23);
                              }
#line 249 "erl_code_gen.m"
                              {
#line 249 "erl_code_gen.m"
                                erl_backend__erl_code_gen__V_35_35 = check_hlds__type_util__check_dummy_type_2_f_0(erl_backend__erl_code_gen__ModuleInfo_8, erl_backend__erl_code_gen__Type_23);
                              }
#line 249 "erl_code_gen.m"
                              erl_backend__erl_code_gen__succeeded = (erl_backend__erl_code_gen__V_35_35 == (MR_Integer) 1);
#line 245 "erl_code_gen.m"
                              if (erl_backend__erl_code_gen__succeeded)
#line 245 "erl_code_gen.m"
                                {
#line 250 "erl_code_gen.m"
                                  {
#line 250 "erl_code_gen.m"
                                    erl_backend__erl_code_gen__succeeded = check_hlds__type_util__type_definitely_has_no_user_defined_equality_pred_2_p_0(erl_backend__erl_code_gen__ModuleInfo_8, erl_backend__erl_code_gen__Type_23);
                                  }
#line 245 "erl_code_gen.m"
                                  if (erl_backend__erl_code_gen__succeeded)
#line 245 "erl_code_gen.m"
                                    {
#line 268 "erl_code_gen.m"
                                      {
#line 268 "erl_code_gen.m"
                                        erl_backend__erl_code_gen__Info_60 = erl_backend__erl_code_util__erl_gen_info_init_3_f_0(erl_backend__erl_code_gen__ModuleInfo_8, erl_backend__erl_code_gen__PredId_9, erl_backend__erl_code_gen__ProcId_10);
                                      }
#line 269 "erl_code_gen.m"
                                      {
#line 269 "erl_code_gen.m"
                                        erl_backend__erl_code_util__erl_gen_info_get_input_vars_2_p_0(erl_backend__erl_code_gen__Info_60, &erl_backend__erl_code_gen__InputVars_61);
                                      }
#line 277 "erl_code_gen.m"
                                      {
#line 277 "erl_code_gen.m"
                                        erl_backend__erl_code_gen__V_69_69 = erl_backend__elds__terms_from_vars_1_f_0(erl_backend__erl_code_gen__InputVars_61);
                                      }
#line 278 "erl_code_gen.m"
                                      erl_backend__erl_code_gen__V_72_72 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 279 "erl_code_gen.m"
                                      erl_backend__erl_code_gen__V_73_73 = (MR_Integer) 15;
#line 279 "erl_code_gen.m"
                                      {
#line 279 "erl_code_gen.m"
                                        erl_backend__erl_code_gen__V_74_74 = erl_backend__elds__expr_from_var_1_f_0(erl_backend__erl_code_gen__X_21);
                                      }
#line 279 "erl_code_gen.m"
                                      {
#line 279 "erl_code_gen.m"
                                        erl_backend__erl_code_gen__V_75_75 = erl_backend__elds__expr_from_var_1_f_0(erl_backend__erl_code_gen__Y_20);
                                      }
#line 279 "erl_code_gen.m"
                                      {
#line 279 "erl_code_gen.m"
                                        erl_backend__erl_code_gen__CompareXY_64 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 279 "erl_code_gen.m"
                                        MR_hl_field(MR_mktag(3), erl_backend__erl_code_gen__CompareXY_64, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 279 "erl_code_gen.m"
                                        MR_hl_field(MR_mktag(3), erl_backend__erl_code_gen__CompareXY_64, 1) = ((MR_Box) (erl_backend__erl_code_gen__V_73_73));
#line 279 "erl_code_gen.m"
                                        MR_hl_field(MR_mktag(3), erl_backend__erl_code_gen__CompareXY_64, 2) = ((MR_Box) (erl_backend__erl_code_gen__V_74_74));
#line 279 "erl_code_gen.m"
                                        MR_hl_field(MR_mktag(3), erl_backend__erl_code_gen__CompareXY_64, 3) = ((MR_Box) (erl_backend__erl_code_gen__V_75_75));
#line 279 "erl_code_gen.m"
                                      }
#line 280 "erl_code_gen.m"
                                      {
#line 280 "erl_code_gen.m"
                                        erl_backend__erl_code_gen__V_76_76 = erl_backend__elds__elds_true_0_f_0();
                                      }
#line 280 "erl_code_gen.m"
                                      {
#line 280 "erl_code_gen.m"
                                        erl_backend__erl_code_gen__V_78_78 = erl_backend__elds__elds_empty_tuple_0_f_0();
                                      }
#line 280 "erl_code_gen.m"
                                      {
#line 280 "erl_code_gen.m"
                                        erl_backend__erl_code_gen__V_77_77 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 280 "erl_code_gen.m"
                                        MR_hl_field(MR_mktag(2), erl_backend__erl_code_gen__V_77_77, 0) = ((MR_Box) (erl_backend__erl_code_gen__V_78_78));
#line 280 "erl_code_gen.m"
                                      }
#line 280 "erl_code_gen.m"
                                      {
#line 280 "erl_code_gen.m"
                                        erl_backend__erl_code_gen__TrueCase_65 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 280 "erl_code_gen.m"
                                        MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__TrueCase_65, 0) = ((MR_Box) (erl_backend__erl_code_gen__V_76_76));
#line 280 "erl_code_gen.m"
                                        MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__TrueCase_65, 1) = ((MR_Box) (erl_backend__erl_code_gen__V_77_77));
#line 280 "erl_code_gen.m"
                                      }
#line 281 "erl_code_gen.m"
                                      {
#line 281 "erl_code_gen.m"
                                        erl_backend__erl_code_gen__V_79_79 = erl_backend__elds__elds_false_0_f_0();
                                      }
#line 281 "erl_code_gen.m"
                                      {
#line 281 "erl_code_gen.m"
                                        erl_backend__erl_code_gen__V_81_81 = erl_backend__elds__elds_fail_0_f_0();
                                      }
#line 281 "erl_code_gen.m"
                                      {
#line 281 "erl_code_gen.m"
                                        erl_backend__erl_code_gen__V_80_80 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 281 "erl_code_gen.m"
                                        MR_hl_field(MR_mktag(2), erl_backend__erl_code_gen__V_80_80, 0) = ((MR_Box) (erl_backend__erl_code_gen__V_81_81));
#line 281 "erl_code_gen.m"
                                      }
#line 281 "erl_code_gen.m"
                                      {
#line 281 "erl_code_gen.m"
                                        erl_backend__erl_code_gen__FalseCase_66 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 281 "erl_code_gen.m"
                                        MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__FalseCase_66, 0) = ((MR_Box) (erl_backend__erl_code_gen__V_79_79));
#line 281 "erl_code_gen.m"
                                        MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__FalseCase_66, 1) = ((MR_Box) (erl_backend__erl_code_gen__V_80_80));
#line 281 "erl_code_gen.m"
                                      }
#line 278 "erl_code_gen.m"
                                      {
#line 278 "erl_code_gen.m"
                                        erl_backend__erl_code_gen__V_71_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 278 "erl_code_gen.m"
                                        MR_hl_field(MR_mktag(1), erl_backend__erl_code_gen__V_71_71, 0) = ((MR_Box) (erl_backend__erl_code_gen__FalseCase_66));
#line 278 "erl_code_gen.m"
                                        MR_hl_field(MR_mktag(1), erl_backend__erl_code_gen__V_71_71, 1) = ((MR_Box) (erl_backend__erl_code_gen__V_72_72));
#line 278 "erl_code_gen.m"
                                      }
#line 278 "erl_code_gen.m"
                                      {
#line 278 "erl_code_gen.m"
                                        erl_backend__erl_code_gen__V_70_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 278 "erl_code_gen.m"
                                        MR_hl_field(MR_mktag(1), erl_backend__erl_code_gen__V_70_70, 0) = ((MR_Box) (erl_backend__erl_code_gen__TrueCase_65));
#line 278 "erl_code_gen.m"
                                        MR_hl_field(MR_mktag(1), erl_backend__erl_code_gen__V_70_70, 1) = ((MR_Box) (erl_backend__erl_code_gen__V_71_71));
#line 278 "erl_code_gen.m"
                                      }
#line 278 "erl_code_gen.m"
                                      {
#line 278 "erl_code_gen.m"
                                        erl_backend__erl_code_gen__ClauseExpr_63 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 278 "erl_code_gen.m"
                                        MR_hl_field(MR_mktag(3), erl_backend__erl_code_gen__ClauseExpr_63, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 278 "erl_code_gen.m"
                                        MR_hl_field(MR_mktag(3), erl_backend__erl_code_gen__ClauseExpr_63, 1) = ((MR_Box) (erl_backend__erl_code_gen__CompareXY_64));
#line 278 "erl_code_gen.m"
                                        MR_hl_field(MR_mktag(3), erl_backend__erl_code_gen__ClauseExpr_63, 2) = ((MR_Box) (erl_backend__erl_code_gen__V_70_70));
#line 278 "erl_code_gen.m"
                                      }
#line 277 "erl_code_gen.m"
                                      {
#line 277 "erl_code_gen.m"
                                        erl_backend__erl_code_gen__Clause_62 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 277 "erl_code_gen.m"
                                        MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__Clause_62, 0) = ((MR_Box) (erl_backend__erl_code_gen__V_69_69));
#line 277 "erl_code_gen.m"
                                        MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__Clause_62, 1) = ((MR_Box) (erl_backend__erl_code_gen__ClauseExpr_63));
#line 277 "erl_code_gen.m"
                                      }
#line 283 "erl_code_gen.m"
                                      {
#line 283 "erl_code_gen.m"
                                        erl_backend__erl_code_util__erl_gen_info_get_varset_2_p_0(erl_backend__erl_code_gen__Info_60, &erl_backend__erl_code_gen__ProcVarSet_67);
                                      }
#line 284 "erl_code_gen.m"
                                      {
#line 284 "erl_code_gen.m"
                                        erl_backend__erl_code_util__erl_gen_info_get_env_vars_2_p_0(erl_backend__erl_code_gen__Info_60, &erl_backend__erl_code_gen__EnvVarNames_68);
                                      }
#line 285 "erl_code_gen.m"
                                      {
#line 285 "erl_code_gen.m"
                                        erl_backend__erl_code_gen__V_82_82 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 285 "erl_code_gen.m"
                                        MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__V_82_82, 0) = ((MR_Box) (erl_backend__erl_code_gen__PredId_9));
#line 285 "erl_code_gen.m"
                                        MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__V_82_82, 1) = ((MR_Box) (erl_backend__erl_code_gen__ProcId_10));
#line 285 "erl_code_gen.m"
                                      }
#line 286 "erl_code_gen.m"
                                      erl_backend__erl_code_gen__V_83_83 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) erl_backend__erl_code_gen__Clause_62);
#line 285 "erl_code_gen.m"
                                      {
#line 285 "erl_code_gen.m"
                                        erl_backend__erl_code_gen__ProcDefn_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 285 "erl_code_gen.m"
                                        MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__ProcDefn_24, 0) = ((MR_Box) (erl_backend__erl_code_gen__V_82_82));
#line 285 "erl_code_gen.m"
                                        MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__ProcDefn_24, 1) = ((MR_Box) (erl_backend__erl_code_gen__ProcVarSet_67));
#line 285 "erl_code_gen.m"
                                        MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__ProcDefn_24, 2) = ((MR_Box) (erl_backend__erl_code_gen__V_83_83));
#line 285 "erl_code_gen.m"
                                        MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__ProcDefn_24, 3) = ((MR_Box) (erl_backend__erl_code_gen__EnvVarNames_68));
#line 285 "erl_code_gen.m"
                                      }
#line 285 "erl_code_gen.m"
                                      erl_backend__erl_code_gen__succeeded = MR_TRUE;
#line 245 "erl_code_gen.m"
                                    }
#line 245 "erl_code_gen.m"
                                }
#line 247 "erl_code_gen.m"
                            }
#line 247 "erl_code_gen.m"
                        }
#line 245 "erl_code_gen.m"
                    }
#line 245 "erl_code_gen.m"
                }
#line 253 "erl_code_gen.m"
                break;
#line 253 "erl_code_gen.m"
            }
#line 238 "erl_code_gen.m"
            if (erl_backend__erl_code_gen__succeeded)
#line 238 "erl_code_gen.m"
              {
#line 261 "erl_code_gen.m"
                {
#line 261 "erl_code_gen.m"
                  MR_Word base;
#line 261 "erl_code_gen.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 261 "erl_code_gen.m"
                  *erl_backend__erl_code_gen__STATE_VARIABLE_Defns_28 = base;
#line 261 "erl_code_gen.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (erl_backend__erl_code_gen__ProcDefn_24));
#line 261 "erl_code_gen.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (erl_backend__erl_code_gen__STATE_VARIABLE_Defns_0_27));
#line 261 "erl_code_gen.m"
                }
#line 261 "erl_code_gen.m"
                erl_backend__erl_code_gen__succeeded = MR_TRUE;
#line 238 "erl_code_gen.m"
              }
#line 238 "erl_code_gen.m"
          }
#line 238 "erl_code_gen.m"
      }
#line 238 "erl_code_gen.m"
    return erl_backend__erl_code_gen__succeeded;
#line 238 "erl_code_gen.m"
  }
#line 233 "erl_code_gen.m"
}

#line 204 "erl_code_gen.m"
static void MR_CALL 
erl_backend__erl_code_gen__erl_gen_procs_7_p_0(
#line 204 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__HeadVar__1_1,
#line 204 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__ModuleInfo_2,
#line 204 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__PredId_3,
#line 204 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__PredInfo_4,
#line 204 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__ProcTable_5,
#line 204 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__STATE_VARIABLE_Defns_0_6,
#line 204 "erl_code_gen.m"
  MR_Word * erl_backend__erl_code_gen__STATE_VARIABLE_Defns_7)
#line 204 "erl_code_gen.m"
{
#line 208 "erl_code_gen.m"
  while (MR_TRUE)
#line 208 "erl_code_gen.m"
    {
#line 208 "erl_code_gen.m"
      /* tailcall optimized into a loop */
#line 208 "erl_code_gen.m"
      {
#line 208 "erl_code_gen.m"
        MR_bool erl_backend__erl_code_gen__succeeded;

#line 208 "erl_code_gen.m"
        if ((erl_backend__erl_code_gen__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 208 "erl_code_gen.m"
          *erl_backend__erl_code_gen__STATE_VARIABLE_Defns_7 = erl_backend__erl_code_gen__STATE_VARIABLE_Defns_0_6;
#line 208 "erl_code_gen.m"
        else
#line 210 "erl_code_gen.m"
          {
#line 210 "erl_code_gen.m"
            MR_Integer erl_backend__erl_code_gen__ProcId_15 = ((MR_Integer) (MR_hl_field(MR_mktag(1), erl_backend__erl_code_gen__HeadVar__1_1, (MR_Integer) 0)));
#line 210 "erl_code_gen.m"
            MR_Word erl_backend__erl_code_gen__ProcIds_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__erl_code_gen__HeadVar__1_1, (MR_Integer) 1)));
#line 210 "erl_code_gen.m"
            MR_Word erl_backend__erl_code_gen__ProcInfo_22;
#line 210 "erl_code_gen.m"
            MR_Word erl_backend__erl_code_gen__STATE_VARIABLE_Defns_26_26;
#line 211 "erl_code_gen.m"
            MR_Box erl_backend__erl_code_gen__conv0_ProcInfo_22;
#line 217 "erl_code_gen.m"
            MR_Word erl_backend__erl_code_gen__STATE_VARIABLE_Defns_25_25;

#line 211 "erl_code_gen.m"
            {
#line 211 "erl_code_gen.m"
              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0, erl_backend__erl_code_gen__ProcTable_5, erl_backend__erl_code_gen__ProcId_15, &erl_backend__erl_code_gen__conv0_ProcInfo_22);
            }
#line 211 "erl_code_gen.m"
            erl_backend__erl_code_gen__ProcInfo_22 = ((MR_Word) erl_backend__erl_code_gen__conv0_ProcInfo_22);
#line 213 "erl_code_gen.m"
            {
#line 213 "erl_code_gen.m"
              erl_backend__erl_code_gen__succeeded = erl_backend__erl_code_gen__erl_maybe_gen_simple_special_pred_7_p_0(erl_backend__erl_code_gen__ModuleInfo_2, erl_backend__erl_code_gen__PredId_3, erl_backend__erl_code_gen__ProcId_15, erl_backend__erl_code_gen__PredInfo_4, erl_backend__erl_code_gen__ProcInfo_22, erl_backend__erl_code_gen__STATE_VARIABLE_Defns_0_6, &erl_backend__erl_code_gen__STATE_VARIABLE_Defns_25_25);
            }
#line 217 "erl_code_gen.m"
            if (erl_backend__erl_code_gen__succeeded)
#line 217 "erl_code_gen.m"
              erl_backend__erl_code_gen__STATE_VARIABLE_Defns_26_26 = erl_backend__erl_code_gen__STATE_VARIABLE_Defns_25_25;
#line 217 "erl_code_gen.m"
            else
#line 218 "erl_code_gen.m"
              {
#line 218 "erl_code_gen.m"
                erl_backend__erl_code_gen__erl_gen_proc_7_p_0(erl_backend__erl_code_gen__ModuleInfo_2, erl_backend__erl_code_gen__PredId_3, erl_backend__erl_code_gen__ProcId_15, erl_backend__erl_code_gen__PredInfo_4, erl_backend__erl_code_gen__ProcInfo_22, erl_backend__erl_code_gen__STATE_VARIABLE_Defns_0_6, &erl_backend__erl_code_gen__STATE_VARIABLE_Defns_26_26);
              }
#line 220 "erl_code_gen.m"
            /* direct tailcall eliminated */
#line 220 "erl_code_gen.m"
            {
#line 220 "erl_code_gen.m"
              MR_Word erl_backend__erl_code_gen__HeadVar__1__tmp_copy_1 = erl_backend__erl_code_gen__ProcIds_16;
#line 220 "erl_code_gen.m"
              MR_Word erl_backend__erl_code_gen__STATE_VARIABLE_Defns_0__tmp_copy_6 = erl_backend__erl_code_gen__STATE_VARIABLE_Defns_26_26;

#line 220 "erl_code_gen.m"
              erl_backend__erl_code_gen__STATE_VARIABLE_Defns_0_6 = erl_backend__erl_code_gen__STATE_VARIABLE_Defns_0__tmp_copy_6;
#line 220 "erl_code_gen.m"
              erl_backend__erl_code_gen__HeadVar__1_1 = erl_backend__erl_code_gen__HeadVar__1__tmp_copy_1;
#line 220 "erl_code_gen.m"
            }
#line 220 "erl_code_gen.m"
            continue;
#line 210 "erl_code_gen.m"
          }
#line 208 "erl_code_gen.m"
      }
#line 208 "erl_code_gen.m"
      break;
#line 208 "erl_code_gen.m"
    }
#line 204 "erl_code_gen.m"
}

#line 150 "erl_code_gen.m"
static void MR_CALL 
erl_backend__erl_code_gen__erl_gen_preds_2_7_p_0(
#line 150 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__ModuleInfo_8,
#line 150 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__PredIds0_9,
#line 150 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__PredTable_10,
#line 150 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__STATE_VARIABLE_Defns_0_20,
#line 150 "erl_code_gen.m"
  MR_Word * erl_backend__erl_code_gen__STATE_VARIABLE_Defns_21)
#line 150 "erl_code_gen.m"
{
#line 155 "erl_code_gen.m"
  while (MR_TRUE)
#line 155 "erl_code_gen.m"
    {
#line 155 "erl_code_gen.m"
      /* tailcall optimized into a loop */
#line 155 "erl_code_gen.m"
      {
#line 155 "erl_code_gen.m"
        MR_bool erl_backend__erl_code_gen__succeeded;

#line 155 "erl_code_gen.m"
        if ((erl_backend__erl_code_gen__PredIds0_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 183 "erl_code_gen.m"
          *erl_backend__erl_code_gen__STATE_VARIABLE_Defns_21 = erl_backend__erl_code_gen__STATE_VARIABLE_Defns_0_20;
#line 155 "erl_code_gen.m"
        else
#line 155 "erl_code_gen.m"
          {
#line 155 "erl_code_gen.m"
            MR_Word erl_backend__erl_code_gen__PredId_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__erl_code_gen__PredIds0_9, (MR_Integer) 0)));
#line 155 "erl_code_gen.m"
            MR_Word erl_backend__erl_code_gen__PredIds_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__erl_code_gen__PredIds0_9, (MR_Integer) 1)));
#line 155 "erl_code_gen.m"
            MR_Word erl_backend__erl_code_gen__PredInfo_15;
#line 155 "erl_code_gen.m"
            MR_Word erl_backend__erl_code_gen__PredStatus_16;
#line 155 "erl_code_gen.m"
            MR_Word erl_backend__erl_code_gen__STATE_VARIABLE_Defns_28_28;
#line 156 "erl_code_gen.m"
            MR_Box erl_backend__erl_code_gen__conv0_PredInfo_15;

#line 156 "erl_code_gen.m"
            {
#line 156 "erl_code_gen.m"
              mercury__map__lookup_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0, erl_backend__erl_code_gen__PredTable_10, ((MR_Box) (erl_backend__erl_code_gen__PredId_13)), &erl_backend__erl_code_gen__conv0_PredInfo_15);
            }
#line 156 "erl_code_gen.m"
            erl_backend__erl_code_gen__PredInfo_15 = ((MR_Word) erl_backend__erl_code_gen__conv0_PredInfo_15);
#line 157 "erl_code_gen.m"
            {
#line 157 "erl_code_gen.m"
              hlds__hlds_pred__pred_info_get_status_2_p_0(erl_backend__erl_code_gen__PredInfo_15, &erl_backend__erl_code_gen__PredStatus_16);
            }
#line 160 "erl_code_gen.m"
            {
#line 160 "erl_code_gen.m"
              MR_Word erl_backend__erl_code_gen__V_26_26 = (MR_Word) erl_backend__erl_code_gen__PredStatus_16;
#line 160 "erl_code_gen.m"
              MR_Word erl_backend__erl_code_gen__V_17_17;

#line 160 "erl_code_gen.m"
              erl_backend__erl_code_gen__succeeded = ((MR_tag((MR_Word) erl_backend__erl_code_gen__V_26_26)) == (MR_mktag((MR_Integer) 2)));
#line 160 "erl_code_gen.m"
              if (erl_backend__erl_code_gen__succeeded)
#line 160 "erl_code_gen.m"
                erl_backend__erl_code_gen__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(2), erl_backend__erl_code_gen__V_26_26, (MR_Integer) 0)));
#line 160 "erl_code_gen.m"
            }
#line 161 "erl_code_gen.m"
            if (!(erl_backend__erl_code_gen__succeeded))
#line 165 "erl_code_gen.m"
              {
#line 165 "erl_code_gen.m"
                MR_Word erl_backend__erl_code_gen__V_24_24;
#line 165 "erl_code_gen.m"
                MR_Word erl_backend__erl_code_gen__V_25_25;

#line 165 "erl_code_gen.m"
                {
#line 165 "erl_code_gen.m"
                  erl_backend__erl_code_gen__succeeded = hlds__hlds_pred__is_unify_or_compare_pred_1_p_0(erl_backend__erl_code_gen__PredInfo_15);
                }
#line 165 "erl_code_gen.m"
                if (erl_backend__erl_code_gen__succeeded)
#line 165 "erl_code_gen.m"
                  {
#line 167 "erl_code_gen.m"
                    erl_backend__erl_code_gen__V_24_24 = (MR_Word) erl_backend__erl_code_gen__PredStatus_16;
#line 167 "erl_code_gen.m"
                    erl_backend__erl_code_gen__succeeded = ((MR_tag((MR_Word) erl_backend__erl_code_gen__V_24_24)) == (MR_mktag((MR_Integer) 1)));
#line 167 "erl_code_gen.m"
                    if (erl_backend__erl_code_gen__succeeded)
#line 167 "erl_code_gen.m"
                      {
#line 167 "erl_code_gen.m"
                        erl_backend__erl_code_gen__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__erl_code_gen__V_24_24, (MR_Integer) 0)));
#line 167 "erl_code_gen.m"
                        erl_backend__erl_code_gen__succeeded = (erl_backend__erl_code_gen__V_25_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 167 "erl_code_gen.m"
                      }
#line 165 "erl_code_gen.m"
                  }
#line 165 "erl_code_gen.m"
              }
#line 171 "erl_code_gen.m"
            if (erl_backend__erl_code_gen__succeeded)
#line 170 "erl_code_gen.m"
              erl_backend__erl_code_gen__STATE_VARIABLE_Defns_28_28 = erl_backend__erl_code_gen__STATE_VARIABLE_Defns_0_20;
#line 171 "erl_code_gen.m"
            else
#line 178 "erl_code_gen.m"
              {
#line 178 "erl_code_gen.m"
                MR_Word erl_backend__erl_code_gen__ProcIds_19;
#line 174 "erl_code_gen.m"
                MR_Word erl_backend__erl_code_gen__V_27_27 = (MR_Word) erl_backend__erl_code_gen__PredStatus_16;
#line 174 "erl_code_gen.m"
                MR_Word erl_backend__erl_code_gen__V_18_18;

#line 174 "erl_code_gen.m"
                erl_backend__erl_code_gen__succeeded = ((MR_tag((MR_Word) erl_backend__erl_code_gen__V_27_27)) == (MR_mktag((MR_Integer) 1)));
#line 174 "erl_code_gen.m"
                if (erl_backend__erl_code_gen__succeeded)
#line 174 "erl_code_gen.m"
                  {
#line 174 "erl_code_gen.m"
                    erl_backend__erl_code_gen__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__erl_code_gen__V_27_27, (MR_Integer) 0)));
#line 175 "erl_code_gen.m"
                    {
#line 175 "erl_code_gen.m"
                      erl_backend__erl_code_gen__ProcIds_19 = hlds__hlds_pred__pred_info_procids_1_f_0(erl_backend__erl_code_gen__PredInfo_15);
                    }
#line 174 "erl_code_gen.m"
                  }
#line 174 "erl_code_gen.m"
                else
#line 177 "erl_code_gen.m"
                  {
#line 177 "erl_code_gen.m"
                    erl_backend__erl_code_gen__ProcIds_19 = hlds__hlds_pred__pred_info_non_imported_procids_1_f_0(erl_backend__erl_code_gen__PredInfo_15);
                  }
#line 195 "erl_code_gen.m"
                if ((erl_backend__erl_code_gen__ProcIds_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 195 "erl_code_gen.m"
                  erl_backend__erl_code_gen__STATE_VARIABLE_Defns_28_28 = erl_backend__erl_code_gen__STATE_VARIABLE_Defns_0_20;
#line 195 "erl_code_gen.m"
                else
#line 197 "erl_code_gen.m"
                  {
#line 197 "erl_code_gen.m"
                    MR_Word erl_backend__erl_code_gen__ProcTable_46;
#line 197 "erl_code_gen.m"
                    MR_Integer erl_backend__erl_code_gen__ProcId_57;
#line 197 "erl_code_gen.m"
                    MR_Word erl_backend__erl_code_gen__ProcIds_58;
#line 197 "erl_code_gen.m"
                    MR_Word erl_backend__erl_code_gen__ProcInfo_64;
#line 197 "erl_code_gen.m"
                    MR_Word erl_backend__erl_code_gen__STATE_VARIABLE_Defns_26_68;
#line 211 "erl_code_gen.m"
                    MR_Box erl_backend__erl_code_gen__conv1_ProcInfo_64;
#line 217 "erl_code_gen.m"
                    MR_Word erl_backend__erl_code_gen__STATE_VARIABLE_Defns_25_67;

#line 198 "erl_code_gen.m"
                    {
#line 198 "erl_code_gen.m"
                      hlds__passes_aux__write_pred_progress_message_5_p_0((MR_String) "% Generating ELDS code for ", erl_backend__erl_code_gen__PredId_13, erl_backend__erl_code_gen__ModuleInfo_8);
                    }
#line 200 "erl_code_gen.m"
                    {
#line 200 "erl_code_gen.m"
                      hlds__hlds_pred__pred_info_get_proc_table_2_p_0(erl_backend__erl_code_gen__PredInfo_15, &erl_backend__erl_code_gen__ProcTable_46);
                    }
#line 209 "erl_code_gen.m"
                    erl_backend__erl_code_gen__ProcId_57 = ((MR_Integer) (MR_hl_field(MR_mktag(1), erl_backend__erl_code_gen__ProcIds_19, (MR_Integer) 0)));
#line 209 "erl_code_gen.m"
                    erl_backend__erl_code_gen__ProcIds_58 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__erl_code_gen__ProcIds_19, (MR_Integer) 1)));
#line 211 "erl_code_gen.m"
                    {
#line 211 "erl_code_gen.m"
                      mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0, erl_backend__erl_code_gen__ProcTable_46, erl_backend__erl_code_gen__ProcId_57, &erl_backend__erl_code_gen__conv1_ProcInfo_64);
                    }
#line 211 "erl_code_gen.m"
                    erl_backend__erl_code_gen__ProcInfo_64 = ((MR_Word) erl_backend__erl_code_gen__conv1_ProcInfo_64);
#line 213 "erl_code_gen.m"
                    {
#line 213 "erl_code_gen.m"
                      erl_backend__erl_code_gen__succeeded = erl_backend__erl_code_gen__erl_maybe_gen_simple_special_pred_7_p_0(erl_backend__erl_code_gen__ModuleInfo_8, erl_backend__erl_code_gen__PredId_13, erl_backend__erl_code_gen__ProcId_57, erl_backend__erl_code_gen__PredInfo_15, erl_backend__erl_code_gen__ProcInfo_64, erl_backend__erl_code_gen__STATE_VARIABLE_Defns_0_20, &erl_backend__erl_code_gen__STATE_VARIABLE_Defns_25_67);
                    }
#line 217 "erl_code_gen.m"
                    if (erl_backend__erl_code_gen__succeeded)
#line 217 "erl_code_gen.m"
                      erl_backend__erl_code_gen__STATE_VARIABLE_Defns_26_68 = erl_backend__erl_code_gen__STATE_VARIABLE_Defns_25_67;
#line 217 "erl_code_gen.m"
                    else
#line 218 "erl_code_gen.m"
                      {
#line 218 "erl_code_gen.m"
                        erl_backend__erl_code_gen__erl_gen_proc_7_p_0(erl_backend__erl_code_gen__ModuleInfo_8, erl_backend__erl_code_gen__PredId_13, erl_backend__erl_code_gen__ProcId_57, erl_backend__erl_code_gen__PredInfo_15, erl_backend__erl_code_gen__ProcInfo_64, erl_backend__erl_code_gen__STATE_VARIABLE_Defns_0_20, &erl_backend__erl_code_gen__STATE_VARIABLE_Defns_26_68);
                      }
#line 220 "erl_code_gen.m"
                    {
#line 220 "erl_code_gen.m"
                      erl_backend__erl_code_gen__erl_gen_procs_7_p_0(erl_backend__erl_code_gen__ProcIds_58, erl_backend__erl_code_gen__ModuleInfo_8, erl_backend__erl_code_gen__PredId_13, erl_backend__erl_code_gen__PredInfo_15, erl_backend__erl_code_gen__ProcTable_46, erl_backend__erl_code_gen__STATE_VARIABLE_Defns_26_68, &erl_backend__erl_code_gen__STATE_VARIABLE_Defns_28_28);
                    }
#line 197 "erl_code_gen.m"
                  }
#line 178 "erl_code_gen.m"
              }
#line 181 "erl_code_gen.m"
            /* direct tailcall eliminated */
#line 181 "erl_code_gen.m"
            {
#line 181 "erl_code_gen.m"
              MR_Word erl_backend__erl_code_gen__PredIds0__tmp_copy_9 = erl_backend__erl_code_gen__PredIds_14;
#line 181 "erl_code_gen.m"
              MR_Word erl_backend__erl_code_gen__STATE_VARIABLE_Defns_0__tmp_copy_20 = erl_backend__erl_code_gen__STATE_VARIABLE_Defns_28_28;

#line 181 "erl_code_gen.m"
              erl_backend__erl_code_gen__STATE_VARIABLE_Defns_0_20 = erl_backend__erl_code_gen__STATE_VARIABLE_Defns_0__tmp_copy_20;
#line 181 "erl_code_gen.m"
              erl_backend__erl_code_gen__PredIds0_9 = erl_backend__erl_code_gen__PredIds0__tmp_copy_9;
#line 181 "erl_code_gen.m"
            }
#line 181 "erl_code_gen.m"
            continue;
#line 155 "erl_code_gen.m"
          }
#line 155 "erl_code_gen.m"
      }
#line 155 "erl_code_gen.m"
      break;
#line 155 "erl_code_gen.m"
    }
#line 150 "erl_code_gen.m"
}

#line 1581 "erl_code_gen.m"
static void MR_CALL 
erl_backend__erl_code_gen__erl_code_gen_4_p_0_1(
#line 1581 "erl_code_gen.m"
  MR_Box erl_backend__erl_code_gen__closure_arg,
#line 1581 "erl_code_gen.m"
  MR_Box erl_backend__erl_code_gen__wrapper_arg_1,
#line 1581 "erl_code_gen.m"
  MR_Box * erl_backend__erl_code_gen__wrapper_arg_2)
#line 1581 "erl_code_gen.m"
{
#line 1581 "erl_code_gen.m"
  {
#line 1581 "erl_code_gen.m"
    MR_Box erl_backend__erl_code_gen__closure = erl_backend__erl_code_gen__closure_arg;
#line 1581 "erl_code_gen.m"
    MR_Word erl_backend__erl_code_gen__conv0_ForeignExportDefn_6;

#line 1581 "erl_code_gen.m"
    {
#line 1581 "erl_code_gen.m"
      erl_backend__erl_code_gen__erl_gen_foreign_export_defn_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__closure, (MR_Integer) 3))), ((MR_Word) erl_backend__erl_code_gen__wrapper_arg_1), &erl_backend__erl_code_gen__conv0_ForeignExportDefn_6);
    }
#line 1581 "erl_code_gen.m"
    *erl_backend__erl_code_gen__wrapper_arg_2 = ((MR_Box) (erl_backend__erl_code_gen__conv0_ForeignExportDefn_6));
#line 1581 "erl_code_gen.m"
  }
#line 1581 "erl_code_gen.m"
}

#line 44 "erl_code_gen.m"
void MR_CALL 
erl_backend__erl_code_gen__erl_code_gen_4_p_0(
#line 44 "erl_code_gen.m"
  MR_Word erl_backend__erl_code_gen__ModuleInfo_5,
#line 44 "erl_code_gen.m"
  MR_Word * erl_backend__erl_code_gen__ELDS_6)
#line 44 "erl_code_gen.m"
{
#line 94 "erl_code_gen.m"
  {
#line 94 "erl_code_gen.m"
    MR_bool erl_backend__erl_code_gen__succeeded;
#line 94 "erl_code_gen.m"
    MR_Word erl_backend__erl_code_gen__ModuleName_8;
#line 94 "erl_code_gen.m"
    MR_Word erl_backend__erl_code_gen__ProcDefns_9;
#line 94 "erl_code_gen.m"
    MR_Word erl_backend__erl_code_gen__Imports_10;
#line 94 "erl_code_gen.m"
    MR_Word erl_backend__erl_code_gen__ForeignDecls_11;
#line 94 "erl_code_gen.m"
    MR_Word erl_backend__erl_code_gen__ForeignBodies_12;
#line 94 "erl_code_gen.m"
    MR_Word erl_backend__erl_code_gen__PragmaExports_13;
#line 94 "erl_code_gen.m"
    MR_Word erl_backend__erl_code_gen__ForeignExportDefns_14;
#line 94 "erl_code_gen.m"
    MR_Word erl_backend__erl_code_gen__InitPredProcs_16;
#line 94 "erl_code_gen.m"
    MR_Word erl_backend__erl_code_gen__FinalPredProcs_17;
#line 94 "erl_code_gen.m"
    MR_Word erl_backend__erl_code_gen__PredTable_27;
#line 94 "erl_code_gen.m"
    MR_Word erl_backend__erl_code_gen__PredIds_28;
#line 94 "erl_code_gen.m"
    MR_Word erl_backend__erl_code_gen__RevPredDefns_29;
#line 94 "erl_code_gen.m"
    MR_Word erl_backend__erl_code_gen__AllImports0_37;
#line 94 "erl_code_gen.m"
    MR_Word erl_backend__erl_code_gen__ThisModule_38;
#line 94 "erl_code_gen.m"
    MR_Word erl_backend__erl_code_gen__Globals_47;
#line 94 "erl_code_gen.m"
    MR_Word erl_backend__erl_code_gen__BackendForeignLanguages_48;
#line 94 "erl_code_gen.m"
    MR_Word erl_backend__erl_code_gen__ForeignDeclCodeCord_49;
#line 94 "erl_code_gen.m"
    MR_Word erl_backend__erl_code_gen__ForeignBodyCodeCord_50;
#line 94 "erl_code_gen.m"
    MR_Word erl_backend__erl_code_gen__PragmaExportsCord_51;
#line 94 "erl_code_gen.m"
    MR_Word erl_backend__erl_code_gen__V_61_61;
#line 94 "erl_code_gen.m"
    MR_Word erl_backend__erl_code_gen__V_63_63;
#line 94 "erl_code_gen.m"
    MR_Word erl_backend__erl_code_gen__V_65_65;
#line 94 "erl_code_gen.m"
    MR_Word erl_backend__erl_code_gen__V_72_72;
#line 124 "erl_code_gen.m"
    MR_Word erl_backend__erl_code_gen__V_55_55;
#line 124 "erl_code_gen.m"
    MR_Word erl_backend__erl_code_gen__V_56_56;
#line 132 "erl_code_gen.m"
    MR_Word erl_backend__erl_code_gen___OtherForeignDeclCodes_52;
#line 134 "erl_code_gen.m"
    MR_Word erl_backend__erl_code_gen___OtherForeignBodyCodes_53;
#line 136 "erl_code_gen.m"
    MR_Word erl_backend__erl_code_gen___OtherForeignExports_54;

#line 95 "erl_code_gen.m"
    {
#line 95 "erl_code_gen.m"
      hlds__hlds_module__module_info_get_name_2_p_0(erl_backend__erl_code_gen__ModuleInfo_5, &erl_backend__erl_code_gen__ModuleName_8);
    }
#line 145 "erl_code_gen.m"
    {
#line 145 "erl_code_gen.m"
      hlds__hlds_module__module_info_get_preds_2_p_0(erl_backend__erl_code_gen__ModuleInfo_5, &erl_backend__erl_code_gen__PredTable_27);
    }
#line 146 "erl_code_gen.m"
    {
#line 146 "erl_code_gen.m"
      mercury__map__keys_2_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0, erl_backend__erl_code_gen__PredTable_27, &erl_backend__erl_code_gen__PredIds_28);
    }
#line 147 "erl_code_gen.m"
    {
#line 147 "erl_code_gen.m"
      erl_backend__erl_code_gen__erl_gen_preds_2_7_p_0(erl_backend__erl_code_gen__ModuleInfo_5, erl_backend__erl_code_gen__PredIds_28, erl_backend__erl_code_gen__PredTable_27, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &erl_backend__erl_code_gen__RevPredDefns_29);
    }
#line 148 "erl_code_gen.m"
    {
#line 148 "erl_code_gen.m"
      erl_backend__erl_code_gen__ProcDefns_9 = mercury__list__reverse_1_f_0((MR_Word) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_defn_0, erl_backend__erl_code_gen__RevPredDefns_29);
    }
#line 111 "erl_code_gen.m"
    {
#line 111 "erl_code_gen.m"
      hlds__hlds_module__module_info_get_all_deps_2_p_0(erl_backend__erl_code_gen__ModuleInfo_5, &erl_backend__erl_code_gen__AllImports0_37);
    }
#line 113 "erl_code_gen.m"
    {
#line 113 "erl_code_gen.m"
      hlds__hlds_module__module_info_get_name_2_p_0(erl_backend__erl_code_gen__ModuleInfo_5, &erl_backend__erl_code_gen__ThisModule_38);
    }
#line 114 "erl_code_gen.m"
    {
#line 114 "erl_code_gen.m"
      erl_backend__erl_code_gen__Imports_10 = mercury__set__delete_2_f_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, erl_backend__erl_code_gen__AllImports0_37, ((MR_Box) (erl_backend__erl_code_gen__ThisModule_38)));
    }
#line 122 "erl_code_gen.m"
    {
#line 122 "erl_code_gen.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(erl_backend__erl_code_gen__ModuleInfo_5, &erl_backend__erl_code_gen__Globals_47);
    }
#line 123 "erl_code_gen.m"
    {
#line 123 "erl_code_gen.m"
      libs__globals__get_backend_foreign_languages_2_p_0(erl_backend__erl_code_gen__Globals_47, &erl_backend__erl_code_gen__BackendForeignLanguages_48);
    }
#line 124 "erl_code_gen.m"
    erl_backend__erl_code_gen__succeeded = ((MR_tag((MR_Word) erl_backend__erl_code_gen__BackendForeignLanguages_48)) == (MR_mktag((MR_Integer) 1)));
#line 124 "erl_code_gen.m"
    if (erl_backend__erl_code_gen__succeeded)
#line 124 "erl_code_gen.m"
      {
#line 124 "erl_code_gen.m"
        erl_backend__erl_code_gen__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__erl_code_gen__BackendForeignLanguages_48, (MR_Integer) 0)));
#line 124 "erl_code_gen.m"
        erl_backend__erl_code_gen__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__erl_code_gen__BackendForeignLanguages_48, (MR_Integer) 1)));
#line 124 "erl_code_gen.m"
        erl_backend__erl_code_gen__succeeded = (erl_backend__erl_code_gen__V_55_55 == (MR_Integer) 3);
#line 124 "erl_code_gen.m"
        if (erl_backend__erl_code_gen__succeeded)
#line 124 "erl_code_gen.m"
          erl_backend__erl_code_gen__succeeded = (erl_backend__erl_code_gen__V_56_56 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 124 "erl_code_gen.m"
      }
#line 126 "erl_code_gen.m"
    if (erl_backend__erl_code_gen__succeeded)
#line 125 "erl_code_gen.m"
      {
#line 125 "erl_code_gen.m"
      }
#line 126 "erl_code_gen.m"
    else
#line 127 "erl_code_gen.m"
      {
#line 127 "erl_code_gen.m"
        {
#line 127 "erl_code_gen.m"
          mercury__require__unexpected_3_p_0((MR_String) "erl_backend.erl_code_gen", (MR_String) "predicate \140erl_backend.erl_code_gen.filter_erlang_foreigns\'/6", (MR_String) "foreign language other than Erlang");
#line 127 "erl_code_gen.m"
          return;
        }
#line 127 "erl_code_gen.m"
      }
#line 129 "erl_code_gen.m"
    {
#line 129 "erl_code_gen.m"
      hlds__hlds_module__module_info_get_foreign_decl_codes_2_p_0(erl_backend__erl_code_gen__ModuleInfo_5, &erl_backend__erl_code_gen__ForeignDeclCodeCord_49);
    }
#line 130 "erl_code_gen.m"
    {
#line 130 "erl_code_gen.m"
      hlds__hlds_module__module_info_get_foreign_body_codes_2_p_0(erl_backend__erl_code_gen__ModuleInfo_5, &erl_backend__erl_code_gen__ForeignBodyCodeCord_50);
    }
#line 131 "erl_code_gen.m"
    {
#line 131 "erl_code_gen.m"
      hlds__hlds_module__module_info_get_pragma_exported_procs_2_p_0(erl_backend__erl_code_gen__ModuleInfo_5, &erl_backend__erl_code_gen__PragmaExportsCord_51);
    }
#line 132 "erl_code_gen.m"
    {
#line 132 "erl_code_gen.m"
      erl_backend__erl_code_gen__V_61_61 = mercury__cord__list_1_f_0((MR_Word) &parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_foreign_decl_code_0, erl_backend__erl_code_gen__ForeignDeclCodeCord_49);
    }
#line 132 "erl_code_gen.m"
    {
#line 132 "erl_code_gen.m"
      backend_libs__foreign__filter_decls_4_p_0((MR_Integer) 3, erl_backend__erl_code_gen__V_61_61, &erl_backend__erl_code_gen__ForeignDecls_11, &erl_backend__erl_code_gen___OtherForeignDeclCodes_52);
    }
#line 134 "erl_code_gen.m"
    {
#line 134 "erl_code_gen.m"
      erl_backend__erl_code_gen__V_63_63 = mercury__cord__list_1_f_0((MR_Word) &parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_foreign_body_code_0, erl_backend__erl_code_gen__ForeignBodyCodeCord_50);
    }
#line 134 "erl_code_gen.m"
    {
#line 134 "erl_code_gen.m"
      backend_libs__foreign__filter_bodys_4_p_0((MR_Integer) 3, erl_backend__erl_code_gen__V_63_63, &erl_backend__erl_code_gen__ForeignBodies_12, &erl_backend__erl_code_gen___OtherForeignBodyCodes_53);
    }
#line 136 "erl_code_gen.m"
    {
#line 136 "erl_code_gen.m"
      erl_backend__erl_code_gen__V_65_65 = mercury__cord__list_1_f_0((MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_pragma_exported_proc_0, erl_backend__erl_code_gen__PragmaExportsCord_51);
    }
#line 136 "erl_code_gen.m"
    {
#line 136 "erl_code_gen.m"
      backend_libs__foreign__filter_exports_4_p_0((MR_Integer) 3, erl_backend__erl_code_gen__V_65_65, &erl_backend__erl_code_gen__PragmaExports_13, &erl_backend__erl_code_gen___OtherForeignExports_54);
    }
#line 1581 "erl_code_gen.m"
    {
#line 1581 "erl_code_gen.m"
      erl_backend__erl_code_gen__V_72_72 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1581 "erl_code_gen.m"
      MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__V_72_72, 0) = ((MR_Box) (&erl_backend__erl_code_gen_scalar_common_2[0]));
#line 1581 "erl_code_gen.m"
      MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__V_72_72, 1) = ((MR_Box) (erl_backend__erl_code_gen__erl_code_gen_4_p_0_1));
#line 1581 "erl_code_gen.m"
      MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__V_72_72, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1581 "erl_code_gen.m"
      MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__V_72_72, 3) = ((MR_Box) (erl_backend__erl_code_gen__ProcDefns_9));
#line 1581 "erl_code_gen.m"
    }
#line 1581 "erl_code_gen.m"
    {
#line 1581 "erl_code_gen.m"
      mercury__list__map_3_p_0((MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_pragma_exported_proc_0, (MR_Word) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_foreign_export_defn_0, erl_backend__erl_code_gen__V_72_72, erl_backend__erl_code_gen__PragmaExports_13, &erl_backend__erl_code_gen__ForeignExportDefns_14);
    }
#line 103 "erl_code_gen.m"
    {
#line 103 "erl_code_gen.m"
      hlds__hlds_module__module_info_user_init_pred_procs_2_p_0(erl_backend__erl_code_gen__ModuleInfo_5, &erl_backend__erl_code_gen__InitPredProcs_16);
    }
#line 104 "erl_code_gen.m"
    {
#line 104 "erl_code_gen.m"
      hlds__hlds_module__module_info_user_final_pred_procs_2_p_0(erl_backend__erl_code_gen__ModuleInfo_5, &erl_backend__erl_code_gen__FinalPredProcs_17);
    }
#line 105 "erl_code_gen.m"
    {
#line 105 "erl_code_gen.m"
      MR_Word base;
#line 105 "erl_code_gen.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
#line 105 "erl_code_gen.m"
      *erl_backend__erl_code_gen__ELDS_6 = base;
#line 105 "erl_code_gen.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (erl_backend__erl_code_gen__ModuleName_8));
#line 105 "erl_code_gen.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (erl_backend__erl_code_gen__Imports_10));
#line 105 "erl_code_gen.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (erl_backend__erl_code_gen__ForeignDecls_11));
#line 105 "erl_code_gen.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (erl_backend__erl_code_gen__ForeignBodies_12));
#line 105 "erl_code_gen.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (erl_backend__erl_code_gen__ProcDefns_9));
#line 105 "erl_code_gen.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (erl_backend__erl_code_gen__ForeignExportDefns_14));
#line 105 "erl_code_gen.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 105 "erl_code_gen.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (erl_backend__erl_code_gen__InitPredProcs_16));
#line 105 "erl_code_gen.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (erl_backend__erl_code_gen__FinalPredProcs_17));
#line 105 "erl_code_gen.m"
    }
#line 94 "erl_code_gen.m"
  }
#line 44 "erl_code_gen.m"
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
