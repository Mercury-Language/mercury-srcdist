/*
** Automatically generated from `ml_elim_nested.m'
** by the Mercury compiler,
** version 22.01.2-beta-2022-06-12
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


// :- module ml_backend.ml_elim_nested.
// :- implementation.

/*
INIT mercury__ml_backend__ml_elim_nested__init
ENDINIT
*/

#include "ml_backend.ml_elim_nested.mih"


#include "analysis.mih"
#include "array.mih"
#include "assoc_list.mih"
#include "backend_libs.mih"
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
#include "enum.mih"
#include "getopt.mih"
#include "hlds.mih"
#include "io.mih"
#include "libs.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
#include "ml_backend.mih"
#include "mode_robdd.mih"
#include "one_or_more.mih"
#include "one_or_more_map.mih"
#include "ops.mih"
#include "pair.mih"
#include "parse_tree.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "require.mih"
#include "robdd.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "sparse_bitset.mih"
#include "stack.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "time.mih"
#include "transform_hlds.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "backend_libs.builtin_ops.mih"
#include "backend_libs.rtti.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "hlds.code_model.mih"
#include "hlds.goal_mode.mih"
#include "hlds.hlds_class.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_cons.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_promise.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.inst_graph.mih"
#include "hlds.instmap.mih"
#include "hlds.pred_table.mih"
#include "hlds.status.mih"
#include "hlds.vartypes.mih"
#include "libs.globals.mih"
#include "libs.op_mode.mih"
#include "libs.optimization_options.mih"
#include "libs.options.mih"
#include "libs.polyhedron.mih"
#include "libs.trace_params.mih"
#include "mdbcomp.builtin_modules.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.sym_name.mih"
#include "ml_backend.ml_code_util.mih"
#include "ml_backend.ml_gen_info.mih"
#include "ml_backend.ml_global_data.mih"
#include "ml_backend.ml_util.mih"
#include "ml_backend.mlds.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_names.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.set_of_var.mih"
#include "string.format.mih"
#include "string.parse_util.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"




static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_elim_nested__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_stmt_0;

static const MR_EnumFunctorDesc ml_backend__ml_elim_nested__ml_backend__ml_elim_nested__enum_functor_desc_action_0_0;

static const MR_EnumFunctorDesc ml_backend__ml_elim_nested__ml_backend__ml_elim_nested__enum_functor_desc_action_0_1;

static const MR_EnumFunctorDescPtr ml_backend__ml_elim_nested__ml_backend__ml_elim_nested__enum_ordinal_ordered_action_0[2];

static const MR_EnumFunctorDescPtr ml_backend__ml_elim_nested__ml_backend__ml_elim_nested__enum_name_ordered_action_0[2];

static const MR_Integer ml_backend__ml_elim_nested__ml_backend__ml_elim_nested__functor_number_map_action_0[2];

static const MR_FA_TypeInfo_Struct1 ml_backend__ml_elim_nested__cord__ti_cord_1ml_backend__mlds__type_ctor_info_mlds_function_defn_0;

static const MR_FA_TypeInfo_Struct1 ml_backend__ml_elim_nested__cord__ti_cord_1ml_backend__mlds__type_ctor_info_mlds_local_var_defn_0;

static const MR_PseudoTypeInfo ml_backend__ml_elim_nested__ml_backend__ml_elim_nested__field_types_elim_info_0_0[6];

static const MR_ConstString ml_backend__ml_elim_nested__ml_backend__ml_elim_nested__field_names_elim_info_0_0[6];

static const MR_DuArgLocn ml_backend__ml_elim_nested__ml_backend__ml_elim_nested__field_locns_elim_info_0_0[6];

static const MR_DuFunctorDesc ml_backend__ml_elim_nested__ml_backend__ml_elim_nested__du_functor_desc_elim_info_0_0;

static const MR_DuFunctorDescPtr ml_backend__ml_elim_nested__ml_backend__ml_elim_nested__du_stag_ordered_elim_info_0_0[1];

static const MR_DuPtagLayout ml_backend__ml_elim_nested__ml_backend__ml_elim_nested__du_ptag_ordered_elim_info_0[1];

static const MR_DuFunctorDescPtr ml_backend__ml_elim_nested__ml_backend__ml_elim_nested__du_name_ordered_elim_info_0[1];

static const MR_Integer ml_backend__ml_elim_nested__ml_backend__ml_elim_nested__functor_number_map_elim_info_0[1];

static const MR_EnumFunctorDesc ml_backend__ml_elim_nested__ml_backend__ml_elim_nested__enum_functor_desc_inserted_env_0_0;

static const MR_EnumFunctorDesc ml_backend__ml_elim_nested__ml_backend__ml_elim_nested__enum_functor_desc_inserted_env_0_1;

static const MR_EnumFunctorDescPtr ml_backend__ml_elim_nested__ml_backend__ml_elim_nested__enum_ordinal_ordered_inserted_env_0[2];

static const MR_EnumFunctorDescPtr ml_backend__ml_elim_nested__ml_backend__ml_elim_nested__enum_name_ordered_inserted_env_0[2];

static const MR_Integer ml_backend__ml_elim_nested__ml_backend__ml_elim_nested__functor_number_map_inserted_env_0[2];

static const MR_FA_TypeInfo_Struct1 ml_backend__ml_elim_nested__list__ti_list_1ml_backend__mlds__type_ctor_info_mlds_local_var_defn_0;

static const MR_FA_TypeInfo_Struct1 ml_backend__ml_elim_nested__list__ti_list_1list__ti_list_1ml_backend__mlds__type_ctor_info_mlds_local_var_defn_0;

static MR_Word MR_CALL 
ml_backend__ml_elim_nested__IntroducedFrom__func__add_unchain_stack_to_call__2442__1_1_f_0(
  MR_Word LambdaHeadVar__1_21);

static MR_bool MR_CALL 
ml_backend__ml_elim_nested__IntroducedFrom__pred__fixup_var__2134__2_2_p_0(
  MR_Word ThisVarName_8,
  MR_Word LambdaHeadVar__1_23);

static MR_bool MR_CALL 
ml_backend__ml_elim_nested__IntroducedFrom__pred__fixup_var__2134__1_2_p_0(
  MR_Word ThisVarName_8,
  MR_Word LambdaHeadVar__1_23);

static MR_bool MR_CALL 
ml_backend__ml_elim_nested__IntroducedFrom__pred__fixup_local_vars__2066__2_2_p_0(
  MR_Word HeadLocalVar0_9,
  MR_Word HeadLvalLocalVar_14);

static MR_bool MR_CALL 
ml_backend__ml_elim_nested__IntroducedFrom__pred__fixup_local_vars__2066__1_2_p_0(
  MR_Word HeadLocalVar0_9,
  MR_Word HeadLvalLocalVar_14);

static void MR_CALL 
ml_backend__ml_elim_nested____Compare____outervars_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
ml_backend__ml_elim_nested____Unify____outervars_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
ml_backend__ml_elim_nested____Compare____inserted_env_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
ml_backend__ml_elim_nested____Unify____inserted_env_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
ml_backend__ml_elim_nested____Compare____elim_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
ml_backend__ml_elim_nested____Unify____elim_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
ml_backend__ml_elim_nested__fixup_gc_statements_defn_5_p_0(
  MR_Word Action_6,
  MR_Word Defn0_7,
  MR_Word * Defn_8,
  MR_Word STATE_VARIABLE_Info_0_16,
  MR_Word * STATE_VARIABLE_Info_17);

static MR_bool MR_CALL 
ml_backend__ml_elim_nested__ml_need_to_hoist_defn_2_p_0(
  MR_Word QualVarName_3,
  MR_Word FuncDefn_4);

static void MR_CALL 
ml_backend__ml_elim_nested__ml_insert_init_env_6_p_0(
  MR_Word Action_7,
  MR_Word ClassId_8,
  MR_Word FunctionDefn0_9,
  MR_Word * FunctionDefn_10,
  MR_Word STATE_VARIABLE_InsertedEnv_0_28,
  MR_Word * STATE_VARIABLE_InsertedEnv_29);

static MR_Word MR_CALL 
ml_backend__ml_elim_nested__convert_local_to_field_1_f_0(
  MR_Word LocalVarDefn_3);

static void MR_CALL 
ml_backend__ml_elim_nested__extract_gc_statements_4_p_0(
  MR_Word FieldVarDefn0_5,
  MR_Word * FieldVarDefn_6,
  MR_Word * GCInitStmts_7,
  MR_Word * GCTraceStmts_8);

static MR_Word MR_CALL 
ml_backend__ml_elim_nested__strip_gc_statement_1_f_0(
  MR_Word Argument0_3);

static void MR_CALL 
ml_backend__ml_elim_nested__ml_elim_nested_defns_in_funcs_9_p_1(
  MR_Word Action_1,
  MR_Word ModuleName_2,
  MR_Word Globals_3,
  MR_Word Target_4,
  MR_Word HeadVar__5_5,
  MR_Word STATE_VARIABLE_FuncDefnsCord_0_6,
  MR_Word * STATE_VARIABLE_FuncDefnsCord_7,
  MR_Word STATE_VARIABLE_ClassDefnsCord_0_8,
  MR_Word * STATE_VARIABLE_ClassDefnsCord_9);

static MR_Box MR_CALL 
ml_backend__ml_elim_nested__ml_elim_nested_defns_in_func_9_p_1_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
ml_backend__ml_elim_nested__ml_elim_nested_defns_in_func_9_p_1_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
ml_backend__ml_elim_nested__ml_elim_nested_defns_in_func_9_p_1(
  MR_Word Action_10,
  MR_Word ModuleName_11,
  MR_Word Globals_12,
  MR_Word Target_13,
  MR_Word FuncDefn0_14,
  MR_Word STATE_VARIABLE_FuncDefnsCord_0_55,
  MR_Word * STATE_VARIABLE_FuncDefnsCord_56,
  MR_Word STATE_VARIABLE_ClassDefnsCord_0_57,
  MR_Word * STATE_VARIABLE_ClassDefnsCord_58);

static void MR_CALL 
ml_backend__ml_elim_nested__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_117_110_99_104_97_105_110_95_115_116_97_99_107_95_116_111_95_99_97_115_101_115_95_95_91_49_93_95_48_5_p_0(
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word STATE_VARIABLE_Info_0_4,
  MR_Word * STATE_VARIABLE_Info_5);

static void MR_CALL 
ml_backend__ml_elim_nested__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_117_110_99_104_97_105_110_95_115_116_97_99_107_95_116_111_95_115_116_109_116_95_95_91_49_93_95_48_5_p_0(
  MR_Word Stmt0_7,
  MR_Word * Stmt_8,
  MR_Word STATE_VARIABLE_Info_0_50,
  MR_Word * STATE_VARIABLE_Info_51);

static void MR_CALL 
ml_backend__ml_elim_nested__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_117_110_99_104_97_105_110_95_115_116_97_99_107_95_116_111_95_115_116_109_116_115_95_95_91_49_93_95_48_5_p_0(
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word STATE_VARIABLE_Info_0_4,
  MR_Word * STATE_VARIABLE_Info_5);

static MR_Word MR_CALL 
ml_backend__ml_elim_nested__prepend_unchain_frame_3_f_0(
  MR_Word Stmt0_5,
  MR_Word Context_6,
  MR_Word ElimInfo_7);

static MR_Box MR_CALL 
ml_backend__ml_elim_nested__add_unchain_stack_to_call_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
ml_backend__ml_elim_nested__add_unchain_stack_to_call_7_p_0(
  MR_Word Stmt0_8,
  MR_Word RetLvals_9,
  MR_Word CallKind_10,
  MR_Word Context_11,
  MR_Word * Stmt_12,
  MR_Word STATE_VARIABLE_Info_0_18,
  MR_Word * STATE_VARIABLE_Info_19);

static void MR_CALL 
ml_backend__ml_elim_nested__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_108_97_116_116_101_110_95_110_101_115_116_101_100_95_102_117_110_99_116_105_111_110_95_100_101_102_110_115_95_95_91_49_93_95_49_5_p_1(
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word STATE_VARIABLE_Info_0_4,
  MR_Word * STATE_VARIABLE_Info_5);

static void MR_CALL 
ml_backend__ml_elim_nested__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_108_97_116_116_101_110_95_100_101_102_97_117_108_116_95_95_91_49_93_95_49_5_p_1(
  MR_Word Default0_7,
  MR_Word * Default_8,
  MR_Word STATE_VARIABLE_Info_0_12,
  MR_Word * STATE_VARIABLE_Info_13);

static void MR_CALL 
ml_backend__ml_elim_nested__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_108_97_116_116_101_110_95_99_97_115_101_115_95_95_91_49_93_95_49_5_p_1(
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word STATE_VARIABLE_Info_0_4,
  MR_Word * STATE_VARIABLE_Info_5);

static void MR_CALL 
ml_backend__ml_elim_nested__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_108_97_116_116_101_110_95_115_116_97_116_101_109_101_110_116_95_95_91_49_93_95_49_5_p_1(
  MR_Word Stmt0_7,
  MR_Word * Stmt_8,
  MR_Word STATE_VARIABLE_Info_0_62,
  MR_Word * STATE_VARIABLE_Info_63);

static void MR_CALL 
ml_backend__ml_elim_nested__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_108_97_116_116_101_110_95_115_116_97_116_101_109_101_110_116_115_95_95_91_49_93_95_49_5_p_1(
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word STATE_VARIABLE_Info_0_4,
  MR_Word * STATE_VARIABLE_Info_5);

static void MR_CALL 
ml_backend__ml_elim_nested__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_108_97_116_116_101_110_95_109_97_121_98_101_95_115_116_97_116_101_109_101_110_116_95_95_91_49_93_95_49_5_p_1(
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word STATE_VARIABLE_Info_0_4,
  MR_Word * STATE_VARIABLE_Info_5);

static void MR_CALL 
ml_backend__ml_elim_nested__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_108_97_116_116_101_110_95_102_117_110_99_116_105_111_110_95_98_111_100_121_95_95_91_49_93_95_49_5_p_1(
  MR_Word Body0_7,
  MR_Word * Body_8,
  MR_Word STATE_VARIABLE_Info_0_12,
  MR_Word * STATE_VARIABLE_Info_13);

static MR_bool MR_CALL 
ml_backend__ml_elim_nested__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_117_112_95_108_111_99_97_108_95_118_97_114_115_95_95_91_49_93_95_49_4_p_1_1(
  MR_Box closure_arg);

static void MR_CALL 
ml_backend__ml_elim_nested__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_117_112_95_108_111_99_97_108_95_118_97_114_115_95_95_91_49_93_95_49_4_p_1(
  MR_Word Info_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4);

static void MR_CALL 
ml_backend__ml_elim_nested__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_117_112_95_114_118_97_108_115_95_95_91_49_93_95_49_4_p_1(
  MR_Word Info_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4);

static void MR_CALL 
ml_backend__ml_elim_nested__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_117_112_95_97_116_111_109_105_99_95_115_116_109_116_95_95_91_49_93_95_49_4_p_1(
  MR_Word Info_6,
  MR_Word Atomic0_7,
  MR_Word * Atomic_8);

static void MR_CALL 
ml_backend__ml_elim_nested__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_117_112_95_108_118_97_108_115_95_95_91_49_93_95_49_4_p_1(
  MR_Word Info_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4);

static void MR_CALL 
ml_backend__ml_elim_nested__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_117_112_95_116_121_112_101_100_95_114_118_97_108_115_95_95_91_49_93_95_49_4_p_1(
  MR_Word Info_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4);

static void MR_CALL 
ml_backend__ml_elim_nested__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_117_112_95_116_97_114_103_101_116_95_99_111_100_101_95_99_111_109_112_111_110_101_110_116_115_95_95_91_49_93_95_49_4_p_1(
  MR_Word Info_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4);

static void MR_CALL 
ml_backend__ml_elim_nested__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_108_97_116_116_101_110_95_110_101_115_116_101_100_95_108_111_99_97_108_95_118_97_114_95_100_101_102_110_115_95_95_91_49_44_32_52_44_32_53_93_95_49_8_p_1(
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word * HeadVar__6_6,
  MR_Word STATE_VARIABLE_Info_0_7,
  MR_Word * STATE_VARIABLE_Info_8);

static void MR_CALL 
ml_backend__ml_elim_nested__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_108_97_116_116_101_110_95_110_101_115_116_101_100_95_108_111_99_97_108_95_118_97_114_95_100_101_102_110_95_95_91_49_44_32_51_44_32_53_44_32_54_93_95_49_9_p_1(
  MR_Word HeadLocalVarDefn0_11,
  MR_Word * HeadLocalVarDefns_13,
  MR_Word * InitStmts_16,
  MR_Word STATE_VARIABLE_Info_0_31,
  MR_Word * STATE_VARIABLE_Info_32);

static void MR_CALL 
ml_backend__ml_elim_nested__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_117_112_95_105_110_105_116_105_97_108_105_122_101_114_115_95_95_91_49_93_95_49_4_p_1(
  MR_Word Info_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4);

static void MR_CALL 
ml_backend__ml_elim_nested__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_117_112_95_99_97_115_101_95_99_111_110_100_95_95_91_49_93_95_49_4_p_1(
  MR_Word Info_6,
  MR_Word Cond0_7,
  MR_Word * Cond_8);

static void MR_CALL 
ml_backend__ml_elim_nested__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_117_112_95_99_97_115_101_95_99_111_110_100_115_95_95_91_49_93_95_49_4_p_1(
  MR_Word Info_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4);

static void MR_CALL 
ml_backend__ml_elim_nested__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_117_112_95_108_118_97_108_95_95_91_49_93_95_49_4_p_1(
  MR_Word Info_6,
  MR_Word Lval0_7,
  MR_Word * Lval_8);

static void MR_CALL 
ml_backend__ml_elim_nested__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_117_112_95_114_118_97_108_95_95_91_49_93_95_49_4_p_1(
  MR_Word Info_6,
  MR_Word Rval0_7,
  MR_Word * Rval_8);

static MR_bool MR_CALL 
ml_backend__ml_elim_nested__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_117_112_95_118_97_114_95_95_91_49_93_95_49_5_p_1_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
ml_backend__ml_elim_nested__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_117_112_95_118_97_114_95_95_91_49_93_95_49_5_p_1(
  MR_Word Info_7,
  MR_Word ThisVarName_8,
  MR_Word ThisVarType_9,
  MR_Word * Lval_10);

static void MR_CALL 
ml_backend__ml_elim_nested__save_and_restore_stack_chain_4_p_0(
  MR_Word Stmt0_5,
  MR_Word * Stmt_6,
  MR_Word STATE_VARIABLE_ElimInfo_0_21,
  MR_Word * STATE_VARIABLE_ElimInfo_22);

static void MR_CALL 
ml_backend__ml_elim_nested__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_109_97_121_98_101_95_99_111_112_121_95_97_114_103_115_95_95_91_49_44_32_52_93_95_49_9_p_1(
  MR_Word Info_2,
  MR_Word HeadVar__3_3,
  MR_Word ClassId_5,
  MR_Word EnvPtrTypeName_6,
  MR_Word Context_7,
  MR_Word * HeadVar__8_8,
  MR_Word * HeadVar__9_9);

static void MR_CALL 
ml_backend__ml_elim_nested__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_109_97_121_98_101_95_97_100_100_95_97_114_103_115_95_95_91_49_44_32_51_44_32_52_93_95_49_7_p_1(
  MR_Word HeadVar__2_2,
  MR_Word Context_5,
  MR_Word STATE_VARIABLE_Info_0_6,
  MR_Word * STATE_VARIABLE_Info_7);

static MR_Word MR_CALL 
ml_backend__ml_elim_nested__ml_gen_unchain_frame_2_f_0(
  MR_Word Context_4,
  MR_Word ElimInfo_5);

static void MR_CALL 
ml_backend__ml_elim_nested__fixup_gc_statements_3_p_1_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
ml_backend__ml_elim_nested__fixup_gc_statements_3_p_1(
  MR_Word Action_4,
  MR_Word STATE_VARIABLE_Info_0_8,
  MR_Word * STATE_VARIABLE_Info_9);

static void MR_CALL 
ml_backend__ml_elim_nested__ml_elim_nested_defns_in_funcs_9_p_0(
  MR_Word Action_1,
  MR_Word ModuleName_2,
  MR_Word Globals_3,
  MR_Word Target_4,
  MR_Word HeadVar__5_5,
  MR_Word STATE_VARIABLE_FuncDefnsCord_0_6,
  MR_Word * STATE_VARIABLE_FuncDefnsCord_7,
  MR_Word STATE_VARIABLE_ClassDefnsCord_0_8,
  MR_Word * STATE_VARIABLE_ClassDefnsCord_9);

static void MR_CALL 
ml_backend__ml_elim_nested__ml_elim_nested_defns_in_func_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
ml_backend__ml_elim_nested__ml_elim_nested_defns_in_func_9_p_0(
  MR_Word Action_10,
  MR_Word ModuleName_11,
  MR_Word Globals_12,
  MR_Word Target_13,
  MR_Word FuncDefn0_14,
  MR_Word STATE_VARIABLE_FuncDefnsCord_0_55,
  MR_Word * STATE_VARIABLE_FuncDefnsCord_56,
  MR_Word STATE_VARIABLE_ClassDefnsCord_0_57,
  MR_Word * STATE_VARIABLE_ClassDefnsCord_58);

static void MR_CALL 
ml_backend__ml_elim_nested__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_108_97_116_116_101_110_95_110_101_115_116_101_100_95_102_117_110_99_116_105_111_110_95_100_101_102_110_115_95_95_91_49_93_95_48_5_p_0(
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word STATE_VARIABLE_Info_0_4,
  MR_Word * STATE_VARIABLE_Info_5);

static void MR_CALL 
ml_backend__ml_elim_nested__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_108_97_116_116_101_110_95_100_101_102_97_117_108_116_95_95_91_49_93_95_48_5_p_0(
  MR_Word Default0_7,
  MR_Word * Default_8,
  MR_Word STATE_VARIABLE_Info_0_12,
  MR_Word * STATE_VARIABLE_Info_13);

static void MR_CALL 
ml_backend__ml_elim_nested__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_108_97_116_116_101_110_95_99_97_115_101_115_95_95_91_49_93_95_48_5_p_0(
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word STATE_VARIABLE_Info_0_4,
  MR_Word * STATE_VARIABLE_Info_5);

static void MR_CALL 
ml_backend__ml_elim_nested__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_108_97_116_116_101_110_95_115_116_97_116_101_109_101_110_116_95_95_91_49_93_95_48_5_p_0(
  MR_Word Stmt0_7,
  MR_Word * Stmt_8,
  MR_Word STATE_VARIABLE_Info_0_62,
  MR_Word * STATE_VARIABLE_Info_63);

static void MR_CALL 
ml_backend__ml_elim_nested__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_108_97_116_116_101_110_95_115_116_97_116_101_109_101_110_116_115_95_95_91_49_93_95_48_5_p_0(
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word STATE_VARIABLE_Info_0_4,
  MR_Word * STATE_VARIABLE_Info_5);

static void MR_CALL 
ml_backend__ml_elim_nested__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_108_97_116_116_101_110_95_109_97_121_98_101_95_115_116_97_116_101_109_101_110_116_95_95_91_49_93_95_48_5_p_0(
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word STATE_VARIABLE_Info_0_4,
  MR_Word * STATE_VARIABLE_Info_5);

static void MR_CALL 
ml_backend__ml_elim_nested__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_108_97_116_116_101_110_95_102_117_110_99_116_105_111_110_95_98_111_100_121_95_95_91_49_93_95_48_5_p_0(
  MR_Word Body0_7,
  MR_Word * Body_8,
  MR_Word STATE_VARIABLE_Info_0_12,
  MR_Word * STATE_VARIABLE_Info_13);

static MR_bool MR_CALL 
ml_backend__ml_elim_nested__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_117_112_95_108_111_99_97_108_95_118_97_114_115_95_95_91_49_93_95_48_4_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
ml_backend__ml_elim_nested__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_117_112_95_108_111_99_97_108_95_118_97_114_115_95_95_91_49_93_95_48_4_p_0(
  MR_Word Info_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4);

static void MR_CALL 
ml_backend__ml_elim_nested__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_117_112_95_114_118_97_108_115_95_95_91_49_93_95_48_4_p_0(
  MR_Word Info_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4);

static void MR_CALL 
ml_backend__ml_elim_nested__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_117_112_95_97_116_111_109_105_99_95_115_116_109_116_95_95_91_49_93_95_48_4_p_0(
  MR_Word Info_6,
  MR_Word Atomic0_7,
  MR_Word * Atomic_8);

static void MR_CALL 
ml_backend__ml_elim_nested__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_117_112_95_108_118_97_108_115_95_95_91_49_93_95_48_4_p_0(
  MR_Word Info_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4);

static void MR_CALL 
ml_backend__ml_elim_nested__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_117_112_95_116_121_112_101_100_95_114_118_97_108_115_95_95_91_49_93_95_48_4_p_0(
  MR_Word Info_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4);

static void MR_CALL 
ml_backend__ml_elim_nested__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_117_112_95_116_97_114_103_101_116_95_99_111_100_101_95_99_111_109_112_111_110_101_110_116_115_95_95_91_49_93_95_48_4_p_0(
  MR_Word Info_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4);

static void MR_CALL 
ml_backend__ml_elim_nested__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_108_97_116_116_101_110_95_110_101_115_116_101_100_95_108_111_99_97_108_95_118_97_114_95_100_101_102_110_115_95_95_91_49_93_95_48_8_p_0(
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word FuncDefns_4,
  MR_Word Stmts_5,
  MR_Word * HeadVar__6_6,
  MR_Word STATE_VARIABLE_Info_0_7,
  MR_Word * STATE_VARIABLE_Info_8);

static MR_bool MR_CALL 
ml_backend__ml_elim_nested__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_108_97_116_116_101_110_95_110_101_115_116_101_100_95_108_111_99_97_108_95_118_97_114_95_100_101_102_110_95_95_91_49_44_32_51_93_95_48_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
ml_backend__ml_elim_nested__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_108_97_116_116_101_110_95_110_101_115_116_101_100_95_108_111_99_97_108_95_118_97_114_95_100_101_102_110_95_95_91_49_44_32_51_93_95_48_9_p_0(
  MR_Word HeadLocalVarDefn0_11,
  MR_Word * HeadLocalVarDefns_13,
  MR_Word FuncDefns_14,
  MR_Word Stmts_15,
  MR_Word * InitStmts_16,
  MR_Word STATE_VARIABLE_Info_0_31,
  MR_Word * STATE_VARIABLE_Info_32);

static void MR_CALL 
ml_backend__ml_elim_nested__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_117_112_95_105_110_105_116_105_97_108_105_122_101_114_115_95_95_91_49_93_95_48_4_p_0(
  MR_Word Info_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4);

static void MR_CALL 
ml_backend__ml_elim_nested__elim_info_add_nested_func_3_p_0(
  MR_Word NestedFunc_4,
  MR_Word STATE_VARIABLE_ElimInfo_0_8,
  MR_Word * STATE_VARIABLE_ElimInfo_9);

static void MR_CALL 
ml_backend__ml_elim_nested__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_117_112_95_99_97_115_101_95_99_111_110_100_95_95_91_49_93_95_48_4_p_0(
  MR_Word Info_6,
  MR_Word Cond0_7,
  MR_Word * Cond_8);

static void MR_CALL 
ml_backend__ml_elim_nested__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_117_112_95_99_97_115_101_95_99_111_110_100_115_95_95_91_49_93_95_48_4_p_0(
  MR_Word Info_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4);

static void MR_CALL 
ml_backend__ml_elim_nested__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_117_112_95_108_118_97_108_95_95_91_49_93_95_48_4_p_0(
  MR_Word Info_6,
  MR_Word Lval0_7,
  MR_Word * Lval_8);

static void MR_CALL 
ml_backend__ml_elim_nested__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_117_112_95_114_118_97_108_95_95_91_49_93_95_48_4_p_0(
  MR_Word Info_6,
  MR_Word Rval0_7,
  MR_Word * Rval_8);

static MR_bool MR_CALL 
ml_backend__ml_elim_nested__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_117_112_95_118_97_114_95_95_91_49_93_95_48_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
ml_backend__ml_elim_nested__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_117_112_95_118_97_114_95_95_91_49_93_95_48_5_p_0(
  MR_Word Info_7,
  MR_Word ThisVarName_8,
  MR_Word ThisVarType_9,
  MR_Word * Lval_10);

static MR_bool MR_CALL 
ml_backend__ml_elim_nested__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_109_97_121_98_101_95_99_111_112_121_95_97_114_103_115_95_95_91_49_93_95_48_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
ml_backend__ml_elim_nested__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_109_97_121_98_101_95_99_111_112_121_95_97_114_103_115_95_95_91_49_93_95_48_9_p_0(
  MR_Word Info_2,
  MR_Word HeadVar__3_3,
  MR_Word FuncBody_4,
  MR_Word ClassId_5,
  MR_Word EnvPtrTypeName_6,
  MR_Word Context_7,
  MR_Word * HeadVar__8_8,
  MR_Word * HeadVar__9_9);

static MR_bool MR_CALL 
ml_backend__ml_elim_nested__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_109_97_121_98_101_95_97_100_100_95_97_114_103_115_95_95_91_49_44_32_52_93_95_48_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
ml_backend__ml_elim_nested__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_109_97_121_98_101_95_97_100_100_95_97_114_103_115_95_95_91_49_44_32_52_93_95_48_7_p_0(
  MR_Word HeadVar__2_2,
  MR_Word FuncBody_3,
  MR_Word Context_5,
  MR_Word STATE_VARIABLE_Info_0_6,
  MR_Word * STATE_VARIABLE_Info_7);

static MR_bool MR_CALL 
ml_backend__ml_elim_nested__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_116_97_116_101_109_101_110_116_95_99_111_110_116_97_105_110_115_95_109_97_116_99_104_105_110_103_95_100_101_102_110_95_95_104_111_50_95_95_91_50_93_95_48_2_p_0(
  MR_Word Var_58,
  MR_Word Stmt_4);

static MR_bool MR_CALL 
ml_backend__ml_elim_nested__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_97_115_101_115_95_99_111_110_116_97_105_110_115_95_109_97_116_99_104_105_110_103_95_100_101_102_110_95_95_104_111_53_95_95_91_50_93_95_48_2_p_0(
  MR_Word Var_6,
  MR_Word HeadVar__2_2);

static MR_bool MR_CALL 
ml_backend__ml_elim_nested__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_117_110_99_116_105_111_110_95_100_101_102_110_115_95_99_111_110_116_97_105_110_115_95_109_97_116_99_104_105_110_103_95_100_101_102_110_95_95_104_111_51_95_95_91_50_93_95_48_2_p_0(
  MR_Word Var_6,
  MR_Word HeadVar__2_2);

static MR_bool MR_CALL 
ml_backend__ml_elim_nested__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_116_97_116_101_109_101_110_116_115_95_99_111_110_116_97_105_110_115_95_109_97_116_99_104_105_110_103_95_100_101_102_110_95_95_104_111_49_95_95_91_50_93_95_48_2_p_0(
  MR_Word Var_6,
  MR_Word HeadVar__2_2);

static void MR_CALL 
ml_backend__ml_elim_nested__elim_info_finish_3_p_0(
  MR_Word ElimInfo_4,
  MR_Word * NestedFuncs_5,
  MR_Word * LocalVars_6);

static MR_Word MR_CALL 
ml_backend__ml_elim_nested__elim_info_init_2_f_0(
  MR_Word EnvClassId_4,
  MR_Word Target_5);

static void MR_CALL 
ml_backend__ml_elim_nested__fixup_gc_statements_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
ml_backend__ml_elim_nested__fixup_gc_statements_3_p_0(
  MR_Word Action_4,
  MR_Word STATE_VARIABLE_Info_0_8,
  MR_Word * STATE_VARIABLE_Info_9);

static MR_String MR_CALL 
ml_backend__ml_elim_nested__ml_env_name_2_f_0(
  MR_Word FunctionName_4,
  MR_Word Action_5);

static MR_String MR_CALL 
ml_backend__ml_elim_nested__ml_pred_label_name_1_f_0(
  MR_Word HeadVar__1_1);

static MR_String MR_CALL 
ml_backend__ml_elim_nested__ml_module_name_string_1_f_0(
  MR_Word ModuleName_3);

static void MR_CALL 
ml_backend__ml_elim_nested__ml_create_env_12_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static MR_Box MR_CALL 
ml_backend__ml_elim_nested__ml_create_env_12_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
ml_backend__ml_elim_nested__ml_create_env_12_p_0(
  MR_Word Action_13,
  MR_String EnvClassName_14,
  MR_Word EnvClassId_15,
  MR_Word LocalVars_16,
  MR_Word Context_17,
  MR_Word ModuleName_18,
  MR_Word FuncName_19,
  MR_Word Globals_20,
  MR_Word * EnvClassDefn_21,
  MR_Word * EnvDefns_22,
  MR_Word * Stmts_23,
  MR_Word * GCTraceFuncDefns_24);

static void MR_CALL 
ml_backend__ml_elim_nested__ml_init_env_6_p_0(
  MR_Word Action_7,
  MR_Word EnvClassId_8,
  MR_Word EnvPtrVal_9,
  MR_Word Context_10,
  MR_Word * EnvPtrVarDecl_11,
  MR_Word * InitEnvPtr_12);

static void MR_CALL 
ml_backend__ml_elim_nested__ml_chain_stack_frames_10_p_0(
  MR_Word ModuleName_11,
  MR_Word FuncName_12,
  MR_Word Context_13,
  MR_Word GCTraceStmts_14,
  MR_Word EnvClassId_15,
  MR_Word Fields0_16,
  MR_Word * Fields_17,
  MR_Word * EnvInitializer_18,
  MR_Word * LinkStackChain_19,
  MR_Word * GCTraceFuncDefns_20);

static void MR_CALL 
ml_backend__ml_elim_nested__gen_gc_trace_func_9_p_0(
  MR_Word PredModule_10,
  MR_Word FuncName_11,
  MR_Word FramePointerDefn_12,
  MR_Word GCTraceStmts_13,
  MR_Word Context_14,
  MR_Word * QualGCTraceFuncLabel_15,
  MR_Word * Signature_16,
  MR_Word * FuncParams_17,
  MR_Word * GCTraceFuncDefn_18);

static MR_Word MR_CALL 
ml_backend__ml_elim_nested__ml_create_env_class_id_3_f_0(
  MR_String EnvClassName_5,
  MR_Word ModuleName_6,
  MR_Word Globals_7);

static MR_bool MR_CALL 
ml_backend__ml_elim_nested____Unify____action_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ml_backend__ml_elim_nested____Compare____action_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
ml_backend__ml_elim_nested____Unify____elim_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ml_backend__ml_elim_nested____Compare____elim_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
ml_backend__ml_elim_nested____Unify____inserted_env_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ml_backend__ml_elim_nested____Compare____inserted_env_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
ml_backend__ml_elim_nested____Unify____outervars_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ml_backend__ml_elim_nested____Compare____outervars_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box ml_backend__ml_elim_nested_scalar_common_1[15][2];

static /* final */ const MR_Box ml_backend__ml_elim_nested_scalar_common_2[10][1];

static /* final */ const MR_Box ml_backend__ml_elim_nested_scalar_common_3[8][3];

static /* final */ const MR_Box ml_backend__ml_elim_nested_scalar_common_4[6][5];

static /* final */ const MR_Box ml_backend__ml_elim_nested_scalar_common_5[1][7];

static /* final */ const MR_Box ml_backend__ml_elim_nested_scalar_common_6[1][8];

static /* final */ const MR_Box ml_backend__ml_elim_nested_scalar_common_7[1][9];




static /* final */ const MR_Box ml_backend__ml_elim_nested_scalar_common_1[15][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__cord__cord__type_ctor_info_cord_1)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_function_defn_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__cord__cord__type_ctor_info_cord_1)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_local_var_defn_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_local_var_defn_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&ml_backend__ml_elim_nested_scalar_common_1[3]))
  },
  /* row 5 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 8U)),
    ((MR_Box) ((MR_Unsigned) 64U))
  },
  /* row 6 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 8U)),
    ((MR_Box) ((MR_Unsigned) 60U))
  },
  /* row 7 */
  {
    ((MR_Box) (&ml_backend__ml_elim_nested_scalar_common_3[1])),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 8 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_elim_nested_scalar_common_1[7]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 9 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 8U)),
    ((MR_Box) ((MR_Unsigned) 48U))
  },
  /* row 10 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 8U)),
    ((MR_Box) ((MR_Unsigned) 52U))
  },
  /* row 11 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 8U)),
    ((MR_Box) ((MR_Unsigned) 68U))
  },
  /* row 12 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 8U)),
    ((MR_Box) ((MR_Unsigned) 56U))
  },
  /* row 13 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 8U)),
    ((MR_Box) ((MR_Unsigned) 44U))
  },
  /* row 14 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 1U)),
    ((MR_Box) (MR_mkword(MR_mktag(2), &ml_backend__ml_elim_nested_scalar_common_2[6])))
  },
};

static /* final */ const MR_Box ml_backend__ml_elim_nested_scalar_common_2[10][1] = {
  /* row 0 */
  {
    ((MR_Box) (((MR_Box) (MR_Word) (UINT8_C(0)))))
  },
  /* row 1 */
  {
    (MR_Box) (((((MR_Unsigned) 1U << 2)) | (((MR_Unsigned) 0U << 1))))
  },
  /* row 2 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_elim_nested_scalar_common_3[0])))
  },
  /* row 3 */
  {
    (MR_Box) (((MR_Unsigned) 1U << 1))
  },
  /* row 4 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_elim_nested_scalar_common_3[2])))
  },
  /* row 5 */
  {
    (MR_Box) (((((MR_Unsigned) 0U << 4)) | (((((MR_Unsigned) 0U << 3)) | (((((MR_Unsigned) 0U << 2)) | (((MR_Unsigned) 0U << 1))))))))
  },
  /* row 6 */
  {
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 7 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_elim_nested_scalar_common_1[14])))
  },
  /* row 8 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_elim_nested_scalar_common_3[3])))
  },
  /* row 9 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &ml_backend__ml_elim_nested_scalar_common_2[8])))
  },
};

static /* final */ const MR_Box ml_backend__ml_elim_nested_scalar_common_3[8][3] = {
  /* row 0 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_elim_nested_scalar_common_1[5]))),
    ((MR_Box) ((MR_Unsigned) 20U))
  },
  /* row 1 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_elim_nested_scalar_common_1[5]))),
    ((MR_Box) ((MR_Unsigned) 20U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 2 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_elim_nested_scalar_common_1[10]))),
    ((MR_Box) ((MR_Unsigned) 24U))
  },
  /* row 3 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_elim_nested_scalar_common_1[11]))),
    ((MR_Box) ((MR_Unsigned) 24U))
  },
  /* row 4 */
  {
    ((MR_Box) (&ml_backend__ml_elim_nested_scalar_common_4[0])),
    ((MR_Box) (ml_backend__ml_elim_nested__ml_create_env_12_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 5 */
  {
    ((MR_Box) (&ml_backend__ml_elim_nested_scalar_common_5[0])),
    ((MR_Box) (ml_backend__ml_elim_nested__ml_create_env_12_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 6 */
  {
    ((MR_Box) (&ml_backend__ml_elim_nested_scalar_common_4[4])),
    ((MR_Box) (ml_backend__ml_elim_nested__add_unchain_stack_to_call_7_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 7 */
  {
    ((MR_Box) (&ml_backend__ml_elim_nested_scalar_common_4[5])),
    ((MR_Box) (ml_backend__ml_elim_nested__ml_elim_nested_defns_in_func_9_p_1_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box ml_backend__ml_elim_nested_scalar_common_4[6][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_local_var_defn_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_field_var_defn_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_local_var_name_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_function_defn_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_local_var_name_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_local_var_defn_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_local_var_name_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_local_var_name_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_lval_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0))
  },
  /* row 5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_argument_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_argument_0))
  },
};

static /* final */ const MR_Box ml_backend__ml_elim_nested_scalar_common_5[1][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_field_var_defn_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_field_var_defn_0)),
    ((MR_Box) (&ml_backend__ml_elim_nested__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_stmt_0)),
    ((MR_Box) (&ml_backend__ml_elim_nested__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_stmt_0))
  },
};

static /* final */ const MR_Box ml_backend__ml_elim_nested_scalar_common_6[1][8] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&ml_backend__ml_elim_nested__ml_backend__ml_elim_nested__type_ctor_info_action_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_local_var_defn_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_local_var_defn_0)),
    ((MR_Box) (&ml_backend__ml_elim_nested__ml_backend__ml_elim_nested__type_ctor_info_elim_info_0)),
    ((MR_Box) (&ml_backend__ml_elim_nested__ml_backend__ml_elim_nested__type_ctor_info_elim_info_0))
  },
};

static /* final */ const MR_Box ml_backend__ml_elim_nested_scalar_common_7[1][9] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&ml_backend__ml_elim_nested__ml_backend__ml_elim_nested__type_ctor_info_action_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_class_id_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_function_defn_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_function_defn_0)),
    ((MR_Box) (&ml_backend__ml_elim_nested__ml_backend__ml_elim_nested__type_ctor_info_inserted_env_0)),
    ((MR_Box) (&ml_backend__ml_elim_nested__ml_backend__ml_elim_nested__type_ctor_info_inserted_env_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"



static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_elim_nested__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_stmt_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0)
  }
};

static const MR_EnumFunctorDesc ml_backend__ml_elim_nested__ml_backend__ml_elim_nested__enum_functor_desc_action_0_0 = {
  (MR_String) "hoist_nested_funcs",
  INT32_C(0)
};

static const MR_EnumFunctorDesc ml_backend__ml_elim_nested__ml_backend__ml_elim_nested__enum_functor_desc_action_0_1 = {
  (MR_String) "chain_gc_stack_frames",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr ml_backend__ml_elim_nested__ml_backend__ml_elim_nested__enum_ordinal_ordered_action_0[2] = {
  &ml_backend__ml_elim_nested__ml_backend__ml_elim_nested__enum_functor_desc_action_0_0,
  &ml_backend__ml_elim_nested__ml_backend__ml_elim_nested__enum_functor_desc_action_0_1
};

static const MR_EnumFunctorDescPtr ml_backend__ml_elim_nested__ml_backend__ml_elim_nested__enum_name_ordered_action_0[2] = {
  &ml_backend__ml_elim_nested__ml_backend__ml_elim_nested__enum_functor_desc_action_0_1,
  &ml_backend__ml_elim_nested__ml_backend__ml_elim_nested__enum_functor_desc_action_0_0
};

static const MR_Integer ml_backend__ml_elim_nested__ml_backend__ml_elim_nested__functor_number_map_action_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct ml_backend__ml_elim_nested__ml_backend__ml_elim_nested__type_ctor_info_action_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (ml_backend__ml_elim_nested____Unify____action_0_0_10001)),
  ((MR_Box) (ml_backend__ml_elim_nested____Compare____action_0_0_10001)),
  (MR_String) "ml_backend.ml_elim_nested",
  (MR_String) "action",
  {     ml_backend__ml_elim_nested__ml_backend__ml_elim_nested__enum_name_ordered_action_0 },
  {     ml_backend__ml_elim_nested__ml_backend__ml_elim_nested__enum_ordinal_ordered_action_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  ml_backend__ml_elim_nested__ml_backend__ml_elim_nested__functor_number_map_action_0,

};

static const MR_FA_TypeInfo_Struct1 ml_backend__ml_elim_nested__cord__ti_cord_1ml_backend__mlds__type_ctor_info_mlds_function_defn_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  {
    (MR_TypeInfo) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_function_defn_0)
  }
};

static const MR_FA_TypeInfo_Struct1 ml_backend__ml_elim_nested__cord__ti_cord_1ml_backend__mlds__type_ctor_info_mlds_local_var_defn_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  {
    (MR_TypeInfo) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_local_var_defn_0)
  }
};

static const MR_PseudoTypeInfo ml_backend__ml_elim_nested__ml_backend__ml_elim_nested__field_types_elim_info_0_0[6] = {
  (MR_PseudoTypeInfo) (&ml_backend__ml_elim_nested__cord__ti_cord_1ml_backend__mlds__type_ctor_info_mlds_function_defn_0),
  (MR_PseudoTypeInfo) (&ml_backend__ml_elim_nested__cord__ti_cord_1ml_backend__mlds__type_ctor_info_mlds_local_var_defn_0),
  (MR_PseudoTypeInfo) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_class_id_0),
  (MR_PseudoTypeInfo) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_type_0),
  (MR_PseudoTypeInfo) (&mercury__counter__counter__type_ctor_info_counter_0),
  (MR_PseudoTypeInfo) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_target_lang_0)
};

static const MR_ConstString ml_backend__ml_elim_nested__ml_backend__ml_elim_nested__field_names_elim_info_0_0[6] = {
  (MR_String) "ei_nested_funcs",
  (MR_String) "ei_local_vars",
  (MR_String) "ei_env_type_name",
  (MR_String) "ei_env_ptr_type_name",
  (MR_String) "ei_saved_stack_chain_counter",
  (MR_String) "ei_target_lang"
};

static const MR_DuArgLocn ml_backend__ml_elim_nested__ml_backend__ml_elim_nested__field_locns_elim_info_0_0[6] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 2,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 3,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 4,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 5,
    (MR_Integer) 0,
    (MR_Integer) 2
  }
};

static const MR_DuFunctorDesc ml_backend__ml_elim_nested__ml_backend__ml_elim_nested__du_functor_desc_elim_info_0_0 = {
  (MR_String) "elim_info",
  INT16_C(6),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  ml_backend__ml_elim_nested__ml_backend__ml_elim_nested__field_types_elim_info_0_0,
  ml_backend__ml_elim_nested__ml_backend__ml_elim_nested__field_names_elim_info_0_0,
  ml_backend__ml_elim_nested__ml_backend__ml_elim_nested__field_locns_elim_info_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr ml_backend__ml_elim_nested__ml_backend__ml_elim_nested__du_stag_ordered_elim_info_0_0[1] = {
  &ml_backend__ml_elim_nested__ml_backend__ml_elim_nested__du_functor_desc_elim_info_0_0
};

static const MR_DuPtagLayout ml_backend__ml_elim_nested__ml_backend__ml_elim_nested__du_ptag_ordered_elim_info_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    ml_backend__ml_elim_nested__ml_backend__ml_elim_nested__du_stag_ordered_elim_info_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr ml_backend__ml_elim_nested__ml_backend__ml_elim_nested__du_name_ordered_elim_info_0[1] = {
  &ml_backend__ml_elim_nested__ml_backend__ml_elim_nested__du_functor_desc_elim_info_0_0
};

static const MR_Integer ml_backend__ml_elim_nested__ml_backend__ml_elim_nested__functor_number_map_elim_info_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct ml_backend__ml_elim_nested__ml_backend__ml_elim_nested__type_ctor_info_elim_info_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (ml_backend__ml_elim_nested____Unify____elim_info_0_0_10001)),
  ((MR_Box) (ml_backend__ml_elim_nested____Compare____elim_info_0_0_10001)),
  (MR_String) "ml_backend.ml_elim_nested",
  (MR_String) "elim_info",
  {     ml_backend__ml_elim_nested__ml_backend__ml_elim_nested__du_name_ordered_elim_info_0 },
  {     ml_backend__ml_elim_nested__ml_backend__ml_elim_nested__du_ptag_ordered_elim_info_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  ml_backend__ml_elim_nested__ml_backend__ml_elim_nested__functor_number_map_elim_info_0,

};

static const MR_EnumFunctorDesc ml_backend__ml_elim_nested__ml_backend__ml_elim_nested__enum_functor_desc_inserted_env_0_0 = {
  (MR_String) "have_not_inserted_env",
  INT32_C(0)
};

static const MR_EnumFunctorDesc ml_backend__ml_elim_nested__ml_backend__ml_elim_nested__enum_functor_desc_inserted_env_0_1 = {
  (MR_String) "have_inserted_env",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr ml_backend__ml_elim_nested__ml_backend__ml_elim_nested__enum_ordinal_ordered_inserted_env_0[2] = {
  &ml_backend__ml_elim_nested__ml_backend__ml_elim_nested__enum_functor_desc_inserted_env_0_0,
  &ml_backend__ml_elim_nested__ml_backend__ml_elim_nested__enum_functor_desc_inserted_env_0_1
};

static const MR_EnumFunctorDescPtr ml_backend__ml_elim_nested__ml_backend__ml_elim_nested__enum_name_ordered_inserted_env_0[2] = {
  &ml_backend__ml_elim_nested__ml_backend__ml_elim_nested__enum_functor_desc_inserted_env_0_1,
  &ml_backend__ml_elim_nested__ml_backend__ml_elim_nested__enum_functor_desc_inserted_env_0_0
};

static const MR_Integer ml_backend__ml_elim_nested__ml_backend__ml_elim_nested__functor_number_map_inserted_env_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct ml_backend__ml_elim_nested__ml_backend__ml_elim_nested__type_ctor_info_inserted_env_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (ml_backend__ml_elim_nested____Unify____inserted_env_0_0_10001)),
  ((MR_Box) (ml_backend__ml_elim_nested____Compare____inserted_env_0_0_10001)),
  (MR_String) "ml_backend.ml_elim_nested",
  (MR_String) "inserted_env",
  {     ml_backend__ml_elim_nested__ml_backend__ml_elim_nested__enum_name_ordered_inserted_env_0 },
  {     ml_backend__ml_elim_nested__ml_backend__ml_elim_nested__enum_ordinal_ordered_inserted_env_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  ml_backend__ml_elim_nested__ml_backend__ml_elim_nested__functor_number_map_inserted_env_0,

};

static const MR_FA_TypeInfo_Struct1 ml_backend__ml_elim_nested__list__ti_list_1ml_backend__mlds__type_ctor_info_mlds_local_var_defn_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_local_var_defn_0)
  }
};

static const MR_FA_TypeInfo_Struct1 ml_backend__ml_elim_nested__list__ti_list_1list__ti_list_1ml_backend__mlds__type_ctor_info_mlds_local_var_defn_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&ml_backend__ml_elim_nested__list__ti_list_1ml_backend__mlds__type_ctor_info_mlds_local_var_defn_0)
  }
};

const MR_TypeCtorInfo_Struct ml_backend__ml_elim_nested__ml_backend__ml_elim_nested__type_ctor_info_outervars_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (ml_backend__ml_elim_nested____Unify____outervars_0_0_10001)),
  ((MR_Box) (ml_backend__ml_elim_nested____Compare____outervars_0_0_10001)),
  (MR_String) "ml_backend.ml_elim_nested",
  (MR_String) "outervars",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&ml_backend__ml_elim_nested__list__ti_list_1list__ti_list_1ml_backend__mlds__type_ctor_info_mlds_local_var_defn_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static MR_Word MR_CALL 
ml_backend__ml_elim_nested__IntroducedFrom__func__add_unchain_stack_to_call__2442__1_1_f_0(
  MR_Word LambdaHeadVar__1_21)
{
  {
    MR_Word LambdaHeadVar__2_22;

    {
      LambdaHeadVar__2_22 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), LambdaHeadVar__2_22, 0) = ((MR_Box) (LambdaHeadVar__1_21));
    }
    return LambdaHeadVar__2_22;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_elim_nested__IntroducedFrom__pred__fixup_var__2134__2_2_p_0(
  MR_Word ThisVarName_8,
  MR_Word LambdaHeadVar__1_23)
{
  {
    MR_bool succeeded;
    MR_Word Var_42 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LambdaHeadVar__1_23, (MR_Integer) 0))));

    succeeded = ml_backend__mlds____Unify____mlds_local_var_name_0_0(ThisVarName_8, Var_42);
    return succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_elim_nested__IntroducedFrom__pred__fixup_var__2134__1_2_p_0(
  MR_Word ThisVarName_8,
  MR_Word LambdaHeadVar__1_23)
{
  {
    MR_bool succeeded;
    MR_Word Var_42 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LambdaHeadVar__1_23, (MR_Integer) 0))));

    succeeded = ml_backend__mlds____Unify____mlds_local_var_name_0_0(ThisVarName_8, Var_42);
    return succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_elim_nested__IntroducedFrom__pred__fixup_local_vars__2066__2_2_p_0(
  MR_Word HeadLocalVar0_9,
  MR_Word HeadLvalLocalVar_14)
{
  {
    MR_bool succeeded;

    succeeded = ml_backend__mlds____Unify____mlds_local_var_name_0_0(HeadLocalVar0_9, HeadLvalLocalVar_14);
    return succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_elim_nested__IntroducedFrom__pred__fixup_local_vars__2066__1_2_p_0(
  MR_Word HeadLocalVar0_9,
  MR_Word HeadLvalLocalVar_14)
{
  {
    MR_bool succeeded;

    succeeded = ml_backend__mlds____Unify____mlds_local_var_name_0_0(HeadLocalVar0_9, HeadLvalLocalVar_14);
    return succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_elim_nested____Compare____outervars_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) (&ml_backend__ml_elim_nested_scalar_common_1[4]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

static MR_bool MR_CALL 
ml_backend__ml_elim_nested____Unify____outervars_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&ml_backend__ml_elim_nested_scalar_common_1[4]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
    return succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_elim_nested____Compare____inserted_env_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer Cast_HeadVar1_4 = (MR_Integer) (HeadVar__2_2);
    MR_Integer Cast_HeadVar2_5 = (MR_Integer) (HeadVar__3_3);

    succeeded = (Cast_HeadVar1_4 < Cast_HeadVar2_5);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 1;
    else
    {
      succeeded = (Cast_HeadVar1_4 > Cast_HeadVar2_5);
      if (succeeded)
        *HeadVar__1_1 = (MR_Integer) 2;
      else
        *HeadVar__1_1 = (MR_Integer) 0;
    }
  }
}

static MR_bool MR_CALL 
ml_backend__ml_elim_nested____Unify____inserted_env_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_elim_nested____Compare____elim_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_21 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_22 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_21 == CastY_22);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
      MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
      MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2))));
      MR_Word ArgX4_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3))));
      MR_Word ArgY4_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 3))));
      MR_Word ArgX5_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4))));
      MR_Word ArgY5_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 4))));
      MR_Word ArgX6_19 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 5))) & (MR_Integer) 3);
      MR_Word ArgY6_20 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 5))) & (MR_Integer) 3);
      MR_Word SubResult1_6;

      mercury__builtin__compare_3_p_0((MR_Word) (&ml_backend__ml_elim_nested_scalar_common_1[1]), &SubResult1_6, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
      succeeded = (SubResult1_6 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult1_6;
      else
      {
        MR_Word SubResult2_9;

        mercury__builtin__compare_3_p_0((MR_Word) (&ml_backend__ml_elim_nested_scalar_common_1[2]), &SubResult2_9, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
        succeeded = (SubResult2_9 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult2_9;
        else
        {
          MR_Word SubResult3_12;

          ml_backend__mlds____Compare____mlds_class_id_0_0(&SubResult3_12, ArgX3_10, ArgY3_11);
          succeeded = (SubResult3_12 != (MR_Integer) 0);
          if (succeeded)
            *HeadVar__1_1 = SubResult3_12;
          else
          {
            MR_Word SubResult4_15;

            ml_backend__mlds____Compare____mlds_type_0_0(&SubResult4_15, ArgX4_13, ArgY4_14);
            succeeded = (SubResult4_15 != (MR_Integer) 0);
            if (succeeded)
              *HeadVar__1_1 = SubResult4_15;
            else
            {
              MR_Word SubResult5_18;

              mercury__counter____Compare____counter_0_0(&SubResult5_18, ArgX5_16, ArgY5_17);
              succeeded = (SubResult5_18 != (MR_Integer) 0);
              if (succeeded)
                *HeadVar__1_1 = SubResult5_18;
              else
              {
                MR_Integer Var_29 = (MR_Integer) (ArgX6_19);
                MR_Integer Var_30 = (MR_Integer) (ArgY6_20);

                succeeded = (Var_29 < Var_30);
                if (succeeded)
                  *HeadVar__1_1 = (MR_Integer) 1;
                else
                {
                  succeeded = (Var_29 > Var_30);
                  if (succeeded)
                    *HeadVar__1_1 = (MR_Integer) 2;
                  else
                    *HeadVar__1_1 = (MR_Integer) 0;
                }
              }
            }
          }
        }
      }
    }
  }
}

static MR_bool MR_CALL 
ml_backend__ml_elim_nested____Unify____elim_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_15 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_16 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_15 == CastY_16);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Word TypeInfo_18_18;
      MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))));
      MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
      MR_Word ArgX4_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 3))));
      MR_Word ArgY4_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3))));
      MR_Word ArgX5_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 4))));
      MR_Word ArgY5_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4))));
      MR_Word ArgX6_13 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 5))) & (MR_Integer) 3);
      MR_Word ArgY6_14 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 5))) & (MR_Integer) 3);

      succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&ml_backend__ml_elim_nested_scalar_common_1[1]), ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
      if (succeeded)
      {
        TypeInfo_18_18 = (MR_Word) (&ml_backend__ml_elim_nested_scalar_common_1[2]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_18_18, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
        if (succeeded)
        {
          succeeded = ml_backend__mlds____Unify____mlds_class_id_0_0(ArgX3_7, ArgY3_8);
          if (succeeded)
          {
            succeeded = ml_backend__mlds____Unify____mlds_type_0_0(ArgX4_9, ArgY4_10);
            if (succeeded)
            {
              succeeded = mercury__counter____Unify____counter_0_0(ArgX5_11, ArgY5_12);
              if (succeeded)
                succeeded = (ArgX6_13 == ArgY6_14);
            }
          }
        }
      }
    }
    return succeeded;
  }
}

void MR_CALL 
ml_backend__ml_elim_nested____Compare____action_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer Cast_HeadVar1_4 = (MR_Integer) (HeadVar__2_2);
    MR_Integer Cast_HeadVar2_5 = (MR_Integer) (HeadVar__3_3);

    succeeded = (Cast_HeadVar1_4 < Cast_HeadVar2_5);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 1;
    else
    {
      succeeded = (Cast_HeadVar1_4 > Cast_HeadVar2_5);
      if (succeeded)
        *HeadVar__1_1 = (MR_Integer) 2;
      else
        *HeadVar__1_1 = (MR_Integer) 0;
    }
  }
}

MR_bool MR_CALL 
ml_backend__ml_elim_nested____Unify____action_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_elim_nested__fixup_gc_statements_defn_5_p_0(
  MR_Word Action_6,
  MR_Word Defn0_7,
  MR_Word * Defn_8,
  MR_Word STATE_VARIABLE_Info_0_16,
  MR_Word * STATE_VARIABLE_Info_17)
{
  {
    MR_Word Name_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Defn0_7, (MR_Integer) 0))));
    MR_Word Context_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Defn0_7, (MR_Integer) 1))));
    MR_Word Type_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Defn0_7, (MR_Integer) 2))));
    MR_Word Init_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Defn0_7, (MR_Integer) 3))));
    MR_Word GCStmt0_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Defn0_7, (MR_Integer) 4))));
    MR_Word GCStmt_15;

    switch (Action_6) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        switch (MR_tag((MR_Word) GCStmt0_14)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              GCStmt_15 = (MR_Word) ((MR_Unsigned) 0U);
              *STATE_VARIABLE_Info_17 = STATE_VARIABLE_Info_0_16;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Stmt0_26 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GCStmt0_14, (MR_Integer) 0))));
              MR_Word Stmt_27;

              ml_backend__ml_elim_nested__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_108_97_116_116_101_110_95_115_116_97_116_101_109_101_110_116_95_95_91_49_93_95_49_5_p_1(Stmt0_26, &Stmt_27, STATE_VARIABLE_Info_0_16, STATE_VARIABLE_Info_17);
              {
                GCStmt_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), GCStmt_15, 0) = ((MR_Box) (Stmt_27));
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word Stmt0_30 = ((MR_Word) ((MR_hl_field(MR_mktag(2), GCStmt0_14, (MR_Integer) 0))));
              MR_Word Stmt_31;

              ml_backend__ml_elim_nested__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_108_97_116_116_101_110_95_115_116_97_116_101_109_101_110_116_95_95_91_49_93_95_49_5_p_1(Stmt0_30, &Stmt_31, STATE_VARIABLE_Info_0_16, STATE_VARIABLE_Info_17);
              {
                GCStmt_15 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), GCStmt_15, 0) = ((MR_Box) (Stmt_31));
              }
            }
            break;
        }
        break;
      case (MR_Integer) 0:
        switch (MR_tag((MR_Word) GCStmt0_14)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              GCStmt_15 = (MR_Word) ((MR_Unsigned) 0U);
              *STATE_VARIABLE_Info_17 = STATE_VARIABLE_Info_0_16;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Stmt0_38 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GCStmt0_14, (MR_Integer) 0))));
              MR_Word Stmt_39;

              ml_backend__ml_elim_nested__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_108_97_116_116_101_110_95_115_116_97_116_101_109_101_110_116_95_95_91_49_93_95_48_5_p_0(Stmt0_38, &Stmt_39, STATE_VARIABLE_Info_0_16, STATE_VARIABLE_Info_17);
              {
                GCStmt_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), GCStmt_15, 0) = ((MR_Box) (Stmt_39));
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word Stmt0_42 = ((MR_Word) ((MR_hl_field(MR_mktag(2), GCStmt0_14, (MR_Integer) 0))));
              MR_Word Stmt_43;

              ml_backend__ml_elim_nested__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_108_97_116_116_101_110_95_115_116_97_116_101_109_101_110_116_95_95_91_49_93_95_48_5_p_0(Stmt0_42, &Stmt_43, STATE_VARIABLE_Info_0_16, STATE_VARIABLE_Info_17);
              {
                GCStmt_15 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), GCStmt_15, 0) = ((MR_Box) (Stmt_43));
              }
            }
            break;
        }
        break;
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      *Defn_8 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Name_10));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Context_11));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Type_12));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Init_13));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (GCStmt_15));
    }
  }
}

static MR_bool MR_CALL 
ml_backend__ml_elim_nested__ml_need_to_hoist_defn_2_p_0(
  MR_Word QualVarName_3,
  MR_Word FuncDefn_4)
{
  {
    MR_bool succeeded;
    MR_Word Var_5;

    Var_5 = ml_backend__ml_util__function_defn_contains_var_2_f_0(FuncDefn_4, QualVarName_3);
    succeeded = (Var_5 == (MR_Integer) 1);
    return succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_elim_nested__ml_insert_init_env_6_p_0(
  MR_Word Action_7,
  MR_Word ClassId_8,
  MR_Word FunctionDefn0_9,
  MR_Word * FunctionDefn_10,
  MR_Word STATE_VARIABLE_InsertedEnv_0_28,
  MR_Word * STATE_VARIABLE_InsertedEnv_29)
{
  {
    MR_bool succeeded;
    MR_Word Name_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FunctionDefn0_9, (MR_Integer) 0))));
    MR_Word Context_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FunctionDefn0_9, (MR_Integer) 1))));
    MR_Word Flags_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FunctionDefn0_9, (MR_Integer) 2))));
    MR_Word PredProcId_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FunctionDefn0_9, (MR_Integer) 3))));
    MR_Word Params_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FunctionDefn0_9, (MR_Integer) 4))));
    MR_Word Body_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FunctionDefn0_9, (MR_Integer) 5))));
    MR_Word EnvVarNames_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FunctionDefn0_9, (MR_Integer) 6))));
    MR_Word MaybeRequiretailrecInfo_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FunctionDefn0_9, (MR_Integer) 7))));
    MR_Word FuncBody0_20;
    MR_Word EnvPtrVar_21;
    MR_Word Var_31;

    succeeded = (Body_17 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      FuncBody0_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Body_17, (MR_Integer) 0))));
      EnvPtrVar_21 = (MR_Word) (MR_mkword(MR_mktag(3), &ml_backend__ml_elim_nested_scalar_common_1[9]));
      Var_31 = ml_backend__ml_util__statement_contains_var_2_f_0(FuncBody0_20, EnvPtrVar_21);
      succeeded = (Var_31 == (MR_Integer) 1);
    }
    if (succeeded)
    {
      MR_Word CastEnvPtrVal_24;
      MR_Word EnvPtrDefn_25;
      MR_Word InitEnvPtr_26;
      MR_Word FuncBody_27;
      MR_Word Var_36;
      MR_Word Var_39;
      MR_Word Var_40;
      MR_Word Var_42;
      MR_Word Var_46 = (MR_Word) (MR_mkword(MR_mktag(1), (MR_Word) (ClassId_8)));
      MR_Word EnvPtrVarName_53;
      MR_Word EnvPtrVarType_54;
      MR_Word AssignEnvPtr_56;
      MR_Word Var_58;

      {
        EnvPtrVarType_54 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), EnvPtrVarType_54, 0) = ((MR_Box) ((MR_Unsigned) 7U));
        MR_hl_field(MR_mktag(3), EnvPtrVarType_54, 1) = ((MR_Box) (Var_46));
      }
      {
        CastEnvPtrVal_24 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), CastEnvPtrVal_24, 0) = ((MR_Box) ((MR_Unsigned) 4U));
        MR_hl_field(MR_mktag(3), CastEnvPtrVal_24, 1) = ((MR_Box) (EnvPtrVarType_54));
        MR_hl_field(MR_mktag(3), CastEnvPtrVal_24, 2) = ((MR_Box) (MR_mkword(MR_mktag(2), &ml_backend__ml_elim_nested_scalar_common_2[4])));
      }
      switch (Action_7) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          EnvPtrVarName_53 = (MR_Word) (MR_mkword(MR_mktag(3), &ml_backend__ml_elim_nested_scalar_common_1[6]));
          break;
        case (MR_Integer) 0:
          EnvPtrVarName_53 = (MR_Word) (MR_mkword(MR_mktag(3), &ml_backend__ml_elim_nested_scalar_common_1[9]));
          break;
      }
      {
        EnvPtrDefn_25 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), EnvPtrDefn_25, 0) = ((MR_Box) (EnvPtrVarName_53));
        MR_hl_field(MR_mktag(0), EnvPtrDefn_25, 1) = ((MR_Box) (Context_13));
        MR_hl_field(MR_mktag(0), EnvPtrDefn_25, 2) = ((MR_Box) (EnvPtrVarType_54));
        MR_hl_field(MR_mktag(0), EnvPtrDefn_25, 3) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(0), EnvPtrDefn_25, 4) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_58 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_58, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(3), Var_58, 1) = ((MR_Box) (EnvPtrVarName_53));
        MR_hl_field(MR_mktag(3), Var_58, 2) = ((MR_Box) (EnvPtrVarType_54));
      }
      {
        AssignEnvPtr_56 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(2), AssignEnvPtr_56, 0) = ((MR_Box) (Var_58));
        MR_hl_field(MR_mktag(2), AssignEnvPtr_56, 1) = ((MR_Box) (CastEnvPtrVal_24));
      }
      {
        InitEnvPtr_26 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), InitEnvPtr_26, 0) = ((MR_Box) ((MR_Unsigned) 8U));
        MR_hl_field(MR_mktag(3), InitEnvPtr_26, 1) = ((MR_Box) (AssignEnvPtr_56));
        MR_hl_field(MR_mktag(3), InitEnvPtr_26, 2) = ((MR_Box) (Context_13));
      }
      {
        Var_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_36, 0) = ((MR_Box) (EnvPtrDefn_25));
        MR_hl_field(MR_mktag(1), Var_36, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_40, 0) = ((MR_Box) (FuncBody0_20));
        MR_hl_field(MR_mktag(1), Var_40, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_39, 0) = ((MR_Box) (InitEnvPtr_26));
        MR_hl_field(MR_mktag(1), Var_39, 1) = ((MR_Box) (Var_40));
      }
      {
        FuncBody_27 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), FuncBody_27, 0) = ((MR_Box) (Var_36));
        MR_hl_field(MR_mktag(0), FuncBody_27, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(0), FuncBody_27, 2) = ((MR_Box) (Var_39));
        MR_hl_field(MR_mktag(0), FuncBody_27, 3) = ((MR_Box) (Context_13));
      }
      {
        Var_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_42, 0) = ((MR_Box) (FuncBody_27));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
        *FunctionDefn_10 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Name_12));
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Context_13));
        MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Flags_14));
        MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (PredProcId_15));
        MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Params_16));
        MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_42));
        MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (EnvVarNames_18));
        MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (MaybeRequiretailrecInfo_19));
      }
      *STATE_VARIABLE_InsertedEnv_29 = (MR_Integer) 1;
    }
    else
    {
      *FunctionDefn_10 = FunctionDefn0_9;
      *STATE_VARIABLE_InsertedEnv_29 = STATE_VARIABLE_InsertedEnv_0_28;
    }
  }
}

static MR_Word MR_CALL 
ml_backend__ml_elim_nested__convert_local_to_field_1_f_0(
  MR_Word LocalVarDefn_3)
{
  {
    MR_Word FieldVarDefn_4;
    MR_Word LocalVarName_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LocalVarDefn_3, (MR_Integer) 0))));
    MR_Word Context_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LocalVarDefn_3, (MR_Integer) 1))));
    MR_Word Type_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LocalVarDefn_3, (MR_Integer) 2))));
    MR_Word Init_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LocalVarDefn_3, (MR_Integer) 3))));
    MR_Word GcStmt_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LocalVarDefn_3, (MR_Integer) 4))));
    MR_Word FieldVarName_10;

    {
      FieldVarName_10 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), FieldVarName_10, 0) = ((MR_Box) ((MR_Unsigned) 2U));
      MR_hl_field(MR_mktag(3), FieldVarName_10, 1) = ((MR_Box) (LocalVarName_5));
    }
    {
      FieldVarDefn_4 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), FieldVarDefn_4, 0) = ((MR_Box) (FieldVarName_10));
      MR_hl_field(MR_mktag(0), FieldVarDefn_4, 1) = ((MR_Box) (Context_6));
      MR_hl_field(MR_mktag(0), FieldVarDefn_4, 2) = ((MR_Box) (&ml_backend__ml_elim_nested_scalar_common_2[3]));
      MR_hl_field(MR_mktag(0), FieldVarDefn_4, 3) = ((MR_Box) (Type_7));
      MR_hl_field(MR_mktag(0), FieldVarDefn_4, 4) = ((MR_Box) (Init_8));
      MR_hl_field(MR_mktag(0), FieldVarDefn_4, 5) = ((MR_Box) (GcStmt_9));
    }
    return FieldVarDefn_4;
  }
}

static void MR_CALL 
ml_backend__ml_elim_nested__extract_gc_statements_4_p_0(
  MR_Word FieldVarDefn0_5,
  MR_Word * FieldVarDefn_6,
  MR_Word * GCInitStmts_7,
  MR_Word * GCTraceStmts_8)
{
  {
    MR_Word Name_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FieldVarDefn0_5, (MR_Integer) 0))));
    MR_Word Context_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FieldVarDefn0_5, (MR_Integer) 1))));
    MR_Word Flags_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FieldVarDefn0_5, (MR_Integer) 2))));
    MR_Word Type_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FieldVarDefn0_5, (MR_Integer) 3))));
    MR_Word Init_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FieldVarDefn0_5, (MR_Integer) 4))));
    MR_Word GCStmt_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FieldVarDefn0_5, (MR_Integer) 5))));

    switch (MR_tag((MR_Word) GCStmt_14)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          *FieldVarDefn_6 = FieldVarDefn0_5;
          *GCInitStmts_7 = (MR_Word) ((MR_Unsigned) 0U);
          *GCTraceStmts_8 = (MR_Word) ((MR_Unsigned) 0U);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word GCTraceStmt_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GCStmt_14, (MR_Integer) 0))));

          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
            *FieldVarDefn_6 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Name_9));
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Context_10));
            MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Flags_11));
            MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Type_12));
            MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Init_13));
            MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          *GCInitStmts_7 = (MR_Word) ((MR_Unsigned) 0U);
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *GCTraceStmts_8 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (GCTraceStmt_15));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (*GCInitStmts_7));
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word GCInitStmt_16 = ((MR_Word) ((MR_hl_field(MR_mktag(2), GCStmt_14, (MR_Integer) 0))));

          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
            *FieldVarDefn_6 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Name_9));
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Context_10));
            MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Flags_11));
            MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Type_12));
            MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Init_13));
            MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *GCInitStmts_7 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (GCInitStmt_16));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          *GCTraceStmts_8 = (MR_Word) ((MR_Unsigned) 0U);
        }
        break;
    }
  }
}

static MR_Word MR_CALL 
ml_backend__ml_elim_nested__strip_gc_statement_1_f_0(
  MR_Word Argument0_3)
{
  {
    MR_Word Argument_4;
    MR_Word Name_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Argument0_3, (MR_Integer) 0))));
    MR_Word Type_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Argument0_3, (MR_Integer) 1))));

    {
      Argument_4 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Argument_4, 0) = ((MR_Box) (Name_5));
      MR_hl_field(MR_mktag(0), Argument_4, 1) = ((MR_Box) (Type_6));
      MR_hl_field(MR_mktag(0), Argument_4, 2) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    return Argument_4;
  }
}

void MR_CALL 
ml_backend__ml_elim_nested__ml_elim_nested_5_p_1(
  MR_Word Action_6,
  MR_Word Globals_7,
  MR_Word Target_8,
  MR_Word MLDS0_9,
  MR_Word * MLDS_10)
{
  {
    MR_Word ModuleName_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MLDS0_9, (MR_Integer) 0))));
    MR_Word Imports_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MLDS0_9, (MR_Integer) 1))));
    MR_Word GlobalData0_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MLDS0_9, (MR_Integer) 2))));
    MR_Word TypeDefns0_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MLDS0_9, (MR_Integer) 3))));
    MR_Word TableStructDefns_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MLDS0_9, (MR_Integer) 4))));
    MR_Word ProcDefns0_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MLDS0_9, (MR_Integer) 5))));
    MR_Word InitPreds_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MLDS0_9, (MR_Integer) 6))));
    MR_Word FinalPreds_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MLDS0_9, (MR_Integer) 7))));
    MR_Word ForeignCode_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MLDS0_9, (MR_Integer) 8))));
    MR_Word ExportedEnums_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MLDS0_9, (MR_Integer) 9))));
    MR_Word MLDS_ModuleName_21;
    MR_Word WrapperFuncsCord_22;
    MR_Word ProcDefns1_23;
    MR_Word ProcDefnsCord_24;
    MR_Word EnvTypeDefnsCord_25;
    MR_Word ProcDefns_26;
    MR_Word GlobalData_27;
    MR_Word EnvTypeDefns_28;
    MR_Word TypeDefns_29;
    MR_Word Var_30;
    MR_Word Var_31;
    MR_Word Var_32;
    MR_Word Var_33;

    MLDS_ModuleName_21 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ModuleName_11);
    ml_backend__ml_global_data__ml_global_data_get_closure_wrapper_func_defns_2_p_0(GlobalData0_13, &WrapperFuncsCord_22);
    Var_30 = mercury__cord__to_list_1_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_function_defn_0), WrapperFuncsCord_22);
    ProcDefns1_23 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_function_defn_0), ProcDefns0_16, Var_30);
    Var_31 = mercury__cord__init_0_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_function_defn_0));
    Var_32 = mercury__cord__init_0_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_class_defn_0));
    ml_backend__ml_elim_nested__ml_elim_nested_defns_in_funcs_9_p_1(Action_6, MLDS_ModuleName_21, Globals_7, Target_8, ProcDefns1_23, Var_31, &ProcDefnsCord_24, Var_32, &EnvTypeDefnsCord_25);
    ProcDefns_26 = mercury__cord__to_list_1_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_function_defn_0), ProcDefnsCord_24);
    Var_33 = mercury__cord__init_0_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_function_defn_0));
    ml_backend__ml_global_data__ml_global_data_set_closure_wrapper_func_defns_3_p_0(Var_33, GlobalData0_13, &GlobalData_27);
    EnvTypeDefns_28 = mercury__cord__to_list_1_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_class_defn_0), EnvTypeDefnsCord_25);
    TypeDefns_29 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_class_defn_0), TypeDefns0_14, EnvTypeDefns_28);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (10 * sizeof(MR_Word)), NULL, NULL);
      *MLDS_10 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ModuleName_11));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Imports_12));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (GlobalData_27));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (TypeDefns_29));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (TableStructDefns_15));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (ProcDefns_26));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (InitPreds_17));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (FinalPreds_18));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (ForeignCode_19));
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (ExportedEnums_20));
    }
  }
}

static void MR_CALL 
ml_backend__ml_elim_nested__ml_elim_nested_defns_in_funcs_9_p_1(
  MR_Word Action_1,
  MR_Word ModuleName_2,
  MR_Word Globals_3,
  MR_Word Target_4,
  MR_Word HeadVar__5_5,
  MR_Word STATE_VARIABLE_FuncDefnsCord_0_6,
  MR_Word * STATE_VARIABLE_FuncDefnsCord_7,
  MR_Word STATE_VARIABLE_ClassDefnsCord_0_8,
  MR_Word * STATE_VARIABLE_ClassDefnsCord_9)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__5_5 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_ClassDefnsCord_9 = STATE_VARIABLE_ClassDefnsCord_0_8;
      *STATE_VARIABLE_FuncDefnsCord_7 = STATE_VARIABLE_FuncDefnsCord_0_6;
    }
    else
    {
      MR_Word FuncDefn_24 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__5_5, (MR_Integer) 0))));
      MR_Word FuncDefns_25 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__5_5, (MR_Integer) 1))));
      MR_Word Name_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FuncDefn_24, (MR_Integer) 0))));
      MR_Word STATE_VARIABLE_FuncDefnsCord_54_54;
      MR_Word STATE_VARIABLE_ClassDefnsCord_56_56;
      MR_Word PlainFuncName_36;
      MR_Word FuncLabel_37;
      MR_Word ProcLabel_39;
      MR_Word PredLabel_41;
      MR_Word PrivateBuiltin_47;
      MR_String Var_52;
      MR_Integer Var_53;
      MR_Word Var_60;
      MR_Word next_value_of_HeadVar__5_5;
      MR_Word next_value_of_STATE_VARIABLE_FuncDefnsCord_0_6;
      MR_Word next_value_of_STATE_VARIABLE_ClassDefnsCord_0_8;

      succeeded = ((MR_tag((MR_Word) Name_28)) == (MR_Integer) 0);
      if (succeeded)
      {
        PlainFuncName_36 = (MR_Word) ((MR_Word) (Name_28));
        FuncLabel_37 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PlainFuncName_36, (MR_Integer) 0))));
        ProcLabel_39 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FuncLabel_37, (MR_Integer) 0))));
        PredLabel_41 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ProcLabel_39, (MR_Integer) 0))));
        succeeded = ((MR_tag((MR_Word) PredLabel_41)) == (MR_Integer) 0);
        if (succeeded)
        {
          Var_52 = ((MR_String) ((MR_hl_field(MR_mktag(0), PredLabel_41, (MR_Integer) 2))));
          Var_53 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), PredLabel_41, (MR_Integer) 3))));
          succeeded = (strcmp(Var_52, (MR_String) "gc_trace") == 0);
          if (succeeded)
          {
            succeeded = (Var_53 == (MR_Integer) 1);
            if (succeeded)
            {
              PrivateBuiltin_47 = mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0();
              Var_60 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(PrivateBuiltin_47);
              succeeded = ml_backend__mlds____Unify____mlds_module_name_0_0(ModuleName_2, Var_60);
            }
          }
        }
      }
      if (succeeded)
      {
        STATE_VARIABLE_FuncDefnsCord_54_54 = mercury__cord__snoc_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_function_defn_0), STATE_VARIABLE_FuncDefnsCord_0_6, ((MR_Box) (FuncDefn_24)));
        STATE_VARIABLE_ClassDefnsCord_56_56 = STATE_VARIABLE_ClassDefnsCord_0_8;
      }
      else
        ml_backend__ml_elim_nested__ml_elim_nested_defns_in_func_9_p_1(Action_1, ModuleName_2, Globals_3, Target_4, FuncDefn_24, STATE_VARIABLE_FuncDefnsCord_0_6, &STATE_VARIABLE_FuncDefnsCord_54_54, STATE_VARIABLE_ClassDefnsCord_0_8, &STATE_VARIABLE_ClassDefnsCord_56_56);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__5_5 = FuncDefns_25;
      next_value_of_STATE_VARIABLE_FuncDefnsCord_0_6 = STATE_VARIABLE_FuncDefnsCord_54_54;
      next_value_of_STATE_VARIABLE_ClassDefnsCord_0_8 = STATE_VARIABLE_ClassDefnsCord_56_56;
      HeadVar__5_5 = next_value_of_HeadVar__5_5;
      STATE_VARIABLE_FuncDefnsCord_0_6 = next_value_of_STATE_VARIABLE_FuncDefnsCord_0_6;
      STATE_VARIABLE_ClassDefnsCord_0_8 = next_value_of_STATE_VARIABLE_ClassDefnsCord_0_8;
      continue;
    }
    break;
  }
}

static MR_Box MR_CALL 
ml_backend__ml_elim_nested__ml_elim_nested_defns_in_func_9_p_1_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv3_Argument_4;

    conv3_Argument_4 = ml_backend__ml_elim_nested__strip_gc_statement_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv3_Argument_4));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
ml_backend__ml_elim_nested__ml_elim_nested_defns_in_func_9_p_1_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_FunctionDefn_10;
    MR_Word conv0_STATE_VARIABLE_InsertedEnv_29;

    ml_backend__ml_elim_nested__ml_insert_init_env_6_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), &conv1_FunctionDefn_10, ((MR_Word) (wrapper_arg_3)), &conv0_STATE_VARIABLE_InsertedEnv_29);
    *wrapper_arg_2 = ((MR_Box) (conv1_FunctionDefn_10));
    *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_InsertedEnv_29));
  }
}

static void MR_CALL 
ml_backend__ml_elim_nested__ml_elim_nested_defns_in_func_9_p_1(
  MR_Word Action_10,
  MR_Word ModuleName_11,
  MR_Word Globals_12,
  MR_Word Target_13,
  MR_Word FuncDefn0_14,
  MR_Word STATE_VARIABLE_FuncDefnsCord_0_55,
  MR_Word * STATE_VARIABLE_FuncDefnsCord_56,
  MR_Word STATE_VARIABLE_ClassDefnsCord_0_57,
  MR_Word * STATE_VARIABLE_ClassDefnsCord_58)
{
  {
    MR_bool succeeded;
    MR_Word Name_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FuncDefn0_14, (MR_Integer) 0))));
    MR_Word Context_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FuncDefn0_14, (MR_Integer) 1))));
    MR_Word Flags_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FuncDefn0_14, (MR_Integer) 2))));
    MR_Word PredProcId_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FuncDefn0_14, (MR_Integer) 3))));
    MR_Word Params0_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FuncDefn0_14, (MR_Integer) 4))));
    MR_Word Body0_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FuncDefn0_14, (MR_Integer) 5))));
    MR_Word EnvVarNames_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FuncDefn0_14, (MR_Integer) 6))));
    MR_Word MaybeRequiretailrecInfo_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FuncDefn0_14, (MR_Integer) 7))));

    if ((Body0_22 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_FuncDefnsCord_56 = mercury__cord__snoc_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_function_defn_0), STATE_VARIABLE_FuncDefnsCord_0_55, ((MR_Box) (FuncDefn0_14)));
      *STATE_VARIABLE_ClassDefnsCord_58 = STATE_VARIABLE_ClassDefnsCord_0_57;
    }
    else
    {
      MR_Word FuncBody0_25 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Body0_22, (MR_Integer) 0))));
      MR_String EnvName_26;
      MR_Word EnvClassId_27;
      MR_Word ElimInfo0_28;
      MR_Word Arguments0_29;
      MR_Word RetValues_30;
      MR_Word ElimInfo1_31;
      MR_Word FuncBody1_32;
      MR_Word ElimInfo2_33;
      MR_Word ElimInfo_34;
      MR_Word NestedFuncs0_35;
      MR_Word Locals_36;
      MR_Word FuncBody_37;
      MR_Word Arguments_52;
      MR_Word Params_53;
      MR_Word FuncDefn_54;
      MR_Word STATE_VARIABLE_FuncDefnsCord_61_61;
      MR_Word Var_75;

      EnvName_26 = ml_backend__ml_elim_nested__ml_env_name_2_f_0(Name_17, Action_10);
      EnvClassId_27 = ml_backend__ml_elim_nested__ml_create_env_class_id_3_f_0(EnvName_26, ModuleName_11, Globals_12);
      ElimInfo0_28 = ml_backend__ml_elim_nested__elim_info_init_2_f_0(EnvClassId_27, Target_13);
      Arguments0_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Params0_21, (MR_Integer) 0))));
      RetValues_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Params0_21, (MR_Integer) 1))));
      ml_backend__ml_elim_nested__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_109_97_121_98_101_95_97_100_100_95_97_114_103_115_95_95_91_49_44_32_51_44_32_52_93_95_49_7_p_1(Arguments0_29, Context_18, ElimInfo0_28, &ElimInfo1_31);
      ml_backend__ml_elim_nested__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_108_97_116_116_101_110_95_115_116_97_116_101_109_101_110_116_95_95_91_49_93_95_49_5_p_1(FuncBody0_25, &FuncBody1_32, ElimInfo1_31, &ElimInfo2_33);
      ml_backend__ml_elim_nested__fixup_gc_statements_3_p_1(Action_10, ElimInfo2_33, &ElimInfo_34);
      ml_backend__ml_elim_nested__elim_info_finish_3_p_0(ElimInfo_34, &NestedFuncs0_35, &Locals_36);
      if ((NestedFuncs0_35 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        FuncBody_37 = FuncBody1_32;
        STATE_VARIABLE_FuncDefnsCord_61_61 = STATE_VARIABLE_FuncDefnsCord_0_55;
        *STATE_VARIABLE_ClassDefnsCord_58 = STATE_VARIABLE_ClassDefnsCord_0_57;
      }
      else
      {
        MR_Word EnvTypeDefn_40;
        MR_Word EnvDefns_41;
        MR_Word InitEnv_42;
        MR_Word GCTraceFuncDefns_43;
        MR_Word NestedFuncs_44;
        MR_Word EnvPtrTypeName_46;
        MR_Word CodeToCopyArgs_48;
        MR_Word FuncBody2_49;
        MR_Word UnchainFrame_51;
        MR_Word Var_59;
        MR_Word Var_62;
        MR_Word Var_63;
        MR_Word Var_64;
        MR_Word Var_69;
        MR_Word Var_70;
        MR_Word Var_71;
        MR_Word Var_72;
        MR_Box conv2_InsertedEnv_45;
        MR_Word _ArgsToCopy_47;
        MR_Word _ElimInfo_50;

        ml_backend__ml_elim_nested__ml_create_env_12_p_0(Action_10, EnvName_26, EnvClassId_27, Locals_36, Context_18, ModuleName_11, Name_17, Globals_12, &EnvTypeDefn_40, &EnvDefns_41, &InitEnv_42, &GCTraceFuncDefns_43);
        {
          Var_59 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_59, 0) = ((MR_Box) (&ml_backend__ml_elim_nested_scalar_common_7[0]));
          MR_hl_field(MR_mktag(0), Var_59, 1) = ((MR_Box) (ml_backend__ml_elim_nested__ml_elim_nested_defns_in_func_9_p_1_1));
          MR_hl_field(MR_mktag(0), Var_59, 2) = ((MR_Box) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(0), Var_59, 3) = ((MR_Box) (Action_10));
          MR_hl_field(MR_mktag(0), Var_59, 4) = ((MR_Box) (EnvClassId_27));
        }
        mercury__list__map_foldl_5_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_function_defn_0), (MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_function_defn_0), (MR_Word) (&ml_backend__ml_elim_nested__ml_backend__ml_elim_nested__type_ctor_info_inserted_env_0), Var_59, NestedFuncs0_35, &NestedFuncs_44, ((MR_Box) ((MR_Integer) 0)), &conv2_InsertedEnv_45);
        Var_63 = mercury__cord__from_list_1_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_function_defn_0), GCTraceFuncDefns_43);
        Var_64 = mercury__cord__from_list_1_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_function_defn_0), NestedFuncs_44);
        Var_62 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_function_defn_0), Var_63, Var_64);
        STATE_VARIABLE_FuncDefnsCord_61_61 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_function_defn_0), STATE_VARIABLE_FuncDefnsCord_0_55, Var_62);
        *STATE_VARIABLE_ClassDefnsCord_58 = mercury__cord__snoc_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_class_defn_0), STATE_VARIABLE_ClassDefnsCord_0_57, ((MR_Box) (EnvTypeDefn_40)));
        EnvPtrTypeName_46 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ElimInfo_34, (MR_Integer) 3))));
        ml_backend__ml_elim_nested__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_109_97_121_98_101_95_99_111_112_121_95_97_114_103_115_95_95_91_49_44_32_52_93_95_49_9_p_1(ElimInfo_34, Arguments0_29, EnvClassId_27, EnvPtrTypeName_46, Context_18, &_ArgsToCopy_47, &CodeToCopyArgs_48);
        ml_backend__ml_elim_nested__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_117_110_99_104_97_105_110_95_115_116_97_99_107_95_116_111_95_115_116_109_116_95_95_91_49_93_95_48_5_p_0(FuncBody1_32, &FuncBody2_49, ElimInfo_34, &_ElimInfo_50);
        succeeded = (RetValues_30 == (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          MR_Word Var_66;

          Var_66 = ml_backend__ml_elim_nested__ml_gen_unchain_frame_2_f_0(Context_18, ElimInfo_34);
          {
            UnchainFrame_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), UnchainFrame_51, 0) = ((MR_Box) (Var_66));
            MR_hl_field(MR_mktag(1), UnchainFrame_51, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
        }
        else
          UnchainFrame_51 = (MR_Word) ((MR_Unsigned) 0U);
        {
          Var_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_72, 0) = ((MR_Box) (FuncBody2_49));
          MR_hl_field(MR_mktag(1), Var_72, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        Var_71 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0), Var_72, UnchainFrame_51);
        Var_70 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0), CodeToCopyArgs_48, Var_71);
        Var_69 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0), InitEnv_42, Var_70);
        FuncBody_37 = ml_backend__ml_code_util__ml_gen_block_4_f_0(EnvDefns_41, (MR_Word) ((MR_Unsigned) 0U), Var_69, Context_18);
      }
      Arguments_52 = mercury__list__map_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_argument_0), (MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_argument_0), (MR_Word) (&ml_backend__ml_elim_nested_scalar_common_3[7]), Arguments0_29);
      {
        Params_53 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Params_53, 0) = ((MR_Box) (Arguments_52));
        MR_hl_field(MR_mktag(0), Params_53, 1) = ((MR_Box) (RetValues_30));
      }
      {
        Var_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_75, 0) = ((MR_Box) (FuncBody_37));
      }
      {
        FuncDefn_54 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), FuncDefn_54, 0) = ((MR_Box) (Name_17));
        MR_hl_field(MR_mktag(0), FuncDefn_54, 1) = ((MR_Box) (Context_18));
        MR_hl_field(MR_mktag(0), FuncDefn_54, 2) = ((MR_Box) (Flags_19));
        MR_hl_field(MR_mktag(0), FuncDefn_54, 3) = ((MR_Box) (PredProcId_20));
        MR_hl_field(MR_mktag(0), FuncDefn_54, 4) = ((MR_Box) (Params_53));
        MR_hl_field(MR_mktag(0), FuncDefn_54, 5) = ((MR_Box) (Var_75));
        MR_hl_field(MR_mktag(0), FuncDefn_54, 6) = ((MR_Box) (EnvVarNames_23));
        MR_hl_field(MR_mktag(0), FuncDefn_54, 7) = ((MR_Box) (MaybeRequiretailrecInfo_24));
      }
      *STATE_VARIABLE_FuncDefnsCord_56 = mercury__cord__snoc_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_function_defn_0), STATE_VARIABLE_FuncDefnsCord_61_61, ((MR_Box) (FuncDefn_54)));
    }
  }
}

static void MR_CALL 
ml_backend__ml_elim_nested__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_117_110_99_104_97_105_110_95_115_116_97_99_107_95_116_111_95_99_97_115_101_115_95_95_91_49_93_95_48_5_p_0(
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word STATE_VARIABLE_Info_0_4,
  MR_Word * STATE_VARIABLE_Info_5)
{
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_Info_5 = STATE_VARIABLE_Info_0_4;
  }
  else
  {
    MR_Word Case0_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
    MR_Word Cases0_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
    MR_Word Case_13;
    MR_Word Cases_14;
    MR_Word STATE_VARIABLE_Info_18_18;
    MR_Word FirstCond0_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Case0_11, (MR_Integer) 0))));
    MR_Word LaterConds0_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Case0_11, (MR_Integer) 1))));
    MR_Word Stmt0_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Case0_11, (MR_Integer) 2))));
    MR_Word FirstCond_29;
    MR_Word LaterConds_30;
    MR_Word Stmt_31;

    ml_backend__ml_elim_nested__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_117_112_95_99_97_115_101_95_99_111_110_100_95_95_91_49_93_95_49_4_p_1(STATE_VARIABLE_Info_0_4, FirstCond0_26, &FirstCond_29);
    ml_backend__ml_elim_nested__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_117_112_95_99_97_115_101_95_99_111_110_100_115_95_95_91_49_93_95_49_4_p_1(STATE_VARIABLE_Info_0_4, LaterConds0_27, &LaterConds_30);
    ml_backend__ml_elim_nested__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_117_110_99_104_97_105_110_95_115_116_97_99_107_95_116_111_95_115_116_109_116_95_95_91_49_93_95_48_5_p_0(Stmt0_28, &Stmt_31, STATE_VARIABLE_Info_0_4, &STATE_VARIABLE_Info_18_18);
    {
      Case_13 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Case_13, 0) = ((MR_Box) (FirstCond_29));
      MR_hl_field(MR_mktag(0), Case_13, 1) = ((MR_Box) (LaterConds_30));
      MR_hl_field(MR_mktag(0), Case_13, 2) = ((MR_Box) (Stmt_31));
    }
    ml_backend__ml_elim_nested__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_117_110_99_104_97_105_110_95_115_116_97_99_107_95_116_111_95_99_97_115_101_115_95_95_91_49_93_95_48_5_p_0(Cases0_12, &Cases_14, STATE_VARIABLE_Info_18_18, STATE_VARIABLE_Info_5);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__3_3 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Case_13));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Cases_14));
    }
  }
}

static void MR_CALL 
ml_backend__ml_elim_nested__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_117_110_99_104_97_105_110_95_115_116_97_99_107_95_116_111_95_115_116_109_116_95_95_91_49_93_95_48_5_p_0(
  MR_Word Stmt0_7,
  MR_Word * Stmt_8,
  MR_Word STATE_VARIABLE_Info_0_50,
  MR_Word * STATE_VARIABLE_Info_51)
{
  switch (MR_tag((MR_Word) Stmt0_7)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word LocalVarDefns_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Stmt0_7, (MR_Integer) 0))));
        MR_Word FuncDefns_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Stmt0_7, (MR_Integer) 1))));
        MR_Word SubStmts0_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Stmt0_7, (MR_Integer) 2))));
        MR_Word Context_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Stmt0_7, (MR_Integer) 3))));
        MR_Word SubStmts_14;

        ml_backend__ml_elim_nested__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_117_110_99_104_97_105_110_95_115_116_97_99_107_95_116_111_95_115_116_109_116_115_95_95_91_49_93_95_48_5_p_0(SubStmts0_12, &SubStmts_14, STATE_VARIABLE_Info_0_50, STATE_VARIABLE_Info_51);
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          *Stmt_8 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (LocalVarDefns_10));
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (FuncDefns_11));
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (SubStmts_14));
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Context_13));
        }
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word Kind_15 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), Stmt0_7, (MR_Integer) 0))) & (MR_Integer) 1);
        MR_Word Rval_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Stmt0_7, (MR_Integer) 1))));
        MR_Word SubStmt0_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Stmt0_7, (MR_Integer) 2))));
        MR_Word LoopLocalVars_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Stmt0_7, (MR_Integer) 3))));
        MR_Word SubStmt_19;
        MR_Word Context_61 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Stmt0_7, (MR_Integer) 4))));

        ml_backend__ml_elim_nested__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_117_110_99_104_97_105_110_95_115_116_97_99_107_95_116_111_95_115_116_109_116_95_95_91_49_93_95_48_5_p_0(SubStmt0_17, &SubStmt_19, STATE_VARIABLE_Info_0_50, STATE_VARIABLE_Info_51);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
          *Stmt_8 = base;
          MR_hl_field(MR_mktag(1), base, 0) = (MR_Box) ((MR_Unsigned) (Kind_15));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Rval_16));
          MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (SubStmt_19));
          MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (LoopLocalVars_18));
          MR_hl_field(MR_mktag(1), base, 4) = ((MR_Box) (Context_61));
        }
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word Cond_20 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Stmt0_7, (MR_Integer) 0))));
        MR_Word Then0_21 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Stmt0_7, (MR_Integer) 1))));
        MR_Word MaybeElse0_22 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Stmt0_7, (MR_Integer) 2))));
        MR_Word Then_23;
        MR_Word MaybeElse_24;
        MR_Word STATE_VARIABLE_Info_57_57;
        MR_Word Context_62 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Stmt0_7, (MR_Integer) 3))));

        ml_backend__ml_elim_nested__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_117_110_99_104_97_105_110_95_115_116_97_99_107_95_116_111_95_115_116_109_116_95_95_91_49_93_95_48_5_p_0(Then0_21, &Then_23, STATE_VARIABLE_Info_0_50, &STATE_VARIABLE_Info_57_57);
        if ((MaybeElse0_22 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MaybeElse_24 = (MR_Word) ((MR_Unsigned) 0U);
          *STATE_VARIABLE_Info_51 = STATE_VARIABLE_Info_57_57;
        }
        else
        {
          MR_Word Stmt0_76 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeElse0_22, (MR_Integer) 0))));
          MR_Word Stmt_77;

          ml_backend__ml_elim_nested__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_117_110_99_104_97_105_110_95_115_116_97_99_107_95_116_111_95_115_116_109_116_95_95_91_49_93_95_48_5_p_0(Stmt0_76, &Stmt_77, STATE_VARIABLE_Info_57_57, STATE_VARIABLE_Info_51);
          {
            MaybeElse_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), MaybeElse_24, 0) = ((MR_Box) (Stmt_77));
          }
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
          *Stmt_8 = base;
          MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (Cond_20));
          MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (Then_23));
          MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (MaybeElse_24));
          MR_hl_field(MR_mktag(2), base, 3) = ((MR_Box) (Context_62));
        }
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Stmt0_7, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word Type_25 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Stmt0_7, (MR_Integer) 1))));
            MR_Word Val_26 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Stmt0_7, (MR_Integer) 2))));
            MR_Word Range_27 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Stmt0_7, (MR_Integer) 3))));
            MR_Word Cases0_28 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Stmt0_7, (MR_Integer) 4))));
            MR_Word Default0_29 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Stmt0_7, (MR_Integer) 5))));
            MR_Word Cases_30;
            MR_Word Default_31;
            MR_Word STATE_VARIABLE_Info_55_55;
            MR_Word Context_63 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Stmt0_7, (MR_Integer) 6))));

            ml_backend__ml_elim_nested__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_117_110_99_104_97_105_110_95_115_116_97_99_107_95_116_111_95_99_97_115_101_115_95_95_91_49_93_95_48_5_p_0(Cases0_28, &Cases_30, STATE_VARIABLE_Info_0_50, &STATE_VARIABLE_Info_55_55);
            switch (MR_tag((MR_Word) Default0_29)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(Default0_29)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      Default_31 = (MR_Word) ((MR_Unsigned) 0U);
                      *STATE_VARIABLE_Info_51 = STATE_VARIABLE_Info_55_55;
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      Default_31 = (MR_Word) ((MR_Unsigned) 4U);
                      *STATE_VARIABLE_Info_51 = STATE_VARIABLE_Info_55_55;
                    }
                    break;
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word Stmt0_88 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Default0_29, (MR_Integer) 0))));
                  MR_Word Stmt_89;

                  ml_backend__ml_elim_nested__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_117_110_99_104_97_105_110_95_115_116_97_99_107_95_116_111_95_115_116_109_116_95_95_91_49_93_95_48_5_p_0(Stmt0_88, &Stmt_89, STATE_VARIABLE_Info_55_55, STATE_VARIABLE_Info_51);
                  {
                    Default_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Default_31, 0) = ((MR_Box) (Stmt_89));
                  }
                }
                break;
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL));
              *Stmt_8 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Type_25));
              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (Val_26));
              MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (Range_27));
              MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (Cases_30));
              MR_hl_field(MR_mktag(3), base, 5) = ((MR_Box) (Default_31));
              MR_hl_field(MR_mktag(3), base, 6) = ((MR_Box) (Context_63));
            }
          }
          break;
        case (MR_Integer) 1:
        case (MR_Integer) 2:
        case (MR_Integer) 3:
        case (MR_Integer) 7:
        case (MR_Integer) 8:
          {
            *Stmt_8 = Stmt0_7;
            *STATE_VARIABLE_Info_51 = STATE_VARIABLE_Info_0_50;
          }
          break;
        case (MR_Integer) 4:
          {
            MR_Word RetLvals_35 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Stmt0_7, (MR_Integer) 4))));
            MR_Word CallKind_36 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Stmt0_7, (MR_Integer) 5))) & (MR_Integer) 3);
            MR_Word Context_64 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Stmt0_7, (MR_Integer) 6))));

            ml_backend__ml_elim_nested__add_unchain_stack_to_call_7_p_0(Stmt0_7, RetLvals_35, CallKind_36, Context_64, Stmt_8, STATE_VARIABLE_Info_0_50, STATE_VARIABLE_Info_51);
          }
          break;
        case (MR_Integer) 5:
          {
            MR_Word Context_65 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Stmt0_7, (MR_Integer) 2))));

            *Stmt_8 = ml_backend__ml_elim_nested__prepend_unchain_frame_3_f_0(Stmt0_7, Context_65, STATE_VARIABLE_Info_0_50);
            *STATE_VARIABLE_Info_51 = STATE_VARIABLE_Info_0_50;
          }
          break;
        case (MR_Integer) 6:
          {
            MR_Word Ref_38 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Stmt0_7, (MR_Integer) 1))));
            MR_Word BodyStmt0_39 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Stmt0_7, (MR_Integer) 2))));
            MR_Word HandlerStmt0_40 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Stmt0_7, (MR_Integer) 3))));
            MR_Word BodyStmt_41;
            MR_Word HandlerStmt_42;
            MR_Word STATE_VARIABLE_Info_52_52;
            MR_Word Context_66 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Stmt0_7, (MR_Integer) 4))));

            ml_backend__ml_elim_nested__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_117_110_99_104_97_105_110_95_115_116_97_99_107_95_116_111_95_115_116_109_116_95_95_91_49_93_95_48_5_p_0(BodyStmt0_39, &BodyStmt_41, STATE_VARIABLE_Info_0_50, &STATE_VARIABLE_Info_52_52);
            ml_backend__ml_elim_nested__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_117_110_99_104_97_105_110_95_115_116_97_99_107_95_116_111_95_115_116_109_116_95_95_91_49_93_95_48_5_p_0(HandlerStmt0_40, &HandlerStmt_42, STATE_VARIABLE_Info_52_52, STATE_VARIABLE_Info_51);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
              *Stmt_8 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 6U));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Ref_38));
              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (BodyStmt_41));
              MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (HandlerStmt_42));
              MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (Context_66));
            }
          }
          break;
      }
      break;
  }
}

static void MR_CALL 
ml_backend__ml_elim_nested__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_117_110_99_104_97_105_110_95_115_116_97_99_107_95_116_111_95_115_116_109_116_115_95_95_91_49_93_95_48_5_p_0(
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word STATE_VARIABLE_Info_0_4,
  MR_Word * STATE_VARIABLE_Info_5)
{
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_Info_5 = STATE_VARIABLE_Info_0_4;
  }
  else
  {
    MR_Word Stmt0_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
    MR_Word Stmts0_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
    MR_Word Stmt_13;
    MR_Word Stmts_14;
    MR_Word STATE_VARIABLE_Info_18_18;

    ml_backend__ml_elim_nested__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_117_110_99_104_97_105_110_95_115_116_97_99_107_95_116_111_95_115_116_109_116_95_95_91_49_93_95_48_5_p_0(Stmt0_11, &Stmt_13, STATE_VARIABLE_Info_0_4, &STATE_VARIABLE_Info_18_18);
    ml_backend__ml_elim_nested__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_117_110_99_104_97_105_110_95_115_116_97_99_107_95_116_111_95_115_116_109_116_115_95_95_91_49_93_95_48_5_p_0(Stmts0_12, &Stmts_14, STATE_VARIABLE_Info_18_18, STATE_VARIABLE_Info_5);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__3_3 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Stmt_13));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Stmts_14));
    }
  }
}

static MR_Word MR_CALL 
ml_backend__ml_elim_nested__prepend_unchain_frame_3_f_0(
  MR_Word Stmt0_5,
  MR_Word Context_6,
  MR_Word ElimInfo_7)
{
  {
    MR_Word Stmt_8;
    MR_Word UnchainFrame_9;
    MR_Word Var_12;
    MR_Word Var_13;
    MR_Word EnvPtrTypeName_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ElimInfo_7, (MR_Integer) 3))));
    MR_Word PrevFieldRval_23;
    MR_Word Assignment_24;
    MR_Word Var_30;

    {
      Var_30 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_30, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_elim_nested_scalar_common_2[0])));
      MR_hl_field(MR_mktag(0), Var_30, 1) = ((MR_Box) (MR_mkword(MR_mktag(2), &ml_backend__ml_elim_nested_scalar_common_2[8])));
      MR_hl_field(MR_mktag(0), Var_30, 2) = ((MR_Box) (EnvPtrTypeName_18));
      MR_hl_field(MR_mktag(0), Var_30, 3) = ((MR_Box) (&ml_backend__ml_elim_nested_scalar_common_2[7]));
      MR_hl_field(MR_mktag(0), Var_30, 4) = ((MR_Box) ((MR_Unsigned) 20U));
    }
    {
      PrevFieldRval_23 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), PrevFieldRval_23, 0) = ((MR_Box) (Var_30));
    }
    {
      Assignment_24 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), Assignment_24, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_elim_nested_scalar_common_3[3])));
      MR_hl_field(MR_mktag(2), Assignment_24, 1) = ((MR_Box) (PrevFieldRval_23));
    }
    {
      UnchainFrame_9 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), UnchainFrame_9, 0) = ((MR_Box) ((MR_Unsigned) 8U));
      MR_hl_field(MR_mktag(3), UnchainFrame_9, 1) = ((MR_Box) (Assignment_24));
      MR_hl_field(MR_mktag(3), UnchainFrame_9, 2) = ((MR_Box) (Context_6));
    }
    {
      Var_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_13, 0) = ((MR_Box) (Stmt0_5));
      MR_hl_field(MR_mktag(1), Var_13, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_12, 0) = ((MR_Box) (UnchainFrame_9));
      MR_hl_field(MR_mktag(1), Var_12, 1) = ((MR_Box) (Var_13));
    }
    {
      Stmt_8 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Stmt_8, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), Stmt_8, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), Stmt_8, 2) = ((MR_Box) (Var_12));
      MR_hl_field(MR_mktag(0), Stmt_8, 3) = ((MR_Box) (Context_6));
    }
    return Stmt_8;
  }
}

static MR_Box MR_CALL 
ml_backend__ml_elim_nested__add_unchain_stack_to_call_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_LambdaHeadVar__2_22;

    conv0_LambdaHeadVar__2_22 = ml_backend__ml_elim_nested__IntroducedFrom__func__add_unchain_stack_to_call__2442__1_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_22));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
ml_backend__ml_elim_nested__add_unchain_stack_to_call_7_p_0(
  MR_Word Stmt0_8,
  MR_Word RetLvals_9,
  MR_Word CallKind_10,
  MR_Word Context_11,
  MR_Word * Stmt_12,
  MR_Word STATE_VARIABLE_Info_0_18,
  MR_Word * STATE_VARIABLE_Info_19)
{
  {
    switch (CallKind_10) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word UnchainFrame_36;
          MR_Word Var_39;
          MR_Word Var_40;
          MR_Word EnvPtrTypeName_45 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_18, (MR_Integer) 3))));
          MR_Word PrevFieldRval_50;
          MR_Word Assignment_51;
          MR_Word Var_57;

          {
            Var_57 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_57, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_elim_nested_scalar_common_2[0])));
            MR_hl_field(MR_mktag(0), Var_57, 1) = ((MR_Box) (MR_mkword(MR_mktag(2), &ml_backend__ml_elim_nested_scalar_common_2[8])));
            MR_hl_field(MR_mktag(0), Var_57, 2) = ((MR_Box) (EnvPtrTypeName_45));
            MR_hl_field(MR_mktag(0), Var_57, 3) = ((MR_Box) (&ml_backend__ml_elim_nested_scalar_common_2[7]));
            MR_hl_field(MR_mktag(0), Var_57, 4) = ((MR_Box) ((MR_Unsigned) 20U));
          }
          {
            PrevFieldRval_50 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), PrevFieldRval_50, 0) = ((MR_Box) (Var_57));
          }
          {
            Assignment_51 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), Assignment_51, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_elim_nested_scalar_common_3[3])));
            MR_hl_field(MR_mktag(2), Assignment_51, 1) = ((MR_Box) (PrevFieldRval_50));
          }
          {
            UnchainFrame_36 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), UnchainFrame_36, 0) = ((MR_Box) ((MR_Unsigned) 8U));
            MR_hl_field(MR_mktag(3), UnchainFrame_36, 1) = ((MR_Box) (Assignment_51));
            MR_hl_field(MR_mktag(3), UnchainFrame_36, 2) = ((MR_Box) (Context_11));
          }
          {
            Var_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_40, 0) = ((MR_Box) (Stmt0_8));
            MR_hl_field(MR_mktag(1), Var_40, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Var_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_39, 0) = ((MR_Box) (UnchainFrame_36));
            MR_hl_field(MR_mktag(1), Var_39, 1) = ((MR_Box) (Var_40));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
            *Stmt_12 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_39));
            MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Context_11));
          }
        }
        break;
      case (MR_Integer) 2:
        *Stmt_12 = Stmt0_8;
        break;
      case (MR_Integer) 1:
        {
          MR_Word UnchainFrame_14;
          MR_Word RetRvals_15;
          MR_Word RetStmt_17;
          MR_Word Var_25;
          MR_Word Var_26;
          MR_Word Var_27;
          MR_Word EnvPtrTypeName_73 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_18, (MR_Integer) 3))));
          MR_Word PrevFieldRval_78;
          MR_Word Assignment_79;
          MR_Word Var_85;

          {
            Var_85 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_85, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_elim_nested_scalar_common_2[0])));
            MR_hl_field(MR_mktag(0), Var_85, 1) = ((MR_Box) (MR_mkword(MR_mktag(2), &ml_backend__ml_elim_nested_scalar_common_2[8])));
            MR_hl_field(MR_mktag(0), Var_85, 2) = ((MR_Box) (EnvPtrTypeName_73));
            MR_hl_field(MR_mktag(0), Var_85, 3) = ((MR_Box) (&ml_backend__ml_elim_nested_scalar_common_2[7]));
            MR_hl_field(MR_mktag(0), Var_85, 4) = ((MR_Box) ((MR_Unsigned) 20U));
          }
          {
            PrevFieldRval_78 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), PrevFieldRval_78, 0) = ((MR_Box) (Var_85));
          }
          {
            Assignment_79 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), Assignment_79, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_elim_nested_scalar_common_3[3])));
            MR_hl_field(MR_mktag(2), Assignment_79, 1) = ((MR_Box) (PrevFieldRval_78));
          }
          {
            UnchainFrame_14 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), UnchainFrame_14, 0) = ((MR_Box) ((MR_Unsigned) 8U));
            MR_hl_field(MR_mktag(3), UnchainFrame_14, 1) = ((MR_Box) (Assignment_79));
            MR_hl_field(MR_mktag(3), UnchainFrame_14, 2) = ((MR_Box) (Context_11));
          }
          RetRvals_15 = mercury__list__map_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_lval_0), (MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0), (MR_Word) (&ml_backend__ml_elim_nested_scalar_common_3[6]), RetLvals_9);
          {
            RetStmt_17 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), RetStmt_17, 0) = ((MR_Box) ((MR_Unsigned) 5U));
            MR_hl_field(MR_mktag(3), RetStmt_17, 1) = ((MR_Box) (RetRvals_15));
            MR_hl_field(MR_mktag(3), RetStmt_17, 2) = ((MR_Box) (Context_11));
          }
          {
            Var_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_27, 0) = ((MR_Box) (RetStmt_17));
            MR_hl_field(MR_mktag(1), Var_27, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Var_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_26, 0) = ((MR_Box) (Stmt0_8));
            MR_hl_field(MR_mktag(1), Var_26, 1) = ((MR_Box) (Var_27));
          }
          {
            Var_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_25, 0) = ((MR_Box) (UnchainFrame_14));
            MR_hl_field(MR_mktag(1), Var_25, 1) = ((MR_Box) (Var_26));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
            *Stmt_12 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_25));
            MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Context_11));
          }
        }
        break;
    }
    *STATE_VARIABLE_Info_19 = STATE_VARIABLE_Info_0_18;
  }
}

static void MR_CALL 
ml_backend__ml_elim_nested__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_108_97_116_116_101_110_95_110_101_115_116_101_100_95_102_117_110_99_116_105_111_110_95_100_101_102_110_115_95_95_91_49_93_95_49_5_p_1(
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word STATE_VARIABLE_Info_0_4,
  MR_Word * STATE_VARIABLE_Info_5)
{
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_Info_5 = STATE_VARIABLE_Info_0_4;
  }
  else
  {
    MR_Word HeadFuncDefn0_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
    MR_Word TailFuncDefns0_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
    MR_Word HeadFuncDefns_15;
    MR_Word TailFuncDefns_16;
    MR_Word STATE_VARIABLE_Info_19_19;
    MR_Word Name_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadFuncDefn0_11, (MR_Integer) 0))));
    MR_Word Context_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadFuncDefn0_11, (MR_Integer) 1))));
    MR_Word PredProcId_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadFuncDefn0_11, (MR_Integer) 3))));
    MR_Word Params_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadFuncDefn0_11, (MR_Integer) 4))));
    MR_Word FuncBody0_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadFuncDefn0_11, (MR_Integer) 5))));
    MR_Word EnvVarNames_34 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadFuncDefn0_11, (MR_Integer) 6))));
    MR_Word MaybeRequiretailrecInfo_35 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadFuncDefn0_11, (MR_Integer) 7))));
    MR_Word FuncBody_36;
    MR_Word Flags_37 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadFuncDefn0_11, (MR_Integer) 2))));
    MR_Word FuncDefn_38;

    ml_backend__ml_elim_nested__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_108_97_116_116_101_110_95_102_117_110_99_116_105_111_110_95_98_111_100_121_95_95_91_49_93_95_49_5_p_1(FuncBody0_33, &FuncBody_36, STATE_VARIABLE_Info_0_4, &STATE_VARIABLE_Info_19_19);
    {
      FuncDefn_38 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), FuncDefn_38, 0) = ((MR_Box) (Name_28));
      MR_hl_field(MR_mktag(0), FuncDefn_38, 1) = ((MR_Box) (Context_29));
      MR_hl_field(MR_mktag(0), FuncDefn_38, 2) = ((MR_Box) (Flags_37));
      MR_hl_field(MR_mktag(0), FuncDefn_38, 3) = ((MR_Box) (PredProcId_31));
      MR_hl_field(MR_mktag(0), FuncDefn_38, 4) = ((MR_Box) (Params_32));
      MR_hl_field(MR_mktag(0), FuncDefn_38, 5) = ((MR_Box) (FuncBody_36));
      MR_hl_field(MR_mktag(0), FuncDefn_38, 6) = ((MR_Box) (EnvVarNames_34));
      MR_hl_field(MR_mktag(0), FuncDefn_38, 7) = ((MR_Box) (MaybeRequiretailrecInfo_35));
    }
    {
      HeadFuncDefns_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), HeadFuncDefns_15, 0) = ((MR_Box) (FuncDefn_38));
      MR_hl_field(MR_mktag(1), HeadFuncDefns_15, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    ml_backend__ml_elim_nested__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_108_97_116_116_101_110_95_110_101_115_116_101_100_95_102_117_110_99_116_105_111_110_95_100_101_102_110_115_95_95_91_49_93_95_49_5_p_1(TailFuncDefns0_12, &TailFuncDefns_16, STATE_VARIABLE_Info_19_19, STATE_VARIABLE_Info_5);
    *HeadVar__3_3 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_function_defn_0), HeadFuncDefns_15, TailFuncDefns_16);
  }
}

static void MR_CALL 
ml_backend__ml_elim_nested__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_108_97_116_116_101_110_95_100_101_102_97_117_108_116_95_95_91_49_93_95_49_5_p_1(
  MR_Word Default0_7,
  MR_Word * Default_8,
  MR_Word STATE_VARIABLE_Info_0_12,
  MR_Word * STATE_VARIABLE_Info_13)
{
  switch (MR_tag((MR_Word) Default0_7)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (MR_unmkbody(Default0_7)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            *Default_8 = (MR_Word) ((MR_Unsigned) 0U);
            *STATE_VARIABLE_Info_13 = STATE_VARIABLE_Info_0_12;
          }
          break;
        case (MR_Integer) 1:
          {
            *Default_8 = (MR_Word) ((MR_Unsigned) 4U);
            *STATE_VARIABLE_Info_13 = STATE_VARIABLE_Info_0_12;
          }
          break;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word Stmt0_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Default0_7, (MR_Integer) 0))));
        MR_Word Stmt_11;

        ml_backend__ml_elim_nested__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_108_97_116_116_101_110_95_115_116_97_116_101_109_101_110_116_95_95_91_49_93_95_49_5_p_1(Stmt0_10, &Stmt_11, STATE_VARIABLE_Info_0_12, STATE_VARIABLE_Info_13);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *Default_8 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Stmt_11));
        }
      }
      break;
  }
}

static void MR_CALL 
ml_backend__ml_elim_nested__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_108_97_116_116_101_110_95_99_97_115_101_115_95_95_91_49_93_95_49_5_p_1(
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word STATE_VARIABLE_Info_0_4,
  MR_Word * STATE_VARIABLE_Info_5)
{
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_Info_5 = STATE_VARIABLE_Info_0_4;
  }
  else
  {
    MR_Word Case0_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
    MR_Word Cases0_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
    MR_Word Case_13;
    MR_Word Cases_14;
    MR_Word STATE_VARIABLE_Info_18_18;
    MR_Word FirstCond0_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Case0_11, (MR_Integer) 0))));
    MR_Word LaterConds0_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Case0_11, (MR_Integer) 1))));
    MR_Word Stmt0_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Case0_11, (MR_Integer) 2))));
    MR_Word FirstCond_29;
    MR_Word LaterConds_30;
    MR_Word Stmt_31;

    ml_backend__ml_elim_nested__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_117_112_95_99_97_115_101_95_99_111_110_100_95_95_91_49_93_95_49_4_p_1(STATE_VARIABLE_Info_0_4, FirstCond0_26, &FirstCond_29);
    ml_backend__ml_elim_nested__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_117_112_95_99_97_115_101_95_99_111_110_100_115_95_95_91_49_93_95_49_4_p_1(STATE_VARIABLE_Info_0_4, LaterConds0_27, &LaterConds_30);
    ml_backend__ml_elim_nested__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_108_97_116_116_101_110_95_115_116_97_116_101_109_101_110_116_95_95_91_49_93_95_49_5_p_1(Stmt0_28, &Stmt_31, STATE_VARIABLE_Info_0_4, &STATE_VARIABLE_Info_18_18);
    {
      Case_13 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Case_13, 0) = ((MR_Box) (FirstCond_29));
      MR_hl_field(MR_mktag(0), Case_13, 1) = ((MR_Box) (LaterConds_30));
      MR_hl_field(MR_mktag(0), Case_13, 2) = ((MR_Box) (Stmt_31));
    }
    ml_backend__ml_elim_nested__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_108_97_116_116_101_110_95_99_97_115_101_115_95_95_91_49_93_95_49_5_p_1(Cases0_12, &Cases_14, STATE_VARIABLE_Info_18_18, STATE_VARIABLE_Info_5);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__3_3 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Case_13));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Cases_14));
    }
  }
}

static void MR_CALL 
ml_backend__ml_elim_nested__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_108_97_116_116_101_110_95_115_116_97_116_101_109_101_110_116_95_95_91_49_93_95_49_5_p_1(
  MR_Word Stmt0_7,
  MR_Word * Stmt_8,
  MR_Word STATE_VARIABLE_Info_0_62,
  MR_Word * STATE_VARIABLE_Info_63)
{
  switch (MR_tag((MR_Word) Stmt0_7)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word LocalVarDefns0_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Stmt0_7, (MR_Integer) 0))));
        MR_Word FuncDefns0_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Stmt0_7, (MR_Integer) 1))));
        MR_Word SubStmts0_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Stmt0_7, (MR_Integer) 2))));
        MR_Word Context_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Stmt0_7, (MR_Integer) 3))));
        MR_Word LocalVarDefns_14;
        MR_Word InitStmts_15;
        MR_Word FuncDefns_16;
        MR_Word SubStmts_17;
        MR_Word STATE_VARIABLE_Info_72_72;
        MR_Word STATE_VARIABLE_Info_73_73;
        MR_Word Var_74;

        ml_backend__ml_elim_nested__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_108_97_116_116_101_110_95_110_101_115_116_101_100_95_108_111_99_97_108_95_118_97_114_95_100_101_102_110_115_95_95_91_49_44_32_52_44_32_53_93_95_49_8_p_1(LocalVarDefns0_10, &LocalVarDefns_14, &InitStmts_15, STATE_VARIABLE_Info_0_62, &STATE_VARIABLE_Info_72_72);
        ml_backend__ml_elim_nested__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_108_97_116_116_101_110_95_110_101_115_116_101_100_95_102_117_110_99_116_105_111_110_95_100_101_102_110_115_95_95_91_49_93_95_49_5_p_1(FuncDefns0_11, &FuncDefns_16, STATE_VARIABLE_Info_72_72, &STATE_VARIABLE_Info_73_73);
        Var_74 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0), InitStmts_15, SubStmts0_12);
        ml_backend__ml_elim_nested__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_108_97_116_116_101_110_95_115_116_97_116_101_109_101_110_116_115_95_95_91_49_93_95_49_5_p_1(Var_74, &SubStmts_17, STATE_VARIABLE_Info_73_73, STATE_VARIABLE_Info_63);
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          *Stmt_8 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (LocalVarDefns_14));
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (FuncDefns_16));
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (SubStmts_17));
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Context_13));
        }
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word Kind_18 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), Stmt0_7, (MR_Integer) 0))) & (MR_Integer) 1);
        MR_Word Rval0_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Stmt0_7, (MR_Integer) 1))));
        MR_Word SubStmt0_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Stmt0_7, (MR_Integer) 2))));
        MR_Word LoopLocalVars0_21 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Stmt0_7, (MR_Integer) 3))));
        MR_Word Rval_22;
        MR_Word LoopLocalVars_23;
        MR_Word SubStmt_24;
        MR_Word Context_76 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Stmt0_7, (MR_Integer) 4))));

        ml_backend__ml_elim_nested__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_117_112_95_114_118_97_108_95_95_91_49_93_95_49_4_p_1(STATE_VARIABLE_Info_0_62, Rval0_19, &Rval_22);
        ml_backend__ml_elim_nested__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_117_112_95_108_111_99_97_108_95_118_97_114_115_95_95_91_49_93_95_49_4_p_1(STATE_VARIABLE_Info_0_62, LoopLocalVars0_21, &LoopLocalVars_23);
        ml_backend__ml_elim_nested__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_108_97_116_116_101_110_95_115_116_97_116_101_109_101_110_116_95_95_91_49_93_95_49_5_p_1(SubStmt0_20, &SubStmt_24, STATE_VARIABLE_Info_0_62, STATE_VARIABLE_Info_63);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
          *Stmt_8 = base;
          MR_hl_field(MR_mktag(1), base, 0) = (MR_Box) ((MR_Unsigned) (Kind_18));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Rval_22));
          MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (SubStmt_24));
          MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (LoopLocalVars_23));
          MR_hl_field(MR_mktag(1), base, 4) = ((MR_Box) (Context_76));
        }
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word Cond0_25 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Stmt0_7, (MR_Integer) 0))));
        MR_Word Then0_26 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Stmt0_7, (MR_Integer) 1))));
        MR_Word MaybeElse0_27 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Stmt0_7, (MR_Integer) 2))));
        MR_Word Cond_28;
        MR_Word Then_29;
        MR_Word MaybeElse_30;
        MR_Word STATE_VARIABLE_Info_69_69;
        MR_Word Context_77 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Stmt0_7, (MR_Integer) 3))));

        ml_backend__ml_elim_nested__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_117_112_95_114_118_97_108_95_95_91_49_93_95_49_4_p_1(STATE_VARIABLE_Info_0_62, Cond0_25, &Cond_28);
        ml_backend__ml_elim_nested__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_108_97_116_116_101_110_95_115_116_97_116_101_109_101_110_116_95_95_91_49_93_95_49_5_p_1(Then0_26, &Then_29, STATE_VARIABLE_Info_0_62, &STATE_VARIABLE_Info_69_69);
        ml_backend__ml_elim_nested__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_108_97_116_116_101_110_95_109_97_121_98_101_95_115_116_97_116_101_109_101_110_116_95_95_91_49_93_95_49_5_p_1(MaybeElse0_27, &MaybeElse_30, STATE_VARIABLE_Info_69_69, STATE_VARIABLE_Info_63);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
          *Stmt_8 = base;
          MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (Cond_28));
          MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (Then_29));
          MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (MaybeElse_30));
          MR_hl_field(MR_mktag(2), base, 3) = ((MR_Box) (Context_77));
        }
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Stmt0_7, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word Type_31 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Stmt0_7, (MR_Integer) 1))));
            MR_Word Val0_32 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Stmt0_7, (MR_Integer) 2))));
            MR_Word Range_33 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Stmt0_7, (MR_Integer) 3))));
            MR_Word Cases0_34 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Stmt0_7, (MR_Integer) 4))));
            MR_Word Default0_35 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Stmt0_7, (MR_Integer) 5))));
            MR_Word Val_36;
            MR_Word Cases_37;
            MR_Word Default_38;
            MR_Word STATE_VARIABLE_Info_67_67;
            MR_Word Context_78 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Stmt0_7, (MR_Integer) 6))));

            ml_backend__ml_elim_nested__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_117_112_95_114_118_97_108_95_95_91_49_93_95_49_4_p_1(STATE_VARIABLE_Info_0_62, Val0_32, &Val_36);
            ml_backend__ml_elim_nested__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_108_97_116_116_101_110_95_99_97_115_101_115_95_95_91_49_93_95_49_5_p_1(Cases0_34, &Cases_37, STATE_VARIABLE_Info_0_62, &STATE_VARIABLE_Info_67_67);
            ml_backend__ml_elim_nested__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_108_97_116_116_101_110_95_100_101_102_97_117_108_116_95_95_91_49_93_95_49_5_p_1(Default0_35, &Default_38, STATE_VARIABLE_Info_67_67, STATE_VARIABLE_Info_63);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL));
              *Stmt_8 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Type_31));
              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (Val_36));
              MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (Range_33));
              MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (Cases_37));
              MR_hl_field(MR_mktag(3), base, 5) = ((MR_Box) (Default_38));
              MR_hl_field(MR_mktag(3), base, 6) = ((MR_Box) (Context_78));
            }
          }
          break;
        case (MR_Integer) 1:
          {
            *Stmt_8 = Stmt0_7;
            *STATE_VARIABLE_Info_63 = STATE_VARIABLE_Info_0_62;
          }
          break;
        case (MR_Integer) 2:
          {
            *Stmt_8 = Stmt0_7;
            *STATE_VARIABLE_Info_63 = STATE_VARIABLE_Info_0_62;
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word Labels_42 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Stmt0_7, (MR_Integer) 2))));
            MR_Word Context_81 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Stmt0_7, (MR_Integer) 3))));
            MR_Word Rval0_82 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Stmt0_7, (MR_Integer) 1))));
            MR_Word Rval_83;

            ml_backend__ml_elim_nested__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_117_112_95_114_118_97_108_95_95_91_49_93_95_49_4_p_1(STATE_VARIABLE_Info_0_62, Rval0_82, &Rval_83);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              *Stmt_8 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 3U));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Rval_83));
              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (Labels_42));
              MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (Context_81));
            }
            *STATE_VARIABLE_Info_63 = STATE_VARIABLE_Info_0_62;
          }
          break;
        case (MR_Integer) 4:
          {
            MR_Word Sig_43 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Stmt0_7, (MR_Integer) 1))));
            MR_Word Func0_44 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Stmt0_7, (MR_Integer) 2))));
            MR_Word Args0_45 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Stmt0_7, (MR_Integer) 3))));
            MR_Word RetLvals0_46 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Stmt0_7, (MR_Integer) 4))));
            MR_Word TailCall_47 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Stmt0_7, (MR_Integer) 5))) & (MR_Integer) 3);
            MR_Word Func_48;
            MR_Word Args_49;
            MR_Word RetLvals_50;
            MR_Word Context_84 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Stmt0_7, (MR_Integer) 6))));

            ml_backend__ml_elim_nested__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_117_112_95_114_118_97_108_95_95_91_49_93_95_49_4_p_1(STATE_VARIABLE_Info_0_62, Func0_44, &Func_48);
            ml_backend__ml_elim_nested__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_117_112_95_114_118_97_108_115_95_95_91_49_93_95_49_4_p_1(STATE_VARIABLE_Info_0_62, Args0_45, &Args_49);
            ml_backend__ml_elim_nested__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_117_112_95_108_118_97_108_115_95_95_91_49_93_95_49_4_p_1(STATE_VARIABLE_Info_0_62, RetLvals0_46, &RetLvals_50);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL));
              *Stmt_8 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 4U));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Sig_43));
              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (Func_48));
              MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (Args_49));
              MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (RetLvals_50));
              MR_hl_field(MR_mktag(3), base, 5) = (MR_Box) ((MR_Unsigned) (TailCall_47));
              MR_hl_field(MR_mktag(3), base, 6) = ((MR_Box) (Context_84));
            }
            *STATE_VARIABLE_Info_63 = STATE_VARIABLE_Info_0_62;
          }
          break;
        case (MR_Integer) 5:
          {
            MR_Word Rvals0_51 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Stmt0_7, (MR_Integer) 1))));
            MR_Word Rvals_52;
            MR_Word Context_85 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Stmt0_7, (MR_Integer) 2))));

            ml_backend__ml_elim_nested__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_117_112_95_114_118_97_108_115_95_95_91_49_93_95_49_4_p_1(STATE_VARIABLE_Info_0_62, Rvals0_51, &Rvals_52);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              *Stmt_8 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 5U));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Rvals_52));
              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (Context_85));
            }
            *STATE_VARIABLE_Info_63 = STATE_VARIABLE_Info_0_62;
          }
          break;
        case (MR_Integer) 6:
          {
            MR_Word BodyStmt0_55 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Stmt0_7, (MR_Integer) 2))));
            MR_Word HandlerStmt0_56 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Stmt0_7, (MR_Integer) 3))));
            MR_Word BodyStmt_57;
            MR_Word HandlerStmt1_58;
            MR_Word Stmt1_59;
            MR_Word STATE_VARIABLE_Info_64_64;
            MR_Word STATE_VARIABLE_Info_65_65;
            MR_Word Context_87 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Stmt0_7, (MR_Integer) 4))));
            MR_Word Ref0_88 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Stmt0_7, (MR_Integer) 1))));
            MR_Word Ref_89;

            ml_backend__ml_elim_nested__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_117_112_95_108_118_97_108_95_95_91_49_93_95_49_4_p_1(STATE_VARIABLE_Info_0_62, Ref0_88, &Ref_89);
            ml_backend__ml_elim_nested__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_108_97_116_116_101_110_95_115_116_97_116_101_109_101_110_116_95_95_91_49_93_95_49_5_p_1(BodyStmt0_55, &BodyStmt_57, STATE_VARIABLE_Info_0_62, &STATE_VARIABLE_Info_64_64);
            ml_backend__ml_elim_nested__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_108_97_116_116_101_110_95_115_116_97_116_101_109_101_110_116_95_95_91_49_93_95_49_5_p_1(HandlerStmt0_56, &HandlerStmt1_58, STATE_VARIABLE_Info_64_64, &STATE_VARIABLE_Info_65_65);
            {
              Stmt1_59 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Stmt1_59, 0) = ((MR_Box) ((MR_Unsigned) 6U));
              MR_hl_field(MR_mktag(3), Stmt1_59, 1) = ((MR_Box) (Ref_89));
              MR_hl_field(MR_mktag(3), Stmt1_59, 2) = ((MR_Box) (BodyStmt_57));
              MR_hl_field(MR_mktag(3), Stmt1_59, 3) = ((MR_Box) (HandlerStmt1_58));
              MR_hl_field(MR_mktag(3), Stmt1_59, 4) = ((MR_Box) (Context_87));
            }
            ml_backend__ml_elim_nested__save_and_restore_stack_chain_4_p_0(Stmt1_59, Stmt_8, STATE_VARIABLE_Info_65_65, STATE_VARIABLE_Info_63);
          }
          break;
        case (MR_Integer) 7:
          {
            MR_Word Ref0_53 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Stmt0_7, (MR_Integer) 1))));
            MR_Word Ref_54;
            MR_Word Context_86 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Stmt0_7, (MR_Integer) 2))));

            ml_backend__ml_elim_nested__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_117_112_95_114_118_97_108_95_95_91_49_93_95_49_4_p_1(STATE_VARIABLE_Info_0_62, Ref0_53, &Ref_54);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              *Stmt_8 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 7U));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Ref_54));
              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (Context_86));
            }
            *STATE_VARIABLE_Info_63 = STATE_VARIABLE_Info_0_62;
          }
          break;
        case (MR_Integer) 8:
          {
            MR_Word AtomicStmt0_60 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Stmt0_7, (MR_Integer) 1))));
            MR_Word AtomicStmt_61;
            MR_Word Context_90 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Stmt0_7, (MR_Integer) 2))));

            ml_backend__ml_elim_nested__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_117_112_95_97_116_111_109_105_99_95_115_116_109_116_95_95_91_49_93_95_49_4_p_1(STATE_VARIABLE_Info_0_62, AtomicStmt0_60, &AtomicStmt_61);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              *Stmt_8 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 8U));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (AtomicStmt_61));
              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (Context_90));
            }
            *STATE_VARIABLE_Info_63 = STATE_VARIABLE_Info_0_62;
          }
          break;
      }
      break;
  }
}

static void MR_CALL 
ml_backend__ml_elim_nested__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_108_97_116_116_101_110_95_115_116_97_116_101_109_101_110_116_115_95_95_91_49_93_95_49_5_p_1(
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word STATE_VARIABLE_Info_0_4,
  MR_Word * STATE_VARIABLE_Info_5)
{
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_Info_5 = STATE_VARIABLE_Info_0_4;
  }
  else
  {
    MR_Word Stmt0_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
    MR_Word Stmts0_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
    MR_Word Stmt_13;
    MR_Word Stmts_14;
    MR_Word STATE_VARIABLE_Info_18_18;

    ml_backend__ml_elim_nested__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_108_97_116_116_101_110_95_115_116_97_116_101_109_101_110_116_95_95_91_49_93_95_49_5_p_1(Stmt0_11, &Stmt_13, STATE_VARIABLE_Info_0_4, &STATE_VARIABLE_Info_18_18);
    ml_backend__ml_elim_nested__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_108_97_116_116_101_110_95_115_116_97_116_101_109_101_110_116_115_95_95_91_49_93_95_49_5_p_1(Stmts0_12, &Stmts_14, STATE_VARIABLE_Info_18_18, STATE_VARIABLE_Info_5);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__3_3 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Stmt_13));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Stmts_14));
    }
  }
}

static void MR_CALL 
ml_backend__ml_elim_nested__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_108_97_116_116_101_110_95_109_97_121_98_101_95_115_116_97_116_101_109_101_110_116_95_95_91_49_93_95_49_5_p_1(
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word STATE_VARIABLE_Info_0_4,
  MR_Word * STATE_VARIABLE_Info_5)
{
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_Info_5 = STATE_VARIABLE_Info_0_4;
  }
  else
  {
    MR_Word Stmt0_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
    MR_Word Stmt_12;

    ml_backend__ml_elim_nested__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_108_97_116_116_101_110_95_115_116_97_116_101_109_101_110_116_95_95_91_49_93_95_49_5_p_1(Stmt0_11, &Stmt_12, STATE_VARIABLE_Info_0_4, STATE_VARIABLE_Info_5);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__3_3 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Stmt_12));
    }
  }
}

static void MR_CALL 
ml_backend__ml_elim_nested__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_108_97_116_116_101_110_95_102_117_110_99_116_105_111_110_95_98_111_100_121_95_95_91_49_93_95_49_5_p_1(
  MR_Word Body0_7,
  MR_Word * Body_8,
  MR_Word STATE_VARIABLE_Info_0_12,
  MR_Word * STATE_VARIABLE_Info_13)
{
  if ((Body0_7 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *Body_8 = Body0_7;
    *STATE_VARIABLE_Info_13 = STATE_VARIABLE_Info_0_12;
  }
  else
  {
    MR_Word Stmt0_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Body0_7, (MR_Integer) 0))));
    MR_Word Stmt_11;

    ml_backend__ml_elim_nested__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_108_97_116_116_101_110_95_115_116_97_116_101_109_101_110_116_95_95_91_49_93_95_49_5_p_1(Stmt0_10, &Stmt_11, STATE_VARIABLE_Info_0_12, STATE_VARIABLE_Info_13);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *Body_8 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Stmt_11));
    }
  }
}

static MR_bool MR_CALL 
ml_backend__ml_elim_nested__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_117_112_95_108_111_99_97_108_95_118_97_114_115_95_95_91_49_93_95_49_4_p_1_1(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ml_backend__ml_elim_nested__IntroducedFrom__pred__fixup_local_vars__2066__2_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_elim_nested__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_117_112_95_108_111_99_97_108_95_118_97_114_115_95_95_91_49_93_95_49_4_p_1(
  MR_Word Info_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4)
{
  {
    MR_bool succeeded;

    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word HeadLocalVar0_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
      MR_Word TailLocalVars0_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word TailLocalVars_12;
      MR_Word HeadLval_13;

      ml_backend__ml_elim_nested__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_117_112_95_108_111_99_97_108_95_118_97_114_115_95_95_91_49_93_95_49_4_p_1(Info_2, TailLocalVars0_10, &TailLocalVars_12);
      ml_backend__ml_elim_nested__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_117_112_95_118_97_114_95_95_91_49_93_95_49_5_p_1(Info_2, HeadLocalVar0_9, (MR_Word) ((MR_Unsigned) 36U), &HeadLval_13);
      switch (MR_tag((MR_Word) HeadLval_13)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
        case (MR_Integer) 1:
        case (MR_Integer) 2:
          *HeadVar__4_4 = TailLocalVars_12;
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadLval_13, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word HeadLvalLocalVar_14 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadLval_13, (MR_Integer) 1))));
                MR_Word Var_27;

                {
                  Var_27 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Var_27, 0) = ((MR_Box) (&ml_backend__ml_elim_nested_scalar_common_4[3]));
                  MR_hl_field(MR_mktag(0), Var_27, 1) = ((MR_Box) (ml_backend__ml_elim_nested__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_117_112_95_108_111_99_97_108_95_118_97_114_115_95_95_91_49_93_95_49_4_p_1_1));
                  MR_hl_field(MR_mktag(0), Var_27, 2) = ((MR_Box) ((MR_Integer) 2));
                  MR_hl_field(MR_mktag(0), Var_27, 3) = ((MR_Box) (HeadLocalVar0_9));
                  MR_hl_field(MR_mktag(0), Var_27, 4) = ((MR_Box) (HeadLvalLocalVar_14));
                }
                mercury__require__expect_3_p_0(Var_27, (MR_String) "predicate \140ml_backend.ml_elim_nested.fixup_local_vars\'/4", (MR_String) "HeadLocalVar0 != HeadLvalLocalVar");
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  *HeadVar__4_4 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (HeadLocalVar0_9));
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (TailLocalVars_12));
                }
              }
              break;
            case (MR_Integer) 1:
              *HeadVar__4_4 = TailLocalVars_12;
              break;
          }
          break;
      }
    }
  }
}

static void MR_CALL 
ml_backend__ml_elim_nested__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_117_112_95_114_118_97_108_115_95_95_91_49_93_95_49_4_p_1(
  MR_Word Info_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4)
{
  if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word Rval0_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
    MR_Word Rvals0_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
    MR_Word Rval_11;
    MR_Word Rvals_12;

    ml_backend__ml_elim_nested__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_117_112_95_114_118_97_108_95_95_91_49_93_95_49_4_p_1(Info_2, Rval0_9, &Rval_11);
    ml_backend__ml_elim_nested__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_117_112_95_114_118_97_108_115_95_95_91_49_93_95_49_4_p_1(Info_2, Rvals0_10, &Rvals_12);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__4_4 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Rval_11));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Rvals_12));
    }
  }
}

static void MR_CALL 
ml_backend__ml_elim_nested__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_117_112_95_97_116_111_109_105_99_95_115_116_109_116_95_95_91_49_93_95_49_4_p_1(
  MR_Word Info_6,
  MR_Word Atomic0_7,
  MR_Word * Atomic_8)
{
  switch (MR_tag((MR_Word) Atomic0_7)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      *Atomic_8 = Atomic0_7;
      break;
    case (MR_Integer) 1:
      *Atomic_8 = Atomic0_7;
      break;
    case (MR_Integer) 2:
      {
        MR_Word Lval0_10 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Atomic0_7, (MR_Integer) 0))));
        MR_Word Rval0_11 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Atomic0_7, (MR_Integer) 1))));
        MR_Word Lval_12;
        MR_Word Rval_13;

        ml_backend__ml_elim_nested__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_117_112_95_108_118_97_108_95_95_91_49_93_95_49_4_p_1(Info_6, Lval0_10, &Lval_12);
        ml_backend__ml_elim_nested__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_117_112_95_114_118_97_108_95_95_91_49_93_95_49_4_p_1(Info_6, Rval0_11, &Rval_13);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *Atomic_8 = base;
          MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (Lval_12));
          MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (Rval_13));
        }
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Atomic0_7, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word Lval0_34 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Atomic0_7, (MR_Integer) 1))));
            MR_Word Rval0_35 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Atomic0_7, (MR_Integer) 2))));
            MR_Word Lval_36;
            MR_Word Rval_37;

            ml_backend__ml_elim_nested__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_117_112_95_108_118_97_108_95_95_91_49_93_95_49_4_p_1(Info_6, Lval0_34, &Lval_36);
            ml_backend__ml_elim_nested__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_117_112_95_114_118_97_108_95_95_91_49_93_95_49_4_p_1(Info_6, Rval0_35, &Rval_37);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              *Atomic_8 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Lval_36));
              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (Rval_37));
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Rval0_38 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Atomic0_7, (MR_Integer) 1))));
            MR_Word Rval_39;

            ml_backend__ml_elim_nested__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_117_112_95_114_118_97_108_95_95_91_49_93_95_49_4_p_1(Info_6, Rval0_38, &Rval_39);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *Atomic_8 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 1U));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Rval_39));
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word Target0_14 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Atomic0_7, (MR_Integer) 1))));
            MR_Word MaybeTag_15 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Atomic0_7, (MR_Integer) 2))));
            MR_Word ExplicitSecTag_16 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Atomic0_7, (MR_Integer) 3))) & (MR_Integer) 1);
            MR_Word Type_17 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Atomic0_7, (MR_Integer) 4))));
            MR_Word MaybeSize_18 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Atomic0_7, (MR_Integer) 5))));
            MR_Word MaybeCtorName_19 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Atomic0_7, (MR_Integer) 6))));
            MR_Word ArgRvalsTypes0_20 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Atomic0_7, (MR_Integer) 7))));
            MR_Word MayUseAtomic_21 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Atomic0_7, (MR_Integer) 8))) & (MR_Integer) 1);
            MR_Word MaybeAllocId_22 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Atomic0_7, (MR_Integer) 9))));
            MR_Word Target_23;
            MR_Word ArgRvalsTypes_24;

            ml_backend__ml_elim_nested__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_117_112_95_108_118_97_108_95_95_91_49_93_95_49_4_p_1(Info_6, Target0_14, &Target_23);
            ml_backend__ml_elim_nested__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_117_112_95_116_121_112_101_100_95_114_118_97_108_115_95_95_91_49_93_95_49_4_p_1(Info_6, ArgRvalsTypes0_20, &ArgRvalsTypes_24);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (10 * sizeof(MR_Word)), NULL, NULL));
              *Atomic_8 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 2U));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Target_23));
              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (MaybeTag_15));
              MR_hl_field(MR_mktag(3), base, 3) = (MR_Box) ((MR_Unsigned) (ExplicitSecTag_16));
              MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (Type_17));
              MR_hl_field(MR_mktag(3), base, 5) = ((MR_Box) (MaybeSize_18));
              MR_hl_field(MR_mktag(3), base, 6) = ((MR_Box) (MaybeCtorName_19));
              MR_hl_field(MR_mktag(3), base, 7) = ((MR_Box) (ArgRvalsTypes_24));
              MR_hl_field(MR_mktag(3), base, 8) = (MR_Box) ((MR_Unsigned) (MayUseAtomic_21));
              MR_hl_field(MR_mktag(3), base, 9) = ((MR_Box) (MaybeAllocId_22));
            }
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word Lval0_40 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Atomic0_7, (MR_Integer) 1))));
            MR_Word Lval_41;

            ml_backend__ml_elim_nested__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_117_112_95_108_118_97_108_95_95_91_49_93_95_49_4_p_1(Info_6, Lval0_40, &Lval_41);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *Atomic_8 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 3U));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Lval_41));
            }
          }
          break;
        case (MR_Integer) 4:
          {
            MR_Word Rval0_42 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Atomic0_7, (MR_Integer) 1))));
            MR_Word Rval_43;

            ml_backend__ml_elim_nested__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_117_112_95_114_118_97_108_95_95_91_49_93_95_49_4_p_1(Info_6, Rval0_42, &Rval_43);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *Atomic_8 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 4U));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Rval_43));
            }
          }
          break;
        case (MR_Integer) 5:
          {
            MR_Word TrailOp0_25 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Atomic0_7, (MR_Integer) 1))));
            MR_Word TrailOp_26;

            switch (MR_tag((MR_Word) TrailOp0_25)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                TrailOp_26 = TrailOp0_25;
                break;
              case (MR_Integer) 1:
                {
                  MR_Word Lval0_49 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TrailOp0_25, (MR_Integer) 0))));
                  MR_Word Lval_50;

                  ml_backend__ml_elim_nested__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_117_112_95_108_118_97_108_95_95_91_49_93_95_49_4_p_1(Info_6, Lval0_49, &Lval_50);
                  {
                    TrailOp_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), TrailOp_26, 0) = ((MR_Box) (Lval_50));
                  }
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word Rval0_51 = ((MR_Word) ((MR_hl_field(MR_mktag(2), TrailOp0_25, (MR_Integer) 0))));
                  MR_Word Reason_52 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), TrailOp0_25, (MR_Integer) 1))) & (MR_Integer) 7);
                  MR_Word Rval_53;

                  ml_backend__ml_elim_nested__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_117_112_95_114_118_97_108_95_95_91_49_93_95_49_4_p_1(Info_6, Rval0_51, &Rval_53);
                  {
                    TrailOp_26 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(2), TrailOp_26, 0) = ((MR_Box) (Rval_53));
                    MR_hl_field(MR_mktag(2), TrailOp_26, 1) = (MR_Box) ((MR_Unsigned) (Reason_52));
                  }
                }
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), TrailOp0_25, (MR_Integer) 0))))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      MR_Word Lval0_54 = ((MR_Word) ((MR_hl_field(MR_mktag(3), TrailOp0_25, (MR_Integer) 1))));
                      MR_Word Lval_55;

                      ml_backend__ml_elim_nested__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_117_112_95_108_118_97_108_95_95_91_49_93_95_49_4_p_1(Info_6, Lval0_54, &Lval_55);
                      {
                        TrailOp_26 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(3), TrailOp_26, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                        MR_hl_field(MR_mktag(3), TrailOp_26, 1) = ((MR_Box) (Lval_55));
                      }
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Word Rval0_56 = ((MR_Word) ((MR_hl_field(MR_mktag(3), TrailOp0_25, (MR_Integer) 1))));
                      MR_Word Rval_57;

                      ml_backend__ml_elim_nested__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_117_112_95_114_118_97_108_95_95_91_49_93_95_49_4_p_1(Info_6, Rval0_56, &Rval_57);
                      {
                        TrailOp_26 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(3), TrailOp_26, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                        MR_hl_field(MR_mktag(3), TrailOp_26, 1) = ((MR_Box) (Rval_57));
                      }
                    }
                    break;
                }
                break;
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *Atomic_8 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 5U));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (TrailOp_26));
            }
          }
          break;
        case (MR_Integer) 6:
          {
            MR_Word Lang_27 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Atomic0_7, (MR_Integer) 1))) & (MR_Integer) 3);
            MR_Word Components0_28 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Atomic0_7, (MR_Integer) 2))));
            MR_Word Components_29;

            ml_backend__ml_elim_nested__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_117_112_95_116_97_114_103_101_116_95_99_111_100_101_95_99_111_109_112_111_110_101_110_116_115_95_95_91_49_93_95_49_4_p_1(Info_6, Components0_28, &Components_29);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              *Atomic_8 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 6U));
              MR_hl_field(MR_mktag(3), base, 1) = (MR_Box) ((MR_Unsigned) (Lang_27));
              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (Components_29));
            }
          }
          break;
        case (MR_Integer) 7:
          {
            MR_Word Vs_30 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Atomic0_7, (MR_Integer) 2))));
            MR_Word Lvals0_31 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Atomic0_7, (MR_Integer) 3))));
            MR_String Code_32 = ((MR_String) ((MR_hl_field(MR_mktag(3), Atomic0_7, (MR_Integer) 4))));
            MR_Word Lvals_33;
            MR_Word Lang_44 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Atomic0_7, (MR_Integer) 1))) & (MR_Integer) 3);

            ml_backend__ml_elim_nested__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_117_112_95_108_118_97_108_115_95_95_91_49_93_95_49_4_p_1(Info_6, Lvals0_31, &Lvals_33);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
              *Atomic_8 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 7U));
              MR_hl_field(MR_mktag(3), base, 1) = (MR_Box) ((MR_Unsigned) (Lang_44));
              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (Vs_30));
              MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (Lvals_33));
              MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (Code_32));
            }
          }
          break;
      }
      break;
  }
}

static void MR_CALL 
ml_backend__ml_elim_nested__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_117_112_95_108_118_97_108_115_95_95_91_49_93_95_49_4_p_1(
  MR_Word Info_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4)
{
  if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word X0_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
    MR_Word Xs0_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
    MR_Word X_11;
    MR_Word Xs_12;

    ml_backend__ml_elim_nested__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_117_112_95_108_118_97_108_95_95_91_49_93_95_49_4_p_1(Info_2, X0_9, &X_11);
    ml_backend__ml_elim_nested__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_117_112_95_108_118_97_108_115_95_95_91_49_93_95_49_4_p_1(Info_2, Xs0_10, &Xs_12);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__4_4 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (X_11));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Xs_12));
    }
  }
}

static void MR_CALL 
ml_backend__ml_elim_nested__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_117_112_95_116_121_112_101_100_95_114_118_97_108_115_95_95_91_49_93_95_49_4_p_1(
  MR_Word Info_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4)
{
  if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word TypedRval0_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
    MR_Word TypedRvals0_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
    MR_Word TypedRval_11;
    MR_Word TypedRvals_12;
    MR_Word Rval0_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypedRval0_9, (MR_Integer) 0))));
    MR_Word Type_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypedRval0_9, (MR_Integer) 1))));
    MR_Word Rval_15;

    ml_backend__ml_elim_nested__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_117_112_95_114_118_97_108_95_95_91_49_93_95_49_4_p_1(Info_2, Rval0_13, &Rval_15);
    {
      TypedRval_11 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypedRval_11, 0) = ((MR_Box) (Rval_15));
      MR_hl_field(MR_mktag(0), TypedRval_11, 1) = ((MR_Box) (Type_14));
    }
    ml_backend__ml_elim_nested__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_117_112_95_116_121_112_101_100_95_114_118_97_108_115_95_95_91_49_93_95_49_4_p_1(Info_2, TypedRvals0_10, &TypedRvals_12);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__4_4 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (TypedRval_11));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (TypedRvals_12));
    }
  }
}

static void MR_CALL 
ml_backend__ml_elim_nested__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_117_112_95_116_97_114_103_101_116_95_99_111_100_101_95_99_111_109_112_111_110_101_110_116_115_95_95_91_49_93_95_49_4_p_1(
  MR_Word Info_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4)
{
  if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word Component0_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
    MR_Word Components0_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
    MR_Word Component_11;
    MR_Word Components_12;

    switch (MR_tag((MR_Word) Component0_9)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        Component_11 = Component0_9;
        break;
      case (MR_Integer) 1:
      case (MR_Integer) 2:
        Component_11 = Component0_9;
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Component0_9, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word Rval0_22 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Component0_9, (MR_Integer) 1))));
              MR_Word Rval_23;

              ml_backend__ml_elim_nested__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_117_112_95_114_118_97_108_95_95_91_49_93_95_49_4_p_1(Info_2, Rval0_22, &Rval_23);
              {
                Component_11 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Component_11, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(MR_mktag(3), Component_11, 1) = ((MR_Box) (Rval_23));
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Lval0_24 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Component0_9, (MR_Integer) 1))));
              MR_Word Lval_25;

              ml_backend__ml_elim_nested__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_117_112_95_108_118_97_108_95_95_91_49_93_95_49_4_p_1(Info_2, Lval0_24, &Lval_25);
              {
                Component_11 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Component_11, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                MR_hl_field(MR_mktag(3), Component_11, 1) = ((MR_Box) (Lval_25));
              }
            }
            break;
          case (MR_Integer) 2:
          case (MR_Integer) 3:
            Component_11 = Component0_9;
            break;
        }
        break;
    }
    ml_backend__ml_elim_nested__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_117_112_95_116_97_114_103_101_116_95_99_111_100_101_95_99_111_109_112_111_110_101_110_116_115_95_95_91_49_93_95_49_4_p_1(Info_2, Components0_10, &Components_12);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__4_4 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Component_11));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Components_12));
    }
  }
}

static void MR_CALL 
ml_backend__ml_elim_nested__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_108_97_116_116_101_110_95_110_101_115_116_101_100_95_108_111_99_97_108_95_118_97_114_95_100_101_102_110_115_95_95_91_49_44_32_52_44_32_53_93_95_49_8_p_1(
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word * HeadVar__6_6,
  MR_Word STATE_VARIABLE_Info_0_7,
  MR_Word * STATE_VARIABLE_Info_8)
{
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
    *HeadVar__6_6 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_Info_8 = STATE_VARIABLE_Info_0_7;
  }
  else
  {
    MR_Word HeadLocalVarDefn0_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
    MR_Word TailLocalVarDefns0_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
    MR_Word HeadLocalVarDefns_23;
    MR_Word HeadInitStmts_24;
    MR_Word TailLocalVarDefns_25;
    MR_Word TailInitStmts_26;
    MR_Word STATE_VARIABLE_Info_29_29;

    ml_backend__ml_elim_nested__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_108_97_116_116_101_110_95_110_101_115_116_101_100_95_108_111_99_97_108_95_118_97_114_95_100_101_102_110_95_95_91_49_44_32_51_44_32_53_44_32_54_93_95_49_9_p_1(HeadLocalVarDefn0_16, &HeadLocalVarDefns_23, &HeadInitStmts_24, STATE_VARIABLE_Info_0_7, &STATE_VARIABLE_Info_29_29);
    ml_backend__ml_elim_nested__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_108_97_116_116_101_110_95_110_101_115_116_101_100_95_108_111_99_97_108_95_118_97_114_95_100_101_102_110_115_95_95_91_49_44_32_52_44_32_53_93_95_49_8_p_1(TailLocalVarDefns0_17, &TailLocalVarDefns_25, &TailInitStmts_26, STATE_VARIABLE_Info_29_29, STATE_VARIABLE_Info_8);
    *HeadVar__3_3 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_local_var_defn_0), HeadLocalVarDefns_23, TailLocalVarDefns_25);
    *HeadVar__6_6 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0), HeadInitStmts_24, TailInitStmts_26);
  }
}

static void MR_CALL 
ml_backend__ml_elim_nested__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_108_97_116_116_101_110_95_110_101_115_116_101_100_95_108_111_99_97_108_95_118_97_114_95_100_101_102_110_95_95_91_49_44_32_51_44_32_53_44_32_54_93_95_49_9_p_1(
  MR_Word HeadLocalVarDefn0_11,
  MR_Word * HeadLocalVarDefns_13,
  MR_Word * InitStmts_16,
  MR_Word STATE_VARIABLE_Info_0_31,
  MR_Word * STATE_VARIABLE_Info_32)
{
  {
    MR_bool succeeded;
    MR_Word LocalVarName_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadLocalVarDefn0_11, (MR_Integer) 0))));
    MR_Word Context_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadLocalVarDefn0_11, (MR_Integer) 1))));
    MR_Word Type_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadLocalVarDefn0_11, (MR_Integer) 2))));
    MR_Word Init0_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadLocalVarDefn0_11, (MR_Integer) 3))));
    MR_Word GCStmt_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadLocalVarDefn0_11, (MR_Integer) 4))));

    if (((MR_tag((MR_Word) GCStmt_22)) == (MR_Integer) 2))
      succeeded = MR_TRUE;
    else
    if (((MR_tag((MR_Word) GCStmt_22)) == (MR_Integer) 1))
      succeeded = MR_TRUE;
    else
      succeeded = MR_FALSE;
    if (succeeded)
    {
      MR_Word HeadLocalVarDefn_25;
      MR_Word LocalVars0_54;
      MR_Word LocalVars_55;
      MR_Word Var_62;
      MR_Word Var_64;
      MR_Word Var_65;
      MR_Word Var_66;
      MR_Word Var_67;

      switch (MR_tag((MR_Word) Init0_21)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            HeadLocalVarDefn_25 = HeadLocalVarDefn0_11;
            *InitStmts_16 = (MR_Word) ((MR_Unsigned) 0U);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Rval_23 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Init0_21, (MR_Integer) 0))));
            MR_Word VarLval_26;
            MR_Word InitStmt_27;
            MR_Word Var_37;

            {
              HeadLocalVarDefn_25 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), HeadLocalVarDefn_25, 0) = ((MR_Box) (LocalVarName_18));
              MR_hl_field(MR_mktag(0), HeadLocalVarDefn_25, 1) = ((MR_Box) (Context_19));
              MR_hl_field(MR_mktag(0), HeadLocalVarDefn_25, 2) = ((MR_Box) (Type_20));
              MR_hl_field(MR_mktag(0), HeadLocalVarDefn_25, 3) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(0), HeadLocalVarDefn_25, 4) = ((MR_Box) (GCStmt_22));
            }
            {
              VarLval_26 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), VarLval_26, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(3), VarLval_26, 1) = ((MR_Box) (LocalVarName_18));
              MR_hl_field(MR_mktag(3), VarLval_26, 2) = ((MR_Box) (Type_20));
            }
            {
              Var_37 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(2), Var_37, 0) = ((MR_Box) (VarLval_26));
              MR_hl_field(MR_mktag(2), Var_37, 1) = ((MR_Box) (Rval_23));
            }
            {
              InitStmt_27 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), InitStmt_27, 0) = ((MR_Box) ((MR_Unsigned) 8U));
              MR_hl_field(MR_mktag(3), InitStmt_27, 1) = ((MR_Box) (Var_37));
              MR_hl_field(MR_mktag(3), InitStmt_27, 2) = ((MR_Box) (Context_19));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *InitStmts_16 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (InitStmt_27));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
          }
          break;
        case (MR_Integer) 2:
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_elim_nested.flatten_nested_local_var_defn\'/9", (MR_String) "init_struct");
            return;
          }
          break;
        case (MR_Integer) 3:
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_elim_nested.flatten_nested_local_var_defn\'/9", (MR_String) "init_array");
            return;
          }
          break;
      }
      LocalVars0_54 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_31, (MR_Integer) 1))));
      LocalVars_55 = mercury__cord__snoc_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_local_var_defn_0), LocalVars0_54, ((MR_Box) (HeadLocalVarDefn_25)));
      Var_62 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_31, (MR_Integer) 0))));
      Var_64 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_31, (MR_Integer) 2))));
      Var_65 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_31, (MR_Integer) 3))));
      Var_66 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_31, (MR_Integer) 4))));
      Var_67 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_31, (MR_Integer) 5))) & (MR_Integer) 3);
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
        *STATE_VARIABLE_Info_32 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_62));
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (LocalVars_55));
        MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_64));
        MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_65));
        MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_66));
        MR_hl_field(MR_mktag(0), base, 5) = (MR_Box) ((MR_Unsigned) (Var_67));
      }
      *HeadLocalVarDefns_13 = (MR_Word) ((MR_Unsigned) 0U);
    }
    else
    {
      MR_Word Init_41;
      MR_Word HeadLocalVarDefn_42;

      switch (MR_tag((MR_Word) Init0_21)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          Init_41 = Init0_21;
          break;
        case (MR_Integer) 1:
          {
            MR_Word Rval0_73 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Init0_21, (MR_Integer) 0))));
            MR_Word Rval_74;

            ml_backend__ml_elim_nested__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_117_112_95_114_118_97_108_95_95_91_49_93_95_49_4_p_1(STATE_VARIABLE_Info_0_31, Rval0_73, &Rval_74);
            {
              Init_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Init_41, 0) = ((MR_Box) (Rval_74));
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word Type_75 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Init0_21, (MR_Integer) 0))));
            MR_Word Members0_76 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Init0_21, (MR_Integer) 1))));
            MR_Word Members_77;

            ml_backend__ml_elim_nested__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_117_112_95_105_110_105_116_105_97_108_105_122_101_114_115_95_95_91_49_93_95_49_4_p_1(STATE_VARIABLE_Info_0_31, Members0_76, &Members_77);
            {
              Init_41 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(2), Init_41, 0) = ((MR_Box) (Type_75));
              MR_hl_field(MR_mktag(2), Init_41, 1) = ((MR_Box) (Members_77));
            }
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word Elements0_78 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Init0_21, (MR_Integer) 0))));
            MR_Word Elements_79;

            ml_backend__ml_elim_nested__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_117_112_95_105_110_105_116_105_97_108_105_122_101_114_115_95_95_91_49_93_95_49_4_p_1(STATE_VARIABLE_Info_0_31, Elements0_78, &Elements_79);
            {
              Init_41 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Init_41, 0) = ((MR_Box) (Elements_79));
            }
          }
          break;
      }
      {
        HeadLocalVarDefn_42 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), HeadLocalVarDefn_42, 0) = ((MR_Box) (LocalVarName_18));
        MR_hl_field(MR_mktag(0), HeadLocalVarDefn_42, 1) = ((MR_Box) (Context_19));
        MR_hl_field(MR_mktag(0), HeadLocalVarDefn_42, 2) = ((MR_Box) (Type_20));
        MR_hl_field(MR_mktag(0), HeadLocalVarDefn_42, 3) = ((MR_Box) (Init_41));
        MR_hl_field(MR_mktag(0), HeadLocalVarDefn_42, 4) = ((MR_Box) (GCStmt_22));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *HeadLocalVarDefns_13 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (HeadLocalVarDefn_42));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      *InitStmts_16 = (MR_Word) ((MR_Unsigned) 0U);
      *STATE_VARIABLE_Info_32 = STATE_VARIABLE_Info_0_31;
    }
  }
}

static void MR_CALL 
ml_backend__ml_elim_nested__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_117_112_95_105_110_105_116_105_97_108_105_122_101_114_115_95_95_91_49_93_95_49_4_p_1(
  MR_Word Info_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4)
{
  if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word Initializer0_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
    MR_Word Initializers0_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
    MR_Word Initializer_11;
    MR_Word Initializers_12;

    switch (MR_tag((MR_Word) Initializer0_9)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        Initializer_11 = Initializer0_9;
        break;
      case (MR_Integer) 1:
        {
          MR_Word Rval0_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Initializer0_9, (MR_Integer) 0))));
          MR_Word Rval_18;

          ml_backend__ml_elim_nested__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_117_112_95_114_118_97_108_95_95_91_49_93_95_49_4_p_1(Info_2, Rval0_17, &Rval_18);
          {
            Initializer_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Initializer_11, 0) = ((MR_Box) (Rval_18));
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Type_19 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Initializer0_9, (MR_Integer) 0))));
          MR_Word Members0_20 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Initializer0_9, (MR_Integer) 1))));
          MR_Word Members_21;

          ml_backend__ml_elim_nested__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_117_112_95_105_110_105_116_105_97_108_105_122_101_114_115_95_95_91_49_93_95_49_4_p_1(Info_2, Members0_20, &Members_21);
          {
            Initializer_11 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), Initializer_11, 0) = ((MR_Box) (Type_19));
            MR_hl_field(MR_mktag(2), Initializer_11, 1) = ((MR_Box) (Members_21));
          }
        }
        break;
      case (MR_Integer) 3:
        {
          MR_Word Elements0_22 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Initializer0_9, (MR_Integer) 0))));
          MR_Word Elements_23;

          ml_backend__ml_elim_nested__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_117_112_95_105_110_105_116_105_97_108_105_122_101_114_115_95_95_91_49_93_95_49_4_p_1(Info_2, Elements0_22, &Elements_23);
          {
            Initializer_11 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Initializer_11, 0) = ((MR_Box) (Elements_23));
          }
        }
        break;
    }
    ml_backend__ml_elim_nested__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_117_112_95_105_110_105_116_105_97_108_105_122_101_114_115_95_95_91_49_93_95_49_4_p_1(Info_2, Initializers0_10, &Initializers_12);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__4_4 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Initializer_11));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Initializers_12));
    }
  }
}

static void MR_CALL 
ml_backend__ml_elim_nested__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_117_112_95_99_97_115_101_95_99_111_110_100_95_95_91_49_93_95_49_4_p_1(
  MR_Word Info_6,
  MR_Word Cond0_7,
  MR_Word * Cond_8)
{
  if (((MR_tag((MR_Word) Cond0_7)) == (MR_Integer) 1))
  {
    MR_Word Low0_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Cond0_7, (MR_Integer) 0))));
    MR_Word High0_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Cond0_7, (MR_Integer) 1))));
    MR_Word Low_13;
    MR_Word High_14;

    ml_backend__ml_elim_nested__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_117_112_95_114_118_97_108_95_95_91_49_93_95_49_4_p_1(Info_6, Low0_11, &Low_13);
    ml_backend__ml_elim_nested__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_117_112_95_114_118_97_108_95_95_91_49_93_95_49_4_p_1(Info_6, High0_12, &High_14);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *Cond_8 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Low_13));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (High_14));
    }
  }
  else
  {
    MR_Word Rval0_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Cond0_7, (MR_Integer) 0))));
    MR_Word Rval_10;

    ml_backend__ml_elim_nested__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_117_112_95_114_118_97_108_95_95_91_49_93_95_49_4_p_1(Info_6, Rval0_9, &Rval_10);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *Cond_8 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Rval_10));
    }
  }
}

static void MR_CALL 
ml_backend__ml_elim_nested__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_117_112_95_99_97_115_101_95_99_111_110_100_115_95_95_91_49_93_95_49_4_p_1(
  MR_Word Info_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4)
{
  if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word Cond0_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
    MR_Word Conds0_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
    MR_Word Cond_11;
    MR_Word Conds_12;

    if (((MR_tag((MR_Word) Cond0_9)) == (MR_Integer) 1))
    {
      MR_Word Low0_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Cond0_9, (MR_Integer) 0))));
      MR_Word High0_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Cond0_9, (MR_Integer) 1))));
      MR_Word Low_21;
      MR_Word High_22;

      ml_backend__ml_elim_nested__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_117_112_95_114_118_97_108_95_95_91_49_93_95_49_4_p_1(Info_2, Low0_19, &Low_21);
      ml_backend__ml_elim_nested__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_117_112_95_114_118_97_108_95_95_91_49_93_95_49_4_p_1(Info_2, High0_20, &High_22);
      {
        Cond_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Cond_11, 0) = ((MR_Box) (Low_21));
        MR_hl_field(MR_mktag(1), Cond_11, 1) = ((MR_Box) (High_22));
      }
    }
    else
    {
      MR_Word Rval0_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Cond0_9, (MR_Integer) 0))));
      MR_Word Rval_18;

      ml_backend__ml_elim_nested__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_117_112_95_114_118_97_108_95_95_91_49_93_95_49_4_p_1(Info_2, Rval0_17, &Rval_18);
      {
        Cond_11 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Cond_11, 0) = ((MR_Box) (Rval_18));
      }
    }
    ml_backend__ml_elim_nested__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_117_112_95_99_97_115_101_95_99_111_110_100_115_95_95_91_49_93_95_49_4_p_1(Info_2, Conds0_10, &Conds_12);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__4_4 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Cond_11));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Conds_12));
    }
  }
}

static void MR_CALL 
ml_backend__ml_elim_nested__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_117_112_95_108_118_97_108_95_95_91_49_93_95_49_4_p_1(
  MR_Word Info_6,
  MR_Word Lval0_7,
  MR_Word * Lval_8)
{
  switch (MR_tag((MR_Word) Lval0_7)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word MaybeTag_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Lval0_7, (MR_Integer) 0))));
        MR_Word Rval0_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Lval0_7, (MR_Integer) 1))));
        MR_Word PtrType_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Lval0_7, (MR_Integer) 2))));
        MR_Word FieldId_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Lval0_7, (MR_Integer) 3))));
        MR_Word FieldType_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Lval0_7, (MR_Integer) 4))));
        MR_Word Rval_14;

        ml_backend__ml_elim_nested__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_117_112_95_114_118_97_108_95_95_91_49_93_95_49_4_p_1(Info_6, Rval0_10, &Rval_14);
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          *Lval_8 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (MaybeTag_9));
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Rval_14));
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (PtrType_11));
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (FieldId_12));
          MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (FieldType_13));
        }
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word Type_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Lval0_7, (MR_Integer) 1))));
        MR_Word Rval0_21 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Lval0_7, (MR_Integer) 0))));
        MR_Word Rval_22;

        ml_backend__ml_elim_nested__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_117_112_95_114_118_97_108_95_95_91_49_93_95_49_4_p_1(Info_6, Rval0_21, &Rval_22);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *Lval_8 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Rval_22));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Type_15));
        }
      }
      break;
    case (MR_Integer) 2:
      *Lval_8 = Lval0_7;
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Lval0_7, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word Var0_19 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Lval0_7, (MR_Integer) 1))));
            MR_Word VarType_20 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Lval0_7, (MR_Integer) 2))));

            ml_backend__ml_elim_nested__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_117_112_95_118_97_114_95_95_91_49_93_95_49_5_p_1(Info_6, Var0_19, VarType_20, Lval_8);
          }
          break;
        case (MR_Integer) 1:
          *Lval_8 = Lval0_7;
          break;
      }
      break;
  }
}

static void MR_CALL 
ml_backend__ml_elim_nested__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_117_112_95_114_118_97_108_95_95_91_49_93_95_49_4_p_1(
  MR_Word Info_6,
  MR_Word Rval0_7,
  MR_Word * Rval_8)
{
  switch (MR_tag((MR_Word) Rval0_7)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
    case (MR_Integer) 1:
      *Rval_8 = Rval0_7;
      break;
    case (MR_Integer) 2:
      {
        MR_Word Lval0_9 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Rval0_7, (MR_Integer) 0))));
        MR_Word Lval_10;

        ml_backend__ml_elim_nested__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_117_112_95_108_118_97_108_95_95_91_49_93_95_49_4_p_1(Info_6, Lval0_9, &Lval_10);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *Rval_8 = base;
          MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (Lval_10));
        }
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Rval0_7, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word Tag_11 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval0_7, (MR_Integer) 1))));
            MR_Word BaseRval0_12 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval0_7, (MR_Integer) 2))));
            MR_Word BaseRval_13;

            ml_backend__ml_elim_nested__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_117_112_95_114_118_97_108_95_95_91_49_93_95_49_4_p_1(Info_6, BaseRval0_12, &BaseRval_13);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              *Rval_8 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Tag_11));
              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (BaseRval_13));
            }
          }
          break;
        case (MR_Integer) 1:
        case (MR_Integer) 9:
          *Rval_8 = Rval0_7;
          break;
        case (MR_Integer) 2:
          {
            MR_Word Type_14 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval0_7, (MR_Integer) 1))));
            MR_Word SubRval0_15 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval0_7, (MR_Integer) 2))));
            MR_Word SubRval_16;

            ml_backend__ml_elim_nested__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_117_112_95_114_118_97_108_95_95_91_49_93_95_49_4_p_1(Info_6, SubRval0_15, &SubRval_16);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              *Rval_8 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 2U));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Type_14));
              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (SubRval_16));
            }
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word Type_32 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval0_7, (MR_Integer) 1))));
            MR_Word SubRval0_33 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval0_7, (MR_Integer) 2))));
            MR_Word SubRval_34;

            ml_backend__ml_elim_nested__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_117_112_95_114_118_97_108_95_95_91_49_93_95_49_4_p_1(Info_6, SubRval0_33, &SubRval_34);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              *Rval_8 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 3U));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Type_32));
              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (SubRval_34));
            }
          }
          break;
        case (MR_Integer) 4:
          {
            MR_Word Type_35 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval0_7, (MR_Integer) 1))));
            MR_Word SubRval0_36 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval0_7, (MR_Integer) 2))));
            MR_Word SubRval_37;

            ml_backend__ml_elim_nested__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_117_112_95_114_118_97_108_95_95_91_49_93_95_49_4_p_1(Info_6, SubRval0_36, &SubRval_37);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              *Rval_8 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 4U));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Type_35));
              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (SubRval_37));
            }
          }
          break;
        case (MR_Integer) 5:
          {
            MR_Word UnOp_17 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval0_7, (MR_Integer) 1))));
            MR_Word SubRval0_38 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval0_7, (MR_Integer) 2))));
            MR_Word SubRval_39;

            ml_backend__ml_elim_nested__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_117_112_95_114_118_97_108_95_95_91_49_93_95_49_4_p_1(Info_6, SubRval0_38, &SubRval_39);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              *Rval_8 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 5U));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (UnOp_17));
              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (SubRval_39));
            }
          }
          break;
        case (MR_Integer) 6:
          {
            MR_Word BinOp_18 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval0_7, (MR_Integer) 1))));
            MR_Word SubRvalA0_19 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval0_7, (MR_Integer) 2))));
            MR_Word SubRvalB0_20 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval0_7, (MR_Integer) 3))));
            MR_Word SubRvalA_21;
            MR_Word SubRvalB_22;

            ml_backend__ml_elim_nested__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_117_112_95_114_118_97_108_95_95_91_49_93_95_49_4_p_1(Info_6, SubRvalA0_19, &SubRvalA_21);
            ml_backend__ml_elim_nested__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_117_112_95_114_118_97_108_95_95_91_49_93_95_49_4_p_1(Info_6, SubRvalB0_20, &SubRvalB_22);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              *Rval_8 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 6U));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (BinOp_18));
              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (SubRvalA_21));
              MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (SubRvalB_22));
            }
          }
          break;
        case (MR_Integer) 7:
          {
            MR_Word Lval0_30 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval0_7, (MR_Integer) 1))));
            MR_Word Lval_31;

            ml_backend__ml_elim_nested__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_117_112_95_108_118_97_108_95_95_91_49_93_95_49_4_p_1(Info_6, Lval0_30, &Lval_31);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *Rval_8 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 7U));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Lval_31));
            }
          }
          break;
        case (MR_Integer) 8:
          {
            MR_Word VectorCommon_23 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval0_7, (MR_Integer) 1))));
            MR_Word RowRval0_24 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval0_7, (MR_Integer) 2))));
            MR_Word RowRval_25;

            ml_backend__ml_elim_nested__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_117_112_95_114_118_97_108_95_95_91_49_93_95_49_4_p_1(Info_6, RowRval0_24, &RowRval_25);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              *Rval_8 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 8U));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (VectorCommon_23));
              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (RowRval_25));
            }
          }
          break;
      }
      break;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_elim_nested__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_117_112_95_118_97_114_95_95_91_49_93_95_49_5_p_1_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ml_backend__ml_elim_nested__IntroducedFrom__pred__fixup_var__2134__2_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
    return succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_elim_nested__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_117_112_95_118_97_114_95_95_91_49_93_95_49_5_p_1(
  MR_Word Info_7,
  MR_Word ThisVarName_8,
  MR_Word ThisVarType_9,
  MR_Word * Lval_10)
{
  {
    MR_bool succeeded;
    MR_Word Locals_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 1))));
    MR_Word ClassId_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 2))));
    MR_Word EnvPtrVarType_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 3))));
    MR_Word Target_14 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 5))) & (MR_Integer) 3);
    MR_Word ThisVarDefn_17;
    MR_Word DefnIsThisVar_15;
    MR_Box conv0_ThisVarDefn_17;

    {
      DefnIsThisVar_15 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), DefnIsThisVar_15, 0) = ((MR_Box) (&ml_backend__ml_elim_nested_scalar_common_4[2]));
      MR_hl_field(MR_mktag(0), DefnIsThisVar_15, 1) = ((MR_Box) (ml_backend__ml_elim_nested__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_117_112_95_118_97_114_95_95_91_49_93_95_49_5_p_1_1));
      MR_hl_field(MR_mktag(0), DefnIsThisVar_15, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), DefnIsThisVar_15, 3) = ((MR_Box) (ThisVarName_8));
    }
    succeeded = mercury__cord__find_first_match_3_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_local_var_defn_0), DefnIsThisVar_15, Locals_11, &conv0_ThisVarDefn_17);
    if (succeeded)
    {
      ThisVarDefn_17 = ((MR_Word) (conv0_ThisVarDefn_17));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_Word FieldType_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ThisVarDefn_17, (MR_Integer) 2))));
      MR_Word EnvPtr_19;
      MR_Word EnvModuleName_20;
      MR_Word FieldName_21;
      MR_Word Var_24;
      MR_Word Var_26;
      MR_Word Var_28;
      MR_Word ClassModuleName_77;
      MR_Integer Arity_78;
      MR_Word ClassModule_80;
      MR_Word QualKind_81;
      MR_String ClassName_82;

      {
        Var_24 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_24, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(3), Var_24, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_elim_nested_scalar_common_1[6])));
        MR_hl_field(MR_mktag(3), Var_24, 2) = ((MR_Box) (EnvPtrVarType_13));
      }
      {
        EnvPtr_19 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(2), EnvPtr_19, 0) = ((MR_Box) (Var_24));
      }
      ClassModuleName_77 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ClassId_12, (MR_Integer) 0))));
      Arity_78 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ClassId_12, (MR_Integer) 1))));
      ClassModule_80 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ClassModuleName_77, (MR_Integer) 0))));
      QualKind_81 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), ClassModuleName_77, (MR_Integer) 1))) & (MR_Integer) 1);
      ClassName_82 = ((MR_String) ((MR_hl_field(MR_mktag(0), ClassModuleName_77, (MR_Integer) 2))));
      EnvModuleName_20 = ml_backend__mlds__mlds_append_class_qualifier_5_f_0(Target_14, ClassModule_80, QualKind_81, ClassName_82, Arity_78);
      {
        Var_28 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_28, 0) = ((MR_Box) ((MR_Unsigned) 2U));
        MR_hl_field(MR_mktag(3), Var_28, 1) = ((MR_Box) (ThisVarName_8));
      }
      {
        Var_26 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_26, 0) = ((MR_Box) (EnvModuleName_20));
        MR_hl_field(MR_mktag(0), Var_26, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), Var_26, 2) = ((MR_Box) (Var_28));
      }
      {
        FieldName_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), FieldName_21, 0) = ((MR_Box) (Var_26));
        MR_hl_field(MR_mktag(1), FieldName_21, 1) = ((MR_Box) (EnvPtrVarType_13));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        *Lval_10 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_elim_nested_scalar_common_2[0])));
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (EnvPtr_19));
        MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (EnvPtrVarType_13));
        MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (FieldName_21));
        MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (FieldType_18));
      }
    }
    else
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
        *Lval_10 = base;
        MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ThisVarName_8));
        MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ThisVarType_9));
      }
  }
}

static void MR_CALL 
ml_backend__ml_elim_nested__save_and_restore_stack_chain_4_p_0(
  MR_Word Stmt0_5,
  MR_Word * Stmt_6,
  MR_Word STATE_VARIABLE_ElimInfo_0_21,
  MR_Word * STATE_VARIABLE_ElimInfo_22)
{
  {
    MR_Integer Id_8;
    MR_Word Ref_9;
    MR_Word BodyStmt0_10;
    MR_Word HandlerStmt0_11;
    MR_Word Context_12;
    MR_Word BodyContext_13;
    MR_Word HandlerContext_14;
    MR_Word SavedVarDefn_15;
    MR_Word SaveStmt_16;
    MR_Word RestoreStmt_17;
    MR_Word BodyStmt_18;
    MR_Word HandlerStmt_19;
    MR_Word TryCommit_20;
    MR_Word Var_26;
    MR_Word Var_27;
    MR_Word Var_31;
    MR_Word Var_32;
    MR_Word Var_34;
    MR_Word Var_37;
    MR_Word Counter0_43 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ElimInfo_0_21, (MR_Integer) 4))));
    MR_Word Counter_44;
    MR_Word Name_60;
    MR_Word Var_64;
    MR_Word SavedStackChain_69;
    MR_Word SaveAssignment_70;
    MR_Word RestoreAssignment_71;
    MR_Word Var_78;
    MR_Word Var_51;
    MR_Word Var_52;
    MR_Word Var_53;
    MR_Word Var_54;
    MR_Word Var_56;

    mercury__counter__allocate_3_p_0(&Id_8, Counter0_43, &Counter_44);
    Var_51 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ElimInfo_0_21, (MR_Integer) 0))));
    Var_52 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ElimInfo_0_21, (MR_Integer) 1))));
    Var_53 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ElimInfo_0_21, (MR_Integer) 2))));
    Var_54 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ElimInfo_0_21, (MR_Integer) 3))));
    Var_56 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ElimInfo_0_21, (MR_Integer) 5))) & (MR_Integer) 3);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_ElimInfo_22 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_51));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_52));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_53));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_54));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Counter_44));
      MR_hl_field(MR_mktag(0), base, 5) = (MR_Box) ((MR_Unsigned) (Var_56));
    }
    Ref_9 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Stmt0_5, (MR_Integer) 1))));
    BodyStmt0_10 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Stmt0_5, (MR_Integer) 2))));
    HandlerStmt0_11 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Stmt0_5, (MR_Integer) 3))));
    Context_12 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Stmt0_5, (MR_Integer) 4))));
    BodyContext_13 = ml_backend__ml_util__get_mlds_stmt_context_1_f_0(BodyStmt0_10);
    HandlerContext_14 = ml_backend__ml_util__get_mlds_stmt_context_1_f_0(HandlerStmt0_11);
    {
      Var_64 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_64, 0) = ((MR_Box) ((MR_Unsigned) 8U));
      MR_hl_field(MR_mktag(3), Var_64, 1) = ((MR_Box) (Id_8));
    }
    {
      Name_60 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Name_60, 0) = ((MR_Box) ((MR_Unsigned) 8U));
      MR_hl_field(MR_mktag(3), Name_60, 1) = ((MR_Box) (Var_64));
    }
    {
      SavedVarDefn_15 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), SavedVarDefn_15, 0) = ((MR_Box) (Name_60));
      MR_hl_field(MR_mktag(0), SavedVarDefn_15, 1) = ((MR_Box) (BodyContext_13));
      MR_hl_field(MR_mktag(0), SavedVarDefn_15, 2) = ((MR_Box) ((MR_Unsigned) 24U));
      MR_hl_field(MR_mktag(0), SavedVarDefn_15, 3) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), SavedVarDefn_15, 4) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      SavedStackChain_69 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), SavedStackChain_69, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(3), SavedStackChain_69, 1) = ((MR_Box) (Name_60));
      MR_hl_field(MR_mktag(3), SavedStackChain_69, 2) = ((MR_Box) ((MR_Unsigned) 24U));
    }
    {
      SaveAssignment_70 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), SaveAssignment_70, 0) = ((MR_Box) (SavedStackChain_69));
      MR_hl_field(MR_mktag(2), SaveAssignment_70, 1) = ((MR_Box) (MR_mkword(MR_mktag(2), &ml_backend__ml_elim_nested_scalar_common_2[8])));
    }
    {
      SaveStmt_16 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), SaveStmt_16, 0) = ((MR_Box) ((MR_Unsigned) 8U));
      MR_hl_field(MR_mktag(3), SaveStmt_16, 1) = ((MR_Box) (SaveAssignment_70));
      MR_hl_field(MR_mktag(3), SaveStmt_16, 2) = ((MR_Box) (BodyContext_13));
    }
    {
      Var_78 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), Var_78, 0) = ((MR_Box) (SavedStackChain_69));
    }
    {
      RestoreAssignment_71 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), RestoreAssignment_71, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_elim_nested_scalar_common_3[3])));
      MR_hl_field(MR_mktag(2), RestoreAssignment_71, 1) = ((MR_Box) (Var_78));
    }
    {
      RestoreStmt_17 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), RestoreStmt_17, 0) = ((MR_Box) ((MR_Unsigned) 8U));
      MR_hl_field(MR_mktag(3), RestoreStmt_17, 1) = ((MR_Box) (RestoreAssignment_71));
      MR_hl_field(MR_mktag(3), RestoreStmt_17, 2) = ((MR_Box) (BodyContext_13));
    }
    {
      Var_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_27, 0) = ((MR_Box) (BodyStmt0_10));
      MR_hl_field(MR_mktag(1), Var_27, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_26, 0) = ((MR_Box) (SaveStmt_16));
      MR_hl_field(MR_mktag(1), Var_26, 1) = ((MR_Box) (Var_27));
    }
    {
      BodyStmt_18 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), BodyStmt_18, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), BodyStmt_18, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), BodyStmt_18, 2) = ((MR_Box) (Var_26));
      MR_hl_field(MR_mktag(0), BodyStmt_18, 3) = ((MR_Box) (BodyContext_13));
    }
    {
      Var_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_32, 0) = ((MR_Box) (HandlerStmt0_11));
      MR_hl_field(MR_mktag(1), Var_32, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_31, 0) = ((MR_Box) (RestoreStmt_17));
      MR_hl_field(MR_mktag(1), Var_31, 1) = ((MR_Box) (Var_32));
    }
    {
      HandlerStmt_19 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), HandlerStmt_19, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), HandlerStmt_19, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), HandlerStmt_19, 2) = ((MR_Box) (Var_31));
      MR_hl_field(MR_mktag(0), HandlerStmt_19, 3) = ((MR_Box) (HandlerContext_14));
    }
    {
      TryCommit_20 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), TryCommit_20, 0) = ((MR_Box) ((MR_Unsigned) 6U));
      MR_hl_field(MR_mktag(3), TryCommit_20, 1) = ((MR_Box) (Ref_9));
      MR_hl_field(MR_mktag(3), TryCommit_20, 2) = ((MR_Box) (BodyStmt_18));
      MR_hl_field(MR_mktag(3), TryCommit_20, 3) = ((MR_Box) (HandlerStmt_19));
      MR_hl_field(MR_mktag(3), TryCommit_20, 4) = ((MR_Box) (Context_12));
    }
    {
      Var_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_34, 0) = ((MR_Box) (SavedVarDefn_15));
      MR_hl_field(MR_mktag(1), Var_34, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_37, 0) = ((MR_Box) (TryCommit_20));
      MR_hl_field(MR_mktag(1), Var_37, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      *Stmt_6 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_34));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_37));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Context_12));
    }
  }
}

static void MR_CALL 
ml_backend__ml_elim_nested__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_109_97_121_98_101_95_99_111_112_121_95_97_114_103_115_95_95_91_49_44_32_52_93_95_49_9_p_1(
  MR_Word Info_2,
  MR_Word HeadVar__3_3,
  MR_Word ClassId_5,
  MR_Word EnvPtrTypeName_6,
  MR_Word Context_7,
  MR_Word * HeadVar__8_8,
  MR_Word * HeadVar__9_9)
{
  {
    MR_bool succeeded;

    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *HeadVar__8_8 = (MR_Word) ((MR_Unsigned) 0U);
      *HeadVar__9_9 = (MR_Word) ((MR_Unsigned) 0U);
    }
    else
    {
      MR_Word Arg_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
      MR_Word Args_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word ArgsToCopyTail_26;
      MR_Word CodeToCopyArgsTail_27;
      MR_Word VarName_28;
      MR_Word FieldType_29;
      MR_Word GCStmt_30;

      ml_backend__ml_elim_nested__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_109_97_121_98_101_95_99_111_112_121_95_97_114_103_115_95_95_91_49_44_32_52_93_95_49_9_p_1(Info_2, Args_19, ClassId_5, EnvPtrTypeName_6, Context_7, &ArgsToCopyTail_26, &CodeToCopyArgsTail_27);
      VarName_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Arg_18, (MR_Integer) 0))));
      FieldType_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Arg_18, (MR_Integer) 1))));
      GCStmt_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Arg_18, (MR_Integer) 2))));
      if (((MR_tag((MR_Word) GCStmt_30)) == (MR_Integer) 2))
        succeeded = MR_TRUE;
      else
      if (((MR_tag((MR_Word) GCStmt_30)) == (MR_Integer) 1))
        succeeded = MR_TRUE;
      else
        succeeded = MR_FALSE;
      if (succeeded)
      {
        MR_Word ArgToCopy_31;
        MR_Word Target_32;
        MR_Word EnvModuleName_33;
        MR_Word FieldName_34;
        MR_Word EnvPtr_37;
        MR_Word EnvArgLval_38;
        MR_Word ArgRval_39;
        MR_Word AssignToEnv_40;
        MR_Word CodeToCopyArg_41;
        MR_Word Var_45;
        MR_Word Var_47;
        MR_Word Var_50;
        MR_Word Var_51;
        MR_Word VarName_62 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Arg_18, (MR_Integer) 0))));
        MR_Word Type_63 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Arg_18, (MR_Integer) 1))));
        MR_Word GCStmt_64 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Arg_18, (MR_Integer) 2))));
        MR_Word ClassModuleName_76;
        MR_Integer Arity_77;
        MR_Word ClassModule_79;
        MR_Word QualKind_80;
        MR_String ClassName_81;

        {
          ArgToCopy_31 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ArgToCopy_31, 0) = ((MR_Box) (VarName_62));
          MR_hl_field(MR_mktag(0), ArgToCopy_31, 1) = ((MR_Box) (Context_7));
          MR_hl_field(MR_mktag(0), ArgToCopy_31, 2) = ((MR_Box) (Type_63));
          MR_hl_field(MR_mktag(0), ArgToCopy_31, 3) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(0), ArgToCopy_31, 4) = ((MR_Box) (GCStmt_64));
        }
        Target_32 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_2, (MR_Integer) 5))) & (MR_Integer) 3);
        ClassModuleName_76 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ClassId_5, (MR_Integer) 0))));
        Arity_77 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ClassId_5, (MR_Integer) 1))));
        ClassModule_79 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ClassModuleName_76, (MR_Integer) 0))));
        QualKind_80 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), ClassModuleName_76, (MR_Integer) 1))) & (MR_Integer) 1);
        ClassName_81 = ((MR_String) ((MR_hl_field(MR_mktag(0), ClassModuleName_76, (MR_Integer) 2))));
        EnvModuleName_33 = ml_backend__mlds__mlds_append_class_qualifier_5_f_0(Target_32, ClassModule_79, QualKind_80, ClassName_81, Arity_77);
        {
          Var_47 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_47, 0) = ((MR_Box) ((MR_Unsigned) 2U));
          MR_hl_field(MR_mktag(3), Var_47, 1) = ((MR_Box) (VarName_28));
        }
        {
          Var_45 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_45, 0) = ((MR_Box) (EnvModuleName_33));
          MR_hl_field(MR_mktag(0), Var_45, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), Var_45, 2) = ((MR_Box) (Var_47));
        }
        {
          FieldName_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), FieldName_34, 0) = ((MR_Box) (Var_45));
          MR_hl_field(MR_mktag(1), FieldName_34, 1) = ((MR_Box) (EnvPtrTypeName_6));
        }
        {
          Var_50 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_50, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(3), Var_50, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_elim_nested_scalar_common_1[6])));
          MR_hl_field(MR_mktag(3), Var_50, 2) = ((MR_Box) (EnvPtrTypeName_6));
        }
        {
          EnvPtr_37 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(2), EnvPtr_37, 0) = ((MR_Box) (Var_50));
        }
        {
          EnvArgLval_38 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), EnvArgLval_38, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_elim_nested_scalar_common_2[0])));
          MR_hl_field(MR_mktag(0), EnvArgLval_38, 1) = ((MR_Box) (EnvPtr_37));
          MR_hl_field(MR_mktag(0), EnvArgLval_38, 2) = ((MR_Box) (EnvPtrTypeName_6));
          MR_hl_field(MR_mktag(0), EnvArgLval_38, 3) = ((MR_Box) (FieldName_34));
          MR_hl_field(MR_mktag(0), EnvArgLval_38, 4) = ((MR_Box) (FieldType_29));
        }
        {
          Var_51 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_51, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(3), Var_51, 1) = ((MR_Box) (VarName_28));
          MR_hl_field(MR_mktag(3), Var_51, 2) = ((MR_Box) (FieldType_29));
        }
        {
          ArgRval_39 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(2), ArgRval_39, 0) = ((MR_Box) (Var_51));
        }
        {
          AssignToEnv_40 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(2), AssignToEnv_40, 0) = ((MR_Box) (EnvArgLval_38));
          MR_hl_field(MR_mktag(2), AssignToEnv_40, 1) = ((MR_Box) (ArgRval_39));
        }
        {
          CodeToCopyArg_41 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), CodeToCopyArg_41, 0) = ((MR_Box) ((MR_Unsigned) 8U));
          MR_hl_field(MR_mktag(3), CodeToCopyArg_41, 1) = ((MR_Box) (AssignToEnv_40));
          MR_hl_field(MR_mktag(3), CodeToCopyArg_41, 2) = ((MR_Box) (Context_7));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__8_8 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ArgToCopy_31));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ArgsToCopyTail_26));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__9_9 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (CodeToCopyArg_41));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (CodeToCopyArgsTail_27));
        }
      }
      else
      {
        *HeadVar__8_8 = ArgsToCopyTail_26;
        *HeadVar__9_9 = CodeToCopyArgsTail_27;
      }
    }
  }
}

static void MR_CALL 
ml_backend__ml_elim_nested__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_109_97_121_98_101_95_97_100_100_95_97_114_103_115_95_95_91_49_44_32_51_44_32_52_93_95_49_7_p_1(
  MR_Word HeadVar__2_2,
  MR_Word Context_5,
  MR_Word STATE_VARIABLE_Info_0_6,
  MR_Word * STATE_VARIABLE_Info_7)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_Info_7 = STATE_VARIABLE_Info_0_6;
    else
    {
      MR_Word Arg_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word Args_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word GCStmt_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Arg_16, (MR_Integer) 2))));
      MR_Word STATE_VARIABLE_Info_31_31;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_STATE_VARIABLE_Info_0_6;

      if (((MR_tag((MR_Word) GCStmt_24)) == (MR_Integer) 2))
        succeeded = MR_TRUE;
      else
      if (((MR_tag((MR_Word) GCStmt_24)) == (MR_Integer) 1))
        succeeded = MR_TRUE;
      else
        succeeded = MR_FALSE;
      if (succeeded)
      {
        MR_Word ArgToCopy_25;
        MR_Word VarName_43 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Arg_16, (MR_Integer) 0))));
        MR_Word Type_44 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Arg_16, (MR_Integer) 1))));
        MR_Word GCStmt_45 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Arg_16, (MR_Integer) 2))));
        MR_Word LocalVars0_51;
        MR_Word LocalVars_52;
        MR_Word Var_59;
        MR_Word Var_61;
        MR_Word Var_62;
        MR_Word Var_63;
        MR_Word Var_64;

        {
          ArgToCopy_25 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ArgToCopy_25, 0) = ((MR_Box) (VarName_43));
          MR_hl_field(MR_mktag(0), ArgToCopy_25, 1) = ((MR_Box) (Context_5));
          MR_hl_field(MR_mktag(0), ArgToCopy_25, 2) = ((MR_Box) (Type_44));
          MR_hl_field(MR_mktag(0), ArgToCopy_25, 3) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(0), ArgToCopy_25, 4) = ((MR_Box) (GCStmt_45));
        }
        LocalVars0_51 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 1))));
        LocalVars_52 = mercury__cord__snoc_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_local_var_defn_0), LocalVars0_51, ((MR_Box) (ArgToCopy_25)));
        Var_59 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 0))));
        Var_61 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 2))));
        Var_62 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 3))));
        Var_63 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 4))));
        Var_64 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 5))) & (MR_Integer) 3);
        {
          STATE_VARIABLE_Info_31_31 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_31_31, 0) = ((MR_Box) (Var_59));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_31_31, 1) = ((MR_Box) (LocalVars_52));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_31_31, 2) = ((MR_Box) (Var_61));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_31_31, 3) = ((MR_Box) (Var_62));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_31_31, 4) = ((MR_Box) (Var_63));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_31_31, 5) = (MR_Box) ((MR_Unsigned) (Var_64));
        }
      }
      else
        STATE_VARIABLE_Info_31_31 = STATE_VARIABLE_Info_0_6;
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = Args_17;
      next_value_of_STATE_VARIABLE_Info_0_6 = STATE_VARIABLE_Info_31_31;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      STATE_VARIABLE_Info_0_6 = next_value_of_STATE_VARIABLE_Info_0_6;
      continue;
    }
    break;
  }
}

static MR_Word MR_CALL 
ml_backend__ml_elim_nested__ml_gen_unchain_frame_2_f_0(
  MR_Word Context_4,
  MR_Word ElimInfo_5)
{
  {
    MR_Word UnchainFrame_6;
    MR_Word EnvPtrTypeName_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ElimInfo_5, (MR_Integer) 3))));
    MR_Word PrevFieldRval_12;
    MR_Word Assignment_13;
    MR_Word Var_19;

    {
      Var_19 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_19, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_elim_nested_scalar_common_2[0])));
      MR_hl_field(MR_mktag(0), Var_19, 1) = ((MR_Box) (MR_mkword(MR_mktag(2), &ml_backend__ml_elim_nested_scalar_common_2[8])));
      MR_hl_field(MR_mktag(0), Var_19, 2) = ((MR_Box) (EnvPtrTypeName_7));
      MR_hl_field(MR_mktag(0), Var_19, 3) = ((MR_Box) (&ml_backend__ml_elim_nested_scalar_common_2[7]));
      MR_hl_field(MR_mktag(0), Var_19, 4) = ((MR_Box) ((MR_Unsigned) 20U));
    }
    {
      PrevFieldRval_12 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), PrevFieldRval_12, 0) = ((MR_Box) (Var_19));
    }
    {
      Assignment_13 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), Assignment_13, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_elim_nested_scalar_common_3[3])));
      MR_hl_field(MR_mktag(2), Assignment_13, 1) = ((MR_Box) (PrevFieldRval_12));
    }
    {
      UnchainFrame_6 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), UnchainFrame_6, 0) = ((MR_Box) ((MR_Unsigned) 8U));
      MR_hl_field(MR_mktag(3), UnchainFrame_6, 1) = ((MR_Box) (Assignment_13));
      MR_hl_field(MR_mktag(3), UnchainFrame_6, 2) = ((MR_Box) (Context_4));
    }
    return UnchainFrame_6;
  }
}

static void MR_CALL 
ml_backend__ml_elim_nested__fixup_gc_statements_3_p_1_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_Defn_8;
    MR_Word conv0_STATE_VARIABLE_Info_17;

    ml_backend__ml_elim_nested__fixup_gc_statements_defn_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv1_Defn_8, ((MR_Word) (wrapper_arg_3)), &conv0_STATE_VARIABLE_Info_17);
    *wrapper_arg_2 = ((MR_Box) (conv1_Defn_8));
    *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_Info_17));
  }
}

static void MR_CALL 
ml_backend__ml_elim_nested__fixup_gc_statements_3_p_1(
  MR_Word Action_4,
  MR_Word STATE_VARIABLE_Info_0_8,
  MR_Word * STATE_VARIABLE_Info_9)
{
  {
    MR_Word LocalsCord0_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_8, (MR_Integer) 1))));
    MR_Word LocalsCord_7;
    MR_Word Var_10;
    MR_Word STATE_VARIABLE_Info_11_11;
    MR_Box conv2_STATE_VARIABLE_Info_11_11;
    MR_Word Var_31;
    MR_Word Var_33;
    MR_Word Var_34;
    MR_Word Var_35;
    MR_Word Var_36;

    {
      Var_10 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_10, 0) = ((MR_Box) (&ml_backend__ml_elim_nested_scalar_common_6[0]));
      MR_hl_field(MR_mktag(0), Var_10, 1) = ((MR_Box) (ml_backend__ml_elim_nested__fixup_gc_statements_3_p_1_1));
      MR_hl_field(MR_mktag(0), Var_10, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_10, 3) = ((MR_Box) (Action_4));
    }
    mercury__cord__map_foldl_5_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_local_var_defn_0), (MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_local_var_defn_0), (MR_Word) (&ml_backend__ml_elim_nested__ml_backend__ml_elim_nested__type_ctor_info_elim_info_0), Var_10, LocalsCord0_6, &LocalsCord_7, ((MR_Box) (STATE_VARIABLE_Info_0_8)), &conv2_STATE_VARIABLE_Info_11_11);
    STATE_VARIABLE_Info_11_11 = ((MR_Word) (conv2_STATE_VARIABLE_Info_11_11));
    Var_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_11_11, (MR_Integer) 0))));
    Var_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_11_11, (MR_Integer) 2))));
    Var_34 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_11_11, (MR_Integer) 3))));
    Var_35 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_11_11, (MR_Integer) 4))));
    Var_36 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_11_11, (MR_Integer) 5))) & (MR_Integer) 3);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_Info_9 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_31));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (LocalsCord_7));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_33));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_34));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_35));
      MR_hl_field(MR_mktag(0), base, 5) = (MR_Box) ((MR_Unsigned) (Var_36));
    }
  }
}

void MR_CALL 
ml_backend__ml_elim_nested__ml_elim_nested_5_p_0(
  MR_Word Action_6,
  MR_Word Globals_7,
  MR_Word Target_8,
  MR_Word MLDS0_9,
  MR_Word * MLDS_10)
{
  {
    MR_Word ModuleName_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MLDS0_9, (MR_Integer) 0))));
    MR_Word Imports_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MLDS0_9, (MR_Integer) 1))));
    MR_Word GlobalData0_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MLDS0_9, (MR_Integer) 2))));
    MR_Word TypeDefns0_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MLDS0_9, (MR_Integer) 3))));
    MR_Word TableStructDefns_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MLDS0_9, (MR_Integer) 4))));
    MR_Word ProcDefns0_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MLDS0_9, (MR_Integer) 5))));
    MR_Word InitPreds_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MLDS0_9, (MR_Integer) 6))));
    MR_Word FinalPreds_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MLDS0_9, (MR_Integer) 7))));
    MR_Word ForeignCode_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MLDS0_9, (MR_Integer) 8))));
    MR_Word ExportedEnums_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MLDS0_9, (MR_Integer) 9))));
    MR_Word MLDS_ModuleName_21;
    MR_Word WrapperFuncsCord_22;
    MR_Word ProcDefns1_23;
    MR_Word ProcDefnsCord_24;
    MR_Word EnvTypeDefnsCord_25;
    MR_Word ProcDefns_26;
    MR_Word GlobalData_27;
    MR_Word EnvTypeDefns_28;
    MR_Word TypeDefns_29;
    MR_Word Var_30;
    MR_Word Var_31;
    MR_Word Var_32;
    MR_Word Var_33;

    MLDS_ModuleName_21 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ModuleName_11);
    ml_backend__ml_global_data__ml_global_data_get_closure_wrapper_func_defns_2_p_0(GlobalData0_13, &WrapperFuncsCord_22);
    Var_30 = mercury__cord__to_list_1_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_function_defn_0), WrapperFuncsCord_22);
    ProcDefns1_23 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_function_defn_0), ProcDefns0_16, Var_30);
    Var_31 = mercury__cord__init_0_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_function_defn_0));
    Var_32 = mercury__cord__init_0_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_class_defn_0));
    ml_backend__ml_elim_nested__ml_elim_nested_defns_in_funcs_9_p_0(Action_6, MLDS_ModuleName_21, Globals_7, Target_8, ProcDefns1_23, Var_31, &ProcDefnsCord_24, Var_32, &EnvTypeDefnsCord_25);
    ProcDefns_26 = mercury__cord__to_list_1_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_function_defn_0), ProcDefnsCord_24);
    Var_33 = mercury__cord__init_0_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_function_defn_0));
    ml_backend__ml_global_data__ml_global_data_set_closure_wrapper_func_defns_3_p_0(Var_33, GlobalData0_13, &GlobalData_27);
    EnvTypeDefns_28 = mercury__cord__to_list_1_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_class_defn_0), EnvTypeDefnsCord_25);
    TypeDefns_29 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_class_defn_0), TypeDefns0_14, EnvTypeDefns_28);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (10 * sizeof(MR_Word)), NULL, NULL);
      *MLDS_10 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ModuleName_11));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Imports_12));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (GlobalData_27));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (TypeDefns_29));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (TableStructDefns_15));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (ProcDefns_26));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (InitPreds_17));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (FinalPreds_18));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (ForeignCode_19));
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (ExportedEnums_20));
    }
  }
}

static void MR_CALL 
ml_backend__ml_elim_nested__ml_elim_nested_defns_in_funcs_9_p_0(
  MR_Word Action_1,
  MR_Word ModuleName_2,
  MR_Word Globals_3,
  MR_Word Target_4,
  MR_Word HeadVar__5_5,
  MR_Word STATE_VARIABLE_FuncDefnsCord_0_6,
  MR_Word * STATE_VARIABLE_FuncDefnsCord_7,
  MR_Word STATE_VARIABLE_ClassDefnsCord_0_8,
  MR_Word * STATE_VARIABLE_ClassDefnsCord_9)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__5_5 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_ClassDefnsCord_9 = STATE_VARIABLE_ClassDefnsCord_0_8;
      *STATE_VARIABLE_FuncDefnsCord_7 = STATE_VARIABLE_FuncDefnsCord_0_6;
    }
    else
    {
      MR_Word FuncDefn_24 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__5_5, (MR_Integer) 0))));
      MR_Word FuncDefns_25 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__5_5, (MR_Integer) 1))));
      MR_Word Name_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FuncDefn_24, (MR_Integer) 0))));
      MR_Word STATE_VARIABLE_FuncDefnsCord_54_54;
      MR_Word STATE_VARIABLE_ClassDefnsCord_56_56;
      MR_Word PlainFuncName_36;
      MR_Word FuncLabel_37;
      MR_Word ProcLabel_39;
      MR_Word PredLabel_41;
      MR_Word PrivateBuiltin_47;
      MR_String Var_52;
      MR_Integer Var_53;
      MR_Word Var_60;
      MR_Word next_value_of_HeadVar__5_5;
      MR_Word next_value_of_STATE_VARIABLE_FuncDefnsCord_0_6;
      MR_Word next_value_of_STATE_VARIABLE_ClassDefnsCord_0_8;

      succeeded = ((MR_tag((MR_Word) Name_28)) == (MR_Integer) 0);
      if (succeeded)
      {
        PlainFuncName_36 = (MR_Word) ((MR_Word) (Name_28));
        FuncLabel_37 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PlainFuncName_36, (MR_Integer) 0))));
        ProcLabel_39 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FuncLabel_37, (MR_Integer) 0))));
        PredLabel_41 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ProcLabel_39, (MR_Integer) 0))));
        succeeded = ((MR_tag((MR_Word) PredLabel_41)) == (MR_Integer) 0);
        if (succeeded)
        {
          Var_52 = ((MR_String) ((MR_hl_field(MR_mktag(0), PredLabel_41, (MR_Integer) 2))));
          Var_53 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), PredLabel_41, (MR_Integer) 3))));
          succeeded = (strcmp(Var_52, (MR_String) "gc_trace") == 0);
          if (succeeded)
          {
            succeeded = (Var_53 == (MR_Integer) 1);
            if (succeeded)
            {
              PrivateBuiltin_47 = mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0();
              Var_60 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(PrivateBuiltin_47);
              succeeded = ml_backend__mlds____Unify____mlds_module_name_0_0(ModuleName_2, Var_60);
            }
          }
        }
      }
      if (succeeded)
      {
        STATE_VARIABLE_FuncDefnsCord_54_54 = mercury__cord__snoc_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_function_defn_0), STATE_VARIABLE_FuncDefnsCord_0_6, ((MR_Box) (FuncDefn_24)));
        STATE_VARIABLE_ClassDefnsCord_56_56 = STATE_VARIABLE_ClassDefnsCord_0_8;
      }
      else
        ml_backend__ml_elim_nested__ml_elim_nested_defns_in_func_9_p_0(Action_1, ModuleName_2, Globals_3, Target_4, FuncDefn_24, STATE_VARIABLE_FuncDefnsCord_0_6, &STATE_VARIABLE_FuncDefnsCord_54_54, STATE_VARIABLE_ClassDefnsCord_0_8, &STATE_VARIABLE_ClassDefnsCord_56_56);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__5_5 = FuncDefns_25;
      next_value_of_STATE_VARIABLE_FuncDefnsCord_0_6 = STATE_VARIABLE_FuncDefnsCord_54_54;
      next_value_of_STATE_VARIABLE_ClassDefnsCord_0_8 = STATE_VARIABLE_ClassDefnsCord_56_56;
      HeadVar__5_5 = next_value_of_HeadVar__5_5;
      STATE_VARIABLE_FuncDefnsCord_0_6 = next_value_of_STATE_VARIABLE_FuncDefnsCord_0_6;
      STATE_VARIABLE_ClassDefnsCord_0_8 = next_value_of_STATE_VARIABLE_ClassDefnsCord_0_8;
      continue;
    }
    break;
  }
}

static void MR_CALL 
ml_backend__ml_elim_nested__ml_elim_nested_defns_in_func_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_FunctionDefn_10;
    MR_Word conv0_STATE_VARIABLE_InsertedEnv_29;

    ml_backend__ml_elim_nested__ml_insert_init_env_6_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), &conv1_FunctionDefn_10, ((MR_Word) (wrapper_arg_3)), &conv0_STATE_VARIABLE_InsertedEnv_29);
    *wrapper_arg_2 = ((MR_Box) (conv1_FunctionDefn_10));
    *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_InsertedEnv_29));
  }
}

static void MR_CALL 
ml_backend__ml_elim_nested__ml_elim_nested_defns_in_func_9_p_0(
  MR_Word Action_10,
  MR_Word ModuleName_11,
  MR_Word Globals_12,
  MR_Word Target_13,
  MR_Word FuncDefn0_14,
  MR_Word STATE_VARIABLE_FuncDefnsCord_0_55,
  MR_Word * STATE_VARIABLE_FuncDefnsCord_56,
  MR_Word STATE_VARIABLE_ClassDefnsCord_0_57,
  MR_Word * STATE_VARIABLE_ClassDefnsCord_58)
{
  {
    MR_bool succeeded;
    MR_Word Name_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FuncDefn0_14, (MR_Integer) 0))));
    MR_Word Context_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FuncDefn0_14, (MR_Integer) 1))));
    MR_Word Flags_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FuncDefn0_14, (MR_Integer) 2))));
    MR_Word PredProcId_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FuncDefn0_14, (MR_Integer) 3))));
    MR_Word Params0_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FuncDefn0_14, (MR_Integer) 4))));
    MR_Word Body0_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FuncDefn0_14, (MR_Integer) 5))));
    MR_Word EnvVarNames_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FuncDefn0_14, (MR_Integer) 6))));
    MR_Word MaybeRequiretailrecInfo_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FuncDefn0_14, (MR_Integer) 7))));

    if ((Body0_22 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_FuncDefnsCord_56 = mercury__cord__snoc_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_function_defn_0), STATE_VARIABLE_FuncDefnsCord_0_55, ((MR_Box) (FuncDefn0_14)));
      *STATE_VARIABLE_ClassDefnsCord_58 = STATE_VARIABLE_ClassDefnsCord_0_57;
    }
    else
    {
      MR_Word FuncBody0_25 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Body0_22, (MR_Integer) 0))));
      MR_String EnvName_26;
      MR_Word EnvClassId_27;
      MR_Word ElimInfo0_28;
      MR_Word ElimInfo1_31;
      MR_Word FuncBody1_32;
      MR_Word ElimInfo2_33;
      MR_Word ElimInfo_34;
      MR_Word NestedFuncs0_35;
      MR_Word Locals_36;
      MR_Word FuncBody_37;
      MR_Word Arguments_52;
      MR_Word FuncDefn_54;
      MR_Word STATE_VARIABLE_FuncDefnsCord_61_61;
      MR_Word Var_75;

      EnvName_26 = ml_backend__ml_elim_nested__ml_env_name_2_f_0(Name_17, Action_10);
      EnvClassId_27 = ml_backend__ml_elim_nested__ml_create_env_class_id_3_f_0(EnvName_26, ModuleName_11, Globals_12);
      ElimInfo0_28 = ml_backend__ml_elim_nested__elim_info_init_2_f_0(EnvClassId_27, Target_13);
      Arguments_52 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Params0_21, (MR_Integer) 0))));
      ml_backend__ml_elim_nested__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_109_97_121_98_101_95_97_100_100_95_97_114_103_115_95_95_91_49_44_32_52_93_95_48_7_p_0(Arguments_52, FuncBody0_25, Context_18, ElimInfo0_28, &ElimInfo1_31);
      ml_backend__ml_elim_nested__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_108_97_116_116_101_110_95_115_116_97_116_101_109_101_110_116_95_95_91_49_93_95_48_5_p_0(FuncBody0_25, &FuncBody1_32, ElimInfo1_31, &ElimInfo2_33);
      ml_backend__ml_elim_nested__fixup_gc_statements_3_p_0(Action_10, ElimInfo2_33, &ElimInfo_34);
      ml_backend__ml_elim_nested__elim_info_finish_3_p_0(ElimInfo_34, &NestedFuncs0_35, &Locals_36);
      if ((NestedFuncs0_35 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        FuncBody_37 = FuncBody1_32;
        STATE_VARIABLE_FuncDefnsCord_61_61 = STATE_VARIABLE_FuncDefnsCord_0_55;
        *STATE_VARIABLE_ClassDefnsCord_58 = STATE_VARIABLE_ClassDefnsCord_0_57;
      }
      else
      {
        MR_Word EnvTypeDefn_40;
        MR_Word EnvDefns_41;
        MR_Word InitEnv_42;
        MR_Word GCTraceFuncDefns_43;
        MR_Word NestedFuncs_44;
        MR_Word InsertedEnv_45;
        MR_Word Var_59;
        MR_Word Var_62;
        MR_Word Var_63;
        MR_Word Var_64;
        MR_Box conv2_InsertedEnv_45;

        ml_backend__ml_elim_nested__ml_create_env_12_p_0(Action_10, EnvName_26, EnvClassId_27, Locals_36, Context_18, ModuleName_11, Name_17, Globals_12, &EnvTypeDefn_40, &EnvDefns_41, &InitEnv_42, &GCTraceFuncDefns_43);
        {
          Var_59 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_59, 0) = ((MR_Box) (&ml_backend__ml_elim_nested_scalar_common_7[0]));
          MR_hl_field(MR_mktag(0), Var_59, 1) = ((MR_Box) (ml_backend__ml_elim_nested__ml_elim_nested_defns_in_func_9_p_0_1));
          MR_hl_field(MR_mktag(0), Var_59, 2) = ((MR_Box) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(0), Var_59, 3) = ((MR_Box) (Action_10));
          MR_hl_field(MR_mktag(0), Var_59, 4) = ((MR_Box) (EnvClassId_27));
        }
        mercury__list__map_foldl_5_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_function_defn_0), (MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_function_defn_0), (MR_Word) (&ml_backend__ml_elim_nested__ml_backend__ml_elim_nested__type_ctor_info_inserted_env_0), Var_59, NestedFuncs0_35, &NestedFuncs_44, ((MR_Box) ((MR_Integer) 0)), &conv2_InsertedEnv_45);
        InsertedEnv_45 = ((MR_Word) (conv2_InsertedEnv_45));
        Var_63 = mercury__cord__from_list_1_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_function_defn_0), GCTraceFuncDefns_43);
        Var_64 = mercury__cord__from_list_1_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_function_defn_0), NestedFuncs_44);
        Var_62 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_function_defn_0), Var_63, Var_64);
        STATE_VARIABLE_FuncDefnsCord_61_61 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_function_defn_0), STATE_VARIABLE_FuncDefnsCord_0_55, Var_62);
        succeeded = (InsertedEnv_45 == (MR_Integer) 0);
        if (succeeded)
        {
          FuncBody_37 = FuncBody1_32;
          *STATE_VARIABLE_ClassDefnsCord_58 = STATE_VARIABLE_ClassDefnsCord_0_57;
        }
        else
        {
          MR_Word EnvPtrTypeName_46;
          MR_Word CodeToCopyArgs_48;
          MR_Word Var_69;
          MR_Word Var_70;
          MR_Word Var_71;
          MR_Word Var_72;
          MR_Word _ArgsToCopy_47;

          *STATE_VARIABLE_ClassDefnsCord_58 = mercury__cord__snoc_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_class_defn_0), STATE_VARIABLE_ClassDefnsCord_0_57, ((MR_Box) (EnvTypeDefn_40)));
          EnvPtrTypeName_46 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ElimInfo_34, (MR_Integer) 3))));
          ml_backend__ml_elim_nested__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_109_97_121_98_101_95_99_111_112_121_95_97_114_103_115_95_95_91_49_93_95_48_9_p_0(ElimInfo_34, Arguments_52, FuncBody0_25, EnvClassId_27, EnvPtrTypeName_46, Context_18, &_ArgsToCopy_47, &CodeToCopyArgs_48);
          {
            Var_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_72, 0) = ((MR_Box) (FuncBody1_32));
            MR_hl_field(MR_mktag(1), Var_72, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          Var_71 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0), Var_72, (MR_Word) ((MR_Unsigned) 0U));
          Var_70 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0), CodeToCopyArgs_48, Var_71);
          Var_69 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0), InitEnv_42, Var_70);
          FuncBody_37 = ml_backend__ml_code_util__ml_gen_block_4_f_0(EnvDefns_41, (MR_Word) ((MR_Unsigned) 0U), Var_69, Context_18);
        }
      }
      {
        Var_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_75, 0) = ((MR_Box) (FuncBody_37));
      }
      {
        FuncDefn_54 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), FuncDefn_54, 0) = ((MR_Box) (Name_17));
        MR_hl_field(MR_mktag(0), FuncDefn_54, 1) = ((MR_Box) (Context_18));
        MR_hl_field(MR_mktag(0), FuncDefn_54, 2) = ((MR_Box) (Flags_19));
        MR_hl_field(MR_mktag(0), FuncDefn_54, 3) = ((MR_Box) (PredProcId_20));
        MR_hl_field(MR_mktag(0), FuncDefn_54, 4) = ((MR_Box) (Params0_21));
        MR_hl_field(MR_mktag(0), FuncDefn_54, 5) = ((MR_Box) (Var_75));
        MR_hl_field(MR_mktag(0), FuncDefn_54, 6) = ((MR_Box) (EnvVarNames_23));
        MR_hl_field(MR_mktag(0), FuncDefn_54, 7) = ((MR_Box) (MaybeRequiretailrecInfo_24));
      }
      *STATE_VARIABLE_FuncDefnsCord_56 = mercury__cord__snoc_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_function_defn_0), STATE_VARIABLE_FuncDefnsCord_61_61, ((MR_Box) (FuncDefn_54)));
    }
  }
}

static void MR_CALL 
ml_backend__ml_elim_nested__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_108_97_116_116_101_110_95_110_101_115_116_101_100_95_102_117_110_99_116_105_111_110_95_100_101_102_110_115_95_95_91_49_93_95_48_5_p_0(
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word STATE_VARIABLE_Info_0_4,
  MR_Word * STATE_VARIABLE_Info_5)
{
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_Info_5 = STATE_VARIABLE_Info_0_4;
  }
  else
  {
    MR_Word HeadFuncDefn0_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
    MR_Word TailFuncDefns0_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
    MR_Word TailFuncDefns_16;
    MR_Word STATE_VARIABLE_Info_19_19;
    MR_Word Name_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadFuncDefn0_11, (MR_Integer) 0))));
    MR_Word Context_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadFuncDefn0_11, (MR_Integer) 1))));
    MR_Word PredProcId_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadFuncDefn0_11, (MR_Integer) 3))));
    MR_Word Params_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadFuncDefn0_11, (MR_Integer) 4))));
    MR_Word FuncBody0_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadFuncDefn0_11, (MR_Integer) 5))));
    MR_Word EnvVarNames_34 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadFuncDefn0_11, (MR_Integer) 6))));
    MR_Word MaybeRequiretailrecInfo_35 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadFuncDefn0_11, (MR_Integer) 7))));
    MR_Word FuncBody_36;
    MR_Word FuncDefn_38;
    MR_Word STATE_VARIABLE_Info_23_39;

    ml_backend__ml_elim_nested__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_108_97_116_116_101_110_95_102_117_110_99_116_105_111_110_95_98_111_100_121_95_95_91_49_93_95_48_5_p_0(FuncBody0_33, &FuncBody_36, STATE_VARIABLE_Info_0_4, &STATE_VARIABLE_Info_23_39);
    {
      FuncDefn_38 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), FuncDefn_38, 0) = ((MR_Box) (Name_28));
      MR_hl_field(MR_mktag(0), FuncDefn_38, 1) = ((MR_Box) (Context_29));
      MR_hl_field(MR_mktag(0), FuncDefn_38, 2) = ((MR_Box) (&ml_backend__ml_elim_nested_scalar_common_2[3]));
      MR_hl_field(MR_mktag(0), FuncDefn_38, 3) = ((MR_Box) (PredProcId_31));
      MR_hl_field(MR_mktag(0), FuncDefn_38, 4) = ((MR_Box) (Params_32));
      MR_hl_field(MR_mktag(0), FuncDefn_38, 5) = ((MR_Box) (FuncBody_36));
      MR_hl_field(MR_mktag(0), FuncDefn_38, 6) = ((MR_Box) (EnvVarNames_34));
      MR_hl_field(MR_mktag(0), FuncDefn_38, 7) = ((MR_Box) (MaybeRequiretailrecInfo_35));
    }
    ml_backend__ml_elim_nested__elim_info_add_nested_func_3_p_0(FuncDefn_38, STATE_VARIABLE_Info_23_39, &STATE_VARIABLE_Info_19_19);
    ml_backend__ml_elim_nested__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_108_97_116_116_101_110_95_110_101_115_116_101_100_95_102_117_110_99_116_105_111_110_95_100_101_102_110_115_95_95_91_49_93_95_48_5_p_0(TailFuncDefns0_12, &TailFuncDefns_16, STATE_VARIABLE_Info_19_19, STATE_VARIABLE_Info_5);
    *HeadVar__3_3 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_function_defn_0), (MR_Word) ((MR_Unsigned) 0U), TailFuncDefns_16);
  }
}

static void MR_CALL 
ml_backend__ml_elim_nested__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_108_97_116_116_101_110_95_100_101_102_97_117_108_116_95_95_91_49_93_95_48_5_p_0(
  MR_Word Default0_7,
  MR_Word * Default_8,
  MR_Word STATE_VARIABLE_Info_0_12,
  MR_Word * STATE_VARIABLE_Info_13)
{
  switch (MR_tag((MR_Word) Default0_7)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (MR_unmkbody(Default0_7)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            *Default_8 = (MR_Word) ((MR_Unsigned) 0U);
            *STATE_VARIABLE_Info_13 = STATE_VARIABLE_Info_0_12;
          }
          break;
        case (MR_Integer) 1:
          {
            *Default_8 = (MR_Word) ((MR_Unsigned) 4U);
            *STATE_VARIABLE_Info_13 = STATE_VARIABLE_Info_0_12;
          }
          break;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word Stmt0_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Default0_7, (MR_Integer) 0))));
        MR_Word Stmt_11;

        ml_backend__ml_elim_nested__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_108_97_116_116_101_110_95_115_116_97_116_101_109_101_110_116_95_95_91_49_93_95_48_5_p_0(Stmt0_10, &Stmt_11, STATE_VARIABLE_Info_0_12, STATE_VARIABLE_Info_13);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *Default_8 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Stmt_11));
        }
      }
      break;
  }
}

static void MR_CALL 
ml_backend__ml_elim_nested__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_108_97_116_116_101_110_95_99_97_115_101_115_95_95_91_49_93_95_48_5_p_0(
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word STATE_VARIABLE_Info_0_4,
  MR_Word * STATE_VARIABLE_Info_5)
{
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_Info_5 = STATE_VARIABLE_Info_0_4;
  }
  else
  {
    MR_Word Case0_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
    MR_Word Cases0_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
    MR_Word Case_13;
    MR_Word Cases_14;
    MR_Word STATE_VARIABLE_Info_18_18;
    MR_Word FirstCond0_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Case0_11, (MR_Integer) 0))));
    MR_Word LaterConds0_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Case0_11, (MR_Integer) 1))));
    MR_Word Stmt0_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Case0_11, (MR_Integer) 2))));
    MR_Word FirstCond_29;
    MR_Word LaterConds_30;
    MR_Word Stmt_31;

    ml_backend__ml_elim_nested__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_117_112_95_99_97_115_101_95_99_111_110_100_95_95_91_49_93_95_48_4_p_0(STATE_VARIABLE_Info_0_4, FirstCond0_26, &FirstCond_29);
    ml_backend__ml_elim_nested__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_117_112_95_99_97_115_101_95_99_111_110_100_115_95_95_91_49_93_95_48_4_p_0(STATE_VARIABLE_Info_0_4, LaterConds0_27, &LaterConds_30);
    ml_backend__ml_elim_nested__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_108_97_116_116_101_110_95_115_116_97_116_101_109_101_110_116_95_95_91_49_93_95_48_5_p_0(Stmt0_28, &Stmt_31, STATE_VARIABLE_Info_0_4, &STATE_VARIABLE_Info_18_18);
    {
      Case_13 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Case_13, 0) = ((MR_Box) (FirstCond_29));
      MR_hl_field(MR_mktag(0), Case_13, 1) = ((MR_Box) (LaterConds_30));
      MR_hl_field(MR_mktag(0), Case_13, 2) = ((MR_Box) (Stmt_31));
    }
    ml_backend__ml_elim_nested__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_108_97_116_116_101_110_95_99_97_115_101_115_95_95_91_49_93_95_48_5_p_0(Cases0_12, &Cases_14, STATE_VARIABLE_Info_18_18, STATE_VARIABLE_Info_5);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__3_3 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Case_13));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Cases_14));
    }
  }
}

static void MR_CALL 
ml_backend__ml_elim_nested__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_108_97_116_116_101_110_95_115_116_97_116_101_109_101_110_116_95_95_91_49_93_95_48_5_p_0(
  MR_Word Stmt0_7,
  MR_Word * Stmt_8,
  MR_Word STATE_VARIABLE_Info_0_62,
  MR_Word * STATE_VARIABLE_Info_63)
{
  switch (MR_tag((MR_Word) Stmt0_7)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word LocalVarDefns0_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Stmt0_7, (MR_Integer) 0))));
        MR_Word FuncDefns0_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Stmt0_7, (MR_Integer) 1))));
        MR_Word SubStmts0_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Stmt0_7, (MR_Integer) 2))));
        MR_Word Context_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Stmt0_7, (MR_Integer) 3))));
        MR_Word LocalVarDefns_14;
        MR_Word InitStmts_15;
        MR_Word FuncDefns_16;
        MR_Word SubStmts_17;
        MR_Word STATE_VARIABLE_Info_72_72;
        MR_Word STATE_VARIABLE_Info_73_73;
        MR_Word Var_74;

        ml_backend__ml_elim_nested__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_108_97_116_116_101_110_95_110_101_115_116_101_100_95_108_111_99_97_108_95_118_97_114_95_100_101_102_110_115_95_95_91_49_93_95_48_8_p_0(LocalVarDefns0_10, &LocalVarDefns_14, FuncDefns0_11, SubStmts0_12, &InitStmts_15, STATE_VARIABLE_Info_0_62, &STATE_VARIABLE_Info_72_72);
        ml_backend__ml_elim_nested__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_108_97_116_116_101_110_95_110_101_115_116_101_100_95_102_117_110_99_116_105_111_110_95_100_101_102_110_115_95_95_91_49_93_95_48_5_p_0(FuncDefns0_11, &FuncDefns_16, STATE_VARIABLE_Info_72_72, &STATE_VARIABLE_Info_73_73);
        Var_74 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0), InitStmts_15, SubStmts0_12);
        ml_backend__ml_elim_nested__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_108_97_116_116_101_110_95_115_116_97_116_101_109_101_110_116_115_95_95_91_49_93_95_48_5_p_0(Var_74, &SubStmts_17, STATE_VARIABLE_Info_73_73, STATE_VARIABLE_Info_63);
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          *Stmt_8 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (LocalVarDefns_14));
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (FuncDefns_16));
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (SubStmts_17));
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Context_13));
        }
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word Kind_18 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), Stmt0_7, (MR_Integer) 0))) & (MR_Integer) 1);
        MR_Word Rval0_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Stmt0_7, (MR_Integer) 1))));
        MR_Word SubStmt0_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Stmt0_7, (MR_Integer) 2))));
        MR_Word LoopLocalVars0_21 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Stmt0_7, (MR_Integer) 3))));
        MR_Word Rval_22;
        MR_Word LoopLocalVars_23;
        MR_Word SubStmt_24;
        MR_Word Context_76 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Stmt0_7, (MR_Integer) 4))));

        ml_backend__ml_elim_nested__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_117_112_95_114_118_97_108_95_95_91_49_93_95_48_4_p_0(STATE_VARIABLE_Info_0_62, Rval0_19, &Rval_22);
        ml_backend__ml_elim_nested__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_117_112_95_108_111_99_97_108_95_118_97_114_115_95_95_91_49_93_95_48_4_p_0(STATE_VARIABLE_Info_0_62, LoopLocalVars0_21, &LoopLocalVars_23);
        ml_backend__ml_elim_nested__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_108_97_116_116_101_110_95_115_116_97_116_101_109_101_110_116_95_95_91_49_93_95_48_5_p_0(SubStmt0_20, &SubStmt_24, STATE_VARIABLE_Info_0_62, STATE_VARIABLE_Info_63);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
          *Stmt_8 = base;
          MR_hl_field(MR_mktag(1), base, 0) = (MR_Box) ((MR_Unsigned) (Kind_18));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Rval_22));
          MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (SubStmt_24));
          MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (LoopLocalVars_23));
          MR_hl_field(MR_mktag(1), base, 4) = ((MR_Box) (Context_76));
        }
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word Cond0_25 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Stmt0_7, (MR_Integer) 0))));
        MR_Word Then0_26 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Stmt0_7, (MR_Integer) 1))));
        MR_Word MaybeElse0_27 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Stmt0_7, (MR_Integer) 2))));
        MR_Word Cond_28;
        MR_Word Then_29;
        MR_Word MaybeElse_30;
        MR_Word STATE_VARIABLE_Info_69_69;
        MR_Word Context_77 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Stmt0_7, (MR_Integer) 3))));

        ml_backend__ml_elim_nested__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_117_112_95_114_118_97_108_95_95_91_49_93_95_48_4_p_0(STATE_VARIABLE_Info_0_62, Cond0_25, &Cond_28);
        ml_backend__ml_elim_nested__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_108_97_116_116_101_110_95_115_116_97_116_101_109_101_110_116_95_95_91_49_93_95_48_5_p_0(Then0_26, &Then_29, STATE_VARIABLE_Info_0_62, &STATE_VARIABLE_Info_69_69);
        ml_backend__ml_elim_nested__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_108_97_116_116_101_110_95_109_97_121_98_101_95_115_116_97_116_101_109_101_110_116_95_95_91_49_93_95_48_5_p_0(MaybeElse0_27, &MaybeElse_30, STATE_VARIABLE_Info_69_69, STATE_VARIABLE_Info_63);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
          *Stmt_8 = base;
          MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (Cond_28));
          MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (Then_29));
          MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (MaybeElse_30));
          MR_hl_field(MR_mktag(2), base, 3) = ((MR_Box) (Context_77));
        }
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Stmt0_7, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word Type_31 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Stmt0_7, (MR_Integer) 1))));
            MR_Word Val0_32 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Stmt0_7, (MR_Integer) 2))));
            MR_Word Range_33 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Stmt0_7, (MR_Integer) 3))));
            MR_Word Cases0_34 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Stmt0_7, (MR_Integer) 4))));
            MR_Word Default0_35 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Stmt0_7, (MR_Integer) 5))));
            MR_Word Val_36;
            MR_Word Cases_37;
            MR_Word Default_38;
            MR_Word STATE_VARIABLE_Info_67_67;
            MR_Word Context_78 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Stmt0_7, (MR_Integer) 6))));

            ml_backend__ml_elim_nested__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_117_112_95_114_118_97_108_95_95_91_49_93_95_48_4_p_0(STATE_VARIABLE_Info_0_62, Val0_32, &Val_36);
            ml_backend__ml_elim_nested__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_108_97_116_116_101_110_95_99_97_115_101_115_95_95_91_49_93_95_48_5_p_0(Cases0_34, &Cases_37, STATE_VARIABLE_Info_0_62, &STATE_VARIABLE_Info_67_67);
            ml_backend__ml_elim_nested__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_108_97_116_116_101_110_95_100_101_102_97_117_108_116_95_95_91_49_93_95_48_5_p_0(Default0_35, &Default_38, STATE_VARIABLE_Info_67_67, STATE_VARIABLE_Info_63);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL));
              *Stmt_8 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Type_31));
              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (Val_36));
              MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (Range_33));
              MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (Cases_37));
              MR_hl_field(MR_mktag(3), base, 5) = ((MR_Box) (Default_38));
              MR_hl_field(MR_mktag(3), base, 6) = ((MR_Box) (Context_78));
            }
          }
          break;
        case (MR_Integer) 1:
          {
            *Stmt_8 = Stmt0_7;
            *STATE_VARIABLE_Info_63 = STATE_VARIABLE_Info_0_62;
          }
          break;
        case (MR_Integer) 2:
          {
            *Stmt_8 = Stmt0_7;
            *STATE_VARIABLE_Info_63 = STATE_VARIABLE_Info_0_62;
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word Labels_42 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Stmt0_7, (MR_Integer) 2))));
            MR_Word Context_81 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Stmt0_7, (MR_Integer) 3))));
            MR_Word Rval0_82 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Stmt0_7, (MR_Integer) 1))));
            MR_Word Rval_83;

            ml_backend__ml_elim_nested__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_117_112_95_114_118_97_108_95_95_91_49_93_95_48_4_p_0(STATE_VARIABLE_Info_0_62, Rval0_82, &Rval_83);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              *Stmt_8 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 3U));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Rval_83));
              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (Labels_42));
              MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (Context_81));
            }
            *STATE_VARIABLE_Info_63 = STATE_VARIABLE_Info_0_62;
          }
          break;
        case (MR_Integer) 4:
          {
            MR_Word Sig_43 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Stmt0_7, (MR_Integer) 1))));
            MR_Word Func0_44 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Stmt0_7, (MR_Integer) 2))));
            MR_Word Args0_45 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Stmt0_7, (MR_Integer) 3))));
            MR_Word RetLvals0_46 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Stmt0_7, (MR_Integer) 4))));
            MR_Word TailCall_47 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Stmt0_7, (MR_Integer) 5))) & (MR_Integer) 3);
            MR_Word Func_48;
            MR_Word Args_49;
            MR_Word RetLvals_50;
            MR_Word Context_84 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Stmt0_7, (MR_Integer) 6))));

            ml_backend__ml_elim_nested__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_117_112_95_114_118_97_108_95_95_91_49_93_95_48_4_p_0(STATE_VARIABLE_Info_0_62, Func0_44, &Func_48);
            ml_backend__ml_elim_nested__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_117_112_95_114_118_97_108_115_95_95_91_49_93_95_48_4_p_0(STATE_VARIABLE_Info_0_62, Args0_45, &Args_49);
            ml_backend__ml_elim_nested__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_117_112_95_108_118_97_108_115_95_95_91_49_93_95_48_4_p_0(STATE_VARIABLE_Info_0_62, RetLvals0_46, &RetLvals_50);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL));
              *Stmt_8 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 4U));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Sig_43));
              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (Func_48));
              MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (Args_49));
              MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (RetLvals_50));
              MR_hl_field(MR_mktag(3), base, 5) = (MR_Box) ((MR_Unsigned) (TailCall_47));
              MR_hl_field(MR_mktag(3), base, 6) = ((MR_Box) (Context_84));
            }
            *STATE_VARIABLE_Info_63 = STATE_VARIABLE_Info_0_62;
          }
          break;
        case (MR_Integer) 5:
          {
            MR_Word Rvals0_51 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Stmt0_7, (MR_Integer) 1))));
            MR_Word Rvals_52;
            MR_Word Context_85 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Stmt0_7, (MR_Integer) 2))));

            ml_backend__ml_elim_nested__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_117_112_95_114_118_97_108_115_95_95_91_49_93_95_48_4_p_0(STATE_VARIABLE_Info_0_62, Rvals0_51, &Rvals_52);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              *Stmt_8 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 5U));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Rvals_52));
              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (Context_85));
            }
            *STATE_VARIABLE_Info_63 = STATE_VARIABLE_Info_0_62;
          }
          break;
        case (MR_Integer) 6:
          {
            MR_Word BodyStmt0_55 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Stmt0_7, (MR_Integer) 2))));
            MR_Word HandlerStmt0_56 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Stmt0_7, (MR_Integer) 3))));
            MR_Word BodyStmt_57;
            MR_Word HandlerStmt1_58;
            MR_Word STATE_VARIABLE_Info_64_64;
            MR_Word Context_87 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Stmt0_7, (MR_Integer) 4))));
            MR_Word Ref0_88 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Stmt0_7, (MR_Integer) 1))));
            MR_Word Ref_89;

            ml_backend__ml_elim_nested__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_117_112_95_108_118_97_108_95_95_91_49_93_95_48_4_p_0(STATE_VARIABLE_Info_0_62, Ref0_88, &Ref_89);
            ml_backend__ml_elim_nested__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_108_97_116_116_101_110_95_115_116_97_116_101_109_101_110_116_95_95_91_49_93_95_48_5_p_0(BodyStmt0_55, &BodyStmt_57, STATE_VARIABLE_Info_0_62, &STATE_VARIABLE_Info_64_64);
            ml_backend__ml_elim_nested__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_108_97_116_116_101_110_95_115_116_97_116_101_109_101_110_116_95_95_91_49_93_95_48_5_p_0(HandlerStmt0_56, &HandlerStmt1_58, STATE_VARIABLE_Info_64_64, STATE_VARIABLE_Info_63);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
              *Stmt_8 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 6U));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Ref_89));
              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (BodyStmt_57));
              MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (HandlerStmt1_58));
              MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (Context_87));
            }
          }
          break;
        case (MR_Integer) 7:
          {
            MR_Word Ref0_53 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Stmt0_7, (MR_Integer) 1))));
            MR_Word Ref_54;
            MR_Word Context_86 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Stmt0_7, (MR_Integer) 2))));

            ml_backend__ml_elim_nested__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_117_112_95_114_118_97_108_95_95_91_49_93_95_48_4_p_0(STATE_VARIABLE_Info_0_62, Ref0_53, &Ref_54);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              *Stmt_8 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 7U));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Ref_54));
              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (Context_86));
            }
            *STATE_VARIABLE_Info_63 = STATE_VARIABLE_Info_0_62;
          }
          break;
        case (MR_Integer) 8:
          {
            MR_Word AtomicStmt0_60 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Stmt0_7, (MR_Integer) 1))));
            MR_Word AtomicStmt_61;
            MR_Word Context_90 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Stmt0_7, (MR_Integer) 2))));

            ml_backend__ml_elim_nested__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_117_112_95_97_116_111_109_105_99_95_115_116_109_116_95_95_91_49_93_95_48_4_p_0(STATE_VARIABLE_Info_0_62, AtomicStmt0_60, &AtomicStmt_61);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              *Stmt_8 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 8U));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (AtomicStmt_61));
              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (Context_90));
            }
            *STATE_VARIABLE_Info_63 = STATE_VARIABLE_Info_0_62;
          }
          break;
      }
      break;
  }
}

static void MR_CALL 
ml_backend__ml_elim_nested__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_108_97_116_116_101_110_95_115_116_97_116_101_109_101_110_116_115_95_95_91_49_93_95_48_5_p_0(
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word STATE_VARIABLE_Info_0_4,
  MR_Word * STATE_VARIABLE_Info_5)
{
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_Info_5 = STATE_VARIABLE_Info_0_4;
  }
  else
  {
    MR_Word Stmt0_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
    MR_Word Stmts0_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
    MR_Word Stmt_13;
    MR_Word Stmts_14;
    MR_Word STATE_VARIABLE_Info_18_18;

    ml_backend__ml_elim_nested__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_108_97_116_116_101_110_95_115_116_97_116_101_109_101_110_116_95_95_91_49_93_95_48_5_p_0(Stmt0_11, &Stmt_13, STATE_VARIABLE_Info_0_4, &STATE_VARIABLE_Info_18_18);
    ml_backend__ml_elim_nested__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_108_97_116_116_101_110_95_115_116_97_116_101_109_101_110_116_115_95_95_91_49_93_95_48_5_p_0(Stmts0_12, &Stmts_14, STATE_VARIABLE_Info_18_18, STATE_VARIABLE_Info_5);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__3_3 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Stmt_13));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Stmts_14));
    }
  }
}

static void MR_CALL 
ml_backend__ml_elim_nested__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_108_97_116_116_101_110_95_109_97_121_98_101_95_115_116_97_116_101_109_101_110_116_95_95_91_49_93_95_48_5_p_0(
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word STATE_VARIABLE_Info_0_4,
  MR_Word * STATE_VARIABLE_Info_5)
{
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_Info_5 = STATE_VARIABLE_Info_0_4;
  }
  else
  {
    MR_Word Stmt0_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
    MR_Word Stmt_12;

    ml_backend__ml_elim_nested__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_108_97_116_116_101_110_95_115_116_97_116_101_109_101_110_116_95_95_91_49_93_95_48_5_p_0(Stmt0_11, &Stmt_12, STATE_VARIABLE_Info_0_4, STATE_VARIABLE_Info_5);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__3_3 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Stmt_12));
    }
  }
}

static void MR_CALL 
ml_backend__ml_elim_nested__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_108_97_116_116_101_110_95_102_117_110_99_116_105_111_110_95_98_111_100_121_95_95_91_49_93_95_48_5_p_0(
  MR_Word Body0_7,
  MR_Word * Body_8,
  MR_Word STATE_VARIABLE_Info_0_12,
  MR_Word * STATE_VARIABLE_Info_13)
{
  if ((Body0_7 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *Body_8 = Body0_7;
    *STATE_VARIABLE_Info_13 = STATE_VARIABLE_Info_0_12;
  }
  else
  {
    MR_Word Stmt0_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Body0_7, (MR_Integer) 0))));
    MR_Word Stmt_11;

    ml_backend__ml_elim_nested__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_108_97_116_116_101_110_95_115_116_97_116_101_109_101_110_116_95_95_91_49_93_95_48_5_p_0(Stmt0_10, &Stmt_11, STATE_VARIABLE_Info_0_12, STATE_VARIABLE_Info_13);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *Body_8 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Stmt_11));
    }
  }
}

static MR_bool MR_CALL 
ml_backend__ml_elim_nested__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_117_112_95_108_111_99_97_108_95_118_97_114_115_95_95_91_49_93_95_48_4_p_0_1(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ml_backend__ml_elim_nested__IntroducedFrom__pred__fixup_local_vars__2066__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_elim_nested__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_117_112_95_108_111_99_97_108_95_118_97_114_115_95_95_91_49_93_95_48_4_p_0(
  MR_Word Info_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4)
{
  {
    MR_bool succeeded;

    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word HeadLocalVar0_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
      MR_Word TailLocalVars0_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word TailLocalVars_12;
      MR_Word HeadLval_13;

      ml_backend__ml_elim_nested__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_117_112_95_108_111_99_97_108_95_118_97_114_115_95_95_91_49_93_95_48_4_p_0(Info_2, TailLocalVars0_10, &TailLocalVars_12);
      ml_backend__ml_elim_nested__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_117_112_95_118_97_114_95_95_91_49_93_95_48_5_p_0(Info_2, HeadLocalVar0_9, (MR_Word) ((MR_Unsigned) 36U), &HeadLval_13);
      switch (MR_tag((MR_Word) HeadLval_13)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
        case (MR_Integer) 1:
        case (MR_Integer) 2:
          *HeadVar__4_4 = TailLocalVars_12;
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadLval_13, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word HeadLvalLocalVar_14 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadLval_13, (MR_Integer) 1))));
                MR_Word Var_27;

                {
                  Var_27 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Var_27, 0) = ((MR_Box) (&ml_backend__ml_elim_nested_scalar_common_4[3]));
                  MR_hl_field(MR_mktag(0), Var_27, 1) = ((MR_Box) (ml_backend__ml_elim_nested__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_117_112_95_108_111_99_97_108_95_118_97_114_115_95_95_91_49_93_95_48_4_p_0_1));
                  MR_hl_field(MR_mktag(0), Var_27, 2) = ((MR_Box) ((MR_Integer) 2));
                  MR_hl_field(MR_mktag(0), Var_27, 3) = ((MR_Box) (HeadLocalVar0_9));
                  MR_hl_field(MR_mktag(0), Var_27, 4) = ((MR_Box) (HeadLvalLocalVar_14));
                }
                mercury__require__expect_3_p_0(Var_27, (MR_String) "predicate \140ml_backend.ml_elim_nested.fixup_local_vars\'/4", (MR_String) "HeadLocalVar0 != HeadLvalLocalVar");
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  *HeadVar__4_4 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (HeadLocalVar0_9));
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (TailLocalVars_12));
                }
              }
              break;
            case (MR_Integer) 1:
              *HeadVar__4_4 = TailLocalVars_12;
              break;
          }
          break;
      }
    }
  }
}

static void MR_CALL 
ml_backend__ml_elim_nested__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_117_112_95_114_118_97_108_115_95_95_91_49_93_95_48_4_p_0(
  MR_Word Info_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4)
{
  if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word Rval0_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
    MR_Word Rvals0_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
    MR_Word Rval_11;
    MR_Word Rvals_12;

    ml_backend__ml_elim_nested__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_117_112_95_114_118_97_108_95_95_91_49_93_95_48_4_p_0(Info_2, Rval0_9, &Rval_11);
    ml_backend__ml_elim_nested__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_117_112_95_114_118_97_108_115_95_95_91_49_93_95_48_4_p_0(Info_2, Rvals0_10, &Rvals_12);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__4_4 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Rval_11));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Rvals_12));
    }
  }
}

static void MR_CALL 
ml_backend__ml_elim_nested__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_117_112_95_97_116_111_109_105_99_95_115_116_109_116_95_95_91_49_93_95_48_4_p_0(
  MR_Word Info_6,
  MR_Word Atomic0_7,
  MR_Word * Atomic_8)
{
  switch (MR_tag((MR_Word) Atomic0_7)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      *Atomic_8 = Atomic0_7;
      break;
    case (MR_Integer) 1:
      *Atomic_8 = Atomic0_7;
      break;
    case (MR_Integer) 2:
      {
        MR_Word Lval0_10 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Atomic0_7, (MR_Integer) 0))));
        MR_Word Rval0_11 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Atomic0_7, (MR_Integer) 1))));
        MR_Word Lval_12;
        MR_Word Rval_13;

        ml_backend__ml_elim_nested__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_117_112_95_108_118_97_108_95_95_91_49_93_95_48_4_p_0(Info_6, Lval0_10, &Lval_12);
        ml_backend__ml_elim_nested__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_117_112_95_114_118_97_108_95_95_91_49_93_95_48_4_p_0(Info_6, Rval0_11, &Rval_13);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *Atomic_8 = base;
          MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (Lval_12));
          MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (Rval_13));
        }
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Atomic0_7, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word Lval0_34 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Atomic0_7, (MR_Integer) 1))));
            MR_Word Rval0_35 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Atomic0_7, (MR_Integer) 2))));
            MR_Word Lval_36;
            MR_Word Rval_37;

            ml_backend__ml_elim_nested__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_117_112_95_108_118_97_108_95_95_91_49_93_95_48_4_p_0(Info_6, Lval0_34, &Lval_36);
            ml_backend__ml_elim_nested__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_117_112_95_114_118_97_108_95_95_91_49_93_95_48_4_p_0(Info_6, Rval0_35, &Rval_37);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              *Atomic_8 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Lval_36));
              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (Rval_37));
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Rval0_38 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Atomic0_7, (MR_Integer) 1))));
            MR_Word Rval_39;

            ml_backend__ml_elim_nested__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_117_112_95_114_118_97_108_95_95_91_49_93_95_48_4_p_0(Info_6, Rval0_38, &Rval_39);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *Atomic_8 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 1U));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Rval_39));
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word Target0_14 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Atomic0_7, (MR_Integer) 1))));
            MR_Word MaybeTag_15 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Atomic0_7, (MR_Integer) 2))));
            MR_Word ExplicitSecTag_16 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Atomic0_7, (MR_Integer) 3))) & (MR_Integer) 1);
            MR_Word Type_17 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Atomic0_7, (MR_Integer) 4))));
            MR_Word MaybeSize_18 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Atomic0_7, (MR_Integer) 5))));
            MR_Word MaybeCtorName_19 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Atomic0_7, (MR_Integer) 6))));
            MR_Word ArgRvalsTypes0_20 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Atomic0_7, (MR_Integer) 7))));
            MR_Word MayUseAtomic_21 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Atomic0_7, (MR_Integer) 8))) & (MR_Integer) 1);
            MR_Word MaybeAllocId_22 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Atomic0_7, (MR_Integer) 9))));
            MR_Word Target_23;
            MR_Word ArgRvalsTypes_24;

            ml_backend__ml_elim_nested__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_117_112_95_108_118_97_108_95_95_91_49_93_95_48_4_p_0(Info_6, Target0_14, &Target_23);
            ml_backend__ml_elim_nested__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_117_112_95_116_121_112_101_100_95_114_118_97_108_115_95_95_91_49_93_95_48_4_p_0(Info_6, ArgRvalsTypes0_20, &ArgRvalsTypes_24);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (10 * sizeof(MR_Word)), NULL, NULL));
              *Atomic_8 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 2U));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Target_23));
              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (MaybeTag_15));
              MR_hl_field(MR_mktag(3), base, 3) = (MR_Box) ((MR_Unsigned) (ExplicitSecTag_16));
              MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (Type_17));
              MR_hl_field(MR_mktag(3), base, 5) = ((MR_Box) (MaybeSize_18));
              MR_hl_field(MR_mktag(3), base, 6) = ((MR_Box) (MaybeCtorName_19));
              MR_hl_field(MR_mktag(3), base, 7) = ((MR_Box) (ArgRvalsTypes_24));
              MR_hl_field(MR_mktag(3), base, 8) = (MR_Box) ((MR_Unsigned) (MayUseAtomic_21));
              MR_hl_field(MR_mktag(3), base, 9) = ((MR_Box) (MaybeAllocId_22));
            }
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word Lval0_40 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Atomic0_7, (MR_Integer) 1))));
            MR_Word Lval_41;

            ml_backend__ml_elim_nested__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_117_112_95_108_118_97_108_95_95_91_49_93_95_48_4_p_0(Info_6, Lval0_40, &Lval_41);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *Atomic_8 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 3U));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Lval_41));
            }
          }
          break;
        case (MR_Integer) 4:
          {
            MR_Word Rval0_42 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Atomic0_7, (MR_Integer) 1))));
            MR_Word Rval_43;

            ml_backend__ml_elim_nested__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_117_112_95_114_118_97_108_95_95_91_49_93_95_48_4_p_0(Info_6, Rval0_42, &Rval_43);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *Atomic_8 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 4U));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Rval_43));
            }
          }
          break;
        case (MR_Integer) 5:
          {
            MR_Word TrailOp0_25 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Atomic0_7, (MR_Integer) 1))));
            MR_Word TrailOp_26;

            switch (MR_tag((MR_Word) TrailOp0_25)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                TrailOp_26 = TrailOp0_25;
                break;
              case (MR_Integer) 1:
                {
                  MR_Word Lval0_49 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TrailOp0_25, (MR_Integer) 0))));
                  MR_Word Lval_50;

                  ml_backend__ml_elim_nested__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_117_112_95_108_118_97_108_95_95_91_49_93_95_48_4_p_0(Info_6, Lval0_49, &Lval_50);
                  {
                    TrailOp_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), TrailOp_26, 0) = ((MR_Box) (Lval_50));
                  }
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word Rval0_51 = ((MR_Word) ((MR_hl_field(MR_mktag(2), TrailOp0_25, (MR_Integer) 0))));
                  MR_Word Reason_52 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), TrailOp0_25, (MR_Integer) 1))) & (MR_Integer) 7);
                  MR_Word Rval_53;

                  ml_backend__ml_elim_nested__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_117_112_95_114_118_97_108_95_95_91_49_93_95_48_4_p_0(Info_6, Rval0_51, &Rval_53);
                  {
                    TrailOp_26 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(2), TrailOp_26, 0) = ((MR_Box) (Rval_53));
                    MR_hl_field(MR_mktag(2), TrailOp_26, 1) = (MR_Box) ((MR_Unsigned) (Reason_52));
                  }
                }
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), TrailOp0_25, (MR_Integer) 0))))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      MR_Word Lval0_54 = ((MR_Word) ((MR_hl_field(MR_mktag(3), TrailOp0_25, (MR_Integer) 1))));
                      MR_Word Lval_55;

                      ml_backend__ml_elim_nested__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_117_112_95_108_118_97_108_95_95_91_49_93_95_48_4_p_0(Info_6, Lval0_54, &Lval_55);
                      {
                        TrailOp_26 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(3), TrailOp_26, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                        MR_hl_field(MR_mktag(3), TrailOp_26, 1) = ((MR_Box) (Lval_55));
                      }
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Word Rval0_56 = ((MR_Word) ((MR_hl_field(MR_mktag(3), TrailOp0_25, (MR_Integer) 1))));
                      MR_Word Rval_57;

                      ml_backend__ml_elim_nested__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_117_112_95_114_118_97_108_95_95_91_49_93_95_48_4_p_0(Info_6, Rval0_56, &Rval_57);
                      {
                        TrailOp_26 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(3), TrailOp_26, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                        MR_hl_field(MR_mktag(3), TrailOp_26, 1) = ((MR_Box) (Rval_57));
                      }
                    }
                    break;
                }
                break;
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *Atomic_8 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 5U));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (TrailOp_26));
            }
          }
          break;
        case (MR_Integer) 6:
          {
            MR_Word Lang_27 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Atomic0_7, (MR_Integer) 1))) & (MR_Integer) 3);
            MR_Word Components0_28 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Atomic0_7, (MR_Integer) 2))));
            MR_Word Components_29;

            ml_backend__ml_elim_nested__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_117_112_95_116_97_114_103_101_116_95_99_111_100_101_95_99_111_109_112_111_110_101_110_116_115_95_95_91_49_93_95_48_4_p_0(Info_6, Components0_28, &Components_29);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              *Atomic_8 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 6U));
              MR_hl_field(MR_mktag(3), base, 1) = (MR_Box) ((MR_Unsigned) (Lang_27));
              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (Components_29));
            }
          }
          break;
        case (MR_Integer) 7:
          {
            MR_Word Vs_30 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Atomic0_7, (MR_Integer) 2))));
            MR_Word Lvals0_31 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Atomic0_7, (MR_Integer) 3))));
            MR_String Code_32 = ((MR_String) ((MR_hl_field(MR_mktag(3), Atomic0_7, (MR_Integer) 4))));
            MR_Word Lvals_33;
            MR_Word Lang_44 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Atomic0_7, (MR_Integer) 1))) & (MR_Integer) 3);

            ml_backend__ml_elim_nested__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_117_112_95_108_118_97_108_115_95_95_91_49_93_95_48_4_p_0(Info_6, Lvals0_31, &Lvals_33);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
              *Atomic_8 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 7U));
              MR_hl_field(MR_mktag(3), base, 1) = (MR_Box) ((MR_Unsigned) (Lang_44));
              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (Vs_30));
              MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (Lvals_33));
              MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (Code_32));
            }
          }
          break;
      }
      break;
  }
}

static void MR_CALL 
ml_backend__ml_elim_nested__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_117_112_95_108_118_97_108_115_95_95_91_49_93_95_48_4_p_0(
  MR_Word Info_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4)
{
  if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word X0_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
    MR_Word Xs0_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
    MR_Word X_11;
    MR_Word Xs_12;

    ml_backend__ml_elim_nested__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_117_112_95_108_118_97_108_95_95_91_49_93_95_48_4_p_0(Info_2, X0_9, &X_11);
    ml_backend__ml_elim_nested__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_117_112_95_108_118_97_108_115_95_95_91_49_93_95_48_4_p_0(Info_2, Xs0_10, &Xs_12);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__4_4 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (X_11));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Xs_12));
    }
  }
}

static void MR_CALL 
ml_backend__ml_elim_nested__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_117_112_95_116_121_112_101_100_95_114_118_97_108_115_95_95_91_49_93_95_48_4_p_0(
  MR_Word Info_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4)
{
  if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word TypedRval0_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
    MR_Word TypedRvals0_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
    MR_Word TypedRval_11;
    MR_Word TypedRvals_12;
    MR_Word Rval0_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypedRval0_9, (MR_Integer) 0))));
    MR_Word Type_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypedRval0_9, (MR_Integer) 1))));
    MR_Word Rval_15;

    ml_backend__ml_elim_nested__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_117_112_95_114_118_97_108_95_95_91_49_93_95_48_4_p_0(Info_2, Rval0_13, &Rval_15);
    {
      TypedRval_11 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypedRval_11, 0) = ((MR_Box) (Rval_15));
      MR_hl_field(MR_mktag(0), TypedRval_11, 1) = ((MR_Box) (Type_14));
    }
    ml_backend__ml_elim_nested__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_117_112_95_116_121_112_101_100_95_114_118_97_108_115_95_95_91_49_93_95_48_4_p_0(Info_2, TypedRvals0_10, &TypedRvals_12);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__4_4 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (TypedRval_11));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (TypedRvals_12));
    }
  }
}

static void MR_CALL 
ml_backend__ml_elim_nested__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_117_112_95_116_97_114_103_101_116_95_99_111_100_101_95_99_111_109_112_111_110_101_110_116_115_95_95_91_49_93_95_48_4_p_0(
  MR_Word Info_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4)
{
  if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word Component0_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
    MR_Word Components0_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
    MR_Word Component_11;
    MR_Word Components_12;

    switch (MR_tag((MR_Word) Component0_9)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        Component_11 = Component0_9;
        break;
      case (MR_Integer) 1:
      case (MR_Integer) 2:
        Component_11 = Component0_9;
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Component0_9, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word Rval0_22 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Component0_9, (MR_Integer) 1))));
              MR_Word Rval_23;

              ml_backend__ml_elim_nested__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_117_112_95_114_118_97_108_95_95_91_49_93_95_48_4_p_0(Info_2, Rval0_22, &Rval_23);
              {
                Component_11 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Component_11, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(MR_mktag(3), Component_11, 1) = ((MR_Box) (Rval_23));
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Lval0_24 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Component0_9, (MR_Integer) 1))));
              MR_Word Lval_25;

              ml_backend__ml_elim_nested__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_117_112_95_108_118_97_108_95_95_91_49_93_95_48_4_p_0(Info_2, Lval0_24, &Lval_25);
              {
                Component_11 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Component_11, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                MR_hl_field(MR_mktag(3), Component_11, 1) = ((MR_Box) (Lval_25));
              }
            }
            break;
          case (MR_Integer) 2:
          case (MR_Integer) 3:
            Component_11 = Component0_9;
            break;
        }
        break;
    }
    ml_backend__ml_elim_nested__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_117_112_95_116_97_114_103_101_116_95_99_111_100_101_95_99_111_109_112_111_110_101_110_116_115_95_95_91_49_93_95_48_4_p_0(Info_2, Components0_10, &Components_12);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__4_4 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Component_11));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Components_12));
    }
  }
}

static void MR_CALL 
ml_backend__ml_elim_nested__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_108_97_116_116_101_110_95_110_101_115_116_101_100_95_108_111_99_97_108_95_118_97_114_95_100_101_102_110_115_95_95_91_49_93_95_48_8_p_0(
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word FuncDefns_4,
  MR_Word Stmts_5,
  MR_Word * HeadVar__6_6,
  MR_Word STATE_VARIABLE_Info_0_7,
  MR_Word * STATE_VARIABLE_Info_8)
{
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
    *HeadVar__6_6 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_Info_8 = STATE_VARIABLE_Info_0_7;
  }
  else
  {
    MR_Word HeadLocalVarDefn0_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
    MR_Word TailLocalVarDefns0_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
    MR_Word HeadLocalVarDefns_23;
    MR_Word HeadInitStmts_24;
    MR_Word TailLocalVarDefns_25;
    MR_Word TailInitStmts_26;
    MR_Word STATE_VARIABLE_Info_29_29;

    ml_backend__ml_elim_nested__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_108_97_116_116_101_110_95_110_101_115_116_101_100_95_108_111_99_97_108_95_118_97_114_95_100_101_102_110_95_95_91_49_44_32_51_93_95_48_9_p_0(HeadLocalVarDefn0_16, &HeadLocalVarDefns_23, FuncDefns_4, Stmts_5, &HeadInitStmts_24, STATE_VARIABLE_Info_0_7, &STATE_VARIABLE_Info_29_29);
    ml_backend__ml_elim_nested__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_108_97_116_116_101_110_95_110_101_115_116_101_100_95_108_111_99_97_108_95_118_97_114_95_100_101_102_110_115_95_95_91_49_93_95_48_8_p_0(TailLocalVarDefns0_17, &TailLocalVarDefns_25, FuncDefns_4, Stmts_5, &TailInitStmts_26, STATE_VARIABLE_Info_29_29, STATE_VARIABLE_Info_8);
    *HeadVar__3_3 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_local_var_defn_0), HeadLocalVarDefns_23, TailLocalVarDefns_25);
    *HeadVar__6_6 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0), HeadInitStmts_24, TailInitStmts_26);
  }
}

static MR_bool MR_CALL 
ml_backend__ml_elim_nested__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_108_97_116_116_101_110_95_110_101_115_116_101_100_95_108_111_99_97_108_95_118_97_114_95_100_101_102_110_95_95_91_49_44_32_51_93_95_48_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ml_backend__ml_elim_nested__ml_need_to_hoist_defn_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
    return succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_elim_nested__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_108_97_116_116_101_110_95_110_101_115_116_101_100_95_108_111_99_97_108_95_118_97_114_95_100_101_102_110_95_95_91_49_44_32_51_93_95_48_9_p_0(
  MR_Word HeadLocalVarDefn0_11,
  MR_Word * HeadLocalVarDefns_13,
  MR_Word FuncDefns_14,
  MR_Word Stmts_15,
  MR_Word * InitStmts_16,
  MR_Word STATE_VARIABLE_Info_0_31,
  MR_Word * STATE_VARIABLE_Info_32)
{
  {
    MR_bool succeeded;
    MR_Word LocalVarName_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadLocalVarDefn0_11, (MR_Integer) 0))));
    MR_Word Context_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadLocalVarDefn0_11, (MR_Integer) 1))));
    MR_Word Type_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadLocalVarDefn0_11, (MR_Integer) 2))));
    MR_Word Init0_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadLocalVarDefn0_11, (MR_Integer) 3))));
    MR_Word GCStmt_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadLocalVarDefn0_11, (MR_Integer) 4))));
    MR_Word Filter_53;

    {
      Filter_53 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Filter_53, 0) = ((MR_Box) (&ml_backend__ml_elim_nested_scalar_common_4[1]));
      MR_hl_field(MR_mktag(0), Filter_53, 1) = ((MR_Box) (ml_backend__ml_elim_nested__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_108_97_116_116_101_110_95_110_101_115_116_101_100_95_108_111_99_97_108_95_118_97_114_95_100_101_102_110_95_95_91_49_44_32_51_93_95_48_9_p_0_1));
      MR_hl_field(MR_mktag(0), Filter_53, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Filter_53, 3) = ((MR_Box) (LocalVarName_18));
    }
    {
      MR_Box conv0_Var_54;

      succeeded = mercury__list__find_first_match_3_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_function_defn_0), Filter_53, FuncDefns_14, &conv0_Var_54);
      if (succeeded)
        succeeded = MR_TRUE;
    }
    if (!(succeeded))
      succeeded = ml_backend__ml_elim_nested__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_116_97_116_101_109_101_110_116_115_95_99_111_110_116_97_105_110_115_95_109_97_116_99_104_105_110_103_95_100_101_102_110_95_95_104_111_49_95_95_91_50_93_95_48_2_p_0(LocalVarName_18, Stmts_15);
    if (succeeded)
    {
      MR_Word HeadLocalVarDefn_25;
      MR_Word LocalVars0_61;
      MR_Word LocalVars_62;
      MR_Word Var_69;
      MR_Word Var_71;
      MR_Word Var_72;
      MR_Word Var_73;
      MR_Word Var_74;

      switch (MR_tag((MR_Word) Init0_21)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            HeadLocalVarDefn_25 = HeadLocalVarDefn0_11;
            *InitStmts_16 = (MR_Word) ((MR_Unsigned) 0U);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Rval_23 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Init0_21, (MR_Integer) 0))));
            MR_Word VarLval_26;
            MR_Word InitStmt_27;
            MR_Word Var_37;

            {
              HeadLocalVarDefn_25 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), HeadLocalVarDefn_25, 0) = ((MR_Box) (LocalVarName_18));
              MR_hl_field(MR_mktag(0), HeadLocalVarDefn_25, 1) = ((MR_Box) (Context_19));
              MR_hl_field(MR_mktag(0), HeadLocalVarDefn_25, 2) = ((MR_Box) (Type_20));
              MR_hl_field(MR_mktag(0), HeadLocalVarDefn_25, 3) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(0), HeadLocalVarDefn_25, 4) = ((MR_Box) (GCStmt_22));
            }
            {
              VarLval_26 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), VarLval_26, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(3), VarLval_26, 1) = ((MR_Box) (LocalVarName_18));
              MR_hl_field(MR_mktag(3), VarLval_26, 2) = ((MR_Box) (Type_20));
            }
            {
              Var_37 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(2), Var_37, 0) = ((MR_Box) (VarLval_26));
              MR_hl_field(MR_mktag(2), Var_37, 1) = ((MR_Box) (Rval_23));
            }
            {
              InitStmt_27 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), InitStmt_27, 0) = ((MR_Box) ((MR_Unsigned) 8U));
              MR_hl_field(MR_mktag(3), InitStmt_27, 1) = ((MR_Box) (Var_37));
              MR_hl_field(MR_mktag(3), InitStmt_27, 2) = ((MR_Box) (Context_19));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *InitStmts_16 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (InitStmt_27));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
          }
          break;
        case (MR_Integer) 2:
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_elim_nested.flatten_nested_local_var_defn\'/9", (MR_String) "init_struct");
            return;
          }
          break;
        case (MR_Integer) 3:
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_elim_nested.flatten_nested_local_var_defn\'/9", (MR_String) "init_array");
            return;
          }
          break;
      }
      LocalVars0_61 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_31, (MR_Integer) 1))));
      LocalVars_62 = mercury__cord__snoc_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_local_var_defn_0), LocalVars0_61, ((MR_Box) (HeadLocalVarDefn_25)));
      Var_69 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_31, (MR_Integer) 0))));
      Var_71 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_31, (MR_Integer) 2))));
      Var_72 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_31, (MR_Integer) 3))));
      Var_73 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_31, (MR_Integer) 4))));
      Var_74 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_31, (MR_Integer) 5))) & (MR_Integer) 3);
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
        *STATE_VARIABLE_Info_32 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_69));
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (LocalVars_62));
        MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_71));
        MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_72));
        MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_73));
        MR_hl_field(MR_mktag(0), base, 5) = (MR_Box) ((MR_Unsigned) (Var_74));
      }
      *HeadLocalVarDefns_13 = (MR_Word) ((MR_Unsigned) 0U);
    }
    else
    {
      MR_Word Init_41;
      MR_Word HeadLocalVarDefn_42;

      switch (MR_tag((MR_Word) Init0_21)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          Init_41 = Init0_21;
          break;
        case (MR_Integer) 1:
          {
            MR_Word Rval0_80 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Init0_21, (MR_Integer) 0))));
            MR_Word Rval_81;

            ml_backend__ml_elim_nested__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_117_112_95_114_118_97_108_95_95_91_49_93_95_48_4_p_0(STATE_VARIABLE_Info_0_31, Rval0_80, &Rval_81);
            {
              Init_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Init_41, 0) = ((MR_Box) (Rval_81));
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word Type_82 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Init0_21, (MR_Integer) 0))));
            MR_Word Members0_83 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Init0_21, (MR_Integer) 1))));
            MR_Word Members_84;

            ml_backend__ml_elim_nested__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_117_112_95_105_110_105_116_105_97_108_105_122_101_114_115_95_95_91_49_93_95_48_4_p_0(STATE_VARIABLE_Info_0_31, Members0_83, &Members_84);
            {
              Init_41 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(2), Init_41, 0) = ((MR_Box) (Type_82));
              MR_hl_field(MR_mktag(2), Init_41, 1) = ((MR_Box) (Members_84));
            }
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word Elements0_85 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Init0_21, (MR_Integer) 0))));
            MR_Word Elements_86;

            ml_backend__ml_elim_nested__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_117_112_95_105_110_105_116_105_97_108_105_122_101_114_115_95_95_91_49_93_95_48_4_p_0(STATE_VARIABLE_Info_0_31, Elements0_85, &Elements_86);
            {
              Init_41 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Init_41, 0) = ((MR_Box) (Elements_86));
            }
          }
          break;
      }
      {
        HeadLocalVarDefn_42 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), HeadLocalVarDefn_42, 0) = ((MR_Box) (LocalVarName_18));
        MR_hl_field(MR_mktag(0), HeadLocalVarDefn_42, 1) = ((MR_Box) (Context_19));
        MR_hl_field(MR_mktag(0), HeadLocalVarDefn_42, 2) = ((MR_Box) (Type_20));
        MR_hl_field(MR_mktag(0), HeadLocalVarDefn_42, 3) = ((MR_Box) (Init_41));
        MR_hl_field(MR_mktag(0), HeadLocalVarDefn_42, 4) = ((MR_Box) (GCStmt_22));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *HeadLocalVarDefns_13 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (HeadLocalVarDefn_42));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      *InitStmts_16 = (MR_Word) ((MR_Unsigned) 0U);
      *STATE_VARIABLE_Info_32 = STATE_VARIABLE_Info_0_31;
    }
  }
}

static void MR_CALL 
ml_backend__ml_elim_nested__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_117_112_95_105_110_105_116_105_97_108_105_122_101_114_115_95_95_91_49_93_95_48_4_p_0(
  MR_Word Info_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4)
{
  if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word Initializer0_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
    MR_Word Initializers0_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
    MR_Word Initializer_11;
    MR_Word Initializers_12;

    switch (MR_tag((MR_Word) Initializer0_9)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        Initializer_11 = Initializer0_9;
        break;
      case (MR_Integer) 1:
        {
          MR_Word Rval0_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Initializer0_9, (MR_Integer) 0))));
          MR_Word Rval_18;

          ml_backend__ml_elim_nested__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_117_112_95_114_118_97_108_95_95_91_49_93_95_48_4_p_0(Info_2, Rval0_17, &Rval_18);
          {
            Initializer_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Initializer_11, 0) = ((MR_Box) (Rval_18));
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Type_19 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Initializer0_9, (MR_Integer) 0))));
          MR_Word Members0_20 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Initializer0_9, (MR_Integer) 1))));
          MR_Word Members_21;

          ml_backend__ml_elim_nested__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_117_112_95_105_110_105_116_105_97_108_105_122_101_114_115_95_95_91_49_93_95_48_4_p_0(Info_2, Members0_20, &Members_21);
          {
            Initializer_11 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), Initializer_11, 0) = ((MR_Box) (Type_19));
            MR_hl_field(MR_mktag(2), Initializer_11, 1) = ((MR_Box) (Members_21));
          }
        }
        break;
      case (MR_Integer) 3:
        {
          MR_Word Elements0_22 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Initializer0_9, (MR_Integer) 0))));
          MR_Word Elements_23;

          ml_backend__ml_elim_nested__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_117_112_95_105_110_105_116_105_97_108_105_122_101_114_115_95_95_91_49_93_95_48_4_p_0(Info_2, Elements0_22, &Elements_23);
          {
            Initializer_11 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Initializer_11, 0) = ((MR_Box) (Elements_23));
          }
        }
        break;
    }
    ml_backend__ml_elim_nested__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_117_112_95_105_110_105_116_105_97_108_105_122_101_114_115_95_95_91_49_93_95_48_4_p_0(Info_2, Initializers0_10, &Initializers_12);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__4_4 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Initializer_11));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Initializers_12));
    }
  }
}

static void MR_CALL 
ml_backend__ml_elim_nested__elim_info_add_nested_func_3_p_0(
  MR_Word NestedFunc_4,
  MR_Word STATE_VARIABLE_ElimInfo_0_8,
  MR_Word * STATE_VARIABLE_ElimInfo_9)
{
  {
    MR_Word NestedFuncs0_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ElimInfo_0_8, (MR_Integer) 0))));
    MR_Word NestedFuncs_7;
    MR_Word Var_17;
    MR_Word Var_18;
    MR_Word Var_19;
    MR_Word Var_20;
    MR_Word Var_21;

    NestedFuncs_7 = mercury__cord__snoc_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_function_defn_0), NestedFuncs0_6, ((MR_Box) (NestedFunc_4)));
    Var_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ElimInfo_0_8, (MR_Integer) 1))));
    Var_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ElimInfo_0_8, (MR_Integer) 2))));
    Var_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ElimInfo_0_8, (MR_Integer) 3))));
    Var_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ElimInfo_0_8, (MR_Integer) 4))));
    Var_21 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ElimInfo_0_8, (MR_Integer) 5))) & (MR_Integer) 3);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_ElimInfo_9 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (NestedFuncs_7));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_17));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_18));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_19));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_20));
      MR_hl_field(MR_mktag(0), base, 5) = (MR_Box) ((MR_Unsigned) (Var_21));
    }
  }
}

static void MR_CALL 
ml_backend__ml_elim_nested__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_117_112_95_99_97_115_101_95_99_111_110_100_95_95_91_49_93_95_48_4_p_0(
  MR_Word Info_6,
  MR_Word Cond0_7,
  MR_Word * Cond_8)
{
  if (((MR_tag((MR_Word) Cond0_7)) == (MR_Integer) 1))
  {
    MR_Word Low0_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Cond0_7, (MR_Integer) 0))));
    MR_Word High0_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Cond0_7, (MR_Integer) 1))));
    MR_Word Low_13;
    MR_Word High_14;

    ml_backend__ml_elim_nested__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_117_112_95_114_118_97_108_95_95_91_49_93_95_48_4_p_0(Info_6, Low0_11, &Low_13);
    ml_backend__ml_elim_nested__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_117_112_95_114_118_97_108_95_95_91_49_93_95_48_4_p_0(Info_6, High0_12, &High_14);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *Cond_8 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Low_13));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (High_14));
    }
  }
  else
  {
    MR_Word Rval0_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Cond0_7, (MR_Integer) 0))));
    MR_Word Rval_10;

    ml_backend__ml_elim_nested__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_117_112_95_114_118_97_108_95_95_91_49_93_95_48_4_p_0(Info_6, Rval0_9, &Rval_10);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *Cond_8 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Rval_10));
    }
  }
}

static void MR_CALL 
ml_backend__ml_elim_nested__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_117_112_95_99_97_115_101_95_99_111_110_100_115_95_95_91_49_93_95_48_4_p_0(
  MR_Word Info_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4)
{
  if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word Cond0_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
    MR_Word Conds0_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
    MR_Word Cond_11;
    MR_Word Conds_12;

    if (((MR_tag((MR_Word) Cond0_9)) == (MR_Integer) 1))
    {
      MR_Word Low0_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Cond0_9, (MR_Integer) 0))));
      MR_Word High0_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Cond0_9, (MR_Integer) 1))));
      MR_Word Low_21;
      MR_Word High_22;

      ml_backend__ml_elim_nested__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_117_112_95_114_118_97_108_95_95_91_49_93_95_48_4_p_0(Info_2, Low0_19, &Low_21);
      ml_backend__ml_elim_nested__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_117_112_95_114_118_97_108_95_95_91_49_93_95_48_4_p_0(Info_2, High0_20, &High_22);
      {
        Cond_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Cond_11, 0) = ((MR_Box) (Low_21));
        MR_hl_field(MR_mktag(1), Cond_11, 1) = ((MR_Box) (High_22));
      }
    }
    else
    {
      MR_Word Rval0_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Cond0_9, (MR_Integer) 0))));
      MR_Word Rval_18;

      ml_backend__ml_elim_nested__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_117_112_95_114_118_97_108_95_95_91_49_93_95_48_4_p_0(Info_2, Rval0_17, &Rval_18);
      {
        Cond_11 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Cond_11, 0) = ((MR_Box) (Rval_18));
      }
    }
    ml_backend__ml_elim_nested__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_117_112_95_99_97_115_101_95_99_111_110_100_115_95_95_91_49_93_95_48_4_p_0(Info_2, Conds0_10, &Conds_12);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__4_4 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Cond_11));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Conds_12));
    }
  }
}

static void MR_CALL 
ml_backend__ml_elim_nested__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_117_112_95_108_118_97_108_95_95_91_49_93_95_48_4_p_0(
  MR_Word Info_6,
  MR_Word Lval0_7,
  MR_Word * Lval_8)
{
  switch (MR_tag((MR_Word) Lval0_7)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word MaybeTag_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Lval0_7, (MR_Integer) 0))));
        MR_Word Rval0_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Lval0_7, (MR_Integer) 1))));
        MR_Word PtrType_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Lval0_7, (MR_Integer) 2))));
        MR_Word FieldId_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Lval0_7, (MR_Integer) 3))));
        MR_Word FieldType_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Lval0_7, (MR_Integer) 4))));
        MR_Word Rval_14;

        ml_backend__ml_elim_nested__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_117_112_95_114_118_97_108_95_95_91_49_93_95_48_4_p_0(Info_6, Rval0_10, &Rval_14);
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          *Lval_8 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (MaybeTag_9));
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Rval_14));
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (PtrType_11));
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (FieldId_12));
          MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (FieldType_13));
        }
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word Type_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Lval0_7, (MR_Integer) 1))));
        MR_Word Rval0_21 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Lval0_7, (MR_Integer) 0))));
        MR_Word Rval_22;

        ml_backend__ml_elim_nested__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_117_112_95_114_118_97_108_95_95_91_49_93_95_48_4_p_0(Info_6, Rval0_21, &Rval_22);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *Lval_8 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Rval_22));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Type_15));
        }
      }
      break;
    case (MR_Integer) 2:
      *Lval_8 = Lval0_7;
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Lval0_7, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word Var0_19 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Lval0_7, (MR_Integer) 1))));
            MR_Word VarType_20 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Lval0_7, (MR_Integer) 2))));

            ml_backend__ml_elim_nested__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_117_112_95_118_97_114_95_95_91_49_93_95_48_5_p_0(Info_6, Var0_19, VarType_20, Lval_8);
          }
          break;
        case (MR_Integer) 1:
          *Lval_8 = Lval0_7;
          break;
      }
      break;
  }
}

static void MR_CALL 
ml_backend__ml_elim_nested__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_117_112_95_114_118_97_108_95_95_91_49_93_95_48_4_p_0(
  MR_Word Info_6,
  MR_Word Rval0_7,
  MR_Word * Rval_8)
{
  switch (MR_tag((MR_Word) Rval0_7)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
    case (MR_Integer) 1:
      *Rval_8 = Rval0_7;
      break;
    case (MR_Integer) 2:
      {
        MR_Word Lval0_9 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Rval0_7, (MR_Integer) 0))));
        MR_Word Lval_10;

        ml_backend__ml_elim_nested__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_117_112_95_108_118_97_108_95_95_91_49_93_95_48_4_p_0(Info_6, Lval0_9, &Lval_10);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *Rval_8 = base;
          MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (Lval_10));
        }
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Rval0_7, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word Tag_11 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval0_7, (MR_Integer) 1))));
            MR_Word BaseRval0_12 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval0_7, (MR_Integer) 2))));
            MR_Word BaseRval_13;

            ml_backend__ml_elim_nested__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_117_112_95_114_118_97_108_95_95_91_49_93_95_48_4_p_0(Info_6, BaseRval0_12, &BaseRval_13);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              *Rval_8 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Tag_11));
              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (BaseRval_13));
            }
          }
          break;
        case (MR_Integer) 1:
        case (MR_Integer) 9:
          *Rval_8 = Rval0_7;
          break;
        case (MR_Integer) 2:
          {
            MR_Word Type_14 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval0_7, (MR_Integer) 1))));
            MR_Word SubRval0_15 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval0_7, (MR_Integer) 2))));
            MR_Word SubRval_16;

            ml_backend__ml_elim_nested__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_117_112_95_114_118_97_108_95_95_91_49_93_95_48_4_p_0(Info_6, SubRval0_15, &SubRval_16);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              *Rval_8 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 2U));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Type_14));
              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (SubRval_16));
            }
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word Type_32 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval0_7, (MR_Integer) 1))));
            MR_Word SubRval0_33 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval0_7, (MR_Integer) 2))));
            MR_Word SubRval_34;

            ml_backend__ml_elim_nested__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_117_112_95_114_118_97_108_95_95_91_49_93_95_48_4_p_0(Info_6, SubRval0_33, &SubRval_34);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              *Rval_8 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 3U));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Type_32));
              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (SubRval_34));
            }
          }
          break;
        case (MR_Integer) 4:
          {
            MR_Word Type_35 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval0_7, (MR_Integer) 1))));
            MR_Word SubRval0_36 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval0_7, (MR_Integer) 2))));
            MR_Word SubRval_37;

            ml_backend__ml_elim_nested__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_117_112_95_114_118_97_108_95_95_91_49_93_95_48_4_p_0(Info_6, SubRval0_36, &SubRval_37);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              *Rval_8 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 4U));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Type_35));
              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (SubRval_37));
            }
          }
          break;
        case (MR_Integer) 5:
          {
            MR_Word UnOp_17 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval0_7, (MR_Integer) 1))));
            MR_Word SubRval0_38 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval0_7, (MR_Integer) 2))));
            MR_Word SubRval_39;

            ml_backend__ml_elim_nested__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_117_112_95_114_118_97_108_95_95_91_49_93_95_48_4_p_0(Info_6, SubRval0_38, &SubRval_39);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              *Rval_8 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 5U));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (UnOp_17));
              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (SubRval_39));
            }
          }
          break;
        case (MR_Integer) 6:
          {
            MR_Word BinOp_18 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval0_7, (MR_Integer) 1))));
            MR_Word SubRvalA0_19 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval0_7, (MR_Integer) 2))));
            MR_Word SubRvalB0_20 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval0_7, (MR_Integer) 3))));
            MR_Word SubRvalA_21;
            MR_Word SubRvalB_22;

            ml_backend__ml_elim_nested__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_117_112_95_114_118_97_108_95_95_91_49_93_95_48_4_p_0(Info_6, SubRvalA0_19, &SubRvalA_21);
            ml_backend__ml_elim_nested__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_117_112_95_114_118_97_108_95_95_91_49_93_95_48_4_p_0(Info_6, SubRvalB0_20, &SubRvalB_22);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              *Rval_8 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 6U));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (BinOp_18));
              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (SubRvalA_21));
              MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (SubRvalB_22));
            }
          }
          break;
        case (MR_Integer) 7:
          {
            MR_Word Lval0_30 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval0_7, (MR_Integer) 1))));
            MR_Word Lval_31;

            ml_backend__ml_elim_nested__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_117_112_95_108_118_97_108_95_95_91_49_93_95_48_4_p_0(Info_6, Lval0_30, &Lval_31);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *Rval_8 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 7U));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Lval_31));
            }
          }
          break;
        case (MR_Integer) 8:
          {
            MR_Word VectorCommon_23 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval0_7, (MR_Integer) 1))));
            MR_Word RowRval0_24 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval0_7, (MR_Integer) 2))));
            MR_Word RowRval_25;

            ml_backend__ml_elim_nested__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_117_112_95_114_118_97_108_95_95_91_49_93_95_48_4_p_0(Info_6, RowRval0_24, &RowRval_25);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              *Rval_8 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 8U));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (VectorCommon_23));
              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (RowRval_25));
            }
          }
          break;
      }
      break;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_elim_nested__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_117_112_95_118_97_114_95_95_91_49_93_95_48_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ml_backend__ml_elim_nested__IntroducedFrom__pred__fixup_var__2134__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
    return succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_elim_nested__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_117_112_95_118_97_114_95_95_91_49_93_95_48_5_p_0(
  MR_Word Info_7,
  MR_Word ThisVarName_8,
  MR_Word ThisVarType_9,
  MR_Word * Lval_10)
{
  {
    MR_bool succeeded;
    MR_Word Locals_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 1))));
    MR_Word ClassId_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 2))));
    MR_Word EnvPtrVarType_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 3))));
    MR_Word Target_14 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 5))) & (MR_Integer) 3);
    MR_Word ThisVarDefn_17;
    MR_Word DefnIsThisVar_15;
    MR_Box conv0_ThisVarDefn_17;

    {
      DefnIsThisVar_15 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), DefnIsThisVar_15, 0) = ((MR_Box) (&ml_backend__ml_elim_nested_scalar_common_4[2]));
      MR_hl_field(MR_mktag(0), DefnIsThisVar_15, 1) = ((MR_Box) (ml_backend__ml_elim_nested__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_117_112_95_118_97_114_95_95_91_49_93_95_48_5_p_0_1));
      MR_hl_field(MR_mktag(0), DefnIsThisVar_15, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), DefnIsThisVar_15, 3) = ((MR_Box) (ThisVarName_8));
    }
    succeeded = mercury__cord__find_first_match_3_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_local_var_defn_0), DefnIsThisVar_15, Locals_11, &conv0_ThisVarDefn_17);
    if (succeeded)
    {
      ThisVarDefn_17 = ((MR_Word) (conv0_ThisVarDefn_17));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_Word FieldType_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ThisVarDefn_17, (MR_Integer) 2))));
      MR_Word EnvPtr_19;
      MR_Word EnvModuleName_20;
      MR_Word FieldName_21;
      MR_Word Var_24;
      MR_Word Var_26;
      MR_Word Var_28;
      MR_Word ClassModuleName_77;
      MR_Integer Arity_78;
      MR_Word ClassModule_80;
      MR_Word QualKind_81;
      MR_String ClassName_82;

      {
        Var_24 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_24, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(3), Var_24, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_elim_nested_scalar_common_1[9])));
        MR_hl_field(MR_mktag(3), Var_24, 2) = ((MR_Box) (EnvPtrVarType_13));
      }
      {
        EnvPtr_19 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(2), EnvPtr_19, 0) = ((MR_Box) (Var_24));
      }
      ClassModuleName_77 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ClassId_12, (MR_Integer) 0))));
      Arity_78 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ClassId_12, (MR_Integer) 1))));
      ClassModule_80 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ClassModuleName_77, (MR_Integer) 0))));
      QualKind_81 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), ClassModuleName_77, (MR_Integer) 1))) & (MR_Integer) 1);
      ClassName_82 = ((MR_String) ((MR_hl_field(MR_mktag(0), ClassModuleName_77, (MR_Integer) 2))));
      EnvModuleName_20 = ml_backend__mlds__mlds_append_class_qualifier_5_f_0(Target_14, ClassModule_80, QualKind_81, ClassName_82, Arity_78);
      {
        Var_28 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_28, 0) = ((MR_Box) ((MR_Unsigned) 2U));
        MR_hl_field(MR_mktag(3), Var_28, 1) = ((MR_Box) (ThisVarName_8));
      }
      {
        Var_26 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_26, 0) = ((MR_Box) (EnvModuleName_20));
        MR_hl_field(MR_mktag(0), Var_26, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), Var_26, 2) = ((MR_Box) (Var_28));
      }
      {
        FieldName_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), FieldName_21, 0) = ((MR_Box) (Var_26));
        MR_hl_field(MR_mktag(1), FieldName_21, 1) = ((MR_Box) (EnvPtrVarType_13));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        *Lval_10 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_elim_nested_scalar_common_2[0])));
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (EnvPtr_19));
        MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (EnvPtrVarType_13));
        MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (FieldName_21));
        MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (FieldType_18));
      }
    }
    else
    {
      MR_Word Var_31;

      succeeded = (ThisVarType_9 == (MR_Word) ((MR_Unsigned) 36U));
      if (succeeded)
      {
        succeeded = ((((MR_tag((MR_Word) ThisVarName_8)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), ThisVarName_8, (MR_Integer) 0)))) == (MR_Integer) 8)));
        if (succeeded)
        {
          Var_31 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ThisVarName_8, (MR_Integer) 1))));
          succeeded = (Var_31 == (MR_Word) ((MR_Unsigned) 48U));
        }
      }
      if (succeeded)
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          *Lval_10 = base;
          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ThisVarName_8));
          MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (EnvPtrVarType_13));
        }
      else
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          *Lval_10 = base;
          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ThisVarName_8));
          MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ThisVarType_9));
        }
    }
  }
}

static MR_bool MR_CALL 
ml_backend__ml_elim_nested__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_109_97_121_98_101_95_99_111_112_121_95_97_114_103_115_95_95_91_49_93_95_48_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ml_backend__ml_elim_nested__ml_need_to_hoist_defn_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
    return succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_elim_nested__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_109_97_121_98_101_95_99_111_112_121_95_97_114_103_115_95_95_91_49_93_95_48_9_p_0(
  MR_Word Info_2,
  MR_Word HeadVar__3_3,
  MR_Word FuncBody_4,
  MR_Word ClassId_5,
  MR_Word EnvPtrTypeName_6,
  MR_Word Context_7,
  MR_Word * HeadVar__8_8,
  MR_Word * HeadVar__9_9)
{
  {
    MR_bool succeeded;

    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *HeadVar__8_8 = (MR_Word) ((MR_Unsigned) 0U);
      *HeadVar__9_9 = (MR_Word) ((MR_Unsigned) 0U);
    }
    else
    {
      MR_Word Arg_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
      MR_Word Args_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word ArgsToCopyTail_26;
      MR_Word CodeToCopyArgsTail_27;
      MR_Word VarName_28;
      MR_Word FieldType_29;
      MR_Word Var_43;
      MR_Word Filter_62;

      ml_backend__ml_elim_nested__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_109_97_121_98_101_95_99_111_112_121_95_97_114_103_115_95_95_91_49_93_95_48_9_p_0(Info_2, Args_19, FuncBody_4, ClassId_5, EnvPtrTypeName_6, Context_7, &ArgsToCopyTail_26, &CodeToCopyArgsTail_27);
      VarName_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Arg_18, (MR_Integer) 0))));
      FieldType_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Arg_18, (MR_Integer) 1))));
      {
        Var_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_43, 0) = ((MR_Box) (FuncBody_4));
        MR_hl_field(MR_mktag(1), Var_43, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Filter_62 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Filter_62, 0) = ((MR_Box) (&ml_backend__ml_elim_nested_scalar_common_4[1]));
        MR_hl_field(MR_mktag(0), Filter_62, 1) = ((MR_Box) (ml_backend__ml_elim_nested__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_109_97_121_98_101_95_99_111_112_121_95_97_114_103_115_95_95_91_49_93_95_48_9_p_0_1));
        MR_hl_field(MR_mktag(0), Filter_62, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), Filter_62, 3) = ((MR_Box) (VarName_28));
      }
      {
        MR_Box conv0_Var_63;

        succeeded = mercury__list__find_first_match_3_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_function_defn_0), Filter_62, (MR_Word) ((MR_Unsigned) 0U), &conv0_Var_63);
        if (succeeded)
          succeeded = MR_TRUE;
      }
      if (!(succeeded))
        succeeded = ml_backend__ml_elim_nested__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_116_97_116_101_109_101_110_116_115_95_99_111_110_116_97_105_110_115_95_109_97_116_99_104_105_110_103_95_100_101_102_110_95_95_104_111_49_95_95_91_50_93_95_48_2_p_0(VarName_28, Var_43);
      if (succeeded)
      {
        MR_Word ArgToCopy_31;
        MR_Word Target_32;
        MR_Word EnvModuleName_33;
        MR_Word FieldName_34;
        MR_Word EnvPtr_37;
        MR_Word EnvArgLval_38;
        MR_Word ArgRval_39;
        MR_Word AssignToEnv_40;
        MR_Word CodeToCopyArg_41;
        MR_Word Var_45;
        MR_Word Var_47;
        MR_Word Var_50;
        MR_Word Var_51;
        MR_Word VarName_69 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Arg_18, (MR_Integer) 0))));
        MR_Word Type_70 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Arg_18, (MR_Integer) 1))));
        MR_Word GCStmt_71 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Arg_18, (MR_Integer) 2))));
        MR_Word ClassModuleName_83;
        MR_Integer Arity_84;
        MR_Word ClassModule_86;
        MR_Word QualKind_87;
        MR_String ClassName_88;

        {
          ArgToCopy_31 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ArgToCopy_31, 0) = ((MR_Box) (VarName_69));
          MR_hl_field(MR_mktag(0), ArgToCopy_31, 1) = ((MR_Box) (Context_7));
          MR_hl_field(MR_mktag(0), ArgToCopy_31, 2) = ((MR_Box) (Type_70));
          MR_hl_field(MR_mktag(0), ArgToCopy_31, 3) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(0), ArgToCopy_31, 4) = ((MR_Box) (GCStmt_71));
        }
        Target_32 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_2, (MR_Integer) 5))) & (MR_Integer) 3);
        ClassModuleName_83 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ClassId_5, (MR_Integer) 0))));
        Arity_84 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ClassId_5, (MR_Integer) 1))));
        ClassModule_86 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ClassModuleName_83, (MR_Integer) 0))));
        QualKind_87 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), ClassModuleName_83, (MR_Integer) 1))) & (MR_Integer) 1);
        ClassName_88 = ((MR_String) ((MR_hl_field(MR_mktag(0), ClassModuleName_83, (MR_Integer) 2))));
        EnvModuleName_33 = ml_backend__mlds__mlds_append_class_qualifier_5_f_0(Target_32, ClassModule_86, QualKind_87, ClassName_88, Arity_84);
        {
          Var_47 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_47, 0) = ((MR_Box) ((MR_Unsigned) 2U));
          MR_hl_field(MR_mktag(3), Var_47, 1) = ((MR_Box) (VarName_28));
        }
        {
          Var_45 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_45, 0) = ((MR_Box) (EnvModuleName_33));
          MR_hl_field(MR_mktag(0), Var_45, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), Var_45, 2) = ((MR_Box) (Var_47));
        }
        {
          FieldName_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), FieldName_34, 0) = ((MR_Box) (Var_45));
          MR_hl_field(MR_mktag(1), FieldName_34, 1) = ((MR_Box) (EnvPtrTypeName_6));
        }
        {
          Var_50 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_50, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(3), Var_50, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_elim_nested_scalar_common_1[9])));
          MR_hl_field(MR_mktag(3), Var_50, 2) = ((MR_Box) (EnvPtrTypeName_6));
        }
        {
          EnvPtr_37 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(2), EnvPtr_37, 0) = ((MR_Box) (Var_50));
        }
        {
          EnvArgLval_38 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), EnvArgLval_38, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_elim_nested_scalar_common_2[0])));
          MR_hl_field(MR_mktag(0), EnvArgLval_38, 1) = ((MR_Box) (EnvPtr_37));
          MR_hl_field(MR_mktag(0), EnvArgLval_38, 2) = ((MR_Box) (EnvPtrTypeName_6));
          MR_hl_field(MR_mktag(0), EnvArgLval_38, 3) = ((MR_Box) (FieldName_34));
          MR_hl_field(MR_mktag(0), EnvArgLval_38, 4) = ((MR_Box) (FieldType_29));
        }
        {
          Var_51 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_51, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(3), Var_51, 1) = ((MR_Box) (VarName_28));
          MR_hl_field(MR_mktag(3), Var_51, 2) = ((MR_Box) (FieldType_29));
        }
        {
          ArgRval_39 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(2), ArgRval_39, 0) = ((MR_Box) (Var_51));
        }
        {
          AssignToEnv_40 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(2), AssignToEnv_40, 0) = ((MR_Box) (EnvArgLval_38));
          MR_hl_field(MR_mktag(2), AssignToEnv_40, 1) = ((MR_Box) (ArgRval_39));
        }
        {
          CodeToCopyArg_41 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), CodeToCopyArg_41, 0) = ((MR_Box) ((MR_Unsigned) 8U));
          MR_hl_field(MR_mktag(3), CodeToCopyArg_41, 1) = ((MR_Box) (AssignToEnv_40));
          MR_hl_field(MR_mktag(3), CodeToCopyArg_41, 2) = ((MR_Box) (Context_7));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__8_8 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ArgToCopy_31));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ArgsToCopyTail_26));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__9_9 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (CodeToCopyArg_41));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (CodeToCopyArgsTail_27));
        }
      }
      else
      {
        *HeadVar__8_8 = ArgsToCopyTail_26;
        *HeadVar__9_9 = CodeToCopyArgsTail_27;
      }
    }
  }
}

static MR_bool MR_CALL 
ml_backend__ml_elim_nested__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_109_97_121_98_101_95_97_100_100_95_97_114_103_115_95_95_91_49_44_32_52_93_95_48_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ml_backend__ml_elim_nested__ml_need_to_hoist_defn_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
    return succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_elim_nested__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_109_97_121_98_101_95_97_100_100_95_97_114_103_115_95_95_91_49_44_32_52_93_95_48_7_p_0(
  MR_Word HeadVar__2_2,
  MR_Word FuncBody_3,
  MR_Word Context_5,
  MR_Word STATE_VARIABLE_Info_0_6,
  MR_Word * STATE_VARIABLE_Info_7)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_Info_7 = STATE_VARIABLE_Info_0_6;
    else
    {
      MR_Word Arg_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word Args_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word VarName_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Arg_16, (MR_Integer) 0))));
      MR_Word STATE_VARIABLE_Info_31_31;
      MR_Word Var_29;
      MR_Word Filter_43;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_STATE_VARIABLE_Info_0_6;

      {
        Var_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_29, 0) = ((MR_Box) (FuncBody_3));
        MR_hl_field(MR_mktag(1), Var_29, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Filter_43 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Filter_43, 0) = ((MR_Box) (&ml_backend__ml_elim_nested_scalar_common_4[1]));
        MR_hl_field(MR_mktag(0), Filter_43, 1) = ((MR_Box) (ml_backend__ml_elim_nested__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_109_97_121_98_101_95_97_100_100_95_97_114_103_115_95_95_91_49_44_32_52_93_95_48_7_p_0_1));
        MR_hl_field(MR_mktag(0), Filter_43, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), Filter_43, 3) = ((MR_Box) (VarName_22));
      }
      {
        MR_Box conv0_Var_44;

        succeeded = mercury__list__find_first_match_3_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_function_defn_0), Filter_43, (MR_Word) ((MR_Unsigned) 0U), &conv0_Var_44);
        if (succeeded)
          succeeded = MR_TRUE;
      }
      if (!(succeeded))
        succeeded = ml_backend__ml_elim_nested__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_116_97_116_101_109_101_110_116_115_95_99_111_110_116_97_105_110_115_95_109_97_116_99_104_105_110_103_95_100_101_102_110_95_95_104_111_49_95_95_91_50_93_95_48_2_p_0(VarName_22, Var_29);
      if (succeeded)
      {
        MR_Word ArgToCopy_25;
        MR_Word VarName_50 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Arg_16, (MR_Integer) 0))));
        MR_Word Type_51 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Arg_16, (MR_Integer) 1))));
        MR_Word GCStmt_52 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Arg_16, (MR_Integer) 2))));
        MR_Word LocalVars0_58;
        MR_Word LocalVars_59;
        MR_Word Var_66;
        MR_Word Var_68;
        MR_Word Var_69;
        MR_Word Var_70;
        MR_Word Var_71;

        {
          ArgToCopy_25 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ArgToCopy_25, 0) = ((MR_Box) (VarName_50));
          MR_hl_field(MR_mktag(0), ArgToCopy_25, 1) = ((MR_Box) (Context_5));
          MR_hl_field(MR_mktag(0), ArgToCopy_25, 2) = ((MR_Box) (Type_51));
          MR_hl_field(MR_mktag(0), ArgToCopy_25, 3) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(0), ArgToCopy_25, 4) = ((MR_Box) (GCStmt_52));
        }
        LocalVars0_58 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 1))));
        LocalVars_59 = mercury__cord__snoc_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_local_var_defn_0), LocalVars0_58, ((MR_Box) (ArgToCopy_25)));
        Var_66 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 0))));
        Var_68 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 2))));
        Var_69 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 3))));
        Var_70 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 4))));
        Var_71 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 5))) & (MR_Integer) 3);
        {
          STATE_VARIABLE_Info_31_31 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_31_31, 0) = ((MR_Box) (Var_66));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_31_31, 1) = ((MR_Box) (LocalVars_59));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_31_31, 2) = ((MR_Box) (Var_68));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_31_31, 3) = ((MR_Box) (Var_69));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_31_31, 4) = ((MR_Box) (Var_70));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_31_31, 5) = (MR_Box) ((MR_Unsigned) (Var_71));
        }
      }
      else
        STATE_VARIABLE_Info_31_31 = STATE_VARIABLE_Info_0_6;
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = Args_17;
      next_value_of_STATE_VARIABLE_Info_0_6 = STATE_VARIABLE_Info_31_31;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      STATE_VARIABLE_Info_0_6 = next_value_of_STATE_VARIABLE_Info_0_6;
      continue;
    }
    break;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_elim_nested__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_116_97_116_101_109_101_110_116_95_99_111_110_116_97_105_110_115_95_109_97_116_99_104_105_110_103_95_100_101_102_110_95_95_104_111_50_95_95_91_50_93_95_48_2_p_0(
  MR_Word Var_58,
  MR_Word Stmt_4)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) Stmt_4)) {
      default:
        succeeded = MR_FALSE;
        break;
      case (MR_Integer) 0:
        {
          MR_Word FuncDefns_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Stmt_4, (MR_Integer) 1))));
          MR_Word SubStmts_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Stmt_4, (MR_Integer) 2))));

          succeeded = ml_backend__ml_elim_nested__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_117_110_99_116_105_111_110_95_100_101_102_110_115_95_99_111_110_116_97_105_110_115_95_109_97_116_99_104_105_110_103_95_100_101_102_110_95_95_104_111_51_95_95_91_50_93_95_48_2_p_0(Var_58, FuncDefns_6);
          if (!(succeeded))
            succeeded = ml_backend__ml_elim_nested__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_116_97_116_101_109_101_110_116_115_95_99_111_110_116_97_105_110_115_95_109_97_116_99_104_105_110_103_95_100_101_102_110_95_95_104_111_49_95_95_91_50_93_95_48_2_p_0(Var_58, SubStmts_7);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word SubStmt_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Stmt_4, (MR_Integer) 2))));
          MR_Word next_value_of_Stmt_4 = SubStmt_11;

          // direct tailcall eliminated
          ;
          Stmt_4 = next_value_of_Stmt_4;
          continue;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word SubThen_14 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Stmt_4, (MR_Integer) 1))));
          MR_Word MaybeSubElse_15 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Stmt_4, (MR_Integer) 2))));

          succeeded = ml_backend__ml_elim_nested__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_116_97_116_101_109_101_110_116_95_99_111_110_116_97_105_110_115_95_109_97_116_99_104_105_110_103_95_100_101_102_110_95_95_104_111_50_95_95_91_50_93_95_48_2_p_0(Var_58, SubThen_14);
          if (!(succeeded))
          {
            MR_Word SubElse_16;
            MR_Word next_value_of_Stmt_4;

            succeeded = (MaybeSubElse_15 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              SubElse_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeSubElse_15, (MR_Integer) 0))));
              // direct tailcall eliminated
              ;
              next_value_of_Stmt_4 = SubElse_16;
              Stmt_4 = next_value_of_Stmt_4;
              continue;
            }
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Stmt_4, (MR_Integer) 0))))) {
          default:
            succeeded = MR_FALSE;
            break;
          case (MR_Integer) 0:
            {
              MR_Word SubCases_20 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Stmt_4, (MR_Integer) 4))));
              MR_Word SubDefault_21 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Stmt_4, (MR_Integer) 5))));

              succeeded = ml_backend__ml_elim_nested__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_97_115_101_115_95_99_111_110_116_97_105_110_115_95_109_97_116_99_104_105_110_103_95_100_101_102_110_95_95_104_111_53_95_95_91_50_93_95_48_2_p_0(Var_58, SubCases_20);
              if (!(succeeded))
              {
                MR_Word Stmt_60;
                MR_Word next_value_of_Stmt_4;

                succeeded = ((MR_tag((MR_Word) SubDefault_21)) == (MR_Integer) 1);
                if (succeeded)
                {
                  Stmt_60 = ((MR_Word) ((MR_hl_field(MR_mktag(1), SubDefault_21, (MR_Integer) 0))));
                  // direct tailcall eliminated
                  ;
                  next_value_of_Stmt_4 = Stmt_60;
                  Stmt_4 = next_value_of_Stmt_4;
                  continue;
                }
              }
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word SubHandler_23 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Stmt_4, (MR_Integer) 3))));
              MR_Word SubStmt_42 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Stmt_4, (MR_Integer) 2))));

              succeeded = ml_backend__ml_elim_nested__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_116_97_116_101_109_101_110_116_95_99_111_110_116_97_105_110_115_95_109_97_116_99_104_105_110_103_95_100_101_102_110_95_95_104_111_50_95_95_91_50_93_95_48_2_p_0(Var_58, SubStmt_42);
              if (!(succeeded))
              {
                MR_Word next_value_of_Stmt_4 = SubHandler_23;

                // direct tailcall eliminated
                ;
                Stmt_4 = next_value_of_Stmt_4;
                continue;
              }
            }
            break;
        }
        break;
    }
    return succeeded;
    break;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_elim_nested__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_97_115_101_115_95_99_111_110_116_97_105_110_115_95_109_97_116_99_104_105_110_103_95_100_101_102_110_95_95_104_111_53_95_95_91_50_93_95_48_2_p_0(
  MR_Word Var_6,
  MR_Word HeadVar__2_2)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (HeadVar__2_2 != (MR_Word) ((MR_Unsigned) 0U));
    MR_Word Case_4;
    MR_Word Cases_5;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      Case_4 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      Cases_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      {
        MR_Word Stmt_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Case_4, (MR_Integer) 2))));

        succeeded = ml_backend__ml_elim_nested__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_116_97_116_101_109_101_110_116_95_99_111_110_116_97_105_110_115_95_109_97_116_99_104_105_110_103_95_100_101_102_110_95_95_104_111_50_95_95_91_50_93_95_48_2_p_0(Var_6, Stmt_11);
      }
      if (!(succeeded))
      {
        MR_Word next_value_of_HeadVar__2_2 = Cases_5;

        // direct tailcall eliminated
        ;
        HeadVar__2_2 = next_value_of_HeadVar__2_2;
        continue;
      }
    }
    return succeeded;
    break;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_elim_nested__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_117_110_99_116_105_111_110_95_100_101_102_110_115_95_99_111_110_116_97_105_110_115_95_109_97_116_99_104_105_110_103_95_100_101_102_110_95_95_104_111_51_95_95_91_50_93_95_48_2_p_0(
  MR_Word Var_6,
  MR_Word HeadVar__2_2)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (HeadVar__2_2 != (MR_Word) ((MR_Unsigned) 0U));
    MR_Word FuncDefn_4;
    MR_Word FuncDefns_5;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      FuncDefn_4 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      FuncDefns_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      {
        MR_Word Var_9;

        Var_9 = ml_backend__ml_util__function_defn_contains_var_2_f_0(FuncDefn_4, Var_6);
        succeeded = (Var_9 == (MR_Integer) 1);
      }
      if (!(succeeded))
      {
        {
          MR_Word FunctionBody_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FuncDefn_4, (MR_Integer) 5))));
          MR_Word Stmt_20;

          succeeded = (FunctionBody_17 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            Stmt_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), FunctionBody_17, (MR_Integer) 0))));
            succeeded = ml_backend__ml_elim_nested__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_116_97_116_101_109_101_110_116_95_99_111_110_116_97_105_110_115_95_109_97_116_99_104_105_110_103_95_100_101_102_110_95_95_104_111_50_95_95_91_50_93_95_48_2_p_0(Var_6, Stmt_20);
          }
        }
        if (!(succeeded))
        {
          MR_Word next_value_of_HeadVar__2_2 = FuncDefns_5;

          // direct tailcall eliminated
          ;
          HeadVar__2_2 = next_value_of_HeadVar__2_2;
          continue;
        }
      }
    }
    return succeeded;
    break;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_elim_nested__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_116_97_116_101_109_101_110_116_115_95_99_111_110_116_97_105_110_115_95_109_97_116_99_104_105_110_103_95_100_101_102_110_95_95_104_111_49_95_95_91_50_93_95_48_2_p_0(
  MR_Word Var_6,
  MR_Word HeadVar__2_2)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (HeadVar__2_2 != (MR_Word) ((MR_Unsigned) 0U));
    MR_Word Stmt_4;
    MR_Word Stmts_5;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      Stmt_4 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      Stmts_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      succeeded = ml_backend__ml_elim_nested__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_116_97_116_101_109_101_110_116_95_99_111_110_116_97_105_110_115_95_109_97_116_99_104_105_110_103_95_100_101_102_110_95_95_104_111_50_95_95_91_50_93_95_48_2_p_0(Var_6, Stmt_4);
      if (!(succeeded))
      {
        MR_Word next_value_of_HeadVar__2_2 = Stmts_5;

        // direct tailcall eliminated
        ;
        HeadVar__2_2 = next_value_of_HeadVar__2_2;
        continue;
      }
    }
    return succeeded;
    break;
  }
}

static void MR_CALL 
ml_backend__ml_elim_nested__elim_info_finish_3_p_0(
  MR_Word ElimInfo_4,
  MR_Word * NestedFuncs_5,
  MR_Word * LocalVars_6)
{
  {
    MR_Word Var_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ElimInfo_4, (MR_Integer) 0))));
    MR_Word Var_8;

    *NestedFuncs_5 = mercury__cord__to_list_1_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_function_defn_0), Var_7);
    Var_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ElimInfo_4, (MR_Integer) 1))));
    *LocalVars_6 = mercury__cord__to_list_1_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_local_var_defn_0), Var_8);
  }
}

static MR_Word MR_CALL 
ml_backend__ml_elim_nested__elim_info_init_2_f_0(
  MR_Word EnvClassId_4,
  MR_Word Target_5)
{
  {
    MR_Word ElimInfo_6;
    MR_Word EnvPtrTypeName_7;
    MR_Word Var_8;
    MR_Word Var_9;
    MR_Word Var_10;
    MR_Word Var_16 = (MR_Word) (MR_mkword(MR_mktag(1), (MR_Word) (EnvClassId_4)));

    {
      EnvPtrTypeName_7 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), EnvPtrTypeName_7, 0) = ((MR_Box) ((MR_Unsigned) 7U));
      MR_hl_field(MR_mktag(3), EnvPtrTypeName_7, 1) = ((MR_Box) (Var_16));
    }
    Var_8 = mercury__cord__init_0_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_function_defn_0));
    Var_9 = mercury__cord__init_0_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_local_var_defn_0));
    Var_10 = mercury__counter__init_1_f_0((MR_Integer) 0);
    {
      ElimInfo_6 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ElimInfo_6, 0) = ((MR_Box) (Var_8));
      MR_hl_field(MR_mktag(0), ElimInfo_6, 1) = ((MR_Box) (Var_9));
      MR_hl_field(MR_mktag(0), ElimInfo_6, 2) = ((MR_Box) (EnvClassId_4));
      MR_hl_field(MR_mktag(0), ElimInfo_6, 3) = ((MR_Box) (EnvPtrTypeName_7));
      MR_hl_field(MR_mktag(0), ElimInfo_6, 4) = ((MR_Box) (Var_10));
      MR_hl_field(MR_mktag(0), ElimInfo_6, 5) = (MR_Box) ((MR_Unsigned) (Target_5));
    }
    return ElimInfo_6;
  }
}

static void MR_CALL 
ml_backend__ml_elim_nested__fixup_gc_statements_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_Defn_8;
    MR_Word conv0_STATE_VARIABLE_Info_17;

    ml_backend__ml_elim_nested__fixup_gc_statements_defn_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv1_Defn_8, ((MR_Word) (wrapper_arg_3)), &conv0_STATE_VARIABLE_Info_17);
    *wrapper_arg_2 = ((MR_Box) (conv1_Defn_8));
    *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_Info_17));
  }
}

static void MR_CALL 
ml_backend__ml_elim_nested__fixup_gc_statements_3_p_0(
  MR_Word Action_4,
  MR_Word STATE_VARIABLE_Info_0_8,
  MR_Word * STATE_VARIABLE_Info_9)
{
  {
    MR_Word LocalsCord0_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_8, (MR_Integer) 1))));
    MR_Word LocalsCord_7;
    MR_Word Var_10;
    MR_Word STATE_VARIABLE_Info_11_11;
    MR_Box conv2_STATE_VARIABLE_Info_11_11;
    MR_Word Var_31;
    MR_Word Var_33;
    MR_Word Var_34;
    MR_Word Var_35;
    MR_Word Var_36;

    {
      Var_10 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_10, 0) = ((MR_Box) (&ml_backend__ml_elim_nested_scalar_common_6[0]));
      MR_hl_field(MR_mktag(0), Var_10, 1) = ((MR_Box) (ml_backend__ml_elim_nested__fixup_gc_statements_3_p_0_1));
      MR_hl_field(MR_mktag(0), Var_10, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_10, 3) = ((MR_Box) (Action_4));
    }
    mercury__cord__map_foldl_5_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_local_var_defn_0), (MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_local_var_defn_0), (MR_Word) (&ml_backend__ml_elim_nested__ml_backend__ml_elim_nested__type_ctor_info_elim_info_0), Var_10, LocalsCord0_6, &LocalsCord_7, ((MR_Box) (STATE_VARIABLE_Info_0_8)), &conv2_STATE_VARIABLE_Info_11_11);
    STATE_VARIABLE_Info_11_11 = ((MR_Word) (conv2_STATE_VARIABLE_Info_11_11));
    Var_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_11_11, (MR_Integer) 0))));
    Var_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_11_11, (MR_Integer) 2))));
    Var_34 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_11_11, (MR_Integer) 3))));
    Var_35 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_11_11, (MR_Integer) 4))));
    Var_36 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_11_11, (MR_Integer) 5))) & (MR_Integer) 3);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_Info_9 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_31));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (LocalsCord_7));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_33));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_34));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_35));
      MR_hl_field(MR_mktag(0), base, 5) = (MR_Box) ((MR_Unsigned) (Var_36));
    }
  }
}

static MR_String MR_CALL 
ml_backend__ml_elim_nested__ml_env_name_2_f_0(
  MR_Word FunctionName_4,
  MR_Word Action_5)
{
  {
    MR_String ClassName_6;

    if (((MR_tag((MR_Word) FunctionName_4)) == (MR_Integer) 1))
      mercury__require__unexpected_2_p_0((MR_String) "function \140ml_backend.ml_elim_nested.ml_env_name\'/2", (MR_String) "expected function, got export");
    else
    {
      MR_Word PlainFuncName_7 = (MR_Word) ((MR_Word) (FunctionName_4));
      MR_Word FuncLabel_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PlainFuncName_7, (MR_Integer) 0))));
      MR_Word ProcLabel_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FuncLabel_8, (MR_Integer) 0))));
      MR_Word MaybeAux_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FuncLabel_8, (MR_Integer) 1))));
      MR_Word PredLabel_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ProcLabel_10, (MR_Integer) 0))));
      MR_Integer ProcId_13 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ProcLabel_10, (MR_Integer) 1))));
      MR_String PredLabelStr_14;
      MR_Integer ModeNum_15;
      MR_String Base_16;
      MR_String MaybeAuxSuffix_17;
      MR_String Var_32;
      MR_String Var_33;
      MR_String Var_34;
      MR_String Var_41;
      MR_String Var_43;

      PredLabelStr_14 = ml_backend__ml_elim_nested__ml_pred_label_name_1_f_0(PredLabel_12);
      hlds__hlds_pred__proc_id_to_int_2_p_0(ProcId_13, &ModeNum_15);
      switch (Action_5) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          Base_16 = (MR_String) "frame";
          break;
        case (MR_Integer) 0:
          Base_16 = (MR_String) "env";
          break;
      }
      MaybeAuxSuffix_17 = ml_backend__ml_util__mlds_maybe_aux_func_id_to_suffix_1_f_0(MaybeAux_11);
      Var_32 = mercury__string__f_43_43_2_f_0((MR_String) "_", Base_16);
      Var_33 = mercury__string__f_43_43_2_f_0(MaybeAuxSuffix_17, Var_32);
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__ml_elim_nested_scalar_common_2[5]), ModeNum_15, &Var_34);
      Var_41 = mercury__string__f_43_43_2_f_0(Var_34, Var_33);
      Var_43 = mercury__string__f_43_43_2_f_0((MR_String) "_", Var_41);
      ClassName_6 = mercury__string__f_43_43_2_f_0(PredLabelStr_14, Var_43);
    }
    return ClassName_6;
  }
}

static MR_String MR_CALL 
ml_backend__ml_elim_nested__ml_pred_label_name_1_f_0(
  MR_Word HeadVar__1_1)
{
  {
    MR_String LabelName_2;

    if (((MR_tag((MR_Word) HeadVar__1_1)) == (MR_Integer) 1))
    {
      MR_String PredName_31 = ((MR_String) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word MaybeTypeModule_32 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_String TypeName_33 = ((MR_String) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 2))));
      MR_Integer TypeArity_34 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 3))));

      if ((MaybeTypeModule_32 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_String Var_98;
        MR_String Var_106;
        MR_String Var_107;
        MR_String Var_109;

        mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__ml_elim_nested_scalar_common_2[5]), TypeArity_34, &Var_98);
        Var_106 = mercury__string__f_43_43_2_f_0((MR_String) "_", Var_98);
        Var_107 = mercury__string__f_43_43_2_f_0(TypeName_33, Var_106);
        Var_109 = mercury__string__f_43_43_2_f_0((MR_String) "__", Var_107);
        LabelName_2 = mercury__string__f_43_43_2_f_0(PredName_31, Var_109);
      }
      else
      {
        MR_Word TypeModule_36 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeTypeModule_32, (MR_Integer) 0))));
        MR_String TypeModuleString_37;
        MR_String Var_83;
        MR_String Var_91;
        MR_String Var_92;
        MR_String Var_94;
        MR_String Var_95;
        MR_String Var_97;

        TypeModuleString_37 = ml_backend__ml_elim_nested__ml_module_name_string_1_f_0(TypeModule_36);
        mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__ml_elim_nested_scalar_common_2[5]), TypeArity_34, &Var_83);
        Var_91 = mercury__string__f_43_43_2_f_0((MR_String) "_", Var_83);
        Var_92 = mercury__string__f_43_43_2_f_0(TypeName_33, Var_91);
        Var_94 = mercury__string__f_43_43_2_f_0((MR_String) "__", Var_92);
        Var_95 = mercury__string__f_43_43_2_f_0(TypeModuleString_37, Var_94);
        Var_97 = mercury__string__f_43_43_2_f_0((MR_String) "__", Var_95);
        LabelName_2 = mercury__string__f_43_43_2_f_0(PredName_31, Var_97);
      }
    }
    else
    {
      MR_Word PredOrFunc_3 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))) & (MR_Integer) 1);
      MR_Word MaybeDefiningModule_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_String Name_5 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))));
      MR_Integer Arity_6 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 3))));
      MR_String Suffix_10;

      switch (PredOrFunc_3) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          Suffix_10 = (MR_String) "f";
          break;
        case (MR_Integer) 0:
          Suffix_10 = (MR_String) "p";
          break;
      }
      if ((MaybeDefiningModule_4 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_String Var_72;
        MR_String Var_73;
        MR_String Var_80;
        MR_String Var_82;

        Var_72 = mercury__string__f_43_43_2_f_0((MR_String) "_", Suffix_10);
        mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__ml_elim_nested_scalar_common_2[5]), Arity_6, &Var_73);
        Var_80 = mercury__string__f_43_43_2_f_0(Var_73, Var_72);
        Var_82 = mercury__string__f_43_43_2_f_0((MR_String) "_", Var_80);
        LabelName_2 = mercury__string__f_43_43_2_f_0(Name_5, Var_82);
      }
      else
      {
        MR_Word DefiningModule_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeDefiningModule_4, (MR_Integer) 0))));
        MR_String ModuleNameString_12;
        MR_String Var_57;
        MR_String Var_58;
        MR_String Var_60;
        MR_String Var_61;
        MR_String Var_68;
        MR_String Var_70;

        ModuleNameString_12 = ml_backend__ml_elim_nested__ml_module_name_string_1_f_0(DefiningModule_11);
        Var_57 = mercury__string__f_43_43_2_f_0((MR_String) "_in__", ModuleNameString_12);
        Var_58 = mercury__string__f_43_43_2_f_0(Suffix_10, Var_57);
        Var_60 = mercury__string__f_43_43_2_f_0((MR_String) "_", Var_58);
        mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__ml_elim_nested_scalar_common_2[5]), Arity_6, &Var_61);
        Var_68 = mercury__string__f_43_43_2_f_0(Var_61, Var_60);
        Var_70 = mercury__string__f_43_43_2_f_0((MR_String) "_", Var_68);
        LabelName_2 = mercury__string__f_43_43_2_f_0(Name_5, Var_70);
      }
    }
    return LabelName_2;
  }
}

static MR_String MR_CALL 
ml_backend__ml_elim_nested__ml_module_name_string_1_f_0(
  MR_Word ModuleName_3)
{
  {
    MR_String HeadVar__2_2;

    HeadVar__2_2 = mdbcomp__sym_name__sym_name_to_string_sep_2_f_0(ModuleName_3, (MR_String) "__");
    return HeadVar__2_2;
  }
}

static void MR_CALL 
ml_backend__ml_elim_nested__ml_create_env_12_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv3_FieldVarDefn_6;
    MR_Word conv2_GCInitStmts_7;
    MR_Word conv1_GCTraceStmts_8;

    ml_backend__ml_elim_nested__extract_gc_statements_4_p_0(((MR_Word) (wrapper_arg_1)), &conv3_FieldVarDefn_6, &conv2_GCInitStmts_7, &conv1_GCTraceStmts_8);
    *wrapper_arg_2 = ((MR_Box) (conv3_FieldVarDefn_6));
    *wrapper_arg_3 = ((MR_Box) (conv2_GCInitStmts_7));
    *wrapper_arg_4 = ((MR_Box) (conv1_GCTraceStmts_8));
  }
}

static MR_Box MR_CALL 
ml_backend__ml_elim_nested__ml_create_env_12_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_FieldVarDefn_4;

    conv0_FieldVarDefn_4 = ml_backend__ml_elim_nested__convert_local_to_field_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_FieldVarDefn_4));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
ml_backend__ml_elim_nested__ml_create_env_12_p_0(
  MR_Word Action_13,
  MR_String EnvClassName_14,
  MR_Word EnvClassId_15,
  MR_Word LocalVars_16,
  MR_Word Context_17,
  MR_Word ModuleName_18,
  MR_Word FuncName_19,
  MR_Word Globals_20,
  MR_Word * EnvClassDefn_21,
  MR_Word * EnvDefns_22,
  MR_Word * Stmts_23,
  MR_Word * GCTraceFuncDefns_24)
{
  {
    MR_Word OnHeap_25;
    MR_Word EnvClassKind_26;
    MR_Word Inherits_27;
    MR_Word Fields0_29;
    MR_Word Fields1_30;
    MR_Word GC_InitStmtLists_31;
    MR_Word GC_TraceStmtLists_32;
    MR_Word GC_StmtLists_33;
    MR_Word GC_Stmts_34;
    MR_Word Fields_35;
    MR_Word EnvInitializer_36;
    MR_Word LinkStackChainStmts_37;
    MR_Word GCStmtEnv_38;
    MR_Word EnvVarName_46;
    MR_Word EnvTypeName_47;
    MR_Word EnvVarDecl_48;
    MR_Word EnvVarAddr_49;
    MR_Word NewObjStmts_53;
    MR_Word EnvPtrVarDecl_54;
    MR_Word InitEnvStmt_55;
    MR_Word Var_78;
    MR_Word Var_80;
    MR_Word Var_81;

    libs__globals__lookup_bool_option_3_p_0(Globals_20, (MR_Integer) 306, &OnHeap_25);
    Fields0_29 = mercury__list__map_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_local_var_defn_0), (MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_field_var_defn_0), (MR_Word) (&ml_backend__ml_elim_nested_scalar_common_3[4]), LocalVars_16);
    mercury__list__map3_5_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_field_var_defn_0), (MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_field_var_defn_0), (MR_Word) (&ml_backend__ml_elim_nested_scalar_common_1[0]), (MR_Word) (&ml_backend__ml_elim_nested_scalar_common_1[0]), (MR_Word) (&ml_backend__ml_elim_nested_scalar_common_3[5]), Fields0_29, &Fields1_30, &GC_InitStmtLists_31, &GC_TraceStmtLists_32);
    GC_StmtLists_33 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__ml_elim_nested_scalar_common_1[0]), GC_InitStmtLists_31, GC_TraceStmtLists_32);
    GC_Stmts_34 = mercury__list__condense_1_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0), GC_StmtLists_33);
    switch (Action_13) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          ml_backend__ml_elim_nested__ml_chain_stack_frames_10_p_0(ModuleName_18, FuncName_19, Context_17, GC_Stmts_34, EnvClassId_15, Fields1_30, &Fields_35, &EnvInitializer_36, &LinkStackChainStmts_37, GCTraceFuncDefns_24);
          GCStmtEnv_38 = (MR_Word) ((MR_Unsigned) 0U);
        }
        break;
      case (MR_Integer) 0:
        {
          if ((GC_Stmts_34 == (MR_Word) ((MR_Unsigned) 0U)))
            GCStmtEnv_38 = (MR_Word) ((MR_Unsigned) 0U);
          else
          {
            MR_Word GC_Block_41;

            GC_Block_41 = ml_backend__ml_code_util__ml_gen_block_4_f_0((MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 0U), GC_Stmts_34, Context_17);
            {
              GCStmtEnv_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), GCStmtEnv_38, 0) = ((MR_Box) (GC_Block_41));
            }
          }
          Fields_35 = Fields1_30;
          EnvInitializer_36 = (MR_Word) ((MR_Unsigned) 0U);
          LinkStackChainStmts_37 = (MR_Word) ((MR_Unsigned) 0U);
          *GCTraceFuncDefns_24 = (MR_Word) ((MR_Unsigned) 0U);
        }
        break;
    }
    switch (Action_13) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        EnvVarName_46 = (MR_Word) (MR_mkword(MR_mktag(3), &ml_backend__ml_elim_nested_scalar_common_1[12]));
        break;
      case (MR_Integer) 0:
        EnvVarName_46 = (MR_Word) (MR_mkword(MR_mktag(3), &ml_backend__ml_elim_nested_scalar_common_1[13]));
        break;
    }
    EnvTypeName_47 = (MR_Word) (MR_mkword(MR_mktag(1), (MR_Word) (EnvClassId_15)));
    {
      EnvVarDecl_48 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), EnvVarDecl_48, 0) = ((MR_Box) (EnvVarName_46));
      MR_hl_field(MR_mktag(0), EnvVarDecl_48, 1) = ((MR_Box) (Context_17));
      MR_hl_field(MR_mktag(0), EnvVarDecl_48, 2) = ((MR_Box) (EnvTypeName_47));
      MR_hl_field(MR_mktag(0), EnvVarDecl_48, 3) = ((MR_Box) (EnvInitializer_36));
      MR_hl_field(MR_mktag(0), EnvVarDecl_48, 4) = ((MR_Box) (GCStmtEnv_38));
    }
    switch (OnHeap_25) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word Var_67;

          EnvClassKind_26 = (MR_Integer) 2;
          Inherits_27 = (MR_Word) ((MR_Unsigned) 0U);
          {
            Var_67 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_67, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(3), Var_67, 1) = ((MR_Box) (EnvVarName_46));
            MR_hl_field(MR_mktag(3), Var_67, 2) = ((MR_Box) (EnvTypeName_47));
          }
          {
            EnvVarAddr_49 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), EnvVarAddr_49, 0) = ((MR_Box) ((MR_Unsigned) 7U));
            MR_hl_field(MR_mktag(3), EnvVarAddr_49, 1) = ((MR_Box) (Var_67));
          }
          NewObjStmts_53 = (MR_Word) ((MR_Unsigned) 0U);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word NewObj_52;
          MR_Word Var_68;
          MR_Word Var_76;

          EnvClassKind_26 = (MR_Integer) 0;
          Inherits_27 = (MR_Word) ((MR_Unsigned) 4U);
          {
            Var_68 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_68, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(3), Var_68, 1) = ((MR_Box) (EnvVarName_46));
            MR_hl_field(MR_mktag(3), Var_68, 2) = ((MR_Box) (EnvTypeName_47));
          }
          {
            EnvVarAddr_49 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), EnvVarAddr_49, 0) = ((MR_Box) (Var_68));
          }
          {
            NewObj_52 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (10 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), NewObj_52, 0) = ((MR_Box) ((MR_Unsigned) 2U));
            MR_hl_field(MR_mktag(3), NewObj_52, 1) = ((MR_Box) (Var_68));
            MR_hl_field(MR_mktag(3), NewObj_52, 2) = ((MR_Box) (((MR_Box) (MR_Word) (UINT8_C(0)))));
            MR_hl_field(MR_mktag(3), NewObj_52, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
            MR_hl_field(MR_mktag(3), NewObj_52, 4) = ((MR_Box) (EnvTypeName_47));
            MR_hl_field(MR_mktag(3), NewObj_52, 5) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(3), NewObj_52, 6) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(3), NewObj_52, 7) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(3), NewObj_52, 8) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(3), NewObj_52, 9) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Var_76 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_76, 0) = ((MR_Box) ((MR_Unsigned) 8U));
            MR_hl_field(MR_mktag(3), Var_76, 1) = ((MR_Box) (NewObj_52));
            MR_hl_field(MR_mktag(3), Var_76, 2) = ((MR_Box) (Context_17));
          }
          {
            NewObjStmts_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), NewObjStmts_53, 0) = ((MR_Box) (Var_76));
            MR_hl_field(MR_mktag(1), NewObjStmts_53, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
        }
        break;
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (13 * sizeof(MR_Word)), NULL, NULL);
      *EnvClassDefn_21 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (EnvClassName_14));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Context_17));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (&ml_backend__ml_elim_nested_scalar_common_2[1]));
      MR_hl_field(MR_mktag(0), base, 4) = (MR_Box) ((MR_Unsigned) (EnvClassKind_26));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Inherits_27));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (Fields_35));
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    ml_backend__ml_elim_nested__ml_init_env_6_p_0(Action_13, EnvClassId_15, EnvVarAddr_49, Context_17, &EnvPtrVarDecl_54, &InitEnvStmt_55);
    {
      Var_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_78, 0) = ((MR_Box) (EnvPtrVarDecl_54));
      MR_hl_field(MR_mktag(1), Var_78, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *EnvDefns_22 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (EnvVarDecl_48));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Var_78));
    }
    {
      Var_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_81, 0) = ((MR_Box) (InitEnvStmt_55));
      MR_hl_field(MR_mktag(1), Var_81, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    Var_80 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0), Var_81, LinkStackChainStmts_37);
    *Stmts_23 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0), NewObjStmts_53, Var_80);
  }
}

static void MR_CALL 
ml_backend__ml_elim_nested__ml_init_env_6_p_0(
  MR_Word Action_7,
  MR_Word EnvClassId_8,
  MR_Word EnvPtrVal_9,
  MR_Word Context_10,
  MR_Word * EnvPtrVarDecl_11,
  MR_Word * InitEnvPtr_12)
{
  {
    MR_Word EnvPtrVarName_13;
    MR_Word EnvPtrVarType_14;
    MR_Word AssignEnvPtr_16;
    MR_Word Var_18;
    MR_Word Var_23;

    switch (Action_7) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        EnvPtrVarName_13 = (MR_Word) (MR_mkword(MR_mktag(3), &ml_backend__ml_elim_nested_scalar_common_1[6]));
        break;
      case (MR_Integer) 0:
        EnvPtrVarName_13 = (MR_Word) (MR_mkword(MR_mktag(3), &ml_backend__ml_elim_nested_scalar_common_1[9]));
        break;
    }
    Var_23 = (MR_Word) (MR_mkword(MR_mktag(1), (MR_Word) (EnvClassId_8)));
    {
      EnvPtrVarType_14 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), EnvPtrVarType_14, 0) = ((MR_Box) ((MR_Unsigned) 7U));
      MR_hl_field(MR_mktag(3), EnvPtrVarType_14, 1) = ((MR_Box) (Var_23));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      *EnvPtrVarDecl_11 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (EnvPtrVarName_13));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Context_10));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (EnvPtrVarType_14));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_18 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_18, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(3), Var_18, 1) = ((MR_Box) (EnvPtrVarName_13));
      MR_hl_field(MR_mktag(3), Var_18, 2) = ((MR_Box) (EnvPtrVarType_14));
    }
    {
      AssignEnvPtr_16 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), AssignEnvPtr_16, 0) = ((MR_Box) (Var_18));
      MR_hl_field(MR_mktag(2), AssignEnvPtr_16, 1) = ((MR_Box) (EnvPtrVal_9));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      *InitEnvPtr_12 = base;
      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 8U));
      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (AssignEnvPtr_16));
      MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (Context_10));
    }
  }
}

static void MR_CALL 
ml_backend__ml_elim_nested__ml_chain_stack_frames_10_p_0(
  MR_Word ModuleName_11,
  MR_Word FuncName_12,
  MR_Word Context_13,
  MR_Word GCTraceStmts_14,
  MR_Word EnvClassId_15,
  MR_Word Fields0_16,
  MR_Word * Fields_17,
  MR_Word * EnvInitializer_18,
  MR_Word * LinkStackChain_19,
  MR_Word * GCTraceFuncDefns_20)
{
  {
    MR_Word CastThisFrameRval_23;
    MR_Word FramePtrDecl_24;
    MR_Word InitFramePtr_25;
    MR_Word GCTraceFuncLabel_26;
    MR_Word GCTraceFuncSignature_27;
    MR_Word GCTraceFuncParams_28;
    MR_Word GCTraceFuncDefn_29;
    MR_Word PrevFieldFlags_31;
    MR_Word PrevFieldDecl_33;
    MR_Word TraceFieldFlags_35;
    MR_Word TraceFieldType_36;
    MR_Word TraceFieldDecl_37;
    MR_Word EnvPtrTypeName_39;
    MR_Word EnvPtr_40;
    MR_Word AssignToStackChain_41;
    MR_Word Var_46 = (MR_Word) (MR_mkword(MR_mktag(1), (MR_Word) (EnvClassId_15)));
    MR_Word Var_48;
    MR_Word Var_54;
    MR_Word Var_56;
    MR_Word Var_59;
    MR_Word Var_60;
    MR_Word Var_61;
    MR_Word Var_62;
    MR_Word Var_63;
    MR_Word Var_68;
    MR_Word EnvPtrVarName_76;
    MR_Word AssignEnvPtr_79;
    MR_Word Var_81;

    {
      EnvPtrTypeName_39 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), EnvPtrTypeName_39, 0) = ((MR_Box) ((MR_Unsigned) 7U));
      MR_hl_field(MR_mktag(3), EnvPtrTypeName_39, 1) = ((MR_Box) (Var_46));
    }
    {
      CastThisFrameRval_23 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), CastThisFrameRval_23, 0) = ((MR_Box) ((MR_Unsigned) 4U));
      MR_hl_field(MR_mktag(3), CastThisFrameRval_23, 1) = ((MR_Box) (EnvPtrTypeName_39));
      MR_hl_field(MR_mktag(3), CastThisFrameRval_23, 2) = ((MR_Box) (MR_mkword(MR_mktag(2), &ml_backend__ml_elim_nested_scalar_common_2[2])));
    }
    EnvPtrVarName_76 = (MR_Word) (MR_mkword(MR_mktag(3), &ml_backend__ml_elim_nested_scalar_common_1[6]));
    {
      FramePtrDecl_24 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), FramePtrDecl_24, 0) = ((MR_Box) (EnvPtrVarName_76));
      MR_hl_field(MR_mktag(0), FramePtrDecl_24, 1) = ((MR_Box) (Context_13));
      MR_hl_field(MR_mktag(0), FramePtrDecl_24, 2) = ((MR_Box) (EnvPtrTypeName_39));
      MR_hl_field(MR_mktag(0), FramePtrDecl_24, 3) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), FramePtrDecl_24, 4) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_81 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_81, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(3), Var_81, 1) = ((MR_Box) (EnvPtrVarName_76));
      MR_hl_field(MR_mktag(3), Var_81, 2) = ((MR_Box) (EnvPtrTypeName_39));
    }
    {
      AssignEnvPtr_79 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), AssignEnvPtr_79, 0) = ((MR_Box) (Var_81));
      MR_hl_field(MR_mktag(2), AssignEnvPtr_79, 1) = ((MR_Box) (CastThisFrameRval_23));
    }
    {
      InitFramePtr_25 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), InitFramePtr_25, 0) = ((MR_Box) ((MR_Unsigned) 8U));
      MR_hl_field(MR_mktag(3), InitFramePtr_25, 1) = ((MR_Box) (AssignEnvPtr_79));
      MR_hl_field(MR_mktag(3), InitFramePtr_25, 2) = ((MR_Box) (Context_13));
    }
    {
      Var_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_48, 0) = ((MR_Box) (InitFramePtr_25));
      MR_hl_field(MR_mktag(1), Var_48, 1) = ((MR_Box) (GCTraceStmts_14));
    }
    ml_backend__ml_elim_nested__gen_gc_trace_func_9_p_0(ModuleName_11, FuncName_12, FramePtrDecl_24, Var_48, Context_13, &GCTraceFuncLabel_26, &GCTraceFuncSignature_27, &GCTraceFuncParams_28, &GCTraceFuncDefn_29);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *GCTraceFuncDefns_20 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (GCTraceFuncDefn_29));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    PrevFieldFlags_31 = ml_backend__ml_code_util__ml_gen_public_field_decl_flags_0_f_0();
    {
      PrevFieldDecl_33 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), PrevFieldDecl_33, 0) = ((MR_Box) ((MR_Unsigned) 12U));
      MR_hl_field(MR_mktag(0), PrevFieldDecl_33, 1) = ((MR_Box) (Context_13));
      MR_hl_field(MR_mktag(0), PrevFieldDecl_33, 2) = ((MR_Box) (PrevFieldFlags_31));
      MR_hl_field(MR_mktag(0), PrevFieldDecl_33, 3) = ((MR_Box) ((MR_Unsigned) 24U));
      MR_hl_field(MR_mktag(0), PrevFieldDecl_33, 4) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), PrevFieldDecl_33, 5) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    TraceFieldFlags_35 = ml_backend__ml_code_util__ml_gen_public_field_decl_flags_0_f_0();
    TraceFieldType_36 = (MR_Word) (MR_mkword(MR_mktag(2), (MR_Word) (GCTraceFuncParams_28)));
    {
      TraceFieldDecl_37 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TraceFieldDecl_37, 0) = ((MR_Box) ((MR_Unsigned) 16U));
      MR_hl_field(MR_mktag(0), TraceFieldDecl_37, 1) = ((MR_Box) (Context_13));
      MR_hl_field(MR_mktag(0), TraceFieldDecl_37, 2) = ((MR_Box) (TraceFieldFlags_35));
      MR_hl_field(MR_mktag(0), TraceFieldDecl_37, 3) = ((MR_Box) (TraceFieldType_36));
      MR_hl_field(MR_mktag(0), TraceFieldDecl_37, 4) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), TraceFieldDecl_37, 5) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_54, 0) = ((MR_Box) (TraceFieldDecl_37));
      MR_hl_field(MR_mktag(1), Var_54, 1) = ((MR_Box) (Fields0_16));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *Fields_17 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (PrevFieldDecl_33));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Var_54));
    }
    {
      Var_63 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_63, 0) = ((MR_Box) (GCTraceFuncLabel_26));
      MR_hl_field(MR_mktag(0), Var_63, 1) = ((MR_Box) (GCTraceFuncSignature_27));
    }
    Var_62 = (MR_Word) (MR_mkword(MR_mktag(1), (MR_Word) (Var_63)));
    {
      Var_61 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_61, 0) = ((MR_Box) ((MR_Unsigned) 1U));
      MR_hl_field(MR_mktag(3), Var_61, 1) = ((MR_Box) (Var_62));
    }
    {
      Var_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_60, 0) = ((MR_Box) (Var_61));
    }
    {
      Var_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_59, 0) = ((MR_Box) (Var_60));
      MR_hl_field(MR_mktag(1), Var_59, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_56, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_elim_nested_scalar_common_2[9])));
      MR_hl_field(MR_mktag(1), Var_56, 1) = ((MR_Box) (Var_59));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *EnvInitializer_18 = base;
      MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (Var_46));
      MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (Var_56));
    }
    {
      EnvPtr_40 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), EnvPtr_40, 0) = ((MR_Box) (Var_81));
    }
    {
      AssignToStackChain_41 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), AssignToStackChain_41, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_elim_nested_scalar_common_3[3])));
      MR_hl_field(MR_mktag(2), AssignToStackChain_41, 1) = ((MR_Box) (EnvPtr_40));
    }
    {
      Var_68 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_68, 0) = ((MR_Box) ((MR_Unsigned) 8U));
      MR_hl_field(MR_mktag(3), Var_68, 1) = ((MR_Box) (AssignToStackChain_41));
      MR_hl_field(MR_mktag(3), Var_68, 2) = ((MR_Box) (Context_13));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *LinkStackChain_19 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_68));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
  }
}

static void MR_CALL 
ml_backend__ml_elim_nested__gen_gc_trace_func_9_p_0(
  MR_Word PredModule_10,
  MR_Word FuncName_11,
  MR_Word FramePointerDefn_12,
  MR_Word GCTraceStmts_13,
  MR_Word Context_14,
  MR_Word * QualGCTraceFuncLabel_15,
  MR_Word * Signature_16,
  MR_Word * FuncParams_17,
  MR_Word * GCTraceFuncDefn_18)
{
  {
    MR_Word GCTraceFuncName_32;
    MR_Word Stmt_34;
    MR_Word EnvVarNames_37;
    MR_Word Var_47;
    MR_Word Var_52;

    *FuncParams_17 = (MR_Word) (&ml_backend__ml_elim_nested_scalar_common_1[8]);
    *Signature_16 = ml_backend__mlds__mlds_get_func_signature_1_f_0(*FuncParams_17);
    if (((MR_tag((MR_Word) FuncName_11)) == (MR_Integer) 1))
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_elim_nested.gen_gc_trace_func\'/9", (MR_String) "not a function");
        return;
      }
    else
    {
      MR_Word PlainFuncName_22 = (MR_Word) ((MR_Word) (FuncName_11));
      MR_Word FuncLabel_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PlainFuncName_22, (MR_Integer) 0))));
      MR_Word PredId_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PlainFuncName_22, (MR_Integer) 1))));
      MR_Word ProcLabel_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FuncLabel_23, (MR_Integer) 0))));
      MR_Word MaybeAux_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FuncLabel_23, (MR_Integer) 1))));
      MR_Word GCTraceMaybeAux_27;
      MR_Word GCTraceFuncLabel_30;
      MR_Word GCTracePlainFuncName_31;

      switch (MR_tag((MR_Word) MaybeAux_26)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(MaybeAux_26)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              GCTraceMaybeAux_27 = (MR_Word) ((MR_Unsigned) 4U);
              break;
            case (MR_Integer) 1:
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_elim_nested.gen_gc_trace_func\'/9", (MR_String) "gc trace func for gc trace func");
                return;
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Integer SeqNum_28 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), MaybeAux_26, (MR_Integer) 0))));

            {
              GCTraceMaybeAux_27 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(2), GCTraceMaybeAux_27, 0) = ((MR_Box) (SeqNum_28));
            }
          }
          break;
        case (MR_Integer) 2:
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_elim_nested.gen_gc_trace_func\'/9", (MR_String) "gc trace func for gc trace func");
            return;
          }
          break;
      }
      {
        GCTraceFuncLabel_30 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), GCTraceFuncLabel_30, 0) = ((MR_Box) (ProcLabel_25));
        MR_hl_field(MR_mktag(0), GCTraceFuncLabel_30, 1) = ((MR_Box) (GCTraceMaybeAux_27));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        *QualGCTraceFuncLabel_15 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (PredModule_10));
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GCTraceFuncLabel_30));
      }
      {
        GCTracePlainFuncName_31 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), GCTracePlainFuncName_31, 0) = ((MR_Box) (GCTraceFuncLabel_30));
        MR_hl_field(MR_mktag(0), GCTracePlainFuncName_31, 1) = ((MR_Box) (PredId_24));
      }
      GCTraceFuncName_32 = (MR_Word) ((MR_Word) (GCTracePlainFuncName_31));
    }
    {
      Var_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_47, 0) = ((MR_Box) (FramePointerDefn_12));
      MR_hl_field(MR_mktag(1), Var_47, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Stmt_34 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Stmt_34, 0) = ((MR_Box) (Var_47));
      MR_hl_field(MR_mktag(0), Stmt_34, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), Stmt_34, 2) = ((MR_Box) (GCTraceStmts_13));
      MR_hl_field(MR_mktag(0), Stmt_34, 3) = ((MR_Box) (Context_14));
    }
    EnvVarNames_37 = mercury__set__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0));
    {
      Var_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_52, 0) = ((MR_Box) (Stmt_34));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
      *GCTraceFuncDefn_18 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GCTraceFuncName_32));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Context_14));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (&ml_backend__ml_elim_nested_scalar_common_2[3]));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (*FuncParams_17));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_52));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (EnvVarNames_37));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) ((MR_Unsigned) 0U));
    }
  }
}

static MR_Word MR_CALL 
ml_backend__ml_elim_nested__ml_create_env_class_id_3_f_0(
  MR_String EnvClassName_5,
  MR_Word ModuleName_6,
  MR_Word Globals_7)
{
  {
    MR_Word ClassId_8;
    MR_Word OnHeap_9;
    MR_Word EnvClassKind_10;
    MR_Word ClassName_11;

    libs__globals__lookup_bool_option_3_p_0(Globals_7, (MR_Integer) 306, &OnHeap_9);
    switch (OnHeap_9) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        EnvClassKind_10 = (MR_Integer) 2;
        break;
      case (MR_Integer) 1:
        EnvClassKind_10 = (MR_Integer) 0;
        break;
    }
    {
      ClassName_11 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ClassName_11, 0) = ((MR_Box) (ModuleName_6));
      MR_hl_field(MR_mktag(0), ClassName_11, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(0), ClassName_11, 2) = ((MR_Box) (EnvClassName_5));
    }
    {
      ClassId_8 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ClassId_8, 0) = ((MR_Box) (ClassName_11));
      MR_hl_field(MR_mktag(0), ClassId_8, 1) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(0), ClassId_8, 2) = (MR_Box) ((MR_Unsigned) (EnvClassKind_10));
    }
    return ClassId_8;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_elim_nested____Unify____action_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = ml_backend__ml_elim_nested____Unify____action_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_elim_nested____Compare____action_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    ml_backend__ml_elim_nested____Compare____action_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
ml_backend__ml_elim_nested____Unify____elim_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = ml_backend__ml_elim_nested____Unify____elim_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_elim_nested____Compare____elim_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    ml_backend__ml_elim_nested____Compare____elim_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
ml_backend__ml_elim_nested____Unify____inserted_env_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = ml_backend__ml_elim_nested____Unify____inserted_env_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_elim_nested____Compare____inserted_env_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    ml_backend__ml_elim_nested____Compare____inserted_env_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
ml_backend__ml_elim_nested____Unify____outervars_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = ml_backend__ml_elim_nested____Unify____outervars_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_elim_nested____Compare____outervars_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    ml_backend__ml_elim_nested____Compare____outervars_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

void mercury__ml_backend__ml_elim_nested__init(void)
{
}

void mercury__ml_backend__ml_elim_nested__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&ml_backend__ml_elim_nested__ml_backend__ml_elim_nested__type_ctor_info_action_0);
	MR_register_type_ctor_info(&ml_backend__ml_elim_nested__ml_backend__ml_elim_nested__type_ctor_info_elim_info_0);
	MR_register_type_ctor_info(&ml_backend__ml_elim_nested__ml_backend__ml_elim_nested__type_ctor_info_inserted_env_0);
	MR_register_type_ctor_info(&ml_backend__ml_elim_nested__ml_backend__ml_elim_nested__type_ctor_info_outervars_0);
}

void mercury__ml_backend__ml_elim_nested__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__ml_backend__ml_elim_nested__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module ml_backend.ml_elim_nested.
