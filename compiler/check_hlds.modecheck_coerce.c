/*
** Automatically generated from `modecheck_coerce.m'
** by the Mercury compiler,
** version rotd-2024-02-18
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
#include "check_hlds.delay_info.mih"
#include "check_hlds.inst_abstract_unify.mih"
#include "check_hlds.inst_lookup.mih"
#include "check_hlds.inst_test.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.modecheck_unify.mih"
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
#include "libs.globals.mih"
#include "libs.polyhedron.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.sym_name.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.builtin_lib_types.mih"
#include "parse_tree.error_spec.mih"
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
#include "parse_tree.var_table.mih"
#include "recompilation.record_uses.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"




static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__modecheck_coerce__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__modecheck_coerce__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data__type_ctor_info_mer_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__modecheck_coerce__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_mer_inst_0;

static const MR_PseudoTypeInfo check_hlds__modecheck_coerce__check_hlds__modecheck_coerce__field_types_bound_inst_or_error_0_0[1];

static const MR_DuFunctorDesc check_hlds__modecheck_coerce__check_hlds__modecheck_coerce__du_functor_desc_bound_inst_or_error_0_0;

static const MR_PseudoTypeInfo check_hlds__modecheck_coerce__check_hlds__modecheck_coerce__field_types_bound_inst_or_error_0_1[1];

static const MR_DuFunctorDesc check_hlds__modecheck_coerce__check_hlds__modecheck_coerce__du_functor_desc_bound_inst_or_error_0_1;

static const MR_DuFunctorDesc check_hlds__modecheck_coerce__check_hlds__modecheck_coerce__du_functor_desc_bound_inst_or_error_0_2;

static const MR_DuFunctorDescPtr check_hlds__modecheck_coerce__check_hlds__modecheck_coerce__du_stag_ordered_bound_inst_or_error_0_0[1];

static const MR_DuFunctorDescPtr check_hlds__modecheck_coerce__check_hlds__modecheck_coerce__du_stag_ordered_bound_inst_or_error_0_1[1];

static const MR_DuFunctorDescPtr check_hlds__modecheck_coerce__check_hlds__modecheck_coerce__du_stag_ordered_bound_inst_or_error_0_2[1];

static const MR_DuPtagLayout check_hlds__modecheck_coerce__check_hlds__modecheck_coerce__du_ptag_ordered_bound_inst_or_error_0[3];

static const MR_DuFunctorDescPtr check_hlds__modecheck_coerce__check_hlds__modecheck_coerce__du_name_ordered_bound_inst_or_error_0[3];

static const MR_Integer check_hlds__modecheck_coerce__check_hlds__modecheck_coerce__functor_number_map_bound_inst_or_error_0[3];

static const MR_FA_TypeInfo_Struct2 check_hlds__modecheck_coerce__pair__ti_pair_2parse_tree__prog_data__type_ctor_info_inst_name_0parse_tree__prog_data__type_ctor_info_mer_type_0;

static const MR_FA_TypeInfo_Struct1 check_hlds__modecheck_coerce__set_ordlist__ti_set_ordlist_1pair__ti_pair_2parse_tree__prog_data__type_ctor_info_inst_name_0parse_tree__prog_data__type_ctor_info_mer_type_0;

static const MR_FA_TypeInfo_Struct1 check_hlds__modecheck_coerce__list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_type_0;

static const MR_PseudoTypeInfo check_hlds__modecheck_coerce__check_hlds__modecheck_coerce__field_types_get_arg_types_result_0_0[3];

static const MR_DuFunctorDesc check_hlds__modecheck_coerce__check_hlds__modecheck_coerce__du_functor_desc_get_arg_types_result_0_0;

static const MR_DuFunctorDesc check_hlds__modecheck_coerce__check_hlds__modecheck_coerce__du_functor_desc_get_arg_types_result_0_1;

static const MR_DuFunctorDesc check_hlds__modecheck_coerce__check_hlds__modecheck_coerce__du_functor_desc_get_arg_types_result_0_2;

static const MR_DuFunctorDescPtr check_hlds__modecheck_coerce__check_hlds__modecheck_coerce__du_stag_ordered_get_arg_types_result_0_0[2];

static const MR_DuFunctorDescPtr check_hlds__modecheck_coerce__check_hlds__modecheck_coerce__du_stag_ordered_get_arg_types_result_0_1[1];

static const MR_DuPtagLayout check_hlds__modecheck_coerce__check_hlds__modecheck_coerce__du_ptag_ordered_get_arg_types_result_0[2];

static const MR_DuFunctorDescPtr check_hlds__modecheck_coerce__check_hlds__modecheck_coerce__du_name_ordered_get_arg_types_result_0[3];

static const MR_Integer check_hlds__modecheck_coerce__check_hlds__modecheck_coerce__functor_number_map_get_arg_types_result_0[3];

static const MR_PseudoTypeInfo check_hlds__modecheck_coerce__check_hlds__modecheck_coerce__field_types_maybe_coerce_error_1_0[1];

static const MR_DuFunctorDesc check_hlds__modecheck_coerce__check_hlds__modecheck_coerce__du_functor_desc_maybe_coerce_error_1_0;

static const MR_PseudoTypeInfo check_hlds__modecheck_coerce__check_hlds__modecheck_coerce__field_types_maybe_coerce_error_1_1[1];

static const MR_DuFunctorDesc check_hlds__modecheck_coerce__check_hlds__modecheck_coerce__du_functor_desc_maybe_coerce_error_1_1;

static const MR_DuFunctorDescPtr check_hlds__modecheck_coerce__check_hlds__modecheck_coerce__du_stag_ordered_maybe_coerce_error_1_0[1];

static const MR_DuFunctorDescPtr check_hlds__modecheck_coerce__check_hlds__modecheck_coerce__du_stag_ordered_maybe_coerce_error_1_1[1];

static const MR_DuPtagLayout check_hlds__modecheck_coerce__check_hlds__modecheck_coerce__du_ptag_ordered_maybe_coerce_error_1[2];

static const MR_DuFunctorDescPtr check_hlds__modecheck_coerce__check_hlds__modecheck_coerce__du_name_ordered_maybe_coerce_error_1[2];

static const MR_Integer check_hlds__modecheck_coerce__check_hlds__modecheck_coerce__functor_number_map_maybe_coerce_error_1[2];

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
check_hlds__modecheck_coerce__IntroducedFrom__pred__get_bound_functor_cons_and_arg_types__588__1_2_p_0(
  MR_Word TypeX_8,
  MR_Word TypeY_9);

static MR_bool MR_CALL 
check_hlds__modecheck_coerce__IntroducedFrom__pred__modecheck_coerce_from_bound_make_bound_functor__499__1_2_p_0(
  MR_Word ArgInstsX_25,
  MR_Word HeadVar__2_77);

static MR_bool MR_CALL 
check_hlds__modecheck_coerce__IntroducedFrom__pred__modecheck_coerce_from_bound_make_bound_functor__497__1_2_p_0(
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
  MR_Word TypeInfo_for_T_14,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__modecheck_coerce____Unify____maybe_coerce_error_1_0(
  MR_Word TypeInfo_for_T_9,
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
check_hlds__modecheck_coerce____Compare____bound_inst_or_error_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__modecheck_coerce____Unify____bound_inst_or_error_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

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
  MR_Word * FunctorY_18);

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
  MR_Word * FunctorY_18);

static void MR_CALL 
check_hlds__modecheck_coerce__modecheck_coerce_vars_10_p_0(
  MR_Word ModuleInfo0_11,
  MR_Word X_12,
  MR_Word Y_13,
  MR_Word TypeX_14,
  MR_Word TypeY_15,
  MR_Word InstX_16,
  MR_Word InstY_17,
  MR_Word * Res_18,
  MR_Word STATE_VARIABLE_ModeInfo_0_44,
  MR_Word * STATE_VARIABLE_ModeInfo_45);

static void MR_CALL 
check_hlds__modecheck_coerce__modecheck_coerce_make_inst_9_p_0(
  MR_Word ModuleInfo_10,
  MR_Word TVarSet_11,
  MR_Word LiveX_12,
  MR_Word RevTermPath0_13,
  MR_Word TypeX_14,
  MR_Word TypeY_15,
  MR_Word ExpandedInsts0_16,
  MR_Word InstX_17,
  MR_Word * Res_18);

static void MR_CALL 
check_hlds__modecheck_coerce__modecheck_coerce_from_bound_make_bound_functor_arg_insts_11_p_0(
  MR_Word ModuleInfo_12,
  MR_Word TVarSet_13,
  MR_Word LiveX_14,
  MR_Word RevTermPath0_15,
  MR_Word ExpandedInsts0_16,
  MR_Word ConsIdX_17,
  MR_Integer CurArgNum_18,
  MR_Word ArgTypesX_19,
  MR_Word ArgTypesY_20,
  MR_Word ArgInstsX_21,
  MR_Word * MaybeArgInstsY_22);

static MR_bool MR_CALL 
check_hlds__modecheck_coerce__modecheck_coerce_from_bound_make_bound_functors_13_p_0_2(
  MR_Box closure_arg);

static MR_bool MR_CALL 
check_hlds__modecheck_coerce__modecheck_coerce_from_bound_make_bound_functors_13_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
check_hlds__modecheck_coerce__modecheck_coerce_from_bound_make_bound_functors_13_p_0(
  MR_Word ModuleInfo_14,
  MR_Word TVarSet_15,
  MR_Word LiveX_16,
  MR_Word RevTermPath0_17,
  MR_Word TypeX_18,
  MR_Word TypeY_19,
  MR_Word ExpandedInsts0_20,
  MR_Word InstX_21,
  MR_Word FunctorsX_22,
  MR_Word * FunctorsY_23,
  MR_Word * BadConsIds_24,
  MR_Word STATE_VARIABLE_MaybeError_0_33,
  MR_Word * STATE_VARIABLE_MaybeError_34);

static MR_bool MR_CALL 
check_hlds__modecheck_coerce__is_subtype_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word TVarSet_6,
  MR_Word TypeA_7,
  MR_Word TypeB_8);

static void MR_CALL 
check_hlds__modecheck_coerce__modecheck_coerce_from_ground_make_inst_9_p_0(
  MR_Word ModuleInfo_10,
  MR_Word TVarSet_11,
  MR_Word LiveX_12,
  MR_Word UniqX_13,
  MR_Word RevTermPath0_14,
  MR_Word TypeX_15,
  MR_Word TypeY_16,
  MR_Word InstX_17,
  MR_Word * MaybeInstY_18);

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
check_hlds__modecheck_coerce__maybe_keep_error_3_p_0(
  MR_Word Error_4,
  MR_Word MaybeError0_5,
  MR_Word * MaybeError_6);

static MR_bool MR_CALL 
check_hlds__modecheck_coerce__cons_id_matches_builtin_type_2_p_0(
  MR_Word ConsId_3,
  MR_Word Type_4);

static MR_bool MR_CALL 
check_hlds__modecheck_coerce__get_bound_functor_cons_and_arg_types_6_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
check_hlds__modecheck_coerce__get_bound_functor_cons_and_arg_types_6_p_0(
  MR_Word ModuleInfo_7,
  MR_Word TypeX_8,
  MR_Word TypeY_9,
  MR_Word ConsIdX_10,
  MR_Word * ConsIdY_11,
  MR_Word * Res_12);

static MR_bool MR_CALL 
check_hlds__modecheck_coerce__is_user_inst_1_p_0(
  MR_Word InstName_2);

static MR_Word MR_CALL 
check_hlds__modecheck_coerce__uniqueness_for_coerce_result_2_f_0(
  MR_Word LiveX_4,
  MR_Word UniqX_5);

static MR_bool MR_CALL 
check_hlds__modecheck_coerce____Unify____bound_inst_or_error_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__modecheck_coerce____Compare____bound_inst_or_error_0_0_10001(
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

static /* final */ const MR_Box check_hlds__modecheck_coerce_scalar_common_2[8][2];

static /* final */ const MR_Box check_hlds__modecheck_coerce_scalar_common_3[2][1];

static /* final */ const MR_Box check_hlds__modecheck_coerce_scalar_common_4[3][5];

static /* final */ const MR_Box check_hlds__modecheck_coerce_scalar_common_5[1][12];

static /* final */ const MR_Box check_hlds__modecheck_coerce_scalar_common_6[1][11];




static /* final */ const MR_Box check_hlds__modecheck_coerce_scalar_common_1[1][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
};

static /* final */ const MR_Box check_hlds__modecheck_coerce_scalar_common_2[8][2] = {
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
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row   5 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&check_hlds__modecheck_coerce_scalar_common_2[4]))
  },
  /* row   6 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0))
  },
  /* row   7 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&check_hlds__mode_errors__check_hlds__mode_errors__type_ctor_info_coerce_error_term_path_step_0))
  },
};

static /* final */ const MR_Box check_hlds__modecheck_coerce_scalar_common_3[2][1] = {
  /* row   0 */
  { ((MR_Box) ((MR_Unsigned) 4U)) },
  /* row   1 */
  { ((MR_Box) ((MR_Unsigned) 0U)) },
};

static /* final */ const MR_Box check_hlds__modecheck_coerce_scalar_common_4[3][5] = {
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
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&check_hlds__modecheck_coerce__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_mer_inst_0)),
    ((MR_Box) (&check_hlds__modecheck_coerce__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_mer_inst_0))
  },
};

static /* final */ const MR_Box check_hlds__modecheck_coerce_scalar_common_5[1][12] = {
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
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_bound_inst_0))
  },
};

static /* final */ const MR_Box check_hlds__modecheck_coerce_scalar_common_6[1][11] = {
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

static const MR_PseudoTypeInfo check_hlds__modecheck_coerce__check_hlds__modecheck_coerce__field_types_bound_inst_or_error_0_0[1] = { (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_bound_inst_0) };

static const MR_DuFunctorDesc check_hlds__modecheck_coerce__check_hlds__modecheck_coerce__du_functor_desc_bound_inst_or_error_0_0 = {
  (MR_String) "ok",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE_DIRECT_ARG,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(0),
  check_hlds__modecheck_coerce__check_hlds__modecheck_coerce__field_types_bound_inst_or_error_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo check_hlds__modecheck_coerce__check_hlds__modecheck_coerce__field_types_bound_inst_or_error_0_1[1] = { (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0) };

static const MR_DuFunctorDesc check_hlds__modecheck_coerce__check_hlds__modecheck_coerce__du_functor_desc_bound_inst_or_error_0_1 = {
  (MR_String) "bad_cons_id",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(2),
  (MR_Integer) -1,
  INT32_C(1),
  check_hlds__modecheck_coerce__check_hlds__modecheck_coerce__field_types_bound_inst_or_error_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc check_hlds__modecheck_coerce__check_hlds__modecheck_coerce__du_functor_desc_bound_inst_or_error_0_2 = {
  (MR_String) "other_error",
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

static const MR_DuFunctorDescPtr check_hlds__modecheck_coerce__check_hlds__modecheck_coerce__du_stag_ordered_bound_inst_or_error_0_0[1] = { &check_hlds__modecheck_coerce__check_hlds__modecheck_coerce__du_functor_desc_bound_inst_or_error_0_2 };

static const MR_DuFunctorDescPtr check_hlds__modecheck_coerce__check_hlds__modecheck_coerce__du_stag_ordered_bound_inst_or_error_0_1[1] = { &check_hlds__modecheck_coerce__check_hlds__modecheck_coerce__du_functor_desc_bound_inst_or_error_0_0 };

static const MR_DuFunctorDescPtr check_hlds__modecheck_coerce__check_hlds__modecheck_coerce__du_stag_ordered_bound_inst_or_error_0_2[1] = { &check_hlds__modecheck_coerce__check_hlds__modecheck_coerce__du_functor_desc_bound_inst_or_error_0_1 };

static const MR_DuPtagLayout check_hlds__modecheck_coerce__check_hlds__modecheck_coerce__du_ptag_ordered_bound_inst_or_error_0[3] = {
  {
    UINT32_C(1),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    check_hlds__modecheck_coerce__check_hlds__modecheck_coerce__du_stag_ordered_bound_inst_or_error_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE_DIRECT_ARG,
    check_hlds__modecheck_coerce__check_hlds__modecheck_coerce__du_stag_ordered_bound_inst_or_error_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__modecheck_coerce__check_hlds__modecheck_coerce__du_stag_ordered_bound_inst_or_error_0_2,
    INT8_C(-1),
    UINT8_C(2),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr check_hlds__modecheck_coerce__check_hlds__modecheck_coerce__du_name_ordered_bound_inst_or_error_0[3] = {
  &check_hlds__modecheck_coerce__check_hlds__modecheck_coerce__du_functor_desc_bound_inst_or_error_0_1,
  &check_hlds__modecheck_coerce__check_hlds__modecheck_coerce__du_functor_desc_bound_inst_or_error_0_0,
  &check_hlds__modecheck_coerce__check_hlds__modecheck_coerce__du_functor_desc_bound_inst_or_error_0_2
};

static const MR_Integer check_hlds__modecheck_coerce__check_hlds__modecheck_coerce__functor_number_map_bound_inst_or_error_0[3] = {
  (MR_Integer) 1,
  (MR_Integer) 0,
  (MR_Integer) 2
};

const MR_TypeCtorInfo_Struct check_hlds__modecheck_coerce__check_hlds__modecheck_coerce__type_ctor_info_bound_inst_or_error_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(3),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__modecheck_coerce____Unify____bound_inst_or_error_0_0_10001)),
  ((MR_Box) (check_hlds__modecheck_coerce____Compare____bound_inst_or_error_0_0_10001)),
  (MR_String) "check_hlds.modecheck_coerce",
  (MR_String) "bound_inst_or_error",
  { check_hlds__modecheck_coerce__check_hlds__modecheck_coerce__du_name_ordered_bound_inst_or_error_0 },
  { check_hlds__modecheck_coerce__check_hlds__modecheck_coerce__du_ptag_ordered_bound_inst_or_error_0 },
  (MR_Integer) 3,
  UINT16_C(12),
  check_hlds__modecheck_coerce__check_hlds__modecheck_coerce__functor_number_map_bound_inst_or_error_0,

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

static const MR_PseudoTypeInfo check_hlds__modecheck_coerce__check_hlds__modecheck_coerce__field_types_get_arg_types_result_0_0[3] = {
  (MR_PseudoTypeInfo) (&check_hlds__modecheck_coerce__list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_type_0),
  (MR_PseudoTypeInfo) (&check_hlds__modecheck_coerce__list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_type_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
};

static const MR_DuFunctorDesc check_hlds__modecheck_coerce__check_hlds__modecheck_coerce__du_functor_desc_get_arg_types_result_0_0 = {
  (MR_String) "arg_types",
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(0),
  check_hlds__modecheck_coerce__check_hlds__modecheck_coerce__field_types_get_arg_types_result_0_0,
  NULL,
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
  &check_hlds__modecheck_coerce__check_hlds__modecheck_coerce__du_functor_desc_get_arg_types_result_0_0,
  &check_hlds__modecheck_coerce__check_hlds__modecheck_coerce__du_functor_desc_get_arg_types_result_0_1,
  &check_hlds__modecheck_coerce__check_hlds__modecheck_coerce__du_functor_desc_get_arg_types_result_0_2
};

static const MR_Integer check_hlds__modecheck_coerce__check_hlds__modecheck_coerce__functor_number_map_get_arg_types_result_0[3] = {
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 2
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

static const MR_PseudoTypeInfo check_hlds__modecheck_coerce__check_hlds__modecheck_coerce__field_types_maybe_coerce_error_1_0[1] = { (MR_PseudoTypeInfo) ((MR_Integer) 1) };

static const MR_DuFunctorDesc check_hlds__modecheck_coerce__check_hlds__modecheck_coerce__du_functor_desc_maybe_coerce_error_1_0 = {
  (MR_String) "ok",
  INT16_C(1),
  UINT16_C(1),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(0),
  check_hlds__modecheck_coerce__check_hlds__modecheck_coerce__field_types_maybe_coerce_error_1_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo check_hlds__modecheck_coerce__check_hlds__modecheck_coerce__field_types_maybe_coerce_error_1_1[1] = { (MR_PseudoTypeInfo) (&check_hlds__mode_errors__check_hlds__mode_errors__type_ctor_info_coerce_error_0) };

static const MR_DuFunctorDesc check_hlds__modecheck_coerce__check_hlds__modecheck_coerce__du_functor_desc_maybe_coerce_error_1_1 = {
  (MR_String) "coerce_error",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE_DIRECT_ARG,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(1),
  check_hlds__modecheck_coerce__check_hlds__modecheck_coerce__field_types_maybe_coerce_error_1_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr check_hlds__modecheck_coerce__check_hlds__modecheck_coerce__du_stag_ordered_maybe_coerce_error_1_0[1] = { &check_hlds__modecheck_coerce__check_hlds__modecheck_coerce__du_functor_desc_maybe_coerce_error_1_1 };

static const MR_DuFunctorDescPtr check_hlds__modecheck_coerce__check_hlds__modecheck_coerce__du_stag_ordered_maybe_coerce_error_1_1[1] = { &check_hlds__modecheck_coerce__check_hlds__modecheck_coerce__du_functor_desc_maybe_coerce_error_1_0 };

static const MR_DuPtagLayout check_hlds__modecheck_coerce__check_hlds__modecheck_coerce__du_ptag_ordered_maybe_coerce_error_1[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE_DIRECT_ARG,
    check_hlds__modecheck_coerce__check_hlds__modecheck_coerce__du_stag_ordered_maybe_coerce_error_1_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__modecheck_coerce__check_hlds__modecheck_coerce__du_stag_ordered_maybe_coerce_error_1_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr check_hlds__modecheck_coerce__check_hlds__modecheck_coerce__du_name_ordered_maybe_coerce_error_1[2] = {
  &check_hlds__modecheck_coerce__check_hlds__modecheck_coerce__du_functor_desc_maybe_coerce_error_1_1,
  &check_hlds__modecheck_coerce__check_hlds__modecheck_coerce__du_functor_desc_maybe_coerce_error_1_0
};

static const MR_Integer check_hlds__modecheck_coerce__check_hlds__modecheck_coerce__functor_number_map_maybe_coerce_error_1[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct check_hlds__modecheck_coerce__check_hlds__modecheck_coerce__type_ctor_info_maybe_coerce_error_1 = {
  (MR_Integer) 1,
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__modecheck_coerce____Unify____maybe_coerce_error_1_0_10001)),
  ((MR_Box) (check_hlds__modecheck_coerce____Compare____maybe_coerce_error_1_0_10001)),
  (MR_String) "check_hlds.modecheck_coerce",
  (MR_String) "maybe_coerce_error",
  { check_hlds__modecheck_coerce__check_hlds__modecheck_coerce__du_name_ordered_maybe_coerce_error_1 },
  { check_hlds__modecheck_coerce__check_hlds__modecheck_coerce__du_ptag_ordered_maybe_coerce_error_1 },
  (MR_Integer) 2,
  UINT16_C(12),
  check_hlds__modecheck_coerce__check_hlds__modecheck_coerce__functor_number_map_maybe_coerce_error_1,

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
check_hlds__modecheck_coerce__IntroducedFrom__pred__get_bound_functor_cons_and_arg_types__588__1_2_p_0(
  MR_Word TypeX_8,
  MR_Word TypeY_9)
{
  MR_bool succeeded;

  succeeded = parse_tree__prog_data____Unify____mer_type_0_0(TypeX_8, TypeY_9);
  return succeeded;
}

static MR_bool MR_CALL 
check_hlds__modecheck_coerce__IntroducedFrom__pred__modecheck_coerce_from_bound_make_bound_functor__499__1_2_p_0(
  MR_Word ArgInstsX_25,
  MR_Word HeadVar__2_77)
{
  MR_bool succeeded;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&check_hlds__modecheck_coerce_scalar_common_2[0]), ((MR_Box) (ArgInstsX_25)), ((MR_Box) (HeadVar__2_77)));
  return succeeded;
}

static MR_bool MR_CALL 
check_hlds__modecheck_coerce__IntroducedFrom__pred__modecheck_coerce_from_bound_make_bound_functor__497__1_2_p_0(
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

  mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__modecheck_coerce_scalar_common_2[7]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

static MR_bool MR_CALL 
check_hlds__modecheck_coerce____Unify____rev_term_path_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&check_hlds__modecheck_coerce_scalar_common_2[7]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

static void MR_CALL 
check_hlds__modecheck_coerce____Compare____modecheck_coerce_result_0_0(
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
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__1_1 = (MR_Integer) 0;
    else
      *HeadVar__1_1 = (MR_Integer) 2;
  else
  {
    MR_Word Var_23 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 2))));
    MR_Word Var_24 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word Var_25 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));

    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__1_1 = (MR_Integer) 1;
    else
    {
      MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));
      MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
      MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 2))));
      MR_Word SubResult1_6;

      mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__modecheck_coerce_scalar_common_2[5]), &SubResult1_6, ((MR_Box) (Var_25)), ((MR_Box) (ArgY1_5)));
      succeeded = (SubResult1_6 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult1_6;
      else
      {
        MR_Word SubResult2_9;

        mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__modecheck_coerce_scalar_common_2[6]), &SubResult2_9, ((MR_Box) (Var_24)), ((MR_Box) (ArgY2_8)));
        succeeded = (SubResult2_9 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult2_9;
        else
          check_hlds__modecheck_util____Compare____extra_goals_0_0(HeadVar__1_1, Var_23, ArgY3_11);
      }
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
      TypeInfo_13_13 = (MR_Word) (&check_hlds__modecheck_coerce_scalar_common_2[5]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_13_13, ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
      if (succeeded)
      {
        TypeInfo_14_14 = (MR_Word) (&check_hlds__modecheck_coerce_scalar_common_2[6]);
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
  MR_Word TypeInfo_for_T_14,
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
  if (((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0))
  {
    MR_Word Var_16 = (MR_Word) ((MR_Word) (HeadVar__2_2));

    if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 0))
    {
      MR_Word ArgY1_11 = (MR_Word) ((MR_Word) (HeadVar__3_3));

      check_hlds__mode_errors____Compare____coerce_error_0_0(HeadVar__1_1, Var_16, ArgY1_11);
    }
    else
      *HeadVar__1_1 = (MR_Integer) 2;
  }
  else
  {
    MR_Box Var_17 = (MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0));

    if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 0))
      *HeadVar__1_1 = (MR_Integer) 1;
    else
    {
      MR_Box ArgY1_5 = (MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0));

      mercury__builtin__compare_3_p_0(TypeInfo_for_T_14, HeadVar__1_1, Var_17, ArgY1_5);
    }
  }
}

static MR_bool MR_CALL 
check_hlds__modecheck_coerce____Unify____maybe_coerce_error_1_0(
  MR_Word TypeInfo_for_T_9,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_7 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_8 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_7 == CastY_8);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  if (((MR_tag((MR_Word) HeadVar__1_1)) == (MR_Integer) 0))
  {
    MR_Word ArgX1_5 = (MR_Word) ((MR_Word) (HeadVar__1_1));
    MR_Word ArgY1_6;

    succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
    if (succeeded)
    {
      ArgY1_6 = (MR_Word) ((MR_Word) (HeadVar__2_2));
      succeeded = check_hlds__mode_errors____Unify____coerce_error_0_0(ArgX1_5, ArgY1_6);
    }
  }
  else
  {
    MR_Box ArgX1_3 = (MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0));
    MR_Box ArgY1_4;

    succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
    if (succeeded)
    {
      ArgY1_4 = (MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0));
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_T_9, ArgX1_3, ArgY1_4);
    }
  }
  return succeeded;
}

static void MR_CALL 
check_hlds__modecheck_coerce____Compare____get_arg_types_result_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_24 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_25 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_24 == CastY_25);
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
        {
          MR_Integer Var_29 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 2))));
          MR_Word Var_30 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
          MR_Word Var_31 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));

          switch (MR_tag((MR_Word) HeadVar__3_3)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              switch (MR_unmkbody(HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  *HeadVar__1_1 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 1:
                  *HeadVar__1_1 = (MR_Integer) 1;
                  break;
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));
                MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
                MR_Integer ArgY3_11 = ((MR_Integer) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 2))));
                MR_Word SubResult1_6;

                mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__modecheck_coerce_scalar_common_2[3]), &SubResult1_6, ((MR_Box) (Var_31)), ((MR_Box) (ArgY1_5)));
                succeeded = (SubResult1_6 != (MR_Integer) 0);
                if (succeeded)
                  *HeadVar__1_1 = SubResult1_6;
                else
                {
                  MR_Word SubResult2_9;

                  mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__modecheck_coerce_scalar_common_2[3]), &SubResult2_9, ((MR_Box) (Var_30)), ((MR_Box) (ArgY2_8)));
                  succeeded = (SubResult2_9 != (MR_Integer) 0);
                  if (succeeded)
                    *HeadVar__1_1 = SubResult2_9;
                  else
                  {
                    succeeded = (Var_29 < ArgY3_11);
                    if (succeeded)
                      *HeadVar__1_1 = (MR_Integer) 1;
                    else
                    {
                      succeeded = (Var_29 > ArgY3_11);
                      if (succeeded)
                        *HeadVar__1_1 = (MR_Integer) 2;
                      else
                        *HeadVar__1_1 = (MR_Integer) 0;
                    }
                  }
                }
              }
              break;
          }
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
  MR_Integer CastX_13 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_14 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_13 == CastY_14);
  if (succeeded)
    succeeded = MR_TRUE;
  else
    switch (MR_tag((MR_Word) HeadVar__1_1)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(HeadVar__1_1)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Integer CastX_9 = (MR_Integer) (HeadVar__1_1);
              MR_Integer CastY_10 = (MR_Integer) (HeadVar__2_2);

              succeeded = (CastY_10 == CastX_9);
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Integer CastX_11 = (MR_Integer) (HeadVar__1_1);
              MR_Integer CastY_12 = (MR_Integer) (HeadVar__2_2);

              succeeded = (CastY_12 == CastX_11);
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word TypeInfo_15_15;
          MR_Word TypeInfo_16_16;
          MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
          MR_Word ArgY1_4;
          MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
          MR_Word ArgY2_6;
          MR_Integer ArgX3_7 = ((MR_Integer) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 2))));
          MR_Integer ArgY3_8;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
          if (succeeded)
          {
            ArgY1_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
            ArgY2_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
            ArgY3_8 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 2))));
            TypeInfo_15_15 = (MR_Word) (&check_hlds__modecheck_coerce_scalar_common_2[3]);
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_15_15, ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
            if (succeeded)
            {
              TypeInfo_16_16 = (MR_Word) (&check_hlds__modecheck_coerce_scalar_common_2[3]);
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_16_16, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
              if (succeeded)
                succeeded = (ArgX3_7 == ArgY3_8);
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
check_hlds__modecheck_coerce____Compare____bound_inst_or_error_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_16 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_17 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_16 == CastY_17);
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
            *HeadVar__1_1 = (MR_Integer) 2;
            break;
          case (MR_Integer) 2:
            *HeadVar__1_1 = (MR_Integer) 2;
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Var_21 = (MR_Word) (MR_body((MR_Word) (HeadVar__2_2), (MR_Integer) 1));

          switch (MR_tag((MR_Word) HeadVar__3_3)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              *HeadVar__1_1 = (MR_Integer) 1;
              break;
            case (MR_Integer) 1:
              {
                MR_Word ArgY1_5 = (MR_Word) (MR_body((MR_Word) (HeadVar__3_3), (MR_Integer) 1));

                parse_tree__prog_data____Compare____bound_inst_0_0(HeadVar__1_1, Var_21, ArgY1_5);
              }
              break;
            case (MR_Integer) 2:
              *HeadVar__1_1 = (MR_Integer) 1;
              break;
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Var_20 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 0))));

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
                MR_Word ArgY1_12 = ((MR_Word) ((MR_hl_field(2, HeadVar__3_3, (MR_Integer) 0))));

                parse_tree__prog_data____Compare____cons_id_0_0(HeadVar__1_1, Var_20, ArgY1_12);
              }
              break;
          }
        }
        break;
    }
}

static MR_bool MR_CALL 
check_hlds__modecheck_coerce____Unify____bound_inst_or_error_0_0(
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
            succeeded = parse_tree__prog_data____Unify____bound_inst_0_0(ArgX1_3, ArgY1_4);
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
            succeeded = parse_tree__prog_data____Unify____cons_id_0_0(ArgX1_5, ArgY1_6);
          }
        }
        break;
    }
  return succeeded;
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
  MR_Word * FunctorY_18)
{
  check_hlds__modecheck_coerce__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_99_104_101_99_107_95_99_111_101_114_99_101_95_102_114_111_109_95_103_114_111_117_110_100_95_109_97_107_101_95_98_111_117_110_100_95_102_117_110_99_116_111_114_95_95_91_54_93_95_48_9_p_0(ModuleInfo_10, TVarSet_11, LiveX_12, UniqX_13, SeenTypes_14, TypeY_16, CtorX_17, FunctorY_18);
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
  MR_Word * FunctorY_18)
{
  MR_bool succeeded;
  MR_Word CtorNameX_21 = ((MR_Word) ((MR_hl_field(0, CtorX_17, (MR_Integer) 2))));
  MR_Word CtorArgsX_22 = ((MR_Word) ((MR_hl_field(0, CtorX_17, (MR_Integer) 3))));
  MR_Integer CtorArity_23 = ((MR_Integer) ((MR_hl_field(0, CtorX_17, (MR_Integer) 4))));
  MR_Word TypeCtorY_25;
  MR_Word ModuleNameY_26;
  MR_Word CtorNameY_27;
  MR_Word ConsIdY_28;
  MR_Word ArgTypesX_29;
  MR_Word ArgTypesY_31;
  MR_Word ArgInstsY_32;
  MR_Word Var_35;
  MR_Word ArgTypesY0_30;
  MR_Word TypeCtor_44;
  MR_Word TypeArgs_45;
  MR_Word ConsTable_46;
  MR_Word ConsDefn_47;
  MR_Word TypeParams_50;
  MR_Word CtorArgs_53;
  MR_Word CtorArgTypes0_55;

  parse_tree__prog_type__type_to_ctor_det_2_p_0(TypeY_16, &TypeCtorY_25);
  ModuleNameY_26 = check_hlds__type_util__type_ctor_module_1_f_0(TypeCtorY_25);
  if (((MR_tag((MR_Word) CtorNameX_21)) == (MR_Integer) 1))
  {
    MR_String Name_43 = ((MR_String) ((MR_hl_field(1, CtorNameX_21, (MR_Integer) 1))));

    {
      CtorNameY_27 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, CtorNameY_27, 0) = ((MR_Box) (ModuleNameY_26));
      MR_hl_field(1, CtorNameY_27, 1) = ((MR_Box) (Name_43));
    }
  }
  else
    CtorNameY_27 = CtorNameX_21;
  {
    ConsIdY_28 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, ConsIdY_28, 0) = ((MR_Box) ((MR_Unsigned) 2U));
    MR_hl_field(3, ConsIdY_28, 1) = ((MR_Box) (CtorNameY_27));
    MR_hl_field(3, ConsIdY_28, 2) = ((MR_Box) (CtorArity_23));
    MR_hl_field(3, ConsIdY_28, 3) = ((MR_Box) (TypeCtorY_25));
  }
  parse_tree__prog_data__get_ctor_arg_types_2_p_0(CtorArgsX_22, &ArgTypesX_29);
  succeeded = parse_tree__prog_type__type_to_ctor_and_args_3_p_0(TypeY_16, &TypeCtor_44, &TypeArgs_45);
  if (succeeded)
  {
    hlds__hlds_module__module_info_get_cons_table_2_p_0(ModuleInfo_10, &ConsTable_46);
    succeeded = hlds__hlds_cons__search_cons_table_of_type_ctor_4_p_0(ConsTable_46, TypeCtor_44, ConsIdY_28, &ConsDefn_47);
    if (succeeded)
    {
      TypeParams_50 = ((MR_Word) ((MR_hl_field(0, ConsDefn_47, (MR_Integer) 2))));
      CtorArgs_53 = ((MR_Word) ((MR_hl_field(0, ConsDefn_47, (MR_Integer) 5))));
      parse_tree__prog_data__get_ctor_arg_types_2_p_0(CtorArgs_53, &CtorArgTypes0_55);
      if ((TypeParams_50 == (MR_Word) ((MR_Unsigned) 0U)))
        ArgTypesY0_30 = CtorArgTypes0_55;
      else
      {
        MR_Word Subst_58;

        mercury__map__from_corresponding_lists_3_p_0((MR_Word) (&check_hlds__modecheck_coerce_scalar_common_2[1]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), TypeParams_50, TypeArgs_45, &Subst_58);
        parse_tree__prog_type_subst__apply_subst_to_type_list_3_p_0(Subst_58, CtorArgTypes0_55, &ArgTypesY0_30);
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
    Var_35 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_35, 0) = ((MR_Box) (&check_hlds__modecheck_coerce_scalar_common_6[0]));
    MR_hl_field(0, Var_35, 1) = ((MR_Box) (check_hlds__modecheck_coerce__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_99_104_101_99_107_95_99_111_101_114_99_101_95_102_114_111_109_95_103_114_111_117_110_100_95_109_97_107_101_95_98_111_117_110_100_95_102_117_110_99_116_111_114_95_95_91_54_93_95_48_9_p_0_1));
    MR_hl_field(0, Var_35, 2) = ((MR_Box) ((MR_Integer) 5));
    MR_hl_field(0, Var_35, 3) = ((MR_Box) (ModuleInfo_10));
    MR_hl_field(0, Var_35, 4) = ((MR_Box) (TVarSet_11));
    MR_hl_field(0, Var_35, 5) = ((MR_Box) (LiveX_12));
    MR_hl_field(0, Var_35, 6) = ((MR_Box) (UniqX_13));
    MR_hl_field(0, Var_35, 7) = ((MR_Box) (SeenTypes_14));
  }
  mercury__list__map_corresponding_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), Var_35, ArgTypesX_29, ArgTypesY_31, &ArgInstsY_32);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *FunctorY_18 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (ConsIdY_28));
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
    MR_Word ModuleInfo0_18;
    MR_Word InstMap_19;

    check_hlds__mode_info__mode_info_get_module_info_2_p_0(STATE_VARIABLE_ModeInfo_0_30, &ModuleInfo0_18);
    check_hlds__mode_info__mode_info_get_instmap_2_p_0(STATE_VARIABLE_ModeInfo_0_30, &InstMap_19);
    succeeded = hlds__instmap__instmap_is_reachable_1_p_0(InstMap_19);
    if (succeeded)
    {
      MR_Word VarTable_20;
      MR_Word TypeX_21;
      MR_Word TypeY_22;
      MR_Word InstX_23;
      MR_Word InstY_24;

      check_hlds__mode_info__mode_info_get_var_table_2_p_0(STATE_VARIABLE_ModeInfo_0_30, &VarTable_20);
      parse_tree__var_table__lookup_var_type_3_p_0(VarTable_20, X_16, &TypeX_21);
      parse_tree__var_table__lookup_var_type_3_p_0(VarTable_20, Y_17, &TypeY_22);
      hlds__instmap__instmap_lookup_var_3_p_0(InstMap_19, X_16, &InstX_23);
      hlds__instmap__instmap_lookup_var_3_p_0(InstMap_19, Y_17, &InstY_24);
      succeeded = check_hlds__inst_test__inst_is_ground_2_p_0(ModuleInfo0_18, InstX_23);
      if (succeeded)
      {
        succeeded = check_hlds__inst_test__inst_is_clobbered_2_p_0(ModuleInfo0_18, InstX_23);
        succeeded = !(succeeded);
      }
      if (succeeded)
      {
        MR_Word Res_25;

        check_hlds__modecheck_coerce__modecheck_coerce_vars_10_p_0(ModuleInfo0_18, X_16, Y_17, TypeX_21, TypeY_22, InstX_23, InstY_24, &Res_25, STATE_VARIABLE_ModeInfo_0_30, STATE_VARIABLE_ModeInfo_31);
        if ((Res_25 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          *Args_10 = Args0_9;
          *Modes_12 = Modes0_11;
          *Det_13 = (MR_Integer) 6;
          *ExtraGoals_14 = (MR_Word) ((MR_Unsigned) 0U);
        }
        else
        {
          *Args_10 = ((MR_Word) ((MR_hl_field(1, Res_25, (MR_Integer) 0))));
          *Modes_12 = ((MR_Word) ((MR_hl_field(1, Res_25, (MR_Integer) 1))));
          *ExtraGoals_14 = ((MR_Word) ((MR_hl_field(1, Res_25, (MR_Integer) 2))));
          *Det_13 = (MR_Integer) 0;
        }
      }
      else
      {
        MR_Word WaitingVars_26;
        MR_Word Reason_27;
        MR_Word Error_28;
        MR_Word ModeError_29;

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
        ModeError_29 = (MR_Word) (MR_mkword(1, (MR_Word) (Error_28)));
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
  MR_Word * Res_18,
  MR_Word STATE_VARIABLE_ModeInfo_0_44,
  MR_Word * STATE_VARIABLE_ModeInfo_45)
{
  MR_bool succeeded;
  MR_Word PredId_20;
  MR_Word PredInfo_21;
  MR_Word TVarSet_22;
  MR_Word LiveX_23;
  MR_Word LiveY_24;
  MR_Word BothLive_25;
  MR_Word ExpandedInsts0_27;
  MR_Word MaybeFinalInstY_28;

  check_hlds__mode_info__mode_info_get_pred_id_2_p_0(STATE_VARIABLE_ModeInfo_0_44, &PredId_20);
  hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo0_11, PredId_20, &PredInfo_21);
  hlds__hlds_pred__pred_info_get_typevarset_2_p_0(PredInfo_21, &TVarSet_22);
  check_hlds__mode_info__mode_info_var_is_live_3_p_0(STATE_VARIABLE_ModeInfo_0_44, X_12, &LiveX_23);
  check_hlds__mode_info__mode_info_var_is_live_3_p_0(STATE_VARIABLE_ModeInfo_0_44, Y_13, &LiveY_24);
  succeeded = (LiveX_23 == (MR_Integer) 0);
  if (succeeded)
    succeeded = (LiveY_24 == (MR_Integer) 0);
  if (succeeded)
    BothLive_25 = (MR_Integer) 0;
  else
    BothLive_25 = (MR_Integer) 1;
  mercury__set__init_1_p_0((MR_Word) (&check_hlds__modecheck_coerce_scalar_common_1[0]), &ExpandedInsts0_27);
  check_hlds__modecheck_coerce__modecheck_coerce_make_inst_9_p_0(ModuleInfo0_11, TVarSet_22, LiveX_23, (MR_Word) ((MR_Unsigned) 0U), TypeX_14, TypeY_15, ExpandedInsts0_27, InstX_16, &MaybeFinalInstY_28);
  if (((MR_tag((MR_Word) MaybeFinalInstY_28)) == (MR_Integer) 0))
  {
    MR_Word Error_41 = (MR_Word) ((MR_Word) (MaybeFinalInstY_28));
    MR_Word ModeError_42 = (MR_Word) (MR_mkword(1, (MR_Word) (Error_41)));
    MR_Word WaitingVars_43;

    parse_tree__set_of_var__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), &WaitingVars_43);
    check_hlds__mode_info__mode_info_error_4_p_0(WaitingVars_43, ModeError_42, STATE_VARIABLE_ModeInfo_0_44, STATE_VARIABLE_ModeInfo_45);
    *Res_18 = (MR_Word) ((MR_Unsigned) 0U);
  }
  else
  {
    MR_Word FinalInstY_29 = ((MR_Word) ((MR_hl_field(1, MaybeFinalInstY_28, (MR_Integer) 0))));
    MR_Word ModuleInfo_33;
    MR_Word FinalInstX_34;
    MR_Word ModeX_35;
    MR_Word STATE_VARIABLE_ModeInfo_50_50;
    MR_Word STATE_VARIABLE_ModeInfo_52_52;
    MR_Word UnifyInstX_30;
    MR_Word ModuleInfo1_32;
    MR_Word Var_46;
    MR_Word _Det_31;

    Var_46 = parse_tree__prog_mode__ground_inst_0_f_0();
    succeeded = check_hlds__inst_abstract_unify__abstractly_unify_inst_8_p_0(BothLive_25, InstX_16, Var_46, (MR_Integer) 0, &UnifyInstX_30, &_Det_31, ModuleInfo0_11, &ModuleInfo1_32);
    if (succeeded)
    {
      ModuleInfo_33 = ModuleInfo1_32;
      FinalInstX_34 = UnifyInstX_30;
    }
    else
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.modecheck_coerce.modecheck_coerce_vars\'/10", (MR_String) "abstractly_unify_inst failed");
        return;
      }
    check_hlds__mode_info__mode_info_set_module_info_3_p_0(ModuleInfo_33, STATE_VARIABLE_ModeInfo_0_44, &STATE_VARIABLE_ModeInfo_50_50);
    check_hlds__modecheck_util__modecheck_set_var_inst_5_p_0(X_12, FinalInstX_34, (MR_Word) ((MR_Unsigned) 0U), STATE_VARIABLE_ModeInfo_50_50, &STATE_VARIABLE_ModeInfo_52_52);
    {
      ModeX_35 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, ModeX_35, 0) = ((MR_Box) (InstX_16));
      MR_hl_field(0, ModeX_35, 1) = ((MR_Box) (FinalInstX_34));
    }
    succeeded = check_hlds__inst_test__inst_is_free_2_p_0(ModuleInfo_33, InstY_17);
    if (succeeded)
    {
      MR_Word ModeY_36;
      MR_Word Var_55;
      MR_Word Var_56;
      MR_Word Var_58;
      MR_Word Var_59;

      check_hlds__modecheck_util__modecheck_set_var_inst_5_p_0(Y_13, FinalInstY_29, (MR_Word) ((MR_Unsigned) 0U), STATE_VARIABLE_ModeInfo_52_52, STATE_VARIABLE_ModeInfo_45);
      {
        ModeY_36 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, ModeY_36, 0) = ((MR_Box) (InstY_17));
        MR_hl_field(0, ModeY_36, 1) = ((MR_Box) (FinalInstY_29));
      }
      {
        Var_56 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_56, 0) = ((MR_Box) (Y_13));
        MR_hl_field(1, Var_56, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_55 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_55, 0) = ((MR_Box) (X_12));
        MR_hl_field(1, Var_55, 1) = ((MR_Box) (Var_56));
      }
      {
        Var_59 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_59, 0) = ((MR_Box) (ModeY_36));
        MR_hl_field(1, Var_59, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_58 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_58, 0) = ((MR_Box) (ModeX_35));
        MR_hl_field(1, Var_58, 1) = ((MR_Box) (Var_59));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
        *Res_18 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Var_55));
        MR_hl_field(1, base, 1) = ((MR_Box) (Var_58));
        MR_hl_field(1, base, 2) = ((MR_Box) ((MR_Unsigned) 0U));
      }
    }
    else
    {
      MR_Word YPrime_37;
      MR_Word ExtraGoal_38;
      MR_Word ExtraGoals_39;
      MR_Word ModeYPrime_40;
      MR_Word STATE_VARIABLE_ModeInfo_62_62;
      MR_Word Var_64;
      MR_Word Var_68;
      MR_Word Var_69;
      MR_Word Var_70;
      MR_Word Var_72;
      MR_Word Var_73;
      MR_Word ModuleInfo_77;
      MR_Word VarIsDummy_78;
      MR_Word VarEntry_79;
      MR_Word VarTable0_80;
      MR_Word VarTable_81;

      check_hlds__mode_info__mode_info_get_module_info_2_p_0(STATE_VARIABLE_ModeInfo_52_52, &ModuleInfo_77);
      VarIsDummy_78 = check_hlds__type_util__is_type_a_dummy_2_f_0(ModuleInfo_77, TypeY_15);
      {
        VarEntry_79 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, VarEntry_79, 0) = ((MR_Box) ((MR_String) ""));
        MR_hl_field(0, VarEntry_79, 1) = ((MR_Box) (TypeY_15));
        MR_hl_field(0, VarEntry_79, 2) = (MR_Box) ((MR_Unsigned) (VarIsDummy_78));
      }
      check_hlds__mode_info__mode_info_get_var_table_2_p_0(STATE_VARIABLE_ModeInfo_52_52, &VarTable0_80);
      parse_tree__var_table__add_var_entry_4_p_0(VarEntry_79, &YPrime_37, VarTable0_80, &VarTable_81);
      check_hlds__mode_info__mode_info_set_var_table_3_p_0(VarTable_81, STATE_VARIABLE_ModeInfo_52_52, &STATE_VARIABLE_ModeInfo_62_62);
      check_hlds__modecheck_unify__create_var_var_unification_5_p_0(Y_13, YPrime_37, TypeY_15, STATE_VARIABLE_ModeInfo_62_62, &ExtraGoal_38);
      {
        Var_64 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_64, 0) = ((MR_Box) (ExtraGoal_38));
        MR_hl_field(1, Var_64, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        ExtraGoals_39 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, ExtraGoals_39, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(1, ExtraGoals_39, 1) = ((MR_Box) (Var_64));
      }
      check_hlds__modecheck_util__modecheck_set_var_inst_5_p_0(YPrime_37, FinalInstY_29, (MR_Word) ((MR_Unsigned) 0U), STATE_VARIABLE_ModeInfo_62_62, STATE_VARIABLE_ModeInfo_45);
      Var_68 = parse_tree__prog_mode__free_inst_0_f_0();
      {
        ModeYPrime_40 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, ModeYPrime_40, 0) = ((MR_Box) (Var_68));
        MR_hl_field(0, ModeYPrime_40, 1) = ((MR_Box) (FinalInstY_29));
      }
      {
        Var_70 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_70, 0) = ((MR_Box) (YPrime_37));
        MR_hl_field(1, Var_70, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_69 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_69, 0) = ((MR_Box) (X_12));
        MR_hl_field(1, Var_69, 1) = ((MR_Box) (Var_70));
      }
      {
        Var_73 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_73, 0) = ((MR_Box) (ModeYPrime_40));
        MR_hl_field(1, Var_73, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_72 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_72, 0) = ((MR_Box) (ModeX_35));
        MR_hl_field(1, Var_72, 1) = ((MR_Box) (Var_73));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
        *Res_18 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Var_69));
        MR_hl_field(1, base, 1) = ((MR_Box) (Var_72));
        MR_hl_field(1, base, 2) = ((MR_Box) (ExtraGoals_39));
      }
    }
  }
}

static void MR_CALL 
check_hlds__modecheck_coerce__modecheck_coerce_make_inst_9_p_0(
  MR_Word ModuleInfo_10,
  MR_Word TVarSet_11,
  MR_Word LiveX_12,
  MR_Word RevTermPath0_13,
  MR_Word TypeX_14,
  MR_Word TypeY_15,
  MR_Word ExpandedInsts0_16,
  MR_Word InstX_17,
  MR_Word * Res_18)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) InstX_17)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(InstX_17)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.modecheck_coerce.modecheck_coerce_make_inst\'/9", (MR_String) "free inst");
              return;
            }
            break;
          case (MR_Integer) 1:
            *Res_18 = (MR_Word) (MR_mkword(1, &check_hlds__modecheck_coerce_scalar_common_3[0]));
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word HOInstInfoX_24 = ((MR_Word) ((MR_hl_field(1, InstX_17, (MR_Integer) 1))));
          MR_Word UniqX_48 = ((MR_Unsigned) ((MR_hl_field(1, InstX_17, (MR_Integer) 0))) & (MR_Integer) 7);

          if ((HOInstInfoX_24 == (MR_Word) ((MR_Unsigned) 0U)))
            check_hlds__modecheck_coerce__modecheck_coerce_from_ground_make_inst_9_p_0(ModuleInfo_10, TVarSet_11, LiveX_12, UniqX_48, RevTermPath0_13, TypeX_14, TypeY_15, InstX_17, Res_18);
          else
          {
            MR_Word UniqY_26;
            MR_Word InstY_27;

            switch (UniqX_48) {
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
                switch (LiveX_12) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 1:
                    UniqY_26 = UniqX_48;
                    break;
                  case (MR_Integer) 0:
                    UniqY_26 = (MR_Integer) 0;
                    break;
                }
                break;
              case (MR_Integer) 0:
                UniqY_26 = (MR_Integer) 0;
                break;
            }
            {
              InstY_27 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, InstY_27, 0) = (MR_Box) ((MR_Unsigned) (UniqY_26));
              MR_hl_field(1, InstY_27, 1) = ((MR_Box) (HOInstInfoX_24));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              *Res_18 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (InstY_27));
            }
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word UniqX_21 = ((MR_Unsigned) ((MR_hl_field(2, InstX_17, (MR_Integer) 0))) & (MR_Integer) 7);
          MR_Word FunctorsX_23 = ((MR_Word) ((MR_hl_field(2, InstX_17, (MR_Integer) 2))));
          MR_Word FunctorsY_57;
          MR_Word BadConsIds_58;
          MR_Word MaybeError0_59;

          check_hlds__modecheck_coerce__modecheck_coerce_from_bound_make_bound_functors_13_p_0(ModuleInfo_10, TVarSet_11, LiveX_12, RevTermPath0_13, TypeX_14, TypeY_15, ExpandedInsts0_16, InstX_17, FunctorsX_23, &FunctorsY_57, &BadConsIds_58, (MR_Word) ((MR_Unsigned) 0U), &MaybeError0_59);
          if ((BadConsIds_58 == (MR_Word) ((MR_Unsigned) 0U)))
            if ((MaybeError0_59 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              MR_Word UniqY_60;
              MR_Word InstY_62;

              UniqY_60 = check_hlds__modecheck_coerce__uniqueness_for_coerce_result_2_f_0(LiveX_12, UniqX_21);
              {
                InstY_62 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(2, InstY_62, 0) = (MR_Box) ((MR_Unsigned) (UniqY_60));
                MR_hl_field(2, InstY_62, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__modecheck_coerce_scalar_common_4[0])));
                MR_hl_field(2, InstY_62, 2) = ((MR_Box) (FunctorsY_57));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                *Res_18 = base;
                MR_hl_field(1, base, 0) = ((MR_Box) (InstY_62));
              }
            }
            else
            {
              MR_Word Error_63 = ((MR_Word) ((MR_hl_field(1, MaybeError0_59, (MR_Integer) 0))));

              *Res_18 = (MR_Word) ((MR_Word) (Error_63));
            }
          else
          {
            MR_Word TermPath_66;
            MR_Word Reason_67;
            MR_Word Error_69;

            mercury__list__reverse_2_p_0((MR_Word) (&check_hlds__mode_errors__check_hlds__mode_errors__type_ctor_info_coerce_error_term_path_step_0), RevTermPath0_13, &TermPath_66);
            {
              Reason_67 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(2, Reason_67, 0) = ((MR_Box) (BadConsIds_58));
            }
            {
              Error_69 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Error_69, 0) = ((MR_Box) (TermPath_66));
              MR_hl_field(0, Error_69, 1) = ((MR_Box) (TypeX_14));
              MR_hl_field(0, Error_69, 2) = ((MR_Box) (TypeY_15));
              MR_hl_field(0, Error_69, 3) = ((MR_Box) (Reason_67));
            }
            *Res_18 = (MR_Word) ((MR_Word) (Error_69));
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, InstX_17, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word InstNameX_34 = ((MR_Word) ((MR_hl_field(3, InstX_17, (MR_Integer) 1))));
              MR_Word ExpandedInsts1_35;
              MR_Word Var_45;

              {
                Var_45 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_45, 0) = ((MR_Box) (InstNameX_34));
                MR_hl_field(0, Var_45, 1) = ((MR_Box) (TypeX_14));
              }
              succeeded = mercury__set__insert_new_3_p_0((MR_Word) (&check_hlds__modecheck_coerce_scalar_common_1[0]), ((MR_Box) (Var_45)), ExpandedInsts0_16, &ExpandedInsts1_35);
              if (succeeded)
              {
                MR_Word InstX1_36;
                MR_Word next_value_of_ExpandedInsts0_16;
                MR_Word next_value_of_InstX_17;

                check_hlds__inst_lookup__inst_lookup_3_p_0(ModuleInfo_10, InstNameX_34, &InstX1_36);
                // direct tailcall eliminated
                ;
                next_value_of_ExpandedInsts0_16 = ExpandedInsts1_35;
                next_value_of_InstX_17 = InstX1_36;
                ExpandedInsts0_16 = next_value_of_ExpandedInsts0_16;
                InstX_17 = next_value_of_InstX_17;
                continue;
              }
              else
              {
                succeeded = check_hlds__modecheck_coerce__is_user_inst_1_p_0(InstNameX_34);
                if (succeeded)
                {
                  succeeded = check_hlds__modecheck_coerce__is_subtype_4_p_0(ModuleInfo_10, TVarSet_11, TypeX_14, TypeY_15);
                  if (succeeded)
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                      *Res_18 = base;
                      MR_hl_field(1, base, 0) = ((MR_Box) (InstX_17));
                    }
                  else
                  {
                    MR_Word TermPath_37;
                    MR_Word Reason_38;
                    MR_Word Error_54;

                    mercury__list__reverse_2_p_0((MR_Word) (&check_hlds__mode_errors__check_hlds__mode_errors__type_ctor_info_coerce_error_term_path_step_0), RevTermPath0_13, &TermPath_37);
                    {
                      Reason_38 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(3, Reason_38, 0) = ((MR_Box) (InstX_17));
                    }
                    {
                      Error_54 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(0, Error_54, 0) = ((MR_Box) (TermPath_37));
                      MR_hl_field(0, Error_54, 1) = ((MR_Box) (TypeX_14));
                      MR_hl_field(0, Error_54, 2) = ((MR_Box) (TypeY_15));
                      MR_hl_field(0, Error_54, 3) = ((MR_Box) (Reason_38));
                    }
                    *Res_18 = (MR_Word) ((MR_Word) (Error_54));
                  }
                }
                else
                  {
                    mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.modecheck_coerce.modecheck_coerce_make_inst\'/9", (MR_String) "not user-defined inst");
                    return;
                  }
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word InstVars_29 = ((MR_Word) ((MR_hl_field(3, InstX_17, (MR_Integer) 1))));
              MR_Word SubInstX_30 = ((MR_Word) ((MR_hl_field(3, InstX_17, (MR_Integer) 2))));
              MR_Word SubRes_31;

              check_hlds__modecheck_coerce__modecheck_coerce_make_inst_9_p_0(ModuleInfo_10, TVarSet_11, LiveX_12, RevTermPath0_13, TypeX_14, TypeY_15, ExpandedInsts0_16, SubInstX_30, &SubRes_31);
              if (((MR_tag((MR_Word) SubRes_31)) == (MR_Integer) 0))
                *Res_18 = SubRes_31;
              else
              {
                MR_Word SubInstY_32 = ((MR_Word) ((MR_hl_field(1, SubRes_31, (MR_Integer) 0))));
                MR_Word InstY_50;

                {
                  InstY_50 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(3, InstY_50, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                  MR_hl_field(3, InstY_50, 1) = ((MR_Box) (InstVars_29));
                  MR_hl_field(3, InstY_50, 2) = ((MR_Box) (SubInstY_32));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  *Res_18 = base;
                  MR_hl_field(1, base, 0) = ((MR_Box) (InstY_50));
                }
              }
            }
            break;
          case (MR_Integer) 2:
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.modecheck_coerce.modecheck_coerce_make_inst\'/9", (MR_String) "any inst");
              return;
            }
            break;
          case (MR_Integer) 3:
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.modecheck_coerce.modecheck_coerce_make_inst\'/9", (MR_String) "uninstantiated inst parameter");
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
check_hlds__modecheck_coerce__modecheck_coerce_from_bound_make_bound_functor_arg_insts_11_p_0(
  MR_Word ModuleInfo_12,
  MR_Word TVarSet_13,
  MR_Word LiveX_14,
  MR_Word RevTermPath0_15,
  MR_Word ExpandedInsts0_16,
  MR_Word ConsIdX_17,
  MR_Integer CurArgNum_18,
  MR_Word ArgTypesX_19,
  MR_Word ArgTypesY_20,
  MR_Word ArgInstsX_21,
  MR_Word * MaybeArgInstsY_22)
{
  MR_bool succeeded = (ArgTypesX_19 == (MR_Word) ((MR_Unsigned) 0U));

  if (succeeded)
  {
    succeeded = (ArgTypesY_20 == (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
      succeeded = (ArgInstsX_21 == (MR_Word) ((MR_Unsigned) 0U));
  }
  if (succeeded)
    *MaybeArgInstsY_22 = (MR_Word) (MR_mkword(1, &check_hlds__modecheck_coerce_scalar_common_3[1]));
  else
  {
    MR_Word HeadArgTypeX_23;
    MR_Word TailArgTypesX_24;
    MR_Word HeadArgTypeY_25;
    MR_Word TailArgTypesY_26;
    MR_Word HeadArgInstX_27;
    MR_Word TailArgInstsX_28;

    succeeded = (ArgTypesX_19 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      HeadArgTypeX_23 = ((MR_Word) ((MR_hl_field(1, ArgTypesX_19, (MR_Integer) 0))));
      TailArgTypesX_24 = ((MR_Word) ((MR_hl_field(1, ArgTypesX_19, (MR_Integer) 1))));
      succeeded = (ArgTypesY_20 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        HeadArgTypeY_25 = ((MR_Word) ((MR_hl_field(1, ArgTypesY_20, (MR_Integer) 0))));
        TailArgTypesY_26 = ((MR_Word) ((MR_hl_field(1, ArgTypesY_20, (MR_Integer) 1))));
        succeeded = (ArgInstsX_21 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          HeadArgInstX_27 = ((MR_Word) ((MR_hl_field(1, ArgInstsX_21, (MR_Integer) 0))));
          TailArgInstsX_28 = ((MR_Word) ((MR_hl_field(1, ArgInstsX_21, (MR_Integer) 1))));
        }
      }
    }
    if (succeeded)
    {
      MR_Word Step_29;
      MR_Word RevTermPath1_30;
      MR_Word MaybeHeadArgInstY_31;

      {
        Step_29 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Step_29, 0) = ((MR_Box) (ConsIdX_17));
        MR_hl_field(0, Step_29, 1) = ((MR_Box) (CurArgNum_18));
      }
      {
        RevTermPath1_30 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, RevTermPath1_30, 0) = ((MR_Box) (Step_29));
        MR_hl_field(1, RevTermPath1_30, 1) = ((MR_Box) (RevTermPath0_15));
      }
      check_hlds__modecheck_coerce__modecheck_coerce_make_inst_9_p_0(ModuleInfo_12, TVarSet_13, LiveX_14, RevTermPath1_30, HeadArgTypeX_23, HeadArgTypeY_25, ExpandedInsts0_16, HeadArgInstX_27, &MaybeHeadArgInstY_31);
      if (((MR_tag((MR_Word) MaybeHeadArgInstY_31)) == (MR_Integer) 0))
        *MaybeArgInstsY_22 = (MR_Word) (MaybeHeadArgInstY_31);
      else
      {
        MR_Word HeadArgInstY_32 = ((MR_Word) ((MR_hl_field(1, MaybeHeadArgInstY_31, (MR_Integer) 0))));
        MR_Word MaybeTailArgInstsY_33;
        MR_Integer Var_37 = (MR_Integer) ((MR_Unsigned) CurArgNum_18 + (MR_Unsigned) 1);

        check_hlds__modecheck_coerce__modecheck_coerce_from_bound_make_bound_functor_arg_insts_11_p_0(ModuleInfo_12, TVarSet_13, LiveX_14, RevTermPath0_15, ExpandedInsts0_16, ConsIdX_17, Var_37, TailArgTypesX_24, TailArgTypesY_26, TailArgInstsX_28, &MaybeTailArgInstsY_33);
        if (((MR_tag((MR_Word) MaybeTailArgInstsY_33)) == (MR_Integer) 0))
          *MaybeArgInstsY_22 = MaybeTailArgInstsY_33;
        else
        {
          MR_Word TailArgInstsY_34 = ((MR_Word) ((MR_hl_field(1, MaybeTailArgInstsY_33, (MR_Integer) 0))));
          MR_Word Var_39;

          {
            Var_39 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_39, 0) = ((MR_Box) (HeadArgInstY_32));
            MR_hl_field(1, Var_39, 1) = ((MR_Box) (TailArgInstsY_34));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            *MaybeArgInstsY_22 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) (Var_39));
          }
        }
      }
    }
    else
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.modecheck_coerce.modecheck_coerce_from_bound_make_bound_functor_arg_insts\'/11", (MR_String) "length mismatch");
        return;
      }
  }
}

static MR_bool MR_CALL 
check_hlds__modecheck_coerce__modecheck_coerce_from_bound_make_bound_functors_13_p_0_2(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = check_hlds__modecheck_coerce__IntroducedFrom__pred__modecheck_coerce_from_bound_make_bound_functor__499__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))));
  return succeeded;
}

static MR_bool MR_CALL 
check_hlds__modecheck_coerce__modecheck_coerce_from_bound_make_bound_functors_13_p_0_1(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = check_hlds__modecheck_coerce__IntroducedFrom__pred__modecheck_coerce_from_bound_make_bound_functor__497__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))));
  return succeeded;
}

static void MR_CALL 
check_hlds__modecheck_coerce__modecheck_coerce_from_bound_make_bound_functors_13_p_0(
  MR_Word ModuleInfo_14,
  MR_Word TVarSet_15,
  MR_Word LiveX_16,
  MR_Word RevTermPath0_17,
  MR_Word TypeX_18,
  MR_Word TypeY_19,
  MR_Word ExpandedInsts0_20,
  MR_Word InstX_21,
  MR_Word FunctorsX_22,
  MR_Word * FunctorsY_23,
  MR_Word * BadConsIds_24,
  MR_Word STATE_VARIABLE_MaybeError_0_33,
  MR_Word * STATE_VARIABLE_MaybeError_34)
{
  MR_bool succeeded;

  if ((FunctorsX_22 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *FunctorsY_23 = (MR_Word) ((MR_Unsigned) 0U);
    *BadConsIds_24 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_MaybeError_34 = STATE_VARIABLE_MaybeError_0_33;
  }
  else
  {
    MR_Word HeadFunctorX_26 = ((MR_Word) ((MR_hl_field(1, FunctorsX_22, (MR_Integer) 0))));
    MR_Word TailFunctorsX_27 = ((MR_Word) ((MR_hl_field(1, FunctorsX_22, (MR_Integer) 1))));
    MR_Word MaybeHeadFunctorY_28;
    MR_Word TailFunctorsY_29;
    MR_Word TailBadConsIds_30;
    MR_Word STATE_VARIABLE_MaybeError_35_35;
    MR_Word ConsIdX_36 = ((MR_Word) ((MR_hl_field(0, HeadFunctorX_26, (MR_Integer) 0))));
    MR_Word ArgInstsX_37 = ((MR_Word) ((MR_hl_field(0, HeadFunctorX_26, (MR_Integer) 1))));

    switch (MR_tag((MR_Word) ConsIdX_36)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.modecheck_coerce.modecheck_coerce_from_bound_make_bound_functor\'/12", (MR_String) "unsupported cons_id");
          return;
        }
        break;
      case (MR_Integer) 1:
      case (MR_Integer) 2:
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.modecheck_coerce.modecheck_coerce_from_bound_make_bound_functor\'/12", (MR_String) "unsupported cons_id");
          return;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, ConsIdX_36, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 1:
          case (MR_Integer) 4:
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
          case (MR_Integer) 2:
            {
              MR_Word ConsIdY_38;
              MR_Word GetArgTypesRes_39;

              check_hlds__modecheck_coerce__get_bound_functor_cons_and_arg_types_6_p_0(ModuleInfo_14, TypeX_18, TypeY_19, ConsIdX_36, &ConsIdY_38, &GetArgTypesRes_39);
              switch (MR_tag((MR_Word) GetArgTypesRes_39)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(GetArgTypesRes_39)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        MR_Word Error_62;
                        MR_Word TermPath_63;
                        MR_Word Reason_64;

                        mercury__list__reverse_2_p_0((MR_Word) (&check_hlds__mode_errors__check_hlds__mode_errors__type_ctor_info_coerce_error_term_path_step_0), RevTermPath0_17, &TermPath_63);
                        {
                          Reason_64 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(1, Reason_64, 0) = ((MR_Box) (InstX_21));
                        }
                        {
                          Error_62 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(0, Error_62, 0) = ((MR_Box) (TermPath_63));
                          MR_hl_field(0, Error_62, 1) = ((MR_Box) (TypeX_18));
                          MR_hl_field(0, Error_62, 2) = ((MR_Box) (TypeY_19));
                          MR_hl_field(0, Error_62, 3) = ((MR_Box) (Reason_64));
                        }
                        check_hlds__modecheck_coerce__maybe_keep_error_3_p_0(Error_62, STATE_VARIABLE_MaybeError_0_33, &STATE_VARIABLE_MaybeError_35_35);
                        MaybeHeadFunctorY_28 = (MR_Word) ((MR_Unsigned) 0U);
                      }
                      break;
                    case (MR_Integer) 1:
                      {
                        {
                          MaybeHeadFunctorY_28 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(2, MaybeHeadFunctorY_28, 0) = ((MR_Box) (ConsIdY_38));
                        }
                        STATE_VARIABLE_MaybeError_35_35 = STATE_VARIABLE_MaybeError_0_33;
                      }
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word ArgTypesX_40 = ((MR_Word) ((MR_hl_field(1, GetArgTypesRes_39, (MR_Integer) 0))));
                    MR_Word ArgTypesY_41 = ((MR_Word) ((MR_hl_field(1, GetArgTypesRes_39, (MR_Integer) 1))));
                    MR_Integer Arity_42 = ((MR_Integer) ((MR_hl_field(1, GetArgTypesRes_39, (MR_Integer) 2))));
                    MR_Integer Var_72;

                    mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), ArgInstsX_37, &Var_72);
                    succeeded = (Arity_42 == Var_72);
                    if (succeeded)
                    {
                      MR_Word MaybeArgInstsY_43;

                      check_hlds__modecheck_coerce__modecheck_coerce_from_bound_make_bound_functor_arg_insts_11_p_0(ModuleInfo_14, TVarSet_15, LiveX_16, RevTermPath0_17, ExpandedInsts0_20, ConsIdX_36, (MR_Integer) 1, ArgTypesX_40, ArgTypesY_41, ArgInstsX_37, &MaybeArgInstsY_43);
                      if (((MR_tag((MR_Word) MaybeArgInstsY_43)) == (MR_Integer) 0))
                      {
                        MR_Word Error_46 = (MR_Word) ((MR_Word) (MaybeArgInstsY_43));

                        check_hlds__modecheck_coerce__maybe_keep_error_3_p_0(Error_46, STATE_VARIABLE_MaybeError_0_33, &STATE_VARIABLE_MaybeError_35_35);
                        MaybeHeadFunctorY_28 = (MR_Word) ((MR_Unsigned) 0U);
                      }
                      else
                      {
                        MR_Word ArgInstsY_44 = ((MR_Word) ((MR_hl_field(1, MaybeArgInstsY_43, (MR_Integer) 0))));
                        MR_Word FunctorY_45;

                        {
                          FunctorY_45 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(0, FunctorY_45, 0) = ((MR_Box) (ConsIdY_38));
                          MR_hl_field(0, FunctorY_45, 1) = ((MR_Box) (ArgInstsY_44));
                        }
                        MaybeHeadFunctorY_28 = (MR_Word) (MR_mkword(1, (MR_Word) (FunctorY_45)));
                        STATE_VARIABLE_MaybeError_35_35 = STATE_VARIABLE_MaybeError_0_33;
                      }
                    }
                    else
                    {
                      MR_Word TermPath_47;
                      MR_Word Reason_48;
                      MR_Word Error_61;

                      mercury__list__reverse_2_p_0((MR_Word) (&check_hlds__mode_errors__check_hlds__mode_errors__type_ctor_info_coerce_error_term_path_step_0), RevTermPath0_17, &TermPath_47);
                      {
                        Reason_48 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(1, Reason_48, 0) = ((MR_Box) (InstX_21));
                      }
                      {
                        Error_61 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(0, Error_61, 0) = ((MR_Box) (TermPath_47));
                        MR_hl_field(0, Error_61, 1) = ((MR_Box) (TypeX_18));
                        MR_hl_field(0, Error_61, 2) = ((MR_Box) (TypeY_19));
                        MR_hl_field(0, Error_61, 3) = ((MR_Box) (Reason_48));
                      }
                      check_hlds__modecheck_coerce__maybe_keep_error_3_p_0(Error_61, STATE_VARIABLE_MaybeError_0_33, &STATE_VARIABLE_MaybeError_35_35);
                      MaybeHeadFunctorY_28 = (MR_Word) ((MR_Unsigned) 0U);
                    }
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 3:
            {
              mercury__require__sorry_2_p_0((MR_String) "predicate \140check_hlds.modecheck_coerce.modecheck_coerce_from_bound_make_bound_functor\'/12", (MR_String) "tuple_cons");
              return;
            }
            break;
          case (MR_Integer) 5:
          case (MR_Integer) 6:
          case (MR_Integer) 7:
          case (MR_Integer) 8:
            {
              succeeded = check_hlds__modecheck_coerce__cons_id_matches_builtin_type_2_p_0(ConsIdX_36, TypeX_18);
              if (succeeded)
              {
                MR_Word Var_52;
                MR_Word Var_55;

                {
                  Var_52 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, Var_52, 0) = ((MR_Box) (&check_hlds__modecheck_coerce_scalar_common_4[1]));
                  MR_hl_field(0, Var_52, 1) = ((MR_Box) (check_hlds__modecheck_coerce__modecheck_coerce_from_bound_make_bound_functors_13_p_0_1));
                  MR_hl_field(0, Var_52, 2) = ((MR_Box) ((MR_Integer) 2));
                  MR_hl_field(0, Var_52, 3) = ((MR_Box) (TypeX_18));
                  MR_hl_field(0, Var_52, 4) = ((MR_Box) (TypeY_19));
                }
                mercury__require__expect_3_p_0(Var_52, (MR_String) "predicate \140check_hlds.modecheck_coerce.modecheck_coerce_from_bound_make_bound_functor\'/12", (MR_String) "coercion between different builtin types");
                {
                  Var_55 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, Var_55, 0) = ((MR_Box) (&check_hlds__modecheck_coerce_scalar_common_4[2]));
                  MR_hl_field(0, Var_55, 1) = ((MR_Box) (check_hlds__modecheck_coerce__modecheck_coerce_from_bound_make_bound_functors_13_p_0_2));
                  MR_hl_field(0, Var_55, 2) = ((MR_Box) ((MR_Integer) 2));
                  MR_hl_field(0, Var_55, 3) = ((MR_Box) (ArgInstsX_37));
                  MR_hl_field(0, Var_55, 4) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                mercury__require__expect_3_p_0(Var_55, (MR_String) "predicate \140check_hlds.modecheck_coerce.modecheck_coerce_from_bound_make_bound_functor\'/12", (MR_String) "bound functor literal has arguments");
                MaybeHeadFunctorY_28 = (MR_Word) (MR_mkword(1, (MR_Word) (HeadFunctorX_26)));
                STATE_VARIABLE_MaybeError_35_35 = STATE_VARIABLE_MaybeError_0_33;
              }
              else
              {
                MR_Word Error_65;
                MR_Word TermPath_66;
                MR_Word Reason_67;

                mercury__list__reverse_2_p_0((MR_Word) (&check_hlds__mode_errors__check_hlds__mode_errors__type_ctor_info_coerce_error_term_path_step_0), RevTermPath0_17, &TermPath_66);
                {
                  Reason_67 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Reason_67, 0) = ((MR_Box) (InstX_21));
                }
                {
                  Error_65 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, Error_65, 0) = ((MR_Box) (TermPath_66));
                  MR_hl_field(0, Error_65, 1) = ((MR_Box) (TypeX_18));
                  MR_hl_field(0, Error_65, 2) = ((MR_Box) (TypeY_19));
                  MR_hl_field(0, Error_65, 3) = ((MR_Box) (Reason_67));
                }
                check_hlds__modecheck_coerce__maybe_keep_error_3_p_0(Error_65, STATE_VARIABLE_MaybeError_0_33, &STATE_VARIABLE_MaybeError_35_35);
                MaybeHeadFunctorY_28 = (MR_Word) ((MR_Unsigned) 0U);
              }
            }
            break;
        }
        break;
    }
    check_hlds__modecheck_coerce__modecheck_coerce_from_bound_make_bound_functors_13_p_0(ModuleInfo_14, TVarSet_15, LiveX_16, RevTermPath0_17, TypeX_18, TypeY_19, ExpandedInsts0_20, InstX_21, TailFunctorsX_27, &TailFunctorsY_29, &TailBadConsIds_30, STATE_VARIABLE_MaybeError_35_35, STATE_VARIABLE_MaybeError_34);
    switch (MR_tag((MR_Word) MaybeHeadFunctorY_28)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          *FunctorsY_23 = TailFunctorsY_29;
          *BadConsIds_24 = TailBadConsIds_30;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word HeadFunctorY_31 = (MR_Word) (MR_body((MR_Word) (MaybeHeadFunctorY_28), (MR_Integer) 1));

          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *FunctorsY_23 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) (HeadFunctorY_31));
            MR_hl_field(1, base, 1) = ((MR_Box) (TailFunctorsY_29));
          }
          *BadConsIds_24 = TailBadConsIds_30;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word HeadBadConsId_32 = ((MR_Word) ((MR_hl_field(2, MaybeHeadFunctorY_28, (MR_Integer) 0))));

          *FunctorsY_23 = TailFunctorsY_29;
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *BadConsIds_24 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) (HeadBadConsId_32));
            MR_hl_field(1, base, 1) = ((MR_Box) (TailBadConsIds_30));
          }
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
          MR_String Var_40;
          MR_String Var_41;

          succeeded = ((MR_tag((MR_Word) TypeB_8)) == (MR_Integer) 0);
          if (succeeded)
          {
            Var_40 = (MR_String) "predicate \140check_hlds.modecheck_coerce.compare_types_nonvar\'/5";
            Var_41 = (MR_String) "type_variable";
            mercury__require__unexpected_2_p_0(Var_40, Var_41);
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
          MR_Word Var_50;

          succeeded = ((MR_tag((MR_Word) TypeB_8)) == (MR_Integer) 2);
          if (succeeded)
          {
            Var_50 = ((MR_Word) ((MR_hl_field(2, TypeB_8, (MR_Integer) 0))));
            succeeded = parse_tree__prog_data____Unify____builtin_type_0_0(BuiltinType_16, Var_50);
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, TypeA_7, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word Kind_29 = ((MR_Word) ((MR_hl_field(3, TypeA_7, (MR_Integer) 2))));
              MR_Word ArgsA_45 = ((MR_Word) ((MR_hl_field(3, TypeA_7, (MR_Integer) 1))));
              MR_Word ArgsB_46;
              MR_Word Var_51;

              succeeded = ((((MR_tag((MR_Word) TypeB_8)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, TypeB_8, (MR_Integer) 0)))) == (MR_Integer) 0)));
              if (succeeded)
              {
                ArgsB_46 = ((MR_Word) ((MR_hl_field(3, TypeB_8, (MR_Integer) 1))));
                Var_51 = ((MR_Word) ((MR_hl_field(3, TypeB_8, (MR_Integer) 2))));
                succeeded = parse_tree__prog_data____Unify____kind_0_0(Kind_29, Var_51);
                if (succeeded)
                  succeeded = check_hlds__modecheck_coerce__compare_types_corresponding_5_p_0(TypeTable_9, TVarSet_6, (MR_Integer) 1, ArgsA_45, ArgsB_46);
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word PredOrFunc_30 = ((MR_Unsigned) ((MR_hl_field(3, TypeA_7, (MR_Integer) 1))) & (MR_Integer) 1);
              MR_Word Purity_32 = ((MR_Unsigned) ((MR_hl_field(3, TypeA_7, (MR_Integer) 4))) & (MR_Integer) 3);
              MR_Word Var_42;
              MR_Word ArgsA_47 = ((MR_Word) ((MR_hl_field(3, TypeA_7, (MR_Integer) 2))));
              MR_Word ArgsB_48;
              MR_Word Var_52;
              MR_Word Var_53;

              succeeded = ((((MR_tag((MR_Word) TypeB_8)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, TypeB_8, (MR_Integer) 0)))) == (MR_Integer) 1)));
              if (succeeded)
              {
                Var_52 = ((MR_Unsigned) ((MR_hl_field(3, TypeB_8, (MR_Integer) 1))) & (MR_Integer) 1);
                ArgsB_48 = ((MR_Word) ((MR_hl_field(3, TypeB_8, (MR_Integer) 2))));
                Var_53 = ((MR_Unsigned) ((MR_hl_field(3, TypeB_8, (MR_Integer) 4))) & (MR_Integer) 3);
                succeeded = (PredOrFunc_30 == Var_52);
                if (succeeded)
                {
                  succeeded = (Purity_32 == Var_53);
                  if (succeeded)
                  {
                    succeeded = MR_TRUE;
                    if (succeeded)
                    {
                      Var_42 = (MR_Integer) 0;
                      succeeded = check_hlds__modecheck_coerce__compare_types_corresponding_5_p_0(TypeTable_9, TVarSet_6, Var_42, ArgsA_47, ArgsB_48);
                    }
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
              MR_Word TypeA1_38 = ((MR_Word) ((MR_hl_field(3, TypeA_7, (MR_Integer) 1))));
              MR_Word TypeB1_39;
              MR_Word Kind_49 = ((MR_Word) ((MR_hl_field(3, TypeA_7, (MR_Integer) 2))));
              MR_Word Var_55;

              succeeded = ((((MR_tag((MR_Word) TypeB_8)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, TypeB_8, (MR_Integer) 0)))) == (MR_Integer) 3)));
              if (succeeded)
              {
                TypeB1_39 = ((MR_Word) ((MR_hl_field(3, TypeB_8, (MR_Integer) 1))));
                Var_55 = ((MR_Word) ((MR_hl_field(3, TypeB_8, (MR_Integer) 2))));
                succeeded = parse_tree__prog_data____Unify____kind_0_0(Kind_49, Var_55);
                if (succeeded)
                  succeeded = check_hlds__modecheck_coerce__compare_types_5_p_0(TypeTable_9, TVarSet_6, (MR_Integer) 1, TypeA1_38, TypeB1_39);
              }
            }
            break;
        }
        break;
    }
  return succeeded;
}

static void MR_CALL 
check_hlds__modecheck_coerce__modecheck_coerce_from_ground_make_inst_9_p_0(
  MR_Word ModuleInfo_10,
  MR_Word TVarSet_11,
  MR_Word LiveX_12,
  MR_Word UniqX_13,
  MR_Word RevTermPath0_14,
  MR_Word TypeX_15,
  MR_Word TypeY_16,
  MR_Word InstX_17,
  MR_Word * MaybeInstY_18)
{
  MR_bool succeeded;

  succeeded = parse_tree__prog_data____Unify____mer_type_0_0(TypeX_15, TypeY_16);
  if (succeeded)
  {
    MR_Word UniqY_19;
    MR_Word InstY_20;

    switch (UniqX_13) {
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
        switch (LiveX_12) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            UniqY_19 = UniqX_13;
            break;
          case (MR_Integer) 0:
            UniqY_19 = (MR_Integer) 0;
            break;
        }
        break;
      case (MR_Integer) 0:
        UniqY_19 = (MR_Integer) 0;
        break;
    }
    {
      InstY_20 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, InstY_20, 0) = (MR_Box) ((MR_Unsigned) (UniqY_19));
      MR_hl_field(1, InstY_20, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *MaybeInstY_18 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (InstY_20));
    }
  }
  else
  {
    MR_Word TypeTable_32;

    hlds__hlds_module__module_info_get_type_table_2_p_0(ModuleInfo_10, &TypeTable_32);
    succeeded = ((MR_tag((MR_Word) TypeX_15)) == (MR_Integer) 0);
    if (succeeded)
    {
    }
    if (!(succeeded))
    {
      succeeded = ((MR_tag((MR_Word) TypeY_16)) == (MR_Integer) 0);
      if (succeeded)
      {
      }
    }
    if (succeeded)
      succeeded = parse_tree__prog_data____Unify____mer_type_0_0(TypeX_15, TypeY_16);
    else
      switch (MR_tag((MR_Word) TypeX_15)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_String Var_63;
            MR_String Var_64;

            succeeded = ((MR_tag((MR_Word) TypeY_16)) == (MR_Integer) 0);
            if (succeeded)
            {
              Var_63 = (MR_String) "predicate \140check_hlds.modecheck_coerce.compare_types_nonvar\'/5";
              Var_64 = (MR_String) "type_variable";
              {
                mercury__require__unexpected_2_p_0(Var_63, Var_64);
                return;
              }
              succeeded = MR_TRUE;
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word TypeCtorA_47;
            MR_Word ArgsA_48;
            MR_Word TypeCtorB_49;
            MR_Word ArgsB_50;

            succeeded = parse_tree__prog_type__type_to_ctor_and_args_3_p_0(TypeX_15, &TypeCtorA_47, &ArgsA_48);
            if (succeeded)
            {
              succeeded = parse_tree__prog_type__type_to_ctor_and_args_3_p_0(TypeY_16, &TypeCtorB_49, &ArgsB_50);
              if (succeeded)
              {
                succeeded = parse_tree__prog_data____Unify____type_ctor_0_0(TypeCtorA_47, TypeCtorB_49);
                if (succeeded)
                  succeeded = check_hlds__modecheck_coerce__compare_types_corresponding_5_p_0(TypeTable_32, TVarSet_11, (MR_Integer) 1, ArgsA_48, ArgsB_50);
                else
                {
                  MR_Word SuperTypeA_51;

                  succeeded = MR_TRUE;
                  if (succeeded)
                  {
                    succeeded = check_hlds__type_util__get_supertype_5_p_0(TypeTable_32, TVarSet_11, TypeCtorA_47, ArgsA_48, &SuperTypeA_51);
                    if (succeeded)
                      succeeded = check_hlds__modecheck_coerce__compare_types_5_p_0(TypeTable_32, TVarSet_11, (MR_Integer) 1, SuperTypeA_51, TypeY_16);
                  }
                }
              }
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word BuiltinType_39 = ((MR_Word) ((MR_hl_field(2, TypeX_15, (MR_Integer) 0))));
            MR_Word Var_73;

            succeeded = ((MR_tag((MR_Word) TypeY_16)) == (MR_Integer) 2);
            if (succeeded)
            {
              Var_73 = ((MR_Word) ((MR_hl_field(2, TypeY_16, (MR_Integer) 0))));
              succeeded = parse_tree__prog_data____Unify____builtin_type_0_0(BuiltinType_39, Var_73);
            }
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(3, TypeX_15, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word Kind_52 = ((MR_Word) ((MR_hl_field(3, TypeX_15, (MR_Integer) 2))));
                MR_Word ArgsA_68 = ((MR_Word) ((MR_hl_field(3, TypeX_15, (MR_Integer) 1))));
                MR_Word ArgsB_69;
                MR_Word Var_74;

                succeeded = ((((MR_tag((MR_Word) TypeY_16)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, TypeY_16, (MR_Integer) 0)))) == (MR_Integer) 0)));
                if (succeeded)
                {
                  ArgsB_69 = ((MR_Word) ((MR_hl_field(3, TypeY_16, (MR_Integer) 1))));
                  Var_74 = ((MR_Word) ((MR_hl_field(3, TypeY_16, (MR_Integer) 2))));
                  succeeded = parse_tree__prog_data____Unify____kind_0_0(Kind_52, Var_74);
                  if (succeeded)
                    succeeded = check_hlds__modecheck_coerce__compare_types_corresponding_5_p_0(TypeTable_32, TVarSet_11, (MR_Integer) 1, ArgsA_68, ArgsB_69);
                }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word PredOrFunc_53 = ((MR_Unsigned) ((MR_hl_field(3, TypeX_15, (MR_Integer) 1))) & (MR_Integer) 1);
                MR_Word Purity_55 = ((MR_Unsigned) ((MR_hl_field(3, TypeX_15, (MR_Integer) 4))) & (MR_Integer) 3);
                MR_Word Var_65;
                MR_Word ArgsA_70 = ((MR_Word) ((MR_hl_field(3, TypeX_15, (MR_Integer) 2))));
                MR_Word ArgsB_71;
                MR_Word Var_75;
                MR_Word Var_76;

                succeeded = ((((MR_tag((MR_Word) TypeY_16)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, TypeY_16, (MR_Integer) 0)))) == (MR_Integer) 1)));
                if (succeeded)
                {
                  Var_75 = ((MR_Unsigned) ((MR_hl_field(3, TypeY_16, (MR_Integer) 1))) & (MR_Integer) 1);
                  ArgsB_71 = ((MR_Word) ((MR_hl_field(3, TypeY_16, (MR_Integer) 2))));
                  Var_76 = ((MR_Unsigned) ((MR_hl_field(3, TypeY_16, (MR_Integer) 4))) & (MR_Integer) 3);
                  succeeded = (PredOrFunc_53 == Var_75);
                  if (succeeded)
                  {
                    succeeded = (Purity_55 == Var_76);
                    if (succeeded)
                    {
                      succeeded = MR_TRUE;
                      if (succeeded)
                      {
                        Var_65 = (MR_Integer) 0;
                        succeeded = check_hlds__modecheck_coerce__compare_types_corresponding_5_p_0(TypeTable_32, TVarSet_11, Var_65, ArgsA_70, ArgsB_71);
                      }
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
                MR_Word TypeA1_61 = ((MR_Word) ((MR_hl_field(3, TypeX_15, (MR_Integer) 1))));
                MR_Word TypeB1_62;
                MR_Word Kind_72 = ((MR_Word) ((MR_hl_field(3, TypeX_15, (MR_Integer) 2))));
                MR_Word Var_78;

                succeeded = ((((MR_tag((MR_Word) TypeY_16)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, TypeY_16, (MR_Integer) 0)))) == (MR_Integer) 3)));
                if (succeeded)
                {
                  TypeB1_62 = ((MR_Word) ((MR_hl_field(3, TypeY_16, (MR_Integer) 1))));
                  Var_78 = ((MR_Word) ((MR_hl_field(3, TypeY_16, (MR_Integer) 2))));
                  succeeded = parse_tree__prog_data____Unify____kind_0_0(Kind_72, Var_78);
                  if (succeeded)
                    succeeded = check_hlds__modecheck_coerce__compare_types_5_p_0(TypeTable_32, TVarSet_11, (MR_Integer) 1, TypeA1_61, TypeB1_62);
                }
              }
              break;
          }
          break;
      }
    if (succeeded)
    {
      MR_Word SeenTypes0_21;
      MR_Word InstY_26;

      mercury__set__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), &SeenTypes0_21);
      check_hlds__modecheck_coerce__modecheck_coerce_from_ground_make_inst_for_subtype_8_p_0(ModuleInfo_10, TVarSet_11, LiveX_12, UniqX_13, SeenTypes0_21, TypeX_15, TypeY_16, &InstY_26);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *MaybeInstY_18 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (InstY_26));
      }
    }
    else
    {
      MR_Word TermPath_22;
      MR_Word Reason_23;
      MR_Word Error_24;

      mercury__list__reverse_2_p_0((MR_Word) (&check_hlds__mode_errors__check_hlds__mode_errors__type_ctor_info_coerce_error_term_path_step_0), RevTermPath0_14, &TermPath_22);
      {
        Reason_23 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Reason_23, 0) = ((MR_Box) (InstX_17));
      }
      {
        Error_24 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Error_24, 0) = ((MR_Box) (TermPath_22));
        MR_hl_field(0, Error_24, 1) = ((MR_Box) (TypeX_15));
        MR_hl_field(0, Error_24, 2) = ((MR_Box) (TypeY_16));
        MR_hl_field(0, Error_24, 3) = ((MR_Box) (Reason_23));
      }
      *MaybeInstY_18 = (MR_Word) ((MR_Word) (Error_24));
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
            MR_String Var_40;
            MR_String Var_41;

            succeeded = ((MR_tag((MR_Word) TypeB_10)) == (MR_Integer) 0);
            if (succeeded)
            {
              Var_40 = (MR_String) "predicate \140check_hlds.modecheck_coerce.compare_types_nonvar\'/5";
              Var_41 = (MR_String) "type_variable";
              mercury__require__unexpected_2_p_0(Var_40, Var_41);
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
            MR_Word Var_50;

            succeeded = ((MR_tag((MR_Word) TypeB_10)) == (MR_Integer) 2);
            if (succeeded)
            {
              Var_50 = ((MR_Word) ((MR_hl_field(2, TypeB_10, (MR_Integer) 0))));
              succeeded = parse_tree__prog_data____Unify____builtin_type_0_0(BuiltinType_16, Var_50);
            }
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(3, TypeA_9, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word Kind_29 = ((MR_Word) ((MR_hl_field(3, TypeA_9, (MR_Integer) 2))));
                MR_Word ArgsA_45 = ((MR_Word) ((MR_hl_field(3, TypeA_9, (MR_Integer) 1))));
                MR_Word ArgsB_46;
                MR_Word Var_51;

                succeeded = ((((MR_tag((MR_Word) TypeB_10)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, TypeB_10, (MR_Integer) 0)))) == (MR_Integer) 0)));
                if (succeeded)
                {
                  ArgsB_46 = ((MR_Word) ((MR_hl_field(3, TypeB_10, (MR_Integer) 1))));
                  Var_51 = ((MR_Word) ((MR_hl_field(3, TypeB_10, (MR_Integer) 2))));
                  succeeded = parse_tree__prog_data____Unify____kind_0_0(Kind_29, Var_51);
                  if (succeeded)
                    succeeded = check_hlds__modecheck_coerce__compare_types_corresponding_5_p_0(TypeTable_6, TVarSet_7, Comparison_8, ArgsA_45, ArgsB_46);
                }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word PredOrFunc_30 = ((MR_Unsigned) ((MR_hl_field(3, TypeA_9, (MR_Integer) 1))) & (MR_Integer) 1);
                MR_Word Purity_32 = ((MR_Unsigned) ((MR_hl_field(3, TypeA_9, (MR_Integer) 4))) & (MR_Integer) 3);
                MR_Word Var_42;
                MR_Word ArgsA_47 = ((MR_Word) ((MR_hl_field(3, TypeA_9, (MR_Integer) 2))));
                MR_Word ArgsB_48;
                MR_Word Var_52;
                MR_Word Var_53;

                succeeded = ((((MR_tag((MR_Word) TypeB_10)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, TypeB_10, (MR_Integer) 0)))) == (MR_Integer) 1)));
                if (succeeded)
                {
                  Var_52 = ((MR_Unsigned) ((MR_hl_field(3, TypeB_10, (MR_Integer) 1))) & (MR_Integer) 1);
                  ArgsB_48 = ((MR_Word) ((MR_hl_field(3, TypeB_10, (MR_Integer) 2))));
                  Var_53 = ((MR_Unsigned) ((MR_hl_field(3, TypeB_10, (MR_Integer) 4))) & (MR_Integer) 3);
                  succeeded = (PredOrFunc_30 == Var_52);
                  if (succeeded)
                  {
                    succeeded = (Purity_32 == Var_53);
                    if (succeeded)
                    {
                      succeeded = MR_TRUE;
                      if (succeeded)
                      {
                        Var_42 = (MR_Integer) 0;
                        succeeded = check_hlds__modecheck_coerce__compare_types_corresponding_5_p_0(TypeTable_6, TVarSet_7, Var_42, ArgsA_47, ArgsB_48);
                      }
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
                MR_Word TypeA1_38 = ((MR_Word) ((MR_hl_field(3, TypeA_9, (MR_Integer) 1))));
                MR_Word TypeB1_39;
                MR_Word Kind_49 = ((MR_Word) ((MR_hl_field(3, TypeA_9, (MR_Integer) 2))));
                MR_Word Var_55;
                MR_Word next_value_of_TypeA_9;
                MR_Word next_value_of_TypeB_10;

                succeeded = ((((MR_tag((MR_Word) TypeB_10)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, TypeB_10, (MR_Integer) 0)))) == (MR_Integer) 3)));
                if (succeeded)
                {
                  TypeB1_39 = ((MR_Word) ((MR_hl_field(3, TypeB_10, (MR_Integer) 1))));
                  Var_55 = ((MR_Word) ((MR_hl_field(3, TypeB_10, (MR_Integer) 2))));
                  succeeded = parse_tree__prog_data____Unify____kind_0_0(Kind_49, Var_55);
                  if (succeeded)
                  {
                    // direct tailcall eliminated
                    ;
                    next_value_of_TypeA_9 = TypeA1_38;
                    next_value_of_TypeB_10 = TypeB1_39;
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
                MR_String Var_45;
                MR_String Var_46;

                succeeded = ((MR_tag((MR_Word) TypeB_14)) == (MR_Integer) 0);
                if (succeeded)
                {
                  Var_45 = (MR_String) "predicate \140check_hlds.modecheck_coerce.compare_types_nonvar\'/5";
                  Var_46 = (MR_String) "type_variable";
                  mercury__require__unexpected_2_p_0(Var_45, Var_46);
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
                MR_Word Var_55;

                succeeded = ((MR_tag((MR_Word) TypeB_14)) == (MR_Integer) 2);
                if (succeeded)
                {
                  Var_55 = ((MR_Word) ((MR_hl_field(2, TypeB_14, (MR_Integer) 0))));
                  succeeded = parse_tree__prog_data____Unify____builtin_type_0_0(BuiltinType_21, Var_55);
                }
              }
              break;
            case (MR_Integer) 3:
              switch (((MR_Integer) ((MR_hl_field(3, TypeA_12, (MR_Integer) 0))))) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Word Kind_34 = ((MR_Word) ((MR_hl_field(3, TypeA_12, (MR_Integer) 2))));
                    MR_Word ArgsA_50 = ((MR_Word) ((MR_hl_field(3, TypeA_12, (MR_Integer) 1))));
                    MR_Word ArgsB_51;
                    MR_Word Var_56;

                    succeeded = ((((MR_tag((MR_Word) TypeB_14)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, TypeB_14, (MR_Integer) 0)))) == (MR_Integer) 0)));
                    if (succeeded)
                    {
                      ArgsB_51 = ((MR_Word) ((MR_hl_field(3, TypeB_14, (MR_Integer) 1))));
                      Var_56 = ((MR_Word) ((MR_hl_field(3, TypeB_14, (MR_Integer) 2))));
                      succeeded = parse_tree__prog_data____Unify____kind_0_0(Kind_34, Var_56);
                      if (succeeded)
                        succeeded = check_hlds__modecheck_coerce__compare_types_corresponding_5_p_0(HeadVar__1_1, HeadVar__2_2, HeadVar__3_3, ArgsA_50, ArgsB_51);
                    }
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word PredOrFunc_35 = ((MR_Unsigned) ((MR_hl_field(3, TypeA_12, (MR_Integer) 1))) & (MR_Integer) 1);
                    MR_Word Purity_37 = ((MR_Unsigned) ((MR_hl_field(3, TypeA_12, (MR_Integer) 4))) & (MR_Integer) 3);
                    MR_Word Var_47;
                    MR_Word ArgsA_52 = ((MR_Word) ((MR_hl_field(3, TypeA_12, (MR_Integer) 2))));
                    MR_Word ArgsB_53;
                    MR_Word Var_57;
                    MR_Word Var_58;

                    succeeded = ((((MR_tag((MR_Word) TypeB_14)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, TypeB_14, (MR_Integer) 0)))) == (MR_Integer) 1)));
                    if (succeeded)
                    {
                      Var_57 = ((MR_Unsigned) ((MR_hl_field(3, TypeB_14, (MR_Integer) 1))) & (MR_Integer) 1);
                      ArgsB_53 = ((MR_Word) ((MR_hl_field(3, TypeB_14, (MR_Integer) 2))));
                      Var_58 = ((MR_Unsigned) ((MR_hl_field(3, TypeB_14, (MR_Integer) 4))) & (MR_Integer) 3);
                      succeeded = (PredOrFunc_35 == Var_57);
                      if (succeeded)
                      {
                        succeeded = (Purity_37 == Var_58);
                        if (succeeded)
                        {
                          succeeded = MR_TRUE;
                          if (succeeded)
                          {
                            Var_47 = (MR_Integer) 0;
                            succeeded = check_hlds__modecheck_coerce__compare_types_corresponding_5_p_0(HeadVar__1_1, HeadVar__2_2, Var_47, ArgsA_52, ArgsB_53);
                          }
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
                    MR_Word TypeA1_43 = ((MR_Word) ((MR_hl_field(3, TypeA_12, (MR_Integer) 1))));
                    MR_Word TypeB1_44;
                    MR_Word Kind_54 = ((MR_Word) ((MR_hl_field(3, TypeA_12, (MR_Integer) 2))));
                    MR_Word Var_60;

                    succeeded = ((((MR_tag((MR_Word) TypeB_14)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, TypeB_14, (MR_Integer) 0)))) == (MR_Integer) 3)));
                    if (succeeded)
                    {
                      TypeB1_44 = ((MR_Word) ((MR_hl_field(3, TypeB_14, (MR_Integer) 1))));
                      Var_60 = ((MR_Word) ((MR_hl_field(3, TypeB_14, (MR_Integer) 2))));
                      succeeded = parse_tree__prog_data____Unify____kind_0_0(Kind_54, Var_60);
                      if (succeeded)
                        succeeded = check_hlds__modecheck_coerce__compare_types_5_p_0(HeadVar__1_1, HeadVar__2_2, HeadVar__3_3, TypeA1_43, TypeB1_44);
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
  MR_Word conv0_FunctorY_18;

  check_hlds__modecheck_coerce__modecheck_coerce_from_ground_make_bound_functor_9_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 6)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 7)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 8)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 9)))), ((MR_Word) (wrapper_arg_1)), &conv0_FunctorY_18);
  *wrapper_arg_2 = ((MR_Box) (conv0_FunctorY_18));
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
      MR_Word FunctorsY_23;
      MR_Word UniqY_24;
      MR_Word Var_26;

      {
        Var_26 = (MR_Word) MR_new_object(MR_Word, (10 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_26, 0) = ((MR_Box) (&check_hlds__modecheck_coerce_scalar_common_5[0]));
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
      mercury__list__map_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_bound_inst_0), Var_26, CtorsX_22, &FunctorsY_23);
      UniqY_24 = check_hlds__modecheck_coerce__uniqueness_for_coerce_result_2_f_0(LiveX_11, UniqX_12);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
        *InstY_16 = base;
        MR_hl_field(2, base, 0) = (MR_Box) ((MR_Unsigned) (UniqY_24));
        MR_hl_field(2, base, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__modecheck_coerce_scalar_common_4[0])));
        MR_hl_field(2, base, 2) = ((MR_Box) (FunctorsY_23));
      }
    }
    else
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.modecheck_coerce.modecheck_coerce_from_ground_make_bound_inst\'/8", (MR_String) "missing constructors");
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
check_hlds__modecheck_coerce__maybe_keep_error_3_p_0(
  MR_Word Error_4,
  MR_Word MaybeError0_5,
  MR_Word * MaybeError_6)
{
  if ((MaybeError0_5 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *MaybeError_6 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Error_4));
    }
  else
    *MaybeError_6 = MaybeError0_5;
}

static MR_bool MR_CALL 
check_hlds__modecheck_coerce__cons_id_matches_builtin_type_2_p_0(
  MR_Word ConsId_3,
  MR_Word Type_4)
{
  MR_bool succeeded;

  switch (MR_tag((MR_Word) ConsId_3)) {
    default:
      succeeded = MR_FALSE;
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, ConsId_3, (MR_Integer) 0))))) {
        default:
          succeeded = MR_FALSE;
          break;
        case (MR_Integer) 5:
          {
            MR_Word IC_5 = ((MR_Word) ((MR_hl_field(3, ConsId_3, (MR_Integer) 1))));
            MR_Word Var_9;
            MR_Word Var_10;
            MR_Word Var_11;

            succeeded = ((MR_tag((MR_Word) Type_4)) == (MR_Integer) 2);
            if (succeeded)
            {
              Var_9 = ((MR_Word) ((MR_hl_field(2, Type_4, (MR_Integer) 0))));
              succeeded = ((MR_tag((MR_Word) Var_9)) == (MR_Integer) 1);
              if (succeeded)
              {
                Var_10 = ((MR_Unsigned) ((MR_hl_field(1, Var_9, (MR_Integer) 0))) & (MR_Integer) 15);
                Var_11 = parse_tree__prog_data__type_of_int_const_1_f_0(IC_5);
                succeeded = (Var_10 == Var_11);
              }
            }
          }
          break;
        case (MR_Integer) 6:
          {
            MR_Word Var_12;

            Var_12 = parse_tree__builtin_lib_types__float_type_0_f_0();
            succeeded = parse_tree__prog_data____Unify____mer_type_0_0(Type_4, Var_12);
          }
          break;
        case (MR_Integer) 7:
          {
            MR_Word Var_13;

            Var_13 = parse_tree__builtin_lib_types__char_type_0_f_0();
            succeeded = parse_tree__prog_data____Unify____mer_type_0_0(Type_4, Var_13);
          }
          break;
        case (MR_Integer) 8:
          {
            MR_Word Var_14;

            Var_14 = parse_tree__builtin_lib_types__string_type_0_f_0();
            succeeded = parse_tree__prog_data____Unify____mer_type_0_0(Type_4, Var_14);
          }
          break;
      }
      break;
  }
  return succeeded;
}

static MR_bool MR_CALL 
check_hlds__modecheck_coerce__get_bound_functor_cons_and_arg_types_6_p_0_1(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = check_hlds__modecheck_coerce__IntroducedFrom__pred__get_bound_functor_cons_and_arg_types__588__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))));
  return succeeded;
}

static void MR_CALL 
check_hlds__modecheck_coerce__get_bound_functor_cons_and_arg_types_6_p_0(
  MR_Word ModuleInfo_7,
  MR_Word TypeX_8,
  MR_Word TypeY_9,
  MR_Word ConsIdX_10,
  MR_Word * ConsIdY_11,
  MR_Word * Res_12)
{
  MR_bool succeeded;
  MR_Word TypeCtorY_13;
  MR_Word SymName0_77;
  MR_Integer Arity_78;
  MR_Word ModuleName_80;
  MR_Word SymName_81;

  parse_tree__prog_type__type_to_ctor_det_2_p_0(TypeY_9, &TypeCtorY_13);
  SymName0_77 = ((MR_Word) ((MR_hl_field(3, ConsIdX_10, (MR_Integer) 1))));
  Arity_78 = ((MR_Integer) ((MR_hl_field(3, ConsIdX_10, (MR_Integer) 2))));
  ModuleName_80 = check_hlds__type_util__type_ctor_module_1_f_0(TypeCtorY_13);
  if (((MR_tag((MR_Word) SymName0_77)) == (MR_Integer) 1))
  {
    MR_String Name_84 = ((MR_String) ((MR_hl_field(1, SymName0_77, (MR_Integer) 1))));

    {
      SymName_81 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, SymName_81, 0) = ((MR_Box) (ModuleName_80));
      MR_hl_field(1, SymName_81, 1) = ((MR_Box) (Name_84));
    }
  }
  else
    SymName_81 = SymName0_77;
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
    *ConsIdY_11 = base;
    MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 2U));
    MR_hl_field(3, base, 1) = ((MR_Box) (SymName_81));
    MR_hl_field(3, base, 2) = ((MR_Box) (Arity_78));
    MR_hl_field(3, base, 3) = ((MR_Box) (TypeCtorY_13));
  }
  switch (MR_tag((MR_Word) TypeX_8)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      *Res_12 = (MR_Word) ((MR_Unsigned) 0U);
      break;
    case (MR_Integer) 1:
      {
        MR_Word ArgTypesX_17;
        MR_Word TypeCtor_85;
        MR_Word TypeArgs_86;
        MR_Word ConsTable_87;
        MR_Word ConsDefn_88;
        MR_Word TypeParams_91;
        MR_Word CtorArgs_94;
        MR_Word CtorArgTypes0_96;

        succeeded = parse_tree__prog_type__type_to_ctor_and_args_3_p_0(TypeX_8, &TypeCtor_85, &TypeArgs_86);
        if (succeeded)
        {
          hlds__hlds_module__module_info_get_cons_table_2_p_0(ModuleInfo_7, &ConsTable_87);
          succeeded = hlds__hlds_cons__search_cons_table_of_type_ctor_4_p_0(ConsTable_87, TypeCtor_85, ConsIdX_10, &ConsDefn_88);
          if (succeeded)
          {
            TypeParams_91 = ((MR_Word) ((MR_hl_field(0, ConsDefn_88, (MR_Integer) 2))));
            CtorArgs_94 = ((MR_Word) ((MR_hl_field(0, ConsDefn_88, (MR_Integer) 5))));
            parse_tree__prog_data__get_ctor_arg_types_2_p_0(CtorArgs_94, &CtorArgTypes0_96);
            if ((TypeParams_91 == (MR_Word) ((MR_Unsigned) 0U)))
              ArgTypesX_17 = CtorArgTypes0_96;
            else
            {
              MR_Word Subst_99;

              mercury__map__from_corresponding_lists_3_p_0((MR_Word) (&check_hlds__modecheck_coerce_scalar_common_2[1]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), TypeParams_91, TypeArgs_86, &Subst_99);
              parse_tree__prog_type_subst__apply_subst_to_type_list_3_p_0(Subst_99, CtorArgTypes0_96, &ArgTypesX_17);
            }
            succeeded = MR_TRUE;
          }
        }
        if (succeeded)
        {
          MR_Word ArgTypesY_21;
          MR_Word TypeCtor_102;
          MR_Word TypeArgs_103;
          MR_Word ConsTable_104;
          MR_Word ConsDefn_105;
          MR_Word TypeParams_108;
          MR_Word CtorArgs_111;
          MR_Word CtorArgTypes0_113;

          succeeded = ((MR_tag((MR_Word) TypeY_9)) == (MR_Integer) 1);
          if (succeeded)
          {
            succeeded = parse_tree__prog_type__type_to_ctor_and_args_3_p_0(TypeY_9, &TypeCtor_102, &TypeArgs_103);
            if (succeeded)
            {
              hlds__hlds_module__module_info_get_cons_table_2_p_0(ModuleInfo_7, &ConsTable_104);
              succeeded = hlds__hlds_cons__search_cons_table_of_type_ctor_4_p_0(ConsTable_104, TypeCtor_102, *ConsIdY_11, &ConsDefn_105);
              if (succeeded)
              {
                TypeParams_108 = ((MR_Word) ((MR_hl_field(0, ConsDefn_105, (MR_Integer) 2))));
                CtorArgs_111 = ((MR_Word) ((MR_hl_field(0, ConsDefn_105, (MR_Integer) 5))));
                parse_tree__prog_data__get_ctor_arg_types_2_p_0(CtorArgs_111, &CtorArgTypes0_113);
                if ((TypeParams_108 == (MR_Word) ((MR_Unsigned) 0U)))
                  ArgTypesY_21 = CtorArgTypes0_113;
                else
                {
                  MR_Word Subst_116;

                  mercury__map__from_corresponding_lists_3_p_0((MR_Word) (&check_hlds__modecheck_coerce_scalar_common_2[1]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), TypeParams_108, TypeArgs_103, &Subst_116);
                  parse_tree__prog_type_subst__apply_subst_to_type_list_3_p_0(Subst_116, CtorArgTypes0_113, &ArgTypesY_21);
                }
                succeeded = MR_TRUE;
              }
            }
          }
          if (succeeded)
          {
            MR_Integer Arity_22;
            MR_Integer Var_72;

            mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), ArgTypesX_17, &Arity_22);
            mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), ArgTypesY_21, &Var_72);
            succeeded = (Arity_22 == Var_72);
            if (succeeded)
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                *Res_12 = base;
                MR_hl_field(1, base, 0) = ((MR_Box) (ArgTypesX_17));
                MR_hl_field(1, base, 1) = ((MR_Box) (ArgTypesY_21));
                MR_hl_field(1, base, 2) = ((MR_Box) (Arity_22));
              }
            else
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.modecheck_coerce.get_bound_functor_cons_and_arg_types\'/6", (MR_String) "arg types length mismatch");
                return;
              }
          }
          else
            *Res_12 = (MR_Word) ((MR_Unsigned) 4U);
        }
        else
          *Res_12 = (MR_Word) ((MR_Unsigned) 0U);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word BuiltinType_26 = ((MR_Word) ((MR_hl_field(2, TypeX_8, (MR_Integer) 0))));
        MR_Word Var_50;

        {
          Var_50 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_50, 0) = ((MR_Box) (&check_hlds__modecheck_coerce_scalar_common_4[1]));
          MR_hl_field(0, Var_50, 1) = ((MR_Box) (check_hlds__modecheck_coerce__get_bound_functor_cons_and_arg_types_6_p_0_1));
          MR_hl_field(0, Var_50, 2) = ((MR_Box) ((MR_Integer) 2));
          MR_hl_field(0, Var_50, 3) = ((MR_Box) (TypeX_8));
          MR_hl_field(0, Var_50, 4) = ((MR_Box) (TypeY_9));
        }
        mercury__require__expect_3_p_0(Var_50, (MR_String) "predicate \140check_hlds.modecheck_coerce.get_bound_functor_cons_and_arg_types\'/6", (MR_String) "coercion between different builtin types");
        switch (MR_tag((MR_Word) BuiltinType_26)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            switch (MR_unmkbody(BuiltinType_26)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
              case (MR_Integer) 1:
                *Res_12 = (MR_Word) ((MR_Unsigned) 0U);
                break;
              case (MR_Integer) 2:
                {
                  MR_Integer Arity_67 = ((MR_Integer) ((MR_hl_field(3, ConsIdX_10, (MR_Integer) 2))));

                  succeeded = (Arity_67 == (MR_Integer) 0);
                  if (succeeded)
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                      *Res_12 = base;
                      MR_hl_field(1, base, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                      MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                      MR_hl_field(1, base, 2) = ((MR_Box) (Arity_67));
                    }
                  else
                    *Res_12 = (MR_Word) ((MR_Unsigned) 0U);
                }
                break;
            }
            break;
          case (MR_Integer) 1:
            *Res_12 = (MR_Word) ((MR_Unsigned) 0U);
            break;
        }
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, TypeX_8, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word ArgTypesX_58 = ((MR_Word) ((MR_hl_field(3, TypeX_8, (MR_Integer) 1))));
            MR_Integer Arity_57 = ((MR_Integer) ((MR_hl_field(3, ConsIdX_10, (MR_Integer) 2))));
            MR_Word TypeCtorInfo_69_69;
            MR_Word Var_46 = ((MR_Word) ((MR_hl_field(3, ConsIdX_10, (MR_Integer) 1))));
            MR_String Var_47;
            MR_Integer Var_73;

            succeeded = ((MR_tag((MR_Word) Var_46)) == (MR_Integer) 0);
            if (succeeded)
            {
              Var_47 = ((MR_String) ((MR_hl_field(0, Var_46, (MR_Integer) 0))));
              succeeded = (strcmp(Var_47, (MR_String) "{}") == 0);
              if (succeeded)
              {
                TypeCtorInfo_69_69 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0);
                mercury__list__length_2_p_0(TypeCtorInfo_69_69, ArgTypesX_58, &Var_73);
                succeeded = (Arity_57 == Var_73);
              }
            }
            if (succeeded)
            {
              MR_Word ArgTypesY_55;
              MR_Word TypeCtorInfo_70_70;
              MR_Integer Var_74;

              succeeded = ((((MR_tag((MR_Word) TypeY_9)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, TypeY_9, (MR_Integer) 0)))) == (MR_Integer) 0)));
              if (succeeded)
              {
                ArgTypesY_55 = ((MR_Word) ((MR_hl_field(3, TypeY_9, (MR_Integer) 1))));
                TypeCtorInfo_70_70 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0);
                mercury__list__length_2_p_0(TypeCtorInfo_70_70, ArgTypesY_55, &Var_74);
                succeeded = (Arity_57 == Var_74);
              }
              if (succeeded)
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                  *Res_12 = base;
                  MR_hl_field(1, base, 0) = ((MR_Box) (ArgTypesX_58));
                  MR_hl_field(1, base, 1) = ((MR_Box) (ArgTypesY_55));
                  MR_hl_field(1, base, 2) = ((MR_Box) (Arity_57));
                }
              else
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.modecheck_coerce.get_bound_functor_cons_and_arg_types\'/6", (MR_String) "tuple type mismatch");
                  return;
                }
            }
            else
              *Res_12 = (MR_Word) ((MR_Unsigned) 0U);
          }
          break;
        case (MR_Integer) 1:
        case (MR_Integer) 2:
          *Res_12 = (MR_Word) ((MR_Unsigned) 0U);
          break;
        case (MR_Integer) 3:
          {
            MR_Word TypeX1_30 = ((MR_Word) ((MR_hl_field(3, TypeX_8, (MR_Integer) 1))));
            MR_Word Kind_31 = ((MR_Word) ((MR_hl_field(3, TypeX_8, (MR_Integer) 2))));
            MR_Word TypeY1_32;
            MR_Word Var_75;

            succeeded = ((((MR_tag((MR_Word) TypeY_9)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, TypeY_9, (MR_Integer) 0)))) == (MR_Integer) 3)));
            if (succeeded)
            {
              TypeY1_32 = ((MR_Word) ((MR_hl_field(3, TypeY_9, (MR_Integer) 1))));
              Var_75 = ((MR_Word) ((MR_hl_field(3, TypeY_9, (MR_Integer) 2))));
              succeeded = parse_tree__prog_data____Unify____kind_0_0(Kind_31, Var_75);
            }
            if (succeeded)
            {
              MR_Word _ConsIdY_33;

              check_hlds__modecheck_coerce__get_bound_functor_cons_and_arg_types_6_p_0(ModuleInfo_7, TypeX1_30, TypeY1_32, ConsIdX_10, &_ConsIdY_33, Res_12);
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
check_hlds__modecheck_coerce____Unify____bound_inst_or_error_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__modecheck_coerce____Unify____bound_inst_or_error_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__modecheck_coerce____Compare____bound_inst_or_error_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__modecheck_coerce____Compare____bound_inst_or_error_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
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

	MR_register_type_ctor_info(&check_hlds__modecheck_coerce__check_hlds__modecheck_coerce__type_ctor_info_bound_inst_or_error_0);
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
