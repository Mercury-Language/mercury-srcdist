/*
** Automatically generated from `erl_code_gen.m'
** by the Mercury compiler,
** version DEV
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
#include "libs.compiler_util.mih"
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
#include "parse_tree.prog_data_event.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_data_used_modules.mih"
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



struct erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_95_49_48_95_112_95_48_95_101_110_118_0_s {
  MR_Word erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__CasesList_13;
  MR_bool erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__succeeded;
  MR_Word erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__TypeCtorInfo_85_85;
  jmp_buf erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__commit_0;
  MR_String erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__String_32;
  MR_Word erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__MainConsId_33;
  MR_Word erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__OtherConsIds_34;
  MR_Word erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__V_57_57;
  MR_Box erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__conv1_V_57_57;
  MR_Word erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__V_58_58;
  MR_Box erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__conv2_V_58_58;
};


static const MR_FA_PseudoTypeInfo_Struct1 erl_backend__erl_code_gen__list__pti_list_1__plain_erl_backend__elds__type_ctor_info_elds_defn_0;

static const MR_FA_PseudoTypeInfo_Struct1 erl_backend__erl_code_gen__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_cons_id_0;

static const MR_FA_TypeInfo_Struct1 erl_backend__erl_code_gen__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 erl_backend__erl_code_gen__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 erl_backend__erl_code_gen__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 erl_backend__erl_code_gen__maybe__pti_maybe_1__plain_erl_backend__elds__type_ctor_info_elds_expr_0;

static void MR_CALL 
erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_100_105_115_106_117_110_99_116_95_95_91_52_93_95_48_8_p_0(
  MR_Word erl_backend__erl_code_gen__HeadVar__1_1,
  MR_Word erl_backend__erl_code_gen__CodeModel_2,
  MR_Word erl_backend__erl_code_gen__HeadVar__3_3,
  MR_Word erl_backend__erl_code_gen__HeadVar__5_5,
  MR_Word * erl_backend__erl_code_gen__Statement_6,
  MR_Word erl_backend__erl_code_gen__STATE_VARIABLE_Info_0_7,
  MR_Word * erl_backend__erl_code_gen__STATE_VARIABLE_Info_8);

static void MR_CALL 
erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_100_105_115_106_95_95_91_52_93_95_48_8_p_0_1(
  MR_Box erl_backend__erl_code_gen__closure_arg,
  MR_Box erl_backend__erl_code_gen__wrapper_arg_1,
  MR_Box * erl_backend__erl_code_gen__wrapper_arg_2);

static void MR_CALL 
erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_100_105_115_106_95_95_91_52_93_95_48_8_p_0(
  MR_Word erl_backend__erl_code_gen__HeadVar__1_1,
  MR_Word erl_backend__erl_code_gen__CodeModel_2,
  MR_Word erl_backend__erl_code_gen__HeadVar__3_3,
  MR_Word erl_backend__erl_code_gen__HeadVar__5_5,
  MR_Word * erl_backend__erl_code_gen__Statement_6,
  MR_Word erl_backend__erl_code_gen__STATE_VARIABLE_Info_0_7,
  MR_Word * erl_backend__erl_code_gen__STATE_VARIABLE_Info_8);

static void MR_CALL 
erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_99_111_110_106_95_50_95_95_91_52_93_95_48_8_p_0(
  MR_Word erl_backend__erl_code_gen__HeadVar__1_1,
  MR_Word erl_backend__erl_code_gen__CodeModel_2,
  MR_Word erl_backend__erl_code_gen__HeadVar__3_3,
  MR_Word erl_backend__erl_code_gen__MaybeSuccessExpr_5,
  MR_Word * erl_backend__erl_code_gen__Statement_6,
  MR_Word erl_backend__erl_code_gen__STATE_VARIABLE_Info_0_7,
  MR_Word * erl_backend__erl_code_gen__STATE_VARIABLE_Info_8);

static void MR_CALL 
erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_99_111_110_106_95_95_91_53_93_95_48_9_p_0(
  MR_Word erl_backend__erl_code_gen__Goals_10,
  MR_Word erl_backend__erl_code_gen__CodeModel_11,
  MR_Word erl_backend__erl_code_gen__Detism_12,
  MR_Word erl_backend__erl_code_gen__InstMap_13,
  MR_Word erl_backend__erl_code_gen__MaybeSuccessExpr_15,
  MR_Word * erl_backend__erl_code_gen__Statement_16,
  MR_Word erl_backend__erl_code_gen__STATE_VARIABLE_Info_0_21,
  MR_Word * erl_backend__erl_code_gen__STATE_VARIABLE_Info_22);

static void MR_CALL 
erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_110_101_103_97_116_105_111_110_95_95_91_52_93_95_48_8_p_0(
  MR_Word erl_backend__erl_code_gen__Cond_9,
  MR_Word erl_backend__erl_code_gen__CodeModel_10,
  MR_Word erl_backend__erl_code_gen__InstMap_11,
  MR_Word erl_backend__erl_code_gen__MaybeSuccessExpr_13,
  MR_Word * erl_backend__erl_code_gen__Statement_14,
  MR_Word erl_backend__erl_code_gen__STATE_VARIABLE_Info_0_24,
  MR_Word * erl_backend__erl_code_gen__STATE_VARIABLE_Info_25);

static void MR_CALL 
erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_105_116_101_95_95_91_54_93_95_48_10_p_0(
  MR_Word erl_backend__erl_code_gen__CodeModel_11,
  MR_Word erl_backend__erl_code_gen__InstMap0_12,
  MR_Word erl_backend__erl_code_gen__Cond_13,
  MR_Word erl_backend__erl_code_gen__Then_14,
  MR_Word erl_backend__erl_code_gen__Else_15,
  MR_Word erl_backend__erl_code_gen__MaybeSuccessExpr0_17,
  MR_Word * erl_backend__erl_code_gen__Statement_18,
  MR_Word erl_backend__erl_code_gen__STATE_VARIABLE_Info_0_57,
  MR_Word * erl_backend__erl_code_gen__STATE_VARIABLE_Info_58);

static void MR_CALL 
erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_10_p_0_10(
  MR_Box erl_backend__erl_code_gen__closure_arg,
  MR_Box erl_backend__erl_code_gen__wrapper_arg_1,
  MR_Box * erl_backend__erl_code_gen__wrapper_arg_2,
  MR_Box erl_backend__erl_code_gen__wrapper_arg_3,
  MR_Box * erl_backend__erl_code_gen__wrapper_arg_4);

static void MR_CALL 
erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_10_p_0_9(
  MR_Box erl_backend__erl_code_gen__closure_arg,
  MR_Box erl_backend__erl_code_gen__wrapper_arg_1,
  MR_Box * erl_backend__erl_code_gen__wrapper_arg_2,
  MR_Box erl_backend__erl_code_gen__wrapper_arg_3,
  MR_Box * erl_backend__erl_code_gen__wrapper_arg_4);

static MR_Box MR_CALL 
erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_10_p_0_1(
  MR_Box erl_backend__erl_code_gen__closure_arg,
  MR_Box erl_backend__erl_code_gen__wrapper_arg_1);

static void MR_CALL 
erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_10_p_0_2(
  void * erl_backend__erl_code_gen__env_ptr_arg);

static void MR_CALL 
erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_10_p_0_4(
  void * erl_backend__erl_code_gen__env_ptr_arg);

static void MR_CALL 
erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_10_p_0_5(
  void * erl_backend__erl_code_gen__env_ptr_arg);

static void MR_CALL 
erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_10_p_0_7(
  void * erl_backend__erl_code_gen__env_ptr_arg);

static void MR_CALL 
erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_10_p_0_6(
  void * erl_backend__erl_code_gen__env_ptr_arg);

static void MR_CALL 
erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_10_p_0_3(
  void * erl_backend__erl_code_gen__env_ptr_arg);

static void MR_CALL 
erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_10_p_0_8(
  void * erl_backend__erl_code_gen__env_ptr_arg);

static void MR_CALL 
erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_10_p_0(
  MR_Word erl_backend__erl_code_gen__Var_11,
  MR_Word erl_backend__erl_code_gen__CanFail_12,
  MR_Word erl_backend__erl_code_gen__CasesList_13,
  MR_Word erl_backend__erl_code_gen__CodeModel_14,
  MR_Word erl_backend__erl_code_gen__InstMap0_15,
  MR_Word erl_backend__erl_code_gen__MaybeSuccessExpr0_17,
  MR_Word * erl_backend__erl_code_gen__Statement_18,
  MR_Word erl_backend__erl_code_gen__STATE_VARIABLE_Info_0_46,
  MR_Word * erl_backend__erl_code_gen__STATE_VARIABLE_Info_47);

static void MR_CALL 
erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_99_111_109_109_105_116_95_112_105_101_99_101_115_95_95_91_51_93_95_48_8_p_0(
  MR_Word erl_backend__erl_code_gen__Goal_9,
  MR_Word erl_backend__erl_code_gen__InstMap_10,
  MR_Word erl_backend__erl_code_gen__DoRenaming_12,
  MR_Word * erl_backend__erl_code_gen__GoalStatement_13,
  MR_Word * erl_backend__erl_code_gen__PackedNonLocals_14,
  MR_Word erl_backend__erl_code_gen__STATE_VARIABLE_Info_0_22,
  MR_Word * erl_backend__erl_code_gen__STATE_VARIABLE_Info_23);

static void MR_CALL 
erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_99_111_109_109_105_116_95_95_91_53_93_95_48_9_p_0(
  MR_Word erl_backend__erl_code_gen__Goal_10,
  MR_Word erl_backend__erl_code_gen__CodeModel_11,
  MR_Word erl_backend__erl_code_gen__ScopeDetism_12,
  MR_Word erl_backend__erl_code_gen__InstMap_13,
  MR_Word erl_backend__erl_code_gen__MaybeSuccessExpr_15,
  MR_Word * erl_backend__erl_code_gen__Statement_16,
  MR_Word erl_backend__erl_code_gen__STATE_VARIABLE_Info_0_29,
  MR_Word * erl_backend__erl_code_gen__STATE_VARIABLE_Info_30);

static MR_bool MR_CALL 
erl_backend__erl_code_gen__IntroducedFrom__pred__erl_gen_case_on_atom__938__1_2_p_0(
  MR_Word erl_backend__erl_code_gen__OtherConsIds_17,
  MR_Word erl_backend__erl_code_gen__HeadVar__2_30);

static MR_bool MR_CALL 
erl_backend__erl_code_gen__IntroducedFrom__pred__erl_gen_case__879__1_2_p_0(
  MR_Word erl_backend__erl_code_gen__OtherConsIds_19,
  MR_Word erl_backend__erl_code_gen__HeadVar__2_35);

static MR_Word MR_CALL 
erl_backend__erl_code_gen__IntroducedFrom__func__erl_gen_switch__792__1_1_f_0(
  MR_Word erl_backend__erl_code_gen__LambdaHeadVar__1_49);

static MR_bool MR_CALL 
erl_backend__erl_code_gen__IntroducedFrom__pred__erl_gen_goal_expr__697__1_2_p_0(
  MR_Word erl_backend__erl_code_gen__CodeModel_11,
  MR_Word erl_backend__erl_code_gen__CallCodeModel_57);

static MR_bool MR_CALL 
erl_backend__erl_code_gen__search_elds_defn_3_p_0(
  MR_Word erl_backend__erl_code_gen__HeadVar__1_1,
  MR_Word erl_backend__erl_code_gen__PredProcId_6,
  MR_Word * erl_backend__erl_code_gen__Defn_7);

static void MR_CALL 
erl_backend__erl_code_gen__erl_gen_foreign_export_defn_3_p_0(
  MR_Word erl_backend__erl_code_gen__ProcDefns_4,
  MR_Word erl_backend__erl_code_gen__PragmaExport_5,
  MR_Word * erl_backend__erl_code_gen__ForeignExportDefn_6);

static void MR_CALL 
erl_backend__erl_code_gen__ground_var_in_instmap_3_p_0(
  MR_Word erl_backend__erl_code_gen__Var_4,
  MR_Word erl_backend__erl_code_gen__STATE_VARIABLE_InstMap_0_6,
  MR_Word * erl_backend__erl_code_gen__STATE_VARIABLE_InstMap_7);

static MR_bool MR_CALL 
erl_backend__erl_code_gen__non_dummy_var_3_f_0(
  MR_Word erl_backend__erl_code_gen__ModuleInfo_5,
  MR_Word erl_backend__erl_code_gen__Var_6,
  MR_Word erl_backend__erl_code_gen__Type_7,
  MR_Word * erl_backend__erl_code_gen__Var_4);

static MR_bool MR_CALL 
erl_backend__erl_code_gen__maybe_create_closure_for_success_expr_8_p_0_1(
  MR_Box erl_backend__erl_code_gen__closure_arg,
  MR_Box erl_backend__erl_code_gen__wrapper_arg_1,
  MR_Box erl_backend__erl_code_gen__wrapper_arg_2,
  MR_Box * erl_backend__erl_code_gen__wrapper_arg_3);

static void MR_CALL 
erl_backend__erl_code_gen__maybe_create_closure_for_success_expr_8_p_0(
  MR_Word erl_backend__erl_code_gen__NonLocals_9,
  MR_Word erl_backend__erl_code_gen__MaybeSuccessExpr0_10,
  MR_Word * erl_backend__erl_code_gen__MaybeMakeClosure_11,
  MR_Word * erl_backend__erl_code_gen__MaybeSuccessExpr_12,
  MR_Word erl_backend__erl_code_gen__InstMap0_13,
  MR_Word * erl_backend__erl_code_gen__InstMap_14,
  MR_Word erl_backend__erl_code_gen__STATE_VARIABLE_Info_0_28,
  MR_Word * erl_backend__erl_code_gen__STATE_VARIABLE_Info_29);

static void MR_CALL 
erl_backend__erl_code_gen__union_bound_nonlocals_in_goals_4_p_0_1(
  MR_Box erl_backend__erl_code_gen__closure_arg,
  MR_Box erl_backend__erl_code_gen__wrapper_arg_1,
  MR_Box * erl_backend__erl_code_gen__wrapper_arg_2);

static void MR_CALL 
erl_backend__erl_code_gen__union_bound_nonlocals_in_goals_4_p_0(
  MR_Word erl_backend__erl_code_gen__Info_5,
  MR_Word erl_backend__erl_code_gen__InstMap_6,
  MR_Word erl_backend__erl_code_gen__Goals_7,
  MR_Word * erl_backend__erl_code_gen__NonLocalsUnion_8);

static MR_bool MR_CALL 
erl_backend__erl_code_gen__erl_gen_case_on_atom_8_p_0_1(
  MR_Box erl_backend__erl_code_gen__closure_arg);

static void MR_CALL 
erl_backend__erl_code_gen__erl_gen_case_on_atom_8_p_0(
  MR_Word erl_backend__erl_code_gen__CodeModel_9,
  MR_Word erl_backend__erl_code_gen__InstMap_10,
  MR_Word erl_backend__erl_code_gen__MustBindNonLocals_11,
  MR_Word erl_backend__erl_code_gen__MaybeSuccessExpr_12,
  MR_Word erl_backend__erl_code_gen__Case_13,
  MR_Word * erl_backend__erl_code_gen__ELDSCase_14,
  MR_Word erl_backend__erl_code_gen__STATE_VARIABLE_Info_0_24,
  MR_Word * erl_backend__erl_code_gen__STATE_VARIABLE_Info_25);

static MR_bool MR_CALL 
erl_backend__erl_code_gen__erl_gen_case_9_p_0_1(
  MR_Box erl_backend__erl_code_gen__closure_arg);

static void MR_CALL 
erl_backend__erl_code_gen__erl_gen_case_9_p_0(
  MR_Word erl_backend__erl_code_gen__Type_10,
  MR_Word erl_backend__erl_code_gen__CodeModel_11,
  MR_Word erl_backend__erl_code_gen__InstMap_12,
  MR_Word erl_backend__erl_code_gen__MustBindNonLocals_13,
  MR_Word erl_backend__erl_code_gen__MaybeSuccessExpr_14,
  MR_Word erl_backend__erl_code_gen__Case_15,
  MR_Word * erl_backend__erl_code_gen__ELDSCase_16,
  MR_Word erl_backend__erl_code_gen__STATE_VARIABLE_Info_0_29,
  MR_Word * erl_backend__erl_code_gen__STATE_VARIABLE_Info_30);

static MR_bool MR_CALL 
erl_backend__erl_code_gen__erl_gen_goal_expr_9_p_0_1(
  MR_Box erl_backend__erl_code_gen__closure_arg);

static void MR_CALL 
erl_backend__erl_code_gen__erl_gen_goal_expr_9_p_0(
  MR_Word erl_backend__erl_code_gen__GoalExpr_10,
  MR_Word erl_backend__erl_code_gen__CodeModel_11,
  MR_Word erl_backend__erl_code_gen__Detism_12,
  MR_Word erl_backend__erl_code_gen__InstMap_13,
  MR_Word erl_backend__erl_code_gen__Context_14,
  MR_Word erl_backend__erl_code_gen__MaybeSuccessExpr_15,
  MR_Word * erl_backend__erl_code_gen__Statement_16,
  MR_Word erl_backend__erl_code_gen__STATE_VARIABLE_Info_0_88,
  MR_Word * erl_backend__erl_code_gen__STATE_VARIABLE_Info_89);

static void MR_CALL 
erl_backend__erl_code_gen__erl_gen_goal_7_p_0(
  MR_Word erl_backend__erl_code_gen__CodeModel_8,
  MR_Word erl_backend__erl_code_gen__InstMap_9,
  MR_Word erl_backend__erl_code_gen__Goal_10,
  MR_Word erl_backend__erl_code_gen__MaybeSuccessExpr0_11,
  MR_Word * erl_backend__erl_code_gen__Code_12,
  MR_Word erl_backend__erl_code_gen__STATE_VARIABLE_Info_0_20,
  MR_Word * erl_backend__erl_code_gen__STATE_VARIABLE_Info_21);

static void MR_CALL 
erl_backend__erl_code_gen__erl_gen_proc_7_p_0(
  MR_Word erl_backend__erl_code_gen__ModuleInfo_8,
  MR_Word erl_backend__erl_code_gen__PredId_9,
  MR_Integer erl_backend__erl_code_gen__ProcId_10,
  MR_Word erl_backend__erl_code_gen__PredInfo_11,
  MR_Word erl_backend__erl_code_gen__ProcInfo_12,
  MR_Word erl_backend__erl_code_gen__STATE_VARIABLE_Defns_0_18,
  MR_Word * erl_backend__erl_code_gen__STATE_VARIABLE_Defns_19);

static void MR_CALL 
erl_backend__erl_code_gen__erl_gen_simple_compare_6_p_0(
  MR_Word erl_backend__erl_code_gen__ModuleInfo_7,
  MR_Word erl_backend__erl_code_gen__PredId_8,
  MR_Integer erl_backend__erl_code_gen__ProcId_9,
  MR_Word erl_backend__erl_code_gen__X_10,
  MR_Word erl_backend__erl_code_gen__Y_11,
  MR_Word * erl_backend__erl_code_gen__ProcDefn_12);

static MR_bool MR_CALL 
erl_backend__erl_code_gen__erl_maybe_gen_simple_special_pred_7_p_0(
  MR_Word erl_backend__erl_code_gen__ModuleInfo_8,
  MR_Word erl_backend__erl_code_gen__PredId_9,
  MR_Integer erl_backend__erl_code_gen__ProcId_10,
  MR_Word erl_backend__erl_code_gen__PredInfo_11,
  MR_Word erl_backend__erl_code_gen__ProcInfo_12,
  MR_Word erl_backend__erl_code_gen__STATE_VARIABLE_Defns_0_27,
  MR_Word * erl_backend__erl_code_gen__STATE_VARIABLE_Defns_28);

static void MR_CALL 
erl_backend__erl_code_gen__erl_gen_procs_7_p_0(
  MR_Word erl_backend__erl_code_gen__HeadVar__1_1,
  MR_Word erl_backend__erl_code_gen__ModuleInfo_2,
  MR_Word erl_backend__erl_code_gen__PredId_3,
  MR_Word erl_backend__erl_code_gen__PredInfo_4,
  MR_Word erl_backend__erl_code_gen__ProcTable_5,
  MR_Word erl_backend__erl_code_gen__STATE_VARIABLE_Defns_0_6,
  MR_Word * erl_backend__erl_code_gen__STATE_VARIABLE_Defns_7);

static void MR_CALL 
erl_backend__erl_code_gen__erl_gen_preds_2_7_p_0(
  MR_Word erl_backend__erl_code_gen__ModuleInfo_8,
  MR_Word erl_backend__erl_code_gen__PredIds0_9,
  MR_Word erl_backend__erl_code_gen__PredTable_10,
  MR_Word erl_backend__erl_code_gen__STATE_VARIABLE_Defns_0_20,
  MR_Word * erl_backend__erl_code_gen__STATE_VARIABLE_Defns_21);

static void MR_CALL 
erl_backend__erl_code_gen__erl_code_gen_4_p_0_1(
  MR_Box erl_backend__erl_code_gen__closure_arg,
  MR_Box erl_backend__erl_code_gen__wrapper_arg_1,
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



static const MR_FA_PseudoTypeInfo_Struct1 erl_backend__erl_code_gen__list__pti_list_1__plain_erl_backend__elds__type_ctor_info_elds_defn_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_defn_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 erl_backend__erl_code_gen__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_cons_id_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0
  }
};

static const MR_FA_TypeInfo_Struct1 erl_backend__erl_code_gen__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 erl_backend__erl_code_gen__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1,
  {
    (MR_PseudoTypeInfo) &erl_backend__erl_code_gen__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 erl_backend__erl_code_gen__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 erl_backend__erl_code_gen__maybe__pti_maybe_1__plain_erl_backend__elds__type_ctor_info_elds_expr_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_PseudoTypeInfo) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_expr_0
  }
};

static void MR_CALL 
erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_100_105_115_106_117_110_99_116_95_95_91_52_93_95_48_8_p_0(
  MR_Word erl_backend__erl_code_gen__HeadVar__1_1,
  MR_Word erl_backend__erl_code_gen__CodeModel_2,
  MR_Word erl_backend__erl_code_gen__HeadVar__3_3,
  MR_Word erl_backend__erl_code_gen__HeadVar__5_5,
  MR_Word * erl_backend__erl_code_gen__Statement_6,
  MR_Word erl_backend__erl_code_gen__STATE_VARIABLE_Info_0_7,
  MR_Word * erl_backend__erl_code_gen__STATE_VARIABLE_Info_8)
{
  {
    MR_bool erl_backend__erl_code_gen__succeeded;

    if ((erl_backend__erl_code_gen__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        switch (erl_backend__erl_code_gen__CodeModel_2) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              {
                mercury__require__unexpected_3_p_0((MR_String) "erl_backend.erl_code_gen", (MR_String) "predicate \140erl_backend.erl_code_gen.erl_gen_disjunct\'/8", (MR_String) "\140fail\' has determinism \140det\'");
                return;
              }
            }
            break;
          case (MR_Integer) 2:
          case (MR_Integer) 1:
            {
              MR_Word erl_backend__erl_code_gen__V_17_17;

              {
                erl_backend__erl_code_gen__V_17_17 = erl_backend__elds__elds_fail_0_f_0();
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                *erl_backend__erl_code_gen__Statement_6 = base;
                MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (erl_backend__erl_code_gen__V_17_17));
              }
            }
            break;
        }
        *erl_backend__erl_code_gen__STATE_VARIABLE_Info_8 = erl_backend__erl_code_gen__STATE_VARIABLE_Info_0_7;
      }
    else
      {
        MR_Word erl_backend__erl_code_gen__First_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__erl_code_gen__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word erl_backend__erl_code_gen__Rest_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__erl_code_gen__HeadVar__1_1, (MR_Integer) 1)));

        switch (erl_backend__erl_code_gen__CodeModel_2) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 1:
            {
              MR_Word erl_backend__erl_code_gen__FirstGoalInfo_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__First_21, (MR_Integer) 1)));
              MR_Word erl_backend__erl_code_gen__FirstCodeModel_31;
              MR_Word erl_backend__erl_code_gen__FirstDeterminism_32;
              MR_Word erl_backend__erl_code_gen__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__First_21, (MR_Integer) 0)));

              {
                erl_backend__erl_code_gen__FirstCodeModel_31 = hlds__code_model__goal_info_get_code_model_1_f_0(erl_backend__erl_code_gen__FirstGoalInfo_30);
              }
              {
                erl_backend__erl_code_gen__FirstDeterminism_32 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(erl_backend__erl_code_gen__FirstGoalInfo_30);
              }
              switch (erl_backend__erl_code_gen__FirstCodeModel_31) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Word erl_backend__erl_code_gen__MaybeSuccessExprForFirst_33;
                    MR_Word erl_backend__erl_code_gen__STATE_VARIABLE_Info_72_72;

                    {
                      erl_backend__erl_code_util__erl_fix_success_expr_6_p_0(erl_backend__erl_code_gen__HeadVar__3_3, erl_backend__erl_code_gen__First_21, erl_backend__erl_code_gen__HeadVar__5_5, &erl_backend__erl_code_gen__MaybeSuccessExprForFirst_33, erl_backend__erl_code_gen__STATE_VARIABLE_Info_0_7, &erl_backend__erl_code_gen__STATE_VARIABLE_Info_72_72);
                    }
                    {
                      erl_backend__erl_code_gen__erl_gen_goal_7_p_0((MR_Integer) 0, erl_backend__erl_code_gen__HeadVar__3_3, erl_backend__erl_code_gen__First_21, erl_backend__erl_code_gen__MaybeSuccessExprForFirst_33, erl_backend__erl_code_gen__Statement_6, erl_backend__erl_code_gen__STATE_VARIABLE_Info_72_72, erl_backend__erl_code_gen__STATE_VARIABLE_Info_8);
                    }
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    {
                      mercury__require__unexpected_3_p_0((MR_String) "erl_backend.erl_code_gen", (MR_String) "predicate \140erl_backend.erl_code_gen.erl_gen_disjunct\'/8", (MR_String) "model_non disj in model_det disjunction");
                      return;
                    }
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word erl_backend__erl_code_gen__FirstVarsSet_34;
                    MR_Word erl_backend__erl_code_gen__FirstVars_35;
                    MR_Word erl_backend__erl_code_gen__FirstVarsTerm_36;
                    MR_Word erl_backend__erl_code_gen__FirstStatement0_37;
                    MR_Word erl_backend__erl_code_gen__RestStatement_38;
                    MR_Word erl_backend__erl_code_gen__Subn_39;
                    MR_Word erl_backend__erl_code_gen__FirstStatement_40;
                    MR_Word erl_backend__erl_code_gen__V_57_57;
                    MR_Word erl_backend__erl_code_gen__V_59_59;
                    MR_Word erl_backend__erl_code_gen__STATE_VARIABLE_Info_60_60;
                    MR_Word erl_backend__erl_code_gen__V_61_61;
                    MR_Word erl_backend__erl_code_gen__STATE_VARIABLE_Info_62_62;
                    MR_Word erl_backend__erl_code_gen__STATE_VARIABLE_Info_63_63;

                    {
                      erl_backend__erl_code_util__erl_bound_nonlocals_in_goal_4_p_0(erl_backend__erl_code_gen__STATE_VARIABLE_Info_0_7, erl_backend__erl_code_gen__HeadVar__3_3, erl_backend__erl_code_gen__First_21, &erl_backend__erl_code_gen__FirstVarsSet_34);
                    }
                    {
                      erl_backend__erl_code_gen__FirstVars_35 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, erl_backend__erl_code_gen__FirstVarsSet_34);
                    }
                    {
                      erl_backend__erl_code_gen__V_57_57 = erl_backend__elds__exprs_from_vars_1_f_0(erl_backend__erl_code_gen__FirstVars_35);
                    }
                    {
                      erl_backend__erl_code_gen__FirstVarsTerm_36 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), erl_backend__erl_code_gen__FirstVarsTerm_36, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                      MR_hl_field(MR_mktag(3), erl_backend__erl_code_gen__FirstVarsTerm_36, 1) = ((MR_Box) (erl_backend__erl_code_gen__V_57_57));
                    }
                    {
                      erl_backend__erl_code_gen__V_61_61 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(2), erl_backend__erl_code_gen__V_61_61, 0) = ((MR_Box) (erl_backend__erl_code_gen__FirstVarsTerm_36));
                    }
                    {
                      erl_backend__erl_code_gen__V_59_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), erl_backend__erl_code_gen__V_59_59, 0) = ((MR_Box) (erl_backend__erl_code_gen__V_61_61));
                    }
                    {
                      erl_backend__erl_code_gen__erl_gen_goal_7_p_0((MR_Integer) 1, erl_backend__erl_code_gen__HeadVar__3_3, erl_backend__erl_code_gen__First_21, erl_backend__erl_code_gen__V_59_59, &erl_backend__erl_code_gen__FirstStatement0_37, erl_backend__erl_code_gen__STATE_VARIABLE_Info_0_7, &erl_backend__erl_code_gen__STATE_VARIABLE_Info_60_60);
                    }
                    {
                      erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_100_105_115_106_117_110_99_116_95_95_91_52_93_95_48_8_p_0(erl_backend__erl_code_gen__Rest_22, erl_backend__erl_code_gen__CodeModel_2, erl_backend__erl_code_gen__HeadVar__3_3, erl_backend__erl_code_gen__HeadVar__5_5, &erl_backend__erl_code_gen__RestStatement_38, erl_backend__erl_code_gen__STATE_VARIABLE_Info_60_60, &erl_backend__erl_code_gen__STATE_VARIABLE_Info_62_62);
                    }
                    {
                      erl_backend__erl_code_util__erl_create_renaming_4_p_0(erl_backend__erl_code_gen__FirstVars_35, &erl_backend__erl_code_gen__Subn_39, erl_backend__erl_code_gen__STATE_VARIABLE_Info_62_62, &erl_backend__erl_code_gen__STATE_VARIABLE_Info_63_63);
                    }
                    {
                      erl_backend__erl_code_util__erl_rename_vars_in_expr_3_p_0(erl_backend__erl_code_gen__Subn_39, erl_backend__erl_code_gen__FirstStatement0_37, &erl_backend__erl_code_gen__FirstStatement_40);
                    }
                    erl_backend__erl_code_gen__succeeded = (erl_backend__erl_code_gen__FirstDeterminism_32 == (MR_Integer) 7);
                    if (erl_backend__erl_code_gen__succeeded)
                      {
                        {
                          *erl_backend__erl_code_gen__Statement_6 = erl_backend__elds__join_exprs_2_f_0(erl_backend__erl_code_gen__FirstStatement0_37, erl_backend__erl_code_gen__RestStatement_38);
                        }
                        *erl_backend__erl_code_gen__STATE_VARIABLE_Info_8 = erl_backend__erl_code_gen__STATE_VARIABLE_Info_63_63;
                      }
                    else
                      {
                        MR_Word erl_backend__erl_code_gen__MaybeSuccessExprForFirst_75;
                        MR_Word erl_backend__erl_code_gen__V_65_65;
                        MR_Word erl_backend__erl_code_gen__V_66_66;
                        MR_Word erl_backend__erl_code_gen__V_85_85;
                        MR_Word erl_backend__erl_code_gen__V_86_86;

                        {
                          erl_backend__erl_code_util__erl_fix_success_expr_6_p_0(erl_backend__erl_code_gen__HeadVar__3_3, erl_backend__erl_code_gen__First_21, erl_backend__erl_code_gen__HeadVar__5_5, &erl_backend__erl_code_gen__MaybeSuccessExprForFirst_75, erl_backend__erl_code_gen__STATE_VARIABLE_Info_63_63, erl_backend__erl_code_gen__STATE_VARIABLE_Info_8);
                        }
                        erl_backend__erl_code_gen__succeeded = ((MR_tag((MR_Word) erl_backend__erl_code_gen__MaybeSuccessExprForFirst_75)) == (MR_mktag((MR_Integer) 1)));
                        if (erl_backend__erl_code_gen__succeeded)
                          {
                            erl_backend__erl_code_gen__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__erl_code_gen__MaybeSuccessExprForFirst_75, (MR_Integer) 0)));
                            erl_backend__erl_code_gen__succeeded = ((MR_tag((MR_Word) erl_backend__erl_code_gen__V_65_65)) == (MR_mktag((MR_Integer) 2)));
                            if (erl_backend__erl_code_gen__succeeded)
                              {
                                erl_backend__erl_code_gen__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(2), erl_backend__erl_code_gen__V_65_65, (MR_Integer) 0)));
                                {
                                  erl_backend__erl_code_gen__succeeded = erl_backend__elds____Unify____elds_term_0_0(erl_backend__erl_code_gen__FirstVarsTerm_36, erl_backend__erl_code_gen__V_85_85);
                                }
                                if (erl_backend__erl_code_gen__succeeded)
                                  {
                                    erl_backend__erl_code_gen__succeeded = ((MR_tag((MR_Word) erl_backend__erl_code_gen__RestStatement_38)) == (MR_mktag((MR_Integer) 2)));
                                    if (erl_backend__erl_code_gen__succeeded)
                                      {
                                        erl_backend__erl_code_gen__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(2), erl_backend__erl_code_gen__RestStatement_38, (MR_Integer) 0)));
                                        {
                                          erl_backend__erl_code_gen__V_86_86 = erl_backend__elds__elds_fail_0_f_0();
                                        }
                                        {
                                          erl_backend__erl_code_gen__succeeded = erl_backend__elds____Unify____elds_term_0_0(erl_backend__erl_code_gen__V_66_66, erl_backend__erl_code_gen__V_86_86);
                                        }
                                      }
                                  }
                              }
                          }
                        if (erl_backend__erl_code_gen__succeeded)
                          *erl_backend__erl_code_gen__Statement_6 = erl_backend__erl_code_gen__FirstStatement_40;
                        else
                          {
                            MR_Word erl_backend__erl_code_gen__Statement0_41;
                            MR_Word erl_backend__erl_code_gen__SucceedCase_42;
                            MR_Word erl_backend__erl_code_gen__FailCase_43;
                            MR_Word erl_backend__erl_code_gen__V_67_67;
                            MR_Word erl_backend__erl_code_gen__V_68_68;
                            MR_Word erl_backend__erl_code_gen__V_70_70;
                            MR_Word erl_backend__erl_code_gen__V_71_71;

                            {
                              erl_backend__erl_code_gen__V_70_70 = erl_backend__elds__expr_or_void_1_f_0(erl_backend__erl_code_gen__MaybeSuccessExprForFirst_75);
                            }
                            {
                              erl_backend__erl_code_gen__SucceedCase_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                              MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__SucceedCase_42, 0) = ((MR_Box) (erl_backend__erl_code_gen__FirstVarsTerm_36));
                              MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__SucceedCase_42, 1) = ((MR_Box) (erl_backend__erl_code_gen__V_70_70));
                            }
                            {
                              erl_backend__erl_code_gen__V_71_71 = erl_backend__elds__elds_fail_0_f_0();
                            }
                            {
                              erl_backend__erl_code_gen__FailCase_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                              MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__FailCase_43, 0) = ((MR_Box) (erl_backend__erl_code_gen__V_71_71));
                              MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__FailCase_43, 1) = ((MR_Box) (erl_backend__erl_code_gen__RestStatement_38));
                            }
                            {
                              erl_backend__erl_code_gen__V_68_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(MR_mktag(1), erl_backend__erl_code_gen__V_68_68, 0) = ((MR_Box) (erl_backend__erl_code_gen__FailCase_43));
                              MR_hl_field(MR_mktag(1), erl_backend__erl_code_gen__V_68_68, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                            }
                            {
                              erl_backend__erl_code_gen__V_67_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(MR_mktag(1), erl_backend__erl_code_gen__V_67_67, 0) = ((MR_Box) (erl_backend__erl_code_gen__SucceedCase_42));
                              MR_hl_field(MR_mktag(1), erl_backend__erl_code_gen__V_67_67, 1) = ((MR_Box) (erl_backend__erl_code_gen__V_68_68));
                            }
                            {
                              erl_backend__erl_code_gen__Statement0_41 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(MR_mktag(3), erl_backend__erl_code_gen__Statement0_41, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                              MR_hl_field(MR_mktag(3), erl_backend__erl_code_gen__Statement0_41, 1) = ((MR_Box) (erl_backend__erl_code_gen__FirstStatement_40));
                              MR_hl_field(MR_mktag(3), erl_backend__erl_code_gen__Statement0_41, 2) = ((MR_Box) (erl_backend__erl_code_gen__V_67_67));
                            }
                            {
                              erl_backend__erl_code_util__maybe_simplify_nested_cases_2_p_0(erl_backend__erl_code_gen__Statement0_41, erl_backend__erl_code_gen__Statement_6);
                            }
                          }
                      }
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word erl_backend__erl_code_gen__Subst_44;
              MR_Word erl_backend__erl_code_gen__RestStatements_45;
              MR_Word erl_backend__erl_code_gen__STATE_VARIABLE_Info_48_48;
              MR_Word erl_backend__erl_code_gen__STATE_VARIABLE_Info_50_50;
              MR_Word erl_backend__erl_code_gen__STATE_VARIABLE_Info_51_51;
              MR_Word erl_backend__erl_code_gen__MaybeSuccessExprForFirst_78;
              MR_Word erl_backend__erl_code_gen__FirstVarsSet_79;
              MR_Word erl_backend__erl_code_gen__FirstVars_80;
              MR_Word erl_backend__erl_code_gen__FirstStatement0_81;
              MR_Word erl_backend__erl_code_gen__FirstStatement_82;

              {
                erl_backend__erl_code_util__erl_fix_success_expr_6_p_0(erl_backend__erl_code_gen__HeadVar__3_3, erl_backend__erl_code_gen__First_21, erl_backend__erl_code_gen__HeadVar__5_5, &erl_backend__erl_code_gen__MaybeSuccessExprForFirst_78, erl_backend__erl_code_gen__STATE_VARIABLE_Info_0_7, &erl_backend__erl_code_gen__STATE_VARIABLE_Info_48_48);
              }
              {
                erl_backend__erl_code_gen__erl_gen_goal_7_p_0((MR_Integer) 2, erl_backend__erl_code_gen__HeadVar__3_3, erl_backend__erl_code_gen__First_21, erl_backend__erl_code_gen__MaybeSuccessExprForFirst_78, &erl_backend__erl_code_gen__FirstStatement0_81, erl_backend__erl_code_gen__STATE_VARIABLE_Info_48_48, &erl_backend__erl_code_gen__STATE_VARIABLE_Info_50_50);
              }
              {
                erl_backend__erl_code_util__erl_bound_nonlocals_in_goal_4_p_0(erl_backend__erl_code_gen__STATE_VARIABLE_Info_50_50, erl_backend__erl_code_gen__HeadVar__3_3, erl_backend__erl_code_gen__First_21, &erl_backend__erl_code_gen__FirstVarsSet_79);
              }
              {
                erl_backend__erl_code_gen__FirstVars_80 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, erl_backend__erl_code_gen__FirstVarsSet_79);
              }
              {
                erl_backend__erl_code_util__erl_create_renaming_4_p_0(erl_backend__erl_code_gen__FirstVars_80, &erl_backend__erl_code_gen__Subst_44, erl_backend__erl_code_gen__STATE_VARIABLE_Info_50_50, &erl_backend__erl_code_gen__STATE_VARIABLE_Info_51_51);
              }
              {
                erl_backend__erl_code_util__erl_rename_vars_in_expr_3_p_0(erl_backend__erl_code_gen__Subst_44, erl_backend__erl_code_gen__FirstStatement0_81, &erl_backend__erl_code_gen__FirstStatement_82);
              }
              {
                erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_100_105_115_106_117_110_99_116_95_95_91_52_93_95_48_8_p_0(erl_backend__erl_code_gen__Rest_22, (MR_Integer) 2, erl_backend__erl_code_gen__HeadVar__3_3, erl_backend__erl_code_gen__HeadVar__5_5, &erl_backend__erl_code_gen__RestStatements_45, erl_backend__erl_code_gen__STATE_VARIABLE_Info_51_51, erl_backend__erl_code_gen__STATE_VARIABLE_Info_8);
              }
              {
                *erl_backend__erl_code_gen__Statement_6 = erl_backend__elds__join_exprs_2_f_0(erl_backend__erl_code_gen__FirstStatement_82, erl_backend__erl_code_gen__RestStatements_45);
              }
            }
            break;
        }
      }
  }
}

static void MR_CALL 
erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_100_105_115_106_95_95_91_52_93_95_48_8_p_0_1(
  MR_Box erl_backend__erl_code_gen__closure_arg,
  MR_Box erl_backend__erl_code_gen__wrapper_arg_1,
  MR_Box * erl_backend__erl_code_gen__wrapper_arg_2)
{
  {
    MR_Box erl_backend__erl_code_gen__closure = erl_backend__erl_code_gen__closure_arg;
    MR_Word erl_backend__erl_code_gen__conv0_HeadVar__4_4;

    {
      erl_backend__erl_code_util__erl_bound_nonlocals_in_goal_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__closure, (MR_Integer) 4))), ((MR_Word) erl_backend__erl_code_gen__wrapper_arg_1), &erl_backend__erl_code_gen__conv0_HeadVar__4_4);
    }
    *erl_backend__erl_code_gen__wrapper_arg_2 = ((MR_Box) (erl_backend__erl_code_gen__conv0_HeadVar__4_4));
  }
}

static void MR_CALL 
erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_100_105_115_106_95_95_91_52_93_95_48_8_p_0(
  MR_Word erl_backend__erl_code_gen__HeadVar__1_1,
  MR_Word erl_backend__erl_code_gen__CodeModel_2,
  MR_Word erl_backend__erl_code_gen__HeadVar__3_3,
  MR_Word erl_backend__erl_code_gen__HeadVar__5_5,
  MR_Word * erl_backend__erl_code_gen__Statement_6,
  MR_Word erl_backend__erl_code_gen__STATE_VARIABLE_Info_0_7,
  MR_Word * erl_backend__erl_code_gen__STATE_VARIABLE_Info_8)
{
  {
    MR_bool erl_backend__erl_code_gen__succeeded;

    if ((erl_backend__erl_code_gen__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        switch (erl_backend__erl_code_gen__CodeModel_2) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              {
                mercury__require__unexpected_3_p_0((MR_String) "erl_backend.erl_code_gen", (MR_String) "predicate \140erl_backend.erl_code_gen.erl_gen_disj\'/8", (MR_String) "\140fail\' has determinism \140det\'");
                return;
              }
            }
            break;
          case (MR_Integer) 2:
          case (MR_Integer) 1:
            {
              MR_Word erl_backend__erl_code_gen__V_17_17;

              {
                erl_backend__erl_code_gen__V_17_17 = erl_backend__elds__elds_fail_0_f_0();
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                *erl_backend__erl_code_gen__Statement_6 = base;
                MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (erl_backend__erl_code_gen__V_17_17));
              }
            }
            break;
        }
        *erl_backend__erl_code_gen__STATE_VARIABLE_Info_8 = erl_backend__erl_code_gen__STATE_VARIABLE_Info_0_7;
      }
    else
      {
        MR_Word erl_backend__erl_code_gen__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__erl_code_gen__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word erl_backend__erl_code_gen__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__erl_code_gen__HeadVar__1_1, (MR_Integer) 0)));

        if ((erl_backend__erl_code_gen__V_53_53 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            erl_backend__erl_code_gen__erl_gen_goal_7_p_0(erl_backend__erl_code_gen__CodeModel_2, erl_backend__erl_code_gen__HeadVar__3_3, erl_backend__erl_code_gen__V_54_54, erl_backend__erl_code_gen__HeadVar__5_5, erl_backend__erl_code_gen__Statement_6, erl_backend__erl_code_gen__STATE_VARIABLE_Info_0_7, erl_backend__erl_code_gen__STATE_VARIABLE_Info_8);
          }
        else
          {
            MR_Word erl_backend__erl_code_gen__NonLocalsBoundInGoals_42;
            MR_Word erl_backend__erl_code_gen__MaybeMakeClosure_43;
            MR_Word erl_backend__erl_code_gen__MaybeSuccessExpr_44;
            MR_Word erl_backend__erl_code_gen__InstMap_45;
            MR_Word erl_backend__erl_code_gen__DisjStatement_46;
            MR_Word erl_backend__erl_code_gen__STATE_VARIABLE_Info_50_50;
            MR_Word erl_backend__erl_code_gen__IsBound_59;
            MR_Word erl_backend__erl_code_gen__NonLocalsLists_60;

            {
              erl_backend__erl_code_gen__IsBound_59 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__IsBound_59, 0) = ((MR_Box) (&erl_backend__erl_code_gen_scalar_common_5[0]));
              MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__IsBound_59, 1) = ((MR_Box) (erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_100_105_115_106_95_95_91_52_93_95_48_8_p_0_1));
              MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__IsBound_59, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
              MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__IsBound_59, 3) = ((MR_Box) (erl_backend__erl_code_gen__STATE_VARIABLE_Info_0_7));
              MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__IsBound_59, 4) = ((MR_Box) (erl_backend__erl_code_gen__HeadVar__3_3));
            }
            {
              mercury__list__map_3_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, (MR_Word) &erl_backend__erl_code_gen_scalar_common_1[3], erl_backend__erl_code_gen__IsBound_59, erl_backend__erl_code_gen__HeadVar__1_1, &erl_backend__erl_code_gen__NonLocalsLists_60);
            }
            {
              erl_backend__erl_code_gen__NonLocalsBoundInGoals_42 = parse_tree__set_of_var__union_list_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, erl_backend__erl_code_gen__NonLocalsLists_60);
            }
            {
              erl_backend__erl_code_gen__maybe_create_closure_for_success_expr_8_p_0(erl_backend__erl_code_gen__NonLocalsBoundInGoals_42, erl_backend__erl_code_gen__HeadVar__5_5, &erl_backend__erl_code_gen__MaybeMakeClosure_43, &erl_backend__erl_code_gen__MaybeSuccessExpr_44, erl_backend__erl_code_gen__HeadVar__3_3, &erl_backend__erl_code_gen__InstMap_45, erl_backend__erl_code_gen__STATE_VARIABLE_Info_0_7, &erl_backend__erl_code_gen__STATE_VARIABLE_Info_50_50);
            }
            {
              erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_100_105_115_106_117_110_99_116_95_95_91_52_93_95_48_8_p_0(erl_backend__erl_code_gen__HeadVar__1_1, erl_backend__erl_code_gen__CodeModel_2, erl_backend__erl_code_gen__InstMap_45, erl_backend__erl_code_gen__MaybeSuccessExpr_44, &erl_backend__erl_code_gen__DisjStatement_46, erl_backend__erl_code_gen__STATE_VARIABLE_Info_50_50, erl_backend__erl_code_gen__STATE_VARIABLE_Info_8);
            }
            {
              *erl_backend__erl_code_gen__Statement_6 = erl_backend__elds__maybe_join_exprs1_2_f_0(erl_backend__erl_code_gen__MaybeMakeClosure_43, erl_backend__erl_code_gen__DisjStatement_46);
            }
          }
      }
  }
}

static void MR_CALL 
erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_99_111_110_106_95_50_95_95_91_52_93_95_48_8_p_0(
  MR_Word erl_backend__erl_code_gen__HeadVar__1_1,
  MR_Word erl_backend__erl_code_gen__CodeModel_2,
  MR_Word erl_backend__erl_code_gen__HeadVar__3_3,
  MR_Word erl_backend__erl_code_gen__MaybeSuccessExpr_5,
  MR_Word * erl_backend__erl_code_gen__Statement_6,
  MR_Word erl_backend__erl_code_gen__STATE_VARIABLE_Info_0_7,
  MR_Word * erl_backend__erl_code_gen__STATE_VARIABLE_Info_8)
{
  {
    MR_bool erl_backend__erl_code_gen__succeeded;

    if ((erl_backend__erl_code_gen__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        switch (erl_backend__erl_code_gen__CodeModel_2) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              *erl_backend__erl_code_gen__Statement_6 = erl_backend__elds__expr_or_void_1_f_0(erl_backend__erl_code_gen__MaybeSuccessExpr_5);
            }
            break;
          case (MR_Integer) 2:
          case (MR_Integer) 1:
            {
              *erl_backend__erl_code_gen__Statement_6 = erl_backend__elds__det_expr_1_f_0(erl_backend__erl_code_gen__MaybeSuccessExpr_5);
            }
            break;
        }
        *erl_backend__erl_code_gen__STATE_VARIABLE_Info_8 = erl_backend__erl_code_gen__STATE_VARIABLE_Info_0_7;
      }
    else
      {
        MR_Word erl_backend__erl_code_gen__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__erl_code_gen__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word erl_backend__erl_code_gen__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__erl_code_gen__HeadVar__1_1, (MR_Integer) 0)));

        if ((erl_backend__erl_code_gen__V_84_84 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            erl_backend__erl_code_gen__erl_gen_goal_7_p_0(erl_backend__erl_code_gen__CodeModel_2, erl_backend__erl_code_gen__HeadVar__3_3, erl_backend__erl_code_gen__V_85_85, erl_backend__erl_code_gen__MaybeSuccessExpr_5, erl_backend__erl_code_gen__Statement_6, erl_backend__erl_code_gen__STATE_VARIABLE_Info_0_7, erl_backend__erl_code_gen__STATE_VARIABLE_Info_8);
          }
        else
          {
            MR_Word erl_backend__erl_code_gen__FirstGoalInfo_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__V_85_85, (MR_Integer) 1)));
            MR_Word erl_backend__erl_code_gen__FirstDeterminism_40;
            MR_Word erl_backend__erl_code_gen__FirstMaxSolns_42;
            MR_Word erl_backend__erl_code_gen__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__V_85_85, (MR_Integer) 0)));
            MR_Word erl_backend__erl_code_gen__V_41_41;

            {
              erl_backend__erl_code_gen__FirstDeterminism_40 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(erl_backend__erl_code_gen__FirstGoalInfo_39);
            }
            {
              parse_tree__prog_data__determinism_components_3_p_0(erl_backend__erl_code_gen__FirstDeterminism_40, &erl_backend__erl_code_gen__V_41_41, &erl_backend__erl_code_gen__FirstMaxSolns_42);
            }
            switch (erl_backend__erl_code_gen__FirstMaxSolns_42) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 3:
              case (MR_Integer) 2:
              case (MR_Integer) 1:
                {
                  MR_Word erl_backend__erl_code_gen__FirstCodeModel_43;
                  MR_Word erl_backend__erl_code_gen__InstMap1_44;

                  {
                    hlds__code_model__determinism_to_code_model_2_p_0(erl_backend__erl_code_gen__FirstDeterminism_40, &erl_backend__erl_code_gen__FirstCodeModel_43);
                  }
                  {
                    hlds__goal_util__update_instmap_3_p_0(erl_backend__erl_code_gen__V_85_85, erl_backend__erl_code_gen__HeadVar__3_3, &erl_backend__erl_code_gen__InstMap1_44);
                  }
                  switch (erl_backend__erl_code_gen__FirstCodeModel_43) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        MR_Word erl_backend__erl_code_gen__FirstStatement_45;
                        MR_Word erl_backend__erl_code_gen__RestStatement_46;
                        MR_Word erl_backend__erl_code_gen__STATE_VARIABLE_Info_76_76;

                        {
                          erl_backend__erl_code_gen__erl_gen_goal_7_p_0((MR_Integer) 0, erl_backend__erl_code_gen__HeadVar__3_3, erl_backend__erl_code_gen__V_85_85, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &erl_backend__erl_code_gen__FirstStatement_45, erl_backend__erl_code_gen__STATE_VARIABLE_Info_0_7, &erl_backend__erl_code_gen__STATE_VARIABLE_Info_76_76);
                        }
                        {
                          erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_99_111_110_106_95_50_95_95_91_52_93_95_48_8_p_0(erl_backend__erl_code_gen__V_84_84, erl_backend__erl_code_gen__CodeModel_2, erl_backend__erl_code_gen__InstMap1_44, erl_backend__erl_code_gen__MaybeSuccessExpr_5, &erl_backend__erl_code_gen__RestStatement_46, erl_backend__erl_code_gen__STATE_VARIABLE_Info_76_76, erl_backend__erl_code_gen__STATE_VARIABLE_Info_8);
                        }
                        {
                          *erl_backend__erl_code_gen__Statement_6 = erl_backend__elds__join_exprs_2_f_0(erl_backend__erl_code_gen__FirstStatement_45, erl_backend__erl_code_gen__RestStatement_46);
                        }
                      }
                      break;
                    case (MR_Integer) 2:
                      {
                        MR_Word erl_backend__erl_code_gen__NonLocalsSet_47;
                        MR_Word erl_backend__erl_code_gen__NonLocals_48;
                        MR_Word erl_backend__erl_code_gen__SucceedFunc0_49;
                        MR_Word erl_backend__erl_code_gen__Subst_50;
                        MR_Word erl_backend__erl_code_gen__SucceedFunc_51;
                        MR_Word erl_backend__erl_code_gen__SucceedVar_52;
                        MR_Word erl_backend__erl_code_gen__InstMap_53;
                        MR_Word erl_backend__erl_code_gen__SucceedVarExpr_54;
                        MR_Word erl_backend__erl_code_gen__MakeSucceed_55;
                        MR_Word erl_backend__erl_code_gen__CallSucceed_56;
                        MR_Word erl_backend__erl_code_gen__STATE_VARIABLE_Info_59_59;
                        MR_Word erl_backend__erl_code_gen__V_60_60;
                        MR_Word erl_backend__erl_code_gen__V_61_61;
                        MR_Word erl_backend__erl_code_gen__STATE_VARIABLE_Info_62_62;
                        MR_Word erl_backend__erl_code_gen__STATE_VARIABLE_Info_64_64;
                        MR_Word erl_backend__erl_code_gen__V_65_65;
                        MR_Word erl_backend__erl_code_gen__V_66_66;
                        MR_Word erl_backend__erl_code_gen__V_68_68;
                        MR_Word erl_backend__erl_code_gen__FirstStatement_81;
                        MR_Word erl_backend__erl_code_gen__RestStatement_82;

                        {
                          erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_99_111_110_106_95_50_95_95_91_52_93_95_48_8_p_0(erl_backend__erl_code_gen__V_84_84, erl_backend__erl_code_gen__CodeModel_2, erl_backend__erl_code_gen__InstMap1_44, erl_backend__erl_code_gen__MaybeSuccessExpr_5, &erl_backend__erl_code_gen__RestStatement_82, erl_backend__erl_code_gen__STATE_VARIABLE_Info_0_7, &erl_backend__erl_code_gen__STATE_VARIABLE_Info_59_59);
                        }
                        {
                          erl_backend__erl_code_util__erl_bound_nonlocals_in_goal_4_p_0(erl_backend__erl_code_gen__STATE_VARIABLE_Info_59_59, erl_backend__erl_code_gen__HeadVar__3_3, erl_backend__erl_code_gen__V_85_85, &erl_backend__erl_code_gen__NonLocalsSet_47);
                        }
                        {
                          erl_backend__erl_code_gen__NonLocals_48 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, erl_backend__erl_code_gen__NonLocalsSet_47);
                        }
                        {
                          erl_backend__erl_code_gen__V_61_61 = erl_backend__elds__terms_from_vars_1_f_0(erl_backend__erl_code_gen__NonLocals_48);
                        }
                        {
                          erl_backend__erl_code_gen__V_60_60 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__V_60_60, 0) = ((MR_Box) (erl_backend__erl_code_gen__V_61_61));
                          MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__V_60_60, 1) = ((MR_Box) (erl_backend__erl_code_gen__RestStatement_82));
                        }
                        erl_backend__erl_code_gen__SucceedFunc0_49 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) erl_backend__erl_code_gen__V_60_60);
                        {
                          erl_backend__erl_code_util__erl_create_renaming_4_p_0(erl_backend__erl_code_gen__NonLocals_48, &erl_backend__erl_code_gen__Subst_50, erl_backend__erl_code_gen__STATE_VARIABLE_Info_59_59, &erl_backend__erl_code_gen__STATE_VARIABLE_Info_62_62);
                        }
                        {
                          erl_backend__erl_code_util__erl_rename_vars_in_expr_3_p_0(erl_backend__erl_code_gen__Subst_50, erl_backend__erl_code_gen__SucceedFunc0_49, &erl_backend__erl_code_gen__SucceedFunc_51);
                        }
                        {
                          erl_backend__erl_code_util__erl_gen_info_new_named_var_4_p_0((MR_String) "SucceedConj", &erl_backend__erl_code_gen__SucceedVar_52, erl_backend__erl_code_gen__STATE_VARIABLE_Info_62_62, &erl_backend__erl_code_gen__STATE_VARIABLE_Info_64_64);
                        }
                        {
                          hlds__instmap__instmap_set_var_4_p_0(erl_backend__erl_code_gen__SucceedVar_52, (MR_Word) MR_mkword(MR_mktag(3), &erl_backend__erl_code_gen_scalar_common_3[0]), erl_backend__erl_code_gen__HeadVar__3_3, &erl_backend__erl_code_gen__InstMap_53);
                        }
                        {
                          erl_backend__erl_code_gen__SucceedVarExpr_54 = erl_backend__elds__expr_from_var_1_f_0(erl_backend__erl_code_gen__SucceedVar_52);
                        }
                        {
                          erl_backend__erl_code_gen__MakeSucceed_55 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), erl_backend__erl_code_gen__MakeSucceed_55, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                          MR_hl_field(MR_mktag(3), erl_backend__erl_code_gen__MakeSucceed_55, 1) = ((MR_Box) (erl_backend__erl_code_gen__SucceedVarExpr_54));
                          MR_hl_field(MR_mktag(3), erl_backend__erl_code_gen__MakeSucceed_55, 2) = ((MR_Box) (erl_backend__erl_code_gen__SucceedFunc_51));
                        }
                        {
                          erl_backend__erl_code_gen__V_65_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), erl_backend__erl_code_gen__V_65_65, 0) = ((MR_Box) (erl_backend__erl_code_gen__SucceedVarExpr_54));
                        }
                        {
                          erl_backend__erl_code_gen__V_66_66 = erl_backend__elds__exprs_from_vars_1_f_0(erl_backend__erl_code_gen__NonLocals_48);
                        }
                        {
                          erl_backend__erl_code_gen__CallSucceed_56 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), erl_backend__erl_code_gen__CallSucceed_56, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                          MR_hl_field(MR_mktag(3), erl_backend__erl_code_gen__CallSucceed_56, 1) = ((MR_Box) (erl_backend__erl_code_gen__V_65_65));
                          MR_hl_field(MR_mktag(3), erl_backend__erl_code_gen__CallSucceed_56, 2) = ((MR_Box) (erl_backend__erl_code_gen__V_66_66));
                        }
                        {
                          erl_backend__erl_code_gen__V_68_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), erl_backend__erl_code_gen__V_68_68, 0) = ((MR_Box) (erl_backend__erl_code_gen__CallSucceed_56));
                        }
                        {
                          erl_backend__erl_code_gen__erl_gen_goal_7_p_0((MR_Integer) 2, erl_backend__erl_code_gen__InstMap_53, erl_backend__erl_code_gen__V_85_85, erl_backend__erl_code_gen__V_68_68, &erl_backend__erl_code_gen__FirstStatement_81, erl_backend__erl_code_gen__STATE_VARIABLE_Info_64_64, erl_backend__erl_code_gen__STATE_VARIABLE_Info_8);
                        }
                        {
                          *erl_backend__erl_code_gen__Statement_6 = erl_backend__elds__join_exprs_2_f_0(erl_backend__erl_code_gen__MakeSucceed_55, erl_backend__erl_code_gen__FirstStatement_81);
                        }
                      }
                      break;
                    case (MR_Integer) 1:
                      {
                        MR_Word erl_backend__erl_code_gen__STATE_VARIABLE_Info_70_70;
                        MR_Word erl_backend__erl_code_gen__V_72_72;
                        MR_Word erl_backend__erl_code_gen__RestStatement_80;

                        {
                          erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_99_111_110_106_95_50_95_95_91_52_93_95_48_8_p_0(erl_backend__erl_code_gen__V_84_84, erl_backend__erl_code_gen__CodeModel_2, erl_backend__erl_code_gen__InstMap1_44, erl_backend__erl_code_gen__MaybeSuccessExpr_5, &erl_backend__erl_code_gen__RestStatement_80, erl_backend__erl_code_gen__STATE_VARIABLE_Info_0_7, &erl_backend__erl_code_gen__STATE_VARIABLE_Info_70_70);
                        }
                        {
                          erl_backend__erl_code_gen__V_72_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), erl_backend__erl_code_gen__V_72_72, 0) = ((MR_Box) (erl_backend__erl_code_gen__RestStatement_80));
                        }
                        {
                          erl_backend__erl_code_gen__erl_gen_goal_7_p_0((MR_Integer) 1, erl_backend__erl_code_gen__HeadVar__3_3, erl_backend__erl_code_gen__V_85_85, erl_backend__erl_code_gen__V_72_72, erl_backend__erl_code_gen__Statement_6, erl_backend__erl_code_gen__STATE_VARIABLE_Info_70_70, erl_backend__erl_code_gen__STATE_VARIABLE_Info_8);
                        }
                      }
                      break;
                  }
                }
                break;
              case (MR_Integer) 0:
                {
                  {
                    erl_backend__erl_code_gen__erl_gen_goal_7_p_0(erl_backend__erl_code_gen__CodeModel_2, erl_backend__erl_code_gen__HeadVar__3_3, erl_backend__erl_code_gen__V_85_85, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), erl_backend__erl_code_gen__Statement_6, erl_backend__erl_code_gen__STATE_VARIABLE_Info_0_7, erl_backend__erl_code_gen__STATE_VARIABLE_Info_8);
                  }
                }
                break;
            }
          }
      }
  }
}

static void MR_CALL 
erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_99_111_110_106_95_95_91_53_93_95_48_9_p_0(
  MR_Word erl_backend__erl_code_gen__Goals_10,
  MR_Word erl_backend__erl_code_gen__CodeModel_11,
  MR_Word erl_backend__erl_code_gen__Detism_12,
  MR_Word erl_backend__erl_code_gen__InstMap_13,
  MR_Word erl_backend__erl_code_gen__MaybeSuccessExpr_15,
  MR_Word * erl_backend__erl_code_gen__Statement_16,
  MR_Word erl_backend__erl_code_gen__STATE_VARIABLE_Info_0_21,
  MR_Word * erl_backend__erl_code_gen__STATE_VARIABLE_Info_22)
{
  {
    MR_bool erl_backend__erl_code_gen__succeeded;
    MR_Word erl_backend__erl_code_gen__Statement0_18;
    MR_Word erl_backend__erl_code_gen__STATE_VARIABLE_Info_23_23;

    {
      erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_99_111_110_106_95_50_95_95_91_52_93_95_48_8_p_0(erl_backend__erl_code_gen__Goals_10, erl_backend__erl_code_gen__CodeModel_11, erl_backend__erl_code_gen__InstMap_13, erl_backend__erl_code_gen__MaybeSuccessExpr_15, &erl_backend__erl_code_gen__Statement0_18, erl_backend__erl_code_gen__STATE_VARIABLE_Info_0_21, &erl_backend__erl_code_gen__STATE_VARIABLE_Info_23_23);
    }
    erl_backend__erl_code_gen__succeeded = (erl_backend__erl_code_gen__Detism_12 == (MR_Integer) 6);
    if (erl_backend__erl_code_gen__succeeded)
      {
        MR_Word erl_backend__erl_code_gen__ModuleInfo_19;
        MR_Word erl_backend__erl_code_gen__BoundVars_20;

        {
          erl_backend__erl_code_util__erl_gen_info_get_module_info_2_p_0(erl_backend__erl_code_gen__STATE_VARIABLE_Info_23_23, &erl_backend__erl_code_gen__ModuleInfo_19);
        }
        {
          hlds__instmap__instmap_bound_vars_3_p_0(erl_backend__erl_code_gen__InstMap_13, erl_backend__erl_code_gen__ModuleInfo_19, &erl_backend__erl_code_gen__BoundVars_20);
        }
        {
          erl_backend__erl_code_util__erl_rename_vars_in_expr_except_5_p_0(erl_backend__erl_code_gen__BoundVars_20, erl_backend__erl_code_gen__Statement0_18, erl_backend__erl_code_gen__Statement_16, erl_backend__erl_code_gen__STATE_VARIABLE_Info_23_23, erl_backend__erl_code_gen__STATE_VARIABLE_Info_22);
        }
      }
    else
      {
        *erl_backend__erl_code_gen__Statement_16 = erl_backend__erl_code_gen__Statement0_18;
        *erl_backend__erl_code_gen__STATE_VARIABLE_Info_22 = erl_backend__erl_code_gen__STATE_VARIABLE_Info_23_23;
      }
  }
}

static void MR_CALL 
erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_110_101_103_97_116_105_111_110_95_95_91_52_93_95_48_8_p_0(
  MR_Word erl_backend__erl_code_gen__Cond_9,
  MR_Word erl_backend__erl_code_gen__CodeModel_10,
  MR_Word erl_backend__erl_code_gen__InstMap_11,
  MR_Word erl_backend__erl_code_gen__MaybeSuccessExpr_13,
  MR_Word * erl_backend__erl_code_gen__Statement_14,
  MR_Word erl_backend__erl_code_gen__STATE_VARIABLE_Info_0_24,
  MR_Word * erl_backend__erl_code_gen__STATE_VARIABLE_Info_25)
{
  {
    MR_bool erl_backend__erl_code_gen__succeeded;
    MR_Word erl_backend__erl_code_gen__CondGoalInfo_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__Cond_9, (MR_Integer) 1)));
    MR_Word erl_backend__erl_code_gen__CondCodeModel_18;
    MR_Word erl_backend__erl_code_gen__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__Cond_9, (MR_Integer) 0)));

    {
      erl_backend__erl_code_gen__CondCodeModel_18 = hlds__code_model__goal_info_get_code_model_1_f_0(erl_backend__erl_code_gen__CondGoalInfo_17);
    }
    switch (erl_backend__erl_code_gen__CodeModel_10) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word erl_backend__erl_code_gen__DummySuccessExpr_19;
          MR_Word erl_backend__erl_code_gen__CondStatement_20;
          MR_Word erl_backend__erl_code_gen__V_49_49;
          MR_Word erl_backend__erl_code_gen__V_51_51;

          {
            erl_backend__erl_code_gen__V_49_49 = erl_backend__elds__elds_empty_tuple_0_f_0();
          }
          {
            erl_backend__erl_code_gen__DummySuccessExpr_19 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), erl_backend__erl_code_gen__DummySuccessExpr_19, 0) = ((MR_Box) (erl_backend__erl_code_gen__V_49_49));
          }
          {
            erl_backend__erl_code_gen__V_51_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), erl_backend__erl_code_gen__V_51_51, 0) = ((MR_Box) (erl_backend__erl_code_gen__DummySuccessExpr_19));
          }
          {
            erl_backend__erl_code_gen__erl_gen_goal_7_p_0((MR_Integer) 1, erl_backend__erl_code_gen__InstMap_11, erl_backend__erl_code_gen__Cond_9, erl_backend__erl_code_gen__V_51_51, &erl_backend__erl_code_gen__CondStatement_20, erl_backend__erl_code_gen__STATE_VARIABLE_Info_0_24, erl_backend__erl_code_gen__STATE_VARIABLE_Info_25);
          }
          {
            *erl_backend__erl_code_gen__Statement_14 = erl_backend__elds__maybe_join_exprs_2_f_0(erl_backend__erl_code_gen__CondStatement_20, erl_backend__erl_code_gen__MaybeSuccessExpr_13);
          }
        }
        break;
      case (MR_Integer) 2:
        {
          {
            mercury__require__unexpected_3_p_0((MR_String) "erl_backend.erl_code_gen", (MR_String) "predicate \140erl_backend.erl_code_gen.erl_gen_negation\'/8", (MR_String) "nondet negation");
            return;
          }
        }
        break;
      case (MR_Integer) 1:
        switch (erl_backend__erl_code_gen__CondCodeModel_18) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word erl_backend__erl_code_gen__V_47_47;
              MR_Word erl_backend__erl_code_gen__V_48_48;
              MR_Word erl_backend__erl_code_gen__CondStatement_53;

              {
                erl_backend__erl_code_gen__erl_gen_goal_7_p_0((MR_Integer) 0, erl_backend__erl_code_gen__InstMap_11, erl_backend__erl_code_gen__Cond_9, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &erl_backend__erl_code_gen__CondStatement_53, erl_backend__erl_code_gen__STATE_VARIABLE_Info_0_24, erl_backend__erl_code_gen__STATE_VARIABLE_Info_25);
              }
              {
                erl_backend__erl_code_gen__V_48_48 = erl_backend__elds__elds_fail_0_f_0();
              }
              {
                erl_backend__erl_code_gen__V_47_47 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), erl_backend__erl_code_gen__V_47_47, 0) = ((MR_Box) (erl_backend__erl_code_gen__V_48_48));
              }
              {
                *erl_backend__erl_code_gen__Statement_14 = erl_backend__elds__join_exprs_2_f_0(erl_backend__erl_code_gen__CondStatement_53, erl_backend__erl_code_gen__V_47_47);
              }
            }
            break;
          case (MR_Integer) 2:
            {
              {
                mercury__require__unexpected_3_p_0((MR_String) "erl_backend.erl_code_gen", (MR_String) "predicate \140erl_backend.erl_code_gen.erl_gen_negation\'/8", (MR_String) "nondet cond");
                return;
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word erl_backend__erl_code_gen__OnSuccess_21;
              MR_Word erl_backend__erl_code_gen__FailCase_22;
              MR_Word erl_backend__erl_code_gen__OtherCase_23;
              MR_Word erl_backend__erl_code_gen__V_32_32;
              MR_Word erl_backend__erl_code_gen__V_33_33;
              MR_Word erl_backend__erl_code_gen__V_36_36;
              MR_Word erl_backend__erl_code_gen__V_37_37;
              MR_Word erl_backend__erl_code_gen__V_39_39;
              MR_Word erl_backend__erl_code_gen__V_40_40;
              MR_Word erl_backend__erl_code_gen__V_42_42;
              MR_Word erl_backend__erl_code_gen__V_43_43;
              MR_Word erl_backend__erl_code_gen__CondStatement_54;

              {
                erl_backend__erl_code_gen__V_33_33 = erl_backend__elds__elds_true_0_f_0();
              }
              {
                erl_backend__erl_code_gen__V_32_32 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), erl_backend__erl_code_gen__V_32_32, 0) = ((MR_Box) (erl_backend__erl_code_gen__V_33_33));
              }
              {
                erl_backend__erl_code_gen__OnSuccess_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), erl_backend__erl_code_gen__OnSuccess_21, 0) = ((MR_Box) (erl_backend__erl_code_gen__V_32_32));
              }
              {
                erl_backend__erl_code_gen__erl_gen_goal_7_p_0((MR_Integer) 1, erl_backend__erl_code_gen__InstMap_11, erl_backend__erl_code_gen__Cond_9, erl_backend__erl_code_gen__OnSuccess_21, &erl_backend__erl_code_gen__CondStatement_54, erl_backend__erl_code_gen__STATE_VARIABLE_Info_0_24, erl_backend__erl_code_gen__STATE_VARIABLE_Info_25);
              }
              {
                erl_backend__erl_code_gen__V_39_39 = erl_backend__elds__elds_fail_0_f_0();
              }
              {
                erl_backend__erl_code_gen__V_40_40 = erl_backend__elds__expr_or_void_1_f_0(erl_backend__erl_code_gen__MaybeSuccessExpr_13);
              }
              {
                erl_backend__erl_code_gen__FailCase_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__FailCase_22, 0) = ((MR_Box) (erl_backend__erl_code_gen__V_39_39));
                MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__FailCase_22, 1) = ((MR_Box) (erl_backend__erl_code_gen__V_40_40));
              }
              {
                erl_backend__erl_code_gen__V_43_43 = erl_backend__elds__elds_fail_0_f_0();
              }
              {
                erl_backend__erl_code_gen__V_42_42 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), erl_backend__erl_code_gen__V_42_42, 0) = ((MR_Box) (erl_backend__erl_code_gen__V_43_43));
              }
              {
                erl_backend__erl_code_gen__OtherCase_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__OtherCase_23, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__OtherCase_23, 1) = ((MR_Box) (erl_backend__erl_code_gen__V_42_42));
              }
              {
                erl_backend__erl_code_gen__V_37_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), erl_backend__erl_code_gen__V_37_37, 0) = ((MR_Box) (erl_backend__erl_code_gen__OtherCase_23));
                MR_hl_field(MR_mktag(1), erl_backend__erl_code_gen__V_37_37, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                erl_backend__erl_code_gen__V_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), erl_backend__erl_code_gen__V_36_36, 0) = ((MR_Box) (erl_backend__erl_code_gen__FailCase_22));
                MR_hl_field(MR_mktag(1), erl_backend__erl_code_gen__V_36_36, 1) = ((MR_Box) (erl_backend__erl_code_gen__V_37_37));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                *erl_backend__erl_code_gen__Statement_14 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (erl_backend__erl_code_gen__CondStatement_54));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (erl_backend__erl_code_gen__V_36_36));
              }
            }
            break;
        }
        break;
    }
  }
}

static void MR_CALL 
erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_105_116_101_95_95_91_54_93_95_48_10_p_0(
  MR_Word erl_backend__erl_code_gen__CodeModel_11,
  MR_Word erl_backend__erl_code_gen__InstMap0_12,
  MR_Word erl_backend__erl_code_gen__Cond_13,
  MR_Word erl_backend__erl_code_gen__Then_14,
  MR_Word erl_backend__erl_code_gen__Else_15,
  MR_Word erl_backend__erl_code_gen__MaybeSuccessExpr0_17,
  MR_Word * erl_backend__erl_code_gen__Statement_18,
  MR_Word erl_backend__erl_code_gen__STATE_VARIABLE_Info_0_57,
  MR_Word * erl_backend__erl_code_gen__STATE_VARIABLE_Info_58)
{
  {
    MR_bool erl_backend__erl_code_gen__succeeded;
    MR_Word erl_backend__erl_code_gen__CondGoalInfo_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__Cond_13, (MR_Integer) 1)));
    MR_Word erl_backend__erl_code_gen__CondCodeModel_22;
    MR_Word erl_backend__erl_code_gen__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__Cond_13, (MR_Integer) 0)));

    {
      erl_backend__erl_code_gen__CondCodeModel_22 = hlds__code_model__goal_info_get_code_model_1_f_0(erl_backend__erl_code_gen__CondGoalInfo_21);
    }
    switch (erl_backend__erl_code_gen__CondCodeModel_22) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word erl_backend__erl_code_gen__CondStatement_23;
          MR_Word erl_backend__erl_code_gen__CondDeterminism_24;
          MR_Word erl_backend__erl_code_gen__STATE_VARIABLE_Info_107_107;

          {
            erl_backend__erl_code_gen__erl_gen_goal_7_p_0((MR_Integer) 0, erl_backend__erl_code_gen__InstMap0_12, erl_backend__erl_code_gen__Cond_13, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &erl_backend__erl_code_gen__CondStatement_23, erl_backend__erl_code_gen__STATE_VARIABLE_Info_0_57, &erl_backend__erl_code_gen__STATE_VARIABLE_Info_107_107);
          }
          {
            erl_backend__erl_code_gen__CondDeterminism_24 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(erl_backend__erl_code_gen__CondGoalInfo_21);
          }
          erl_backend__erl_code_gen__succeeded = (erl_backend__erl_code_gen__CondDeterminism_24 == (MR_Integer) 6);
          if (erl_backend__erl_code_gen__succeeded)
            {
              *erl_backend__erl_code_gen__Statement_18 = erl_backend__erl_code_gen__CondStatement_23;
              *erl_backend__erl_code_gen__STATE_VARIABLE_Info_58 = erl_backend__erl_code_gen__STATE_VARIABLE_Info_107_107;
            }
          else
            {
              MR_Word erl_backend__erl_code_gen__CondInstMap_25;
              MR_Word erl_backend__erl_code_gen__ThenStatement_26;

              {
                hlds__goal_util__update_instmap_3_p_0(erl_backend__erl_code_gen__Cond_13, erl_backend__erl_code_gen__InstMap0_12, &erl_backend__erl_code_gen__CondInstMap_25);
              }
              {
                erl_backend__erl_code_gen__erl_gen_goal_7_p_0(erl_backend__erl_code_gen__CodeModel_11, erl_backend__erl_code_gen__CondInstMap_25, erl_backend__erl_code_gen__Then_14, erl_backend__erl_code_gen__MaybeSuccessExpr0_17, &erl_backend__erl_code_gen__ThenStatement_26, erl_backend__erl_code_gen__STATE_VARIABLE_Info_107_107, erl_backend__erl_code_gen__STATE_VARIABLE_Info_58);
              }
              {
                *erl_backend__erl_code_gen__Statement_18 = erl_backend__elds__join_exprs_2_f_0(erl_backend__erl_code_gen__CondStatement_23, erl_backend__erl_code_gen__ThenStatement_26);
              }
            }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word erl_backend__erl_code_gen__Ref_47;
          MR_Word erl_backend__erl_code_gen__RefExpr_48;
          MR_Word erl_backend__erl_code_gen__MakeRef_49;
          MR_Word erl_backend__erl_code_gen__PutRef_50;
          MR_Word erl_backend__erl_code_gen__GetRef_51;
          MR_Word erl_backend__erl_code_gen__EraseRef_52;
          MR_Word erl_backend__erl_code_gen__PutAndThen_53;
          MR_Word erl_backend__erl_code_gen__CondThen_54;
          MR_Word erl_backend__erl_code_gen__CaseElse_55;
          MR_Word erl_backend__erl_code_gen__OtherCase_56;
          MR_Word erl_backend__erl_code_gen__STATE_VARIABLE_Info_60_60;
          MR_Word erl_backend__erl_code_gen__V_61_61;
          MR_Word erl_backend__erl_code_gen__V_65_65;
          MR_Word erl_backend__erl_code_gen__V_66_66;
          MR_Word erl_backend__erl_code_gen__V_67_67;
          MR_Word erl_backend__erl_code_gen__V_68_68;
          MR_Word erl_backend__erl_code_gen__V_71_71;
          MR_Word erl_backend__erl_code_gen__STATE_VARIABLE_Info_76_76;
          MR_Word erl_backend__erl_code_gen__V_77_77;
          MR_Word erl_backend__erl_code_gen__STATE_VARIABLE_Info_78_78;
          MR_Word erl_backend__erl_code_gen__V_80_80;
          MR_Word erl_backend__erl_code_gen__V_81_81;
          MR_Word erl_backend__erl_code_gen__V_83_83;
          MR_Word erl_backend__erl_code_gen__V_84_84;
          MR_Word erl_backend__erl_code_gen__V_85_85;
          MR_Word erl_backend__erl_code_gen__V_87_87;
          MR_Word erl_backend__erl_code_gen__V_88_88;
          MR_Word erl_backend__erl_code_gen__V_91_91;
          MR_Word erl_backend__erl_code_gen__ThenStatement_112;
          MR_Word erl_backend__erl_code_gen__InstMap1_113;
          MR_Word erl_backend__erl_code_gen__InstMap2_114;
          MR_Word erl_backend__erl_code_gen__ElseStatement_115;
          MR_Word erl_backend__erl_code_gen__TrueCase_116;

          {
            erl_backend__erl_code_util__erl_gen_info_new_named_var_4_p_0((MR_String) "Ref", &erl_backend__erl_code_gen__Ref_47, erl_backend__erl_code_gen__STATE_VARIABLE_Info_0_57, &erl_backend__erl_code_gen__STATE_VARIABLE_Info_60_60);
          }
          {
            erl_backend__erl_code_gen__ground_var_in_instmap_3_p_0(erl_backend__erl_code_gen__Ref_47, erl_backend__erl_code_gen__InstMap0_12, &erl_backend__erl_code_gen__InstMap1_113);
          }
          {
            erl_backend__erl_code_gen__RefExpr_48 = erl_backend__elds__expr_from_var_1_f_0(erl_backend__erl_code_gen__Ref_47);
          }
          {
            erl_backend__erl_code_gen__V_61_61 = erl_backend__elds__elds_call_builtin_2_f_0((MR_String) "make_ref", (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
          }
          {
            erl_backend__erl_code_gen__MakeRef_49 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), erl_backend__erl_code_gen__MakeRef_49, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
            MR_hl_field(MR_mktag(3), erl_backend__erl_code_gen__MakeRef_49, 1) = ((MR_Box) (erl_backend__erl_code_gen__RefExpr_48));
            MR_hl_field(MR_mktag(3), erl_backend__erl_code_gen__MakeRef_49, 2) = ((MR_Box) (erl_backend__erl_code_gen__V_61_61));
          }
          {
            erl_backend__erl_code_gen__V_68_68 = erl_backend__elds__elds_true_0_f_0();
          }
          {
            erl_backend__erl_code_gen__V_67_67 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), erl_backend__erl_code_gen__V_67_67, 0) = ((MR_Box) (erl_backend__erl_code_gen__V_68_68));
          }
          {
            erl_backend__erl_code_gen__V_66_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), erl_backend__erl_code_gen__V_66_66, 0) = ((MR_Box) (erl_backend__erl_code_gen__V_67_67));
            MR_hl_field(MR_mktag(1), erl_backend__erl_code_gen__V_66_66, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            erl_backend__erl_code_gen__V_65_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), erl_backend__erl_code_gen__V_65_65, 0) = ((MR_Box) (erl_backend__erl_code_gen__RefExpr_48));
            MR_hl_field(MR_mktag(1), erl_backend__erl_code_gen__V_65_65, 1) = ((MR_Box) (erl_backend__erl_code_gen__V_66_66));
          }
          {
            erl_backend__erl_code_gen__PutRef_50 = erl_backend__elds__elds_call_builtin_2_f_0((MR_String) "put", erl_backend__erl_code_gen__V_65_65);
          }
          {
            erl_backend__erl_code_gen__V_71_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), erl_backend__erl_code_gen__V_71_71, 0) = ((MR_Box) (erl_backend__erl_code_gen__RefExpr_48));
            MR_hl_field(MR_mktag(1), erl_backend__erl_code_gen__V_71_71, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            erl_backend__erl_code_gen__GetRef_51 = erl_backend__elds__elds_call_builtin_2_f_0((MR_String) "get", erl_backend__erl_code_gen__V_71_71);
          }
          {
            erl_backend__erl_code_gen__EraseRef_52 = erl_backend__elds__elds_call_builtin_2_f_0((MR_String) "erase", erl_backend__erl_code_gen__V_71_71);
          }
          {
            hlds__goal_util__update_instmap_3_p_0(erl_backend__erl_code_gen__Cond_13, erl_backend__erl_code_gen__InstMap1_113, &erl_backend__erl_code_gen__InstMap2_114);
          }
          {
            erl_backend__erl_code_gen__erl_gen_goal_7_p_0(erl_backend__erl_code_gen__CodeModel_11, erl_backend__erl_code_gen__InstMap2_114, erl_backend__erl_code_gen__Then_14, erl_backend__erl_code_gen__MaybeSuccessExpr0_17, &erl_backend__erl_code_gen__ThenStatement_112, erl_backend__erl_code_gen__STATE_VARIABLE_Info_60_60, &erl_backend__erl_code_gen__STATE_VARIABLE_Info_76_76);
          }
          {
            erl_backend__erl_code_gen__PutAndThen_53 = erl_backend__elds__join_exprs_2_f_0(erl_backend__erl_code_gen__PutRef_50, erl_backend__erl_code_gen__ThenStatement_112);
          }
          {
            erl_backend__erl_code_gen__V_77_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), erl_backend__erl_code_gen__V_77_77, 0) = ((MR_Box) (erl_backend__erl_code_gen__PutAndThen_53));
          }
          {
            erl_backend__erl_code_gen__erl_gen_goal_7_p_0(erl_backend__erl_code_gen__CondCodeModel_22, erl_backend__erl_code_gen__InstMap1_113, erl_backend__erl_code_gen__Cond_13, erl_backend__erl_code_gen__V_77_77, &erl_backend__erl_code_gen__CondThen_54, erl_backend__erl_code_gen__STATE_VARIABLE_Info_76_76, &erl_backend__erl_code_gen__STATE_VARIABLE_Info_78_78);
          }
          {
            erl_backend__erl_code_gen__erl_gen_goal_7_p_0(erl_backend__erl_code_gen__CodeModel_11, erl_backend__erl_code_gen__InstMap1_113, erl_backend__erl_code_gen__Else_15, erl_backend__erl_code_gen__MaybeSuccessExpr0_17, &erl_backend__erl_code_gen__ElseStatement_115, erl_backend__erl_code_gen__STATE_VARIABLE_Info_78_78, erl_backend__erl_code_gen__STATE_VARIABLE_Info_58);
          }
          {
            erl_backend__erl_code_gen__V_83_83 = erl_backend__elds__elds_true_0_f_0();
          }
          {
            erl_backend__erl_code_gen__V_85_85 = erl_backend__elds__elds_true_0_f_0();
          }
          {
            erl_backend__erl_code_gen__V_84_84 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), erl_backend__erl_code_gen__V_84_84, 0) = ((MR_Box) (erl_backend__erl_code_gen__V_85_85));
          }
          {
            erl_backend__erl_code_gen__TrueCase_116 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__TrueCase_116, 0) = ((MR_Box) (erl_backend__erl_code_gen__V_83_83));
            MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__TrueCase_116, 1) = ((MR_Box) (erl_backend__erl_code_gen__V_84_84));
          }
          {
            erl_backend__erl_code_gen__OtherCase_56 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__OtherCase_56, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__OtherCase_56, 1) = ((MR_Box) (erl_backend__erl_code_gen__ElseStatement_115));
          }
          {
            erl_backend__erl_code_gen__V_81_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), erl_backend__erl_code_gen__V_81_81, 0) = ((MR_Box) (erl_backend__erl_code_gen__OtherCase_56));
            MR_hl_field(MR_mktag(1), erl_backend__erl_code_gen__V_81_81, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            erl_backend__erl_code_gen__V_80_80 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), erl_backend__erl_code_gen__V_80_80, 0) = ((MR_Box) (erl_backend__erl_code_gen__TrueCase_116));
            MR_hl_field(MR_mktag(1), erl_backend__erl_code_gen__V_80_80, 1) = ((MR_Box) (erl_backend__erl_code_gen__V_81_81));
          }
          {
            erl_backend__erl_code_gen__CaseElse_55 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), erl_backend__erl_code_gen__CaseElse_55, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
            MR_hl_field(MR_mktag(3), erl_backend__erl_code_gen__CaseElse_55, 1) = ((MR_Box) (erl_backend__erl_code_gen__GetRef_51));
            MR_hl_field(MR_mktag(3), erl_backend__erl_code_gen__CaseElse_55, 2) = ((MR_Box) (erl_backend__erl_code_gen__V_80_80));
          }
          {
            erl_backend__erl_code_gen__V_88_88 = erl_backend__elds__join_exprs_2_f_0(erl_backend__erl_code_gen__CondThen_54, erl_backend__erl_code_gen__CaseElse_55);
          }
          {
            erl_backend__erl_code_gen__V_91_91 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), erl_backend__erl_code_gen__V_91_91, 0) = ((MR_Box) (erl_backend__erl_code_gen__EraseRef_52));
          }
          {
            erl_backend__erl_code_gen__V_87_87 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), erl_backend__erl_code_gen__V_87_87, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
            MR_hl_field(MR_mktag(3), erl_backend__erl_code_gen__V_87_87, 1) = ((MR_Box) (erl_backend__erl_code_gen__V_88_88));
            MR_hl_field(MR_mktag(3), erl_backend__erl_code_gen__V_87_87, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            MR_hl_field(MR_mktag(3), erl_backend__erl_code_gen__V_87_87, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            MR_hl_field(MR_mktag(3), erl_backend__erl_code_gen__V_87_87, 4) = ((MR_Box) (erl_backend__erl_code_gen__V_91_91));
          }
          {
            *erl_backend__erl_code_gen__Statement_18 = erl_backend__elds__join_exprs_2_f_0(erl_backend__erl_code_gen__MakeRef_49, erl_backend__erl_code_gen__V_87_87);
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word erl_backend__erl_code_gen__TypeCtorInfo_117_117;
          MR_Word erl_backend__erl_code_gen__CondVars_27;
          MR_Word erl_backend__erl_code_gen__InstMap0PostCond_28;
          MR_Word erl_backend__erl_code_gen__ThenVars_29;
          MR_Word erl_backend__erl_code_gen__ElseVars_30;
          MR_Word erl_backend__erl_code_gen__CondVarsList_31;
          MR_Word erl_backend__erl_code_gen__CondVarsTerm_32;
          MR_Word erl_backend__erl_code_gen__CondStatement0_33;
          MR_Word erl_backend__erl_code_gen__Subn_34;
          MR_Word erl_backend__erl_code_gen__BoundNonLocals_35;
          MR_Word erl_backend__erl_code_gen__MaybeMakeClosure_36;
          MR_Word erl_backend__erl_code_gen__MaybeSuccessExpr_37;
          MR_Word erl_backend__erl_code_gen__InstMap1_38;
          MR_Word erl_backend__erl_code_gen__InstMap2_39;
          MR_Word erl_backend__erl_code_gen__ThenStatement0_40;
          MR_Word erl_backend__erl_code_gen__ElseStatement0_41;
          MR_Word erl_backend__erl_code_gen__ElseStatement_42;
          MR_Word erl_backend__erl_code_gen__IfStatement_43;
          MR_Word erl_backend__erl_code_gen__V_92_92;
          MR_Word erl_backend__erl_code_gen__V_94_94;
          MR_Word erl_backend__erl_code_gen__STATE_VARIABLE_Info_95_95;
          MR_Word erl_backend__erl_code_gen__V_96_96;
          MR_Word erl_backend__erl_code_gen__STATE_VARIABLE_Info_97_97;
          MR_Word erl_backend__erl_code_gen__STATE_VARIABLE_Info_98_98;
          MR_Word erl_backend__erl_code_gen__STATE_VARIABLE_Info_99_99;
          MR_Word erl_backend__erl_code_gen__CondStatement_109;
          MR_Word erl_backend__erl_code_gen__CondDeterminism_110;
          MR_Word erl_backend__erl_code_gen__ThenStatement_111;

          {
            erl_backend__erl_code_util__erl_bound_nonlocals_in_goal_4_p_0(erl_backend__erl_code_gen__STATE_VARIABLE_Info_0_57, erl_backend__erl_code_gen__InstMap0_12, erl_backend__erl_code_gen__Cond_13, &erl_backend__erl_code_gen__CondVars_27);
          }
          {
            hlds__goal_util__update_instmap_3_p_0(erl_backend__erl_code_gen__Cond_13, erl_backend__erl_code_gen__InstMap0_12, &erl_backend__erl_code_gen__InstMap0PostCond_28);
          }
          {
            erl_backend__erl_code_util__erl_bound_nonlocals_in_goal_4_p_0(erl_backend__erl_code_gen__STATE_VARIABLE_Info_0_57, erl_backend__erl_code_gen__InstMap0PostCond_28, erl_backend__erl_code_gen__Then_14, &erl_backend__erl_code_gen__ThenVars_29);
          }
          {
            erl_backend__erl_code_util__erl_bound_nonlocals_in_goal_4_p_0(erl_backend__erl_code_gen__STATE_VARIABLE_Info_0_57, erl_backend__erl_code_gen__InstMap0_12, erl_backend__erl_code_gen__Else_15, &erl_backend__erl_code_gen__ElseVars_30);
          }
          erl_backend__erl_code_gen__TypeCtorInfo_117_117 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
          {
            erl_backend__erl_code_gen__CondVarsList_31 = parse_tree__set_of_var__to_sorted_list_1_f_0(erl_backend__erl_code_gen__TypeCtorInfo_117_117, erl_backend__erl_code_gen__CondVars_27);
          }
          {
            erl_backend__erl_code_gen__V_92_92 = erl_backend__elds__exprs_from_vars_1_f_0(erl_backend__erl_code_gen__CondVarsList_31);
          }
          {
            erl_backend__erl_code_gen__CondVarsTerm_32 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), erl_backend__erl_code_gen__CondVarsTerm_32, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
            MR_hl_field(MR_mktag(3), erl_backend__erl_code_gen__CondVarsTerm_32, 1) = ((MR_Box) (erl_backend__erl_code_gen__V_92_92));
          }
          {
            erl_backend__erl_code_gen__V_96_96 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), erl_backend__erl_code_gen__V_96_96, 0) = ((MR_Box) (erl_backend__erl_code_gen__CondVarsTerm_32));
          }
          {
            erl_backend__erl_code_gen__V_94_94 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), erl_backend__erl_code_gen__V_94_94, 0) = ((MR_Box) (erl_backend__erl_code_gen__V_96_96));
          }
          {
            erl_backend__erl_code_gen__erl_gen_goal_7_p_0((MR_Integer) 1, erl_backend__erl_code_gen__InstMap0_12, erl_backend__erl_code_gen__Cond_13, erl_backend__erl_code_gen__V_94_94, &erl_backend__erl_code_gen__CondStatement0_33, erl_backend__erl_code_gen__STATE_VARIABLE_Info_0_57, &erl_backend__erl_code_gen__STATE_VARIABLE_Info_95_95);
          }
          {
            erl_backend__erl_code_util__erl_create_renaming_4_p_0(erl_backend__erl_code_gen__CondVarsList_31, &erl_backend__erl_code_gen__Subn_34, erl_backend__erl_code_gen__STATE_VARIABLE_Info_95_95, &erl_backend__erl_code_gen__STATE_VARIABLE_Info_97_97);
          }
          {
            erl_backend__erl_code_util__erl_rename_vars_in_expr_3_p_0(erl_backend__erl_code_gen__Subn_34, erl_backend__erl_code_gen__CondStatement0_33, &erl_backend__erl_code_gen__CondStatement_109);
          }
          {
            erl_backend__erl_code_gen__BoundNonLocals_35 = parse_tree__set_of_var__union_2_f_0(erl_backend__erl_code_gen__TypeCtorInfo_117_117, erl_backend__erl_code_gen__ThenVars_29, erl_backend__erl_code_gen__ElseVars_30);
          }
          {
            erl_backend__erl_code_gen__maybe_create_closure_for_success_expr_8_p_0(erl_backend__erl_code_gen__BoundNonLocals_35, erl_backend__erl_code_gen__MaybeSuccessExpr0_17, &erl_backend__erl_code_gen__MaybeMakeClosure_36, &erl_backend__erl_code_gen__MaybeSuccessExpr_37, erl_backend__erl_code_gen__InstMap0_12, &erl_backend__erl_code_gen__InstMap1_38, erl_backend__erl_code_gen__STATE_VARIABLE_Info_97_97, &erl_backend__erl_code_gen__STATE_VARIABLE_Info_98_98);
          }
          {
            hlds__goal_util__update_instmap_3_p_0(erl_backend__erl_code_gen__Cond_13, erl_backend__erl_code_gen__InstMap1_38, &erl_backend__erl_code_gen__InstMap2_39);
          }
          {
            erl_backend__erl_code_gen__erl_gen_goal_7_p_0(erl_backend__erl_code_gen__CodeModel_11, erl_backend__erl_code_gen__InstMap2_39, erl_backend__erl_code_gen__Then_14, erl_backend__erl_code_gen__MaybeSuccessExpr_37, &erl_backend__erl_code_gen__ThenStatement0_40, erl_backend__erl_code_gen__STATE_VARIABLE_Info_98_98, &erl_backend__erl_code_gen__STATE_VARIABLE_Info_99_99);
          }
          {
            erl_backend__erl_code_gen__erl_gen_goal_7_p_0(erl_backend__erl_code_gen__CodeModel_11, erl_backend__erl_code_gen__InstMap1_38, erl_backend__erl_code_gen__Else_15, erl_backend__erl_code_gen__MaybeSuccessExpr_37, &erl_backend__erl_code_gen__ElseStatement0_41, erl_backend__erl_code_gen__STATE_VARIABLE_Info_99_99, erl_backend__erl_code_gen__STATE_VARIABLE_Info_58);
          }
          {
            erl_backend__erl_code_util__erl_bind_unbound_vars_6_p_0(*erl_backend__erl_code_gen__STATE_VARIABLE_Info_58, erl_backend__erl_code_gen__ElseVars_30, erl_backend__erl_code_gen__Then_14, erl_backend__erl_code_gen__InstMap1_38, erl_backend__erl_code_gen__ThenStatement0_40, &erl_backend__erl_code_gen__ThenStatement_111);
          }
          {
            erl_backend__erl_code_util__erl_bind_unbound_vars_6_p_0(*erl_backend__erl_code_gen__STATE_VARIABLE_Info_58, erl_backend__erl_code_gen__ThenVars_29, erl_backend__erl_code_gen__Else_15, erl_backend__erl_code_gen__InstMap0_12, erl_backend__erl_code_gen__ElseStatement0_41, &erl_backend__erl_code_gen__ElseStatement_42);
          }
          {
            erl_backend__erl_code_gen__CondDeterminism_110 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(erl_backend__erl_code_gen__CondGoalInfo_21);
          }
          erl_backend__erl_code_gen__succeeded = (erl_backend__erl_code_gen__CondDeterminism_110 == (MR_Integer) 7);
          if (erl_backend__erl_code_gen__succeeded)
            {
              erl_backend__erl_code_gen__IfStatement_43 = erl_backend__elds__join_exprs_2_f_0(erl_backend__erl_code_gen__CondStatement_109, erl_backend__erl_code_gen__ElseStatement_42);
            }
          else
            {
              MR_Word erl_backend__erl_code_gen__CaseExpr_44;
              MR_Word erl_backend__erl_code_gen__TrueCase_45;
              MR_Word erl_backend__erl_code_gen__FalseCase_46;
              MR_Word erl_backend__erl_code_gen__V_101_101;
              MR_Word erl_backend__erl_code_gen__V_102_102;

              {
                erl_backend__erl_code_gen__TrueCase_45 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__TrueCase_45, 0) = ((MR_Box) (erl_backend__erl_code_gen__CondVarsTerm_32));
                MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__TrueCase_45, 1) = ((MR_Box) (erl_backend__erl_code_gen__ThenStatement_111));
              }
              {
                erl_backend__erl_code_gen__FalseCase_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__FalseCase_46, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__FalseCase_46, 1) = ((MR_Box) (erl_backend__erl_code_gen__ElseStatement_42));
              }
              {
                erl_backend__erl_code_gen__V_102_102 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), erl_backend__erl_code_gen__V_102_102, 0) = ((MR_Box) (erl_backend__erl_code_gen__FalseCase_46));
                MR_hl_field(MR_mktag(1), erl_backend__erl_code_gen__V_102_102, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                erl_backend__erl_code_gen__V_101_101 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), erl_backend__erl_code_gen__V_101_101, 0) = ((MR_Box) (erl_backend__erl_code_gen__TrueCase_45));
                MR_hl_field(MR_mktag(1), erl_backend__erl_code_gen__V_101_101, 1) = ((MR_Box) (erl_backend__erl_code_gen__V_102_102));
              }
              {
                erl_backend__erl_code_gen__CaseExpr_44 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), erl_backend__erl_code_gen__CaseExpr_44, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                MR_hl_field(MR_mktag(3), erl_backend__erl_code_gen__CaseExpr_44, 1) = ((MR_Box) (erl_backend__erl_code_gen__CondStatement_109));
                MR_hl_field(MR_mktag(3), erl_backend__erl_code_gen__CaseExpr_44, 2) = ((MR_Box) (erl_backend__erl_code_gen__V_101_101));
              }
              {
                erl_backend__erl_code_util__maybe_simplify_nested_cases_2_p_0(erl_backend__erl_code_gen__CaseExpr_44, &erl_backend__erl_code_gen__IfStatement_43);
              }
            }
          {
            *erl_backend__erl_code_gen__Statement_18 = erl_backend__elds__maybe_join_exprs1_2_f_0(erl_backend__erl_code_gen__MaybeMakeClosure_36, erl_backend__erl_code_gen__IfStatement_43);
          }
        }
        break;
    }
  }
}

static void MR_CALL 
erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_10_p_0_10(
  MR_Box erl_backend__erl_code_gen__closure_arg,
  MR_Box erl_backend__erl_code_gen__wrapper_arg_1,
  MR_Box * erl_backend__erl_code_gen__wrapper_arg_2,
  MR_Box erl_backend__erl_code_gen__wrapper_arg_3,
  MR_Box * erl_backend__erl_code_gen__wrapper_arg_4)
{
  {
    MR_Box erl_backend__erl_code_gen__closure = erl_backend__erl_code_gen__closure_arg;
    MR_Word erl_backend__erl_code_gen__conv6_ELDSCase_16;
    MR_Word erl_backend__erl_code_gen__conv5_STATE_VARIABLE_Info_30;

    {
      erl_backend__erl_code_gen__erl_gen_case_9_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__closure, (MR_Integer) 6))), ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__closure, (MR_Integer) 7))), ((MR_Word) erl_backend__erl_code_gen__wrapper_arg_1), &erl_backend__erl_code_gen__conv6_ELDSCase_16, ((MR_Word) erl_backend__erl_code_gen__wrapper_arg_3), &erl_backend__erl_code_gen__conv5_STATE_VARIABLE_Info_30);
    }
    *erl_backend__erl_code_gen__wrapper_arg_2 = ((MR_Box) (erl_backend__erl_code_gen__conv6_ELDSCase_16));
    *erl_backend__erl_code_gen__wrapper_arg_4 = ((MR_Box) (erl_backend__erl_code_gen__conv5_STATE_VARIABLE_Info_30));
  }
}

static void MR_CALL 
erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_10_p_0_9(
  MR_Box erl_backend__erl_code_gen__closure_arg,
  MR_Box erl_backend__erl_code_gen__wrapper_arg_1,
  MR_Box * erl_backend__erl_code_gen__wrapper_arg_2,
  MR_Box erl_backend__erl_code_gen__wrapper_arg_3,
  MR_Box * erl_backend__erl_code_gen__wrapper_arg_4)
{
  {
    MR_Box erl_backend__erl_code_gen__closure = erl_backend__erl_code_gen__closure_arg;
    MR_Word erl_backend__erl_code_gen__conv4_ELDSCase_14;
    MR_Word erl_backend__erl_code_gen__conv3_STATE_VARIABLE_Info_25;

    {
      erl_backend__erl_code_gen__erl_gen_case_on_atom_8_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__closure, (MR_Integer) 6))), ((MR_Word) erl_backend__erl_code_gen__wrapper_arg_1), &erl_backend__erl_code_gen__conv4_ELDSCase_14, ((MR_Word) erl_backend__erl_code_gen__wrapper_arg_3), &erl_backend__erl_code_gen__conv3_STATE_VARIABLE_Info_25);
    }
    *erl_backend__erl_code_gen__wrapper_arg_2 = ((MR_Box) (erl_backend__erl_code_gen__conv4_ELDSCase_14));
    *erl_backend__erl_code_gen__wrapper_arg_4 = ((MR_Box) (erl_backend__erl_code_gen__conv3_STATE_VARIABLE_Info_25));
  }
}

static MR_Box MR_CALL 
erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_10_p_0_1(
  MR_Box erl_backend__erl_code_gen__closure_arg,
  MR_Box erl_backend__erl_code_gen__wrapper_arg_1)
{
  {
    MR_Box erl_backend__erl_code_gen__wrapper_arg_2;
    MR_Box erl_backend__erl_code_gen__closure = erl_backend__erl_code_gen__closure_arg;
    MR_Word erl_backend__erl_code_gen__conv0_LambdaHeadVar__2_50;

    {
      erl_backend__erl_code_gen__conv0_LambdaHeadVar__2_50 = erl_backend__erl_code_gen__IntroducedFrom__func__erl_gen_switch__792__1_1_f_0(((MR_Word) erl_backend__erl_code_gen__wrapper_arg_1));
    }
    erl_backend__erl_code_gen__wrapper_arg_2 = ((MR_Box) (erl_backend__erl_code_gen__conv0_LambdaHeadVar__2_50));
    return erl_backend__erl_code_gen__wrapper_arg_2;
  }
}

static void MR_CALL 
erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_10_p_0_2(
  void * erl_backend__erl_code_gen__env_ptr_arg)
{
  {
    struct erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_95_49_48_95_112_95_48_95_101_110_118_0_s * erl_backend__erl_code_gen__env_ptr = (struct erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_95_49_48_95_112_95_48_95_101_110_118_0_s *) erl_backend__erl_code_gen__env_ptr_arg;

    MR_builtin_longjmp((erl_backend__erl_code_gen__env_ptr)->erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__commit_0, 1);
  }
}

static void MR_CALL 
erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_10_p_0_4(
  void * erl_backend__erl_code_gen__env_ptr_arg)
{
  {
    struct erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_95_49_48_95_112_95_48_95_101_110_118_0_s * erl_backend__erl_code_gen__env_ptr = (struct erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_95_49_48_95_112_95_48_95_101_110_118_0_s *) erl_backend__erl_code_gen__env_ptr_arg;

    (erl_backend__erl_code_gen__env_ptr)->erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__V_57_57 = ((MR_Word) (erl_backend__erl_code_gen__env_ptr)->erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__conv1_V_57_57);
    {
      erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_10_p_0_3(erl_backend__erl_code_gen__env_ptr);
    }
  }
}

static void MR_CALL 
erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_10_p_0_5(
  void * erl_backend__erl_code_gen__env_ptr_arg)
{
  {
    struct erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_95_49_48_95_112_95_48_95_101_110_118_0_s * erl_backend__erl_code_gen__env_ptr = (struct erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_95_49_48_95_112_95_48_95_101_110_118_0_s *) erl_backend__erl_code_gen__env_ptr_arg;

    {
      MR_Integer erl_backend__erl_code_gen__V_59_59;

      {
        erl_backend__erl_code_gen__V_59_59 = mercury__string__length_1_f_0((erl_backend__erl_code_gen__env_ptr)->erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__String_32);
      }
      (erl_backend__erl_code_gen__env_ptr)->erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__succeeded = (erl_backend__erl_code_gen__V_59_59 <= (MR_Integer) 255);
      (erl_backend__erl_code_gen__env_ptr)->erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__succeeded = !((erl_backend__erl_code_gen__env_ptr)->erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__succeeded);
      if ((erl_backend__erl_code_gen__env_ptr)->erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__succeeded)
        {
          erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_10_p_0_2(erl_backend__erl_code_gen__env_ptr);
        }
    }
  }
}

static void MR_CALL 
erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_10_p_0_7(
  void * erl_backend__erl_code_gen__env_ptr_arg)
{
  {
    struct erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_95_49_48_95_112_95_48_95_101_110_118_0_s * erl_backend__erl_code_gen__env_ptr = (struct erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_95_49_48_95_112_95_48_95_101_110_118_0_s *) erl_backend__erl_code_gen__env_ptr_arg;

    (erl_backend__erl_code_gen__env_ptr)->erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__V_58_58 = ((MR_Word) (erl_backend__erl_code_gen__env_ptr)->erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__conv2_V_58_58);
    {
      erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_10_p_0_6(erl_backend__erl_code_gen__env_ptr);
    }
  }
}

static void MR_CALL 
erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_10_p_0_6(
  void * erl_backend__erl_code_gen__env_ptr_arg)
{
  {
    struct erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_95_49_48_95_112_95_48_95_101_110_118_0_s * erl_backend__erl_code_gen__env_ptr = (struct erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_95_49_48_95_112_95_48_95_101_110_118_0_s *) erl_backend__erl_code_gen__env_ptr_arg;

    (erl_backend__erl_code_gen__env_ptr)->erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__succeeded = ((((MR_tag((MR_Word) (erl_backend__erl_code_gen__env_ptr)->erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__V_58_58)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), (erl_backend__erl_code_gen__env_ptr)->erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__V_58_58, (MR_Integer) 0)))) == (MR_Integer) 8)));
    if ((erl_backend__erl_code_gen__env_ptr)->erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__succeeded)
      {
        (erl_backend__erl_code_gen__env_ptr)->erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__String_32 = ((MR_String) (MR_hl_field(MR_mktag(3), (erl_backend__erl_code_gen__env_ptr)->erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__V_58_58, (MR_Integer) 1)));
        {
          erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_10_p_0_5(erl_backend__erl_code_gen__env_ptr);
        }
      }
  }
}

static void MR_CALL 
erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_10_p_0_3(
  void * erl_backend__erl_code_gen__env_ptr_arg)
{
  {
    struct erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_95_49_48_95_112_95_48_95_101_110_118_0_s * erl_backend__erl_code_gen__env_ptr = (struct erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_95_49_48_95_112_95_48_95_101_110_118_0_s *) erl_backend__erl_code_gen__env_ptr_arg;

    {
      MR_Word erl_backend__erl_code_gen__V_35_35;

      (erl_backend__erl_code_gen__env_ptr)->erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__MainConsId_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), (erl_backend__erl_code_gen__env_ptr)->erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__V_57_57, (MR_Integer) 0)));
      (erl_backend__erl_code_gen__env_ptr)->erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__OtherConsIds_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), (erl_backend__erl_code_gen__env_ptr)->erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__V_57_57, (MR_Integer) 1)));
      erl_backend__erl_code_gen__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), (erl_backend__erl_code_gen__env_ptr)->erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__V_57_57, (MR_Integer) 2)));
      (erl_backend__erl_code_gen__env_ptr)->erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__succeeded = ((((MR_tag((MR_Word) (erl_backend__erl_code_gen__env_ptr)->erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__MainConsId_33)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), (erl_backend__erl_code_gen__env_ptr)->erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__MainConsId_33, (MR_Integer) 0)))) == (MR_Integer) 8)));
      if ((erl_backend__erl_code_gen__env_ptr)->erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__succeeded)
        {
          (erl_backend__erl_code_gen__env_ptr)->erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__String_32 = ((MR_String) (MR_hl_field(MR_mktag(3), (erl_backend__erl_code_gen__env_ptr)->erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__MainConsId_33, (MR_Integer) 1)));
          {
            erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_10_p_0_5(erl_backend__erl_code_gen__env_ptr);
          }
        }
      {
        {
          mercury__list__member_2_p_1((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0, &(erl_backend__erl_code_gen__env_ptr)->erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__conv2_V_58_58, (erl_backend__erl_code_gen__env_ptr)->erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__OtherConsIds_34, erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_10_p_0_7, erl_backend__erl_code_gen__env_ptr);
        }
      }
    }
  }
}

static void MR_CALL 
erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_10_p_0_8(
  void * erl_backend__erl_code_gen__env_ptr_arg)
{
  {
    struct erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_95_49_48_95_112_95_48_95_101_110_118_0_s * erl_backend__erl_code_gen__env_ptr = (struct erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_95_49_48_95_112_95_48_95_101_110_118_0_s *) erl_backend__erl_code_gen__env_ptr_arg;

    if (MR_builtin_setjmp((erl_backend__erl_code_gen__env_ptr)->erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__commit_0) == 0)
      {
        {
          mercury__list__member_2_p_1((erl_backend__erl_code_gen__env_ptr)->erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__TypeCtorInfo_85_85, &(erl_backend__erl_code_gen__env_ptr)->erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__conv1_V_57_57, (erl_backend__erl_code_gen__env_ptr)->erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__CasesList_13, erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_10_p_0_4, erl_backend__erl_code_gen__env_ptr);
        }
        (erl_backend__erl_code_gen__env_ptr)->erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__succeeded = MR_FALSE;
      }
    else
      (erl_backend__erl_code_gen__env_ptr)->erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__succeeded = MR_TRUE;
  }
}

static void MR_CALL 
erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_10_p_0(
  MR_Word erl_backend__erl_code_gen__Var_11,
  MR_Word erl_backend__erl_code_gen__CanFail_12,
  MR_Word erl_backend__erl_code_gen__CasesList_13,
  MR_Word erl_backend__erl_code_gen__CodeModel_14,
  MR_Word erl_backend__erl_code_gen__InstMap0_15,
  MR_Word erl_backend__erl_code_gen__MaybeSuccessExpr0_17,
  MR_Word * erl_backend__erl_code_gen__Statement_18,
  MR_Word erl_backend__erl_code_gen__STATE_VARIABLE_Info_0_46,
  MR_Word * erl_backend__erl_code_gen__STATE_VARIABLE_Info_47)
{
  {
    struct erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_95_49_48_95_112_95_48_95_101_110_118_0_s erl_backend__erl_code_gen__env;

    (erl_backend__erl_code_gen__env).erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__CasesList_13 = erl_backend__erl_code_gen__CasesList_13;
    {
      MR_Word erl_backend__erl_code_gen__TypeCtorInfo_96_96;
      MR_Word erl_backend__erl_code_gen__CasesGoals_20;
      MR_Word erl_backend__erl_code_gen__NonLocalsBoundInCases_24;
      MR_Word erl_backend__erl_code_gen__MaybeMakeClosure_25;
      MR_Word erl_backend__erl_code_gen__MaybeSuccessExpr_26;
      MR_Word erl_backend__erl_code_gen__InstMap_27;
      MR_Word erl_backend__erl_code_gen__VarType_28;
      MR_Word erl_backend__erl_code_gen__ModuleInfo_29;
      MR_Word erl_backend__erl_code_gen__TypeCtorCategory_30;
      MR_Word erl_backend__erl_code_gen__MaybeConvertToAtom_39;
      MR_Word erl_backend__erl_code_gen__SwitchVar_40;
      MR_Word erl_backend__erl_code_gen__GenCase_41;
      MR_Word erl_backend__erl_code_gen__ErlCases0_42;
      MR_Word erl_backend__erl_code_gen__ErlCases_44;
      MR_Word erl_backend__erl_code_gen__CaseExpr_45;
      MR_Word erl_backend__erl_code_gen__STATE_VARIABLE_Info_51_51;
      MR_Word erl_backend__erl_code_gen__STATE_VARIABLE_Info_62_62;
      MR_Word erl_backend__erl_code_gen__V_78_78;
      MR_Word erl_backend__erl_code_gen__V_79_79;
      MR_Word erl_backend__erl_code_gen__Globals_31;
      MR_Word erl_backend__erl_code_gen__V_52_52;
      MR_Word erl_backend__erl_code_gen__V_53_53;
      MR_Word erl_backend__erl_code_gen__V_54_54;
      MR_Integer erl_backend__erl_code_gen__V_55_55;
      MR_Integer erl_backend__erl_code_gen__V_56_56;
      MR_Box erl_backend__erl_code_gen__conv7_STATE_VARIABLE_Info_47;

      (erl_backend__erl_code_gen__env).erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__TypeCtorInfo_85_85 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0;
      {
        erl_backend__erl_code_gen__CasesGoals_20 = mercury__list__map_2_f_0((erl_backend__erl_code_gen__env).erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__TypeCtorInfo_85_85, (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, (MR_Word) &erl_backend__erl_code_gen_scalar_common_3[1], (erl_backend__erl_code_gen__env).erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__CasesList_13);
      }
      {
        erl_backend__erl_code_gen__union_bound_nonlocals_in_goals_4_p_0(erl_backend__erl_code_gen__STATE_VARIABLE_Info_0_46, erl_backend__erl_code_gen__InstMap0_15, erl_backend__erl_code_gen__CasesGoals_20, &erl_backend__erl_code_gen__NonLocalsBoundInCases_24);
      }
      {
        erl_backend__erl_code_gen__maybe_create_closure_for_success_expr_8_p_0(erl_backend__erl_code_gen__NonLocalsBoundInCases_24, erl_backend__erl_code_gen__MaybeSuccessExpr0_17, &erl_backend__erl_code_gen__MaybeMakeClosure_25, &erl_backend__erl_code_gen__MaybeSuccessExpr_26, erl_backend__erl_code_gen__InstMap0_15, &erl_backend__erl_code_gen__InstMap_27, erl_backend__erl_code_gen__STATE_VARIABLE_Info_0_46, &erl_backend__erl_code_gen__STATE_VARIABLE_Info_51_51);
      }
      {
        erl_backend__erl_code_util__erl_variable_type_3_p_0(erl_backend__erl_code_gen__STATE_VARIABLE_Info_51_51, erl_backend__erl_code_gen__Var_11, &erl_backend__erl_code_gen__VarType_28);
      }
      {
        erl_backend__erl_code_util__erl_gen_info_get_module_info_2_p_0(erl_backend__erl_code_gen__STATE_VARIABLE_Info_51_51, &erl_backend__erl_code_gen__ModuleInfo_29);
      }
      {
        erl_backend__erl_code_gen__TypeCtorCategory_30 = check_hlds__type_util__classify_type_2_f_0(erl_backend__erl_code_gen__ModuleInfo_29, erl_backend__erl_code_gen__VarType_28);
      }
      (erl_backend__erl_code_gen__env).erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__succeeded = ((MR_tag((MR_Word) erl_backend__erl_code_gen__TypeCtorCategory_30)) == (MR_mktag((MR_Integer) 1)));
      if ((erl_backend__erl_code_gen__env).erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__succeeded)
        {
          erl_backend__erl_code_gen__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__erl_code_gen__TypeCtorCategory_30, (MR_Integer) 0)));
          (erl_backend__erl_code_gen__env).erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__succeeded = (erl_backend__erl_code_gen__V_52_52 == (MR_Integer) 3);
          if ((erl_backend__erl_code_gen__env).erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__succeeded)
            {
              {
                hlds__hlds_module__module_info_get_globals_2_p_0(erl_backend__erl_code_gen__ModuleInfo_29, &erl_backend__erl_code_gen__Globals_31);
              }
              erl_backend__erl_code_gen__V_53_53 = (MR_Integer) 484;
              erl_backend__erl_code_gen__V_54_54 = (MR_Integer) 1;
              {
                (erl_backend__erl_code_gen__env).erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__succeeded = libs__globals__lookup_bool_option_3_p_1(erl_backend__erl_code_gen__Globals_31, erl_backend__erl_code_gen__V_53_53, erl_backend__erl_code_gen__V_54_54);
              }
              if ((erl_backend__erl_code_gen__env).erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__succeeded)
                {
                  {
                    erl_backend__erl_code_gen__V_55_55 = mercury__list__length_1_f_0((erl_backend__erl_code_gen__env).erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__TypeCtorInfo_85_85, (erl_backend__erl_code_gen__env).erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__CasesList_13);
                  }
                  erl_backend__erl_code_gen__V_56_56 = (MR_Integer) 50;
                  (erl_backend__erl_code_gen__env).erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__succeeded = (erl_backend__erl_code_gen__V_55_55 > erl_backend__erl_code_gen__V_56_56);
                  if ((erl_backend__erl_code_gen__env).erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__succeeded)
                    {
                      {
                        erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_10_p_0_8(&erl_backend__erl_code_gen__env);
                      }
                      (erl_backend__erl_code_gen__env).erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__succeeded = !((erl_backend__erl_code_gen__env).erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__succeeded);
                    }
                }
            }
        }
      if ((erl_backend__erl_code_gen__env).erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__succeeded)
        {
          MR_Word erl_backend__erl_code_gen__CharList_37;
          MR_Word erl_backend__erl_code_gen__StringToAtom_38;
          MR_Word erl_backend__erl_code_gen__V_64_64;
          MR_Word erl_backend__erl_code_gen__V_65_65;
          MR_Word erl_backend__erl_code_gen__V_67_67;
          MR_Word erl_backend__erl_code_gen__V_68_68;
          MR_Word erl_backend__erl_code_gen__V_70_70;

          {
            erl_backend__erl_code_util__erl_gen_info_new_named_var_4_p_0((MR_String) "Atom", &erl_backend__erl_code_gen__SwitchVar_40, erl_backend__erl_code_gen__STATE_VARIABLE_Info_51_51, &erl_backend__erl_code_gen__STATE_VARIABLE_Info_62_62);
          }
          {
            erl_backend__erl_code_gen__V_65_65 = erl_backend__elds__expr_from_var_1_f_0(erl_backend__erl_code_gen__Var_11);
          }
          {
            erl_backend__erl_code_gen__V_64_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), erl_backend__erl_code_gen__V_64_64, 0) = ((MR_Box) (erl_backend__erl_code_gen__V_65_65));
            MR_hl_field(MR_mktag(1), erl_backend__erl_code_gen__V_64_64, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            erl_backend__erl_code_gen__CharList_37 = erl_backend__elds__elds_call_builtin_2_f_0((MR_String) "binary_to_list", erl_backend__erl_code_gen__V_64_64);
          }
          {
            erl_backend__erl_code_gen__V_67_67 = erl_backend__elds__expr_from_var_1_f_0(erl_backend__erl_code_gen__SwitchVar_40);
          }
          {
            erl_backend__erl_code_gen__V_70_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), erl_backend__erl_code_gen__V_70_70, 0) = ((MR_Box) (erl_backend__erl_code_gen__CharList_37));
            MR_hl_field(MR_mktag(1), erl_backend__erl_code_gen__V_70_70, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            erl_backend__erl_code_gen__V_68_68 = erl_backend__elds__elds_call_builtin_2_f_0((MR_String) "list_to_atom", erl_backend__erl_code_gen__V_70_70);
          }
          {
            erl_backend__erl_code_gen__StringToAtom_38 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), erl_backend__erl_code_gen__StringToAtom_38, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
            MR_hl_field(MR_mktag(3), erl_backend__erl_code_gen__StringToAtom_38, 1) = ((MR_Box) (erl_backend__erl_code_gen__V_67_67));
            MR_hl_field(MR_mktag(3), erl_backend__erl_code_gen__StringToAtom_38, 2) = ((MR_Box) (erl_backend__erl_code_gen__V_68_68));
          }
          {
            erl_backend__erl_code_gen__MaybeConvertToAtom_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), erl_backend__erl_code_gen__MaybeConvertToAtom_39, 0) = ((MR_Box) (erl_backend__erl_code_gen__StringToAtom_38));
          }
          {
            erl_backend__erl_code_gen__GenCase_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__GenCase_41, 0) = ((MR_Box) (&erl_backend__erl_code_gen_scalar_common_6[0]));
            MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__GenCase_41, 1) = ((MR_Box) (erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_10_p_0_9));
            MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__GenCase_41, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
            MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__GenCase_41, 3) = ((MR_Box) (erl_backend__erl_code_gen__CodeModel_14));
            MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__GenCase_41, 4) = ((MR_Box) (erl_backend__erl_code_gen__InstMap_27));
            MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__GenCase_41, 5) = ((MR_Box) (erl_backend__erl_code_gen__NonLocalsBoundInCases_24));
            MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__GenCase_41, 6) = ((MR_Box) (erl_backend__erl_code_gen__MaybeSuccessExpr_26));
          }
        }
      else
        {
          erl_backend__erl_code_gen__MaybeConvertToAtom_39 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          erl_backend__erl_code_gen__SwitchVar_40 = erl_backend__erl_code_gen__Var_11;
          {
            erl_backend__erl_code_gen__GenCase_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__GenCase_41, 0) = ((MR_Box) (&erl_backend__erl_code_gen_scalar_common_7[0]));
            MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__GenCase_41, 1) = ((MR_Box) (erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_10_p_0_10));
            MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__GenCase_41, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
            MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__GenCase_41, 3) = ((MR_Box) (erl_backend__erl_code_gen__VarType_28));
            MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__GenCase_41, 4) = ((MR_Box) (erl_backend__erl_code_gen__CodeModel_14));
            MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__GenCase_41, 5) = ((MR_Box) (erl_backend__erl_code_gen__InstMap_27));
            MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__GenCase_41, 6) = ((MR_Box) (erl_backend__erl_code_gen__NonLocalsBoundInCases_24));
            MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__GenCase_41, 7) = ((MR_Box) (erl_backend__erl_code_gen__MaybeSuccessExpr_26));
          }
          erl_backend__erl_code_gen__STATE_VARIABLE_Info_62_62 = erl_backend__erl_code_gen__STATE_VARIABLE_Info_51_51;
        }
      erl_backend__erl_code_gen__TypeCtorInfo_96_96 = (MR_Word) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_case_0;
      {
        mercury__list__map_foldl_5_p_0((erl_backend__erl_code_gen__env).erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__TypeCtorInfo_85_85, erl_backend__erl_code_gen__TypeCtorInfo_96_96, (MR_Word) &erl_backend__erl_code_util__erl_backend__erl_code_util__type_ctor_info_erl_gen_info_0, erl_backend__erl_code_gen__GenCase_41, (erl_backend__erl_code_gen__env).erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__CasesList_13, &erl_backend__erl_code_gen__ErlCases0_42, ((MR_Box) (erl_backend__erl_code_gen__STATE_VARIABLE_Info_62_62)), &erl_backend__erl_code_gen__conv7_STATE_VARIABLE_Info_47);
      }
      *erl_backend__erl_code_gen__STATE_VARIABLE_Info_47 = ((MR_Word) erl_backend__erl_code_gen__conv7_STATE_VARIABLE_Info_47);
      switch (erl_backend__erl_code_gen__CanFail_12) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word erl_backend__erl_code_gen__DefaultCase_43;
            MR_Word erl_backend__erl_code_gen__V_74_74;
            MR_Word erl_backend__erl_code_gen__V_75_75;
            MR_Word erl_backend__erl_code_gen__V_76_76;

            {
              erl_backend__erl_code_gen__V_75_75 = erl_backend__elds__elds_fail_0_f_0();
            }
            {
              erl_backend__erl_code_gen__V_74_74 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(2), erl_backend__erl_code_gen__V_74_74, 0) = ((MR_Box) (erl_backend__erl_code_gen__V_75_75));
            }
            {
              erl_backend__erl_code_gen__DefaultCase_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__DefaultCase_43, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__DefaultCase_43, 1) = ((MR_Box) (erl_backend__erl_code_gen__V_74_74));
            }
            {
              erl_backend__erl_code_gen__V_76_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), erl_backend__erl_code_gen__V_76_76, 0) = ((MR_Box) (erl_backend__erl_code_gen__DefaultCase_43));
              MR_hl_field(MR_mktag(1), erl_backend__erl_code_gen__V_76_76, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              erl_backend__erl_code_gen__ErlCases_44 = mercury__list__f_43_43_2_f_0(erl_backend__erl_code_gen__TypeCtorInfo_96_96, erl_backend__erl_code_gen__ErlCases0_42, erl_backend__erl_code_gen__V_76_76);
            }
          }
          break;
        case (MR_Integer) 1:
          erl_backend__erl_code_gen__ErlCases_44 = erl_backend__erl_code_gen__ErlCases0_42;
          break;
      }
      {
        erl_backend__erl_code_gen__V_78_78 = erl_backend__elds__expr_from_var_1_f_0(erl_backend__erl_code_gen__SwitchVar_40);
      }
      {
        erl_backend__erl_code_gen__CaseExpr_45 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), erl_backend__erl_code_gen__CaseExpr_45, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
        MR_hl_field(MR_mktag(3), erl_backend__erl_code_gen__CaseExpr_45, 1) = ((MR_Box) (erl_backend__erl_code_gen__V_78_78));
        MR_hl_field(MR_mktag(3), erl_backend__erl_code_gen__CaseExpr_45, 2) = ((MR_Box) (erl_backend__erl_code_gen__ErlCases_44));
      }
      {
        erl_backend__erl_code_gen__V_79_79 = erl_backend__elds__maybe_join_exprs1_2_f_0(erl_backend__erl_code_gen__MaybeConvertToAtom_39, erl_backend__erl_code_gen__CaseExpr_45);
      }
      {
        *erl_backend__erl_code_gen__Statement_18 = erl_backend__elds__maybe_join_exprs1_2_f_0(erl_backend__erl_code_gen__MaybeMakeClosure_25, erl_backend__erl_code_gen__V_79_79);
      }
    }
  }
}

static void MR_CALL 
erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_99_111_109_109_105_116_95_112_105_101_99_101_115_95_95_91_51_93_95_48_8_p_0(
  MR_Word erl_backend__erl_code_gen__Goal_9,
  MR_Word erl_backend__erl_code_gen__InstMap_10,
  MR_Word erl_backend__erl_code_gen__DoRenaming_12,
  MR_Word * erl_backend__erl_code_gen__GoalStatement_13,
  MR_Word * erl_backend__erl_code_gen__PackedNonLocals_14,
  MR_Word erl_backend__erl_code_gen__STATE_VARIABLE_Info_0_22,
  MR_Word * erl_backend__erl_code_gen__STATE_VARIABLE_Info_23)
{
  {
    MR_bool erl_backend__erl_code_gen__succeeded;
    MR_Word erl_backend__erl_code_gen__NonLocalsSet_16;
    MR_Word erl_backend__erl_code_gen__NonLocals_17;
    MR_Word erl_backend__erl_code_gen__Throw_18;
    MR_Word erl_backend__erl_code_gen__ThrowValue_19;
    MR_Word erl_backend__erl_code_gen__GoalStatement0_20;
    MR_Word erl_backend__erl_code_gen__V_24_24;
    MR_Word erl_backend__erl_code_gen__V_25_25;
    MR_Word erl_backend__erl_code_gen__V_26_26;
    MR_Word erl_backend__erl_code_gen__V_27_27;
    MR_Word erl_backend__erl_code_gen__V_29_29;
    MR_Word erl_backend__erl_code_gen__V_30_30;
    MR_Word erl_backend__erl_code_gen__V_32_32;
    MR_Word erl_backend__erl_code_gen__STATE_VARIABLE_Info_33_33;

    {
      erl_backend__erl_code_util__erl_bound_nonlocals_in_goal_4_p_0(erl_backend__erl_code_gen__STATE_VARIABLE_Info_0_22, erl_backend__erl_code_gen__InstMap_10, erl_backend__erl_code_gen__Goal_9, &erl_backend__erl_code_gen__NonLocalsSet_16);
    }
    {
      erl_backend__erl_code_gen__NonLocals_17 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, erl_backend__erl_code_gen__NonLocalsSet_16);
    }
    {
      erl_backend__erl_code_gen__V_26_26 = erl_backend__elds__elds_commit_marker_0_f_0();
    }
    {
      erl_backend__erl_code_gen__V_30_30 = erl_backend__elds__exprs_from_vars_1_f_0(erl_backend__erl_code_gen__NonLocals_17);
    }
    {
      erl_backend__erl_code_gen__V_29_29 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), erl_backend__erl_code_gen__V_29_29, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
      MR_hl_field(MR_mktag(3), erl_backend__erl_code_gen__V_29_29, 1) = ((MR_Box) (erl_backend__erl_code_gen__V_30_30));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      *erl_backend__erl_code_gen__PackedNonLocals_14 = base;
      MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (erl_backend__erl_code_gen__V_29_29));
    }
    {
      erl_backend__erl_code_gen__V_27_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), erl_backend__erl_code_gen__V_27_27, 0) = ((MR_Box) (*erl_backend__erl_code_gen__PackedNonLocals_14));
      MR_hl_field(MR_mktag(1), erl_backend__erl_code_gen__V_27_27, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      erl_backend__erl_code_gen__V_25_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), erl_backend__erl_code_gen__V_25_25, 0) = ((MR_Box) (erl_backend__erl_code_gen__V_26_26));
      MR_hl_field(MR_mktag(1), erl_backend__erl_code_gen__V_25_25, 1) = ((MR_Box) (erl_backend__erl_code_gen__V_27_27));
    }
    {
      erl_backend__erl_code_gen__ThrowValue_19 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), erl_backend__erl_code_gen__ThrowValue_19, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
      MR_hl_field(MR_mktag(3), erl_backend__erl_code_gen__ThrowValue_19, 1) = ((MR_Box) (erl_backend__erl_code_gen__V_25_25));
    }
    {
      erl_backend__erl_code_gen__V_24_24 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), erl_backend__erl_code_gen__V_24_24, 0) = ((MR_Box) (erl_backend__erl_code_gen__ThrowValue_19));
    }
    {
      erl_backend__erl_code_gen__Throw_18 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), erl_backend__erl_code_gen__Throw_18, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
      MR_hl_field(MR_mktag(3), erl_backend__erl_code_gen__Throw_18, 1) = ((MR_Box) (erl_backend__erl_code_gen__V_24_24));
    }
    {
      erl_backend__erl_code_gen__V_32_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), erl_backend__erl_code_gen__V_32_32, 0) = ((MR_Box) (erl_backend__erl_code_gen__Throw_18));
    }
    {
      erl_backend__erl_code_gen__erl_gen_goal_7_p_0((MR_Integer) 2, erl_backend__erl_code_gen__InstMap_10, erl_backend__erl_code_gen__Goal_9, erl_backend__erl_code_gen__V_32_32, &erl_backend__erl_code_gen__GoalStatement0_20, erl_backend__erl_code_gen__STATE_VARIABLE_Info_0_22, &erl_backend__erl_code_gen__STATE_VARIABLE_Info_33_33);
    }
    switch (erl_backend__erl_code_gen__DoRenaming_12) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          *erl_backend__erl_code_gen__GoalStatement_13 = erl_backend__erl_code_gen__GoalStatement0_20;
          *erl_backend__erl_code_gen__STATE_VARIABLE_Info_23 = erl_backend__erl_code_gen__STATE_VARIABLE_Info_33_33;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word erl_backend__erl_code_gen__Subn_21;

          {
            erl_backend__erl_code_util__erl_create_renaming_4_p_0(erl_backend__erl_code_gen__NonLocals_17, &erl_backend__erl_code_gen__Subn_21, erl_backend__erl_code_gen__STATE_VARIABLE_Info_33_33, erl_backend__erl_code_gen__STATE_VARIABLE_Info_23);
          }
          {
            erl_backend__erl_code_util__erl_rename_vars_in_expr_3_p_0(erl_backend__erl_code_gen__Subn_21, erl_backend__erl_code_gen__GoalStatement0_20, erl_backend__erl_code_gen__GoalStatement_13);
          }
        }
        break;
    }
  }
}

static void MR_CALL 
erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_99_111_109_109_105_116_95_95_91_53_93_95_48_9_p_0(
  MR_Word erl_backend__erl_code_gen__Goal_10,
  MR_Word erl_backend__erl_code_gen__CodeModel_11,
  MR_Word erl_backend__erl_code_gen__ScopeDetism_12,
  MR_Word erl_backend__erl_code_gen__InstMap_13,
  MR_Word erl_backend__erl_code_gen__MaybeSuccessExpr_15,
  MR_Word * erl_backend__erl_code_gen__Statement_16,
  MR_Word erl_backend__erl_code_gen__STATE_VARIABLE_Info_0_29,
  MR_Word * erl_backend__erl_code_gen__STATE_VARIABLE_Info_30)
{
  {
    MR_bool erl_backend__erl_code_gen__succeeded;
    MR_Word erl_backend__erl_code_gen__GoalInfo_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__Goal_10, (MR_Integer) 1)));
    MR_Word erl_backend__erl_code_gen__GoalCodeModel_20;
    MR_Word erl_backend__erl_code_gen__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__Goal_10, (MR_Integer) 0)));
    MR_Word erl_backend__erl_code_gen___GoalContext_21;

    {
      erl_backend__erl_code_gen__GoalCodeModel_20 = hlds__code_model__goal_info_get_code_model_1_f_0(erl_backend__erl_code_gen__GoalInfo_19);
    }
    {
      erl_backend__erl_code_gen___GoalContext_21 = hlds__hlds_goal__goal_info_get_context_1_f_0(erl_backend__erl_code_gen__GoalInfo_19);
    }
    erl_backend__erl_code_gen__succeeded = (erl_backend__erl_code_gen__GoalCodeModel_20 == (MR_Integer) 2);
    if (erl_backend__erl_code_gen__succeeded)
      erl_backend__erl_code_gen__succeeded = (erl_backend__erl_code_gen__CodeModel_11 == (MR_Integer) 1);
    if (erl_backend__erl_code_gen__succeeded)
      {
        erl_backend__erl_code_gen__succeeded = (erl_backend__erl_code_gen__ScopeDetism_12 == (MR_Integer) 7);
        if (erl_backend__erl_code_gen__succeeded)
          {
            MR_Word erl_backend__erl_code_gen__GoalStatement_22;
            MR_Word erl_backend__erl_code_gen__V_32_32;
            MR_Word erl_backend__erl_code_gen__V_33_33;

            {
              erl_backend__erl_code_gen__erl_gen_goal_7_p_0(erl_backend__erl_code_gen__GoalCodeModel_20, erl_backend__erl_code_gen__InstMap_13, erl_backend__erl_code_gen__Goal_10, erl_backend__erl_code_gen__MaybeSuccessExpr_15, &erl_backend__erl_code_gen__GoalStatement_22, erl_backend__erl_code_gen__STATE_VARIABLE_Info_0_29, erl_backend__erl_code_gen__STATE_VARIABLE_Info_30);
            }
            {
              erl_backend__erl_code_gen__V_33_33 = erl_backend__elds__elds_fail_0_f_0();
            }
            {
              erl_backend__erl_code_gen__V_32_32 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(2), erl_backend__erl_code_gen__V_32_32, 0) = ((MR_Box) (erl_backend__erl_code_gen__V_33_33));
            }
            {
              *erl_backend__erl_code_gen__Statement_16 = erl_backend__elds__join_exprs_2_f_0(erl_backend__erl_code_gen__GoalStatement_22, erl_backend__erl_code_gen__V_32_32);
            }
          }
        else
          {
            MR_Word erl_backend__erl_code_gen__PackedNonLocals_23;
            MR_Word erl_backend__erl_code_gen__AnyCase_24;
            MR_Word erl_backend__erl_code_gen__Catch_25;
            MR_Word erl_backend__erl_code_gen__V_36_36;
            MR_Word erl_backend__erl_code_gen__V_38_38;
            MR_Word erl_backend__erl_code_gen__V_41_41;
            MR_Word erl_backend__erl_code_gen__V_42_42;
            MR_Word erl_backend__erl_code_gen__V_43_43;
            MR_Word erl_backend__erl_code_gen__V_44_44;
            MR_Word erl_backend__erl_code_gen__V_45_45;
            MR_Word erl_backend__erl_code_gen__V_46_46;
            MR_Word erl_backend__erl_code_gen__V_47_47;
            MR_Word erl_backend__erl_code_gen__V_49_49;
            MR_Word erl_backend__erl_code_gen__GoalStatement_64;

            {
              erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_99_111_109_109_105_116_95_112_105_101_99_101_115_95_95_91_51_93_95_48_8_p_0(erl_backend__erl_code_gen__Goal_10, erl_backend__erl_code_gen__InstMap_13, (MR_Integer) 0, &erl_backend__erl_code_gen__GoalStatement_64, &erl_backend__erl_code_gen__PackedNonLocals_23, erl_backend__erl_code_gen__STATE_VARIABLE_Info_0_29, erl_backend__erl_code_gen__STATE_VARIABLE_Info_30);
            }
            {
              erl_backend__erl_code_gen__V_42_42 = erl_backend__elds__elds_fail_0_f_0();
            }
            {
              erl_backend__erl_code_gen__V_41_41 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(2), erl_backend__erl_code_gen__V_41_41, 0) = ((MR_Box) (erl_backend__erl_code_gen__V_42_42));
            }
            {
              erl_backend__erl_code_gen__AnyCase_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__AnyCase_24, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__AnyCase_24, 1) = ((MR_Box) (erl_backend__erl_code_gen__V_41_41));
            }
            {
              erl_backend__erl_code_gen__V_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), erl_backend__erl_code_gen__V_36_36, 0) = ((MR_Box) (erl_backend__erl_code_gen__AnyCase_24));
              MR_hl_field(MR_mktag(1), erl_backend__erl_code_gen__V_36_36, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              erl_backend__erl_code_gen__V_43_43 = erl_backend__elds__elds_throw_atom_0_f_0();
            }
            {
              erl_backend__erl_code_gen__V_46_46 = erl_backend__elds__elds_commit_marker_0_f_0();
            }
            {
              erl_backend__erl_code_gen__V_47_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), erl_backend__erl_code_gen__V_47_47, 0) = ((MR_Box) (erl_backend__erl_code_gen__PackedNonLocals_23));
              MR_hl_field(MR_mktag(1), erl_backend__erl_code_gen__V_47_47, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              erl_backend__erl_code_gen__V_45_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), erl_backend__erl_code_gen__V_45_45, 0) = ((MR_Box) (erl_backend__erl_code_gen__V_46_46));
              MR_hl_field(MR_mktag(1), erl_backend__erl_code_gen__V_45_45, 1) = ((MR_Box) (erl_backend__erl_code_gen__V_47_47));
            }
            {
              erl_backend__erl_code_gen__V_44_44 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), erl_backend__erl_code_gen__V_44_44, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
              MR_hl_field(MR_mktag(3), erl_backend__erl_code_gen__V_44_44, 1) = ((MR_Box) (erl_backend__erl_code_gen__V_45_45));
            }
            {
              erl_backend__erl_code_gen__V_49_49 = erl_backend__elds__det_expr_1_f_0(erl_backend__erl_code_gen__MaybeSuccessExpr_15);
            }
            {
              erl_backend__erl_code_gen__Catch_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__Catch_25, 0) = ((MR_Box) (erl_backend__erl_code_gen__V_43_43));
              MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__Catch_25, 1) = ((MR_Box) (erl_backend__erl_code_gen__V_44_44));
              MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__Catch_25, 2) = ((MR_Box) (erl_backend__erl_code_gen__V_49_49));
            }
            {
              erl_backend__erl_code_gen__V_38_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), erl_backend__erl_code_gen__V_38_38, 0) = ((MR_Box) (erl_backend__erl_code_gen__Catch_25));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
              *erl_backend__erl_code_gen__Statement_16 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (erl_backend__erl_code_gen__GoalStatement_64));
              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (erl_backend__erl_code_gen__V_36_36));
              MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (erl_backend__erl_code_gen__V_38_38));
              MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
          }
      }
    else
      {
        erl_backend__erl_code_gen__succeeded = (erl_backend__erl_code_gen__GoalCodeModel_20 == (MR_Integer) 2);
        if (erl_backend__erl_code_gen__succeeded)
          erl_backend__erl_code_gen__succeeded = (erl_backend__erl_code_gen__CodeModel_11 == (MR_Integer) 0);
        if (erl_backend__erl_code_gen__succeeded)
          {
            MR_Word erl_backend__erl_code_gen__ResultsVar_26;
            MR_Word erl_backend__erl_code_gen__ResultsVarExpr_27;
            MR_Word erl_backend__erl_code_gen__TryExpr_28;
            MR_Word erl_backend__erl_code_gen__STATE_VARIABLE_Info_51_51;
            MR_Word erl_backend__erl_code_gen__V_55_55;
            MR_Word erl_backend__erl_code_gen__V_57_57;
            MR_Word erl_backend__erl_code_gen__V_58_58;
            MR_Word erl_backend__erl_code_gen__V_59_59;
            MR_Word erl_backend__erl_code_gen__V_60_60;
            MR_Word erl_backend__erl_code_gen__V_61_61;
            MR_Word erl_backend__erl_code_gen__GoalStatement_65;
            MR_Word erl_backend__erl_code_gen__PackedNonLocals_66;
            MR_Word erl_backend__erl_code_gen__Catch_67;

            {
              erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_99_111_109_109_105_116_95_112_105_101_99_101_115_95_95_91_51_93_95_48_8_p_0(erl_backend__erl_code_gen__Goal_10, erl_backend__erl_code_gen__InstMap_13, (MR_Integer) 1, &erl_backend__erl_code_gen__GoalStatement_65, &erl_backend__erl_code_gen__PackedNonLocals_66, erl_backend__erl_code_gen__STATE_VARIABLE_Info_0_29, &erl_backend__erl_code_gen__STATE_VARIABLE_Info_51_51);
            }
            {
              erl_backend__erl_code_util__erl_gen_info_new_named_var_4_p_0((MR_String) "Results", &erl_backend__erl_code_gen__ResultsVar_26, erl_backend__erl_code_gen__STATE_VARIABLE_Info_51_51, erl_backend__erl_code_gen__STATE_VARIABLE_Info_30);
            }
            {
              erl_backend__erl_code_gen__ResultsVarExpr_27 = erl_backend__elds__expr_from_var_1_f_0(erl_backend__erl_code_gen__ResultsVar_26);
            }
            {
              erl_backend__erl_code_gen__V_57_57 = erl_backend__elds__elds_throw_atom_0_f_0();
            }
            {
              erl_backend__erl_code_gen__V_60_60 = erl_backend__elds__elds_commit_marker_0_f_0();
            }
            {
              erl_backend__erl_code_gen__V_61_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), erl_backend__erl_code_gen__V_61_61, 0) = ((MR_Box) (erl_backend__erl_code_gen__ResultsVarExpr_27));
              MR_hl_field(MR_mktag(1), erl_backend__erl_code_gen__V_61_61, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              erl_backend__erl_code_gen__V_59_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), erl_backend__erl_code_gen__V_59_59, 0) = ((MR_Box) (erl_backend__erl_code_gen__V_60_60));
              MR_hl_field(MR_mktag(1), erl_backend__erl_code_gen__V_59_59, 1) = ((MR_Box) (erl_backend__erl_code_gen__V_61_61));
            }
            {
              erl_backend__erl_code_gen__V_58_58 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), erl_backend__erl_code_gen__V_58_58, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
              MR_hl_field(MR_mktag(3), erl_backend__erl_code_gen__V_58_58, 1) = ((MR_Box) (erl_backend__erl_code_gen__V_59_59));
            }
            {
              erl_backend__erl_code_gen__Catch_67 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__Catch_67, 0) = ((MR_Box) (erl_backend__erl_code_gen__V_57_57));
              MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__Catch_67, 1) = ((MR_Box) (erl_backend__erl_code_gen__V_58_58));
              MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__Catch_67, 2) = ((MR_Box) (erl_backend__erl_code_gen__ResultsVarExpr_27));
            }
            {
              erl_backend__erl_code_gen__V_55_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), erl_backend__erl_code_gen__V_55_55, 0) = ((MR_Box) (erl_backend__erl_code_gen__Catch_67));
            }
            {
              erl_backend__erl_code_gen__TryExpr_28 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), erl_backend__erl_code_gen__TryExpr_28, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
              MR_hl_field(MR_mktag(3), erl_backend__erl_code_gen__TryExpr_28, 1) = ((MR_Box) (erl_backend__erl_code_gen__GoalStatement_65));
              MR_hl_field(MR_mktag(3), erl_backend__erl_code_gen__TryExpr_28, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              MR_hl_field(MR_mktag(3), erl_backend__erl_code_gen__TryExpr_28, 3) = ((MR_Box) (erl_backend__erl_code_gen__V_55_55));
              MR_hl_field(MR_mktag(3), erl_backend__erl_code_gen__TryExpr_28, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
              *erl_backend__erl_code_gen__Statement_16 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (erl_backend__erl_code_gen__PackedNonLocals_66));
              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (erl_backend__erl_code_gen__TryExpr_28));
            }
          }
        else
          {
            erl_backend__erl_code_gen__erl_gen_goal_7_p_0(erl_backend__erl_code_gen__CodeModel_11, erl_backend__erl_code_gen__InstMap_13, erl_backend__erl_code_gen__Goal_10, erl_backend__erl_code_gen__MaybeSuccessExpr_15, erl_backend__erl_code_gen__Statement_16, erl_backend__erl_code_gen__STATE_VARIABLE_Info_0_29, erl_backend__erl_code_gen__STATE_VARIABLE_Info_30);
          }
      }
  }
}

static MR_bool MR_CALL 
erl_backend__erl_code_gen__IntroducedFrom__pred__erl_gen_case_on_atom__938__1_2_p_0(
  MR_Word erl_backend__erl_code_gen__OtherConsIds_17,
  MR_Word erl_backend__erl_code_gen__HeadVar__2_30)
{
  {
    MR_bool erl_backend__erl_code_gen__succeeded;

    {
      erl_backend__erl_code_gen__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &erl_backend__erl_code_gen_scalar_common_1[1], ((MR_Box) (erl_backend__erl_code_gen__OtherConsIds_17)), ((MR_Box) (erl_backend__erl_code_gen__HeadVar__2_30)));
    }
    return erl_backend__erl_code_gen__succeeded;
  }
}

static MR_bool MR_CALL 
erl_backend__erl_code_gen__IntroducedFrom__pred__erl_gen_case__879__1_2_p_0(
  MR_Word erl_backend__erl_code_gen__OtherConsIds_19,
  MR_Word erl_backend__erl_code_gen__HeadVar__2_35)
{
  {
    MR_bool erl_backend__erl_code_gen__succeeded;

    {
      erl_backend__erl_code_gen__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &erl_backend__erl_code_gen_scalar_common_1[1], ((MR_Box) (erl_backend__erl_code_gen__OtherConsIds_19)), ((MR_Box) (erl_backend__erl_code_gen__HeadVar__2_35)));
    }
    return erl_backend__erl_code_gen__succeeded;
  }
}

static MR_Word MR_CALL 
erl_backend__erl_code_gen__IntroducedFrom__func__erl_gen_switch__792__1_1_f_0(
  MR_Word erl_backend__erl_code_gen__LambdaHeadVar__1_49)
{
  {
    MR_bool erl_backend__erl_code_gen__succeeded;
    MR_Word erl_backend__erl_code_gen__LambdaHeadVar__2_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__LambdaHeadVar__1_49, (MR_Integer) 2)));
    MR_Word erl_backend__erl_code_gen__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__LambdaHeadVar__1_49, (MR_Integer) 0)));
    MR_Word erl_backend__erl_code_gen__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__LambdaHeadVar__1_49, (MR_Integer) 1)));

    return erl_backend__erl_code_gen__LambdaHeadVar__2_50;
  }
}

static MR_bool MR_CALL 
erl_backend__erl_code_gen__IntroducedFrom__pred__erl_gen_goal_expr__697__1_2_p_0(
  MR_Word erl_backend__erl_code_gen__CodeModel_11,
  MR_Word erl_backend__erl_code_gen__CallCodeModel_57)
{
  {
    MR_bool erl_backend__erl_code_gen__succeeded = (erl_backend__erl_code_gen__CodeModel_11 == erl_backend__erl_code_gen__CallCodeModel_57);

    return erl_backend__erl_code_gen__succeeded;
  }
}

static MR_bool MR_CALL 
erl_backend__erl_code_gen__search_elds_defn_3_p_0(
  MR_Word erl_backend__erl_code_gen__HeadVar__1_1,
  MR_Word erl_backend__erl_code_gen__PredProcId_6,
  MR_Word * erl_backend__erl_code_gen__Defn_7)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool erl_backend__erl_code_gen__succeeded = ((MR_tag((MR_Word) erl_backend__erl_code_gen__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
        MR_Word erl_backend__erl_code_gen__Defn0_4;
        MR_Word erl_backend__erl_code_gen__Defns_5;
        MR_Word erl_backend__erl_code_gen__V_11_11;
        MR_Word erl_backend__erl_code_gen__V_8_8;
        MR_Word erl_backend__erl_code_gen__V_9_9;
        MR_Word erl_backend__erl_code_gen__V_10_10;

        if (erl_backend__erl_code_gen__succeeded)
          {
            erl_backend__erl_code_gen__Defn0_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__erl_code_gen__HeadVar__1_1, (MR_Integer) 0)));
            erl_backend__erl_code_gen__Defns_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__erl_code_gen__HeadVar__1_1, (MR_Integer) 1)));
            erl_backend__erl_code_gen__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__Defn0_4, (MR_Integer) 0)));
            erl_backend__erl_code_gen__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__Defn0_4, (MR_Integer) 1)));
            erl_backend__erl_code_gen__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__Defn0_4, (MR_Integer) 2)));
            erl_backend__erl_code_gen__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__Defn0_4, (MR_Integer) 3)));
            {
              erl_backend__erl_code_gen__succeeded = hlds__hlds_pred____Unify____pred_proc_id_0_0(erl_backend__erl_code_gen__PredProcId_6, erl_backend__erl_code_gen__V_11_11);
            }
            if (erl_backend__erl_code_gen__succeeded)
              {
                *erl_backend__erl_code_gen__Defn_7 = erl_backend__erl_code_gen__Defn0_4;
                erl_backend__erl_code_gen__succeeded = MR_TRUE;
              }
            else
              {
                /* direct tailcall eliminated */
                {
                  MR_Word erl_backend__erl_code_gen__HeadVar__1__tmp_copy_1 = erl_backend__erl_code_gen__Defns_5;

                  erl_backend__erl_code_gen__HeadVar__1_1 = erl_backend__erl_code_gen__HeadVar__1__tmp_copy_1;
                }
                continue;
              }
          }
        return erl_backend__erl_code_gen__succeeded;
      }
      break;
    }
}

static void MR_CALL 
erl_backend__erl_code_gen__erl_gen_foreign_export_defn_3_p_0(
  MR_Word erl_backend__erl_code_gen__ProcDefns_4,
  MR_Word erl_backend__erl_code_gen__PragmaExport_5,
  MR_Word * erl_backend__erl_code_gen__ForeignExportDefn_6)
{
  {
    MR_bool erl_backend__erl_code_gen__succeeded;
    MR_Word erl_backend__erl_code_gen__PredId_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__PragmaExport_5, (MR_Integer) 1)));
    MR_Integer erl_backend__erl_code_gen__ProcId_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__PragmaExport_5, (MR_Integer) 2)));
    MR_String erl_backend__erl_code_gen__Name_10 = ((MR_String) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__PragmaExport_5, (MR_Integer) 3)));
    MR_Word erl_backend__erl_code_gen__PredProcId_12;
    MR_Word erl_backend__erl_code_gen___Lang_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__PragmaExport_5, (MR_Integer) 0)));
    MR_Word erl_backend__erl_code_gen___Context_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__PragmaExport_5, (MR_Integer) 4)));
    MR_Word erl_backend__erl_code_gen__TargetProc_13;

    {
      erl_backend__erl_code_gen__PredProcId_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__PredProcId_12, 0) = ((MR_Box) (erl_backend__erl_code_gen__PredId_8));
      MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__PredProcId_12, 1) = ((MR_Box) (erl_backend__erl_code_gen__ProcId_9));
    }
    {
      erl_backend__erl_code_gen__succeeded = erl_backend__erl_code_gen__search_elds_defn_3_p_0(erl_backend__erl_code_gen__ProcDefns_4, erl_backend__erl_code_gen__PredProcId_12, &erl_backend__erl_code_gen__TargetProc_13);
    }
    if (erl_backend__erl_code_gen__succeeded)
      {
        MR_Word erl_backend__erl_code_gen__TypeCtorInfo_30_30;
        MR_Word erl_backend__erl_code_gen__TargetBody_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__TargetProc_13, (MR_Integer) 2)));
        MR_Integer erl_backend__erl_code_gen__Arity_18;
        MR_Word erl_backend__erl_code_gen__Vars_19;
        MR_Word erl_backend__erl_code_gen__VarSet_20;
        MR_Word erl_backend__erl_code_gen__Clause_21;
        MR_Word erl_backend__erl_code_gen__V_22_22;
        MR_Word erl_backend__erl_code_gen__V_23_23;
        MR_Word erl_backend__erl_code_gen__V_24_24;
        MR_Word erl_backend__erl_code_gen__V_25_25;
        MR_Word erl_backend__erl_code_gen__V_26_26;
        MR_Word erl_backend__erl_code_gen___TargetPPId_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__TargetProc_13, (MR_Integer) 0)));
        MR_Word erl_backend__erl_code_gen___TargetVarSet_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__TargetProc_13, (MR_Integer) 1)));
        MR_Word erl_backend__erl_code_gen___EnvVarNames_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__TargetProc_13, (MR_Integer) 3)));

        {
          erl_backend__erl_code_gen__Arity_18 = erl_backend__elds__elds_body_arity_1_f_0(erl_backend__erl_code_gen__TargetBody_16);
        }
        erl_backend__erl_code_gen__TypeCtorInfo_30_30 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
        {
          erl_backend__erl_code_gen__V_22_22 = mercury__varset__init_0_f_0(erl_backend__erl_code_gen__TypeCtorInfo_30_30);
        }
        {
          mercury__varset__new_vars_4_p_0(erl_backend__erl_code_gen__TypeCtorInfo_30_30, erl_backend__erl_code_gen__Arity_18, &erl_backend__erl_code_gen__Vars_19, erl_backend__erl_code_gen__V_22_22, &erl_backend__erl_code_gen__VarSet_20);
        }
        {
          erl_backend__erl_code_gen__V_23_23 = erl_backend__elds__terms_from_vars_1_f_0(erl_backend__erl_code_gen__Vars_19);
        }
        {
          erl_backend__erl_code_gen__V_25_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__V_25_25, 0) = ((MR_Box) (erl_backend__erl_code_gen__PredProcId_12));
        }
        {
          erl_backend__erl_code_gen__V_26_26 = erl_backend__elds__exprs_from_vars_1_f_0(erl_backend__erl_code_gen__Vars_19);
        }
        {
          erl_backend__erl_code_gen__V_24_24 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), erl_backend__erl_code_gen__V_24_24, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
          MR_hl_field(MR_mktag(3), erl_backend__erl_code_gen__V_24_24, 1) = ((MR_Box) (erl_backend__erl_code_gen__V_25_25));
          MR_hl_field(MR_mktag(3), erl_backend__erl_code_gen__V_24_24, 2) = ((MR_Box) (erl_backend__erl_code_gen__V_26_26));
        }
        {
          erl_backend__erl_code_gen__Clause_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__Clause_21, 0) = ((MR_Box) (erl_backend__erl_code_gen__V_23_23));
          MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__Clause_21, 1) = ((MR_Box) (erl_backend__erl_code_gen__V_24_24));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          *erl_backend__erl_code_gen__ForeignExportDefn_6 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (erl_backend__erl_code_gen__Name_10));
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (erl_backend__erl_code_gen__VarSet_20));
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (erl_backend__erl_code_gen__Clause_21));
        }
      }
    else
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "erl_backend.erl_code_gen", (MR_String) "predicate \140erl_backend.erl_code_gen.erl_gen_foreign_export_defn\'/3", (MR_String) "missing definition of foreign exported procedure");
          return;
        }
      }
  }
}

static void MR_CALL 
erl_backend__erl_code_gen__ground_var_in_instmap_3_p_0(
  MR_Word erl_backend__erl_code_gen__Var_4,
  MR_Word erl_backend__erl_code_gen__STATE_VARIABLE_InstMap_0_6,
  MR_Word * erl_backend__erl_code_gen__STATE_VARIABLE_InstMap_7)
{
  {
    MR_bool erl_backend__erl_code_gen__succeeded;

    {
      hlds__instmap__instmap_set_var_4_p_0(erl_backend__erl_code_gen__Var_4, (MR_Word) MR_mkword(MR_mktag(3), &erl_backend__erl_code_gen_scalar_common_3[0]), erl_backend__erl_code_gen__STATE_VARIABLE_InstMap_0_6, erl_backend__erl_code_gen__STATE_VARIABLE_InstMap_7);
    }
  }
}

static MR_bool MR_CALL 
erl_backend__erl_code_gen__non_dummy_var_3_f_0(
  MR_Word erl_backend__erl_code_gen__ModuleInfo_5,
  MR_Word erl_backend__erl_code_gen__Var_6,
  MR_Word erl_backend__erl_code_gen__Type_7,
  MR_Word * erl_backend__erl_code_gen__Var_4)
{
  {
    MR_bool erl_backend__erl_code_gen__succeeded;
    MR_Word erl_backend__erl_code_gen__V_8_8;

    *erl_backend__erl_code_gen__Var_4 = erl_backend__erl_code_gen__Var_6;
    {
      erl_backend__erl_code_gen__V_8_8 = check_hlds__type_util__check_dummy_type_2_f_0(erl_backend__erl_code_gen__ModuleInfo_5, erl_backend__erl_code_gen__Type_7);
    }
    erl_backend__erl_code_gen__succeeded = (erl_backend__erl_code_gen__V_8_8 == (MR_Integer) 1);
    return erl_backend__erl_code_gen__succeeded;
  }
}

static MR_bool MR_CALL 
erl_backend__erl_code_gen__maybe_create_closure_for_success_expr_8_p_0_1(
  MR_Box erl_backend__erl_code_gen__closure_arg,
  MR_Box erl_backend__erl_code_gen__wrapper_arg_1,
  MR_Box erl_backend__erl_code_gen__wrapper_arg_2,
  MR_Box * erl_backend__erl_code_gen__wrapper_arg_3)
{
  {
    MR_bool erl_backend__erl_code_gen__succeeded;
    MR_Box erl_backend__erl_code_gen__closure = erl_backend__erl_code_gen__closure_arg;
    MR_Word erl_backend__erl_code_gen__conv0_Var_4;

    {
      erl_backend__erl_code_gen__succeeded = erl_backend__erl_code_gen__non_dummy_var_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__closure, (MR_Integer) 3))), ((MR_Word) erl_backend__erl_code_gen__wrapper_arg_1), ((MR_Word) erl_backend__erl_code_gen__wrapper_arg_2), &erl_backend__erl_code_gen__conv0_Var_4);
    }
    if (erl_backend__erl_code_gen__succeeded)
      {
        *erl_backend__erl_code_gen__wrapper_arg_3 = ((MR_Box) (erl_backend__erl_code_gen__conv0_Var_4));
        erl_backend__erl_code_gen__succeeded = MR_TRUE;
      }
    return erl_backend__erl_code_gen__succeeded;
  }
}

static void MR_CALL 
erl_backend__erl_code_gen__maybe_create_closure_for_success_expr_8_p_0(
  MR_Word erl_backend__erl_code_gen__NonLocals_9,
  MR_Word erl_backend__erl_code_gen__MaybeSuccessExpr0_10,
  MR_Word * erl_backend__erl_code_gen__MaybeMakeClosure_11,
  MR_Word * erl_backend__erl_code_gen__MaybeSuccessExpr_12,
  MR_Word erl_backend__erl_code_gen__InstMap0_13,
  MR_Word * erl_backend__erl_code_gen__InstMap_14,
  MR_Word erl_backend__erl_code_gen__STATE_VARIABLE_Info_0_28,
  MR_Word * erl_backend__erl_code_gen__STATE_VARIABLE_Info_29)
{
  {
    MR_bool erl_backend__erl_code_gen__succeeded = ((MR_tag((MR_Word) erl_backend__erl_code_gen__MaybeSuccessExpr0_10)) == (MR_mktag((MR_Integer) 1)));
    MR_Word erl_backend__erl_code_gen__SuccessExpr0_16;
    MR_Integer erl_backend__erl_code_gen__V_30_30;
    MR_Integer erl_backend__erl_code_gen__V_31_31;

    if (erl_backend__erl_code_gen__succeeded)
      {
        erl_backend__erl_code_gen__SuccessExpr0_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__erl_code_gen__MaybeSuccessExpr0_10, (MR_Integer) 0)));
        {
          erl_backend__erl_code_gen__V_30_30 = erl_backend__erl_code_util__erl_expr_size_1_f_0(erl_backend__erl_code_gen__SuccessExpr0_16);
        }
        erl_backend__erl_code_gen__V_31_31 = (MR_Integer) 10;
        erl_backend__erl_code_gen__succeeded = (erl_backend__erl_code_gen__V_30_30 > erl_backend__erl_code_gen__V_31_31);
      }
    if (erl_backend__erl_code_gen__succeeded)
      {
        MR_Word erl_backend__erl_code_gen__TypeInfo_38_38;
        MR_Word erl_backend__erl_code_gen__ClosureVar_17;
        MR_Word erl_backend__erl_code_gen__ClosureVarExpr_18;
        MR_Word erl_backend__erl_code_gen__ClosureArgs0_19;
        MR_Word erl_backend__erl_code_gen__ModuleInfo_20;
        MR_Word erl_backend__erl_code_gen__ClosureArgsTypes_21;
        MR_Word erl_backend__erl_code_gen__ClosureArgs_22;
        MR_Word erl_backend__erl_code_gen__ClosureArgsTerms_23;
        MR_Word erl_backend__erl_code_gen__ClosureArgsExprs_24;
        MR_Word erl_backend__erl_code_gen__MakeClosure_25;
        MR_Word erl_backend__erl_code_gen__ClosureFun_26;
        MR_Word erl_backend__erl_code_gen__CallClosure_27;
        MR_Word erl_backend__erl_code_gen__V_34_34;
        MR_Word erl_backend__erl_code_gen__V_35_35;
        MR_Word erl_backend__erl_code_gen__V_36_36;

        {
          erl_backend__erl_code_util__erl_gen_info_new_named_var_4_p_0((MR_String) "SuccessClosure", &erl_backend__erl_code_gen__ClosureVar_17, erl_backend__erl_code_gen__STATE_VARIABLE_Info_0_28, erl_backend__erl_code_gen__STATE_VARIABLE_Info_29);
        }
        {
          hlds__instmap__instmap_set_var_4_p_0(erl_backend__erl_code_gen__ClosureVar_17, (MR_Word) MR_mkword(MR_mktag(3), &erl_backend__erl_code_gen_scalar_common_3[0]), erl_backend__erl_code_gen__InstMap0_13, erl_backend__erl_code_gen__InstMap_14);
        }
        {
          erl_backend__erl_code_gen__ClosureVarExpr_18 = erl_backend__elds__expr_from_var_1_f_0(erl_backend__erl_code_gen__ClosureVar_17);
        }
        {
          erl_backend__erl_code_gen__ClosureArgs0_19 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, erl_backend__erl_code_gen__NonLocals_9);
        }
        {
          erl_backend__erl_code_util__erl_gen_info_get_module_info_2_p_0(*erl_backend__erl_code_gen__STATE_VARIABLE_Info_29, &erl_backend__erl_code_gen__ModuleInfo_20);
        }
        {
          erl_backend__erl_code_util__erl_variable_types_3_p_0(*erl_backend__erl_code_gen__STATE_VARIABLE_Info_29, erl_backend__erl_code_gen__ClosureArgs0_19, &erl_backend__erl_code_gen__ClosureArgsTypes_21);
        }
        erl_backend__erl_code_gen__TypeInfo_38_38 = (MR_Word) &erl_backend__erl_code_gen_scalar_common_1[0];
        {
          erl_backend__erl_code_gen__V_34_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__V_34_34, 0) = ((MR_Box) (&erl_backend__erl_code_gen_scalar_common_5[1]));
          MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__V_34_34, 1) = ((MR_Box) (erl_backend__erl_code_gen__maybe_create_closure_for_success_expr_8_p_0_1));
          MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__V_34_34, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__V_34_34, 3) = ((MR_Box) (erl_backend__erl_code_gen__ModuleInfo_20));
        }
        {
          erl_backend__erl_code_gen__ClosureArgs_22 = mercury__list__filter_map_corresponding_3_f_0(erl_backend__erl_code_gen__TypeInfo_38_38, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, erl_backend__erl_code_gen__TypeInfo_38_38, erl_backend__erl_code_gen__V_34_34, erl_backend__erl_code_gen__ClosureArgs0_19, erl_backend__erl_code_gen__ClosureArgsTypes_21);
        }
        {
          erl_backend__erl_code_gen__ClosureArgsTerms_23 = erl_backend__elds__terms_from_vars_1_f_0(erl_backend__erl_code_gen__ClosureArgs_22);
        }
        {
          erl_backend__erl_code_gen__ClosureArgsExprs_24 = erl_backend__elds__exprs_from_vars_1_f_0(erl_backend__erl_code_gen__ClosureArgs_22);
        }
        {
          erl_backend__erl_code_gen__V_35_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__V_35_35, 0) = ((MR_Box) (erl_backend__erl_code_gen__ClosureArgsTerms_23));
          MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__V_35_35, 1) = ((MR_Box) (erl_backend__erl_code_gen__SuccessExpr0_16));
        }
        erl_backend__erl_code_gen__ClosureFun_26 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) erl_backend__erl_code_gen__V_35_35);
        {
          erl_backend__erl_code_gen__MakeClosure_25 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), erl_backend__erl_code_gen__MakeClosure_25, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
          MR_hl_field(MR_mktag(3), erl_backend__erl_code_gen__MakeClosure_25, 1) = ((MR_Box) (erl_backend__erl_code_gen__ClosureVarExpr_18));
          MR_hl_field(MR_mktag(3), erl_backend__erl_code_gen__MakeClosure_25, 2) = ((MR_Box) (erl_backend__erl_code_gen__ClosureFun_26));
        }
        {
          erl_backend__erl_code_gen__V_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), erl_backend__erl_code_gen__V_36_36, 0) = ((MR_Box) (erl_backend__erl_code_gen__ClosureVarExpr_18));
        }
        {
          erl_backend__erl_code_gen__CallClosure_27 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), erl_backend__erl_code_gen__CallClosure_27, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
          MR_hl_field(MR_mktag(3), erl_backend__erl_code_gen__CallClosure_27, 1) = ((MR_Box) (erl_backend__erl_code_gen__V_36_36));
          MR_hl_field(MR_mktag(3), erl_backend__erl_code_gen__CallClosure_27, 2) = ((MR_Box) (erl_backend__erl_code_gen__ClosureArgsExprs_24));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          *erl_backend__erl_code_gen__MaybeMakeClosure_11 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (erl_backend__erl_code_gen__MakeClosure_25));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          *erl_backend__erl_code_gen__MaybeSuccessExpr_12 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (erl_backend__erl_code_gen__CallClosure_27));
        }
      }
    else
      {
        *erl_backend__erl_code_gen__InstMap_14 = erl_backend__erl_code_gen__InstMap0_13;
        *erl_backend__erl_code_gen__MaybeMakeClosure_11 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *erl_backend__erl_code_gen__MaybeSuccessExpr_12 = erl_backend__erl_code_gen__MaybeSuccessExpr0_10;
        *erl_backend__erl_code_gen__STATE_VARIABLE_Info_29 = erl_backend__erl_code_gen__STATE_VARIABLE_Info_0_28;
      }
  }
}

static void MR_CALL 
erl_backend__erl_code_gen__union_bound_nonlocals_in_goals_4_p_0_1(
  MR_Box erl_backend__erl_code_gen__closure_arg,
  MR_Box erl_backend__erl_code_gen__wrapper_arg_1,
  MR_Box * erl_backend__erl_code_gen__wrapper_arg_2)
{
  {
    MR_Box erl_backend__erl_code_gen__closure = erl_backend__erl_code_gen__closure_arg;
    MR_Word erl_backend__erl_code_gen__conv0_HeadVar__4_4;

    {
      erl_backend__erl_code_util__erl_bound_nonlocals_in_goal_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__closure, (MR_Integer) 4))), ((MR_Word) erl_backend__erl_code_gen__wrapper_arg_1), &erl_backend__erl_code_gen__conv0_HeadVar__4_4);
    }
    *erl_backend__erl_code_gen__wrapper_arg_2 = ((MR_Box) (erl_backend__erl_code_gen__conv0_HeadVar__4_4));
  }
}

static void MR_CALL 
erl_backend__erl_code_gen__union_bound_nonlocals_in_goals_4_p_0(
  MR_Word erl_backend__erl_code_gen__Info_5,
  MR_Word erl_backend__erl_code_gen__InstMap_6,
  MR_Word erl_backend__erl_code_gen__Goals_7,
  MR_Word * erl_backend__erl_code_gen__NonLocalsUnion_8)
{
  {
    MR_bool erl_backend__erl_code_gen__succeeded;
    MR_Word erl_backend__erl_code_gen__IsBound_9;
    MR_Word erl_backend__erl_code_gen__NonLocalsLists_10;

    {
      erl_backend__erl_code_gen__IsBound_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__IsBound_9, 0) = ((MR_Box) (&erl_backend__erl_code_gen_scalar_common_5[0]));
      MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__IsBound_9, 1) = ((MR_Box) (erl_backend__erl_code_gen__union_bound_nonlocals_in_goals_4_p_0_1));
      MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__IsBound_9, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__IsBound_9, 3) = ((MR_Box) (erl_backend__erl_code_gen__Info_5));
      MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__IsBound_9, 4) = ((MR_Box) (erl_backend__erl_code_gen__InstMap_6));
    }
    {
      mercury__list__map_3_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, (MR_Word) &erl_backend__erl_code_gen_scalar_common_1[3], erl_backend__erl_code_gen__IsBound_9, erl_backend__erl_code_gen__Goals_7, &erl_backend__erl_code_gen__NonLocalsLists_10);
    }
    {
      *erl_backend__erl_code_gen__NonLocalsUnion_8 = parse_tree__set_of_var__union_list_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, erl_backend__erl_code_gen__NonLocalsLists_10);
    }
  }
}

static MR_bool MR_CALL 
erl_backend__erl_code_gen__erl_gen_case_on_atom_8_p_0_1(
  MR_Box erl_backend__erl_code_gen__closure_arg)
{
  {
    MR_bool erl_backend__erl_code_gen__succeeded;
    MR_Box erl_backend__erl_code_gen__closure = erl_backend__erl_code_gen__closure_arg;

    {
      erl_backend__erl_code_gen__succeeded = erl_backend__erl_code_gen__IntroducedFrom__pred__erl_gen_case_on_atom__938__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__closure, (MR_Integer) 4))));
    }
    return erl_backend__erl_code_gen__succeeded;
  }
}

static void MR_CALL 
erl_backend__erl_code_gen__erl_gen_case_on_atom_8_p_0(
  MR_Word erl_backend__erl_code_gen__CodeModel_9,
  MR_Word erl_backend__erl_code_gen__InstMap_10,
  MR_Word erl_backend__erl_code_gen__MustBindNonLocals_11,
  MR_Word erl_backend__erl_code_gen__MaybeSuccessExpr_12,
  MR_Word erl_backend__erl_code_gen__Case_13,
  MR_Word * erl_backend__erl_code_gen__ELDSCase_14,
  MR_Word erl_backend__erl_code_gen__STATE_VARIABLE_Info_0_24,
  MR_Word * erl_backend__erl_code_gen__STATE_VARIABLE_Info_25)
{
  {
    MR_bool erl_backend__erl_code_gen__succeeded;
    MR_Word erl_backend__erl_code_gen__MainConsId_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__Case_13, (MR_Integer) 0)));
    MR_Word erl_backend__erl_code_gen__OtherConsIds_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__Case_13, (MR_Integer) 1)));
    MR_Word erl_backend__erl_code_gen__Goal_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__Case_13, (MR_Integer) 2)));
    MR_String erl_backend__erl_code_gen__String_20;
    MR_Word erl_backend__erl_code_gen__MaybeSuccessExprForCase_21;
    MR_Word erl_backend__erl_code_gen__Statement0_22;
    MR_Word erl_backend__erl_code_gen__Statement_23;
    MR_Word erl_backend__erl_code_gen__V_26_26;
    MR_Word erl_backend__erl_code_gen__STATE_VARIABLE_Info_34_34;
    MR_Word erl_backend__erl_code_gen__V_36_36;
    MR_String erl_backend__erl_code_gen__String0_19;

    {
      erl_backend__erl_code_gen__V_26_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__V_26_26, 0) = ((MR_Box) (&erl_backend__erl_code_gen_scalar_common_4[1]));
      MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__V_26_26, 1) = ((MR_Box) (erl_backend__erl_code_gen__erl_gen_case_on_atom_8_p_0_1));
      MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__V_26_26, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__V_26_26, 3) = ((MR_Box) (erl_backend__erl_code_gen__OtherConsIds_17));
      MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__V_26_26, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      mercury__require__expect_4_p_0(erl_backend__erl_code_gen__V_26_26, (MR_String) "erl_backend.erl_code_gen", (MR_String) "predicate \140erl_backend.erl_code_gen.erl_gen_case_on_atom\'/8", (MR_String) "multi-cons-id switch arms NYI");
    }
    erl_backend__erl_code_gen__succeeded = ((((MR_tag((MR_Word) erl_backend__erl_code_gen__MainConsId_16)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_code_gen__MainConsId_16, (MR_Integer) 0)))) == (MR_Integer) 8)));
    if (erl_backend__erl_code_gen__succeeded)
      {
        erl_backend__erl_code_gen__String0_19 = ((MR_String) (MR_hl_field(MR_mktag(3), erl_backend__erl_code_gen__MainConsId_16, (MR_Integer) 1)));
        erl_backend__erl_code_gen__String_20 = erl_backend__erl_code_gen__String0_19;
      }
    else
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "erl_backend.erl_code_gen", (MR_String) "predicate \140erl_backend.erl_code_gen.erl_gen_case_on_atom\'/8", (MR_String) "non-string const");
          return;
        }
      }
    {
      erl_backend__erl_code_util__erl_fix_success_expr_6_p_0(erl_backend__erl_code_gen__InstMap_10, erl_backend__erl_code_gen__Goal_18, erl_backend__erl_code_gen__MaybeSuccessExpr_12, &erl_backend__erl_code_gen__MaybeSuccessExprForCase_21, erl_backend__erl_code_gen__STATE_VARIABLE_Info_0_24, &erl_backend__erl_code_gen__STATE_VARIABLE_Info_34_34);
    }
    {
      erl_backend__erl_code_gen__erl_gen_goal_7_p_0(erl_backend__erl_code_gen__CodeModel_9, erl_backend__erl_code_gen__InstMap_10, erl_backend__erl_code_gen__Goal_18, erl_backend__erl_code_gen__MaybeSuccessExprForCase_21, &erl_backend__erl_code_gen__Statement0_22, erl_backend__erl_code_gen__STATE_VARIABLE_Info_34_34, erl_backend__erl_code_gen__STATE_VARIABLE_Info_25);
    }
    {
      erl_backend__erl_code_util__erl_bind_unbound_vars_6_p_0(*erl_backend__erl_code_gen__STATE_VARIABLE_Info_25, erl_backend__erl_code_gen__MustBindNonLocals_11, erl_backend__erl_code_gen__Goal_18, erl_backend__erl_code_gen__InstMap_10, erl_backend__erl_code_gen__Statement0_22, &erl_backend__erl_code_gen__Statement_23);
    }
    {
      erl_backend__erl_code_gen__V_36_36 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), erl_backend__erl_code_gen__V_36_36, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(3), erl_backend__erl_code_gen__V_36_36, 1) = ((MR_Box) (erl_backend__erl_code_gen__String_20));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      *erl_backend__erl_code_gen__ELDSCase_14 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (erl_backend__erl_code_gen__V_36_36));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (erl_backend__erl_code_gen__Statement_23));
    }
  }
}

static MR_bool MR_CALL 
erl_backend__erl_code_gen__erl_gen_case_9_p_0_1(
  MR_Box erl_backend__erl_code_gen__closure_arg)
{
  {
    MR_bool erl_backend__erl_code_gen__succeeded;
    MR_Box erl_backend__erl_code_gen__closure = erl_backend__erl_code_gen__closure_arg;

    {
      erl_backend__erl_code_gen__succeeded = erl_backend__erl_code_gen__IntroducedFrom__pred__erl_gen_case__879__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__closure, (MR_Integer) 4))));
    }
    return erl_backend__erl_code_gen__succeeded;
  }
}

static void MR_CALL 
erl_backend__erl_code_gen__erl_gen_case_9_p_0(
  MR_Word erl_backend__erl_code_gen__Type_10,
  MR_Word erl_backend__erl_code_gen__CodeModel_11,
  MR_Word erl_backend__erl_code_gen__InstMap_12,
  MR_Word erl_backend__erl_code_gen__MustBindNonLocals_13,
  MR_Word erl_backend__erl_code_gen__MaybeSuccessExpr_14,
  MR_Word erl_backend__erl_code_gen__Case_15,
  MR_Word * erl_backend__erl_code_gen__ELDSCase_16,
  MR_Word erl_backend__erl_code_gen__STATE_VARIABLE_Info_0_29,
  MR_Word * erl_backend__erl_code_gen__STATE_VARIABLE_Info_30)
{
  {
    MR_bool erl_backend__erl_code_gen__succeeded;
    MR_Word erl_backend__erl_code_gen__MainConsId_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__Case_15, (MR_Integer) 0)));
    MR_Word erl_backend__erl_code_gen__OtherConsIds_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__Case_15, (MR_Integer) 1)));
    MR_Word erl_backend__erl_code_gen__Goal_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__Case_15, (MR_Integer) 2)));
    MR_Word erl_backend__erl_code_gen__ModuleInfo_21;
    MR_Integer erl_backend__erl_code_gen__Size_22;
    MR_Word erl_backend__erl_code_gen__DummyVars_23;
    MR_Word erl_backend__erl_code_gen__Pattern_25;
    MR_Word erl_backend__erl_code_gen__MaybeSuccessExprForCase_26;
    MR_Word erl_backend__erl_code_gen__Statement0_27;
    MR_Word erl_backend__erl_code_gen__Statement_28;
    MR_Word erl_backend__erl_code_gen__V_31_31;
    MR_Word erl_backend__erl_code_gen__STATE_VARIABLE_Info_36_36;
    MR_Word erl_backend__erl_code_gen__STATE_VARIABLE_Info_42_42;
    MR_Word erl_backend__erl_code_gen__STATE_VARIABLE_Info_43_43;
    MR_Word erl_backend__erl_code_gen__ConsDefn_51;
    MR_Word erl_backend__erl_code_gen__TypeCtor_50;
    MR_Word erl_backend__erl_code_gen__Pattern0_24;
    MR_Word erl_backend__erl_code_gen__STATE_VARIABLE_Info_38_38;

    {
      erl_backend__erl_code_gen__V_31_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__V_31_31, 0) = ((MR_Box) (&erl_backend__erl_code_gen_scalar_common_4[1]));
      MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__V_31_31, 1) = ((MR_Box) (erl_backend__erl_code_gen__erl_gen_case_9_p_0_1));
      MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__V_31_31, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__V_31_31, 3) = ((MR_Box) (erl_backend__erl_code_gen__OtherConsIds_19));
      MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__V_31_31, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      mercury__require__expect_4_p_0(erl_backend__erl_code_gen__V_31_31, (MR_String) "erl_backend.erl_code_gen", (MR_String) "predicate \140erl_backend.erl_code_gen.erl_gen_case\'/9", (MR_String) "multi-cons-id switch arms NYI");
    }
    {
      erl_backend__erl_code_util__erl_gen_info_get_module_info_2_p_0(erl_backend__erl_code_gen__STATE_VARIABLE_Info_0_29, &erl_backend__erl_code_gen__ModuleInfo_21);
    }
    {
      erl_backend__erl_code_gen__succeeded = parse_tree__prog_type__type_to_ctor_2_p_0(erl_backend__erl_code_gen__Type_10, &erl_backend__erl_code_gen__TypeCtor_50);
    }
    if (erl_backend__erl_code_gen__succeeded)
      {
        erl_backend__erl_code_gen__succeeded = check_hlds__type_util__get_cons_defn_4_p_0(erl_backend__erl_code_gen__ModuleInfo_21, erl_backend__erl_code_gen__TypeCtor_50, erl_backend__erl_code_gen__MainConsId_18, &erl_backend__erl_code_gen__ConsDefn_51);
      }
    if (erl_backend__erl_code_gen__succeeded)
      {
        MR_Word erl_backend__erl_code_gen__TypeInfo_41_82;
        MR_Word erl_backend__erl_code_gen__Constraints_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__ConsDefn_51, (MR_Integer) 5)));
        MR_Word erl_backend__erl_code_gen__ConstrainedTVars_53;
        MR_Word erl_backend__erl_code_gen__ExistTVars_54;
        MR_Word erl_backend__erl_code_gen__UnconstrainedTVars_55;
        MR_Integer erl_backend__erl_code_gen__V_56_56;
        MR_Integer erl_backend__erl_code_gen__V_57_57;
        MR_Integer erl_backend__erl_code_gen__V_58_58;
        MR_Integer erl_backend__erl_code_gen__V_59_59;
        MR_Word erl_backend__erl_code_gen__V_60_60;
        MR_Word erl_backend__erl_code_gen__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__ConsDefn_51, (MR_Integer) 0)));
        MR_Word erl_backend__erl_code_gen__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__ConsDefn_51, (MR_Integer) 1)));
        MR_Word erl_backend__erl_code_gen__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__ConsDefn_51, (MR_Integer) 2)));
        MR_Word erl_backend__erl_code_gen__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__ConsDefn_51, (MR_Integer) 3)));
        MR_Word erl_backend__erl_code_gen__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__ConsDefn_51, (MR_Integer) 4)));
        MR_Word erl_backend__erl_code_gen__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__ConsDefn_51, (MR_Integer) 6)));
        MR_Word erl_backend__erl_code_gen__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__ConsDefn_51, (MR_Integer) 7)));
        MR_Word erl_backend__erl_code_gen__V_68_68;
        MR_Word erl_backend__erl_code_gen__V_69_69;
        MR_Word erl_backend__erl_code_gen__V_70_70;
        MR_Word erl_backend__erl_code_gen__V_71_71;
        MR_Word erl_backend__erl_code_gen__V_72_72;
        MR_Word erl_backend__erl_code_gen__V_73_73;
        MR_Word erl_backend__erl_code_gen__V_74_74;
        MR_Word erl_backend__erl_code_gen__V_75_75;
        MR_Word erl_backend__erl_code_gen__V_76_76;
        MR_Word erl_backend__erl_code_gen__V_77_77;
        MR_Word erl_backend__erl_code_gen__V_78_78;
        MR_Word erl_backend__erl_code_gen__V_79_79;
        MR_Word erl_backend__erl_code_gen__V_80_80;
        MR_Word erl_backend__erl_code_gen__V_81_81;

        {
          parse_tree__prog_type__constraint_list_get_tvars_2_p_0(erl_backend__erl_code_gen__Constraints_52, &erl_backend__erl_code_gen__ConstrainedTVars_53);
        }
        erl_backend__erl_code_gen__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__ConsDefn_51, (MR_Integer) 0)));
        erl_backend__erl_code_gen__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__ConsDefn_51, (MR_Integer) 1)));
        erl_backend__erl_code_gen__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__ConsDefn_51, (MR_Integer) 2)));
        erl_backend__erl_code_gen__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__ConsDefn_51, (MR_Integer) 3)));
        erl_backend__erl_code_gen__ExistTVars_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__ConsDefn_51, (MR_Integer) 4)));
        erl_backend__erl_code_gen__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__ConsDefn_51, (MR_Integer) 5)));
        erl_backend__erl_code_gen__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__ConsDefn_51, (MR_Integer) 6)));
        erl_backend__erl_code_gen__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__ConsDefn_51, (MR_Integer) 7)));
        erl_backend__erl_code_gen__TypeInfo_41_82 = (MR_Word) &erl_backend__erl_code_gen_scalar_common_1[2];
        {
          erl_backend__erl_code_gen__UnconstrainedTVars_55 = mercury__list__delete_elems_2_f_0(erl_backend__erl_code_gen__TypeInfo_41_82, erl_backend__erl_code_gen__ExistTVars_54, erl_backend__erl_code_gen__ConstrainedTVars_53);
        }
        {
          erl_backend__erl_code_gen__V_57_57 = mercury__list__length_1_f_0(erl_backend__erl_code_gen__TypeInfo_41_82, erl_backend__erl_code_gen__UnconstrainedTVars_55);
        }
        {
          erl_backend__erl_code_gen__V_58_58 = mercury__list__length_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0, erl_backend__erl_code_gen__Constraints_52);
        }
        erl_backend__erl_code_gen__V_56_56 = (erl_backend__erl_code_gen__V_57_57 + erl_backend__erl_code_gen__V_58_58);
        erl_backend__erl_code_gen__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__ConsDefn_51, (MR_Integer) 0)));
        erl_backend__erl_code_gen__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__ConsDefn_51, (MR_Integer) 1)));
        erl_backend__erl_code_gen__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__ConsDefn_51, (MR_Integer) 2)));
        erl_backend__erl_code_gen__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__ConsDefn_51, (MR_Integer) 3)));
        erl_backend__erl_code_gen__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__ConsDefn_51, (MR_Integer) 4)));
        erl_backend__erl_code_gen__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__ConsDefn_51, (MR_Integer) 5)));
        erl_backend__erl_code_gen__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__ConsDefn_51, (MR_Integer) 6)));
        erl_backend__erl_code_gen__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__ConsDefn_51, (MR_Integer) 7)));
        {
          erl_backend__erl_code_gen__V_59_59 = mercury__list__length_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0, erl_backend__erl_code_gen__V_60_60);
        }
        erl_backend__erl_code_gen__Size_22 = (erl_backend__erl_code_gen__V_56_56 + erl_backend__erl_code_gen__V_59_59);
      }
    else
      erl_backend__erl_code_gen__Size_22 = (MR_Integer) 0;
    {
      erl_backend__erl_code_util__erl_gen_info_new_anonymous_vars_4_p_0(erl_backend__erl_code_gen__Size_22, &erl_backend__erl_code_gen__DummyVars_23, erl_backend__erl_code_gen__STATE_VARIABLE_Info_0_29, &erl_backend__erl_code_gen__STATE_VARIABLE_Info_36_36);
    }
    {
      erl_backend__erl_code_gen__succeeded = erl_backend__erl_unify_gen__cons_id_to_term_6_p_0(erl_backend__erl_code_gen__MainConsId_18, erl_backend__erl_code_gen__DummyVars_23, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &erl_backend__erl_code_gen__Pattern0_24, erl_backend__erl_code_gen__STATE_VARIABLE_Info_36_36, &erl_backend__erl_code_gen__STATE_VARIABLE_Info_38_38);
    }
    if (erl_backend__erl_code_gen__succeeded)
      {
        erl_backend__erl_code_gen__STATE_VARIABLE_Info_42_42 = erl_backend__erl_code_gen__STATE_VARIABLE_Info_38_38;
        erl_backend__erl_code_gen__Pattern_25 = erl_backend__erl_code_gen__Pattern0_24;
      }
    else
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "erl_backend.erl_code_gen", (MR_String) "predicate \140erl_backend.erl_code_gen.erl_gen_case\'/9", (MR_String) "cannot pattern match on object");
          return;
        }
      }
    {
      erl_backend__erl_code_util__erl_fix_success_expr_6_p_0(erl_backend__erl_code_gen__InstMap_12, erl_backend__erl_code_gen__Goal_20, erl_backend__erl_code_gen__MaybeSuccessExpr_14, &erl_backend__erl_code_gen__MaybeSuccessExprForCase_26, erl_backend__erl_code_gen__STATE_VARIABLE_Info_42_42, &erl_backend__erl_code_gen__STATE_VARIABLE_Info_43_43);
    }
    {
      erl_backend__erl_code_gen__erl_gen_goal_7_p_0(erl_backend__erl_code_gen__CodeModel_11, erl_backend__erl_code_gen__InstMap_12, erl_backend__erl_code_gen__Goal_20, erl_backend__erl_code_gen__MaybeSuccessExprForCase_26, &erl_backend__erl_code_gen__Statement0_27, erl_backend__erl_code_gen__STATE_VARIABLE_Info_43_43, erl_backend__erl_code_gen__STATE_VARIABLE_Info_30);
    }
    {
      erl_backend__erl_code_util__erl_bind_unbound_vars_6_p_0(*erl_backend__erl_code_gen__STATE_VARIABLE_Info_30, erl_backend__erl_code_gen__MustBindNonLocals_13, erl_backend__erl_code_gen__Goal_20, erl_backend__erl_code_gen__InstMap_12, erl_backend__erl_code_gen__Statement0_27, &erl_backend__erl_code_gen__Statement_28);
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      *erl_backend__erl_code_gen__ELDSCase_16 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (erl_backend__erl_code_gen__Pattern_25));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (erl_backend__erl_code_gen__Statement_28));
    }
  }
}

static MR_bool MR_CALL 
erl_backend__erl_code_gen__erl_gen_goal_expr_9_p_0_1(
  MR_Box erl_backend__erl_code_gen__closure_arg)
{
  {
    MR_bool erl_backend__erl_code_gen__succeeded;
    MR_Box erl_backend__erl_code_gen__closure = erl_backend__erl_code_gen__closure_arg;

    {
      erl_backend__erl_code_gen__succeeded = erl_backend__erl_code_gen__IntroducedFrom__pred__erl_gen_goal_expr__697__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__closure, (MR_Integer) 4))));
    }
    return erl_backend__erl_code_gen__succeeded;
  }
}

static void MR_CALL 
erl_backend__erl_code_gen__erl_gen_goal_expr_9_p_0(
  MR_Word erl_backend__erl_code_gen__GoalExpr_10,
  MR_Word erl_backend__erl_code_gen__CodeModel_11,
  MR_Word erl_backend__erl_code_gen__Detism_12,
  MR_Word erl_backend__erl_code_gen__InstMap_13,
  MR_Word erl_backend__erl_code_gen__Context_14,
  MR_Word erl_backend__erl_code_gen__MaybeSuccessExpr_15,
  MR_Word * erl_backend__erl_code_gen__Statement_16,
  MR_Word erl_backend__erl_code_gen__STATE_VARIABLE_Info_0_88,
  MR_Word * erl_backend__erl_code_gen__STATE_VARIABLE_Info_89)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool erl_backend__erl_code_gen__succeeded;

        switch (MR_tag((MR_Word) erl_backend__erl_code_gen__GoalExpr_10)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word erl_backend__erl_code_gen__SubGoal_129 = (MR_Word) MR_body(((MR_Word) erl_backend__erl_code_gen__GoalExpr_10), (MR_Integer) 0);

              {
                erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_110_101_103_97_116_105_111_110_95_95_91_52_93_95_48_8_p_0(erl_backend__erl_code_gen__SubGoal_129, erl_backend__erl_code_gen__CodeModel_11, erl_backend__erl_code_gen__InstMap_13, erl_backend__erl_code_gen__MaybeSuccessExpr_15, erl_backend__erl_code_gen__Statement_16, erl_backend__erl_code_gen__STATE_VARIABLE_Info_0_88, erl_backend__erl_code_gen__STATE_VARIABLE_Info_89);
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word erl_backend__erl_code_gen__Unification_78 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__erl_code_gen__GoalExpr_10, (MR_Integer) 3)));
              MR_Word erl_backend__erl_code_gen___LHS_75 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__erl_code_gen__GoalExpr_10, (MR_Integer) 0)));
              MR_Word erl_backend__erl_code_gen___RHS_76 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__erl_code_gen__GoalExpr_10, (MR_Integer) 1)));
              MR_Word erl_backend__erl_code_gen___Mode_77 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__erl_code_gen__GoalExpr_10, (MR_Integer) 2)));
              MR_Word erl_backend__erl_code_gen___UnifyContext_79 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__erl_code_gen__GoalExpr_10, (MR_Integer) 4)));

              {
                erl_backend__erl_unify_gen__erl_gen_unification_7_p_0(erl_backend__erl_code_gen__Unification_78, erl_backend__erl_code_gen__CodeModel_11, erl_backend__erl_code_gen__Context_14, erl_backend__erl_code_gen__MaybeSuccessExpr_15, erl_backend__erl_code_gen__Statement_16, erl_backend__erl_code_gen__STATE_VARIABLE_Info_0_88, erl_backend__erl_code_gen__STATE_VARIABLE_Info_89);
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word erl_backend__erl_code_gen__PredId_68 = ((MR_Word) (MR_hl_field(MR_mktag(2), erl_backend__erl_code_gen__GoalExpr_10, (MR_Integer) 0)));
              MR_Integer erl_backend__erl_code_gen__ProcId_69 = ((MR_Integer) (MR_hl_field(MR_mktag(2), erl_backend__erl_code_gen__GoalExpr_10, (MR_Integer) 1)));
              MR_Word erl_backend__erl_code_gen__ArgVars_70 = ((MR_Word) (MR_hl_field(MR_mktag(2), erl_backend__erl_code_gen__GoalExpr_10, (MR_Integer) 2)));
              MR_Word erl_backend__erl_code_gen__BuiltinState_71 = ((MR_Word) (MR_hl_field(MR_mktag(2), erl_backend__erl_code_gen__GoalExpr_10, (MR_Integer) 3)));
              MR_Word erl_backend__erl_code_gen__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(2), erl_backend__erl_code_gen__GoalExpr_10, (MR_Integer) 4)));
              MR_Word erl_backend__erl_code_gen__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(2), erl_backend__erl_code_gen__GoalExpr_10, (MR_Integer) 5)));

              switch (erl_backend__erl_code_gen__BuiltinState_71) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    erl_backend__erl_call_gen__erl_gen_builtin_9_p_0(erl_backend__erl_code_gen__PredId_68, erl_backend__erl_code_gen__ProcId_69, erl_backend__erl_code_gen__ArgVars_70, erl_backend__erl_code_gen__CodeModel_11, erl_backend__erl_code_gen__Context_14, erl_backend__erl_code_gen__MaybeSuccessExpr_15, erl_backend__erl_code_gen__Statement_16, erl_backend__erl_code_gen__STATE_VARIABLE_Info_0_88, erl_backend__erl_code_gen__STATE_VARIABLE_Info_89);
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word erl_backend__erl_code_gen__ActualArgTypes_74;

                    {
                      erl_backend__erl_code_util__erl_variable_types_3_p_0(erl_backend__erl_code_gen__STATE_VARIABLE_Info_0_88, erl_backend__erl_code_gen__ArgVars_70, &erl_backend__erl_code_gen__ActualArgTypes_74);
                    }
                    {
                      erl_backend__erl_call_gen__erl_gen_call_10_p_0(erl_backend__erl_code_gen__PredId_68, erl_backend__erl_code_gen__ProcId_69, erl_backend__erl_code_gen__ArgVars_70, erl_backend__erl_code_gen__ActualArgTypes_74, erl_backend__erl_code_gen__CodeModel_11, erl_backend__erl_code_gen__Context_14, erl_backend__erl_code_gen__MaybeSuccessExpr_15, erl_backend__erl_code_gen__Statement_16, erl_backend__erl_code_gen__STATE_VARIABLE_Info_0_88, erl_backend__erl_code_gen__STATE_VARIABLE_Info_89);
                    }
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    {
                      mercury__require__unexpected_3_p_0((MR_String) "erl_backend.erl_code_gen", (MR_String) "predicate \140erl_backend.erl_code_gen.erl_gen_goal_expr\'/9", (MR_String) "out_of_line_builtin");
                      return;
                    }
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_code_gen__GoalExpr_10, (MR_Integer) 0)))) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word erl_backend__erl_code_gen__GenericCall_52 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_code_gen__GoalExpr_10, (MR_Integer) 1)));
                  MR_Word erl_backend__erl_code_gen__Vars_53 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_code_gen__GoalExpr_10, (MR_Integer) 2)));
                  MR_Word erl_backend__erl_code_gen__Modes_54 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_code_gen__GoalExpr_10, (MR_Integer) 3)));
                  MR_Word erl_backend__erl_code_gen__CallDetism_56 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_code_gen__GoalExpr_10, (MR_Integer) 5)));
                  MR_Word erl_backend__erl_code_gen__CallCodeModel_57;
                  MR_Word erl_backend__erl_code_gen__V_100_100;
                  MR_Word erl_backend__erl_code_gen__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_code_gen__GoalExpr_10, (MR_Integer) 4)));

                  {
                    hlds__code_model__determinism_to_code_model_2_p_0(erl_backend__erl_code_gen__CallDetism_56, &erl_backend__erl_code_gen__CallCodeModel_57);
                  }
                  {
                    erl_backend__erl_code_gen__V_100_100 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__V_100_100, 0) = ((MR_Box) (&erl_backend__erl_code_gen_scalar_common_4[0]));
                    MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__V_100_100, 1) = ((MR_Box) (erl_backend__erl_code_gen__erl_gen_goal_expr_9_p_0_1));
                    MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__V_100_100, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                    MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__V_100_100, 3) = ((MR_Box) (erl_backend__erl_code_gen__CodeModel_11));
                    MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__V_100_100, 4) = ((MR_Box) (erl_backend__erl_code_gen__CallCodeModel_57));
                  }
                  {
                    mercury__require__expect_4_p_0(erl_backend__erl_code_gen__V_100_100, (MR_String) "erl_backend.erl_code_gen", (MR_String) "predicate \140erl_backend.erl_code_gen.erl_gen_goal_expr\'/9", (MR_String) "code model mismatch");
                  }
                  switch (MR_tag((MR_Word) erl_backend__erl_code_gen__GenericCall_52)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        erl_backend__erl_call_gen__erl_gen_higher_order_call_9_p_0(erl_backend__erl_code_gen__GenericCall_52, erl_backend__erl_code_gen__Vars_53, erl_backend__erl_code_gen__Modes_54, erl_backend__erl_code_gen__CallDetism_56, erl_backend__erl_code_gen__Context_14, erl_backend__erl_code_gen__MaybeSuccessExpr_15, erl_backend__erl_code_gen__Statement_16, erl_backend__erl_code_gen__STATE_VARIABLE_Info_0_88, erl_backend__erl_code_gen__STATE_VARIABLE_Info_89);
                      }
                      break;
                    case (MR_Integer) 1:
                      {
                        erl_backend__erl_call_gen__erl_gen_class_method_call_9_p_0(erl_backend__erl_code_gen__GenericCall_52, erl_backend__erl_code_gen__Vars_53, erl_backend__erl_code_gen__Modes_54, erl_backend__erl_code_gen__CallDetism_56, erl_backend__erl_code_gen__Context_14, erl_backend__erl_code_gen__MaybeSuccessExpr_15, erl_backend__erl_code_gen__Statement_16, erl_backend__erl_code_gen__STATE_VARIABLE_Info_0_88, erl_backend__erl_code_gen__STATE_VARIABLE_Info_89);
                      }
                      break;
                    case (MR_Integer) 2:
                      {
                        {
                          mercury__require__sorry_3_p_0((MR_String) "erl_backend.erl_code_gen", (MR_String) "predicate \140erl_backend.erl_code_gen.erl_gen_goal_expr\'/9", (MR_String) "event_calls in erlang backend");
                          return;
                        }
                      }
                      break;
                    case (MR_Integer) 3:
                      {
                        erl_backend__erl_call_gen__erl_gen_cast_6_p_0(erl_backend__erl_code_gen__Context_14, erl_backend__erl_code_gen__Vars_53, erl_backend__erl_code_gen__MaybeSuccessExpr_15, erl_backend__erl_code_gen__Statement_16, erl_backend__erl_code_gen__STATE_VARIABLE_Info_0_88, erl_backend__erl_code_gen__STATE_VARIABLE_Info_89);
                      }
                      break;
                  }
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word erl_backend__erl_code_gen__Args_83 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_code_gen__GoalExpr_10, (MR_Integer) 4)));
                  MR_Word erl_backend__erl_code_gen__MaybeTraceRuntimeCond_85 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_code_gen__GoalExpr_10, (MR_Integer) 6)));
                  MR_Word erl_backend__erl_code_gen__PragmaImpl_86 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_code_gen__GoalExpr_10, (MR_Integer) 7)));
                  MR_Word erl_backend__erl_code_gen___Attributes_80 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_code_gen__GoalExpr_10, (MR_Integer) 1)));
                  MR_Word erl_backend__erl_code_gen___PredId_81 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_code_gen__GoalExpr_10, (MR_Integer) 2)));
                  MR_Integer erl_backend__erl_code_gen___ProcId_82 = ((MR_Integer) (MR_hl_field(MR_mktag(3), erl_backend__erl_code_gen__GoalExpr_10, (MR_Integer) 3)));
                  MR_Word erl_backend__erl_code_gen___ExtraArgs_84 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_code_gen__GoalExpr_10, (MR_Integer) 5)));

                  {
                    erl_backend__erl_call_gen__erl_gen_foreign_proc_call_9_p_0(erl_backend__erl_code_gen__Args_83, erl_backend__erl_code_gen__MaybeTraceRuntimeCond_85, erl_backend__erl_code_gen__PragmaImpl_86, erl_backend__erl_code_gen__CodeModel_11, erl_backend__erl_code_gen__Context_14, erl_backend__erl_code_gen__MaybeSuccessExpr_15, erl_backend__erl_code_gen__Statement_16, erl_backend__erl_code_gen__STATE_VARIABLE_Info_0_88, erl_backend__erl_code_gen__STATE_VARIABLE_Info_89);
                  }
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word erl_backend__erl_code_gen__Goals_51 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_code_gen__GoalExpr_10, (MR_Integer) 2)));
                  MR_Word erl_backend__erl_code_gen___ConjType_50 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_code_gen__GoalExpr_10, (MR_Integer) 1)));

                  {
                    erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_99_111_110_106_95_95_91_53_93_95_48_9_p_0(erl_backend__erl_code_gen__Goals_51, erl_backend__erl_code_gen__CodeModel_11, erl_backend__erl_code_gen__Detism_12, erl_backend__erl_code_gen__InstMap_13, erl_backend__erl_code_gen__MaybeSuccessExpr_15, erl_backend__erl_code_gen__Statement_16, erl_backend__erl_code_gen__STATE_VARIABLE_Info_0_88, erl_backend__erl_code_gen__STATE_VARIABLE_Info_89);
                  }
                }
                break;
              case (MR_Integer) 3:
                {
                  MR_Word erl_backend__erl_code_gen__Goals_130 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_code_gen__GoalExpr_10, (MR_Integer) 1)));

                  {
                    erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_100_105_115_106_95_95_91_52_93_95_48_8_p_0(erl_backend__erl_code_gen__Goals_130, erl_backend__erl_code_gen__CodeModel_11, erl_backend__erl_code_gen__InstMap_13, erl_backend__erl_code_gen__MaybeSuccessExpr_15, erl_backend__erl_code_gen__Statement_16, erl_backend__erl_code_gen__STATE_VARIABLE_Info_0_88, erl_backend__erl_code_gen__STATE_VARIABLE_Info_89);
                  }
                }
                break;
              case (MR_Integer) 4:
                {
                  MR_Word erl_backend__erl_code_gen__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_code_gen__GoalExpr_10, (MR_Integer) 1)));
                  MR_Word erl_backend__erl_code_gen__CanFail_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_code_gen__GoalExpr_10, (MR_Integer) 2)));
                  MR_Word erl_backend__erl_code_gen__CasesList_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_code_gen__GoalExpr_10, (MR_Integer) 3)));

                  {
                    erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_115_119_105_116_99_104_95_95_91_54_93_95_48_10_p_0(erl_backend__erl_code_gen__Var_18, erl_backend__erl_code_gen__CanFail_19, erl_backend__erl_code_gen__CasesList_20, erl_backend__erl_code_gen__CodeModel_11, erl_backend__erl_code_gen__InstMap_13, erl_backend__erl_code_gen__MaybeSuccessExpr_15, erl_backend__erl_code_gen__Statement_16, erl_backend__erl_code_gen__STATE_VARIABLE_Info_0_88, erl_backend__erl_code_gen__STATE_VARIABLE_Info_89);
                  }
                }
                break;
              case (MR_Integer) 5:
                {
                  MR_Word erl_backend__erl_code_gen__Reason_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_code_gen__GoalExpr_10, (MR_Integer) 1)));
                  MR_Word erl_backend__erl_code_gen__SubGoal_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_code_gen__GoalExpr_10, (MR_Integer) 2)));

                  switch (MR_tag((MR_Word) erl_backend__erl_code_gen__Reason_21)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                    case (MR_Integer) 2:
                      {
                        MR_Word erl_backend__erl_code_gen__SubGoalExpr_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__SubGoal_22, (MR_Integer) 0)));
                        MR_Word erl_backend__erl_code_gen__SubGoalInfo_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__SubGoal_22, (MR_Integer) 1)));
                        MR_Word erl_backend__erl_code_gen__SubGoalDetism_45;

                        {
                          erl_backend__erl_code_gen__SubGoalDetism_45 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(erl_backend__erl_code_gen__SubGoalInfo_44);
                        }
                        /* direct tailcall eliminated */
                        {
                          MR_Word erl_backend__erl_code_gen__GoalExpr__tmp_copy_10 = erl_backend__erl_code_gen__SubGoalExpr_43;
                          MR_Word erl_backend__erl_code_gen__Detism__tmp_copy_12 = erl_backend__erl_code_gen__SubGoalDetism_45;

                          erl_backend__erl_code_gen__Detism_12 = erl_backend__erl_code_gen__Detism__tmp_copy_12;
                          erl_backend__erl_code_gen__GoalExpr_10 = erl_backend__erl_code_gen__GoalExpr__tmp_copy_10;
                        }
                        continue;
                      }
                      break;
                    case (MR_Integer) 1:
                      {
                        erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_99_111_109_109_105_116_95_95_91_53_93_95_48_9_p_0(erl_backend__erl_code_gen__SubGoal_22, erl_backend__erl_code_gen__CodeModel_11, erl_backend__erl_code_gen__Detism_12, erl_backend__erl_code_gen__InstMap_13, erl_backend__erl_code_gen__MaybeSuccessExpr_15, erl_backend__erl_code_gen__Statement_16, erl_backend__erl_code_gen__STATE_VARIABLE_Info_0_88, erl_backend__erl_code_gen__STATE_VARIABLE_Info_89);
                      }
                      break;
                    case (MR_Integer) 3:
                      switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_code_gen__Reason_21, (MR_Integer) 0)))) {
                        default: /*NOTREACHED*/ MR_assert(0);
                        case (MR_Integer) 0:
                          {
                            {
                              mercury__require__unexpected_3_p_0((MR_String) "erl_backend.erl_code_gen", (MR_String) "predicate \140erl_backend.erl_code_gen.erl_gen_goal_expr\'/9", (MR_String) "require_detism");
                              return;
                            }
                          }
                          break;
                        case (MR_Integer) 1:
                          {
                            {
                              mercury__require__unexpected_3_p_0((MR_String) "erl_backend.erl_code_gen", (MR_String) "predicate \140erl_backend.erl_code_gen.erl_gen_goal_expr\'/9", (MR_String) "require_complete_switch");
                              return;
                            }
                          }
                          break;
                        case (MR_Integer) 2:
                          {
                            {
                              mercury__require__unexpected_3_p_0((MR_String) "erl_backend.erl_code_gen", (MR_String) "predicate \140erl_backend.erl_code_gen.erl_gen_goal_expr\'/9", (MR_String) "require_complete_switch");
                              return;
                            }
                          }
                          break;
                        case (MR_Integer) 3:
                          {
                            erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_99_111_109_109_105_116_95_95_91_53_93_95_48_9_p_0(erl_backend__erl_code_gen__SubGoal_22, erl_backend__erl_code_gen__CodeModel_11, erl_backend__erl_code_gen__Detism_12, erl_backend__erl_code_gen__InstMap_13, erl_backend__erl_code_gen__MaybeSuccessExpr_15, erl_backend__erl_code_gen__Statement_16, erl_backend__erl_code_gen__STATE_VARIABLE_Info_0_88, erl_backend__erl_code_gen__STATE_VARIABLE_Info_89);
                          }
                          break;
                        case (MR_Integer) 4:
                        case (MR_Integer) 5:
                        case (MR_Integer) 6:
                          {
                            MR_Word erl_backend__erl_code_gen__SubGoalExpr_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__SubGoal_22, (MR_Integer) 0)));
                            MR_Word erl_backend__erl_code_gen__SubGoalInfo_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__SubGoal_22, (MR_Integer) 1)));
                            MR_Word erl_backend__erl_code_gen__SubGoalDetism_45;

                            {
                              erl_backend__erl_code_gen__SubGoalDetism_45 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(erl_backend__erl_code_gen__SubGoalInfo_44);
                            }
                            /* direct tailcall eliminated */
                            {
                              MR_Word erl_backend__erl_code_gen__GoalExpr__tmp_copy_10 = erl_backend__erl_code_gen__SubGoalExpr_43;
                              MR_Word erl_backend__erl_code_gen__Detism__tmp_copy_12 = erl_backend__erl_code_gen__SubGoalDetism_45;

                              erl_backend__erl_code_gen__Detism_12 = erl_backend__erl_code_gen__Detism__tmp_copy_12;
                              erl_backend__erl_code_gen__GoalExpr_10 = erl_backend__erl_code_gen__GoalExpr__tmp_copy_10;
                            }
                            continue;
                          }
                          break;
                        case (MR_Integer) 7:
                          {
                            {
                              mercury__require__unexpected_3_p_0((MR_String) "erl_backend.erl_code_gen", (MR_String) "predicate \140erl_backend.erl_code_gen.erl_gen_goal_expr\'/9", (MR_String) "loop_control");
                              return;
                            }
                          }
                          break;
                      }
                      break;
                  }
                }
                break;
              case (MR_Integer) 6:
                {
                  MR_Word erl_backend__erl_code_gen__Cond_47 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_code_gen__GoalExpr_10, (MR_Integer) 2)));
                  MR_Word erl_backend__erl_code_gen__Then_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_code_gen__GoalExpr_10, (MR_Integer) 3)));
                  MR_Word erl_backend__erl_code_gen__Else_49 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_code_gen__GoalExpr_10, (MR_Integer) 4)));
                  MR_Word erl_backend__erl_code_gen___Vars_46 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__erl_code_gen__GoalExpr_10, (MR_Integer) 1)));

                  {
                    erl_backend__erl_code_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_114_108_95_103_101_110_95_105_116_101_95_95_91_54_93_95_48_10_p_0(erl_backend__erl_code_gen__CodeModel_11, erl_backend__erl_code_gen__InstMap_13, erl_backend__erl_code_gen__Cond_47, erl_backend__erl_code_gen__Then_48, erl_backend__erl_code_gen__Else_49, erl_backend__erl_code_gen__MaybeSuccessExpr_15, erl_backend__erl_code_gen__Statement_16, erl_backend__erl_code_gen__STATE_VARIABLE_Info_0_88, erl_backend__erl_code_gen__STATE_VARIABLE_Info_89);
                  }
                }
                break;
              case (MR_Integer) 7:
                {
                  {
                    mercury__require__unexpected_3_p_0((MR_String) "erl_backend.erl_code_gen", (MR_String) "predicate \140erl_backend.erl_code_gen.erl_gen_goal_expr\'/9", (MR_String) "shorthand");
                    return;
                  }
                }
                break;
            }
            break;
        }
      }
      break;
    }
}

static void MR_CALL 
erl_backend__erl_code_gen__erl_gen_goal_7_p_0(
  MR_Word erl_backend__erl_code_gen__CodeModel_8,
  MR_Word erl_backend__erl_code_gen__InstMap_9,
  MR_Word erl_backend__erl_code_gen__Goal_10,
  MR_Word erl_backend__erl_code_gen__MaybeSuccessExpr0_11,
  MR_Word * erl_backend__erl_code_gen__Code_12,
  MR_Word erl_backend__erl_code_gen__STATE_VARIABLE_Info_0_20,
  MR_Word * erl_backend__erl_code_gen__STATE_VARIABLE_Info_21)
{
  {
    MR_bool erl_backend__erl_code_gen__succeeded;
    MR_Word erl_backend__erl_code_gen__GoalExpr_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__Goal_10, (MR_Integer) 0)));
    MR_Word erl_backend__erl_code_gen__GoalInfo_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__Goal_10, (MR_Integer) 1)));
    MR_Word erl_backend__erl_code_gen__Context_16;
    MR_Word erl_backend__erl_code_gen__GoalCodeModel_17;

    {
      erl_backend__erl_code_gen__Context_16 = hlds__hlds_goal__goal_info_get_context_1_f_0(erl_backend__erl_code_gen__GoalInfo_15);
    }
    {
      erl_backend__erl_code_gen__GoalCodeModel_17 = hlds__code_model__goal_info_get_code_model_1_f_0(erl_backend__erl_code_gen__GoalInfo_15);
    }
    switch (erl_backend__erl_code_gen__CodeModel_8) {
      default:
        erl_backend__erl_code_gen__succeeded = MR_FALSE;
        break;
      case (MR_Integer) 0:
        switch (erl_backend__erl_code_gen__GoalCodeModel_17) {
          default:
            erl_backend__erl_code_gen__succeeded = MR_FALSE;
            break;
          case (MR_Integer) 2:
            erl_backend__erl_code_gen__succeeded = MR_TRUE;
            break;
          case (MR_Integer) 1:
            erl_backend__erl_code_gen__succeeded = MR_TRUE;
            break;
        }
        break;
      case (MR_Integer) 1:
        erl_backend__erl_code_gen__succeeded = (erl_backend__erl_code_gen__GoalCodeModel_17 == (MR_Integer) 2);
        break;
    }
    if (erl_backend__erl_code_gen__succeeded)
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "erl_backend.erl_code_gen", (MR_String) "predicate \140erl_backend.erl_code_gen.erl_gen_goal\'/7", (MR_String) "code model mismatch");
          return;
        }
      }
    else
      {
        MR_Word erl_backend__erl_code_gen__Determinism_18;
        MR_Word erl_backend__erl_code_gen__MaybeSuccessExpr_19;

        {
          erl_backend__erl_code_gen__Determinism_18 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(erl_backend__erl_code_gen__GoalInfo_15);
        }
        switch (erl_backend__erl_code_gen__Determinism_18) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 4:
          case (MR_Integer) 5:
          case (MR_Integer) 0:
          case (MR_Integer) 2:
          case (MR_Integer) 3:
          case (MR_Integer) 1:
            erl_backend__erl_code_gen__MaybeSuccessExpr_19 = erl_backend__erl_code_gen__MaybeSuccessExpr0_11;
            break;
          case (MR_Integer) 6:
            erl_backend__erl_code_gen__MaybeSuccessExpr_19 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            break;
          case (MR_Integer) 7:
            {
              MR_Word erl_backend__erl_code_gen__V_25_25;
              MR_Word erl_backend__erl_code_gen__V_26_26;

              {
                erl_backend__erl_code_gen__V_26_26 = erl_backend__elds__elds_fail_0_f_0();
              }
              {
                erl_backend__erl_code_gen__V_25_25 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), erl_backend__erl_code_gen__V_25_25, 0) = ((MR_Box) (erl_backend__erl_code_gen__V_26_26));
              }
              {
                erl_backend__erl_code_gen__MaybeSuccessExpr_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), erl_backend__erl_code_gen__MaybeSuccessExpr_19, 0) = ((MR_Box) (erl_backend__erl_code_gen__V_25_25));
              }
            }
            break;
        }
        {
          erl_backend__erl_code_gen__erl_gen_goal_expr_9_p_0(erl_backend__erl_code_gen__GoalExpr_14, erl_backend__erl_code_gen__GoalCodeModel_17, erl_backend__erl_code_gen__Determinism_18, erl_backend__erl_code_gen__InstMap_9, erl_backend__erl_code_gen__Context_16, erl_backend__erl_code_gen__MaybeSuccessExpr_19, erl_backend__erl_code_gen__Code_12, erl_backend__erl_code_gen__STATE_VARIABLE_Info_0_20, erl_backend__erl_code_gen__STATE_VARIABLE_Info_21);
        }
      }
  }
}

static void MR_CALL 
erl_backend__erl_code_gen__erl_gen_proc_7_p_0(
  MR_Word erl_backend__erl_code_gen__ModuleInfo_8,
  MR_Word erl_backend__erl_code_gen__PredId_9,
  MR_Integer erl_backend__erl_code_gen__ProcId_10,
  MR_Word erl_backend__erl_code_gen__PredInfo_11,
  MR_Word erl_backend__erl_code_gen__ProcInfo_12,
  MR_Word erl_backend__erl_code_gen__STATE_VARIABLE_Defns_0_18,
  MR_Word * erl_backend__erl_code_gen__STATE_VARIABLE_Defns_19)
{
  {
    MR_bool erl_backend__erl_code_gen__succeeded;
    MR_Word erl_backend__erl_code_gen__TypeCtorInfo_44_57;
    MR_Word erl_backend__erl_code_gen__ProcVarSet_14;
    MR_Word erl_backend__erl_code_gen__ProcBody_15;
    MR_Word erl_backend__erl_code_gen__EnvVarNames_16;
    MR_Word erl_backend__erl_code_gen__ProcDefn_17;
    MR_Word erl_backend__erl_code_gen__V_20_20;
    MR_Word erl_backend__erl_code_gen__PredStatus_30;
    MR_Word erl_backend__erl_code_gen__CodeModel_31;
    MR_Word erl_backend__erl_code_gen__HeadVars_32;
    MR_Word erl_backend__erl_code_gen__InstMap0_33;
    MR_Word erl_backend__erl_code_gen__Goal0_34;
    MR_Word erl_backend__erl_code_gen__GoalExpr_35;
    MR_Word erl_backend__erl_code_gen__GoalInfo0_36;
    MR_Word erl_backend__erl_code_gen__NonLocals0_37;
    MR_Word erl_backend__erl_code_gen__HeadVarsSet_38;
    MR_Word erl_backend__erl_code_gen__NonLocals_39;
    MR_Word erl_backend__erl_code_gen__GoalInfo_40;
    MR_Word erl_backend__erl_code_gen__Goal_41;
    MR_Word erl_backend__erl_code_gen__STATE_VARIABLE_Info_38_51;
    MR_Word erl_backend__erl_code_gen__STATE_VARIABLE_Info_43_56;
    MR_Word erl_backend__erl_code_gen___Context_42;
    MR_Word erl_backend__erl_code_gen__V_52_52;
    MR_Word erl_backend__erl_code_gen__V_44_44;

    {
      hlds__hlds_pred__pred_info_get_status_2_p_0(erl_backend__erl_code_gen__PredInfo_11, &erl_backend__erl_code_gen__PredStatus_30);
    }
    {
      erl_backend__erl_code_gen__CodeModel_31 = hlds__code_model__proc_info_interface_code_model_1_f_0(erl_backend__erl_code_gen__ProcInfo_12);
    }
    {
      hlds__hlds_pred__proc_info_get_headvars_2_p_0(erl_backend__erl_code_gen__ProcInfo_12, &erl_backend__erl_code_gen__HeadVars_32);
    }
    {
      hlds__hlds_pred__proc_info_get_initial_instmap_3_p_0(erl_backend__erl_code_gen__ProcInfo_12, erl_backend__erl_code_gen__ModuleInfo_8, &erl_backend__erl_code_gen__InstMap0_33);
    }
    {
      hlds__hlds_pred__proc_info_get_goal_2_p_0(erl_backend__erl_code_gen__ProcInfo_12, &erl_backend__erl_code_gen__Goal0_34);
    }
    erl_backend__erl_code_gen__GoalExpr_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__Goal0_34, (MR_Integer) 0)));
    erl_backend__erl_code_gen__GoalInfo0_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__Goal0_34, (MR_Integer) 1)));
    {
      erl_backend__erl_code_gen__NonLocals0_37 = hlds__hlds_goal__goal_info_get_code_gen_nonlocals_1_f_0(erl_backend__erl_code_gen__GoalInfo0_36);
    }
    erl_backend__erl_code_gen__TypeCtorInfo_44_57 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
    {
      parse_tree__set_of_var__list_to_set_2_p_0(erl_backend__erl_code_gen__TypeCtorInfo_44_57, erl_backend__erl_code_gen__HeadVars_32, &erl_backend__erl_code_gen__HeadVarsSet_38);
    }
    {
      parse_tree__set_of_var__intersect_3_p_0(erl_backend__erl_code_gen__TypeCtorInfo_44_57, erl_backend__erl_code_gen__HeadVarsSet_38, erl_backend__erl_code_gen__NonLocals0_37, &erl_backend__erl_code_gen__NonLocals_39);
    }
    {
      hlds__hlds_goal__goal_info_set_code_gen_nonlocals_3_p_0(erl_backend__erl_code_gen__NonLocals_39, erl_backend__erl_code_gen__GoalInfo0_36, &erl_backend__erl_code_gen__GoalInfo_40);
    }
    {
      erl_backend__erl_code_gen__Goal_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__Goal_41, 0) = ((MR_Box) (erl_backend__erl_code_gen__GoalExpr_35));
      MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__Goal_41, 1) = ((MR_Box) (erl_backend__erl_code_gen__GoalInfo_40));
    }
    {
      erl_backend__erl_code_gen___Context_42 = hlds__hlds_goal__goal_info_get_context_1_f_0(erl_backend__erl_code_gen__GoalInfo_40);
    }
    {
      erl_backend__erl_code_gen__STATE_VARIABLE_Info_38_51 = erl_backend__erl_code_util__erl_gen_info_init_3_f_0(erl_backend__erl_code_gen__ModuleInfo_8, erl_backend__erl_code_gen__PredId_9, erl_backend__erl_code_gen__ProcId_10);
    }
    erl_backend__erl_code_gen__V_52_52 = (MR_Word) erl_backend__erl_code_gen__PredStatus_30;
    erl_backend__erl_code_gen__succeeded = ((MR_tag((MR_Word) erl_backend__erl_code_gen__V_52_52)) == (MR_mktag((MR_Integer) 1)));
    if (erl_backend__erl_code_gen__succeeded)
      {
        erl_backend__erl_code_gen__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__erl_code_gen__V_52_52, (MR_Integer) 0)));
        {
          MR_Word erl_backend__erl_code_gen__TypeInfo_45_58;
          MR_Word erl_backend__erl_code_gen__ArgTypes_45;
          MR_Word erl_backend__erl_code_gen__ArgModes_46;
          MR_Word erl_backend__erl_code_gen__InputArgs_47;
          MR_Integer erl_backend__erl_code_gen__Arity_49;
          MR_Word erl_backend__erl_code_gen___OutputArgs_48;

          {
            hlds__hlds_pred__pred_info_get_arg_types_2_p_0(erl_backend__erl_code_gen__PredInfo_11, &erl_backend__erl_code_gen__ArgTypes_45);
          }
          {
            hlds__hlds_pred__proc_info_get_argmodes_2_p_0(erl_backend__erl_code_gen__ProcInfo_12, &erl_backend__erl_code_gen__ArgModes_46);
          }
          erl_backend__erl_code_gen__TypeInfo_45_58 = (MR_Word) &erl_backend__erl_code_gen_scalar_common_1[0];
          {
            erl_backend__erl_code_util__erl_gen_arg_list_7_p_0(erl_backend__erl_code_gen__TypeInfo_45_58, erl_backend__erl_code_gen__ModuleInfo_8, (MR_Integer) 0, erl_backend__erl_code_gen__HeadVars_32, erl_backend__erl_code_gen__ArgTypes_45, erl_backend__erl_code_gen__ArgModes_46, &erl_backend__erl_code_gen__InputArgs_47, &erl_backend__erl_code_gen___OutputArgs_48);
          }
          switch (erl_backend__erl_code_gen__CodeModel_31) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
            case (MR_Integer) 1:
              {
                erl_backend__erl_code_gen__Arity_49 = mercury__list__length_1_f_0(erl_backend__erl_code_gen__TypeInfo_45_58, erl_backend__erl_code_gen__InputArgs_47);
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Integer erl_backend__erl_code_gen__V_54_54;

                {
                  erl_backend__erl_code_gen__V_54_54 = mercury__list__length_1_f_0(erl_backend__erl_code_gen__TypeInfo_45_58, erl_backend__erl_code_gen__InputArgs_47);
                }
                erl_backend__erl_code_gen__Arity_49 = (erl_backend__erl_code_gen__V_54_54 + (MR_Integer) 1);
              }
              break;
          }
          {
            erl_backend__erl_code_gen__ProcBody_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), erl_backend__erl_code_gen__ProcBody_15, 0) = ((MR_Box) (erl_backend__erl_code_gen__Arity_49));
          }
          erl_backend__erl_code_gen__STATE_VARIABLE_Info_43_56 = erl_backend__erl_code_gen__STATE_VARIABLE_Info_38_51;
        }
      }
    else
      {
        MR_Word erl_backend__erl_code_gen__ProcClause_50;
        MR_Word erl_backend__erl_code_gen__InputVars_66;
        MR_Word erl_backend__erl_code_gen__OutputVars_67;
        MR_Word erl_backend__erl_code_gen__OutputVarsExprs_68;
        MR_Word erl_backend__erl_code_gen__InputVarsTerms_69;
        MR_Word erl_backend__erl_code_gen__SuccessExpr_70;
        MR_Word erl_backend__erl_code_gen__InstMap_71;
        MR_Word erl_backend__erl_code_gen__Statement_73;
        MR_Word erl_backend__erl_code_gen__STATE_VARIABLE_Info_23_75;
        MR_Word erl_backend__erl_code_gen__V_82_82;

        {
          erl_backend__erl_code_util__erl_gen_info_get_input_vars_2_p_0(erl_backend__erl_code_gen__STATE_VARIABLE_Info_38_51, &erl_backend__erl_code_gen__InputVars_66);
        }
        {
          erl_backend__erl_code_util__erl_gen_info_get_output_vars_2_p_0(erl_backend__erl_code_gen__STATE_VARIABLE_Info_38_51, &erl_backend__erl_code_gen__OutputVars_67);
        }
        {
          erl_backend__erl_code_gen__OutputVarsExprs_68 = erl_backend__elds__exprs_from_vars_1_f_0(erl_backend__erl_code_gen__OutputVars_67);
        }
        switch (erl_backend__erl_code_gen__CodeModel_31) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              {
                erl_backend__erl_code_gen__InputVarsTerms_69 = erl_backend__elds__terms_from_vars_1_f_0(erl_backend__erl_code_gen__InputVars_66);
              }
              {
                erl_backend__erl_code_gen__SuccessExpr_70 = erl_backend__elds__tuple_or_single_expr_1_f_0(erl_backend__erl_code_gen__OutputVarsExprs_68);
              }
              erl_backend__erl_code_gen__InstMap_71 = erl_backend__erl_code_gen__InstMap0_33;
              erl_backend__erl_code_gen__STATE_VARIABLE_Info_23_75 = erl_backend__erl_code_gen__STATE_VARIABLE_Info_38_51;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word erl_backend__erl_code_gen__SucceedVar_72;
              MR_Word erl_backend__erl_code_gen__V_76_76;
              MR_Word erl_backend__erl_code_gen__V_77_77;
              MR_Word erl_backend__erl_code_gen__V_79_79;
              MR_Word erl_backend__erl_code_gen__V_80_80;

              {
                erl_backend__erl_code_util__erl_gen_info_new_named_var_4_p_0((MR_String) "SucceedHeadVar", &erl_backend__erl_code_gen__SucceedVar_72, erl_backend__erl_code_gen__STATE_VARIABLE_Info_38_51, &erl_backend__erl_code_gen__STATE_VARIABLE_Info_23_75);
              }
              {
                hlds__instmap__instmap_set_var_4_p_0(erl_backend__erl_code_gen__SucceedVar_72, (MR_Word) MR_mkword(MR_mktag(3), &erl_backend__erl_code_gen_scalar_common_3[0]), erl_backend__erl_code_gen__InstMap0_33, &erl_backend__erl_code_gen__InstMap_71);
              }
              {
                erl_backend__erl_code_gen__V_77_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), erl_backend__erl_code_gen__V_77_77, 0) = ((MR_Box) (erl_backend__erl_code_gen__SucceedVar_72));
                MR_hl_field(MR_mktag(1), erl_backend__erl_code_gen__V_77_77, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                erl_backend__erl_code_gen__V_76_76 = mercury__list__f_43_43_2_f_0((MR_Word) &erl_backend__erl_code_gen_scalar_common_1[0], erl_backend__erl_code_gen__InputVars_66, erl_backend__erl_code_gen__V_77_77);
              }
              {
                erl_backend__erl_code_gen__InputVarsTerms_69 = erl_backend__elds__terms_from_vars_1_f_0(erl_backend__erl_code_gen__V_76_76);
              }
              {
                erl_backend__erl_code_gen__V_80_80 = erl_backend__elds__expr_from_var_1_f_0(erl_backend__erl_code_gen__SucceedVar_72);
              }
              {
                erl_backend__erl_code_gen__V_79_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), erl_backend__erl_code_gen__V_79_79, 0) = ((MR_Box) (erl_backend__erl_code_gen__V_80_80));
              }
              {
                erl_backend__erl_code_gen__SuccessExpr_70 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), erl_backend__erl_code_gen__SuccessExpr_70, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                MR_hl_field(MR_mktag(3), erl_backend__erl_code_gen__SuccessExpr_70, 1) = ((MR_Box) (erl_backend__erl_code_gen__V_79_79));
                MR_hl_field(MR_mktag(3), erl_backend__erl_code_gen__SuccessExpr_70, 2) = ((MR_Box) (erl_backend__erl_code_gen__OutputVarsExprs_68));
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word erl_backend__erl_code_gen__V_81_81;

              {
                erl_backend__erl_code_gen__InputVarsTerms_69 = erl_backend__elds__terms_from_vars_1_f_0(erl_backend__erl_code_gen__InputVars_66);
              }
              {
                erl_backend__erl_code_gen__V_81_81 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), erl_backend__erl_code_gen__V_81_81, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                MR_hl_field(MR_mktag(3), erl_backend__erl_code_gen__V_81_81, 1) = ((MR_Box) (erl_backend__erl_code_gen__OutputVarsExprs_68));
              }
              {
                erl_backend__erl_code_gen__SuccessExpr_70 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), erl_backend__erl_code_gen__SuccessExpr_70, 0) = ((MR_Box) (erl_backend__erl_code_gen__V_81_81));
              }
              erl_backend__erl_code_gen__InstMap_71 = erl_backend__erl_code_gen__InstMap0_33;
              erl_backend__erl_code_gen__STATE_VARIABLE_Info_23_75 = erl_backend__erl_code_gen__STATE_VARIABLE_Info_38_51;
            }
            break;
        }
        {
          erl_backend__erl_code_gen__V_82_82 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), erl_backend__erl_code_gen__V_82_82, 0) = ((MR_Box) (erl_backend__erl_code_gen__SuccessExpr_70));
        }
        {
          erl_backend__erl_code_gen__erl_gen_goal_7_p_0(erl_backend__erl_code_gen__CodeModel_31, erl_backend__erl_code_gen__InstMap_71, erl_backend__erl_code_gen__Goal_41, erl_backend__erl_code_gen__V_82_82, &erl_backend__erl_code_gen__Statement_73, erl_backend__erl_code_gen__STATE_VARIABLE_Info_23_75, &erl_backend__erl_code_gen__STATE_VARIABLE_Info_43_56);
        }
        {
          erl_backend__erl_code_gen__ProcClause_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__ProcClause_50, 0) = ((MR_Box) (erl_backend__erl_code_gen__InputVarsTerms_69));
          MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__ProcClause_50, 1) = ((MR_Box) (erl_backend__erl_code_gen__Statement_73));
        }
        erl_backend__erl_code_gen__ProcBody_15 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) erl_backend__erl_code_gen__ProcClause_50);
      }
    {
      erl_backend__erl_code_util__erl_gen_info_get_varset_2_p_0(erl_backend__erl_code_gen__STATE_VARIABLE_Info_43_56, &erl_backend__erl_code_gen__ProcVarSet_14);
    }
    {
      erl_backend__erl_code_util__erl_gen_info_get_env_vars_2_p_0(erl_backend__erl_code_gen__STATE_VARIABLE_Info_43_56, &erl_backend__erl_code_gen__EnvVarNames_16);
    }
    {
      erl_backend__erl_code_gen__V_20_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__V_20_20, 0) = ((MR_Box) (erl_backend__erl_code_gen__PredId_9));
      MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__V_20_20, 1) = ((MR_Box) (erl_backend__erl_code_gen__ProcId_10));
    }
    {
      erl_backend__erl_code_gen__ProcDefn_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__ProcDefn_17, 0) = ((MR_Box) (erl_backend__erl_code_gen__V_20_20));
      MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__ProcDefn_17, 1) = ((MR_Box) (erl_backend__erl_code_gen__ProcVarSet_14));
      MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__ProcDefn_17, 2) = ((MR_Box) (erl_backend__erl_code_gen__ProcBody_15));
      MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__ProcDefn_17, 3) = ((MR_Box) (erl_backend__erl_code_gen__EnvVarNames_16));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *erl_backend__erl_code_gen__STATE_VARIABLE_Defns_19 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (erl_backend__erl_code_gen__ProcDefn_17));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (erl_backend__erl_code_gen__STATE_VARIABLE_Defns_0_18));
    }
  }
}

static void MR_CALL 
erl_backend__erl_code_gen__erl_gen_simple_compare_6_p_0(
  MR_Word erl_backend__erl_code_gen__ModuleInfo_7,
  MR_Word erl_backend__erl_code_gen__PredId_8,
  MR_Integer erl_backend__erl_code_gen__ProcId_9,
  MR_Word erl_backend__erl_code_gen__X_10,
  MR_Word erl_backend__erl_code_gen__Y_11,
  MR_Word * erl_backend__erl_code_gen__ProcDefn_12)
{
  {
    MR_bool erl_backend__erl_code_gen__succeeded;
    MR_Word erl_backend__erl_code_gen__Info_13;
    MR_Word erl_backend__erl_code_gen__InputVars_14;
    MR_Word erl_backend__erl_code_gen__XExpr_15;
    MR_Word erl_backend__erl_code_gen__YExpr_16;
    MR_Word erl_backend__erl_code_gen__Clause_17;
    MR_Word erl_backend__erl_code_gen__ClauseExpr_18;
    MR_Word erl_backend__erl_code_gen__CondEq_19;
    MR_Word erl_backend__erl_code_gen__IsEq_20;
    MR_Word erl_backend__erl_code_gen__IsNotEq_21;
    MR_Word erl_backend__erl_code_gen__CondLt_22;
    MR_Word erl_backend__erl_code_gen__IsLt_23;
    MR_Word erl_backend__erl_code_gen__IsGt_24;
    MR_Word erl_backend__erl_code_gen__ProcVarSet_25;
    MR_Word erl_backend__erl_code_gen__EnvVarNames_26;
    MR_Word erl_backend__erl_code_gen__V_27_27;
    MR_Word erl_backend__erl_code_gen__V_28_28;
    MR_Word erl_backend__erl_code_gen__V_29_29;
    MR_Word erl_backend__erl_code_gen__V_32_32;
    MR_Word erl_backend__erl_code_gen__V_33_33;
    MR_Word erl_backend__erl_code_gen__V_34_34;
    MR_Word erl_backend__erl_code_gen__V_36_36;
    MR_Word erl_backend__erl_code_gen__V_37_37;
    MR_Word erl_backend__erl_code_gen__V_38_38;
    MR_Word erl_backend__erl_code_gen__V_39_39;
    MR_Word erl_backend__erl_code_gen__V_42_42;
    MR_Word erl_backend__erl_code_gen__V_43_43;
    MR_Word erl_backend__erl_code_gen__V_44_44;
    MR_Word erl_backend__erl_code_gen__V_46_46;
    MR_Word erl_backend__erl_code_gen__V_47_47;
    MR_Word erl_backend__erl_code_gen__V_48_48;
    MR_Word erl_backend__erl_code_gen__V_50_50;
    MR_Word erl_backend__erl_code_gen__V_51_51;

    {
      erl_backend__erl_code_gen__Info_13 = erl_backend__erl_code_util__erl_gen_info_init_3_f_0(erl_backend__erl_code_gen__ModuleInfo_7, erl_backend__erl_code_gen__PredId_8, erl_backend__erl_code_gen__ProcId_9);
    }
    {
      erl_backend__erl_code_util__erl_gen_info_get_input_vars_2_p_0(erl_backend__erl_code_gen__Info_13, &erl_backend__erl_code_gen__InputVars_14);
    }
    {
      erl_backend__erl_code_gen__XExpr_15 = erl_backend__elds__expr_from_var_1_f_0(erl_backend__erl_code_gen__X_10);
    }
    {
      erl_backend__erl_code_gen__YExpr_16 = erl_backend__elds__expr_from_var_1_f_0(erl_backend__erl_code_gen__Y_11);
    }
    {
      erl_backend__erl_code_gen__V_27_27 = erl_backend__elds__terms_from_vars_1_f_0(erl_backend__erl_code_gen__InputVars_14);
    }
    {
      erl_backend__erl_code_gen__CondEq_19 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), erl_backend__erl_code_gen__CondEq_19, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(3), erl_backend__erl_code_gen__CondEq_19, 1) = ((MR_Box) ((MR_Integer) 15));
      MR_hl_field(MR_mktag(3), erl_backend__erl_code_gen__CondEq_19, 2) = ((MR_Box) (erl_backend__erl_code_gen__XExpr_15));
      MR_hl_field(MR_mktag(3), erl_backend__erl_code_gen__CondEq_19, 3) = ((MR_Box) (erl_backend__erl_code_gen__YExpr_16));
    }
    {
      erl_backend__erl_code_gen__V_32_32 = erl_backend__elds__elds_true_0_f_0();
    }
    {
      erl_backend__erl_code_gen__V_34_34 = erl_backend__elds__make_enum_alternative_1_f_0((MR_String) "=");
    }
    {
      erl_backend__erl_code_gen__V_33_33 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), erl_backend__erl_code_gen__V_33_33, 0) = ((MR_Box) (erl_backend__erl_code_gen__V_34_34));
    }
    {
      erl_backend__erl_code_gen__IsEq_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__IsEq_20, 0) = ((MR_Box) (erl_backend__erl_code_gen__V_32_32));
      MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__IsEq_20, 1) = ((MR_Box) (erl_backend__erl_code_gen__V_33_33));
    }
    {
      erl_backend__erl_code_gen__V_36_36 = erl_backend__elds__elds_false_0_f_0();
    }
    {
      erl_backend__erl_code_gen__CondLt_22 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), erl_backend__erl_code_gen__CondLt_22, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(3), erl_backend__erl_code_gen__CondLt_22, 1) = ((MR_Box) ((MR_Integer) 12));
      MR_hl_field(MR_mktag(3), erl_backend__erl_code_gen__CondLt_22, 2) = ((MR_Box) (erl_backend__erl_code_gen__XExpr_15));
      MR_hl_field(MR_mktag(3), erl_backend__erl_code_gen__CondLt_22, 3) = ((MR_Box) (erl_backend__erl_code_gen__YExpr_16));
    }
    {
      erl_backend__erl_code_gen__V_42_42 = erl_backend__elds__elds_true_0_f_0();
    }
    {
      erl_backend__erl_code_gen__V_44_44 = erl_backend__elds__make_enum_alternative_1_f_0((MR_String) "<");
    }
    {
      erl_backend__erl_code_gen__V_43_43 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), erl_backend__erl_code_gen__V_43_43, 0) = ((MR_Box) (erl_backend__erl_code_gen__V_44_44));
    }
    {
      erl_backend__erl_code_gen__IsLt_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__IsLt_23, 0) = ((MR_Box) (erl_backend__erl_code_gen__V_42_42));
      MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__IsLt_23, 1) = ((MR_Box) (erl_backend__erl_code_gen__V_43_43));
    }
    {
      erl_backend__erl_code_gen__V_46_46 = erl_backend__elds__elds_false_0_f_0();
    }
    {
      erl_backend__erl_code_gen__V_48_48 = erl_backend__elds__make_enum_alternative_1_f_0((MR_String) ">");
    }
    {
      erl_backend__erl_code_gen__V_47_47 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), erl_backend__erl_code_gen__V_47_47, 0) = ((MR_Box) (erl_backend__erl_code_gen__V_48_48));
    }
    {
      erl_backend__erl_code_gen__IsGt_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__IsGt_24, 0) = ((MR_Box) (erl_backend__erl_code_gen__V_46_46));
      MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__IsGt_24, 1) = ((MR_Box) (erl_backend__erl_code_gen__V_47_47));
    }
    {
      erl_backend__erl_code_gen__V_39_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), erl_backend__erl_code_gen__V_39_39, 0) = ((MR_Box) (erl_backend__erl_code_gen__IsGt_24));
      MR_hl_field(MR_mktag(1), erl_backend__erl_code_gen__V_39_39, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      erl_backend__erl_code_gen__V_38_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), erl_backend__erl_code_gen__V_38_38, 0) = ((MR_Box) (erl_backend__erl_code_gen__IsLt_23));
      MR_hl_field(MR_mktag(1), erl_backend__erl_code_gen__V_38_38, 1) = ((MR_Box) (erl_backend__erl_code_gen__V_39_39));
    }
    {
      erl_backend__erl_code_gen__V_37_37 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), erl_backend__erl_code_gen__V_37_37, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
      MR_hl_field(MR_mktag(3), erl_backend__erl_code_gen__V_37_37, 1) = ((MR_Box) (erl_backend__erl_code_gen__CondLt_22));
      MR_hl_field(MR_mktag(3), erl_backend__erl_code_gen__V_37_37, 2) = ((MR_Box) (erl_backend__erl_code_gen__V_38_38));
    }
    {
      erl_backend__erl_code_gen__IsNotEq_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__IsNotEq_21, 0) = ((MR_Box) (erl_backend__erl_code_gen__V_36_36));
      MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__IsNotEq_21, 1) = ((MR_Box) (erl_backend__erl_code_gen__V_37_37));
    }
    {
      erl_backend__erl_code_gen__V_29_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), erl_backend__erl_code_gen__V_29_29, 0) = ((MR_Box) (erl_backend__erl_code_gen__IsNotEq_21));
      MR_hl_field(MR_mktag(1), erl_backend__erl_code_gen__V_29_29, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      erl_backend__erl_code_gen__V_28_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), erl_backend__erl_code_gen__V_28_28, 0) = ((MR_Box) (erl_backend__erl_code_gen__IsEq_20));
      MR_hl_field(MR_mktag(1), erl_backend__erl_code_gen__V_28_28, 1) = ((MR_Box) (erl_backend__erl_code_gen__V_29_29));
    }
    {
      erl_backend__erl_code_gen__ClauseExpr_18 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), erl_backend__erl_code_gen__ClauseExpr_18, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
      MR_hl_field(MR_mktag(3), erl_backend__erl_code_gen__ClauseExpr_18, 1) = ((MR_Box) (erl_backend__erl_code_gen__CondEq_19));
      MR_hl_field(MR_mktag(3), erl_backend__erl_code_gen__ClauseExpr_18, 2) = ((MR_Box) (erl_backend__erl_code_gen__V_28_28));
    }
    {
      erl_backend__erl_code_gen__Clause_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__Clause_17, 0) = ((MR_Box) (erl_backend__erl_code_gen__V_27_27));
      MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__Clause_17, 1) = ((MR_Box) (erl_backend__erl_code_gen__ClauseExpr_18));
    }
    {
      erl_backend__erl_code_util__erl_gen_info_get_varset_2_p_0(erl_backend__erl_code_gen__Info_13, &erl_backend__erl_code_gen__ProcVarSet_25);
    }
    {
      erl_backend__erl_code_util__erl_gen_info_get_env_vars_2_p_0(erl_backend__erl_code_gen__Info_13, &erl_backend__erl_code_gen__EnvVarNames_26);
    }
    {
      erl_backend__erl_code_gen__V_50_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__V_50_50, 0) = ((MR_Box) (erl_backend__erl_code_gen__PredId_8));
      MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__V_50_50, 1) = ((MR_Box) (erl_backend__erl_code_gen__ProcId_9));
    }
    erl_backend__erl_code_gen__V_51_51 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) erl_backend__erl_code_gen__Clause_17);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      *erl_backend__erl_code_gen__ProcDefn_12 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (erl_backend__erl_code_gen__V_50_50));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (erl_backend__erl_code_gen__ProcVarSet_25));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (erl_backend__erl_code_gen__V_51_51));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (erl_backend__erl_code_gen__EnvVarNames_26));
    }
  }
}

static MR_bool MR_CALL 
erl_backend__erl_code_gen__erl_maybe_gen_simple_special_pred_7_p_0(
  MR_Word erl_backend__erl_code_gen__ModuleInfo_8,
  MR_Word erl_backend__erl_code_gen__PredId_9,
  MR_Integer erl_backend__erl_code_gen__ProcId_10,
  MR_Word erl_backend__erl_code_gen__PredInfo_11,
  MR_Word erl_backend__erl_code_gen__ProcInfo_12,
  MR_Word erl_backend__erl_code_gen__STATE_VARIABLE_Defns_0_27,
  MR_Word * erl_backend__erl_code_gen__STATE_VARIABLE_Defns_28)
{
  {
    MR_bool erl_backend__erl_code_gen__succeeded;
    MR_String erl_backend__erl_code_gen__PredName_14;
    MR_Integer erl_backend__erl_code_gen__PredArity_15;
    MR_Word erl_backend__erl_code_gen__SpecialId_16;
    MR_Word erl_backend__erl_code_gen__Args_18;
    MR_Word erl_backend__erl_code_gen__VarTypes_19;
    MR_Word erl_backend__erl_code_gen__ProcDefn_24;
    MR_Integer erl_backend__erl_code_gen__V_42_42;
    MR_String erl_backend__erl_code_gen__V_17_17;

    {
      erl_backend__erl_code_gen__PredName_14 = hlds__hlds_pred__pred_info_name_1_f_0(erl_backend__erl_code_gen__PredInfo_11);
    }
    {
      erl_backend__erl_code_gen__PredArity_15 = hlds__hlds_pred__pred_info_orig_arity_1_f_0(erl_backend__erl_code_gen__PredInfo_11);
    }
    {
      erl_backend__erl_code_gen__succeeded = mdbcomp__prim_data__special_pred_name_arity_4_p_2(&erl_backend__erl_code_gen__SpecialId_16, &erl_backend__erl_code_gen__V_17_17, erl_backend__erl_code_gen__PredName_14, &erl_backend__erl_code_gen__V_42_42);
    }
    if (erl_backend__erl_code_gen__succeeded)
      {
        erl_backend__erl_code_gen__succeeded = (erl_backend__erl_code_gen__PredArity_15 == erl_backend__erl_code_gen__V_42_42);
        if (erl_backend__erl_code_gen__succeeded)
          {
            {
              hlds__hlds_pred__proc_info_get_headvars_2_p_0(erl_backend__erl_code_gen__ProcInfo_12, &erl_backend__erl_code_gen__Args_18);
            }
            {
              hlds__hlds_pred__proc_info_get_vartypes_2_p_0(erl_backend__erl_code_gen__ProcInfo_12, &erl_backend__erl_code_gen__VarTypes_19);
            }
            switch (erl_backend__erl_code_gen__SpecialId_16) {
              default:
                erl_backend__erl_code_gen__succeeded = MR_FALSE;
                break;
              case (MR_Integer) 2:
                {
                  MR_Word erl_backend__erl_code_gen__V_29_29;
                  MR_Word erl_backend__erl_code_gen__V_30_30;
                  MR_Word erl_backend__erl_code_gen__V_32_32;
                  MR_Word erl_backend__erl_code_gen__Y_37;
                  MR_Word erl_backend__erl_code_gen__X_38;
                  MR_Word erl_backend__erl_code_gen__Type_39;
                  MR_Word erl_backend__erl_code_gen__V_44_44;
                  MR_Word erl_backend__erl_code_gen__V_50_50;
                  MR_Word erl_backend__erl_code_gen__V_51_51;

                  {
                    mercury__list__reverse_2_p_0((MR_Word) &erl_backend__erl_code_gen_scalar_common_1[0], erl_backend__erl_code_gen__Args_18, &erl_backend__erl_code_gen__V_29_29);
                  }
                  erl_backend__erl_code_gen__succeeded = ((MR_tag((MR_Word) erl_backend__erl_code_gen__V_29_29)) == (MR_mktag((MR_Integer) 1)));
                  if (erl_backend__erl_code_gen__succeeded)
                    {
                      erl_backend__erl_code_gen__Y_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__erl_code_gen__V_29_29, (MR_Integer) 0)));
                      erl_backend__erl_code_gen__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__erl_code_gen__V_29_29, (MR_Integer) 1)));
                      erl_backend__erl_code_gen__succeeded = ((MR_tag((MR_Word) erl_backend__erl_code_gen__V_30_30)) == (MR_mktag((MR_Integer) 1)));
                      if (erl_backend__erl_code_gen__succeeded)
                        {
                          erl_backend__erl_code_gen__X_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__erl_code_gen__V_30_30, (MR_Integer) 0)));
                          erl_backend__erl_code_gen__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__erl_code_gen__V_30_30, (MR_Integer) 1)));
                          erl_backend__erl_code_gen__succeeded = ((MR_tag((MR_Word) erl_backend__erl_code_gen__V_44_44)) == (MR_mktag((MR_Integer) 1)));
                          if (erl_backend__erl_code_gen__succeeded)
                            {
                              erl_backend__erl_code_gen__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__erl_code_gen__V_44_44, (MR_Integer) 0)));
                              erl_backend__erl_code_gen__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__erl_code_gen__V_44_44, (MR_Integer) 1)));
                              {
                                hlds__vartypes__lookup_var_type_3_p_0(erl_backend__erl_code_gen__VarTypes_19, erl_backend__erl_code_gen__Y_37, &erl_backend__erl_code_gen__Type_39);
                              }
                              {
                                erl_backend__erl_code_gen__V_32_32 = check_hlds__type_util__check_dummy_type_2_f_0(erl_backend__erl_code_gen__ModuleInfo_8, erl_backend__erl_code_gen__Type_39);
                              }
                              erl_backend__erl_code_gen__succeeded = (erl_backend__erl_code_gen__V_32_32 == (MR_Integer) 1);
                              if (erl_backend__erl_code_gen__succeeded)
                                {
                                  {
                                    erl_backend__erl_code_gen__succeeded = check_hlds__type_util__type_definitely_has_no_user_defined_equality_pred_2_p_0(erl_backend__erl_code_gen__ModuleInfo_8, erl_backend__erl_code_gen__Type_39);
                                  }
                                  if (erl_backend__erl_code_gen__succeeded)
                                    {
                                      {
                                        erl_backend__erl_code_gen__erl_gen_simple_compare_6_p_0(erl_backend__erl_code_gen__ModuleInfo_8, erl_backend__erl_code_gen__PredId_9, erl_backend__erl_code_gen__ProcId_10, erl_backend__erl_code_gen__X_38, erl_backend__erl_code_gen__Y_37, &erl_backend__erl_code_gen__ProcDefn_24);
                                      }
                                      erl_backend__erl_code_gen__succeeded = MR_TRUE;
                                    }
                                }
                            }
                        }
                    }
                }
                break;
              case (MR_Integer) 0:
                {
                  MR_Word erl_backend__erl_code_gen__TypeInfo_40_40;
                  MR_Word erl_backend__erl_code_gen__Y_20;
                  MR_Word erl_backend__erl_code_gen__X_21;
                  MR_Word erl_backend__erl_code_gen__Type_23;
                  MR_Word erl_backend__erl_code_gen__V_33_33;
                  MR_Word erl_backend__erl_code_gen__V_34_34;
                  MR_Word erl_backend__erl_code_gen__V_35_35;
                  MR_Integer erl_backend__erl_code_gen__V_43_43;
                  MR_Word erl_backend__erl_code_gen__Info_60;
                  MR_Word erl_backend__erl_code_gen__InputVars_61;
                  MR_Word erl_backend__erl_code_gen__Clause_62;
                  MR_Word erl_backend__erl_code_gen__ClauseExpr_63;
                  MR_Word erl_backend__erl_code_gen__CompareXY_64;
                  MR_Word erl_backend__erl_code_gen__TrueCase_65;
                  MR_Word erl_backend__erl_code_gen__FalseCase_66;
                  MR_Word erl_backend__erl_code_gen__ProcVarSet_67;
                  MR_Word erl_backend__erl_code_gen__EnvVarNames_68;
                  MR_Word erl_backend__erl_code_gen__V_69_69;
                  MR_Word erl_backend__erl_code_gen__V_70_70;
                  MR_Word erl_backend__erl_code_gen__V_71_71;
                  MR_Word erl_backend__erl_code_gen__V_72_72;
                  MR_Word erl_backend__erl_code_gen__V_73_73;
                  MR_Word erl_backend__erl_code_gen__V_74_74;
                  MR_Word erl_backend__erl_code_gen__V_75_75;
                  MR_Word erl_backend__erl_code_gen__V_76_76;
                  MR_Word erl_backend__erl_code_gen__V_77_77;
                  MR_Word erl_backend__erl_code_gen__V_78_78;
                  MR_Word erl_backend__erl_code_gen__V_79_79;
                  MR_Word erl_backend__erl_code_gen__V_80_80;
                  MR_Word erl_backend__erl_code_gen__V_81_81;
                  MR_Word erl_backend__erl_code_gen__V_82_82;
                  MR_Word erl_backend__erl_code_gen__V_83_83;
                  MR_Word erl_backend__erl_code_gen__V_22_22;

                  {
                    hlds__hlds_pred__in_in_unification_proc_id_1_p_0(&erl_backend__erl_code_gen__V_43_43);
                  }
                  erl_backend__erl_code_gen__succeeded = (erl_backend__erl_code_gen__ProcId_10 == erl_backend__erl_code_gen__V_43_43);
                  if (erl_backend__erl_code_gen__succeeded)
                    {
                      erl_backend__erl_code_gen__TypeInfo_40_40 = (MR_Word) &erl_backend__erl_code_gen_scalar_common_1[0];
                      {
                        mercury__list__reverse_2_p_0(erl_backend__erl_code_gen__TypeInfo_40_40, erl_backend__erl_code_gen__Args_18, &erl_backend__erl_code_gen__V_33_33);
                      }
                      erl_backend__erl_code_gen__succeeded = ((MR_tag((MR_Word) erl_backend__erl_code_gen__V_33_33)) == (MR_mktag((MR_Integer) 1)));
                      if (erl_backend__erl_code_gen__succeeded)
                        {
                          erl_backend__erl_code_gen__Y_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__erl_code_gen__V_33_33, (MR_Integer) 0)));
                          erl_backend__erl_code_gen__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__erl_code_gen__V_33_33, (MR_Integer) 1)));
                          erl_backend__erl_code_gen__succeeded = ((MR_tag((MR_Word) erl_backend__erl_code_gen__V_34_34)) == (MR_mktag((MR_Integer) 1)));
                          if (erl_backend__erl_code_gen__succeeded)
                            {
                              erl_backend__erl_code_gen__X_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__erl_code_gen__V_34_34, (MR_Integer) 0)));
                              erl_backend__erl_code_gen__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__erl_code_gen__V_34_34, (MR_Integer) 1)));
                              {
                                hlds__vartypes__lookup_var_type_3_p_0(erl_backend__erl_code_gen__VarTypes_19, erl_backend__erl_code_gen__Y_20, &erl_backend__erl_code_gen__Type_23);
                              }
                              {
                                erl_backend__erl_code_gen__V_35_35 = check_hlds__type_util__check_dummy_type_2_f_0(erl_backend__erl_code_gen__ModuleInfo_8, erl_backend__erl_code_gen__Type_23);
                              }
                              erl_backend__erl_code_gen__succeeded = (erl_backend__erl_code_gen__V_35_35 == (MR_Integer) 1);
                              if (erl_backend__erl_code_gen__succeeded)
                                {
                                  {
                                    erl_backend__erl_code_gen__succeeded = check_hlds__type_util__type_definitely_has_no_user_defined_equality_pred_2_p_0(erl_backend__erl_code_gen__ModuleInfo_8, erl_backend__erl_code_gen__Type_23);
                                  }
                                  if (erl_backend__erl_code_gen__succeeded)
                                    {
                                      {
                                        erl_backend__erl_code_gen__Info_60 = erl_backend__erl_code_util__erl_gen_info_init_3_f_0(erl_backend__erl_code_gen__ModuleInfo_8, erl_backend__erl_code_gen__PredId_9, erl_backend__erl_code_gen__ProcId_10);
                                      }
                                      {
                                        erl_backend__erl_code_util__erl_gen_info_get_input_vars_2_p_0(erl_backend__erl_code_gen__Info_60, &erl_backend__erl_code_gen__InputVars_61);
                                      }
                                      {
                                        erl_backend__erl_code_gen__V_69_69 = erl_backend__elds__terms_from_vars_1_f_0(erl_backend__erl_code_gen__InputVars_61);
                                      }
                                      erl_backend__erl_code_gen__V_72_72 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                                      erl_backend__erl_code_gen__V_73_73 = (MR_Integer) 15;
                                      {
                                        erl_backend__erl_code_gen__V_74_74 = erl_backend__elds__expr_from_var_1_f_0(erl_backend__erl_code_gen__X_21);
                                      }
                                      {
                                        erl_backend__erl_code_gen__V_75_75 = erl_backend__elds__expr_from_var_1_f_0(erl_backend__erl_code_gen__Y_20);
                                      }
                                      {
                                        erl_backend__erl_code_gen__CompareXY_64 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                                        MR_hl_field(MR_mktag(3), erl_backend__erl_code_gen__CompareXY_64, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                                        MR_hl_field(MR_mktag(3), erl_backend__erl_code_gen__CompareXY_64, 1) = ((MR_Box) (erl_backend__erl_code_gen__V_73_73));
                                        MR_hl_field(MR_mktag(3), erl_backend__erl_code_gen__CompareXY_64, 2) = ((MR_Box) (erl_backend__erl_code_gen__V_74_74));
                                        MR_hl_field(MR_mktag(3), erl_backend__erl_code_gen__CompareXY_64, 3) = ((MR_Box) (erl_backend__erl_code_gen__V_75_75));
                                      }
                                      {
                                        erl_backend__erl_code_gen__V_76_76 = erl_backend__elds__elds_true_0_f_0();
                                      }
                                      {
                                        erl_backend__erl_code_gen__V_78_78 = erl_backend__elds__elds_empty_tuple_0_f_0();
                                      }
                                      {
                                        erl_backend__erl_code_gen__V_77_77 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                                        MR_hl_field(MR_mktag(2), erl_backend__erl_code_gen__V_77_77, 0) = ((MR_Box) (erl_backend__erl_code_gen__V_78_78));
                                      }
                                      {
                                        erl_backend__erl_code_gen__TrueCase_65 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                                        MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__TrueCase_65, 0) = ((MR_Box) (erl_backend__erl_code_gen__V_76_76));
                                        MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__TrueCase_65, 1) = ((MR_Box) (erl_backend__erl_code_gen__V_77_77));
                                      }
                                      {
                                        erl_backend__erl_code_gen__V_79_79 = erl_backend__elds__elds_false_0_f_0();
                                      }
                                      {
                                        erl_backend__erl_code_gen__V_81_81 = erl_backend__elds__elds_fail_0_f_0();
                                      }
                                      {
                                        erl_backend__erl_code_gen__V_80_80 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                                        MR_hl_field(MR_mktag(2), erl_backend__erl_code_gen__V_80_80, 0) = ((MR_Box) (erl_backend__erl_code_gen__V_81_81));
                                      }
                                      {
                                        erl_backend__erl_code_gen__FalseCase_66 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                                        MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__FalseCase_66, 0) = ((MR_Box) (erl_backend__erl_code_gen__V_79_79));
                                        MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__FalseCase_66, 1) = ((MR_Box) (erl_backend__erl_code_gen__V_80_80));
                                      }
                                      {
                                        erl_backend__erl_code_gen__V_71_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                                        MR_hl_field(MR_mktag(1), erl_backend__erl_code_gen__V_71_71, 0) = ((MR_Box) (erl_backend__erl_code_gen__FalseCase_66));
                                        MR_hl_field(MR_mktag(1), erl_backend__erl_code_gen__V_71_71, 1) = ((MR_Box) (erl_backend__erl_code_gen__V_72_72));
                                      }
                                      {
                                        erl_backend__erl_code_gen__V_70_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                                        MR_hl_field(MR_mktag(1), erl_backend__erl_code_gen__V_70_70, 0) = ((MR_Box) (erl_backend__erl_code_gen__TrueCase_65));
                                        MR_hl_field(MR_mktag(1), erl_backend__erl_code_gen__V_70_70, 1) = ((MR_Box) (erl_backend__erl_code_gen__V_71_71));
                                      }
                                      {
                                        erl_backend__erl_code_gen__ClauseExpr_63 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                                        MR_hl_field(MR_mktag(3), erl_backend__erl_code_gen__ClauseExpr_63, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                                        MR_hl_field(MR_mktag(3), erl_backend__erl_code_gen__ClauseExpr_63, 1) = ((MR_Box) (erl_backend__erl_code_gen__CompareXY_64));
                                        MR_hl_field(MR_mktag(3), erl_backend__erl_code_gen__ClauseExpr_63, 2) = ((MR_Box) (erl_backend__erl_code_gen__V_70_70));
                                      }
                                      {
                                        erl_backend__erl_code_gen__Clause_62 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                                        MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__Clause_62, 0) = ((MR_Box) (erl_backend__erl_code_gen__V_69_69));
                                        MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__Clause_62, 1) = ((MR_Box) (erl_backend__erl_code_gen__ClauseExpr_63));
                                      }
                                      {
                                        erl_backend__erl_code_util__erl_gen_info_get_varset_2_p_0(erl_backend__erl_code_gen__Info_60, &erl_backend__erl_code_gen__ProcVarSet_67);
                                      }
                                      {
                                        erl_backend__erl_code_util__erl_gen_info_get_env_vars_2_p_0(erl_backend__erl_code_gen__Info_60, &erl_backend__erl_code_gen__EnvVarNames_68);
                                      }
                                      {
                                        erl_backend__erl_code_gen__V_82_82 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                                        MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__V_82_82, 0) = ((MR_Box) (erl_backend__erl_code_gen__PredId_9));
                                        MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__V_82_82, 1) = ((MR_Box) (erl_backend__erl_code_gen__ProcId_10));
                                      }
                                      erl_backend__erl_code_gen__V_83_83 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) erl_backend__erl_code_gen__Clause_62);
                                      {
                                        erl_backend__erl_code_gen__ProcDefn_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                                        MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__ProcDefn_24, 0) = ((MR_Box) (erl_backend__erl_code_gen__V_82_82));
                                        MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__ProcDefn_24, 1) = ((MR_Box) (erl_backend__erl_code_gen__ProcVarSet_67));
                                        MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__ProcDefn_24, 2) = ((MR_Box) (erl_backend__erl_code_gen__V_83_83));
                                        MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__ProcDefn_24, 3) = ((MR_Box) (erl_backend__erl_code_gen__EnvVarNames_68));
                                      }
                                      erl_backend__erl_code_gen__succeeded = MR_TRUE;
                                    }
                                }
                            }
                        }
                    }
                }
                break;
            }
            if (erl_backend__erl_code_gen__succeeded)
              {
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  *erl_backend__erl_code_gen__STATE_VARIABLE_Defns_28 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (erl_backend__erl_code_gen__ProcDefn_24));
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (erl_backend__erl_code_gen__STATE_VARIABLE_Defns_0_27));
                }
                erl_backend__erl_code_gen__succeeded = MR_TRUE;
              }
          }
      }
    return erl_backend__erl_code_gen__succeeded;
  }
}

static void MR_CALL 
erl_backend__erl_code_gen__erl_gen_procs_7_p_0(
  MR_Word erl_backend__erl_code_gen__HeadVar__1_1,
  MR_Word erl_backend__erl_code_gen__ModuleInfo_2,
  MR_Word erl_backend__erl_code_gen__PredId_3,
  MR_Word erl_backend__erl_code_gen__PredInfo_4,
  MR_Word erl_backend__erl_code_gen__ProcTable_5,
  MR_Word erl_backend__erl_code_gen__STATE_VARIABLE_Defns_0_6,
  MR_Word * erl_backend__erl_code_gen__STATE_VARIABLE_Defns_7)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool erl_backend__erl_code_gen__succeeded;

        if ((erl_backend__erl_code_gen__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *erl_backend__erl_code_gen__STATE_VARIABLE_Defns_7 = erl_backend__erl_code_gen__STATE_VARIABLE_Defns_0_6;
        else
          {
            MR_Integer erl_backend__erl_code_gen__ProcId_15 = ((MR_Integer) (MR_hl_field(MR_mktag(1), erl_backend__erl_code_gen__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word erl_backend__erl_code_gen__ProcIds_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__erl_code_gen__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word erl_backend__erl_code_gen__ProcInfo_22;
            MR_Word erl_backend__erl_code_gen__STATE_VARIABLE_Defns_26_26;
            MR_Box erl_backend__erl_code_gen__conv0_ProcInfo_22;
            MR_Word erl_backend__erl_code_gen__STATE_VARIABLE_Defns_25_25;

            {
              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0, erl_backend__erl_code_gen__ProcTable_5, erl_backend__erl_code_gen__ProcId_15, &erl_backend__erl_code_gen__conv0_ProcInfo_22);
            }
            erl_backend__erl_code_gen__ProcInfo_22 = ((MR_Word) erl_backend__erl_code_gen__conv0_ProcInfo_22);
            {
              erl_backend__erl_code_gen__succeeded = erl_backend__erl_code_gen__erl_maybe_gen_simple_special_pred_7_p_0(erl_backend__erl_code_gen__ModuleInfo_2, erl_backend__erl_code_gen__PredId_3, erl_backend__erl_code_gen__ProcId_15, erl_backend__erl_code_gen__PredInfo_4, erl_backend__erl_code_gen__ProcInfo_22, erl_backend__erl_code_gen__STATE_VARIABLE_Defns_0_6, &erl_backend__erl_code_gen__STATE_VARIABLE_Defns_25_25);
            }
            if (erl_backend__erl_code_gen__succeeded)
              erl_backend__erl_code_gen__STATE_VARIABLE_Defns_26_26 = erl_backend__erl_code_gen__STATE_VARIABLE_Defns_25_25;
            else
              {
                erl_backend__erl_code_gen__erl_gen_proc_7_p_0(erl_backend__erl_code_gen__ModuleInfo_2, erl_backend__erl_code_gen__PredId_3, erl_backend__erl_code_gen__ProcId_15, erl_backend__erl_code_gen__PredInfo_4, erl_backend__erl_code_gen__ProcInfo_22, erl_backend__erl_code_gen__STATE_VARIABLE_Defns_0_6, &erl_backend__erl_code_gen__STATE_VARIABLE_Defns_26_26);
              }
            /* direct tailcall eliminated */
            {
              MR_Word erl_backend__erl_code_gen__HeadVar__1__tmp_copy_1 = erl_backend__erl_code_gen__ProcIds_16;
              MR_Word erl_backend__erl_code_gen__STATE_VARIABLE_Defns_0__tmp_copy_6 = erl_backend__erl_code_gen__STATE_VARIABLE_Defns_26_26;

              erl_backend__erl_code_gen__STATE_VARIABLE_Defns_0_6 = erl_backend__erl_code_gen__STATE_VARIABLE_Defns_0__tmp_copy_6;
              erl_backend__erl_code_gen__HeadVar__1_1 = erl_backend__erl_code_gen__HeadVar__1__tmp_copy_1;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
erl_backend__erl_code_gen__erl_gen_preds_2_7_p_0(
  MR_Word erl_backend__erl_code_gen__ModuleInfo_8,
  MR_Word erl_backend__erl_code_gen__PredIds0_9,
  MR_Word erl_backend__erl_code_gen__PredTable_10,
  MR_Word erl_backend__erl_code_gen__STATE_VARIABLE_Defns_0_20,
  MR_Word * erl_backend__erl_code_gen__STATE_VARIABLE_Defns_21)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool erl_backend__erl_code_gen__succeeded;

        if ((erl_backend__erl_code_gen__PredIds0_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *erl_backend__erl_code_gen__STATE_VARIABLE_Defns_21 = erl_backend__erl_code_gen__STATE_VARIABLE_Defns_0_20;
        else
          {
            MR_Word erl_backend__erl_code_gen__PredId_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__erl_code_gen__PredIds0_9, (MR_Integer) 0)));
            MR_Word erl_backend__erl_code_gen__PredIds_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__erl_code_gen__PredIds0_9, (MR_Integer) 1)));
            MR_Word erl_backend__erl_code_gen__PredInfo_15;
            MR_Word erl_backend__erl_code_gen__PredStatus_16;
            MR_Word erl_backend__erl_code_gen__STATE_VARIABLE_Defns_28_28;
            MR_Box erl_backend__erl_code_gen__conv0_PredInfo_15;

            {
              mercury__map__lookup_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0, erl_backend__erl_code_gen__PredTable_10, ((MR_Box) (erl_backend__erl_code_gen__PredId_13)), &erl_backend__erl_code_gen__conv0_PredInfo_15);
            }
            erl_backend__erl_code_gen__PredInfo_15 = ((MR_Word) erl_backend__erl_code_gen__conv0_PredInfo_15);
            {
              hlds__hlds_pred__pred_info_get_status_2_p_0(erl_backend__erl_code_gen__PredInfo_15, &erl_backend__erl_code_gen__PredStatus_16);
            }
            {
              MR_Word erl_backend__erl_code_gen__V_26_26 = (MR_Word) erl_backend__erl_code_gen__PredStatus_16;
              MR_Word erl_backend__erl_code_gen__V_17_17;

              erl_backend__erl_code_gen__succeeded = ((MR_tag((MR_Word) erl_backend__erl_code_gen__V_26_26)) == (MR_mktag((MR_Integer) 2)));
              if (erl_backend__erl_code_gen__succeeded)
                erl_backend__erl_code_gen__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(2), erl_backend__erl_code_gen__V_26_26, (MR_Integer) 0)));
            }
            if (!(erl_backend__erl_code_gen__succeeded))
              {
                MR_Word erl_backend__erl_code_gen__V_24_24;
                MR_Word erl_backend__erl_code_gen__V_25_25;

                {
                  erl_backend__erl_code_gen__succeeded = hlds__hlds_pred__is_unify_or_compare_pred_1_p_0(erl_backend__erl_code_gen__PredInfo_15);
                }
                if (erl_backend__erl_code_gen__succeeded)
                  {
                    erl_backend__erl_code_gen__V_24_24 = (MR_Word) erl_backend__erl_code_gen__PredStatus_16;
                    erl_backend__erl_code_gen__succeeded = ((MR_tag((MR_Word) erl_backend__erl_code_gen__V_24_24)) == (MR_mktag((MR_Integer) 1)));
                    if (erl_backend__erl_code_gen__succeeded)
                      {
                        erl_backend__erl_code_gen__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__erl_code_gen__V_24_24, (MR_Integer) 0)));
                        erl_backend__erl_code_gen__succeeded = (erl_backend__erl_code_gen__V_25_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
                      }
                  }
              }
            if (erl_backend__erl_code_gen__succeeded)
              erl_backend__erl_code_gen__STATE_VARIABLE_Defns_28_28 = erl_backend__erl_code_gen__STATE_VARIABLE_Defns_0_20;
            else
              {
                MR_Word erl_backend__erl_code_gen__ProcIds_19;
                MR_Word erl_backend__erl_code_gen__V_27_27 = (MR_Word) erl_backend__erl_code_gen__PredStatus_16;
                MR_Word erl_backend__erl_code_gen__V_18_18;

                erl_backend__erl_code_gen__succeeded = ((MR_tag((MR_Word) erl_backend__erl_code_gen__V_27_27)) == (MR_mktag((MR_Integer) 1)));
                if (erl_backend__erl_code_gen__succeeded)
                  {
                    erl_backend__erl_code_gen__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__erl_code_gen__V_27_27, (MR_Integer) 0)));
                    {
                      erl_backend__erl_code_gen__ProcIds_19 = hlds__hlds_pred__pred_info_procids_1_f_0(erl_backend__erl_code_gen__PredInfo_15);
                    }
                  }
                else
                  {
                    erl_backend__erl_code_gen__ProcIds_19 = hlds__hlds_pred__pred_info_non_imported_procids_1_f_0(erl_backend__erl_code_gen__PredInfo_15);
                  }
                if ((erl_backend__erl_code_gen__ProcIds_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                  erl_backend__erl_code_gen__STATE_VARIABLE_Defns_28_28 = erl_backend__erl_code_gen__STATE_VARIABLE_Defns_0_20;
                else
                  {
                    MR_Word erl_backend__erl_code_gen__ProcTable_46;
                    MR_Integer erl_backend__erl_code_gen__ProcId_57;
                    MR_Word erl_backend__erl_code_gen__ProcIds_58;
                    MR_Word erl_backend__erl_code_gen__ProcInfo_64;
                    MR_Word erl_backend__erl_code_gen__STATE_VARIABLE_Defns_26_68;
                    MR_Box erl_backend__erl_code_gen__conv1_ProcInfo_64;
                    MR_Word erl_backend__erl_code_gen__STATE_VARIABLE_Defns_25_67;

                    {
                      hlds__passes_aux__write_pred_progress_message_5_p_0((MR_String) "% Generating ELDS code for ", erl_backend__erl_code_gen__PredId_13, erl_backend__erl_code_gen__ModuleInfo_8);
                    }
                    {
                      hlds__hlds_pred__pred_info_get_proc_table_2_p_0(erl_backend__erl_code_gen__PredInfo_15, &erl_backend__erl_code_gen__ProcTable_46);
                    }
                    erl_backend__erl_code_gen__ProcId_57 = ((MR_Integer) (MR_hl_field(MR_mktag(1), erl_backend__erl_code_gen__ProcIds_19, (MR_Integer) 0)));
                    erl_backend__erl_code_gen__ProcIds_58 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__erl_code_gen__ProcIds_19, (MR_Integer) 1)));
                    {
                      mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0, erl_backend__erl_code_gen__ProcTable_46, erl_backend__erl_code_gen__ProcId_57, &erl_backend__erl_code_gen__conv1_ProcInfo_64);
                    }
                    erl_backend__erl_code_gen__ProcInfo_64 = ((MR_Word) erl_backend__erl_code_gen__conv1_ProcInfo_64);
                    {
                      erl_backend__erl_code_gen__succeeded = erl_backend__erl_code_gen__erl_maybe_gen_simple_special_pred_7_p_0(erl_backend__erl_code_gen__ModuleInfo_8, erl_backend__erl_code_gen__PredId_13, erl_backend__erl_code_gen__ProcId_57, erl_backend__erl_code_gen__PredInfo_15, erl_backend__erl_code_gen__ProcInfo_64, erl_backend__erl_code_gen__STATE_VARIABLE_Defns_0_20, &erl_backend__erl_code_gen__STATE_VARIABLE_Defns_25_67);
                    }
                    if (erl_backend__erl_code_gen__succeeded)
                      erl_backend__erl_code_gen__STATE_VARIABLE_Defns_26_68 = erl_backend__erl_code_gen__STATE_VARIABLE_Defns_25_67;
                    else
                      {
                        erl_backend__erl_code_gen__erl_gen_proc_7_p_0(erl_backend__erl_code_gen__ModuleInfo_8, erl_backend__erl_code_gen__PredId_13, erl_backend__erl_code_gen__ProcId_57, erl_backend__erl_code_gen__PredInfo_15, erl_backend__erl_code_gen__ProcInfo_64, erl_backend__erl_code_gen__STATE_VARIABLE_Defns_0_20, &erl_backend__erl_code_gen__STATE_VARIABLE_Defns_26_68);
                      }
                    {
                      erl_backend__erl_code_gen__erl_gen_procs_7_p_0(erl_backend__erl_code_gen__ProcIds_58, erl_backend__erl_code_gen__ModuleInfo_8, erl_backend__erl_code_gen__PredId_13, erl_backend__erl_code_gen__PredInfo_15, erl_backend__erl_code_gen__ProcTable_46, erl_backend__erl_code_gen__STATE_VARIABLE_Defns_26_68, &erl_backend__erl_code_gen__STATE_VARIABLE_Defns_28_28);
                    }
                  }
              }
            /* direct tailcall eliminated */
            {
              MR_Word erl_backend__erl_code_gen__PredIds0__tmp_copy_9 = erl_backend__erl_code_gen__PredIds_14;
              MR_Word erl_backend__erl_code_gen__STATE_VARIABLE_Defns_0__tmp_copy_20 = erl_backend__erl_code_gen__STATE_VARIABLE_Defns_28_28;

              erl_backend__erl_code_gen__STATE_VARIABLE_Defns_0_20 = erl_backend__erl_code_gen__STATE_VARIABLE_Defns_0__tmp_copy_20;
              erl_backend__erl_code_gen__PredIds0_9 = erl_backend__erl_code_gen__PredIds0__tmp_copy_9;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
erl_backend__erl_code_gen__erl_code_gen_4_p_0_1(
  MR_Box erl_backend__erl_code_gen__closure_arg,
  MR_Box erl_backend__erl_code_gen__wrapper_arg_1,
  MR_Box * erl_backend__erl_code_gen__wrapper_arg_2)
{
  {
    MR_Box erl_backend__erl_code_gen__closure = erl_backend__erl_code_gen__closure_arg;
    MR_Word erl_backend__erl_code_gen__conv0_ForeignExportDefn_6;

    {
      erl_backend__erl_code_gen__erl_gen_foreign_export_defn_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__closure, (MR_Integer) 3))), ((MR_Word) erl_backend__erl_code_gen__wrapper_arg_1), &erl_backend__erl_code_gen__conv0_ForeignExportDefn_6);
    }
    *erl_backend__erl_code_gen__wrapper_arg_2 = ((MR_Box) (erl_backend__erl_code_gen__conv0_ForeignExportDefn_6));
  }
}

void MR_CALL 
erl_backend__erl_code_gen__erl_code_gen_4_p_0(
  MR_Word erl_backend__erl_code_gen__ModuleInfo_5,
  MR_Word * erl_backend__erl_code_gen__ELDS_6)
{
  {
    MR_bool erl_backend__erl_code_gen__succeeded;
    MR_Word erl_backend__erl_code_gen__ModuleName_8;
    MR_Word erl_backend__erl_code_gen__ProcDefns_9;
    MR_Word erl_backend__erl_code_gen__Imports_10;
    MR_Word erl_backend__erl_code_gen__ForeignDecls_11;
    MR_Word erl_backend__erl_code_gen__ForeignBodies_12;
    MR_Word erl_backend__erl_code_gen__PragmaExports_13;
    MR_Word erl_backend__erl_code_gen__ForeignExportDefns_14;
    MR_Word erl_backend__erl_code_gen__InitPredProcs_16;
    MR_Word erl_backend__erl_code_gen__FinalPredProcs_17;
    MR_Word erl_backend__erl_code_gen__PredTable_27;
    MR_Word erl_backend__erl_code_gen__PredIds_28;
    MR_Word erl_backend__erl_code_gen__RevPredDefns_29;
    MR_Word erl_backend__erl_code_gen__AllImports0_37;
    MR_Word erl_backend__erl_code_gen__ThisModule_38;
    MR_Word erl_backend__erl_code_gen__Globals_47;
    MR_Word erl_backend__erl_code_gen__BackendForeignLanguages_48;
    MR_Word erl_backend__erl_code_gen__ForeignDeclCodeCord_49;
    MR_Word erl_backend__erl_code_gen__ForeignBodyCodeCord_50;
    MR_Word erl_backend__erl_code_gen__PragmaExportsCord_51;
    MR_Word erl_backend__erl_code_gen__V_61_61;
    MR_Word erl_backend__erl_code_gen__V_63_63;
    MR_Word erl_backend__erl_code_gen__V_65_65;
    MR_Word erl_backend__erl_code_gen__V_72_72;
    MR_Word erl_backend__erl_code_gen__V_55_55;
    MR_Word erl_backend__erl_code_gen__V_56_56;
    MR_Word erl_backend__erl_code_gen___OtherForeignDeclCodes_52;
    MR_Word erl_backend__erl_code_gen___OtherForeignBodyCodes_53;
    MR_Word erl_backend__erl_code_gen___OtherForeignExports_54;

    {
      hlds__hlds_module__module_info_get_name_2_p_0(erl_backend__erl_code_gen__ModuleInfo_5, &erl_backend__erl_code_gen__ModuleName_8);
    }
    {
      hlds__hlds_module__module_info_get_preds_2_p_0(erl_backend__erl_code_gen__ModuleInfo_5, &erl_backend__erl_code_gen__PredTable_27);
    }
    {
      mercury__map__keys_2_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0, erl_backend__erl_code_gen__PredTable_27, &erl_backend__erl_code_gen__PredIds_28);
    }
    {
      erl_backend__erl_code_gen__erl_gen_preds_2_7_p_0(erl_backend__erl_code_gen__ModuleInfo_5, erl_backend__erl_code_gen__PredIds_28, erl_backend__erl_code_gen__PredTable_27, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &erl_backend__erl_code_gen__RevPredDefns_29);
    }
    {
      erl_backend__erl_code_gen__ProcDefns_9 = mercury__list__reverse_1_f_0((MR_Word) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_defn_0, erl_backend__erl_code_gen__RevPredDefns_29);
    }
    {
      hlds__hlds_module__module_info_get_all_deps_2_p_0(erl_backend__erl_code_gen__ModuleInfo_5, &erl_backend__erl_code_gen__AllImports0_37);
    }
    {
      hlds__hlds_module__module_info_get_name_2_p_0(erl_backend__erl_code_gen__ModuleInfo_5, &erl_backend__erl_code_gen__ThisModule_38);
    }
    {
      erl_backend__erl_code_gen__Imports_10 = mercury__set__delete_2_f_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, erl_backend__erl_code_gen__AllImports0_37, ((MR_Box) (erl_backend__erl_code_gen__ThisModule_38)));
    }
    {
      hlds__hlds_module__module_info_get_globals_2_p_0(erl_backend__erl_code_gen__ModuleInfo_5, &erl_backend__erl_code_gen__Globals_47);
    }
    {
      libs__globals__get_backend_foreign_languages_2_p_0(erl_backend__erl_code_gen__Globals_47, &erl_backend__erl_code_gen__BackendForeignLanguages_48);
    }
    erl_backend__erl_code_gen__succeeded = ((MR_tag((MR_Word) erl_backend__erl_code_gen__BackendForeignLanguages_48)) == (MR_mktag((MR_Integer) 1)));
    if (erl_backend__erl_code_gen__succeeded)
      {
        erl_backend__erl_code_gen__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__erl_code_gen__BackendForeignLanguages_48, (MR_Integer) 0)));
        erl_backend__erl_code_gen__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__erl_code_gen__BackendForeignLanguages_48, (MR_Integer) 1)));
        erl_backend__erl_code_gen__succeeded = (erl_backend__erl_code_gen__V_55_55 == (MR_Integer) 3);
        if (erl_backend__erl_code_gen__succeeded)
          erl_backend__erl_code_gen__succeeded = (erl_backend__erl_code_gen__V_56_56 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
    if (erl_backend__erl_code_gen__succeeded)
      {
      }
    else
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "erl_backend.erl_code_gen", (MR_String) "predicate \140erl_backend.erl_code_gen.filter_erlang_foreigns\'/6", (MR_String) "foreign language other than Erlang");
          return;
        }
      }
    {
      hlds__hlds_module__module_info_get_foreign_decl_codes_2_p_0(erl_backend__erl_code_gen__ModuleInfo_5, &erl_backend__erl_code_gen__ForeignDeclCodeCord_49);
    }
    {
      hlds__hlds_module__module_info_get_foreign_body_codes_2_p_0(erl_backend__erl_code_gen__ModuleInfo_5, &erl_backend__erl_code_gen__ForeignBodyCodeCord_50);
    }
    {
      hlds__hlds_module__module_info_get_pragma_exported_procs_2_p_0(erl_backend__erl_code_gen__ModuleInfo_5, &erl_backend__erl_code_gen__PragmaExportsCord_51);
    }
    {
      erl_backend__erl_code_gen__V_61_61 = mercury__cord__list_1_f_0((MR_Word) &parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_foreign_decl_code_0, erl_backend__erl_code_gen__ForeignDeclCodeCord_49);
    }
    {
      backend_libs__foreign__filter_decls_4_p_0((MR_Integer) 3, erl_backend__erl_code_gen__V_61_61, &erl_backend__erl_code_gen__ForeignDecls_11, &erl_backend__erl_code_gen___OtherForeignDeclCodes_52);
    }
    {
      erl_backend__erl_code_gen__V_63_63 = mercury__cord__list_1_f_0((MR_Word) &parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_foreign_body_code_0, erl_backend__erl_code_gen__ForeignBodyCodeCord_50);
    }
    {
      backend_libs__foreign__filter_bodys_4_p_0((MR_Integer) 3, erl_backend__erl_code_gen__V_63_63, &erl_backend__erl_code_gen__ForeignBodies_12, &erl_backend__erl_code_gen___OtherForeignBodyCodes_53);
    }
    {
      erl_backend__erl_code_gen__V_65_65 = mercury__cord__list_1_f_0((MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_pragma_exported_proc_0, erl_backend__erl_code_gen__PragmaExportsCord_51);
    }
    {
      backend_libs__foreign__filter_exports_4_p_0((MR_Integer) 3, erl_backend__erl_code_gen__V_65_65, &erl_backend__erl_code_gen__PragmaExports_13, &erl_backend__erl_code_gen___OtherForeignExports_54);
    }
    {
      erl_backend__erl_code_gen__V_72_72 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__V_72_72, 0) = ((MR_Box) (&erl_backend__erl_code_gen_scalar_common_2[0]));
      MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__V_72_72, 1) = ((MR_Box) (erl_backend__erl_code_gen__erl_code_gen_4_p_0_1));
      MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__V_72_72, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), erl_backend__erl_code_gen__V_72_72, 3) = ((MR_Box) (erl_backend__erl_code_gen__ProcDefns_9));
    }
    {
      mercury__list__map_3_p_0((MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_pragma_exported_proc_0, (MR_Word) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_foreign_export_defn_0, erl_backend__erl_code_gen__V_72_72, erl_backend__erl_code_gen__PragmaExports_13, &erl_backend__erl_code_gen__ForeignExportDefns_14);
    }
    {
      hlds__hlds_module__module_info_user_init_pred_procs_2_p_0(erl_backend__erl_code_gen__ModuleInfo_5, &erl_backend__erl_code_gen__InitPredProcs_16);
    }
    {
      hlds__hlds_module__module_info_user_final_pred_procs_2_p_0(erl_backend__erl_code_gen__ModuleInfo_5, &erl_backend__erl_code_gen__FinalPredProcs_17);
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
      *erl_backend__erl_code_gen__ELDS_6 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (erl_backend__erl_code_gen__ModuleName_8));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (erl_backend__erl_code_gen__Imports_10));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (erl_backend__erl_code_gen__ForeignDecls_11));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (erl_backend__erl_code_gen__ForeignBodies_12));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (erl_backend__erl_code_gen__ProcDefns_9));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (erl_backend__erl_code_gen__ForeignExportDefns_14));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (erl_backend__erl_code_gen__InitPredProcs_16));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (erl_backend__erl_code_gen__FinalPredProcs_17));
    }
  }
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

// Ensure everything is compiled with the same grade.
const char *mercury__erl_backend__erl_code_gen__grade_check(void)
{
    return &MR_GRADE_VAR;
}

/* :- end_module erl_backend.erl_code_gen. */
