/*
** Automatically generated from `analysis.file.m'
** by the Mercury compiler,
** version 2018-02-24
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


// :- module analysis.file.
// :- implementation.

/*
INIT mercury__analysis__file__init
ENDINIT
*/

#include "analysis.file.mih"


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
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_inst_mode.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_module.mih"
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
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.lp_rational.mih"
#include "libs.op_mode.mih"
#include "libs.options.mih"
#include "libs.pickle.mih"
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
#include "dir.mih"
#include "enum.mih"
#include "exception.mih"
#include "getopt_io.mih"
#include "integer.mih"
#include "io.mih"
#include "lexer.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "multi_map.mih"
#include "ops.mih"
#include "pair.mih"
#include "parser.mih"
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
#include "stm_builtin.mih"
#include "store.mih"
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
#include "parse_tree.module_cmds.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.parse_sym_name.mih"
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
#include "mdbcomp.feedback.automatic_parallelism.mih"




static const MR_FA_PseudoTypeInfo_Struct1 analysis__file__term__pti_term_1__plain_term__type_ctor_info_generic_0;

static const MR_FA_TypeInfo_Struct1 analysis__file__list__ti_list_1analysis__type_ctor_info_some_analysis_result_0;

static const MR_FA_TypeInfo_Struct2 analysis__file__tree234__ti_tree234_2analysis__type_ctor_info_func_id_0list__ti_list_1analysis__type_ctor_info_some_analysis_result_0;

static const MR_FA_PseudoTypeInfo_Struct2 analysis__file__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_tree234__ti_tree234_2analysis__type_ctor_info_func_id_0list__ti_list_1analysis__type_ctor_info_some_analysis_result_0;

static const MR_FA_TypeInfo_Struct1 analysis__file__term__ti_term_1term__type_ctor_info_generic_0;

static const MR_FA_TypeInfo_Struct2 analysis__file__tree234__ti_tree234_2builtin__type_ctor_info_string_0tree234__ti_tree234_2analysis__type_ctor_info_func_id_0list__ti_list_1analysis__type_ctor_info_some_analysis_result_0;

static const MR_VA_PseudoTypeInfo_Struct3 analysis__file____vpti_pred_3__plain_term__ti_term_1term__type_ctor_info_generic_0__plain_tree234__ti_tree234_2builtin__type_ctor_info_string_0tree234__ti_tree234_2analysis__type_ctor_info_func_id_0list__ti_list_1analysis__type_ctor_info_some_analysis_result_0__plain_tree234__ti_tree234_2builtin__type_ctor_info_string_0tree234__ti_tree234_2analysis__type_ctor_info_func_id_0list__ti_list_1analysis__type_ctor_info_some_analysis_result_0;

static const MR_VA_PseudoTypeInfo_Struct5 analysis__file____vpti_pred_5__plain_builtin__type_ctor_info_string_0__plain_analysis__type_ctor_info_func_id_0__pseudo_1__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0;

static const MR_FA_PseudoTypeInfo_Struct1 analysis__file__list__pti_list_1__pseudo_1;

static const MR_FA_PseudoTypeInfo_Struct2 analysis__file__tree234__pti_tree234_2__plain_analysis__type_ctor_info_func_id_0__pseudo_list__pti_list_1__pseudo_1;

static const MR_VA_PseudoTypeInfo_Struct3 analysis__file____vpti_pred_3__plain_term__ti_term_1term__type_ctor_info_generic_0__pseudo_1__pseudo_1;

static const MR_FA_TypeInfo_Struct1 analysis__file__list__ti_list_1analysis__type_ctor_info_analysis_request_0;

static const MR_FA_TypeInfo_Struct2 analysis__file__tree234__ti_tree234_2analysis__type_ctor_info_func_id_0list__ti_list_1analysis__type_ctor_info_analysis_request_0;

static const MR_FA_PseudoTypeInfo_Struct2 analysis__file__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_tree234__ti_tree234_2analysis__type_ctor_info_func_id_0list__ti_list_1analysis__type_ctor_info_analysis_request_0;

static const MR_FA_TypeInfo_Struct1 analysis__file__list__ti_list_1analysis__type_ctor_info_imdg_arc_0;

static const MR_FA_TypeInfo_Struct2 analysis__file__tree234__ti_tree234_2analysis__type_ctor_info_func_id_0list__ti_list_1analysis__type_ctor_info_imdg_arc_0;

static const MR_FA_PseudoTypeInfo_Struct2 analysis__file__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_tree234__ti_tree234_2analysis__type_ctor_info_func_id_0list__ti_list_1analysis__type_ctor_info_imdg_arc_0;

static const MR_EnumFunctorDesc analysis__file__analysis__file__enum_functor_desc_dummy_answer_0_0;

static const MR_EnumFunctorDescPtr analysis__file__analysis__file__enum_value_ordered_dummy_answer_0[1];

static const MR_EnumFunctorDescPtr analysis__file__analysis__file__enum_name_ordered_dummy_answer_0[1];

static const MR_Integer analysis__file__analysis__file__functor_number_map_dummy_answer_0[1];

static const MR_Integer analysis__file__analysis__file__functor_number_map_invalid_analysis_file_0[1];

static const MR_NotagFunctorDesc analysis__file__analysis__file__notag_functor_desc_invalid_analysis_file_0;

static void MR_CALL 
analysis__file__IntroducedFrom__pred__write_analysis_file_4__895__1_7_p_0(
  MR_Word TypeInfo_for_T_27,
  MR_Word WriteEntry_7,
  MR_String AnalysisName_8,
  MR_Word FuncId_9,
  MR_Box LambdaHeadVar__1_18);

static void MR_CALL 
analysis__file__IntroducedFrom__pred__read_analysis_file__568__1_7_p_0(
  MR_Word TypeInfo_for_T_58,
  MR_Word ParseEntry_8,
  MR_Box ModuleResults0_9,
  MR_Word Stream_13,
  MR_Box * LambdaHeadVar__1_43);

static void MR_CALL 
analysis__file__IntroducedFrom__pred__read_analysis_file__561__1_3_p_0(
  MR_String AnalysisFileName_7);

static void MR_CALL 
analysis__file__IntroducedFrom__pred__read_analysis_file__584__1_3_p_0(
  MR_String AnalysisFileName_7);

static void MR_CALL 
analysis__file__IntroducedFrom__pred__read_analysis_file__541__1_5_p_0(
  MR_Word ModuleName_12,
  MR_String Suffix_13,
  MR_String Message_20);

static void MR_CALL 
analysis__file__IntroducedFrom__pred__read_module_analysis_results_2__334__1_6_p_0(
  MR_Word ModuleResults0_10,
  MR_Word Stream_12,
  MR_Word HeadVar__3_42,
  MR_Word * HeadVar__4_51);

static void MR_CALL 
analysis__file__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_97_110_97_108_121_115_105_115_95_102_105_108_101_95_50_95_95_91_49_93_95_48_6_p_0(
  MR_Word Stream_7,
  MR_Word ParseEntry_8,
  MR_Box Results0_9,
  MR_Box * Results_10);

static void MR_CALL 
analysis__file__IntroducedFrom__pred__read_module_analysis_results_2__326__1_3_p_0(
  MR_String AnalysisFileName_7);

static void MR_CALL 
analysis__file__IntroducedFrom__pred__read_module_analysis_results_2__346__1_3_p_0(
  MR_String AnalysisFileName_7);

static void MR_CALL 
analysis__file__IntroducedFrom__pred__empty_request_file__904__1_3_p_0(
  MR_String RequestFileName_10);

static void MR_CALL 
analysis__file__IntroducedFrom__pred__write_module_analysis_requests__709__1_3_p_0(
  MR_String AnalysisFileName_13);

static void MR_CALL 
analysis__file__IntroducedFrom__pred__write_module_analysis_results__657__1_3_p_0(
  MR_Word ModuleName_9);

static MR_bool MR_CALL 
analysis__file__ClassMethod_for_analysis__to_term____analysis__file__dummy_answer__arity0______analysis__from_term_2_2_p_0(
  MR_Word Term_3);

static MR_Word MR_CALL 
analysis__file__ClassMethod_for_analysis__to_term____analysis__file__dummy_answer__arity0______analysis__to_term_1_1_f_0(void);

static MR_Word MR_CALL 
analysis__file__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_97_110_97_108_121_115_105_115_95_95_116_111_95_116_101_114_109_95_95_95_95_97_110_97_108_121_115_105_115_95_95_102_105_108_101_95_95_100_117_109_109_121_95_97_110_115_119_101_114_95_95_97_114_105_116_121_48_95_95_95_95_95_95_97_110_97_108_121_115_105_115_95_95_116_111_95_116_101_114_109_95_49_95_95_91_49_93_95_48_1_f_0(void);

static MR_bool MR_CALL 
analysis__file__ClassMethod_for_analysis__partial_order____analysis__no_func_info__arity0__analysis__file__dummy_answer__arity0______analysis__equivalent_3_3_p_0(void);

static MR_bool MR_CALL 
analysis__file__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_97_110_97_108_121_115_105_115_95_95_112_97_114_116_105_97_108_95_111_114_100_101_114_95_95_95_95_97_110_97_108_121_115_105_115_95_95_110_111_95_102_117_110_99_95_105_110_102_111_95_95_97_114_105_116_121_48_95_95_97_110_97_108_121_115_105_115_95_95_102_105_108_101_95_95_100_117_109_109_121_95_97_110_115_119_101_114_95_95_97_114_105_116_121_48_95_95_95_95_95_95_97_110_97_108_121_115_105_115_95_95_101_113_117_105_118_97_108_101_110_116_95_51_95_95_91_49_44_32_50_44_32_51_93_95_48_3_p_0(void);

static MR_bool MR_CALL 
analysis__file__ClassMethod_for_analysis__partial_order____analysis__no_func_info__arity0__analysis__file__dummy_answer__arity0______analysis__more_precise_than_3_3_p_0(void);

static MR_bool MR_CALL 
analysis__file__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_97_110_97_108_121_115_105_115_95_95_112_97_114_116_105_97_108_95_111_114_100_101_114_95_95_95_95_97_110_97_108_121_115_105_115_95_95_110_111_95_102_117_110_99_95_105_110_102_111_95_95_97_114_105_116_121_48_95_95_97_110_97_108_121_115_105_115_95_95_102_105_108_101_95_95_100_117_109_109_121_95_97_110_115_119_101_114_95_95_97_114_105_116_121_48_95_95_95_95_95_95_97_110_97_108_121_115_105_115_95_95_109_111_114_101_95_112_114_101_99_105_115_101_95_116_104_97_110_95_51_95_95_91_49_44_32_50_44_32_51_93_95_48_3_p_0(void);

static void MR_CALL 
analysis__file__ClassMethod_for_analysis__analysis____analysis__no_func_info__arity0__analysis__any_call__arity0__analysis__file__dummy_answer__arity0______analysis__get_func_info_6_6_p_0(
  MR_Word HeadVar__1_17,
  MR_Word HeadVar__2_18,
  MR_Word HeadVar__3_19);

static void MR_CALL 
analysis__file__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_97_110_97_108_121_115_105_115_95_95_97_110_97_108_121_115_105_115_95_95_95_95_97_110_97_108_121_115_105_115_95_95_110_111_95_102_117_110_99_95_105_110_102_111_95_95_97_114_105_116_121_48_95_95_97_110_97_108_121_115_105_115_95_95_97_110_121_95_99_97_108_108_95_95_97_114_105_116_121_48_95_95_97_110_97_108_121_115_105_115_95_95_102_105_108_101_95_95_100_117_109_109_121_95_97_110_115_119_101_114_95_95_97_114_105_116_121_48_95_95_95_95_95_95_97_110_97_108_121_115_105_115_95_95_103_101_116_95_102_117_110_99_95_105_110_102_111_95_54_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_93_95_48_6_p_0(void);

static void MR_CALL 
analysis__file__ClassMethod_for_analysis__analysis____analysis__no_func_info__arity0__analysis__any_call__arity0__analysis__file__dummy_answer__arity0______analysis__top_2_2_f_0(void);

static void MR_CALL 
analysis__file__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_97_110_97_108_121_115_105_115_95_95_97_110_97_108_121_115_105_115_95_95_95_95_97_110_97_108_121_115_105_115_95_95_110_111_95_102_117_110_99_95_105_110_102_111_95_95_97_114_105_116_121_48_95_95_97_110_97_108_121_115_105_115_95_95_97_110_121_95_99_97_108_108_95_95_97_114_105_116_121_48_95_95_97_110_97_108_121_115_105_115_95_95_102_105_108_101_95_95_100_117_109_109_121_95_97_110_115_119_101_114_95_95_97_114_105_116_121_48_95_95_95_95_95_95_97_110_97_108_121_115_105_115_95_95_116_111_112_95_50_95_95_91_49_44_32_50_93_95_48_2_f_0(void);

static void MR_CALL 
analysis__file__ClassMethod_for_analysis__analysis____analysis__no_func_info__arity0__analysis__any_call__arity0__analysis__file__dummy_answer__arity0______analysis__bottom_2_2_f_0(void);

static void MR_CALL 
analysis__file__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_97_110_97_108_121_115_105_115_95_95_97_110_97_108_121_115_105_115_95_95_95_95_97_110_97_108_121_115_105_115_95_95_110_111_95_102_117_110_99_95_105_110_102_111_95_95_97_114_105_116_121_48_95_95_97_110_97_108_121_115_105_115_95_95_97_110_121_95_99_97_108_108_95_95_97_114_105_116_121_48_95_95_97_110_97_108_121_115_105_115_95_95_102_105_108_101_95_95_100_117_109_109_121_95_97_110_115_119_101_114_95_95_97_114_105_116_121_48_95_95_95_95_95_95_97_110_97_108_121_115_105_115_95_95_98_111_116_116_111_109_95_50_95_95_91_49_44_32_50_93_95_48_2_f_0(void);

static MR_Word MR_CALL 
analysis__file__ClassMethod_for_analysis__analysis____analysis__no_func_info__arity0__analysis__any_call__arity0__analysis__file__dummy_answer__arity0______analysis__preferred_fixpoint_type_2_2_f_0(void);

static MR_Word MR_CALL 
analysis__file__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_97_110_97_108_121_115_105_115_95_95_97_110_97_108_121_115_105_115_95_95_95_95_97_110_97_108_121_115_105_115_95_95_110_111_95_102_117_110_99_95_105_110_102_111_95_95_97_114_105_116_121_48_95_95_97_110_97_108_121_115_105_115_95_95_97_110_121_95_99_97_108_108_95_95_97_114_105_116_121_48_95_95_97_110_97_108_121_115_105_115_95_95_102_105_108_101_95_95_100_117_109_109_121_95_97_110_115_119_101_114_95_95_97_114_105_116_121_48_95_95_95_95_95_95_97_110_97_108_121_115_105_115_95_95_112_114_101_102_101_114_114_101_100_95_102_105_120_112_111_105_110_116_95_116_121_112_101_95_50_95_95_91_49_44_32_50_93_95_48_2_f_0(void);

static MR_Integer MR_CALL 
analysis__file__ClassMethod_for_analysis__analysis____analysis__no_func_info__arity0__analysis__any_call__arity0__analysis__file__dummy_answer__arity0______analysis__analysis_version_number_2_2_f_0(void);

static MR_Integer MR_CALL 
analysis__file__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_97_110_97_108_121_115_105_115_95_95_97_110_97_108_121_115_105_115_95_95_95_95_97_110_97_108_121_115_105_115_95_95_110_111_95_102_117_110_99_95_105_110_102_111_95_95_97_114_105_116_121_48_95_95_97_110_97_108_121_115_105_115_95_95_97_110_121_95_99_97_108_108_95_95_97_114_105_116_121_48_95_95_97_110_97_108_121_115_105_115_95_95_102_105_108_101_95_95_100_117_109_109_121_95_97_110_115_119_101_114_95_95_97_114_105_116_121_48_95_95_95_95_95_95_97_110_97_108_121_115_105_115_95_95_97_110_97_108_121_115_105_115_95_118_101_114_115_105_111_110_95_110_117_109_98_101_114_95_50_95_95_91_49_44_32_50_93_95_48_2_f_0(void);

static MR_String MR_CALL 
analysis__file__ClassMethod_for_analysis__analysis____analysis__no_func_info__arity0__analysis__any_call__arity0__analysis__file__dummy_answer__arity0______analysis__analysis_name_2_2_f_0(void);

static MR_String MR_CALL 
analysis__file__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_97_110_97_108_121_115_105_115_95_95_97_110_97_108_121_115_105_115_95_95_95_95_97_110_97_108_121_115_105_115_95_95_110_111_95_102_117_110_99_95_105_110_102_111_95_95_97_114_105_116_121_48_95_95_97_110_97_108_121_115_105_115_95_95_97_110_121_95_99_97_108_108_95_95_97_114_105_116_121_48_95_95_97_110_97_108_121_115_105_115_95_95_102_105_108_101_95_95_100_117_109_109_121_95_97_110_115_119_101_114_95_95_97_114_105_116_121_48_95_95_95_95_95_95_97_110_97_108_121_115_105_115_95_95_97_110_97_108_121_115_105_115_95_110_97_109_101_95_50_95_95_91_49_44_32_50_93_95_48_2_f_0(void);

static void MR_CALL 
analysis__file____Compare____write_entry_1_0(
  MR_Word TypeInfo_for_T_6,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static void MR_CALL 
analysis__file__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_97_110_97_108_121_115_105_115_95_95_102_105_108_101_95_95_119_114_105_116_101_95_101_110_116_114_121_95_49_95_95_91_49_93_95_48_3_p_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
analysis__file____Unify____write_entry_1_0(
  MR_Word TypeInfo_for_T_5,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static MR_bool MR_CALL 
analysis__file__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_97_110_97_108_121_115_105_115_95_95_102_105_108_101_95_95_119_114_105_116_101_95_101_110_116_114_121_95_49_95_95_91_49_93_95_48_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
analysis__file____Compare____parse_entry_1_0(
  MR_Word TypeInfo_for_T_6,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static void MR_CALL 
analysis__file__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_97_110_97_108_121_115_105_115_95_95_102_105_108_101_95_95_112_97_114_115_101_95_101_110_116_114_121_95_49_95_95_91_49_93_95_48_3_p_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
analysis__file____Unify____parse_entry_1_0(
  MR_Word TypeInfo_for_T_5,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static MR_bool MR_CALL 
analysis__file__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_97_110_97_108_121_115_105_115_95_95_102_105_108_101_95_95_112_97_114_115_101_95_101_110_116_114_121_95_49_95_95_91_49_93_95_48_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
analysis__file____Compare____invalid_analysis_file_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
analysis__file____Unify____invalid_analysis_file_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
analysis__file____Compare____dummy_answer_0_0(
  MR_Word * HeadVar__1_1);

static void MR_CALL 
analysis__file__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_97_110_97_108_121_115_105_115_95_95_102_105_108_101_95_95_100_117_109_109_121_95_97_110_115_119_101_114_95_48_95_95_91_50_44_32_51_93_95_48_3_p_0(
  MR_Word * HeadVar__1_1);

static MR_bool MR_CALL 
analysis__file____Unify____dummy_answer_0_0(void);

static MR_bool MR_CALL 
analysis__file__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_97_110_97_108_121_115_105_115_95_95_102_105_108_101_95_95_100_117_109_109_121_95_97_110_115_119_101_114_95_48_95_95_91_49_44_32_50_93_95_48_2_p_0(void);

static void MR_CALL 
analysis__file__unpickle_analysis_result_7_p_0(
  MR_Word TypeClassInfo_for_compiler_35,
  MR_Box Compiler_8,
  MR_Word Unpicklers_9,
  MR_Box Handle_10,
  MR_Word _Type_11,
  MR_Word * Univ_12,
  MR_Integer STATE_VARIABLE_State_0_22,
  MR_Integer * STATE_VARIABLE_State_23);

static void MR_CALL 
analysis__file__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_112_105_99_107_108_101_95_97_110_97_108_121_115_105_115_95_114_101_115_117_108_116_95_95_91_53_93_95_48_7_p_0(
  MR_Word TypeClassInfo_for_compiler_35,
  MR_Box Compiler_8,
  MR_Word Unpicklers_9,
  MR_Box Handle_10,
  MR_Word * Univ_12,
  MR_Integer STATE_VARIABLE_State_0_22,
  MR_Integer * STATE_VARIABLE_State_23);

static void MR_CALL 
analysis__file__pickle_analysis_result_4_p_0(
  MR_Word Pickles_5,
  MR_Word Univ_6);

static MR_bool MR_CALL 
analysis__file__dir_sep_1_p_0(
  MR_Char Char_2);

static void MR_CALL 
analysis__file__write_analysis_file_4_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
analysis__file__write_analysis_file_4_6_p_0(
  MR_Word TypeInfo_for_T_27,
  MR_Word WriteEntry_7,
  MR_String AnalysisName_8,
  MR_Word FuncId_9,
  MR_Word FuncResultList_10);

static void MR_CALL 
analysis__file__write_analysis_file_3_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
analysis__file__write_analysis_file_3_5_p_0(
  MR_Word TypeInfo_for_T_14,
  MR_Word WriteEntry_6,
  MR_String AnalysisName_7,
  MR_Word FuncResults_8);

static void MR_CALL 
analysis__file__write_imdg_arc_6_p_0(
  MR_Word TypeClassInfo_for_compiler_47,
  MR_Box Compiler_7,
  MR_String AnalysisName_8,
  MR_Word FuncId_9,
  MR_Word Arc_10);

static void MR_CALL 
analysis__file__write_request_entry_6_p_0(
  MR_Word TypeClassInfo_for_compiler_47,
  MR_Box Compiler_7,
  MR_String AnalysisName_8,
  MR_Word FuncId_9,
  MR_Word Request_10);

static void MR_CALL 
analysis__file__write_result_entry_5_p_0(
  MR_String AnalysisName_6,
  MR_Word FuncId_7,
  MR_Word Result_8);

static void MR_CALL 
analysis__file__parse_imdg_arc_4_p_0(
  MR_Word TypeClassInfo_for_compiler_56,
  MR_Box Compiler_5,
  MR_Word Term_6,
  MR_Word STATE_VARIABLE_Arcs_0_34,
  MR_Word * STATE_VARIABLE_Arcs_35);

static void MR_CALL 
analysis__file__parse_request_entry_4_p_0(
  MR_Word TypeClassInfo_for_compiler_56,
  MR_Box Compiler_5,
  MR_Word Term_6,
  MR_Word STATE_VARIABLE_Requests_0_34,
  MR_Word * STATE_VARIABLE_Requests_35);

static void MR_CALL 
analysis__file__parse_result_entry_4_p_0(
  MR_Word TypeClassInfo_for_compiler_58,
  MR_Box Compiler_5,
  MR_Word Term_6,
  MR_Word STATE_VARIABLE_Results_0_36,
  MR_Word * STATE_VARIABLE_Results_37);

static MR_bool MR_CALL 
analysis__file__parse_func_id_2_p_0(
  MR_Word Term_3,
  MR_Word * FuncId_4);

static void MR_CALL 
analysis__file__empty_request_file_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
analysis__file__write_module_imdg_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
analysis__file__read_module_imdg_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
analysis__file__read_module_imdg_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
analysis__file__write_module_analysis_requests_6_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
analysis__file__write_module_analysis_requests_6_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
analysis__file__write_module_analysis_requests_6_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
analysis__file__write_module_analysis_requests_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
analysis__file__write_module_analysis_requests_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
analysis__file__write_analysis_file_2_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
analysis__file__write_analysis_file_2_4_p_0(
  MR_Word TypeInfo_for_T_12,
  MR_Word WriteEntry_5,
  MR_Word ModuleResults_6);

static void MR_CALL 
analysis__file__write_analysis_file_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
analysis__file__write_analysis_file_5_p_0(
  MR_Word TypeInfo_for_T_34,
  MR_String FileName_6,
  MR_Word WriteEntry_7,
  MR_Word ModuleResults_8);

static void MR_CALL 
analysis__file__read_module_analysis_requests_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
analysis__file__read_module_analysis_requests_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
analysis__file__read_analysis_file_6_p_0_3(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
analysis__file__read_analysis_file_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
analysis__file__read_analysis_file_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
analysis__file__read_analysis_file_6_p_0(
  MR_Word TypeInfo_for_T_58,
  MR_String AnalysisFileName_7,
  MR_Word ParseEntry_8,
  MR_Box ModuleResults0_9,
  MR_Box * ModuleResults_10);

static MR_bool MR_CALL 
analysis__file__write_module_analysis_results_6_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
analysis__file__write_module_analysis_results_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
analysis__file__write_module_analysis_results_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
analysis__file__write_analysis_file_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
analysis__file__write_analysis_file_10_p_0(
  MR_Word TypeInfo_for_T_27,
  MR_Word TypeClassInfo_for_compiler_26,
  MR_Box Compiler_11,
  MR_Word Globals_12,
  MR_Word ModuleName_13,
  MR_String Suffix_14,
  MR_Word ToTmp_15,
  MR_Word WriteEntry_16,
  MR_Word ModuleResults_17,
  MR_String * FileName_18);

static void MR_CALL 
analysis__file__read_module_analysis_results_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static MR_bool MR_CALL 
analysis__file__read_module_analysis_results_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
analysis__file__write_analysis_cache_file_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
analysis__file__write_analysis_cache_file_4_p_0(
  MR_String CacheFileName_5,
  MR_Word ModuleResults_6);

static void MR_CALL 
analysis__file__read_module_analysis_results_2_5_p_0_4(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
analysis__file__read_module_analysis_results_2_5_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
analysis__file__read_module_analysis_results_2_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
analysis__file__read_module_analysis_results_2_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
analysis__file__read_module_analysis_results_2_5_p_0(
  MR_Word TypeClassInfo_for_compiler_48,
  MR_Box Compiler_6,
  MR_String AnalysisFileName_7,
  MR_Word * ModuleResults_8);

static MR_bool MR_CALL 
analysis__file____Unify____dummy_answer_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
analysis__file____Compare____dummy_answer_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
analysis__file____Unify____invalid_analysis_file_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
analysis__file____Compare____invalid_analysis_file_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
analysis__file____Unify____parse_entry_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static void MR_CALL 
analysis__file____Compare____parse_entry_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4);

static MR_bool MR_CALL 
analysis__file____Unify____write_entry_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static void MR_CALL 
analysis__file____Compare____write_entry_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4);

static MR_Box MR_CALL 
analysis__file__ClassMethod_for_analysis__to_term____analysis__file__dummy_answer__arity0______analysis__to_term_1_1_f_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
analysis__file__ClassMethod_for_analysis__to_term____analysis__file__dummy_answer__arity0______analysis__from_term_2_2_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_bool MR_CALL 
analysis__file__ClassMethod_for_analysis__partial_order____analysis__no_func_info__arity0__analysis__file__dummy_answer__arity0______analysis__more_precise_than_3_3_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
analysis__file__ClassMethod_for_analysis__partial_order____analysis__no_func_info__arity0__analysis__file__dummy_answer__arity0______analysis__equivalent_3_3_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_Box MR_CALL 
analysis__file__ClassMethod_for_analysis__analysis____analysis__no_func_info__arity0__analysis__any_call__arity0__analysis__file__dummy_answer__arity0______analysis__analysis_name_2_2_f_0_10001(
  MR_Box closure_arg);

static MR_Box MR_CALL 
analysis__file__ClassMethod_for_analysis__analysis____analysis__no_func_info__arity0__analysis__any_call__arity0__analysis__file__dummy_answer__arity0______analysis__analysis_version_number_2_2_f_0_10001(
  MR_Box closure_arg);

static MR_Box MR_CALL 
analysis__file__ClassMethod_for_analysis__analysis____analysis__no_func_info__arity0__analysis__any_call__arity0__analysis__file__dummy_answer__arity0______analysis__preferred_fixpoint_type_2_2_f_0_10001(
  MR_Box closure_arg);

static MR_Box MR_CALL 
analysis__file__ClassMethod_for_analysis__analysis____analysis__no_func_info__arity0__analysis__any_call__arity0__analysis__file__dummy_answer__arity0______analysis__bottom_2_2_f_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
analysis__file__ClassMethod_for_analysis__analysis____analysis__no_func_info__arity0__analysis__any_call__arity0__analysis__file__dummy_answer__arity0______analysis__top_2_2_f_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
analysis__file__ClassMethod_for_analysis__analysis____analysis__no_func_info__arity0__analysis__any_call__arity0__analysis__file__dummy_answer__arity0______analysis__get_func_info_6_6_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_6);


static /* final */ const MR_Box analysis__file_scalar_common_1[5][2];

static /* final */ const MR_Box analysis__file_scalar_common_2[10][3];

static /* final */ const MR_Box analysis__file_scalar_common_3[2][6];

static /* final */ const MR_Integer analysis__file_scalar_common_4[2][2];

static /* final */ const MR_Box analysis__file_scalar_common_5[5][8];

static /* final */ const MR_Box analysis__file_scalar_common_6[2][9];

static /* final */ const MR_Box analysis__file_scalar_common_7[1][7];

static /* final */ const MR_Box analysis__file_scalar_common_8[1][4];

static /* final */ const MR_Box analysis__file_scalar_common_9[1][11];

static /* final */ const MR_Box analysis__file_scalar_common_10[5][10];

static /* final */ const MR_Box analysis__file_scalar_common_11[1][1];




static /* final */ const MR_Box analysis__file_scalar_common_1[5][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&analysis__analysis__type_ctor_info_some_analysis_result_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&analysis__analysis__type_ctor_info_analysis_request_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&analysis__analysis__type_ctor_info_imdg_arc_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_term_1)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_generic_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__term_io__term_io__type_ctor_info_read_term_1)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_generic_0))
  },
};

static /* final */ const MR_Box analysis__file_scalar_common_2[10][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&analysis__analysis__type_ctor_info_func_id_0)),
    ((MR_Box) (&analysis__file_scalar_common_1[0]))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&analysis__file_scalar_common_2[0]))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&analysis__analysis__type_ctor_info_func_id_0)),
    ((MR_Box) (&analysis__file_scalar_common_1[1]))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&analysis__file_scalar_common_2[2]))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&analysis__analysis__type_ctor_info_func_id_0)),
    ((MR_Box) (&analysis__file_scalar_common_1[2]))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&analysis__file_scalar_common_2[4]))
  },
  /* row 6 */
  {
    ((MR_Box) (&analysis__file_scalar_common_7[0])),
    ((MR_Box) (analysis__file__write_analysis_cache_file_4_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 7 */
  {
    ((MR_Box) (&analysis__file_scalar_common_8[0])),
    ((MR_Box) (analysis__file__read_module_analysis_results_6_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 8 */
  {
    ((MR_Box) (&analysis__file_scalar_common_5[1])),
    ((MR_Box) (analysis__file__write_module_analysis_results_6_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 9 */
  {
    ((MR_Box) (&analysis__file_scalar_common_8[0])),
    ((MR_Box) (analysis__file__write_module_analysis_results_6_p_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box analysis__file_scalar_common_3[2][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Integer analysis__file_scalar_common_4[2][2] = {
  /* row 0 */
  {
    (MR_Integer) 1,
    (MR_Integer) 67631
  },
  /* row 1 */
  {
    (MR_Integer) 1,
    (MR_Integer) 33
  },
};

static /* final */ const MR_Box analysis__file_scalar_common_5[5][8] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (&analysis__file_scalar_common_4[0])),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_typeclass_info_0)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (&analysis__file__term__pti_term_1__plain_term__type_ctor_info_generic_0)),
    ((MR_Box) (&analysis__file__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_tree234__ti_tree234_2analysis__type_ctor_info_func_id_0list__ti_list_1analysis__type_ctor_info_some_analysis_result_0)),
    ((MR_Box) (&analysis__file__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_tree234__ti_tree234_2analysis__type_ctor_info_func_id_0list__ti_list_1analysis__type_ctor_info_some_analysis_result_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&analysis__analysis__type_ctor_info_func_id_0)),
    ((MR_Box) (&analysis__analysis__type_ctor_info_some_analysis_result_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (&analysis__file_scalar_common_4[0])),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_typeclass_info_0)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (&analysis__file__term__pti_term_1__plain_term__type_ctor_info_generic_0)),
    ((MR_Box) (&analysis__file__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_tree234__ti_tree234_2analysis__type_ctor_info_func_id_0list__ti_list_1analysis__type_ctor_info_analysis_request_0)),
    ((MR_Box) (&analysis__file__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_tree234__ti_tree234_2analysis__type_ctor_info_func_id_0list__ti_list_1analysis__type_ctor_info_analysis_request_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (&analysis__file_scalar_common_4[0])),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_typeclass_info_0)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (&analysis__file__term__pti_term_1__plain_term__type_ctor_info_generic_0)),
    ((MR_Box) (&analysis__file__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_tree234__ti_tree234_2analysis__type_ctor_info_func_id_0list__ti_list_1analysis__type_ctor_info_imdg_arc_0)),
    ((MR_Box) (&analysis__file__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_tree234__ti_tree234_2analysis__type_ctor_info_func_id_0list__ti_list_1analysis__type_ctor_info_imdg_arc_0))
  },
};

static /* final */ const MR_Box analysis__file_scalar_common_6[2][9] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&analysis__file__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_tree234__ti_tree234_2analysis__type_ctor_info_func_id_0list__ti_list_1analysis__type_ctor_info_some_analysis_result_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_input_stream_0)),
    ((MR_Box) (&analysis__file____vpti_pred_3__plain_term__ti_term_1term__type_ctor_info_generic_0__plain_tree234__ti_tree234_2builtin__type_ctor_info_string_0tree234__ti_tree234_2analysis__type_ctor_info_func_id_0list__ti_list_1analysis__type_ctor_info_some_analysis_result_0__plain_tree234__ti_tree234_2builtin__type_ctor_info_string_0tree234__ti_tree234_2analysis__type_ctor_info_func_id_0list__ti_list_1analysis__type_ctor_info_some_analysis_result_0)),
    ((MR_Box) (&analysis__file__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_tree234__ti_tree234_2analysis__type_ctor_info_func_id_0list__ti_list_1analysis__type_ctor_info_some_analysis_result_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (&analysis__file_scalar_common_4[1])),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_type_info_0)),
    ((MR_Box) (&analysis__file____vpti_pred_5__plain_builtin__type_ctor_info_string_0__plain_analysis__type_ctor_info_func_id_0__pseudo_1__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&analysis__file__tree234__pti_tree234_2__plain_analysis__type_ctor_info_func_id_0__pseudo_list__pti_list_1__pseudo_1)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box analysis__file_scalar_common_7[1][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&libs__pickle__libs__pickle__type_ctor_info_picklers_0)),
    ((MR_Box) (&mercury__univ__univ__type_ctor_info_univ_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box analysis__file_scalar_common_8[1][4] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_character_0))
  },
};

static /* final */ const MR_Box analysis__file_scalar_common_9[1][11] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (&analysis__file_scalar_common_4[0])),
    ((MR_Box) (MR_Word) ((MR_Integer) 8)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_typeclass_info_0)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (&libs__pickle__libs__pickle__type_ctor_info_unpicklers_0)),
    ((MR_Box) (&mercury__bitmap__bitmap__type_ctor_info_bitmap_0)),
    ((MR_Box) (&mercury__type_desc__type_desc__type_ctor_info_type_desc_0)),
    ((MR_Box) (&mercury__univ__univ__type_ctor_info_univ_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
};

static /* final */ const MR_Box analysis__file_scalar_common_10[5][10] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (&analysis__file_scalar_common_4[1])),
    ((MR_Box) (MR_Word) ((MR_Integer) 7)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_type_info_0)),
    ((MR_Box) (&analysis__file____vpti_pred_3__plain_term__ti_term_1term__type_ctor_info_generic_0__pseudo_1__pseudo_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_input_stream_0)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (&analysis__file_scalar_common_4[0])),
    ((MR_Box) (MR_Word) ((MR_Integer) 7)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_typeclass_info_0)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&analysis__analysis__type_ctor_info_func_id_0)),
    ((MR_Box) (&analysis__analysis__type_ctor_info_analysis_request_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (&analysis__file_scalar_common_4[0])),
    ((MR_Box) (MR_Word) ((MR_Integer) 7)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_typeclass_info_0)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&analysis__analysis__type_ctor_info_func_id_0)),
    ((MR_Box) (&analysis__analysis__type_ctor_info_imdg_arc_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (&analysis__file_scalar_common_4[1])),
    ((MR_Box) (MR_Word) ((MR_Integer) 7)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_type_info_0)),
    ((MR_Box) (&analysis__file____vpti_pred_5__plain_builtin__type_ctor_info_string_0__plain_analysis__type_ctor_info_func_id_0__pseudo_1__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&analysis__analysis__type_ctor_info_func_id_0)),
    ((MR_Box) (&analysis__file__list__pti_list_1__pseudo_1)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (&analysis__file_scalar_common_4[1])),
    ((MR_Box) (MR_Word) ((MR_Integer) 7)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_type_info_0)),
    ((MR_Box) (&analysis__file____vpti_pred_5__plain_builtin__type_ctor_info_string_0__plain_analysis__type_ctor_info_func_id_0__pseudo_1__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&analysis__analysis__type_ctor_info_func_id_0)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box analysis__file_scalar_common_11[1][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_String) "dummy"))
  },
};



#include "analysis.mh"
#include "dir.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_FA_PseudoTypeInfo_Struct1 analysis__file__term__pti_term_1__plain_term__type_ctor_info_generic_0 = {
  &mercury__term__term__type_ctor_info_term_1,
  {
    (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_generic_0
  }
};

static const MR_FA_TypeInfo_Struct1 analysis__file__list__ti_list_1analysis__type_ctor_info_some_analysis_result_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &analysis__analysis__type_ctor_info_some_analysis_result_0
  }
};

static const MR_FA_TypeInfo_Struct2 analysis__file__tree234__ti_tree234_2analysis__type_ctor_info_func_id_0list__ti_list_1analysis__type_ctor_info_some_analysis_result_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &analysis__analysis__type_ctor_info_func_id_0,
    (MR_TypeInfo) &analysis__file__list__ti_list_1analysis__type_ctor_info_some_analysis_result_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 analysis__file__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_tree234__ti_tree234_2analysis__type_ctor_info_func_id_0list__ti_list_1analysis__type_ctor_info_some_analysis_result_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
    (MR_PseudoTypeInfo) &analysis__file__tree234__ti_tree234_2analysis__type_ctor_info_func_id_0list__ti_list_1analysis__type_ctor_info_some_analysis_result_0
  }
};

static const MR_FA_TypeInfo_Struct1 analysis__file__term__ti_term_1term__type_ctor_info_generic_0 = {
  &mercury__term__term__type_ctor_info_term_1,
  {
    (MR_TypeInfo) &mercury__term__term__type_ctor_info_generic_0
  }
};

static const MR_FA_TypeInfo_Struct2 analysis__file__tree234__ti_tree234_2builtin__type_ctor_info_string_0tree234__ti_tree234_2analysis__type_ctor_info_func_id_0list__ti_list_1analysis__type_ctor_info_some_analysis_result_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
    (MR_TypeInfo) &analysis__file__tree234__ti_tree234_2analysis__type_ctor_info_func_id_0list__ti_list_1analysis__type_ctor_info_some_analysis_result_0
  }
};

static const MR_VA_PseudoTypeInfo_Struct3 analysis__file____vpti_pred_3__plain_term__ti_term_1term__type_ctor_info_generic_0__plain_tree234__ti_tree234_2builtin__type_ctor_info_string_0tree234__ti_tree234_2analysis__type_ctor_info_func_id_0list__ti_list_1analysis__type_ctor_info_some_analysis_result_0__plain_tree234__ti_tree234_2builtin__type_ctor_info_string_0tree234__ti_tree234_2analysis__type_ctor_info_func_id_0list__ti_list_1analysis__type_ctor_info_some_analysis_result_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 3,
  {
    (MR_PseudoTypeInfo) &analysis__file__term__ti_term_1term__type_ctor_info_generic_0,
    (MR_PseudoTypeInfo) &analysis__file__tree234__ti_tree234_2builtin__type_ctor_info_string_0tree234__ti_tree234_2analysis__type_ctor_info_func_id_0list__ti_list_1analysis__type_ctor_info_some_analysis_result_0,
    (MR_PseudoTypeInfo) &analysis__file__tree234__ti_tree234_2builtin__type_ctor_info_string_0tree234__ti_tree234_2analysis__type_ctor_info_func_id_0list__ti_list_1analysis__type_ctor_info_some_analysis_result_0
  }
};

static const MR_VA_PseudoTypeInfo_Struct5 analysis__file____vpti_pred_5__plain_builtin__type_ctor_info_string_0__plain_analysis__type_ctor_info_func_id_0__pseudo_1__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 5,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
    (MR_PseudoTypeInfo) &analysis__analysis__type_ctor_info_func_id_0,
    (MR_PseudoTypeInfo) (MR_Integer) 1,
    (MR_PseudoTypeInfo) &mercury__io__io__type_ctor_info_state_0,
    (MR_PseudoTypeInfo) &mercury__io__io__type_ctor_info_state_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 analysis__file__list__pti_list_1__pseudo_1 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 analysis__file__tree234__pti_tree234_2__plain_analysis__type_ctor_info_func_id_0__pseudo_list__pti_list_1__pseudo_1 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &analysis__analysis__type_ctor_info_func_id_0,
    (MR_PseudoTypeInfo) &analysis__file__list__pti_list_1__pseudo_1
  }
};

static const MR_VA_PseudoTypeInfo_Struct3 analysis__file____vpti_pred_3__plain_term__ti_term_1term__type_ctor_info_generic_0__pseudo_1__pseudo_1 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 3,
  {
    (MR_PseudoTypeInfo) &analysis__file__term__ti_term_1term__type_ctor_info_generic_0,
    (MR_PseudoTypeInfo) (MR_Integer) 1,
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

static const MR_FA_TypeInfo_Struct1 analysis__file__list__ti_list_1analysis__type_ctor_info_analysis_request_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &analysis__analysis__type_ctor_info_analysis_request_0
  }
};

static const MR_FA_TypeInfo_Struct2 analysis__file__tree234__ti_tree234_2analysis__type_ctor_info_func_id_0list__ti_list_1analysis__type_ctor_info_analysis_request_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &analysis__analysis__type_ctor_info_func_id_0,
    (MR_TypeInfo) &analysis__file__list__ti_list_1analysis__type_ctor_info_analysis_request_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 analysis__file__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_tree234__ti_tree234_2analysis__type_ctor_info_func_id_0list__ti_list_1analysis__type_ctor_info_analysis_request_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
    (MR_PseudoTypeInfo) &analysis__file__tree234__ti_tree234_2analysis__type_ctor_info_func_id_0list__ti_list_1analysis__type_ctor_info_analysis_request_0
  }
};

static const MR_FA_TypeInfo_Struct1 analysis__file__list__ti_list_1analysis__type_ctor_info_imdg_arc_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &analysis__analysis__type_ctor_info_imdg_arc_0
  }
};

static const MR_FA_TypeInfo_Struct2 analysis__file__tree234__ti_tree234_2analysis__type_ctor_info_func_id_0list__ti_list_1analysis__type_ctor_info_imdg_arc_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &analysis__analysis__type_ctor_info_func_id_0,
    (MR_TypeInfo) &analysis__file__list__ti_list_1analysis__type_ctor_info_imdg_arc_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 analysis__file__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_tree234__ti_tree234_2analysis__type_ctor_info_func_id_0list__ti_list_1analysis__type_ctor_info_imdg_arc_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
    (MR_PseudoTypeInfo) &analysis__file__tree234__ti_tree234_2analysis__type_ctor_info_func_id_0list__ti_list_1analysis__type_ctor_info_imdg_arc_0
  }
};

static const MR_EnumFunctorDesc analysis__file__analysis__file__enum_functor_desc_dummy_answer_0_0 = {
  (MR_String) "dummy_answer",
  (MR_Integer) 0
};

static const MR_EnumFunctorDescPtr analysis__file__analysis__file__enum_value_ordered_dummy_answer_0[1] = {
  &analysis__file__analysis__file__enum_functor_desc_dummy_answer_0_0
};

static const MR_EnumFunctorDescPtr analysis__file__analysis__file__enum_name_ordered_dummy_answer_0[1] = {
  &analysis__file__analysis__file__enum_functor_desc_dummy_answer_0_0
};

static const MR_Integer analysis__file__analysis__file__functor_number_map_dummy_answer_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct analysis__file__analysis__file__type_ctor_info_dummy_answer_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_DUMMY,
  ((MR_Box) (analysis__file____Unify____dummy_answer_0_0_10001)),
  ((MR_Box) (analysis__file____Compare____dummy_answer_0_0_10001)),
  (MR_String) "analysis.file",
  (MR_String) "dummy_answer",
  {     analysis__file__analysis__file__enum_name_ordered_dummy_answer_0 },
  {     analysis__file__analysis__file__enum_value_ordered_dummy_answer_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  analysis__file__analysis__file__functor_number_map_dummy_answer_0
};

static const MR_Integer analysis__file__analysis__file__functor_number_map_invalid_analysis_file_0[1] = {
  (MR_Integer) 0
};

static const MR_NotagFunctorDesc analysis__file__analysis__file__notag_functor_desc_invalid_analysis_file_0 = {
  (MR_String) "invalid_analysis_file",
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

const MR_TypeCtorInfo_Struct analysis__file__analysis__file__type_ctor_info_invalid_analysis_file_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (analysis__file____Unify____invalid_analysis_file_0_0_10001)),
  ((MR_Box) (analysis__file____Compare____invalid_analysis_file_0_0_10001)),
  (MR_String) "analysis.file",
  (MR_String) "invalid_analysis_file",
  {     &analysis__file__analysis__file__notag_functor_desc_invalid_analysis_file_0 },
  {     &analysis__file__analysis__file__notag_functor_desc_invalid_analysis_file_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  analysis__file__analysis__file__functor_number_map_invalid_analysis_file_0
};

const MR_TypeCtorInfo_Struct analysis__file__analysis__file__type_ctor_info_parse_entry_1 = {
  (MR_Integer) 1,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_EQUIV,
  ((MR_Box) (analysis__file____Unify____parse_entry_1_0_10001)),
  ((MR_Box) (analysis__file____Compare____parse_entry_1_0_10001)),
  (MR_String) "analysis.file",
  (MR_String) "parse_entry",
  {     NULL },
  {     (MR_PseudoTypeInfo) &analysis__file____vpti_pred_3__plain_term__ti_term_1term__type_ctor_info_generic_0__pseudo_1__pseudo_1 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

const MR_TypeCtorInfo_Struct analysis__file__analysis__file__type_ctor_info_write_entry_1 = {
  (MR_Integer) 1,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_EQUIV,
  ((MR_Box) (analysis__file____Unify____write_entry_1_0_10001)),
  ((MR_Box) (analysis__file____Compare____write_entry_1_0_10001)),
  (MR_String) "analysis.file",
  (MR_String) "write_entry",
  {     NULL },
  {     (MR_PseudoTypeInfo) &analysis__file____vpti_pred_5__plain_builtin__type_ctor_info_string_0__plain_analysis__type_ctor_info_func_id_0__pseudo_1__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

const MR_BaseTypeclassInfo base_typeclass_info_analysis__to_term__arity1__analysis__file__dummy_answer__arity0__[7] = {
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 1)),
  ((MR_Box) (MR_Word) ((MR_Integer) 2)),
  ((MR_Box) (analysis__file__ClassMethod_for_analysis__to_term____analysis__file__dummy_answer__arity0______analysis__to_term_1_1_f_0_10001)),
  ((MR_Box) (analysis__file__ClassMethod_for_analysis__to_term____analysis__file__dummy_answer__arity0______analysis__from_term_2_2_p_0_10001))
};

const MR_BaseTypeclassInfo base_typeclass_info_analysis__partial_order__arity2__analysis__no_func_info__arity0__analysis__file__dummy_answer__arity0__[7] = {
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 2)),
  ((MR_Box) (MR_Word) ((MR_Integer) 2)),
  ((MR_Box) (analysis__file__ClassMethod_for_analysis__partial_order____analysis__no_func_info__arity0__analysis__file__dummy_answer__arity0______analysis__more_precise_than_3_3_p_0_10001)),
  ((MR_Box) (analysis__file__ClassMethod_for_analysis__partial_order____analysis__no_func_info__arity0__analysis__file__dummy_answer__arity0______analysis__equivalent_3_3_p_0_10001))
};

const MR_BaseTypeclassInfo base_typeclass_info_analysis__answer_pattern__arity2__analysis__no_func_info__arity0__analysis__file__dummy_answer__arity0__[5] = {
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 2)),
  ((MR_Box) (MR_Word) ((MR_Integer) 2)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0))
};

const MR_BaseTypeclassInfo base_typeclass_info_analysis__analysis__arity3__analysis__no_func_info__arity0__analysis__any_call__arity0__analysis__file__dummy_answer__arity0__[11] = {
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 2)),
  ((MR_Box) (MR_Word) ((MR_Integer) 3)),
  ((MR_Box) (MR_Word) ((MR_Integer) 6)),
  ((MR_Box) (analysis__file__ClassMethod_for_analysis__analysis____analysis__no_func_info__arity0__analysis__any_call__arity0__analysis__file__dummy_answer__arity0______analysis__analysis_name_2_2_f_0_10001)),
  ((MR_Box) (analysis__file__ClassMethod_for_analysis__analysis____analysis__no_func_info__arity0__analysis__any_call__arity0__analysis__file__dummy_answer__arity0______analysis__analysis_version_number_2_2_f_0_10001)),
  ((MR_Box) (analysis__file__ClassMethod_for_analysis__analysis____analysis__no_func_info__arity0__analysis__any_call__arity0__analysis__file__dummy_answer__arity0______analysis__preferred_fixpoint_type_2_2_f_0_10001)),
  ((MR_Box) (analysis__file__ClassMethod_for_analysis__analysis____analysis__no_func_info__arity0__analysis__any_call__arity0__analysis__file__dummy_answer__arity0______analysis__bottom_2_2_f_0_10001)),
  ((MR_Box) (analysis__file__ClassMethod_for_analysis__analysis____analysis__no_func_info__arity0__analysis__any_call__arity0__analysis__file__dummy_answer__arity0______analysis__top_2_2_f_0_10001)),
  ((MR_Box) (analysis__file__ClassMethod_for_analysis__analysis____analysis__no_func_info__arity0__analysis__any_call__arity0__analysis__file__dummy_answer__arity0______analysis__get_func_info_6_6_p_0_10001))
};

static void MR_CALL 
analysis__file__IntroducedFrom__pred__write_analysis_file_4__895__1_7_p_0(
  MR_Word TypeInfo_for_T_27,
  MR_Word WriteEntry_7,
  MR_String AnalysisName_8,
  MR_Word FuncId_9,
  MR_Box LambdaHeadVar__1_18)
{
  {
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), WriteEntry_7, (MR_Integer) 1)));
    MR_Box conv1_LambdaHeadVar__3_20;

    func_0(((MR_Box) WriteEntry_7), ((MR_Box) (AnalysisName_8)), ((MR_Box) (FuncId_9)), LambdaHeadVar__1_18, ((MR_Box) ((MR_Integer) 0)), &conv1_LambdaHeadVar__3_20);
  }
}

static void MR_CALL 
analysis__file__IntroducedFrom__pred__read_analysis_file__568__1_7_p_0(
  MR_Word TypeInfo_for_T_58,
  MR_Word ParseEntry_8,
  MR_Box ModuleResults0_9,
  MR_Word Stream_13,
  MR_Box * LambdaHeadVar__1_43)
{
  {
    MR_bool succeeded;
    MR_Word TypeCtorInfo_18_73 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
    MR_Word TermResult_63;
    MR_Word NumberTerm_65;
    MR_Integer Var_69;
    MR_Integer Var_76;
    MR_Word Var_64;

    mercury__parser__read_term_4_p_0(TypeCtorInfo_18_73, Stream_13, &TermResult_63);
    succeeded = ((MR_tag((MR_Word) TermResult_63)) == (MR_mktag((MR_Integer) 2)));
    if (succeeded)
    {
      Var_64 = ((MR_Word) (MR_hl_field(MR_mktag(2), TermResult_63, (MR_Integer) 0)));
      NumberTerm_65 = ((MR_Word) (MR_hl_field(MR_mktag(2), TermResult_63, (MR_Integer) 1)));
      Var_69 = (MR_Integer) 6;
      succeeded = mercury__term__decimal_term_to_int_2_p_0(TypeCtorInfo_18_73, NumberTerm_65, &Var_76);
      if (succeeded)
        succeeded = (Var_69 == Var_76);
    }
    if (!(succeeded))
    {
      MR_String Msg_66;
      MR_String Var_71;
      MR_Word Var_72;

      Var_71 = mercury__string__string_1_f_0((MR_Word) &analysis__file_scalar_common_1[4], ((MR_Box) (TermResult_63)));
      Msg_66 = mercury__string__f_43_43_2_f_0((MR_String) "bad analysis file version: ", Var_71);
      Var_72 = (MR_Word) Msg_66;
      {
        mercury__exception__throw_1_p_0((MR_Word) &analysis__file__analysis__file__type_ctor_info_invalid_analysis_file_0, ((MR_Box) (Var_72)));
        return;
      }
    }
    analysis__file__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_97_110_97_108_121_115_105_115_95_102_105_108_101_95_50_95_95_91_49_93_95_48_6_p_0(Stream_13, ParseEntry_8, ModuleResults0_9, LambdaHeadVar__1_43);
  }
}

static void MR_CALL 
analysis__file__IntroducedFrom__pred__read_analysis_file__561__1_3_p_0(
  MR_String AnalysisFileName_7)
{
  {
    mercury__io__write_string_3_p_0((MR_String) "% Reading analysis file ");
    mercury__io__write_string_3_p_0(AnalysisFileName_7);
    mercury__io__nl_2_p_0();
  }
}

static void MR_CALL 
analysis__file__IntroducedFrom__pred__read_analysis_file__584__1_3_p_0(
  MR_String AnalysisFileName_7)
{
  {
    mercury__io__write_string_3_p_0((MR_String) "Error reading analysis file: ");
    mercury__io__write_string_3_p_0(AnalysisFileName_7);
    mercury__io__nl_2_p_0();
  }
}

static void MR_CALL 
analysis__file__IntroducedFrom__pred__read_analysis_file__541__1_5_p_0(
  MR_Word ModuleName_12,
  MR_String Suffix_13,
  MR_String Message_20)
{
  {
    mercury__io__write_string_3_p_0((MR_String) "Couldn\'t open ");
    mercury__io__write_string_3_p_0(Suffix_13);
    mercury__io__write_string_3_p_0((MR_String) " for module ");
    mercury__io__write_3_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, ((MR_Box) (ModuleName_12)));
    mercury__io__write_string_3_p_0((MR_String) ": ");
    mercury__io__write_string_3_p_0(Message_20);
    mercury__io__nl_2_p_0();
  }
}

static void MR_CALL 
analysis__file__IntroducedFrom__pred__read_module_analysis_results_2__334__1_6_p_0(
  MR_Word ModuleResults0_10,
  MR_Word Stream_12,
  MR_Word HeadVar__3_42,
  MR_Word * HeadVar__4_51)
{
  {
    MR_Box conv0_HeadVar__4_51;

    analysis__file__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_97_110_97_108_121_115_105_115_95_102_105_108_101_95_50_95_95_91_49_93_95_48_6_p_0(Stream_12, HeadVar__3_42, ((MR_Box) (ModuleResults0_10)), &conv0_HeadVar__4_51);
    *HeadVar__4_51 = ((MR_Word) conv0_HeadVar__4_51);
  }
}

static void MR_CALL 
analysis__file__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_97_110_97_108_121_115_105_115_95_102_105_108_101_95_50_95_95_91_49_93_95_48_6_p_0(
  MR_Word Stream_7,
  MR_Word ParseEntry_8,
  MR_Box Results0_9,
  MR_Box * Results_10)
{
  while (MR_TRUE)
  {
    MR_Word TermResult_12;

    // setup for model_det tailcalls optimized into a loop
    mercury__parser__read_term_4_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, Stream_7, &TermResult_12);
    switch (MR_tag((MR_Word) TermResult_12)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *Results_10 = Results0_9;
        break;
      case (MR_Integer) 1:
        {
          MR_String Msg_16 = ((MR_String) (MR_hl_field(MR_mktag(1), TermResult_12, (MR_Integer) 0)));
          MR_Word Var_22 = (MR_Word) Msg_16;
          MR_Integer Var_17 = ((MR_Integer) (MR_hl_field(MR_mktag(1), TermResult_12, (MR_Integer) 1)));

          {
            mercury__exception__throw_1_p_0((MR_Word) &analysis__file__analysis__file__type_ctor_info_invalid_analysis_file_0, ((MR_Box) (Var_22)));
            return;
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Term_14 = ((MR_Word) (MR_hl_field(MR_mktag(2), TermResult_12, (MR_Integer) 1)));
          MR_Box Results1_15;
          MR_Word Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(2), TermResult_12, (MR_Integer) 0)));
          void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), ParseEntry_8, (MR_Integer) 1)));
          MR_Box next_value_of_Results0_9;

          func_0(((MR_Box) ParseEntry_8), ((MR_Box) (Term_14)), Results0_9, &Results1_15);
          // direct tailcall eliminated
          next_value_of_Results0_9 = Results1_15;
          Results0_9 = next_value_of_Results0_9;
          continue;
        }
        break;
    }
    break;
  }
}

static void MR_CALL 
analysis__file__IntroducedFrom__pred__read_module_analysis_results_2__326__1_3_p_0(
  MR_String AnalysisFileName_7)
{
  {
    mercury__io__write_string_3_p_0((MR_String) "% Reading analysis registry file ");
    mercury__io__write_string_3_p_0(AnalysisFileName_7);
    mercury__io__nl_2_p_0();
  }
}

static void MR_CALL 
analysis__file__IntroducedFrom__pred__read_module_analysis_results_2__346__1_3_p_0(
  MR_String AnalysisFileName_7)
{
  {
    mercury__io__write_string_3_p_0((MR_String) "% Error reading analysis registry file: ");
    mercury__io__write_string_3_p_0(AnalysisFileName_7);
    mercury__io__nl_2_p_0();
  }
}

static void MR_CALL 
analysis__file__IntroducedFrom__pred__empty_request_file__904__1_3_p_0(
  MR_String RequestFileName_10)
{
  {
    mercury__io__write_string_3_p_0((MR_String) "% Removing request file ");
    mercury__io__write_string_3_p_0(RequestFileName_10);
    mercury__io__nl_2_p_0();
  }
}

static void MR_CALL 
analysis__file__IntroducedFrom__pred__write_module_analysis_requests__709__1_3_p_0(
  MR_String AnalysisFileName_13)
{
  {
    mercury__io__write_string_3_p_0((MR_String) "% Writing module analysis requests to ");
    mercury__io__write_string_3_p_0(AnalysisFileName_13);
    mercury__io__nl_2_p_0();
  }
}

static void MR_CALL 
analysis__file__IntroducedFrom__pred__write_module_analysis_results__657__1_3_p_0(
  MR_Word ModuleName_9)
{
  {
    mercury__io__write_string_3_p_0((MR_String) "% Writing module analysis results for ");
    mercury__io__write_3_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, ((MR_Box) (ModuleName_9)));
    mercury__io__nl_2_p_0();
  }
}

static MR_bool MR_CALL 
analysis__file__ClassMethod_for_analysis__to_term____analysis__file__dummy_answer__arity0______analysis__from_term_2_2_p_0(
  MR_Word Term_3)
{
  {
    MR_bool succeeded;
    MR_Word Var_5;
    MR_String Var_6;
    MR_Word Var_7;
    MR_Word Var_4;

    succeeded = ((MR_tag((MR_Word) Term_3)) == (MR_mktag((MR_Integer) 0)));
    if (succeeded)
    {
      Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), Term_3, (MR_Integer) 0)));
      Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), Term_3, (MR_Integer) 1)));
      Var_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), Term_3, (MR_Integer) 2)));
      succeeded = (Var_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      if (succeeded)
      {
        succeeded = ((MR_tag((MR_Word) Var_5)) == (MR_mktag((MR_Integer) 0)));
        if (succeeded)
        {
          Var_6 = ((MR_String) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 0)));
          succeeded = (strcmp(Var_6, (MR_String) "dummy") == 0);
        }
      }
    }
    return succeeded;
  }
}

static MR_Word MR_CALL 
analysis__file__ClassMethod_for_analysis__to_term____analysis__file__dummy_answer__arity0______analysis__to_term_1_1_f_0(void)
{
  {
    MR_Word Term_3;

    Term_3 = analysis__file__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_97_110_97_108_121_115_105_115_95_95_116_111_95_116_101_114_109_95_95_95_95_97_110_97_108_121_115_105_115_95_95_102_105_108_101_95_95_100_117_109_109_121_95_97_110_115_119_101_114_95_95_97_114_105_116_121_48_95_95_95_95_95_95_97_110_97_108_121_115_105_115_95_95_116_111_95_116_101_114_109_95_49_95_95_91_49_93_95_48_1_f_0();
    return Term_3;
  }
}

static MR_Word MR_CALL 
analysis__file__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_97_110_97_108_121_115_105_115_95_95_116_111_95_116_101_114_109_95_95_95_95_97_110_97_108_121_115_105_115_95_95_102_105_108_101_95_95_100_117_109_109_121_95_97_110_115_119_101_114_95_95_97_114_105_116_121_48_95_95_95_95_95_95_97_110_97_108_121_115_105_115_95_95_116_111_95_116_101_114_109_95_49_95_95_91_49_93_95_48_1_f_0(void)
{
  {
    MR_Word Term_3;
    MR_Word Var_8;

    Var_8 = mercury__term__context_init_0_f_0();
    {
      Term_3 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Term_3, 0) = ((MR_Box) (&analysis__file_scalar_common_11[0]));
      MR_hl_field(MR_mktag(0), Term_3, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), Term_3, 2) = ((MR_Box) (Var_8));
    }
    return Term_3;
  }
}

static MR_bool MR_CALL 
analysis__file__ClassMethod_for_analysis__partial_order____analysis__no_func_info__arity0__analysis__file__dummy_answer__arity0______analysis__equivalent_3_3_p_0(void)
{
  {
    MR_bool succeeded;

    succeeded = analysis__file__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_97_110_97_108_121_115_105_115_95_95_112_97_114_116_105_97_108_95_111_114_100_101_114_95_95_95_95_97_110_97_108_121_115_105_115_95_95_110_111_95_102_117_110_99_95_105_110_102_111_95_95_97_114_105_116_121_48_95_95_97_110_97_108_121_115_105_115_95_95_102_105_108_101_95_95_100_117_109_109_121_95_97_110_115_119_101_114_95_95_97_114_105_116_121_48_95_95_95_95_95_95_97_110_97_108_121_115_105_115_95_95_101_113_117_105_118_97_108_101_110_116_95_51_95_95_91_49_44_32_50_44_32_51_93_95_48_3_p_0();
    return succeeded;
  }
}

static MR_bool MR_CALL 
analysis__file__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_97_110_97_108_121_115_105_115_95_95_112_97_114_116_105_97_108_95_111_114_100_101_114_95_95_95_95_97_110_97_108_121_115_105_115_95_95_110_111_95_102_117_110_99_95_105_110_102_111_95_95_97_114_105_116_121_48_95_95_97_110_97_108_121_115_105_115_95_95_102_105_108_101_95_95_100_117_109_109_121_95_97_110_115_119_101_114_95_95_97_114_105_116_121_48_95_95_95_95_95_95_97_110_97_108_121_115_105_115_95_95_101_113_117_105_118_97_108_101_110_116_95_51_95_95_91_49_44_32_50_44_32_51_93_95_48_3_p_0(void)
{
  {
    return MR_TRUE;
  }
}

static MR_bool MR_CALL 
analysis__file__ClassMethod_for_analysis__partial_order____analysis__no_func_info__arity0__analysis__file__dummy_answer__arity0______analysis__more_precise_than_3_3_p_0(void)
{
  {
    MR_bool succeeded;

    succeeded = analysis__file__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_97_110_97_108_121_115_105_115_95_95_112_97_114_116_105_97_108_95_111_114_100_101_114_95_95_95_95_97_110_97_108_121_115_105_115_95_95_110_111_95_102_117_110_99_95_105_110_102_111_95_95_97_114_105_116_121_48_95_95_97_110_97_108_121_115_105_115_95_95_102_105_108_101_95_95_100_117_109_109_121_95_97_110_115_119_101_114_95_95_97_114_105_116_121_48_95_95_95_95_95_95_97_110_97_108_121_115_105_115_95_95_109_111_114_101_95_112_114_101_99_105_115_101_95_116_104_97_110_95_51_95_95_91_49_44_32_50_44_32_51_93_95_48_3_p_0();
    return succeeded;
  }
}

static MR_bool MR_CALL 
analysis__file__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_97_110_97_108_121_115_105_115_95_95_112_97_114_116_105_97_108_95_111_114_100_101_114_95_95_95_95_97_110_97_108_121_115_105_115_95_95_110_111_95_102_117_110_99_95_105_110_102_111_95_95_97_114_105_116_121_48_95_95_97_110_97_108_121_115_105_115_95_95_102_105_108_101_95_95_100_117_109_109_121_95_97_110_115_119_101_114_95_95_97_114_105_116_121_48_95_95_95_95_95_95_97_110_97_108_121_115_105_115_95_95_109_111_114_101_95_112_114_101_99_105_115_101_95_116_104_97_110_95_51_95_95_91_49_44_32_50_44_32_51_93_95_48_3_p_0(void)
{
  {
    MR_bool succeeded;

    succeeded = mercury__builtin__semidet_fail_0_p_0();
    return succeeded;
  }
}

static void MR_CALL 
analysis__file__ClassMethod_for_analysis__analysis____analysis__no_func_info__arity0__analysis__any_call__arity0__analysis__file__dummy_answer__arity0______analysis__get_func_info_6_6_p_0(
  MR_Word HeadVar__1_17,
  MR_Word HeadVar__2_18,
  MR_Word HeadVar__3_19)
{
  analysis__file__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_97_110_97_108_121_115_105_115_95_95_97_110_97_108_121_115_105_115_95_95_95_95_97_110_97_108_121_115_105_115_95_95_110_111_95_102_117_110_99_95_105_110_102_111_95_95_97_114_105_116_121_48_95_95_97_110_97_108_121_115_105_115_95_95_97_110_121_95_99_97_108_108_95_95_97_114_105_116_121_48_95_95_97_110_97_108_121_115_105_115_95_95_102_105_108_101_95_95_100_117_109_109_121_95_97_110_115_119_101_114_95_95_97_114_105_116_121_48_95_95_95_95_95_95_97_110_97_108_121_115_105_115_95_95_103_101_116_95_102_117_110_99_95_105_110_102_111_95_54_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_93_95_48_6_p_0();
}

static void MR_CALL 
analysis__file__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_97_110_97_108_121_115_105_115_95_95_97_110_97_108_121_115_105_115_95_95_95_95_97_110_97_108_121_115_105_115_95_95_110_111_95_102_117_110_99_95_105_110_102_111_95_95_97_114_105_116_121_48_95_95_97_110_97_108_121_115_105_115_95_95_97_110_121_95_99_97_108_108_95_95_97_114_105_116_121_48_95_95_97_110_97_108_121_115_105_115_95_95_102_105_108_101_95_95_100_117_109_109_121_95_97_110_115_119_101_114_95_95_97_114_105_116_121_48_95_95_95_95_95_95_97_110_97_108_121_115_105_115_95_95_103_101_116_95_102_117_110_99_95_105_110_102_111_95_54_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_93_95_48_6_p_0(void)
{
  {
  }
}

static void MR_CALL 
analysis__file__ClassMethod_for_analysis__analysis____analysis__no_func_info__arity0__analysis__any_call__arity0__analysis__file__dummy_answer__arity0______analysis__top_2_2_f_0(void)
{
  analysis__file__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_97_110_97_108_121_115_105_115_95_95_97_110_97_108_121_115_105_115_95_95_95_95_97_110_97_108_121_115_105_115_95_95_110_111_95_102_117_110_99_95_105_110_102_111_95_95_97_114_105_116_121_48_95_95_97_110_97_108_121_115_105_115_95_95_97_110_121_95_99_97_108_108_95_95_97_114_105_116_121_48_95_95_97_110_97_108_121_115_105_115_95_95_102_105_108_101_95_95_100_117_109_109_121_95_97_110_115_119_101_114_95_95_97_114_105_116_121_48_95_95_95_95_95_95_97_110_97_108_121_115_105_115_95_95_116_111_112_95_50_95_95_91_49_44_32_50_93_95_48_2_f_0();
}

static void MR_CALL 
analysis__file__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_97_110_97_108_121_115_105_115_95_95_97_110_97_108_121_115_105_115_95_95_95_95_97_110_97_108_121_115_105_115_95_95_110_111_95_102_117_110_99_95_105_110_102_111_95_95_97_114_105_116_121_48_95_95_97_110_97_108_121_115_105_115_95_95_97_110_121_95_99_97_108_108_95_95_97_114_105_116_121_48_95_95_97_110_97_108_121_115_105_115_95_95_102_105_108_101_95_95_100_117_109_109_121_95_97_110_115_119_101_114_95_95_97_114_105_116_121_48_95_95_95_95_95_95_97_110_97_108_121_115_105_115_95_95_116_111_112_95_50_95_95_91_49_44_32_50_93_95_48_2_f_0(void)
{
  {
  }
}

static void MR_CALL 
analysis__file__ClassMethod_for_analysis__analysis____analysis__no_func_info__arity0__analysis__any_call__arity0__analysis__file__dummy_answer__arity0______analysis__bottom_2_2_f_0(void)
{
  analysis__file__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_97_110_97_108_121_115_105_115_95_95_97_110_97_108_121_115_105_115_95_95_95_95_97_110_97_108_121_115_105_115_95_95_110_111_95_102_117_110_99_95_105_110_102_111_95_95_97_114_105_116_121_48_95_95_97_110_97_108_121_115_105_115_95_95_97_110_121_95_99_97_108_108_95_95_97_114_105_116_121_48_95_95_97_110_97_108_121_115_105_115_95_95_102_105_108_101_95_95_100_117_109_109_121_95_97_110_115_119_101_114_95_95_97_114_105_116_121_48_95_95_95_95_95_95_97_110_97_108_121_115_105_115_95_95_98_111_116_116_111_109_95_50_95_95_91_49_44_32_50_93_95_48_2_f_0();
}

static void MR_CALL 
analysis__file__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_97_110_97_108_121_115_105_115_95_95_97_110_97_108_121_115_105_115_95_95_95_95_97_110_97_108_121_115_105_115_95_95_110_111_95_102_117_110_99_95_105_110_102_111_95_95_97_114_105_116_121_48_95_95_97_110_97_108_121_115_105_115_95_95_97_110_121_95_99_97_108_108_95_95_97_114_105_116_121_48_95_95_97_110_97_108_121_115_105_115_95_95_102_105_108_101_95_95_100_117_109_109_121_95_97_110_115_119_101_114_95_95_97_114_105_116_121_48_95_95_95_95_95_95_97_110_97_108_121_115_105_115_95_95_98_111_116_116_111_109_95_50_95_95_91_49_44_32_50_93_95_48_2_f_0(void)
{
  {
  }
}

static MR_Word MR_CALL 
analysis__file__ClassMethod_for_analysis__analysis____analysis__no_func_info__arity0__analysis__any_call__arity0__analysis__file__dummy_answer__arity0______analysis__preferred_fixpoint_type_2_2_f_0(void)
{
  {
    MR_Word HeadVar__3_3;

    HeadVar__3_3 = analysis__file__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_97_110_97_108_121_115_105_115_95_95_97_110_97_108_121_115_105_115_95_95_95_95_97_110_97_108_121_115_105_115_95_95_110_111_95_102_117_110_99_95_105_110_102_111_95_95_97_114_105_116_121_48_95_95_97_110_97_108_121_115_105_115_95_95_97_110_121_95_99_97_108_108_95_95_97_114_105_116_121_48_95_95_97_110_97_108_121_115_105_115_95_95_102_105_108_101_95_95_100_117_109_109_121_95_97_110_115_119_101_114_95_95_97_114_105_116_121_48_95_95_95_95_95_95_97_110_97_108_121_115_105_115_95_95_112_114_101_102_101_114_114_101_100_95_102_105_120_112_111_105_110_116_95_116_121_112_101_95_50_95_95_91_49_44_32_50_93_95_48_2_f_0();
    return HeadVar__3_3;
  }
}

static MR_Word MR_CALL 
analysis__file__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_97_110_97_108_121_115_105_115_95_95_97_110_97_108_121_115_105_115_95_95_95_95_97_110_97_108_121_115_105_115_95_95_110_111_95_102_117_110_99_95_105_110_102_111_95_95_97_114_105_116_121_48_95_95_97_110_97_108_121_115_105_115_95_95_97_110_121_95_99_97_108_108_95_95_97_114_105_116_121_48_95_95_97_110_97_108_121_115_105_115_95_95_102_105_108_101_95_95_100_117_109_109_121_95_97_110_115_119_101_114_95_95_97_114_105_116_121_48_95_95_95_95_95_95_97_110_97_108_121_115_105_115_95_95_112_114_101_102_101_114_114_101_100_95_102_105_120_112_111_105_110_116_95_116_121_112_101_95_50_95_95_91_49_44_32_50_93_95_48_2_f_0(void)
{
  {
    return (MR_Integer) 1;
  }
}

static MR_Integer MR_CALL 
analysis__file__ClassMethod_for_analysis__analysis____analysis__no_func_info__arity0__analysis__any_call__arity0__analysis__file__dummy_answer__arity0______analysis__analysis_version_number_2_2_f_0(void)
{
  {
    MR_Integer HeadVar__3_3;

    HeadVar__3_3 = analysis__file__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_97_110_97_108_121_115_105_115_95_95_97_110_97_108_121_115_105_115_95_95_95_95_97_110_97_108_121_115_105_115_95_95_110_111_95_102_117_110_99_95_105_110_102_111_95_95_97_114_105_116_121_48_95_95_97_110_97_108_121_115_105_115_95_95_97_110_121_95_99_97_108_108_95_95_97_114_105_116_121_48_95_95_97_110_97_108_121_115_105_115_95_95_102_105_108_101_95_95_100_117_109_109_121_95_97_110_115_119_101_114_95_95_97_114_105_116_121_48_95_95_95_95_95_95_97_110_97_108_121_115_105_115_95_95_97_110_97_108_121_115_105_115_95_118_101_114_115_105_111_110_95_110_117_109_98_101_114_95_50_95_95_91_49_44_32_50_93_95_48_2_f_0();
    return HeadVar__3_3;
  }
}

static MR_Integer MR_CALL 
analysis__file__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_97_110_97_108_121_115_105_115_95_95_97_110_97_108_121_115_105_115_95_95_95_95_97_110_97_108_121_115_105_115_95_95_110_111_95_102_117_110_99_95_105_110_102_111_95_95_97_114_105_116_121_48_95_95_97_110_97_108_121_115_105_115_95_95_97_110_121_95_99_97_108_108_95_95_97_114_105_116_121_48_95_95_97_110_97_108_121_115_105_115_95_95_102_105_108_101_95_95_100_117_109_109_121_95_97_110_115_119_101_114_95_95_97_114_105_116_121_48_95_95_95_95_95_95_97_110_97_108_121_115_105_115_95_95_97_110_97_108_121_115_105_115_95_118_101_114_115_105_111_110_95_110_117_109_98_101_114_95_50_95_95_91_49_44_32_50_93_95_48_2_f_0(void)
{
  {
    return (MR_Integer) 1;
  }
}

static MR_String MR_CALL 
analysis__file__ClassMethod_for_analysis__analysis____analysis__no_func_info__arity0__analysis__any_call__arity0__analysis__file__dummy_answer__arity0______analysis__analysis_name_2_2_f_0(void)
{
  {
    MR_String HeadVar__3_3;

    HeadVar__3_3 = analysis__file__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_97_110_97_108_121_115_105_115_95_95_97_110_97_108_121_115_105_115_95_95_95_95_97_110_97_108_121_115_105_115_95_95_110_111_95_102_117_110_99_95_105_110_102_111_95_95_97_114_105_116_121_48_95_95_97_110_97_108_121_115_105_115_95_95_97_110_121_95_99_97_108_108_95_95_97_114_105_116_121_48_95_95_97_110_97_108_121_115_105_115_95_95_102_105_108_101_95_95_100_117_109_109_121_95_97_110_115_119_101_114_95_95_97_114_105_116_121_48_95_95_95_95_95_95_97_110_97_108_121_115_105_115_95_95_97_110_97_108_121_115_105_115_95_110_97_109_101_95_50_95_95_91_49_44_32_50_93_95_48_2_f_0();
    return HeadVar__3_3;
  }
}

static MR_String MR_CALL 
analysis__file__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_97_110_97_108_121_115_105_115_95_95_97_110_97_108_121_115_105_115_95_95_95_95_97_110_97_108_121_115_105_115_95_95_110_111_95_102_117_110_99_95_105_110_102_111_95_95_97_114_105_116_121_48_95_95_97_110_97_108_121_115_105_115_95_95_97_110_121_95_99_97_108_108_95_95_97_114_105_116_121_48_95_95_97_110_97_108_121_115_105_115_95_95_102_105_108_101_95_95_100_117_109_109_121_95_97_110_115_119_101_114_95_95_97_114_105_116_121_48_95_95_95_95_95_95_97_110_97_108_121_115_105_115_95_95_97_110_97_108_121_115_105_115_95_110_97_109_101_95_50_95_95_91_49_44_32_50_93_95_48_2_f_0(void)
{
  {
    return (MR_String) "dummy";
  }
}

static void MR_CALL 
analysis__file____Compare____write_entry_1_0(
  MR_Word TypeInfo_for_T_6,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  analysis__file__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_97_110_97_108_121_115_105_115_95_95_102_105_108_101_95_95_119_114_105_116_101_95_101_110_116_114_121_95_49_95_95_91_49_93_95_48_3_p_0(HeadVar__1_1, HeadVar__2_2, HeadVar__3_3);
}

static void MR_CALL 
analysis__file__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_97_110_97_108_121_115_105_115_95_95_102_105_108_101_95_95_119_114_105_116_101_95_101_110_116_114_121_95_49_95_95_91_49_93_95_48_3_p_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__private_builtin__builtin_compare_pred_3_p_0(HeadVar__1_1, (MR_Word) Cast_HeadVar1_4, (MR_Word) Cast_HeadVar2_5);
  }
}

static MR_bool MR_CALL 
analysis__file____Unify____write_entry_1_0(
  MR_Word TypeInfo_for_T_5,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;

    succeeded = analysis__file__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_97_110_97_108_121_115_105_115_95_95_102_105_108_101_95_95_119_114_105_116_101_95_101_110_116_114_121_95_49_95_95_91_49_93_95_48_2_p_0(HeadVar__1_1, HeadVar__2_2);
    return succeeded;
  }
}

static MR_bool MR_CALL 
analysis__file__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_97_110_97_108_121_115_105_115_95_95_102_105_108_101_95_95_119_114_105_116_101_95_101_110_116_114_121_95_49_95_95_91_49_93_95_48_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) Cast_HeadVar1_3, (MR_Word) Cast_HeadVar2_4);
    return succeeded;
  }
}

static void MR_CALL 
analysis__file____Compare____parse_entry_1_0(
  MR_Word TypeInfo_for_T_6,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  analysis__file__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_97_110_97_108_121_115_105_115_95_95_102_105_108_101_95_95_112_97_114_115_101_95_101_110_116_114_121_95_49_95_95_91_49_93_95_48_3_p_0(HeadVar__1_1, HeadVar__2_2, HeadVar__3_3);
}

static void MR_CALL 
analysis__file__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_97_110_97_108_121_115_105_115_95_95_102_105_108_101_95_95_112_97_114_115_101_95_101_110_116_114_121_95_49_95_95_91_49_93_95_48_3_p_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__private_builtin__builtin_compare_pred_3_p_0(HeadVar__1_1, (MR_Word) Cast_HeadVar1_4, (MR_Word) Cast_HeadVar2_5);
  }
}

static MR_bool MR_CALL 
analysis__file____Unify____parse_entry_1_0(
  MR_Word TypeInfo_for_T_5,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;

    succeeded = analysis__file__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_97_110_97_108_121_115_105_115_95_95_102_105_108_101_95_95_112_97_114_115_101_95_101_110_116_114_121_95_49_95_95_91_49_93_95_48_2_p_0(HeadVar__1_1, HeadVar__2_2);
    return succeeded;
  }
}

static MR_bool MR_CALL 
analysis__file__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_97_110_97_108_121_115_105_115_95_95_102_105_108_101_95_95_112_97_114_115_101_95_101_110_116_114_121_95_49_95_95_91_49_93_95_48_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) Cast_HeadVar1_3, (MR_Word) Cast_HeadVar2_4);
    return succeeded;
  }
}

static void MR_CALL 
analysis__file____Compare____invalid_analysis_file_0_0(
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
      MR_String ArgX1_4 = (MR_String) HeadVar__2_2;
      MR_String ArgY1_5 = (MR_String) HeadVar__3_3;

      mercury__private_builtin__builtin_compare_string_3_p_0(HeadVar__1_1, ArgX1_4, ArgY1_5);
    }
  }
}

static MR_bool MR_CALL 
analysis__file____Unify____invalid_analysis_file_0_0(
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
      MR_String ArgX1_3 = (MR_String) HeadVar__1_1;
      MR_String ArgY1_4 = (MR_String) HeadVar__2_2;

      succeeded = (strcmp(ArgX1_3, ArgY1_4) == 0);
    }
    return succeeded;
  }
}

static void MR_CALL 
analysis__file____Compare____dummy_answer_0_0(
  MR_Word * HeadVar__1_1)
{
  analysis__file__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_97_110_97_108_121_115_105_115_95_95_102_105_108_101_95_95_100_117_109_109_121_95_97_110_115_119_101_114_95_48_95_95_91_50_44_32_51_93_95_48_3_p_0(HeadVar__1_1);
}

static void MR_CALL 
analysis__file__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_97_110_97_108_121_115_105_115_95_95_102_105_108_101_95_95_100_117_109_109_121_95_97_110_115_119_101_114_95_48_95_95_91_50_44_32_51_93_95_48_3_p_0(
  MR_Word * HeadVar__1_1)
{
  *HeadVar__1_1 = (MR_Integer) 0;
}

static MR_bool MR_CALL 
analysis__file____Unify____dummy_answer_0_0(void)
{
  {
    MR_bool succeeded;

    succeeded = analysis__file__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_97_110_97_108_121_115_105_115_95_95_102_105_108_101_95_95_100_117_109_109_121_95_97_110_115_119_101_114_95_48_95_95_91_49_44_32_50_93_95_48_2_p_0();
    return succeeded;
  }
}

static MR_bool MR_CALL 
analysis__file__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_97_110_97_108_121_115_105_115_95_95_102_105_108_101_95_95_100_117_109_109_121_95_97_110_115_119_101_114_95_48_95_95_91_49_44_32_50_93_95_48_2_p_0(void)
{
  {
    return MR_TRUE;
  }
}

static void MR_CALL 
analysis__file__unpickle_analysis_result_7_p_0(
  MR_Word TypeClassInfo_for_compiler_35,
  MR_Box Compiler_8,
  MR_Word Unpicklers_9,
  MR_Box Handle_10,
  MR_Word _Type_11,
  MR_Word * Univ_12,
  MR_Integer STATE_VARIABLE_State_0_22,
  MR_Integer * STATE_VARIABLE_State_23)
{
  analysis__file__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_112_105_99_107_108_101_95_97_110_97_108_121_115_105_115_95_114_101_115_117_108_116_95_95_91_53_93_95_48_7_p_0(TypeClassInfo_for_compiler_35, Compiler_8, Unpicklers_9, Handle_10, Univ_12, STATE_VARIABLE_State_0_22, STATE_VARIABLE_State_23);
}

static void MR_CALL 
analysis__file__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_112_105_99_107_108_101_95_97_110_97_108_121_115_105_115_95_114_101_115_117_108_116_95_95_91_53_93_95_48_7_p_0(
  MR_Word TypeClassInfo_for_compiler_35,
  MR_Box Compiler_8,
  MR_Word Unpicklers_9,
  MR_Box Handle_10,
  MR_Word * Univ_12,
  MR_Integer STATE_VARIABLE_State_0_22,
  MR_Integer * STATE_VARIABLE_State_23)
{
  {
    MR_bool succeeded;
    MR_String AnalysisName_14;
    MR_Integer STATE_VARIABLE_State_25_25;
    MR_Box conv0_AnalysisName_14;
    MR_Word TypeClassInfo_for_analysis_37;
    MR_Word Analysis_15;
    MR_bool MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box *);
    MR_Box conv2_Analysis_15;

    libs__pickle__unpickle_5_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, Unpicklers_9, Handle_10, &conv0_AnalysisName_14, STATE_VARIABLE_State_0_22, &STATE_VARIABLE_State_25_25);
    AnalysisName_14 = ((MR_String) conv0_AnalysisName_14);
    func_1 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_compiler_35, (MR_Integer) 0)), (MR_Integer) 6)));
    succeeded = func_1(((MR_Box) TypeClassInfo_for_compiler_35), Compiler_8, ((MR_Box) (AnalysisName_14)), &conv2_Analysis_15);
    if (succeeded)
    {
      Analysis_15 = ((MR_Word) conv2_Analysis_15);
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      TypeClassInfo_for_analysis_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), Analysis_15, (MR_Integer) 0)));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_Word TypeInfo_39_39;
      MR_Word TypeInfo_41_41;
      MR_Box Call_17;
      MR_Box Answer_19;
      MR_Word Status_20;
      MR_Word Result_21;
      MR_Integer STATE_VARIABLE_State_29_29;
      MR_Integer STATE_VARIABLE_State_31_31;
      MR_Box conv3_Status_20;

      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_analysis_37, (MR_Integer) 4, &TypeInfo_39_39);
      libs__pickle__unpickle_5_p_0(TypeInfo_39_39, Unpicklers_9, Handle_10, &Call_17, STATE_VARIABLE_State_25_25, &STATE_VARIABLE_State_29_29);
      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_analysis_37, (MR_Integer) 5, &TypeInfo_41_41);
      libs__pickle__unpickle_5_p_0(TypeInfo_41_41, Unpicklers_9, Handle_10, &Answer_19, STATE_VARIABLE_State_29_29, &STATE_VARIABLE_State_31_31);
      libs__pickle__unpickle_5_p_0((MR_Word) &analysis__analysis__type_ctor_info_analysis_status_0, Unpicklers_9, Handle_10, &conv3_Status_20, STATE_VARIABLE_State_31_31, STATE_VARIABLE_State_23);
      Status_20 = ((MR_Word) conv3_Status_20);
      {
        Result_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Result_21, 0) = ((MR_Box) (TypeClassInfo_for_analysis_37));
        MR_hl_field(MR_mktag(0), Result_21, 1) = Call_17;
        MR_hl_field(MR_mktag(0), Result_21, 2) = Answer_19;
        MR_hl_field(MR_mktag(0), Result_21, 3) = ((MR_Box) (Status_20));
      }
      mercury__univ__type_to_univ_2_p_1((MR_Word) &analysis__analysis__type_ctor_info_some_analysis_result_0, ((MR_Box) (Result_21)), Univ_12);
    }
    else
    {
      {
        mercury__require__unexpected_3_p_0((MR_String) "analysis.file", (MR_String) "predicate \140analysis.file.unpickle_analysis_result\'/7", AnalysisName_14);
        return;
      }
    }
  }
}

static void MR_CALL 
analysis__file__pickle_analysis_result_4_p_0(
  MR_Word Pickles_5,
  MR_Word Univ_6)
{
  {
    MR_Word TypeClassInfo_for_analysis_19;
    MR_Word TypeInfo_23_23;
    MR_Word TypeInfo_25_25;
    MR_Box Call_8;
    MR_Box Answer_9;
    MR_Word Status_10;
    MR_String Name_11;
    MR_Word Var_14;
    MR_Box conv0_Var_14;
    MR_Box Var_27;
    MR_Box Var_28;
    MR_Box MR_CALL (* func_1)(MR_Box);
    MR_Box conv2_Name_11;

    mercury__univ__det_univ_to_type_2_p_0((MR_Word) &analysis__analysis__type_ctor_info_some_analysis_result_0, Univ_6, &conv0_Var_14);
    Var_14 = ((MR_Word) conv0_Var_14);
    TypeClassInfo_for_analysis_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_14, (MR_Integer) 0)));
    Call_8 = (MR_hl_field(MR_mktag(0), Var_14, (MR_Integer) 1));
    Answer_9 = (MR_hl_field(MR_mktag(0), Var_14, (MR_Integer) 2));
    Status_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_14, (MR_Integer) 3)));
    func_1 = ((MR_Box MR_CALL (*)(MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_analysis_19, (MR_Integer) 0)), (MR_Integer) 5)));
    conv2_Name_11 = func_1(((MR_Box) TypeClassInfo_for_analysis_19));
    Name_11 = ((MR_String) conv2_Name_11);
    libs__pickle__pickle_4_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, Pickles_5, ((MR_Box) (Name_11)));
    mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_analysis_19, (MR_Integer) 4, &TypeInfo_23_23);
    libs__pickle__pickle_4_p_0(TypeInfo_23_23, Pickles_5, Call_8);
    mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_analysis_19, (MR_Integer) 5, &TypeInfo_25_25);
    libs__pickle__pickle_4_p_0(TypeInfo_25_25, Pickles_5, Answer_9);
    libs__pickle__pickle_4_p_0((MR_Word) &analysis__analysis__type_ctor_info_analysis_status_0, Pickles_5, ((MR_Box) (Status_10)));
  }
}

static MR_bool MR_CALL 
analysis__file__dir_sep_1_p_0(
  MR_Char Char_2)
{
  {
    MR_bool succeeded;

    succeeded = mercury__dir__is_directory_separator_1_p_0(Char_2);
    return succeeded;
  }
}

static void MR_CALL 
analysis__file__write_analysis_file_4_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    analysis__file__IntroducedFrom__pred__write_analysis_file_4__895__1_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_String) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6))), wrapper_arg_1);
  }
}

static void MR_CALL 
analysis__file__write_analysis_file_4_6_p_0(
  MR_Word TypeInfo_for_T_27,
  MR_Word WriteEntry_7,
  MR_String AnalysisName_8,
  MR_Word FuncId_9,
  MR_Word FuncResultList_10)
{
  {
    MR_Word FuncResultListSorted_12;
    MR_Word Var_16;
    MR_Box conv0_STATE_VARIABLE_IO_15;

    mercury__list__sort_2_p_0(TypeInfo_for_T_27, FuncResultList_10, &FuncResultListSorted_12);
    {
      Var_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_16, 0) = ((MR_Box) (&analysis__file_scalar_common_10[4]));
      MR_hl_field(MR_mktag(0), Var_16, 1) = ((MR_Box) (analysis__file__write_analysis_file_4_6_p_0_1));
      MR_hl_field(MR_mktag(0), Var_16, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
      MR_hl_field(MR_mktag(0), Var_16, 3) = ((MR_Box) (TypeInfo_for_T_27));
      MR_hl_field(MR_mktag(0), Var_16, 4) = ((MR_Box) (WriteEntry_7));
      MR_hl_field(MR_mktag(0), Var_16, 5) = ((MR_Box) (AnalysisName_8));
      MR_hl_field(MR_mktag(0), Var_16, 6) = ((MR_Box) (FuncId_9));
    }
    mercury__list__foldl_4_p_2(TypeInfo_for_T_27, (MR_Word) &mercury__io__io__type_ctor_info_state_0, Var_16, FuncResultListSorted_12, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_15);
  }
}

static void MR_CALL 
analysis__file__write_analysis_file_3_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;

    analysis__file__write_analysis_file_4_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_String) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5))), ((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
  }
}

static void MR_CALL 
analysis__file__write_analysis_file_3_5_p_0(
  MR_Word TypeInfo_for_T_14,
  MR_Word WriteEntry_6,
  MR_String AnalysisName_7,
  MR_Word FuncResults_8)
{
  {
    MR_Word TypeInfo_21_21;
    MR_Word Var_12;
    MR_Box conv0_STATE_VARIABLE_IO_11;

    {
      Var_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_12, 0) = ((MR_Box) (&analysis__file_scalar_common_10[3]));
      MR_hl_field(MR_mktag(0), Var_12, 1) = ((MR_Box) (analysis__file__write_analysis_file_3_5_p_0_1));
      MR_hl_field(MR_mktag(0), Var_12, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(0), Var_12, 3) = ((MR_Box) (TypeInfo_for_T_14));
      MR_hl_field(MR_mktag(0), Var_12, 4) = ((MR_Box) (WriteEntry_6));
      MR_hl_field(MR_mktag(0), Var_12, 5) = ((MR_Box) (AnalysisName_7));
    }
    {
      TypeInfo_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_21_21, 0) = ((MR_Box) (&mercury__list__list__type_ctor_info_list_1));
      MR_hl_field(MR_mktag(0), TypeInfo_21_21, 1) = ((MR_Box) (TypeInfo_for_T_14));
    }
    mercury__map__foldl_4_p_2((MR_Word) &analysis__analysis__type_ctor_info_func_id_0, TypeInfo_21_21, (MR_Word) &mercury__io__io__type_ctor_info_state_0, Var_12, FuncResults_8, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_11);
  }
}

static void MR_CALL 
analysis__file__write_imdg_arc_6_p_0(
  MR_Word TypeClassInfo_for_compiler_47,
  MR_Box Compiler_7,
  MR_String AnalysisName_8,
  MR_Word FuncId_9,
  MR_Word Arc_10)
{
  {
    MR_bool succeeded;
    MR_Word TypeClassInfo_for_call_pattern_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), Arc_10, (MR_Integer) 0)));
    MR_Word TypeCtorInfo_50_50;
    MR_Word TypeClassInfo_for_to_term_51;
    MR_Box Call_12 = (MR_hl_field(MR_mktag(0), Arc_10, (MR_Integer) 1));
    MR_Word DependentModule_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), Arc_10, (MR_Integer) 2)));
    MR_Integer VersionNumber_18;
    MR_Word Var_42;
    MR_Word Var_43;
    MR_Word PredOrFunc_60;
    MR_String Name_61;
    MR_Integer Arity_62;
    MR_Integer ProcId_63;
    MR_Integer Var_75;
    MR_Word TypeClassInfo_for_analysis_49;
    MR_Word Analysis_14;
    MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_compiler_47, (MR_Integer) 0)), (MR_Integer) 6)));
    MR_Box conv1_Analysis_14;
    MR_Box MR_CALL (* func_4)(MR_Box, MR_Box);
    MR_Box conv5_Var_43;

    succeeded = func_0(((MR_Box) TypeClassInfo_for_compiler_47), Compiler_7, ((MR_Box) (AnalysisName_8)), &conv1_Analysis_14);
    if (succeeded)
    {
      Analysis_14 = ((MR_Word) conv1_Analysis_14);
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      TypeClassInfo_for_analysis_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), Analysis_14, (MR_Integer) 0)));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_Box Var_25;
      MR_Box Var_26;
      MR_Box MR_CALL (* func_2)(MR_Box) = ((MR_Box MR_CALL (*)(MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_analysis_49, (MR_Integer) 0)), (MR_Integer) 6)));
      MR_Box conv3_VersionNumber_18;

      conv3_VersionNumber_18 = func_2(((MR_Box) TypeClassInfo_for_analysis_49));
      VersionNumber_18 = ((MR_Integer) conv3_VersionNumber_18);
    }
    else
    {
      {
        mercury__require__unexpected_3_p_0((MR_String) "analysis.file", (MR_String) "predicate \140analysis.file.write_imdg_arc\'/6", (MR_String) "unknown analysis type");
        return;
      }
    }
    parse_tree__prog_out__write_quoted_sym_name_3_p_0(DependentModule_13);
    mercury__io__write_string_3_p_0((MR_String) " -> ");
    mercury__io__write_string_3_p_0(AnalysisName_8);
    mercury__io__write_char_3_p_0((MR_Char) 40);
    mercury__io__write_int_3_p_0(VersionNumber_18);
    mercury__io__write_string_3_p_0((MR_String) ", ");
    PredOrFunc_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), FuncId_9, (MR_Integer) 0)));
    Name_61 = ((MR_String) (MR_hl_field(MR_mktag(0), FuncId_9, (MR_Integer) 1)));
    Arity_62 = ((MR_Integer) (MR_hl_field(MR_mktag(0), FuncId_9, (MR_Integer) 2)));
    ProcId_63 = ((MR_Integer) (MR_hl_field(MR_mktag(0), FuncId_9, (MR_Integer) 3)));
    switch (PredOrFunc_60) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          mercury__io__write_string_3_p_0((MR_String) "f(");
        }
        break;
      case (MR_Integer) 0:
        {
          mercury__io__write_string_3_p_0((MR_String) "p(");
        }
        break;
    }
    mercury__term_io__quote_atom_3_p_0(Name_61);
    mercury__io__write_string_3_p_0((MR_String) ", ");
    mercury__io__write_int_3_p_0(Arity_62);
    mercury__io__write_string_3_p_0((MR_String) ", ");
    Var_75 = hlds__hlds_pred__proc_id_to_int_1_f_0(ProcId_63);
    mercury__io__write_int_3_p_0(Var_75);
    mercury__io__write_char_3_p_0((MR_Char) 41);
    mercury__io__write_string_3_p_0((MR_String) ", ");
    TypeCtorInfo_50_50 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
    Var_42 = mercury__varset__init_0_f_0(TypeCtorInfo_50_50);
    mercury__private_builtin__superclass_from_typeclass_info_3_p_0(TypeClassInfo_for_call_pattern_48, (MR_Integer) 2, &TypeClassInfo_for_to_term_51);
    func_4 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_to_term_51, (MR_Integer) 0)), (MR_Integer) 5)));
    conv5_Var_43 = func_4(((MR_Box) TypeClassInfo_for_to_term_51), Call_12);
    Var_43 = ((MR_Word) conv5_Var_43);
    mercury__term_io__write_term_4_p_0(TypeCtorInfo_50_50, Var_42, Var_43);
    mercury__io__write_string_3_p_0((MR_String) ").\n");
  }
}

static void MR_CALL 
analysis__file__write_request_entry_6_p_0(
  MR_Word TypeClassInfo_for_compiler_47,
  MR_Box Compiler_7,
  MR_String AnalysisName_8,
  MR_Word FuncId_9,
  MR_Word Request_10)
{
  {
    MR_bool succeeded;
    MR_Word TypeClassInfo_for_call_pattern_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), Request_10, (MR_Integer) 0)));
    MR_Word TypeCtorInfo_50_50;
    MR_Word TypeClassInfo_for_to_term_51;
    MR_Box Call_12 = (MR_hl_field(MR_mktag(0), Request_10, (MR_Integer) 1));
    MR_Word CallerModule_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), Request_10, (MR_Integer) 2)));
    MR_Integer VersionNumber_18;
    MR_Word Var_42;
    MR_Word Var_43;
    MR_Word PredOrFunc_60;
    MR_String Name_61;
    MR_Integer Arity_62;
    MR_Integer ProcId_63;
    MR_Integer Var_75;
    MR_Word TypeClassInfo_for_analysis_49;
    MR_Word Analysis_14;
    MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_compiler_47, (MR_Integer) 0)), (MR_Integer) 6)));
    MR_Box conv1_Analysis_14;
    MR_Box MR_CALL (* func_4)(MR_Box, MR_Box);
    MR_Box conv5_Var_43;

    succeeded = func_0(((MR_Box) TypeClassInfo_for_compiler_47), Compiler_7, ((MR_Box) (AnalysisName_8)), &conv1_Analysis_14);
    if (succeeded)
    {
      Analysis_14 = ((MR_Word) conv1_Analysis_14);
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      TypeClassInfo_for_analysis_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), Analysis_14, (MR_Integer) 0)));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_Box Var_25;
      MR_Box Var_26;
      MR_Box MR_CALL (* func_2)(MR_Box) = ((MR_Box MR_CALL (*)(MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_analysis_49, (MR_Integer) 0)), (MR_Integer) 6)));
      MR_Box conv3_VersionNumber_18;

      conv3_VersionNumber_18 = func_2(((MR_Box) TypeClassInfo_for_analysis_49));
      VersionNumber_18 = ((MR_Integer) conv3_VersionNumber_18);
    }
    else
    {
      {
        mercury__require__unexpected_3_p_0((MR_String) "analysis.file", (MR_String) "predicate \140analysis.file.write_request_entry\'/6", (MR_String) "unknown analysis type");
        return;
      }
    }
    parse_tree__prog_out__write_quoted_sym_name_3_p_0(CallerModule_13);
    mercury__io__write_string_3_p_0((MR_String) " -> ");
    mercury__io__write_string_3_p_0(AnalysisName_8);
    mercury__io__write_string_3_p_0((MR_String) "(");
    mercury__io__write_int_3_p_0(VersionNumber_18);
    mercury__io__write_string_3_p_0((MR_String) ", ");
    PredOrFunc_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), FuncId_9, (MR_Integer) 0)));
    Name_61 = ((MR_String) (MR_hl_field(MR_mktag(0), FuncId_9, (MR_Integer) 1)));
    Arity_62 = ((MR_Integer) (MR_hl_field(MR_mktag(0), FuncId_9, (MR_Integer) 2)));
    ProcId_63 = ((MR_Integer) (MR_hl_field(MR_mktag(0), FuncId_9, (MR_Integer) 3)));
    switch (PredOrFunc_60) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          mercury__io__write_string_3_p_0((MR_String) "f(");
        }
        break;
      case (MR_Integer) 0:
        {
          mercury__io__write_string_3_p_0((MR_String) "p(");
        }
        break;
    }
    mercury__term_io__quote_atom_3_p_0(Name_61);
    mercury__io__write_string_3_p_0((MR_String) ", ");
    mercury__io__write_int_3_p_0(Arity_62);
    mercury__io__write_string_3_p_0((MR_String) ", ");
    Var_75 = hlds__hlds_pred__proc_id_to_int_1_f_0(ProcId_63);
    mercury__io__write_int_3_p_0(Var_75);
    mercury__io__write_char_3_p_0((MR_Char) 41);
    mercury__io__write_string_3_p_0((MR_String) ", ");
    TypeCtorInfo_50_50 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
    Var_42 = mercury__varset__init_0_f_0(TypeCtorInfo_50_50);
    mercury__private_builtin__superclass_from_typeclass_info_3_p_0(TypeClassInfo_for_call_pattern_48, (MR_Integer) 2, &TypeClassInfo_for_to_term_51);
    func_4 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_to_term_51, (MR_Integer) 0)), (MR_Integer) 5)));
    conv5_Var_43 = func_4(((MR_Box) TypeClassInfo_for_to_term_51), Call_12);
    Var_43 = ((MR_Word) conv5_Var_43);
    mercury__term_io__write_term_4_p_0(TypeCtorInfo_50_50, Var_42, Var_43);
    mercury__io__write_string_3_p_0((MR_String) ").\n");
  }
}

static void MR_CALL 
analysis__file__write_result_entry_5_p_0(
  MR_String AnalysisName_6,
  MR_Word FuncId_7,
  MR_Word Result_8)
{
  {
    MR_Word TypeClassInfo_for_analysis_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), Result_8, (MR_Integer) 0)));
    MR_Word TypeCtorInfo_40_40;
    MR_Word TypeClassInfo_for_call_pattern_41;
    MR_Word TypeClassInfo_for_to_term_43;
    MR_Word TypeClassInfo_for_answer_pattern_45;
    MR_Word TypeClassInfo_for_to_term_46;
    MR_Box Call_10 = (MR_hl_field(MR_mktag(0), Result_8, (MR_Integer) 1));
    MR_Box Answer_11 = (MR_hl_field(MR_mktag(0), Result_8, (MR_Integer) 2));
    MR_Word Status_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), Result_8, (MR_Integer) 3)));
    MR_Integer VersionNumber_13;
    MR_String StatusString_14;
    MR_Word Var_26;
    MR_Word Var_27;
    MR_Word Var_31;
    MR_Word Var_32;
    MR_Word PredOrFunc_51;
    MR_String Name_52;
    MR_Integer Arity_53;
    MR_Integer ProcId_54;
    MR_Integer Var_66;
    MR_Box Var_47;
    MR_Box Var_48;
    MR_Box MR_CALL (* func_0)(MR_Box) = ((MR_Box MR_CALL (*)(MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_analysis_39, (MR_Integer) 0)), (MR_Integer) 6)));
    MR_Box conv1_VersionNumber_13;
    MR_Box MR_CALL (* func_2)(MR_Box, MR_Box);
    MR_Box conv3_Var_27;
    MR_Box MR_CALL (* func_4)(MR_Box, MR_Box);
    MR_Box conv5_Var_32;

    conv1_VersionNumber_13 = func_0(((MR_Box) TypeClassInfo_for_analysis_39));
    VersionNumber_13 = ((MR_Integer) conv1_VersionNumber_13);
    switch (Status_12) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        StatusString_14 = (MR_String) "invalid";
        break;
      case (MR_Integer) 2:
        StatusString_14 = (MR_String) "optimal";
        break;
      case (MR_Integer) 1:
        StatusString_14 = (MR_String) "suboptimal";
        break;
    }
    mercury__io__write_string_3_p_0(AnalysisName_6);
    mercury__io__write_char_3_p_0((MR_Char) 40);
    mercury__io__write_int_3_p_0(VersionNumber_13);
    mercury__io__write_string_3_p_0((MR_String) ", ");
    PredOrFunc_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), FuncId_7, (MR_Integer) 0)));
    Name_52 = ((MR_String) (MR_hl_field(MR_mktag(0), FuncId_7, (MR_Integer) 1)));
    Arity_53 = ((MR_Integer) (MR_hl_field(MR_mktag(0), FuncId_7, (MR_Integer) 2)));
    ProcId_54 = ((MR_Integer) (MR_hl_field(MR_mktag(0), FuncId_7, (MR_Integer) 3)));
    switch (PredOrFunc_51) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          mercury__io__write_string_3_p_0((MR_String) "f(");
        }
        break;
      case (MR_Integer) 0:
        {
          mercury__io__write_string_3_p_0((MR_String) "p(");
        }
        break;
    }
    mercury__term_io__quote_atom_3_p_0(Name_52);
    mercury__io__write_string_3_p_0((MR_String) ", ");
    mercury__io__write_int_3_p_0(Arity_53);
    mercury__io__write_string_3_p_0((MR_String) ", ");
    Var_66 = hlds__hlds_pred__proc_id_to_int_1_f_0(ProcId_54);
    mercury__io__write_int_3_p_0(Var_66);
    mercury__io__write_char_3_p_0((MR_Char) 41);
    mercury__io__write_string_3_p_0((MR_String) ", ");
    TypeCtorInfo_40_40 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
    Var_26 = mercury__varset__init_0_f_0(TypeCtorInfo_40_40);
    mercury__private_builtin__superclass_from_typeclass_info_3_p_0(TypeClassInfo_for_analysis_39, (MR_Integer) 1, &TypeClassInfo_for_call_pattern_41);
    mercury__private_builtin__superclass_from_typeclass_info_3_p_0(TypeClassInfo_for_call_pattern_41, (MR_Integer) 2, &TypeClassInfo_for_to_term_43);
    func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_to_term_43, (MR_Integer) 0)), (MR_Integer) 5)));
    conv3_Var_27 = func_2(((MR_Box) TypeClassInfo_for_to_term_43), Call_10);
    Var_27 = ((MR_Word) conv3_Var_27);
    mercury__term_io__write_term_4_p_0(TypeCtorInfo_40_40, Var_26, Var_27);
    mercury__io__write_string_3_p_0((MR_String) ", ");
    Var_31 = mercury__varset__init_0_f_0(TypeCtorInfo_40_40);
    mercury__private_builtin__superclass_from_typeclass_info_3_p_0(TypeClassInfo_for_analysis_39, (MR_Integer) 2, &TypeClassInfo_for_answer_pattern_45);
    mercury__private_builtin__superclass_from_typeclass_info_3_p_0(TypeClassInfo_for_answer_pattern_45, (MR_Integer) 2, &TypeClassInfo_for_to_term_46);
    func_4 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_to_term_46, (MR_Integer) 0)), (MR_Integer) 5)));
    conv5_Var_32 = func_4(((MR_Box) TypeClassInfo_for_to_term_46), Answer_11);
    Var_32 = ((MR_Word) conv5_Var_32);
    mercury__term_io__write_term_4_p_0(TypeCtorInfo_40_40, Var_31, Var_32);
    mercury__io__write_string_3_p_0((MR_String) ", ");
    mercury__io__write_string_3_p_0(StatusString_14);
    mercury__io__write_string_3_p_0((MR_String) ").\n");
  }
}

static void MR_CALL 
analysis__file__parse_imdg_arc_4_p_0(
  MR_Word TypeClassInfo_for_compiler_56,
  MR_Box Compiler_5,
  MR_Word Term_6,
  MR_Word STATE_VARIABLE_Arcs_0_34,
  MR_Word * STATE_VARIABLE_Arcs_35)
{
  {
    MR_bool succeeded = ((MR_tag((MR_Word) Term_6)) == (MR_mktag((MR_Integer) 0)));
    MR_Word TypeClassInfo_for_analysis_57;
    MR_String AnalysisName_11;
    MR_Word VersionNumberTerm_12;
    MR_Word DependentModule_21;
    MR_Word FuncId_22;
    MR_Box CallPattern_23;
    MR_Word TypeClassInfo_for_call_pattern_58;
    MR_Word TypeClassInfo_for_to_term_60;
    MR_Word TypeCtorInfo_5_80;
    MR_Word DependentModuleTerm_8;
    MR_Word ResultTerm_9;
    MR_Word FuncIdTerm_13;
    MR_Word CallPatternTerm_14;
    MR_Word Analysis_16;
    MR_Word Var_36;
    MR_String Var_37;
    MR_Word Var_38;
    MR_Word Var_39;
    MR_Word Var_40;
    MR_Word Var_41;
    MR_Word Var_42;
    MR_Word Var_43;
    MR_Word Var_44;
    MR_Word Var_45;
    MR_Integer PolyConst1_59;
    MR_Integer PolyConst2_61;
    MR_Word Var_10;
    MR_Word Var_15;
    MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *);
    MR_Box conv1_Analysis_16;
    MR_bool MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box *);

    if (succeeded)
    {
      Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), Term_6, (MR_Integer) 0)));
      Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), Term_6, (MR_Integer) 1)));
      Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), Term_6, (MR_Integer) 2)));
      succeeded = ((MR_tag((MR_Word) Var_36)) == (MR_mktag((MR_Integer) 0)));
      if (succeeded)
      {
        Var_37 = ((MR_String) (MR_hl_field(MR_mktag(0), Var_36, (MR_Integer) 0)));
        succeeded = (strcmp(Var_37, (MR_String) "->") == 0);
        if (succeeded)
        {
          succeeded = ((MR_tag((MR_Word) Var_38)) == (MR_mktag((MR_Integer) 1)));
          if (succeeded)
          {
            DependentModuleTerm_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_38, (MR_Integer) 0)));
            Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_38, (MR_Integer) 1)));
            succeeded = ((MR_tag((MR_Word) Var_39)) == (MR_mktag((MR_Integer) 1)));
            if (succeeded)
            {
              ResultTerm_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_39, (MR_Integer) 0)));
              Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_39, (MR_Integer) 1)));
              succeeded = (Var_40 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              if (succeeded)
              {
                succeeded = ((MR_tag((MR_Word) ResultTerm_9)) == (MR_mktag((MR_Integer) 0)));
                if (succeeded)
                {
                  Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), ResultTerm_9, (MR_Integer) 0)));
                  Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), ResultTerm_9, (MR_Integer) 1)));
                  Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ResultTerm_9, (MR_Integer) 2)));
                  succeeded = ((MR_tag((MR_Word) Var_41)) == (MR_mktag((MR_Integer) 0)));
                  if (succeeded)
                  {
                    AnalysisName_11 = ((MR_String) (MR_hl_field(MR_mktag(0), Var_41, (MR_Integer) 0)));
                    succeeded = ((MR_tag((MR_Word) Var_42)) == (MR_mktag((MR_Integer) 1)));
                    if (succeeded)
                    {
                      VersionNumberTerm_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_42, (MR_Integer) 0)));
                      Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_42, (MR_Integer) 1)));
                      succeeded = ((MR_tag((MR_Word) Var_43)) == (MR_mktag((MR_Integer) 1)));
                      if (succeeded)
                      {
                        FuncIdTerm_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_43, (MR_Integer) 0)));
                        Var_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_43, (MR_Integer) 1)));
                        succeeded = ((MR_tag((MR_Word) Var_44)) == (MR_mktag((MR_Integer) 1)));
                        if (succeeded)
                        {
                          CallPatternTerm_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_44, (MR_Integer) 0)));
                          Var_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_44, (MR_Integer) 1)));
                          succeeded = (Var_45 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                          if (succeeded)
                          {
                            func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_compiler_56, (MR_Integer) 0)), (MR_Integer) 6)));
                            succeeded = func_0(((MR_Box) TypeClassInfo_for_compiler_56), Compiler_5, ((MR_Box) (AnalysisName_11)), &conv1_Analysis_16);
                            if (succeeded)
                            {
                              Analysis_16 = ((MR_Word) conv1_Analysis_16);
                              succeeded = MR_TRUE;
                            }
                            if (succeeded)
                            {
                              TypeClassInfo_for_analysis_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), Analysis_16, (MR_Integer) 0)));
                              TypeCtorInfo_5_80 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
                              succeeded = parse_tree__parse_sym_name__try_parse_sym_name_and_no_args_2_p_0(TypeCtorInfo_5_80, DependentModuleTerm_8, &DependentModule_21);
                              if (succeeded)
                              {
                                succeeded = analysis__file__parse_func_id_2_p_0(FuncIdTerm_13, &FuncId_22);
                                if (succeeded)
                                {
                                  PolyConst1_59 = (MR_Integer) 1;
                                  mercury__private_builtin__superclass_from_typeclass_info_3_p_0(TypeClassInfo_for_analysis_57, PolyConst1_59, &TypeClassInfo_for_call_pattern_58);
                                  PolyConst2_61 = (MR_Integer) 2;
                                  mercury__private_builtin__superclass_from_typeclass_info_3_p_0(TypeClassInfo_for_call_pattern_58, PolyConst2_61, &TypeClassInfo_for_to_term_60);
                                  func_2 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_to_term_60, (MR_Integer) 0)), (MR_Integer) 6)));
                                  succeeded = func_2(((MR_Box) TypeClassInfo_for_to_term_60), ((MR_Box) (CallPatternTerm_14)), &CallPattern_23);
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    if (succeeded)
    {
      MR_Integer VersionNumber_24;
      MR_Integer Var_77;
      MR_Box Var_49;
      MR_Box Var_50;
      MR_Box MR_CALL (* func_3)(MR_Box) = ((MR_Box MR_CALL (*)(MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_analysis_57, (MR_Integer) 0)), (MR_Integer) 6)));
      MR_Box conv4_VersionNumber_24;

      conv4_VersionNumber_24 = func_3(((MR_Box) TypeClassInfo_for_analysis_57));
      VersionNumber_24 = ((MR_Integer) conv4_VersionNumber_24);
      succeeded = mercury__term__decimal_term_to_int_2_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, VersionNumberTerm_12, &Var_77);
      if (succeeded)
        succeeded = (VersionNumber_24 == Var_77);
      if (succeeded)
      {
        MR_Word TypeClassInfo_for_call_pattern_63;
        MR_Word Arc_27;
        MR_Word AnalysisArcs1_29;
        MR_Word FuncArcs_31;
        MR_Word AnalysisArcs_32;
        MR_Word AnalysisArcs0_28;
        MR_Box conv5_AnalysisArcs0_28;
        MR_Word FuncArcs0_30;
        MR_Box conv6_FuncArcs0_30;

        mercury__private_builtin__superclass_from_typeclass_info_3_p_0(TypeClassInfo_for_analysis_57, (MR_Integer) 1, &TypeClassInfo_for_call_pattern_63);
        {
          Arc_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Arc_27, 0) = ((MR_Box) (TypeClassInfo_for_call_pattern_63));
          MR_hl_field(MR_mktag(0), Arc_27, 1) = CallPattern_23;
          MR_hl_field(MR_mktag(0), Arc_27, 2) = ((MR_Box) (DependentModule_21));
        }
        succeeded = mercury__map__search_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &analysis__file_scalar_common_2[4], STATE_VARIABLE_Arcs_0_34, ((MR_Box) (AnalysisName_11)), &conv5_AnalysisArcs0_28);
        if (succeeded)
        {
          AnalysisArcs0_28 = ((MR_Word) conv5_AnalysisArcs0_28);
          succeeded = MR_TRUE;
        }
        if (succeeded)
          AnalysisArcs1_29 = AnalysisArcs0_28;
        else
        {
          AnalysisArcs1_29 = mercury__map__init_0_f_0((MR_Word) &analysis__analysis__type_ctor_info_func_id_0, (MR_Word) &analysis__file_scalar_common_1[2]);
        }
        succeeded = mercury__map__search_3_p_0((MR_Word) &analysis__analysis__type_ctor_info_func_id_0, (MR_Word) &analysis__file_scalar_common_1[2], AnalysisArcs1_29, ((MR_Box) (FuncId_22)), &conv6_FuncArcs0_30);
        if (succeeded)
        {
          FuncArcs0_30 = ((MR_Word) conv6_FuncArcs0_30);
          succeeded = MR_TRUE;
        }
        if (succeeded)
          {
            FuncArcs_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), FuncArcs_31, 0) = ((MR_Box) (Arc_27));
            MR_hl_field(MR_mktag(1), FuncArcs_31, 1) = ((MR_Box) (FuncArcs0_30));
          }
        else
        {
          {
            FuncArcs_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), FuncArcs_31, 0) = ((MR_Box) (Arc_27));
            MR_hl_field(MR_mktag(1), FuncArcs_31, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
        }
        mercury__map__set_4_p_0((MR_Word) &analysis__analysis__type_ctor_info_func_id_0, (MR_Word) &analysis__file_scalar_common_1[2], ((MR_Box) (FuncId_22)), ((MR_Box) (FuncArcs_31)), AnalysisArcs1_29, &AnalysisArcs_32);
        mercury__map__set_4_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &analysis__file_scalar_common_2[4], ((MR_Box) (AnalysisName_11)), ((MR_Box) (AnalysisArcs_32)), STATE_VARIABLE_Arcs_0_34, STATE_VARIABLE_Arcs_35);
      }
      else
        *STATE_VARIABLE_Arcs_35 = STATE_VARIABLE_Arcs_0_34;
    }
    else
    {
      MR_String Msg_33;
      MR_String Var_54;
      MR_Word Var_55;

      Var_54 = mercury__string__string_1_f_0((MR_Word) &analysis__file_scalar_common_1[3], ((MR_Box) (Term_6)));
      Msg_33 = mercury__string__f_43_43_2_f_0((MR_String) "failed to parse IMDG arc: ", Var_54);
      Var_55 = (MR_Word) Msg_33;
      {
        mercury__exception__throw_1_p_0((MR_Word) &analysis__file__analysis__file__type_ctor_info_invalid_analysis_file_0, ((MR_Box) (Var_55)));
        return;
      }
    }
  }
}

static void MR_CALL 
analysis__file__parse_request_entry_4_p_0(
  MR_Word TypeClassInfo_for_compiler_56,
  MR_Box Compiler_5,
  MR_Word Term_6,
  MR_Word STATE_VARIABLE_Requests_0_34,
  MR_Word * STATE_VARIABLE_Requests_35)
{
  {
    MR_bool succeeded = ((MR_tag((MR_Word) Term_6)) == (MR_mktag((MR_Integer) 0)));
    MR_Word TypeClassInfo_for_analysis_57;
    MR_String AnalysisName_11;
    MR_Word VersionNumberTerm_12;
    MR_Word CallerModule_21;
    MR_Word FuncId_22;
    MR_Box CallPattern_23;
    MR_Word TypeClassInfo_for_call_pattern_58;
    MR_Word TypeClassInfo_for_to_term_60;
    MR_Word TypeCtorInfo_5_80;
    MR_Word CallerModuleTerm_8;
    MR_Word RHS_9;
    MR_Word FuncIdTerm_13;
    MR_Word CallPatternTerm_14;
    MR_Word Analysis_16;
    MR_Word Var_36;
    MR_String Var_37;
    MR_Word Var_38;
    MR_Word Var_39;
    MR_Word Var_40;
    MR_Word Var_41;
    MR_Word Var_42;
    MR_Word Var_43;
    MR_Word Var_44;
    MR_Word Var_45;
    MR_Integer PolyConst1_59;
    MR_Integer PolyConst2_61;
    MR_Word Var_10;
    MR_Word Var_15;
    MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *);
    MR_Box conv1_Analysis_16;
    MR_bool MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box *);

    if (succeeded)
    {
      Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), Term_6, (MR_Integer) 0)));
      Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), Term_6, (MR_Integer) 1)));
      Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), Term_6, (MR_Integer) 2)));
      succeeded = ((MR_tag((MR_Word) Var_36)) == (MR_mktag((MR_Integer) 0)));
      if (succeeded)
      {
        Var_37 = ((MR_String) (MR_hl_field(MR_mktag(0), Var_36, (MR_Integer) 0)));
        succeeded = (strcmp(Var_37, (MR_String) "->") == 0);
        if (succeeded)
        {
          succeeded = ((MR_tag((MR_Word) Var_38)) == (MR_mktag((MR_Integer) 1)));
          if (succeeded)
          {
            CallerModuleTerm_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_38, (MR_Integer) 0)));
            Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_38, (MR_Integer) 1)));
            succeeded = ((MR_tag((MR_Word) Var_39)) == (MR_mktag((MR_Integer) 1)));
            if (succeeded)
            {
              RHS_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_39, (MR_Integer) 0)));
              Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_39, (MR_Integer) 1)));
              succeeded = (Var_40 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              if (succeeded)
              {
                succeeded = ((MR_tag((MR_Word) RHS_9)) == (MR_mktag((MR_Integer) 0)));
                if (succeeded)
                {
                  Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), RHS_9, (MR_Integer) 0)));
                  Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), RHS_9, (MR_Integer) 1)));
                  Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), RHS_9, (MR_Integer) 2)));
                  succeeded = ((MR_tag((MR_Word) Var_41)) == (MR_mktag((MR_Integer) 0)));
                  if (succeeded)
                  {
                    AnalysisName_11 = ((MR_String) (MR_hl_field(MR_mktag(0), Var_41, (MR_Integer) 0)));
                    succeeded = ((MR_tag((MR_Word) Var_42)) == (MR_mktag((MR_Integer) 1)));
                    if (succeeded)
                    {
                      VersionNumberTerm_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_42, (MR_Integer) 0)));
                      Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_42, (MR_Integer) 1)));
                      succeeded = ((MR_tag((MR_Word) Var_43)) == (MR_mktag((MR_Integer) 1)));
                      if (succeeded)
                      {
                        FuncIdTerm_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_43, (MR_Integer) 0)));
                        Var_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_43, (MR_Integer) 1)));
                        succeeded = ((MR_tag((MR_Word) Var_44)) == (MR_mktag((MR_Integer) 1)));
                        if (succeeded)
                        {
                          CallPatternTerm_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_44, (MR_Integer) 0)));
                          Var_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_44, (MR_Integer) 1)));
                          succeeded = (Var_45 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                          if (succeeded)
                          {
                            func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_compiler_56, (MR_Integer) 0)), (MR_Integer) 6)));
                            succeeded = func_0(((MR_Box) TypeClassInfo_for_compiler_56), Compiler_5, ((MR_Box) (AnalysisName_11)), &conv1_Analysis_16);
                            if (succeeded)
                            {
                              Analysis_16 = ((MR_Word) conv1_Analysis_16);
                              succeeded = MR_TRUE;
                            }
                            if (succeeded)
                            {
                              TypeClassInfo_for_analysis_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), Analysis_16, (MR_Integer) 0)));
                              TypeCtorInfo_5_80 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
                              succeeded = parse_tree__parse_sym_name__try_parse_sym_name_and_no_args_2_p_0(TypeCtorInfo_5_80, CallerModuleTerm_8, &CallerModule_21);
                              if (succeeded)
                              {
                                succeeded = analysis__file__parse_func_id_2_p_0(FuncIdTerm_13, &FuncId_22);
                                if (succeeded)
                                {
                                  PolyConst1_59 = (MR_Integer) 1;
                                  mercury__private_builtin__superclass_from_typeclass_info_3_p_0(TypeClassInfo_for_analysis_57, PolyConst1_59, &TypeClassInfo_for_call_pattern_58);
                                  PolyConst2_61 = (MR_Integer) 2;
                                  mercury__private_builtin__superclass_from_typeclass_info_3_p_0(TypeClassInfo_for_call_pattern_58, PolyConst2_61, &TypeClassInfo_for_to_term_60);
                                  func_2 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_to_term_60, (MR_Integer) 0)), (MR_Integer) 6)));
                                  succeeded = func_2(((MR_Box) TypeClassInfo_for_to_term_60), ((MR_Box) (CallPatternTerm_14)), &CallPattern_23);
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    if (succeeded)
    {
      MR_Integer VersionNumber_24;
      MR_Integer Var_77;
      MR_Box Var_49;
      MR_Box Var_50;
      MR_Box MR_CALL (* func_3)(MR_Box) = ((MR_Box MR_CALL (*)(MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_analysis_57, (MR_Integer) 0)), (MR_Integer) 6)));
      MR_Box conv4_VersionNumber_24;

      conv4_VersionNumber_24 = func_3(((MR_Box) TypeClassInfo_for_analysis_57));
      VersionNumber_24 = ((MR_Integer) conv4_VersionNumber_24);
      succeeded = mercury__term__decimal_term_to_int_2_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, VersionNumberTerm_12, &Var_77);
      if (succeeded)
        succeeded = (VersionNumber_24 == Var_77);
      if (succeeded)
      {
        MR_Word TypeClassInfo_for_call_pattern_63;
        MR_Word Result_27;
        MR_Word AnalysisRequests1_29;
        MR_Word FuncRequests_31;
        MR_Word AnalysisRequests_32;
        MR_Word AnalysisRequests0_28;
        MR_Box conv5_AnalysisRequests0_28;
        MR_Word FuncRequests0_30;
        MR_Box conv6_FuncRequests0_30;

        mercury__private_builtin__superclass_from_typeclass_info_3_p_0(TypeClassInfo_for_analysis_57, (MR_Integer) 1, &TypeClassInfo_for_call_pattern_63);
        {
          Result_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Result_27, 0) = ((MR_Box) (TypeClassInfo_for_call_pattern_63));
          MR_hl_field(MR_mktag(0), Result_27, 1) = CallPattern_23;
          MR_hl_field(MR_mktag(0), Result_27, 2) = ((MR_Box) (CallerModule_21));
        }
        succeeded = mercury__map__search_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &analysis__file_scalar_common_2[2], STATE_VARIABLE_Requests_0_34, ((MR_Box) (AnalysisName_11)), &conv5_AnalysisRequests0_28);
        if (succeeded)
        {
          AnalysisRequests0_28 = ((MR_Word) conv5_AnalysisRequests0_28);
          succeeded = MR_TRUE;
        }
        if (succeeded)
          AnalysisRequests1_29 = AnalysisRequests0_28;
        else
        {
          AnalysisRequests1_29 = mercury__map__init_0_f_0((MR_Word) &analysis__analysis__type_ctor_info_func_id_0, (MR_Word) &analysis__file_scalar_common_1[1]);
        }
        succeeded = mercury__map__search_3_p_0((MR_Word) &analysis__analysis__type_ctor_info_func_id_0, (MR_Word) &analysis__file_scalar_common_1[1], AnalysisRequests1_29, ((MR_Box) (FuncId_22)), &conv6_FuncRequests0_30);
        if (succeeded)
        {
          FuncRequests0_30 = ((MR_Word) conv6_FuncRequests0_30);
          succeeded = MR_TRUE;
        }
        if (succeeded)
          {
            FuncRequests_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), FuncRequests_31, 0) = ((MR_Box) (Result_27));
            MR_hl_field(MR_mktag(1), FuncRequests_31, 1) = ((MR_Box) (FuncRequests0_30));
          }
        else
        {
          {
            FuncRequests_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), FuncRequests_31, 0) = ((MR_Box) (Result_27));
            MR_hl_field(MR_mktag(1), FuncRequests_31, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
        }
        mercury__map__set_4_p_0((MR_Word) &analysis__analysis__type_ctor_info_func_id_0, (MR_Word) &analysis__file_scalar_common_1[1], ((MR_Box) (FuncId_22)), ((MR_Box) (FuncRequests_31)), AnalysisRequests1_29, &AnalysisRequests_32);
        mercury__map__set_4_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &analysis__file_scalar_common_2[2], ((MR_Box) (AnalysisName_11)), ((MR_Box) (AnalysisRequests_32)), STATE_VARIABLE_Requests_0_34, STATE_VARIABLE_Requests_35);
      }
      else
        *STATE_VARIABLE_Requests_35 = STATE_VARIABLE_Requests_0_34;
    }
    else
    {
      MR_String Msg_33;
      MR_String Var_54;
      MR_Word Var_55;

      Var_54 = mercury__string__string_1_f_0((MR_Word) &analysis__file_scalar_common_1[3], ((MR_Box) (Term_6)));
      Msg_33 = mercury__string__f_43_43_2_f_0((MR_String) "failed to parse request entry: ", Var_54);
      Var_55 = (MR_Word) Msg_33;
      {
        mercury__exception__throw_1_p_0((MR_Word) &analysis__file__analysis__file__type_ctor_info_invalid_analysis_file_0, ((MR_Box) (Var_55)));
        return;
      }
    }
  }
}

static void MR_CALL 
analysis__file__parse_result_entry_4_p_0(
  MR_Word TypeClassInfo_for_compiler_58,
  MR_Box Compiler_5,
  MR_Word Term_6,
  MR_Word STATE_VARIABLE_Results_0_36,
  MR_Word * STATE_VARIABLE_Results_37)
{
  {
    MR_bool succeeded = ((MR_tag((MR_Word) Term_6)) == (MR_mktag((MR_Integer) 0)));
    MR_Word TypeClassInfo_for_analysis_59;
    MR_String AnalysisName_8;
    MR_Word VersionNumberTerm_9;
    MR_Word FuncId_22;
    MR_Box CallPattern_23;
    MR_Box AnswerPattern_24;
    MR_Word Status_25;
    MR_Word TypeClassInfo_for_call_pattern_60;
    MR_Word TypeClassInfo_for_to_term_62;
    MR_Word TypeClassInfo_for_answer_pattern_64;
    MR_Word TypeClassInfo_for_to_term_65;
    MR_Word FuncIdTerm_10;
    MR_Word CallPatternTerm_11;
    MR_Word AnswerPatternTerm_12;
    MR_Word StatusTerm_13;
    MR_String StatusString_15;
    MR_Word Analysis_17;
    MR_Word Var_38;
    MR_Word Var_39;
    MR_Word Var_40;
    MR_Word Var_41;
    MR_Word Var_42;
    MR_Word Var_43;
    MR_Word Var_44;
    MR_Word Var_45;
    MR_Word Var_46;
    MR_Integer PolyConst1_61;
    MR_Integer PolyConst2_63;
    MR_Word Var_14;
    MR_Word Var_16;
    MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *);
    MR_Box conv1_Analysis_17;
    MR_bool MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box *);
    MR_bool MR_CALL (* func_3)(MR_Box, MR_Box, MR_Box *);

    if (succeeded)
    {
      Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), Term_6, (MR_Integer) 0)));
      Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), Term_6, (MR_Integer) 1)));
      Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), Term_6, (MR_Integer) 2)));
      succeeded = ((MR_tag((MR_Word) Var_38)) == (MR_mktag((MR_Integer) 0)));
      if (succeeded)
      {
        AnalysisName_8 = ((MR_String) (MR_hl_field(MR_mktag(0), Var_38, (MR_Integer) 0)));
        succeeded = ((MR_tag((MR_Word) Var_39)) == (MR_mktag((MR_Integer) 1)));
        if (succeeded)
        {
          VersionNumberTerm_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_39, (MR_Integer) 0)));
          Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_39, (MR_Integer) 1)));
          succeeded = ((MR_tag((MR_Word) Var_40)) == (MR_mktag((MR_Integer) 1)));
          if (succeeded)
          {
            FuncIdTerm_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_40, (MR_Integer) 0)));
            Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_40, (MR_Integer) 1)));
            succeeded = ((MR_tag((MR_Word) Var_41)) == (MR_mktag((MR_Integer) 1)));
            if (succeeded)
            {
              CallPatternTerm_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_41, (MR_Integer) 0)));
              Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_41, (MR_Integer) 1)));
              succeeded = ((MR_tag((MR_Word) Var_42)) == (MR_mktag((MR_Integer) 1)));
              if (succeeded)
              {
                AnswerPatternTerm_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_42, (MR_Integer) 0)));
                Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_42, (MR_Integer) 1)));
                succeeded = ((MR_tag((MR_Word) Var_43)) == (MR_mktag((MR_Integer) 1)));
                if (succeeded)
                {
                  StatusTerm_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_43, (MR_Integer) 0)));
                  Var_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_43, (MR_Integer) 1)));
                  succeeded = (Var_44 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  if (succeeded)
                  {
                    succeeded = ((MR_tag((MR_Word) StatusTerm_13)) == (MR_mktag((MR_Integer) 0)));
                    if (succeeded)
                    {
                      Var_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), StatusTerm_13, (MR_Integer) 0)));
                      Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), StatusTerm_13, (MR_Integer) 1)));
                      Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), StatusTerm_13, (MR_Integer) 2)));
                      succeeded = (Var_46 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                      if (succeeded)
                      {
                        succeeded = ((MR_tag((MR_Word) Var_45)) == (MR_mktag((MR_Integer) 0)));
                        if (succeeded)
                        {
                          StatusString_15 = ((MR_String) (MR_hl_field(MR_mktag(0), Var_45, (MR_Integer) 0)));
                          func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_compiler_58, (MR_Integer) 0)), (MR_Integer) 6)));
                          succeeded = func_0(((MR_Box) TypeClassInfo_for_compiler_58), Compiler_5, ((MR_Box) (AnalysisName_8)), &conv1_Analysis_17);
                          if (succeeded)
                          {
                            Analysis_17 = ((MR_Word) conv1_Analysis_17);
                            succeeded = MR_TRUE;
                          }
                          if (succeeded)
                          {
                            TypeClassInfo_for_analysis_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), Analysis_17, (MR_Integer) 0)));
                            succeeded = analysis__file__parse_func_id_2_p_0(FuncIdTerm_10, &FuncId_22);
                            if (succeeded)
                            {
                              PolyConst1_61 = (MR_Integer) 1;
                              mercury__private_builtin__superclass_from_typeclass_info_3_p_0(TypeClassInfo_for_analysis_59, PolyConst1_61, &TypeClassInfo_for_call_pattern_60);
                              PolyConst2_63 = (MR_Integer) 2;
                              mercury__private_builtin__superclass_from_typeclass_info_3_p_0(TypeClassInfo_for_call_pattern_60, PolyConst2_63, &TypeClassInfo_for_to_term_62);
                              func_2 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_to_term_62, (MR_Integer) 0)), (MR_Integer) 6)));
                              succeeded = func_2(((MR_Box) TypeClassInfo_for_to_term_62), ((MR_Box) (CallPatternTerm_11)), &CallPattern_23);
                              if (succeeded)
                              {
                                mercury__private_builtin__superclass_from_typeclass_info_3_p_0(TypeClassInfo_for_analysis_59, PolyConst2_63, &TypeClassInfo_for_answer_pattern_64);
                                mercury__private_builtin__superclass_from_typeclass_info_3_p_0(TypeClassInfo_for_answer_pattern_64, PolyConst2_63, &TypeClassInfo_for_to_term_65);
                                func_3 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_to_term_65, (MR_Integer) 0)), (MR_Integer) 6)));
                                succeeded = func_3(((MR_Box) TypeClassInfo_for_to_term_65), ((MR_Box) (AnswerPatternTerm_12)), &AnswerPattern_24);
                                if (succeeded)
                                {
                                  if ((strcmp(StatusString_15, (MR_String) "invalid") == 0))
                                  {
                                    Status_25 = (MR_Integer) 0;
                                    succeeded = MR_TRUE;
                                  }
                                  else
                                  if ((strcmp(StatusString_15, (MR_String) "optimal") == 0))
                                  {
                                    Status_25 = (MR_Integer) 2;
                                    succeeded = MR_TRUE;
                                  }
                                  else
                                  if ((strcmp(StatusString_15, (MR_String) "suboptimal") == 0))
                                  {
                                    Status_25 = (MR_Integer) 1;
                                    succeeded = MR_TRUE;
                                  }
                                  else
                                    succeeded = MR_FALSE;
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    if (succeeded)
    {
      MR_Integer VersionNumber_26;
      MR_Integer Var_79;
      MR_Box Var_51;
      MR_Box Var_52;
      MR_Box MR_CALL (* func_4)(MR_Box) = ((MR_Box MR_CALL (*)(MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_analysis_59, (MR_Integer) 0)), (MR_Integer) 6)));
      MR_Box conv5_VersionNumber_26;

      conv5_VersionNumber_26 = func_4(((MR_Box) TypeClassInfo_for_analysis_59));
      VersionNumber_26 = ((MR_Integer) conv5_VersionNumber_26);
      succeeded = mercury__term__decimal_term_to_int_2_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, VersionNumberTerm_9, &Var_79);
      if (succeeded)
        succeeded = (VersionNumber_26 == Var_79);
      if (succeeded)
      {
        MR_Word Result_29;
        MR_Word AnalysisResults1_31;
        MR_Word FuncResults_33;
        MR_Word AnalysisResults_34;
        MR_Word AnalysisResults0_30;
        MR_Box conv6_AnalysisResults0_30;
        MR_Word FuncResults0_32;
        MR_Box conv7_FuncResults0_32;

        {
          Result_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Result_29, 0) = ((MR_Box) (TypeClassInfo_for_analysis_59));
          MR_hl_field(MR_mktag(0), Result_29, 1) = CallPattern_23;
          MR_hl_field(MR_mktag(0), Result_29, 2) = AnswerPattern_24;
          MR_hl_field(MR_mktag(0), Result_29, 3) = ((MR_Box) (Status_25));
        }
        succeeded = mercury__map__search_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &analysis__file_scalar_common_2[0], STATE_VARIABLE_Results_0_36, ((MR_Box) (AnalysisName_8)), &conv6_AnalysisResults0_30);
        if (succeeded)
        {
          AnalysisResults0_30 = ((MR_Word) conv6_AnalysisResults0_30);
          succeeded = MR_TRUE;
        }
        if (succeeded)
          AnalysisResults1_31 = AnalysisResults0_30;
        else
        {
          AnalysisResults1_31 = mercury__map__init_0_f_0((MR_Word) &analysis__analysis__type_ctor_info_func_id_0, (MR_Word) &analysis__file_scalar_common_1[0]);
        }
        succeeded = mercury__map__search_3_p_0((MR_Word) &analysis__analysis__type_ctor_info_func_id_0, (MR_Word) &analysis__file_scalar_common_1[0], AnalysisResults1_31, ((MR_Box) (FuncId_22)), &conv7_FuncResults0_32);
        if (succeeded)
        {
          FuncResults0_32 = ((MR_Word) conv7_FuncResults0_32);
          succeeded = MR_TRUE;
        }
        if (succeeded)
          {
            FuncResults_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), FuncResults_33, 0) = ((MR_Box) (Result_29));
            MR_hl_field(MR_mktag(1), FuncResults_33, 1) = ((MR_Box) (FuncResults0_32));
          }
        else
        {
          {
            FuncResults_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), FuncResults_33, 0) = ((MR_Box) (Result_29));
            MR_hl_field(MR_mktag(1), FuncResults_33, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
        }
        mercury__map__set_4_p_0((MR_Word) &analysis__analysis__type_ctor_info_func_id_0, (MR_Word) &analysis__file_scalar_common_1[0], ((MR_Box) (FuncId_22)), ((MR_Box) (FuncResults_33)), AnalysisResults1_31, &AnalysisResults_34);
        mercury__map__set_4_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &analysis__file_scalar_common_2[0], ((MR_Box) (AnalysisName_8)), ((MR_Box) (AnalysisResults_34)), STATE_VARIABLE_Results_0_36, STATE_VARIABLE_Results_37);
      }
      else
        *STATE_VARIABLE_Results_37 = STATE_VARIABLE_Results_0_36;
    }
    else
    {
      MR_String Msg_35;
      MR_String Var_56;
      MR_Word Var_57;

      Var_56 = mercury__string__string_1_f_0((MR_Word) &analysis__file_scalar_common_1[3], ((MR_Box) (Term_6)));
      Msg_35 = mercury__string__f_43_43_2_f_0((MR_String) "failed to parse result entry: ", Var_56);
      Var_57 = (MR_Word) Msg_35;
      {
        mercury__exception__throw_1_p_0((MR_Word) &analysis__file__analysis__file__type_ctor_info_invalid_analysis_file_0, ((MR_Box) (Var_57)));
        return;
      }
    }
  }
}

static MR_bool MR_CALL 
analysis__file__parse_func_id_2_p_0(
  MR_Word Term_3,
  MR_Word * FuncId_4)
{
  {
    MR_bool succeeded = ((MR_tag((MR_Word) Term_3)) == (MR_mktag((MR_Integer) 0)));
    MR_Word TypeCtorInfo_23_23;
    MR_String PF_5;
    MR_Word NameTerm_6;
    MR_Word ArityTerm_7;
    MR_Word ProcTerm_8;
    MR_Word PredOrFunc_10;
    MR_String Name_11;
    MR_Integer Arity_13;
    MR_Integer ProcInt_14;
    MR_Integer ProcId_15;
    MR_Word Var_16;
    MR_Word Var_17;
    MR_Word Var_18;
    MR_Word Var_19;
    MR_Word Var_20;
    MR_Word Var_21;
    MR_Word Var_22;
    MR_Word Var_9;
    MR_Word Var_12;

    if (succeeded)
    {
      Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), Term_3, (MR_Integer) 0)));
      Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), Term_3, (MR_Integer) 1)));
      Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), Term_3, (MR_Integer) 2)));
      succeeded = ((MR_tag((MR_Word) Var_16)) == (MR_mktag((MR_Integer) 0)));
      if (succeeded)
      {
        PF_5 = ((MR_String) (MR_hl_field(MR_mktag(0), Var_16, (MR_Integer) 0)));
        succeeded = ((MR_tag((MR_Word) Var_17)) == (MR_mktag((MR_Integer) 1)));
        if (succeeded)
        {
          NameTerm_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_17, (MR_Integer) 0)));
          Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_17, (MR_Integer) 1)));
          succeeded = ((MR_tag((MR_Word) Var_18)) == (MR_mktag((MR_Integer) 1)));
          if (succeeded)
          {
            ArityTerm_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_18, (MR_Integer) 0)));
            Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_18, (MR_Integer) 1)));
            succeeded = ((MR_tag((MR_Word) Var_19)) == (MR_mktag((MR_Integer) 1)));
            if (succeeded)
            {
              ProcTerm_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_19, (MR_Integer) 0)));
              Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_19, (MR_Integer) 1)));
              succeeded = (Var_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              if (succeeded)
              {
                if ((strcmp(PF_5, (MR_String) "f") == 0))
                {
                  PredOrFunc_10 = (MR_Integer) 1;
                  succeeded = MR_TRUE;
                }
                else
                if ((strcmp(PF_5, (MR_String) "p") == 0))
                {
                  PredOrFunc_10 = (MR_Integer) 0;
                  succeeded = MR_TRUE;
                }
                else
                  succeeded = MR_FALSE;
                if (succeeded)
                {
                  succeeded = ((MR_tag((MR_Word) NameTerm_6)) == (MR_mktag((MR_Integer) 0)));
                  if (succeeded)
                  {
                    Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), NameTerm_6, (MR_Integer) 0)));
                    Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), NameTerm_6, (MR_Integer) 1)));
                    Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), NameTerm_6, (MR_Integer) 2)));
                    succeeded = (Var_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    if (succeeded)
                    {
                      succeeded = ((MR_tag((MR_Word) Var_21)) == (MR_mktag((MR_Integer) 0)));
                      if (succeeded)
                      {
                        Name_11 = ((MR_String) (MR_hl_field(MR_mktag(0), Var_21, (MR_Integer) 0)));
                        TypeCtorInfo_23_23 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
                        succeeded = mercury__term__decimal_term_to_int_2_p_0(TypeCtorInfo_23_23, ArityTerm_7, &Arity_13);
                        if (succeeded)
                        {
                          succeeded = mercury__term__decimal_term_to_int_2_p_0(TypeCtorInfo_23_23, ProcTerm_8, &ProcInt_14);
                          if (succeeded)
                          {
                            hlds__hlds_pred__proc_id_to_int_2_p_1(&ProcId_15, ProcInt_14);
                            {
                              MR_Word base;
                              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                              *FuncId_4 = base;
                              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (PredOrFunc_10));
                              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Name_11));
                              MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Arity_13));
                              MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (ProcId_15));
                            }
                            succeeded = MR_TRUE;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    return succeeded;
  }
}

static void MR_CALL 
analysis__file__empty_request_file_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;

    analysis__file__IntroducedFrom__pred__empty_request_file__904__1_3_p_0(((MR_String) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))));
  }
}

void MR_CALL 
analysis__file__empty_request_file_5_p_0(
  MR_Word Info_6,
  MR_Word Globals_7,
  MR_Word ModuleName_8)
{
  {
    MR_Word TypeClassInfo_for_compiler_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 0)));
    MR_String RequestFileName_10;
    MR_Box Var_14 = (MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 1));
    MR_Word Var_17;
    MR_Word Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 2)));
    MR_Word Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 3)));
    MR_Word Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 4)));
    MR_Word Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 5)));
    MR_Word Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 6)));
    MR_Word Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 7)));
    MR_Word Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 8)));
    MR_Word Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 9)));
    MR_Word Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 10)));
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_compiler_39, (MR_Integer) 0)), (MR_Integer) 9)));
    MR_Box conv2_RequestFileName_10;
    MR_Box conv1_STATE_VARIABLE_IO_16_16;
    MR_Word Var_11;

    func_0(((MR_Box) TypeClassInfo_for_compiler_39), Var_14, ((MR_Box) (Globals_7)), ((MR_Box) (ModuleName_8)), ((MR_Box) ((MR_String) ".request")), &conv2_RequestFileName_10, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_16_16);
    RequestFileName_10 = ((MR_String) conv2_RequestFileName_10);
    {
      Var_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_17, 0) = ((MR_Box) (&analysis__file_scalar_common_3[0]));
      MR_hl_field(MR_mktag(0), Var_17, 1) = ((MR_Box) (analysis__file__empty_request_file_5_p_0_1));
      MR_hl_field(MR_mktag(0), Var_17, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_17, 3) = ((MR_Box) (RequestFileName_10));
    }
    analysis__debug_msg_3_p_0(Var_17);
    mercury__io__remove_file_4_p_0(RequestFileName_10, &Var_11);
  }
}

static void MR_CALL 
analysis__file__write_module_imdg_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;

    analysis__file__write_imdg_arc_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)), ((MR_String) wrapper_arg_1), ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
  }
}

void MR_CALL 
analysis__file__write_module_imdg_6_p_0(
  MR_Word Info_7,
  MR_Word Globals_8,
  MR_Word ModuleName_9,
  MR_Word ModuleEntries_10)
{
  {
    MR_Word TypeClassInfo_for_compiler_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 0)));
    MR_Box Var_16 = (MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 1));
    MR_Word Var_18;
    MR_Word Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 2)));
    MR_Word Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 3)));
    MR_Word Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 4)));
    MR_Word Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 5)));
    MR_Word Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 6)));
    MR_Word Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 7)));
    MR_Word Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 8)));
    MR_Word Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 9)));
    MR_Word Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 10)));
    MR_String _FileName_13;

    {
      Var_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_18, 0) = ((MR_Box) (&analysis__file_scalar_common_10[2]));
      MR_hl_field(MR_mktag(0), Var_18, 1) = ((MR_Box) (analysis__file__write_module_imdg_6_p_0_1));
      MR_hl_field(MR_mktag(0), Var_18, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_18, 3) = ((MR_Box) (TypeClassInfo_for_compiler_45));
      MR_hl_field(MR_mktag(0), Var_18, 4) = Var_16;
    }
    analysis__file__write_analysis_file_10_p_0((MR_Word) &analysis__analysis__type_ctor_info_imdg_arc_0, TypeClassInfo_for_compiler_45, Var_16, Globals_8, ModuleName_9, (MR_String) ".imdg", (MR_Integer) 0, Var_18, ModuleEntries_10, &_FileName_13);
  }
}

static void MR_CALL 
analysis__file__read_module_imdg_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;

    analysis__file__IntroducedFrom__pred__read_analysis_file__541__1_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_String) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_String) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5))));
  }
}

static void MR_CALL 
analysis__file__read_module_imdg_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_Arcs_35;

    analysis__file__parse_imdg_arc_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)), ((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv0_STATE_VARIABLE_Arcs_35);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_Arcs_35));
  }
}

void MR_CALL 
analysis__file__read_module_imdg_6_p_0(
  MR_Word Info_7,
  MR_Word Globals_8,
  MR_Word ModuleName_9,
  MR_Word * ModuleEntries_10)
{
  {
    MR_Word TypeClassInfo_for_compiler_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 0)));
    MR_Box Var_14 = (MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 1));
    MR_Word Var_16;
    MR_Word Var_17;
    MR_Word MaybeAnalysisFileName_56;
    MR_Word Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 2)));
    MR_Word Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 3)));
    MR_Word Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 4)));
    MR_Word Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 5)));
    MR_Word Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 6)));
    MR_Word Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 7)));
    MR_Word Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 8)));
    MR_Word Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 9)));
    MR_Word Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 10)));
    void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);
    MR_Box conv3_MaybeAnalysisFileName_56;
    MR_Box conv2_STATE_VARIABLE_IO_23_59;

    {
      Var_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_16, 0) = ((MR_Box) (&analysis__file_scalar_common_5[4]));
      MR_hl_field(MR_mktag(0), Var_16, 1) = ((MR_Box) (analysis__file__read_module_imdg_6_p_0_1));
      MR_hl_field(MR_mktag(0), Var_16, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_16, 3) = ((MR_Box) (TypeClassInfo_for_compiler_42));
      MR_hl_field(MR_mktag(0), Var_16, 4) = Var_14;
    }
    Var_17 = mercury__map__init_0_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &analysis__file_scalar_common_2[4]);
    func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_compiler_42, (MR_Integer) 0)), (MR_Integer) 8)));
    func_1(((MR_Box) TypeClassInfo_for_compiler_42), Var_14, ((MR_Box) (Globals_8)), ((MR_Box) (ModuleName_9)), ((MR_Box) ((MR_String) ".imdg")), &conv3_MaybeAnalysisFileName_56, ((MR_Box) ((MR_Integer) 0)), &conv2_STATE_VARIABLE_IO_23_59);
    MaybeAnalysisFileName_56 = ((MR_Word) conv3_MaybeAnalysisFileName_56);
    if (((MR_tag((MR_Word) MaybeAnalysisFileName_56)) == (MR_mktag((MR_Integer) 1))))
    {
      MR_String Message_58 = ((MR_String) (MR_hl_field(MR_mktag(1), MaybeAnalysisFileName_56, (MR_Integer) 0)));
      MR_Word Var_60;

      {
        Var_60 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_60, 0) = ((MR_Box) (&analysis__file_scalar_common_5[3]));
        MR_hl_field(MR_mktag(0), Var_60, 1) = ((MR_Box) (analysis__file__read_module_imdg_6_p_0_2));
        MR_hl_field(MR_mktag(0), Var_60, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
        MR_hl_field(MR_mktag(0), Var_60, 3) = ((MR_Box) (ModuleName_9));
        MR_hl_field(MR_mktag(0), Var_60, 4) = ((MR_Box) ((MR_String) ".imdg"));
        MR_hl_field(MR_mktag(0), Var_60, 5) = ((MR_Box) (Message_58));
      }
      analysis__debug_msg_3_p_0(Var_60);
      *ModuleEntries_10 = Var_17;
    }
    else
    {
      MR_String AnalysisFileName_57 = ((MR_String) (MR_hl_field(MR_mktag(0), MaybeAnalysisFileName_56, (MR_Integer) 0)));
      MR_Box conv4_ModuleEntries_10;

      analysis__file__read_analysis_file_6_p_0((MR_Word) &analysis__file_scalar_common_2[5], AnalysisFileName_57, Var_16, ((MR_Box) (Var_17)), &conv4_ModuleEntries_10);
      *ModuleEntries_10 = ((MR_Word) conv4_ModuleEntries_10);
    }
  }
}

static void MR_CALL 
analysis__file__write_module_analysis_requests_6_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;

    analysis__file__write_request_entry_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)), ((MR_String) wrapper_arg_1), ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
  }
}

static void MR_CALL 
analysis__file__write_module_analysis_requests_6_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;

    analysis__file__write_request_entry_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)), ((MR_String) wrapper_arg_1), ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
  }
}

static void MR_CALL 
analysis__file__write_module_analysis_requests_6_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;

    analysis__file__write_request_entry_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)), ((MR_String) wrapper_arg_1), ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
  }
}

static void MR_CALL 
analysis__file__write_module_analysis_requests_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;

    analysis__file__write_request_entry_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)), ((MR_String) wrapper_arg_1), ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
  }
}

static void MR_CALL 
analysis__file__write_module_analysis_requests_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;

    analysis__file__IntroducedFrom__pred__write_module_analysis_requests__709__1_3_p_0(((MR_String) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))));
  }
}

void MR_CALL 
analysis__file__write_module_analysis_requests_6_p_0(
  MR_Word Info_7,
  MR_Word Globals_8,
  MR_Word ModuleName_9,
  MR_Word ModuleRequests_10)
{
  {
    MR_bool succeeded;
    MR_Word TypeClassInfo_for_compiler_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 0)));
    MR_Box Compiler_12 = (MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 1));
    MR_String AnalysisFileName_13;
    MR_Word InputResult_14;
    MR_Word Var_30;
    MR_Word Var_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 2)));
    MR_Word Var_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 3)));
    MR_Word Var_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 4)));
    MR_Word Var_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 5)));
    MR_Word Var_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 6)));
    MR_Word Var_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 7)));
    MR_Word Var_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 8)));
    MR_Word Var_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 9)));
    MR_Word Var_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 10)));
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_compiler_64, (MR_Integer) 0)), (MR_Integer) 9)));
    MR_Box conv2_AnalysisFileName_13;
    MR_Box conv1_STATE_VARIABLE_IO_29_29;

    func_0(((MR_Box) TypeClassInfo_for_compiler_64), Compiler_12, ((MR_Box) (Globals_8)), ((MR_Box) (ModuleName_9)), ((MR_Box) ((MR_String) ".request")), &conv2_AnalysisFileName_13, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_29_29);
    AnalysisFileName_13 = ((MR_String) conv2_AnalysisFileName_13);
    {
      Var_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_30, 0) = ((MR_Box) (&analysis__file_scalar_common_3[0]));
      MR_hl_field(MR_mktag(0), Var_30, 1) = ((MR_Box) (analysis__file__write_module_analysis_requests_6_p_0_1));
      MR_hl_field(MR_mktag(0), Var_30, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_30, 3) = ((MR_Box) (AnalysisFileName_13));
    }
    analysis__debug_msg_3_p_0(Var_30);
    mercury__io__open_input_4_p_0(AnalysisFileName_13, &InputResult_14);
    if (((MR_tag((MR_Word) InputResult_14)) == (MR_mktag((MR_Integer) 1))))
    {
      MR_Word Var_51;

      {
        Var_51 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_51, 0) = ((MR_Box) (&analysis__file_scalar_common_10[1]));
        MR_hl_field(MR_mktag(0), Var_51, 1) = ((MR_Box) (analysis__file__write_module_analysis_requests_6_p_0_2));
        MR_hl_field(MR_mktag(0), Var_51, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
        MR_hl_field(MR_mktag(0), Var_51, 3) = ((MR_Box) (TypeClassInfo_for_compiler_64));
        MR_hl_field(MR_mktag(0), Var_51, 4) = Compiler_12;
      }
      analysis__file__write_analysis_file_5_p_0((MR_Word) &analysis__analysis__type_ctor_info_analysis_request_0, AnalysisFileName_13, Var_51, ModuleRequests_10);
    }
    else
    {
      MR_Word TypeCtorInfo_65_65 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
      MR_Word InputStream_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), InputResult_14, (MR_Integer) 0)));
      MR_Word VersionResult_16;
      MR_Word NumberTerm_18;
      MR_Integer Var_44;
      MR_Integer Var_78;
      MR_Word Var_17;

      mercury__parser__read_term_4_p_0(TypeCtorInfo_65_65, InputStream_15, &VersionResult_16);
      mercury__io__close_input_3_p_0(InputStream_15);
      succeeded = ((MR_tag((MR_Word) VersionResult_16)) == (MR_mktag((MR_Integer) 2)));
      if (succeeded)
      {
        Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(2), VersionResult_16, (MR_Integer) 0)));
        NumberTerm_18 = ((MR_Word) (MR_hl_field(MR_mktag(2), VersionResult_16, (MR_Integer) 1)));
        Var_44 = (MR_Integer) 6;
        succeeded = mercury__term__decimal_term_to_int_2_p_0(TypeCtorInfo_65_65, NumberTerm_18, &Var_78);
        if (succeeded)
          succeeded = (Var_44 == Var_78);
      }
      if (succeeded)
      {
        MR_Word AppendResult_19;

        mercury__io__open_append_4_p_0(AnalysisFileName_13, &AppendResult_19);
        if (((MR_tag((MR_Word) AppendResult_19)) == (MR_mktag((MR_Integer) 1))))
        {
          MR_Word Var_79;

          {
            Var_79 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_79, 0) = ((MR_Box) (&analysis__file_scalar_common_10[1]));
            MR_hl_field(MR_mktag(0), Var_79, 1) = ((MR_Box) (analysis__file__write_module_analysis_requests_6_p_0_3));
            MR_hl_field(MR_mktag(0), Var_79, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(0), Var_79, 3) = ((MR_Box) (TypeClassInfo_for_compiler_64));
            MR_hl_field(MR_mktag(0), Var_79, 4) = Compiler_12;
          }
          analysis__file__write_analysis_file_5_p_0((MR_Word) &analysis__analysis__type_ctor_info_analysis_request_0, AnalysisFileName_13, Var_79, ModuleRequests_10);
        }
        else
        {
          MR_Word AppendStream_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), AppendResult_19, (MR_Integer) 0)));
          MR_Word OldOutputStream_21;
          MR_Word Var_47;
          MR_Word Var_22;

          mercury__io__set_output_stream_4_p_0(AppendStream_20, &OldOutputStream_21);
          {
            Var_47 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_47, 0) = ((MR_Box) (&analysis__file_scalar_common_10[1]));
            MR_hl_field(MR_mktag(0), Var_47, 1) = ((MR_Box) (analysis__file__write_module_analysis_requests_6_p_0_4));
            MR_hl_field(MR_mktag(0), Var_47, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(0), Var_47, 3) = ((MR_Box) (TypeClassInfo_for_compiler_64));
            MR_hl_field(MR_mktag(0), Var_47, 4) = Compiler_12;
          }
          analysis__file__write_analysis_file_2_4_p_0((MR_Word) &analysis__analysis__type_ctor_info_analysis_request_0, Var_47, ModuleRequests_10);
          mercury__io__set_output_stream_4_p_0(OldOutputStream_21, &Var_22);
          mercury__io__close_output_3_p_0(AppendStream_20);
        }
      }
      else
      {
        MR_Word Var_88;

        {
          Var_88 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_88, 0) = ((MR_Box) (&analysis__file_scalar_common_10[1]));
          MR_hl_field(MR_mktag(0), Var_88, 1) = ((MR_Box) (analysis__file__write_module_analysis_requests_6_p_0_5));
          MR_hl_field(MR_mktag(0), Var_88, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(0), Var_88, 3) = ((MR_Box) (TypeClassInfo_for_compiler_64));
          MR_hl_field(MR_mktag(0), Var_88, 4) = Compiler_12;
        }
        analysis__file__write_analysis_file_5_p_0((MR_Word) &analysis__analysis__type_ctor_info_analysis_request_0, AnalysisFileName_13, Var_88, ModuleRequests_10);
      }
    }
  }
}

static void MR_CALL 
analysis__file__write_analysis_file_2_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;

    analysis__file__write_analysis_file_3_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_String) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
  }
}

static void MR_CALL 
analysis__file__write_analysis_file_2_4_p_0(
  MR_Word TypeInfo_for_T_12,
  MR_Word WriteEntry_5,
  MR_Word ModuleResults_6)
{
  {
    MR_Word TypeInfo_20_20;
    MR_Word TypeInfo_22_22;
    MR_Word Var_10;
    MR_Box conv0_STATE_VARIABLE_IO_9;

    {
      Var_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_10, 0) = ((MR_Box) (&analysis__file_scalar_common_6[1]));
      MR_hl_field(MR_mktag(0), Var_10, 1) = ((MR_Box) (analysis__file__write_analysis_file_2_4_p_0_1));
      MR_hl_field(MR_mktag(0), Var_10, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_10, 3) = ((MR_Box) (TypeInfo_for_T_12));
      MR_hl_field(MR_mktag(0), Var_10, 4) = ((MR_Box) (WriteEntry_5));
    }
    {
      TypeInfo_20_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_20_20, 0) = ((MR_Box) (&mercury__list__list__type_ctor_info_list_1));
      MR_hl_field(MR_mktag(0), TypeInfo_20_20, 1) = ((MR_Box) (TypeInfo_for_T_12));
    }
    {
      TypeInfo_22_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_22_22, 0) = ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2));
      MR_hl_field(MR_mktag(0), TypeInfo_22_22, 1) = ((MR_Box) (&analysis__analysis__type_ctor_info_func_id_0));
      MR_hl_field(MR_mktag(0), TypeInfo_22_22, 2) = ((MR_Box) (TypeInfo_20_20));
    }
    mercury__map__foldl_4_p_2((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, TypeInfo_22_22, (MR_Word) &mercury__io__io__type_ctor_info_state_0, Var_10, ModuleResults_6, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_9);
  }
}

static void MR_CALL 
analysis__file__write_analysis_file_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;

    analysis__file__write_analysis_file_3_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_String) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
  }
}

static void MR_CALL 
analysis__file__write_analysis_file_5_p_0(
  MR_Word TypeInfo_for_T_34,
  MR_String FileName_6,
  MR_Word WriteEntry_7,
  MR_Word ModuleResults_8)
{
  {
    MR_Word OpenResult_10;

    mercury__io__open_output_4_p_0(FileName_6, &OpenResult_10);
    if (((MR_tag((MR_Word) OpenResult_10)) == (MR_mktag((MR_Integer) 1))))
    {
      MR_Word IOError_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), OpenResult_10, (MR_Integer) 0)));
      MR_String Var_20;
      MR_String Var_22;
      MR_String Var_23;
      MR_String Var_25;

      Var_25 = mercury__io__error_message_1_f_0(IOError_14);
      Var_23 = mercury__string__f_43_43_2_f_0((MR_String) "\' for output: ", Var_25);
      Var_22 = mercury__string__f_43_43_2_f_0(FileName_6, Var_23);
      Var_20 = mercury__string__f_43_43_2_f_0((MR_String) "error opening \140", Var_22);
      {
        mercury__require__unexpected_3_p_0((MR_String) "analysis.file", (MR_String) "predicate \140analysis.file.write_analysis_file\'/5", Var_20);
        return;
      }
    }
    else
    {
      MR_Word TypeInfo_20_49;
      MR_Word TypeInfo_22_51;
      MR_Word Stream_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), OpenResult_10, (MR_Integer) 0)));
      MR_Word OldOutput_12;
      MR_Word Var_40;
      MR_Box conv0_STATE_VARIABLE_IO_31_31;
      MR_Word Var_13;

      mercury__io__set_output_stream_4_p_0(Stream_11, &OldOutput_12);
      mercury__io__write_int_3_p_0((MR_Integer) 6);
      mercury__io__write_string_3_p_0((MR_String) ".\n");
      {
        Var_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_40, 0) = ((MR_Box) (&analysis__file_scalar_common_6[1]));
        MR_hl_field(MR_mktag(0), Var_40, 1) = ((MR_Box) (analysis__file__write_analysis_file_5_p_0_1));
        MR_hl_field(MR_mktag(0), Var_40, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
        MR_hl_field(MR_mktag(0), Var_40, 3) = ((MR_Box) (TypeInfo_for_T_34));
        MR_hl_field(MR_mktag(0), Var_40, 4) = ((MR_Box) (WriteEntry_7));
      }
      {
        TypeInfo_20_49 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), TypeInfo_20_49, 0) = ((MR_Box) (&mercury__list__list__type_ctor_info_list_1));
        MR_hl_field(MR_mktag(0), TypeInfo_20_49, 1) = ((MR_Box) (TypeInfo_for_T_34));
      }
      {
        TypeInfo_22_51 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), TypeInfo_22_51, 0) = ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2));
        MR_hl_field(MR_mktag(0), TypeInfo_22_51, 1) = ((MR_Box) (&analysis__analysis__type_ctor_info_func_id_0));
        MR_hl_field(MR_mktag(0), TypeInfo_22_51, 2) = ((MR_Box) (TypeInfo_20_49));
      }
      mercury__map__foldl_4_p_2((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, TypeInfo_22_51, (MR_Word) &mercury__io__io__type_ctor_info_state_0, Var_40, ModuleResults_8, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_31_31);
      mercury__io__set_output_stream_4_p_0(OldOutput_12, &Var_13);
      mercury__io__close_output_3_p_0(Stream_11);
    }
  }
}

static void MR_CALL 
analysis__file__read_module_analysis_requests_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;

    analysis__file__IntroducedFrom__pred__read_analysis_file__541__1_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_String) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_String) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5))));
  }
}

static void MR_CALL 
analysis__file__read_module_analysis_requests_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_Requests_35;

    analysis__file__parse_request_entry_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)), ((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv0_STATE_VARIABLE_Requests_35);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_Requests_35));
  }
}

void MR_CALL 
analysis__file__read_module_analysis_requests_6_p_0(
  MR_Word Info_7,
  MR_Word Globals_8,
  MR_Word ModuleName_9,
  MR_Word * ModuleRequests_10)
{
  {
    MR_Word TypeClassInfo_for_compiler_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 0)));
    MR_Box Var_14 = (MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 1));
    MR_Word Var_16;
    MR_Word Var_17;
    MR_Word MaybeAnalysisFileName_56;
    MR_Word Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 2)));
    MR_Word Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 3)));
    MR_Word Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 4)));
    MR_Word Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 5)));
    MR_Word Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 6)));
    MR_Word Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 7)));
    MR_Word Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 8)));
    MR_Word Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 9)));
    MR_Word Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 10)));
    void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);
    MR_Box conv3_MaybeAnalysisFileName_56;
    MR_Box conv2_STATE_VARIABLE_IO_23_59;

    {
      Var_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_16, 0) = ((MR_Box) (&analysis__file_scalar_common_5[2]));
      MR_hl_field(MR_mktag(0), Var_16, 1) = ((MR_Box) (analysis__file__read_module_analysis_requests_6_p_0_1));
      MR_hl_field(MR_mktag(0), Var_16, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_16, 3) = ((MR_Box) (TypeClassInfo_for_compiler_42));
      MR_hl_field(MR_mktag(0), Var_16, 4) = Var_14;
    }
    Var_17 = mercury__map__init_0_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &analysis__file_scalar_common_2[2]);
    func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_compiler_42, (MR_Integer) 0)), (MR_Integer) 8)));
    func_1(((MR_Box) TypeClassInfo_for_compiler_42), Var_14, ((MR_Box) (Globals_8)), ((MR_Box) (ModuleName_9)), ((MR_Box) ((MR_String) ".request")), &conv3_MaybeAnalysisFileName_56, ((MR_Box) ((MR_Integer) 0)), &conv2_STATE_VARIABLE_IO_23_59);
    MaybeAnalysisFileName_56 = ((MR_Word) conv3_MaybeAnalysisFileName_56);
    if (((MR_tag((MR_Word) MaybeAnalysisFileName_56)) == (MR_mktag((MR_Integer) 1))))
    {
      MR_String Message_58 = ((MR_String) (MR_hl_field(MR_mktag(1), MaybeAnalysisFileName_56, (MR_Integer) 0)));
      MR_Word Var_60;

      {
        Var_60 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_60, 0) = ((MR_Box) (&analysis__file_scalar_common_5[3]));
        MR_hl_field(MR_mktag(0), Var_60, 1) = ((MR_Box) (analysis__file__read_module_analysis_requests_6_p_0_2));
        MR_hl_field(MR_mktag(0), Var_60, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
        MR_hl_field(MR_mktag(0), Var_60, 3) = ((MR_Box) (ModuleName_9));
        MR_hl_field(MR_mktag(0), Var_60, 4) = ((MR_Box) ((MR_String) ".request"));
        MR_hl_field(MR_mktag(0), Var_60, 5) = ((MR_Box) (Message_58));
      }
      analysis__debug_msg_3_p_0(Var_60);
      *ModuleRequests_10 = Var_17;
    }
    else
    {
      MR_String AnalysisFileName_57 = ((MR_String) (MR_hl_field(MR_mktag(0), MaybeAnalysisFileName_56, (MR_Integer) 0)));
      MR_Box conv4_ModuleRequests_10;

      analysis__file__read_analysis_file_6_p_0((MR_Word) &analysis__file_scalar_common_2[3], AnalysisFileName_57, Var_16, ((MR_Box) (Var_17)), &conv4_ModuleRequests_10);
      *ModuleRequests_10 = ((MR_Word) conv4_ModuleRequests_10);
    }
  }
}

static void MR_CALL 
analysis__file__read_analysis_file_6_p_0_3(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    analysis__file__IntroducedFrom__pred__read_analysis_file__568__1_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6))), wrapper_arg_1);
  }
}

static void MR_CALL 
analysis__file__read_analysis_file_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;

    analysis__file__IntroducedFrom__pred__read_analysis_file__561__1_3_p_0(((MR_String) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))));
  }
}

static void MR_CALL 
analysis__file__read_analysis_file_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;

    analysis__file__IntroducedFrom__pred__read_analysis_file__584__1_3_p_0(((MR_String) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))));
  }
}

static void MR_CALL 
analysis__file__read_analysis_file_6_p_0(
  MR_Word TypeInfo_for_T_58,
  MR_String AnalysisFileName_7,
  MR_Word ParseEntry_8,
  MR_Box ModuleResults0_9,
  MR_Box * ModuleResults_10)
{
  {
    MR_Word OpenResult_12;

    mercury__io__open_input_4_p_0(AnalysisFileName_7, &OpenResult_12);
    if (((MR_tag((MR_Word) OpenResult_12)) == (MR_mktag((MR_Integer) 1))))
    {
      MR_Word Var_21;

      {
        Var_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_21, 0) = ((MR_Box) (&analysis__file_scalar_common_3[0]));
        MR_hl_field(MR_mktag(0), Var_21, 1) = ((MR_Box) (analysis__file__read_analysis_file_6_p_0_1));
        MR_hl_field(MR_mktag(0), Var_21, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), Var_21, 3) = ((MR_Box) (AnalysisFileName_7));
      }
      analysis__debug_msg_3_p_0(Var_21);
      *ModuleResults_10 = ModuleResults0_9;
    }
    else
    {
      MR_Word Stream_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), OpenResult_12, (MR_Integer) 0)));
      MR_Word Result_14;
      MR_Word Var_31;
      MR_Word Var_41;

      {
        Var_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_31, 0) = ((MR_Box) (&analysis__file_scalar_common_3[0]));
        MR_hl_field(MR_mktag(0), Var_31, 1) = ((MR_Box) (analysis__file__read_analysis_file_6_p_0_2));
        MR_hl_field(MR_mktag(0), Var_31, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), Var_31, 3) = ((MR_Box) (AnalysisFileName_7));
      }
      analysis__debug_msg_3_p_0(Var_31);
      {
        Var_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_41, 0) = ((MR_Box) (&analysis__file_scalar_common_10[0]));
        MR_hl_field(MR_mktag(0), Var_41, 1) = ((MR_Box) (analysis__file__read_analysis_file_6_p_0_3));
        MR_hl_field(MR_mktag(0), Var_41, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
        MR_hl_field(MR_mktag(0), Var_41, 3) = ((MR_Box) (TypeInfo_for_T_58));
        MR_hl_field(MR_mktag(0), Var_41, 4) = ((MR_Box) (ParseEntry_8));
        MR_hl_field(MR_mktag(0), Var_41, 5) = ModuleResults0_9;
        MR_hl_field(MR_mktag(0), Var_41, 6) = ((MR_Box) (Stream_13));
      }
      mercury__exception__try_io_4_p_0(TypeInfo_for_T_58, Var_41, &Result_14);
      mercury__io__close_input_3_p_0(Stream_13);
      if (((MR_tag((MR_Word) Result_14)) == (MR_mktag((MR_Integer) 2))))
        {
          mercury__exception__rethrow_1_p_0(TypeInfo_for_T_58, Result_14);
          return;
        }
      else
        *ModuleResults_10 = (MR_hl_field(MR_mktag(1), Result_14, (MR_Integer) 0));
    }
  }
}

static MR_bool MR_CALL 
analysis__file__write_module_analysis_results_6_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = analysis__file__dir_sep_1_p_0(((MR_Char) (MR_Word) wrapper_arg_1));
    return succeeded;
  }
}

static void MR_CALL 
analysis__file__write_module_analysis_results_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;

    analysis__file__write_result_entry_5_p_0(((MR_String) wrapper_arg_1), ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
  }
}

static void MR_CALL 
analysis__file__write_module_analysis_results_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;

    analysis__file__IntroducedFrom__pred__write_module_analysis_results__657__1_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))));
  }
}

void MR_CALL 
analysis__file__write_module_analysis_results_6_p_0(
  MR_Word Info_7,
  MR_Word Globals_8,
  MR_Word ModuleName_9,
  MR_Word ModuleResults_10)
{
  {
    MR_bool succeeded;
    MR_Word TypeClassInfo_for_compiler_48;
    MR_String FileName_13;
    MR_Word Result_14;
    MR_String CacheDir_15;
    MR_Word Var_19;
    MR_Box Var_29;
    MR_Word Var_38;
    MR_Word Var_39;
    MR_Word Var_40;
    MR_Word Var_41;
    MR_Word Var_42;
    MR_Word Var_43;
    MR_Word Var_44;
    MR_Word Var_45;
    MR_Word Var_46;

    {
      Var_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_19, 0) = ((MR_Box) (&analysis__file_scalar_common_3[1]));
      MR_hl_field(MR_mktag(0), Var_19, 1) = ((MR_Box) (analysis__file__write_module_analysis_results_6_p_0_1));
      MR_hl_field(MR_mktag(0), Var_19, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_19, 3) = ((MR_Box) (ModuleName_9));
    }
    analysis__debug_msg_3_p_0(Var_19);
    TypeClassInfo_for_compiler_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 0)));
    Var_29 = (MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 1));
    Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 2)));
    Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 3)));
    Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 4)));
    Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 5)));
    Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 6)));
    Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 7)));
    Var_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 8)));
    Var_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 9)));
    Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 10)));
    analysis__file__write_analysis_file_10_p_0((MR_Word) &analysis__analysis__type_ctor_info_some_analysis_result_0, TypeClassInfo_for_compiler_48, Var_29, Globals_8, ModuleName_9, (MR_String) ".analysis", (MR_Integer) 1, (MR_Word) &analysis__file_scalar_common_2[8], ModuleResults_10, &FileName_13);
    parse_tree__module_cmds__update_interface_return_changed_5_p_0(Globals_8, FileName_13, &Result_14);
    libs__globals__lookup_string_option_3_p_0(Globals_8, (MR_Integer) 673, &CacheDir_15);
    succeeded = (strcmp(CacheDir_15, (MR_String) "") == 0);
    succeeded = !(succeeded);
    if (succeeded)
      succeeded = (Result_14 == (MR_Integer) 0);
    if (succeeded)
    {
      MR_String CacheFileName_16;
      MR_Word Components_58;
      MR_String EscFileName_59;

      Components_58 = mercury__string__split_at_separator_2_f_0((MR_Word) &analysis__file_scalar_common_2[9], FileName_13);
      EscFileName_59 = mercury__string__join_list_2_f_0((MR_String) ":", Components_58);
      CacheFileName_16 = mercury__dir__f_slash_2_f_0(CacheDir_15, EscFileName_59);
      analysis__file__write_analysis_cache_file_4_p_0(CacheFileName_16, ModuleResults_10);
    }
    else
    {
    }
  }
}

static void MR_CALL 
analysis__file__write_analysis_file_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;

    analysis__file__write_analysis_file_3_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_String) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
  }
}

static void MR_CALL 
analysis__file__write_analysis_file_10_p_0(
  MR_Word TypeInfo_for_T_27,
  MR_Word TypeClassInfo_for_compiler_26,
  MR_Box Compiler_11,
  MR_Word Globals_12,
  MR_Word ModuleName_13,
  MR_String Suffix_14,
  MR_Word ToTmp_15,
  MR_Word WriteEntry_16,
  MR_Word ModuleResults_17,
  MR_String * FileName_18)
{
  {
    MR_String WriteFileName_20;
    MR_Word OpenResult_34;
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_compiler_26, (MR_Integer) 0)), (MR_Integer) 9)));
    MR_Box conv2_FileName_18;
    MR_Box conv1_STATE_VARIABLE_IO_23_23;

    func_0(((MR_Box) TypeClassInfo_for_compiler_26), Compiler_11, ((MR_Box) (Globals_12)), ((MR_Box) (ModuleName_13)), ((MR_Box) (Suffix_14)), &conv2_FileName_18, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_23_23);
    *FileName_18 = ((MR_String) conv2_FileName_18);
    switch (ToTmp_15) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        WriteFileName_20 = *FileName_18;
        break;
      case (MR_Integer) 1:
        {
          WriteFileName_20 = mercury__string__f_43_43_2_f_0(*FileName_18, (MR_String) ".tmp");
        }
        break;
    }
    mercury__io__open_output_4_p_0(WriteFileName_20, &OpenResult_34);
    if (((MR_tag((MR_Word) OpenResult_34)) == (MR_mktag((MR_Integer) 1))))
    {
      MR_Word IOError_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), OpenResult_34, (MR_Integer) 0)));
      MR_String Var_42;
      MR_String Var_44;
      MR_String Var_45;
      MR_String Var_47;

      Var_47 = mercury__io__error_message_1_f_0(IOError_38);
      Var_45 = mercury__string__f_43_43_2_f_0((MR_String) "\' for output: ", Var_47);
      Var_44 = mercury__string__f_43_43_2_f_0(WriteFileName_20, Var_45);
      Var_42 = mercury__string__f_43_43_2_f_0((MR_String) "error opening \140", Var_44);
      {
        mercury__require__unexpected_3_p_0((MR_String) "analysis.file", (MR_String) "predicate \140analysis.file.write_analysis_file\'/5", Var_42);
        return;
      }
    }
    else
    {
      MR_Word TypeInfo_20_70;
      MR_Word TypeInfo_22_72;
      MR_Word Stream_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), OpenResult_34, (MR_Integer) 0)));
      MR_Word OldOutput_36;
      MR_Word Var_61;
      MR_Box conv3_STATE_VARIABLE_IO_31_53;
      MR_Word Var_37;

      mercury__io__set_output_stream_4_p_0(Stream_35, &OldOutput_36);
      mercury__io__write_int_3_p_0((MR_Integer) 6);
      mercury__io__write_string_3_p_0((MR_String) ".\n");
      {
        Var_61 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_61, 0) = ((MR_Box) (&analysis__file_scalar_common_6[1]));
        MR_hl_field(MR_mktag(0), Var_61, 1) = ((MR_Box) (analysis__file__write_analysis_file_10_p_0_1));
        MR_hl_field(MR_mktag(0), Var_61, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
        MR_hl_field(MR_mktag(0), Var_61, 3) = ((MR_Box) (TypeInfo_for_T_27));
        MR_hl_field(MR_mktag(0), Var_61, 4) = ((MR_Box) (WriteEntry_16));
      }
      {
        TypeInfo_20_70 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), TypeInfo_20_70, 0) = ((MR_Box) (&mercury__list__list__type_ctor_info_list_1));
        MR_hl_field(MR_mktag(0), TypeInfo_20_70, 1) = ((MR_Box) (TypeInfo_for_T_27));
      }
      {
        TypeInfo_22_72 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), TypeInfo_22_72, 0) = ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2));
        MR_hl_field(MR_mktag(0), TypeInfo_22_72, 1) = ((MR_Box) (&analysis__analysis__type_ctor_info_func_id_0));
        MR_hl_field(MR_mktag(0), TypeInfo_22_72, 2) = ((MR_Box) (TypeInfo_20_70));
      }
      mercury__map__foldl_4_p_2((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, TypeInfo_22_72, (MR_Word) &mercury__io__io__type_ctor_info_state_0, (MR_Word) Var_61, (MR_Word) ModuleResults_17, ((MR_Box) ((MR_Integer) 0)), &conv3_STATE_VARIABLE_IO_31_53);
      mercury__io__set_output_stream_4_p_0(OldOutput_36, &Var_37);
      mercury__io__close_output_3_p_0(Stream_35);
    }
  }
}

static void MR_CALL 
analysis__file__read_module_analysis_results_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv4_Univ_12;
    MR_Integer conv3_STATE_VARIABLE_State_23;

    analysis__file__unpickle_analysis_result_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)), ((MR_Word) wrapper_arg_1), ((MR_Box) wrapper_arg_2), ((MR_Word) wrapper_arg_3), &conv4_Univ_12, ((MR_Integer) wrapper_arg_5), &conv3_STATE_VARIABLE_State_23);
    *wrapper_arg_4 = ((MR_Box) (conv4_Univ_12));
    *wrapper_arg_6 = ((MR_Box) (conv3_STATE_VARIABLE_State_23));
  }
}

static MR_bool MR_CALL 
analysis__file__read_module_analysis_results_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = analysis__file__dir_sep_1_p_0(((MR_Char) (MR_Word) wrapper_arg_1));
    return succeeded;
  }
}

void MR_CALL 
analysis__file__read_module_analysis_results_6_p_0(
  MR_Word Info_7,
  MR_Word Globals_8,
  MR_Word ModuleName_9,
  MR_Word * ModuleResults_10)
{
  {
    MR_bool succeeded;
    MR_Word TypeClassInfo_for_compiler_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 0)));
    MR_Box Compiler_12 = (MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 1));
    MR_Word MaybeAnalysisFileName_13;
    MR_Word Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 2)));
    MR_Word Var_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 3)));
    MR_Word Var_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 4)));
    MR_Word Var_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 5)));
    MR_Word Var_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 6)));
    MR_Word Var_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 7)));
    MR_Word Var_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 8)));
    MR_Word Var_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 9)));
    MR_Word Var_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 10)));
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_compiler_55, (MR_Integer) 0)), (MR_Integer) 8)));
    MR_Box conv2_MaybeAnalysisFileName_13;
    MR_Box conv1_STATE_VARIABLE_IO_28_28;

    func_0(((MR_Box) TypeClassInfo_for_compiler_55), Compiler_12, ((MR_Box) (Globals_8)), ((MR_Box) (ModuleName_9)), ((MR_Box) ((MR_String) ".analysis")), &conv2_MaybeAnalysisFileName_13, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_28_28);
    MaybeAnalysisFileName_13 = ((MR_Word) conv2_MaybeAnalysisFileName_13);
    if (((MR_tag((MR_Word) MaybeAnalysisFileName_13)) == (MR_mktag((MR_Integer) 1))))
    {
      *ModuleResults_10 = mercury__map__init_0_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &analysis__file_scalar_common_2[0]);
    }
    else
    {
      MR_String AnalysisFileName_14 = ((MR_String) (MR_hl_field(MR_mktag(0), MaybeAnalysisFileName_13, (MR_Integer) 0)));
      MR_String CacheDir_15;

      libs__globals__lookup_string_option_3_p_0(Globals_8, (MR_Integer) 673, &CacheDir_15);
      succeeded = (strcmp(CacheDir_15, (MR_String) "") == 0);
      if (succeeded)
        analysis__file__read_module_analysis_results_2_5_p_0(TypeClassInfo_for_compiler_55, Compiler_12, AnalysisFileName_14, ModuleResults_10);
      else
      {
        MR_String CacheFileName_16;
        MR_Word AnalysisTimeResult_17;
        MR_Word CacheTimeResult_18;
        MR_Word Components_64;
        MR_String EscFileName_65;
        MR_Word AnalysisTime_19;
        MR_Word CacheTime_20;
        MR_Word Var_60;

        Components_64 = mercury__string__split_at_separator_2_f_0((MR_Word) &analysis__file_scalar_common_2[7], AnalysisFileName_14);
        EscFileName_65 = mercury__string__join_list_2_f_0((MR_String) ":", Components_64);
        CacheFileName_16 = mercury__dir__f_slash_2_f_0(CacheDir_15, EscFileName_65);
        mercury__io__file_modification_time_4_p_0(AnalysisFileName_14, &AnalysisTimeResult_17);
        mercury__io__file_modification_time_4_p_0(CacheFileName_16, &CacheTimeResult_18);
        succeeded = ((MR_tag((MR_Word) AnalysisTimeResult_17)) == (MR_mktag((MR_Integer) 0)));
        if (succeeded)
        {
          AnalysisTime_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), AnalysisTimeResult_17, (MR_Integer) 0)));
          succeeded = ((MR_tag((MR_Word) CacheTimeResult_18)) == (MR_mktag((MR_Integer) 0)));
          if (succeeded)
          {
            CacheTime_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), CacheTimeResult_18, (MR_Integer) 0)));
            mercury__time____Compare____time_t_0_0(&Var_60, CacheTime_20, AnalysisTime_19);
            succeeded = (Var_60 == (MR_Integer) 1);
            succeeded = !(succeeded);
          }
        }
        if (succeeded)
        {
          MR_Word Unpicklers_21;
          MR_Word UnpickleResult_22;
          MR_Word Type_72;
          MR_Word STATE_VARIABLE_Unpicklers_7_73;
          MR_Word Var_77;
          MR_Word Var_78;
          MR_Word Var_88;

          STATE_VARIABLE_Unpicklers_7_73 = libs__pickle__init_unpicklers_0_f_0();
          Var_77 = mercury__type_desc__type_of_1_f_0((MR_Word) &analysis__analysis__type_ctor_info_some_analysis_result_0);
          Type_72 = mercury__type_desc__type_ctor_1_f_0(Var_77);
          {
            Var_78 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_78, 0) = ((MR_Box) (&analysis__file_scalar_common_9[0]));
            MR_hl_field(MR_mktag(0), Var_78, 1) = ((MR_Box) (analysis__file__read_module_analysis_results_6_p_0_2));
            MR_hl_field(MR_mktag(0), Var_78, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(0), Var_78, 3) = ((MR_Box) (TypeClassInfo_for_compiler_55));
            MR_hl_field(MR_mktag(0), Var_78, 4) = Compiler_12;
          }
          libs__pickle__register_unpickler_4_p_0(Type_72, Var_78, STATE_VARIABLE_Unpicklers_7_73, &Unpicklers_21);
          libs__pickle__unpickle_from_file_5_p_0((MR_Word) &analysis__file_scalar_common_2[1], Unpicklers_21, CacheFileName_16, &UnpickleResult_22);
          if (((MR_tag((MR_Word) UnpickleResult_22)) == (MR_mktag((MR_Integer) 1))))
          {
            MR_Word Error_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), UnpickleResult_22, (MR_Integer) 0)));
            MR_String Var_39;

            mercury__io__write_string_3_p_0((MR_String) "Error reading ");
            mercury__io__write_string_3_p_0(CacheFileName_16);
            mercury__io__write_string_3_p_0((MR_String) ": ");
            Var_39 = mercury__io__error_message_1_f_0(Error_23);
            mercury__io__write_string_3_p_0(Var_39);
            mercury__io__nl_2_p_0();
            analysis__file__read_module_analysis_results_2_5_p_0(TypeClassInfo_for_compiler_55, Compiler_12, AnalysisFileName_14, ModuleResults_10);
            analysis__file__write_analysis_cache_file_4_p_0(CacheFileName_16, *ModuleResults_10);
          }
          else
            *ModuleResults_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), UnpickleResult_22, (MR_Integer) 0)));
        }
        else
        {
          analysis__file__read_module_analysis_results_2_5_p_0(TypeClassInfo_for_compiler_55, Compiler_12, AnalysisFileName_14, ModuleResults_10);
          analysis__file__write_analysis_cache_file_4_p_0(CacheFileName_16, *ModuleResults_10);
        }
      }
    }
  }
}

static void MR_CALL 
analysis__file__write_analysis_cache_file_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;

    analysis__file__pickle_analysis_result_4_p_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
  }
}

static void MR_CALL 
analysis__file__write_analysis_cache_file_4_p_0(
  MR_String CacheFileName_5,
  MR_Word ModuleResults_6)
{
  {
    MR_String TmpFileName_8;
    MR_Word TellRes_9;

    TmpFileName_8 = mercury__string__f_43_43_2_f_0(CacheFileName_5, (MR_String) ".tmp");
    mercury__io__tell_binary_4_p_0(TmpFileName_8, &TellRes_9);
    if ((TellRes_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      MR_Word RenameRes_10;
      MR_Word Var_20;
      MR_Word Type_37;
      MR_Word STATE_VARIABLE_Pickles_5_38;
      MR_Word Var_42;
      MR_Word Var_51;

      STATE_VARIABLE_Pickles_5_38 = libs__pickle__init_picklers_0_f_0();
      Var_42 = mercury__type_desc__type_of_1_f_0((MR_Word) &analysis__analysis__type_ctor_info_some_analysis_result_0);
      Type_37 = mercury__type_desc__type_ctor_1_f_0(Var_42);
      libs__pickle__register_pickler_4_p_0(Type_37, (MR_Word) &analysis__file_scalar_common_2[6], STATE_VARIABLE_Pickles_5_38, &Var_20);
      libs__pickle__pickle_4_p_0((MR_Word) &analysis__file_scalar_common_2[1], Var_20, ((MR_Box) (ModuleResults_6)));
      mercury__io__told_binary_2_p_0();
      mercury__io__rename_file_5_p_0(TmpFileName_8, CacheFileName_5, &RenameRes_10);
      if (!((RenameRes_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))))
      {
        MR_Word Error_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), RenameRes_10, (MR_Integer) 0)));
        MR_String Var_29;
        MR_Word Var_12;

        mercury__io__write_string_3_p_0((MR_String) "Error renaming ");
        mercury__io__write_string_3_p_0(CacheFileName_5);
        mercury__io__write_string_3_p_0((MR_String) ": ");
        Var_29 = mercury__io__error_message_1_f_0(Error_11);
        mercury__io__write_string_3_p_0(Var_29);
        mercury__io__nl_2_p_0();
        mercury__io__remove_file_4_p_0(TmpFileName_8, &Var_12);
      }
    }
    else
    {
      MR_String Var_19;
      MR_Word Error_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), TellRes_9, (MR_Integer) 0)));

      Var_19 = mercury__io__error_message_1_f_0(Error_33);
      {
        mercury__require__unexpected_3_p_0((MR_String) "analysis.file", (MR_String) "predicate \140analysis.file.write_analysis_cache_file\'/4", Var_19);
        return;
      }
    }
  }
}

static void MR_CALL 
analysis__file__read_module_analysis_results_2_5_p_0_4(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_HeadVar__4_51;

    analysis__file__IntroducedFrom__pred__read_module_analysis_results_2__334__1_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5))), &conv1_HeadVar__4_51);
    *wrapper_arg_1 = ((MR_Box) (conv1_HeadVar__4_51));
  }
}

static void MR_CALL 
analysis__file__read_module_analysis_results_2_5_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_Results_37;

    analysis__file__parse_result_entry_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)), ((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv0_STATE_VARIABLE_Results_37);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_Results_37));
  }
}

static void MR_CALL 
analysis__file__read_module_analysis_results_2_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;

    analysis__file__IntroducedFrom__pred__read_module_analysis_results_2__326__1_3_p_0(((MR_String) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))));
  }
}

static void MR_CALL 
analysis__file__read_module_analysis_results_2_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;

    analysis__file__IntroducedFrom__pred__read_module_analysis_results_2__346__1_3_p_0(((MR_String) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))));
  }
}

static void MR_CALL 
analysis__file__read_module_analysis_results_2_5_p_0(
  MR_Word TypeClassInfo_for_compiler_48,
  MR_Box Compiler_6,
  MR_String AnalysisFileName_7,
  MR_Word * ModuleResults_8)
{
  {
    MR_bool succeeded;
    MR_Word ModuleResults0_10;
    MR_Word OpenResult_11;

    ModuleResults0_10 = mercury__map__init_0_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &analysis__file_scalar_common_2[0]);
    mercury__io__open_input_4_p_0(AnalysisFileName_7, &OpenResult_11);
    if (((MR_tag((MR_Word) OpenResult_11)) == (MR_mktag((MR_Integer) 1))))
    {
      MR_Word Var_19;

      {
        Var_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_19, 0) = ((MR_Box) (&analysis__file_scalar_common_3[0]));
        MR_hl_field(MR_mktag(0), Var_19, 1) = ((MR_Box) (analysis__file__read_module_analysis_results_2_5_p_0_1));
        MR_hl_field(MR_mktag(0), Var_19, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), Var_19, 3) = ((MR_Box) (AnalysisFileName_7));
      }
      analysis__debug_msg_3_p_0(Var_19);
      *ModuleResults_8 = ModuleResults0_10;
    }
    else
    {
      MR_Word TypeCtorInfo_18_74;
      MR_Word Stream_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), OpenResult_11, (MR_Integer) 0)));
      MR_Word Results_13;
      MR_Word Var_29;
      MR_Word TermResult_64;
      MR_Word NumberTerm_66;
      MR_Integer Var_70;
      MR_Integer Var_77;
      MR_Word Var_65;
      MR_Word Var_40;
      MR_Word Var_42;

      {
        Var_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_29, 0) = ((MR_Box) (&analysis__file_scalar_common_3[0]));
        MR_hl_field(MR_mktag(0), Var_29, 1) = ((MR_Box) (analysis__file__read_module_analysis_results_2_5_p_0_2));
        MR_hl_field(MR_mktag(0), Var_29, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), Var_29, 3) = ((MR_Box) (AnalysisFileName_7));
      }
      analysis__debug_msg_3_p_0(Var_29);
      TypeCtorInfo_18_74 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
      mercury__parser__read_term_4_p_0(TypeCtorInfo_18_74, Stream_12, &TermResult_64);
      succeeded = ((MR_tag((MR_Word) TermResult_64)) == (MR_mktag((MR_Integer) 2)));
      if (succeeded)
      {
        Var_65 = ((MR_Word) (MR_hl_field(MR_mktag(2), TermResult_64, (MR_Integer) 0)));
        NumberTerm_66 = ((MR_Word) (MR_hl_field(MR_mktag(2), TermResult_64, (MR_Integer) 1)));
        Var_70 = (MR_Integer) 6;
        succeeded = mercury__term__decimal_term_to_int_2_p_0(TypeCtorInfo_18_74, NumberTerm_66, &Var_77);
        if (succeeded)
          succeeded = (Var_70 == Var_77);
      }
      if (!(succeeded))
      {
        MR_String Msg_67;
        MR_String Var_72;
        MR_Word Var_73;

        Var_72 = mercury__string__string_1_f_0((MR_Word) &analysis__file_scalar_common_1[4], ((MR_Box) (TermResult_64)));
        Msg_67 = mercury__string__f_43_43_2_f_0((MR_String) "bad analysis file version: ", Var_72);
        Var_73 = (MR_Word) Msg_67;
        {
          mercury__exception__throw_1_p_0((MR_Word) &analysis__file__analysis__file__type_ctor_info_invalid_analysis_file_0, ((MR_Box) (Var_73)));
          return;
        }
      }
      {
        Var_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_42, 0) = ((MR_Box) (&analysis__file_scalar_common_5[0]));
        MR_hl_field(MR_mktag(0), Var_42, 1) = ((MR_Box) (analysis__file__read_module_analysis_results_2_5_p_0_3));
        MR_hl_field(MR_mktag(0), Var_42, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
        MR_hl_field(MR_mktag(0), Var_42, 3) = ((MR_Box) (TypeClassInfo_for_compiler_48));
        MR_hl_field(MR_mktag(0), Var_42, 4) = Compiler_6;
      }
      {
        Var_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_40, 0) = ((MR_Box) (&analysis__file_scalar_common_6[0]));
        MR_hl_field(MR_mktag(0), Var_40, 1) = ((MR_Box) (analysis__file__read_module_analysis_results_2_5_p_0_4));
        MR_hl_field(MR_mktag(0), Var_40, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
        MR_hl_field(MR_mktag(0), Var_40, 3) = ((MR_Box) (ModuleResults0_10));
        MR_hl_field(MR_mktag(0), Var_40, 4) = ((MR_Box) (Stream_12));
        MR_hl_field(MR_mktag(0), Var_40, 5) = ((MR_Box) (Var_42));
      }
      mercury__exception__try_io_4_p_0((MR_Word) &analysis__file_scalar_common_2[1], Var_40, &Results_13);
      mercury__io__close_input_3_p_0(Stream_12);
      if (((MR_tag((MR_Word) Results_13)) == (MR_mktag((MR_Integer) 2))))
      {
        {
          mercury__exception__rethrow_1_p_0((MR_Word) &analysis__file_scalar_common_2[1], Results_13);
          return;
        }
      }
      else
        *ModuleResults_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), Results_13, (MR_Integer) 0)));
    }
  }
}

void MR_CALL 
analysis__file__write_module_overall_status_6_p_0(
  MR_Word Info_7,
  MR_Word Globals_8,
  MR_Word ModuleName_9,
  MR_Word Status_10)
{
  {
    MR_Word TypeClassInfo_for_compiler_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 0)));
    MR_String FileName_12;
    MR_Word OpenResult_13;
    MR_Box Var_18 = (MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 1));
    MR_Word Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 2)));
    MR_Word Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 3)));
    MR_Word Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 4)));
    MR_Word Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 5)));
    MR_Word Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 6)));
    MR_Word Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 7)));
    MR_Word Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 8)));
    MR_Word Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 9)));
    MR_Word Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 10)));
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_compiler_41, (MR_Integer) 0)), (MR_Integer) 9)));
    MR_Box conv2_FileName_12;
    MR_Box conv1_STATE_VARIABLE_IO_20_20;

    func_0(((MR_Box) TypeClassInfo_for_compiler_41), Var_18, ((MR_Box) (Globals_8)), ((MR_Box) (ModuleName_9)), ((MR_Box) ((MR_String) ".analysis_status")), &conv2_FileName_12, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_20_20);
    FileName_12 = ((MR_String) conv2_FileName_12);
    mercury__io__open_output_4_p_0(FileName_12, &OpenResult_13);
    if (((MR_tag((MR_Word) OpenResult_13)) == (MR_mktag((MR_Integer) 1))))
    {
      MR_Word IOError_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), OpenResult_13, (MR_Integer) 0)));
      MR_String Var_24;

      Var_24 = mercury__io__error_message_1_f_0(IOError_15);
      {
        mercury__require__unexpected_3_p_0((MR_String) "analysis.file", (MR_String) "predicate \140analysis.file.write_module_overall_status\'/6", Var_24);
        return;
      }
    }
    else
    {
      MR_Word Stream_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), OpenResult_13, (MR_Integer) 0)));

      switch (Status_10) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            mercury__io__write_string_4_p_0(Stream_14, (MR_String) "invalid.\n");
          }
          break;
        case (MR_Integer) 2:
          {
            mercury__io__write_string_4_p_0(Stream_14, (MR_String) "optimal.\n");
          }
          break;
        case (MR_Integer) 1:
          {
            mercury__io__write_string_4_p_0(Stream_14, (MR_String) "suboptimal.\n");
          }
          break;
      }
      mercury__io__close_output_3_p_0(Stream_14);
    }
  }
}

void MR_CALL 
analysis__file__read_module_overall_status_6_p_0(
  MR_Word TypeClassInfo_for_compiler_26,
  MR_Box Compiler_7,
  MR_Word Globals_8,
  MR_Word ModuleName_9,
  MR_Word * ModuleStatus_10)
{
  {
    MR_bool succeeded;
    MR_Word MaybeFileName_12;
    MR_Word ModuleStatus0_14;
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_compiler_26, (MR_Integer) 0)), (MR_Integer) 8)));
    MR_Box conv2_MaybeFileName_12;
    MR_Box conv1_STATE_VARIABLE_IO_22_22;

    func_0(((MR_Box) TypeClassInfo_for_compiler_26), Compiler_7, ((MR_Box) (Globals_8)), ((MR_Box) (ModuleName_9)), ((MR_Box) ((MR_String) ".analysis_status")), &conv2_MaybeFileName_12, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_22_22);
    MaybeFileName_12 = ((MR_Word) conv2_MaybeFileName_12);
    if (((MR_tag((MR_Word) MaybeFileName_12)) == (MR_mktag((MR_Integer) 1))))
      ModuleStatus0_14 = (MR_Integer) 2;
    else
    {
      MR_String FileName_13 = ((MR_String) (MR_hl_field(MR_mktag(0), MaybeFileName_12, (MR_Integer) 0)));
      MR_Word OpenResult_32;

      mercury__io__open_input_4_p_0(FileName_13, &OpenResult_32);
      if (((MR_tag((MR_Word) OpenResult_32)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_String Var_40;
        MR_Word IOError_55 = ((MR_Word) (MR_hl_field(MR_mktag(1), OpenResult_32, (MR_Integer) 0)));

        Var_40 = mercury__io__error_message_1_f_0(IOError_55);
        {
          mercury__require__unexpected_3_p_0((MR_String) "analysis.file", (MR_String) "predicate \140analysis.file.read_module_overall_status_2\'/4", Var_40);
          return;
        }
      }
      else
      {
        MR_Word Stream_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), OpenResult_32, (MR_Integer) 0)));
        MR_Word ReadResult_34;

        mercury__io__read_line_as_string_4_p_0(Stream_33, &ReadResult_34);
        mercury__io__close_input_3_p_0(Stream_33);
        switch (MR_tag((MR_Word) ReadResult_34)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              {
                mercury__require__unexpected_3_p_0((MR_String) "analysis.file", (MR_String) "predicate \140analysis.file.read_module_overall_status_2\'/4", (MR_String) "unexpected eof");
                return;
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_String String_35 = ((MR_String) (MR_hl_field(MR_mktag(1), ReadResult_34, (MR_Integer) 0)));

              succeeded = mercury__string__prefix_2_p_0(String_35, (MR_String) "optimal.");
              if (succeeded)
                ModuleStatus0_14 = (MR_Integer) 2;
              else
              {
                succeeded = mercury__string__prefix_2_p_0(String_35, (MR_String) "suboptimal.");
                if (succeeded)
                  ModuleStatus0_14 = (MR_Integer) 1;
                else
                {
                  succeeded = mercury__string__prefix_2_p_0(String_35, (MR_String) "invalid.");
                  if (succeeded)
                    ModuleStatus0_14 = (MR_Integer) 0;
                  else
                  {
                    {
                      mercury__require__unexpected_3_p_0((MR_String) "analysis.file", (MR_String) "predicate \140analysis.file.read_module_overall_status_2\'/4", (MR_String) "unexpected line");
                      return;
                    }
                  }
                }
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word IOError_36 = ((MR_Word) (MR_hl_field(MR_mktag(2), ReadResult_34, (MR_Integer) 0)));
              MR_String Var_45;

              Var_45 = mercury__io__error_message_1_f_0(IOError_36);
              {
                mercury__require__unexpected_3_p_0((MR_String) "analysis.file", (MR_String) "predicate \140analysis.file.read_module_overall_status_2\'/4", Var_45);
                return;
              }
            }
            break;
        }
      }
    }
    switch (ModuleStatus0_14) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
      case (MR_Integer) 1:
        *ModuleStatus_10 = ModuleStatus0_14;
        break;
      case (MR_Integer) 2:
        {
          MR_Word MaybeRequestFileName_16;
          void MR_CALL (* func_3)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_compiler_26, (MR_Integer) 0)), (MR_Integer) 8)));
          MR_Box conv5_MaybeRequestFileName_16;
          MR_Box conv4_STATE_VARIABLE_IO_20;

          func_3(((MR_Box) TypeClassInfo_for_compiler_26), Compiler_7, ((MR_Box) (Globals_8)), ((MR_Box) (ModuleName_9)), ((MR_Box) ((MR_String) ".request")), &conv5_MaybeRequestFileName_16, ((MR_Box) ((MR_Integer) 0)), &conv4_STATE_VARIABLE_IO_20);
          MaybeRequestFileName_16 = ((MR_Word) conv5_MaybeRequestFileName_16);
          if (((MR_tag((MR_Word) MaybeRequestFileName_16)) == (MR_mktag((MR_Integer) 1))))
            *ModuleStatus_10 = ModuleStatus0_14;
          else
            *ModuleStatus_10 = (MR_Integer) 1;
        }
        break;
    }
  }
}

static MR_bool MR_CALL 
analysis__file____Unify____dummy_answer_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = analysis__file____Unify____dummy_answer_0_0();
    return succeeded;
  }
}

static void MR_CALL 
analysis__file____Compare____dummy_answer_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    analysis__file____Compare____dummy_answer_0_0(&conv0_HeadVar__1_1);
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
analysis__file____Unify____invalid_analysis_file_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = analysis__file____Unify____invalid_analysis_file_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
analysis__file____Compare____invalid_analysis_file_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    analysis__file____Compare____invalid_analysis_file_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
analysis__file____Unify____parse_entry_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_bool succeeded;

    succeeded = analysis__file____Unify____parse_entry_1_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    return succeeded;
  }
}

static void MR_CALL 
analysis__file____Compare____parse_entry_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  {
    MR_Word conv0_HeadVar__1_1;

    analysis__file____Compare____parse_entry_1_0(((MR_Word) wrapper_arg_1), &conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_3), ((MR_Word) wrapper_arg_4));
    *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
analysis__file____Unify____write_entry_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_bool succeeded;

    succeeded = analysis__file____Unify____write_entry_1_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    return succeeded;
  }
}

static void MR_CALL 
analysis__file____Compare____write_entry_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  {
    MR_Word conv0_HeadVar__1_1;

    analysis__file____Compare____write_entry_1_0(((MR_Word) wrapper_arg_1), &conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_3), ((MR_Word) wrapper_arg_4));
    *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_Box MR_CALL 
analysis__file__ClassMethod_for_analysis__to_term____analysis__file__dummy_answer__arity0______analysis__to_term_1_1_f_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_Term_3;

    conv0_Term_3 = analysis__file__ClassMethod_for_analysis__to_term____analysis__file__dummy_answer__arity0______analysis__to_term_1_1_f_0();
    wrapper_arg_2 = ((MR_Box) (conv0_Term_3));
    return wrapper_arg_2;
  }
}

static MR_bool MR_CALL 
analysis__file__ClassMethod_for_analysis__to_term____analysis__file__dummy_answer__arity0______analysis__from_term_2_2_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = analysis__file__ClassMethod_for_analysis__to_term____analysis__file__dummy_answer__arity0______analysis__from_term_2_2_p_0(((MR_Word) wrapper_arg_1));
    return succeeded;
  }
}

static MR_bool MR_CALL 
analysis__file__ClassMethod_for_analysis__partial_order____analysis__no_func_info__arity0__analysis__file__dummy_answer__arity0______analysis__more_precise_than_3_3_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = analysis__file__ClassMethod_for_analysis__partial_order____analysis__no_func_info__arity0__analysis__file__dummy_answer__arity0______analysis__more_precise_than_3_3_p_0();
    return succeeded;
  }
}

static MR_bool MR_CALL 
analysis__file__ClassMethod_for_analysis__partial_order____analysis__no_func_info__arity0__analysis__file__dummy_answer__arity0______analysis__equivalent_3_3_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = analysis__file__ClassMethod_for_analysis__partial_order____analysis__no_func_info__arity0__analysis__file__dummy_answer__arity0______analysis__equivalent_3_3_p_0();
    return succeeded;
  }
}

static MR_Box MR_CALL 
analysis__file__ClassMethod_for_analysis__analysis____analysis__no_func_info__arity0__analysis__any_call__arity0__analysis__file__dummy_answer__arity0______analysis__analysis_name_2_2_f_0_10001(
  MR_Box closure_arg)
{
  {
    MR_Box wrapper_arg_3;
    MR_Box closure = closure_arg;
    MR_String conv0_HeadVar__3_3;

    conv0_HeadVar__3_3 = analysis__file__ClassMethod_for_analysis__analysis____analysis__no_func_info__arity0__analysis__any_call__arity0__analysis__file__dummy_answer__arity0______analysis__analysis_name_2_2_f_0();
    wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__3_3));
    return wrapper_arg_3;
  }
}

static MR_Box MR_CALL 
analysis__file__ClassMethod_for_analysis__analysis____analysis__no_func_info__arity0__analysis__any_call__arity0__analysis__file__dummy_answer__arity0______analysis__analysis_version_number_2_2_f_0_10001(
  MR_Box closure_arg)
{
  {
    MR_Box wrapper_arg_3;
    MR_Box closure = closure_arg;
    MR_Integer conv0_HeadVar__3_3;

    conv0_HeadVar__3_3 = analysis__file__ClassMethod_for_analysis__analysis____analysis__no_func_info__arity0__analysis__any_call__arity0__analysis__file__dummy_answer__arity0______analysis__analysis_version_number_2_2_f_0();
    wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__3_3));
    return wrapper_arg_3;
  }
}

static MR_Box MR_CALL 
analysis__file__ClassMethod_for_analysis__analysis____analysis__no_func_info__arity0__analysis__any_call__arity0__analysis__file__dummy_answer__arity0______analysis__preferred_fixpoint_type_2_2_f_0_10001(
  MR_Box closure_arg)
{
  {
    MR_Box wrapper_arg_3;
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__3_3;

    conv0_HeadVar__3_3 = analysis__file__ClassMethod_for_analysis__analysis____analysis__no_func_info__arity0__analysis__any_call__arity0__analysis__file__dummy_answer__arity0______analysis__preferred_fixpoint_type_2_2_f_0();
    wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__3_3));
    return wrapper_arg_3;
  }
}

static MR_Box MR_CALL 
analysis__file__ClassMethod_for_analysis__analysis____analysis__no_func_info__arity0__analysis__any_call__arity0__analysis__file__dummy_answer__arity0______analysis__bottom_2_2_f_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_3;
    MR_Box closure = closure_arg;

    analysis__file__ClassMethod_for_analysis__analysis____analysis__no_func_info__arity0__analysis__any_call__arity0__analysis__file__dummy_answer__arity0______analysis__bottom_2_2_f_0();
    return wrapper_arg_3;
  }
}

static MR_Box MR_CALL 
analysis__file__ClassMethod_for_analysis__analysis____analysis__no_func_info__arity0__analysis__any_call__arity0__analysis__file__dummy_answer__arity0______analysis__top_2_2_f_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_3;
    MR_Box closure = closure_arg;

    analysis__file__ClassMethod_for_analysis__analysis____analysis__no_func_info__arity0__analysis__any_call__arity0__analysis__file__dummy_answer__arity0______analysis__top_2_2_f_0();
    return wrapper_arg_3;
  }
}

static void MR_CALL 
analysis__file__ClassMethod_for_analysis__analysis____analysis__no_func_info__arity0__analysis__any_call__arity0__analysis__file__dummy_answer__arity0______analysis__get_func_info_6_6_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_6)
{
  {
    MR_Box closure = closure_arg;

    analysis__file__ClassMethod_for_analysis__analysis____analysis__no_func_info__arity0__analysis__any_call__arity0__analysis__file__dummy_answer__arity0______analysis__get_func_info_6_6_p_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
  }
}

void mercury__analysis__file__init(void)
{
}

void mercury__analysis__file__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&analysis__file__analysis__file__type_ctor_info_dummy_answer_0);
	MR_register_type_ctor_info(&analysis__file__analysis__file__type_ctor_info_invalid_analysis_file_0);
	MR_register_type_ctor_info(&analysis__file__analysis__file__type_ctor_info_parse_entry_1);
	MR_register_type_ctor_info(&analysis__file__analysis__file__type_ctor_info_write_entry_1);
}

void mercury__analysis__file__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__analysis__file__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module analysis.file.
