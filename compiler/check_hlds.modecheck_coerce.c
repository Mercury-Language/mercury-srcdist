/*
** Automatically generated from `modecheck_coerce.m'
** by the Mercury compiler,
** version rotd-2024-11-17
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


// :- module check_hlds.modecheck_coerce.
// :- implementation.

/*
INIT mercury__check_hlds__modecheck_coerce__init
ENDINIT
*/

#include "check_hlds.modecheck_coerce.mih"


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
#include "counter.mih"
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
#include "pair.mih"
#include "parse_tree.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "queue.mih"
#include "recompilation.mih"
#include "require.mih"
#include "robdd.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "set_tree234.mih"
#include "sparse_bitset.mih"
#include "stack.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "term_context.mih"
#include "time.mih"
#include "transform_hlds.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "analysis.framework.mih"
#include "analysis.operations.mih"
#include "check_hlds.delay_info.mih"
#include "check_hlds.inst_abstract_unify.mih"
#include "check_hlds.inst_lookup.mih"
#include "check_hlds.inst_test.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.modecheck_util.mih"
#include "check_hlds.proc_requests.mih"
#include "check_hlds.type_util.mih"
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
#include "hlds.pred_name.mih"
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "libs.dependency_graph.mih"
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.polyhedron.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.sym_name.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.builtin_lib_types.mih"
#include "parse_tree.error_spec.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.parse_tree_out_info.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_event.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_data_used_modules.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_mode.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.prog_type_subst.mih"
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_db.mih"
#include "parse_tree.var_table.mih"
#include "recompilation.record_uses.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"
#include "parse_tree.module_qual.mq_info.mih"




static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__modecheck_coerce__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__modecheck_coerce__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data__type_ctor_info_mer_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__modecheck_coerce__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_mer_inst_0;

static const MR_PseudoTypeInfo check_hlds__modecheck_coerce__check_hlds__modecheck_coerce__field_types_bound_functor_or_error_0_0[1];

static const MR_DuFunctorDesc check_hlds__modecheck_coerce__check_hlds__modecheck_coerce__du_functor_desc_bound_functor_or_error_0_0;

static const MR_PseudoTypeInfo check_hlds__modecheck_coerce__check_hlds__modecheck_coerce__field_types_bound_functor_or_error_0_1[1];

static const MR_DuFunctorDesc check_hlds__modecheck_coerce__check_hlds__modecheck_coerce__du_functor_desc_bound_functor_or_error_0_1;

static const MR_DuFunctorDesc check_hlds__modecheck_coerce__check_hlds__modecheck_coerce__du_functor_desc_bound_functor_or_error_0_2;

static const MR_DuFunctorDescPtr check_hlds__modecheck_coerce__check_hlds__modecheck_coerce__du_stag_ordered_bound_functor_or_error_0_0[1];

static const MR_DuFunctorDescPtr check_hlds__modecheck_coerce__check_hlds__modecheck_coerce__du_stag_ordered_bound_functor_or_error_0_1[1];

static const MR_DuFunctorDescPtr check_hlds__modecheck_coerce__check_hlds__modecheck_coerce__du_stag_ordered_bound_functor_or_error_0_2[1];

static const MR_DuPtagLayout check_hlds__modecheck_coerce__check_hlds__modecheck_coerce__du_ptag_ordered_bound_functor_or_error_0[3];

static const MR_DuFunctorDescPtr check_hlds__modecheck_coerce__check_hlds__modecheck_coerce__du_name_ordered_bound_functor_or_error_0[3];

static const MR_Integer check_hlds__modecheck_coerce__check_hlds__modecheck_coerce__functor_number_map_bound_functor_or_error_0[3];

static const MR_FA_TypeInfo_Struct2 check_hlds__modecheck_coerce__pair__ti_pair_2parse_tree__prog_data__type_ctor_info_inst_name_0parse_tree__prog_data__type_ctor_info_mer_type_0;

static const MR_FA_TypeInfo_Struct1 check_hlds__modecheck_coerce__set_ordlist__ti_set_ordlist_1pair__ti_pair_2parse_tree__prog_data__type_ctor_info_inst_name_0parse_tree__prog_data__type_ctor_info_mer_type_0;

static const MR_FA_TypeInfo_Struct1 check_hlds__modecheck_coerce__list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_type_0;

static const MR_FA_TypeInfo_Struct1 check_hlds__modecheck_coerce__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_TypeInfo_Struct1 check_hlds__modecheck_coerce__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_PseudoTypeInfo check_hlds__modecheck_coerce__check_hlds__modecheck_coerce__field_types_get_arg_types_result_0_0[5];

static const MR_ConstString check_hlds__modecheck_coerce__check_hlds__modecheck_coerce__field_names_get_arg_types_result_0_0[5];

static const MR_DuFunctorDesc check_hlds__modecheck_coerce__check_hlds__modecheck_coerce__du_functor_desc_get_arg_types_result_0_0;

static const MR_DuFunctorDesc check_hlds__modecheck_coerce__check_hlds__modecheck_coerce__du_functor_desc_get_arg_types_result_0_1;

static const MR_DuFunctorDesc check_hlds__modecheck_coerce__check_hlds__modecheck_coerce__du_functor_desc_get_arg_types_result_0_2;

static const MR_DuFunctorDescPtr check_hlds__modecheck_coerce__check_hlds__modecheck_coerce__du_stag_ordered_get_arg_types_result_0_0[2];

static const MR_DuFunctorDescPtr check_hlds__modecheck_coerce__check_hlds__modecheck_coerce__du_stag_ordered_get_arg_types_result_0_1[1];

static const MR_DuPtagLayout check_hlds__modecheck_coerce__check_hlds__modecheck_coerce__du_ptag_ordered_get_arg_types_result_0[2];

static const MR_DuFunctorDescPtr check_hlds__modecheck_coerce__check_hlds__modecheck_coerce__du_name_ordered_get_arg_types_result_0[3];

static const MR_Integer check_hlds__modecheck_coerce__check_hlds__modecheck_coerce__functor_number_map_get_arg_types_result_0[3];

static const MR_FA_TypeInfo_Struct1 check_hlds__modecheck_coerce__list__ti_list_1check_hlds__mode_errors__type_ctor_info_coerce_error_0;

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__modecheck_coerce__parse_tree__maybe_error__pti_maybe1_2__pseudo_1__plain_list__ti_list_1check_hlds__mode_errors__type_ctor_info_coerce_error_0;

static const MR_FA_TypeInfo_Struct1 check_hlds__modecheck_coerce__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct1 check_hlds__modecheck_coerce__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct1 check_hlds__modecheck_coerce__list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_mode_0;

static const MR_PseudoTypeInfo check_hlds__modecheck_coerce__check_hlds__modecheck_coerce__field_types_modecheck_coerce_result_0_0[3];

static const MR_DuFunctorDesc check_hlds__modecheck_coerce__check_hlds__modecheck_coerce__du_functor_desc_modecheck_coerce_result_0_0;

static const MR_DuFunctorDesc check_hlds__modecheck_coerce__check_hlds__modecheck_coerce__du_functor_desc_modecheck_coerce_result_0_1;

static const MR_DuFunctorDescPtr check_hlds__modecheck_coerce__check_hlds__modecheck_coerce__du_stag_ordered_modecheck_coerce_result_0_0[1];

static const MR_DuFunctorDescPtr check_hlds__modecheck_coerce__check_hlds__modecheck_coerce__du_stag_ordered_modecheck_coerce_result_0_1[1];

static const MR_DuPtagLayout check_hlds__modecheck_coerce__check_hlds__modecheck_coerce__du_ptag_ordered_modecheck_coerce_result_0[2];

static const MR_DuFunctorDescPtr check_hlds__modecheck_coerce__check_hlds__modecheck_coerce__du_name_ordered_modecheck_coerce_result_0[2];

static const MR_Integer check_hlds__modecheck_coerce__check_hlds__modecheck_coerce__functor_number_map_modecheck_coerce_result_0[2];

static const MR_FA_TypeInfo_Struct1 check_hlds__modecheck_coerce__list__ti_list_1check_hlds__mode_errors__type_ctor_info_coerce_error_term_path_step_0;

static const MR_EnumFunctorDesc check_hlds__modecheck_coerce__check_hlds__modecheck_coerce__enum_functor_desc_types_comparison_0_0;

static const MR_EnumFunctorDesc check_hlds__modecheck_coerce__check_hlds__modecheck_coerce__enum_functor_desc_types_comparison_0_1;

static const MR_EnumFunctorDescPtr check_hlds__modecheck_coerce__check_hlds__modecheck_coerce__enum_ordinal_ordered_types_comparison_0[2];

static const MR_EnumFunctorDescPtr check_hlds__modecheck_coerce__check_hlds__modecheck_coerce__enum_name_ordered_types_comparison_0[2];

static const MR_Integer check_hlds__modecheck_coerce__check_hlds__modecheck_coerce__functor_number_map_types_comparison_0[2];

static MR_bool MR_CALL 
check_hlds__modecheck_coerce__IntroducedFrom__pred__get_ctor_existq_tvars_det__956__1_2_p_0(
  MR_Integer NumExtraArgs_10,
  MR_Integer NumExistQTVars_27);

static MR_bool MR_CALL 
check_hlds__modecheck_coerce__IntroducedFrom__pred__get_bound_functor_cons_and_arg_types__642__1_2_p_0(
  MR_Word TypeX_8,
  MR_Word TypeY_9);

static MR_bool MR_CALL 
check_hlds__modecheck_coerce__IntroducedFrom__pred__modecheck_coerce_from_bound_make_bound_functor_not_existq__574__1_2_p_0(
  MR_Word ArgInstsX0_21,
  MR_Word HeadVar__2_60);

static MR_bool MR_CALL 
check_hlds__modecheck_coerce__IntroducedFrom__pred__modecheck_coerce_from_bound_make_bound_functor_not_existq__572__1_2_p_0(
  MR_Word TypeX_17,
  MR_Word TypeY_18);

static void MR_CALL 
check_hlds__modecheck_coerce____Compare____types_comparison_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__modecheck_coerce____Unify____types_comparison_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
check_hlds__modecheck_coerce____Compare____rev_term_path_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__modecheck_coerce____Unify____rev_term_path_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
check_hlds__modecheck_coerce____Compare____modecheck_coerce_result_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__modecheck_coerce____Unify____modecheck_coerce_result_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
check_hlds__modecheck_coerce____Compare____maybe_coerce_error_1_0(
  MR_Word TypeInfo_for_T_6,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__modecheck_coerce____Unify____maybe_coerce_error_1_0(
  MR_Word TypeInfo_for_T_5,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
check_hlds__modecheck_coerce____Compare____get_arg_types_result_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__modecheck_coerce____Unify____get_arg_types_result_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
check_hlds__modecheck_coerce____Compare____expanded_insts_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__modecheck_coerce____Unify____expanded_insts_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
check_hlds__modecheck_coerce____Compare____bound_functor_or_error_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__modecheck_coerce____Unify____bound_functor_or_error_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
check_hlds__modecheck_coerce__copy_inst_for_coerce_result_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
check_hlds__modecheck_coerce__copy_inst_for_coerce_result_3_p_0(
  MR_Word LiveX_4,
  MR_Word InstX_5,
  MR_Word * InstY_6);

static void MR_CALL 
check_hlds__modecheck_coerce__modecheck_coerce_from_ground_make_bound_functor_9_p_0(
  MR_Word ModuleInfo_10,
  MR_Word TVarSet_11,
  MR_Word LiveX_12,
  MR_Word UniqX_13,
  MR_Word SeenTypes_14,
  MR_Word _TypeX_15,
  MR_Word TypeY_16,
  MR_Word CtorX_17,
  MR_Word * BoundFunctorY_18);

static void MR_CALL 
check_hlds__modecheck_coerce__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_99_104_101_99_107_95_99_111_101_114_99_101_95_102_114_111_109_95_103_114_111_117_110_100_95_109_97_107_101_95_98_111_117_110_100_95_102_117_110_99_116_111_114_95_95_91_54_93_95_48_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
check_hlds__modecheck_coerce__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_99_104_101_99_107_95_99_111_101_114_99_101_95_102_114_111_109_95_103_114_111_117_110_100_95_109_97_107_101_95_98_111_117_110_100_95_102_117_110_99_116_111_114_95_95_91_54_93_95_48_9_p_0(
  MR_Word ModuleInfo_10,
  MR_Word TVarSet_11,
  MR_Word LiveX_12,
  MR_Word UniqX_13,
  MR_Word SeenTypes_14,
  MR_Word TypeY_16,
  MR_Word CtorX_17,
  MR_Word * BoundFunctorY_18);

static void MR_CALL 
check_hlds__modecheck_coerce__modecheck_coerce_vars_10_p_0(
  MR_Word ModuleInfo0_11,
  MR_Word X_12,
  MR_Word Y_13,
  MR_Word TypeX_14,
  MR_Word TypeY_15,
  MR_Word InstX_16,
  MR_Word InstY_17,
  MR_Word * Result_18,
  MR_Word STATE_VARIABLE_ModeInfo_0_45,
  MR_Word * STATE_VARIABLE_ModeInfo_46);

static void MR_CALL 
check_hlds__modecheck_coerce__modecheck_coerce_make_inst_10_p_0(
  MR_Word ModuleInfo_11,
  MR_Word TVarSet_12,
  MR_Word LiveX_13,
  MR_Word ConsExistQTVars_14,
  MR_Word RevTermPath0_15,
  MR_Word TypeX_16,
  MR_Word TypeY_17,
  MR_Word ExpandedInsts0_18,
  MR_Word InstX_19,
  MR_Word * Result_20);

static void MR_CALL 
check_hlds__modecheck_coerce__modecheck_coerce_from_bound_make_bound_functor_arg_insts_13_p_0(
  MR_Word ModuleInfo_14,
  MR_Word TVarSet_15,
  MR_Word LiveX_16,
  MR_Word RevTermPath0_17,
  MR_Word ExpandedInsts0_18,
  MR_Word ConsIdX_19,
  MR_Word ConsExistQTVars_20,
  MR_Integer CurArgNum_21,
  MR_Word ArgTypesX_22,
  MR_Word ArgTypesY_23,
  MR_Word ArgInstsX_24,
  MR_Word * OkArgInstsY_25,
  MR_Word * Errors_26);

static MR_bool MR_CALL 
check_hlds__modecheck_coerce__modecheck_coerce_from_bound_make_bound_functor_not_existq_12_p_0_8(
  MR_Box closure_arg);

static MR_bool MR_CALL 
check_hlds__modecheck_coerce__modecheck_coerce_from_bound_make_bound_functor_not_existq_12_p_0_7(
  MR_Box closure_arg);

static MR_bool MR_CALL 
check_hlds__modecheck_coerce__modecheck_coerce_from_bound_make_bound_functor_not_existq_12_p_0_6(
  MR_Box closure_arg);

static MR_bool MR_CALL 
check_hlds__modecheck_coerce__modecheck_coerce_from_bound_make_bound_functor_not_existq_12_p_0_5(
  MR_Box closure_arg);

static MR_bool MR_CALL 
check_hlds__modecheck_coerce__modecheck_coerce_from_bound_make_bound_functor_not_existq_12_p_0_4(
  MR_Box closure_arg);

static MR_bool MR_CALL 
check_hlds__modecheck_coerce__modecheck_coerce_from_bound_make_bound_functor_not_existq_12_p_0_3(
  MR_Box closure_arg);

static MR_bool MR_CALL 
check_hlds__modecheck_coerce__modecheck_coerce_from_bound_make_bound_functor_not_existq_12_p_0_2(
  MR_Box closure_arg);

static MR_bool MR_CALL 
check_hlds__modecheck_coerce__modecheck_coerce_from_bound_make_bound_functor_not_existq_12_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
check_hlds__modecheck_coerce__modecheck_coerce_from_bound_make_bound_functor_not_existq_12_p_0(
  MR_Word ModuleInfo_13,
  MR_Word TVarSet_14,
  MR_Word LiveX_15,
  MR_Word RevTermPath0_16,
  MR_Word TypeX_17,
  MR_Word TypeY_18,
  MR_Word ExpandedInsts0_19,
  MR_Word ConsIdX_20,
  MR_Word ArgInstsX0_21,
  MR_Word * MaybeBoundFunctorY_22,
  MR_Word STATE_VARIABLE_Errors_0_47,
  MR_Word * STATE_VARIABLE_Errors_48);

static void MR_CALL 
check_hlds__modecheck_coerce__modecheck_coerce_from_bound_make_bound_functors_13_p_0(
  MR_Word ModuleInfo_14,
  MR_Word TVarSet_15,
  MR_Word LiveX_16,
  MR_Word ConsExistQTVars_17,
  MR_Word RevTermPath0_18,
  MR_Word TypeX_19,
  MR_Word TypeY_20,
  MR_Word ExpandedInsts0_21,
  MR_Word BoundFunctorsX_22,
  MR_Word * BoundFunctorsY_23,
  MR_Word * BadConsIdErrors_24,
  MR_Word STATE_VARIABLE_Errors_0_33,
  MR_Word * STATE_VARIABLE_Errors_34);

static MR_bool MR_CALL 
check_hlds__modecheck_coerce__is_subtype_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word TVarSet_6,
  MR_Word TypeA_7,
  MR_Word TypeB_8);

static void MR_CALL 
check_hlds__modecheck_coerce__modecheck_coerce_from_ground_make_inst_10_p_0(
  MR_Word ModuleInfo_11,
  MR_Word TVarSet_12,
  MR_Word LiveX_13,
  MR_Word UniqX_14,
  MR_Word ExistQTVars_15,
  MR_Word RevTermPath0_16,
  MR_Word TypeX_17,
  MR_Word TypeY_18,
  MR_Word InstX_19,
  MR_Word * MaybeInstY_20);

static MR_bool MR_CALL 
check_hlds__modecheck_coerce__compare_types_5_p_0(
  MR_Word TypeTable_6,
  MR_Word TVarSet_7,
  MR_Word Comparison_8,
  MR_Word TypeA_9,
  MR_Word TypeB_10);

static MR_bool MR_CALL 
check_hlds__modecheck_coerce__compare_types_corresponding_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word HeadVar__5_5);

static void MR_CALL 
check_hlds__modecheck_coerce__modecheck_coerce_from_ground_make_inst_for_subtype_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
check_hlds__modecheck_coerce__modecheck_coerce_from_ground_make_inst_for_subtype_8_p_0(
  MR_Word ModuleInfo_9,
  MR_Word TVarSet_10,
  MR_Word LiveX_11,
  MR_Word UniqX_12,
  MR_Word SeenTypes0_13,
  MR_Word TypeX_14,
  MR_Word TypeY_15,
  MR_Word * InstY_16);

static void MR_CALL 
check_hlds__modecheck_coerce__copy_bound_functor_for_coerce_result_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
check_hlds__modecheck_coerce__copy_bound_functor_for_coerce_result_3_p_0(
  MR_Word LiveX_4,
  MR_Word BoundFunctorX_5,
  MR_Word * BoundFunctorY_6);

static MR_bool MR_CALL 
check_hlds__modecheck_coerce__existq_tvars_contains_2_p_0(
  MR_Word ExistQTVars_3,
  MR_Word Type_4);

static MR_bool MR_CALL 
check_hlds__modecheck_coerce__get_bound_functor_cons_and_arg_types_6_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
check_hlds__modecheck_coerce__get_bound_functor_cons_and_arg_types_6_p_0(
  MR_Word ModuleInfo_7,
  MR_Word TypeX_8,
  MR_Word TypeY_9,
  MR_Word DuCtorX_10,
  MR_Word * DuCtorY_11,
  MR_Word * Result_12);

static MR_bool MR_CALL 
check_hlds__modecheck_coerce__get_ctor_existq_tvars_det_5_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
check_hlds__modecheck_coerce__get_ctor_existq_tvars_det_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Word Type_7,
  MR_Word DuCtor_8,
  MR_Word * ConsExistQTVars_9,
  MR_Integer * NumExtraArgs_10);

static MR_bool MR_CALL 
check_hlds__modecheck_coerce__is_user_inst_1_p_0(
  MR_Word InstName_2);

static MR_Word MR_CALL 
check_hlds__modecheck_coerce__uniqueness_for_coerce_result_2_f_0(
  MR_Word LiveX_4,
  MR_Word UniqX_5);

static MR_bool MR_CALL 
check_hlds__modecheck_coerce____Unify____bound_functor_or_error_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__modecheck_coerce____Compare____bound_functor_or_error_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__modecheck_coerce____Unify____expanded_insts_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__modecheck_coerce____Compare____expanded_insts_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__modecheck_coerce____Unify____get_arg_types_result_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__modecheck_coerce____Compare____get_arg_types_result_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__modecheck_coerce____Unify____maybe_coerce_error_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static void MR_CALL 
check_hlds__modecheck_coerce____Compare____maybe_coerce_error_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4);

static MR_bool MR_CALL 
check_hlds__modecheck_coerce____Unify____modecheck_coerce_result_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__modecheck_coerce____Compare____modecheck_coerce_result_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__modecheck_coerce____Unify____rev_term_path_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__modecheck_coerce____Compare____rev_term_path_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__modecheck_coerce____Unify____types_comparison_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__modecheck_coerce____Compare____types_comparison_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box check_hlds__modecheck_coerce_scalar_common_1[1][3];

static /* final */ const MR_Box check_hlds__modecheck_coerce_scalar_common_2[10][2];

static /* final */ const MR_Box check_hlds__modecheck_coerce_scalar_common_3[1][1];

static /* final */ const MR_Box check_hlds__modecheck_coerce_scalar_common_4[5][5];

static /* final */ const MR_Box check_hlds__modecheck_coerce_scalar_common_5[2][6];

static /* final */ const MR_Box check_hlds__modecheck_coerce_scalar_common_6[1][12];

static /* final */ const MR_Box check_hlds__modecheck_coerce_scalar_common_7[1][11];




static /* final */ const MR_Box check_hlds__modecheck_coerce_scalar_common_1[1][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
};

static /* final */ const MR_Box check_hlds__modecheck_coerce_scalar_common_2[10][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&check_hlds__modecheck_coerce_scalar_common_1[0]))
  },
  /* row   3 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row   4 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&check_hlds__modecheck_coerce_scalar_common_2[1]))
  },
  /* row   5 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&check_hlds__mode_errors__check_hlds__mode_errors__type_ctor_info_coerce_error_0))
  },
  /* row   6 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row   7 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&check_hlds__modecheck_coerce_scalar_common_2[6]))
  },
  /* row   8 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0))
  },
  /* row   9 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&check_hlds__mode_errors__check_hlds__mode_errors__type_ctor_info_coerce_error_term_path_step_0))
  },
};

static /* final */ const MR_Box check_hlds__modecheck_coerce_scalar_common_3[1][1] = {
  /* row   0 */
  { ((MR_Box) ((MR_Unsigned) 4U)) },
};

static /* final */ const MR_Box check_hlds__modecheck_coerce_scalar_common_4[5][5] = {
  /* row   0 */
  {
    (MR_Box) (((MR_Unsigned) 1U << 2)),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row   3 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&check_hlds__modecheck_coerce__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_mer_inst_0)),
    ((MR_Box) (&check_hlds__modecheck_coerce__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_mer_inst_0))
  },
};

static /* final */ const MR_Box check_hlds__modecheck_coerce_scalar_common_5[2][6] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_is_live_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_is_live_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_bound_functor_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_bound_functor_0))
  },
};

static /* final */ const MR_Box check_hlds__modecheck_coerce_scalar_common_6[1][12] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 9)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&check_hlds__modecheck_coerce__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_is_live_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_uniqueness_0)),
    ((MR_Box) (&check_hlds__modecheck_coerce__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_bound_functor_0))
  },
};

static /* final */ const MR_Box check_hlds__modecheck_coerce_scalar_common_7[1][11] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 8)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&check_hlds__modecheck_coerce__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_is_live_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_uniqueness_0)),
    ((MR_Box) (&check_hlds__modecheck_coerce__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__modecheck_coerce__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__modecheck_coerce__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__modecheck_coerce__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_mer_inst_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0) }
};

static const MR_PseudoTypeInfo check_hlds__modecheck_coerce__check_hlds__modecheck_coerce__field_types_bound_functor_or_error_0_0[1] = { (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_bound_functor_0) };

static const MR_DuFunctorDesc check_hlds__modecheck_coerce__check_hlds__modecheck_coerce__du_functor_desc_bound_functor_or_error_0_0 = {
  (MR_String) "bfoe_ok",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE_DIRECT_ARG,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(0),
  check_hlds__modecheck_coerce__check_hlds__modecheck_coerce__field_types_bound_functor_or_error_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo check_hlds__modecheck_coerce__check_hlds__modecheck_coerce__field_types_bound_functor_or_error_0_1[1] = { (MR_PseudoTypeInfo) (&check_hlds__mode_errors__check_hlds__mode_errors__type_ctor_info_bound_functor_cons_id_error_0) };

static const MR_DuFunctorDesc check_hlds__modecheck_coerce__check_hlds__modecheck_coerce__du_functor_desc_bound_functor_or_error_0_1 = {
  (MR_String) "bfoe_cons_id_error",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(2),
  (MR_Integer) -1,
  INT32_C(1),
  check_hlds__modecheck_coerce__check_hlds__modecheck_coerce__field_types_bound_functor_or_error_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc check_hlds__modecheck_coerce__check_hlds__modecheck_coerce__du_functor_desc_bound_functor_or_error_0_2 = {
  (MR_String) "bfoe_other_error",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 0,
  INT32_C(2),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr check_hlds__modecheck_coerce__check_hlds__modecheck_coerce__du_stag_ordered_bound_functor_or_error_0_0[1] = { &check_hlds__modecheck_coerce__check_hlds__modecheck_coerce__du_functor_desc_bound_functor_or_error_0_2 };

static const MR_DuFunctorDescPtr check_hlds__modecheck_coerce__check_hlds__modecheck_coerce__du_stag_ordered_bound_functor_or_error_0_1[1] = { &check_hlds__modecheck_coerce__check_hlds__modecheck_coerce__du_functor_desc_bound_functor_or_error_0_0 };

static const MR_DuFunctorDescPtr check_hlds__modecheck_coerce__check_hlds__modecheck_coerce__du_stag_ordered_bound_functor_or_error_0_2[1] = { &check_hlds__modecheck_coerce__check_hlds__modecheck_coerce__du_functor_desc_bound_functor_or_error_0_1 };

static const MR_DuPtagLayout check_hlds__modecheck_coerce__check_hlds__modecheck_coerce__du_ptag_ordered_bound_functor_or_error_0[3] = {
  {
    UINT32_C(1),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    check_hlds__modecheck_coerce__check_hlds__modecheck_coerce__du_stag_ordered_bound_functor_or_error_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE_DIRECT_ARG,
    check_hlds__modecheck_coerce__check_hlds__modecheck_coerce__du_stag_ordered_bound_functor_or_error_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__modecheck_coerce__check_hlds__modecheck_coerce__du_stag_ordered_bound_functor_or_error_0_2,
    INT8_C(-1),
    UINT8_C(2),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr check_hlds__modecheck_coerce__check_hlds__modecheck_coerce__du_name_ordered_bound_functor_or_error_0[3] = {
  &check_hlds__modecheck_coerce__check_hlds__modecheck_coerce__du_functor_desc_bound_functor_or_error_0_1,
  &check_hlds__modecheck_coerce__check_hlds__modecheck_coerce__du_functor_desc_bound_functor_or_error_0_0,
  &check_hlds__modecheck_coerce__check_hlds__modecheck_coerce__du_functor_desc_bound_functor_or_error_0_2
};

static const MR_Integer check_hlds__modecheck_coerce__check_hlds__modecheck_coerce__functor_number_map_bound_functor_or_error_0[3] = {
  (MR_Integer) 1,
  (MR_Integer) 0,
  (MR_Integer) 2
};

const MR_TypeCtorInfo_Struct check_hlds__modecheck_coerce__check_hlds__modecheck_coerce__type_ctor_info_bound_functor_or_error_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(3),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__modecheck_coerce____Unify____bound_functor_or_error_0_0_10001)),
  ((MR_Box) (check_hlds__modecheck_coerce____Compare____bound_functor_or_error_0_0_10001)),
  (MR_String) "check_hlds.modecheck_coerce",
  (MR_String) "bound_functor_or_error",
  { check_hlds__modecheck_coerce__check_hlds__modecheck_coerce__du_name_ordered_bound_functor_or_error_0 },
  { check_hlds__modecheck_coerce__check_hlds__modecheck_coerce__du_ptag_ordered_bound_functor_or_error_0 },
  (MR_Integer) 3,
  UINT16_C(12),
  check_hlds__modecheck_coerce__check_hlds__modecheck_coerce__functor_number_map_bound_functor_or_error_0,

};

static const MR_FA_TypeInfo_Struct2 check_hlds__modecheck_coerce__pair__ti_pair_2parse_tree__prog_data__type_ctor_info_inst_name_0parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0),
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)
  }
};

static const MR_FA_TypeInfo_Struct1 check_hlds__modecheck_coerce__set_ordlist__ti_set_ordlist_1pair__ti_pair_2parse_tree__prog_data__type_ctor_info_inst_name_0parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  { (MR_TypeInfo) (&check_hlds__modecheck_coerce__pair__ti_pair_2parse_tree__prog_data__type_ctor_info_inst_name_0parse_tree__prog_data__type_ctor_info_mer_type_0) }
};

const MR_TypeCtorInfo_Struct check_hlds__modecheck_coerce__check_hlds__modecheck_coerce__type_ctor_info_expanded_insts_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (check_hlds__modecheck_coerce____Unify____expanded_insts_0_0_10001)),
  ((MR_Box) (check_hlds__modecheck_coerce____Compare____expanded_insts_0_0_10001)),
  (MR_String) "check_hlds.modecheck_coerce",
  (MR_String) "expanded_insts",
  { NULL },
  { (MR_PseudoTypeInfo) (&check_hlds__modecheck_coerce__set_ordlist__ti_set_ordlist_1pair__ti_pair_2parse_tree__prog_data__type_ctor_info_inst_name_0parse_tree__prog_data__type_ctor_info_mer_type_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_FA_TypeInfo_Struct1 check_hlds__modecheck_coerce__list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0) }
};

static const MR_FA_TypeInfo_Struct1 check_hlds__modecheck_coerce__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  { (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0) }
};

static const MR_FA_TypeInfo_Struct1 check_hlds__modecheck_coerce__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&check_hlds__modecheck_coerce__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0) }
};

static const MR_PseudoTypeInfo check_hlds__modecheck_coerce__check_hlds__modecheck_coerce__field_types_get_arg_types_result_0_0[5] = {
  (MR_PseudoTypeInfo) (&check_hlds__modecheck_coerce__list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_type_0),
  (MR_PseudoTypeInfo) (&check_hlds__modecheck_coerce__list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_type_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&check_hlds__modecheck_coerce__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
};

static const MR_ConstString check_hlds__modecheck_coerce__check_hlds__modecheck_coerce__field_names_get_arg_types_result_0_0[5] = {
  (MR_String) "arg_types_x",
  (MR_String) "arg_types_y",
  (MR_String) "arity",
  (MR_String) "cons_existq_tvars",
  (MR_String) "num_extra_args"
};

static const MR_DuFunctorDesc check_hlds__modecheck_coerce__check_hlds__modecheck_coerce__du_functor_desc_get_arg_types_result_0_0 = {
  (MR_String) "cons_args",
  INT16_C(5),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(0),
  check_hlds__modecheck_coerce__check_hlds__modecheck_coerce__field_types_get_arg_types_result_0_0,
  check_hlds__modecheck_coerce__check_hlds__modecheck_coerce__field_names_get_arg_types_result_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc check_hlds__modecheck_coerce__check_hlds__modecheck_coerce__du_functor_desc_get_arg_types_result_0_1 = {
  (MR_String) "bad_cons_id_for_input_type",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 0,
  INT32_C(1),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc check_hlds__modecheck_coerce__check_hlds__modecheck_coerce__du_functor_desc_get_arg_types_result_0_2 = {
  (MR_String) "bad_cons_id_for_result_type",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 1,
  INT32_C(2),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr check_hlds__modecheck_coerce__check_hlds__modecheck_coerce__du_stag_ordered_get_arg_types_result_0_0[2] = {
  &check_hlds__modecheck_coerce__check_hlds__modecheck_coerce__du_functor_desc_get_arg_types_result_0_1,
  &check_hlds__modecheck_coerce__check_hlds__modecheck_coerce__du_functor_desc_get_arg_types_result_0_2
};

static const MR_DuFunctorDescPtr check_hlds__modecheck_coerce__check_hlds__modecheck_coerce__du_stag_ordered_get_arg_types_result_0_1[1] = { &check_hlds__modecheck_coerce__check_hlds__modecheck_coerce__du_functor_desc_get_arg_types_result_0_0 };

static const MR_DuPtagLayout check_hlds__modecheck_coerce__check_hlds__modecheck_coerce__du_ptag_ordered_get_arg_types_result_0[2] = {
  {
    UINT32_C(2),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    check_hlds__modecheck_coerce__check_hlds__modecheck_coerce__du_stag_ordered_get_arg_types_result_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__modecheck_coerce__check_hlds__modecheck_coerce__du_stag_ordered_get_arg_types_result_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr check_hlds__modecheck_coerce__check_hlds__modecheck_coerce__du_name_ordered_get_arg_types_result_0[3] = {
  &check_hlds__modecheck_coerce__check_hlds__modecheck_coerce__du_functor_desc_get_arg_types_result_0_1,
  &check_hlds__modecheck_coerce__check_hlds__modecheck_coerce__du_functor_desc_get_arg_types_result_0_2,
  &check_hlds__modecheck_coerce__check_hlds__modecheck_coerce__du_functor_desc_get_arg_types_result_0_0
};

static const MR_Integer check_hlds__modecheck_coerce__check_hlds__modecheck_coerce__functor_number_map_get_arg_types_result_0[3] = {
  (MR_Integer) 2,
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct check_hlds__modecheck_coerce__check_hlds__modecheck_coerce__type_ctor_info_get_arg_types_result_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__modecheck_coerce____Unify____get_arg_types_result_0_0_10001)),
  ((MR_Box) (check_hlds__modecheck_coerce____Compare____get_arg_types_result_0_0_10001)),
  (MR_String) "check_hlds.modecheck_coerce",
  (MR_String) "get_arg_types_result",
  { check_hlds__modecheck_coerce__check_hlds__modecheck_coerce__du_name_ordered_get_arg_types_result_0 },
  { check_hlds__modecheck_coerce__check_hlds__modecheck_coerce__du_ptag_ordered_get_arg_types_result_0 },
  (MR_Integer) 3,
  UINT16_C(12),
  check_hlds__modecheck_coerce__check_hlds__modecheck_coerce__functor_number_map_get_arg_types_result_0,

};

static const MR_FA_TypeInfo_Struct1 check_hlds__modecheck_coerce__list__ti_list_1check_hlds__mode_errors__type_ctor_info_coerce_error_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&check_hlds__mode_errors__check_hlds__mode_errors__type_ctor_info_coerce_error_0) }
};

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__modecheck_coerce__parse_tree__maybe_error__pti_maybe1_2__pseudo_1__plain_list__ti_list_1check_hlds__mode_errors__type_ctor_info_coerce_error_0 = {
  &parse_tree__maybe_error__parse_tree__maybe_error__type_ctor_info_maybe1_2,
  {
    (MR_PseudoTypeInfo) ((MR_Integer) 1),
    (MR_PseudoTypeInfo) (&check_hlds__modecheck_coerce__list__ti_list_1check_hlds__mode_errors__type_ctor_info_coerce_error_0)
  }
};

const MR_TypeCtorInfo_Struct check_hlds__modecheck_coerce__check_hlds__modecheck_coerce__type_ctor_info_maybe_coerce_error_1 = {
  (MR_Integer) 1,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV,
  ((MR_Box) (check_hlds__modecheck_coerce____Unify____maybe_coerce_error_1_0_10001)),
  ((MR_Box) (check_hlds__modecheck_coerce____Compare____maybe_coerce_error_1_0_10001)),
  (MR_String) "check_hlds.modecheck_coerce",
  (MR_String) "maybe_coerce_error",
  { NULL },
  { (MR_PseudoTypeInfo) (&check_hlds__modecheck_coerce__parse_tree__maybe_error__pti_maybe1_2__pseudo_1__plain_list__ti_list_1check_hlds__mode_errors__type_ctor_info_coerce_error_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_FA_TypeInfo_Struct1 check_hlds__modecheck_coerce__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  { (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static const MR_FA_TypeInfo_Struct1 check_hlds__modecheck_coerce__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&check_hlds__modecheck_coerce__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static const MR_FA_TypeInfo_Struct1 check_hlds__modecheck_coerce__list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_mode_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0) }
};

static const MR_PseudoTypeInfo check_hlds__modecheck_coerce__check_hlds__modecheck_coerce__field_types_modecheck_coerce_result_0_0[3] = {
  (MR_PseudoTypeInfo) (&check_hlds__modecheck_coerce__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
  (MR_PseudoTypeInfo) (&check_hlds__modecheck_coerce__list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_mode_0),
  (MR_PseudoTypeInfo) (&check_hlds__modecheck_util__check_hlds__modecheck_util__type_ctor_info_extra_goals_0)
};

static const MR_DuFunctorDesc check_hlds__modecheck_coerce__check_hlds__modecheck_coerce__du_functor_desc_modecheck_coerce_result_0_0 = {
  (MR_String) "coerce_mode_ok",
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(0),
  check_hlds__modecheck_coerce__check_hlds__modecheck_coerce__field_types_modecheck_coerce_result_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc check_hlds__modecheck_coerce__check_hlds__modecheck_coerce__du_functor_desc_modecheck_coerce_result_0_1 = {
  (MR_String) "coerce_mode_error",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 0,
  INT32_C(1),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr check_hlds__modecheck_coerce__check_hlds__modecheck_coerce__du_stag_ordered_modecheck_coerce_result_0_0[1] = { &check_hlds__modecheck_coerce__check_hlds__modecheck_coerce__du_functor_desc_modecheck_coerce_result_0_1 };

static const MR_DuFunctorDescPtr check_hlds__modecheck_coerce__check_hlds__modecheck_coerce__du_stag_ordered_modecheck_coerce_result_0_1[1] = { &check_hlds__modecheck_coerce__check_hlds__modecheck_coerce__du_functor_desc_modecheck_coerce_result_0_0 };

static const MR_DuPtagLayout check_hlds__modecheck_coerce__check_hlds__modecheck_coerce__du_ptag_ordered_modecheck_coerce_result_0[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    check_hlds__modecheck_coerce__check_hlds__modecheck_coerce__du_stag_ordered_modecheck_coerce_result_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__modecheck_coerce__check_hlds__modecheck_coerce__du_stag_ordered_modecheck_coerce_result_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr check_hlds__modecheck_coerce__check_hlds__modecheck_coerce__du_name_ordered_modecheck_coerce_result_0[2] = {
  &check_hlds__modecheck_coerce__check_hlds__modecheck_coerce__du_functor_desc_modecheck_coerce_result_0_1,
  &check_hlds__modecheck_coerce__check_hlds__modecheck_coerce__du_functor_desc_modecheck_coerce_result_0_0
};

static const MR_Integer check_hlds__modecheck_coerce__check_hlds__modecheck_coerce__functor_number_map_modecheck_coerce_result_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct check_hlds__modecheck_coerce__check_hlds__modecheck_coerce__type_ctor_info_modecheck_coerce_result_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__modecheck_coerce____Unify____modecheck_coerce_result_0_0_10001)),
  ((MR_Box) (check_hlds__modecheck_coerce____Compare____modecheck_coerce_result_0_0_10001)),
  (MR_String) "check_hlds.modecheck_coerce",
  (MR_String) "modecheck_coerce_result",
  { check_hlds__modecheck_coerce__check_hlds__modecheck_coerce__du_name_ordered_modecheck_coerce_result_0 },
  { check_hlds__modecheck_coerce__check_hlds__modecheck_coerce__du_ptag_ordered_modecheck_coerce_result_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  check_hlds__modecheck_coerce__check_hlds__modecheck_coerce__functor_number_map_modecheck_coerce_result_0,

};

static const MR_FA_TypeInfo_Struct1 check_hlds__modecheck_coerce__list__ti_list_1check_hlds__mode_errors__type_ctor_info_coerce_error_term_path_step_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&check_hlds__mode_errors__check_hlds__mode_errors__type_ctor_info_coerce_error_term_path_step_0) }
};

const MR_TypeCtorInfo_Struct check_hlds__modecheck_coerce__check_hlds__modecheck_coerce__type_ctor_info_rev_term_path_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (check_hlds__modecheck_coerce____Unify____rev_term_path_0_0_10001)),
  ((MR_Box) (check_hlds__modecheck_coerce____Compare____rev_term_path_0_0_10001)),
  (MR_String) "check_hlds.modecheck_coerce",
  (MR_String) "rev_term_path",
  { NULL },
  { (MR_PseudoTypeInfo) (&check_hlds__modecheck_coerce__list__ti_list_1check_hlds__mode_errors__type_ctor_info_coerce_error_term_path_step_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_EnumFunctorDesc check_hlds__modecheck_coerce__check_hlds__modecheck_coerce__enum_functor_desc_types_comparison_0_0 = {
  (MR_String) "compare_equal",
  INT32_C(0)
};

static const MR_EnumFunctorDesc check_hlds__modecheck_coerce__check_hlds__modecheck_coerce__enum_functor_desc_types_comparison_0_1 = {
  (MR_String) "compare_equal_lt",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr check_hlds__modecheck_coerce__check_hlds__modecheck_coerce__enum_ordinal_ordered_types_comparison_0[2] = {
  &check_hlds__modecheck_coerce__check_hlds__modecheck_coerce__enum_functor_desc_types_comparison_0_0,
  &check_hlds__modecheck_coerce__check_hlds__modecheck_coerce__enum_functor_desc_types_comparison_0_1
};

static const MR_EnumFunctorDescPtr check_hlds__modecheck_coerce__check_hlds__modecheck_coerce__enum_name_ordered_types_comparison_0[2] = {
  &check_hlds__modecheck_coerce__check_hlds__modecheck_coerce__enum_functor_desc_types_comparison_0_0,
  &check_hlds__modecheck_coerce__check_hlds__modecheck_coerce__enum_functor_desc_types_comparison_0_1
};

static const MR_Integer check_hlds__modecheck_coerce__check_hlds__modecheck_coerce__functor_number_map_types_comparison_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct check_hlds__modecheck_coerce__check_hlds__modecheck_coerce__type_ctor_info_types_comparison_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (check_hlds__modecheck_coerce____Unify____types_comparison_0_0_10001)),
  ((MR_Box) (check_hlds__modecheck_coerce____Compare____types_comparison_0_0_10001)),
  (MR_String) "check_hlds.modecheck_coerce",
  (MR_String) "types_comparison",
  { check_hlds__modecheck_coerce__check_hlds__modecheck_coerce__enum_name_ordered_types_comparison_0 },
  { check_hlds__modecheck_coerce__check_hlds__modecheck_coerce__enum_ordinal_ordered_types_comparison_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  check_hlds__modecheck_coerce__check_hlds__modecheck_coerce__functor_number_map_types_comparison_0,

};

static MR_bool MR_CALL 
check_hlds__modecheck_coerce__IntroducedFrom__pred__get_ctor_existq_tvars_det__956__1_2_p_0(
  MR_Integer NumExtraArgs_10,
  MR_Integer NumExistQTVars_27)
{
  MR_bool succeeded = (NumExtraArgs_10 == NumExistQTVars_27);

  return succeeded;
}

static MR_bool MR_CALL 
check_hlds__modecheck_coerce__IntroducedFrom__pred__get_bound_functor_cons_and_arg_types__642__1_2_p_0(
  MR_Word TypeX_8,
  MR_Word TypeY_9)
{
  MR_bool succeeded;

  succeeded = parse_tree__prog_data____Unify____mer_type_0_0(TypeX_8, TypeY_9);
  return succeeded;
}

static MR_bool MR_CALL 
check_hlds__modecheck_coerce__IntroducedFrom__pred__modecheck_coerce_from_bound_make_bound_functor_not_existq__574__1_2_p_0(
  MR_Word ArgInstsX0_21,
  MR_Word HeadVar__2_60)
{
  MR_bool succeeded;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&check_hlds__modecheck_coerce_scalar_common_2[0]), ((MR_Box) (ArgInstsX0_21)), ((MR_Box) (HeadVar__2_60)));
  return succeeded;
}

static MR_bool MR_CALL 
check_hlds__modecheck_coerce__IntroducedFrom__pred__modecheck_coerce_from_bound_make_bound_functor_not_existq__572__1_2_p_0(
  MR_Word TypeX_17,
  MR_Word TypeY_18)
{
  MR_bool succeeded;

  succeeded = parse_tree__prog_data____Unify____mer_type_0_0(TypeX_17, TypeY_18);
  return succeeded;
}

static void MR_CALL 
check_hlds__modecheck_coerce____Compare____types_comparison_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
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

static MR_bool MR_CALL 
check_hlds__modecheck_coerce____Unify____types_comparison_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

static void MR_CALL 
check_hlds__modecheck_coerce____Compare____rev_term_path_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__modecheck_coerce_scalar_common_2[9]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

static MR_bool MR_CALL 
check_hlds__modecheck_coerce____Unify____rev_term_path_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&check_hlds__modecheck_coerce_scalar_common_2[9]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

static void MR_CALL 
check_hlds__modecheck_coerce____Compare____modecheck_coerce_result_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_12 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_13 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_12 == CastY_13);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__1_1 = (MR_Integer) 0;
    else
      *HeadVar__1_1 = (MR_Integer) 2;
  else
  if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__1_1 = (MR_Integer) 1;
  else
  {
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
    MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 2))));
    MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 2))));
    MR_Word SubResult1_6;

    mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__modecheck_coerce_scalar_common_2[7]), &SubResult1_6, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;

      mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__modecheck_coerce_scalar_common_2[8]), &SubResult2_9, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
      succeeded = (SubResult2_9 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
        check_hlds__modecheck_util____Compare____extra_goals_0_0(HeadVar__1_1, ArgX3_10, ArgY3_11);
    }
  }
}

static MR_bool MR_CALL 
check_hlds__modecheck_coerce____Unify____modecheck_coerce_result_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_11 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_12 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_11 == CastY_12);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Integer CastX_9 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_10 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastY_10 == CastX_9);
  }
  else
  {
    MR_Word TypeInfo_13_13;
    MR_Word TypeInfo_14_14;
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_4;
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word ArgY2_6;
    MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 2))));
    MR_Word ArgY3_8;

    succeeded = (HeadVar__2_2 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      ArgY1_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      ArgY2_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
      ArgY3_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 2))));
      TypeInfo_13_13 = (MR_Word) (&check_hlds__modecheck_coerce_scalar_common_2[7]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_13_13, ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
      if (succeeded)
      {
        TypeInfo_14_14 = (MR_Word) (&check_hlds__modecheck_coerce_scalar_common_2[8]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_14_14, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
        if (succeeded)
          succeeded = check_hlds__modecheck_util____Unify____extra_goals_0_0(ArgX3_7, ArgY3_8);
      }
    }
  }
  return succeeded;
}

static void MR_CALL 
check_hlds__modecheck_coerce____Compare____maybe_coerce_error_1_0(
  MR_Word TypeInfo_for_T_6,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  parse_tree__maybe_error____Compare____maybe1_2_0(TypeInfo_for_T_6, (MR_Word) (&check_hlds__modecheck_coerce_scalar_common_2[5]), HeadVar__1_1, Cast_HeadVar1_4, Cast_HeadVar2_5);
}

static MR_bool MR_CALL 
check_hlds__modecheck_coerce____Unify____maybe_coerce_error_1_0(
  MR_Word TypeInfo_for_T_5,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = parse_tree__maybe_error____Unify____maybe1_2_0(TypeInfo_for_T_5, (MR_Word) (&check_hlds__modecheck_coerce_scalar_common_2[5]), Cast_HeadVar1_3, Cast_HeadVar2_4);
  return succeeded;
}

static void MR_CALL 
check_hlds__modecheck_coerce____Compare____get_arg_types_result_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_18 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_19 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_18 == CastY_19);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
    switch (MR_tag((MR_Word) HeadVar__2_2)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(HeadVar__2_2)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *HeadVar__1_1 = (MR_Integer) 0;
                    break;
                  case (MR_Integer) 1:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
              case (MR_Integer) 1:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
            }
            break;
          case (MR_Integer) 1:
            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    *HeadVar__1_1 = (MR_Integer) 0;
                    break;
                }
                break;
              case (MR_Integer) 1:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        switch (MR_tag((MR_Word) HeadVar__3_3)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *HeadVar__1_1 = (MR_Integer) 1;
            break;
          case (MR_Integer) 1:
            {
              MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
              MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));
              MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
              MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
              MR_Integer ArgX3_10 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 2))));
              MR_Integer ArgY3_11 = ((MR_Integer) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 2))));
              MR_Word ArgX4_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 3))));
              MR_Word ArgY4_14 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 3))));
              MR_Integer ArgX5_16 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 4))));
              MR_Integer ArgY5_17 = ((MR_Integer) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 4))));
              MR_Word SubResult1_6;

              mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__modecheck_coerce_scalar_common_2[3]), &SubResult1_6, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
              succeeded = (SubResult1_6 != (MR_Integer) 0);
              if (succeeded)
                *HeadVar__1_1 = SubResult1_6;
              else
              {
                MR_Word SubResult2_9;

                mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__modecheck_coerce_scalar_common_2[3]), &SubResult2_9, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
                succeeded = (SubResult2_9 != (MR_Integer) 0);
                if (succeeded)
                  *HeadVar__1_1 = SubResult2_9;
                else
                {
                  MR_Word SubResult3_12;

                  succeeded = (ArgX3_10 < ArgY3_11);
                  if (succeeded)
                  {
                    SubResult3_12 = (MR_Integer) 1;
                    succeeded = MR_TRUE;
                  }
                  else
                  {
                    succeeded = (ArgX3_10 > ArgY3_11);
                    if (succeeded)
                    {
                      SubResult3_12 = (MR_Integer) 2;
                      succeeded = MR_TRUE;
                    }
                    else
                    {
                      succeeded = MR_TRUE;
                      succeeded = !(succeeded);
                      if (succeeded)
                      {
                        SubResult3_12 = (MR_Integer) 0;
                        succeeded = MR_TRUE;
                      }
                    }
                  }
                  if (succeeded)
                    *HeadVar__1_1 = SubResult3_12;
                  else
                  {
                    MR_Word SubResult4_15;

                    mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__modecheck_coerce_scalar_common_2[4]), &SubResult4_15, ((MR_Box) (ArgX4_13)), ((MR_Box) (ArgY4_14)));
                    succeeded = (SubResult4_15 != (MR_Integer) 0);
                    if (succeeded)
                      *HeadVar__1_1 = SubResult4_15;
                    else
                    {
                      succeeded = (ArgX5_16 < ArgY5_17);
                      if (succeeded)
                        *HeadVar__1_1 = (MR_Integer) 1;
                      else
                      {
                        succeeded = (ArgX5_16 > ArgY5_17);
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
            break;
        }
        break;
    }
}

static MR_bool MR_CALL 
check_hlds__modecheck_coerce____Unify____get_arg_types_result_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_15 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_16 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_15 == CastY_16);
  if (succeeded)
    succeeded = MR_TRUE;
  else
    switch (MR_tag((MR_Word) HeadVar__1_1)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Integer CastX_13 = (MR_Integer) (HeadVar__1_1);
          MR_Integer CastY_14 = (MR_Integer) (HeadVar__2_2);

          succeeded = (CastY_14 == CastX_13);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word TypeInfo_17_17;
          MR_Word TypeInfo_18_18;
          MR_Word TypeInfo_19_19;
          MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
          MR_Word ArgY1_4;
          MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
          MR_Word ArgY2_6;
          MR_Integer ArgX3_7 = ((MR_Integer) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 2))));
          MR_Integer ArgY3_8;
          MR_Word ArgX4_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 3))));
          MR_Word ArgY4_10;
          MR_Integer ArgX5_11 = ((MR_Integer) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 4))));
          MR_Integer ArgY5_12;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
          if (succeeded)
          {
            ArgY1_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
            ArgY2_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
            ArgY3_8 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 2))));
            ArgY4_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 3))));
            ArgY5_12 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 4))));
            TypeInfo_17_17 = (MR_Word) (&check_hlds__modecheck_coerce_scalar_common_2[3]);
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_17_17, ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
            if (succeeded)
            {
              TypeInfo_18_18 = (MR_Word) (&check_hlds__modecheck_coerce_scalar_common_2[3]);
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_18_18, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
              if (succeeded)
              {
                succeeded = (ArgX3_7 == ArgY3_8);
                if (succeeded)
                {
                  TypeInfo_19_19 = (MR_Word) (&check_hlds__modecheck_coerce_scalar_common_2[4]);
                  succeeded = mercury__builtin__unify_2_p_0(TypeInfo_19_19, ((MR_Box) (ArgX4_9)), ((MR_Box) (ArgY4_10)));
                  if (succeeded)
                    succeeded = (ArgX5_11 == ArgY5_12);
                }
              }
            }
          }
        }
        break;
    }
  return succeeded;
}

static void MR_CALL 
check_hlds__modecheck_coerce____Compare____expanded_insts_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__modecheck_coerce_scalar_common_2[2]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

static MR_bool MR_CALL 
check_hlds__modecheck_coerce____Unify____expanded_insts_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&check_hlds__modecheck_coerce_scalar_common_2[2]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

static void MR_CALL 
check_hlds__modecheck_coerce____Compare____bound_functor_or_error_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_8 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_9 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_8 == CastY_9);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
    switch (MR_tag((MR_Word) HeadVar__2_2)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_tag((MR_Word) HeadVar__3_3)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *HeadVar__1_1 = (MR_Integer) 0;
            break;
          case (MR_Integer) 1:
          case (MR_Integer) 2:
            *HeadVar__1_1 = (MR_Integer) 2;
            break;
        }
        break;
      case (MR_Integer) 1:
        switch (MR_tag((MR_Word) HeadVar__3_3)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 2:
            *HeadVar__1_1 = (MR_Integer) 1;
            break;
          case (MR_Integer) 1:
            {
              MR_Word ArgX1_4 = (MR_Word) (MR_body((MR_Word) (HeadVar__2_2), (MR_Integer) 1));
              MR_Word ArgY1_5 = (MR_Word) (MR_body((MR_Word) (HeadVar__3_3), (MR_Integer) 1));

              parse_tree__prog_data____Compare____bound_functor_0_0(HeadVar__1_1, ArgX1_4, ArgY1_5);
            }
            break;
        }
        break;
      case (MR_Integer) 2:
        switch (MR_tag((MR_Word) HeadVar__3_3)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *HeadVar__1_1 = (MR_Integer) 1;
            break;
          case (MR_Integer) 1:
            *HeadVar__1_1 = (MR_Integer) 2;
            break;
          case (MR_Integer) 2:
            {
              MR_Word ArgX1_6 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 0))));
              MR_Word ArgY1_7 = ((MR_Word) ((MR_hl_field(2, HeadVar__3_3, (MR_Integer) 0))));

              check_hlds__mode_errors____Compare____bound_functor_cons_id_error_0_0(HeadVar__1_1, ArgX1_6, ArgY1_7);
            }
            break;
        }
        break;
    }
}

static MR_bool MR_CALL 
check_hlds__modecheck_coerce____Unify____bound_functor_or_error_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_9 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_10 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_9 == CastY_10);
  if (succeeded)
    succeeded = MR_TRUE;
  else
    switch (MR_tag((MR_Word) HeadVar__1_1)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Integer CastX_7 = (MR_Integer) (HeadVar__1_1);
          MR_Integer CastY_8 = (MR_Integer) (HeadVar__2_2);

          succeeded = (CastY_8 == CastX_7);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ArgX1_3 = (MR_Word) (MR_body((MR_Word) (HeadVar__1_1), (MR_Integer) 1));
          MR_Word ArgY1_4;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
          if (succeeded)
          {
            ArgY1_4 = (MR_Word) (MR_body((MR_Word) (HeadVar__2_2), (MR_Integer) 1));
            succeeded = parse_tree__prog_data____Unify____bound_functor_0_0(ArgX1_3, ArgY1_4);
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word ArgX1_5 = ((MR_Word) ((MR_hl_field(2, HeadVar__1_1, (MR_Integer) 0))));
          MR_Word ArgY1_6;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 2);
          if (succeeded)
          {
            ArgY1_6 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 0))));
            succeeded = check_hlds__mode_errors____Unify____bound_functor_cons_id_error_0_0(ArgX1_5, ArgY1_6);
          }
        }
        break;
    }
  return succeeded;
}

static void MR_CALL 
check_hlds__modecheck_coerce__copy_inst_for_coerce_result_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_BoundFunctorY_6;

  check_hlds__modecheck_coerce__copy_bound_functor_for_coerce_result_3_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv0_BoundFunctorY_6);
  *wrapper_arg_2 = ((MR_Box) (conv0_BoundFunctorY_6));
}

static void MR_CALL 
check_hlds__modecheck_coerce__copy_inst_for_coerce_result_3_p_0(
  MR_Word LiveX_4,
  MR_Word InstX_5,
  MR_Word * InstY_6)
{
  switch (MR_tag((MR_Word) InstX_5)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (MR_unmkbody(InstX_5)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.modecheck_coerce.copy_inst_for_coerce_result\'/3", (MR_String) "free inst");
            return;
          }
          break;
        case (MR_Integer) 1:
          *InstY_6 = (MR_Word) ((MR_Unsigned) 4U);
          break;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word UniqX_7 = ((MR_Unsigned) ((MR_hl_field(1, InstX_5, (MR_Integer) 0))) & (MR_Integer) 7);
        MR_Word HOInstInfo_8 = ((MR_Word) ((MR_hl_field(1, InstX_5, (MR_Integer) 1))));
        MR_Word UniqY_9;

        switch (UniqX_7) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 3:
          case (MR_Integer) 4:
            {
              mercury__require__unexpected_2_p_0((MR_String) "function \140check_hlds.modecheck_coerce.uniqueness_for_coerce_result\'/2", (MR_String) "clobbered");
              return;
            }
            break;
          case (MR_Integer) 2:
          case (MR_Integer) 1:
            switch (LiveX_4) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                UniqY_9 = UniqX_7;
                break;
              case (MR_Integer) 0:
                UniqY_9 = (MR_Integer) 0;
                break;
            }
            break;
          case (MR_Integer) 0:
            UniqY_9 = (MR_Integer) 0;
            break;
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *InstY_6 = base;
          MR_hl_field(1, base, 0) = (MR_Box) ((MR_Unsigned) (UniqY_9));
          MR_hl_field(1, base, 1) = ((MR_Box) (HOInstInfo_8));
        }
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word InstResults_10 = ((MR_Word) ((MR_hl_field(2, InstX_5, (MR_Integer) 1))));
        MR_Word BoundFunctorsX_11 = ((MR_Word) ((MR_hl_field(2, InstX_5, (MR_Integer) 2))));
        MR_Word BoundFunctorsY_12;
        MR_Word Var_20;
        MR_Word UniqX_27 = ((MR_Unsigned) ((MR_hl_field(2, InstX_5, (MR_Integer) 0))) & (MR_Integer) 7);
        MR_Word UniqY_28;

        switch (UniqX_27) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 3:
          case (MR_Integer) 4:
            {
              mercury__require__unexpected_2_p_0((MR_String) "function \140check_hlds.modecheck_coerce.uniqueness_for_coerce_result\'/2", (MR_String) "clobbered");
              return;
            }
            break;
          case (MR_Integer) 2:
          case (MR_Integer) 1:
            switch (LiveX_4) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                UniqY_28 = UniqX_27;
                break;
              case (MR_Integer) 0:
                UniqY_28 = (MR_Integer) 0;
                break;
            }
            break;
          case (MR_Integer) 0:
            UniqY_28 = (MR_Integer) 0;
            break;
        }
        {
          Var_20 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_20, 0) = ((MR_Box) (&check_hlds__modecheck_coerce_scalar_common_5[1]));
          MR_hl_field(0, Var_20, 1) = ((MR_Box) (check_hlds__modecheck_coerce__copy_inst_for_coerce_result_3_p_0_1));
          MR_hl_field(0, Var_20, 2) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(0, Var_20, 3) = ((MR_Box) (LiveX_4));
        }
        mercury__list__map_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_bound_functor_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_bound_functor_0), Var_20, BoundFunctorsX_11, &BoundFunctorsY_12);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          *InstY_6 = base;
          MR_hl_field(2, base, 0) = (MR_Box) ((MR_Unsigned) (UniqY_28));
          MR_hl_field(2, base, 1) = ((MR_Box) (InstResults_10));
          MR_hl_field(2, base, 2) = ((MR_Box) (BoundFunctorsY_12));
        }
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, InstX_5, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          *InstY_6 = InstX_5;
          break;
        case (MR_Integer) 1:
          {
            MR_Word InstVars_14 = ((MR_Word) ((MR_hl_field(3, InstX_5, (MR_Integer) 1))));
            MR_Word SubInstX_15 = ((MR_Word) ((MR_hl_field(3, InstX_5, (MR_Integer) 2))));
            MR_Word SubInstY_16;

            check_hlds__modecheck_coerce__copy_inst_for_coerce_result_3_p_0(LiveX_4, SubInstX_15, &SubInstY_16);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              *InstY_6 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 1U));
              MR_hl_field(3, base, 1) = ((MR_Box) (InstVars_14));
              MR_hl_field(3, base, 2) = ((MR_Box) (SubInstY_16));
            }
          }
          break;
        case (MR_Integer) 2:
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.modecheck_coerce.copy_inst_for_coerce_result\'/3", (MR_String) "any inst");
            return;
          }
          break;
        case (MR_Integer) 3:
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.modecheck_coerce.copy_inst_for_coerce_result\'/3", (MR_String) "uninstantiated inst parameter");
            return;
          }
          break;
      }
      break;
  }
}

static void MR_CALL 
check_hlds__modecheck_coerce__modecheck_coerce_from_ground_make_bound_functor_9_p_0(
  MR_Word ModuleInfo_10,
  MR_Word TVarSet_11,
  MR_Word LiveX_12,
  MR_Word UniqX_13,
  MR_Word SeenTypes_14,
  MR_Word _TypeX_15,
  MR_Word TypeY_16,
  MR_Word CtorX_17,
  MR_Word * BoundFunctorY_18)
{
  check_hlds__modecheck_coerce__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_99_104_101_99_107_95_99_111_101_114_99_101_95_102_114_111_109_95_103_114_111_117_110_100_95_109_97_107_101_95_98_111_117_110_100_95_102_117_110_99_116_111_114_95_95_91_54_93_95_48_9_p_0(ModuleInfo_10, TVarSet_11, LiveX_12, UniqX_13, SeenTypes_14, TypeY_16, CtorX_17, BoundFunctorY_18);
}

static void MR_CALL 
check_hlds__modecheck_coerce__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_99_104_101_99_107_95_99_111_101_114_99_101_95_102_114_111_109_95_103_114_111_117_110_100_95_109_97_107_101_95_98_111_117_110_100_95_102_117_110_99_116_111_114_95_95_91_54_93_95_48_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_InstY_16;

  check_hlds__modecheck_coerce__modecheck_coerce_from_ground_make_inst_for_subtype_8_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 6)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 7)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_InstY_16);
  *wrapper_arg_3 = ((MR_Box) (conv0_InstY_16));
}

static void MR_CALL 
check_hlds__modecheck_coerce__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_99_104_101_99_107_95_99_111_101_114_99_101_95_102_114_111_109_95_103_114_111_117_110_100_95_109_97_107_101_95_98_111_117_110_100_95_102_117_110_99_116_111_114_95_95_91_54_93_95_48_9_p_0(
  MR_Word ModuleInfo_10,
  MR_Word TVarSet_11,
  MR_Word LiveX_12,
  MR_Word UniqX_13,
  MR_Word SeenTypes_14,
  MR_Word TypeY_16,
  MR_Word CtorX_17,
  MR_Word * BoundFunctorY_18)
{
  MR_bool succeeded;
  MR_Word CtorNameX_21 = ((MR_Word) ((MR_hl_field(0, CtorX_17, (MR_Integer) 2))));
  MR_Word CtorArgsX_22 = ((MR_Word) ((MR_hl_field(0, CtorX_17, (MR_Integer) 3))));
  MR_Integer CtorArity_23 = ((MR_Integer) ((MR_hl_field(0, CtorX_17, (MR_Integer) 4))));
  MR_Word TypeCtorY_25;
  MR_Word ModuleNameY_26;
  MR_Word CtorNameY_27;
  MR_Word DuCtorY_28;
  MR_Word ArgTypesX_29;
  MR_Word ArgTypesY_31;
  MR_Word ArgInstsY_32;
  MR_Word ConsIdY_33;
  MR_Word Var_36;
  MR_Word ArgTypesY0_30;
  MR_Word TypeCtor_45;
  MR_Word TypeArgs_46;
  MR_Word ConsTable_47;
  MR_Word ConsDefn_48;
  MR_Word TypeParams_51;
  MR_Word CtorArgs_54;
  MR_Word CtorArgTypes0_56;

  parse_tree__prog_type__type_to_ctor_det_2_p_0(TypeY_16, &TypeCtorY_25);
  ModuleNameY_26 = check_hlds__type_util__type_ctor_module_1_f_0(TypeCtorY_25);
  if (((MR_tag((MR_Word) CtorNameX_21)) == (MR_Integer) 1))
  {
    MR_String Name_44 = ((MR_String) ((MR_hl_field(1, CtorNameX_21, (MR_Integer) 1))));

    {
      CtorNameY_27 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, CtorNameY_27, 0) = ((MR_Box) (ModuleNameY_26));
      MR_hl_field(1, CtorNameY_27, 1) = ((MR_Box) (Name_44));
    }
  }
  else
    CtorNameY_27 = CtorNameX_21;
  {
    DuCtorY_28 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, DuCtorY_28, 0) = ((MR_Box) (CtorNameY_27));
    MR_hl_field(0, DuCtorY_28, 1) = ((MR_Box) (CtorArity_23));
    MR_hl_field(0, DuCtorY_28, 2) = ((MR_Box) (TypeCtorY_25));
  }
  parse_tree__prog_data__get_ctor_arg_types_2_p_0(CtorArgsX_22, &ArgTypesX_29);
  succeeded = parse_tree__prog_type__type_to_ctor_and_args_3_p_0(TypeY_16, &TypeCtor_45, &TypeArgs_46);
  if (succeeded)
  {
    hlds__hlds_module__module_info_get_cons_table_2_p_0(ModuleInfo_10, &ConsTable_47);
    succeeded = hlds__hlds_cons__search_cons_table_of_type_ctor_4_p_0(ConsTable_47, TypeCtor_45, DuCtorY_28, &ConsDefn_48);
    if (succeeded)
    {
      TypeParams_51 = ((MR_Word) ((MR_hl_field(0, ConsDefn_48, (MR_Integer) 2))));
      CtorArgs_54 = ((MR_Word) ((MR_hl_field(0, ConsDefn_48, (MR_Integer) 5))));
      parse_tree__prog_data__get_ctor_arg_types_2_p_0(CtorArgs_54, &CtorArgTypes0_56);
      if ((TypeParams_51 == (MR_Word) ((MR_Unsigned) 0U)))
        ArgTypesY0_30 = CtorArgTypes0_56;
      else
      {
        MR_Word Subst_59;

        mercury__map__from_corresponding_lists_3_p_0((MR_Word) (&check_hlds__modecheck_coerce_scalar_common_2[1]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), TypeParams_51, TypeArgs_46, &Subst_59);
        parse_tree__prog_type_subst__apply_subst_to_type_list_3_p_0(Subst_59, CtorArgTypes0_56, &ArgTypesY0_30);
      }
      succeeded = MR_TRUE;
    }
  }
  if (succeeded)
    ArgTypesY_31 = ArgTypesY0_30;
  else
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.modecheck_coerce.modecheck_coerce_from_ground_make_bound_functor\'/9", (MR_String) "missing constructor for result type");
      return;
    }
  {
    Var_36 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_36, 0) = ((MR_Box) (&check_hlds__modecheck_coerce_scalar_common_7[0]));
    MR_hl_field(0, Var_36, 1) = ((MR_Box) (check_hlds__modecheck_coerce__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_99_104_101_99_107_95_99_111_101_114_99_101_95_102_114_111_109_95_103_114_111_117_110_100_95_109_97_107_101_95_98_111_117_110_100_95_102_117_110_99_116_111_114_95_95_91_54_93_95_48_9_p_0_1));
    MR_hl_field(0, Var_36, 2) = ((MR_Box) ((MR_Integer) 5));
    MR_hl_field(0, Var_36, 3) = ((MR_Box) (ModuleInfo_10));
    MR_hl_field(0, Var_36, 4) = ((MR_Box) (TVarSet_11));
    MR_hl_field(0, Var_36, 5) = ((MR_Box) (LiveX_12));
    MR_hl_field(0, Var_36, 6) = ((MR_Box) (UniqX_13));
    MR_hl_field(0, Var_36, 7) = ((MR_Box) (SeenTypes_14));
  }
  mercury__list__map_corresponding_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), Var_36, ArgTypesX_29, ArgTypesY_31, &ArgInstsY_32);
  ConsIdY_33 = (MR_Word) (MR_mkword(1, (MR_Word) (DuCtorY_28)));
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *BoundFunctorY_18 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (ConsIdY_33));
    MR_hl_field(0, base, 1) = ((MR_Box) (ArgInstsY_32));
  }
}

void MR_CALL 
check_hlds__modecheck_coerce__modecheck_coerce_8_p_0(
  MR_Word Args0_9,
  MR_Word * Args_10,
  MR_Word Modes0_11,
  MR_Word * Modes_12,
  MR_Word * Det_13,
  MR_Word * ExtraGoals_14,
  MR_Word STATE_VARIABLE_ModeInfo_0_30,
  MR_Word * STATE_VARIABLE_ModeInfo_31)
{
  MR_bool succeeded = (Args0_9 != (MR_Word) ((MR_Unsigned) 0U));
  MR_Word X_16;
  MR_Word Y_17;
  MR_Word Var_32;
  MR_Word Var_33;

  if (succeeded)
  {
    X_16 = ((MR_Word) ((MR_hl_field(1, Args0_9, (MR_Integer) 0))));
    Var_32 = ((MR_Word) ((MR_hl_field(1, Args0_9, (MR_Integer) 1))));
    succeeded = (Var_32 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      Y_17 = ((MR_Word) ((MR_hl_field(1, Var_32, (MR_Integer) 0))));
      Var_33 = ((MR_Word) ((MR_hl_field(1, Var_32, (MR_Integer) 1))));
      succeeded = (Var_33 == (MR_Word) ((MR_Unsigned) 0U));
    }
  }
  if (succeeded)
  {
    MR_Word InstMap_18;

    check_hlds__mode_info__mode_info_get_instmap_2_p_0(STATE_VARIABLE_ModeInfo_0_30, &InstMap_18);
    succeeded = hlds__instmap__instmap_is_reachable_1_p_0(InstMap_18);
    if (succeeded)
    {
      MR_Word ModuleInfo0_19;
      MR_Word VarTable_20;
      MR_Word TypeX_21;
      MR_Word TypeY_22;
      MR_Word InstX_23;
      MR_Word InstY_24;

      check_hlds__mode_info__mode_info_get_module_info_2_p_0(STATE_VARIABLE_ModeInfo_0_30, &ModuleInfo0_19);
      check_hlds__mode_info__mode_info_get_var_table_2_p_0(STATE_VARIABLE_ModeInfo_0_30, &VarTable_20);
      parse_tree__var_table__lookup_var_type_3_p_0(VarTable_20, X_16, &TypeX_21);
      parse_tree__var_table__lookup_var_type_3_p_0(VarTable_20, Y_17, &TypeY_22);
      hlds__instmap__instmap_lookup_var_3_p_0(InstMap_18, X_16, &InstX_23);
      hlds__instmap__instmap_lookup_var_3_p_0(InstMap_18, Y_17, &InstY_24);
      succeeded = check_hlds__inst_test__inst_is_ground_3_p_0(ModuleInfo0_19, TypeX_21, InstX_23);
      if (succeeded)
      {
        succeeded = check_hlds__inst_test__inst_is_clobbered_2_p_0(ModuleInfo0_19, InstX_23);
        succeeded = !(succeeded);
      }
      if (succeeded)
      {
        MR_Word Result_25;

        check_hlds__modecheck_coerce__modecheck_coerce_vars_10_p_0(ModuleInfo0_19, X_16, Y_17, TypeX_21, TypeY_22, InstX_23, InstY_24, &Result_25, STATE_VARIABLE_ModeInfo_0_30, STATE_VARIABLE_ModeInfo_31);
        if ((Result_25 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          *Args_10 = Args0_9;
          *Modes_12 = Modes0_11;
          *Det_13 = (MR_Integer) 6;
          *ExtraGoals_14 = (MR_Word) ((MR_Unsigned) 0U);
        }
        else
        {
          *Args_10 = ((MR_Word) ((MR_hl_field(1, Result_25, (MR_Integer) 0))));
          *Modes_12 = ((MR_Word) ((MR_hl_field(1, Result_25, (MR_Integer) 1))));
          *ExtraGoals_14 = ((MR_Word) ((MR_hl_field(1, Result_25, (MR_Integer) 2))));
          *Det_13 = (MR_Integer) 0;
        }
      }
      else
      {
        MR_Word WaitingVars_26;
        MR_Word Reason_27;
        MR_Word Error_28;
        MR_Word ModeError_29;
        MR_Word Var_38;

        WaitingVars_26 = parse_tree__set_of_var__make_singleton_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), X_16);
        {
          Reason_27 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Reason_27, 0) = ((MR_Box) (InstX_23));
        }
        {
          Error_28 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Error_28, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(0, Error_28, 1) = ((MR_Box) (TypeX_21));
          MR_hl_field(0, Error_28, 2) = ((MR_Box) (TypeY_22));
          MR_hl_field(0, Error_28, 3) = ((MR_Box) (Reason_27));
        }
        {
          Var_38 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_38, 0) = ((MR_Box) (Error_28));
          MR_hl_field(1, Var_38, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          ModeError_29 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, ModeError_29, 0) = ((MR_Box) ((MR_Unsigned) 12U));
          MR_hl_field(3, ModeError_29, 1) = ((MR_Box) (Var_38));
        }
        check_hlds__mode_info__mode_info_error_4_p_0(WaitingVars_26, ModeError_29, STATE_VARIABLE_ModeInfo_0_30, STATE_VARIABLE_ModeInfo_31);
        *Args_10 = Args0_9;
        *Modes_12 = Modes0_11;
        *Det_13 = (MR_Integer) 6;
        *ExtraGoals_14 = (MR_Word) ((MR_Unsigned) 0U);
      }
    }
    else
    {
      *Args_10 = Args0_9;
      *Modes_12 = Modes0_11;
      *Det_13 = (MR_Integer) 6;
      *ExtraGoals_14 = (MR_Word) ((MR_Unsigned) 0U);
      *STATE_VARIABLE_ModeInfo_31 = STATE_VARIABLE_ModeInfo_0_30;
    }
  }
  else
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.modecheck_coerce.modecheck_coerce\'/8", (MR_String) "bad coerce");
      return;
    }
}

static void MR_CALL 
check_hlds__modecheck_coerce__modecheck_coerce_vars_10_p_0(
  MR_Word ModuleInfo0_11,
  MR_Word X_12,
  MR_Word Y_13,
  MR_Word TypeX_14,
  MR_Word TypeY_15,
  MR_Word InstX_16,
  MR_Word InstY_17,
  MR_Word * Result_18,
  MR_Word STATE_VARIABLE_ModeInfo_0_45,
  MR_Word * STATE_VARIABLE_ModeInfo_46)
{
  MR_bool succeeded;
  MR_Word PredId_20;
  MR_Word PredInfo_21;
  MR_Word TVarSet_22;
  MR_Word LiveX_23;
  MR_Word LiveY_24;
  MR_Word BothLive_25;
  MR_Word ExpandedInsts0_28;
  MR_Word MaybeFinalInstY_29;

  check_hlds__mode_info__mode_info_get_pred_id_2_p_0(STATE_VARIABLE_ModeInfo_0_45, &PredId_20);
  hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo0_11, PredId_20, &PredInfo_21);
  hlds__hlds_pred__pred_info_get_typevarset_2_p_0(PredInfo_21, &TVarSet_22);
  check_hlds__mode_info__mode_info_var_is_live_3_p_0(STATE_VARIABLE_ModeInfo_0_45, X_12, &LiveX_23);
  check_hlds__mode_info__mode_info_var_is_live_3_p_0(STATE_VARIABLE_ModeInfo_0_45, Y_13, &LiveY_24);
  succeeded = (LiveX_23 == (MR_Integer) 0);
  if (succeeded)
    succeeded = (LiveY_24 == (MR_Integer) 0);
  if (succeeded)
    BothLive_25 = (MR_Integer) 0;
  else
    BothLive_25 = (MR_Integer) 1;
  mercury__set__init_1_p_0((MR_Word) (&check_hlds__modecheck_coerce_scalar_common_1[0]), &ExpandedInsts0_28);
  check_hlds__modecheck_coerce__modecheck_coerce_make_inst_10_p_0(ModuleInfo0_11, TVarSet_22, LiveX_23, (MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 0U), TypeX_14, TypeY_15, ExpandedInsts0_28, InstX_16, &MaybeFinalInstY_29);
  if (((MR_tag((MR_Word) MaybeFinalInstY_29)) == (MR_Integer) 0))
  {
    MR_Word Errors_42 = ((MR_Word) ((MR_hl_field(0, MaybeFinalInstY_29, (MR_Integer) 0))));
    MR_Word ModeError_43;
    MR_Word WaitingVars_44;

    {
      ModeError_43 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, ModeError_43, 0) = ((MR_Box) ((MR_Unsigned) 12U));
      MR_hl_field(3, ModeError_43, 1) = ((MR_Box) (Errors_42));
    }
    parse_tree__set_of_var__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), &WaitingVars_44);
    check_hlds__mode_info__mode_info_error_4_p_0(WaitingVars_44, ModeError_43, STATE_VARIABLE_ModeInfo_0_45, STATE_VARIABLE_ModeInfo_46);
    *Result_18 = (MR_Word) ((MR_Unsigned) 0U);
  }
  else
  {
    MR_Word FinalInstY_30 = ((MR_Word) ((MR_hl_field(1, MaybeFinalInstY_29, (MR_Integer) 0))));
    MR_Word ModuleInfo_34;
    MR_Word FinalInstX_35;
    MR_Word ModeX_36;
    MR_Word STATE_VARIABLE_ModeInfo_51_51;
    MR_Word STATE_VARIABLE_ModeInfo_53_53;
    MR_Word UnifyInstX_31;
    MR_Word ModuleInfo1_33;
    MR_Word Var_48;
    MR_Word _Det_32;

    Var_48 = parse_tree__prog_mode__ground_inst_0_f_0();
    succeeded = check_hlds__inst_abstract_unify__abstractly_unify_inst_9_p_0(TypeX_14, BothLive_25, (MR_Integer) 0, InstX_16, Var_48, &UnifyInstX_31, &_Det_32, ModuleInfo0_11, &ModuleInfo1_33);
    if (succeeded)
    {
      ModuleInfo_34 = ModuleInfo1_33;
      FinalInstX_35 = UnifyInstX_31;
    }
    else
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.modecheck_coerce.modecheck_coerce_vars\'/10", (MR_String) "abstractly_unify_inst failed");
        return;
      }
    check_hlds__mode_info__mode_info_set_module_info_3_p_0(ModuleInfo_34, STATE_VARIABLE_ModeInfo_0_45, &STATE_VARIABLE_ModeInfo_51_51);
    check_hlds__modecheck_util__modecheck_set_var_inst_5_p_0(X_12, FinalInstX_35, (MR_Word) ((MR_Unsigned) 0U), STATE_VARIABLE_ModeInfo_51_51, &STATE_VARIABLE_ModeInfo_53_53);
    {
      ModeX_36 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, ModeX_36, 0) = ((MR_Box) (InstX_16));
      MR_hl_field(0, ModeX_36, 1) = ((MR_Box) (FinalInstX_35));
    }
    succeeded = check_hlds__inst_test__inst_is_free_2_p_0(ModuleInfo_34, InstY_17);
    if (succeeded)
    {
      MR_Word ModeY_37;
      MR_Word Var_56;
      MR_Word Var_57;
      MR_Word Var_59;
      MR_Word Var_60;

      check_hlds__modecheck_util__modecheck_set_var_inst_5_p_0(Y_13, FinalInstY_30, (MR_Word) ((MR_Unsigned) 0U), STATE_VARIABLE_ModeInfo_53_53, STATE_VARIABLE_ModeInfo_46);
      {
        ModeY_37 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, ModeY_37, 0) = ((MR_Box) (InstY_17));
        MR_hl_field(0, ModeY_37, 1) = ((MR_Box) (FinalInstY_30));
      }
      {
        Var_57 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_57, 0) = ((MR_Box) (Y_13));
        MR_hl_field(1, Var_57, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_56 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_56, 0) = ((MR_Box) (X_12));
        MR_hl_field(1, Var_56, 1) = ((MR_Box) (Var_57));
      }
      {
        Var_60 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_60, 0) = ((MR_Box) (ModeY_37));
        MR_hl_field(1, Var_60, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_59 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_59, 0) = ((MR_Box) (ModeX_36));
        MR_hl_field(1, Var_59, 1) = ((MR_Box) (Var_60));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
        *Result_18 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Var_56));
        MR_hl_field(1, base, 1) = ((MR_Box) (Var_59));
        MR_hl_field(1, base, 2) = ((MR_Box) ((MR_Unsigned) 0U));
      }
    }
    else
    {
      MR_Word YPrime_38;
      MR_Word ExtraGoal_39;
      MR_Word ExtraGoals_40;
      MR_Word ModeYPrime_41;
      MR_Word STATE_VARIABLE_ModeInfo_63_63;
      MR_Word Var_65;
      MR_Word Var_69;
      MR_Word Var_70;
      MR_Word Var_71;
      MR_Word Var_73;
      MR_Word Var_74;
      MR_Word ModuleInfo_78;
      MR_Word VarIsDummy_79;
      MR_Word VarEntry_80;
      MR_Word VarTable0_81;
      MR_Word VarTable_82;

      check_hlds__mode_info__mode_info_get_module_info_2_p_0(STATE_VARIABLE_ModeInfo_53_53, &ModuleInfo_78);
      VarIsDummy_79 = check_hlds__type_util__is_type_a_dummy_2_f_0(ModuleInfo_78, TypeY_15);
      {
        VarEntry_80 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, VarEntry_80, 0) = ((MR_Box) ((MR_String) ""));
        MR_hl_field(0, VarEntry_80, 1) = ((MR_Box) (TypeY_15));
        MR_hl_field(0, VarEntry_80, 2) = (MR_Box) ((MR_Unsigned) (VarIsDummy_79));
      }
      check_hlds__mode_info__mode_info_get_var_table_2_p_0(STATE_VARIABLE_ModeInfo_53_53, &VarTable0_81);
      parse_tree__var_table__add_var_entry_4_p_0(VarEntry_80, &YPrime_38, VarTable0_81, &VarTable_82);
      check_hlds__mode_info__mode_info_set_var_table_3_p_0(VarTable_82, STATE_VARIABLE_ModeInfo_53_53, &STATE_VARIABLE_ModeInfo_63_63);
      check_hlds__modecheck_util__create_var_var_unification_5_p_0(Y_13, YPrime_38, TypeY_15, STATE_VARIABLE_ModeInfo_63_63, &ExtraGoal_39);
      {
        Var_65 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_65, 0) = ((MR_Box) (ExtraGoal_39));
        MR_hl_field(1, Var_65, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        ExtraGoals_40 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, ExtraGoals_40, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(1, ExtraGoals_40, 1) = ((MR_Box) (Var_65));
      }
      check_hlds__modecheck_util__modecheck_set_var_inst_5_p_0(YPrime_38, FinalInstY_30, (MR_Word) ((MR_Unsigned) 0U), STATE_VARIABLE_ModeInfo_63_63, STATE_VARIABLE_ModeInfo_46);
      Var_69 = parse_tree__prog_mode__free_inst_0_f_0();
      {
        ModeYPrime_41 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, ModeYPrime_41, 0) = ((MR_Box) (Var_69));
        MR_hl_field(0, ModeYPrime_41, 1) = ((MR_Box) (FinalInstY_30));
      }
      {
        Var_71 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_71, 0) = ((MR_Box) (YPrime_38));
        MR_hl_field(1, Var_71, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_70 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_70, 0) = ((MR_Box) (X_12));
        MR_hl_field(1, Var_70, 1) = ((MR_Box) (Var_71));
      }
      {
        Var_74 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_74, 0) = ((MR_Box) (ModeYPrime_41));
        MR_hl_field(1, Var_74, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_73 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_73, 0) = ((MR_Box) (ModeX_36));
        MR_hl_field(1, Var_73, 1) = ((MR_Box) (Var_74));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
        *Result_18 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Var_70));
        MR_hl_field(1, base, 1) = ((MR_Box) (Var_73));
        MR_hl_field(1, base, 2) = ((MR_Box) (ExtraGoals_40));
      }
    }
  }
}

static void MR_CALL 
check_hlds__modecheck_coerce__modecheck_coerce_make_inst_10_p_0(
  MR_Word ModuleInfo_11,
  MR_Word TVarSet_12,
  MR_Word LiveX_13,
  MR_Word ConsExistQTVars_14,
  MR_Word RevTermPath0_15,
  MR_Word TypeX_16,
  MR_Word TypeY_17,
  MR_Word ExpandedInsts0_18,
  MR_Word InstX_19,
  MR_Word * Result_20)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) InstX_19)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(InstX_19)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.modecheck_coerce.modecheck_coerce_make_inst\'/10", (MR_String) "free inst");
              return;
            }
            break;
          case (MR_Integer) 1:
            *Result_20 = (MR_Word) (MR_mkword(1, &check_hlds__modecheck_coerce_scalar_common_3[0]));
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word UniqX_26 = ((MR_Unsigned) ((MR_hl_field(1, InstX_19, (MR_Integer) 0))) & (MR_Integer) 7);
          MR_Word HOInstInfoX_27 = ((MR_Word) ((MR_hl_field(1, InstX_19, (MR_Integer) 1))));

          if ((HOInstInfoX_27 == (MR_Word) ((MR_Unsigned) 0U)))
            check_hlds__modecheck_coerce__modecheck_coerce_from_ground_make_inst_10_p_0(ModuleInfo_11, TVarSet_12, LiveX_13, UniqX_26, ConsExistQTVars_14, RevTermPath0_15, TypeX_16, TypeY_17, InstX_19, Result_20);
          else
          {
            MR_Word UniqY_29;
            MR_Word InstY_30;

            switch (UniqX_26) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 3:
              case (MR_Integer) 4:
                {
                  mercury__require__unexpected_2_p_0((MR_String) "function \140check_hlds.modecheck_coerce.uniqueness_for_coerce_result\'/2", (MR_String) "clobbered");
                  return;
                }
                break;
              case (MR_Integer) 2:
              case (MR_Integer) 1:
                switch (LiveX_13) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 1:
                    UniqY_29 = UniqX_26;
                    break;
                  case (MR_Integer) 0:
                    UniqY_29 = (MR_Integer) 0;
                    break;
                }
                break;
              case (MR_Integer) 0:
                UniqY_29 = (MR_Integer) 0;
                break;
            }
            {
              InstY_30 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, InstY_30, 0) = (MR_Box) ((MR_Unsigned) (UniqY_29));
              MR_hl_field(1, InstY_30, 1) = ((MR_Box) (HOInstInfoX_27));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              *Result_20 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (InstY_30));
            }
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word UniqX_61 = ((MR_Unsigned) ((MR_hl_field(2, InstX_19, (MR_Integer) 0))) & (MR_Integer) 7);
          MR_Word BoundFunctorsX_63 = ((MR_Word) ((MR_hl_field(2, InstX_19, (MR_Integer) 2))));
          MR_Word BoundFunctorsY_64;
          MR_Word BadConsIdErrors_65;
          MR_Word DeeperErrors_66;

          check_hlds__modecheck_coerce__modecheck_coerce_from_bound_make_bound_functors_13_p_0(ModuleInfo_11, TVarSet_12, LiveX_13, ConsExistQTVars_14, RevTermPath0_15, TypeX_16, TypeY_17, ExpandedInsts0_18, BoundFunctorsX_63, &BoundFunctorsY_64, &BadConsIdErrors_65, (MR_Word) ((MR_Unsigned) 0U), &DeeperErrors_66);
          if ((BadConsIdErrors_65 == (MR_Word) ((MR_Unsigned) 0U)))
            if ((DeeperErrors_66 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              MR_Word UniqY_67;
              MR_Word InstY_69;

              UniqY_67 = check_hlds__modecheck_coerce__uniqueness_for_coerce_result_2_f_0(LiveX_13, UniqX_61);
              {
                InstY_69 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(2, InstY_69, 0) = (MR_Box) ((MR_Unsigned) (UniqY_67));
                MR_hl_field(2, InstY_69, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__modecheck_coerce_scalar_common_4[0])));
                MR_hl_field(2, InstY_69, 2) = ((MR_Box) (BoundFunctorsY_64));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                *Result_20 = base;
                MR_hl_field(1, base, 0) = ((MR_Box) (InstY_69));
              }
            }
            else
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                *Result_20 = base;
                MR_hl_field(0, base, 0) = ((MR_Box) (DeeperErrors_66));
              }
          else
          {
            MR_Word HeadBadConsIdError_72 = ((MR_Word) ((MR_hl_field(1, BadConsIdErrors_65, (MR_Integer) 0))));
            MR_Word TailBadConsIdErrors_73 = ((MR_Word) ((MR_hl_field(1, BadConsIdErrors_65, (MR_Integer) 1))));
            MR_Word TermPath_74;
            MR_Word Reason_75;
            MR_Word ConsIdError_76;
            MR_Word Var_78;

            mercury__list__reverse_2_p_0((MR_Word) (&check_hlds__mode_errors__check_hlds__mode_errors__type_ctor_info_coerce_error_term_path_step_0), RevTermPath0_15, &TermPath_74);
            {
              Reason_75 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Reason_75, 0) = ((MR_Box) (InstX_19));
              MR_hl_field(1, Reason_75, 1) = ((MR_Box) (HeadBadConsIdError_72));
              MR_hl_field(1, Reason_75, 2) = ((MR_Box) (TailBadConsIdErrors_73));
            }
            {
              ConsIdError_76 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, ConsIdError_76, 0) = ((MR_Box) (TermPath_74));
              MR_hl_field(0, ConsIdError_76, 1) = ((MR_Box) (TypeX_16));
              MR_hl_field(0, ConsIdError_76, 2) = ((MR_Box) (TypeY_17));
              MR_hl_field(0, ConsIdError_76, 3) = ((MR_Box) (Reason_75));
            }
            {
              Var_78 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_78, 0) = ((MR_Box) (ConsIdError_76));
              MR_hl_field(1, Var_78, 1) = ((MR_Box) (DeeperErrors_66));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              *Result_20 = base;
              MR_hl_field(0, base, 0) = ((MR_Box) (Var_78));
            }
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, InstX_19, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word InstNameX_37 = ((MR_Word) ((MR_hl_field(3, InstX_19, (MR_Integer) 1))));
              MR_Word ExpandedInsts1_38;
              MR_Word Var_49;

              {
                Var_49 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_49, 0) = ((MR_Box) (InstNameX_37));
                MR_hl_field(0, Var_49, 1) = ((MR_Box) (TypeX_16));
              }
              succeeded = mercury__set__insert_new_3_p_0((MR_Word) (&check_hlds__modecheck_coerce_scalar_common_1[0]), ((MR_Box) (Var_49)), ExpandedInsts0_18, &ExpandedInsts1_38);
              if (succeeded)
              {
                MR_Word InstX1_39;
                MR_Word next_value_of_ExpandedInsts0_18;
                MR_Word next_value_of_InstX_19;

                check_hlds__inst_lookup__inst_lookup_3_p_0(ModuleInfo_11, InstNameX_37, &InstX1_39);
                // direct tailcall eliminated
                ;
                next_value_of_ExpandedInsts0_18 = ExpandedInsts1_38;
                next_value_of_InstX_19 = InstX1_39;
                ExpandedInsts0_18 = next_value_of_ExpandedInsts0_18;
                InstX_19 = next_value_of_InstX_19;
                continue;
              }
              else
              {
                succeeded = check_hlds__modecheck_coerce__is_user_inst_1_p_0(InstNameX_37);
                if (succeeded)
                {
                  succeeded = check_hlds__modecheck_coerce__is_subtype_4_p_0(ModuleInfo_11, TVarSet_12, TypeX_16, TypeY_17);
                  if (succeeded)
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                      *Result_20 = base;
                      MR_hl_field(1, base, 0) = ((MR_Box) (InstX_19));
                    }
                  else
                  {
                    MR_Word TermPath_40;
                    MR_Word Reason_41;
                    MR_Word Error_42;
                    MR_Word Var_50;

                    mercury__list__reverse_2_p_0((MR_Word) (&check_hlds__mode_errors__check_hlds__mode_errors__type_ctor_info_coerce_error_term_path_step_0), RevTermPath0_15, &TermPath_40);
                    {
                      Reason_41 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(2, Reason_41, 0) = ((MR_Box) (InstX_19));
                    }
                    {
                      Error_42 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(0, Error_42, 0) = ((MR_Box) (TermPath_40));
                      MR_hl_field(0, Error_42, 1) = ((MR_Box) (TypeX_16));
                      MR_hl_field(0, Error_42, 2) = ((MR_Box) (TypeY_17));
                      MR_hl_field(0, Error_42, 3) = ((MR_Box) (Reason_41));
                    }
                    {
                      Var_50 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, Var_50, 0) = ((MR_Box) (Error_42));
                      MR_hl_field(1, Var_50, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                      *Result_20 = base;
                      MR_hl_field(0, base, 0) = ((MR_Box) (Var_50));
                    }
                  }
                }
                else
                  {
                    mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.modecheck_coerce.modecheck_coerce_make_inst\'/10", (MR_String) "not user-defined inst");
                    return;
                  }
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word InstVars_32 = ((MR_Word) ((MR_hl_field(3, InstX_19, (MR_Integer) 1))));
              MR_Word SubInstX_33 = ((MR_Word) ((MR_hl_field(3, InstX_19, (MR_Integer) 2))));
              MR_Word SubResult_34;

              check_hlds__modecheck_coerce__modecheck_coerce_make_inst_10_p_0(ModuleInfo_11, TVarSet_12, LiveX_13, ConsExistQTVars_14, RevTermPath0_15, TypeX_16, TypeY_17, ExpandedInsts0_18, SubInstX_33, &SubResult_34);
              if (((MR_tag((MR_Word) SubResult_34)) == (MR_Integer) 0))
                *Result_20 = SubResult_34;
              else
              {
                MR_Word SubInstY_35 = ((MR_Word) ((MR_hl_field(1, SubResult_34, (MR_Integer) 0))));
                MR_Word InstY_55;

                {
                  InstY_55 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(3, InstY_55, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                  MR_hl_field(3, InstY_55, 1) = ((MR_Box) (InstVars_32));
                  MR_hl_field(3, InstY_55, 2) = ((MR_Box) (SubInstY_35));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  *Result_20 = base;
                  MR_hl_field(1, base, 0) = ((MR_Box) (InstY_55));
                }
              }
            }
            break;
          case (MR_Integer) 2:
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.modecheck_coerce.modecheck_coerce_make_inst\'/10", (MR_String) "any inst");
              return;
            }
            break;
          case (MR_Integer) 3:
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.modecheck_coerce.modecheck_coerce_make_inst\'/10", (MR_String) "uninstantiated inst parameter");
              return;
            }
            break;
        }
        break;
    }
    break;
  }
}

static void MR_CALL 
check_hlds__modecheck_coerce__modecheck_coerce_from_bound_make_bound_functor_arg_insts_13_p_0(
  MR_Word ModuleInfo_14,
  MR_Word TVarSet_15,
  MR_Word LiveX_16,
  MR_Word RevTermPath0_17,
  MR_Word ExpandedInsts0_18,
  MR_Word ConsIdX_19,
  MR_Word ConsExistQTVars_20,
  MR_Integer CurArgNum_21,
  MR_Word ArgTypesX_22,
  MR_Word ArgTypesY_23,
  MR_Word ArgInstsX_24,
  MR_Word * OkArgInstsY_25,
  MR_Word * Errors_26)
{
  MR_bool succeeded = (ArgTypesX_22 == (MR_Word) ((MR_Unsigned) 0U));

  if (succeeded)
  {
    succeeded = (ArgTypesY_23 == (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
      succeeded = (ArgInstsX_24 == (MR_Word) ((MR_Unsigned) 0U));
  }
  if (succeeded)
  {
    *OkArgInstsY_25 = (MR_Word) ((MR_Unsigned) 0U);
    *Errors_26 = (MR_Word) ((MR_Unsigned) 0U);
  }
  else
  {
    MR_Word HeadArgTypeX_27;
    MR_Word TailArgTypesX_28;
    MR_Word HeadArgTypeY_29;
    MR_Word TailArgTypesY_30;
    MR_Word HeadArgInstX_31;
    MR_Word TailArgInstsX_32;

    succeeded = (ArgTypesX_22 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      HeadArgTypeX_27 = ((MR_Word) ((MR_hl_field(1, ArgTypesX_22, (MR_Integer) 0))));
      TailArgTypesX_28 = ((MR_Word) ((MR_hl_field(1, ArgTypesX_22, (MR_Integer) 1))));
      succeeded = (ArgTypesY_23 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        HeadArgTypeY_29 = ((MR_Word) ((MR_hl_field(1, ArgTypesY_23, (MR_Integer) 0))));
        TailArgTypesY_30 = ((MR_Word) ((MR_hl_field(1, ArgTypesY_23, (MR_Integer) 1))));
        succeeded = (ArgInstsX_24 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          HeadArgInstX_31 = ((MR_Word) ((MR_hl_field(1, ArgInstsX_24, (MR_Integer) 0))));
          TailArgInstsX_32 = ((MR_Word) ((MR_hl_field(1, ArgInstsX_24, (MR_Integer) 1))));
        }
      }
    }
    if (succeeded)
    {
      MR_Word Step_33;
      MR_Word RevTermPath1_34;
      MR_Word MaybeHeadArgInstY_35;
      MR_Word OkTailArgInstsY_36;
      MR_Word TailErrors_37;
      MR_Integer Var_40;

      {
        Step_33 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Step_33, 0) = ((MR_Box) (ConsIdX_19));
        MR_hl_field(0, Step_33, 1) = ((MR_Box) (CurArgNum_21));
      }
      {
        RevTermPath1_34 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, RevTermPath1_34, 0) = ((MR_Box) (Step_33));
        MR_hl_field(1, RevTermPath1_34, 1) = ((MR_Box) (RevTermPath0_17));
      }
      check_hlds__modecheck_coerce__modecheck_coerce_make_inst_10_p_0(ModuleInfo_14, TVarSet_15, LiveX_16, ConsExistQTVars_20, RevTermPath1_34, HeadArgTypeX_27, HeadArgTypeY_29, ExpandedInsts0_18, HeadArgInstX_31, &MaybeHeadArgInstY_35);
      Var_40 = (MR_Integer) ((MR_Unsigned) CurArgNum_21 + (MR_Unsigned) 1);
      check_hlds__modecheck_coerce__modecheck_coerce_from_bound_make_bound_functor_arg_insts_13_p_0(ModuleInfo_14, TVarSet_15, LiveX_16, RevTermPath0_17, ExpandedInsts0_18, ConsIdX_19, ConsExistQTVars_20, Var_40, TailArgTypesX_28, TailArgTypesY_30, TailArgInstsX_32, &OkTailArgInstsY_36, &TailErrors_37);
      if (((MR_tag((MR_Word) MaybeHeadArgInstY_35)) == (MR_Integer) 0))
      {
        MR_Word HeadErrors_39 = ((MR_Word) ((MR_hl_field(0, MaybeHeadArgInstY_35, (MR_Integer) 0))));

        *OkArgInstsY_25 = OkTailArgInstsY_36;
        *Errors_26 = mercury__list__f_43_43_2_f_0((MR_Word) (&check_hlds__mode_errors__check_hlds__mode_errors__type_ctor_info_coerce_error_0), HeadErrors_39, TailErrors_37);
      }
      else
      {
        MR_Word HeadArgInstY_38 = ((MR_Word) ((MR_hl_field(1, MaybeHeadArgInstY_35, (MR_Integer) 0))));

        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *OkArgInstsY_25 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (HeadArgInstY_38));
          MR_hl_field(1, base, 1) = ((MR_Box) (OkTailArgInstsY_36));
        }
        *Errors_26 = TailErrors_37;
      }
    }
    else
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.modecheck_coerce.modecheck_coerce_from_bound_make_bound_functor_arg_insts\'/13", (MR_String) "length mismatch");
        return;
      }
  }
}

static MR_bool MR_CALL 
check_hlds__modecheck_coerce__modecheck_coerce_from_bound_make_bound_functor_not_existq_12_p_0_8(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = check_hlds__modecheck_coerce__IntroducedFrom__pred__modecheck_coerce_from_bound_make_bound_functor_not_existq__574__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))));
  return succeeded;
}

static MR_bool MR_CALL 
check_hlds__modecheck_coerce__modecheck_coerce_from_bound_make_bound_functor_not_existq_12_p_0_7(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = check_hlds__modecheck_coerce__IntroducedFrom__pred__modecheck_coerce_from_bound_make_bound_functor_not_existq__572__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))));
  return succeeded;
}

static MR_bool MR_CALL 
check_hlds__modecheck_coerce__modecheck_coerce_from_bound_make_bound_functor_not_existq_12_p_0_6(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = check_hlds__modecheck_coerce__IntroducedFrom__pred__modecheck_coerce_from_bound_make_bound_functor_not_existq__574__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))));
  return succeeded;
}

static MR_bool MR_CALL 
check_hlds__modecheck_coerce__modecheck_coerce_from_bound_make_bound_functor_not_existq_12_p_0_5(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = check_hlds__modecheck_coerce__IntroducedFrom__pred__modecheck_coerce_from_bound_make_bound_functor_not_existq__572__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))));
  return succeeded;
}

static MR_bool MR_CALL 
check_hlds__modecheck_coerce__modecheck_coerce_from_bound_make_bound_functor_not_existq_12_p_0_4(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = check_hlds__modecheck_coerce__IntroducedFrom__pred__modecheck_coerce_from_bound_make_bound_functor_not_existq__574__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))));
  return succeeded;
}

static MR_bool MR_CALL 
check_hlds__modecheck_coerce__modecheck_coerce_from_bound_make_bound_functor_not_existq_12_p_0_3(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = check_hlds__modecheck_coerce__IntroducedFrom__pred__modecheck_coerce_from_bound_make_bound_functor_not_existq__572__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))));
  return succeeded;
}

static MR_bool MR_CALL 
check_hlds__modecheck_coerce__modecheck_coerce_from_bound_make_bound_functor_not_existq_12_p_0_2(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = check_hlds__modecheck_coerce__IntroducedFrom__pred__modecheck_coerce_from_bound_make_bound_functor_not_existq__574__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))));
  return succeeded;
}

static MR_bool MR_CALL 
check_hlds__modecheck_coerce__modecheck_coerce_from_bound_make_bound_functor_not_existq_12_p_0_1(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = check_hlds__modecheck_coerce__IntroducedFrom__pred__modecheck_coerce_from_bound_make_bound_functor_not_existq__572__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))));
  return succeeded;
}

static void MR_CALL 
check_hlds__modecheck_coerce__modecheck_coerce_from_bound_make_bound_functor_not_existq_12_p_0(
  MR_Word ModuleInfo_13,
  MR_Word TVarSet_14,
  MR_Word LiveX_15,
  MR_Word RevTermPath0_16,
  MR_Word TypeX_17,
  MR_Word TypeY_18,
  MR_Word ExpandedInsts0_19,
  MR_Word ConsIdX_20,
  MR_Word ArgInstsX0_21,
  MR_Word * MaybeBoundFunctorY_22,
  MR_Word STATE_VARIABLE_Errors_0_47,
  MR_Word * STATE_VARIABLE_Errors_48)
{
  MR_bool succeeded;

  switch (MR_tag((MR_Word) ConsIdX_20)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      {
        MR_Word DuCtorX_24 = (MR_Word) (MR_body((MR_Word) (ConsIdX_20), (MR_Integer) 1));
        MR_Word DuCtorY_25;
        MR_Word GetConsArgsResult_26;
        MR_Word ConsIdY_27;

        check_hlds__modecheck_coerce__get_bound_functor_cons_and_arg_types_6_p_0(ModuleInfo_13, TypeX_17, TypeY_18, DuCtorX_24, &DuCtorY_25, &GetConsArgsResult_26);
        ConsIdY_27 = (MR_Word) (MR_mkword(1, (MR_Word) (DuCtorY_25)));
        switch (MR_tag((MR_Word) GetConsArgsResult_26)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            switch (MR_unmkbody(GetConsArgsResult_26)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word Var_52;

                  {
                    Var_52 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(0, Var_52, 0) = ((MR_Box) (ConsIdX_20));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                    *MaybeBoundFunctorY_22 = base;
                    MR_hl_field(2, base, 0) = ((MR_Box) (Var_52));
                  }
                  *STATE_VARIABLE_Errors_48 = STATE_VARIABLE_Errors_0_47;
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word Var_53;

                  {
                    Var_53 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(2, Var_53, 0) = ((MR_Box) (ConsIdY_27));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                    *MaybeBoundFunctorY_22 = base;
                    MR_hl_field(2, base, 0) = ((MR_Box) (Var_53));
                  }
                  *STATE_VARIABLE_Errors_48 = STATE_VARIABLE_Errors_0_47;
                }
                break;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word ArgTypesX_29 = ((MR_Word) ((MR_hl_field(1, GetConsArgsResult_26, (MR_Integer) 0))));
              MR_Word ArgTypesY_30 = ((MR_Word) ((MR_hl_field(1, GetConsArgsResult_26, (MR_Integer) 1))));
              MR_Integer Arity_31 = ((MR_Integer) ((MR_hl_field(1, GetConsArgsResult_26, (MR_Integer) 2))));
              MR_Word ConsExistQTVars_32 = ((MR_Word) ((MR_hl_field(1, GetConsArgsResult_26, (MR_Integer) 3))));
              MR_Integer NumExtraArgs_33 = ((MR_Integer) ((MR_hl_field(1, GetConsArgsResult_26, (MR_Integer) 4))));
              MR_Word ExtraArgsInsts_34;
              MR_Word ArgInstsX_35;
              MR_Integer NumArgInstsX_36;

              mercury__list__det_split_list_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), NumExtraArgs_33, ArgInstsX0_21, &ExtraArgsInsts_34, &ArgInstsX_35);
              mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), ArgInstsX_35, &NumArgInstsX_36);
              succeeded = (NumArgInstsX_36 == Arity_31);
              if (succeeded)
              {
                MR_Word OkArgInstsY_37;
                MR_Word ErrorsY_38;

                check_hlds__modecheck_coerce__modecheck_coerce_from_bound_make_bound_functor_arg_insts_13_p_0(ModuleInfo_13, TVarSet_14, LiveX_15, RevTermPath0_16, ExpandedInsts0_19, ConsIdX_20, ConsExistQTVars_32, (MR_Integer) 1, ArgTypesX_29, ArgTypesY_30, ArgInstsX_35, &OkArgInstsY_37, &ErrorsY_38);
                if ((ErrorsY_38 == (MR_Word) ((MR_Unsigned) 0U)))
                {
                  MR_Word BoundFunctorY_39;
                  MR_Word Var_50;

                  Var_50 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), ExtraArgsInsts_34, OkArgInstsY_37);
                  {
                    BoundFunctorY_39 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(0, BoundFunctorY_39, 0) = ((MR_Box) (ConsIdY_27));
                    MR_hl_field(0, BoundFunctorY_39, 1) = ((MR_Box) (Var_50));
                  }
                  *MaybeBoundFunctorY_22 = (MR_Word) (MR_mkword(1, (MR_Word) (BoundFunctorY_39)));
                  *STATE_VARIABLE_Errors_48 = STATE_VARIABLE_Errors_0_47;
                }
                else
                {
                  *STATE_VARIABLE_Errors_48 = mercury__list__f_43_43_2_f_0((MR_Word) (&check_hlds__mode_errors__check_hlds__mode_errors__type_ctor_info_coerce_error_0), ErrorsY_38, STATE_VARIABLE_Errors_0_47);
                  *MaybeBoundFunctorY_22 = (MR_Word) ((MR_Unsigned) 0U);
                }
              }
              else
              {
                MR_Word ConsIdError_42;

                {
                  ConsIdError_42 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, ConsIdError_42, 0) = ((MR_Box) (ConsIdX_20));
                  MR_hl_field(1, ConsIdError_42, 1) = ((MR_Box) (NumArgInstsX_36));
                  MR_hl_field(1, ConsIdError_42, 2) = ((MR_Box) (Arity_31));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  *MaybeBoundFunctorY_22 = base;
                  MR_hl_field(2, base, 0) = ((MR_Box) (ConsIdError_42));
                }
                *STATE_VARIABLE_Errors_48 = STATE_VARIABLE_Errors_0_47;
              }
            }
            break;
        }
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, ConsIdX_20, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 4:
          {
            MR_Integer ConsArity_28 = ((MR_Integer) ((MR_hl_field(3, ConsIdX_20, (MR_Integer) 1))));
            MR_Word GetConsArgsResult_137;
            MR_Word ArgTypesX_151;
            MR_Word TypeCtorInfo_17_159;
            MR_Integer Var_161;

            succeeded = ((((MR_tag((MR_Word) TypeX_17)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, TypeX_17, (MR_Integer) 0)))) == (MR_Integer) 0)));
            if (succeeded)
            {
              ArgTypesX_151 = ((MR_Word) ((MR_hl_field(3, TypeX_17, (MR_Integer) 1))));
              TypeCtorInfo_17_159 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0);
              mercury__list__length_2_p_0(TypeCtorInfo_17_159, ArgTypesX_151, &Var_161);
              succeeded = (ConsArity_28 == Var_161);
            }
            if (succeeded)
            {
              MR_Word ArgTypesY_153;
              MR_Word TypeCtorInfo_18_160;
              MR_Integer Var_162;

              succeeded = ((((MR_tag((MR_Word) TypeY_18)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, TypeY_18, (MR_Integer) 0)))) == (MR_Integer) 0)));
              if (succeeded)
              {
                ArgTypesY_153 = ((MR_Word) ((MR_hl_field(3, TypeY_18, (MR_Integer) 1))));
                TypeCtorInfo_18_160 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0);
                mercury__list__length_2_p_0(TypeCtorInfo_18_160, ArgTypesY_153, &Var_162);
                succeeded = (ConsArity_28 == Var_162);
              }
              if (succeeded)
                {
                  GetConsArgsResult_137 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, GetConsArgsResult_137, 0) = ((MR_Box) (ArgTypesX_151));
                  MR_hl_field(1, GetConsArgsResult_137, 1) = ((MR_Box) (ArgTypesY_153));
                  MR_hl_field(1, GetConsArgsResult_137, 2) = ((MR_Box) (ConsArity_28));
                  MR_hl_field(1, GetConsArgsResult_137, 3) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(1, GetConsArgsResult_137, 4) = ((MR_Box) ((MR_Integer) 0));
                }
              else
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.modecheck_coerce.get_tuple_cons_arg_types\'/4", (MR_String) "tuple type mismatch");
                  return;
                }
            }
            else
              GetConsArgsResult_137 = (MR_Word) ((MR_Unsigned) 0U);
            if ((GetConsArgsResult_137 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              MR_Word Var_67;

              {
                Var_67 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_67, 0) = ((MR_Box) (ConsIdX_20));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                *MaybeBoundFunctorY_22 = base;
                MR_hl_field(2, base, 0) = ((MR_Box) (Var_67));
              }
              *STATE_VARIABLE_Errors_48 = STATE_VARIABLE_Errors_0_47;
            }
            else
            {
              MR_Word ArgTypesX_99 = ((MR_Word) ((MR_hl_field(1, GetConsArgsResult_137, (MR_Integer) 0))));
              MR_Word ArgTypesY_100 = ((MR_Word) ((MR_hl_field(1, GetConsArgsResult_137, (MR_Integer) 1))));
              MR_Integer Arity_101 = ((MR_Integer) ((MR_hl_field(1, GetConsArgsResult_137, (MR_Integer) 2))));
              MR_Word ConsExistQTVars_102 = ((MR_Word) ((MR_hl_field(1, GetConsArgsResult_137, (MR_Integer) 3))));
              MR_Integer NumExtraArgs_103 = ((MR_Integer) ((MR_hl_field(1, GetConsArgsResult_137, (MR_Integer) 4))));
              MR_Word ExtraArgsInsts_104;
              MR_Word ArgInstsX_105;
              MR_Integer NumArgInstsX_106;

              mercury__list__det_split_list_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), NumExtraArgs_103, ArgInstsX0_21, &ExtraArgsInsts_104, &ArgInstsX_105);
              mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), ArgInstsX_105, &NumArgInstsX_106);
              succeeded = (NumArgInstsX_106 == Arity_101);
              if (succeeded)
              {
                MR_Word OkArgInstsY_81;
                MR_Word ErrorsY_82;

                check_hlds__modecheck_coerce__modecheck_coerce_from_bound_make_bound_functor_arg_insts_13_p_0(ModuleInfo_13, TVarSet_14, LiveX_15, RevTermPath0_16, ExpandedInsts0_19, ConsIdX_20, ConsExistQTVars_102, (MR_Integer) 1, ArgTypesX_99, ArgTypesY_100, ArgInstsX_105, &OkArgInstsY_81, &ErrorsY_82);
                if ((ErrorsY_82 == (MR_Word) ((MR_Unsigned) 0U)))
                {
                  MR_Word BoundFunctorY_69;
                  MR_Word Var_70;

                  Var_70 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), ExtraArgsInsts_104, OkArgInstsY_81);
                  {
                    BoundFunctorY_69 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(0, BoundFunctorY_69, 0) = ((MR_Box) (ConsIdX_20));
                    MR_hl_field(0, BoundFunctorY_69, 1) = ((MR_Box) (Var_70));
                  }
                  *MaybeBoundFunctorY_22 = (MR_Word) (MR_mkword(1, (MR_Word) (BoundFunctorY_69)));
                  *STATE_VARIABLE_Errors_48 = STATE_VARIABLE_Errors_0_47;
                }
                else
                {
                  *STATE_VARIABLE_Errors_48 = mercury__list__f_43_43_2_f_0((MR_Word) (&check_hlds__mode_errors__check_hlds__mode_errors__type_ctor_info_coerce_error_0), ErrorsY_82, STATE_VARIABLE_Errors_0_47);
                  *MaybeBoundFunctorY_22 = (MR_Word) ((MR_Unsigned) 0U);
                }
              }
              else
              {
                MR_Word ConsIdError_89;

                {
                  ConsIdError_89 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, ConsIdError_89, 0) = ((MR_Box) (ConsIdX_20));
                  MR_hl_field(1, ConsIdError_89, 1) = ((MR_Box) (NumArgInstsX_106));
                  MR_hl_field(1, ConsIdError_89, 2) = ((MR_Box) (Arity_101));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  *MaybeBoundFunctorY_22 = base;
                  MR_hl_field(2, base, 0) = ((MR_Box) (ConsIdError_89));
                }
                *STATE_VARIABLE_Errors_48 = STATE_VARIABLE_Errors_0_47;
              }
            }
          }
          break;
        case (MR_Integer) 5:
          {
            MR_Word IC_138 = ((MR_Word) ((MR_hl_field(3, ConsIdX_20, (MR_Integer) 1))));
            MR_Word Var_142;
            MR_Word Var_143;
            MR_Word Var_144;

            succeeded = ((MR_tag((MR_Word) TypeX_17)) == (MR_Integer) 2);
            if (succeeded)
            {
              Var_142 = ((MR_Word) ((MR_hl_field(2, TypeX_17, (MR_Integer) 0))));
              succeeded = ((MR_tag((MR_Word) Var_142)) == (MR_Integer) 1);
              if (succeeded)
              {
                Var_143 = ((MR_Unsigned) ((MR_hl_field(1, Var_142, (MR_Integer) 0))) & (MR_Integer) 15);
                Var_144 = parse_tree__prog_data__type_of_int_const_1_f_0(IC_138);
                succeeded = (Var_143 == Var_144);
              }
            }
            if (succeeded)
            {
              MR_Word Var_190;
              MR_Word Var_193;
              MR_Word BoundFunctorY_197;

              {
                Var_190 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_190, 0) = ((MR_Box) (&check_hlds__modecheck_coerce_scalar_common_4[2]));
                MR_hl_field(0, Var_190, 1) = ((MR_Box) (check_hlds__modecheck_coerce__modecheck_coerce_from_bound_make_bound_functor_not_existq_12_p_0_5));
                MR_hl_field(0, Var_190, 2) = ((MR_Box) ((MR_Integer) 2));
                MR_hl_field(0, Var_190, 3) = ((MR_Box) (TypeX_17));
                MR_hl_field(0, Var_190, 4) = ((MR_Box) (TypeY_18));
              }
              mercury__require__expect_3_p_0(Var_190, (MR_String) "predicate \140check_hlds.modecheck_coerce.modecheck_coerce_from_bound_make_bound_functor_not_existq\'/12", (MR_String) "coercion between different builtin types");
              {
                Var_193 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_193, 0) = ((MR_Box) (&check_hlds__modecheck_coerce_scalar_common_4[4]));
                MR_hl_field(0, Var_193, 1) = ((MR_Box) (check_hlds__modecheck_coerce__modecheck_coerce_from_bound_make_bound_functor_not_existq_12_p_0_6));
                MR_hl_field(0, Var_193, 2) = ((MR_Box) ((MR_Integer) 2));
                MR_hl_field(0, Var_193, 3) = ((MR_Box) (ArgInstsX0_21));
                MR_hl_field(0, Var_193, 4) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              mercury__require__expect_3_p_0(Var_193, (MR_String) "predicate \140check_hlds.modecheck_coerce.modecheck_coerce_from_bound_make_bound_functor_not_existq\'/12", (MR_String) "bound functor literal has arguments");
              {
                BoundFunctorY_197 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, BoundFunctorY_197, 0) = ((MR_Box) (ConsIdX_20));
                MR_hl_field(0, BoundFunctorY_197, 1) = ((MR_Box) (ArgInstsX0_21));
              }
              *MaybeBoundFunctorY_22 = (MR_Word) (MR_mkword(1, (MR_Word) (BoundFunctorY_197)));
            }
            else
            {
              MR_Word Var_198;

              {
                Var_198 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_198, 0) = ((MR_Box) (ConsIdX_20));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                *MaybeBoundFunctorY_22 = base;
                MR_hl_field(2, base, 0) = ((MR_Box) (Var_198));
              }
            }
            *STATE_VARIABLE_Errors_48 = STATE_VARIABLE_Errors_0_47;
          }
          break;
        case (MR_Integer) 6:
          {
            MR_Word Var_145;

            Var_145 = parse_tree__builtin_lib_types__float_type_0_f_0();
            succeeded = parse_tree__prog_data____Unify____mer_type_0_0(TypeX_17, Var_145);
            if (succeeded)
            {
              MR_Word Var_163;
              MR_Word Var_166;
              MR_Word BoundFunctorY_170;

              {
                Var_163 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_163, 0) = ((MR_Box) (&check_hlds__modecheck_coerce_scalar_common_4[2]));
                MR_hl_field(0, Var_163, 1) = ((MR_Box) (check_hlds__modecheck_coerce__modecheck_coerce_from_bound_make_bound_functor_not_existq_12_p_0_3));
                MR_hl_field(0, Var_163, 2) = ((MR_Box) ((MR_Integer) 2));
                MR_hl_field(0, Var_163, 3) = ((MR_Box) (TypeX_17));
                MR_hl_field(0, Var_163, 4) = ((MR_Box) (TypeY_18));
              }
              mercury__require__expect_3_p_0(Var_163, (MR_String) "predicate \140check_hlds.modecheck_coerce.modecheck_coerce_from_bound_make_bound_functor_not_existq\'/12", (MR_String) "coercion between different builtin types");
              {
                Var_166 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_166, 0) = ((MR_Box) (&check_hlds__modecheck_coerce_scalar_common_4[4]));
                MR_hl_field(0, Var_166, 1) = ((MR_Box) (check_hlds__modecheck_coerce__modecheck_coerce_from_bound_make_bound_functor_not_existq_12_p_0_4));
                MR_hl_field(0, Var_166, 2) = ((MR_Box) ((MR_Integer) 2));
                MR_hl_field(0, Var_166, 3) = ((MR_Box) (ArgInstsX0_21));
                MR_hl_field(0, Var_166, 4) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              mercury__require__expect_3_p_0(Var_166, (MR_String) "predicate \140check_hlds.modecheck_coerce.modecheck_coerce_from_bound_make_bound_functor_not_existq\'/12", (MR_String) "bound functor literal has arguments");
              {
                BoundFunctorY_170 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, BoundFunctorY_170, 0) = ((MR_Box) (ConsIdX_20));
                MR_hl_field(0, BoundFunctorY_170, 1) = ((MR_Box) (ArgInstsX0_21));
              }
              *MaybeBoundFunctorY_22 = (MR_Word) (MR_mkword(1, (MR_Word) (BoundFunctorY_170)));
            }
            else
            {
              MR_Word Var_171;

              {
                Var_171 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_171, 0) = ((MR_Box) (ConsIdX_20));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                *MaybeBoundFunctorY_22 = base;
                MR_hl_field(2, base, 0) = ((MR_Box) (Var_171));
              }
            }
            *STATE_VARIABLE_Errors_48 = STATE_VARIABLE_Errors_0_47;
          }
          break;
        case (MR_Integer) 7:
          {
            MR_Word Var_146;

            Var_146 = parse_tree__builtin_lib_types__char_type_0_f_0();
            succeeded = parse_tree__prog_data____Unify____mer_type_0_0(TypeX_17, Var_146);
            if (succeeded)
            {
              MR_Word Var_54;
              MR_Word Var_57;
              MR_Word BoundFunctorY_62;

              {
                Var_54 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_54, 0) = ((MR_Box) (&check_hlds__modecheck_coerce_scalar_common_4[2]));
                MR_hl_field(0, Var_54, 1) = ((MR_Box) (check_hlds__modecheck_coerce__modecheck_coerce_from_bound_make_bound_functor_not_existq_12_p_0_1));
                MR_hl_field(0, Var_54, 2) = ((MR_Box) ((MR_Integer) 2));
                MR_hl_field(0, Var_54, 3) = ((MR_Box) (TypeX_17));
                MR_hl_field(0, Var_54, 4) = ((MR_Box) (TypeY_18));
              }
              mercury__require__expect_3_p_0(Var_54, (MR_String) "predicate \140check_hlds.modecheck_coerce.modecheck_coerce_from_bound_make_bound_functor_not_existq\'/12", (MR_String) "coercion between different builtin types");
              {
                Var_57 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_57, 0) = ((MR_Box) (&check_hlds__modecheck_coerce_scalar_common_4[4]));
                MR_hl_field(0, Var_57, 1) = ((MR_Box) (check_hlds__modecheck_coerce__modecheck_coerce_from_bound_make_bound_functor_not_existq_12_p_0_2));
                MR_hl_field(0, Var_57, 2) = ((MR_Box) ((MR_Integer) 2));
                MR_hl_field(0, Var_57, 3) = ((MR_Box) (ArgInstsX0_21));
                MR_hl_field(0, Var_57, 4) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              mercury__require__expect_3_p_0(Var_57, (MR_String) "predicate \140check_hlds.modecheck_coerce.modecheck_coerce_from_bound_make_bound_functor_not_existq\'/12", (MR_String) "bound functor literal has arguments");
              {
                BoundFunctorY_62 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, BoundFunctorY_62, 0) = ((MR_Box) (ConsIdX_20));
                MR_hl_field(0, BoundFunctorY_62, 1) = ((MR_Box) (ArgInstsX0_21));
              }
              *MaybeBoundFunctorY_22 = (MR_Word) (MR_mkword(1, (MR_Word) (BoundFunctorY_62)));
            }
            else
            {
              MR_Word Var_61;

              {
                Var_61 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_61, 0) = ((MR_Box) (ConsIdX_20));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                *MaybeBoundFunctorY_22 = base;
                MR_hl_field(2, base, 0) = ((MR_Box) (Var_61));
              }
            }
            *STATE_VARIABLE_Errors_48 = STATE_VARIABLE_Errors_0_47;
          }
          break;
        case (MR_Integer) 8:
          {
            MR_Word Var_147;

            Var_147 = parse_tree__builtin_lib_types__string_type_0_f_0();
            succeeded = parse_tree__prog_data____Unify____mer_type_0_0(TypeX_17, Var_147);
            if (succeeded)
            {
              MR_Word Var_217;
              MR_Word Var_220;
              MR_Word BoundFunctorY_224;

              {
                Var_217 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_217, 0) = ((MR_Box) (&check_hlds__modecheck_coerce_scalar_common_4[2]));
                MR_hl_field(0, Var_217, 1) = ((MR_Box) (check_hlds__modecheck_coerce__modecheck_coerce_from_bound_make_bound_functor_not_existq_12_p_0_7));
                MR_hl_field(0, Var_217, 2) = ((MR_Box) ((MR_Integer) 2));
                MR_hl_field(0, Var_217, 3) = ((MR_Box) (TypeX_17));
                MR_hl_field(0, Var_217, 4) = ((MR_Box) (TypeY_18));
              }
              mercury__require__expect_3_p_0(Var_217, (MR_String) "predicate \140check_hlds.modecheck_coerce.modecheck_coerce_from_bound_make_bound_functor_not_existq\'/12", (MR_String) "coercion between different builtin types");
              {
                Var_220 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_220, 0) = ((MR_Box) (&check_hlds__modecheck_coerce_scalar_common_4[4]));
                MR_hl_field(0, Var_220, 1) = ((MR_Box) (check_hlds__modecheck_coerce__modecheck_coerce_from_bound_make_bound_functor_not_existq_12_p_0_8));
                MR_hl_field(0, Var_220, 2) = ((MR_Box) ((MR_Integer) 2));
                MR_hl_field(0, Var_220, 3) = ((MR_Box) (ArgInstsX0_21));
                MR_hl_field(0, Var_220, 4) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              mercury__require__expect_3_p_0(Var_220, (MR_String) "predicate \140check_hlds.modecheck_coerce.modecheck_coerce_from_bound_make_bound_functor_not_existq\'/12", (MR_String) "bound functor literal has arguments");
              {
                BoundFunctorY_224 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, BoundFunctorY_224, 0) = ((MR_Box) (ConsIdX_20));
                MR_hl_field(0, BoundFunctorY_224, 1) = ((MR_Box) (ArgInstsX0_21));
              }
              *MaybeBoundFunctorY_22 = (MR_Word) (MR_mkword(1, (MR_Word) (BoundFunctorY_224)));
            }
            else
            {
              MR_Word Var_225;

              {
                Var_225 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_225, 0) = ((MR_Box) (ConsIdX_20));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                *MaybeBoundFunctorY_22 = base;
                MR_hl_field(2, base, 0) = ((MR_Box) (Var_225));
              }
            }
            *STATE_VARIABLE_Errors_48 = STATE_VARIABLE_Errors_0_47;
          }
          break;
      }
      break;
  }
}

static void MR_CALL 
check_hlds__modecheck_coerce__modecheck_coerce_from_bound_make_bound_functors_13_p_0(
  MR_Word ModuleInfo_14,
  MR_Word TVarSet_15,
  MR_Word LiveX_16,
  MR_Word ConsExistQTVars_17,
  MR_Word RevTermPath0_18,
  MR_Word TypeX_19,
  MR_Word TypeY_20,
  MR_Word ExpandedInsts0_21,
  MR_Word BoundFunctorsX_22,
  MR_Word * BoundFunctorsY_23,
  MR_Word * BadConsIdErrors_24,
  MR_Word STATE_VARIABLE_Errors_0_33,
  MR_Word * STATE_VARIABLE_Errors_34)
{
  MR_bool succeeded;

  if ((BoundFunctorsX_22 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *BoundFunctorsY_23 = (MR_Word) ((MR_Unsigned) 0U);
    *BadConsIdErrors_24 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_Errors_34 = STATE_VARIABLE_Errors_0_33;
  }
  else
  {
    MR_Word HeadBoundFunctorX_26 = ((MR_Word) ((MR_hl_field(1, BoundFunctorsX_22, (MR_Integer) 0))));
    MR_Word TailBoundFunctorsX_27 = ((MR_Word) ((MR_hl_field(1, BoundFunctorsX_22, (MR_Integer) 1))));
    MR_Word ConsIdX_36 = ((MR_Word) ((MR_hl_field(0, HeadBoundFunctorX_26, (MR_Integer) 0))));
    MR_Word ArgInstsX_37 = ((MR_Word) ((MR_hl_field(0, HeadBoundFunctorX_26, (MR_Integer) 1))));

    switch (MR_tag((MR_Word) ConsIdX_36)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
      case (MR_Integer) 2:
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.modecheck_coerce.modecheck_coerce_from_bound_make_bound_functor\'/12", (MR_String) "unsupported cons_id");
          return;
        }
        break;
      case (MR_Integer) 1:
        {
          succeeded = check_hlds__modecheck_coerce__existq_tvars_contains_2_p_0(ConsExistQTVars_17, TypeX_19);
          if (succeeded)
          {
            MR_Word TailBoundFunctorsY_29;
            MR_Word HeadBoundFunctorY_31;

            check_hlds__modecheck_coerce__copy_bound_functor_for_coerce_result_3_p_0(LiveX_16, HeadBoundFunctorX_26, &HeadBoundFunctorY_31);
            check_hlds__modecheck_coerce__modecheck_coerce_from_bound_make_bound_functors_13_p_0(ModuleInfo_14, TVarSet_15, LiveX_16, ConsExistQTVars_17, RevTermPath0_18, TypeX_19, TypeY_20, ExpandedInsts0_21, TailBoundFunctorsX_27, &TailBoundFunctorsY_29, BadConsIdErrors_24, STATE_VARIABLE_Errors_0_33, STATE_VARIABLE_Errors_34);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *BoundFunctorsY_23 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (HeadBoundFunctorY_31));
              MR_hl_field(1, base, 1) = ((MR_Box) (TailBoundFunctorsY_29));
            }
          }
          else
          {
            MR_Word MaybeHeadBoundFunctorY_66;
            MR_Word TailBoundFunctorsY_67;
            MR_Word TailBadConsIdErrors_68;
            MR_Word STATE_VARIABLE_Errors_35_70;

            check_hlds__modecheck_coerce__modecheck_coerce_from_bound_make_bound_functor_not_existq_12_p_0(ModuleInfo_14, TVarSet_15, LiveX_16, RevTermPath0_18, TypeX_19, TypeY_20, ExpandedInsts0_21, ConsIdX_36, ArgInstsX_37, &MaybeHeadBoundFunctorY_66, STATE_VARIABLE_Errors_0_33, &STATE_VARIABLE_Errors_35_70);
            check_hlds__modecheck_coerce__modecheck_coerce_from_bound_make_bound_functors_13_p_0(ModuleInfo_14, TVarSet_15, LiveX_16, ConsExistQTVars_17, RevTermPath0_18, TypeX_19, TypeY_20, ExpandedInsts0_21, TailBoundFunctorsX_27, &TailBoundFunctorsY_67, &TailBadConsIdErrors_68, STATE_VARIABLE_Errors_35_70, STATE_VARIABLE_Errors_34);
            switch (MR_tag((MR_Word) MaybeHeadBoundFunctorY_66)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  *BoundFunctorsY_23 = TailBoundFunctorsY_67;
                  *BadConsIdErrors_24 = TailBadConsIdErrors_68;
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word HeadBoundFunctorY_64 = (MR_Word) (MR_body((MR_Word) (MaybeHeadBoundFunctorY_66), (MR_Integer) 1));

                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    *BoundFunctorsY_23 = base;
                    MR_hl_field(1, base, 0) = ((MR_Box) (HeadBoundFunctorY_64));
                    MR_hl_field(1, base, 1) = ((MR_Box) (TailBoundFunctorsY_67));
                  }
                  *BadConsIdErrors_24 = TailBadConsIdErrors_68;
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word HeadBadConsIdError_32 = ((MR_Word) ((MR_hl_field(2, MaybeHeadBoundFunctorY_66, (MR_Integer) 0))));

                  *BoundFunctorsY_23 = TailBoundFunctorsY_67;
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    *BadConsIdErrors_24 = base;
                    MR_hl_field(1, base, 0) = ((MR_Box) (HeadBadConsIdError_32));
                    MR_hl_field(1, base, 1) = ((MR_Box) (TailBadConsIdErrors_68));
                  }
                }
                break;
            }
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, ConsIdX_36, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 1:
          case (MR_Integer) 2:
          case (MR_Integer) 3:
          case (MR_Integer) 9:
          case (MR_Integer) 10:
          case (MR_Integer) 11:
          case (MR_Integer) 12:
          case (MR_Integer) 13:
          case (MR_Integer) 14:
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.modecheck_coerce.modecheck_coerce_from_bound_make_bound_functor\'/12", (MR_String) "unsupported cons_id");
              return;
            }
            break;
          case (MR_Integer) 4:
          case (MR_Integer) 5:
          case (MR_Integer) 6:
          case (MR_Integer) 7:
          case (MR_Integer) 8:
            {
              succeeded = check_hlds__modecheck_coerce__existq_tvars_contains_2_p_0(ConsExistQTVars_17, TypeX_19);
              if (succeeded)
              {
                MR_Word TailBoundFunctorsY_29;
                MR_Word HeadBoundFunctorY_31;

                check_hlds__modecheck_coerce__copy_bound_functor_for_coerce_result_3_p_0(LiveX_16, HeadBoundFunctorX_26, &HeadBoundFunctorY_31);
                check_hlds__modecheck_coerce__modecheck_coerce_from_bound_make_bound_functors_13_p_0(ModuleInfo_14, TVarSet_15, LiveX_16, ConsExistQTVars_17, RevTermPath0_18, TypeX_19, TypeY_20, ExpandedInsts0_21, TailBoundFunctorsX_27, &TailBoundFunctorsY_29, BadConsIdErrors_24, STATE_VARIABLE_Errors_0_33, STATE_VARIABLE_Errors_34);
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  *BoundFunctorsY_23 = base;
                  MR_hl_field(1, base, 0) = ((MR_Box) (HeadBoundFunctorY_31));
                  MR_hl_field(1, base, 1) = ((MR_Box) (TailBoundFunctorsY_29));
                }
              }
              else
              {
                MR_Word MaybeHeadBoundFunctorY_66;
                MR_Word TailBoundFunctorsY_67;
                MR_Word TailBadConsIdErrors_68;
                MR_Word STATE_VARIABLE_Errors_35_70;

                check_hlds__modecheck_coerce__modecheck_coerce_from_bound_make_bound_functor_not_existq_12_p_0(ModuleInfo_14, TVarSet_15, LiveX_16, RevTermPath0_18, TypeX_19, TypeY_20, ExpandedInsts0_21, ConsIdX_36, ArgInstsX_37, &MaybeHeadBoundFunctorY_66, STATE_VARIABLE_Errors_0_33, &STATE_VARIABLE_Errors_35_70);
                check_hlds__modecheck_coerce__modecheck_coerce_from_bound_make_bound_functors_13_p_0(ModuleInfo_14, TVarSet_15, LiveX_16, ConsExistQTVars_17, RevTermPath0_18, TypeX_19, TypeY_20, ExpandedInsts0_21, TailBoundFunctorsX_27, &TailBoundFunctorsY_67, &TailBadConsIdErrors_68, STATE_VARIABLE_Errors_35_70, STATE_VARIABLE_Errors_34);
                switch (MR_tag((MR_Word) MaybeHeadBoundFunctorY_66)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      *BoundFunctorsY_23 = TailBoundFunctorsY_67;
                      *BadConsIdErrors_24 = TailBadConsIdErrors_68;
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Word HeadBoundFunctorY_64 = (MR_Word) (MR_body((MR_Word) (MaybeHeadBoundFunctorY_66), (MR_Integer) 1));

                      {
                        MR_Word base;
                        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        *BoundFunctorsY_23 = base;
                        MR_hl_field(1, base, 0) = ((MR_Box) (HeadBoundFunctorY_64));
                        MR_hl_field(1, base, 1) = ((MR_Box) (TailBoundFunctorsY_67));
                      }
                      *BadConsIdErrors_24 = TailBadConsIdErrors_68;
                    }
                    break;
                  case (MR_Integer) 2:
                    {
                      MR_Word HeadBadConsIdError_32 = ((MR_Word) ((MR_hl_field(2, MaybeHeadBoundFunctorY_66, (MR_Integer) 0))));

                      *BoundFunctorsY_23 = TailBoundFunctorsY_67;
                      {
                        MR_Word base;
                        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        *BadConsIdErrors_24 = base;
                        MR_hl_field(1, base, 0) = ((MR_Box) (HeadBadConsIdError_32));
                        MR_hl_field(1, base, 1) = ((MR_Box) (TailBadConsIdErrors_68));
                      }
                    }
                    break;
                }
              }
            }
            break;
        }
        break;
    }
  }
}

static MR_bool MR_CALL 
check_hlds__modecheck_coerce__is_subtype_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word TVarSet_6,
  MR_Word TypeA_7,
  MR_Word TypeB_8)
{
  MR_bool succeeded;
  MR_Word TypeTable_9;

  hlds__hlds_module__module_info_get_type_table_2_p_0(ModuleInfo_5, &TypeTable_9);
  succeeded = ((MR_tag((MR_Word) TypeA_7)) == (MR_Integer) 0);
  if (succeeded)
  {
  }
  if (!(succeeded))
  {
    succeeded = ((MR_tag((MR_Word) TypeB_8)) == (MR_Integer) 0);
    if (succeeded)
    {
    }
  }
  if (succeeded)
    succeeded = parse_tree__prog_data____Unify____mer_type_0_0(TypeA_7, TypeB_8);
  else
    switch (MR_tag((MR_Word) TypeA_7)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_String Var_39;
          MR_String Var_40;

          succeeded = ((MR_tag((MR_Word) TypeB_8)) == (MR_Integer) 0);
          if (succeeded)
          {
            Var_39 = (MR_String) "predicate \140check_hlds.modecheck_coerce.compare_types_nonvar\'/5";
            Var_40 = (MR_String) "type_variable";
            mercury__require__unexpected_2_p_0(Var_39, Var_40);
            succeeded = MR_TRUE;
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word TypeCtorA_24;
          MR_Word ArgsA_25;
          MR_Word TypeCtorB_26;
          MR_Word ArgsB_27;

          succeeded = parse_tree__prog_type__type_to_ctor_and_args_3_p_0(TypeA_7, &TypeCtorA_24, &ArgsA_25);
          if (succeeded)
          {
            succeeded = parse_tree__prog_type__type_to_ctor_and_args_3_p_0(TypeB_8, &TypeCtorB_26, &ArgsB_27);
            if (succeeded)
            {
              succeeded = parse_tree__prog_data____Unify____type_ctor_0_0(TypeCtorA_24, TypeCtorB_26);
              if (succeeded)
                succeeded = check_hlds__modecheck_coerce__compare_types_corresponding_5_p_0(TypeTable_9, TVarSet_6, (MR_Integer) 1, ArgsA_25, ArgsB_27);
              else
              {
                MR_Word SuperTypeA_28;

                succeeded = MR_TRUE;
                if (succeeded)
                {
                  succeeded = check_hlds__type_util__get_supertype_5_p_0(TypeTable_9, TVarSet_6, TypeCtorA_24, ArgsA_25, &SuperTypeA_28);
                  if (succeeded)
                    succeeded = check_hlds__modecheck_coerce__compare_types_5_p_0(TypeTable_9, TVarSet_6, (MR_Integer) 1, SuperTypeA_28, TypeB_8);
                }
              }
            }
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word BuiltinType_16 = ((MR_Word) ((MR_hl_field(2, TypeA_7, (MR_Integer) 0))));
          MR_Word Var_49;

          succeeded = ((MR_tag((MR_Word) TypeB_8)) == (MR_Integer) 2);
          if (succeeded)
          {
            Var_49 = ((MR_Word) ((MR_hl_field(2, TypeB_8, (MR_Integer) 0))));
            succeeded = parse_tree__prog_data____Unify____builtin_type_0_0(BuiltinType_16, Var_49);
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, TypeA_7, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word Kind_29 = ((MR_Word) ((MR_hl_field(3, TypeA_7, (MR_Integer) 2))));
              MR_Word ArgsA_44 = ((MR_Word) ((MR_hl_field(3, TypeA_7, (MR_Integer) 1))));
              MR_Word ArgsB_45;
              MR_Word Var_50;

              succeeded = ((((MR_tag((MR_Word) TypeB_8)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, TypeB_8, (MR_Integer) 0)))) == (MR_Integer) 0)));
              if (succeeded)
              {
                ArgsB_45 = ((MR_Word) ((MR_hl_field(3, TypeB_8, (MR_Integer) 1))));
                Var_50 = ((MR_Word) ((MR_hl_field(3, TypeB_8, (MR_Integer) 2))));
                succeeded = parse_tree__prog_data____Unify____kind_0_0(Kind_29, Var_50);
                if (succeeded)
                  succeeded = check_hlds__modecheck_coerce__compare_types_corresponding_5_p_0(TypeTable_9, TVarSet_6, (MR_Integer) 1, ArgsA_44, ArgsB_45);
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word PredOrFunc_30 = ((MR_Unsigned) ((MR_hl_field(3, TypeA_7, (MR_Integer) 1))) & (MR_Integer) 1);
              MR_Word Purity_32 = ((MR_Unsigned) ((MR_hl_field(3, TypeA_7, (MR_Integer) 4))) & (MR_Integer) 3);
              MR_Word Var_41;
              MR_Word ArgsA_46 = ((MR_Word) ((MR_hl_field(3, TypeA_7, (MR_Integer) 2))));
              MR_Word ArgsB_47;
              MR_Word Var_51;
              MR_Word Var_52;

              succeeded = ((((MR_tag((MR_Word) TypeB_8)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, TypeB_8, (MR_Integer) 0)))) == (MR_Integer) 1)));
              if (succeeded)
              {
                Var_51 = ((MR_Unsigned) ((MR_hl_field(3, TypeB_8, (MR_Integer) 1))) & (MR_Integer) 1);
                ArgsB_47 = ((MR_Word) ((MR_hl_field(3, TypeB_8, (MR_Integer) 2))));
                Var_52 = ((MR_Unsigned) ((MR_hl_field(3, TypeB_8, (MR_Integer) 4))) & (MR_Integer) 3);
                succeeded = (PredOrFunc_30 == Var_51);
                if (succeeded)
                {
                  succeeded = (Purity_32 == Var_52);
                  if (succeeded)
                  {
                    Var_41 = (MR_Integer) 0;
                    succeeded = check_hlds__modecheck_coerce__compare_types_corresponding_5_p_0(TypeTable_9, TVarSet_6, Var_41, ArgsA_46, ArgsB_47);
                  }
                }
              }
            }
            break;
          case (MR_Integer) 2:
            {
              mercury__require__sorry_2_p_0((MR_String) "predicate \140check_hlds.modecheck_coerce.compare_types_nonvar\'/5", (MR_String) "apply_n_type");
              succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word TypeA1_37 = ((MR_Word) ((MR_hl_field(3, TypeA_7, (MR_Integer) 1))));
              MR_Word TypeB1_38;
              MR_Word Kind_48 = ((MR_Word) ((MR_hl_field(3, TypeA_7, (MR_Integer) 2))));
              MR_Word Var_53;

              succeeded = ((((MR_tag((MR_Word) TypeB_8)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, TypeB_8, (MR_Integer) 0)))) == (MR_Integer) 3)));
              if (succeeded)
              {
                TypeB1_38 = ((MR_Word) ((MR_hl_field(3, TypeB_8, (MR_Integer) 1))));
                Var_53 = ((MR_Word) ((MR_hl_field(3, TypeB_8, (MR_Integer) 2))));
                succeeded = parse_tree__prog_data____Unify____kind_0_0(Kind_48, Var_53);
                if (succeeded)
                  succeeded = check_hlds__modecheck_coerce__compare_types_5_p_0(TypeTable_9, TVarSet_6, (MR_Integer) 1, TypeA1_37, TypeB1_38);
              }
            }
            break;
        }
        break;
    }
  return succeeded;
}

static void MR_CALL 
check_hlds__modecheck_coerce__modecheck_coerce_from_ground_make_inst_10_p_0(
  MR_Word ModuleInfo_11,
  MR_Word TVarSet_12,
  MR_Word LiveX_13,
  MR_Word UniqX_14,
  MR_Word ExistQTVars_15,
  MR_Word RevTermPath0_16,
  MR_Word TypeX_17,
  MR_Word TypeY_18,
  MR_Word InstX_19,
  MR_Word * MaybeInstY_20)
{
  MR_bool succeeded;

  succeeded = parse_tree__prog_data____Unify____mer_type_0_0(TypeX_17, TypeY_18);
  if (!(succeeded))
  {
    MR_Word TypeInfo_7_36;
    MR_Word TVar_34;

    succeeded = ((MR_tag((MR_Word) TypeX_17)) == (MR_Integer) 0);
    if (succeeded)
    {
      TVar_34 = ((MR_Word) ((MR_hl_field(0, TypeX_17, (MR_Integer) 0))));
      TypeInfo_7_36 = (MR_Word) (&check_hlds__modecheck_coerce_scalar_common_2[1]);
      succeeded = mercury__list__contains_2_p_0(TypeInfo_7_36, ExistQTVars_15, ((MR_Box) (TVar_34)));
    }
  }
  if (succeeded)
  {
    MR_Word UniqY_21;
    MR_Word InstY_22;

    switch (UniqX_14) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 3:
      case (MR_Integer) 4:
        {
          mercury__require__unexpected_2_p_0((MR_String) "function \140check_hlds.modecheck_coerce.uniqueness_for_coerce_result\'/2", (MR_String) "clobbered");
          return;
        }
        break;
      case (MR_Integer) 2:
      case (MR_Integer) 1:
        switch (LiveX_13) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            UniqY_21 = UniqX_14;
            break;
          case (MR_Integer) 0:
            UniqY_21 = (MR_Integer) 0;
            break;
        }
        break;
      case (MR_Integer) 0:
        UniqY_21 = (MR_Integer) 0;
        break;
    }
    {
      InstY_22 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, InstY_22, 0) = (MR_Box) ((MR_Unsigned) (UniqY_21));
      MR_hl_field(1, InstY_22, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *MaybeInstY_20 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (InstY_22));
    }
  }
  else
  {
    MR_Word TypeTable_39;

    hlds__hlds_module__module_info_get_type_table_2_p_0(ModuleInfo_11, &TypeTable_39);
    succeeded = ((MR_tag((MR_Word) TypeX_17)) == (MR_Integer) 0);
    if (succeeded)
    {
    }
    if (!(succeeded))
    {
      succeeded = ((MR_tag((MR_Word) TypeY_18)) == (MR_Integer) 0);
      if (succeeded)
      {
      }
    }
    if (succeeded)
      succeeded = parse_tree__prog_data____Unify____mer_type_0_0(TypeX_17, TypeY_18);
    else
      switch (MR_tag((MR_Word) TypeX_17)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_String Var_69;
            MR_String Var_70;

            succeeded = ((MR_tag((MR_Word) TypeY_18)) == (MR_Integer) 0);
            if (succeeded)
            {
              Var_69 = (MR_String) "predicate \140check_hlds.modecheck_coerce.compare_types_nonvar\'/5";
              Var_70 = (MR_String) "type_variable";
              {
                mercury__require__unexpected_2_p_0(Var_69, Var_70);
                return;
              }
              succeeded = MR_TRUE;
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word TypeCtorA_54;
            MR_Word ArgsA_55;
            MR_Word TypeCtorB_56;
            MR_Word ArgsB_57;

            succeeded = parse_tree__prog_type__type_to_ctor_and_args_3_p_0(TypeX_17, &TypeCtorA_54, &ArgsA_55);
            if (succeeded)
            {
              succeeded = parse_tree__prog_type__type_to_ctor_and_args_3_p_0(TypeY_18, &TypeCtorB_56, &ArgsB_57);
              if (succeeded)
              {
                succeeded = parse_tree__prog_data____Unify____type_ctor_0_0(TypeCtorA_54, TypeCtorB_56);
                if (succeeded)
                  succeeded = check_hlds__modecheck_coerce__compare_types_corresponding_5_p_0(TypeTable_39, TVarSet_12, (MR_Integer) 1, ArgsA_55, ArgsB_57);
                else
                {
                  MR_Word SuperTypeA_58;

                  succeeded = MR_TRUE;
                  if (succeeded)
                  {
                    succeeded = check_hlds__type_util__get_supertype_5_p_0(TypeTable_39, TVarSet_12, TypeCtorA_54, ArgsA_55, &SuperTypeA_58);
                    if (succeeded)
                      succeeded = check_hlds__modecheck_coerce__compare_types_5_p_0(TypeTable_39, TVarSet_12, (MR_Integer) 1, SuperTypeA_58, TypeY_18);
                  }
                }
              }
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word BuiltinType_46 = ((MR_Word) ((MR_hl_field(2, TypeX_17, (MR_Integer) 0))));
            MR_Word Var_79;

            succeeded = ((MR_tag((MR_Word) TypeY_18)) == (MR_Integer) 2);
            if (succeeded)
            {
              Var_79 = ((MR_Word) ((MR_hl_field(2, TypeY_18, (MR_Integer) 0))));
              succeeded = parse_tree__prog_data____Unify____builtin_type_0_0(BuiltinType_46, Var_79);
            }
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(3, TypeX_17, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word Kind_59 = ((MR_Word) ((MR_hl_field(3, TypeX_17, (MR_Integer) 2))));
                MR_Word ArgsA_74 = ((MR_Word) ((MR_hl_field(3, TypeX_17, (MR_Integer) 1))));
                MR_Word ArgsB_75;
                MR_Word Var_80;

                succeeded = ((((MR_tag((MR_Word) TypeY_18)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, TypeY_18, (MR_Integer) 0)))) == (MR_Integer) 0)));
                if (succeeded)
                {
                  ArgsB_75 = ((MR_Word) ((MR_hl_field(3, TypeY_18, (MR_Integer) 1))));
                  Var_80 = ((MR_Word) ((MR_hl_field(3, TypeY_18, (MR_Integer) 2))));
                  succeeded = parse_tree__prog_data____Unify____kind_0_0(Kind_59, Var_80);
                  if (succeeded)
                    succeeded = check_hlds__modecheck_coerce__compare_types_corresponding_5_p_0(TypeTable_39, TVarSet_12, (MR_Integer) 1, ArgsA_74, ArgsB_75);
                }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word PredOrFunc_60 = ((MR_Unsigned) ((MR_hl_field(3, TypeX_17, (MR_Integer) 1))) & (MR_Integer) 1);
                MR_Word Purity_62 = ((MR_Unsigned) ((MR_hl_field(3, TypeX_17, (MR_Integer) 4))) & (MR_Integer) 3);
                MR_Word Var_71;
                MR_Word ArgsA_76 = ((MR_Word) ((MR_hl_field(3, TypeX_17, (MR_Integer) 2))));
                MR_Word ArgsB_77;
                MR_Word Var_81;
                MR_Word Var_82;

                succeeded = ((((MR_tag((MR_Word) TypeY_18)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, TypeY_18, (MR_Integer) 0)))) == (MR_Integer) 1)));
                if (succeeded)
                {
                  Var_81 = ((MR_Unsigned) ((MR_hl_field(3, TypeY_18, (MR_Integer) 1))) & (MR_Integer) 1);
                  ArgsB_77 = ((MR_Word) ((MR_hl_field(3, TypeY_18, (MR_Integer) 2))));
                  Var_82 = ((MR_Unsigned) ((MR_hl_field(3, TypeY_18, (MR_Integer) 4))) & (MR_Integer) 3);
                  succeeded = (PredOrFunc_60 == Var_81);
                  if (succeeded)
                  {
                    succeeded = (Purity_62 == Var_82);
                    if (succeeded)
                    {
                      Var_71 = (MR_Integer) 0;
                      succeeded = check_hlds__modecheck_coerce__compare_types_corresponding_5_p_0(TypeTable_39, TVarSet_12, Var_71, ArgsA_76, ArgsB_77);
                    }
                  }
                }
              }
              break;
            case (MR_Integer) 2:
              {
                {
                  mercury__require__sorry_2_p_0((MR_String) "predicate \140check_hlds.modecheck_coerce.compare_types_nonvar\'/5", (MR_String) "apply_n_type");
                  return;
                }
                succeeded = MR_TRUE;
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Word TypeA1_67 = ((MR_Word) ((MR_hl_field(3, TypeX_17, (MR_Integer) 1))));
                MR_Word TypeB1_68;
                MR_Word Kind_78 = ((MR_Word) ((MR_hl_field(3, TypeX_17, (MR_Integer) 2))));
                MR_Word Var_83;

                succeeded = ((((MR_tag((MR_Word) TypeY_18)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, TypeY_18, (MR_Integer) 0)))) == (MR_Integer) 3)));
                if (succeeded)
                {
                  TypeB1_68 = ((MR_Word) ((MR_hl_field(3, TypeY_18, (MR_Integer) 1))));
                  Var_83 = ((MR_Word) ((MR_hl_field(3, TypeY_18, (MR_Integer) 2))));
                  succeeded = parse_tree__prog_data____Unify____kind_0_0(Kind_78, Var_83);
                  if (succeeded)
                    succeeded = check_hlds__modecheck_coerce__compare_types_5_p_0(TypeTable_39, TVarSet_12, (MR_Integer) 1, TypeA1_67, TypeB1_68);
                }
              }
              break;
          }
          break;
      }
    if (succeeded)
    {
      MR_Word SeenTypes0_23;
      MR_Word InstY_30;

      mercury__set__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), &SeenTypes0_23);
      check_hlds__modecheck_coerce__modecheck_coerce_from_ground_make_inst_for_subtype_8_p_0(ModuleInfo_11, TVarSet_12, LiveX_13, UniqX_14, SeenTypes0_23, TypeX_17, TypeY_18, &InstY_30);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *MaybeInstY_20 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (InstY_30));
      }
    }
    else
    {
      MR_Word TermPath_24;
      MR_Word Reason_25;
      MR_Word Error_26;
      MR_Word Var_28;

      mercury__list__reverse_2_p_0((MR_Word) (&check_hlds__mode_errors__check_hlds__mode_errors__type_ctor_info_coerce_error_term_path_step_0), RevTermPath0_16, &TermPath_24);
      {
        Reason_25 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(2, Reason_25, 0) = ((MR_Box) (InstX_19));
      }
      {
        Error_26 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Error_26, 0) = ((MR_Box) (TermPath_24));
        MR_hl_field(0, Error_26, 1) = ((MR_Box) (TypeX_17));
        MR_hl_field(0, Error_26, 2) = ((MR_Box) (TypeY_18));
        MR_hl_field(0, Error_26, 3) = ((MR_Box) (Reason_25));
      }
      {
        Var_28 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_28, 0) = ((MR_Box) (Error_26));
        MR_hl_field(1, Var_28, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeInstY_20 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (Var_28));
      }
    }
  }
}

static MR_bool MR_CALL 
check_hlds__modecheck_coerce__compare_types_5_p_0(
  MR_Word TypeTable_6,
  MR_Word TVarSet_7,
  MR_Word Comparison_8,
  MR_Word TypeA_9,
  MR_Word TypeB_10)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = ((MR_tag((MR_Word) TypeA_9)) == (MR_Integer) 0);

    // setup for model_semi tailcalls optimized into a loop
    ;
    if (succeeded)
    {
    }
    if (!(succeeded))
    {
      succeeded = ((MR_tag((MR_Word) TypeB_10)) == (MR_Integer) 0);
      if (succeeded)
      {
      }
    }
    if (succeeded)
      succeeded = parse_tree__prog_data____Unify____mer_type_0_0(TypeA_9, TypeB_10);
    else
      switch (MR_tag((MR_Word) TypeA_9)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_String Var_39;
            MR_String Var_40;

            succeeded = ((MR_tag((MR_Word) TypeB_10)) == (MR_Integer) 0);
            if (succeeded)
            {
              Var_39 = (MR_String) "predicate \140check_hlds.modecheck_coerce.compare_types_nonvar\'/5";
              Var_40 = (MR_String) "type_variable";
              mercury__require__unexpected_2_p_0(Var_39, Var_40);
              succeeded = MR_TRUE;
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word TypeCtorA_24;
            MR_Word ArgsA_25;
            MR_Word TypeCtorB_26;
            MR_Word ArgsB_27;

            succeeded = parse_tree__prog_type__type_to_ctor_and_args_3_p_0(TypeA_9, &TypeCtorA_24, &ArgsA_25);
            if (succeeded)
            {
              succeeded = parse_tree__prog_type__type_to_ctor_and_args_3_p_0(TypeB_10, &TypeCtorB_26, &ArgsB_27);
              if (succeeded)
              {
                succeeded = parse_tree__prog_data____Unify____type_ctor_0_0(TypeCtorA_24, TypeCtorB_26);
                if (succeeded)
                  succeeded = check_hlds__modecheck_coerce__compare_types_corresponding_5_p_0(TypeTable_6, TVarSet_7, Comparison_8, ArgsA_25, ArgsB_27);
                else
                {
                  MR_Word SuperTypeA_28;
                  MR_Word next_value_of_TypeA_9;

                  succeeded = (Comparison_8 == (MR_Integer) 1);
                  if (succeeded)
                  {
                    succeeded = check_hlds__type_util__get_supertype_5_p_0(TypeTable_6, TVarSet_7, TypeCtorA_24, ArgsA_25, &SuperTypeA_28);
                    if (succeeded)
                    {
                      // direct tailcall eliminated
                      ;
                      next_value_of_TypeA_9 = SuperTypeA_28;
                      TypeA_9 = next_value_of_TypeA_9;
                      continue;
                    }
                  }
                }
              }
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word BuiltinType_16 = ((MR_Word) ((MR_hl_field(2, TypeA_9, (MR_Integer) 0))));
            MR_Word Var_49;

            succeeded = ((MR_tag((MR_Word) TypeB_10)) == (MR_Integer) 2);
            if (succeeded)
            {
              Var_49 = ((MR_Word) ((MR_hl_field(2, TypeB_10, (MR_Integer) 0))));
              succeeded = parse_tree__prog_data____Unify____builtin_type_0_0(BuiltinType_16, Var_49);
            }
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(3, TypeA_9, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word Kind_29 = ((MR_Word) ((MR_hl_field(3, TypeA_9, (MR_Integer) 2))));
                MR_Word ArgsA_44 = ((MR_Word) ((MR_hl_field(3, TypeA_9, (MR_Integer) 1))));
                MR_Word ArgsB_45;
                MR_Word Var_50;

                succeeded = ((((MR_tag((MR_Word) TypeB_10)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, TypeB_10, (MR_Integer) 0)))) == (MR_Integer) 0)));
                if (succeeded)
                {
                  ArgsB_45 = ((MR_Word) ((MR_hl_field(3, TypeB_10, (MR_Integer) 1))));
                  Var_50 = ((MR_Word) ((MR_hl_field(3, TypeB_10, (MR_Integer) 2))));
                  succeeded = parse_tree__prog_data____Unify____kind_0_0(Kind_29, Var_50);
                  if (succeeded)
                    succeeded = check_hlds__modecheck_coerce__compare_types_corresponding_5_p_0(TypeTable_6, TVarSet_7, Comparison_8, ArgsA_44, ArgsB_45);
                }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word PredOrFunc_30 = ((MR_Unsigned) ((MR_hl_field(3, TypeA_9, (MR_Integer) 1))) & (MR_Integer) 1);
                MR_Word Purity_32 = ((MR_Unsigned) ((MR_hl_field(3, TypeA_9, (MR_Integer) 4))) & (MR_Integer) 3);
                MR_Word Var_41;
                MR_Word ArgsA_46 = ((MR_Word) ((MR_hl_field(3, TypeA_9, (MR_Integer) 2))));
                MR_Word ArgsB_47;
                MR_Word Var_51;
                MR_Word Var_52;

                succeeded = ((((MR_tag((MR_Word) TypeB_10)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, TypeB_10, (MR_Integer) 0)))) == (MR_Integer) 1)));
                if (succeeded)
                {
                  Var_51 = ((MR_Unsigned) ((MR_hl_field(3, TypeB_10, (MR_Integer) 1))) & (MR_Integer) 1);
                  ArgsB_47 = ((MR_Word) ((MR_hl_field(3, TypeB_10, (MR_Integer) 2))));
                  Var_52 = ((MR_Unsigned) ((MR_hl_field(3, TypeB_10, (MR_Integer) 4))) & (MR_Integer) 3);
                  succeeded = (PredOrFunc_30 == Var_51);
                  if (succeeded)
                  {
                    succeeded = (Purity_32 == Var_52);
                    if (succeeded)
                    {
                      Var_41 = (MR_Integer) 0;
                      succeeded = check_hlds__modecheck_coerce__compare_types_corresponding_5_p_0(TypeTable_6, TVarSet_7, Var_41, ArgsA_46, ArgsB_47);
                    }
                  }
                }
              }
              break;
            case (MR_Integer) 2:
              {
                mercury__require__sorry_2_p_0((MR_String) "predicate \140check_hlds.modecheck_coerce.compare_types_nonvar\'/5", (MR_String) "apply_n_type");
                succeeded = MR_TRUE;
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Word TypeA1_37 = ((MR_Word) ((MR_hl_field(3, TypeA_9, (MR_Integer) 1))));
                MR_Word TypeB1_38;
                MR_Word Kind_48 = ((MR_Word) ((MR_hl_field(3, TypeA_9, (MR_Integer) 2))));
                MR_Word Var_53;
                MR_Word next_value_of_TypeA_9;
                MR_Word next_value_of_TypeB_10;

                succeeded = ((((MR_tag((MR_Word) TypeB_10)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, TypeB_10, (MR_Integer) 0)))) == (MR_Integer) 3)));
                if (succeeded)
                {
                  TypeB1_38 = ((MR_Word) ((MR_hl_field(3, TypeB_10, (MR_Integer) 1))));
                  Var_53 = ((MR_Word) ((MR_hl_field(3, TypeB_10, (MR_Integer) 2))));
                  succeeded = parse_tree__prog_data____Unify____kind_0_0(Kind_48, Var_53);
                  if (succeeded)
                  {
                    // direct tailcall eliminated
                    ;
                    next_value_of_TypeA_9 = TypeA1_37;
                    next_value_of_TypeB_10 = TypeB1_38;
                    TypeA_9 = next_value_of_TypeA_9;
                    TypeB_10 = next_value_of_TypeB_10;
                    continue;
                  }
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
check_hlds__modecheck_coerce__compare_types_corresponding_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word HeadVar__5_5)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
      succeeded = (HeadVar__5_5 == (MR_Word) ((MR_Unsigned) 0U));
    else
    {
      MR_Word TypeA_12 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, (MR_Integer) 0))));
      MR_Word TypesA_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, (MR_Integer) 1))));
      MR_Word TypeB_14;
      MR_Word TypesB_15;
      MR_Word next_value_of_HeadVar__4_4;
      MR_Word next_value_of_HeadVar__5_5;

      succeeded = (HeadVar__5_5 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        TypeB_14 = ((MR_Word) ((MR_hl_field(1, HeadVar__5_5, (MR_Integer) 0))));
        TypesB_15 = ((MR_Word) ((MR_hl_field(1, HeadVar__5_5, (MR_Integer) 1))));
        succeeded = ((MR_tag((MR_Word) TypeA_12)) == (MR_Integer) 0);
        if (succeeded)
        {
        }
        if (!(succeeded))
        {
          succeeded = ((MR_tag((MR_Word) TypeB_14)) == (MR_Integer) 0);
          if (succeeded)
          {
          }
        }
        if (succeeded)
          succeeded = parse_tree__prog_data____Unify____mer_type_0_0(TypeA_12, TypeB_14);
        else
          switch (MR_tag((MR_Word) TypeA_12)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_String Var_44;
                MR_String Var_45;

                succeeded = ((MR_tag((MR_Word) TypeB_14)) == (MR_Integer) 0);
                if (succeeded)
                {
                  Var_44 = (MR_String) "predicate \140check_hlds.modecheck_coerce.compare_types_nonvar\'/5";
                  Var_45 = (MR_String) "type_variable";
                  mercury__require__unexpected_2_p_0(Var_44, Var_45);
                  succeeded = MR_TRUE;
                }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word TypeCtorA_29;
                MR_Word ArgsA_30;
                MR_Word TypeCtorB_31;
                MR_Word ArgsB_32;

                succeeded = parse_tree__prog_type__type_to_ctor_and_args_3_p_0(TypeA_12, &TypeCtorA_29, &ArgsA_30);
                if (succeeded)
                {
                  succeeded = parse_tree__prog_type__type_to_ctor_and_args_3_p_0(TypeB_14, &TypeCtorB_31, &ArgsB_32);
                  if (succeeded)
                  {
                    succeeded = parse_tree__prog_data____Unify____type_ctor_0_0(TypeCtorA_29, TypeCtorB_31);
                    if (succeeded)
                      succeeded = check_hlds__modecheck_coerce__compare_types_corresponding_5_p_0(HeadVar__1_1, HeadVar__2_2, HeadVar__3_3, ArgsA_30, ArgsB_32);
                    else
                    {
                      MR_Word SuperTypeA_33;

                      succeeded = (HeadVar__3_3 == (MR_Integer) 1);
                      if (succeeded)
                      {
                        succeeded = check_hlds__type_util__get_supertype_5_p_0(HeadVar__1_1, HeadVar__2_2, TypeCtorA_29, ArgsA_30, &SuperTypeA_33);
                        if (succeeded)
                          succeeded = check_hlds__modecheck_coerce__compare_types_5_p_0(HeadVar__1_1, HeadVar__2_2, HeadVar__3_3, SuperTypeA_33, TypeB_14);
                      }
                    }
                  }
                }
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word BuiltinType_21 = ((MR_Word) ((MR_hl_field(2, TypeA_12, (MR_Integer) 0))));
                MR_Word Var_54;

                succeeded = ((MR_tag((MR_Word) TypeB_14)) == (MR_Integer) 2);
                if (succeeded)
                {
                  Var_54 = ((MR_Word) ((MR_hl_field(2, TypeB_14, (MR_Integer) 0))));
                  succeeded = parse_tree__prog_data____Unify____builtin_type_0_0(BuiltinType_21, Var_54);
                }
              }
              break;
            case (MR_Integer) 3:
              switch (((MR_Integer) ((MR_hl_field(3, TypeA_12, (MR_Integer) 0))))) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Word Kind_34 = ((MR_Word) ((MR_hl_field(3, TypeA_12, (MR_Integer) 2))));
                    MR_Word ArgsA_49 = ((MR_Word) ((MR_hl_field(3, TypeA_12, (MR_Integer) 1))));
                    MR_Word ArgsB_50;
                    MR_Word Var_55;

                    succeeded = ((((MR_tag((MR_Word) TypeB_14)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, TypeB_14, (MR_Integer) 0)))) == (MR_Integer) 0)));
                    if (succeeded)
                    {
                      ArgsB_50 = ((MR_Word) ((MR_hl_field(3, TypeB_14, (MR_Integer) 1))));
                      Var_55 = ((MR_Word) ((MR_hl_field(3, TypeB_14, (MR_Integer) 2))));
                      succeeded = parse_tree__prog_data____Unify____kind_0_0(Kind_34, Var_55);
                      if (succeeded)
                        succeeded = check_hlds__modecheck_coerce__compare_types_corresponding_5_p_0(HeadVar__1_1, HeadVar__2_2, HeadVar__3_3, ArgsA_49, ArgsB_50);
                    }
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word PredOrFunc_35 = ((MR_Unsigned) ((MR_hl_field(3, TypeA_12, (MR_Integer) 1))) & (MR_Integer) 1);
                    MR_Word Purity_37 = ((MR_Unsigned) ((MR_hl_field(3, TypeA_12, (MR_Integer) 4))) & (MR_Integer) 3);
                    MR_Word Var_46;
                    MR_Word ArgsA_51 = ((MR_Word) ((MR_hl_field(3, TypeA_12, (MR_Integer) 2))));
                    MR_Word ArgsB_52;
                    MR_Word Var_56;
                    MR_Word Var_57;

                    succeeded = ((((MR_tag((MR_Word) TypeB_14)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, TypeB_14, (MR_Integer) 0)))) == (MR_Integer) 1)));
                    if (succeeded)
                    {
                      Var_56 = ((MR_Unsigned) ((MR_hl_field(3, TypeB_14, (MR_Integer) 1))) & (MR_Integer) 1);
                      ArgsB_52 = ((MR_Word) ((MR_hl_field(3, TypeB_14, (MR_Integer) 2))));
                      Var_57 = ((MR_Unsigned) ((MR_hl_field(3, TypeB_14, (MR_Integer) 4))) & (MR_Integer) 3);
                      succeeded = (PredOrFunc_35 == Var_56);
                      if (succeeded)
                      {
                        succeeded = (Purity_37 == Var_57);
                        if (succeeded)
                        {
                          Var_46 = (MR_Integer) 0;
                          succeeded = check_hlds__modecheck_coerce__compare_types_corresponding_5_p_0(HeadVar__1_1, HeadVar__2_2, Var_46, ArgsA_51, ArgsB_52);
                        }
                      }
                    }
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    mercury__require__sorry_2_p_0((MR_String) "predicate \140check_hlds.modecheck_coerce.compare_types_nonvar\'/5", (MR_String) "apply_n_type");
                    succeeded = MR_TRUE;
                  }
                  break;
                case (MR_Integer) 3:
                  {
                    MR_Word TypeA1_42 = ((MR_Word) ((MR_hl_field(3, TypeA_12, (MR_Integer) 1))));
                    MR_Word TypeB1_43;
                    MR_Word Kind_53 = ((MR_Word) ((MR_hl_field(3, TypeA_12, (MR_Integer) 2))));
                    MR_Word Var_58;

                    succeeded = ((((MR_tag((MR_Word) TypeB_14)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, TypeB_14, (MR_Integer) 0)))) == (MR_Integer) 3)));
                    if (succeeded)
                    {
                      TypeB1_43 = ((MR_Word) ((MR_hl_field(3, TypeB_14, (MR_Integer) 1))));
                      Var_58 = ((MR_Word) ((MR_hl_field(3, TypeB_14, (MR_Integer) 2))));
                      succeeded = parse_tree__prog_data____Unify____kind_0_0(Kind_53, Var_58);
                      if (succeeded)
                        succeeded = check_hlds__modecheck_coerce__compare_types_5_p_0(HeadVar__1_1, HeadVar__2_2, HeadVar__3_3, TypeA1_42, TypeB1_43);
                    }
                  }
                  break;
              }
              break;
          }
        if (succeeded)
        {
          // direct tailcall eliminated
          ;
          next_value_of_HeadVar__4_4 = TypesA_13;
          next_value_of_HeadVar__5_5 = TypesB_15;
          HeadVar__4_4 = next_value_of_HeadVar__4_4;
          HeadVar__5_5 = next_value_of_HeadVar__5_5;
          continue;
        }
      }
    }
    return succeeded;
    break;
  }
}

static void MR_CALL 
check_hlds__modecheck_coerce__modecheck_coerce_from_ground_make_inst_for_subtype_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_BoundFunctorY_18;

  check_hlds__modecheck_coerce__modecheck_coerce_from_ground_make_bound_functor_9_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 6)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 7)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 8)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 9)))), ((MR_Word) (wrapper_arg_1)), &conv0_BoundFunctorY_18);
  *wrapper_arg_2 = ((MR_Box) (conv0_BoundFunctorY_18));
}

static void MR_CALL 
check_hlds__modecheck_coerce__modecheck_coerce_from_ground_make_inst_for_subtype_8_p_0(
  MR_Word ModuleInfo_9,
  MR_Word TVarSet_10,
  MR_Word LiveX_11,
  MR_Word UniqX_12,
  MR_Word SeenTypes0_13,
  MR_Word TypeX_14,
  MR_Word TypeY_15,
  MR_Word * InstY_16)
{
  MR_bool succeeded;
  MR_Word SeenTypes1_17;
  MR_Word TypeCtorInfo_20_20;

  succeeded = parse_tree__prog_data____Unify____mer_type_0_0(TypeX_14, TypeY_15);
  succeeded = !(succeeded);
  if (succeeded)
  {
    TypeCtorInfo_20_20 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0);
    succeeded = mercury__set__insert_new_3_p_0(TypeCtorInfo_20_20, ((MR_Box) (TypeX_14)), SeenTypes0_13, &SeenTypes1_17);
  }
  if (succeeded)
  {
    MR_Word CtorsX_22;

    succeeded = check_hlds__type_util__type_constructors_3_p_0(ModuleInfo_9, TypeX_14, &CtorsX_22);
    if (succeeded)
    {
      MR_Word BoundFunctorsY_23;
      MR_Word UniqY_24;
      MR_Word Var_26;

      {
        Var_26 = (MR_Word) MR_new_object(MR_Word, (10 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_26, 0) = ((MR_Box) (&check_hlds__modecheck_coerce_scalar_common_6[0]));
        MR_hl_field(0, Var_26, 1) = ((MR_Box) (check_hlds__modecheck_coerce__modecheck_coerce_from_ground_make_inst_for_subtype_8_p_0_1));
        MR_hl_field(0, Var_26, 2) = ((MR_Box) ((MR_Integer) 7));
        MR_hl_field(0, Var_26, 3) = ((MR_Box) (ModuleInfo_9));
        MR_hl_field(0, Var_26, 4) = ((MR_Box) (TVarSet_10));
        MR_hl_field(0, Var_26, 5) = ((MR_Box) (LiveX_11));
        MR_hl_field(0, Var_26, 6) = ((MR_Box) (UniqX_12));
        MR_hl_field(0, Var_26, 7) = ((MR_Box) (SeenTypes1_17));
        MR_hl_field(0, Var_26, 8) = ((MR_Box) (TypeX_14));
        MR_hl_field(0, Var_26, 9) = ((MR_Box) (TypeY_15));
      }
      mercury__list__map_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_bound_functor_0), Var_26, CtorsX_22, &BoundFunctorsY_23);
      UniqY_24 = check_hlds__modecheck_coerce__uniqueness_for_coerce_result_2_f_0(LiveX_11, UniqX_12);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
        *InstY_16 = base;
        MR_hl_field(2, base, 0) = (MR_Box) ((MR_Unsigned) (UniqY_24));
        MR_hl_field(2, base, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__modecheck_coerce_scalar_common_4[0])));
        MR_hl_field(2, base, 2) = ((MR_Box) (BoundFunctorsY_23));
      }
    }
    else
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.modecheck_coerce.modecheck_coerce_from_ground_make_bound_functor\'/8", (MR_String) "missing constructors");
        return;
      }
  }
  else
  {
    MR_Word UniqY_18;

    switch (UniqX_12) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 3:
      case (MR_Integer) 4:
        {
          mercury__require__unexpected_2_p_0((MR_String) "function \140check_hlds.modecheck_coerce.uniqueness_for_coerce_result\'/2", (MR_String) "clobbered");
          return;
        }
        break;
      case (MR_Integer) 2:
      case (MR_Integer) 1:
        switch (LiveX_11) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            UniqY_18 = UniqX_12;
            break;
          case (MR_Integer) 0:
            UniqY_18 = (MR_Integer) 0;
            break;
        }
        break;
      case (MR_Integer) 0:
        UniqY_18 = (MR_Integer) 0;
        break;
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *InstY_16 = base;
      MR_hl_field(1, base, 0) = (MR_Box) ((MR_Unsigned) (UniqY_18));
      MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
  }
}

static void MR_CALL 
check_hlds__modecheck_coerce__copy_bound_functor_for_coerce_result_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_InstY_6;

  check_hlds__modecheck_coerce__copy_inst_for_coerce_result_3_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv0_InstY_6);
  *wrapper_arg_2 = ((MR_Box) (conv0_InstY_6));
}

static void MR_CALL 
check_hlds__modecheck_coerce__copy_bound_functor_for_coerce_result_3_p_0(
  MR_Word LiveX_4,
  MR_Word BoundFunctorX_5,
  MR_Word * BoundFunctorY_6)
{
  MR_Word ConsId_7 = ((MR_Word) ((MR_hl_field(0, BoundFunctorX_5, (MR_Integer) 0))));
  MR_Word ArgInstsX_8 = ((MR_Word) ((MR_hl_field(0, BoundFunctorX_5, (MR_Integer) 1))));
  MR_Word ArgInstsY_9;
  MR_Word Var_10;

  {
    Var_10 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_10, 0) = ((MR_Box) (&check_hlds__modecheck_coerce_scalar_common_5[0]));
    MR_hl_field(0, Var_10, 1) = ((MR_Box) (check_hlds__modecheck_coerce__copy_bound_functor_for_coerce_result_3_p_0_1));
    MR_hl_field(0, Var_10, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_10, 3) = ((MR_Box) (LiveX_4));
  }
  mercury__list__map_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), Var_10, ArgInstsX_8, &ArgInstsY_9);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *BoundFunctorY_6 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (ConsId_7));
    MR_hl_field(0, base, 1) = ((MR_Box) (ArgInstsY_9));
  }
}

static MR_bool MR_CALL 
check_hlds__modecheck_coerce__existq_tvars_contains_2_p_0(
  MR_Word ExistQTVars_3,
  MR_Word Type_4)
{
  MR_bool succeeded = ((MR_tag((MR_Word) Type_4)) == (MR_Integer) 0);
  MR_Word TypeInfo_7_7;
  MR_Word TVar_5;

  if (succeeded)
  {
    TVar_5 = ((MR_Word) ((MR_hl_field(0, Type_4, (MR_Integer) 0))));
    TypeInfo_7_7 = (MR_Word) (&check_hlds__modecheck_coerce_scalar_common_2[1]);
    succeeded = mercury__list__contains_2_p_0(TypeInfo_7_7, ExistQTVars_3, ((MR_Box) (TVar_5)));
  }
  return succeeded;
}

static MR_bool MR_CALL 
check_hlds__modecheck_coerce__get_bound_functor_cons_and_arg_types_6_p_0_1(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = check_hlds__modecheck_coerce__IntroducedFrom__pred__get_bound_functor_cons_and_arg_types__642__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))));
  return succeeded;
}

static void MR_CALL 
check_hlds__modecheck_coerce__get_bound_functor_cons_and_arg_types_6_p_0(
  MR_Word ModuleInfo_7,
  MR_Word TypeX_8,
  MR_Word TypeY_9,
  MR_Word DuCtorX_10,
  MR_Word * DuCtorY_11,
  MR_Word * Result_12)
{
  MR_bool succeeded;
  MR_Word TypeCtorY_13;
  MR_Word SymName0_72;
  MR_Integer Arity_73;
  MR_Word ModuleName_75;
  MR_Word SymName_76;

  parse_tree__prog_type__type_to_ctor_det_2_p_0(TypeY_9, &TypeCtorY_13);
  SymName0_72 = ((MR_Word) ((MR_hl_field(0, DuCtorX_10, (MR_Integer) 0))));
  Arity_73 = ((MR_Integer) ((MR_hl_field(0, DuCtorX_10, (MR_Integer) 1))));
  ModuleName_75 = check_hlds__type_util__type_ctor_module_1_f_0(TypeCtorY_13);
  if (((MR_tag((MR_Word) SymName0_72)) == (MR_Integer) 1))
  {
    MR_String Name_79 = ((MR_String) ((MR_hl_field(1, SymName0_72, (MR_Integer) 1))));

    {
      SymName_76 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, SymName_76, 0) = ((MR_Box) (ModuleName_75));
      MR_hl_field(1, SymName_76, 1) = ((MR_Box) (Name_79));
    }
  }
  else
    SymName_76 = SymName0_72;
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    *DuCtorY_11 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (SymName_76));
    MR_hl_field(0, base, 1) = ((MR_Box) (Arity_73));
    MR_hl_field(0, base, 2) = ((MR_Box) (TypeCtorY_13));
  }
  switch (MR_tag((MR_Word) TypeX_8)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      *Result_12 = (MR_Word) ((MR_Unsigned) 0U);
      break;
    case (MR_Integer) 1:
      {
        MR_Word ArgTypesX_17;
        MR_Word TypeCtor_80;
        MR_Word TypeArgs_81;
        MR_Word ConsTable_82;
        MR_Word ConsDefn_83;
        MR_Word TypeParams_86;
        MR_Word CtorArgs_89;
        MR_Word CtorArgTypes0_91;

        succeeded = parse_tree__prog_type__type_to_ctor_and_args_3_p_0(TypeX_8, &TypeCtor_80, &TypeArgs_81);
        if (succeeded)
        {
          hlds__hlds_module__module_info_get_cons_table_2_p_0(ModuleInfo_7, &ConsTable_82);
          succeeded = hlds__hlds_cons__search_cons_table_of_type_ctor_4_p_0(ConsTable_82, TypeCtor_80, DuCtorX_10, &ConsDefn_83);
          if (succeeded)
          {
            TypeParams_86 = ((MR_Word) ((MR_hl_field(0, ConsDefn_83, (MR_Integer) 2))));
            CtorArgs_89 = ((MR_Word) ((MR_hl_field(0, ConsDefn_83, (MR_Integer) 5))));
            parse_tree__prog_data__get_ctor_arg_types_2_p_0(CtorArgs_89, &CtorArgTypes0_91);
            if ((TypeParams_86 == (MR_Word) ((MR_Unsigned) 0U)))
              ArgTypesX_17 = CtorArgTypes0_91;
            else
            {
              MR_Word Subst_94;

              mercury__map__from_corresponding_lists_3_p_0((MR_Word) (&check_hlds__modecheck_coerce_scalar_common_2[1]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), TypeParams_86, TypeArgs_81, &Subst_94);
              parse_tree__prog_type_subst__apply_subst_to_type_list_3_p_0(Subst_94, CtorArgTypes0_91, &ArgTypesX_17);
            }
            succeeded = MR_TRUE;
          }
        }
        if (succeeded)
        {
          MR_Word ArgTypesY_21;
          MR_Word TypeCtor_97;
          MR_Word TypeArgs_98;
          MR_Word ConsTable_99;
          MR_Word ConsDefn_100;
          MR_Word TypeParams_103;
          MR_Word CtorArgs_106;
          MR_Word CtorArgTypes0_108;

          succeeded = ((MR_tag((MR_Word) TypeY_9)) == (MR_Integer) 1);
          if (succeeded)
          {
            succeeded = parse_tree__prog_type__type_to_ctor_and_args_3_p_0(TypeY_9, &TypeCtor_97, &TypeArgs_98);
            if (succeeded)
            {
              hlds__hlds_module__module_info_get_cons_table_2_p_0(ModuleInfo_7, &ConsTable_99);
              succeeded = hlds__hlds_cons__search_cons_table_of_type_ctor_4_p_0(ConsTable_99, TypeCtor_97, *DuCtorY_11, &ConsDefn_100);
              if (succeeded)
              {
                TypeParams_103 = ((MR_Word) ((MR_hl_field(0, ConsDefn_100, (MR_Integer) 2))));
                CtorArgs_106 = ((MR_Word) ((MR_hl_field(0, ConsDefn_100, (MR_Integer) 5))));
                parse_tree__prog_data__get_ctor_arg_types_2_p_0(CtorArgs_106, &CtorArgTypes0_108);
                if ((TypeParams_103 == (MR_Word) ((MR_Unsigned) 0U)))
                  ArgTypesY_21 = CtorArgTypes0_108;
                else
                {
                  MR_Word Subst_111;

                  mercury__map__from_corresponding_lists_3_p_0((MR_Word) (&check_hlds__modecheck_coerce_scalar_common_2[1]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), TypeParams_103, TypeArgs_98, &Subst_111);
                  parse_tree__prog_type_subst__apply_subst_to_type_list_3_p_0(Subst_111, CtorArgTypes0_108, &ArgTypesY_21);
                }
                succeeded = MR_TRUE;
              }
            }
          }
          if (succeeded)
          {
            MR_Integer Arity_22;
            MR_Integer Var_69;

            mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), ArgTypesX_17, &Arity_22);
            mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), ArgTypesY_21, &Var_69);
            succeeded = (Arity_22 == Var_69);
            if (succeeded)
            {
              MR_Word ConsExistQTVars_23;
              MR_Integer NumExtraArgs_24;

              check_hlds__modecheck_coerce__get_ctor_existq_tvars_det_5_p_0(ModuleInfo_7, TypeX_8, DuCtorX_10, &ConsExistQTVars_23, &NumExtraArgs_24);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                *Result_12 = base;
                MR_hl_field(1, base, 0) = ((MR_Box) (ArgTypesX_17));
                MR_hl_field(1, base, 1) = ((MR_Box) (ArgTypesY_21));
                MR_hl_field(1, base, 2) = ((MR_Box) (Arity_22));
                MR_hl_field(1, base, 3) = ((MR_Box) (ConsExistQTVars_23));
                MR_hl_field(1, base, 4) = ((MR_Box) (NumExtraArgs_24));
              }
            }
            else
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.modecheck_coerce.get_bound_functor_cons_and_arg_types\'/6", (MR_String) "arg types length mismatch");
                return;
              }
          }
          else
            *Result_12 = (MR_Word) ((MR_Unsigned) 4U);
        }
        else
          *Result_12 = (MR_Word) ((MR_Unsigned) 0U);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word BuiltinType_28 = ((MR_Word) ((MR_hl_field(2, TypeX_8, (MR_Integer) 0))));
        MR_Word Var_49;

        {
          Var_49 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_49, 0) = ((MR_Box) (&check_hlds__modecheck_coerce_scalar_common_4[2]));
          MR_hl_field(0, Var_49, 1) = ((MR_Box) (check_hlds__modecheck_coerce__get_bound_functor_cons_and_arg_types_6_p_0_1));
          MR_hl_field(0, Var_49, 2) = ((MR_Box) ((MR_Integer) 2));
          MR_hl_field(0, Var_49, 3) = ((MR_Box) (TypeX_8));
          MR_hl_field(0, Var_49, 4) = ((MR_Box) (TypeY_9));
        }
        mercury__require__expect_3_p_0(Var_49, (MR_String) "predicate \140check_hlds.modecheck_coerce.get_bound_functor_cons_and_arg_types\'/6", (MR_String) "coercion between different builtin types");
        switch (MR_tag((MR_Word) BuiltinType_28)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            switch (MR_unmkbody(BuiltinType_28)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
              case (MR_Integer) 1:
                *Result_12 = (MR_Word) ((MR_Unsigned) 0U);
                break;
              case (MR_Integer) 2:
                {
                  MR_Integer Arity_66 = ((MR_Integer) ((MR_hl_field(0, DuCtorX_10, (MR_Integer) 1))));

                  succeeded = (Arity_66 == (MR_Integer) 0);
                  if (succeeded)
                    *Result_12 = (MR_Word) (MR_mkword(1, &check_hlds__modecheck_coerce_scalar_common_4[3]));
                  else
                    *Result_12 = (MR_Word) ((MR_Unsigned) 0U);
                }
                break;
            }
            break;
          case (MR_Integer) 1:
            *Result_12 = (MR_Word) ((MR_Unsigned) 0U);
            break;
        }
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, TypeX_8, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Integer Arity_54 = ((MR_Integer) ((MR_hl_field(0, DuCtorX_10, (MR_Integer) 1))));
            MR_Word Var_47 = ((MR_Word) ((MR_hl_field(0, DuCtorX_10, (MR_Integer) 0))));
            MR_String Var_48;

            succeeded = ((MR_tag((MR_Word) Var_47)) == (MR_Integer) 0);
            if (succeeded)
            {
              Var_48 = ((MR_String) ((MR_hl_field(0, Var_47, (MR_Integer) 0))));
              succeeded = (strcmp(Var_48, (MR_String) "{}") == 0);
            }
            if (succeeded)
            {
              MR_Word ArgTypesX_114;
              MR_Word TypeCtorInfo_17_122;
              MR_Integer Var_124;

              succeeded = ((((MR_tag((MR_Word) TypeX_8)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, TypeX_8, (MR_Integer) 0)))) == (MR_Integer) 0)));
              if (succeeded)
              {
                ArgTypesX_114 = ((MR_Word) ((MR_hl_field(3, TypeX_8, (MR_Integer) 1))));
                TypeCtorInfo_17_122 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0);
                mercury__list__length_2_p_0(TypeCtorInfo_17_122, ArgTypesX_114, &Var_124);
                succeeded = (Arity_54 == Var_124);
              }
              if (succeeded)
              {
                MR_Word ArgTypesY_116;
                MR_Word TypeCtorInfo_18_123;
                MR_Integer Var_125;

                succeeded = ((((MR_tag((MR_Word) TypeY_9)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, TypeY_9, (MR_Integer) 0)))) == (MR_Integer) 0)));
                if (succeeded)
                {
                  ArgTypesY_116 = ((MR_Word) ((MR_hl_field(3, TypeY_9, (MR_Integer) 1))));
                  TypeCtorInfo_18_123 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0);
                  mercury__list__length_2_p_0(TypeCtorInfo_18_123, ArgTypesY_116, &Var_125);
                  succeeded = (Arity_54 == Var_125);
                }
                if (succeeded)
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                    *Result_12 = base;
                    MR_hl_field(1, base, 0) = ((MR_Box) (ArgTypesX_114));
                    MR_hl_field(1, base, 1) = ((MR_Box) (ArgTypesY_116));
                    MR_hl_field(1, base, 2) = ((MR_Box) (Arity_54));
                    MR_hl_field(1, base, 3) = ((MR_Box) ((MR_Unsigned) 0U));
                    MR_hl_field(1, base, 4) = ((MR_Box) ((MR_Integer) 0));
                  }
                else
                  {
                    mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.modecheck_coerce.get_tuple_cons_arg_types\'/4", (MR_String) "tuple type mismatch");
                    return;
                  }
              }
              else
                *Result_12 = (MR_Word) ((MR_Unsigned) 0U);
            }
            else
              *Result_12 = (MR_Word) ((MR_Unsigned) 0U);
          }
          break;
        case (MR_Integer) 1:
        case (MR_Integer) 2:
          *Result_12 = (MR_Word) ((MR_Unsigned) 0U);
          break;
        case (MR_Integer) 3:
          {
            MR_Word TypeX1_32 = ((MR_Word) ((MR_hl_field(3, TypeX_8, (MR_Integer) 1))));
            MR_Word Kind_33 = ((MR_Word) ((MR_hl_field(3, TypeX_8, (MR_Integer) 2))));
            MR_Word TypeY1_34;
            MR_Word Var_70;

            succeeded = ((((MR_tag((MR_Word) TypeY_9)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, TypeY_9, (MR_Integer) 0)))) == (MR_Integer) 3)));
            if (succeeded)
            {
              TypeY1_34 = ((MR_Word) ((MR_hl_field(3, TypeY_9, (MR_Integer) 1))));
              Var_70 = ((MR_Word) ((MR_hl_field(3, TypeY_9, (MR_Integer) 2))));
              succeeded = parse_tree__prog_data____Unify____kind_0_0(Kind_33, Var_70);
            }
            if (succeeded)
            {
              MR_Word _DuCtorY_35;

              check_hlds__modecheck_coerce__get_bound_functor_cons_and_arg_types_6_p_0(ModuleInfo_7, TypeX1_32, TypeY1_34, DuCtorX_10, &_DuCtorY_35, Result_12);
            }
            else
              {
                mercury__require__sorry_2_p_0((MR_String) "predicate \140check_hlds.modecheck_coerce.get_bound_functor_cons_and_arg_types\'/6", (MR_String) "kinded type mismatch");
                return;
              }
          }
          break;
      }
      break;
  }
}

static MR_bool MR_CALL 
check_hlds__modecheck_coerce__get_ctor_existq_tvars_det_5_p_0_1(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = check_hlds__modecheck_coerce__IntroducedFrom__pred__get_ctor_existq_tvars_det__956__1_2_p_0(((MR_Integer) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Integer) ((MR_hl_field(0, closure, (MR_Integer) 4)))));
  return succeeded;
}

static void MR_CALL 
check_hlds__modecheck_coerce__get_ctor_existq_tvars_det_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Word Type_7,
  MR_Word DuCtor_8,
  MR_Word * ConsExistQTVars_9,
  MR_Integer * NumExtraArgs_10)
{
  MR_bool succeeded;
  MR_Word TypeCtor_11;
  MR_Word ConsTable_12;
  MR_Word ConsDefn_13;
  MR_Word MaybeExistConstraints_18;

  parse_tree__prog_type__type_to_ctor_det_2_p_0(Type_7, &TypeCtor_11);
  hlds__hlds_module__module_info_get_cons_table_2_p_0(ModuleInfo_6, &ConsTable_12);
  hlds__hlds_cons__lookup_cons_table_of_type_ctor_4_p_0(ConsTable_12, TypeCtor_11, DuCtor_8, &ConsDefn_13);
  MaybeExistConstraints_18 = ((MR_Word) ((MR_hl_field(0, ConsDefn_13, (MR_Integer) 4))));
  if ((MaybeExistConstraints_18 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *ConsExistQTVars_9 = (MR_Word) ((MR_Unsigned) 0U);
    *NumExtraArgs_10 = (MR_Integer) 0;
  }
  else
  {
    MR_Word ConsExistConstraints_21 = (MR_Word) (MR_body((MR_Word) (MaybeExistConstraints_18), (MR_Integer) 1));
    MR_Word UnconstrainedTVars_23;
    MR_Word ConstrainedTVars_24;
    MR_Integer NumTypeInfoArgs_25;
    MR_Integer NumTypeClassInfoArgs_26;
    MR_Integer NumExistQTVars_27;
    MR_Word Var_28;

    *ConsExistQTVars_9 = ((MR_Word) ((MR_hl_field(0, ConsExistConstraints_21, (MR_Integer) 0))));
    UnconstrainedTVars_23 = ((MR_Word) ((MR_hl_field(0, ConsExistConstraints_21, (MR_Integer) 2))));
    ConstrainedTVars_24 = ((MR_Word) ((MR_hl_field(0, ConsExistConstraints_21, (MR_Integer) 3))));
    mercury__list__length_2_p_0((MR_Word) (&check_hlds__modecheck_coerce_scalar_common_2[1]), UnconstrainedTVars_23, &NumTypeInfoArgs_25);
    mercury__list__length_2_p_0((MR_Word) (&check_hlds__modecheck_coerce_scalar_common_2[1]), ConstrainedTVars_24, &NumTypeClassInfoArgs_26);
    *NumExtraArgs_10 = (MR_Integer) ((MR_Unsigned) NumTypeInfoArgs_25 + (MR_Unsigned) NumTypeClassInfoArgs_26);
    mercury__list__length_2_p_0((MR_Word) (&check_hlds__modecheck_coerce_scalar_common_2[1]), *ConsExistQTVars_9, &NumExistQTVars_27);
    {
      Var_28 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_28, 0) = ((MR_Box) (&check_hlds__modecheck_coerce_scalar_common_4[1]));
      MR_hl_field(0, Var_28, 1) = ((MR_Box) (check_hlds__modecheck_coerce__get_ctor_existq_tvars_det_5_p_0_1));
      MR_hl_field(0, Var_28, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(0, Var_28, 3) = ((MR_Box) (*NumExtraArgs_10));
      MR_hl_field(0, Var_28, 4) = ((MR_Box) (NumExistQTVars_27));
    }
    mercury__require__expect_3_p_0(Var_28, (MR_String) "predicate \140check_hlds.modecheck_coerce.get_ctor_existq_tvars_det\'/5", (MR_String) "NumExtraArgs != NumExistQTVars");
  }
}

static MR_bool MR_CALL 
check_hlds__modecheck_coerce__is_user_inst_1_p_0(
  MR_Word InstName_2)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) InstName_2)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        succeeded = MR_TRUE;
        break;
      case (MR_Integer) 1:
      case (MR_Integer) 2:
        {
          mercury__require__sorry_2_p_0((MR_String) "predicate \140check_hlds.modecheck_coerce.is_user_inst\'/1", (MR_String) "unexpected compiler generated inst_name");
          succeeded = MR_TRUE;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, InstName_2, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 1:
          case (MR_Integer) 2:
          case (MR_Integer) 3:
          case (MR_Integer) 4:
            {
              mercury__require__sorry_2_p_0((MR_String) "predicate \140check_hlds.modecheck_coerce.is_user_inst\'/1", (MR_String) "unexpected compiler generated inst_name");
              succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word InstName1_6 = ((MR_Word) ((MR_hl_field(3, InstName_2, (MR_Integer) 2))));
              MR_Word next_value_of_InstName_2 = InstName1_6;

              // direct tailcall eliminated
              ;
              InstName_2 = next_value_of_InstName_2;
              continue;
            }
            break;
        }
        break;
    }
    return succeeded;
    break;
  }
}

static MR_Word MR_CALL 
check_hlds__modecheck_coerce__uniqueness_for_coerce_result_2_f_0(
  MR_Word LiveX_4,
  MR_Word UniqX_5)
{
  MR_Word UniqY_6;

  switch (UniqX_5) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 3:
    case (MR_Integer) 4:
      mercury__require__unexpected_2_p_0((MR_String) "function \140check_hlds.modecheck_coerce.uniqueness_for_coerce_result\'/2", (MR_String) "clobbered");
      break;
    case (MR_Integer) 2:
    case (MR_Integer) 1:
      switch (LiveX_4) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          UniqY_6 = UniqX_5;
          break;
        case (MR_Integer) 0:
          UniqY_6 = (MR_Integer) 0;
          break;
      }
      break;
    case (MR_Integer) 0:
      UniqY_6 = (MR_Integer) 0;
      break;
  }
  return UniqY_6;
}

static MR_bool MR_CALL 
check_hlds__modecheck_coerce____Unify____bound_functor_or_error_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__modecheck_coerce____Unify____bound_functor_or_error_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__modecheck_coerce____Compare____bound_functor_or_error_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__modecheck_coerce____Compare____bound_functor_or_error_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
check_hlds__modecheck_coerce____Unify____expanded_insts_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__modecheck_coerce____Unify____expanded_insts_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__modecheck_coerce____Compare____expanded_insts_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__modecheck_coerce____Compare____expanded_insts_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
check_hlds__modecheck_coerce____Unify____get_arg_types_result_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__modecheck_coerce____Unify____get_arg_types_result_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__modecheck_coerce____Compare____get_arg_types_result_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__modecheck_coerce____Compare____get_arg_types_result_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
check_hlds__modecheck_coerce____Unify____maybe_coerce_error_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_bool succeeded;

  succeeded = check_hlds__modecheck_coerce____Unify____maybe_coerce_error_1_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  return succeeded;
}

static void MR_CALL 
check_hlds__modecheck_coerce____Compare____maybe_coerce_error_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__modecheck_coerce____Compare____maybe_coerce_error_1_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
  *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
check_hlds__modecheck_coerce____Unify____modecheck_coerce_result_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__modecheck_coerce____Unify____modecheck_coerce_result_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__modecheck_coerce____Compare____modecheck_coerce_result_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__modecheck_coerce____Compare____modecheck_coerce_result_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
check_hlds__modecheck_coerce____Unify____rev_term_path_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__modecheck_coerce____Unify____rev_term_path_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__modecheck_coerce____Compare____rev_term_path_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__modecheck_coerce____Compare____rev_term_path_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
check_hlds__modecheck_coerce____Unify____types_comparison_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__modecheck_coerce____Unify____types_comparison_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__modecheck_coerce____Compare____types_comparison_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__modecheck_coerce____Compare____types_comparison_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__check_hlds__modecheck_coerce__init(void)
{
}

void mercury__check_hlds__modecheck_coerce__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&check_hlds__modecheck_coerce__check_hlds__modecheck_coerce__type_ctor_info_bound_functor_or_error_0);
	MR_register_type_ctor_info(&check_hlds__modecheck_coerce__check_hlds__modecheck_coerce__type_ctor_info_expanded_insts_0);
	MR_register_type_ctor_info(&check_hlds__modecheck_coerce__check_hlds__modecheck_coerce__type_ctor_info_get_arg_types_result_0);
	MR_register_type_ctor_info(&check_hlds__modecheck_coerce__check_hlds__modecheck_coerce__type_ctor_info_maybe_coerce_error_1);
	MR_register_type_ctor_info(&check_hlds__modecheck_coerce__check_hlds__modecheck_coerce__type_ctor_info_modecheck_coerce_result_0);
	MR_register_type_ctor_info(&check_hlds__modecheck_coerce__check_hlds__modecheck_coerce__type_ctor_info_rev_term_path_0);
	MR_register_type_ctor_info(&check_hlds__modecheck_coerce__check_hlds__modecheck_coerce__type_ctor_info_types_comparison_0);
}

void mercury__check_hlds__modecheck_coerce__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__check_hlds__modecheck_coerce__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module check_hlds.modecheck_coerce.
