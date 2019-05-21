/*
** Automatically generated from `trailing_analysis.m'
** by the Mercury compiler,
** version rotd-2017-09-27
** configured for x86_64-pc-linux-gnu.
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


// :- module transform_hlds.trailing_analysis.
// :- implementation.

/*
INIT mercury__transform_hlds__trailing_analysis__init
ENDINIT
*/

#include "transform_hlds.trailing_analysis.mih"


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
#include "check_hlds.type_util.mih"
#include "hlds.code_model.mih"
#include "hlds.const_struct.mih"
#include "hlds.hlds_args.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_dependency_graph.mih"
#include "hlds.hlds_error_util.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_module.mih"
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
#include "mdbcomp.builtin_modules.mih"
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
#include "transform_hlds.intermod.mih"
#include "transform_hlds.mmc_analysis.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"
#include "string.format.mih"
#include "string.parse_util.mih"



struct transform_hlds__trailing_analysis__trail_annotate_goal_2_7_p_0_env_0_s {
  MR_bool transform_hlds__trailing_analysis__trail_annotate_goal_2_7_p_0_env_0__succeeded;
  MR_Word transform_hlds__trailing_analysis__trail_annotate_goal_2_7_p_0_env_0__CallPredInfo_45;
  jmp_buf transform_hlds__trailing_analysis__trail_annotate_goal_2_7_p_0_env_0__commit_0;
  MR_String transform_hlds__trailing_analysis__trail_annotate_goal_2_7_p_0_env_0__Name_47;
  MR_Integer transform_hlds__trailing_analysis__trail_annotate_goal_2_7_p_0_env_0__Arity_48;
  MR_Word transform_hlds__trailing_analysis__trail_annotate_goal_2_7_p_0_env_0__SpecialPredId_49;
  MR_String transform_hlds__trailing_analysis__trail_annotate_goal_2_7_p_0_env_0__Var_139;
  MR_Integer transform_hlds__trailing_analysis__trail_annotate_goal_2_7_p_0_env_0__Var_140;
};

struct transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0_env_0_s {
  MR_bool transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0_env_0__succeeded;
  MR_Word transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0_env_0__CallPredInfo_48;
  jmp_buf transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0_env_0__commit_0;
  MR_String transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0_env_0__Name_52;
  MR_Integer transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0_env_0__Arity_53;
  MR_Word transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0_env_0__SpecialPredId_54;
  MR_String transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0_env_0__Var_162;
  MR_Integer transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0_env_0__Var_163;
};

struct transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0_s {
  MR_bool transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0__succeeded;
  MR_Word transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0__ProcResults_10;
  jmp_buf transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0__commit_0;
  MR_Word transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0__ProcResult_58;
  MR_Box transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0__conv4_ProcResult_58;
  jmp_buf transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0__commit_1;
  MR_Word transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0__EResult_59;
  MR_Word transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0__Var_62;
  MR_Box transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0__conv5_EResult_59;
  jmp_buf transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0__commit_2;
  MR_Word transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0__Var_63;
  MR_Word transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0__CResult_64;
  MR_Box transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0__conv6_CResult_64;
};


static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__trailing_analysis__set_ordlist__pti_set_ordlist_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__trailing_analysis__list__pti_list_1__plain_transform_hlds__trailing_analysis__type_ctor_info_trail_proc_result_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__trailing_analysis__maybe__pti_maybe_1__plain_analysis__type_ctor_info_analysis_status_0;

static const MR_FA_TypeInfo_Struct1 transform_hlds__trailing_analysis__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__trailing_analysis__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__trailing_analysis__list__pti_list_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0;

static const MR_FA_TypeInfo_Struct1 transform_hlds__trailing_analysis__maybe__ti_maybe_1analysis__type_ctor_info_analysis_status_0;

static const MR_PseudoTypeInfo transform_hlds__trailing_analysis__transform_hlds__trailing_analysis__field_types_trail_proc_result_0_0[3];

static const MR_ConstString transform_hlds__trailing_analysis__transform_hlds__trailing_analysis__field_names_trail_proc_result_0_0[3];

static const MR_DuFunctorDesc transform_hlds__trailing_analysis__transform_hlds__trailing_analysis__du_functor_desc_trail_proc_result_0_0;

static const MR_DuFunctorDescPtr transform_hlds__trailing_analysis__transform_hlds__trailing_analysis__du_stag_ordered_trail_proc_result_0_0[1];

static const MR_DuPtagLayout transform_hlds__trailing_analysis__transform_hlds__trailing_analysis__du_ptag_ordered_trail_proc_result_0[1];

static const MR_DuFunctorDescPtr transform_hlds__trailing_analysis__transform_hlds__trailing_analysis__du_name_ordered_trail_proc_result_0[1];

static const MR_Integer transform_hlds__trailing_analysis__transform_hlds__trailing_analysis__functor_number_map_trail_proc_result_0[1];

static const MR_Integer transform_hlds__trailing_analysis__transform_hlds__trailing_analysis__functor_number_map_trailing_analysis_answer_0[1];

static const MR_NotagFunctorDesc transform_hlds__trailing_analysis__transform_hlds__trailing_analysis__notag_functor_desc_trailing_analysis_answer_0;

static MR_Word MR_CALL 
transform_hlds__trailing_analysis__IntroducedFrom__func__check_goal_for_trail_mods__453__1_1_f_0(
  MR_Word LambdaHeadVar__1_125);

static MR_bool MR_CALL 
transform_hlds__trailing_analysis__ClassMethod_for_analysis__to_term____transform_hlds__trailing_analysis__trailing_analysis_answer__arity0______analysis__from_term_2_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2);

static MR_Word MR_CALL 
transform_hlds__trailing_analysis__ClassMethod_for_analysis__to_term____transform_hlds__trailing_analysis__trailing_analysis_answer__arity0______analysis__to_term_1_1_f_0(
  MR_Word HeadVar__1_1);

static MR_bool MR_CALL 
transform_hlds__trailing_analysis__ClassMethod_for_analysis__partial_order____analysis__no_func_info__arity0__transform_hlds__trailing_analysis__trailing_analysis_answer__arity0______analysis__equivalent_3_3_p_0(
  MR_Word Status_8,
  MR_Word Status_3);

static MR_bool MR_CALL 
transform_hlds__trailing_analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_97_110_97_108_121_115_105_115_95_95_112_97_114_116_105_97_108_95_111_114_100_101_114_95_95_95_95_97_110_97_108_121_115_105_115_95_95_110_111_95_102_117_110_99_95_105_110_102_111_95_95_97_114_105_116_121_48_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_114_97_105_108_105_110_103_95_97_110_97_108_121_115_105_115_95_95_116_114_97_105_108_105_110_103_95_97_110_97_108_121_115_105_115_95_97_110_115_119_101_114_95_95_97_114_105_116_121_48_95_95_95_95_95_95_97_110_97_108_121_115_105_115_95_95_101_113_117_105_118_97_108_101_110_116_95_51_95_95_91_49_93_95_48_3_p_0(
  MR_Word Status_8,
  MR_Word Status_3);

static MR_bool MR_CALL 
transform_hlds__trailing_analysis__ClassMethod_for_analysis__partial_order____analysis__no_func_info__arity0__transform_hlds__trailing_analysis__trailing_analysis_answer__arity0______analysis__more_precise_than_3_3_p_0(
  MR_Word Answer1_4,
  MR_Word Answer2_5);

static MR_bool MR_CALL 
transform_hlds__trailing_analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_97_110_97_108_121_115_105_115_95_95_112_97_114_116_105_97_108_95_111_114_100_101_114_95_95_95_95_97_110_97_108_121_115_105_115_95_95_110_111_95_102_117_110_99_95_105_110_102_111_95_95_97_114_105_116_121_48_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_114_97_105_108_105_110_103_95_97_110_97_108_121_115_105_115_95_95_116_114_97_105_108_105_110_103_95_97_110_97_108_121_115_105_115_95_97_110_115_119_101_114_95_95_97_114_105_116_121_48_95_95_95_95_95_95_97_110_97_108_121_115_105_115_95_95_109_111_114_101_95_112_114_101_99_105_115_101_95_116_104_97_110_95_51_95_95_91_49_93_95_48_3_p_0(
  MR_Word Answer1_4,
  MR_Word Answer2_5);

static void MR_CALL 
transform_hlds__trailing_analysis__ClassMethod_for_analysis__analysis____analysis__no_func_info__arity0__analysis__any_call__arity0__transform_hlds__trailing_analysis__trailing_analysis_answer__arity0______analysis__get_func_info_6_6_p_0(
  MR_Word HeadVar__1_17,
  MR_Word HeadVar__2_18,
  MR_Word HeadVar__3_19);

static void MR_CALL 
transform_hlds__trailing_analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_97_110_97_108_121_115_105_115_95_95_97_110_97_108_121_115_105_115_95_95_95_95_97_110_97_108_121_115_105_115_95_95_110_111_95_102_117_110_99_95_105_110_102_111_95_95_97_114_105_116_121_48_95_95_97_110_97_108_121_115_105_115_95_95_97_110_121_95_99_97_108_108_95_95_97_114_105_116_121_48_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_114_97_105_108_105_110_103_95_97_110_97_108_121_115_105_115_95_95_116_114_97_105_108_105_110_103_95_97_110_97_108_121_115_105_115_95_97_110_115_119_101_114_95_95_97_114_105_116_121_48_95_95_95_95_95_95_97_110_97_108_121_115_105_115_95_95_103_101_116_95_102_117_110_99_95_105_110_102_111_95_54_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_93_95_48_6_p_0(void);

static MR_Word MR_CALL 
transform_hlds__trailing_analysis__ClassMethod_for_analysis__analysis____analysis__no_func_info__arity0__analysis__any_call__arity0__transform_hlds__trailing_analysis__trailing_analysis_answer__arity0______analysis__top_2_2_f_0(void);

static MR_Word MR_CALL 
transform_hlds__trailing_analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_97_110_97_108_121_115_105_115_95_95_97_110_97_108_121_115_105_115_95_95_95_95_97_110_97_108_121_115_105_115_95_95_110_111_95_102_117_110_99_95_105_110_102_111_95_95_97_114_105_116_121_48_95_95_97_110_97_108_121_115_105_115_95_95_97_110_121_95_99_97_108_108_95_95_97_114_105_116_121_48_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_114_97_105_108_105_110_103_95_97_110_97_108_121_115_105_115_95_95_116_114_97_105_108_105_110_103_95_97_110_97_108_121_115_105_115_95_97_110_115_119_101_114_95_95_97_114_105_116_121_48_95_95_95_95_95_95_97_110_97_108_121_115_105_115_95_95_116_111_112_95_50_95_95_91_49_44_32_50_93_95_48_2_f_0(void);

static MR_Word MR_CALL 
transform_hlds__trailing_analysis__ClassMethod_for_analysis__analysis____analysis__no_func_info__arity0__analysis__any_call__arity0__transform_hlds__trailing_analysis__trailing_analysis_answer__arity0______analysis__bottom_2_2_f_0(void);

static MR_Word MR_CALL 
transform_hlds__trailing_analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_97_110_97_108_121_115_105_115_95_95_97_110_97_108_121_115_105_115_95_95_95_95_97_110_97_108_121_115_105_115_95_95_110_111_95_102_117_110_99_95_105_110_102_111_95_95_97_114_105_116_121_48_95_95_97_110_97_108_121_115_105_115_95_95_97_110_121_95_99_97_108_108_95_95_97_114_105_116_121_48_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_114_97_105_108_105_110_103_95_97_110_97_108_121_115_105_115_95_95_116_114_97_105_108_105_110_103_95_97_110_97_108_121_115_105_115_95_97_110_115_119_101_114_95_95_97_114_105_116_121_48_95_95_95_95_95_95_97_110_97_108_121_115_105_115_95_95_98_111_116_116_111_109_95_50_95_95_91_49_44_32_50_93_95_48_2_f_0(void);

static MR_Word MR_CALL 
transform_hlds__trailing_analysis__ClassMethod_for_analysis__analysis____analysis__no_func_info__arity0__analysis__any_call__arity0__transform_hlds__trailing_analysis__trailing_analysis_answer__arity0______analysis__preferred_fixpoint_type_2_2_f_0(void);

static MR_Word MR_CALL 
transform_hlds__trailing_analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_97_110_97_108_121_115_105_115_95_95_97_110_97_108_121_115_105_115_95_95_95_95_97_110_97_108_121_115_105_115_95_95_110_111_95_102_117_110_99_95_105_110_102_111_95_95_97_114_105_116_121_48_95_95_97_110_97_108_121_115_105_115_95_95_97_110_121_95_99_97_108_108_95_95_97_114_105_116_121_48_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_114_97_105_108_105_110_103_95_97_110_97_108_121_115_105_115_95_95_116_114_97_105_108_105_110_103_95_97_110_97_108_121_115_105_115_95_97_110_115_119_101_114_95_95_97_114_105_116_121_48_95_95_95_95_95_95_97_110_97_108_121_115_105_115_95_95_112_114_101_102_101_114_114_101_100_95_102_105_120_112_111_105_110_116_95_116_121_112_101_95_50_95_95_91_49_44_32_50_93_95_48_2_f_0(void);

static MR_Integer MR_CALL 
transform_hlds__trailing_analysis__ClassMethod_for_analysis__analysis____analysis__no_func_info__arity0__analysis__any_call__arity0__transform_hlds__trailing_analysis__trailing_analysis_answer__arity0______analysis__analysis_version_number_2_2_f_0(void);

static MR_Integer MR_CALL 
transform_hlds__trailing_analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_97_110_97_108_121_115_105_115_95_95_97_110_97_108_121_115_105_115_95_95_95_95_97_110_97_108_121_115_105_115_95_95_110_111_95_102_117_110_99_95_105_110_102_111_95_95_97_114_105_116_121_48_95_95_97_110_97_108_121_115_105_115_95_95_97_110_121_95_99_97_108_108_95_95_97_114_105_116_121_48_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_114_97_105_108_105_110_103_95_97_110_97_108_121_115_105_115_95_95_116_114_97_105_108_105_110_103_95_97_110_97_108_121_115_105_115_95_97_110_115_119_101_114_95_95_97_114_105_116_121_48_95_95_95_95_95_95_97_110_97_108_121_115_105_115_95_95_97_110_97_108_121_115_105_115_95_118_101_114_115_105_111_110_95_110_117_109_98_101_114_95_50_95_95_91_49_44_32_50_93_95_48_2_f_0(void);

static MR_String MR_CALL 
transform_hlds__trailing_analysis__ClassMethod_for_analysis__analysis____analysis__no_func_info__arity0__analysis__any_call__arity0__transform_hlds__trailing_analysis__trailing_analysis_answer__arity0______analysis__analysis_name_2_2_f_0(void);

static MR_String MR_CALL 
transform_hlds__trailing_analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_97_110_97_108_121_115_105_115_95_95_97_110_97_108_121_115_105_115_95_95_95_95_97_110_97_108_121_115_105_115_95_95_110_111_95_102_117_110_99_95_105_110_102_111_95_95_97_114_105_116_121_48_95_95_97_110_97_108_121_115_105_115_95_95_97_110_121_95_99_97_108_108_95_95_97_114_105_116_121_48_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_114_97_105_108_105_110_103_95_97_110_97_108_121_115_105_115_95_95_116_114_97_105_108_105_110_103_95_97_110_97_108_121_115_105_115_95_97_110_115_119_101_114_95_95_97_114_105_116_121_48_95_95_95_95_95_95_97_110_97_108_121_115_105_115_95_95_97_110_97_108_121_115_105_115_95_110_97_109_101_95_50_95_95_91_49_44_32_50_93_95_48_2_f_0(void);

static void MR_CALL 
transform_hlds__trailing_analysis____Compare____trail_proc_result_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
transform_hlds__trailing_analysis____Unify____trail_proc_result_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
transform_hlds__trailing_analysis__output_proc_name_4_p_0(
  MR_Word Moduleinfo_5,
  MR_Word PPId_6);

static void MR_CALL 
transform_hlds__trailing_analysis__maybe_record_trailing_result_2_6_p_0(
  MR_Word ModuleInfo_7,
  MR_Word PredId_8,
  MR_Word PredInfo_9,
  MR_Integer ProcId_10,
  MR_Word STATE_VARIABLE_AnalysisInfo_0_18,
  MR_Word * STATE_VARIABLE_AnalysisInfo_19);

static void MR_CALL 
transform_hlds__trailing_analysis__maybe_record_trailing_result_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__trailing_analysis__maybe_record_trailing_result_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word PredId_6,
  MR_Word STATE_VARIABLE_AnalysisInfo_0_10,
  MR_Word * STATE_VARIABLE_AnalysisInfo_11);

static void MR_CALL 
transform_hlds__trailing_analysis__trail_annotate_case_6_p_0(
  MR_Word VarTypes_7,
  MR_Word STATE_VARIABLE_Case_0_15,
  MR_Word * STATE_VARIABLE_Case_16,
  MR_Word * Status_9,
  MR_Word STATE_VARIABLE_ModuleInfo_0_17,
  MR_Word * STATE_VARIABLE_ModuleInfo_18);

static void MR_CALL 
transform_hlds__trailing_analysis__trail_annotate_proc_3_p_0(
  MR_Word PPId_4,
  MR_Word STATE_VARIABLE_ModuleInfo_0_11,
  MR_Word * STATE_VARIABLE_ModuleInfo_12);

static void MR_CALL 
transform_hlds__trailing_analysis__trail_annotate_goal_2_7_p_0_1(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__trailing_analysis__trail_annotate_goal_2_7_p_0_2(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__trailing_analysis__trail_annotate_goal_2_7_p_0_3(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__trailing_analysis__trail_annotate_goal_2_7_p_0(
  MR_Word VarTypes_8,
  MR_Word GoalInfo_9,
  MR_Word STATE_VARIABLE_GoalExpr_0_109,
  MR_Word * STATE_VARIABLE_GoalExpr_110,
  MR_Word * Status_11,
  MR_Word STATE_VARIABLE_ModuleInfo_0_111,
  MR_Word * STATE_VARIABLE_ModuleInfo_112);

static void MR_CALL 
transform_hlds__trailing_analysis__trail_annotate_goal_6_p_0(
  MR_Word VarTypes_7,
  MR_Word STATE_VARIABLE_Goal_0_15,
  MR_Word * STATE_VARIABLE_Goal_16,
  MR_Word * Status_9,
  MR_Word STATE_VARIABLE_ModuleInfo_0_17,
  MR_Word * STATE_VARIABLE_ModuleInfo_18);

static void MR_CALL 
transform_hlds__trailing_analysis__trail_annotate_cases_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__trailing_analysis__trail_annotate_cases_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
transform_hlds__trailing_analysis__trail_annotate_cases_6_p_0(
  MR_Word VarTypes_7,
  MR_Word STATE_VARIABLE_Cases_0_12,
  MR_Word * STATE_VARIABLE_Cases_13,
  MR_Word * Status_9,
  MR_Word STATE_VARIABLE_ModuleInfo_0_14,
  MR_Word * STATE_VARIABLE_ModuleInfo_15);

static void MR_CALL 
transform_hlds__trailing_analysis__trail_annotate_goal_list_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__trailing_analysis__trail_annotate_goal_list_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
transform_hlds__trailing_analysis__trail_annotate_goal_list_6_p_0(
  MR_Word VarTypes_7,
  MR_Word STATE_VARIABLE_Goals_0_12,
  MR_Word * STATE_VARIABLE_Goals_13,
  MR_Word * Status_9,
  MR_Word STATE_VARIABLE_ModuleInfo_0_14,
  MR_Word * STATE_VARIABLE_ModuleInfo_15);

static void MR_CALL 
transform_hlds__trailing_analysis__trail_check_type_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word Type_6,
  MR_Word STATE_VARIABLE_Status_0_8,
  MR_Word * STATE_VARIABLE_Status_9);

static void MR_CALL 
transform_hlds__trailing_analysis__trail_check_type_2_3_f_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__trailing_analysis__trail_check_type_2_3_f_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__trailing_analysis__trail_check_type_2_3_f_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__trailing_analysis__trail_check_type_2_3_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_Word MR_CALL 
transform_hlds__trailing_analysis__trail_check_type_2_3_f_0(
  MR_Word ModuleInfo_5,
  MR_Word Type_6,
  MR_Word TypeCtorCat_7);

static void MR_CALL 
transform_hlds__trailing_analysis__trail_check_call_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__trailing_analysis__trail_check_call_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Word VarTypes_7,
  MR_Word PPId_8,
  MR_Word Args_9,
  MR_Word * Result_10);

static void MR_CALL 
transform_hlds__trailing_analysis__combine_maybe_trail_analysis_status_3_p_0(
  MR_Word MaybeStatusA_4,
  MR_Word MaybeStatusB_5,
  MR_Word * MaybeStatus_6);

static void MR_CALL 
transform_hlds__trailing_analysis__combine_trailing_status_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3);

static MR_bool MR_CALL 
transform_hlds__trailing_analysis__trail_get_conditional_closure_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word PPId_6,
  MR_Word STATE_VARIABLE_Conditionals_0_14,
  MR_Word * STATE_VARIABLE_Conditionals_15);

static MR_bool MR_CALL 
transform_hlds__trailing_analysis__trail_get_conditional_closures_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__trailing_analysis__trail_get_conditional_closures_3_p_0(
  MR_Word ModuleInfo_4,
  MR_Word Closures_5,
  MR_Word * Conditionals_6);

static void MR_CALL 
transform_hlds__trailing_analysis__check_proc_for_trail_mods_6_p_0(
  MR_Word SCC_7,
  MR_Word PPId_8,
  MR_Word STATE_VARIABLE_Results_0_17,
  MR_Word * STATE_VARIABLE_Results_18,
  MR_Word STATE_VARIABLE_ModuleInfo_0_19,
  MR_Word * STATE_VARIABLE_ModuleInfo_20);

static MR_Box MR_CALL 
transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0_1(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0_2(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0_3(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0(
  MR_Word SCC_8,
  MR_Word VarTypes_9,
  MR_Word Goal_10,
  MR_Word * Result_11,
  MR_Word * MaybeAnalysisStatus_12,
  MR_Word STATE_VARIABLE_ModuleInfo_0_109,
  MR_Word * STATE_VARIABLE_ModuleInfo_110);

static void MR_CALL 
transform_hlds__trailing_analysis__search_trail_analysis_status_5_p_0(
  MR_Word PPId_6,
  MR_Word * Result_7,
  MR_Word * AnalysisStatus_8,
  MR_Word STATE_VARIABLE_ModuleInfo_0_12,
  MR_Word * STATE_VARIABLE_ModuleInfo_13);

static void MR_CALL 
transform_hlds__trailing_analysis__trail_check_types_2_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_Word MR_CALL 
transform_hlds__trailing_analysis__trail_check_types_2_f_0(
  MR_Word ModuleInfo_4,
  MR_Word Types_5);

static void MR_CALL 
transform_hlds__trailing_analysis__trail_check_vars_3_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_Word MR_CALL 
transform_hlds__trailing_analysis__trail_check_vars_3_f_0(
  MR_Word ModuleInfo_5,
  MR_Word VarTypes_6,
  MR_Word Vars_7);

static void MR_CALL 
transform_hlds__trailing_analysis__trail_check_call_2_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__trailing_analysis__trail_check_call_2_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Word VarTypes_7,
  MR_Word PPId_8,
  MR_Word Args_9,
  MR_Word * MaybeResult_10);

static MR_bool MR_CALL 
transform_hlds__trailing_analysis__pred_info_has_known_trail_status_2_p_0(
  MR_Word PredInfo_3,
  MR_Word * Status_4);

static MR_Word MR_CALL 
transform_hlds__trailing_analysis__scope_implies_trail_mod_3_f_0(
  MR_Word InnerCodeModel_5,
  MR_Word OuterCodeModel_6,
  MR_Word InnerStatus_7);

static MR_Word MR_CALL 
transform_hlds__trailing_analysis__attributes_imply_trail_mod_1_f_0(
  MR_Word Attributes_3);

static void MR_CALL 
transform_hlds__trailing_analysis__check_goals_for_trail_mods_7_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__trailing_analysis__check_goals_for_trail_mods_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__trailing_analysis__check_goals_for_trail_mods_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
transform_hlds__trailing_analysis__check_goals_for_trail_mods_7_p_0(
  MR_Word SCC_8,
  MR_Word VarTypes_9,
  MR_Word Goals_10,
  MR_Word * Result_11,
  MR_Word * MaybeAnalysisStatus_12,
  MR_Word STATE_VARIABLE_ModuleInfo_0_16,
  MR_Word * STATE_VARIABLE_ModuleInfo_17);

static void MR_CALL 
transform_hlds__trailing_analysis__trail_maybe_analysis_status_2_p_0(
  MR_Word ProcResult_3,
  MR_Word * AnalysisStatus_4);

static void MR_CALL 
transform_hlds__trailing_analysis__set_trailing_info_4_p_0(
  MR_Word ProcTrailingInfo_5,
  MR_Word PPId_6,
  MR_Word STATE_VARIABLE_ModuleInfo_0_11,
  MR_Word * STATE_VARIABLE_ModuleInfo_12);

static void MR_CALL 
transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_17(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_16(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_15(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_14(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_2(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_4(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_3(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_5(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_6(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_8(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_7(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_9(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_10(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_12(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_11(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_13(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0(
  MR_Word Debug_6,
  MR_Word Pass1Only_7,
  MR_Word SCC_8,
  MR_Word STATE_VARIABLE_ModuleInfo_0_15,
  MR_Word * STATE_VARIABLE_ModuleInfo_16);

static void MR_CALL 
transform_hlds__trailing_analysis__dump_trail_usage_debug_info_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__trailing_analysis__dump_trail_usage_debug_info_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Word SCC_7,
  MR_Word Status_8);

static void MR_CALL 
transform_hlds__trailing_analysis__analyse_trail_usage_2_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__trailing_analysis__analyse_trail_usage_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__trailing_analysis____Unify____trail_proc_result_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__trailing_analysis____Compare____trail_proc_result_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__trailing_analysis____Unify____trailing_analysis_answer_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__trailing_analysis____Compare____trailing_analysis_answer_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_Box MR_CALL 
transform_hlds__trailing_analysis__ClassMethod_for_analysis__to_term____transform_hlds__trailing_analysis__trailing_analysis_answer__arity0______analysis__to_term_1_1_f_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
transform_hlds__trailing_analysis__ClassMethod_for_analysis__to_term____transform_hlds__trailing_analysis__trailing_analysis_answer__arity0______analysis__from_term_2_2_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_bool MR_CALL 
transform_hlds__trailing_analysis__ClassMethod_for_analysis__partial_order____analysis__no_func_info__arity0__transform_hlds__trailing_analysis__trailing_analysis_answer__arity0______analysis__more_precise_than_3_3_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__trailing_analysis__ClassMethod_for_analysis__partial_order____analysis__no_func_info__arity0__transform_hlds__trailing_analysis__trailing_analysis_answer__arity0______analysis__equivalent_3_3_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_Box MR_CALL 
transform_hlds__trailing_analysis__ClassMethod_for_analysis__analysis____analysis__no_func_info__arity0__analysis__any_call__arity0__transform_hlds__trailing_analysis__trailing_analysis_answer__arity0______analysis__analysis_name_2_2_f_0_10001(
  MR_Box closure_arg);

static MR_Box MR_CALL 
transform_hlds__trailing_analysis__ClassMethod_for_analysis__analysis____analysis__no_func_info__arity0__analysis__any_call__arity0__transform_hlds__trailing_analysis__trailing_analysis_answer__arity0______analysis__analysis_version_number_2_2_f_0_10001(
  MR_Box closure_arg);

static MR_Box MR_CALL 
transform_hlds__trailing_analysis__ClassMethod_for_analysis__analysis____analysis__no_func_info__arity0__analysis__any_call__arity0__transform_hlds__trailing_analysis__trailing_analysis_answer__arity0______analysis__preferred_fixpoint_type_2_2_f_0_10001(
  MR_Box closure_arg);

static MR_Box MR_CALL 
transform_hlds__trailing_analysis__ClassMethod_for_analysis__analysis____analysis__no_func_info__arity0__analysis__any_call__arity0__transform_hlds__trailing_analysis__trailing_analysis_answer__arity0______analysis__bottom_2_2_f_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
transform_hlds__trailing_analysis__ClassMethod_for_analysis__analysis____analysis__no_func_info__arity0__analysis__any_call__arity0__transform_hlds__trailing_analysis__trailing_analysis_answer__arity0______analysis__top_2_2_f_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
transform_hlds__trailing_analysis__ClassMethod_for_analysis__analysis____analysis__no_func_info__arity0__analysis__any_call__arity0__transform_hlds__trailing_analysis__trailing_analysis_answer__arity0______analysis__get_func_info_6_6_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_6);


static /* final */ const MR_Box transform_hlds__trailing_analysis_scalar_common_1[6][2];

static /* final */ const MR_Box transform_hlds__trailing_analysis_scalar_common_2[10][3];

static /* final */ const MR_Box transform_hlds__trailing_analysis_scalar_common_3[4][5];

static /* final */ const MR_Box transform_hlds__trailing_analysis_scalar_common_4[4][6];

static /* final */ const MR_Box transform_hlds__trailing_analysis_scalar_common_5[1][8];

static /* final */ const MR_Box transform_hlds__trailing_analysis_scalar_common_6[5][7];

static /* final */ const MR_Box transform_hlds__trailing_analysis_scalar_common_7[4][9];

static /* final */ const MR_Box transform_hlds__trailing_analysis_scalar_common_8[1][1];

static /* final */ const MR_Box transform_hlds__trailing_analysis_scalar_common_9[1][10];


/* sealed */ struct transform_hlds__trailing_analysis__vector_common_type_10_0_s {
  const MR_Word transform_hlds__trailing_analysis__vector_common_type_10_0__vct_10_f_0;
};

static /* final */ const struct transform_hlds__trailing_analysis__vector_common_type_10_0_s transform_hlds__trailing_analysis_vector_common_10[4];



static /* final */ const MR_Box transform_hlds__trailing_analysis_scalar_common_1[6][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&transform_hlds__trailing_analysis__transform_hlds__trailing_analysis__type_ctor_info_trail_proc_result_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&analysis__analysis__type_ctor_info_analysis_status_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0))
  },
  /* row 4 */
  {
    ((MR_Box) (base_typeclass_info_analysis__to_term__arity1__analysis__any_call__arity0__)),
    ((MR_Box) (&analysis__analysis__type_ctor_info_any_call_0))
  },
  /* row 5 */
  {
    ((MR_Box) (base_typeclass_info_analysis__to_term__arity1__transform_hlds__trailing_analysis__trailing_analysis_answer__arity0__)),
    ((MR_Box) (&transform_hlds__trailing_analysis__transform_hlds__trailing_analysis__type_ctor_info_trailing_analysis_answer_0))
  },
};

static /* final */ const MR_Box transform_hlds__trailing_analysis_scalar_common_2[10][3] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_analysis__partial_order__arity2__analysis__no_func_info__arity0__analysis__any_call__arity0__)),
    ((MR_Box) (&analysis__analysis__type_ctor_info_no_func_info_0)),
    ((MR_Box) (&analysis__analysis__type_ctor_info_any_call_0))
  },
  /* row 1 */
  {
    ((MR_Box) (base_typeclass_info_analysis__partial_order__arity2__analysis__no_func_info__arity0__transform_hlds__trailing_analysis__trailing_analysis_answer__arity0__)),
    ((MR_Box) (&analysis__analysis__type_ctor_info_no_func_info_0)),
    ((MR_Box) (&transform_hlds__trailing_analysis__transform_hlds__trailing_analysis__type_ctor_info_trailing_analysis_answer_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&transform_hlds__trailing_analysis_scalar_common_3[2])),
    ((MR_Box) (transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_14)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) (&transform_hlds__trailing_analysis_scalar_common_4[1])),
    ((MR_Box) (transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_15)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) (&transform_hlds__trailing_analysis_scalar_common_4[2])),
    ((MR_Box) (transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_17)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 5 */
  {
    ((MR_Box) (&transform_hlds__trailing_analysis_scalar_common_4[3])),
    ((MR_Box) (transform_hlds__trailing_analysis__check_goals_for_trail_mods_7_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 6 */
  {
    ((MR_Box) (&transform_hlds__trailing_analysis_scalar_common_4[1])),
    ((MR_Box) (transform_hlds__trailing_analysis__check_goals_for_trail_mods_7_p_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 7 */
  {
    ((MR_Box) (&transform_hlds__trailing_analysis_scalar_common_3[3])),
    ((MR_Box) (transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0_4)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 8 */
  {
    ((MR_Box) (&transform_hlds__trailing_analysis_scalar_common_4[3])),
    ((MR_Box) (transform_hlds__trailing_analysis__trail_annotate_goal_list_6_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 9 */
  {
    ((MR_Box) (&transform_hlds__trailing_analysis_scalar_common_4[3])),
    ((MR_Box) (transform_hlds__trailing_analysis__trail_annotate_cases_6_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box transform_hlds__trailing_analysis_scalar_common_3[4][5] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_analysis__call_pattern__arity2__analysis__no_func_info__arity0__analysis__any_call__arity0__)),
    ((MR_Box) (&transform_hlds__trailing_analysis_scalar_common_2[0])),
    ((MR_Box) (&transform_hlds__trailing_analysis_scalar_common_1[4])),
    ((MR_Box) (&analysis__analysis__type_ctor_info_no_func_info_0)),
    ((MR_Box) (&analysis__analysis__type_ctor_info_any_call_0))
  },
  /* row 1 */
  {
    ((MR_Box) (base_typeclass_info_analysis__answer_pattern__arity2__analysis__no_func_info__arity0__transform_hlds__trailing_analysis__trailing_analysis_answer__arity0__)),
    ((MR_Box) (&transform_hlds__trailing_analysis_scalar_common_2[1])),
    ((MR_Box) (&transform_hlds__trailing_analysis_scalar_common_1[5])),
    ((MR_Box) (&analysis__analysis__type_ctor_info_no_func_info_0)),
    ((MR_Box) (&transform_hlds__trailing_analysis__transform_hlds__trailing_analysis__type_ctor_info_trailing_analysis_answer_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&transform_hlds__trailing_analysis__transform_hlds__trailing_analysis__type_ctor_info_trail_proc_result_0)),
    ((MR_Box) (&transform_hlds__trailing_analysis__maybe__pti_maybe_1__plain_analysis__type_ctor_info_analysis_status_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0))
  },
};

static /* final */ const MR_Box transform_hlds__trailing_analysis_scalar_common_4[4][6] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_analysis__analysis__arity3__analysis__no_func_info__arity0__analysis__any_call__arity0__transform_hlds__trailing_analysis__trailing_analysis_answer__arity0__)),
    ((MR_Box) (&transform_hlds__trailing_analysis_scalar_common_3[0])),
    ((MR_Box) (&transform_hlds__trailing_analysis_scalar_common_3[1])),
    ((MR_Box) (&analysis__analysis__type_ctor_info_no_func_info_0)),
    ((MR_Box) (&analysis__analysis__type_ctor_info_any_call_0)),
    ((MR_Box) (&transform_hlds__trailing_analysis__transform_hlds__trailing_analysis__type_ctor_info_trailing_analysis_answer_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&transform_hlds__trailing_analysis__maybe__pti_maybe_1__plain_analysis__type_ctor_info_analysis_status_0)),
    ((MR_Box) (&transform_hlds__trailing_analysis__maybe__pti_maybe_1__plain_analysis__type_ctor_info_analysis_status_0)),
    ((MR_Box) (&transform_hlds__trailing_analysis__maybe__pti_maybe_1__plain_analysis__type_ctor_info_analysis_status_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_trailing_status_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_trailing_status_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_trailing_status_0))
  },
};

static /* final */ const MR_Box transform_hlds__trailing_analysis_scalar_common_5[1][8] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&transform_hlds__trailing_analysis__set_ordlist__pti_set_ordlist_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0))
  },
};

static /* final */ const MR_Box transform_hlds__trailing_analysis_scalar_common_6[5][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&analysis__analysis__type_ctor_info_analysis_info_0)),
    ((MR_Box) (&analysis__analysis__type_ctor_info_analysis_info_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_trailing_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_trailing_status_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_trailing_status_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&transform_hlds__trailing_analysis__list__pti_list_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&transform_hlds__trailing_analysis__list__pti_list_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0))
  },
};

static /* final */ const MR_Box transform_hlds__trailing_analysis_scalar_common_7[4][9] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&transform_hlds__trailing_analysis__set_ordlist__pti_set_ordlist_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&transform_hlds__trailing_analysis__list__pti_list_1__plain_transform_hlds__trailing_analysis__type_ctor_info_trail_proc_result_0)),
    ((MR_Box) (&transform_hlds__trailing_analysis__list__pti_list_1__plain_transform_hlds__trailing_analysis__type_ctor_info_trail_proc_result_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&transform_hlds__trailing_analysis__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_trailing_status_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&transform_hlds__trailing_analysis__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_trailing_status_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&analysis__analysis__type_ctor_info_analysis_info_0)),
    ((MR_Box) (&analysis__analysis__type_ctor_info_analysis_info_0))
  },
};

static /* final */ const MR_Box transform_hlds__trailing_analysis_scalar_common_8[1][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_Integer) 2))
  },
};

static /* final */ const MR_Box transform_hlds__trailing_analysis_scalar_common_9[1][10] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 7)),
    ((MR_Box) (&transform_hlds__trailing_analysis__set_ordlist__pti_set_ordlist_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&transform_hlds__trailing_analysis__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_trailing_status_0)),
    ((MR_Box) (&transform_hlds__trailing_analysis__maybe__pti_maybe_1__plain_analysis__type_ctor_info_analysis_status_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0))
  },
};


static /* final */ const struct transform_hlds__trailing_analysis__vector_common_type_10_0_s transform_hlds__trailing_analysis_vector_common_10[4] = {
  /* row 0 */   {     (MR_Integer) 2 },
  /* row 1 */   {     (MR_Integer) 0 },
  /* row 2 */   {     (MR_Integer) 2 },
  /* row 3 */   {     (MR_Integer) 0 },
};


#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__trailing_analysis__set_ordlist__pti_set_ordlist_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__trailing_analysis__list__pti_list_1__plain_transform_hlds__trailing_analysis__type_ctor_info_trail_proc_result_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &transform_hlds__trailing_analysis__transform_hlds__trailing_analysis__type_ctor_info_trail_proc_result_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__trailing_analysis__maybe__pti_maybe_1__plain_analysis__type_ctor_info_analysis_status_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_PseudoTypeInfo) &analysis__analysis__type_ctor_info_analysis_status_0
  }
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__trailing_analysis__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__trailing_analysis__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &transform_hlds__trailing_analysis__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__trailing_analysis__list__pti_list_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0
  }
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__trailing_analysis__maybe__ti_maybe_1analysis__type_ctor_info_analysis_status_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &analysis__analysis__type_ctor_info_analysis_status_0
  }
};

static const MR_PseudoTypeInfo transform_hlds__trailing_analysis__transform_hlds__trailing_analysis__field_types_trail_proc_result_0_0[3] = {
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_trailing_status_0,
  (MR_PseudoTypeInfo) &transform_hlds__trailing_analysis__maybe__ti_maybe_1analysis__type_ctor_info_analysis_status_0
};

static const MR_ConstString transform_hlds__trailing_analysis__transform_hlds__trailing_analysis__field_names_trail_proc_result_0_0[3] = {
  (MR_String) "tpr_ppid",
  (MR_String) "tpr_status",
  (MR_String) "tpr_maybe_analysis_status"
};

static const MR_DuFunctorDesc transform_hlds__trailing_analysis__transform_hlds__trailing_analysis__du_functor_desc_trail_proc_result_0_0 = {
  (MR_String) "trail_proc_result",
  (MR_Integer) 3,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  transform_hlds__trailing_analysis__transform_hlds__trailing_analysis__field_types_trail_proc_result_0_0,
  transform_hlds__trailing_analysis__transform_hlds__trailing_analysis__field_names_trail_proc_result_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr transform_hlds__trailing_analysis__transform_hlds__trailing_analysis__du_stag_ordered_trail_proc_result_0_0[1] = {
  &transform_hlds__trailing_analysis__transform_hlds__trailing_analysis__du_functor_desc_trail_proc_result_0_0
};

static const MR_DuPtagLayout transform_hlds__trailing_analysis__transform_hlds__trailing_analysis__du_ptag_ordered_trail_proc_result_0[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    transform_hlds__trailing_analysis__transform_hlds__trailing_analysis__du_stag_ordered_trail_proc_result_0_0
  }
};

static const MR_DuFunctorDescPtr transform_hlds__trailing_analysis__transform_hlds__trailing_analysis__du_name_ordered_trail_proc_result_0[1] = {
  &transform_hlds__trailing_analysis__transform_hlds__trailing_analysis__du_functor_desc_trail_proc_result_0_0
};

static const MR_Integer transform_hlds__trailing_analysis__transform_hlds__trailing_analysis__functor_number_map_trail_proc_result_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct transform_hlds__trailing_analysis__transform_hlds__trailing_analysis__type_ctor_info_trail_proc_result_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 1,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__trailing_analysis____Unify____trail_proc_result_0_0_10001)),
  ((MR_Box) (transform_hlds__trailing_analysis____Compare____trail_proc_result_0_0_10001)),
  (MR_String) "transform_hlds.trailing_analysis",
  (MR_String) "trail_proc_result",
  {     transform_hlds__trailing_analysis__transform_hlds__trailing_analysis__du_name_ordered_trail_proc_result_0 },
  {     transform_hlds__trailing_analysis__transform_hlds__trailing_analysis__du_ptag_ordered_trail_proc_result_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  transform_hlds__trailing_analysis__transform_hlds__trailing_analysis__functor_number_map_trail_proc_result_0
};

static const MR_Integer transform_hlds__trailing_analysis__transform_hlds__trailing_analysis__functor_number_map_trailing_analysis_answer_0[1] = {
  (MR_Integer) 0
};

static const MR_NotagFunctorDesc transform_hlds__trailing_analysis__transform_hlds__trailing_analysis__notag_functor_desc_trailing_analysis_answer_0 = {
  (MR_String) "trailing_analysis_answer",
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_trailing_status_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

const MR_TypeCtorInfo_Struct transform_hlds__trailing_analysis__transform_hlds__trailing_analysis__type_ctor_info_trailing_analysis_answer_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (transform_hlds__trailing_analysis____Unify____trailing_analysis_answer_0_0_10001)),
  ((MR_Box) (transform_hlds__trailing_analysis____Compare____trailing_analysis_answer_0_0_10001)),
  (MR_String) "transform_hlds.trailing_analysis",
  (MR_String) "trailing_analysis_answer",
  {     &transform_hlds__trailing_analysis__transform_hlds__trailing_analysis__notag_functor_desc_trailing_analysis_answer_0 },
  {     &transform_hlds__trailing_analysis__transform_hlds__trailing_analysis__notag_functor_desc_trailing_analysis_answer_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  transform_hlds__trailing_analysis__transform_hlds__trailing_analysis__functor_number_map_trailing_analysis_answer_0
};

const MR_BaseTypeclassInfo base_typeclass_info_analysis__to_term__arity1__transform_hlds__trailing_analysis__trailing_analysis_answer__arity0__[7] = {
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 1)),
  ((MR_Box) (MR_Word) ((MR_Integer) 2)),
  ((MR_Box) (transform_hlds__trailing_analysis__ClassMethod_for_analysis__to_term____transform_hlds__trailing_analysis__trailing_analysis_answer__arity0______analysis__to_term_1_1_f_0_10001)),
  ((MR_Box) (transform_hlds__trailing_analysis__ClassMethod_for_analysis__to_term____transform_hlds__trailing_analysis__trailing_analysis_answer__arity0______analysis__from_term_2_2_p_0_10001))
};

const MR_BaseTypeclassInfo base_typeclass_info_analysis__partial_order__arity2__analysis__no_func_info__arity0__transform_hlds__trailing_analysis__trailing_analysis_answer__arity0__[7] = {
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 2)),
  ((MR_Box) (MR_Word) ((MR_Integer) 2)),
  ((MR_Box) (transform_hlds__trailing_analysis__ClassMethod_for_analysis__partial_order____analysis__no_func_info__arity0__transform_hlds__trailing_analysis__trailing_analysis_answer__arity0______analysis__more_precise_than_3_3_p_0_10001)),
  ((MR_Box) (transform_hlds__trailing_analysis__ClassMethod_for_analysis__partial_order____analysis__no_func_info__arity0__transform_hlds__trailing_analysis__trailing_analysis_answer__arity0______analysis__equivalent_3_3_p_0_10001))
};

const MR_BaseTypeclassInfo base_typeclass_info_analysis__answer_pattern__arity2__analysis__no_func_info__arity0__transform_hlds__trailing_analysis__trailing_analysis_answer__arity0__[5] = {
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 2)),
  ((MR_Box) (MR_Word) ((MR_Integer) 2)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0))
};

const MR_BaseTypeclassInfo base_typeclass_info_analysis__analysis__arity3__analysis__no_func_info__arity0__analysis__any_call__arity0__transform_hlds__trailing_analysis__trailing_analysis_answer__arity0__[11] = {
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 2)),
  ((MR_Box) (MR_Word) ((MR_Integer) 3)),
  ((MR_Box) (MR_Word) ((MR_Integer) 6)),
  ((MR_Box) (transform_hlds__trailing_analysis__ClassMethod_for_analysis__analysis____analysis__no_func_info__arity0__analysis__any_call__arity0__transform_hlds__trailing_analysis__trailing_analysis_answer__arity0______analysis__analysis_name_2_2_f_0_10001)),
  ((MR_Box) (transform_hlds__trailing_analysis__ClassMethod_for_analysis__analysis____analysis__no_func_info__arity0__analysis__any_call__arity0__transform_hlds__trailing_analysis__trailing_analysis_answer__arity0______analysis__analysis_version_number_2_2_f_0_10001)),
  ((MR_Box) (transform_hlds__trailing_analysis__ClassMethod_for_analysis__analysis____analysis__no_func_info__arity0__analysis__any_call__arity0__transform_hlds__trailing_analysis__trailing_analysis_answer__arity0______analysis__preferred_fixpoint_type_2_2_f_0_10001)),
  ((MR_Box) (transform_hlds__trailing_analysis__ClassMethod_for_analysis__analysis____analysis__no_func_info__arity0__analysis__any_call__arity0__transform_hlds__trailing_analysis__trailing_analysis_answer__arity0______analysis__bottom_2_2_f_0_10001)),
  ((MR_Box) (transform_hlds__trailing_analysis__ClassMethod_for_analysis__analysis____analysis__no_func_info__arity0__analysis__any_call__arity0__transform_hlds__trailing_analysis__trailing_analysis_answer__arity0______analysis__top_2_2_f_0_10001)),
  ((MR_Box) (transform_hlds__trailing_analysis__ClassMethod_for_analysis__analysis____analysis__no_func_info__arity0__analysis__any_call__arity0__transform_hlds__trailing_analysis__trailing_analysis_answer__arity0______analysis__get_func_info_6_6_p_0_10001))
};

static MR_Word MR_CALL 
transform_hlds__trailing_analysis__IntroducedFrom__func__check_goal_for_trail_mods__453__1_1_f_0(
  MR_Word LambdaHeadVar__1_125)
{
  {
    MR_Word LambdaHeadVar__2_126 = ((MR_Word) (MR_hl_field(MR_mktag(0), LambdaHeadVar__1_125, (MR_Integer) 2)));
    MR_Word Var_150 = ((MR_Word) (MR_hl_field(MR_mktag(0), LambdaHeadVar__1_125, (MR_Integer) 0)));
    MR_Word Var_151 = ((MR_Word) (MR_hl_field(MR_mktag(0), LambdaHeadVar__1_125, (MR_Integer) 1)));

    return LambdaHeadVar__2_126;
  }
}

static MR_bool MR_CALL 
transform_hlds__trailing_analysis__ClassMethod_for_analysis__to_term____transform_hlds__trailing_analysis__trailing_analysis_answer__arity0______analysis__from_term_2_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2)
{
  {
    MR_bool succeeded = ((MR_tag((MR_Word) HeadVar__1_1)) == (MR_mktag((MR_Integer) 0)));
    MR_Word Status_4;
    MR_String String_5;
    MR_Word Var_7;
    MR_Word Var_8;
    MR_Word Var_6;

    if (succeeded)
    {
      Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0)));
      Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1)));
      Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2)));
      succeeded = ((MR_tag((MR_Word) Var_7)) == (MR_mktag((MR_Integer) 0)));
      if (succeeded)
      {
        String_5 = ((MR_String) (MR_hl_field(MR_mktag(0), Var_7, (MR_Integer) 0)));
        succeeded = (Var_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        if (succeeded)
        {
          if ((strcmp(String_5, (MR_String) "conditional") == 0))
          {
            Status_4 = (MR_Integer) 2;
            succeeded = MR_TRUE;
          }
          else
          if ((strcmp(String_5, (MR_String) "may_modify_trail") == 0))
          {
            Status_4 = (MR_Integer) 0;
            succeeded = MR_TRUE;
          }
          else
          if ((strcmp(String_5, (MR_String) "will_not_modify_trail") == 0))
          {
            Status_4 = (MR_Integer) 1;
            succeeded = MR_TRUE;
          }
          else
            succeeded = MR_FALSE;
          if (succeeded)
          {
            *HeadVar__2_2 = (MR_Word) Status_4;
            succeeded = MR_TRUE;
          }
        }
      }
    }
    return succeeded;
  }
}

static MR_Word MR_CALL 
transform_hlds__trailing_analysis__ClassMethod_for_analysis__to_term____transform_hlds__trailing_analysis__trailing_analysis_answer__arity0______analysis__to_term_1_1_f_0(
  MR_Word HeadVar__1_1)
{
  {
    MR_Word HeadVar__2_2;
    MR_Word Status_4 = (MR_Word) HeadVar__1_1;
    MR_String String_5;
    MR_Word Var_6;
    MR_Word Var_8;

    switch (Status_4) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 2:
        String_5 = (MR_String) "conditional";
        break;
      case (MR_Integer) 0:
        String_5 = (MR_String) "may_modify_trail";
        break;
      case (MR_Integer) 1:
        String_5 = (MR_String) "will_not_modify_trail";
        break;
    }
    {
      Var_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_6, 0) = ((MR_Box) (String_5));
    }
    Var_8 = mercury__term__context_init_0_f_0();
    {
      HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), HeadVar__2_2, 0) = ((MR_Box) (Var_6));
      MR_hl_field(MR_mktag(0), HeadVar__2_2, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), HeadVar__2_2, 2) = ((MR_Box) (Var_8));
    }
    return HeadVar__2_2;
  }
}

static MR_bool MR_CALL 
transform_hlds__trailing_analysis__ClassMethod_for_analysis__partial_order____analysis__no_func_info__arity0__transform_hlds__trailing_analysis__trailing_analysis_answer__arity0______analysis__equivalent_3_3_p_0(
  MR_Word Status_8,
  MR_Word Status_3)
{
  {
    MR_bool succeeded;

    succeeded = transform_hlds__trailing_analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_97_110_97_108_121_115_105_115_95_95_112_97_114_116_105_97_108_95_111_114_100_101_114_95_95_95_95_97_110_97_108_121_115_105_115_95_95_110_111_95_102_117_110_99_95_105_110_102_111_95_95_97_114_105_116_121_48_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_114_97_105_108_105_110_103_95_97_110_97_108_121_115_105_115_95_95_116_114_97_105_108_105_110_103_95_97_110_97_108_121_115_105_115_95_97_110_115_119_101_114_95_95_97_114_105_116_121_48_95_95_95_95_95_95_97_110_97_108_121_115_105_115_95_95_101_113_117_105_118_97_108_101_110_116_95_51_95_95_91_49_93_95_48_3_p_0(Status_8, Status_3);
    return succeeded;
  }
}

static MR_bool MR_CALL 
transform_hlds__trailing_analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_97_110_97_108_121_115_105_115_95_95_112_97_114_116_105_97_108_95_111_114_100_101_114_95_95_95_95_97_110_97_108_121_115_105_115_95_95_110_111_95_102_117_110_99_95_105_110_102_111_95_95_97_114_105_116_121_48_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_114_97_105_108_105_110_103_95_97_110_97_108_121_115_105_115_95_95_116_114_97_105_108_105_110_103_95_97_110_97_108_121_115_105_115_95_97_110_115_119_101_114_95_95_97_114_105_116_121_48_95_95_95_95_95_95_97_110_97_108_121_115_105_115_95_95_101_113_117_105_118_97_108_101_110_116_95_51_95_95_91_49_93_95_48_3_p_0(
  MR_Word Status_8,
  MR_Word Status_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_11 = (MR_Integer) Status_3;
    MR_Integer CastY_12 = (MR_Integer) Status_8;

    succeeded = (CastX_11 == CastY_12);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Word ArgX1_9 = (MR_Word) Status_3;
      MR_Word ArgY1_10 = (MR_Word) Status_8;

      succeeded = (ArgX1_9 == ArgY1_10);
    }
    return succeeded;
  }
}

static MR_bool MR_CALL 
transform_hlds__trailing_analysis__ClassMethod_for_analysis__partial_order____analysis__no_func_info__arity0__transform_hlds__trailing_analysis__trailing_analysis_answer__arity0______analysis__more_precise_than_3_3_p_0(
  MR_Word Answer1_4,
  MR_Word Answer2_5)
{
  {
    MR_bool succeeded;

    succeeded = transform_hlds__trailing_analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_97_110_97_108_121_115_105_115_95_95_112_97_114_116_105_97_108_95_111_114_100_101_114_95_95_95_95_97_110_97_108_121_115_105_115_95_95_110_111_95_102_117_110_99_95_105_110_102_111_95_95_97_114_105_116_121_48_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_114_97_105_108_105_110_103_95_97_110_97_108_121_115_105_115_95_95_116_114_97_105_108_105_110_103_95_97_110_97_108_121_115_105_115_95_97_110_115_119_101_114_95_95_97_114_105_116_121_48_95_95_95_95_95_95_97_110_97_108_121_115_105_115_95_95_109_111_114_101_95_112_114_101_99_105_115_101_95_116_104_97_110_95_51_95_95_91_49_93_95_48_3_p_0(Answer1_4, Answer2_5);
    return succeeded;
  }
}

static MR_bool MR_CALL 
transform_hlds__trailing_analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_97_110_97_108_121_115_105_115_95_95_112_97_114_116_105_97_108_95_111_114_100_101_114_95_95_95_95_97_110_97_108_121_115_105_115_95_95_110_111_95_102_117_110_99_95_105_110_102_111_95_95_97_114_105_116_121_48_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_114_97_105_108_105_110_103_95_97_110_97_108_121_115_105_115_95_95_116_114_97_105_108_105_110_103_95_97_110_97_108_121_115_105_115_95_97_110_115_119_101_114_95_95_97_114_105_116_121_48_95_95_95_95_95_95_97_110_97_108_121_115_105_115_95_95_109_111_114_101_95_112_114_101_99_105_115_101_95_116_104_97_110_95_51_95_95_91_49_93_95_48_3_p_0(
  MR_Word Answer1_4,
  MR_Word Answer2_5)
{
  {
    MR_bool succeeded;
    MR_Word Status1_6 = (MR_Word) Answer1_4;
    MR_Word Status2_7 = (MR_Word) Answer2_5;

    switch (Status1_6) {
      default:
        succeeded = MR_FALSE;
        break;
      case (MR_Integer) 2:
        succeeded = (Status2_7 == (MR_Integer) 0);
        break;
      case (MR_Integer) 1:
        switch (Status2_7) {
          default:
            succeeded = MR_FALSE;
            break;
          case (MR_Integer) 2:
            succeeded = MR_TRUE;
            break;
          case (MR_Integer) 0:
            succeeded = MR_TRUE;
            break;
        }
        break;
    }
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__trailing_analysis__ClassMethod_for_analysis__analysis____analysis__no_func_info__arity0__analysis__any_call__arity0__transform_hlds__trailing_analysis__trailing_analysis_answer__arity0______analysis__get_func_info_6_6_p_0(
  MR_Word HeadVar__1_17,
  MR_Word HeadVar__2_18,
  MR_Word HeadVar__3_19)
{
  transform_hlds__trailing_analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_97_110_97_108_121_115_105_115_95_95_97_110_97_108_121_115_105_115_95_95_95_95_97_110_97_108_121_115_105_115_95_95_110_111_95_102_117_110_99_95_105_110_102_111_95_95_97_114_105_116_121_48_95_95_97_110_97_108_121_115_105_115_95_95_97_110_121_95_99_97_108_108_95_95_97_114_105_116_121_48_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_114_97_105_108_105_110_103_95_97_110_97_108_121_115_105_115_95_95_116_114_97_105_108_105_110_103_95_97_110_97_108_121_115_105_115_95_97_110_115_119_101_114_95_95_97_114_105_116_121_48_95_95_95_95_95_95_97_110_97_108_121_115_105_115_95_95_103_101_116_95_102_117_110_99_95_105_110_102_111_95_54_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_93_95_48_6_p_0();
}

static void MR_CALL 
transform_hlds__trailing_analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_97_110_97_108_121_115_105_115_95_95_97_110_97_108_121_115_105_115_95_95_95_95_97_110_97_108_121_115_105_115_95_95_110_111_95_102_117_110_99_95_105_110_102_111_95_95_97_114_105_116_121_48_95_95_97_110_97_108_121_115_105_115_95_95_97_110_121_95_99_97_108_108_95_95_97_114_105_116_121_48_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_114_97_105_108_105_110_103_95_97_110_97_108_121_115_105_115_95_95_116_114_97_105_108_105_110_103_95_97_110_97_108_121_115_105_115_95_97_110_115_119_101_114_95_95_97_114_105_116_121_48_95_95_95_95_95_95_97_110_97_108_121_115_105_115_95_95_103_101_116_95_102_117_110_99_95_105_110_102_111_95_54_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_93_95_48_6_p_0(void)
{
  {
  }
}

static MR_Word MR_CALL 
transform_hlds__trailing_analysis__ClassMethod_for_analysis__analysis____analysis__no_func_info__arity0__analysis__any_call__arity0__transform_hlds__trailing_analysis__trailing_analysis_answer__arity0______analysis__top_2_2_f_0(void)
{
  {
    MR_Word HeadVar__3_3;

    HeadVar__3_3 = transform_hlds__trailing_analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_97_110_97_108_121_115_105_115_95_95_97_110_97_108_121_115_105_115_95_95_95_95_97_110_97_108_121_115_105_115_95_95_110_111_95_102_117_110_99_95_105_110_102_111_95_95_97_114_105_116_121_48_95_95_97_110_97_108_121_115_105_115_95_95_97_110_121_95_99_97_108_108_95_95_97_114_105_116_121_48_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_114_97_105_108_105_110_103_95_97_110_97_108_121_115_105_115_95_95_116_114_97_105_108_105_110_103_95_97_110_97_108_121_115_105_115_95_97_110_115_119_101_114_95_95_97_114_105_116_121_48_95_95_95_95_95_95_97_110_97_108_121_115_105_115_95_95_116_111_112_95_50_95_95_91_49_44_32_50_93_95_48_2_f_0();
    return HeadVar__3_3;
  }
}

static MR_Word MR_CALL 
transform_hlds__trailing_analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_97_110_97_108_121_115_105_115_95_95_97_110_97_108_121_115_105_115_95_95_95_95_97_110_97_108_121_115_105_115_95_95_110_111_95_102_117_110_99_95_105_110_102_111_95_95_97_114_105_116_121_48_95_95_97_110_97_108_121_115_105_115_95_95_97_110_121_95_99_97_108_108_95_95_97_114_105_116_121_48_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_114_97_105_108_105_110_103_95_97_110_97_108_121_115_105_115_95_95_116_114_97_105_108_105_110_103_95_97_110_97_108_121_115_105_115_95_97_110_115_119_101_114_95_95_97_114_105_116_121_48_95_95_95_95_95_95_97_110_97_108_121_115_105_115_95_95_116_111_112_95_50_95_95_91_49_44_32_50_93_95_48_2_f_0(void)
{
  {
    return (MR_Word) ((MR_Box) ((MR_Integer) 0));
  }
}

static MR_Word MR_CALL 
transform_hlds__trailing_analysis__ClassMethod_for_analysis__analysis____analysis__no_func_info__arity0__analysis__any_call__arity0__transform_hlds__trailing_analysis__trailing_analysis_answer__arity0______analysis__bottom_2_2_f_0(void)
{
  {
    MR_Word HeadVar__3_3;

    HeadVar__3_3 = transform_hlds__trailing_analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_97_110_97_108_121_115_105_115_95_95_97_110_97_108_121_115_105_115_95_95_95_95_97_110_97_108_121_115_105_115_95_95_110_111_95_102_117_110_99_95_105_110_102_111_95_95_97_114_105_116_121_48_95_95_97_110_97_108_121_115_105_115_95_95_97_110_121_95_99_97_108_108_95_95_97_114_105_116_121_48_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_114_97_105_108_105_110_103_95_97_110_97_108_121_115_105_115_95_95_116_114_97_105_108_105_110_103_95_97_110_97_108_121_115_105_115_95_97_110_115_119_101_114_95_95_97_114_105_116_121_48_95_95_95_95_95_95_97_110_97_108_121_115_105_115_95_95_98_111_116_116_111_109_95_50_95_95_91_49_44_32_50_93_95_48_2_f_0();
    return HeadVar__3_3;
  }
}

static MR_Word MR_CALL 
transform_hlds__trailing_analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_97_110_97_108_121_115_105_115_95_95_97_110_97_108_121_115_105_115_95_95_95_95_97_110_97_108_121_115_105_115_95_95_110_111_95_102_117_110_99_95_105_110_102_111_95_95_97_114_105_116_121_48_95_95_97_110_97_108_121_115_105_115_95_95_97_110_121_95_99_97_108_108_95_95_97_114_105_116_121_48_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_114_97_105_108_105_110_103_95_97_110_97_108_121_115_105_115_95_95_116_114_97_105_108_105_110_103_95_97_110_97_108_121_115_105_115_95_97_110_115_119_101_114_95_95_97_114_105_116_121_48_95_95_95_95_95_95_97_110_97_108_121_115_105_115_95_95_98_111_116_116_111_109_95_50_95_95_91_49_44_32_50_93_95_48_2_f_0(void)
{
  {
    return (MR_Word) ((MR_Box) ((MR_Integer) 1));
  }
}

static MR_Word MR_CALL 
transform_hlds__trailing_analysis__ClassMethod_for_analysis__analysis____analysis__no_func_info__arity0__analysis__any_call__arity0__transform_hlds__trailing_analysis__trailing_analysis_answer__arity0______analysis__preferred_fixpoint_type_2_2_f_0(void)
{
  {
    MR_Word HeadVar__3_3;

    HeadVar__3_3 = transform_hlds__trailing_analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_97_110_97_108_121_115_105_115_95_95_97_110_97_108_121_115_105_115_95_95_95_95_97_110_97_108_121_115_105_115_95_95_110_111_95_102_117_110_99_95_105_110_102_111_95_95_97_114_105_116_121_48_95_95_97_110_97_108_121_115_105_115_95_95_97_110_121_95_99_97_108_108_95_95_97_114_105_116_121_48_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_114_97_105_108_105_110_103_95_97_110_97_108_121_115_105_115_95_95_116_114_97_105_108_105_110_103_95_97_110_97_108_121_115_105_115_95_97_110_115_119_101_114_95_95_97_114_105_116_121_48_95_95_95_95_95_95_97_110_97_108_121_115_105_115_95_95_112_114_101_102_101_114_114_101_100_95_102_105_120_112_111_105_110_116_95_116_121_112_101_95_50_95_95_91_49_44_32_50_93_95_48_2_f_0();
    return HeadVar__3_3;
  }
}

static MR_Word MR_CALL 
transform_hlds__trailing_analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_97_110_97_108_121_115_105_115_95_95_97_110_97_108_121_115_105_115_95_95_95_95_97_110_97_108_121_115_105_115_95_95_110_111_95_102_117_110_99_95_105_110_102_111_95_95_97_114_105_116_121_48_95_95_97_110_97_108_121_115_105_115_95_95_97_110_121_95_99_97_108_108_95_95_97_114_105_116_121_48_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_114_97_105_108_105_110_103_95_97_110_97_108_121_115_105_115_95_95_116_114_97_105_108_105_110_103_95_97_110_97_108_121_115_105_115_95_97_110_115_119_101_114_95_95_97_114_105_116_121_48_95_95_95_95_95_95_97_110_97_108_121_115_105_115_95_95_112_114_101_102_101_114_114_101_100_95_102_105_120_112_111_105_110_116_95_116_121_112_101_95_50_95_95_91_49_44_32_50_93_95_48_2_f_0(void)
{
  {
    return (MR_Integer) 0;
  }
}

static MR_Integer MR_CALL 
transform_hlds__trailing_analysis__ClassMethod_for_analysis__analysis____analysis__no_func_info__arity0__analysis__any_call__arity0__transform_hlds__trailing_analysis__trailing_analysis_answer__arity0______analysis__analysis_version_number_2_2_f_0(void)
{
  {
    MR_Integer HeadVar__3_3;

    HeadVar__3_3 = transform_hlds__trailing_analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_97_110_97_108_121_115_105_115_95_95_97_110_97_108_121_115_105_115_95_95_95_95_97_110_97_108_121_115_105_115_95_95_110_111_95_102_117_110_99_95_105_110_102_111_95_95_97_114_105_116_121_48_95_95_97_110_97_108_121_115_105_115_95_95_97_110_121_95_99_97_108_108_95_95_97_114_105_116_121_48_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_114_97_105_108_105_110_103_95_97_110_97_108_121_115_105_115_95_95_116_114_97_105_108_105_110_103_95_97_110_97_108_121_115_105_115_95_97_110_115_119_101_114_95_95_97_114_105_116_121_48_95_95_95_95_95_95_97_110_97_108_121_115_105_115_95_95_97_110_97_108_121_115_105_115_95_118_101_114_115_105_111_110_95_110_117_109_98_101_114_95_50_95_95_91_49_44_32_50_93_95_48_2_f_0();
    return HeadVar__3_3;
  }
}

static MR_Integer MR_CALL 
transform_hlds__trailing_analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_97_110_97_108_121_115_105_115_95_95_97_110_97_108_121_115_105_115_95_95_95_95_97_110_97_108_121_115_105_115_95_95_110_111_95_102_117_110_99_95_105_110_102_111_95_95_97_114_105_116_121_48_95_95_97_110_97_108_121_115_105_115_95_95_97_110_121_95_99_97_108_108_95_95_97_114_105_116_121_48_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_114_97_105_108_105_110_103_95_97_110_97_108_121_115_105_115_95_95_116_114_97_105_108_105_110_103_95_97_110_97_108_121_115_105_115_95_97_110_115_119_101_114_95_95_97_114_105_116_121_48_95_95_95_95_95_95_97_110_97_108_121_115_105_115_95_95_97_110_97_108_121_115_105_115_95_118_101_114_115_105_111_110_95_110_117_109_98_101_114_95_50_95_95_91_49_44_32_50_93_95_48_2_f_0(void)
{
  {
    return (MR_Integer) 1;
  }
}

static MR_String MR_CALL 
transform_hlds__trailing_analysis__ClassMethod_for_analysis__analysis____analysis__no_func_info__arity0__analysis__any_call__arity0__transform_hlds__trailing_analysis__trailing_analysis_answer__arity0______analysis__analysis_name_2_2_f_0(void)
{
  {
    MR_String HeadVar__3_3;

    HeadVar__3_3 = transform_hlds__trailing_analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_97_110_97_108_121_115_105_115_95_95_97_110_97_108_121_115_105_115_95_95_95_95_97_110_97_108_121_115_105_115_95_95_110_111_95_102_117_110_99_95_105_110_102_111_95_95_97_114_105_116_121_48_95_95_97_110_97_108_121_115_105_115_95_95_97_110_121_95_99_97_108_108_95_95_97_114_105_116_121_48_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_114_97_105_108_105_110_103_95_97_110_97_108_121_115_105_115_95_95_116_114_97_105_108_105_110_103_95_97_110_97_108_121_115_105_115_95_97_110_115_119_101_114_95_95_97_114_105_116_121_48_95_95_95_95_95_95_97_110_97_108_121_115_105_115_95_95_97_110_97_108_121_115_105_115_95_110_97_109_101_95_50_95_95_91_49_44_32_50_93_95_48_2_f_0();
    return HeadVar__3_3;
  }
}

static MR_String MR_CALL 
transform_hlds__trailing_analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_97_110_97_108_121_115_105_115_95_95_97_110_97_108_121_115_105_115_95_95_95_95_97_110_97_108_121_115_105_115_95_95_110_111_95_102_117_110_99_95_105_110_102_111_95_95_97_114_105_116_121_48_95_95_97_110_97_108_121_115_105_115_95_95_97_110_121_95_99_97_108_108_95_95_97_114_105_116_121_48_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_114_97_105_108_105_110_103_95_97_110_97_108_121_115_105_115_95_95_116_114_97_105_108_105_110_103_95_97_110_97_108_121_115_105_115_95_97_110_115_119_101_114_95_95_97_114_105_116_121_48_95_95_95_95_95_95_97_110_97_108_121_115_105_115_95_95_97_110_97_108_121_115_105_115_95_110_97_109_101_95_50_95_95_91_49_44_32_50_93_95_48_2_f_0(void)
{
  {
    return (MR_String) "trail_usage";
  }
}

void MR_CALL 
transform_hlds__trailing_analysis____Compare____trailing_analysis_answer_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_6 = (MR_Integer) HeadVar__2_2;
    MR_Integer CastY_7 = (MR_Integer) HeadVar__3_3;

    succeeded = (CastX_6 == CastY_7);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Word ArgX1_4 = (MR_Word) HeadVar__2_2;
      MR_Word ArgY1_5 = (MR_Word) HeadVar__3_3;
      MR_Integer Var_9 = (MR_Integer) ArgX1_4;
      MR_Integer Var_10 = (MR_Integer) ArgY1_5;

      mercury__private_builtin__builtin_compare_int_3_p_0(HeadVar__1_1, Var_9, Var_10);
    }
  }
}

MR_bool MR_CALL 
transform_hlds__trailing_analysis____Unify____trailing_analysis_answer_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_5 = (MR_Integer) HeadVar__1_1;
    MR_Integer CastY_6 = (MR_Integer) HeadVar__2_2;

    succeeded = (CastX_5 == CastY_6);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Word ArgX1_3 = (MR_Word) HeadVar__1_1;
      MR_Word ArgY1_4 = (MR_Word) HeadVar__2_2;

      succeeded = (ArgX1_3 == ArgY1_4);
    }
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__trailing_analysis____Compare____trail_proc_result_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_12 = (MR_Integer) HeadVar__2_2;
    MR_Integer CastY_13 = (MR_Integer) HeadVar__3_3;

    succeeded = (CastX_12 == CastY_13);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Word ArgX1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
      MR_Word ArgY1_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0)));
      MR_Word ArgX2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));
      MR_Word ArgY2_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1)));
      MR_Word ArgX3_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2)));
      MR_Word ArgY3_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2)));
      MR_Word Var_10;

      hlds__hlds_pred____Compare____pred_proc_id_0_0(&Var_10, ArgX1_4, ArgY1_5);
      succeeded = (Var_10 == (MR_Integer) 0);
      succeeded = !(succeeded);
      if (succeeded)
        *HeadVar__1_1 = Var_10;
      else
      {
        MR_Word Var_11;
        MR_Integer Var_17 = (MR_Integer) ArgX2_6;
        MR_Integer Var_18 = (MR_Integer) ArgY2_7;

        mercury__private_builtin__builtin_compare_int_3_p_0(&Var_11, Var_17, Var_18);
        succeeded = (Var_11 == (MR_Integer) 0);
        succeeded = !(succeeded);
        if (succeeded)
          *HeadVar__1_1 = Var_11;
        else
        {
          mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__trailing_analysis_scalar_common_1[2], HeadVar__1_1, ((MR_Box) (ArgX3_8)), ((MR_Box) (ArgY3_9)));
        }
      }
    }
  }
}

static MR_bool MR_CALL 
transform_hlds__trailing_analysis____Unify____trail_proc_result_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_9 = (MR_Integer) HeadVar__1_1;
    MR_Integer CastY_10 = (MR_Integer) HeadVar__2_2;

    succeeded = (CastX_9 == CastY_10);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Word TypeInfo_12_12;
      MR_Word ArgX1_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0)));
      MR_Word ArgY1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
      MR_Word ArgX2_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1)));
      MR_Word ArgY2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));
      MR_Word ArgX3_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2)));
      MR_Word ArgY3_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2)));

      succeeded = hlds__hlds_pred____Unify____pred_proc_id_0_0(ArgX1_3, ArgY1_4);
      if (succeeded)
      {
        succeeded = (ArgX2_5 == ArgY2_6);
        if (succeeded)
        {
          TypeInfo_12_12 = (MR_Word) &transform_hlds__trailing_analysis_scalar_common_1[2];
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_12_12, ((MR_Box) (ArgX3_7)), ((MR_Box) (ArgY3_8)));
        }
      }
    }
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__trailing_analysis__output_proc_name_4_p_0(
  MR_Word Moduleinfo_5,
  MR_Word PPId_6)
{
  {
    MR_Word Pieces_8;
    MR_String Str_9;

    Pieces_8 = hlds__hlds_error_util__describe_one_proc_name_3_f_0(Moduleinfo_5, (MR_Integer) 0, PPId_6);
    Str_9 = parse_tree__error_util__error_pieces_to_string_1_f_0(Pieces_8);
    mercury__io__write_string_3_p_0((MR_String) "\t");
    mercury__io__write_string_3_p_0(Str_9);
    mercury__io__write_string_3_p_0((MR_String) "\n");
  }
}

static void MR_CALL 
transform_hlds__trailing_analysis__maybe_record_trailing_result_2_6_p_0(
  MR_Word ModuleInfo_7,
  MR_Word PredId_8,
  MR_Word PredInfo_9,
  MR_Integer ProcId_10,
  MR_Word STATE_VARIABLE_AnalysisInfo_0_18,
  MR_Word * STATE_VARIABLE_AnalysisInfo_19)
{
  {
    MR_Word ShouldWrite_12;

    transform_hlds__intermod__should_write_trailing_info_6_p_0(ModuleInfo_7, PredId_8, ProcId_10, PredInfo_9, (MR_Integer) 0, &ShouldWrite_12);
    switch (ShouldWrite_12) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *STATE_VARIABLE_AnalysisInfo_19 = STATE_VARIABLE_AnalysisInfo_0_18;
        break;
      case (MR_Integer) 1:
        {
          MR_Word PPId_13;
          MR_Word Status_14;
          MR_Word ResultStatus_15;
          MR_Word ModuleName_16;
          MR_Word FuncId_17;
          MR_Word Var_22;
          MR_Word ProcInfo_30;
          MR_Word MaybeProcTrailingInfo_31;
          MR_Word _PredInfo_29;

          {
            PPId_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), PPId_13, 0) = ((MR_Box) (PredId_8));
            MR_hl_field(MR_mktag(0), PPId_13, 1) = ((MR_Box) (ProcId_10));
          }
          hlds__hlds_module__module_info_pred_proc_info_4_p_0(ModuleInfo_7, PPId_13, &_PredInfo_29, &ProcInfo_30);
          hlds__hlds_pred__proc_info_get_trailing_info_2_p_0(ProcInfo_30, &MaybeProcTrailingInfo_31);
          if ((MaybeProcTrailingInfo_31 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            Status_14 = (MR_Integer) 0;
            ResultStatus_15 = (MR_Integer) 2;
          }
          else
          {
            MR_Word ProcTrailingInfo_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeProcTrailingInfo_31, (MR_Integer) 0)));
            MR_Word MaybeResultStatus_33;

            Status_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ProcTrailingInfo_32, (MR_Integer) 0)));
            MaybeResultStatus_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ProcTrailingInfo_32, (MR_Integer) 1)));
            if ((MaybeResultStatus_33 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            {
              {
                mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.trailing_analysis", (MR_String) "predicate \140transform_hlds.trailing_analysis.lookup_proc_trailing_info\'/4", (MR_String) "no result status");
                return;
              }
            }
            else
              ResultStatus_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeResultStatus_33, (MR_Integer) 0)));
          }
          transform_hlds__mmc_analysis__module_name_func_id_4_p_0(ModuleInfo_7, PPId_13, &ModuleName_16, &FuncId_17);
          Var_22 = (MR_Word) Status_14;
          analysis__record_result_7_p_0((MR_Word) &transform_hlds__trailing_analysis_scalar_common_4[0], ModuleName_16, FuncId_17, ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (Var_22)), ResultStatus_15, STATE_VARIABLE_AnalysisInfo_0_18, STATE_VARIABLE_AnalysisInfo_19);
        }
        break;
    }
  }
}

static void MR_CALL 
transform_hlds__trailing_analysis__maybe_record_trailing_result_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_AnalysisInfo_19;

    transform_hlds__trailing_analysis__maybe_record_trailing_result_2_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5))), ((MR_Integer) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv0_STATE_VARIABLE_AnalysisInfo_19);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_AnalysisInfo_19));
  }
}

static void MR_CALL 
transform_hlds__trailing_analysis__maybe_record_trailing_result_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word PredId_6,
  MR_Word STATE_VARIABLE_AnalysisInfo_0_10,
  MR_Word * STATE_VARIABLE_AnalysisInfo_11)
{
  {
    MR_Word PredInfo_8;
    MR_Word ProcIds_9;
    MR_Word Var_12;
    MR_Box conv1_STATE_VARIABLE_AnalysisInfo_11;

    hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo_5, PredId_6, &PredInfo_8);
    ProcIds_9 = hlds__hlds_pred__pred_info_procids_1_f_0(PredInfo_8);
    {
      Var_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_12, 0) = ((MR_Box) (&transform_hlds__trailing_analysis_scalar_common_7[3]));
      MR_hl_field(MR_mktag(0), Var_12, 1) = ((MR_Box) (transform_hlds__trailing_analysis__maybe_record_trailing_result_4_p_0_1));
      MR_hl_field(MR_mktag(0), Var_12, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(0), Var_12, 3) = ((MR_Box) (ModuleInfo_5));
      MR_hl_field(MR_mktag(0), Var_12, 4) = ((MR_Box) (PredId_6));
      MR_hl_field(MR_mktag(0), Var_12, 5) = ((MR_Box) (PredInfo_8));
    }
    mercury__list__foldl_4_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0, (MR_Word) &analysis__analysis__type_ctor_info_analysis_info_0, Var_12, ProcIds_9, ((MR_Box) (STATE_VARIABLE_AnalysisInfo_0_10)), &conv1_STATE_VARIABLE_AnalysisInfo_11);
    *STATE_VARIABLE_AnalysisInfo_11 = ((MR_Word) conv1_STATE_VARIABLE_AnalysisInfo_11);
  }
}

static void MR_CALL 
transform_hlds__trailing_analysis__trail_annotate_case_6_p_0(
  MR_Word VarTypes_7,
  MR_Word STATE_VARIABLE_Case_0_15,
  MR_Word * STATE_VARIABLE_Case_16,
  MR_Word * Status_9,
  MR_Word STATE_VARIABLE_ModuleInfo_0_17,
  MR_Word * STATE_VARIABLE_ModuleInfo_18)
{
  {
    MR_Word MainConsId_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Case_0_15, (MR_Integer) 0)));
    MR_Word OtherConsIds_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Case_0_15, (MR_Integer) 1)));
    MR_Word Goal0_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Case_0_15, (MR_Integer) 2)));
    MR_Word Goal_14;
    MR_Word GoalExpr0_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), Goal0_13, (MR_Integer) 0)));
    MR_Word GoalInfo0_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), Goal0_13, (MR_Integer) 1)));
    MR_Word GoalExpr_31;
    MR_Word GoalInfo_32;

    transform_hlds__trailing_analysis__trail_annotate_goal_2_7_p_0(VarTypes_7, GoalInfo0_30, GoalExpr0_29, &GoalExpr_31, Status_9, STATE_VARIABLE_ModuleInfo_0_17, STATE_VARIABLE_ModuleInfo_18);
    switch (*Status_9) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 2:
      case (MR_Integer) 0:
        GoalInfo_32 = GoalInfo0_30;
        break;
      case (MR_Integer) 1:
        {
          hlds__hlds_goal__goal_info_add_feature_3_p_0((MR_Integer) 16, GoalInfo0_30, &GoalInfo_32);
        }
        break;
    }
    {
      Goal_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Goal_14, 0) = ((MR_Box) (GoalExpr_31));
      MR_hl_field(MR_mktag(0), Goal_14, 1) = ((MR_Box) (GoalInfo_32));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_Case_16 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (MainConsId_11));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (OtherConsIds_12));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Goal_14));
    }
  }
}

static void MR_CALL 
transform_hlds__trailing_analysis__trail_annotate_proc_3_p_0(
  MR_Word PPId_4,
  MR_Word STATE_VARIABLE_ModuleInfo_0_11,
  MR_Word * STATE_VARIABLE_ModuleInfo_12)
{
  {
    MR_Word PredInfo_8;
    MR_Word VarTypes_9;
    MR_Word _Status_10;
    MR_Word STATE_VARIABLE_ProcInfo_13_13;
    MR_Word STATE_VARIABLE_Body_14_14;
    MR_Word STATE_VARIABLE_Body_15_15;
    MR_Word STATE_VARIABLE_ModuleInfo_16_16;
    MR_Word STATE_VARIABLE_ProcInfo_17_17;
    MR_Word GoalExpr0_27;
    MR_Word GoalInfo0_28;
    MR_Word GoalExpr_29;
    MR_Word GoalInfo_30;

    hlds__hlds_module__module_info_pred_proc_info_4_p_0(STATE_VARIABLE_ModuleInfo_0_11, PPId_4, &PredInfo_8, &STATE_VARIABLE_ProcInfo_13_13);
    hlds__hlds_pred__proc_info_get_goal_2_p_0(STATE_VARIABLE_ProcInfo_13_13, &STATE_VARIABLE_Body_14_14);
    hlds__hlds_pred__proc_info_get_vartypes_2_p_0(STATE_VARIABLE_ProcInfo_13_13, &VarTypes_9);
    GoalExpr0_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Body_14_14, (MR_Integer) 0)));
    GoalInfo0_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Body_14_14, (MR_Integer) 1)));
    transform_hlds__trailing_analysis__trail_annotate_goal_2_7_p_0(VarTypes_9, GoalInfo0_28, GoalExpr0_27, &GoalExpr_29, &_Status_10, STATE_VARIABLE_ModuleInfo_0_11, &STATE_VARIABLE_ModuleInfo_16_16);
    switch (_Status_10) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 2:
      case (MR_Integer) 0:
        GoalInfo_30 = GoalInfo0_28;
        break;
      case (MR_Integer) 1:
        {
          hlds__hlds_goal__goal_info_add_feature_3_p_0((MR_Integer) 16, GoalInfo0_28, &GoalInfo_30);
        }
        break;
    }
    {
      STATE_VARIABLE_Body_15_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Body_15_15, 0) = ((MR_Box) (GoalExpr_29));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Body_15_15, 1) = ((MR_Box) (GoalInfo_30));
    }
    hlds__hlds_pred__proc_info_set_goal_3_p_0(STATE_VARIABLE_Body_15_15, STATE_VARIABLE_ProcInfo_13_13, &STATE_VARIABLE_ProcInfo_17_17);
    hlds__hlds_module__module_info_set_pred_proc_info_5_p_0(PPId_4, PredInfo_8, STATE_VARIABLE_ProcInfo_17_17, STATE_VARIABLE_ModuleInfo_16_16, STATE_VARIABLE_ModuleInfo_12);
  }
}

static void MR_CALL 
transform_hlds__trailing_analysis__trail_annotate_goal_2_7_p_0_1(
  void * env_ptr_arg)
{
  {
    struct transform_hlds__trailing_analysis__trail_annotate_goal_2_7_p_0_env_0_s * env_ptr = (struct transform_hlds__trailing_analysis__trail_annotate_goal_2_7_p_0_env_0_s *) env_ptr_arg;

    MR_builtin_longjmp((env_ptr)->transform_hlds__trailing_analysis__trail_annotate_goal_2_7_p_0_env_0__commit_0, 1);
  }
}

static void MR_CALL 
transform_hlds__trailing_analysis__trail_annotate_goal_2_7_p_0_2(
  void * env_ptr_arg)
{
  {
    struct transform_hlds__trailing_analysis__trail_annotate_goal_2_7_p_0_env_0_s * env_ptr = (struct transform_hlds__trailing_analysis__trail_annotate_goal_2_7_p_0_env_0_s *) env_ptr_arg;

    {
      MR_String Var_50;

      mdbcomp__prim_data__special_pred_name_arity_4_p_0((env_ptr)->transform_hlds__trailing_analysis__trail_annotate_goal_2_7_p_0_env_0__SpecialPredId_49, &(env_ptr)->transform_hlds__trailing_analysis__trail_annotate_goal_2_7_p_0_env_0__Var_139, &Var_50, &(env_ptr)->transform_hlds__trailing_analysis__trail_annotate_goal_2_7_p_0_env_0__Var_140);
      (env_ptr)->transform_hlds__trailing_analysis__trail_annotate_goal_2_7_p_0_env_0__succeeded = (strcmp((env_ptr)->transform_hlds__trailing_analysis__trail_annotate_goal_2_7_p_0_env_0__Name_47, (env_ptr)->transform_hlds__trailing_analysis__trail_annotate_goal_2_7_p_0_env_0__Var_139) == 0);
      if ((env_ptr)->transform_hlds__trailing_analysis__trail_annotate_goal_2_7_p_0_env_0__succeeded)
      {
        (env_ptr)->transform_hlds__trailing_analysis__trail_annotate_goal_2_7_p_0_env_0__succeeded = ((env_ptr)->transform_hlds__trailing_analysis__trail_annotate_goal_2_7_p_0_env_0__Arity_48 == (env_ptr)->transform_hlds__trailing_analysis__trail_annotate_goal_2_7_p_0_env_0__Var_140);
        if ((env_ptr)->transform_hlds__trailing_analysis__trail_annotate_goal_2_7_p_0_env_0__succeeded)
          transform_hlds__trailing_analysis__trail_annotate_goal_2_7_p_0_1(env_ptr);
      }
    }
  }
}

static void MR_CALL 
transform_hlds__trailing_analysis__trail_annotate_goal_2_7_p_0_3(
  void * env_ptr_arg)
{
  {
    struct transform_hlds__trailing_analysis__trail_annotate_goal_2_7_p_0_env_0_s * env_ptr = (struct transform_hlds__trailing_analysis__trail_annotate_goal_2_7_p_0_env_0_s *) env_ptr_arg;

    if (MR_builtin_setjmp((env_ptr)->transform_hlds__trailing_analysis__trail_annotate_goal_2_7_p_0_env_0__commit_0) == 0)
      {
        {
          MR_Word ModuleName_46;

          ModuleName_46 = hlds__hlds_pred__pred_info_module_1_f_0((env_ptr)->transform_hlds__trailing_analysis__trail_annotate_goal_2_7_p_0_env_0__CallPredInfo_45);
          (env_ptr)->transform_hlds__trailing_analysis__trail_annotate_goal_2_7_p_0_env_0__succeeded = mdbcomp__builtin_modules__any_mercury_builtin_module_1_p_0(ModuleName_46);
          if ((env_ptr)->transform_hlds__trailing_analysis__trail_annotate_goal_2_7_p_0_env_0__succeeded)
          {
            (env_ptr)->transform_hlds__trailing_analysis__trail_annotate_goal_2_7_p_0_env_0__Name_47 = hlds__hlds_pred__pred_info_name_1_f_0((env_ptr)->transform_hlds__trailing_analysis__trail_annotate_goal_2_7_p_0_env_0__CallPredInfo_45);
            (env_ptr)->transform_hlds__trailing_analysis__trail_annotate_goal_2_7_p_0_env_0__Arity_48 = hlds__hlds_pred__pred_info_orig_arity_1_f_0((env_ptr)->transform_hlds__trailing_analysis__trail_annotate_goal_2_7_p_0_env_0__CallPredInfo_45);
            {
              MR_Integer slot_1 = (MR_Integer) 0;

              do
              {
                (env_ptr)->transform_hlds__trailing_analysis__trail_annotate_goal_2_7_p_0_env_0__SpecialPredId_49 = ((&transform_hlds__trailing_analysis_vector_common_10[2 + slot_1]))->transform_hlds__trailing_analysis__vector_common_type_10_0__vct_10_f_0;
                transform_hlds__trailing_analysis__trail_annotate_goal_2_7_p_0_2(env_ptr);
                slot_1 = (slot_1 + (MR_Integer) 1);
              }
              while ((slot_1 < (MR_Integer) 2));
            }
          }
        }
        (env_ptr)->transform_hlds__trailing_analysis__trail_annotate_goal_2_7_p_0_env_0__succeeded = MR_FALSE;
      }
    else
      (env_ptr)->transform_hlds__trailing_analysis__trail_annotate_goal_2_7_p_0_env_0__succeeded = MR_TRUE;
  }
}

static void MR_CALL 
transform_hlds__trailing_analysis__trail_annotate_goal_2_7_p_0(
  MR_Word VarTypes_8,
  MR_Word GoalInfo_9,
  MR_Word STATE_VARIABLE_GoalExpr_0_109,
  MR_Word * STATE_VARIABLE_GoalExpr_110,
  MR_Word * Status_11,
  MR_Word STATE_VARIABLE_ModuleInfo_0_111,
  MR_Word * STATE_VARIABLE_ModuleInfo_112)
{
  {
    struct transform_hlds__trailing_analysis__trail_annotate_goal_2_7_p_0_env_0_s env;

    switch (MR_tag((MR_Word) STATE_VARIABLE_GoalExpr_0_109)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word SubGoal0_97 = (MR_Word) MR_body(((MR_Word) STATE_VARIABLE_GoalExpr_0_109), (MR_Integer) 0);
          MR_Word SubGoal_98;

          transform_hlds__trailing_analysis__trail_annotate_goal_6_p_0(VarTypes_8, SubGoal0_97, &SubGoal_98, Status_11, STATE_VARIABLE_ModuleInfo_0_111, STATE_VARIABLE_ModuleInfo_112);
          *STATE_VARIABLE_GoalExpr_110 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) SubGoal_98);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Kind_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), STATE_VARIABLE_GoalExpr_0_109, (MR_Integer) 3)));
          MR_Word Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), STATE_VARIABLE_GoalExpr_0_109, (MR_Integer) 0)));
          MR_Word Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), STATE_VARIABLE_GoalExpr_0_109, (MR_Integer) 1)));
          MR_Word Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), STATE_VARIABLE_GoalExpr_0_109, (MR_Integer) 2)));
          MR_Word Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), STATE_VARIABLE_GoalExpr_0_109, (MR_Integer) 4)));

          switch (MR_tag((MR_Word) Kind_16)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
              }
              break;
            case (MR_Integer) 1:
              {
              }
              break;
            case (MR_Integer) 2:
              {
              }
              break;
            case (MR_Integer) 3:
              switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Kind_16, (MR_Integer) 0)))) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    {
                      mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.trailing_analysis", (MR_String) "predicate \140transform_hlds.trailing_analysis.trail_annotate_goal_2\'/7", (MR_String) "complicated unify");
                      return;
                    }
                  }
                  break;
              }
              break;
          }
          *Status_11 = (MR_Integer) 1;
          *STATE_VARIABLE_GoalExpr_110 = STATE_VARIABLE_GoalExpr_0_109;
          *STATE_VARIABLE_ModuleInfo_112 = STATE_VARIABLE_ModuleInfo_0_111;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word CallPredId_38 = ((MR_Word) (MR_hl_field(MR_mktag(2), STATE_VARIABLE_GoalExpr_0_109, (MR_Integer) 0)));
          MR_Integer CallProcId_39 = ((MR_Integer) (MR_hl_field(MR_mktag(2), STATE_VARIABLE_GoalExpr_0_109, (MR_Integer) 1)));
          MR_Word CallArgs_40 = ((MR_Word) (MR_hl_field(MR_mktag(2), STATE_VARIABLE_GoalExpr_0_109, (MR_Integer) 2)));
          MR_Word CallPPId_44;
          MR_Word Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(2), STATE_VARIABLE_GoalExpr_0_109, (MR_Integer) 3)));
          MR_Word Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(2), STATE_VARIABLE_GoalExpr_0_109, (MR_Integer) 4)));
          MR_Word Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(2), STATE_VARIABLE_GoalExpr_0_109, (MR_Integer) 5)));

          {
            CallPPId_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), CallPPId_44, 0) = ((MR_Box) (CallPredId_38));
            MR_hl_field(MR_mktag(0), CallPPId_44, 1) = ((MR_Box) (CallProcId_39));
          }
          hlds__hlds_module__module_info_pred_info_3_p_0(STATE_VARIABLE_ModuleInfo_0_111, CallPredId_38, &(env).transform_hlds__trailing_analysis__trail_annotate_goal_2_7_p_0_env_0__CallPredInfo_45);
          (env).transform_hlds__trailing_analysis__trail_annotate_goal_2_7_p_0_env_0__succeeded = hlds__hlds_pred__pred_info_is_builtin_1_p_0((env).transform_hlds__trailing_analysis__trail_annotate_goal_2_7_p_0_env_0__CallPredInfo_45);
          if ((env).transform_hlds__trailing_analysis__trail_annotate_goal_2_7_p_0_env_0__succeeded)
          {
            *Status_11 = (MR_Integer) 1;
            *STATE_VARIABLE_ModuleInfo_112 = STATE_VARIABLE_ModuleInfo_0_111;
          }
          else
          {
            transform_hlds__trailing_analysis__trail_annotate_goal_2_7_p_0_3(&env);
            if ((env).transform_hlds__trailing_analysis__trail_annotate_goal_2_7_p_0_env_0__succeeded)
            {
              *Status_11 = (MR_Integer) 0;
              *STATE_VARIABLE_ModuleInfo_112 = STATE_VARIABLE_ModuleInfo_0_111;
            }
            else
            {
              MR_Word Status0_51;

              (env).transform_hlds__trailing_analysis__trail_annotate_goal_2_7_p_0_env_0__succeeded = transform_hlds__trailing_analysis__pred_info_has_known_trail_status_2_p_0((env).transform_hlds__trailing_analysis__trail_annotate_goal_2_7_p_0_env_0__CallPredInfo_45, &Status0_51);
              if ((env).transform_hlds__trailing_analysis__trail_annotate_goal_2_7_p_0_env_0__succeeded)
              {
                *Status_11 = Status0_51;
                *STATE_VARIABLE_ModuleInfo_112 = STATE_VARIABLE_ModuleInfo_0_111;
              }
              else
              {
                MR_Word Globals_52;
                MR_Word IntermodAnalysis_53;

                hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_ModuleInfo_0_111, &Globals_52);
                libs__globals__lookup_bool_option_3_p_0(Globals_52, (MR_Integer) 337, &IntermodAnalysis_53);
                (env).transform_hlds__trailing_analysis__trail_annotate_goal_2_7_p_0_env_0__succeeded = (IntermodAnalysis_53 == (MR_Integer) 1);
                if ((env).transform_hlds__trailing_analysis__trail_annotate_goal_2_7_p_0_env_0__succeeded)
                  (env).transform_hlds__trailing_analysis__trail_annotate_goal_2_7_p_0_env_0__succeeded = hlds__hlds_pred__pred_info_is_imported_1_p_0((env).transform_hlds__trailing_analysis__trail_annotate_goal_2_7_p_0_env_0__CallPredInfo_45);
                if ((env).transform_hlds__trailing_analysis__trail_annotate_goal_2_7_p_0_env_0__succeeded)
                {
                  MR_Word Result_54;
                  MR_Word AnalysisStatus_55;

                  transform_hlds__trailing_analysis__search_trail_analysis_status_5_p_0(CallPPId_44, &Result_54, &AnalysisStatus_55, STATE_VARIABLE_ModuleInfo_0_111, STATE_VARIABLE_ModuleInfo_112);
                  switch (AnalysisStatus_55) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *Status_11 = (MR_Integer) 0;
                      break;
                    case (MR_Integer) 2:
                    case (MR_Integer) 1:
                      switch (Result_54) {
                        default: /*NOTREACHED*/ MR_assert(0);
                        case (MR_Integer) 2:
                          *Status_11 = transform_hlds__trailing_analysis__trail_check_vars_3_f_0(*STATE_VARIABLE_ModuleInfo_112, VarTypes_8, CallArgs_40);
                          break;
                        case (MR_Integer) 0:
                        case (MR_Integer) 1:
                          *Status_11 = Result_54;
                          break;
                      }
                      break;
                  }
                }
                else
                {
                  transform_hlds__trailing_analysis__trail_check_call_5_p_0(STATE_VARIABLE_ModuleInfo_0_111, VarTypes_8, CallPPId_44, CallArgs_40, Status_11);
                  *STATE_VARIABLE_ModuleInfo_112 = STATE_VARIABLE_ModuleInfo_0_111;
                }
              }
            }
          }
          *STATE_VARIABLE_GoalExpr_110 = STATE_VARIABLE_GoalExpr_0_109;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), STATE_VARIABLE_GoalExpr_0_109, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word GenericCall_63 = ((MR_Word) (MR_hl_field(MR_mktag(3), STATE_VARIABLE_GoalExpr_0_109, (MR_Integer) 1)));
              MR_Word Var_64 = ((MR_Word) (MR_hl_field(MR_mktag(3), STATE_VARIABLE_GoalExpr_0_109, (MR_Integer) 2)));
              MR_Word Var_65 = ((MR_Word) (MR_hl_field(MR_mktag(3), STATE_VARIABLE_GoalExpr_0_109, (MR_Integer) 3)));
              MR_Word Var_66 = ((MR_Word) (MR_hl_field(MR_mktag(3), STATE_VARIABLE_GoalExpr_0_109, (MR_Integer) 4)));
              MR_Word Var_67 = ((MR_Word) (MR_hl_field(MR_mktag(3), STATE_VARIABLE_GoalExpr_0_109, (MR_Integer) 5)));

              switch (MR_tag((MR_Word) GenericCall_63)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  *Status_11 = (MR_Integer) 0;
                  break;
                case (MR_Integer) 1:
                  *Status_11 = (MR_Integer) 0;
                  break;
                case (MR_Integer) 2:
                  *Status_11 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 3:
                  *Status_11 = (MR_Integer) 1;
                  break;
              }
              *STATE_VARIABLE_GoalExpr_110 = STATE_VARIABLE_GoalExpr_0_109;
              *STATE_VARIABLE_ModuleInfo_112 = STATE_VARIABLE_ModuleInfo_0_111;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Attributes_56 = ((MR_Word) (MR_hl_field(MR_mktag(3), STATE_VARIABLE_GoalExpr_0_109, (MR_Integer) 1)));
              MR_Word Var_57 = ((MR_Word) (MR_hl_field(MR_mktag(3), STATE_VARIABLE_GoalExpr_0_109, (MR_Integer) 2)));
              MR_Integer Var_58 = ((MR_Integer) (MR_hl_field(MR_mktag(3), STATE_VARIABLE_GoalExpr_0_109, (MR_Integer) 3)));
              MR_Word Var_59 = ((MR_Word) (MR_hl_field(MR_mktag(3), STATE_VARIABLE_GoalExpr_0_109, (MR_Integer) 4)));
              MR_Word Var_60 = ((MR_Word) (MR_hl_field(MR_mktag(3), STATE_VARIABLE_GoalExpr_0_109, (MR_Integer) 5)));
              MR_Word Var_61 = ((MR_Word) (MR_hl_field(MR_mktag(3), STATE_VARIABLE_GoalExpr_0_109, (MR_Integer) 6)));
              MR_Word Var_62 = ((MR_Word) (MR_hl_field(MR_mktag(3), STATE_VARIABLE_GoalExpr_0_109, (MR_Integer) 7)));

              *Status_11 = transform_hlds__trailing_analysis__attributes_imply_trail_mod_1_f_0(Attributes_56);
              *STATE_VARIABLE_GoalExpr_110 = STATE_VARIABLE_GoalExpr_0_109;
              *STATE_VARIABLE_ModuleInfo_112 = STATE_VARIABLE_ModuleInfo_0_111;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word ConjType_78 = ((MR_Word) (MR_hl_field(MR_mktag(3), STATE_VARIABLE_GoalExpr_0_109, (MR_Integer) 1)));
              MR_Word Conjuncts0_79 = ((MR_Word) (MR_hl_field(MR_mktag(3), STATE_VARIABLE_GoalExpr_0_109, (MR_Integer) 2)));
              MR_Word Conjuncts_80;

              transform_hlds__trailing_analysis__trail_annotate_goal_list_6_p_0(VarTypes_8, Conjuncts0_79, &Conjuncts_80, Status_11, STATE_VARIABLE_ModuleInfo_0_111, STATE_VARIABLE_ModuleInfo_112);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                *STATE_VARIABLE_GoalExpr_110 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ConjType_78));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (Conjuncts_80));
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word Disjuncts0_81 = ((MR_Word) (MR_hl_field(MR_mktag(3), STATE_VARIABLE_GoalExpr_0_109, (MR_Integer) 1)));
              MR_Word Disjuncts_82;

              transform_hlds__trailing_analysis__trail_annotate_goal_list_6_p_0(VarTypes_8, Disjuncts0_81, &Disjuncts_82, Status_11, STATE_VARIABLE_ModuleInfo_0_111, STATE_VARIABLE_ModuleInfo_112);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *STATE_VARIABLE_GoalExpr_110 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Disjuncts_82));
              }
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word Var_83 = ((MR_Word) (MR_hl_field(MR_mktag(3), STATE_VARIABLE_GoalExpr_0_109, (MR_Integer) 1)));
              MR_Word CanFail_84 = ((MR_Word) (MR_hl_field(MR_mktag(3), STATE_VARIABLE_GoalExpr_0_109, (MR_Integer) 2)));
              MR_Word Cases0_85 = ((MR_Word) (MR_hl_field(MR_mktag(3), STATE_VARIABLE_GoalExpr_0_109, (MR_Integer) 3)));
              MR_Word Cases_86;

              transform_hlds__trailing_analysis__trail_annotate_cases_6_p_0(VarTypes_8, Cases0_85, &Cases_86, Status_11, STATE_VARIABLE_ModuleInfo_0_111, STATE_VARIABLE_ModuleInfo_112);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                *STATE_VARIABLE_GoalExpr_110 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Var_83));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (CanFail_84));
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (Cases_86));
              }
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word Reason_99 = ((MR_Word) (MR_hl_field(MR_mktag(3), STATE_VARIABLE_GoalExpr_0_109, (MR_Integer) 1)));
              MR_Word InnerGoal0_100 = ((MR_Word) (MR_hl_field(MR_mktag(3), STATE_VARIABLE_GoalExpr_0_109, (MR_Integer) 2)));
              MR_Word Var_116;
              MR_Word Var_101;

              (env).transform_hlds__trailing_analysis__trail_annotate_goal_2_7_p_0_env_0__succeeded = ((((MR_tag((MR_Word) Reason_99)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Reason_99, (MR_Integer) 0)))) == (MR_Integer) 6)));
              if ((env).transform_hlds__trailing_analysis__trail_annotate_goal_2_7_p_0_env_0__succeeded)
              {
                Var_101 = ((MR_Word) (MR_hl_field(MR_mktag(3), Reason_99, (MR_Integer) 1)));
                Var_116 = ((MR_Word) (MR_hl_field(MR_mktag(3), Reason_99, (MR_Integer) 2)));
                (env).transform_hlds__trailing_analysis__trail_annotate_goal_2_7_p_0_env_0__succeeded = (Var_116 == (MR_Integer) 1);
              }
              if ((env).transform_hlds__trailing_analysis__trail_annotate_goal_2_7_p_0_env_0__succeeded)
              {
                *Status_11 = (MR_Integer) 1;
                *STATE_VARIABLE_ModuleInfo_112 = STATE_VARIABLE_ModuleInfo_0_111;
                *STATE_VARIABLE_GoalExpr_110 = STATE_VARIABLE_GoalExpr_0_109;
              }
              else
              {
                MR_Word InnerGoal_103;
                MR_Word InnerGoalInfo_105;
                MR_Word InnerCodeModel_106;
                MR_Word OuterCodeModel_107;
                MR_Word Status0_136;
                MR_Word Var_104;

                transform_hlds__trailing_analysis__trail_annotate_goal_6_p_0(VarTypes_8, InnerGoal0_100, &InnerGoal_103, &Status0_136, STATE_VARIABLE_ModuleInfo_0_111, STATE_VARIABLE_ModuleInfo_112);
                Var_104 = ((MR_Word) (MR_hl_field(MR_mktag(0), InnerGoal_103, (MR_Integer) 0)));
                InnerGoalInfo_105 = ((MR_Word) (MR_hl_field(MR_mktag(0), InnerGoal_103, (MR_Integer) 1)));
                InnerCodeModel_106 = hlds__code_model__goal_info_get_code_model_1_f_0(InnerGoalInfo_105);
                OuterCodeModel_107 = hlds__code_model__goal_info_get_code_model_1_f_0(GoalInfo_9);
                *Status_11 = transform_hlds__trailing_analysis__scope_implies_trail_mod_3_f_0(InnerCodeModel_106, OuterCodeModel_107, Status0_136);
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                  *STATE_VARIABLE_GoalExpr_110 = base;
                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                  MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Reason_99));
                  MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (InnerGoal_103));
                }
              }
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word Vars_87 = ((MR_Word) (MR_hl_field(MR_mktag(3), STATE_VARIABLE_GoalExpr_0_109, (MR_Integer) 1)));
              MR_Word If0_88 = ((MR_Word) (MR_hl_field(MR_mktag(3), STATE_VARIABLE_GoalExpr_0_109, (MR_Integer) 2)));
              MR_Word Then0_89 = ((MR_Word) (MR_hl_field(MR_mktag(3), STATE_VARIABLE_GoalExpr_0_109, (MR_Integer) 3)));
              MR_Word Else0_90 = ((MR_Word) (MR_hl_field(MR_mktag(3), STATE_VARIABLE_GoalExpr_0_109, (MR_Integer) 4)));
              MR_Word If_91;
              MR_Word IfStatus_92;
              MR_Word Then_93;
              MR_Word ThenStatus_94;
              MR_Word Else_95;
              MR_Word ElseStatus_96;
              MR_Word STATE_VARIABLE_ModuleInfo_121_121;
              MR_Word STATE_VARIABLE_ModuleInfo_122_122;

              transform_hlds__trailing_analysis__trail_annotate_goal_6_p_0(VarTypes_8, If0_88, &If_91, &IfStatus_92, STATE_VARIABLE_ModuleInfo_0_111, &STATE_VARIABLE_ModuleInfo_121_121);
              transform_hlds__trailing_analysis__trail_annotate_goal_6_p_0(VarTypes_8, Then0_89, &Then_93, &ThenStatus_94, STATE_VARIABLE_ModuleInfo_121_121, &STATE_VARIABLE_ModuleInfo_122_122);
              transform_hlds__trailing_analysis__trail_annotate_goal_6_p_0(VarTypes_8, Else0_90, &Else_95, &ElseStatus_96, STATE_VARIABLE_ModuleInfo_122_122, STATE_VARIABLE_ModuleInfo_112);
              (env).transform_hlds__trailing_analysis__trail_annotate_goal_2_7_p_0_env_0__succeeded = (IfStatus_92 == (MR_Integer) 1);
              if ((env).transform_hlds__trailing_analysis__trail_annotate_goal_2_7_p_0_env_0__succeeded)
              {
                (env).transform_hlds__trailing_analysis__trail_annotate_goal_2_7_p_0_env_0__succeeded = (ThenStatus_94 == (MR_Integer) 1);
                if ((env).transform_hlds__trailing_analysis__trail_annotate_goal_2_7_p_0_env_0__succeeded)
                  (env).transform_hlds__trailing_analysis__trail_annotate_goal_2_7_p_0_env_0__succeeded = (ElseStatus_96 == (MR_Integer) 1);
              }
              if ((env).transform_hlds__trailing_analysis__trail_annotate_goal_2_7_p_0_env_0__succeeded)
                *Status_11 = (MR_Integer) 1;
              else
                *Status_11 = (MR_Integer) 0;
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
                *STATE_VARIABLE_GoalExpr_110 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Vars_87));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (If_91));
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (Then_93));
                MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (Else_95));
              }
            }
            break;
          case (MR_Integer) 7:
            {
              {
                mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.trailing_analysis", (MR_String) "predicate \140transform_hlds.trailing_analysis.trail_annotate_goal_2\'/7", (MR_String) "shorthand");
                return;
              }
            }
            break;
        }
        break;
    }
  }
}

static void MR_CALL 
transform_hlds__trailing_analysis__trail_annotate_goal_6_p_0(
  MR_Word VarTypes_7,
  MR_Word STATE_VARIABLE_Goal_0_15,
  MR_Word * STATE_VARIABLE_Goal_16,
  MR_Word * Status_9,
  MR_Word STATE_VARIABLE_ModuleInfo_0_17,
  MR_Word * STATE_VARIABLE_ModuleInfo_18)
{
  {
    MR_Word GoalExpr0_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Goal_0_15, (MR_Integer) 0)));
    MR_Word GoalInfo0_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Goal_0_15, (MR_Integer) 1)));
    MR_Word GoalExpr_13;
    MR_Word GoalInfo_14;

    transform_hlds__trailing_analysis__trail_annotate_goal_2_7_p_0(VarTypes_7, GoalInfo0_12, GoalExpr0_11, &GoalExpr_13, Status_9, STATE_VARIABLE_ModuleInfo_0_17, STATE_VARIABLE_ModuleInfo_18);
    switch (*Status_9) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 2:
      case (MR_Integer) 0:
        GoalInfo_14 = GoalInfo0_12;
        break;
      case (MR_Integer) 1:
        {
          hlds__hlds_goal__goal_info_add_feature_3_p_0((MR_Integer) 16, GoalInfo0_12, &GoalInfo_14);
        }
        break;
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_Goal_16 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_13));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo_14));
    }
  }
}

static void MR_CALL 
transform_hlds__trailing_analysis__trail_annotate_cases_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv4_HeadVar__3_3;

    transform_hlds__trailing_analysis__combine_trailing_status_3_p_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv4_HeadVar__3_3);
    *wrapper_arg_3 = ((MR_Box) (conv4_HeadVar__3_3));
  }
}

static void MR_CALL 
transform_hlds__trailing_analysis__trail_annotate_cases_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv2_STATE_VARIABLE_Case_16;
    MR_Word conv1_Status_9;
    MR_Word conv0_STATE_VARIABLE_ModuleInfo_18;

    transform_hlds__trailing_analysis__trail_annotate_case_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1), &conv2_STATE_VARIABLE_Case_16, &conv1_Status_9, ((MR_Word) wrapper_arg_4), &conv0_STATE_VARIABLE_ModuleInfo_18);
    *wrapper_arg_2 = ((MR_Box) (conv2_STATE_VARIABLE_Case_16));
    *wrapper_arg_3 = ((MR_Box) (conv1_Status_9));
    *wrapper_arg_5 = ((MR_Box) (conv0_STATE_VARIABLE_ModuleInfo_18));
  }
}

static void MR_CALL 
transform_hlds__trailing_analysis__trail_annotate_cases_6_p_0(
  MR_Word VarTypes_7,
  MR_Word STATE_VARIABLE_Cases_0_12,
  MR_Word * STATE_VARIABLE_Cases_13,
  MR_Word * Status_9,
  MR_Word STATE_VARIABLE_ModuleInfo_0_14,
  MR_Word * STATE_VARIABLE_ModuleInfo_15)
{
  {
    MR_Word TypeCtorInfo_26_26;
    MR_Word TypeCtorInfo_27_27;
    MR_Word Statuses_11;
    MR_Word Var_16;
    MR_Box conv3_STATE_VARIABLE_ModuleInfo_15;
    MR_Box conv5_Status_9;

    {
      Var_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_16, 0) = ((MR_Box) (&transform_hlds__trailing_analysis_scalar_common_7[2]));
      MR_hl_field(MR_mktag(0), Var_16, 1) = ((MR_Box) (transform_hlds__trailing_analysis__trail_annotate_cases_6_p_0_1));
      MR_hl_field(MR_mktag(0), Var_16, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_16, 3) = ((MR_Box) (VarTypes_7));
    }
    TypeCtorInfo_26_26 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0;
    TypeCtorInfo_27_27 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_trailing_status_0;
    mercury__list__map2_foldl_6_p_0(TypeCtorInfo_26_26, TypeCtorInfo_26_26, TypeCtorInfo_27_27, (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0, Var_16, STATE_VARIABLE_Cases_0_12, STATE_VARIABLE_Cases_13, &Statuses_11, ((MR_Box) (STATE_VARIABLE_ModuleInfo_0_14)), &conv3_STATE_VARIABLE_ModuleInfo_15);
    *STATE_VARIABLE_ModuleInfo_15 = ((MR_Word) conv3_STATE_VARIABLE_ModuleInfo_15);
    mercury__list__foldl_4_p_0(TypeCtorInfo_27_27, TypeCtorInfo_27_27, (MR_Word) &transform_hlds__trailing_analysis_scalar_common_2[9], Statuses_11, ((MR_Box) ((MR_Integer) 1)), &conv5_Status_9);
    *Status_9 = ((MR_Word) conv5_Status_9);
  }
}

static void MR_CALL 
transform_hlds__trailing_analysis__trail_annotate_goal_list_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv4_HeadVar__3_3;

    transform_hlds__trailing_analysis__combine_trailing_status_3_p_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv4_HeadVar__3_3);
    *wrapper_arg_3 = ((MR_Box) (conv4_HeadVar__3_3));
  }
}

static void MR_CALL 
transform_hlds__trailing_analysis__trail_annotate_goal_list_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv2_STATE_VARIABLE_Goal_16;
    MR_Word conv1_Status_9;
    MR_Word conv0_STATE_VARIABLE_ModuleInfo_18;

    transform_hlds__trailing_analysis__trail_annotate_goal_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1), &conv2_STATE_VARIABLE_Goal_16, &conv1_Status_9, ((MR_Word) wrapper_arg_4), &conv0_STATE_VARIABLE_ModuleInfo_18);
    *wrapper_arg_2 = ((MR_Box) (conv2_STATE_VARIABLE_Goal_16));
    *wrapper_arg_3 = ((MR_Box) (conv1_Status_9));
    *wrapper_arg_5 = ((MR_Box) (conv0_STATE_VARIABLE_ModuleInfo_18));
  }
}

static void MR_CALL 
transform_hlds__trailing_analysis__trail_annotate_goal_list_6_p_0(
  MR_Word VarTypes_7,
  MR_Word STATE_VARIABLE_Goals_0_12,
  MR_Word * STATE_VARIABLE_Goals_13,
  MR_Word * Status_9,
  MR_Word STATE_VARIABLE_ModuleInfo_0_14,
  MR_Word * STATE_VARIABLE_ModuleInfo_15)
{
  {
    MR_Word TypeCtorInfo_26_26;
    MR_Word TypeCtorInfo_27_27;
    MR_Word Statuses_11;
    MR_Word Var_16;
    MR_Box conv3_STATE_VARIABLE_ModuleInfo_15;
    MR_Box conv5_Status_9;

    {
      Var_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_16, 0) = ((MR_Box) (&transform_hlds__trailing_analysis_scalar_common_7[1]));
      MR_hl_field(MR_mktag(0), Var_16, 1) = ((MR_Box) (transform_hlds__trailing_analysis__trail_annotate_goal_list_6_p_0_1));
      MR_hl_field(MR_mktag(0), Var_16, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_16, 3) = ((MR_Box) (VarTypes_7));
    }
    TypeCtorInfo_26_26 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
    TypeCtorInfo_27_27 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_trailing_status_0;
    mercury__list__map2_foldl_6_p_0(TypeCtorInfo_26_26, TypeCtorInfo_26_26, TypeCtorInfo_27_27, (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0, Var_16, STATE_VARIABLE_Goals_0_12, STATE_VARIABLE_Goals_13, &Statuses_11, ((MR_Box) (STATE_VARIABLE_ModuleInfo_0_14)), &conv3_STATE_VARIABLE_ModuleInfo_15);
    *STATE_VARIABLE_ModuleInfo_15 = ((MR_Word) conv3_STATE_VARIABLE_ModuleInfo_15);
    mercury__list__foldl_4_p_0(TypeCtorInfo_27_27, TypeCtorInfo_27_27, (MR_Word) &transform_hlds__trailing_analysis_scalar_common_2[8], Statuses_11, ((MR_Box) ((MR_Integer) 1)), &conv5_Status_9);
    *Status_9 = ((MR_Word) conv5_Status_9);
  }
}

static void MR_CALL 
transform_hlds__trailing_analysis__trail_check_type_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word Type_6,
  MR_Word STATE_VARIABLE_Status_0_8,
  MR_Word * STATE_VARIABLE_Status_9)
{
  {
    MR_bool succeeded;

    succeeded = check_hlds__type_util__type_is_solver_type_2_p_0(ModuleInfo_5, Type_6);
    if (!(succeeded))
      succeeded = check_hlds__type_util__type_is_existq_type_2_p_0(ModuleInfo_5, Type_6);
    if (succeeded)
      *STATE_VARIABLE_Status_9 = (MR_Integer) 0;
    else
    {
      MR_Word TypeCtorCategory_15;
      MR_Word Var_18;

      TypeCtorCategory_15 = check_hlds__type_util__classify_type_2_f_0(ModuleInfo_5, Type_6);
      Var_18 = transform_hlds__trailing_analysis__trail_check_type_2_3_f_0(ModuleInfo_5, Type_6, TypeCtorCategory_15);
      switch (Var_18) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 2:
          switch (STATE_VARIABLE_Status_0_8) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 2:
              *STATE_VARIABLE_Status_9 = (MR_Integer) 2;
              break;
            case (MR_Integer) 0:
              *STATE_VARIABLE_Status_9 = (MR_Integer) 0;
              break;
            case (MR_Integer) 1:
              *STATE_VARIABLE_Status_9 = (MR_Integer) 2;
              break;
          }
          break;
        case (MR_Integer) 0:
          *STATE_VARIABLE_Status_9 = (MR_Integer) 0;
          break;
        case (MR_Integer) 1:
          *STATE_VARIABLE_Status_9 = STATE_VARIABLE_Status_0_8;
          break;
      }
    }
  }
}

static void MR_CALL 
transform_hlds__trailing_analysis__trail_check_type_2_3_f_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv6_STATE_VARIABLE_Status_9;

    transform_hlds__trailing_analysis__trail_check_type_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv6_STATE_VARIABLE_Status_9);
    *wrapper_arg_3 = ((MR_Box) (conv6_STATE_VARIABLE_Status_9));
  }
}

static void MR_CALL 
transform_hlds__trailing_analysis__trail_check_type_2_3_f_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv4_STATE_VARIABLE_Status_9;

    transform_hlds__trailing_analysis__trail_check_type_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv4_STATE_VARIABLE_Status_9);
    *wrapper_arg_3 = ((MR_Box) (conv4_STATE_VARIABLE_Status_9));
  }
}

static void MR_CALL 
transform_hlds__trailing_analysis__trail_check_type_2_3_f_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv2_STATE_VARIABLE_Status_9;

    transform_hlds__trailing_analysis__trail_check_type_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv2_STATE_VARIABLE_Status_9);
    *wrapper_arg_3 = ((MR_Box) (conv2_STATE_VARIABLE_Status_9));
  }
}

static void MR_CALL 
transform_hlds__trailing_analysis__trail_check_type_2_3_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_Status_9;

    transform_hlds__trailing_analysis__trail_check_type_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv0_STATE_VARIABLE_Status_9);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_Status_9));
  }
}

static MR_Word MR_CALL 
transform_hlds__trailing_analysis__trail_check_type_2_3_f_0(
  MR_Word ModuleInfo_5,
  MR_Word Type_6,
  MR_Word TypeCtorCat_7)
{
  {
    MR_bool succeeded;
    MR_Word Status_8;

    switch (MR_tag((MR_Word) TypeCtorCat_7)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(TypeCtorCat_7)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            Status_8 = (MR_Integer) 1;
            break;
          case (MR_Integer) 1:
            {
              MR_Word Args_22;
              MR_Word _TypeCtor_18;
              MR_Word _UnifyCompare_19;

              parse_tree__prog_type__type_to_ctor_and_args_det_3_p_0(Type_6, &_TypeCtor_18, &Args_22);
              succeeded = check_hlds__type_util__type_has_user_defined_equality_pred_3_p_0(ModuleInfo_5, Type_6, &_UnifyCompare_19);
              if (succeeded)
                Status_8 = (MR_Integer) 0;
              else
              {
                MR_Word Var_53;
                MR_Box conv3_Status_8;

                {
                  Var_53 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Var_53, 0) = ((MR_Box) (&transform_hlds__trailing_analysis_scalar_common_6[3]));
                  MR_hl_field(MR_mktag(0), Var_53, 1) = ((MR_Box) (transform_hlds__trailing_analysis__trail_check_type_2_3_f_0_2));
                  MR_hl_field(MR_mktag(0), Var_53, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                  MR_hl_field(MR_mktag(0), Var_53, 3) = ((MR_Box) (ModuleInfo_5));
                }
                mercury__list__foldl_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_trailing_status_0, Var_53, Args_22, ((MR_Box) ((MR_Integer) 1)), &conv3_Status_8);
                Status_8 = ((MR_Word) conv3_Status_8);
              }
            }
            break;
          case (MR_Integer) 2:
            Status_8 = (MR_Integer) 1;
            break;
          case (MR_Integer) 3:
            Status_8 = (MR_Integer) 2;
            break;
          case (MR_Integer) 4:
            Status_8 = (MR_Integer) 1;
            break;
        }
        break;
      case (MR_Integer) 1:
        Status_8 = (MR_Integer) 1;
        break;
      case (MR_Integer) 2:
        {
          MR_Word Args_13;
          MR_Word _TypeCtor_12;
          MR_Word _UnifyCompare_14;

          parse_tree__prog_type__type_to_ctor_and_args_det_3_p_0(Type_6, &_TypeCtor_12, &Args_13);
          succeeded = check_hlds__type_util__type_has_user_defined_equality_pred_3_p_0(ModuleInfo_5, Type_6, &_UnifyCompare_14);
          if (succeeded)
            Status_8 = (MR_Integer) 0;
          else
          {
            MR_Word Var_43;
            MR_Box conv1_Status_8;

            {
              Var_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_43, 0) = ((MR_Box) (&transform_hlds__trailing_analysis_scalar_common_6[3]));
              MR_hl_field(MR_mktag(0), Var_43, 1) = ((MR_Box) (transform_hlds__trailing_analysis__trail_check_type_2_3_f_0_1));
              MR_hl_field(MR_mktag(0), Var_43, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
              MR_hl_field(MR_mktag(0), Var_43, 3) = ((MR_Box) (ModuleInfo_5));
            }
            mercury__list__foldl_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_trailing_status_0, Var_43, Args_13, ((MR_Box) ((MR_Integer) 1)), &conv1_Status_8);
            Status_8 = ((MR_Word) conv1_Status_8);
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), TypeCtorCat_7, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            Status_8 = (MR_Integer) 1;
            break;
          case (MR_Integer) 1:
            {
              MR_Word Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), TypeCtorCat_7, (MR_Integer) 1)));

              switch (Var_39) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  Status_8 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word Args_34;
                    MR_Word _TypeCtor_30;
                    MR_Word _UnifyCompare_31;

                    parse_tree__prog_type__type_to_ctor_and_args_det_3_p_0(Type_6, &_TypeCtor_30, &Args_34);
                    succeeded = check_hlds__type_util__type_has_user_defined_equality_pred_3_p_0(ModuleInfo_5, Type_6, &_UnifyCompare_31);
                    if (succeeded)
                      Status_8 = (MR_Integer) 0;
                    else
                    {
                      MR_Word Var_63;
                      MR_Box conv5_Status_8;

                      {
                        Var_63 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), Var_63, 0) = ((MR_Box) (&transform_hlds__trailing_analysis_scalar_common_6[3]));
                        MR_hl_field(MR_mktag(0), Var_63, 1) = ((MR_Box) (transform_hlds__trailing_analysis__trail_check_type_2_3_f_0_3));
                        MR_hl_field(MR_mktag(0), Var_63, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                        MR_hl_field(MR_mktag(0), Var_63, 3) = ((MR_Box) (ModuleInfo_5));
                      }
                      mercury__list__foldl_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_trailing_status_0, Var_63, Args_34, ((MR_Box) ((MR_Integer) 1)), &conv5_Status_8);
                      Status_8 = ((MR_Word) conv5_Status_8);
                    }
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word Args_28;
                    MR_Word _TypeCtor_24;
                    MR_Word _UnifyCompare_25;

                    parse_tree__prog_type__type_to_ctor_and_args_det_3_p_0(Type_6, &_TypeCtor_24, &Args_28);
                    succeeded = check_hlds__type_util__type_has_user_defined_equality_pred_3_p_0(ModuleInfo_5, Type_6, &_UnifyCompare_25);
                    if (succeeded)
                      Status_8 = (MR_Integer) 0;
                    else
                    {
                      MR_Word Var_73;
                      MR_Box conv7_Status_8;

                      {
                        Var_73 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), Var_73, 0) = ((MR_Box) (&transform_hlds__trailing_analysis_scalar_common_6[3]));
                        MR_hl_field(MR_mktag(0), Var_73, 1) = ((MR_Box) (transform_hlds__trailing_analysis__trail_check_type_2_3_f_0_4));
                        MR_hl_field(MR_mktag(0), Var_73, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                        MR_hl_field(MR_mktag(0), Var_73, 3) = ((MR_Box) (ModuleInfo_5));
                      }
                      mercury__list__foldl_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_trailing_status_0, Var_73, Args_28, ((MR_Box) ((MR_Integer) 1)), &conv7_Status_8);
                      Status_8 = ((MR_Word) conv7_Status_8);
                    }
                  }
                  break;
              }
            }
            break;
        }
        break;
    }
    return Status_8;
  }
}

static void MR_CALL 
transform_hlds__trailing_analysis__trail_check_call_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_Status_9;

    transform_hlds__trailing_analysis__trail_check_type_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv0_STATE_VARIABLE_Status_9);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_Status_9));
  }
}

static void MR_CALL 
transform_hlds__trailing_analysis__trail_check_call_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Word VarTypes_7,
  MR_Word PPId_8,
  MR_Word Args_9,
  MR_Word * Result_10)
{
  {
    MR_Word MaybeResult_11;
    MR_Word ProcInfo_20;
    MR_Word MaybeCalleeTrailingInfo_21;
    MR_Word _PredInfo_19;

    hlds__hlds_module__module_info_pred_proc_info_4_p_0(ModuleInfo_6, PPId_8, &_PredInfo_19, &ProcInfo_20);
    hlds__hlds_pred__proc_info_get_trailing_info_2_p_0(ProcInfo_20, &MaybeCalleeTrailingInfo_21);
    if ((MaybeCalleeTrailingInfo_21 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      MaybeResult_11 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
    {
      MR_Word CalleeTrailingInfo_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeCalleeTrailingInfo_21, (MR_Integer) 0)));
      MR_Word CalleeTrailingStatus_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), CalleeTrailingInfo_22, (MR_Integer) 0)));
      MR_Word AnalysisStatus_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), CalleeTrailingInfo_22, (MR_Integer) 1)));

      switch (CalleeTrailingStatus_23) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 2:
          {
            MR_Word TrailingStatus_25;
            MR_Word Var_26;
            MR_Word Types_31;
            MR_Word Var_35;
            MR_Box conv1_TrailingStatus_25;

            hlds__vartypes__lookup_var_types_3_p_0(VarTypes_7, Args_9, &Types_31);
            {
              Var_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_35, 0) = ((MR_Box) (&transform_hlds__trailing_analysis_scalar_common_6[3]));
              MR_hl_field(MR_mktag(0), Var_35, 1) = ((MR_Box) (transform_hlds__trailing_analysis__trail_check_call_5_p_0_1));
              MR_hl_field(MR_mktag(0), Var_35, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
              MR_hl_field(MR_mktag(0), Var_35, 3) = ((MR_Box) (ModuleInfo_6));
            }
            mercury__list__foldl_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_trailing_status_0, Var_35, Types_31, ((MR_Box) ((MR_Integer) 1)), &conv1_TrailingStatus_25);
            TrailingStatus_25 = ((MR_Word) conv1_TrailingStatus_25);
            {
              Var_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_26, 0) = ((MR_Box) (TrailingStatus_25));
              MR_hl_field(MR_mktag(0), Var_26, 1) = ((MR_Box) (AnalysisStatus_24));
            }
            {
              MaybeResult_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), MaybeResult_11, 0) = ((MR_Box) (Var_26));
            }
          }
          break;
        case (MR_Integer) 0:
          MaybeResult_11 = MaybeCalleeTrailingInfo_21;
          break;
        case (MR_Integer) 1:
          MaybeResult_11 = MaybeCalleeTrailingInfo_21;
          break;
      }
    }
    if ((MaybeResult_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *Result_10 = (MR_Integer) 0;
    else
    {
      MR_Word Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeResult_11, (MR_Integer) 0)));
      MR_Word Var_12;

      *Result_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_13, (MR_Integer) 0)));
      Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_13, (MR_Integer) 1)));
    }
  }
}

static void MR_CALL 
transform_hlds__trailing_analysis__combine_maybe_trail_analysis_status_3_p_0(
  MR_Word MaybeStatusA_4,
  MR_Word MaybeStatusB_5,
  MR_Word * MaybeStatus_6)
{
  {
    MR_bool succeeded = ((MR_tag((MR_Word) MaybeStatusA_4)) == (MR_mktag((MR_Integer) 1)));
    MR_Word StatusA_7;
    MR_Word StatusB_8;

    if (succeeded)
    {
      StatusA_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeStatusA_4, (MR_Integer) 0)));
      succeeded = ((MR_tag((MR_Word) MaybeStatusB_5)) == (MR_mktag((MR_Integer) 1)));
      if (succeeded)
        StatusB_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeStatusB_5, (MR_Integer) 0)));
    }
    if (succeeded)
    {
      MR_Word Var_9;

      Var_9 = analysis__lub_2_f_0(StatusA_7, StatusB_8);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        *MaybeStatus_6 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_9));
      }
    }
    else
      *MaybeStatus_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
  }
}

static void MR_CALL 
transform_hlds__trailing_analysis__combine_trailing_status_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  switch (HeadVar__1_1) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 2:
      switch (HeadVar__2_2) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 2:
          *HeadVar__3_3 = (MR_Integer) 2;
          break;
        case (MR_Integer) 0:
          *HeadVar__3_3 = (MR_Integer) 0;
          break;
        case (MR_Integer) 1:
          *HeadVar__3_3 = (MR_Integer) 2;
          break;
      }
      break;
    case (MR_Integer) 0:
      *HeadVar__3_3 = (MR_Integer) 0;
      break;
    case (MR_Integer) 1:
      *HeadVar__3_3 = HeadVar__2_2;
      break;
  }
}

static MR_bool MR_CALL 
transform_hlds__trailing_analysis__trail_get_conditional_closure_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word PPId_6,
  MR_Word STATE_VARIABLE_Conditionals_0_14,
  MR_Word * STATE_VARIABLE_Conditionals_15)
{
  {
    MR_bool succeeded;
    MR_Word ProcInfo_9;
    MR_Word MaybeProcTrailingInfo_10;
    MR_Word ProcTrailingInfo_11;
    MR_Word Status_12;
    MR_Word _PredInfo_8;
    MR_Word Var_13;

    hlds__hlds_module__module_info_pred_proc_info_4_p_0(ModuleInfo_5, PPId_6, &_PredInfo_8, &ProcInfo_9);
    hlds__hlds_pred__proc_info_get_trailing_info_2_p_0(ProcInfo_9, &MaybeProcTrailingInfo_10);
    succeeded = ((MR_tag((MR_Word) MaybeProcTrailingInfo_10)) == (MR_mktag((MR_Integer) 1)));
    if (succeeded)
    {
      ProcTrailingInfo_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeProcTrailingInfo_10, (MR_Integer) 0)));
      Status_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ProcTrailingInfo_11, (MR_Integer) 0)));
      Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ProcTrailingInfo_11, (MR_Integer) 1)));
      switch (Status_12) {
        default:
          succeeded = MR_FALSE;
          break;
        case (MR_Integer) 2:
          {
            mercury__list__cons_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, ((MR_Box) (PPId_6)), STATE_VARIABLE_Conditionals_0_14, STATE_VARIABLE_Conditionals_15);
            succeeded = MR_TRUE;
          }
          break;
        case (MR_Integer) 1:
          {
            *STATE_VARIABLE_Conditionals_15 = STATE_VARIABLE_Conditionals_0_14;
            succeeded = MR_TRUE;
          }
          break;
      }
    }
    return succeeded;
  }
}

static MR_bool MR_CALL 
transform_hlds__trailing_analysis__trail_get_conditional_closures_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_Conditionals_15;

    succeeded = transform_hlds__trailing_analysis__trail_get_conditional_closure_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv0_STATE_VARIABLE_Conditionals_15);
    if (succeeded)
    {
      *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_Conditionals_15));
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

static MR_bool MR_CALL 
transform_hlds__trailing_analysis__trail_get_conditional_closures_3_p_0(
  MR_Word ModuleInfo_4,
  MR_Word Closures_5,
  MR_Word * Conditionals_6)
{
  {
    MR_bool succeeded;
    MR_Word Var_7;
    MR_Box conv1_Conditionals_6;

    {
      Var_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_7, 0) = ((MR_Box) (&transform_hlds__trailing_analysis_scalar_common_6[4]));
      MR_hl_field(MR_mktag(0), Var_7, 1) = ((MR_Box) (transform_hlds__trailing_analysis__trail_get_conditional_closures_3_p_0_1));
      MR_hl_field(MR_mktag(0), Var_7, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_7, 3) = ((MR_Box) (ModuleInfo_4));
    }
    succeeded = mercury__set__fold_4_p_3((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &transform_hlds__trailing_analysis_scalar_common_1[3], Var_7, Closures_5, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &conv1_Conditionals_6);
    if (succeeded)
    {
      *Conditionals_6 = ((MR_Word) conv1_Conditionals_6);
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__trailing_analysis__check_proc_for_trail_mods_6_p_0(
  MR_Word SCC_7,
  MR_Word PPId_8,
  MR_Word STATE_VARIABLE_Results_0_17,
  MR_Word * STATE_VARIABLE_Results_18,
  MR_Word STATE_VARIABLE_ModuleInfo_0_19,
  MR_Word * STATE_VARIABLE_ModuleInfo_20)
{
  {
    MR_Word ProcInfo_12;
    MR_Word Body_13;
    MR_Word VarTypes_14;
    MR_Word Result_15;
    MR_Word MaybeAnalysisStatus_16;
    MR_Word Var_22;
    MR_Word Var_11;

    hlds__hlds_module__module_info_pred_proc_info_4_p_0(STATE_VARIABLE_ModuleInfo_0_19, PPId_8, &Var_11, &ProcInfo_12);
    hlds__hlds_pred__proc_info_get_goal_2_p_0(ProcInfo_12, &Body_13);
    hlds__hlds_pred__proc_info_get_vartypes_2_p_0(ProcInfo_12, &VarTypes_14);
    transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0(SCC_7, VarTypes_14, Body_13, &Result_15, &MaybeAnalysisStatus_16, STATE_VARIABLE_ModuleInfo_0_19, STATE_VARIABLE_ModuleInfo_20);
    {
      Var_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_22, 0) = ((MR_Box) (PPId_8));
      MR_hl_field(MR_mktag(0), Var_22, 1) = ((MR_Box) (Result_15));
      MR_hl_field(MR_mktag(0), Var_22, 2) = ((MR_Box) (MaybeAnalysisStatus_16));
    }
    mercury__list__cons_3_p_0((MR_Word) &transform_hlds__trailing_analysis__transform_hlds__trailing_analysis__type_ctor_info_trail_proc_result_0, ((MR_Box) (Var_22)), STATE_VARIABLE_Results_0_17, STATE_VARIABLE_Results_18);
  }
}

static MR_Box MR_CALL 
transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_LambdaHeadVar__2_126;

    conv0_LambdaHeadVar__2_126 = transform_hlds__trailing_analysis__IntroducedFrom__func__check_goal_for_trail_mods__453__1_1_f_0(((MR_Word) wrapper_arg_1));
    wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_126));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0_1(
  void * env_ptr_arg)
{
  {
    struct transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0_env_0_s * env_ptr = (struct transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0_env_0_s *) env_ptr_arg;

    MR_builtin_longjmp((env_ptr)->transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0_env_0__commit_0, 1);
  }
}

static void MR_CALL 
transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0_2(
  void * env_ptr_arg)
{
  {
    struct transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0_env_0_s * env_ptr = (struct transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0_env_0_s *) env_ptr_arg;

    {
      MR_String Var_55;

      mdbcomp__prim_data__special_pred_name_arity_4_p_0((env_ptr)->transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0_env_0__SpecialPredId_54, &(env_ptr)->transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0_env_0__Var_162, &Var_55, &(env_ptr)->transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0_env_0__Var_163);
      (env_ptr)->transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0_env_0__succeeded = (strcmp((env_ptr)->transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0_env_0__Name_52, (env_ptr)->transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0_env_0__Var_162) == 0);
      if ((env_ptr)->transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0_env_0__succeeded)
      {
        (env_ptr)->transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0_env_0__succeeded = ((env_ptr)->transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0_env_0__Arity_53 == (env_ptr)->transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0_env_0__Var_163);
        if ((env_ptr)->transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0_env_0__succeeded)
          transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0_1(env_ptr);
      }
    }
  }
}

static void MR_CALL 
transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0_3(
  void * env_ptr_arg)
{
  {
    struct transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0_env_0_s * env_ptr = (struct transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0_env_0_s *) env_ptr_arg;

    if (MR_builtin_setjmp((env_ptr)->transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0_env_0__commit_0) == 0)
      {
        {
          MR_Word ModuleName_51;

          ModuleName_51 = hlds__hlds_pred__pred_info_module_1_f_0((env_ptr)->transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0_env_0__CallPredInfo_48);
          (env_ptr)->transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0_env_0__succeeded = mdbcomp__builtin_modules__any_mercury_builtin_module_1_p_0(ModuleName_51);
          if ((env_ptr)->transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0_env_0__succeeded)
          {
            (env_ptr)->transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0_env_0__Name_52 = hlds__hlds_pred__pred_info_name_1_f_0((env_ptr)->transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0_env_0__CallPredInfo_48);
            (env_ptr)->transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0_env_0__Arity_53 = hlds__hlds_pred__pred_info_orig_arity_1_f_0((env_ptr)->transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0_env_0__CallPredInfo_48);
            {
              MR_Integer slot_1 = (MR_Integer) 0;

              do
              {
                (env_ptr)->transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0_env_0__SpecialPredId_54 = ((&transform_hlds__trailing_analysis_vector_common_10[0 + slot_1]))->transform_hlds__trailing_analysis__vector_common_type_10_0__vct_10_f_0;
                transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0_2(env_ptr);
                slot_1 = (slot_1 + (MR_Integer) 1);
              }
              while ((slot_1 < (MR_Integer) 2));
            }
          }
        }
        (env_ptr)->transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0_env_0__succeeded = MR_FALSE;
      }
    else
      (env_ptr)->transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0_env_0__succeeded = MR_TRUE;
  }
}

static void MR_CALL 
transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0(
  MR_Word SCC_8,
  MR_Word VarTypes_9,
  MR_Word Goal_10,
  MR_Word * Result_11,
  MR_Word * MaybeAnalysisStatus_12,
  MR_Word STATE_VARIABLE_ModuleInfo_0_109,
  MR_Word * STATE_VARIABLE_ModuleInfo_110)
{
  {
    struct transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0_env_0_s env;

    while (MR_TRUE)
    {
      MR_Word GoalExpr_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), Goal_10, (MR_Integer) 0)));
      MR_Word GoalInfo_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), Goal_10, (MR_Integer) 1)));

      // setup for tailcalls optimized into a loop
      switch (MR_tag((MR_Word) GoalExpr_14)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word SubGoal_99 = (MR_Word) MR_body(((MR_Word) GoalExpr_14), (MR_Integer) 0);
            MR_Word next_value_of_Goal_10 = SubGoal_99;

            // direct tailcall eliminated
            Goal_10 = next_value_of_Goal_10;
            continue;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Kind_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), GoalExpr_14, (MR_Integer) 3)));
            MR_Word Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), GoalExpr_14, (MR_Integer) 0)));
            MR_Word Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), GoalExpr_14, (MR_Integer) 1)));
            MR_Word Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), GoalExpr_14, (MR_Integer) 2)));
            MR_Word Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), GoalExpr_14, (MR_Integer) 4)));

            *Result_11 = (MR_Integer) 1;
            *MaybeAnalysisStatus_12 = (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__trailing_analysis_scalar_common_8[0]);
            switch (MR_tag((MR_Word) Kind_19)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                }
                break;
              case (MR_Integer) 1:
                {
                }
                break;
              case (MR_Integer) 2:
                {
                }
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Kind_19, (MR_Integer) 0)))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      {
                        mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.trailing_analysis", (MR_String) "predicate \140transform_hlds.trailing_analysis.check_goal_for_trail_mods\'/7", (MR_String) "complicated unify");
                        return;
                      }
                    }
                    break;
                }
                break;
            }
            *STATE_VARIABLE_ModuleInfo_110 = STATE_VARIABLE_ModuleInfo_0_109;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word CallPredId_41 = ((MR_Word) (MR_hl_field(MR_mktag(2), GoalExpr_14, (MR_Integer) 0)));
            MR_Integer CallProcId_42 = ((MR_Integer) (MR_hl_field(MR_mktag(2), GoalExpr_14, (MR_Integer) 1)));
            MR_Word CallArgs_43 = ((MR_Word) (MR_hl_field(MR_mktag(2), GoalExpr_14, (MR_Integer) 2)));
            MR_Word CallPPId_47;
            MR_Word Var_44 = ((MR_Word) (MR_hl_field(MR_mktag(2), GoalExpr_14, (MR_Integer) 3)));
            MR_Word Var_45 = ((MR_Word) (MR_hl_field(MR_mktag(2), GoalExpr_14, (MR_Integer) 4)));
            MR_Word Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(2), GoalExpr_14, (MR_Integer) 5)));

            {
              CallPPId_47 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), CallPPId_47, 0) = ((MR_Box) (CallPredId_41));
              MR_hl_field(MR_mktag(0), CallPPId_47, 1) = ((MR_Box) (CallProcId_42));
            }
            hlds__hlds_module__module_info_pred_info_3_p_0(STATE_VARIABLE_ModuleInfo_0_109, CallPredId_41, &(env).transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0_env_0__CallPredInfo_48);
            (env).transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0_env_0__succeeded = mercury__set__member_2_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, ((MR_Box) (CallPPId_47)), SCC_8);
            if ((env).transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0_env_0__succeeded)
            {
              MR_Word Types_49;

              hlds__vartypes__lookup_var_types_3_p_0(VarTypes_9, CallArgs_43, &Types_49);
              *Result_11 = transform_hlds__trailing_analysis__trail_check_types_2_f_0(STATE_VARIABLE_ModuleInfo_0_109, Types_49);
              *MaybeAnalysisStatus_12 = (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__trailing_analysis_scalar_common_8[0]);
              *STATE_VARIABLE_ModuleInfo_110 = STATE_VARIABLE_ModuleInfo_0_109;
            }
            else
            {
              (env).transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0_env_0__succeeded = hlds__hlds_pred__pred_info_is_builtin_1_p_0((env).transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0_env_0__CallPredInfo_48);
              if ((env).transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0_env_0__succeeded)
              {
                *Result_11 = (MR_Integer) 1;
                *MaybeAnalysisStatus_12 = (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__trailing_analysis_scalar_common_8[0]);
                *STATE_VARIABLE_ModuleInfo_110 = STATE_VARIABLE_ModuleInfo_0_109;
              }
              else
              {
                transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0_3(&env);
                if ((env).transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0_env_0__succeeded)
                {
                  *Result_11 = (MR_Integer) 0;
                  *MaybeAnalysisStatus_12 = (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__trailing_analysis_scalar_common_8[0]);
                  *STATE_VARIABLE_ModuleInfo_110 = STATE_VARIABLE_ModuleInfo_0_109;
                }
                else
                {
                  MR_Word Result0_56;

                  (env).transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0_env_0__succeeded = transform_hlds__trailing_analysis__pred_info_has_known_trail_status_2_p_0((env).transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0_env_0__CallPredInfo_48, &Result0_56);
                  if ((env).transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0_env_0__succeeded)
                  {
                    *Result_11 = Result0_56;
                    *MaybeAnalysisStatus_12 = (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__trailing_analysis_scalar_common_8[0]);
                    *STATE_VARIABLE_ModuleInfo_110 = STATE_VARIABLE_ModuleInfo_0_109;
                  }
                  else
                  {
                    MR_Word Globals_57;
                    MR_Word Intermod_58;

                    hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_ModuleInfo_0_109, &Globals_57);
                    libs__globals__lookup_bool_option_3_p_0(Globals_57, (MR_Integer) 337, &Intermod_58);
                    (env).transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0_env_0__succeeded = (Intermod_58 == (MR_Integer) 1);
                    if ((env).transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0_env_0__succeeded)
                      (env).transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0_env_0__succeeded = hlds__hlds_pred__pred_info_is_imported_not_external_1_p_0((env).transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0_env_0__CallPredInfo_48);
                    if ((env).transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0_env_0__succeeded)
                    {
                      MR_Word AnalysisStatus_59;
                      MR_Word Result0_146;

                      transform_hlds__trailing_analysis__search_trail_analysis_status_5_p_0(CallPPId_47, &Result0_146, &AnalysisStatus_59, STATE_VARIABLE_ModuleInfo_0_109, STATE_VARIABLE_ModuleInfo_110);
                      switch (Result0_146) {
                        default: /*NOTREACHED*/ MR_assert(0);
                        case (MR_Integer) 2:
                          *Result_11 = transform_hlds__trailing_analysis__trail_check_vars_3_f_0(*STATE_VARIABLE_ModuleInfo_110, VarTypes_9, CallArgs_43);
                          break;
                        case (MR_Integer) 0:
                        case (MR_Integer) 1:
                          *Result_11 = Result0_146;
                          break;
                      }
                      {
                        MR_Word base;
                        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                        *MaybeAnalysisStatus_12 = base;
                        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (AnalysisStatus_59));
                      }
                    }
                    else
                    {
                      MR_Word MaybeResult_60;

                      transform_hlds__trailing_analysis__trail_check_call_2_5_p_0(STATE_VARIABLE_ModuleInfo_0_109, VarTypes_9, CallPPId_47, CallArgs_43, &MaybeResult_60);
                      if ((MaybeResult_60 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                      {
                        *Result_11 = (MR_Integer) 0;
                        switch (Intermod_58) {
                          default: /*NOTREACHED*/ MR_assert(0);
                          case (MR_Integer) 0:
                            *MaybeAnalysisStatus_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                            break;
                          case (MR_Integer) 1:
                            {
                              *MaybeAnalysisStatus_12 = (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__trailing_analysis_scalar_common_8[0]);
                            }
                            break;
                        }
                      }
                      else
                      {
                        MR_Word Var_141 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeResult_60, (MR_Integer) 0)));

                        *Result_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_141, (MR_Integer) 0)));
                        *MaybeAnalysisStatus_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_141, (MR_Integer) 1)));
                      }
                      *STATE_VARIABLE_ModuleInfo_110 = STATE_VARIABLE_ModuleInfo_0_109;
                    }
                  }
                }
              }
            }
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_14, (MR_Integer) 0)))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word Details_61 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_14, (MR_Integer) 1)));
                MR_Word _Args_62 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_14, (MR_Integer) 2)));
                MR_Word _ArgModes_63 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_14, (MR_Integer) 3)));
                MR_Word Var_64 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_14, (MR_Integer) 4)));
                MR_Word Var_65 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_14, (MR_Integer) 5)));

                switch (MR_tag((MR_Word) Details_61)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      *Result_11 = (MR_Integer) 0;
                      *MaybeAnalysisStatus_12 = (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__trailing_analysis_scalar_common_8[0]);
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      *Result_11 = (MR_Integer) 0;
                      *MaybeAnalysisStatus_12 = (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__trailing_analysis_scalar_common_8[0]);
                    }
                    break;
                  case (MR_Integer) 2:
                  case (MR_Integer) 3:
                    {
                      *Result_11 = (MR_Integer) 1;
                      *MaybeAnalysisStatus_12 = (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__trailing_analysis_scalar_common_8[0]);
                    }
                    break;
                }
                *STATE_VARIABLE_ModuleInfo_110 = STATE_VARIABLE_ModuleInfo_0_109;
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word Attributes_76 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_14, (MR_Integer) 1)));
                MR_Word Var_77 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_14, (MR_Integer) 2)));
                MR_Integer Var_78 = ((MR_Integer) (MR_hl_field(MR_mktag(3), GoalExpr_14, (MR_Integer) 3)));
                MR_Word Var_79 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_14, (MR_Integer) 4)));
                MR_Word Var_80 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_14, (MR_Integer) 5)));
                MR_Word Var_81 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_14, (MR_Integer) 6)));
                MR_Word Var_82 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_14, (MR_Integer) 7)));

                *Result_11 = transform_hlds__trailing_analysis__attributes_imply_trail_mod_1_f_0(Attributes_76);
                *MaybeAnalysisStatus_12 = (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__trailing_analysis_scalar_common_8[0]);
                *STATE_VARIABLE_ModuleInfo_110 = STATE_VARIABLE_ModuleInfo_0_109;
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word Goals_84 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_14, (MR_Integer) 2)));
                MR_Word _ConjType_83 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_14, (MR_Integer) 1)));

                transform_hlds__trailing_analysis__check_goals_for_trail_mods_7_p_0(SCC_8, VarTypes_9, Goals_84, Result_11, MaybeAnalysisStatus_12, STATE_VARIABLE_ModuleInfo_0_109, STATE_VARIABLE_ModuleInfo_110);
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Word Goals_149 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_14, (MR_Integer) 1)));
                MR_Word _Result0_85;

                transform_hlds__trailing_analysis__check_goals_for_trail_mods_7_p_0(SCC_8, VarTypes_9, Goals_149, &_Result0_85, MaybeAnalysisStatus_12, STATE_VARIABLE_ModuleInfo_0_109, STATE_VARIABLE_ModuleInfo_110);
                *Result_11 = (MR_Integer) 0;
              }
              break;
            case (MR_Integer) 4:
              {
                MR_Word Cases_88 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_14, (MR_Integer) 3)));
                MR_Word CaseGoals_89;
                MR_Word Var_86 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_14, (MR_Integer) 1)));
                MR_Word Var_87 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_14, (MR_Integer) 2)));

                CaseGoals_89 = mercury__list__map_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0, (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, (MR_Word) &transform_hlds__trailing_analysis_scalar_common_2[7], Cases_88);
                transform_hlds__trailing_analysis__check_goals_for_trail_mods_7_p_0(SCC_8, VarTypes_9, CaseGoals_89, Result_11, MaybeAnalysisStatus_12, STATE_VARIABLE_ModuleInfo_0_109, STATE_VARIABLE_ModuleInfo_110);
              }
              break;
            case (MR_Integer) 5:
              {
                MR_Word Reason_100 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_14, (MR_Integer) 1)));
                MR_Word InnerGoal_101 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_14, (MR_Integer) 2)));
                MR_Word Var_114;
                MR_Word Var_102;

                (env).transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0_env_0__succeeded = ((((MR_tag((MR_Word) Reason_100)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Reason_100, (MR_Integer) 0)))) == (MR_Integer) 6)));
                if ((env).transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0_env_0__succeeded)
                {
                  Var_102 = ((MR_Word) (MR_hl_field(MR_mktag(3), Reason_100, (MR_Integer) 1)));
                  Var_114 = ((MR_Word) (MR_hl_field(MR_mktag(3), Reason_100, (MR_Integer) 2)));
                  (env).transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0_env_0__succeeded = (Var_114 == (MR_Integer) 1);
                }
                if ((env).transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0_env_0__succeeded)
                {
                  *Result_11 = (MR_Integer) 1;
                  *MaybeAnalysisStatus_12 = (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__trailing_analysis_scalar_common_8[0]);
                  *STATE_VARIABLE_ModuleInfo_110 = STATE_VARIABLE_ModuleInfo_0_109;
                }
                else
                {
                  MR_Word InnerGoalInfo_105;
                  MR_Word InnerCodeModel_106;
                  MR_Word OuterCodeModel_107;
                  MR_Word Result0_156;
                  MR_Word Var_104;

                  transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0(SCC_8, VarTypes_9, InnerGoal_101, &Result0_156, MaybeAnalysisStatus_12, STATE_VARIABLE_ModuleInfo_0_109, STATE_VARIABLE_ModuleInfo_110);
                  Var_104 = ((MR_Word) (MR_hl_field(MR_mktag(0), InnerGoal_101, (MR_Integer) 0)));
                  InnerGoalInfo_105 = ((MR_Word) (MR_hl_field(MR_mktag(0), InnerGoal_101, (MR_Integer) 1)));
                  InnerCodeModel_106 = hlds__code_model__goal_info_get_code_model_1_f_0(InnerGoalInfo_105);
                  OuterCodeModel_107 = hlds__code_model__goal_info_get_code_model_1_f_0(GoalInfo_15);
                  *Result_11 = transform_hlds__trailing_analysis__scope_implies_trail_mod_3_f_0(InnerCodeModel_106, OuterCodeModel_107, Result0_156);
                }
              }
              break;
            case (MR_Integer) 6:
              {
                MR_Word Cond_94 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_14, (MR_Integer) 2)));
                MR_Word Then_95 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_14, (MR_Integer) 3)));
                MR_Word Else_96 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_14, (MR_Integer) 4)));
                MR_Word Var_118;
                MR_Word Var_120;
                MR_Word Var_121;
                MR_Word Result0_155;
                MR_Word Var_93 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_14, (MR_Integer) 1)));
                MR_Word CondGoalInfo_98;
                MR_Word _CondGoalExpr_97;
                MR_Word Var_123;

                {
                  Var_121 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_121, 0) = ((MR_Box) (Else_96));
                  MR_hl_field(MR_mktag(1), Var_121, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                }
                {
                  Var_120 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_120, 0) = ((MR_Box) (Then_95));
                  MR_hl_field(MR_mktag(1), Var_120, 1) = ((MR_Box) (Var_121));
                }
                {
                  Var_118 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_118, 0) = ((MR_Box) (Cond_94));
                  MR_hl_field(MR_mktag(1), Var_118, 1) = ((MR_Box) (Var_120));
                }
                transform_hlds__trailing_analysis__check_goals_for_trail_mods_7_p_0(SCC_8, VarTypes_9, Var_118, &Result0_155, MaybeAnalysisStatus_12, STATE_VARIABLE_ModuleInfo_0_109, STATE_VARIABLE_ModuleInfo_110);
                (env).transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0_env_0__succeeded = (Result0_155 == (MR_Integer) 1);
                if ((env).transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0_env_0__succeeded)
                {
                  _CondGoalExpr_97 = ((MR_Word) (MR_hl_field(MR_mktag(0), Cond_94, (MR_Integer) 0)));
                  CondGoalInfo_98 = ((MR_Word) (MR_hl_field(MR_mktag(0), Cond_94, (MR_Integer) 1)));
                  Var_123 = hlds__code_model__goal_info_get_code_model_1_f_0(CondGoalInfo_98);
                  (env).transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0_env_0__succeeded = (Var_123 == (MR_Integer) 2);
                  (env).transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0_env_0__succeeded = !((env).transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0_env_0__succeeded);
                }
                if ((env).transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0_env_0__succeeded)
                  *Result_11 = (MR_Integer) 1;
                else
                  *Result_11 = (MR_Integer) 0;
              }
              break;
            case (MR_Integer) 7:
              {
                {
                  mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.trailing_analysis", (MR_String) "predicate \140transform_hlds.trailing_analysis.check_goal_for_trail_mods\'/7", (MR_String) "shorthand");
                  return;
                }
              }
              break;
          }
          break;
      }
      break;
    }
  }
}

static void MR_CALL 
transform_hlds__trailing_analysis__search_trail_analysis_status_5_p_0(
  MR_Word PPId_6,
  MR_Word * Result_7,
  MR_Word * AnalysisStatus_8,
  MR_Word STATE_VARIABLE_ModuleInfo_0_12,
  MR_Word * STATE_VARIABLE_ModuleInfo_13)
{
  {
    MR_Word AnalysisInfo0_10;
    MR_Word AnalysisInfo_11;
    MR_Word ModuleName_22;
    MR_Word FuncId_23;
    MR_Word MaybeBestStatus_25;

    hlds__hlds_module__module_info_get_analysis_info_2_p_0(STATE_VARIABLE_ModuleInfo_0_12, &AnalysisInfo0_10);
    transform_hlds__mmc_analysis__module_name_func_id_4_p_0(STATE_VARIABLE_ModuleInfo_0_12, PPId_6, &ModuleName_22, &FuncId_23);
    analysis__lookup_best_result_6_p_0((MR_Word) &transform_hlds__trailing_analysis_scalar_common_4[0], AnalysisInfo0_10, ModuleName_22, FuncId_23, ((MR_Box) ((MR_Integer) 0)), ((MR_Box) ((MR_Integer) 0)), &MaybeBestStatus_25);
    if ((MaybeBestStatus_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      MR_Word TypeClassInfo_for_analysis_40 = (MR_Word) &transform_hlds__trailing_analysis_scalar_common_4[0];
      MR_Word Answer_28;
      MR_Box MR_CALL (* func_0)(MR_Box, MR_Box);
      MR_Box conv1_Answer_28;

      func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_analysis_40, (MR_Integer) 0)), (MR_Integer) 9)));
      conv1_Answer_28 = func_0(((MR_Box) TypeClassInfo_for_analysis_40), ((MR_Box) ((MR_Integer) 0)));
      Answer_28 = ((MR_Word) conv1_Answer_28);
      *Result_7 = (MR_Word) Answer_28;
      *AnalysisStatus_8 = (MR_Integer) 2;
      analysis__record_request_6_p_0((MR_Word) &transform_hlds__trailing_analysis_scalar_common_3[0], (MR_String) "trail_usage", ModuleName_22, FuncId_23, ((MR_Box) ((MR_Integer) 0)), AnalysisInfo0_10, &AnalysisInfo_11);
    }
    else
    {
      MR_Word Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeBestStatus_25, (MR_Integer) 0)));
      MR_Word Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_33, (MR_Integer) 1)));
      MR_Word Var_36;

      *AnalysisStatus_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_33, (MR_Integer) 2)));
      *Result_7 = (MR_Word) Var_34;
      analysis__record_dependency_7_p_0((MR_Word) &transform_hlds__trailing_analysis_scalar_common_4[0], ModuleName_22, FuncId_23, ((MR_Box) ((MR_Integer) 0)), ((MR_Box) ((MR_Integer) 0)), AnalysisInfo0_10, &AnalysisInfo_11);
    }
    hlds__hlds_module__module_info_set_analysis_info_3_p_0(AnalysisInfo_11, STATE_VARIABLE_ModuleInfo_0_12, STATE_VARIABLE_ModuleInfo_13);
  }
}

static void MR_CALL 
transform_hlds__trailing_analysis__trail_check_types_2_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_Status_9;

    transform_hlds__trailing_analysis__trail_check_type_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv0_STATE_VARIABLE_Status_9);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_Status_9));
  }
}

static MR_Word MR_CALL 
transform_hlds__trailing_analysis__trail_check_types_2_f_0(
  MR_Word ModuleInfo_4,
  MR_Word Types_5)
{
  {
    MR_Word Status_6;
    MR_Word Var_7;
    MR_Box conv1_Status_6;

    {
      Var_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_7, 0) = ((MR_Box) (&transform_hlds__trailing_analysis_scalar_common_6[3]));
      MR_hl_field(MR_mktag(0), Var_7, 1) = ((MR_Box) (transform_hlds__trailing_analysis__trail_check_types_2_f_0_1));
      MR_hl_field(MR_mktag(0), Var_7, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_7, 3) = ((MR_Box) (ModuleInfo_4));
    }
    mercury__list__foldl_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_trailing_status_0, Var_7, Types_5, ((MR_Box) ((MR_Integer) 1)), &conv1_Status_6);
    Status_6 = ((MR_Word) conv1_Status_6);
    return Status_6;
  }
}

static void MR_CALL 
transform_hlds__trailing_analysis__trail_check_vars_3_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_Status_9;

    transform_hlds__trailing_analysis__trail_check_type_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv0_STATE_VARIABLE_Status_9);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_Status_9));
  }
}

static MR_Word MR_CALL 
transform_hlds__trailing_analysis__trail_check_vars_3_f_0(
  MR_Word ModuleInfo_5,
  MR_Word VarTypes_6,
  MR_Word Vars_7)
{
  {
    MR_Word Result_8;
    MR_Word Types_9;
    MR_Word Var_13;
    MR_Box conv1_Result_8;

    hlds__vartypes__lookup_var_types_3_p_0(VarTypes_6, Vars_7, &Types_9);
    {
      Var_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_13, 0) = ((MR_Box) (&transform_hlds__trailing_analysis_scalar_common_6[3]));
      MR_hl_field(MR_mktag(0), Var_13, 1) = ((MR_Box) (transform_hlds__trailing_analysis__trail_check_vars_3_f_0_1));
      MR_hl_field(MR_mktag(0), Var_13, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_13, 3) = ((MR_Box) (ModuleInfo_5));
    }
    mercury__list__foldl_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_trailing_status_0, Var_13, Types_9, ((MR_Box) ((MR_Integer) 1)), &conv1_Result_8);
    Result_8 = ((MR_Word) conv1_Result_8);
    return Result_8;
  }
}

static void MR_CALL 
transform_hlds__trailing_analysis__trail_check_call_2_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_Status_9;

    transform_hlds__trailing_analysis__trail_check_type_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv0_STATE_VARIABLE_Status_9);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_Status_9));
  }
}

static void MR_CALL 
transform_hlds__trailing_analysis__trail_check_call_2_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Word VarTypes_7,
  MR_Word PPId_8,
  MR_Word Args_9,
  MR_Word * MaybeResult_10)
{
  {
    MR_Word ProcInfo_12;
    MR_Word MaybeCalleeTrailingInfo_13;
    MR_Word _PredInfo_11;

    hlds__hlds_module__module_info_pred_proc_info_4_p_0(ModuleInfo_6, PPId_8, &_PredInfo_11, &ProcInfo_12);
    hlds__hlds_pred__proc_info_get_trailing_info_2_p_0(ProcInfo_12, &MaybeCalleeTrailingInfo_13);
    if ((MaybeCalleeTrailingInfo_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *MaybeResult_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
    {
      MR_Word CalleeTrailingInfo_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeCalleeTrailingInfo_13, (MR_Integer) 0)));
      MR_Word CalleeTrailingStatus_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), CalleeTrailingInfo_14, (MR_Integer) 0)));
      MR_Word AnalysisStatus_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), CalleeTrailingInfo_14, (MR_Integer) 1)));

      switch (CalleeTrailingStatus_15) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 2:
          {
            MR_Word TrailingStatus_17;
            MR_Word Var_18;
            MR_Word Types_23;
            MR_Word Var_27;
            MR_Box conv1_TrailingStatus_17;

            hlds__vartypes__lookup_var_types_3_p_0(VarTypes_7, Args_9, &Types_23);
            {
              Var_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_27, 0) = ((MR_Box) (&transform_hlds__trailing_analysis_scalar_common_6[3]));
              MR_hl_field(MR_mktag(0), Var_27, 1) = ((MR_Box) (transform_hlds__trailing_analysis__trail_check_call_2_5_p_0_1));
              MR_hl_field(MR_mktag(0), Var_27, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
              MR_hl_field(MR_mktag(0), Var_27, 3) = ((MR_Box) (ModuleInfo_6));
            }
            mercury__list__foldl_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_trailing_status_0, Var_27, Types_23, ((MR_Box) ((MR_Integer) 1)), &conv1_TrailingStatus_17);
            TrailingStatus_17 = ((MR_Word) conv1_TrailingStatus_17);
            {
              Var_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_18, 0) = ((MR_Box) (TrailingStatus_17));
              MR_hl_field(MR_mktag(0), Var_18, 1) = ((MR_Box) (AnalysisStatus_16));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              *MaybeResult_10 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_18));
            }
          }
          break;
        case (MR_Integer) 0:
          *MaybeResult_10 = MaybeCalleeTrailingInfo_13;
          break;
        case (MR_Integer) 1:
          *MaybeResult_10 = MaybeCalleeTrailingInfo_13;
          break;
      }
    }
  }
}

static MR_bool MR_CALL 
transform_hlds__trailing_analysis__pred_info_has_known_trail_status_2_p_0(
  MR_Word PredInfo_3,
  MR_Word * Status_4)
{
  {
    MR_bool succeeded;
    MR_String Name_5;
    MR_Word PredOrFunc_6;
    MR_Word ModuleName_7;
    MR_String ModuleNameStr_8;
    MR_Integer Arity_9;

    Name_5 = hlds__hlds_pred__pred_info_name_1_f_0(PredInfo_3);
    PredOrFunc_6 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(PredInfo_3);
    ModuleName_7 = hlds__hlds_pred__pred_info_module_1_f_0(PredInfo_3);
    succeeded = ((MR_tag((MR_Word) ModuleName_7)) == (MR_mktag((MR_Integer) 0)));
    if (succeeded)
    {
      ModuleNameStr_8 = ((MR_String) (MR_hl_field(MR_mktag(0), ModuleName_7, (MR_Integer) 0)));
      Arity_9 = hlds__hlds_pred__pred_info_orig_arity_1_f_0(PredInfo_3);
      succeeded = (Arity_9 == (MR_Integer) 1);
      if (succeeded)
      {
        if ((strcmp(ModuleNameStr_8, (MR_String) "require") == 0))
          switch (PredOrFunc_6) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
              {
                succeeded = (strcmp(Name_5, (MR_String) "func_error") == 0);
                if (succeeded)
                {
                  *Status_4 = (MR_Integer) 1;
                  succeeded = MR_TRUE;
                }
              }
              break;
            case (MR_Integer) 0:
              {
                succeeded = (strcmp(Name_5, (MR_String) "error") == 0);
                if (succeeded)
                {
                  *Status_4 = (MR_Integer) 1;
                  succeeded = MR_TRUE;
                }
              }
              break;
          }
        else
        if ((strcmp(ModuleNameStr_8, (MR_String) "exception") == 0))
          if ((strcmp(Name_5, (MR_String) "throw") == 0))
          {
            *Status_4 = (MR_Integer) 1;
            succeeded = MR_TRUE;
          }
          else
          if ((strcmp(Name_5, (MR_String) "rethrow") == 0))
          {
            *Status_4 = (MR_Integer) 1;
            succeeded = MR_TRUE;
          }
          else
            succeeded = MR_FALSE;
        else
          succeeded = MR_FALSE;
      }
    }
    return succeeded;
  }
}

static MR_Word MR_CALL 
transform_hlds__trailing_analysis__scope_implies_trail_mod_3_f_0(
  MR_Word InnerCodeModel_5,
  MR_Word OuterCodeModel_6,
  MR_Word InnerStatus_7)
{
  {
    MR_bool succeeded = (InnerCodeModel_5 == (MR_Integer) 2);
    MR_Word HeadVar__4_4;

    if (succeeded)
    {
      succeeded = (OuterCodeModel_6 == (MR_Integer) 2);
      succeeded = !(succeeded);
    }
    if (succeeded)
      HeadVar__4_4 = (MR_Integer) 0;
    else
      HeadVar__4_4 = InnerStatus_7;
    return HeadVar__4_4;
  }
}

static MR_Word MR_CALL 
transform_hlds__trailing_analysis__attributes_imply_trail_mod_1_f_0(
  MR_Word Attributes_3)
{
  {
    MR_bool succeeded;
    MR_Word HeadVar__2_2;
    MR_Word Var_4;

    Var_4 = parse_tree__prog_data_foreign__get_may_modify_trail_1_f_0(Attributes_3);
    succeeded = (Var_4 == (MR_Integer) 0);
    if (succeeded)
      HeadVar__2_2 = (MR_Integer) 0;
    else
      HeadVar__2_2 = (MR_Integer) 1;
    return HeadVar__2_2;
  }
}

static void MR_CALL 
transform_hlds__trailing_analysis__check_goals_for_trail_mods_7_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv6_MaybeStatus_6;

    transform_hlds__trailing_analysis__combine_maybe_trail_analysis_status_3_p_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv6_MaybeStatus_6);
    *wrapper_arg_3 = ((MR_Box) (conv6_MaybeStatus_6));
  }
}

static void MR_CALL 
transform_hlds__trailing_analysis__check_goals_for_trail_mods_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv4_HeadVar__3_3;

    transform_hlds__trailing_analysis__combine_trailing_status_3_p_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv4_HeadVar__3_3);
    *wrapper_arg_3 = ((MR_Box) (conv4_HeadVar__3_3));
  }
}

static void MR_CALL 
transform_hlds__trailing_analysis__check_goals_for_trail_mods_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv2_Result_11;
    MR_Word conv1_MaybeAnalysisStatus_12;
    MR_Word conv0_STATE_VARIABLE_ModuleInfo_110;

    transform_hlds__trailing_analysis__check_goal_for_trail_mods_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) wrapper_arg_1), &conv2_Result_11, &conv1_MaybeAnalysisStatus_12, ((MR_Word) wrapper_arg_4), &conv0_STATE_VARIABLE_ModuleInfo_110);
    *wrapper_arg_2 = ((MR_Box) (conv2_Result_11));
    *wrapper_arg_3 = ((MR_Box) (conv1_MaybeAnalysisStatus_12));
    *wrapper_arg_5 = ((MR_Box) (conv0_STATE_VARIABLE_ModuleInfo_110));
  }
}

static void MR_CALL 
transform_hlds__trailing_analysis__check_goals_for_trail_mods_7_p_0(
  MR_Word SCC_8,
  MR_Word VarTypes_9,
  MR_Word Goals_10,
  MR_Word * Result_11,
  MR_Word * MaybeAnalysisStatus_12,
  MR_Word STATE_VARIABLE_ModuleInfo_0_16,
  MR_Word * STATE_VARIABLE_ModuleInfo_17)
{
  {
    MR_Word TypeCtorInfo_31_31;
    MR_Word TypeInfo_32_32;
    MR_Word Results_14;
    MR_Word MaybeAnalysisStatuses_15;
    MR_Word Var_18;
    MR_Box conv3_STATE_VARIABLE_ModuleInfo_17;
    MR_Box conv5_Result_11;
    MR_Box conv7_MaybeAnalysisStatus_12;

    {
      Var_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_18, 0) = ((MR_Box) (&transform_hlds__trailing_analysis_scalar_common_9[0]));
      MR_hl_field(MR_mktag(0), Var_18, 1) = ((MR_Box) (transform_hlds__trailing_analysis__check_goals_for_trail_mods_7_p_0_1));
      MR_hl_field(MR_mktag(0), Var_18, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_18, 3) = ((MR_Box) (SCC_8));
      MR_hl_field(MR_mktag(0), Var_18, 4) = ((MR_Box) (VarTypes_9));
    }
    TypeCtorInfo_31_31 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_trailing_status_0;
    TypeInfo_32_32 = (MR_Word) &transform_hlds__trailing_analysis_scalar_common_1[2];
    mercury__list__map2_foldl_6_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, TypeCtorInfo_31_31, TypeInfo_32_32, (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0, Var_18, Goals_10, &Results_14, &MaybeAnalysisStatuses_15, ((MR_Box) (STATE_VARIABLE_ModuleInfo_0_16)), &conv3_STATE_VARIABLE_ModuleInfo_17);
    *STATE_VARIABLE_ModuleInfo_17 = ((MR_Word) conv3_STATE_VARIABLE_ModuleInfo_17);
    mercury__list__foldl_4_p_0(TypeCtorInfo_31_31, TypeCtorInfo_31_31, (MR_Word) &transform_hlds__trailing_analysis_scalar_common_2[5], Results_14, ((MR_Box) ((MR_Integer) 1)), &conv5_Result_11);
    *Result_11 = ((MR_Word) conv5_Result_11);
    mercury__list__foldl_4_p_0(TypeInfo_32_32, TypeInfo_32_32, (MR_Word) &transform_hlds__trailing_analysis_scalar_common_2[6], MaybeAnalysisStatuses_15, ((MR_Box) (MR_mkword(MR_mktag(1), &transform_hlds__trailing_analysis_scalar_common_8[0]))), &conv7_MaybeAnalysisStatus_12);
    *MaybeAnalysisStatus_12 = ((MR_Word) conv7_MaybeAnalysisStatus_12);
  }
}

static void MR_CALL 
transform_hlds__trailing_analysis__trail_maybe_analysis_status_2_p_0(
  MR_Word ProcResult_3,
  MR_Word * AnalysisStatus_4)
{
  {
    MR_Word Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ProcResult_3, (MR_Integer) 0)));
    MR_Word Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ProcResult_3, (MR_Integer) 1)));

    *AnalysisStatus_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ProcResult_3, (MR_Integer) 2)));
  }
}

static void MR_CALL 
transform_hlds__trailing_analysis__set_trailing_info_4_p_0(
  MR_Word ProcTrailingInfo_5,
  MR_Word PPId_6,
  MR_Word STATE_VARIABLE_ModuleInfo_0_11,
  MR_Word * STATE_VARIABLE_ModuleInfo_12)
{
  {
    MR_Word PredInfo0_8;
    MR_Word ProcInfo0_9;
    MR_Word ProcInfo_10;
    MR_Word Var_13;

    hlds__hlds_module__module_info_pred_proc_info_4_p_0(STATE_VARIABLE_ModuleInfo_0_11, PPId_6, &PredInfo0_8, &ProcInfo0_9);
    {
      Var_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_13, 0) = ((MR_Box) (ProcTrailingInfo_5));
    }
    hlds__hlds_pred__proc_info_set_trailing_info_3_p_0(Var_13, ProcInfo0_9, &ProcInfo_10);
    hlds__hlds_module__module_info_set_pred_proc_info_5_p_0(PPId_6, PredInfo0_8, ProcInfo_10, STATE_VARIABLE_ModuleInfo_0_11, STATE_VARIABLE_ModuleInfo_12);
  }
}

static void MR_CALL 
transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_17(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv12_STATE_VARIABLE_ModuleInfo_12;

    transform_hlds__trailing_analysis__trail_annotate_proc_3_p_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv12_STATE_VARIABLE_ModuleInfo_12);
    *wrapper_arg_3 = ((MR_Box) (conv12_STATE_VARIABLE_ModuleInfo_12));
  }
}

static void MR_CALL 
transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_16(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv10_STATE_VARIABLE_ModuleInfo_12;

    transform_hlds__trailing_analysis__set_trailing_info_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv10_STATE_VARIABLE_ModuleInfo_12);
    *wrapper_arg_3 = ((MR_Box) (conv10_STATE_VARIABLE_ModuleInfo_12));
  }
}

static void MR_CALL 
transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_15(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv8_MaybeStatus_6;

    transform_hlds__trailing_analysis__combine_maybe_trail_analysis_status_3_p_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv8_MaybeStatus_6);
    *wrapper_arg_3 = ((MR_Box) (conv8_MaybeStatus_6));
  }
}

static void MR_CALL 
transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_14(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv7_AnalysisStatus_4;

    transform_hlds__trailing_analysis__trail_maybe_analysis_status_2_p_0(((MR_Word) wrapper_arg_1), &conv7_AnalysisStatus_4);
    *wrapper_arg_2 = ((MR_Box) (conv7_AnalysisStatus_4));
  }
}

static void MR_CALL 
transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_STATE_VARIABLE_Results_18;
    MR_Word conv0_STATE_VARIABLE_ModuleInfo_20;

    transform_hlds__trailing_analysis__check_proc_for_trail_mods_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv1_STATE_VARIABLE_Results_18, ((MR_Word) wrapper_arg_4), &conv0_STATE_VARIABLE_ModuleInfo_20);
    *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_Results_18));
    *wrapper_arg_5 = ((MR_Box) (conv0_STATE_VARIABLE_ModuleInfo_20));
  }
}

static void MR_CALL 
transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_2(
  void * env_ptr_arg)
{
  {
    struct transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0_s * env_ptr = (struct transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0_s *) env_ptr_arg;

    MR_builtin_longjmp((env_ptr)->transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0__commit_0, 1);
  }
}

static void MR_CALL 
transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_4(
  void * env_ptr_arg)
{
  {
    struct transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0_s * env_ptr = (struct transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0_s *) env_ptr_arg;

    (env_ptr)->transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0__ProcResult_58 = ((MR_Word) (env_ptr)->transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0__conv4_ProcResult_58);
    transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_3(env_ptr);
  }
}

static void MR_CALL 
transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_3(
  void * env_ptr_arg)
{
  {
    struct transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0_s * env_ptr = (struct transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0_s *) env_ptr_arg;

    {
      MR_Word Var_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), (env_ptr)->transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0__ProcResult_58, (MR_Integer) 1)));
      MR_Word Var_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), (env_ptr)->transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0__ProcResult_58, (MR_Integer) 0)));
      MR_Word Var_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), (env_ptr)->transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0__ProcResult_58, (MR_Integer) 2)));

      (env_ptr)->transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0__succeeded = (Var_61 == (MR_Integer) 1);
      (env_ptr)->transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0__succeeded = !((env_ptr)->transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0__succeeded);
      if ((env_ptr)->transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0__succeeded)
        transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_2(env_ptr);
    }
  }
}

static void MR_CALL 
transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_5(
  void * env_ptr_arg)
{
  {
    struct transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0_s * env_ptr = (struct transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0_s *) env_ptr_arg;

    if (MR_builtin_setjmp((env_ptr)->transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0__commit_0) == 0)
      {
        {
          mercury__list__member_2_p_1((MR_Word) &transform_hlds__trailing_analysis__transform_hlds__trailing_analysis__type_ctor_info_trail_proc_result_0, &(env_ptr)->transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0__conv4_ProcResult_58, (env_ptr)->transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0__ProcResults_10, transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_4, env_ptr);
        }
        (env_ptr)->transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0__succeeded = MR_FALSE;
      }
    else
      (env_ptr)->transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0__succeeded = MR_TRUE;
  }
}

static void MR_CALL 
transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_6(
  void * env_ptr_arg)
{
  {
    struct transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0_s * env_ptr = (struct transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0_s *) env_ptr_arg;

    MR_builtin_longjmp((env_ptr)->transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0__commit_1, 1);
  }
}

static void MR_CALL 
transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_8(
  void * env_ptr_arg)
{
  {
    struct transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0_s * env_ptr = (struct transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0_s *) env_ptr_arg;

    (env_ptr)->transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0__EResult_59 = ((MR_Word) (env_ptr)->transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0__conv5_EResult_59);
    transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_7(env_ptr);
  }
}

static void MR_CALL 
transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_7(
  void * env_ptr_arg)
{
  {
    struct transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0_s * env_ptr = (struct transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0_s *) env_ptr_arg;

    {
      MR_Word Var_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), (env_ptr)->transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0__EResult_59, (MR_Integer) 0)));
      MR_Word Var_68;

      (env_ptr)->transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0__Var_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), (env_ptr)->transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0__EResult_59, (MR_Integer) 1)));
      Var_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), (env_ptr)->transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0__EResult_59, (MR_Integer) 2)));
      (env_ptr)->transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0__succeeded = ((env_ptr)->transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0__Var_62 == (MR_Integer) 0);
      if ((env_ptr)->transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0__succeeded)
        transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_6(env_ptr);
    }
  }
}

static void MR_CALL 
transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_9(
  void * env_ptr_arg)
{
  {
    struct transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0_s * env_ptr = (struct transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0_s *) env_ptr_arg;

    if (MR_builtin_setjmp((env_ptr)->transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0__commit_1) == 0)
      {
        {
          mercury__list__member_2_p_1((MR_Word) &transform_hlds__trailing_analysis__transform_hlds__trailing_analysis__type_ctor_info_trail_proc_result_0, &(env_ptr)->transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0__conv5_EResult_59, (env_ptr)->transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0__ProcResults_10, transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_8, env_ptr);
        }
        (env_ptr)->transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0__succeeded = MR_FALSE;
      }
    else
      (env_ptr)->transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0__succeeded = MR_TRUE;
  }
}

static void MR_CALL 
transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_10(
  void * env_ptr_arg)
{
  {
    struct transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0_s * env_ptr = (struct transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0_s *) env_ptr_arg;

    MR_builtin_longjmp((env_ptr)->transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0__commit_2, 1);
  }
}

static void MR_CALL 
transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_12(
  void * env_ptr_arg)
{
  {
    struct transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0_s * env_ptr = (struct transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0_s *) env_ptr_arg;

    (env_ptr)->transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0__CResult_64 = ((MR_Word) (env_ptr)->transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0__conv6_CResult_64);
    transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_11(env_ptr);
  }
}

static void MR_CALL 
transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_11(
  void * env_ptr_arg)
{
  {
    struct transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0_s * env_ptr = (struct transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0_s *) env_ptr_arg;

    {
      MR_Word Var_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), (env_ptr)->transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0__CResult_64, (MR_Integer) 0)));
      MR_Word Var_70;

      (env_ptr)->transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0__Var_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), (env_ptr)->transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0__CResult_64, (MR_Integer) 1)));
      Var_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), (env_ptr)->transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0__CResult_64, (MR_Integer) 2)));
      (env_ptr)->transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0__succeeded = ((env_ptr)->transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0__Var_63 == (MR_Integer) 2);
      if ((env_ptr)->transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0__succeeded)
        transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_10(env_ptr);
    }
  }
}

static void MR_CALL 
transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_13(
  void * env_ptr_arg)
{
  {
    struct transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0_s * env_ptr = (struct transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0_s *) env_ptr_arg;

    if (MR_builtin_setjmp((env_ptr)->transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0__commit_2) == 0)
      {
        {
          mercury__list__member_2_p_1((MR_Word) &transform_hlds__trailing_analysis__transform_hlds__trailing_analysis__type_ctor_info_trail_proc_result_0, &(env_ptr)->transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0__conv6_CResult_64, (env_ptr)->transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0__ProcResults_10, transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_12, env_ptr);
        }
        (env_ptr)->transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0__succeeded = MR_FALSE;
      }
    else
      (env_ptr)->transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0__succeeded = MR_TRUE;
  }
}

static void MR_CALL 
transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0(
  MR_Word Debug_6,
  MR_Word Pass1Only_7,
  MR_Word SCC_8,
  MR_Word STATE_VARIABLE_ModuleInfo_0_15,
  MR_Word * STATE_VARIABLE_ModuleInfo_16)
{
  {
    struct transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0_s env;

    {
      MR_Word TypeCtorInfo_27_27;
      MR_Word TypeCtorInfo_28_28;
      MR_Word TrailingStatus_11;
      MR_Word MaybeAnalysisStatus_12;
      MR_Word ProcTrailingInfo_14;
      MR_Word STATE_VARIABLE_ModuleInfo_17_17;
      MR_Word Var_20;
      MR_Word STATE_VARIABLE_ModuleInfo_21_21;
      MR_Word Var_37;
      MR_Box conv3_ProcResults_10;
      MR_Box conv2_STATE_VARIABLE_ModuleInfo_17_17;
      MR_Box conv11_STATE_VARIABLE_ModuleInfo_21_21;

      {
        Var_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_37, 0) = ((MR_Box) (&transform_hlds__trailing_analysis_scalar_common_7[0]));
        MR_hl_field(MR_mktag(0), Var_37, 1) = ((MR_Box) (transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_1));
        MR_hl_field(MR_mktag(0), Var_37, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), Var_37, 3) = ((MR_Box) (SCC_8));
      }
      mercury__set__foldl2_6_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &transform_hlds__trailing_analysis_scalar_common_1[1], (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0, Var_37, SCC_8, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &conv3_ProcResults_10, ((MR_Box) (STATE_VARIABLE_ModuleInfo_0_15)), &conv2_STATE_VARIABLE_ModuleInfo_17_17);
      (env).transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0__ProcResults_10 = ((MR_Word) conv3_ProcResults_10);
      STATE_VARIABLE_ModuleInfo_17_17 = ((MR_Word) conv2_STATE_VARIABLE_ModuleInfo_17_17);
      if (((env).transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0__ProcResults_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.trailing_analysis", (MR_String) "predicate \140transform_hlds.trailing_analysis.trail_combine_individual_proc_results\'/3", (MR_String) "empty SCC");
          return;
        }
      }
      else
      {
        MR_Word TypeInfo_13_84;
        MR_Word MaybeAnalysisStatuses_76;
        MR_Box conv9_MaybeAnalysisStatus_12;

        transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_5(&env);
        (env).transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0__succeeded = !((env).transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0__succeeded);
        if ((env).transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0__succeeded)
          TrailingStatus_11 = (MR_Integer) 1;
        else
        {
          transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_9(&env);
          (env).transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0__succeeded = !((env).transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0__succeeded);
          if ((env).transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0__succeeded)
            transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_13(&env);
          if ((env).transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0__succeeded)
            TrailingStatus_11 = (MR_Integer) 2;
          else
            TrailingStatus_11 = (MR_Integer) 0;
        }
        TypeInfo_13_84 = (MR_Word) &transform_hlds__trailing_analysis_scalar_common_1[2];
        mercury__list__map_3_p_0((MR_Word) &transform_hlds__trailing_analysis__transform_hlds__trailing_analysis__type_ctor_info_trail_proc_result_0, TypeInfo_13_84, (MR_Word) &transform_hlds__trailing_analysis_scalar_common_2[2], (env).transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_env_0__ProcResults_10, &MaybeAnalysisStatuses_76);
        mercury__list__foldl_4_p_0(TypeInfo_13_84, TypeInfo_13_84, (MR_Word) &transform_hlds__trailing_analysis_scalar_common_2[3], MaybeAnalysisStatuses_76, ((MR_Box) (MR_mkword(MR_mktag(1), &transform_hlds__trailing_analysis_scalar_common_8[0]))), &conv9_MaybeAnalysisStatus_12);
        MaybeAnalysisStatus_12 = ((MR_Word) conv9_MaybeAnalysisStatus_12);
      }
      switch (Debug_6) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
          }
          break;
        case (MR_Integer) 1:
          transform_hlds__trailing_analysis__dump_trail_usage_debug_info_5_p_0(STATE_VARIABLE_ModuleInfo_17_17, SCC_8, TrailingStatus_11);
          break;
      }
      {
        ProcTrailingInfo_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), ProcTrailingInfo_14, 0) = ((MR_Box) (TrailingStatus_11));
        MR_hl_field(MR_mktag(0), ProcTrailingInfo_14, 1) = ((MR_Box) (MaybeAnalysisStatus_12));
      }
      {
        Var_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_20, 0) = ((MR_Box) (&transform_hlds__trailing_analysis_scalar_common_6[2]));
        MR_hl_field(MR_mktag(0), Var_20, 1) = ((MR_Box) (transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0_16));
        MR_hl_field(MR_mktag(0), Var_20, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), Var_20, 3) = ((MR_Box) (ProcTrailingInfo_14));
      }
      TypeCtorInfo_27_27 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
      TypeCtorInfo_28_28 = (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0;
      mercury__set__foldl_4_p_0(TypeCtorInfo_27_27, TypeCtorInfo_28_28, Var_20, SCC_8, ((MR_Box) (STATE_VARIABLE_ModuleInfo_17_17)), &conv11_STATE_VARIABLE_ModuleInfo_21_21);
      STATE_VARIABLE_ModuleInfo_21_21 = ((MR_Word) conv11_STATE_VARIABLE_ModuleInfo_21_21);
      switch (Pass1Only_7) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Box conv13_STATE_VARIABLE_ModuleInfo_16;

            mercury__set__foldl_4_p_0(TypeCtorInfo_27_27, TypeCtorInfo_28_28, (MR_Word) &transform_hlds__trailing_analysis_scalar_common_2[4], SCC_8, ((MR_Box) (STATE_VARIABLE_ModuleInfo_21_21)), &conv13_STATE_VARIABLE_ModuleInfo_16);
            *STATE_VARIABLE_ModuleInfo_16 = ((MR_Word) conv13_STATE_VARIABLE_ModuleInfo_16);
          }
          break;
        case (MR_Integer) 1:
          *STATE_VARIABLE_ModuleInfo_16 = STATE_VARIABLE_ModuleInfo_21_21;
          break;
      }
    }
  }
}

static void MR_CALL 
transform_hlds__trailing_analysis__dump_trail_usage_debug_info_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    transform_hlds__trailing_analysis__output_proc_name_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1));
  }
}

static void MR_CALL 
transform_hlds__trailing_analysis__dump_trail_usage_debug_info_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Word SCC_7,
  MR_Word Status_8)
{
  {
    MR_Word Var_24;
    MR_Box conv0_STATE_VARIABLE_IO_16_16;

    mercury__io__write_string_3_p_0((MR_String) "SCC: ");
    mercury__io__write_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_trailing_status_0, ((MR_Box) (Status_8)));
    mercury__io__nl_2_p_0();
    {
      Var_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_24, 0) = ((MR_Box) (&transform_hlds__trailing_analysis_scalar_common_6[1]));
      MR_hl_field(MR_mktag(0), Var_24, 1) = ((MR_Box) (transform_hlds__trailing_analysis__dump_trail_usage_debug_info_5_p_0_1));
      MR_hl_field(MR_mktag(0), Var_24, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_24, 3) = ((MR_Box) (ModuleInfo_6));
    }
    mercury__set__foldl_4_p_2((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, Var_24, SCC_7, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_16_16);
    mercury__io__nl_2_p_0();
  }
}

static void MR_CALL 
transform_hlds__trailing_analysis__analyse_trail_usage_2_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv2_STATE_VARIABLE_AnalysisInfo_11;

    transform_hlds__trailing_analysis__maybe_record_trailing_result_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv2_STATE_VARIABLE_AnalysisInfo_11);
    *wrapper_arg_3 = ((MR_Box) (conv2_STATE_VARIABLE_AnalysisInfo_11));
  }
}

static void MR_CALL 
transform_hlds__trailing_analysis__analyse_trail_usage_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_ModuleInfo_16;

    transform_hlds__trailing_analysis__trail_analyse_scc_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv0_STATE_VARIABLE_ModuleInfo_16);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_ModuleInfo_16));
  }
}

void MR_CALL 
transform_hlds__trailing_analysis__analyse_trail_usage_2_p_0(
  MR_Word STATE_VARIABLE_ModuleInfo_0_17,
  MR_Word * STATE_VARIABLE_ModuleInfo_18)
{
  {
    MR_bool succeeded;
    MR_Word Globals_4;
    MR_Word UseTrail_5;

    hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_ModuleInfo_0_17, &Globals_4);
    libs__globals__lookup_bool_option_3_p_0(Globals_4, (MR_Integer) 229, &UseTrail_5);
    switch (UseTrail_5) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *STATE_VARIABLE_ModuleInfo_18 = STATE_VARIABLE_ModuleInfo_0_17;
        break;
      case (MR_Integer) 1:
        {
          MR_Word OpMode_6;
          MR_Word Pass1Only_8;
          MR_Word DepInfo_9;
          MR_Word SCCs_10;
          MR_Word Debug_11;
          MR_Word ProcAnalysisKinds0_12;
          MR_Word ProcAnalysisKinds_13;
          MR_Word STATE_VARIABLE_ModuleInfo_21_21;
          MR_Word Var_23;
          MR_Word STATE_VARIABLE_ModuleInfo_24_24;
          MR_Word STATE_VARIABLE_ModuleInfo_26_26;
          MR_Word OpModeAugment_7;
          MR_Word Var_20;
          MR_Box conv1_STATE_VARIABLE_ModuleInfo_24_24;
          MR_Word Var_27;
          MR_Word Var_28;

          libs__globals__get_op_mode_2_p_0(Globals_4, &OpMode_6);
          succeeded = ((MR_tag((MR_Word) OpMode_6)) == (MR_mktag((MR_Integer) 3)));
          if (succeeded)
          {
            Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), OpMode_6, (MR_Integer) 0)));
            succeeded = ((MR_tag((MR_Word) Var_20)) == (MR_mktag((MR_Integer) 1)));
            if (succeeded)
            {
              OpModeAugment_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_20, (MR_Integer) 0)));
              switch (MR_tag((MR_Word) OpModeAugment_7)) {
                default:
                  succeeded = MR_FALSE;
                  break;
                case (MR_Integer) 0:
                  switch (MR_unmkbody(OpModeAugment_7)) {
                    default:
                      succeeded = MR_FALSE;
                      break;
                    case (MR_Integer) 0:
                      succeeded = MR_TRUE;
                      break;
                    case (MR_Integer) 1:
                      succeeded = MR_TRUE;
                      break;
                    case (MR_Integer) 2:
                      succeeded = MR_TRUE;
                      break;
                  }
                  break;
              }
            }
          }
          if (succeeded)
            Pass1Only_8 = (MR_Integer) 1;
          else
            Pass1Only_8 = (MR_Integer) 0;
          hlds__hlds_dependency_graph__module_info_ensure_dependency_info_3_p_0(STATE_VARIABLE_ModuleInfo_0_17, &STATE_VARIABLE_ModuleInfo_21_21, &DepInfo_9);
          SCCs_10 = libs__dependency_graph__dependency_info_get_bottom_up_sccs_1_f_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, DepInfo_9);
          libs__globals__lookup_bool_option_3_p_0(Globals_4, (MR_Integer) 88, &Debug_11);
          {
            Var_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_23, 0) = ((MR_Box) (&transform_hlds__trailing_analysis_scalar_common_5[0]));
            MR_hl_field(MR_mktag(0), Var_23, 1) = ((MR_Box) (transform_hlds__trailing_analysis__analyse_trail_usage_2_p_0_1));
            MR_hl_field(MR_mktag(0), Var_23, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(0), Var_23, 3) = ((MR_Box) (Debug_11));
            MR_hl_field(MR_mktag(0), Var_23, 4) = ((MR_Box) (Pass1Only_8));
          }
          mercury__list__foldl_4_p_0((MR_Word) &transform_hlds__trailing_analysis_scalar_common_1[0], (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0, Var_23, SCCs_10, ((MR_Box) (STATE_VARIABLE_ModuleInfo_21_21)), &conv1_STATE_VARIABLE_ModuleInfo_24_24);
          STATE_VARIABLE_ModuleInfo_24_24 = ((MR_Word) conv1_STATE_VARIABLE_ModuleInfo_24_24);
          hlds__hlds_module__module_info_get_proc_analysis_kinds_2_p_0(STATE_VARIABLE_ModuleInfo_24_24, &ProcAnalysisKinds0_12);
          mercury__set__insert_3_p_0((MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_proc_analysis_kind_0, ((MR_Box) ((MR_Integer) 1)), ProcAnalysisKinds0_12, &ProcAnalysisKinds_13);
          hlds__hlds_module__module_info_set_proc_analysis_kinds_3_p_0(ProcAnalysisKinds_13, STATE_VARIABLE_ModuleInfo_24_24, &STATE_VARIABLE_ModuleInfo_26_26);
          succeeded = ((MR_tag((MR_Word) OpMode_6)) == (MR_mktag((MR_Integer) 3)));
          if (succeeded)
          {
            Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), OpMode_6, (MR_Integer) 0)));
            succeeded = ((MR_tag((MR_Word) Var_27)) == (MR_mktag((MR_Integer) 1)));
            if (succeeded)
            {
              Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_27, (MR_Integer) 0)));
              succeeded = (Var_28 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
            }
          }
          if (succeeded)
          {
            MR_Word AnalysisInfo0_14;
            MR_Word PredIds_15;
            MR_Word AnalysisInfo_16;
            MR_Word Var_29;
            MR_Box conv3_AnalysisInfo_16;

            hlds__hlds_module__module_info_get_analysis_info_2_p_0(STATE_VARIABLE_ModuleInfo_26_26, &AnalysisInfo0_14);
            hlds__hlds_module__module_info_get_valid_pred_ids_2_p_0(STATE_VARIABLE_ModuleInfo_26_26, &PredIds_15);
            {
              Var_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_29, 0) = ((MR_Box) (&transform_hlds__trailing_analysis_scalar_common_6[0]));
              MR_hl_field(MR_mktag(0), Var_29, 1) = ((MR_Box) (transform_hlds__trailing_analysis__analyse_trail_usage_2_p_0_2));
              MR_hl_field(MR_mktag(0), Var_29, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
              MR_hl_field(MR_mktag(0), Var_29, 3) = ((MR_Box) (STATE_VARIABLE_ModuleInfo_26_26));
            }
            mercury__list__foldl_4_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, (MR_Word) &analysis__analysis__type_ctor_info_analysis_info_0, Var_29, PredIds_15, ((MR_Box) (AnalysisInfo0_14)), &conv3_AnalysisInfo_16);
            AnalysisInfo_16 = ((MR_Word) conv3_AnalysisInfo_16);
            hlds__hlds_module__module_info_set_analysis_info_3_p_0(AnalysisInfo_16, STATE_VARIABLE_ModuleInfo_26_26, STATE_VARIABLE_ModuleInfo_18);
          }
          else
            *STATE_VARIABLE_ModuleInfo_18 = STATE_VARIABLE_ModuleInfo_26_26;
        }
        break;
    }
  }
}

static MR_bool MR_CALL 
transform_hlds__trailing_analysis____Unify____trail_proc_result_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = transform_hlds__trailing_analysis____Unify____trail_proc_result_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__trailing_analysis____Compare____trail_proc_result_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    transform_hlds__trailing_analysis____Compare____trail_proc_result_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
transform_hlds__trailing_analysis____Unify____trailing_analysis_answer_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = transform_hlds__trailing_analysis____Unify____trailing_analysis_answer_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__trailing_analysis____Compare____trailing_analysis_answer_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    transform_hlds__trailing_analysis____Compare____trailing_analysis_answer_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_Box MR_CALL 
transform_hlds__trailing_analysis__ClassMethod_for_analysis__to_term____transform_hlds__trailing_analysis__trailing_analysis_answer__arity0______analysis__to_term_1_1_f_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__2_2;

    conv0_HeadVar__2_2 = transform_hlds__trailing_analysis__ClassMethod_for_analysis__to_term____transform_hlds__trailing_analysis__trailing_analysis_answer__arity0______analysis__to_term_1_1_f_0(((MR_Word) wrapper_arg_1));
    wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static MR_bool MR_CALL 
transform_hlds__trailing_analysis__ClassMethod_for_analysis__to_term____transform_hlds__trailing_analysis__trailing_analysis_answer__arity0______analysis__from_term_2_2_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__2_2;

    succeeded = transform_hlds__trailing_analysis__ClassMethod_for_analysis__to_term____transform_hlds__trailing_analysis__trailing_analysis_answer__arity0______analysis__from_term_2_2_p_0(((MR_Word) wrapper_arg_1), &conv0_HeadVar__2_2);
    if (succeeded)
    {
      *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

static MR_bool MR_CALL 
transform_hlds__trailing_analysis__ClassMethod_for_analysis__partial_order____analysis__no_func_info__arity0__transform_hlds__trailing_analysis__trailing_analysis_answer__arity0______analysis__more_precise_than_3_3_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = transform_hlds__trailing_analysis__ClassMethod_for_analysis__partial_order____analysis__no_func_info__arity0__transform_hlds__trailing_analysis__trailing_analysis_answer__arity0______analysis__more_precise_than_3_3_p_0(((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    return succeeded;
  }
}

static MR_bool MR_CALL 
transform_hlds__trailing_analysis__ClassMethod_for_analysis__partial_order____analysis__no_func_info__arity0__transform_hlds__trailing_analysis__trailing_analysis_answer__arity0______analysis__equivalent_3_3_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = transform_hlds__trailing_analysis__ClassMethod_for_analysis__partial_order____analysis__no_func_info__arity0__transform_hlds__trailing_analysis__trailing_analysis_answer__arity0______analysis__equivalent_3_3_p_0(((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    return succeeded;
  }
}

static MR_Box MR_CALL 
transform_hlds__trailing_analysis__ClassMethod_for_analysis__analysis____analysis__no_func_info__arity0__analysis__any_call__arity0__transform_hlds__trailing_analysis__trailing_analysis_answer__arity0______analysis__analysis_name_2_2_f_0_10001(
  MR_Box closure_arg)
{
  {
    MR_Box wrapper_arg_3;
    MR_Box closure = closure_arg;
    MR_String conv0_HeadVar__3_3;

    conv0_HeadVar__3_3 = transform_hlds__trailing_analysis__ClassMethod_for_analysis__analysis____analysis__no_func_info__arity0__analysis__any_call__arity0__transform_hlds__trailing_analysis__trailing_analysis_answer__arity0______analysis__analysis_name_2_2_f_0();
    wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__3_3));
    return wrapper_arg_3;
  }
}

static MR_Box MR_CALL 
transform_hlds__trailing_analysis__ClassMethod_for_analysis__analysis____analysis__no_func_info__arity0__analysis__any_call__arity0__transform_hlds__trailing_analysis__trailing_analysis_answer__arity0______analysis__analysis_version_number_2_2_f_0_10001(
  MR_Box closure_arg)
{
  {
    MR_Box wrapper_arg_3;
    MR_Box closure = closure_arg;
    MR_Integer conv0_HeadVar__3_3;

    conv0_HeadVar__3_3 = transform_hlds__trailing_analysis__ClassMethod_for_analysis__analysis____analysis__no_func_info__arity0__analysis__any_call__arity0__transform_hlds__trailing_analysis__trailing_analysis_answer__arity0______analysis__analysis_version_number_2_2_f_0();
    wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__3_3));
    return wrapper_arg_3;
  }
}

static MR_Box MR_CALL 
transform_hlds__trailing_analysis__ClassMethod_for_analysis__analysis____analysis__no_func_info__arity0__analysis__any_call__arity0__transform_hlds__trailing_analysis__trailing_analysis_answer__arity0______analysis__preferred_fixpoint_type_2_2_f_0_10001(
  MR_Box closure_arg)
{
  {
    MR_Box wrapper_arg_3;
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__3_3;

    conv0_HeadVar__3_3 = transform_hlds__trailing_analysis__ClassMethod_for_analysis__analysis____analysis__no_func_info__arity0__analysis__any_call__arity0__transform_hlds__trailing_analysis__trailing_analysis_answer__arity0______analysis__preferred_fixpoint_type_2_2_f_0();
    wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__3_3));
    return wrapper_arg_3;
  }
}

static MR_Box MR_CALL 
transform_hlds__trailing_analysis__ClassMethod_for_analysis__analysis____analysis__no_func_info__arity0__analysis__any_call__arity0__transform_hlds__trailing_analysis__trailing_analysis_answer__arity0______analysis__bottom_2_2_f_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_3;
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__3_3;

    conv0_HeadVar__3_3 = transform_hlds__trailing_analysis__ClassMethod_for_analysis__analysis____analysis__no_func_info__arity0__analysis__any_call__arity0__transform_hlds__trailing_analysis__trailing_analysis_answer__arity0______analysis__bottom_2_2_f_0();
    wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__3_3));
    return wrapper_arg_3;
  }
}

static MR_Box MR_CALL 
transform_hlds__trailing_analysis__ClassMethod_for_analysis__analysis____analysis__no_func_info__arity0__analysis__any_call__arity0__transform_hlds__trailing_analysis__trailing_analysis_answer__arity0______analysis__top_2_2_f_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_3;
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__3_3;

    conv0_HeadVar__3_3 = transform_hlds__trailing_analysis__ClassMethod_for_analysis__analysis____analysis__no_func_info__arity0__analysis__any_call__arity0__transform_hlds__trailing_analysis__trailing_analysis_answer__arity0______analysis__top_2_2_f_0();
    wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__3_3));
    return wrapper_arg_3;
  }
}

static void MR_CALL 
transform_hlds__trailing_analysis__ClassMethod_for_analysis__analysis____analysis__no_func_info__arity0__analysis__any_call__arity0__transform_hlds__trailing_analysis__trailing_analysis_answer__arity0______analysis__get_func_info_6_6_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_6)
{
  {
    MR_Box closure = closure_arg;

    transform_hlds__trailing_analysis__ClassMethod_for_analysis__analysis____analysis__no_func_info__arity0__analysis__any_call__arity0__transform_hlds__trailing_analysis__trailing_analysis_answer__arity0______analysis__get_func_info_6_6_p_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
  }
}

void mercury__transform_hlds__trailing_analysis__init(void)
{
}

void mercury__transform_hlds__trailing_analysis__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&transform_hlds__trailing_analysis__transform_hlds__trailing_analysis__type_ctor_info_trail_proc_result_0);
	MR_register_type_ctor_info(&transform_hlds__trailing_analysis__transform_hlds__trailing_analysis__type_ctor_info_trailing_analysis_answer_0);
}

void mercury__transform_hlds__trailing_analysis__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__transform_hlds__trailing_analysis__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module transform_hlds.trailing_analysis.
