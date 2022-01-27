/*
** Automatically generated from `intermod_analysis.m'
** by the Mercury compiler,
** version rotd-2021-12-07
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


// :- module transform_hlds.intermod_analysis.
// :- implementation.

/*
INIT mercury__transform_hlds__intermod_analysis__init
ENDINIT
*/

#include "transform_hlds.intermod_analysis.mih"


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
#include "one_or_more.mih"
#include "one_or_more_map.mih"
#include "ops.mih"
#include "pair.mih"
#include "parse_tree.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "queue.mih"
#include "recompilation.mih"
#include "robdd.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "set_tree234.mih"
#include "sparse_bitset.mih"
#include "stack.mih"
#include "std_util.mih"
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
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.proc_requests.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_mode.mih"
#include "hlds.hlds_class.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_cons.mih"
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
#include "libs.globals.mih"
#include "libs.lp_rational.mih"
#include "libs.maybe_succeeded.mih"
#include "libs.polyhedron.mih"
#include "libs.rat.mih"
#include "libs.timestamp.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.sym_name.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_kind.mih"
#include "parse_tree.file_names.mih"
#include "parse_tree.item_util.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.mercury_to_mercury.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.parse_tree_out.mih"
#include "parse_tree.parse_tree_out_info.mih"
#include "parse_tree.parse_tree_out_pragma.mih"
#include "parse_tree.parse_tree_out_term.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_event.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_data_used_modules.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.set_of_var.mih"
#include "string.format.mih"
#include "string.parse_util.mih"
#include "transform_hlds.intermod_order_pred_info.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_constr_util.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"




static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__intermod_analysis__cord__pti_cord_1__plain_parse_tree__prog_item__type_ctor_info_pragma_info_termination_info_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__intermod_analysis__cord__pti_cord_1__plain_parse_tree__prog_item__type_ctor_info_pragma_info_termination2_info_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__intermod_analysis__cord__pti_cord_1__plain_parse_tree__prog_item__type_ctor_info_pragma_info_exceptions_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__intermod_analysis__cord__pti_cord_1__plain_parse_tree__prog_item__type_ctor_info_pragma_info_trailing_info_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__intermod_analysis__cord__pti_cord_1__plain_parse_tree__prog_item__type_ctor_info_pragma_info_mm_tabling_info_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__intermod_analysis__cord__pti_cord_1__plain_parse_tree__prog_item__type_ctor_info_pragma_info_structure_sharing_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__intermod_analysis__cord__pti_cord_1__plain_parse_tree__prog_item__type_ctor_info_pragma_info_structure_reuse_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__intermod_analysis__parse_tree__prog_item__pti_item_pragma_info_1__plain_parse_tree__prog_item__type_ctor_info_pragma_info_unused_args_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__intermod_analysis__parse_tree__prog_item__pti_item_pragma_info_1__plain_parse_tree__prog_item__type_ctor_info_pragma_info_termination_info_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__intermod_analysis__parse_tree__prog_item__pti_item_pragma_info_1__plain_parse_tree__prog_item__type_ctor_info_pragma_info_termination2_info_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__intermod_analysis__parse_tree__prog_item__pti_item_pragma_info_1__plain_parse_tree__prog_item__type_ctor_info_pragma_info_exceptions_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__intermod_analysis__parse_tree__prog_item__pti_item_pragma_info_1__plain_parse_tree__prog_item__type_ctor_info_pragma_info_trailing_info_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__intermod_analysis__parse_tree__prog_item__pti_item_pragma_info_1__plain_parse_tree__prog_item__type_ctor_info_pragma_info_mm_tabling_info_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__intermod_analysis__parse_tree__prog_item__pti_item_pragma_info_1__plain_parse_tree__prog_item__type_ctor_info_pragma_info_structure_sharing_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__intermod_analysis__parse_tree__prog_item__pti_item_pragma_info_1__plain_parse_tree__prog_item__type_ctor_info_pragma_info_structure_reuse_0;

static const MR_VA_PseudoTypeInfo_Struct1 transform_hlds__intermod_analysis____vpti_pred_1__plain_libs__lp_rational__type_ctor_info_constraint_0;

static const MR_FA_TypeInfo_Struct1 transform_hlds__intermod_analysis__term__ti_var_1term__type_ctor_info_generic_0;

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__intermod_analysis__tree234__pti_tree234_2__plain_term__ti_var_1term__type_ctor_info_generic_0__plain_builtin__type_ctor_info_int_0;

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__intermod_analysis__pair__pti_pair_2__plain_term__ti_var_1term__type_ctor_info_generic_0__plain_libs__rat__type_ctor_info_rat_0;

static const MR_EnumFunctorDesc transform_hlds__intermod_analysis__transform_hlds__intermod_analysis__enum_functor_desc_maybe_should_write_0_0;

static const MR_EnumFunctorDesc transform_hlds__intermod_analysis__transform_hlds__intermod_analysis__enum_functor_desc_maybe_should_write_0_1;

static const MR_EnumFunctorDescPtr transform_hlds__intermod_analysis__transform_hlds__intermod_analysis__enum_ordinal_ordered_maybe_should_write_0[2];

static const MR_EnumFunctorDescPtr transform_hlds__intermod_analysis__transform_hlds__intermod_analysis__enum_name_ordered_maybe_should_write_0[2];

static const MR_Integer transform_hlds__intermod_analysis__transform_hlds__intermod_analysis__functor_number_map_maybe_should_write_0[2];

static const MR_EnumFunctorDesc transform_hlds__intermod_analysis__transform_hlds__intermod_analysis__enum_functor_desc_should_write_for_0_0;

static const MR_EnumFunctorDesc transform_hlds__intermod_analysis__transform_hlds__intermod_analysis__enum_functor_desc_should_write_for_0_1;

static const MR_EnumFunctorDescPtr transform_hlds__intermod_analysis__transform_hlds__intermod_analysis__enum_ordinal_ordered_should_write_for_0[2];

static const MR_EnumFunctorDescPtr transform_hlds__intermod_analysis__transform_hlds__intermod_analysis__enum_name_ordered_should_write_for_0[2];

static const MR_Integer transform_hlds__intermod_analysis__transform_hlds__intermod_analysis__functor_number_map_should_write_for_0[2];

static MR_bool MR_CALL 
transform_hlds__intermod_analysis__IntroducedFrom__pred__maybe_constr_arg_size_info_to_arg_size_constr__572__1_2_p_0(
  MR_Word HeadVar__1_13,
  MR_Word HeadVar__2_16);

static MR_Word MR_CALL 
transform_hlds__intermod_analysis__IntroducedFrom__func__write_trans_opt_file__257__1_1_f_0(
  MR_Word HeadVar__1_82);

static MR_Word MR_CALL 
transform_hlds__intermod_analysis__IntroducedFrom__func__write_trans_opt_file__256__1_1_f_0(
  MR_Word HeadVar__1_77);

static MR_Word MR_CALL 
transform_hlds__intermod_analysis__IntroducedFrom__func__write_trans_opt_file__255__1_1_f_0(
  MR_Word HeadVar__1_72);

static MR_Word MR_CALL 
transform_hlds__intermod_analysis__IntroducedFrom__func__write_trans_opt_file__254__1_1_f_0(
  MR_Word HeadVar__1_67);

static MR_Word MR_CALL 
transform_hlds__intermod_analysis__IntroducedFrom__func__write_trans_opt_file__253__1_1_f_0(
  MR_Word HeadVar__1_62);

static MR_Word MR_CALL 
transform_hlds__intermod_analysis__IntroducedFrom__func__write_trans_opt_file__252__1_1_f_0(
  MR_Word HeadVar__1_57);

static MR_Word MR_CALL 
transform_hlds__intermod_analysis__IntroducedFrom__func__write_trans_opt_file__251__1_1_f_0(
  MR_Word HeadVar__1_52);

static MR_Word MR_CALL 
transform_hlds__intermod_analysis__IntroducedFrom__func__append_analysis_pragmas_to_opt_file__220__1_1_f_0(
  MR_Word HeadVar__1_299);

static MR_Word MR_CALL 
transform_hlds__intermod_analysis__IntroducedFrom__func__append_analysis_pragmas_to_opt_file__218__1_1_f_0(
  MR_Word HeadVar__1_294);

static MR_Word MR_CALL 
transform_hlds__intermod_analysis__IntroducedFrom__func__append_analysis_pragmas_to_opt_file__216__1_1_f_0(
  MR_Word HeadVar__1_289);

static MR_Word MR_CALL 
transform_hlds__intermod_analysis__IntroducedFrom__func__append_analysis_pragmas_to_opt_file__214__1_1_f_0(
  MR_Word HeadVar__1_284);

static MR_Word MR_CALL 
transform_hlds__intermod_analysis__IntroducedFrom__func__append_analysis_pragmas_to_opt_file__212__1_1_f_0(
  MR_Word HeadVar__1_279);

static MR_Word MR_CALL 
transform_hlds__intermod_analysis__IntroducedFrom__func__append_analysis_pragmas_to_opt_file__210__1_1_f_0(
  MR_Word HeadVar__1_274);

static MR_Word MR_CALL 
transform_hlds__intermod_analysis__IntroducedFrom__func__append_analysis_pragmas_to_opt_file__208__1_1_f_0(
  MR_Word HeadVar__1_269);

static MR_Word MR_CALL 
transform_hlds__intermod_analysis__IntroducedFrom__func__append_analysis_pragmas_to_opt_file__206__1_1_f_0(
  MR_Word HeadVar__1_264);

static void MR_CALL 
transform_hlds__intermod_analysis__gather_pragma_structure_reuse_for_proc_6_p_0(
  MR_Word ModuleInfo_7,
  MR_Word OrderPredInfo_8,
  MR_Integer ProcId_9,
  MR_Word ProcInfo_10,
  MR_Word STATE_VARIABLE_ReuseInfosCord_0_32,
  MR_Word * STATE_VARIABLE_ReuseInfosCord_33);

static void MR_CALL 
transform_hlds__intermod_analysis__gather_pragma_structure_reuse_for_pred_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
transform_hlds__intermod_analysis__gather_pragma_structure_reuse_for_pred_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word OrderPredInfo_6,
  MR_Word STATE_VARIABLE_ReuseInfosCord_0_14,
  MR_Word * STATE_VARIABLE_ReuseInfosCord_15);

static void MR_CALL 
transform_hlds__intermod_analysis__gather_pragma_structure_sharing_for_proc_6_p_0(
  MR_Word ModuleInfo_7,
  MR_Word OrderPredInfo_8,
  MR_Integer ProcId_9,
  MR_Word ProcInfo_10,
  MR_Word STATE_VARIABLE_SharingInfosCord_0_32,
  MR_Word * STATE_VARIABLE_SharingInfosCord_33);

static void MR_CALL 
transform_hlds__intermod_analysis__gather_pragma_structure_sharing_for_pred_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
transform_hlds__intermod_analysis__gather_pragma_structure_sharing_for_pred_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word OrderPredInfo_6,
  MR_Word STATE_VARIABLE_SharingInfosCord_0_14,
  MR_Word * STATE_VARIABLE_SharingInfosCord_15);

static void MR_CALL 
transform_hlds__intermod_analysis__gather_pragma_mm_tabling_info_for_proc_6_p_0(
  MR_Word ModuleInfo_7,
  MR_Word OrderPredInfo_8,
  MR_Integer ProcId_9,
  MR_Word ProcInfo_10,
  MR_Word STATE_VARIABLE_MMTablingInfosCord_0_27,
  MR_Word * STATE_VARIABLE_MMTablingInfosCord_28);

static void MR_CALL 
transform_hlds__intermod_analysis__gather_pragma_mm_tabling_info_for_pred_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
transform_hlds__intermod_analysis__gather_pragma_mm_tabling_info_for_pred_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word OrderPredInfo_6,
  MR_Word STATE_VARIABLE_MMTablingInfosCord_0_14,
  MR_Word * STATE_VARIABLE_MMTablingInfosCord_15);

static void MR_CALL 
transform_hlds__intermod_analysis__gather_pragma_trailing_info_for_proc_6_p_0(
  MR_Word ModuleInfo_7,
  MR_Word OrderPredInfo_8,
  MR_Integer ProcId_9,
  MR_Word ProcInfo_10,
  MR_Word STATE_VARIABLE_TrailingInfosCord_0_27,
  MR_Word * STATE_VARIABLE_TrailingInfosCord_28);

static void MR_CALL 
transform_hlds__intermod_analysis__gather_pragma_trailing_info_for_pred_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
transform_hlds__intermod_analysis__gather_pragma_trailing_info_for_pred_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word OrderPredInfo_6,
  MR_Word STATE_VARIABLE_TrailingInfosCord_0_14,
  MR_Word * STATE_VARIABLE_TrailingInfosCord_15);

static void MR_CALL 
transform_hlds__intermod_analysis__gather_pragma_exceptions_for_proc_6_p_0(
  MR_Word ModuleInfo_7,
  MR_Word OrderPredInfo_8,
  MR_Integer ProcId_9,
  MR_Word ProcInfo_10,
  MR_Word STATE_VARIABLE_ExceptionsCord_0_32,
  MR_Word * STATE_VARIABLE_ExceptionsCord_33);

static void MR_CALL 
transform_hlds__intermod_analysis__gather_pragma_exceptions_for_pred_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
transform_hlds__intermod_analysis__gather_pragma_exceptions_for_pred_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word OrderPredInfo_6,
  MR_Word STATE_VARIABLE_ExceptionsCord_0_14,
  MR_Word * STATE_VARIABLE_ExceptionsCord_15);

static void MR_CALL 
transform_hlds__intermod_analysis__lp_term_to_arg_size_term_3_p_0(
  MR_Word VarToVarIdMap_4,
  MR_Word LPTerm_5,
  MR_Word * ArgSizeTerm_6);

static void MR_CALL 
transform_hlds__intermod_analysis__lp_rational_constraint_to_arg_size_constr_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
transform_hlds__intermod_analysis__lp_rational_constraint_to_arg_size_constr_3_p_0(
  MR_Word VarToVarIdMap_4,
  MR_Word LPConstraint_5,
  MR_Word * ArgSizeConstr_6);

static void MR_CALL 
transform_hlds__intermod_analysis__gather_pragma_termination2_for_proc_5_p_0(
  MR_Word OrderPredInfo_6,
  MR_Integer _ProcId_7,
  MR_Word ProcInfo_8,
  MR_Word STATE_VARIABLE_TermInfo2sCord_0_35,
  MR_Word * STATE_VARIABLE_TermInfo2sCord_36);

static void MR_CALL 
transform_hlds__intermod_analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_97_116_104_101_114_95_112_114_97_103_109_97_95_116_101_114_109_105_110_97_116_105_111_110_50_95_102_111_114_95_112_114_111_99_95_95_91_50_93_95_48_5_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_bool MR_CALL 
transform_hlds__intermod_analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_97_116_104_101_114_95_112_114_97_103_109_97_95_116_101_114_109_105_110_97_116_105_111_110_50_95_102_111_114_95_112_114_111_99_95_95_91_50_93_95_48_5_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
transform_hlds__intermod_analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_97_116_104_101_114_95_112_114_97_103_109_97_95_116_101_114_109_105_110_97_116_105_111_110_50_95_102_111_114_95_112_114_111_99_95_95_91_50_93_95_48_5_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
transform_hlds__intermod_analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_97_116_104_101_114_95_112_114_97_103_109_97_95_116_101_114_109_105_110_97_116_105_111_110_50_95_102_111_114_95_112_114_111_99_95_95_91_50_93_95_48_5_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_bool MR_CALL 
transform_hlds__intermod_analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_97_116_104_101_114_95_112_114_97_103_109_97_95_116_101_114_109_105_110_97_116_105_111_110_50_95_102_111_114_95_112_114_111_99_95_95_91_50_93_95_48_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
transform_hlds__intermod_analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_97_116_104_101_114_95_112_114_97_103_109_97_95_116_101_114_109_105_110_97_116_105_111_110_50_95_102_111_114_95_112_114_111_99_95_95_91_50_93_95_48_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
transform_hlds__intermod_analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_97_116_104_101_114_95_112_114_97_103_109_97_95_116_101_114_109_105_110_97_116_105_111_110_50_95_102_111_114_95_112_114_111_99_95_95_91_50_93_95_48_5_p_0(
  MR_Word OrderPredInfo_6,
  MR_Word ProcInfo_8,
  MR_Word STATE_VARIABLE_TermInfo2sCord_0_35,
  MR_Word * STATE_VARIABLE_TermInfo2sCord_36);

static void MR_CALL 
transform_hlds__intermod_analysis__gather_pragma_termination2_for_pred_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
transform_hlds__intermod_analysis__gather_pragma_termination2_for_pred_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word OrderPredInfo_6,
  MR_Word STATE_VARIABLE_TermInfo2sCord_0_20,
  MR_Word * STATE_VARIABLE_TermInfo2sCord_21);

static void MR_CALL 
transform_hlds__intermod_analysis__gather_pragma_termination_for_proc_5_p_0(
  MR_Word OrderPredInfo_6,
  MR_Integer _ProcId_7,
  MR_Word ProcInfo_8,
  MR_Word STATE_VARIABLE_TermInfosCord_0_24,
  MR_Word * STATE_VARIABLE_TermInfosCord_25);

static void MR_CALL 
transform_hlds__intermod_analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_97_116_104_101_114_95_112_114_97_103_109_97_95_116_101_114_109_105_110_97_116_105_111_110_95_102_111_114_95_112_114_111_99_95_95_91_50_93_95_48_5_p_0(
  MR_Word OrderPredInfo_6,
  MR_Word ProcInfo_8,
  MR_Word STATE_VARIABLE_TermInfosCord_0_24,
  MR_Word * STATE_VARIABLE_TermInfosCord_25);

static void MR_CALL 
transform_hlds__intermod_analysis__gather_pragma_termination_for_pred_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
transform_hlds__intermod_analysis__gather_pragma_termination_for_pred_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word OrderPredInfo_6,
  MR_Word STATE_VARIABLE_TermInfosCord_0_20,
  MR_Word * STATE_VARIABLE_TermInfosCord_21);

static MR_Box MR_CALL 
transform_hlds__intermod_analysis__write_trans_opt_file_5_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
transform_hlds__intermod_analysis__write_trans_opt_file_5_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
transform_hlds__intermod_analysis__write_trans_opt_file_5_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
transform_hlds__intermod_analysis__write_trans_opt_file_5_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
transform_hlds__intermod_analysis__write_trans_opt_file_5_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
transform_hlds__intermod_analysis__write_trans_opt_file_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
transform_hlds__intermod_analysis__write_trans_opt_file_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
transform_hlds__intermod_analysis__append_analysis_pragmas_to_opt_file_7_p_0_9(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
transform_hlds__intermod_analysis__append_analysis_pragmas_to_opt_file_7_p_0_8(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
transform_hlds__intermod_analysis__append_analysis_pragmas_to_opt_file_7_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
transform_hlds__intermod_analysis__append_analysis_pragmas_to_opt_file_7_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
transform_hlds__intermod_analysis__append_analysis_pragmas_to_opt_file_7_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
transform_hlds__intermod_analysis__append_analysis_pragmas_to_opt_file_7_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
transform_hlds__intermod_analysis__append_analysis_pragmas_to_opt_file_7_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
transform_hlds__intermod_analysis__append_analysis_pragmas_to_opt_file_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
transform_hlds__intermod_analysis__append_analysis_pragmas_to_opt_file_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__intermod_analysis__write_analysis_pragmas_10_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__intermod_analysis__write_analysis_pragmas_10_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__intermod_analysis__write_analysis_pragmas_10_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__intermod_analysis__write_analysis_pragmas_10_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__intermod_analysis__write_analysis_pragmas_10_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__intermod_analysis__write_analysis_pragmas_10_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__intermod_analysis__write_analysis_pragmas_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__intermod_analysis__write_analysis_pragmas_10_p_0(
  MR_Word Stream_11,
  MR_Word TermInfos_12,
  MR_Word TermInfos2_13,
  MR_Word Exceptions_14,
  MR_Word TrailingInfos_15,
  MR_Word MMTablingInfos_16,
  MR_Word SharingInfos_17,
  MR_Word ReuseInfos_18);

static void MR_CALL 
transform_hlds__intermod_analysis__gather_analysis_pragmas_10_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__intermod_analysis__gather_analysis_pragmas_10_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__intermod_analysis__gather_analysis_pragmas_10_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__intermod_analysis__gather_analysis_pragmas_10_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__intermod_analysis__gather_analysis_pragmas_10_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__intermod_analysis__gather_analysis_pragmas_10_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__intermod_analysis__gather_analysis_pragmas_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__intermod_analysis__gather_analysis_pragmas_10_p_0(
  MR_Word ModuleInfo_11,
  MR_Word ProcAnalysisKinds_12,
  MR_Word OrderPredInfos_13,
  MR_Word * TermInfos_14,
  MR_Word * TermInfos2_15,
  MR_Word * Exceptions_16,
  MR_Word * TrailingInfos_17,
  MR_Word * MMTablingInfos_18,
  MR_Word * SharingInfos_19,
  MR_Word * ReuseInfos_20);

static MR_bool MR_CALL 
transform_hlds__intermod_analysis____Unify____maybe_should_write_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__intermod_analysis____Compare____maybe_should_write_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__intermod_analysis____Unify____should_write_for_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__intermod_analysis____Compare____should_write_for_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box transform_hlds__intermod_analysis_scalar_common_1[17][2];

static /* final */ const MR_Box transform_hlds__intermod_analysis_scalar_common_2[18][3];

static /* final */ const MR_Box transform_hlds__intermod_analysis_scalar_common_3[3][1];

static /* final */ const MR_Box transform_hlds__intermod_analysis_scalar_common_4[11][7];

static /* final */ const MR_Box transform_hlds__intermod_analysis_scalar_common_5[6][8];

static /* final */ const MR_Box transform_hlds__intermod_analysis_scalar_common_6[9][5];

static /* final */ const MR_Box transform_hlds__intermod_analysis_scalar_common_7[3][4];

static /* final */ const MR_Box transform_hlds__intermod_analysis_scalar_common_8[2][6];

static /* final */ const MR_Box transform_hlds__intermod_analysis_scalar_common_9[5][9];




static /* final */ const MR_Box transform_hlds__intermod_analysis_scalar_common_1[17][2] = {
  /* row 0 */
  {
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pragma_info_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_unused_args_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pragma_info_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_termination_info_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pragma_info_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_termination2_info_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pragma_info_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_exceptions_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pragma_info_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_trailing_info_0))
  },
  /* row 5 */
  {
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pragma_info_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_mm_tabling_info_0))
  },
  /* row 6 */
  {
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pragma_info_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_structure_sharing_0))
  },
  /* row 7 */
  {
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pragma_info_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_structure_reuse_0))
  },
  /* row 8 */
  {
    ((MR_Box) (&mercury__cord__cord__type_ctor_info_cord_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_termination_info_0))
  },
  /* row 9 */
  {
    ((MR_Box) (&mercury__cord__cord__type_ctor_info_cord_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_termination2_info_0))
  },
  /* row 10 */
  {
    ((MR_Box) (&mercury__cord__cord__type_ctor_info_cord_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_exceptions_0))
  },
  /* row 11 */
  {
    ((MR_Box) (&mercury__cord__cord__type_ctor_info_cord_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_trailing_info_0))
  },
  /* row 12 */
  {
    ((MR_Box) (&mercury__cord__cord__type_ctor_info_cord_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_mm_tabling_info_0))
  },
  /* row 13 */
  {
    ((MR_Box) (&mercury__cord__cord__type_ctor_info_cord_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_structure_sharing_0))
  },
  /* row 14 */
  {
    ((MR_Box) (&mercury__cord__cord__type_ctor_info_cord_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_structure_reuse_0))
  },
  /* row 15 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 16 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_generic_0))
  },
};

static /* final */ const MR_Box transform_hlds__intermod_analysis_scalar_common_2[18][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&transform_hlds__intermod_analysis_scalar_common_1[16])),
    ((MR_Box) (&libs__rat__libs__rat__type_ctor_info_rat_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&transform_hlds__intermod_analysis_scalar_common_6[0])),
    ((MR_Box) (transform_hlds__intermod_analysis__append_analysis_pragmas_to_opt_file_7_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 2 */
  {
    ((MR_Box) (&transform_hlds__intermod_analysis_scalar_common_6[1])),
    ((MR_Box) (transform_hlds__intermod_analysis__append_analysis_pragmas_to_opt_file_7_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) (&transform_hlds__intermod_analysis_scalar_common_6[2])),
    ((MR_Box) (transform_hlds__intermod_analysis__append_analysis_pragmas_to_opt_file_7_p_0_4)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) (&transform_hlds__intermod_analysis_scalar_common_6[3])),
    ((MR_Box) (transform_hlds__intermod_analysis__append_analysis_pragmas_to_opt_file_7_p_0_5)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 5 */
  {
    ((MR_Box) (&transform_hlds__intermod_analysis_scalar_common_6[4])),
    ((MR_Box) (transform_hlds__intermod_analysis__append_analysis_pragmas_to_opt_file_7_p_0_6)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 6 */
  {
    ((MR_Box) (&transform_hlds__intermod_analysis_scalar_common_6[5])),
    ((MR_Box) (transform_hlds__intermod_analysis__append_analysis_pragmas_to_opt_file_7_p_0_7)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 7 */
  {
    ((MR_Box) (&transform_hlds__intermod_analysis_scalar_common_6[6])),
    ((MR_Box) (transform_hlds__intermod_analysis__append_analysis_pragmas_to_opt_file_7_p_0_8)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 8 */
  {
    ((MR_Box) (&transform_hlds__intermod_analysis_scalar_common_6[7])),
    ((MR_Box) (transform_hlds__intermod_analysis__append_analysis_pragmas_to_opt_file_7_p_0_9)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 9 */
  {
    ((MR_Box) (&transform_hlds__intermod_analysis_scalar_common_6[1])),
    ((MR_Box) (transform_hlds__intermod_analysis__write_trans_opt_file_5_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 10 */
  {
    ((MR_Box) (&transform_hlds__intermod_analysis_scalar_common_6[2])),
    ((MR_Box) (transform_hlds__intermod_analysis__write_trans_opt_file_5_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 11 */
  {
    ((MR_Box) (&transform_hlds__intermod_analysis_scalar_common_6[3])),
    ((MR_Box) (transform_hlds__intermod_analysis__write_trans_opt_file_5_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 12 */
  {
    ((MR_Box) (&transform_hlds__intermod_analysis_scalar_common_6[4])),
    ((MR_Box) (transform_hlds__intermod_analysis__write_trans_opt_file_5_p_0_4)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 13 */
  {
    ((MR_Box) (&transform_hlds__intermod_analysis_scalar_common_6[5])),
    ((MR_Box) (transform_hlds__intermod_analysis__write_trans_opt_file_5_p_0_5)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 14 */
  {
    ((MR_Box) (&transform_hlds__intermod_analysis_scalar_common_6[6])),
    ((MR_Box) (transform_hlds__intermod_analysis__write_trans_opt_file_5_p_0_6)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 15 */
  {
    ((MR_Box) (&transform_hlds__intermod_analysis_scalar_common_6[7])),
    ((MR_Box) (transform_hlds__intermod_analysis__write_trans_opt_file_5_p_0_7)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 16 */
  {
    ((MR_Box) (&transform_hlds__intermod_analysis_scalar_common_7[0])),
    ((MR_Box) (transform_hlds__intermod_analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_97_116_104_101_114_95_112_114_97_103_109_97_95_116_101_114_109_105_110_97_116_105_111_110_50_95_102_111_114_95_112_114_111_99_95_95_91_50_93_95_48_5_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 17 */
  {
    ((MR_Box) (&transform_hlds__intermod_analysis_scalar_common_7[0])),
    ((MR_Box) (transform_hlds__intermod_analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_97_116_104_101_114_95_112_114_97_103_109_97_95_116_101_114_109_105_110_97_116_105_111_110_50_95_102_111_114_95_112_114_111_99_95_95_91_50_93_95_48_5_p_0_4)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box transform_hlds__intermod_analysis_scalar_common_3[3][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 1 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &transform_hlds__intermod_analysis_scalar_common_3[0])))
  },
  /* row 2 */
  {
    ((MR_Box) (&transform_hlds__intermod_analysis_scalar_common_3[0]))
  },
};

static /* final */ const MR_Box transform_hlds__intermod_analysis_scalar_common_4[11][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&transform_hlds__intermod_order_pred_info__transform_hlds__intermod_order_pred_info__type_ctor_info_order_pred_info_0)),
    ((MR_Box) (&transform_hlds__intermod_analysis__cord__pti_cord_1__plain_parse_tree__prog_item__type_ctor_info_pragma_info_termination_info_0)),
    ((MR_Box) (&transform_hlds__intermod_analysis__cord__pti_cord_1__plain_parse_tree__prog_item__type_ctor_info_pragma_info_termination_info_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&transform_hlds__intermod_order_pred_info__transform_hlds__intermod_order_pred_info__type_ctor_info_order_pred_info_0)),
    ((MR_Box) (&transform_hlds__intermod_analysis__cord__pti_cord_1__plain_parse_tree__prog_item__type_ctor_info_pragma_info_termination2_info_0)),
    ((MR_Box) (&transform_hlds__intermod_analysis__cord__pti_cord_1__plain_parse_tree__prog_item__type_ctor_info_pragma_info_termination2_info_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&transform_hlds__intermod_order_pred_info__transform_hlds__intermod_order_pred_info__type_ctor_info_order_pred_info_0)),
    ((MR_Box) (&transform_hlds__intermod_analysis__cord__pti_cord_1__plain_parse_tree__prog_item__type_ctor_info_pragma_info_exceptions_0)),
    ((MR_Box) (&transform_hlds__intermod_analysis__cord__pti_cord_1__plain_parse_tree__prog_item__type_ctor_info_pragma_info_exceptions_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&transform_hlds__intermod_order_pred_info__transform_hlds__intermod_order_pred_info__type_ctor_info_order_pred_info_0)),
    ((MR_Box) (&transform_hlds__intermod_analysis__cord__pti_cord_1__plain_parse_tree__prog_item__type_ctor_info_pragma_info_trailing_info_0)),
    ((MR_Box) (&transform_hlds__intermod_analysis__cord__pti_cord_1__plain_parse_tree__prog_item__type_ctor_info_pragma_info_trailing_info_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&transform_hlds__intermod_order_pred_info__transform_hlds__intermod_order_pred_info__type_ctor_info_order_pred_info_0)),
    ((MR_Box) (&transform_hlds__intermod_analysis__cord__pti_cord_1__plain_parse_tree__prog_item__type_ctor_info_pragma_info_mm_tabling_info_0)),
    ((MR_Box) (&transform_hlds__intermod_analysis__cord__pti_cord_1__plain_parse_tree__prog_item__type_ctor_info_pragma_info_mm_tabling_info_0))
  },
  /* row 5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&transform_hlds__intermod_order_pred_info__transform_hlds__intermod_order_pred_info__type_ctor_info_order_pred_info_0)),
    ((MR_Box) (&transform_hlds__intermod_analysis__cord__pti_cord_1__plain_parse_tree__prog_item__type_ctor_info_pragma_info_structure_sharing_0)),
    ((MR_Box) (&transform_hlds__intermod_analysis__cord__pti_cord_1__plain_parse_tree__prog_item__type_ctor_info_pragma_info_structure_sharing_0))
  },
  /* row 6 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&transform_hlds__intermod_order_pred_info__transform_hlds__intermod_order_pred_info__type_ctor_info_order_pred_info_0)),
    ((MR_Box) (&transform_hlds__intermod_analysis__cord__pti_cord_1__plain_parse_tree__prog_item__type_ctor_info_pragma_info_structure_reuse_0)),
    ((MR_Box) (&transform_hlds__intermod_analysis__cord__pti_cord_1__plain_parse_tree__prog_item__type_ctor_info_pragma_info_structure_reuse_0))
  },
  /* row 7 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_exceptions_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 8 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_trailing_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 9 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_mm_tabling_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 10 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_unused_args_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box transform_hlds__intermod_analysis_scalar_common_5[6][8] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__type_ctor_info_output_lang_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_termination_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__type_ctor_info_output_lang_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_termination2_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__type_ctor_info_output_lang_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_structure_sharing_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__type_ctor_info_output_lang_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_structure_reuse_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&transform_hlds__intermod_order_pred_info__transform_hlds__intermod_order_pred_info__type_ctor_info_order_pred_info_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0)),
    ((MR_Box) (&transform_hlds__intermod_analysis__cord__pti_cord_1__plain_parse_tree__prog_item__type_ctor_info_pragma_info_termination_info_0)),
    ((MR_Box) (&transform_hlds__intermod_analysis__cord__pti_cord_1__plain_parse_tree__prog_item__type_ctor_info_pragma_info_termination_info_0))
  },
  /* row 5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&transform_hlds__intermod_order_pred_info__transform_hlds__intermod_order_pred_info__type_ctor_info_order_pred_info_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0)),
    ((MR_Box) (&transform_hlds__intermod_analysis__cord__pti_cord_1__plain_parse_tree__prog_item__type_ctor_info_pragma_info_termination2_info_0)),
    ((MR_Box) (&transform_hlds__intermod_analysis__cord__pti_cord_1__plain_parse_tree__prog_item__type_ctor_info_pragma_info_termination2_info_0))
  },
};

static /* final */ const MR_Box transform_hlds__intermod_analysis_scalar_common_6[9][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_unused_args_0)),
    ((MR_Box) (&transform_hlds__intermod_analysis__parse_tree__prog_item__pti_item_pragma_info_1__plain_parse_tree__prog_item__type_ctor_info_pragma_info_unused_args_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_termination_info_0)),
    ((MR_Box) (&transform_hlds__intermod_analysis__parse_tree__prog_item__pti_item_pragma_info_1__plain_parse_tree__prog_item__type_ctor_info_pragma_info_termination_info_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_termination2_info_0)),
    ((MR_Box) (&transform_hlds__intermod_analysis__parse_tree__prog_item__pti_item_pragma_info_1__plain_parse_tree__prog_item__type_ctor_info_pragma_info_termination2_info_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_exceptions_0)),
    ((MR_Box) (&transform_hlds__intermod_analysis__parse_tree__prog_item__pti_item_pragma_info_1__plain_parse_tree__prog_item__type_ctor_info_pragma_info_exceptions_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_trailing_info_0)),
    ((MR_Box) (&transform_hlds__intermod_analysis__parse_tree__prog_item__pti_item_pragma_info_1__plain_parse_tree__prog_item__type_ctor_info_pragma_info_trailing_info_0))
  },
  /* row 5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_mm_tabling_info_0)),
    ((MR_Box) (&transform_hlds__intermod_analysis__parse_tree__prog_item__pti_item_pragma_info_1__plain_parse_tree__prog_item__type_ctor_info_pragma_info_mm_tabling_info_0))
  },
  /* row 6 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_structure_sharing_0)),
    ((MR_Box) (&transform_hlds__intermod_analysis__parse_tree__prog_item__pti_item_pragma_info_1__plain_parse_tree__prog_item__type_ctor_info_pragma_info_structure_sharing_0))
  },
  /* row 7 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_structure_reuse_0)),
    ((MR_Box) (&transform_hlds__intermod_analysis__parse_tree__prog_item__pti_item_pragma_info_1__plain_parse_tree__prog_item__type_ctor_info_pragma_info_structure_reuse_0))
  },
  /* row 8 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&transform_hlds__intermod_analysis____vpti_pred_1__plain_libs__lp_rational__type_ctor_info_constraint_0)),
    ((MR_Box) (&libs__lp_rational__libs__lp_rational__type_ctor_info_constraint_0))
  },
};

static /* final */ const MR_Box transform_hlds__intermod_analysis_scalar_common_7[3][4] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (&libs__lp_rational__libs__lp_rational__type_ctor_info_constraint_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&transform_hlds__intermod_analysis_scalar_common_6[8])),
    ((MR_Box) (transform_hlds__intermod_analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_97_116_104_101_114_95_112_114_97_103_109_97_95_116_101_114_109_105_110_97_116_105_111_110_50_95_102_111_114_95_112_114_111_99_95_95_91_50_93_95_48_5_p_0_2)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (&transform_hlds__intermod_analysis_scalar_common_2[16]))
  },
  /* row 2 */
  {
    ((MR_Box) (&transform_hlds__intermod_analysis_scalar_common_6[8])),
    ((MR_Box) (transform_hlds__intermod_analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_97_116_104_101_114_95_112_114_97_103_109_97_95_116_101_114_109_105_110_97_116_105_111_110_50_95_102_111_114_95_112_114_111_99_95_95_91_50_93_95_48_5_p_0_5)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (&transform_hlds__intermod_analysis_scalar_common_2[17]))
  },
};

static /* final */ const MR_Box transform_hlds__intermod_analysis_scalar_common_8[2][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&transform_hlds__intermod_analysis__tree234__pti_tree234_2__plain_term__ti_var_1term__type_ctor_info_generic_0__plain_builtin__type_ctor_info_int_0)),
    ((MR_Box) (&libs__lp_rational__libs__lp_rational__type_ctor_info_constraint_0)),
    ((MR_Box) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_arg_size_constr_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&transform_hlds__intermod_analysis__tree234__pti_tree234_2__plain_term__ti_var_1term__type_ctor_info_generic_0__plain_builtin__type_ctor_info_int_0)),
    ((MR_Box) (&transform_hlds__intermod_analysis__pair__pti_pair_2__plain_term__ti_var_1term__type_ctor_info_generic_0__plain_libs__rat__type_ctor_info_rat_0)),
    ((MR_Box) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_arg_size_term_0))
  },
};

static /* final */ const MR_Box transform_hlds__intermod_analysis_scalar_common_9[5][9] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&transform_hlds__intermod_order_pred_info__transform_hlds__intermod_order_pred_info__type_ctor_info_order_pred_info_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0)),
    ((MR_Box) (&transform_hlds__intermod_analysis__cord__pti_cord_1__plain_parse_tree__prog_item__type_ctor_info_pragma_info_exceptions_0)),
    ((MR_Box) (&transform_hlds__intermod_analysis__cord__pti_cord_1__plain_parse_tree__prog_item__type_ctor_info_pragma_info_exceptions_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&transform_hlds__intermod_order_pred_info__transform_hlds__intermod_order_pred_info__type_ctor_info_order_pred_info_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0)),
    ((MR_Box) (&transform_hlds__intermod_analysis__cord__pti_cord_1__plain_parse_tree__prog_item__type_ctor_info_pragma_info_trailing_info_0)),
    ((MR_Box) (&transform_hlds__intermod_analysis__cord__pti_cord_1__plain_parse_tree__prog_item__type_ctor_info_pragma_info_trailing_info_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&transform_hlds__intermod_order_pred_info__transform_hlds__intermod_order_pred_info__type_ctor_info_order_pred_info_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0)),
    ((MR_Box) (&transform_hlds__intermod_analysis__cord__pti_cord_1__plain_parse_tree__prog_item__type_ctor_info_pragma_info_mm_tabling_info_0)),
    ((MR_Box) (&transform_hlds__intermod_analysis__cord__pti_cord_1__plain_parse_tree__prog_item__type_ctor_info_pragma_info_mm_tabling_info_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&transform_hlds__intermod_order_pred_info__transform_hlds__intermod_order_pred_info__type_ctor_info_order_pred_info_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0)),
    ((MR_Box) (&transform_hlds__intermod_analysis__cord__pti_cord_1__plain_parse_tree__prog_item__type_ctor_info_pragma_info_structure_sharing_0)),
    ((MR_Box) (&transform_hlds__intermod_analysis__cord__pti_cord_1__plain_parse_tree__prog_item__type_ctor_info_pragma_info_structure_sharing_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&transform_hlds__intermod_order_pred_info__transform_hlds__intermod_order_pred_info__type_ctor_info_order_pred_info_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0)),
    ((MR_Box) (&transform_hlds__intermod_analysis__cord__pti_cord_1__plain_parse_tree__prog_item__type_ctor_info_pragma_info_structure_reuse_0)),
    ((MR_Box) (&transform_hlds__intermod_analysis__cord__pti_cord_1__plain_parse_tree__prog_item__type_ctor_info_pragma_info_structure_reuse_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"



static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__intermod_analysis__cord__pti_cord_1__plain_parse_tree__prog_item__type_ctor_info_pragma_info_termination_info_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_termination_info_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__intermod_analysis__cord__pti_cord_1__plain_parse_tree__prog_item__type_ctor_info_pragma_info_termination2_info_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_termination2_info_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__intermod_analysis__cord__pti_cord_1__plain_parse_tree__prog_item__type_ctor_info_pragma_info_exceptions_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_exceptions_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__intermod_analysis__cord__pti_cord_1__plain_parse_tree__prog_item__type_ctor_info_pragma_info_trailing_info_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_trailing_info_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__intermod_analysis__cord__pti_cord_1__plain_parse_tree__prog_item__type_ctor_info_pragma_info_mm_tabling_info_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_mm_tabling_info_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__intermod_analysis__cord__pti_cord_1__plain_parse_tree__prog_item__type_ctor_info_pragma_info_structure_sharing_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_structure_sharing_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__intermod_analysis__cord__pti_cord_1__plain_parse_tree__prog_item__type_ctor_info_pragma_info_structure_reuse_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_structure_reuse_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__intermod_analysis__parse_tree__prog_item__pti_item_pragma_info_1__plain_parse_tree__prog_item__type_ctor_info_pragma_info_unused_args_0 = {
  &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pragma_info_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_unused_args_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__intermod_analysis__parse_tree__prog_item__pti_item_pragma_info_1__plain_parse_tree__prog_item__type_ctor_info_pragma_info_termination_info_0 = {
  &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pragma_info_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_termination_info_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__intermod_analysis__parse_tree__prog_item__pti_item_pragma_info_1__plain_parse_tree__prog_item__type_ctor_info_pragma_info_termination2_info_0 = {
  &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pragma_info_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_termination2_info_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__intermod_analysis__parse_tree__prog_item__pti_item_pragma_info_1__plain_parse_tree__prog_item__type_ctor_info_pragma_info_exceptions_0 = {
  &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pragma_info_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_exceptions_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__intermod_analysis__parse_tree__prog_item__pti_item_pragma_info_1__plain_parse_tree__prog_item__type_ctor_info_pragma_info_trailing_info_0 = {
  &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pragma_info_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_trailing_info_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__intermod_analysis__parse_tree__prog_item__pti_item_pragma_info_1__plain_parse_tree__prog_item__type_ctor_info_pragma_info_mm_tabling_info_0 = {
  &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pragma_info_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_mm_tabling_info_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__intermod_analysis__parse_tree__prog_item__pti_item_pragma_info_1__plain_parse_tree__prog_item__type_ctor_info_pragma_info_structure_sharing_0 = {
  &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pragma_info_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_structure_sharing_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__intermod_analysis__parse_tree__prog_item__pti_item_pragma_info_1__plain_parse_tree__prog_item__type_ctor_info_pragma_info_structure_reuse_0 = {
  &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pragma_info_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_structure_reuse_0)
  }
};

static const MR_VA_PseudoTypeInfo_Struct1 transform_hlds__intermod_analysis____vpti_pred_1__plain_libs__lp_rational__type_ctor_info_constraint_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 1,
  {
    (MR_PseudoTypeInfo) (&libs__lp_rational__libs__lp_rational__type_ctor_info_constraint_0)
  }
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__intermod_analysis__term__ti_var_1term__type_ctor_info_generic_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) (&mercury__term__term__type_ctor_info_generic_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__intermod_analysis__tree234__pti_tree234_2__plain_term__ti_var_1term__type_ctor_info_generic_0__plain_builtin__type_ctor_info_int_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&transform_hlds__intermod_analysis__term__ti_var_1term__type_ctor_info_generic_0),
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__intermod_analysis__pair__pti_pair_2__plain_term__ti_var_1term__type_ctor_info_generic_0__plain_libs__rat__type_ctor_info_rat_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) (&transform_hlds__intermod_analysis__term__ti_var_1term__type_ctor_info_generic_0),
    (MR_PseudoTypeInfo) (&libs__rat__libs__rat__type_ctor_info_rat_0)
  }
};

static const MR_EnumFunctorDesc transform_hlds__intermod_analysis__transform_hlds__intermod_analysis__enum_functor_desc_maybe_should_write_0_0 = {
  (MR_String) "should_not_write",
  INT32_C(0)
};

static const MR_EnumFunctorDesc transform_hlds__intermod_analysis__transform_hlds__intermod_analysis__enum_functor_desc_maybe_should_write_0_1 = {
  (MR_String) "should_write",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr transform_hlds__intermod_analysis__transform_hlds__intermod_analysis__enum_ordinal_ordered_maybe_should_write_0[2] = {
  &transform_hlds__intermod_analysis__transform_hlds__intermod_analysis__enum_functor_desc_maybe_should_write_0_0,
  &transform_hlds__intermod_analysis__transform_hlds__intermod_analysis__enum_functor_desc_maybe_should_write_0_1
};

static const MR_EnumFunctorDescPtr transform_hlds__intermod_analysis__transform_hlds__intermod_analysis__enum_name_ordered_maybe_should_write_0[2] = {
  &transform_hlds__intermod_analysis__transform_hlds__intermod_analysis__enum_functor_desc_maybe_should_write_0_0,
  &transform_hlds__intermod_analysis__transform_hlds__intermod_analysis__enum_functor_desc_maybe_should_write_0_1
};

static const MR_Integer transform_hlds__intermod_analysis__transform_hlds__intermod_analysis__functor_number_map_maybe_should_write_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct transform_hlds__intermod_analysis__transform_hlds__intermod_analysis__type_ctor_info_maybe_should_write_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (transform_hlds__intermod_analysis____Unify____maybe_should_write_0_0_10001)),
  ((MR_Box) (transform_hlds__intermod_analysis____Compare____maybe_should_write_0_0_10001)),
  (MR_String) "transform_hlds.intermod_analysis",
  (MR_String) "maybe_should_write",
  {     transform_hlds__intermod_analysis__transform_hlds__intermod_analysis__enum_name_ordered_maybe_should_write_0 },
  {     transform_hlds__intermod_analysis__transform_hlds__intermod_analysis__enum_ordinal_ordered_maybe_should_write_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  transform_hlds__intermod_analysis__transform_hlds__intermod_analysis__functor_number_map_maybe_should_write_0,

};

static const MR_EnumFunctorDesc transform_hlds__intermod_analysis__transform_hlds__intermod_analysis__enum_functor_desc_should_write_for_0_0 = {
  (MR_String) "for_analysis_framework",
  INT32_C(0)
};

static const MR_EnumFunctorDesc transform_hlds__intermod_analysis__transform_hlds__intermod_analysis__enum_functor_desc_should_write_for_0_1 = {
  (MR_String) "for_pragma",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr transform_hlds__intermod_analysis__transform_hlds__intermod_analysis__enum_ordinal_ordered_should_write_for_0[2] = {
  &transform_hlds__intermod_analysis__transform_hlds__intermod_analysis__enum_functor_desc_should_write_for_0_0,
  &transform_hlds__intermod_analysis__transform_hlds__intermod_analysis__enum_functor_desc_should_write_for_0_1
};

static const MR_EnumFunctorDescPtr transform_hlds__intermod_analysis__transform_hlds__intermod_analysis__enum_name_ordered_should_write_for_0[2] = {
  &transform_hlds__intermod_analysis__transform_hlds__intermod_analysis__enum_functor_desc_should_write_for_0_0,
  &transform_hlds__intermod_analysis__transform_hlds__intermod_analysis__enum_functor_desc_should_write_for_0_1
};

static const MR_Integer transform_hlds__intermod_analysis__transform_hlds__intermod_analysis__functor_number_map_should_write_for_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct transform_hlds__intermod_analysis__transform_hlds__intermod_analysis__type_ctor_info_should_write_for_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (transform_hlds__intermod_analysis____Unify____should_write_for_0_0_10001)),
  ((MR_Box) (transform_hlds__intermod_analysis____Compare____should_write_for_0_0_10001)),
  (MR_String) "transform_hlds.intermod_analysis",
  (MR_String) "should_write_for",
  {     transform_hlds__intermod_analysis__transform_hlds__intermod_analysis__enum_name_ordered_should_write_for_0 },
  {     transform_hlds__intermod_analysis__transform_hlds__intermod_analysis__enum_ordinal_ordered_should_write_for_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  transform_hlds__intermod_analysis__transform_hlds__intermod_analysis__functor_number_map_should_write_for_0,

};

static MR_bool MR_CALL 
transform_hlds__intermod_analysis__IntroducedFrom__pred__maybe_constr_arg_size_info_to_arg_size_constr__572__1_2_p_0(
  MR_Word HeadVar__1_13,
  MR_Word HeadVar__2_16)
{
  {
    MR_bool succeeded;

    succeeded = mercury__std_util__isnt_2_p_0((MR_Word) (&libs__lp_rational__libs__lp_rational__type_ctor_info_constraint_0), HeadVar__1_13, ((MR_Box) (HeadVar__2_16)));
    return succeeded;
  }
}

static MR_Word MR_CALL 
transform_hlds__intermod_analysis__IntroducedFrom__func__write_trans_opt_file__257__1_1_f_0(
  MR_Word HeadVar__1_82)
{
  {
    MR_Word HeadVar__2_83;

    HeadVar__2_83 = parse_tree__item_util__wrap_dummy_pragma_item_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_structure_reuse_0), ((MR_Box) (HeadVar__1_82)));
    return HeadVar__2_83;
  }
}

static MR_Word MR_CALL 
transform_hlds__intermod_analysis__IntroducedFrom__func__write_trans_opt_file__256__1_1_f_0(
  MR_Word HeadVar__1_77)
{
  {
    MR_Word HeadVar__2_78;

    HeadVar__2_78 = parse_tree__item_util__wrap_dummy_pragma_item_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_structure_sharing_0), ((MR_Box) (HeadVar__1_77)));
    return HeadVar__2_78;
  }
}

static MR_Word MR_CALL 
transform_hlds__intermod_analysis__IntroducedFrom__func__write_trans_opt_file__255__1_1_f_0(
  MR_Word HeadVar__1_72)
{
  {
    MR_Word HeadVar__2_73;

    HeadVar__2_73 = parse_tree__item_util__wrap_dummy_pragma_item_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_mm_tabling_info_0), ((MR_Box) (HeadVar__1_72)));
    return HeadVar__2_73;
  }
}

static MR_Word MR_CALL 
transform_hlds__intermod_analysis__IntroducedFrom__func__write_trans_opt_file__254__1_1_f_0(
  MR_Word HeadVar__1_67)
{
  {
    MR_Word HeadVar__2_68;

    HeadVar__2_68 = parse_tree__item_util__wrap_dummy_pragma_item_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_trailing_info_0), ((MR_Box) (HeadVar__1_67)));
    return HeadVar__2_68;
  }
}

static MR_Word MR_CALL 
transform_hlds__intermod_analysis__IntroducedFrom__func__write_trans_opt_file__253__1_1_f_0(
  MR_Word HeadVar__1_62)
{
  {
    MR_Word HeadVar__2_63;

    HeadVar__2_63 = parse_tree__item_util__wrap_dummy_pragma_item_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_exceptions_0), ((MR_Box) (HeadVar__1_62)));
    return HeadVar__2_63;
  }
}

static MR_Word MR_CALL 
transform_hlds__intermod_analysis__IntroducedFrom__func__write_trans_opt_file__252__1_1_f_0(
  MR_Word HeadVar__1_57)
{
  {
    MR_Word HeadVar__2_58;

    HeadVar__2_58 = parse_tree__item_util__wrap_dummy_pragma_item_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_termination2_info_0), ((MR_Box) (HeadVar__1_57)));
    return HeadVar__2_58;
  }
}

static MR_Word MR_CALL 
transform_hlds__intermod_analysis__IntroducedFrom__func__write_trans_opt_file__251__1_1_f_0(
  MR_Word HeadVar__1_52)
{
  {
    MR_Word HeadVar__2_53;

    HeadVar__2_53 = parse_tree__item_util__wrap_dummy_pragma_item_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_termination_info_0), ((MR_Box) (HeadVar__1_52)));
    return HeadVar__2_53;
  }
}

static MR_Word MR_CALL 
transform_hlds__intermod_analysis__IntroducedFrom__func__append_analysis_pragmas_to_opt_file__220__1_1_f_0(
  MR_Word HeadVar__1_299)
{
  {
    MR_Word HeadVar__2_300;

    HeadVar__2_300 = parse_tree__item_util__wrap_dummy_pragma_item_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_structure_reuse_0), ((MR_Box) (HeadVar__1_299)));
    return HeadVar__2_300;
  }
}

static MR_Word MR_CALL 
transform_hlds__intermod_analysis__IntroducedFrom__func__append_analysis_pragmas_to_opt_file__218__1_1_f_0(
  MR_Word HeadVar__1_294)
{
  {
    MR_Word HeadVar__2_295;

    HeadVar__2_295 = parse_tree__item_util__wrap_dummy_pragma_item_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_structure_sharing_0), ((MR_Box) (HeadVar__1_294)));
    return HeadVar__2_295;
  }
}

static MR_Word MR_CALL 
transform_hlds__intermod_analysis__IntroducedFrom__func__append_analysis_pragmas_to_opt_file__216__1_1_f_0(
  MR_Word HeadVar__1_289)
{
  {
    MR_Word HeadVar__2_290;

    HeadVar__2_290 = parse_tree__item_util__wrap_dummy_pragma_item_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_mm_tabling_info_0), ((MR_Box) (HeadVar__1_289)));
    return HeadVar__2_290;
  }
}

static MR_Word MR_CALL 
transform_hlds__intermod_analysis__IntroducedFrom__func__append_analysis_pragmas_to_opt_file__214__1_1_f_0(
  MR_Word HeadVar__1_284)
{
  {
    MR_Word HeadVar__2_285;

    HeadVar__2_285 = parse_tree__item_util__wrap_dummy_pragma_item_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_trailing_info_0), ((MR_Box) (HeadVar__1_284)));
    return HeadVar__2_285;
  }
}

static MR_Word MR_CALL 
transform_hlds__intermod_analysis__IntroducedFrom__func__append_analysis_pragmas_to_opt_file__212__1_1_f_0(
  MR_Word HeadVar__1_279)
{
  {
    MR_Word HeadVar__2_280;

    HeadVar__2_280 = parse_tree__item_util__wrap_dummy_pragma_item_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_exceptions_0), ((MR_Box) (HeadVar__1_279)));
    return HeadVar__2_280;
  }
}

static MR_Word MR_CALL 
transform_hlds__intermod_analysis__IntroducedFrom__func__append_analysis_pragmas_to_opt_file__210__1_1_f_0(
  MR_Word HeadVar__1_274)
{
  {
    MR_Word HeadVar__2_275;

    HeadVar__2_275 = parse_tree__item_util__wrap_dummy_pragma_item_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_termination2_info_0), ((MR_Box) (HeadVar__1_274)));
    return HeadVar__2_275;
  }
}

static MR_Word MR_CALL 
transform_hlds__intermod_analysis__IntroducedFrom__func__append_analysis_pragmas_to_opt_file__208__1_1_f_0(
  MR_Word HeadVar__1_269)
{
  {
    MR_Word HeadVar__2_270;

    HeadVar__2_270 = parse_tree__item_util__wrap_dummy_pragma_item_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_termination_info_0), ((MR_Box) (HeadVar__1_269)));
    return HeadVar__2_270;
  }
}

static MR_Word MR_CALL 
transform_hlds__intermod_analysis__IntroducedFrom__func__append_analysis_pragmas_to_opt_file__206__1_1_f_0(
  MR_Word HeadVar__1_264)
{
  {
    MR_Word HeadVar__2_265;

    HeadVar__2_265 = parse_tree__item_util__wrap_dummy_pragma_item_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_unused_args_0), ((MR_Box) (HeadVar__1_264)));
    return HeadVar__2_265;
  }
}

void MR_CALL 
transform_hlds__intermod_analysis____Compare____should_write_for_0_0(
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
transform_hlds__intermod_analysis____Unify____should_write_for_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

void MR_CALL 
transform_hlds__intermod_analysis____Compare____maybe_should_write_0_0(
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
transform_hlds__intermod_analysis____Unify____maybe_should_write_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__intermod_analysis__gather_pragma_structure_reuse_for_proc_6_p_0(
  MR_Word ModuleInfo_7,
  MR_Word OrderPredInfo_8,
  MR_Integer ProcId_9,
  MR_Word ProcInfo_10,
  MR_Word STATE_VARIABLE_ReuseInfosCord_0_32,
  MR_Word * STATE_VARIABLE_ReuseInfosCord_33)
{
  {
    MR_bool succeeded;
    MR_String PredName_12 = ((MR_String) ((MR_hl_field(MR_mktag(0), OrderPredInfo_8, (MR_Integer) 0))));
    MR_Word PredOrFunc_14 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), OrderPredInfo_8, (MR_Integer) 2))) & (MR_Integer) 1);
    MR_Word PredId_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OrderPredInfo_8, (MR_Integer) 3))));
    MR_Word PredInfo_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OrderPredInfo_8, (MR_Integer) 4))));
    MR_Word StructureReuseDomain_19;
    MR_Word ShouldWrite_17;
    MR_Word MaybeStructureReuseDomain_18;
    MR_Word Var_34;

    succeeded = hlds__hlds_pred__proc_info_is_valid_mode_1_p_0(ProcInfo_10);
    if (succeeded)
    {
      Var_34 = (MR_Integer) 1;
      transform_hlds__intermod_analysis__should_write_reuse_info_6_p_0(ModuleInfo_7, PredId_15, ProcId_9, PredInfo_16, Var_34, &ShouldWrite_17);
      succeeded = (ShouldWrite_17 == (MR_Integer) 1);
      if (succeeded)
      {
        hlds__hlds_pred__proc_info_get_structure_reuse_2_p_0(ProcInfo_10, &MaybeStructureReuseDomain_18);
        succeeded = (MaybeStructureReuseDomain_18 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
          StructureReuseDomain_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeStructureReuseDomain_18, (MR_Integer) 0))));
      }
    }
    if (succeeded)
    {
      MR_Word VarSet_20;
      MR_Word TypeVarSet_21;
      MR_Word ModuleName_22;
      MR_Word PredSymName_23;
      MR_Word ArgModes_24;
      MR_Word PredNameModesPF_25;
      MR_Word HeadVars_26;
      MR_Word VarTypes_27;
      MR_Word HeadVarTypes_28;
      MR_Word Reuse_29;
      MR_Word ReuseInfo_31;
      MR_Word Var_35;

      hlds__hlds_pred__proc_info_get_varset_2_p_0(ProcInfo_10, &VarSet_20);
      hlds__hlds_pred__pred_info_get_typevarset_2_p_0(PredInfo_16, &TypeVarSet_21);
      ModuleName_22 = hlds__hlds_pred__pred_info_module_1_f_0(PredInfo_16);
      {
        PredSymName_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), PredSymName_23, 0) = ((MR_Box) (ModuleName_22));
        MR_hl_field(MR_mktag(1), PredSymName_23, 1) = ((MR_Box) (PredName_12));
      }
      hlds__hlds_pred__proc_info_declared_argmodes_2_p_0(ProcInfo_10, &ArgModes_24);
      {
        PredNameModesPF_25 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), PredNameModesPF_25, 0) = (MR_Box) ((MR_Unsigned) (PredOrFunc_14));
        MR_hl_field(MR_mktag(0), PredNameModesPF_25, 1) = ((MR_Box) (PredSymName_23));
        MR_hl_field(MR_mktag(0), PredNameModesPF_25, 2) = ((MR_Box) (ArgModes_24));
      }
      hlds__hlds_pred__proc_info_get_headvars_2_p_0(ProcInfo_10, &HeadVars_26);
      hlds__hlds_pred__proc_info_get_vartypes_2_p_0(ProcInfo_10, &VarTypes_27);
      hlds__vartypes__lookup_var_types_3_p_0(VarTypes_27, HeadVars_26, &HeadVarTypes_28);
      Reuse_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), StructureReuseDomain_19, (MR_Integer) 0))));
      {
        Var_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_35, 0) = ((MR_Box) (Reuse_29));
      }
      {
        ReuseInfo_31 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), ReuseInfo_31, 0) = ((MR_Box) (PredNameModesPF_25));
        MR_hl_field(MR_mktag(0), ReuseInfo_31, 1) = ((MR_Box) (HeadVars_26));
        MR_hl_field(MR_mktag(0), ReuseInfo_31, 2) = ((MR_Box) (HeadVarTypes_28));
        MR_hl_field(MR_mktag(0), ReuseInfo_31, 3) = ((MR_Box) (VarSet_20));
        MR_hl_field(MR_mktag(0), ReuseInfo_31, 4) = ((MR_Box) (TypeVarSet_21));
        MR_hl_field(MR_mktag(0), ReuseInfo_31, 5) = ((MR_Box) (Var_35));
      }
      mercury__cord__snoc_3_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_structure_reuse_0), ((MR_Box) (ReuseInfo_31)), STATE_VARIABLE_ReuseInfosCord_0_32, STATE_VARIABLE_ReuseInfosCord_33);
    }
    else
      *STATE_VARIABLE_ReuseInfosCord_33 = STATE_VARIABLE_ReuseInfosCord_0_32;
  }
}

static void MR_CALL 
transform_hlds__intermod_analysis__gather_pragma_structure_reuse_for_pred_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_ReuseInfosCord_33;

    transform_hlds__intermod_analysis__gather_pragma_structure_reuse_for_proc_6_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Integer) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv0_STATE_VARIABLE_ReuseInfosCord_33);
    *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_ReuseInfosCord_33));
  }
}

static void MR_CALL 
transform_hlds__intermod_analysis__gather_pragma_structure_reuse_for_pred_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word OrderPredInfo_6,
  MR_Word STATE_VARIABLE_ReuseInfosCord_0_14,
  MR_Word * STATE_VARIABLE_ReuseInfosCord_15)
{
  {
    MR_Word PredInfo_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OrderPredInfo_6, (MR_Integer) 4))));
    MR_Word ProcTable_13;
    MR_Word Var_16;
    MR_Box conv1_STATE_VARIABLE_ReuseInfosCord_15;

    hlds__hlds_pred__pred_info_get_proc_table_2_p_0(PredInfo_12, &ProcTable_13);
    {
      Var_16 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_16, 0) = ((MR_Box) (&transform_hlds__intermod_analysis_scalar_common_9[4]));
      MR_hl_field(MR_mktag(0), Var_16, 1) = ((MR_Box) (transform_hlds__intermod_analysis__gather_pragma_structure_reuse_for_pred_4_p_0_1));
      MR_hl_field(MR_mktag(0), Var_16, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_16, 3) = ((MR_Box) (ModuleInfo_5));
      MR_hl_field(MR_mktag(0), Var_16, 4) = ((MR_Box) (OrderPredInfo_6));
    }
    mercury__map__foldl_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), (MR_Word) (&transform_hlds__intermod_analysis_scalar_common_1[14]), Var_16, ProcTable_13, ((MR_Box) (STATE_VARIABLE_ReuseInfosCord_0_14)), &conv1_STATE_VARIABLE_ReuseInfosCord_15);
    *STATE_VARIABLE_ReuseInfosCord_15 = ((MR_Word) (conv1_STATE_VARIABLE_ReuseInfosCord_15));
  }
}

static void MR_CALL 
transform_hlds__intermod_analysis__gather_pragma_structure_sharing_for_proc_6_p_0(
  MR_Word ModuleInfo_7,
  MR_Word OrderPredInfo_8,
  MR_Integer ProcId_9,
  MR_Word ProcInfo_10,
  MR_Word STATE_VARIABLE_SharingInfosCord_0_32,
  MR_Word * STATE_VARIABLE_SharingInfosCord_33)
{
  {
    MR_bool succeeded;
    MR_String PredName_12 = ((MR_String) ((MR_hl_field(MR_mktag(0), OrderPredInfo_8, (MR_Integer) 0))));
    MR_Word PredOrFunc_14 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), OrderPredInfo_8, (MR_Integer) 2))) & (MR_Integer) 1);
    MR_Word PredId_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OrderPredInfo_8, (MR_Integer) 3))));
    MR_Word PredInfo_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OrderPredInfo_8, (MR_Integer) 4))));
    MR_Word SharingStatus_19;
    MR_Word ShouldWrite_17;
    MR_Word MaybeSharingStatus_18;
    MR_Word Var_34;

    succeeded = hlds__hlds_pred__proc_info_is_valid_mode_1_p_0(ProcInfo_10);
    if (succeeded)
    {
      Var_34 = (MR_Integer) 1;
      transform_hlds__intermod_analysis__should_write_sharing_info_6_p_0(ModuleInfo_7, PredId_15, ProcId_9, PredInfo_16, Var_34, &ShouldWrite_17);
      succeeded = (ShouldWrite_17 == (MR_Integer) 1);
      if (succeeded)
      {
        hlds__hlds_pred__proc_info_get_structure_sharing_2_p_0(ProcInfo_10, &MaybeSharingStatus_18);
        succeeded = (MaybeSharingStatus_18 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
          SharingStatus_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeSharingStatus_18, (MR_Integer) 0))));
      }
    }
    if (succeeded)
    {
      MR_Word VarSet_20;
      MR_Word TypeVarSet_21;
      MR_Word ModuleName_22;
      MR_Word PredSymName_23;
      MR_Word ArgModes_24;
      MR_Word PredNameModesPF_25;
      MR_Word HeadVars_26;
      MR_Word VarTypes_27;
      MR_Word HeadVarTypes_28;
      MR_Word Sharing_29;
      MR_Word SharingInfo_31;
      MR_Word Var_35;

      hlds__hlds_pred__proc_info_get_varset_2_p_0(ProcInfo_10, &VarSet_20);
      hlds__hlds_pred__pred_info_get_typevarset_2_p_0(PredInfo_16, &TypeVarSet_21);
      ModuleName_22 = hlds__hlds_pred__pred_info_module_1_f_0(PredInfo_16);
      {
        PredSymName_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), PredSymName_23, 0) = ((MR_Box) (ModuleName_22));
        MR_hl_field(MR_mktag(1), PredSymName_23, 1) = ((MR_Box) (PredName_12));
      }
      hlds__hlds_pred__proc_info_declared_argmodes_2_p_0(ProcInfo_10, &ArgModes_24);
      {
        PredNameModesPF_25 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), PredNameModesPF_25, 0) = (MR_Box) ((MR_Unsigned) (PredOrFunc_14));
        MR_hl_field(MR_mktag(0), PredNameModesPF_25, 1) = ((MR_Box) (PredSymName_23));
        MR_hl_field(MR_mktag(0), PredNameModesPF_25, 2) = ((MR_Box) (ArgModes_24));
      }
      hlds__hlds_pred__proc_info_get_headvars_2_p_0(ProcInfo_10, &HeadVars_26);
      hlds__hlds_pred__proc_info_get_vartypes_2_p_0(ProcInfo_10, &VarTypes_27);
      hlds__vartypes__lookup_var_types_3_p_0(VarTypes_27, HeadVars_26, &HeadVarTypes_28);
      Sharing_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SharingStatus_19, (MR_Integer) 0))));
      {
        Var_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_35, 0) = ((MR_Box) (Sharing_29));
      }
      {
        SharingInfo_31 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), SharingInfo_31, 0) = ((MR_Box) (PredNameModesPF_25));
        MR_hl_field(MR_mktag(0), SharingInfo_31, 1) = ((MR_Box) (HeadVars_26));
        MR_hl_field(MR_mktag(0), SharingInfo_31, 2) = ((MR_Box) (HeadVarTypes_28));
        MR_hl_field(MR_mktag(0), SharingInfo_31, 3) = ((MR_Box) (VarSet_20));
        MR_hl_field(MR_mktag(0), SharingInfo_31, 4) = ((MR_Box) (TypeVarSet_21));
        MR_hl_field(MR_mktag(0), SharingInfo_31, 5) = ((MR_Box) (Var_35));
      }
      mercury__cord__snoc_3_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_structure_sharing_0), ((MR_Box) (SharingInfo_31)), STATE_VARIABLE_SharingInfosCord_0_32, STATE_VARIABLE_SharingInfosCord_33);
    }
    else
      *STATE_VARIABLE_SharingInfosCord_33 = STATE_VARIABLE_SharingInfosCord_0_32;
  }
}

static void MR_CALL 
transform_hlds__intermod_analysis__gather_pragma_structure_sharing_for_pred_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_SharingInfosCord_33;

    transform_hlds__intermod_analysis__gather_pragma_structure_sharing_for_proc_6_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Integer) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv0_STATE_VARIABLE_SharingInfosCord_33);
    *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_SharingInfosCord_33));
  }
}

static void MR_CALL 
transform_hlds__intermod_analysis__gather_pragma_structure_sharing_for_pred_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word OrderPredInfo_6,
  MR_Word STATE_VARIABLE_SharingInfosCord_0_14,
  MR_Word * STATE_VARIABLE_SharingInfosCord_15)
{
  {
    MR_Word PredInfo_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OrderPredInfo_6, (MR_Integer) 4))));
    MR_Word ProcTable_13;
    MR_Word Var_16;
    MR_Box conv1_STATE_VARIABLE_SharingInfosCord_15;

    hlds__hlds_pred__pred_info_get_proc_table_2_p_0(PredInfo_12, &ProcTable_13);
    {
      Var_16 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_16, 0) = ((MR_Box) (&transform_hlds__intermod_analysis_scalar_common_9[3]));
      MR_hl_field(MR_mktag(0), Var_16, 1) = ((MR_Box) (transform_hlds__intermod_analysis__gather_pragma_structure_sharing_for_pred_4_p_0_1));
      MR_hl_field(MR_mktag(0), Var_16, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_16, 3) = ((MR_Box) (ModuleInfo_5));
      MR_hl_field(MR_mktag(0), Var_16, 4) = ((MR_Box) (OrderPredInfo_6));
    }
    mercury__map__foldl_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), (MR_Word) (&transform_hlds__intermod_analysis_scalar_common_1[13]), Var_16, ProcTable_13, ((MR_Box) (STATE_VARIABLE_SharingInfosCord_0_14)), &conv1_STATE_VARIABLE_SharingInfosCord_15);
    *STATE_VARIABLE_SharingInfosCord_15 = ((MR_Word) (conv1_STATE_VARIABLE_SharingInfosCord_15));
  }
}

static void MR_CALL 
transform_hlds__intermod_analysis__gather_pragma_mm_tabling_info_for_proc_6_p_0(
  MR_Word ModuleInfo_7,
  MR_Word OrderPredInfo_8,
  MR_Integer ProcId_9,
  MR_Word ProcInfo_10,
  MR_Word STATE_VARIABLE_MMTablingInfosCord_0_27,
  MR_Word * STATE_VARIABLE_MMTablingInfosCord_28)
{
  {
    MR_bool succeeded;
    MR_String PredName_12 = ((MR_String) ((MR_hl_field(MR_mktag(0), OrderPredInfo_8, (MR_Integer) 0))));
    MR_Word PredArity_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OrderPredInfo_8, (MR_Integer) 1))));
    MR_Word PredOrFunc_14 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), OrderPredInfo_8, (MR_Integer) 2))) & (MR_Integer) 1);
    MR_Word PredId_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OrderPredInfo_8, (MR_Integer) 3))));
    MR_Word PredInfo_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OrderPredInfo_8, (MR_Integer) 4))));
    MR_Word MaybeProcMMTablingInfo_17;
    MR_Word ProcMMTablingInfo_18;
    MR_Word ShouldWrite_19;
    MR_Word Var_29;

    hlds__hlds_pred__proc_info_get_mm_tabling_info_2_p_0(ProcInfo_10, &MaybeProcMMTablingInfo_17);
    succeeded = hlds__hlds_pred__proc_info_is_valid_mode_1_p_0(ProcInfo_10);
    if (succeeded)
    {
      succeeded = (MaybeProcMMTablingInfo_17 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        ProcMMTablingInfo_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeProcMMTablingInfo_17, (MR_Integer) 0))));
        Var_29 = (MR_Integer) 1;
        transform_hlds__intermod_analysis__should_write_mm_tabling_info_6_p_0(ModuleInfo_7, PredId_15, ProcId_9, PredInfo_16, Var_29, &ShouldWrite_19);
        succeeded = (ShouldWrite_19 == (MR_Integer) 1);
      }
    }
    if (succeeded)
    {
      MR_Word ModuleName_20;
      MR_Word PredSymName_21;
      MR_Integer ModeNum_22;
      MR_Word PredNameArityPFMn_23;
      MR_Word Status_24;
      MR_Word MMTablingInfo_26;

      ModuleName_20 = hlds__hlds_pred__pred_info_module_1_f_0(PredInfo_16);
      {
        PredSymName_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), PredSymName_21, 0) = ((MR_Box) (ModuleName_20));
        MR_hl_field(MR_mktag(1), PredSymName_21, 1) = ((MR_Box) (PredName_12));
      }
      hlds__hlds_pred__proc_id_to_int_2_p_0(ProcId_9, &ModeNum_22);
      {
        PredNameArityPFMn_23 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), PredNameArityPFMn_23, 0) = (MR_Box) ((MR_Unsigned) (PredOrFunc_14));
        MR_hl_field(MR_mktag(0), PredNameArityPFMn_23, 1) = ((MR_Box) (PredSymName_21));
        MR_hl_field(MR_mktag(0), PredNameArityPFMn_23, 2) = ((MR_Box) (PredArity_13));
        MR_hl_field(MR_mktag(0), PredNameArityPFMn_23, 3) = ((MR_Box) (ModeNum_22));
      }
      Status_24 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), ProcMMTablingInfo_18, (MR_Integer) 0))) & (MR_Integer) 3);
      {
        MMTablingInfo_26 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), MMTablingInfo_26, 0) = ((MR_Box) (PredNameArityPFMn_23));
        MR_hl_field(MR_mktag(0), MMTablingInfo_26, 1) = (MR_Box) ((MR_Unsigned) (Status_24));
      }
      mercury__cord__snoc_3_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_mm_tabling_info_0), ((MR_Box) (MMTablingInfo_26)), STATE_VARIABLE_MMTablingInfosCord_0_27, STATE_VARIABLE_MMTablingInfosCord_28);
    }
    else
      *STATE_VARIABLE_MMTablingInfosCord_28 = STATE_VARIABLE_MMTablingInfosCord_0_27;
  }
}

static void MR_CALL 
transform_hlds__intermod_analysis__gather_pragma_mm_tabling_info_for_pred_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_MMTablingInfosCord_28;

    transform_hlds__intermod_analysis__gather_pragma_mm_tabling_info_for_proc_6_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Integer) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv0_STATE_VARIABLE_MMTablingInfosCord_28);
    *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_MMTablingInfosCord_28));
  }
}

static void MR_CALL 
transform_hlds__intermod_analysis__gather_pragma_mm_tabling_info_for_pred_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word OrderPredInfo_6,
  MR_Word STATE_VARIABLE_MMTablingInfosCord_0_14,
  MR_Word * STATE_VARIABLE_MMTablingInfosCord_15)
{
  {
    MR_Word PredInfo_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OrderPredInfo_6, (MR_Integer) 4))));
    MR_Word ProcTable_13;
    MR_Word Var_16;
    MR_Box conv1_STATE_VARIABLE_MMTablingInfosCord_15;

    hlds__hlds_pred__pred_info_get_proc_table_2_p_0(PredInfo_12, &ProcTable_13);
    {
      Var_16 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_16, 0) = ((MR_Box) (&transform_hlds__intermod_analysis_scalar_common_9[2]));
      MR_hl_field(MR_mktag(0), Var_16, 1) = ((MR_Box) (transform_hlds__intermod_analysis__gather_pragma_mm_tabling_info_for_pred_4_p_0_1));
      MR_hl_field(MR_mktag(0), Var_16, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_16, 3) = ((MR_Box) (ModuleInfo_5));
      MR_hl_field(MR_mktag(0), Var_16, 4) = ((MR_Box) (OrderPredInfo_6));
    }
    mercury__map__foldl_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), (MR_Word) (&transform_hlds__intermod_analysis_scalar_common_1[12]), Var_16, ProcTable_13, ((MR_Box) (STATE_VARIABLE_MMTablingInfosCord_0_14)), &conv1_STATE_VARIABLE_MMTablingInfosCord_15);
    *STATE_VARIABLE_MMTablingInfosCord_15 = ((MR_Word) (conv1_STATE_VARIABLE_MMTablingInfosCord_15));
  }
}

static void MR_CALL 
transform_hlds__intermod_analysis__gather_pragma_trailing_info_for_proc_6_p_0(
  MR_Word ModuleInfo_7,
  MR_Word OrderPredInfo_8,
  MR_Integer ProcId_9,
  MR_Word ProcInfo_10,
  MR_Word STATE_VARIABLE_TrailingInfosCord_0_27,
  MR_Word * STATE_VARIABLE_TrailingInfosCord_28)
{
  {
    MR_bool succeeded;
    MR_String PredName_12 = ((MR_String) ((MR_hl_field(MR_mktag(0), OrderPredInfo_8, (MR_Integer) 0))));
    MR_Word UserArity_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OrderPredInfo_8, (MR_Integer) 1))));
    MR_Word PredOrFunc_14 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), OrderPredInfo_8, (MR_Integer) 2))) & (MR_Integer) 1);
    MR_Word PredId_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OrderPredInfo_8, (MR_Integer) 3))));
    MR_Word PredInfo_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OrderPredInfo_8, (MR_Integer) 4))));
    MR_Word MaybeProcTrailingInfo_17;
    MR_Word ProcTrailingInfo_18;
    MR_Word ShouldWrite_19;
    MR_Word Var_29;

    hlds__hlds_pred__proc_info_get_trailing_info_2_p_0(ProcInfo_10, &MaybeProcTrailingInfo_17);
    succeeded = hlds__hlds_pred__proc_info_is_valid_mode_1_p_0(ProcInfo_10);
    if (succeeded)
    {
      succeeded = (MaybeProcTrailingInfo_17 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        ProcTrailingInfo_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeProcTrailingInfo_17, (MR_Integer) 0))));
        Var_29 = (MR_Integer) 1;
        transform_hlds__intermod_analysis__should_write_trailing_info_6_p_0(ModuleInfo_7, PredId_15, ProcId_9, PredInfo_16, Var_29, &ShouldWrite_19);
        succeeded = (ShouldWrite_19 == (MR_Integer) 1);
      }
    }
    if (succeeded)
    {
      MR_Word ModuleName_20;
      MR_Word PredSymName_21;
      MR_Integer ModeNum_22;
      MR_Word PredNameArityPFMn_23;
      MR_Word Status_24;
      MR_Word TrailingInfo_26;

      ModuleName_20 = hlds__hlds_pred__pred_info_module_1_f_0(PredInfo_16);
      {
        PredSymName_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), PredSymName_21, 0) = ((MR_Box) (ModuleName_20));
        MR_hl_field(MR_mktag(1), PredSymName_21, 1) = ((MR_Box) (PredName_12));
      }
      hlds__hlds_pred__proc_id_to_int_2_p_0(ProcId_9, &ModeNum_22);
      {
        PredNameArityPFMn_23 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), PredNameArityPFMn_23, 0) = (MR_Box) ((MR_Unsigned) (PredOrFunc_14));
        MR_hl_field(MR_mktag(0), PredNameArityPFMn_23, 1) = ((MR_Box) (PredSymName_21));
        MR_hl_field(MR_mktag(0), PredNameArityPFMn_23, 2) = ((MR_Box) (UserArity_13));
        MR_hl_field(MR_mktag(0), PredNameArityPFMn_23, 3) = ((MR_Box) (ModeNum_22));
      }
      Status_24 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), ProcTrailingInfo_18, (MR_Integer) 0))) & (MR_Integer) 3);
      {
        TrailingInfo_26 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), TrailingInfo_26, 0) = ((MR_Box) (PredNameArityPFMn_23));
        MR_hl_field(MR_mktag(0), TrailingInfo_26, 1) = (MR_Box) ((MR_Unsigned) (Status_24));
      }
      mercury__cord__snoc_3_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_trailing_info_0), ((MR_Box) (TrailingInfo_26)), STATE_VARIABLE_TrailingInfosCord_0_27, STATE_VARIABLE_TrailingInfosCord_28);
    }
    else
      *STATE_VARIABLE_TrailingInfosCord_28 = STATE_VARIABLE_TrailingInfosCord_0_27;
  }
}

static void MR_CALL 
transform_hlds__intermod_analysis__gather_pragma_trailing_info_for_pred_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_TrailingInfosCord_28;

    transform_hlds__intermod_analysis__gather_pragma_trailing_info_for_proc_6_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Integer) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv0_STATE_VARIABLE_TrailingInfosCord_28);
    *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_TrailingInfosCord_28));
  }
}

static void MR_CALL 
transform_hlds__intermod_analysis__gather_pragma_trailing_info_for_pred_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word OrderPredInfo_6,
  MR_Word STATE_VARIABLE_TrailingInfosCord_0_14,
  MR_Word * STATE_VARIABLE_TrailingInfosCord_15)
{
  {
    MR_Word PredInfo_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OrderPredInfo_6, (MR_Integer) 4))));
    MR_Word ProcTable_13;
    MR_Word Var_16;
    MR_Box conv1_STATE_VARIABLE_TrailingInfosCord_15;

    hlds__hlds_pred__pred_info_get_proc_table_2_p_0(PredInfo_12, &ProcTable_13);
    {
      Var_16 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_16, 0) = ((MR_Box) (&transform_hlds__intermod_analysis_scalar_common_9[1]));
      MR_hl_field(MR_mktag(0), Var_16, 1) = ((MR_Box) (transform_hlds__intermod_analysis__gather_pragma_trailing_info_for_pred_4_p_0_1));
      MR_hl_field(MR_mktag(0), Var_16, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_16, 3) = ((MR_Box) (ModuleInfo_5));
      MR_hl_field(MR_mktag(0), Var_16, 4) = ((MR_Box) (OrderPredInfo_6));
    }
    mercury__map__foldl_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), (MR_Word) (&transform_hlds__intermod_analysis_scalar_common_1[11]), Var_16, ProcTable_13, ((MR_Box) (STATE_VARIABLE_TrailingInfosCord_0_14)), &conv1_STATE_VARIABLE_TrailingInfosCord_15);
    *STATE_VARIABLE_TrailingInfosCord_15 = ((MR_Word) (conv1_STATE_VARIABLE_TrailingInfosCord_15));
  }
}

static void MR_CALL 
transform_hlds__intermod_analysis__gather_pragma_exceptions_for_proc_6_p_0(
  MR_Word ModuleInfo_7,
  MR_Word OrderPredInfo_8,
  MR_Integer ProcId_9,
  MR_Word ProcInfo_10,
  MR_Word STATE_VARIABLE_ExceptionsCord_0_32,
  MR_Word * STATE_VARIABLE_ExceptionsCord_33)
{
  {
    MR_bool succeeded;
    MR_String PredName_12 = ((MR_String) ((MR_hl_field(MR_mktag(0), OrderPredInfo_8, (MR_Integer) 0))));
    MR_Word UserArity_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OrderPredInfo_8, (MR_Integer) 1))));
    MR_Word PredOrFunc_14 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), OrderPredInfo_8, (MR_Integer) 2))) & (MR_Integer) 1);
    MR_Word PredId_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OrderPredInfo_8, (MR_Integer) 3))));
    MR_Word PredInfo_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OrderPredInfo_8, (MR_Integer) 4))));
    MR_Word ProcExceptionInfo_24;
    MR_Word TypeSpecInfo_17;
    MR_Word TypeSpecForcePreds_19;
    MR_Word Markers_22;
    MR_Word MaybeProcExceptionInfo_23;
    MR_Word TypeCtorInfo_37_37;
    MR_Word Var_34;
    MR_Word Var_35;

    succeeded = hlds__hlds_pred__proc_info_is_valid_mode_1_p_0(ProcInfo_10);
    if (succeeded)
    {
      succeeded = hlds__hlds_pred__procedure_is_exported_3_p_0(ModuleInfo_7, PredInfo_16, ProcId_9);
      if (succeeded)
      {
        succeeded = hlds__hlds_pred__is_unify_index_or_compare_pred_1_p_0(PredInfo_16);
        succeeded = !(succeeded);
        if (succeeded)
        {
          hlds__hlds_module__module_info_get_type_spec_info_2_p_0(ModuleInfo_7, &TypeSpecInfo_17);
          TypeSpecForcePreds_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeSpecInfo_17, (MR_Integer) 1))));
          TypeCtorInfo_37_37 = (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0);
          succeeded = mercury__set__member_2_p_0(TypeCtorInfo_37_37, ((MR_Box) (PredId_15)), TypeSpecForcePreds_19);
          succeeded = !(succeeded);
          if (succeeded)
          {
            hlds__hlds_pred__pred_info_get_markers_2_p_0(PredInfo_16, &Markers_22);
            Var_34 = (MR_Integer) 11;
            succeeded = hlds__hlds_pred__check_marker_2_p_0(Markers_22, Var_34);
            succeeded = !(succeeded);
            if (succeeded)
            {
              Var_35 = (MR_Integer) 12;
              succeeded = hlds__hlds_pred__check_marker_2_p_0(Markers_22, Var_35);
              succeeded = !(succeeded);
              if (succeeded)
              {
                hlds__hlds_pred__proc_info_get_exception_info_2_p_0(ProcInfo_10, &MaybeProcExceptionInfo_23);
                succeeded = (MaybeProcExceptionInfo_23 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                  ProcExceptionInfo_24 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeProcExceptionInfo_23, (MR_Integer) 0))));
              }
            }
          }
        }
      }
    }
    if (succeeded)
    {
      MR_Word ModuleName_25;
      MR_Word PredSymName_26;
      MR_Integer ModeNum_27;
      MR_Word PredNameArityPFMn_28;
      MR_Word Status_29;
      MR_Word ExceptionInfo_31;

      ModuleName_25 = hlds__hlds_pred__pred_info_module_1_f_0(PredInfo_16);
      {
        PredSymName_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), PredSymName_26, 0) = ((MR_Box) (ModuleName_25));
        MR_hl_field(MR_mktag(1), PredSymName_26, 1) = ((MR_Box) (PredName_12));
      }
      hlds__hlds_pred__proc_id_to_int_2_p_0(ProcId_9, &ModeNum_27);
      {
        PredNameArityPFMn_28 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), PredNameArityPFMn_28, 0) = (MR_Box) ((MR_Unsigned) (PredOrFunc_14));
        MR_hl_field(MR_mktag(0), PredNameArityPFMn_28, 1) = ((MR_Box) (PredSymName_26));
        MR_hl_field(MR_mktag(0), PredNameArityPFMn_28, 2) = ((MR_Box) (UserArity_13));
        MR_hl_field(MR_mktag(0), PredNameArityPFMn_28, 3) = ((MR_Box) (ModeNum_27));
      }
      Status_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ProcExceptionInfo_24, (MR_Integer) 0))));
      {
        ExceptionInfo_31 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), ExceptionInfo_31, 0) = ((MR_Box) (PredNameArityPFMn_28));
        MR_hl_field(MR_mktag(0), ExceptionInfo_31, 1) = ((MR_Box) (Status_29));
      }
      mercury__cord__snoc_3_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_exceptions_0), ((MR_Box) (ExceptionInfo_31)), STATE_VARIABLE_ExceptionsCord_0_32, STATE_VARIABLE_ExceptionsCord_33);
    }
    else
      *STATE_VARIABLE_ExceptionsCord_33 = STATE_VARIABLE_ExceptionsCord_0_32;
  }
}

static void MR_CALL 
transform_hlds__intermod_analysis__gather_pragma_exceptions_for_pred_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_ExceptionsCord_33;

    transform_hlds__intermod_analysis__gather_pragma_exceptions_for_proc_6_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Integer) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv0_STATE_VARIABLE_ExceptionsCord_33);
    *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_ExceptionsCord_33));
  }
}

static void MR_CALL 
transform_hlds__intermod_analysis__gather_pragma_exceptions_for_pred_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word OrderPredInfo_6,
  MR_Word STATE_VARIABLE_ExceptionsCord_0_14,
  MR_Word * STATE_VARIABLE_ExceptionsCord_15)
{
  {
    MR_Word PredInfo_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OrderPredInfo_6, (MR_Integer) 4))));
    MR_Word ProcTable_13;
    MR_Word Var_16;
    MR_Box conv1_STATE_VARIABLE_ExceptionsCord_15;

    hlds__hlds_pred__pred_info_get_proc_table_2_p_0(PredInfo_12, &ProcTable_13);
    {
      Var_16 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_16, 0) = ((MR_Box) (&transform_hlds__intermod_analysis_scalar_common_9[0]));
      MR_hl_field(MR_mktag(0), Var_16, 1) = ((MR_Box) (transform_hlds__intermod_analysis__gather_pragma_exceptions_for_pred_4_p_0_1));
      MR_hl_field(MR_mktag(0), Var_16, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_16, 3) = ((MR_Box) (ModuleInfo_5));
      MR_hl_field(MR_mktag(0), Var_16, 4) = ((MR_Box) (OrderPredInfo_6));
    }
    mercury__map__foldl_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), (MR_Word) (&transform_hlds__intermod_analysis_scalar_common_1[10]), Var_16, ProcTable_13, ((MR_Box) (STATE_VARIABLE_ExceptionsCord_0_14)), &conv1_STATE_VARIABLE_ExceptionsCord_15);
    *STATE_VARIABLE_ExceptionsCord_15 = ((MR_Word) (conv1_STATE_VARIABLE_ExceptionsCord_15));
  }
}

static void MR_CALL 
transform_hlds__intermod_analysis__lp_term_to_arg_size_term_3_p_0(
  MR_Word VarToVarIdMap_4,
  MR_Word LPTerm_5,
  MR_Word * ArgSizeTerm_6)
{
  {
    MR_Word Var_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LPTerm_5, (MR_Integer) 0))));
    MR_Word Coefficient_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LPTerm_5, (MR_Integer) 1))));
    MR_Integer VarId_9;
    MR_Box conv0_VarId_9;

    mercury__map__lookup_3_p_0((MR_Word) (&transform_hlds__intermod_analysis_scalar_common_1[16]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), VarToVarIdMap_4, ((MR_Box) (Var_7)), &conv0_VarId_9);
    VarId_9 = ((MR_Integer) (conv0_VarId_9));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      *ArgSizeTerm_6 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (VarId_9));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Coefficient_8));
    }
  }
}

static void MR_CALL 
transform_hlds__intermod_analysis__lp_rational_constraint_to_arg_size_constr_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_ArgSizeTerm_6;

    transform_hlds__intermod_analysis__lp_term_to_arg_size_term_3_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv0_ArgSizeTerm_6);
    *wrapper_arg_2 = ((MR_Box) (conv0_ArgSizeTerm_6));
  }
}

static void MR_CALL 
transform_hlds__intermod_analysis__lp_rational_constraint_to_arg_size_constr_3_p_0(
  MR_Word VarToVarIdMap_4,
  MR_Word LPConstraint_5,
  MR_Word * ArgSizeConstr_6)
{
  {
    MR_Word LPTerms_7;
    MR_Word Operator_8;
    MR_Word Constant_9;
    MR_Word ArgSizeTerms_10;
    MR_Word Var_11;

    libs__lp_rational__deconstruct_non_false_constraint_4_p_0(LPConstraint_5, &LPTerms_7, &Operator_8, &Constant_9);
    {
      Var_11 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_11, 0) = ((MR_Box) (&transform_hlds__intermod_analysis_scalar_common_8[1]));
      MR_hl_field(MR_mktag(0), Var_11, 1) = ((MR_Box) (transform_hlds__intermod_analysis__lp_rational_constraint_to_arg_size_constr_3_p_0_1));
      MR_hl_field(MR_mktag(0), Var_11, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_11, 3) = ((MR_Box) (VarToVarIdMap_4));
    }
    mercury__list__map_3_p_0((MR_Word) (&transform_hlds__intermod_analysis_scalar_common_2[0]), (MR_Word) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_arg_size_term_0), Var_11, LPTerms_7, &ArgSizeTerms_10);
    switch (Operator_8) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *ArgSizeConstr_6 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ArgSizeTerms_10));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Constant_9));
        }
        break;
      case (MR_Integer) 0:
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          *ArgSizeConstr_6 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ArgSizeTerms_10));
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Constant_9));
        }
        break;
    }
  }
}

static void MR_CALL 
transform_hlds__intermod_analysis__gather_pragma_termination2_for_proc_5_p_0(
  MR_Word OrderPredInfo_6,
  MR_Integer _ProcId_7,
  MR_Word ProcInfo_8,
  MR_Word STATE_VARIABLE_TermInfo2sCord_0_35,
  MR_Word * STATE_VARIABLE_TermInfo2sCord_36)
{
  transform_hlds__intermod_analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_97_116_104_101_114_95_112_114_97_103_109_97_95_116_101_114_109_105_110_97_116_105_111_110_50_95_102_111_114_95_112_114_111_99_95_95_91_50_93_95_48_5_p_0(OrderPredInfo_6, ProcInfo_8, STATE_VARIABLE_TermInfo2sCord_0_35, STATE_VARIABLE_TermInfo2sCord_36);
}

static void MR_CALL 
transform_hlds__intermod_analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_97_116_104_101_114_95_112_114_97_103_109_97_95_116_101_114_109_105_110_97_116_105_111_110_50_95_102_111_114_95_112_114_111_99_95_95_91_50_93_95_48_5_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_ArgSizeConstr_6;

    transform_hlds__intermod_analysis__lp_rational_constraint_to_arg_size_constr_3_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv1_ArgSizeConstr_6);
    *wrapper_arg_2 = ((MR_Box) (conv1_ArgSizeConstr_6));
  }
}

static MR_bool MR_CALL 
transform_hlds__intermod_analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_97_116_104_101_114_95_112_114_97_103_109_97_95_116_101_114_109_105_110_97_116_105_111_110_50_95_102_111_114_95_112_114_111_99_95_95_91_50_93_95_48_5_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = transform_hlds__intermod_analysis__IntroducedFrom__pred__maybe_constr_arg_size_info_to_arg_size_constr__572__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
    return succeeded;
  }
}

static MR_bool MR_CALL 
transform_hlds__intermod_analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_97_116_104_101_114_95_112_114_97_103_109_97_95_116_101_114_109_105_110_97_116_105_111_110_50_95_102_111_114_95_112_114_111_99_95_95_91_50_93_95_48_5_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = libs__lp_rational__nonneg_constr_1_p_0(((MR_Word) (wrapper_arg_1)));
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__intermod_analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_97_116_104_101_114_95_112_114_97_103_109_97_95_116_101_114_109_105_110_97_116_105_111_110_50_95_102_111_114_95_112_114_111_99_95_95_91_50_93_95_48_5_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_ArgSizeConstr_6;

    transform_hlds__intermod_analysis__lp_rational_constraint_to_arg_size_constr_3_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv0_ArgSizeConstr_6);
    *wrapper_arg_2 = ((MR_Box) (conv0_ArgSizeConstr_6));
  }
}

static MR_bool MR_CALL 
transform_hlds__intermod_analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_97_116_104_101_114_95_112_114_97_103_109_97_95_116_101_114_109_105_110_97_116_105_111_110_50_95_102_111_114_95_112_114_111_99_95_95_91_50_93_95_48_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = transform_hlds__intermod_analysis__IntroducedFrom__pred__maybe_constr_arg_size_info_to_arg_size_constr__572__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
    return succeeded;
  }
}

static MR_bool MR_CALL 
transform_hlds__intermod_analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_97_116_104_101_114_95_112_114_97_103_109_97_95_116_101_114_109_105_110_97_116_105_111_110_50_95_102_111_114_95_112_114_111_99_95_95_91_50_93_95_48_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = libs__lp_rational__nonneg_constr_1_p_0(((MR_Word) (wrapper_arg_1)));
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__intermod_analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_97_116_104_101_114_95_112_114_97_103_109_97_95_116_101_114_109_105_110_97_116_105_111_110_50_95_102_111_114_95_112_114_111_99_95_95_91_50_93_95_48_5_p_0(
  MR_Word OrderPredInfo_6,
  MR_Word ProcInfo_8,
  MR_Word STATE_VARIABLE_TermInfo2sCord_0_35,
  MR_Word * STATE_VARIABLE_TermInfo2sCord_36)
{
  {
    MR_bool succeeded;

    succeeded = hlds__hlds_pred__proc_info_is_valid_mode_1_p_0(ProcInfo_8);
    if (succeeded)
    {
      MR_String PredName_10 = ((MR_String) ((MR_hl_field(MR_mktag(0), OrderPredInfo_6, (MR_Integer) 0))));
      MR_Word PredOrFunc_12 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), OrderPredInfo_6, (MR_Integer) 2))) & (MR_Integer) 1);
      MR_Word PredInfo_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OrderPredInfo_6, (MR_Integer) 4))));
      MR_Word ModuleName_15;
      MR_Word PredSymName_16;
      MR_Word ArgModes_17;
      MR_Word Term2Info_18;
      MR_Word MaybeSuccessConstraints_19;
      MR_Word MaybeFailureConstraints_20;
      MR_Word MaybeTermination_21;
      MR_Word PredNameModesPF_22;
      MR_Word HeadVars_23;
      MR_Word SizeVarMap_24;
      MR_Word HeadSizeVars_25;
      MR_Integer NumHeadSizeVars_26;
      MR_Word HeadSizeVarIds_27;
      MR_Word VarToVarIdMap_28;
      MR_Word MaybeSuccessArgSizeInfo_29;
      MR_Word MaybeFailureArgSizeInfo_30;
      MR_Word MaybePragmaTermination_31;
      MR_Word TermInfo2_34;
      MR_Integer Var_38;
      MR_Word Var_40;

      ModuleName_15 = hlds__hlds_pred__pred_info_module_1_f_0(PredInfo_14);
      {
        PredSymName_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), PredSymName_16, 0) = ((MR_Box) (ModuleName_15));
        MR_hl_field(MR_mktag(1), PredSymName_16, 1) = ((MR_Box) (PredName_10));
      }
      hlds__hlds_pred__proc_info_declared_argmodes_2_p_0(ProcInfo_8, &ArgModes_17);
      hlds__hlds_pred__proc_info_get_termination2_info_2_p_0(ProcInfo_8, &Term2Info_18);
      MaybeSuccessConstraints_19 = transform_hlds__term_constr_main_types__term2_info_get_success_constrs_1_f_0(Term2Info_18);
      MaybeFailureConstraints_20 = transform_hlds__term_constr_main_types__term2_info_get_failure_constrs_1_f_0(Term2Info_18);
      MaybeTermination_21 = transform_hlds__term_constr_main_types__term2_info_get_term_status_1_f_0(Term2Info_18);
      {
        PredNameModesPF_22 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), PredNameModesPF_22, 0) = (MR_Box) ((MR_Unsigned) (PredOrFunc_12));
        MR_hl_field(MR_mktag(0), PredNameModesPF_22, 1) = ((MR_Box) (PredSymName_16));
        MR_hl_field(MR_mktag(0), PredNameModesPF_22, 2) = ((MR_Box) (ArgModes_17));
      }
      hlds__hlds_pred__proc_info_get_headvars_2_p_0(ProcInfo_8, &HeadVars_23);
      SizeVarMap_24 = transform_hlds__term_constr_main_types__term2_info_get_size_var_map_1_f_0(Term2Info_18);
      HeadSizeVars_25 = transform_hlds__term_constr_util__prog_vars_to_size_vars_2_f_0(SizeVarMap_24, HeadVars_23);
      mercury__list__length_2_p_0((MR_Word) (&transform_hlds__intermod_analysis_scalar_common_1[15]), HeadVars_23, &NumHeadSizeVars_26);
      Var_38 = (MR_Integer) ((MR_Unsigned) NumHeadSizeVars_26 - (MR_Unsigned) 1);
      HeadSizeVarIds_27 = mercury__list__f_46_46_2_f_0((MR_Integer) 0, Var_38);
      Var_40 = mercury__map__init_0_f_0((MR_Word) (&transform_hlds__intermod_analysis_scalar_common_1[16]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0));
      mercury__map__det_insert_from_corresponding_lists_4_p_0((MR_Word) (&transform_hlds__intermod_analysis_scalar_common_1[16]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), HeadSizeVars_25, HeadSizeVarIds_27, Var_40, &VarToVarIdMap_28);
      if ((MaybeSuccessConstraints_19 == (MR_Word) ((MR_Unsigned) 0U)))
        MaybeSuccessArgSizeInfo_29 = (MR_Word) ((MR_Unsigned) 0U);
      else
      {
        MR_Word Polyhedron_56 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeSuccessConstraints_19, (MR_Integer) 0))));
        MR_Word Constraints0_57;
        MR_Word Constraints1_58;
        MR_Word Constraints_59;
        MR_Word ArgSizeInfoConstrs_60;
        MR_Word Var_63;

        Constraints0_57 = libs__polyhedron__non_false_constraints_1_f_0(Polyhedron_56);
        Constraints1_58 = mercury__list__filter_2_f_0((MR_Word) (&libs__lp_rational__libs__lp_rational__type_ctor_info_constraint_0), (MR_Word) (&transform_hlds__intermod_analysis_scalar_common_7[1]), Constraints0_57);
        Constraints_59 = mercury__list__sort_1_f_0((MR_Word) (&libs__lp_rational__libs__lp_rational__type_ctor_info_constraint_0), Constraints1_58);
        {
          Var_63 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_63, 0) = ((MR_Box) (&transform_hlds__intermod_analysis_scalar_common_8[0]));
          MR_hl_field(MR_mktag(0), Var_63, 1) = ((MR_Box) (transform_hlds__intermod_analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_97_116_104_101_114_95_112_114_97_103_109_97_95_116_101_114_109_105_110_97_116_105_111_110_50_95_102_111_114_95_112_114_111_99_95_95_91_50_93_95_48_5_p_0_3));
          MR_hl_field(MR_mktag(0), Var_63, 2) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), Var_63, 3) = ((MR_Box) (VarToVarIdMap_28));
        }
        mercury__list__map_3_p_0((MR_Word) (&libs__lp_rational__libs__lp_rational__type_ctor_info_constraint_0), (MR_Word) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_arg_size_constr_0), Var_63, Constraints_59, &ArgSizeInfoConstrs_60);
        {
          MaybeSuccessArgSizeInfo_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), MaybeSuccessArgSizeInfo_29, 0) = ((MR_Box) (ArgSizeInfoConstrs_60));
        }
      }
      if ((MaybeFailureConstraints_20 == (MR_Word) ((MR_Unsigned) 0U)))
        MaybeFailureArgSizeInfo_30 = (MR_Word) ((MR_Unsigned) 0U);
      else
      {
        MR_Word Polyhedron_74 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeFailureConstraints_20, (MR_Integer) 0))));
        MR_Word Constraints0_75;
        MR_Word Constraints1_76;
        MR_Word Constraints_77;
        MR_Word ArgSizeInfoConstrs_78;
        MR_Word Var_81;

        Constraints0_75 = libs__polyhedron__non_false_constraints_1_f_0(Polyhedron_74);
        Constraints1_76 = mercury__list__filter_2_f_0((MR_Word) (&libs__lp_rational__libs__lp_rational__type_ctor_info_constraint_0), (MR_Word) (&transform_hlds__intermod_analysis_scalar_common_7[2]), Constraints0_75);
        Constraints_77 = mercury__list__sort_1_f_0((MR_Word) (&libs__lp_rational__libs__lp_rational__type_ctor_info_constraint_0), Constraints1_76);
        {
          Var_81 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_81, 0) = ((MR_Box) (&transform_hlds__intermod_analysis_scalar_common_8[0]));
          MR_hl_field(MR_mktag(0), Var_81, 1) = ((MR_Box) (transform_hlds__intermod_analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_97_116_104_101_114_95_112_114_97_103_109_97_95_116_101_114_109_105_110_97_116_105_111_110_50_95_102_111_114_95_112_114_111_99_95_95_91_50_93_95_48_5_p_0_6));
          MR_hl_field(MR_mktag(0), Var_81, 2) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), Var_81, 3) = ((MR_Box) (VarToVarIdMap_28));
        }
        mercury__list__map_3_p_0((MR_Word) (&libs__lp_rational__libs__lp_rational__type_ctor_info_constraint_0), (MR_Word) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_arg_size_constr_0), Var_81, Constraints_77, &ArgSizeInfoConstrs_78);
        {
          MaybeFailureArgSizeInfo_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), MaybeFailureArgSizeInfo_30, 0) = ((MR_Box) (ArgSizeInfoConstrs_78));
        }
      }
      if ((MaybeTermination_21 == (MR_Word) ((MR_Unsigned) 0U)))
        MaybePragmaTermination_31 = (MR_Word) ((MR_Unsigned) 0U);
      else
      {
        MR_Word Var_52 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeTermination_21, (MR_Integer) 0))));

        if (((MR_tag((MR_Word) Var_52)) == (MR_Integer) 1))
          MaybePragmaTermination_31 = (MR_Word) (MR_mkword(MR_mktag(1), &transform_hlds__intermod_analysis_scalar_common_3[1]));
        else
          MaybePragmaTermination_31 = (MR_Word) (MR_mkword(MR_mktag(1), &transform_hlds__intermod_analysis_scalar_common_3[2]));
      }
      {
        TermInfo2_34 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), TermInfo2_34, 0) = ((MR_Box) (PredNameModesPF_22));
        MR_hl_field(MR_mktag(0), TermInfo2_34, 1) = ((MR_Box) (MaybeSuccessArgSizeInfo_29));
        MR_hl_field(MR_mktag(0), TermInfo2_34, 2) = ((MR_Box) (MaybeFailureArgSizeInfo_30));
        MR_hl_field(MR_mktag(0), TermInfo2_34, 3) = ((MR_Box) (MaybePragmaTermination_31));
      }
      mercury__cord__snoc_3_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_termination2_info_0), ((MR_Box) (TermInfo2_34)), STATE_VARIABLE_TermInfo2sCord_0_35, STATE_VARIABLE_TermInfo2sCord_36);
    }
    else
      *STATE_VARIABLE_TermInfo2sCord_36 = STATE_VARIABLE_TermInfo2sCord_0_35;
  }
}

static void MR_CALL 
transform_hlds__intermod_analysis__gather_pragma_termination2_for_pred_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_TermInfo2sCord_36;

    transform_hlds__intermod_analysis__gather_pragma_termination2_for_proc_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Integer) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv0_STATE_VARIABLE_TermInfo2sCord_36);
    *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_TermInfo2sCord_36));
  }
}

static void MR_CALL 
transform_hlds__intermod_analysis__gather_pragma_termination2_for_pred_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word OrderPredInfo_6,
  MR_Word STATE_VARIABLE_TermInfo2sCord_0_20,
  MR_Word * STATE_VARIABLE_TermInfo2sCord_21)
{
  {
    MR_bool succeeded;
    MR_Word PredId_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OrderPredInfo_6, (MR_Integer) 3))));
    MR_Word PredInfo_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OrderPredInfo_6, (MR_Integer) 4))));
    MR_Word PredStatus_13;
    MR_Word TypeSpecInfo_14;
    MR_Word TypeSpecForcePreds_16;
    MR_Word Var_34;
    MR_Word TypeCtorInfo_26_26;

    hlds__hlds_pred__pred_info_get_status_2_p_0(PredInfo_12, &PredStatus_13);
    hlds__hlds_module__module_info_get_type_spec_info_2_p_0(ModuleInfo_5, &TypeSpecInfo_14);
    TypeSpecForcePreds_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeSpecInfo_14, (MR_Integer) 1))));
    Var_34 = (MR_Word) (PredStatus_13);
    if ((Var_34 == (MR_Word) ((MR_Unsigned) 12U)))
      succeeded = MR_TRUE;
    else
    if ((Var_34 == (MR_Word) ((MR_Unsigned) 16U)))
      succeeded = MR_TRUE;
    else
      succeeded = MR_FALSE;
    if (succeeded)
    {
      succeeded = hlds__hlds_pred__is_unify_index_or_compare_pred_1_p_0(PredInfo_12);
      succeeded = !(succeeded);
      if (succeeded)
      {
        TypeCtorInfo_26_26 = (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0);
        succeeded = mercury__set__member_2_p_0(TypeCtorInfo_26_26, ((MR_Box) (PredId_11)), TypeSpecForcePreds_16);
        succeeded = !(succeeded);
      }
    }
    if (succeeded)
    {
      MR_Word ProcTable_19;
      MR_Word Var_24;
      MR_Box conv1_STATE_VARIABLE_TermInfo2sCord_21;

      hlds__hlds_pred__pred_info_get_proc_table_2_p_0(PredInfo_12, &ProcTable_19);
      {
        Var_24 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_24, 0) = ((MR_Box) (&transform_hlds__intermod_analysis_scalar_common_5[5]));
        MR_hl_field(MR_mktag(0), Var_24, 1) = ((MR_Box) (transform_hlds__intermod_analysis__gather_pragma_termination2_for_pred_4_p_0_1));
        MR_hl_field(MR_mktag(0), Var_24, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), Var_24, 3) = ((MR_Box) (OrderPredInfo_6));
      }
      mercury__map__foldl_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), (MR_Word) (&transform_hlds__intermod_analysis_scalar_common_1[9]), Var_24, ProcTable_19, ((MR_Box) (STATE_VARIABLE_TermInfo2sCord_0_20)), &conv1_STATE_VARIABLE_TermInfo2sCord_21);
      *STATE_VARIABLE_TermInfo2sCord_21 = ((MR_Word) (conv1_STATE_VARIABLE_TermInfo2sCord_21));
    }
    else
      *STATE_VARIABLE_TermInfo2sCord_21 = STATE_VARIABLE_TermInfo2sCord_0_20;
  }
}

static void MR_CALL 
transform_hlds__intermod_analysis__gather_pragma_termination_for_proc_5_p_0(
  MR_Word OrderPredInfo_6,
  MR_Integer _ProcId_7,
  MR_Word ProcInfo_8,
  MR_Word STATE_VARIABLE_TermInfosCord_0_24,
  MR_Word * STATE_VARIABLE_TermInfosCord_25)
{
  transform_hlds__intermod_analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_97_116_104_101_114_95_112_114_97_103_109_97_95_116_101_114_109_105_110_97_116_105_111_110_95_102_111_114_95_112_114_111_99_95_95_91_50_93_95_48_5_p_0(OrderPredInfo_6, ProcInfo_8, STATE_VARIABLE_TermInfosCord_0_24, STATE_VARIABLE_TermInfosCord_25);
}

static void MR_CALL 
transform_hlds__intermod_analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_97_116_104_101_114_95_112_114_97_103_109_97_95_116_101_114_109_105_110_97_116_105_111_110_95_102_111_114_95_112_114_111_99_95_95_91_50_93_95_48_5_p_0(
  MR_Word OrderPredInfo_6,
  MR_Word ProcInfo_8,
  MR_Word STATE_VARIABLE_TermInfosCord_0_24,
  MR_Word * STATE_VARIABLE_TermInfosCord_25)
{
  {
    MR_bool succeeded;

    succeeded = hlds__hlds_pred__proc_info_is_valid_mode_1_p_0(ProcInfo_8);
    if (succeeded)
    {
      MR_String PredName_10 = ((MR_String) ((MR_hl_field(MR_mktag(0), OrderPredInfo_6, (MR_Integer) 0))));
      MR_Word PredOrFunc_12 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), OrderPredInfo_6, (MR_Integer) 2))) & (MR_Integer) 1);
      MR_Word PredInfo_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OrderPredInfo_6, (MR_Integer) 4))));
      MR_Word ModuleName_15;
      MR_Word PredSymName_16;
      MR_Word ArgModes_17;
      MR_Word MaybeArgSize_18;
      MR_Word MaybeTermination_19;
      MR_Word PredNameModesPF_20;
      MR_Word MaybeParseTreeArgSize_21;
      MR_Word MaybeParseTreeTermination_22;
      MR_Word TermInfo_23;

      ModuleName_15 = hlds__hlds_pred__pred_info_module_1_f_0(PredInfo_14);
      {
        PredSymName_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), PredSymName_16, 0) = ((MR_Box) (ModuleName_15));
        MR_hl_field(MR_mktag(1), PredSymName_16, 1) = ((MR_Box) (PredName_10));
      }
      hlds__hlds_pred__proc_info_declared_argmodes_2_p_0(ProcInfo_8, &ArgModes_17);
      hlds__hlds_pred__proc_info_get_maybe_arg_size_info_2_p_0(ProcInfo_8, &MaybeArgSize_18);
      hlds__hlds_pred__proc_info_get_maybe_termination_info_2_p_0(ProcInfo_8, &MaybeTermination_19);
      {
        PredNameModesPF_20 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), PredNameModesPF_20, 0) = (MR_Box) ((MR_Unsigned) (PredOrFunc_12));
        MR_hl_field(MR_mktag(0), PredNameModesPF_20, 1) = ((MR_Box) (PredSymName_16));
        MR_hl_field(MR_mktag(0), PredNameModesPF_20, 2) = ((MR_Box) (ArgModes_17));
      }
      if ((MaybeArgSize_18 == (MR_Word) ((MR_Unsigned) 0U)))
        MaybeParseTreeArgSize_21 = (MR_Word) ((MR_Unsigned) 0U);
      else
      {
        MR_Word ArgSize_30 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeArgSize_18, (MR_Integer) 0))));
        MR_Word ParseTreeArgSize_33;

        if (((MR_tag((MR_Word) ArgSize_30)) == (MR_Integer) 0))
          ParseTreeArgSize_33 = (MR_Word) (ArgSize_30);
        else
          ParseTreeArgSize_33 = (MR_Word) (MR_mkword(MR_mktag(1), &transform_hlds__intermod_analysis_scalar_common_3[0]));
        {
          MaybeParseTreeArgSize_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), MaybeParseTreeArgSize_21, 0) = ((MR_Box) (ParseTreeArgSize_33));
        }
      }
      if ((MaybeTermination_19 == (MR_Word) ((MR_Unsigned) 0U)))
        MaybeParseTreeTermination_22 = (MR_Word) ((MR_Unsigned) 0U);
      else
      {
        MR_Word Termination_38 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeTermination_19, (MR_Integer) 0))));
        MR_Word ParseTreeTermination_40;

        if (((MR_tag((MR_Word) Termination_38)) == (MR_Integer) 1))
          ParseTreeTermination_40 = (MR_Word) (MR_mkword(MR_mktag(1), &transform_hlds__intermod_analysis_scalar_common_3[0]));
        else
          ParseTreeTermination_40 = (MR_Word) (Termination_38);
        {
          MaybeParseTreeTermination_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), MaybeParseTreeTermination_22, 0) = ((MR_Box) (ParseTreeTermination_40));
        }
      }
      {
        TermInfo_23 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), TermInfo_23, 0) = ((MR_Box) (PredNameModesPF_20));
        MR_hl_field(MR_mktag(0), TermInfo_23, 1) = ((MR_Box) (MaybeParseTreeArgSize_21));
        MR_hl_field(MR_mktag(0), TermInfo_23, 2) = ((MR_Box) (MaybeParseTreeTermination_22));
      }
      mercury__cord__snoc_3_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_termination_info_0), ((MR_Box) (TermInfo_23)), STATE_VARIABLE_TermInfosCord_0_24, STATE_VARIABLE_TermInfosCord_25);
    }
    else
      *STATE_VARIABLE_TermInfosCord_25 = STATE_VARIABLE_TermInfosCord_0_24;
  }
}

static void MR_CALL 
transform_hlds__intermod_analysis__gather_pragma_termination_for_pred_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_TermInfosCord_25;

    transform_hlds__intermod_analysis__gather_pragma_termination_for_proc_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Integer) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv0_STATE_VARIABLE_TermInfosCord_25);
    *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_TermInfosCord_25));
  }
}

static void MR_CALL 
transform_hlds__intermod_analysis__gather_pragma_termination_for_pred_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word OrderPredInfo_6,
  MR_Word STATE_VARIABLE_TermInfosCord_0_20,
  MR_Word * STATE_VARIABLE_TermInfosCord_21)
{
  {
    MR_bool succeeded;
    MR_Word PredId_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OrderPredInfo_6, (MR_Integer) 3))));
    MR_Word PredInfo_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OrderPredInfo_6, (MR_Integer) 4))));
    MR_Word PredStatus_13;
    MR_Word TypeSpecInfo_14;
    MR_Word TypeSpecForcePreds_16;
    MR_Word Var_34;
    MR_Word TypeCtorInfo_26_26;

    hlds__hlds_pred__pred_info_get_status_2_p_0(PredInfo_12, &PredStatus_13);
    hlds__hlds_module__module_info_get_type_spec_info_2_p_0(ModuleInfo_5, &TypeSpecInfo_14);
    TypeSpecForcePreds_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeSpecInfo_14, (MR_Integer) 1))));
    Var_34 = (MR_Word) (PredStatus_13);
    if ((Var_34 == (MR_Word) ((MR_Unsigned) 12U)))
      succeeded = MR_TRUE;
    else
    if ((Var_34 == (MR_Word) ((MR_Unsigned) 16U)))
      succeeded = MR_TRUE;
    else
      succeeded = MR_FALSE;
    if (succeeded)
    {
      succeeded = hlds__hlds_pred__is_unify_index_or_compare_pred_1_p_0(PredInfo_12);
      succeeded = !(succeeded);
      if (succeeded)
      {
        TypeCtorInfo_26_26 = (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0);
        succeeded = mercury__set__member_2_p_0(TypeCtorInfo_26_26, ((MR_Box) (PredId_11)), TypeSpecForcePreds_16);
        succeeded = !(succeeded);
      }
    }
    if (succeeded)
    {
      MR_Word ProcTable_19;
      MR_Word Var_24;
      MR_Box conv1_STATE_VARIABLE_TermInfosCord_21;

      hlds__hlds_pred__pred_info_get_proc_table_2_p_0(PredInfo_12, &ProcTable_19);
      {
        Var_24 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_24, 0) = ((MR_Box) (&transform_hlds__intermod_analysis_scalar_common_5[4]));
        MR_hl_field(MR_mktag(0), Var_24, 1) = ((MR_Box) (transform_hlds__intermod_analysis__gather_pragma_termination_for_pred_4_p_0_1));
        MR_hl_field(MR_mktag(0), Var_24, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), Var_24, 3) = ((MR_Box) (OrderPredInfo_6));
      }
      mercury__map__foldl_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), (MR_Word) (&transform_hlds__intermod_analysis_scalar_common_1[8]), Var_24, ProcTable_19, ((MR_Box) (STATE_VARIABLE_TermInfosCord_0_20)), &conv1_STATE_VARIABLE_TermInfosCord_21);
      *STATE_VARIABLE_TermInfosCord_21 = ((MR_Word) (conv1_STATE_VARIABLE_TermInfosCord_21));
    }
    else
      *STATE_VARIABLE_TermInfosCord_21 = STATE_VARIABLE_TermInfosCord_0_20;
  }
}

void MR_CALL 
transform_hlds__intermod_analysis__should_write_sharing_info_6_p_0(
  MR_Word ModuleInfo_7,
  MR_Word PredId_8,
  MR_Integer ProcId_9,
  MR_Word PredInfo_10,
  MR_Word WhatFor_11,
  MR_Word * ShouldWrite_12)
{
  {
    MR_bool succeeded;

    succeeded = hlds__hlds_pred__procedure_is_exported_3_p_0(ModuleInfo_7, PredInfo_10, ProcId_9);
    if (succeeded)
    {
      succeeded = hlds__hlds_pred__is_unify_index_or_compare_pred_1_p_0(PredInfo_10);
      succeeded = !(succeeded);
      if (succeeded)
        switch (WhatFor_11) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            succeeded = MR_TRUE;
            break;
          case (MR_Integer) 1:
            {
              MR_Word TypeSpecInfo_13;
              MR_Word TypeSpecForcePreds_15;

              hlds__hlds_module__module_info_get_type_spec_info_2_p_0(ModuleInfo_7, &TypeSpecInfo_13);
              TypeSpecForcePreds_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeSpecInfo_13, (MR_Integer) 1))));
              succeeded = mercury__set__member_2_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), ((MR_Box) (PredId_8)), TypeSpecForcePreds_15);
              succeeded = !(succeeded);
            }
            break;
        }
    }
    if (succeeded)
      *ShouldWrite_12 = (MR_Integer) 1;
    else
      *ShouldWrite_12 = (MR_Integer) 0;
  }
}

void MR_CALL 
transform_hlds__intermod_analysis__should_write_reuse_info_6_p_0(
  MR_Word ModuleInfo_7,
  MR_Word PredId_8,
  MR_Integer ProcId_9,
  MR_Word PredInfo_10,
  MR_Word WhatFor_11,
  MR_Word * ShouldWrite_12)
{
  {
    MR_bool succeeded;
    MR_Word PredOrigin_13;
    MR_Word Var_21;

    succeeded = hlds__hlds_pred__procedure_is_exported_3_p_0(ModuleInfo_7, PredInfo_10, ProcId_9);
    if (succeeded)
    {
      succeeded = hlds__hlds_pred__is_unify_index_or_compare_pred_1_p_0(PredInfo_10);
      succeeded = !(succeeded);
      if (succeeded)
      {
        hlds__hlds_pred__pred_info_get_origin_2_p_0(PredInfo_10, &PredOrigin_13);
        succeeded = ((((MR_tag((MR_Word) PredOrigin_13)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), PredOrigin_13, (MR_Integer) 0)))) == (MR_Integer) 1)));
        if (succeeded)
        {
          Var_21 = ((MR_Word) ((MR_hl_field(MR_mktag(3), PredOrigin_13, (MR_Integer) 1))));
          succeeded = (Var_21 == (MR_Word) ((MR_Unsigned) 16U));
        }
        succeeded = !(succeeded);
        if (succeeded)
          switch (WhatFor_11) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              succeeded = MR_TRUE;
              break;
            case (MR_Integer) 1:
              {
                MR_Word TypeSpecInfo_16;
                MR_Word TypeSpecForcePreds_18;

                hlds__hlds_module__module_info_get_type_spec_info_2_p_0(ModuleInfo_7, &TypeSpecInfo_16);
                TypeSpecForcePreds_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeSpecInfo_16, (MR_Integer) 1))));
                succeeded = mercury__set__member_2_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), ((MR_Box) (PredId_8)), TypeSpecForcePreds_18);
                succeeded = !(succeeded);
              }
              break;
          }
      }
    }
    if (succeeded)
      *ShouldWrite_12 = (MR_Integer) 1;
    else
      *ShouldWrite_12 = (MR_Integer) 0;
  }
}

void MR_CALL 
transform_hlds__intermod_analysis__should_write_mm_tabling_info_6_p_0(
  MR_Word ModuleInfo_7,
  MR_Word PredId_8,
  MR_Integer ProcId_9,
  MR_Word PredInfo_10,
  MR_Word WhatFor_11,
  MR_Word * ShouldWrite_12)
{
  {
    MR_bool succeeded;

    succeeded = hlds__hlds_pred__procedure_is_exported_3_p_0(ModuleInfo_7, PredInfo_10, ProcId_9);
    if (succeeded)
    {
      succeeded = hlds__hlds_pred__is_unify_index_or_compare_pred_1_p_0(PredInfo_10);
      succeeded = !(succeeded);
      if (succeeded)
        switch (WhatFor_11) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            succeeded = MR_TRUE;
            break;
          case (MR_Integer) 1:
            {
              MR_Word TypeSpecInfo_13;
              MR_Word TypeSpecForcePreds_15;
              MR_Word Markers_18;
              MR_Word Var_19;
              MR_Word Var_20;

              hlds__hlds_module__module_info_get_type_spec_info_2_p_0(ModuleInfo_7, &TypeSpecInfo_13);
              TypeSpecForcePreds_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeSpecInfo_13, (MR_Integer) 1))));
              succeeded = mercury__set__member_2_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), ((MR_Box) (PredId_8)), TypeSpecForcePreds_15);
              succeeded = !(succeeded);
              if (succeeded)
              {
                hlds__hlds_pred__pred_info_get_markers_2_p_0(PredInfo_10, &Markers_18);
                Var_19 = (MR_Integer) 11;
                succeeded = hlds__hlds_pred__check_marker_2_p_0(Markers_18, Var_19);
                succeeded = !(succeeded);
                if (succeeded)
                {
                  Var_20 = (MR_Integer) 12;
                  succeeded = hlds__hlds_pred__check_marker_2_p_0(Markers_18, Var_20);
                  succeeded = !(succeeded);
                }
              }
            }
            break;
        }
    }
    if (succeeded)
      *ShouldWrite_12 = (MR_Integer) 1;
    else
      *ShouldWrite_12 = (MR_Integer) 0;
  }
}

void MR_CALL 
transform_hlds__intermod_analysis__should_write_trailing_info_6_p_0(
  MR_Word ModuleInfo_7,
  MR_Word PredId_8,
  MR_Integer ProcId_9,
  MR_Word PredInfo_10,
  MR_Word WhatFor_11,
  MR_Word * ShouldWrite_12)
{
  {
    MR_bool succeeded;

    succeeded = hlds__hlds_pred__procedure_is_exported_3_p_0(ModuleInfo_7, PredInfo_10, ProcId_9);
    if (succeeded)
    {
      succeeded = hlds__hlds_pred__is_unify_index_or_compare_pred_1_p_0(PredInfo_10);
      succeeded = !(succeeded);
      if (succeeded)
        switch (WhatFor_11) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            succeeded = MR_TRUE;
            break;
          case (MR_Integer) 1:
            {
              MR_Word TypeSpecInfo_13;
              MR_Word TypeSpecForcePreds_15;
              MR_Word Markers_18;
              MR_Word Var_19;
              MR_Word Var_20;

              hlds__hlds_module__module_info_get_type_spec_info_2_p_0(ModuleInfo_7, &TypeSpecInfo_13);
              TypeSpecForcePreds_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeSpecInfo_13, (MR_Integer) 1))));
              succeeded = mercury__set__member_2_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), ((MR_Box) (PredId_8)), TypeSpecForcePreds_15);
              succeeded = !(succeeded);
              if (succeeded)
              {
                hlds__hlds_pred__pred_info_get_markers_2_p_0(PredInfo_10, &Markers_18);
                Var_19 = (MR_Integer) 11;
                succeeded = hlds__hlds_pred__check_marker_2_p_0(Markers_18, Var_19);
                succeeded = !(succeeded);
                if (succeeded)
                {
                  Var_20 = (MR_Integer) 12;
                  succeeded = hlds__hlds_pred__check_marker_2_p_0(Markers_18, Var_20);
                  succeeded = !(succeeded);
                }
              }
            }
            break;
        }
    }
    if (succeeded)
      *ShouldWrite_12 = (MR_Integer) 1;
    else
      *ShouldWrite_12 = (MR_Integer) 0;
  }
}

void MR_CALL 
transform_hlds__intermod_analysis__should_write_exception_info_6_p_0(
  MR_Word ModuleInfo_7,
  MR_Word PredId_8,
  MR_Integer ProcId_9,
  MR_Word PredInfo_10,
  MR_Word WhatFor_11,
  MR_Word * ShouldWrite_12)
{
  {
    MR_bool succeeded;

    succeeded = hlds__hlds_pred__procedure_is_exported_3_p_0(ModuleInfo_7, PredInfo_10, ProcId_9);
    if (succeeded)
    {
      succeeded = hlds__hlds_pred__is_unify_index_or_compare_pred_1_p_0(PredInfo_10);
      succeeded = !(succeeded);
      if (succeeded)
        switch (WhatFor_11) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            succeeded = MR_TRUE;
            break;
          case (MR_Integer) 1:
            {
              MR_Word TypeSpecInfo_13;
              MR_Word TypeSpecForcePreds_15;
              MR_Word Markers_18;
              MR_Word Var_19;
              MR_Word Var_20;

              hlds__hlds_module__module_info_get_type_spec_info_2_p_0(ModuleInfo_7, &TypeSpecInfo_13);
              TypeSpecForcePreds_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeSpecInfo_13, (MR_Integer) 1))));
              succeeded = mercury__set__member_2_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), ((MR_Box) (PredId_8)), TypeSpecForcePreds_15);
              succeeded = !(succeeded);
              if (succeeded)
              {
                hlds__hlds_pred__pred_info_get_markers_2_p_0(PredInfo_10, &Markers_18);
                Var_19 = (MR_Integer) 11;
                succeeded = hlds__hlds_pred__check_marker_2_p_0(Markers_18, Var_19);
                succeeded = !(succeeded);
                if (succeeded)
                {
                  Var_20 = (MR_Integer) 12;
                  succeeded = hlds__hlds_pred__check_marker_2_p_0(Markers_18, Var_20);
                  succeeded = !(succeeded);
                }
              }
            }
            break;
        }
    }
    if (succeeded)
      *ShouldWrite_12 = (MR_Integer) 1;
    else
      *ShouldWrite_12 = (MR_Integer) 0;
  }
}

static MR_Box MR_CALL 
transform_hlds__intermod_analysis__write_trans_opt_file_5_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv6_HeadVar__2_83;

    conv6_HeadVar__2_83 = transform_hlds__intermod_analysis__IntroducedFrom__func__write_trans_opt_file__257__1_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv6_HeadVar__2_83));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
transform_hlds__intermod_analysis__write_trans_opt_file_5_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv5_HeadVar__2_78;

    conv5_HeadVar__2_78 = transform_hlds__intermod_analysis__IntroducedFrom__func__write_trans_opt_file__256__1_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv5_HeadVar__2_78));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
transform_hlds__intermod_analysis__write_trans_opt_file_5_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv4_HeadVar__2_73;

    conv4_HeadVar__2_73 = transform_hlds__intermod_analysis__IntroducedFrom__func__write_trans_opt_file__255__1_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv4_HeadVar__2_73));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
transform_hlds__intermod_analysis__write_trans_opt_file_5_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv3_HeadVar__2_68;

    conv3_HeadVar__2_68 = transform_hlds__intermod_analysis__IntroducedFrom__func__write_trans_opt_file__254__1_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv3_HeadVar__2_68));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
transform_hlds__intermod_analysis__write_trans_opt_file_5_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv2_HeadVar__2_63;

    conv2_HeadVar__2_63 = transform_hlds__intermod_analysis__IntroducedFrom__func__write_trans_opt_file__253__1_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv2_HeadVar__2_63));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
transform_hlds__intermod_analysis__write_trans_opt_file_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv1_HeadVar__2_58;

    conv1_HeadVar__2_58 = transform_hlds__intermod_analysis__IntroducedFrom__func__write_trans_opt_file__252__1_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__2_58));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
transform_hlds__intermod_analysis__write_trans_opt_file_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__2_53;

    conv0_HeadVar__2_53 = transform_hlds__intermod_analysis__IntroducedFrom__func__write_trans_opt_file__251__1_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_53));
    return wrapper_arg_2;
  }
}

void MR_CALL 
transform_hlds__intermod_analysis__write_trans_opt_file_5_p_0(
  MR_Word Stream_6,
  MR_Word ModuleInfo_7,
  MR_Word * ParseTreeTransOpt_8)
{
  {
    MR_Word ModuleName_10;
    MR_String ModuleNameStr_11;
    MR_Word PredIds_12;
    MR_Word PredIdsSet_13;
    MR_Word ReusePredsSet_14;
    MR_Word PredIdsNoReusePredsSet_15;
    MR_Word PredIdsNoReuseVersions_16;
    MR_Word NoReuseOrderPredInfos_17;
    MR_Word ProcAnalysisKinds_18;
    MR_Word TermInfos_19;
    MR_Word TermInfos2_20;
    MR_Word Exceptions_21;
    MR_Word TrailingInfos_22;
    MR_Word MMTablingInfos_23;
    MR_Word SharingInfos_24;
    MR_Word ReuseInfos_25;
    MR_Word Var_34;
    MR_Word Var_35;
    MR_Word Var_37;
    MR_Word Var_39;
    MR_Word Var_41;
    MR_Word Var_43;
    MR_Word Var_45;
    MR_Word Var_47;

    hlds__hlds_module__module_info_get_name_2_p_0(ModuleInfo_7, &ModuleName_10);
    ModuleNameStr_11 = parse_tree__mercury_to_mercury__mercury_bracketed_sym_name_to_string_1_f_0(ModuleName_10);
    mercury__io__write_string_4_p_0(Stream_6, (MR_String) ":- module ");
    mercury__io__write_string_4_p_0(Stream_6, ModuleNameStr_11);
    mercury__io__write_string_4_p_0(Stream_6, (MR_String) ".\n");
    hlds__hlds_module__module_info_get_valid_pred_ids_2_p_0(ModuleInfo_7, &PredIds_12);
    PredIdsSet_13 = mercury__set__list_to_set_1_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), PredIds_12);
    hlds__hlds_module__module_info_get_structure_reuse_preds_2_p_0(ModuleInfo_7, &ReusePredsSet_14);
    PredIdsNoReusePredsSet_15 = mercury__set__difference_2_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), PredIdsSet_13, ReusePredsSet_14);
    PredIdsNoReuseVersions_16 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), PredIdsNoReusePredsSet_15);
    transform_hlds__intermod_order_pred_info__generate_order_pred_infos_3_p_0(ModuleInfo_7, PredIdsNoReuseVersions_16, &NoReuseOrderPredInfos_17);
    hlds__hlds_module__module_info_get_proc_analysis_kinds_2_p_0(ModuleInfo_7, &ProcAnalysisKinds_18);
    transform_hlds__intermod_analysis__gather_analysis_pragmas_10_p_0(ModuleInfo_7, ProcAnalysisKinds_18, NoReuseOrderPredInfos_17, &TermInfos_19, &TermInfos2_20, &Exceptions_21, &TrailingInfos_22, &MMTablingInfos_23, &SharingInfos_24, &ReuseInfos_25);
    transform_hlds__intermod_analysis__write_analysis_pragmas_10_p_0(Stream_6, TermInfos_19, TermInfos2_20, Exceptions_21, TrailingInfos_22, MMTablingInfos_23, SharingInfos_24, ReuseInfos_25);
    Var_34 = mercury__term__context_init_0_f_0();
    Var_35 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_termination_info_0), (MR_Word) (&transform_hlds__intermod_analysis_scalar_common_1[1]), (MR_Word) (&transform_hlds__intermod_analysis_scalar_common_2[9]), TermInfos_19);
    Var_37 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_termination2_info_0), (MR_Word) (&transform_hlds__intermod_analysis_scalar_common_1[2]), (MR_Word) (&transform_hlds__intermod_analysis_scalar_common_2[10]), TermInfos2_20);
    Var_39 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_exceptions_0), (MR_Word) (&transform_hlds__intermod_analysis_scalar_common_1[3]), (MR_Word) (&transform_hlds__intermod_analysis_scalar_common_2[11]), Exceptions_21);
    Var_41 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_trailing_info_0), (MR_Word) (&transform_hlds__intermod_analysis_scalar_common_1[4]), (MR_Word) (&transform_hlds__intermod_analysis_scalar_common_2[12]), TrailingInfos_22);
    Var_43 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_mm_tabling_info_0), (MR_Word) (&transform_hlds__intermod_analysis_scalar_common_1[5]), (MR_Word) (&transform_hlds__intermod_analysis_scalar_common_2[13]), MMTablingInfos_23);
    Var_45 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_structure_sharing_0), (MR_Word) (&transform_hlds__intermod_analysis_scalar_common_1[6]), (MR_Word) (&transform_hlds__intermod_analysis_scalar_common_2[14]), SharingInfos_24);
    Var_47 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_structure_reuse_0), (MR_Word) (&transform_hlds__intermod_analysis_scalar_common_1[7]), (MR_Word) (&transform_hlds__intermod_analysis_scalar_common_2[15]), ReuseInfos_25);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
      *ParseTreeTransOpt_8 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ModuleName_10));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_34));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_35));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_37));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_39));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_41));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_43));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_45));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (Var_47));
    }
  }
}

static MR_Box MR_CALL 
transform_hlds__intermod_analysis__append_analysis_pragmas_to_opt_file_7_p_0_9(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv8_HeadVar__2_300;

    conv8_HeadVar__2_300 = transform_hlds__intermod_analysis__IntroducedFrom__func__append_analysis_pragmas_to_opt_file__220__1_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv8_HeadVar__2_300));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
transform_hlds__intermod_analysis__append_analysis_pragmas_to_opt_file_7_p_0_8(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv7_HeadVar__2_295;

    conv7_HeadVar__2_295 = transform_hlds__intermod_analysis__IntroducedFrom__func__append_analysis_pragmas_to_opt_file__218__1_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv7_HeadVar__2_295));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
transform_hlds__intermod_analysis__append_analysis_pragmas_to_opt_file_7_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv6_HeadVar__2_290;

    conv6_HeadVar__2_290 = transform_hlds__intermod_analysis__IntroducedFrom__func__append_analysis_pragmas_to_opt_file__216__1_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv6_HeadVar__2_290));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
transform_hlds__intermod_analysis__append_analysis_pragmas_to_opt_file_7_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv5_HeadVar__2_285;

    conv5_HeadVar__2_285 = transform_hlds__intermod_analysis__IntroducedFrom__func__append_analysis_pragmas_to_opt_file__214__1_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv5_HeadVar__2_285));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
transform_hlds__intermod_analysis__append_analysis_pragmas_to_opt_file_7_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv4_HeadVar__2_280;

    conv4_HeadVar__2_280 = transform_hlds__intermod_analysis__IntroducedFrom__func__append_analysis_pragmas_to_opt_file__212__1_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv4_HeadVar__2_280));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
transform_hlds__intermod_analysis__append_analysis_pragmas_to_opt_file_7_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv3_HeadVar__2_275;

    conv3_HeadVar__2_275 = transform_hlds__intermod_analysis__IntroducedFrom__func__append_analysis_pragmas_to_opt_file__210__1_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv3_HeadVar__2_275));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
transform_hlds__intermod_analysis__append_analysis_pragmas_to_opt_file_7_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv2_HeadVar__2_270;

    conv2_HeadVar__2_270 = transform_hlds__intermod_analysis__IntroducedFrom__func__append_analysis_pragmas_to_opt_file__208__1_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv2_HeadVar__2_270));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
transform_hlds__intermod_analysis__append_analysis_pragmas_to_opt_file_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv1_HeadVar__2_265;

    conv1_HeadVar__2_265 = transform_hlds__intermod_analysis__IntroducedFrom__func__append_analysis_pragmas_to_opt_file__206__1_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__2_265));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
transform_hlds__intermod_analysis__append_analysis_pragmas_to_opt_file_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    parse_tree__parse_tree_out_pragma__mercury_output_pragma_unused_args_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  }
}

void MR_CALL 
transform_hlds__intermod_analysis__append_analysis_pragmas_to_opt_file_7_p_0(
  MR_Word Stream_8,
  MR_Word ModuleInfo_9,
  MR_Word UnusedArgsInfosSet_10,
  MR_Word STATE_VARIABLE_ParseTreePlainOpt_0_24,
  MR_Word * STATE_VARIABLE_ParseTreePlainOpt_25)
{
  {
    MR_bool succeeded;
    MR_Word ProcAnalysisKinds_13;
    MR_Word TypeCtorInfo_257_257;

    hlds__hlds_module__module_info_get_proc_analysis_kinds_2_p_0(ModuleInfo_9, &ProcAnalysisKinds_13);
    succeeded = mercury__set__is_empty_1_p_0((MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_proc_analysis_kind_0), ProcAnalysisKinds_13);
    if (succeeded)
    {
      TypeCtorInfo_257_257 = (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_unused_args_0);
      succeeded = mercury__set__is_empty_1_p_0(TypeCtorInfo_257_257, UnusedArgsInfosSet_10);
    }
    if (succeeded)
      *STATE_VARIABLE_ParseTreePlainOpt_25 = STATE_VARIABLE_ParseTreePlainOpt_0_24;
    else
    {
      MR_Word UnusedArgsInfos_14;
      MR_Word PredIds_15;
      MR_Word OrderPredInfos_16;
      MR_Word TermInfos_17;
      MR_Word TermInfos2_18;
      MR_Word Exceptions_19;
      MR_Word TrailingInfos_20;
      MR_Word MMTablingInfos_21;
      MR_Word SharingInfos_22;
      MR_Word ReuseInfos_23;
      MR_Word Var_29;
      MR_Word STATE_VARIABLE_ParseTreePlainOpt_32_32;
      MR_Word Var_33;
      MR_Word STATE_VARIABLE_ParseTreePlainOpt_35_35;
      MR_Word Var_36;
      MR_Word STATE_VARIABLE_ParseTreePlainOpt_38_38;
      MR_Word Var_39;
      MR_Word STATE_VARIABLE_ParseTreePlainOpt_41_41;
      MR_Word Var_42;
      MR_Word STATE_VARIABLE_ParseTreePlainOpt_44_44;
      MR_Word Var_45;
      MR_Word STATE_VARIABLE_ParseTreePlainOpt_47_47;
      MR_Word Var_48;
      MR_Word STATE_VARIABLE_ParseTreePlainOpt_50_50;
      MR_Word Var_51;
      MR_Word Var_54;
      MR_Box conv0_STATE_VARIABLE_IO_30_30;
      MR_Word Var_56;
      MR_Word Var_57;
      MR_Word Var_58;
      MR_Word Var_59;
      MR_Word Var_60;
      MR_Word Var_61;
      MR_Word Var_62;
      MR_Word Var_63;
      MR_Word Var_64;
      MR_Word Var_65;
      MR_Word Var_66;
      MR_Word Var_67;
      MR_Word Var_68;
      MR_Word Var_69;
      MR_Word Var_70;
      MR_Word Var_71;
      MR_Word Var_72;
      MR_Word Var_74;
      MR_Word Var_75;
      MR_Word Var_76;
      MR_Word Var_77;
      MR_Word Var_78;
      MR_Word Var_79;
      MR_Word Var_80;
      MR_Word Var_81;
      MR_Word Var_82;
      MR_Word Var_83;
      MR_Word Var_84;
      MR_Word Var_85;
      MR_Word Var_86;
      MR_Word Var_87;
      MR_Word Var_88;
      MR_Word Var_89;
      MR_Word Var_90;
      MR_Word Var_91;
      MR_Word Var_92;
      MR_Word Var_93;
      MR_Word Var_94;
      MR_Word Var_95;
      MR_Word Var_96;
      MR_Word Var_97;
      MR_Word Var_98;
      MR_Word Var_100;
      MR_Word Var_101;
      MR_Word Var_102;
      MR_Word Var_103;
      MR_Word Var_104;
      MR_Word Var_105;
      MR_Word Var_106;
      MR_Word Var_107;
      MR_Word Var_108;
      MR_Word Var_109;
      MR_Word Var_110;
      MR_Word Var_111;
      MR_Word Var_112;
      MR_Word Var_113;
      MR_Word Var_114;
      MR_Word Var_115;
      MR_Word Var_116;
      MR_Word Var_117;
      MR_Word Var_118;
      MR_Word Var_119;
      MR_Word Var_120;
      MR_Word Var_121;
      MR_Word Var_122;
      MR_Word Var_123;
      MR_Word Var_124;
      MR_Word Var_126;
      MR_Word Var_127;
      MR_Word Var_128;
      MR_Word Var_129;
      MR_Word Var_130;
      MR_Word Var_131;
      MR_Word Var_132;
      MR_Word Var_133;
      MR_Word Var_134;
      MR_Word Var_135;
      MR_Word Var_136;
      MR_Word Var_137;
      MR_Word Var_138;
      MR_Word Var_139;
      MR_Word Var_140;
      MR_Word Var_141;
      MR_Word Var_142;
      MR_Word Var_143;
      MR_Word Var_144;
      MR_Word Var_145;
      MR_Word Var_146;
      MR_Word Var_147;
      MR_Word Var_148;
      MR_Word Var_149;
      MR_Word Var_150;
      MR_Word Var_152;
      MR_Word Var_153;
      MR_Word Var_154;
      MR_Word Var_155;
      MR_Word Var_156;
      MR_Word Var_157;
      MR_Word Var_158;
      MR_Word Var_159;
      MR_Word Var_160;
      MR_Word Var_161;
      MR_Word Var_162;
      MR_Word Var_163;
      MR_Word Var_164;
      MR_Word Var_165;
      MR_Word Var_166;
      MR_Word Var_167;
      MR_Word Var_168;
      MR_Word Var_169;
      MR_Word Var_170;
      MR_Word Var_171;
      MR_Word Var_172;
      MR_Word Var_173;
      MR_Word Var_174;
      MR_Word Var_175;
      MR_Word Var_176;
      MR_Word Var_178;
      MR_Word Var_179;
      MR_Word Var_180;
      MR_Word Var_181;
      MR_Word Var_182;
      MR_Word Var_183;
      MR_Word Var_184;
      MR_Word Var_185;
      MR_Word Var_186;
      MR_Word Var_187;
      MR_Word Var_188;
      MR_Word Var_189;
      MR_Word Var_190;
      MR_Word Var_191;
      MR_Word Var_192;
      MR_Word Var_193;
      MR_Word Var_194;
      MR_Word Var_195;
      MR_Word Var_196;
      MR_Word Var_197;
      MR_Word Var_198;
      MR_Word Var_199;
      MR_Word Var_200;
      MR_Word Var_201;
      MR_Word Var_202;
      MR_Word Var_204;
      MR_Word Var_205;
      MR_Word Var_206;
      MR_Word Var_207;
      MR_Word Var_208;
      MR_Word Var_209;
      MR_Word Var_210;
      MR_Word Var_211;
      MR_Word Var_212;
      MR_Word Var_213;
      MR_Word Var_214;
      MR_Word Var_215;
      MR_Word Var_216;
      MR_Word Var_217;
      MR_Word Var_218;
      MR_Word Var_219;
      MR_Word Var_220;
      MR_Word Var_221;
      MR_Word Var_222;
      MR_Word Var_223;
      MR_Word Var_224;
      MR_Word Var_225;
      MR_Word Var_226;
      MR_Word Var_227;
      MR_Word Var_228;
      MR_Word Var_230;
      MR_Word Var_231;
      MR_Word Var_232;
      MR_Word Var_233;
      MR_Word Var_234;
      MR_Word Var_235;
      MR_Word Var_236;
      MR_Word Var_237;
      MR_Word Var_238;
      MR_Word Var_239;
      MR_Word Var_240;
      MR_Word Var_241;
      MR_Word Var_242;
      MR_Word Var_243;
      MR_Word Var_244;
      MR_Word Var_245;
      MR_Word Var_246;
      MR_Word Var_247;
      MR_Word Var_248;
      MR_Word Var_249;
      MR_Word Var_250;
      MR_Word Var_251;
      MR_Word Var_252;
      MR_Word Var_253;
      MR_Word Var_254;

      UnusedArgsInfos_14 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_unused_args_0), UnusedArgsInfosSet_10);
      hlds__hlds_module__module_info_get_valid_pred_ids_2_p_0(ModuleInfo_9, &PredIds_15);
      transform_hlds__intermod_order_pred_info__generate_order_pred_infos_3_p_0(ModuleInfo_9, PredIds_15, &OrderPredInfos_16);
      transform_hlds__intermod_analysis__gather_analysis_pragmas_10_p_0(ModuleInfo_9, ProcAnalysisKinds_13, OrderPredInfos_16, &TermInfos_17, &TermInfos2_18, &Exceptions_19, &TrailingInfos_20, &MMTablingInfos_21, &SharingInfos_22, &ReuseInfos_23);
      parse_tree__parse_tree_out__maybe_write_block_start_blank_line_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_unused_args_0), Stream_8, UnusedArgsInfos_14);
      {
        Var_29 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_29, 0) = ((MR_Box) (&transform_hlds__intermod_analysis_scalar_common_4[10]));
        MR_hl_field(MR_mktag(0), Var_29, 1) = ((MR_Box) (transform_hlds__intermod_analysis__append_analysis_pragmas_to_opt_file_7_p_0_1));
        MR_hl_field(MR_mktag(0), Var_29, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), Var_29, 3) = ((MR_Box) (Stream_8));
      }
      mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_unused_args_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_29, UnusedArgsInfos_14, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_30_30);
      transform_hlds__intermod_analysis__write_analysis_pragmas_10_p_0(Stream_8, TermInfos_17, TermInfos2_18, Exceptions_19, TrailingInfos_20, MMTablingInfos_21, SharingInfos_22, ReuseInfos_23);
      Var_33 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_unused_args_0), (MR_Word) (&transform_hlds__intermod_analysis_scalar_common_1[0]), (MR_Word) (&transform_hlds__intermod_analysis_scalar_common_2[1]), UnusedArgsInfos_14);
      Var_56 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_0_24, (MR_Integer) 0))));
      Var_57 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_0_24, (MR_Integer) 1))));
      Var_58 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_0_24, (MR_Integer) 2))));
      Var_59 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_0_24, (MR_Integer) 3))));
      Var_60 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_0_24, (MR_Integer) 4))));
      Var_61 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_0_24, (MR_Integer) 5))));
      Var_62 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_0_24, (MR_Integer) 6))));
      Var_63 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_0_24, (MR_Integer) 7))));
      Var_64 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_0_24, (MR_Integer) 8))));
      Var_65 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_0_24, (MR_Integer) 9))));
      Var_66 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_0_24, (MR_Integer) 10))));
      Var_67 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_0_24, (MR_Integer) 11))));
      Var_68 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_0_24, (MR_Integer) 12))));
      Var_69 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_0_24, (MR_Integer) 13))));
      Var_70 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_0_24, (MR_Integer) 14))));
      Var_71 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_0_24, (MR_Integer) 15))));
      Var_72 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_0_24, (MR_Integer) 16))));
      Var_74 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_0_24, (MR_Integer) 18))));
      Var_75 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_0_24, (MR_Integer) 19))));
      Var_76 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_0_24, (MR_Integer) 20))));
      Var_77 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_0_24, (MR_Integer) 21))));
      Var_78 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_0_24, (MR_Integer) 22))));
      Var_79 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_0_24, (MR_Integer) 23))));
      Var_80 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_0_24, (MR_Integer) 24))));
      {
        STATE_VARIABLE_ParseTreePlainOpt_32_32 = (MR_Word) MR_new_object(MR_Word, (25 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_32_32, 0) = ((MR_Box) (Var_56));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_32_32, 1) = ((MR_Box) (Var_57));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_32_32, 2) = ((MR_Box) (Var_58));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_32_32, 3) = ((MR_Box) (Var_59));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_32_32, 4) = ((MR_Box) (Var_60));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_32_32, 5) = ((MR_Box) (Var_61));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_32_32, 6) = ((MR_Box) (Var_62));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_32_32, 7) = ((MR_Box) (Var_63));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_32_32, 8) = ((MR_Box) (Var_64));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_32_32, 9) = ((MR_Box) (Var_65));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_32_32, 10) = ((MR_Box) (Var_66));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_32_32, 11) = ((MR_Box) (Var_67));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_32_32, 12) = ((MR_Box) (Var_68));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_32_32, 13) = ((MR_Box) (Var_69));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_32_32, 14) = ((MR_Box) (Var_70));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_32_32, 15) = ((MR_Box) (Var_71));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_32_32, 16) = ((MR_Box) (Var_72));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_32_32, 17) = ((MR_Box) (Var_33));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_32_32, 18) = ((MR_Box) (Var_74));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_32_32, 19) = ((MR_Box) (Var_75));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_32_32, 20) = ((MR_Box) (Var_76));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_32_32, 21) = ((MR_Box) (Var_77));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_32_32, 22) = ((MR_Box) (Var_78));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_32_32, 23) = ((MR_Box) (Var_79));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_32_32, 24) = ((MR_Box) (Var_80));
      }
      Var_36 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_termination_info_0), (MR_Word) (&transform_hlds__intermod_analysis_scalar_common_1[1]), (MR_Word) (&transform_hlds__intermod_analysis_scalar_common_2[2]), TermInfos_17);
      Var_81 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_32_32, (MR_Integer) 0))));
      Var_82 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_32_32, (MR_Integer) 1))));
      Var_83 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_32_32, (MR_Integer) 2))));
      Var_84 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_32_32, (MR_Integer) 3))));
      Var_85 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_32_32, (MR_Integer) 4))));
      Var_86 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_32_32, (MR_Integer) 5))));
      Var_87 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_32_32, (MR_Integer) 6))));
      Var_88 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_32_32, (MR_Integer) 7))));
      Var_89 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_32_32, (MR_Integer) 8))));
      Var_90 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_32_32, (MR_Integer) 9))));
      Var_91 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_32_32, (MR_Integer) 10))));
      Var_92 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_32_32, (MR_Integer) 11))));
      Var_93 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_32_32, (MR_Integer) 12))));
      Var_94 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_32_32, (MR_Integer) 13))));
      Var_95 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_32_32, (MR_Integer) 14))));
      Var_96 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_32_32, (MR_Integer) 15))));
      Var_97 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_32_32, (MR_Integer) 16))));
      Var_98 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_32_32, (MR_Integer) 17))));
      Var_100 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_32_32, (MR_Integer) 19))));
      Var_101 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_32_32, (MR_Integer) 20))));
      Var_102 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_32_32, (MR_Integer) 21))));
      Var_103 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_32_32, (MR_Integer) 22))));
      Var_104 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_32_32, (MR_Integer) 23))));
      Var_105 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_32_32, (MR_Integer) 24))));
      {
        STATE_VARIABLE_ParseTreePlainOpt_35_35 = (MR_Word) MR_new_object(MR_Word, (25 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_35_35, 0) = ((MR_Box) (Var_81));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_35_35, 1) = ((MR_Box) (Var_82));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_35_35, 2) = ((MR_Box) (Var_83));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_35_35, 3) = ((MR_Box) (Var_84));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_35_35, 4) = ((MR_Box) (Var_85));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_35_35, 5) = ((MR_Box) (Var_86));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_35_35, 6) = ((MR_Box) (Var_87));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_35_35, 7) = ((MR_Box) (Var_88));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_35_35, 8) = ((MR_Box) (Var_89));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_35_35, 9) = ((MR_Box) (Var_90));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_35_35, 10) = ((MR_Box) (Var_91));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_35_35, 11) = ((MR_Box) (Var_92));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_35_35, 12) = ((MR_Box) (Var_93));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_35_35, 13) = ((MR_Box) (Var_94));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_35_35, 14) = ((MR_Box) (Var_95));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_35_35, 15) = ((MR_Box) (Var_96));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_35_35, 16) = ((MR_Box) (Var_97));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_35_35, 17) = ((MR_Box) (Var_98));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_35_35, 18) = ((MR_Box) (Var_36));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_35_35, 19) = ((MR_Box) (Var_100));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_35_35, 20) = ((MR_Box) (Var_101));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_35_35, 21) = ((MR_Box) (Var_102));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_35_35, 22) = ((MR_Box) (Var_103));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_35_35, 23) = ((MR_Box) (Var_104));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_35_35, 24) = ((MR_Box) (Var_105));
      }
      Var_39 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_termination2_info_0), (MR_Word) (&transform_hlds__intermod_analysis_scalar_common_1[2]), (MR_Word) (&transform_hlds__intermod_analysis_scalar_common_2[3]), TermInfos2_18);
      Var_106 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_35_35, (MR_Integer) 0))));
      Var_107 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_35_35, (MR_Integer) 1))));
      Var_108 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_35_35, (MR_Integer) 2))));
      Var_109 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_35_35, (MR_Integer) 3))));
      Var_110 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_35_35, (MR_Integer) 4))));
      Var_111 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_35_35, (MR_Integer) 5))));
      Var_112 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_35_35, (MR_Integer) 6))));
      Var_113 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_35_35, (MR_Integer) 7))));
      Var_114 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_35_35, (MR_Integer) 8))));
      Var_115 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_35_35, (MR_Integer) 9))));
      Var_116 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_35_35, (MR_Integer) 10))));
      Var_117 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_35_35, (MR_Integer) 11))));
      Var_118 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_35_35, (MR_Integer) 12))));
      Var_119 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_35_35, (MR_Integer) 13))));
      Var_120 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_35_35, (MR_Integer) 14))));
      Var_121 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_35_35, (MR_Integer) 15))));
      Var_122 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_35_35, (MR_Integer) 16))));
      Var_123 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_35_35, (MR_Integer) 17))));
      Var_124 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_35_35, (MR_Integer) 18))));
      Var_126 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_35_35, (MR_Integer) 20))));
      Var_127 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_35_35, (MR_Integer) 21))));
      Var_128 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_35_35, (MR_Integer) 22))));
      Var_129 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_35_35, (MR_Integer) 23))));
      Var_130 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_35_35, (MR_Integer) 24))));
      {
        STATE_VARIABLE_ParseTreePlainOpt_38_38 = (MR_Word) MR_new_object(MR_Word, (25 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_38_38, 0) = ((MR_Box) (Var_106));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_38_38, 1) = ((MR_Box) (Var_107));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_38_38, 2) = ((MR_Box) (Var_108));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_38_38, 3) = ((MR_Box) (Var_109));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_38_38, 4) = ((MR_Box) (Var_110));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_38_38, 5) = ((MR_Box) (Var_111));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_38_38, 6) = ((MR_Box) (Var_112));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_38_38, 7) = ((MR_Box) (Var_113));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_38_38, 8) = ((MR_Box) (Var_114));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_38_38, 9) = ((MR_Box) (Var_115));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_38_38, 10) = ((MR_Box) (Var_116));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_38_38, 11) = ((MR_Box) (Var_117));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_38_38, 12) = ((MR_Box) (Var_118));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_38_38, 13) = ((MR_Box) (Var_119));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_38_38, 14) = ((MR_Box) (Var_120));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_38_38, 15) = ((MR_Box) (Var_121));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_38_38, 16) = ((MR_Box) (Var_122));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_38_38, 17) = ((MR_Box) (Var_123));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_38_38, 18) = ((MR_Box) (Var_124));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_38_38, 19) = ((MR_Box) (Var_39));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_38_38, 20) = ((MR_Box) (Var_126));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_38_38, 21) = ((MR_Box) (Var_127));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_38_38, 22) = ((MR_Box) (Var_128));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_38_38, 23) = ((MR_Box) (Var_129));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_38_38, 24) = ((MR_Box) (Var_130));
      }
      Var_42 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_exceptions_0), (MR_Word) (&transform_hlds__intermod_analysis_scalar_common_1[3]), (MR_Word) (&transform_hlds__intermod_analysis_scalar_common_2[4]), Exceptions_19);
      Var_131 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_38_38, (MR_Integer) 0))));
      Var_132 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_38_38, (MR_Integer) 1))));
      Var_133 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_38_38, (MR_Integer) 2))));
      Var_134 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_38_38, (MR_Integer) 3))));
      Var_135 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_38_38, (MR_Integer) 4))));
      Var_136 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_38_38, (MR_Integer) 5))));
      Var_137 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_38_38, (MR_Integer) 6))));
      Var_138 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_38_38, (MR_Integer) 7))));
      Var_139 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_38_38, (MR_Integer) 8))));
      Var_140 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_38_38, (MR_Integer) 9))));
      Var_141 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_38_38, (MR_Integer) 10))));
      Var_142 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_38_38, (MR_Integer) 11))));
      Var_143 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_38_38, (MR_Integer) 12))));
      Var_144 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_38_38, (MR_Integer) 13))));
      Var_145 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_38_38, (MR_Integer) 14))));
      Var_146 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_38_38, (MR_Integer) 15))));
      Var_147 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_38_38, (MR_Integer) 16))));
      Var_148 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_38_38, (MR_Integer) 17))));
      Var_149 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_38_38, (MR_Integer) 18))));
      Var_150 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_38_38, (MR_Integer) 19))));
      Var_152 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_38_38, (MR_Integer) 21))));
      Var_153 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_38_38, (MR_Integer) 22))));
      Var_154 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_38_38, (MR_Integer) 23))));
      Var_155 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_38_38, (MR_Integer) 24))));
      {
        STATE_VARIABLE_ParseTreePlainOpt_41_41 = (MR_Word) MR_new_object(MR_Word, (25 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_41_41, 0) = ((MR_Box) (Var_131));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_41_41, 1) = ((MR_Box) (Var_132));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_41_41, 2) = ((MR_Box) (Var_133));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_41_41, 3) = ((MR_Box) (Var_134));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_41_41, 4) = ((MR_Box) (Var_135));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_41_41, 5) = ((MR_Box) (Var_136));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_41_41, 6) = ((MR_Box) (Var_137));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_41_41, 7) = ((MR_Box) (Var_138));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_41_41, 8) = ((MR_Box) (Var_139));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_41_41, 9) = ((MR_Box) (Var_140));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_41_41, 10) = ((MR_Box) (Var_141));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_41_41, 11) = ((MR_Box) (Var_142));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_41_41, 12) = ((MR_Box) (Var_143));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_41_41, 13) = ((MR_Box) (Var_144));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_41_41, 14) = ((MR_Box) (Var_145));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_41_41, 15) = ((MR_Box) (Var_146));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_41_41, 16) = ((MR_Box) (Var_147));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_41_41, 17) = ((MR_Box) (Var_148));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_41_41, 18) = ((MR_Box) (Var_149));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_41_41, 19) = ((MR_Box) (Var_150));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_41_41, 20) = ((MR_Box) (Var_42));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_41_41, 21) = ((MR_Box) (Var_152));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_41_41, 22) = ((MR_Box) (Var_153));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_41_41, 23) = ((MR_Box) (Var_154));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_41_41, 24) = ((MR_Box) (Var_155));
      }
      Var_45 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_trailing_info_0), (MR_Word) (&transform_hlds__intermod_analysis_scalar_common_1[4]), (MR_Word) (&transform_hlds__intermod_analysis_scalar_common_2[5]), TrailingInfos_20);
      Var_156 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_41_41, (MR_Integer) 0))));
      Var_157 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_41_41, (MR_Integer) 1))));
      Var_158 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_41_41, (MR_Integer) 2))));
      Var_159 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_41_41, (MR_Integer) 3))));
      Var_160 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_41_41, (MR_Integer) 4))));
      Var_161 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_41_41, (MR_Integer) 5))));
      Var_162 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_41_41, (MR_Integer) 6))));
      Var_163 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_41_41, (MR_Integer) 7))));
      Var_164 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_41_41, (MR_Integer) 8))));
      Var_165 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_41_41, (MR_Integer) 9))));
      Var_166 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_41_41, (MR_Integer) 10))));
      Var_167 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_41_41, (MR_Integer) 11))));
      Var_168 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_41_41, (MR_Integer) 12))));
      Var_169 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_41_41, (MR_Integer) 13))));
      Var_170 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_41_41, (MR_Integer) 14))));
      Var_171 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_41_41, (MR_Integer) 15))));
      Var_172 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_41_41, (MR_Integer) 16))));
      Var_173 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_41_41, (MR_Integer) 17))));
      Var_174 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_41_41, (MR_Integer) 18))));
      Var_175 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_41_41, (MR_Integer) 19))));
      Var_176 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_41_41, (MR_Integer) 20))));
      Var_178 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_41_41, (MR_Integer) 22))));
      Var_179 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_41_41, (MR_Integer) 23))));
      Var_180 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_41_41, (MR_Integer) 24))));
      {
        STATE_VARIABLE_ParseTreePlainOpt_44_44 = (MR_Word) MR_new_object(MR_Word, (25 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_44_44, 0) = ((MR_Box) (Var_156));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_44_44, 1) = ((MR_Box) (Var_157));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_44_44, 2) = ((MR_Box) (Var_158));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_44_44, 3) = ((MR_Box) (Var_159));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_44_44, 4) = ((MR_Box) (Var_160));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_44_44, 5) = ((MR_Box) (Var_161));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_44_44, 6) = ((MR_Box) (Var_162));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_44_44, 7) = ((MR_Box) (Var_163));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_44_44, 8) = ((MR_Box) (Var_164));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_44_44, 9) = ((MR_Box) (Var_165));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_44_44, 10) = ((MR_Box) (Var_166));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_44_44, 11) = ((MR_Box) (Var_167));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_44_44, 12) = ((MR_Box) (Var_168));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_44_44, 13) = ((MR_Box) (Var_169));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_44_44, 14) = ((MR_Box) (Var_170));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_44_44, 15) = ((MR_Box) (Var_171));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_44_44, 16) = ((MR_Box) (Var_172));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_44_44, 17) = ((MR_Box) (Var_173));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_44_44, 18) = ((MR_Box) (Var_174));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_44_44, 19) = ((MR_Box) (Var_175));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_44_44, 20) = ((MR_Box) (Var_176));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_44_44, 21) = ((MR_Box) (Var_45));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_44_44, 22) = ((MR_Box) (Var_178));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_44_44, 23) = ((MR_Box) (Var_179));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_44_44, 24) = ((MR_Box) (Var_180));
      }
      Var_48 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_mm_tabling_info_0), (MR_Word) (&transform_hlds__intermod_analysis_scalar_common_1[5]), (MR_Word) (&transform_hlds__intermod_analysis_scalar_common_2[6]), MMTablingInfos_21);
      Var_181 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_44_44, (MR_Integer) 0))));
      Var_182 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_44_44, (MR_Integer) 1))));
      Var_183 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_44_44, (MR_Integer) 2))));
      Var_184 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_44_44, (MR_Integer) 3))));
      Var_185 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_44_44, (MR_Integer) 4))));
      Var_186 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_44_44, (MR_Integer) 5))));
      Var_187 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_44_44, (MR_Integer) 6))));
      Var_188 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_44_44, (MR_Integer) 7))));
      Var_189 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_44_44, (MR_Integer) 8))));
      Var_190 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_44_44, (MR_Integer) 9))));
      Var_191 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_44_44, (MR_Integer) 10))));
      Var_192 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_44_44, (MR_Integer) 11))));
      Var_193 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_44_44, (MR_Integer) 12))));
      Var_194 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_44_44, (MR_Integer) 13))));
      Var_195 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_44_44, (MR_Integer) 14))));
      Var_196 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_44_44, (MR_Integer) 15))));
      Var_197 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_44_44, (MR_Integer) 16))));
      Var_198 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_44_44, (MR_Integer) 17))));
      Var_199 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_44_44, (MR_Integer) 18))));
      Var_200 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_44_44, (MR_Integer) 19))));
      Var_201 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_44_44, (MR_Integer) 20))));
      Var_202 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_44_44, (MR_Integer) 21))));
      Var_204 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_44_44, (MR_Integer) 23))));
      Var_205 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_44_44, (MR_Integer) 24))));
      {
        STATE_VARIABLE_ParseTreePlainOpt_47_47 = (MR_Word) MR_new_object(MR_Word, (25 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_47_47, 0) = ((MR_Box) (Var_181));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_47_47, 1) = ((MR_Box) (Var_182));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_47_47, 2) = ((MR_Box) (Var_183));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_47_47, 3) = ((MR_Box) (Var_184));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_47_47, 4) = ((MR_Box) (Var_185));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_47_47, 5) = ((MR_Box) (Var_186));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_47_47, 6) = ((MR_Box) (Var_187));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_47_47, 7) = ((MR_Box) (Var_188));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_47_47, 8) = ((MR_Box) (Var_189));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_47_47, 9) = ((MR_Box) (Var_190));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_47_47, 10) = ((MR_Box) (Var_191));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_47_47, 11) = ((MR_Box) (Var_192));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_47_47, 12) = ((MR_Box) (Var_193));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_47_47, 13) = ((MR_Box) (Var_194));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_47_47, 14) = ((MR_Box) (Var_195));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_47_47, 15) = ((MR_Box) (Var_196));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_47_47, 16) = ((MR_Box) (Var_197));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_47_47, 17) = ((MR_Box) (Var_198));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_47_47, 18) = ((MR_Box) (Var_199));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_47_47, 19) = ((MR_Box) (Var_200));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_47_47, 20) = ((MR_Box) (Var_201));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_47_47, 21) = ((MR_Box) (Var_202));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_47_47, 22) = ((MR_Box) (Var_48));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_47_47, 23) = ((MR_Box) (Var_204));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_47_47, 24) = ((MR_Box) (Var_205));
      }
      Var_51 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_structure_sharing_0), (MR_Word) (&transform_hlds__intermod_analysis_scalar_common_1[6]), (MR_Word) (&transform_hlds__intermod_analysis_scalar_common_2[7]), SharingInfos_22);
      Var_206 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_47_47, (MR_Integer) 0))));
      Var_207 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_47_47, (MR_Integer) 1))));
      Var_208 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_47_47, (MR_Integer) 2))));
      Var_209 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_47_47, (MR_Integer) 3))));
      Var_210 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_47_47, (MR_Integer) 4))));
      Var_211 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_47_47, (MR_Integer) 5))));
      Var_212 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_47_47, (MR_Integer) 6))));
      Var_213 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_47_47, (MR_Integer) 7))));
      Var_214 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_47_47, (MR_Integer) 8))));
      Var_215 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_47_47, (MR_Integer) 9))));
      Var_216 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_47_47, (MR_Integer) 10))));
      Var_217 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_47_47, (MR_Integer) 11))));
      Var_218 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_47_47, (MR_Integer) 12))));
      Var_219 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_47_47, (MR_Integer) 13))));
      Var_220 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_47_47, (MR_Integer) 14))));
      Var_221 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_47_47, (MR_Integer) 15))));
      Var_222 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_47_47, (MR_Integer) 16))));
      Var_223 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_47_47, (MR_Integer) 17))));
      Var_224 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_47_47, (MR_Integer) 18))));
      Var_225 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_47_47, (MR_Integer) 19))));
      Var_226 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_47_47, (MR_Integer) 20))));
      Var_227 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_47_47, (MR_Integer) 21))));
      Var_228 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_47_47, (MR_Integer) 22))));
      Var_230 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_47_47, (MR_Integer) 24))));
      {
        STATE_VARIABLE_ParseTreePlainOpt_50_50 = (MR_Word) MR_new_object(MR_Word, (25 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_50_50, 0) = ((MR_Box) (Var_206));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_50_50, 1) = ((MR_Box) (Var_207));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_50_50, 2) = ((MR_Box) (Var_208));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_50_50, 3) = ((MR_Box) (Var_209));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_50_50, 4) = ((MR_Box) (Var_210));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_50_50, 5) = ((MR_Box) (Var_211));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_50_50, 6) = ((MR_Box) (Var_212));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_50_50, 7) = ((MR_Box) (Var_213));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_50_50, 8) = ((MR_Box) (Var_214));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_50_50, 9) = ((MR_Box) (Var_215));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_50_50, 10) = ((MR_Box) (Var_216));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_50_50, 11) = ((MR_Box) (Var_217));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_50_50, 12) = ((MR_Box) (Var_218));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_50_50, 13) = ((MR_Box) (Var_219));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_50_50, 14) = ((MR_Box) (Var_220));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_50_50, 15) = ((MR_Box) (Var_221));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_50_50, 16) = ((MR_Box) (Var_222));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_50_50, 17) = ((MR_Box) (Var_223));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_50_50, 18) = ((MR_Box) (Var_224));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_50_50, 19) = ((MR_Box) (Var_225));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_50_50, 20) = ((MR_Box) (Var_226));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_50_50, 21) = ((MR_Box) (Var_227));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_50_50, 22) = ((MR_Box) (Var_228));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_50_50, 23) = ((MR_Box) (Var_51));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_50_50, 24) = ((MR_Box) (Var_230));
      }
      Var_54 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_structure_reuse_0), (MR_Word) (&transform_hlds__intermod_analysis_scalar_common_1[7]), (MR_Word) (&transform_hlds__intermod_analysis_scalar_common_2[8]), ReuseInfos_23);
      Var_231 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_50_50, (MR_Integer) 0))));
      Var_232 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_50_50, (MR_Integer) 1))));
      Var_233 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_50_50, (MR_Integer) 2))));
      Var_234 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_50_50, (MR_Integer) 3))));
      Var_235 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_50_50, (MR_Integer) 4))));
      Var_236 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_50_50, (MR_Integer) 5))));
      Var_237 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_50_50, (MR_Integer) 6))));
      Var_238 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_50_50, (MR_Integer) 7))));
      Var_239 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_50_50, (MR_Integer) 8))));
      Var_240 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_50_50, (MR_Integer) 9))));
      Var_241 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_50_50, (MR_Integer) 10))));
      Var_242 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_50_50, (MR_Integer) 11))));
      Var_243 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_50_50, (MR_Integer) 12))));
      Var_244 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_50_50, (MR_Integer) 13))));
      Var_245 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_50_50, (MR_Integer) 14))));
      Var_246 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_50_50, (MR_Integer) 15))));
      Var_247 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_50_50, (MR_Integer) 16))));
      Var_248 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_50_50, (MR_Integer) 17))));
      Var_249 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_50_50, (MR_Integer) 18))));
      Var_250 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_50_50, (MR_Integer) 19))));
      Var_251 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_50_50, (MR_Integer) 20))));
      Var_252 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_50_50, (MR_Integer) 21))));
      Var_253 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_50_50, (MR_Integer) 22))));
      Var_254 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ParseTreePlainOpt_50_50, (MR_Integer) 23))));
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (25 * sizeof(MR_Word)), NULL, NULL);
        *STATE_VARIABLE_ParseTreePlainOpt_25 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_231));
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_232));
        MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_233));
        MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_234));
        MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_235));
        MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_236));
        MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_237));
        MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_238));
        MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (Var_239));
        MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (Var_240));
        MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (Var_241));
        MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (Var_242));
        MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (Var_243));
        MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (Var_244));
        MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (Var_245));
        MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (Var_246));
        MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (Var_247));
        MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (Var_248));
        MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (Var_249));
        MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (Var_250));
        MR_hl_field(MR_mktag(0), base, 20) = ((MR_Box) (Var_251));
        MR_hl_field(MR_mktag(0), base, 21) = ((MR_Box) (Var_252));
        MR_hl_field(MR_mktag(0), base, 22) = ((MR_Box) (Var_253));
        MR_hl_field(MR_mktag(0), base, 23) = ((MR_Box) (Var_254));
        MR_hl_field(MR_mktag(0), base, 24) = ((MR_Box) (Var_54));
      }
    }
  }
}

static void MR_CALL 
transform_hlds__intermod_analysis__write_analysis_pragmas_10_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    parse_tree__parse_tree_out_pragma__write_pragma_structure_reuse_info_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
transform_hlds__intermod_analysis__write_analysis_pragmas_10_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    parse_tree__parse_tree_out_pragma__write_pragma_structure_sharing_info_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
transform_hlds__intermod_analysis__write_analysis_pragmas_10_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    parse_tree__parse_tree_out_pragma__mercury_output_pragma_mm_tabling_info_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
transform_hlds__intermod_analysis__write_analysis_pragmas_10_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    parse_tree__parse_tree_out_pragma__mercury_output_pragma_trailing_info_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
transform_hlds__intermod_analysis__write_analysis_pragmas_10_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    parse_tree__parse_tree_out_pragma__mercury_output_pragma_exceptions_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
transform_hlds__intermod_analysis__write_analysis_pragmas_10_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    parse_tree__parse_tree_out_pragma__write_pragma_termination2_info_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
transform_hlds__intermod_analysis__write_analysis_pragmas_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    parse_tree__parse_tree_out_pragma__write_pragma_termination_info_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
transform_hlds__intermod_analysis__write_analysis_pragmas_10_p_0(
  MR_Word Stream_11,
  MR_Word TermInfos_12,
  MR_Word TermInfos2_13,
  MR_Word Exceptions_14,
  MR_Word TrailingInfos_15,
  MR_Word MMTablingInfos_16,
  MR_Word SharingInfos_17,
  MR_Word ReuseInfos_18)
{
  {
    MR_Word Var_23;
    MR_Word Var_27;
    MR_Word Var_31;
    MR_Word Var_34;
    MR_Word Var_37;
    MR_Word Var_40;
    MR_Word Var_44;
    MR_Box conv0_STATE_VARIABLE_IO_24_24;
    MR_Box conv1_STATE_VARIABLE_IO_28_28;
    MR_Box conv2_STATE_VARIABLE_IO_32_32;
    MR_Box conv3_STATE_VARIABLE_IO_35_35;
    MR_Box conv4_STATE_VARIABLE_IO_38_38;
    MR_Box conv5_STATE_VARIABLE_IO_41_41;
    MR_Box conv6_STATE_VARIABLE_IO_21;

    parse_tree__parse_tree_out__maybe_write_block_start_blank_line_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_termination_info_0), Stream_11, TermInfos_12);
    {
      Var_23 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_23, 0) = ((MR_Box) (&transform_hlds__intermod_analysis_scalar_common_5[0]));
      MR_hl_field(MR_mktag(0), Var_23, 1) = ((MR_Box) (transform_hlds__intermod_analysis__write_analysis_pragmas_10_p_0_1));
      MR_hl_field(MR_mktag(0), Var_23, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_23, 3) = ((MR_Box) (Stream_11));
      MR_hl_field(MR_mktag(0), Var_23, 4) = ((MR_Box) ((MR_Integer) 0));
    }
    mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_termination_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_23, TermInfos_12, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_24_24);
    parse_tree__parse_tree_out__maybe_write_block_start_blank_line_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_termination2_info_0), Stream_11, TermInfos2_13);
    {
      Var_27 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_27, 0) = ((MR_Box) (&transform_hlds__intermod_analysis_scalar_common_5[1]));
      MR_hl_field(MR_mktag(0), Var_27, 1) = ((MR_Box) (transform_hlds__intermod_analysis__write_analysis_pragmas_10_p_0_2));
      MR_hl_field(MR_mktag(0), Var_27, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_27, 3) = ((MR_Box) (Stream_11));
      MR_hl_field(MR_mktag(0), Var_27, 4) = ((MR_Box) ((MR_Integer) 0));
    }
    mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_termination2_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_27, TermInfos2_13, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_28_28);
    parse_tree__parse_tree_out__maybe_write_block_start_blank_line_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_exceptions_0), Stream_11, Exceptions_14);
    {
      Var_31 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_31, 0) = ((MR_Box) (&transform_hlds__intermod_analysis_scalar_common_4[7]));
      MR_hl_field(MR_mktag(0), Var_31, 1) = ((MR_Box) (transform_hlds__intermod_analysis__write_analysis_pragmas_10_p_0_3));
      MR_hl_field(MR_mktag(0), Var_31, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_31, 3) = ((MR_Box) (Stream_11));
    }
    mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_exceptions_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_31, Exceptions_14, ((MR_Box) ((MR_Integer) 0)), &conv2_STATE_VARIABLE_IO_32_32);
    parse_tree__parse_tree_out__maybe_write_block_start_blank_line_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_trailing_info_0), Stream_11, TrailingInfos_15);
    {
      Var_34 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_34, 0) = ((MR_Box) (&transform_hlds__intermod_analysis_scalar_common_4[8]));
      MR_hl_field(MR_mktag(0), Var_34, 1) = ((MR_Box) (transform_hlds__intermod_analysis__write_analysis_pragmas_10_p_0_4));
      MR_hl_field(MR_mktag(0), Var_34, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_34, 3) = ((MR_Box) (Stream_11));
    }
    mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_trailing_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_34, TrailingInfos_15, ((MR_Box) ((MR_Integer) 0)), &conv3_STATE_VARIABLE_IO_35_35);
    parse_tree__parse_tree_out__maybe_write_block_start_blank_line_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_mm_tabling_info_0), Stream_11, MMTablingInfos_16);
    {
      Var_37 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_37, 0) = ((MR_Box) (&transform_hlds__intermod_analysis_scalar_common_4[9]));
      MR_hl_field(MR_mktag(0), Var_37, 1) = ((MR_Box) (transform_hlds__intermod_analysis__write_analysis_pragmas_10_p_0_5));
      MR_hl_field(MR_mktag(0), Var_37, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_37, 3) = ((MR_Box) (Stream_11));
    }
    mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_mm_tabling_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_37, MMTablingInfos_16, ((MR_Box) ((MR_Integer) 0)), &conv4_STATE_VARIABLE_IO_38_38);
    parse_tree__parse_tree_out__maybe_write_block_start_blank_line_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_structure_sharing_0), Stream_11, SharingInfos_17);
    {
      Var_40 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_40, 0) = ((MR_Box) (&transform_hlds__intermod_analysis_scalar_common_5[2]));
      MR_hl_field(MR_mktag(0), Var_40, 1) = ((MR_Box) (transform_hlds__intermod_analysis__write_analysis_pragmas_10_p_0_6));
      MR_hl_field(MR_mktag(0), Var_40, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_40, 3) = ((MR_Box) (Stream_11));
      MR_hl_field(MR_mktag(0), Var_40, 4) = ((MR_Box) ((MR_Integer) 1));
    }
    mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_structure_sharing_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_40, SharingInfos_17, ((MR_Box) ((MR_Integer) 0)), &conv5_STATE_VARIABLE_IO_41_41);
    parse_tree__parse_tree_out__maybe_write_block_start_blank_line_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_structure_reuse_0), Stream_11, ReuseInfos_18);
    {
      Var_44 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_44, 0) = ((MR_Box) (&transform_hlds__intermod_analysis_scalar_common_5[3]));
      MR_hl_field(MR_mktag(0), Var_44, 1) = ((MR_Box) (transform_hlds__intermod_analysis__write_analysis_pragmas_10_p_0_7));
      MR_hl_field(MR_mktag(0), Var_44, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_44, 3) = ((MR_Box) (Stream_11));
      MR_hl_field(MR_mktag(0), Var_44, 4) = ((MR_Box) ((MR_Integer) 1));
    }
    mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_structure_reuse_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_44, ReuseInfos_18, ((MR_Box) ((MR_Integer) 0)), &conv6_STATE_VARIABLE_IO_21);
  }
}

static void MR_CALL 
transform_hlds__intermod_analysis__gather_analysis_pragmas_10_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv12_STATE_VARIABLE_ReuseInfosCord_15;

    transform_hlds__intermod_analysis__gather_pragma_structure_reuse_for_pred_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv12_STATE_VARIABLE_ReuseInfosCord_15);
    *wrapper_arg_3 = ((MR_Box) (conv12_STATE_VARIABLE_ReuseInfosCord_15));
  }
}

static void MR_CALL 
transform_hlds__intermod_analysis__gather_analysis_pragmas_10_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv10_STATE_VARIABLE_SharingInfosCord_15;

    transform_hlds__intermod_analysis__gather_pragma_structure_sharing_for_pred_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv10_STATE_VARIABLE_SharingInfosCord_15);
    *wrapper_arg_3 = ((MR_Box) (conv10_STATE_VARIABLE_SharingInfosCord_15));
  }
}

static void MR_CALL 
transform_hlds__intermod_analysis__gather_analysis_pragmas_10_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv8_STATE_VARIABLE_MMTablingInfosCord_15;

    transform_hlds__intermod_analysis__gather_pragma_mm_tabling_info_for_pred_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv8_STATE_VARIABLE_MMTablingInfosCord_15);
    *wrapper_arg_3 = ((MR_Box) (conv8_STATE_VARIABLE_MMTablingInfosCord_15));
  }
}

static void MR_CALL 
transform_hlds__intermod_analysis__gather_analysis_pragmas_10_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv6_STATE_VARIABLE_TrailingInfosCord_15;

    transform_hlds__intermod_analysis__gather_pragma_trailing_info_for_pred_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv6_STATE_VARIABLE_TrailingInfosCord_15);
    *wrapper_arg_3 = ((MR_Box) (conv6_STATE_VARIABLE_TrailingInfosCord_15));
  }
}

static void MR_CALL 
transform_hlds__intermod_analysis__gather_analysis_pragmas_10_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv4_STATE_VARIABLE_ExceptionsCord_15;

    transform_hlds__intermod_analysis__gather_pragma_exceptions_for_pred_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv4_STATE_VARIABLE_ExceptionsCord_15);
    *wrapper_arg_3 = ((MR_Box) (conv4_STATE_VARIABLE_ExceptionsCord_15));
  }
}

static void MR_CALL 
transform_hlds__intermod_analysis__gather_analysis_pragmas_10_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv2_STATE_VARIABLE_TermInfo2sCord_21;

    transform_hlds__intermod_analysis__gather_pragma_termination2_for_pred_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_STATE_VARIABLE_TermInfo2sCord_21);
    *wrapper_arg_3 = ((MR_Box) (conv2_STATE_VARIABLE_TermInfo2sCord_21));
  }
}

static void MR_CALL 
transform_hlds__intermod_analysis__gather_analysis_pragmas_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_TermInfosCord_21;

    transform_hlds__intermod_analysis__gather_pragma_termination_for_pred_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_TermInfosCord_21);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_TermInfosCord_21));
  }
}

static void MR_CALL 
transform_hlds__intermod_analysis__gather_analysis_pragmas_10_p_0(
  MR_Word ModuleInfo_11,
  MR_Word ProcAnalysisKinds_12,
  MR_Word OrderPredInfos_13,
  MR_Word * TermInfos_14,
  MR_Word * TermInfos2_15,
  MR_Word * Exceptions_16,
  MR_Word * TrailingInfos_17,
  MR_Word * MMTablingInfos_18,
  MR_Word * SharingInfos_19,
  MR_Word * ReuseInfos_20)
{
  {
    MR_bool succeeded;

    succeeded = mercury__set__contains_2_p_0((MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_proc_analysis_kind_0), ProcAnalysisKinds_12, ((MR_Box) ((MR_Integer) 3)));
    if (succeeded)
    {
      MR_Word TermInfosCord_21;
      MR_Word Var_29;
      MR_Word Var_30;
      MR_Box conv1_TermInfosCord_21;

      {
        Var_29 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_29, 0) = ((MR_Box) (&transform_hlds__intermod_analysis_scalar_common_4[0]));
        MR_hl_field(MR_mktag(0), Var_29, 1) = ((MR_Box) (transform_hlds__intermod_analysis__gather_analysis_pragmas_10_p_0_1));
        MR_hl_field(MR_mktag(0), Var_29, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), Var_29, 3) = ((MR_Box) (ModuleInfo_11));
      }
      Var_30 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_termination_info_0));
      mercury__list__foldl_4_p_0((MR_Word) (&transform_hlds__intermod_order_pred_info__transform_hlds__intermod_order_pred_info__type_ctor_info_order_pred_info_0), (MR_Word) (&transform_hlds__intermod_analysis_scalar_common_1[8]), Var_29, OrderPredInfos_13, ((MR_Box) (Var_30)), &conv1_TermInfosCord_21);
      TermInfosCord_21 = ((MR_Word) (conv1_TermInfosCord_21));
      *TermInfos_14 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_termination_info_0), TermInfosCord_21);
    }
    else
      *TermInfos_14 = (MR_Word) ((MR_Unsigned) 0U);
    succeeded = mercury__set__contains_2_p_0((MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_proc_analysis_kind_0), ProcAnalysisKinds_12, ((MR_Box) ((MR_Integer) 4)));
    if (succeeded)
    {
      MR_Word TermInfos2Cord_22;
      MR_Word Var_32;
      MR_Word Var_33;
      MR_Box conv3_TermInfos2Cord_22;

      {
        Var_32 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_32, 0) = ((MR_Box) (&transform_hlds__intermod_analysis_scalar_common_4[1]));
        MR_hl_field(MR_mktag(0), Var_32, 1) = ((MR_Box) (transform_hlds__intermod_analysis__gather_analysis_pragmas_10_p_0_2));
        MR_hl_field(MR_mktag(0), Var_32, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), Var_32, 3) = ((MR_Box) (ModuleInfo_11));
      }
      Var_33 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_termination2_info_0));
      mercury__list__foldl_4_p_0((MR_Word) (&transform_hlds__intermod_order_pred_info__transform_hlds__intermod_order_pred_info__type_ctor_info_order_pred_info_0), (MR_Word) (&transform_hlds__intermod_analysis_scalar_common_1[9]), Var_32, OrderPredInfos_13, ((MR_Box) (Var_33)), &conv3_TermInfos2Cord_22);
      TermInfos2Cord_22 = ((MR_Word) (conv3_TermInfos2Cord_22));
      *TermInfos2_15 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_termination2_info_0), TermInfos2Cord_22);
    }
    else
      *TermInfos2_15 = (MR_Word) ((MR_Unsigned) 0U);
    succeeded = mercury__set__contains_2_p_0((MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_proc_analysis_kind_0), ProcAnalysisKinds_12, ((MR_Box) ((MR_Integer) 0)));
    if (succeeded)
    {
      MR_Word ExceptionsCord_23;
      MR_Word Var_35;
      MR_Word Var_36;
      MR_Box conv5_ExceptionsCord_23;

      {
        Var_35 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_35, 0) = ((MR_Box) (&transform_hlds__intermod_analysis_scalar_common_4[2]));
        MR_hl_field(MR_mktag(0), Var_35, 1) = ((MR_Box) (transform_hlds__intermod_analysis__gather_analysis_pragmas_10_p_0_3));
        MR_hl_field(MR_mktag(0), Var_35, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), Var_35, 3) = ((MR_Box) (ModuleInfo_11));
      }
      Var_36 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_exceptions_0));
      mercury__list__foldl_4_p_0((MR_Word) (&transform_hlds__intermod_order_pred_info__transform_hlds__intermod_order_pred_info__type_ctor_info_order_pred_info_0), (MR_Word) (&transform_hlds__intermod_analysis_scalar_common_1[10]), Var_35, OrderPredInfos_13, ((MR_Box) (Var_36)), &conv5_ExceptionsCord_23);
      ExceptionsCord_23 = ((MR_Word) (conv5_ExceptionsCord_23));
      *Exceptions_16 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_exceptions_0), ExceptionsCord_23);
    }
    else
      *Exceptions_16 = (MR_Word) ((MR_Unsigned) 0U);
    succeeded = mercury__set__contains_2_p_0((MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_proc_analysis_kind_0), ProcAnalysisKinds_12, ((MR_Box) ((MR_Integer) 1)));
    if (succeeded)
    {
      MR_Word TrailingInfosCord_24;
      MR_Word Var_38;
      MR_Word Var_39;
      MR_Box conv7_TrailingInfosCord_24;

      {
        Var_38 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_38, 0) = ((MR_Box) (&transform_hlds__intermod_analysis_scalar_common_4[3]));
        MR_hl_field(MR_mktag(0), Var_38, 1) = ((MR_Box) (transform_hlds__intermod_analysis__gather_analysis_pragmas_10_p_0_4));
        MR_hl_field(MR_mktag(0), Var_38, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), Var_38, 3) = ((MR_Box) (ModuleInfo_11));
      }
      Var_39 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_trailing_info_0));
      mercury__list__foldl_4_p_0((MR_Word) (&transform_hlds__intermod_order_pred_info__transform_hlds__intermod_order_pred_info__type_ctor_info_order_pred_info_0), (MR_Word) (&transform_hlds__intermod_analysis_scalar_common_1[11]), Var_38, OrderPredInfos_13, ((MR_Box) (Var_39)), &conv7_TrailingInfosCord_24);
      TrailingInfosCord_24 = ((MR_Word) (conv7_TrailingInfosCord_24));
      *TrailingInfos_17 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_trailing_info_0), TrailingInfosCord_24);
    }
    else
      *TrailingInfos_17 = (MR_Word) ((MR_Unsigned) 0U);
    succeeded = mercury__set__contains_2_p_0((MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_proc_analysis_kind_0), ProcAnalysisKinds_12, ((MR_Box) ((MR_Integer) 2)));
    if (succeeded)
    {
      MR_Word MMTablingInfosCord_25;
      MR_Word Var_41;
      MR_Word Var_42;
      MR_Box conv9_MMTablingInfosCord_25;

      {
        Var_41 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_41, 0) = ((MR_Box) (&transform_hlds__intermod_analysis_scalar_common_4[4]));
        MR_hl_field(MR_mktag(0), Var_41, 1) = ((MR_Box) (transform_hlds__intermod_analysis__gather_analysis_pragmas_10_p_0_5));
        MR_hl_field(MR_mktag(0), Var_41, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), Var_41, 3) = ((MR_Box) (ModuleInfo_11));
      }
      Var_42 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_mm_tabling_info_0));
      mercury__list__foldl_4_p_0((MR_Word) (&transform_hlds__intermod_order_pred_info__transform_hlds__intermod_order_pred_info__type_ctor_info_order_pred_info_0), (MR_Word) (&transform_hlds__intermod_analysis_scalar_common_1[12]), Var_41, OrderPredInfos_13, ((MR_Box) (Var_42)), &conv9_MMTablingInfosCord_25);
      MMTablingInfosCord_25 = ((MR_Word) (conv9_MMTablingInfosCord_25));
      *MMTablingInfos_18 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_mm_tabling_info_0), MMTablingInfosCord_25);
    }
    else
      *MMTablingInfos_18 = (MR_Word) ((MR_Unsigned) 0U);
    succeeded = mercury__set__contains_2_p_0((MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_proc_analysis_kind_0), ProcAnalysisKinds_12, ((MR_Box) ((MR_Integer) 5)));
    if (succeeded)
    {
      MR_Word SharingInfosCord_26;
      MR_Word Var_44;
      MR_Word Var_45;
      MR_Box conv11_SharingInfosCord_26;

      {
        Var_44 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_44, 0) = ((MR_Box) (&transform_hlds__intermod_analysis_scalar_common_4[5]));
        MR_hl_field(MR_mktag(0), Var_44, 1) = ((MR_Box) (transform_hlds__intermod_analysis__gather_analysis_pragmas_10_p_0_6));
        MR_hl_field(MR_mktag(0), Var_44, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), Var_44, 3) = ((MR_Box) (ModuleInfo_11));
      }
      Var_45 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_structure_sharing_0));
      mercury__list__foldl_4_p_0((MR_Word) (&transform_hlds__intermod_order_pred_info__transform_hlds__intermod_order_pred_info__type_ctor_info_order_pred_info_0), (MR_Word) (&transform_hlds__intermod_analysis_scalar_common_1[13]), Var_44, OrderPredInfos_13, ((MR_Box) (Var_45)), &conv11_SharingInfosCord_26);
      SharingInfosCord_26 = ((MR_Word) (conv11_SharingInfosCord_26));
      *SharingInfos_19 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_structure_sharing_0), SharingInfosCord_26);
    }
    else
      *SharingInfos_19 = (MR_Word) ((MR_Unsigned) 0U);
    succeeded = mercury__set__contains_2_p_0((MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_proc_analysis_kind_0), ProcAnalysisKinds_12, ((MR_Box) ((MR_Integer) 6)));
    if (succeeded)
    {
      MR_Word ReuseInfosCord_27;
      MR_Word Var_47;
      MR_Word Var_48;
      MR_Box conv13_ReuseInfosCord_27;

      {
        Var_47 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_47, 0) = ((MR_Box) (&transform_hlds__intermod_analysis_scalar_common_4[6]));
        MR_hl_field(MR_mktag(0), Var_47, 1) = ((MR_Box) (transform_hlds__intermod_analysis__gather_analysis_pragmas_10_p_0_7));
        MR_hl_field(MR_mktag(0), Var_47, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), Var_47, 3) = ((MR_Box) (ModuleInfo_11));
      }
      Var_48 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_structure_reuse_0));
      mercury__list__foldl_4_p_0((MR_Word) (&transform_hlds__intermod_order_pred_info__transform_hlds__intermod_order_pred_info__type_ctor_info_order_pred_info_0), (MR_Word) (&transform_hlds__intermod_analysis_scalar_common_1[14]), Var_47, OrderPredInfos_13, ((MR_Box) (Var_48)), &conv13_ReuseInfosCord_27);
      ReuseInfosCord_27 = ((MR_Word) (conv13_ReuseInfosCord_27));
      *ReuseInfos_20 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_structure_reuse_0), ReuseInfosCord_27);
    }
    else
      *ReuseInfos_20 = (MR_Word) ((MR_Unsigned) 0U);
  }
}

static MR_bool MR_CALL 
transform_hlds__intermod_analysis____Unify____maybe_should_write_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = transform_hlds__intermod_analysis____Unify____maybe_should_write_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__intermod_analysis____Compare____maybe_should_write_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    transform_hlds__intermod_analysis____Compare____maybe_should_write_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
transform_hlds__intermod_analysis____Unify____should_write_for_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = transform_hlds__intermod_analysis____Unify____should_write_for_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__intermod_analysis____Compare____should_write_for_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    transform_hlds__intermod_analysis____Compare____should_write_for_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

void mercury__transform_hlds__intermod_analysis__init(void)
{
}

void mercury__transform_hlds__intermod_analysis__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&transform_hlds__intermod_analysis__transform_hlds__intermod_analysis__type_ctor_info_maybe_should_write_0);
	MR_register_type_ctor_info(&transform_hlds__intermod_analysis__transform_hlds__intermod_analysis__type_ctor_info_should_write_for_0);
}

void mercury__transform_hlds__intermod_analysis__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__transform_hlds__intermod_analysis__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module transform_hlds.intermod_analysis.
