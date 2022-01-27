/*
** Automatically generated from `modecheck_coerce.m'
** by the Mercury compiler,
** version rotd-2021-05-05
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
#include "deconstruct.mih"
#include "digraph.mih"
#include "enum.mih"
#include "getopt.mih"
#include "hlds.mih"
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
#include "time.mih"
#include "transform_hlds.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "check_hlds.delay_info.mih"
#include "check_hlds.inst_test.mih"
#include "check_hlds.inst_util.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.mode_util.mih"
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
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "hlds.vartypes.mih"
#include "libs.dependency_graph.mih"
#include "libs.globals.mih"
#include "libs.polyhedron.mih"
#include "libs.timestamp.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.sym_name.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.builtin_lib_types.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_names.mih"
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
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"




static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__modecheck_coerce__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__modecheck_coerce__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data__type_ctor_info_mer_type_0;

static const MR_FA_TypeInfo_Struct2 check_hlds__modecheck_coerce__pair__ti_pair_2parse_tree__prog_data__type_ctor_info_inst_name_0parse_tree__prog_data__type_ctor_info_mer_type_0;

static const MR_FA_TypeInfo_Struct1 check_hlds__modecheck_coerce__set_ordlist__ti_set_ordlist_1pair__ti_pair_2parse_tree__prog_data__type_ctor_info_inst_name_0parse_tree__prog_data__type_ctor_info_mer_type_0;

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

static const MR_EnumFunctorDesc check_hlds__modecheck_coerce__check_hlds__modecheck_coerce__enum_functor_desc_types_comparison_0_0;

static const MR_EnumFunctorDesc check_hlds__modecheck_coerce__check_hlds__modecheck_coerce__enum_functor_desc_types_comparison_0_1;

static const MR_EnumFunctorDescPtr check_hlds__modecheck_coerce__check_hlds__modecheck_coerce__enum_ordinal_ordered_types_comparison_0[2];

static const MR_EnumFunctorDescPtr check_hlds__modecheck_coerce__check_hlds__modecheck_coerce__enum_name_ordered_types_comparison_0[2];

static const MR_Integer check_hlds__modecheck_coerce__check_hlds__modecheck_coerce__functor_number_map_types_comparison_0[2];

static void MR_CALL 
check_hlds__modecheck_coerce____Compare____types_comparison_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__modecheck_coerce____Unify____types_comparison_0_0(
  MR_Word HeadVar__2_1,
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
check_hlds__modecheck_coerce____Compare____expanded_insts_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__modecheck_coerce____Unify____expanded_insts_0_0(
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
check_hlds__modecheck_coerce__modecheck_coerce_vars_8_p_0(
  MR_Word ModuleInfo0_9,
  MR_Word X_10,
  MR_Word Y_11,
  MR_Word InstX_12,
  MR_Word InstY_13,
  MR_Word * Res_14,
  MR_Word STATE_VARIABLE_ModeInfo_0_41,
  MR_Word * STATE_VARIABLE_ModeInfo_42);

static void MR_CALL 
check_hlds__modecheck_coerce__modecheck_coerce_make_inst_8_p_0(
  MR_Word ModuleInfo_9,
  MR_Word TVarSet_10,
  MR_Word LiveX_11,
  MR_Word TypeX_12,
  MR_Word TypeY_13,
  MR_Word ExpandedInsts0_14,
  MR_Word InstX_15,
  MR_Word * Res_16);

static MR_bool MR_CALL 
check_hlds__modecheck_coerce__modecheck_coerce_from_bound_make_bound_functor_arg_insts_8_p_0(
  MR_Word ModuleInfo_9,
  MR_Word TVarSet_10,
  MR_Word LiveX_11,
  MR_Word ExpandedInsts0_12,
  MR_Word ArgTypesX_13,
  MR_Word ArgTypesY_14,
  MR_Word ArgInstsX_15,
  MR_Word * ArgInstsY_16);

static MR_bool MR_CALL 
check_hlds__modecheck_coerce__modecheck_coerce_from_bound_make_bound_functors_8_p_0(
  MR_Word ModuleInfo_9,
  MR_Word TVarSet_10,
  MR_Word LiveX_11,
  MR_Word TypeX_12,
  MR_Word TypeY_13,
  MR_Word ExpandedInsts0_14,
  MR_Word FunctorsX_15,
  MR_Word * FunctorsY_16);

static MR_bool MR_CALL 
check_hlds__modecheck_coerce__check_is_subtype_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word TVarSet_6,
  MR_Word TypeA_7,
  MR_Word TypeB_8);

static void MR_CALL 
check_hlds__modecheck_coerce__modecheck_coerce_from_ground_make_inst_7_p_0(
  MR_Word ModuleInfo_8,
  MR_Word TVarSet_9,
  MR_Word LiveX_10,
  MR_Word UniqX_11,
  MR_Word TypeX_12,
  MR_Word TypeY_13,
  MR_Word * MaybeInstY_14);

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

static MR_bool MR_CALL 
check_hlds__modecheck_coerce__cons_id_matches_builtin_type_2_p_0(
  MR_Word ConsId_3,
  MR_Word Type_4);

static MR_bool MR_CALL 
check_hlds__modecheck_coerce__get_bound_functor_cons_and_arg_types_8_p_0(
  MR_Word ModuleInfo_9,
  MR_Word TypeX_10,
  MR_Word TypeY_11,
  MR_Word ConsIdX_12,
  MR_Word * ConsIdY_13,
  MR_Word * ArgTypesX_14,
  MR_Word * ArgTypesY_15,
  MR_Integer * Arity_16);

static MR_bool MR_CALL 
check_hlds__modecheck_coerce__get_ctor_arg_types_do_subst_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word Type_6,
  MR_Word ConsId_7,
  MR_Word * CtorArgTypes_8);

static MR_bool MR_CALL 
check_hlds__modecheck_coerce__is_user_inst_1_p_0(
  MR_Word InstName_2);

static MR_Word MR_CALL 
check_hlds__modecheck_coerce__uniqueness_for_coerce_result_2_f_0(
  MR_Word LiveX_4,
  MR_Word UniqX_5);

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
check_hlds__modecheck_coerce____Unify____modecheck_coerce_result_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__modecheck_coerce____Compare____modecheck_coerce_result_0_0_10001(
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

static /* final */ const MR_Box check_hlds__modecheck_coerce_scalar_common_2[5][2];

static /* final */ const MR_Box check_hlds__modecheck_coerce_scalar_common_3[1][5];

static /* final */ const MR_Box check_hlds__modecheck_coerce_scalar_common_4[1][12];

static /* final */ const MR_Box check_hlds__modecheck_coerce_scalar_common_5[1][1];

static /* final */ const MR_Box check_hlds__modecheck_coerce_scalar_common_6[1][11];




static /* final */ const MR_Box check_hlds__modecheck_coerce_scalar_common_1[1][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
};

static /* final */ const MR_Box check_hlds__modecheck_coerce_scalar_common_2[5][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&check_hlds__modecheck_coerce_scalar_common_1[0]))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&check_hlds__modecheck_coerce_scalar_common_2[2]))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0))
  },
};

static /* final */ const MR_Box check_hlds__modecheck_coerce_scalar_common_3[1][5] = {
  /* row 0 */
  {
    (MR_Box) (((MR_Unsigned) 1U << 2)),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
};

static /* final */ const MR_Box check_hlds__modecheck_coerce_scalar_common_4[1][12] = {
  /* row 0 */
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

static /* final */ const MR_Box check_hlds__modecheck_coerce_scalar_common_5[1][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_Unsigned) 4U))
  },
};

static /* final */ const MR_Box check_hlds__modecheck_coerce_scalar_common_6[1][11] = {
  /* row 0 */
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



static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__modecheck_coerce__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__modecheck_coerce__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)
  }
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
  {
    (MR_TypeInfo) (&check_hlds__modecheck_coerce__pair__ti_pair_2parse_tree__prog_data__type_ctor_info_inst_name_0parse_tree__prog_data__type_ctor_info_mer_type_0)
  }
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
  {     NULL },
  {     (MR_PseudoTypeInfo) (&check_hlds__modecheck_coerce__set_ordlist__ti_set_ordlist_1pair__ti_pair_2parse_tree__prog_data__type_ctor_info_inst_name_0parse_tree__prog_data__type_ctor_info_mer_type_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_FA_TypeInfo_Struct1 check_hlds__modecheck_coerce__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_TypeInfo_Struct1 check_hlds__modecheck_coerce__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&check_hlds__modecheck_coerce__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_TypeInfo_Struct1 check_hlds__modecheck_coerce__list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_mode_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0)
  }
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

static const MR_DuFunctorDescPtr check_hlds__modecheck_coerce__check_hlds__modecheck_coerce__du_stag_ordered_modecheck_coerce_result_0_0[1] = {
  &check_hlds__modecheck_coerce__check_hlds__modecheck_coerce__du_functor_desc_modecheck_coerce_result_0_1
};

static const MR_DuFunctorDescPtr check_hlds__modecheck_coerce__check_hlds__modecheck_coerce__du_stag_ordered_modecheck_coerce_result_0_1[1] = {
  &check_hlds__modecheck_coerce__check_hlds__modecheck_coerce__du_functor_desc_modecheck_coerce_result_0_0
};

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
  {     check_hlds__modecheck_coerce__check_hlds__modecheck_coerce__du_name_ordered_modecheck_coerce_result_0 },
  {     check_hlds__modecheck_coerce__check_hlds__modecheck_coerce__du_ptag_ordered_modecheck_coerce_result_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  check_hlds__modecheck_coerce__check_hlds__modecheck_coerce__functor_number_map_modecheck_coerce_result_0,

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
  {     check_hlds__modecheck_coerce__check_hlds__modecheck_coerce__enum_name_ordered_types_comparison_0 },
  {     check_hlds__modecheck_coerce__check_hlds__modecheck_coerce__enum_ordinal_ordered_types_comparison_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  check_hlds__modecheck_coerce__check_hlds__modecheck_coerce__functor_number_map_types_comparison_0,

};

static void MR_CALL 
check_hlds__modecheck_coerce____Compare____types_comparison_0_0(
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
check_hlds__modecheck_coerce____Unify____types_comparison_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

static void MR_CALL 
check_hlds__modecheck_coerce____Compare____modecheck_coerce_result_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
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
      MR_Word Var_23 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 2))));
      MR_Word Var_24 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word Var_25 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));

      if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
        *HeadVar__1_1 = (MR_Integer) 1;
      else
      {
        MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
        MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
        MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 2))));
        MR_Word SubResult1_6;

        mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__modecheck_coerce_scalar_common_2[3]), &SubResult1_6, ((MR_Box) (Var_25)), ((MR_Box) (ArgY1_5)));
        succeeded = (SubResult1_6 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult1_6;
        else
        {
          MR_Word SubResult2_9;

          mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__modecheck_coerce_scalar_common_2[4]), &SubResult2_9, ((MR_Box) (Var_24)), ((MR_Box) (ArgY2_8)));
          succeeded = (SubResult2_9 != (MR_Integer) 0);
          if (succeeded)
            *HeadVar__1_1 = SubResult2_9;
          else
            check_hlds__modecheck_util____Compare____extra_goals_0_0(HeadVar__1_1, Var_23, ArgY3_11);
        }
      }
    }
  }
}

static MR_bool MR_CALL 
check_hlds__modecheck_coerce____Unify____modecheck_coerce_result_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
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
      MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgY1_4;
      MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ArgY2_6;
      MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 2))));
      MR_Word ArgY3_8;

      succeeded = (HeadVar__2_2 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
        ArgY2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
        ArgY3_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 2))));
        TypeInfo_13_13 = (MR_Word) (&check_hlds__modecheck_coerce_scalar_common_2[3]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_13_13, ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
        if (succeeded)
        {
          TypeInfo_14_14 = (MR_Word) (&check_hlds__modecheck_coerce_scalar_common_2[4]);
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_14_14, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
          if (succeeded)
            succeeded = check_hlds__modecheck_util____Unify____extra_goals_0_0(ArgX3_7, ArgY3_8);
        }
      }
    }
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__modecheck_coerce____Compare____expanded_insts_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__modecheck_coerce_scalar_common_2[1]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

static MR_bool MR_CALL 
check_hlds__modecheck_coerce____Unify____expanded_insts_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&check_hlds__modecheck_coerce_scalar_common_2[1]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
    return succeeded;
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
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_InstY_16;

    check_hlds__modecheck_coerce__modecheck_coerce_from_ground_make_inst_for_subtype_8_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 7)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_InstY_16);
    *wrapper_arg_3 = ((MR_Box) (conv0_InstY_16));
  }
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
  {
    MR_bool succeeded;
    MR_Word CtorNameX_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CtorX_17, (MR_Integer) 2))));
    MR_Word CtorArgsX_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CtorX_17, (MR_Integer) 3))));
    MR_Integer CtorArity_23 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), CtorX_17, (MR_Integer) 4))));
    MR_Word TypeCtorY_25;
    MR_Word ModuleNameY_26;
    MR_Word CtorNameY_27;
    MR_Word ConsIdY_28;
    MR_Word ArgTypesX_29;
    MR_Word ArgTypesY_31;
    MR_Word ArgInstsY_32;
    MR_Word Var_35;
    MR_Word ArgTypesY0_30;
    MR_Word TypeCtor_51;
    MR_Word TypeArgs_52;
    MR_Word ConsTable_53;
    MR_Word ConsDefn_54;
    MR_Word TypeParams_57;
    MR_Word CtorArgs_60;
    MR_Word CtorArgTypes0_62;

    parse_tree__prog_type__type_to_ctor_det_2_p_0(TypeY_16, &TypeCtorY_25);
    ModuleNameY_26 = check_hlds__type_util__type_ctor_module_1_f_0(TypeCtorY_25);
    if (((MR_tag((MR_Word) CtorNameX_21)) == (MR_Integer) 1))
    {
      MR_String Name_46 = ((MR_String) ((MR_hl_field(MR_mktag(1), CtorNameX_21, (MR_Integer) 1))));

      {
        CtorNameY_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), CtorNameY_27, 0) = ((MR_Box) (ModuleNameY_26));
        MR_hl_field(MR_mktag(1), CtorNameY_27, 1) = ((MR_Box) (Name_46));
      }
    }
    else
      CtorNameY_27 = CtorNameX_21;
    {
      ConsIdY_28 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ConsIdY_28, 0) = ((MR_Box) ((MR_Unsigned) 2U));
      MR_hl_field(MR_mktag(3), ConsIdY_28, 1) = ((MR_Box) (CtorNameY_27));
      MR_hl_field(MR_mktag(3), ConsIdY_28, 2) = ((MR_Box) (CtorArity_23));
      MR_hl_field(MR_mktag(3), ConsIdY_28, 3) = ((MR_Box) (TypeCtorY_25));
    }
    parse_tree__prog_data__get_ctor_arg_types_2_p_0(CtorArgsX_22, &ArgTypesX_29);
    succeeded = parse_tree__prog_type__type_to_ctor_and_args_3_p_0(TypeY_16, &TypeCtor_51, &TypeArgs_52);
    if (succeeded)
    {
      hlds__hlds_module__module_info_get_cons_table_2_p_0(ModuleInfo_10, &ConsTable_53);
      succeeded = hlds__hlds_cons__search_cons_table_of_type_ctor_4_p_0(ConsTable_53, TypeCtor_51, ConsIdY_28, &ConsDefn_54);
      if (succeeded)
      {
        TypeParams_57 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ConsDefn_54, (MR_Integer) 2))));
        CtorArgs_60 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ConsDefn_54, (MR_Integer) 5))));
        parse_tree__prog_data__get_ctor_arg_types_2_p_0(CtorArgs_60, &CtorArgTypes0_62);
        if ((TypeParams_57 == (MR_Word) ((MR_Unsigned) 0U)))
          ArgTypesY0_30 = CtorArgTypes0_62;
        else
        {
          MR_Word Subst_65;

          mercury__map__from_corresponding_lists_3_p_0((MR_Word) (&check_hlds__modecheck_coerce_scalar_common_2[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), TypeParams_57, TypeArgs_52, &Subst_65);
          parse_tree__prog_type_subst__apply_subst_to_type_list_3_p_0(Subst_65, CtorArgTypes0_62, &ArgTypesY0_30);
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
      MR_hl_field(MR_mktag(0), Var_35, 0) = ((MR_Box) (&check_hlds__modecheck_coerce_scalar_common_6[0]));
      MR_hl_field(MR_mktag(0), Var_35, 1) = ((MR_Box) (check_hlds__modecheck_coerce__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_99_104_101_99_107_95_99_111_101_114_99_101_95_102_114_111_109_95_103_114_111_117_110_100_95_109_97_107_101_95_98_111_117_110_100_95_102_117_110_99_116_111_114_95_95_91_54_93_95_48_9_p_0_1));
      MR_hl_field(MR_mktag(0), Var_35, 2) = ((MR_Box) ((MR_Integer) 5));
      MR_hl_field(MR_mktag(0), Var_35, 3) = ((MR_Box) (ModuleInfo_10));
      MR_hl_field(MR_mktag(0), Var_35, 4) = ((MR_Box) (TVarSet_11));
      MR_hl_field(MR_mktag(0), Var_35, 5) = ((MR_Box) (LiveX_12));
      MR_hl_field(MR_mktag(0), Var_35, 6) = ((MR_Box) (UniqX_13));
      MR_hl_field(MR_mktag(0), Var_35, 7) = ((MR_Box) (SeenTypes_14));
    }
    mercury__list__map_corresponding_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), Var_35, ArgTypesX_29, ArgTypesY_31, &ArgInstsY_32);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      *FunctorY_18 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ConsIdY_28));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ArgInstsY_32));
    }
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
  MR_Word STATE_VARIABLE_ModeInfo_0_25,
  MR_Word * STATE_VARIABLE_ModeInfo_26)
{
  {
    MR_bool succeeded = (Args0_9 != (MR_Word) ((MR_Unsigned) 0U));
    MR_Word X_16;
    MR_Word Y_17;
    MR_Word Var_27;
    MR_Word Var_28;

    if (succeeded)
    {
      X_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args0_9, (MR_Integer) 0))));
      Var_27 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args0_9, (MR_Integer) 1))));
      succeeded = (Var_27 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        Y_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_27, (MR_Integer) 0))));
        Var_28 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_27, (MR_Integer) 1))));
        succeeded = (Var_28 == (MR_Word) ((MR_Unsigned) 0U));
      }
    }
    if (succeeded)
    {
      MR_Word ModuleInfo0_18;
      MR_Word InstMap_19;

      check_hlds__mode_info__mode_info_get_module_info_2_p_0(STATE_VARIABLE_ModeInfo_0_25, &ModuleInfo0_18);
      check_hlds__mode_info__mode_info_get_instmap_2_p_0(STATE_VARIABLE_ModeInfo_0_25, &InstMap_19);
      succeeded = hlds__instmap__instmap_is_reachable_1_p_0(InstMap_19);
      if (succeeded)
      {
        MR_Word InstX_20;
        MR_Word InstY_21;

        hlds__instmap__instmap_lookup_var_3_p_0(InstMap_19, X_16, &InstX_20);
        hlds__instmap__instmap_lookup_var_3_p_0(InstMap_19, Y_17, &InstY_21);
        succeeded = check_hlds__inst_test__inst_is_ground_2_p_0(ModuleInfo0_18, InstX_20);
        if (succeeded)
        {
          succeeded = check_hlds__inst_test__inst_is_clobbered_2_p_0(ModuleInfo0_18, InstX_20);
          succeeded = !(succeeded);
        }
        if (succeeded)
        {
          MR_Word Res_22;

          check_hlds__modecheck_coerce__modecheck_coerce_vars_8_p_0(ModuleInfo0_18, X_16, Y_17, InstX_20, InstY_21, &Res_22, STATE_VARIABLE_ModeInfo_0_25, STATE_VARIABLE_ModeInfo_26);
          if ((Res_22 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            *Args_10 = Args0_9;
            *Modes_12 = Modes0_11;
            *Det_13 = (MR_Integer) 6;
            *ExtraGoals_14 = (MR_Word) ((MR_Unsigned) 0U);
          }
          else
          {
            *Args_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Res_22, (MR_Integer) 0))));
            *Modes_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Res_22, (MR_Integer) 1))));
            *ExtraGoals_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Res_22, (MR_Integer) 2))));
            *Det_13 = (MR_Integer) 0;
          }
        }
        else
        {
          MR_Word WaitingVars_23;
          MR_Word ModeError_24;

          WaitingVars_23 = parse_tree__set_of_var__make_singleton_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), X_16);
          {
            ModeError_24 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), ModeError_24, 0) = ((MR_Box) ((MR_Unsigned) 12U));
            MR_hl_field(MR_mktag(3), ModeError_24, 1) = ((MR_Box) (X_16));
            MR_hl_field(MR_mktag(3), ModeError_24, 2) = ((MR_Box) (InstX_20));
          }
          check_hlds__mode_info__mode_info_error_4_p_0(WaitingVars_23, ModeError_24, STATE_VARIABLE_ModeInfo_0_25, STATE_VARIABLE_ModeInfo_26);
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
        *STATE_VARIABLE_ModeInfo_26 = STATE_VARIABLE_ModeInfo_0_25;
      }
    }
    else
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.modecheck_coerce.modecheck_coerce\'/8", (MR_String) "bad coerce");
        return;
      }
  }
}

static void MR_CALL 
check_hlds__modecheck_coerce__modecheck_coerce_vars_8_p_0(
  MR_Word ModuleInfo0_9,
  MR_Word X_10,
  MR_Word Y_11,
  MR_Word InstX_12,
  MR_Word InstY_13,
  MR_Word * Res_14,
  MR_Word STATE_VARIABLE_ModeInfo_0_41,
  MR_Word * STATE_VARIABLE_ModeInfo_42)
{
  {
    MR_bool succeeded;
    MR_Word PredId_16;
    MR_Word PredInfo_17;
    MR_Word TVarSet_18;
    MR_Word VarTypes_19;
    MR_Word TypeX_20;
    MR_Word TypeY_21;
    MR_Word LiveX_22;
    MR_Word LiveY_23;
    MR_Word BothLive_24;
    MR_Word ExpandedInsts0_25;
    MR_Word MaybeFinalInstY_26;

    check_hlds__mode_info__mode_info_get_pred_id_2_p_0(STATE_VARIABLE_ModeInfo_0_41, &PredId_16);
    hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo0_9, PredId_16, &PredInfo_17);
    hlds__hlds_pred__pred_info_get_typevarset_2_p_0(PredInfo_17, &TVarSet_18);
    check_hlds__mode_info__mode_info_get_var_types_2_p_0(STATE_VARIABLE_ModeInfo_0_41, &VarTypes_19);
    hlds__vartypes__lookup_var_type_3_p_0(VarTypes_19, X_10, &TypeX_20);
    hlds__vartypes__lookup_var_type_3_p_0(VarTypes_19, Y_11, &TypeY_21);
    check_hlds__mode_info__mode_info_var_is_live_3_p_0(STATE_VARIABLE_ModeInfo_0_41, X_10, &LiveX_22);
    check_hlds__mode_info__mode_info_var_is_live_3_p_0(STATE_VARIABLE_ModeInfo_0_41, Y_11, &LiveY_23);
    succeeded = (LiveX_22 == (MR_Integer) 0);
    if (succeeded)
      succeeded = (LiveY_23 == (MR_Integer) 0);
    if (succeeded)
      BothLive_24 = (MR_Integer) 0;
    else
      BothLive_24 = (MR_Integer) 1;
    mercury__set__init_1_p_0((MR_Word) (&check_hlds__modecheck_coerce_scalar_common_1[0]), &ExpandedInsts0_25);
    check_hlds__modecheck_coerce__modecheck_coerce_make_inst_8_p_0(ModuleInfo0_9, TVarSet_18, LiveX_22, TypeX_20, TypeY_21, ExpandedInsts0_25, InstX_12, &MaybeFinalInstY_26);
    if ((MaybeFinalInstY_26 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word ModeError_39;
      MR_Word WaitingVars_40;

      {
        ModeError_39 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), ModeError_39, 0) = ((MR_Box) ((MR_Unsigned) 13U));
        MR_hl_field(MR_mktag(3), ModeError_39, 1) = ((MR_Box) (InstX_12));
        MR_hl_field(MR_mktag(3), ModeError_39, 2) = ((MR_Box) (TypeY_21));
      }
      parse_tree__set_of_var__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), &WaitingVars_40);
      check_hlds__mode_info__mode_info_error_4_p_0(WaitingVars_40, ModeError_39, STATE_VARIABLE_ModeInfo_0_41, STATE_VARIABLE_ModeInfo_42);
      *Res_14 = (MR_Word) ((MR_Unsigned) 0U);
    }
    else
    {
      MR_Word FinalInstY_27 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeFinalInstY_26, (MR_Integer) 0))));
      MR_Word ModuleInfo_31;
      MR_Word FinalInstX_32;
      MR_Word ModeX_33;
      MR_Word STATE_VARIABLE_ModeInfo_48_48;
      MR_Word STATE_VARIABLE_ModeInfo_50_50;
      MR_Word UnifyInstX_28;
      MR_Word ModuleInfo1_30;
      MR_Word Var_44;
      MR_Word _Det_29;

      Var_44 = parse_tree__prog_mode__ground_inst_0_f_0();
      succeeded = check_hlds__inst_util__abstractly_unify_inst_8_p_0(BothLive_24, InstX_12, Var_44, (MR_Integer) 0, &UnifyInstX_28, &_Det_29, ModuleInfo0_9, &ModuleInfo1_30);
      if (succeeded)
      {
        ModuleInfo_31 = ModuleInfo1_30;
        FinalInstX_32 = UnifyInstX_28;
      }
      else
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.modecheck_coerce.modecheck_coerce_vars\'/8", (MR_String) "abstractly_unify_inst failed");
          return;
        }
      check_hlds__mode_info__mode_info_set_module_info_3_p_0(ModuleInfo_31, STATE_VARIABLE_ModeInfo_0_41, &STATE_VARIABLE_ModeInfo_48_48);
      check_hlds__modecheck_util__modecheck_set_var_inst_5_p_0(X_10, FinalInstX_32, (MR_Word) ((MR_Unsigned) 0U), STATE_VARIABLE_ModeInfo_48_48, &STATE_VARIABLE_ModeInfo_50_50);
      {
        ModeX_33 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), ModeX_33, 0) = ((MR_Box) (InstX_12));
        MR_hl_field(MR_mktag(0), ModeX_33, 1) = ((MR_Box) (FinalInstX_32));
      }
      succeeded = check_hlds__inst_test__inst_is_free_2_p_0(ModuleInfo_31, InstY_13);
      if (succeeded)
      {
        MR_Word ModeY_34;
        MR_Word Var_53;
        MR_Word Var_54;
        MR_Word Var_56;
        MR_Word Var_57;

        check_hlds__modecheck_util__modecheck_set_var_inst_5_p_0(Y_11, FinalInstY_27, (MR_Word) ((MR_Unsigned) 0U), STATE_VARIABLE_ModeInfo_50_50, STATE_VARIABLE_ModeInfo_42);
        {
          ModeY_34 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ModeY_34, 0) = ((MR_Box) (InstY_13));
          MR_hl_field(MR_mktag(0), ModeY_34, 1) = ((MR_Box) (FinalInstY_27));
        }
        {
          Var_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_54, 0) = ((MR_Box) (Y_11));
          MR_hl_field(MR_mktag(1), Var_54, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_53, 0) = ((MR_Box) (X_10));
          MR_hl_field(MR_mktag(1), Var_53, 1) = ((MR_Box) (Var_54));
        }
        {
          Var_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_57, 0) = ((MR_Box) (ModeY_34));
          MR_hl_field(MR_mktag(1), Var_57, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_56, 0) = ((MR_Box) (ModeX_33));
          MR_hl_field(MR_mktag(1), Var_56, 1) = ((MR_Box) (Var_57));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          *Res_14 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_53));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Var_56));
          MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) ((MR_Unsigned) 0U));
        }
      }
      else
      {
        MR_Word YPrime_35;
        MR_Word ExtraGoal_36;
        MR_Word ExtraGoals_37;
        MR_Word ModeYPrime_38;
        MR_Word STATE_VARIABLE_ModeInfo_60_60;
        MR_Word Var_62;
        MR_Word Var_66;
        MR_Word Var_67;
        MR_Word Var_68;
        MR_Word Var_70;
        MR_Word Var_71;
        MR_Word VarTypes0_80;
        MR_Word VarSet0_81;
        MR_Word VarSet_82;
        MR_Word VarTypes_83;
        MR_Word STATE_VARIABLE_ModeInfo_14_84;

        check_hlds__mode_info__mode_info_get_var_types_2_p_0(STATE_VARIABLE_ModeInfo_50_50, &VarTypes0_80);
        check_hlds__mode_info__mode_info_get_varset_2_p_0(STATE_VARIABLE_ModeInfo_50_50, &VarSet0_81);
        mercury__varset__new_var_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), &YPrime_35, VarSet0_81, &VarSet_82);
        hlds__vartypes__add_var_type_4_p_0(YPrime_35, TypeY_21, VarTypes0_80, &VarTypes_83);
        check_hlds__mode_info__mode_info_set_varset_3_p_0(VarSet_82, STATE_VARIABLE_ModeInfo_50_50, &STATE_VARIABLE_ModeInfo_14_84);
        check_hlds__mode_info__mode_info_set_var_types_3_p_0(VarTypes_83, STATE_VARIABLE_ModeInfo_14_84, &STATE_VARIABLE_ModeInfo_60_60);
        check_hlds__modecheck_unify__create_var_var_unification_5_p_0(Y_11, YPrime_35, TypeY_21, STATE_VARIABLE_ModeInfo_60_60, &ExtraGoal_36);
        {
          Var_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_62, 0) = ((MR_Box) (ExtraGoal_36));
          MR_hl_field(MR_mktag(1), Var_62, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          ExtraGoals_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), ExtraGoals_37, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(1), ExtraGoals_37, 1) = ((MR_Box) (Var_62));
        }
        check_hlds__modecheck_util__modecheck_set_var_inst_5_p_0(YPrime_35, FinalInstY_27, (MR_Word) ((MR_Unsigned) 0U), STATE_VARIABLE_ModeInfo_60_60, STATE_VARIABLE_ModeInfo_42);
        Var_66 = parse_tree__prog_mode__free_inst_0_f_0();
        {
          ModeYPrime_38 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ModeYPrime_38, 0) = ((MR_Box) (Var_66));
          MR_hl_field(MR_mktag(0), ModeYPrime_38, 1) = ((MR_Box) (FinalInstY_27));
        }
        {
          Var_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_68, 0) = ((MR_Box) (YPrime_35));
          MR_hl_field(MR_mktag(1), Var_68, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_67, 0) = ((MR_Box) (X_10));
          MR_hl_field(MR_mktag(1), Var_67, 1) = ((MR_Box) (Var_68));
        }
        {
          Var_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_71, 0) = ((MR_Box) (ModeYPrime_38));
          MR_hl_field(MR_mktag(1), Var_71, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_70, 0) = ((MR_Box) (ModeX_33));
          MR_hl_field(MR_mktag(1), Var_70, 1) = ((MR_Box) (Var_71));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          *Res_14 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_67));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Var_70));
          MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (ExtraGoals_37));
        }
      }
    }
  }
}

static void MR_CALL 
check_hlds__modecheck_coerce__modecheck_coerce_make_inst_8_p_0(
  MR_Word ModuleInfo_9,
  MR_Word TVarSet_10,
  MR_Word LiveX_11,
  MR_Word TypeX_12,
  MR_Word TypeY_13,
  MR_Word ExpandedInsts0_14,
  MR_Word InstX_15,
  MR_Word * Res_16)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) InstX_15)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(InstX_15)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.modecheck_coerce.modecheck_coerce_make_inst\'/8", (MR_String) "free inst");
              return;
            }
            break;
          case (MR_Integer) 1:
            *Res_16 = (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__modecheck_coerce_scalar_common_5[0]));
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.modecheck_coerce.modecheck_coerce_make_inst\'/8", (MR_String) "free inst");
          return;
        }
        break;
      case (MR_Integer) 2:
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.modecheck_coerce.modecheck_coerce_make_inst\'/8", (MR_String) "any inst");
          return;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), InstX_15, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word UniqX_20 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), InstX_15, (MR_Integer) 1))) & (MR_Integer) 7);
              MR_Word FunctorsX_22 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstX_15, (MR_Integer) 3))));
              MR_Word FunctorsY_65;

              succeeded = check_hlds__modecheck_coerce__modecheck_coerce_from_bound_make_bound_functors_8_p_0(ModuleInfo_9, TVarSet_10, LiveX_11, TypeX_12, TypeY_13, ExpandedInsts0_14, FunctorsX_22, &FunctorsY_65);
              if (succeeded)
              {
                MR_Word UniqY_66;
                MR_Word InstY_68;

                UniqY_66 = check_hlds__modecheck_coerce__uniqueness_for_coerce_result_2_f_0(LiveX_11, UniqX_20);
                {
                  InstY_68 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), InstY_68, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(MR_mktag(3), InstY_68, 1) = (MR_Box) ((MR_Unsigned) (UniqY_66));
                  MR_hl_field(MR_mktag(3), InstY_68, 2) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__modecheck_coerce_scalar_common_3[0])));
                  MR_hl_field(MR_mktag(3), InstY_68, 3) = ((MR_Box) (FunctorsY_65));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  *Res_16 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (InstY_68));
                }
              }
              else
                *Res_16 = (MR_Word) ((MR_Unsigned) 0U);
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word HOInstInfoX_23 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstX_15, (MR_Integer) 2))));
              MR_Word UniqX_46 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), InstX_15, (MR_Integer) 1))) & (MR_Integer) 7);

              if ((HOInstInfoX_23 == (MR_Word) ((MR_Unsigned) 0U)))
                check_hlds__modecheck_coerce__modecheck_coerce_from_ground_make_inst_7_p_0(ModuleInfo_9, TVarSet_10, LiveX_11, UniqX_46, TypeX_12, TypeY_13, Res_16);
              else
              {
                MR_Word UniqY_25;
                MR_Word InstY_26;

                switch (UniqX_46) {
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
                        UniqY_25 = UniqX_46;
                        break;
                      case (MR_Integer) 0:
                        UniqY_25 = (MR_Integer) 0;
                        break;
                    }
                    break;
                  case (MR_Integer) 0:
                    UniqY_25 = (MR_Integer) 0;
                    break;
                }
                {
                  InstY_26 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), InstY_26, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                  MR_hl_field(MR_mktag(3), InstY_26, 1) = (MR_Box) ((MR_Unsigned) (UniqY_25));
                  MR_hl_field(MR_mktag(3), InstY_26, 2) = ((MR_Box) (HOInstInfoX_23));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  *Res_16 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (InstY_26));
                }
              }
            }
            break;
          case (MR_Integer) 2:
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.modecheck_coerce.modecheck_coerce_make_inst\'/8", (MR_String) "uninstantiated inst parameter");
              return;
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word InstVars_28 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstX_15, (MR_Integer) 1))));
              MR_Word SubInstX_29 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstX_15, (MR_Integer) 2))));
              MR_Word SubRes_30;

              check_hlds__modecheck_coerce__modecheck_coerce_make_inst_8_p_0(ModuleInfo_9, TVarSet_10, LiveX_11, TypeX_12, TypeY_13, ExpandedInsts0_14, SubInstX_29, &SubRes_30);
              if ((SubRes_30 == (MR_Word) ((MR_Unsigned) 0U)))
                *Res_16 = (MR_Word) ((MR_Unsigned) 0U);
              else
              {
                MR_Word SubInstY_31 = ((MR_Word) ((MR_hl_field(MR_mktag(1), SubRes_30, (MR_Integer) 0))));
                MR_Word InstY_48;

                {
                  InstY_48 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), InstY_48, 0) = ((MR_Box) ((MR_Unsigned) 3U));
                  MR_hl_field(MR_mktag(3), InstY_48, 1) = ((MR_Box) (InstVars_28));
                  MR_hl_field(MR_mktag(3), InstY_48, 2) = ((MR_Box) (SubInstY_31));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  *Res_16 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (InstY_48));
                }
              }
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word InstNameX_32 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstX_15, (MR_Integer) 1))));
              MR_Word ExpandedInsts1_33;
              MR_Word Var_39;

              {
                Var_39 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_39, 0) = ((MR_Box) (InstNameX_32));
                MR_hl_field(MR_mktag(0), Var_39, 1) = ((MR_Box) (TypeX_12));
              }
              succeeded = mercury__set__insert_new_3_p_0((MR_Word) (&check_hlds__modecheck_coerce_scalar_common_1[0]), ((MR_Box) (Var_39)), ExpandedInsts0_14, &ExpandedInsts1_33);
              if (succeeded)
              {
                MR_Word InstX1_34;
                MR_Word next_value_of_ExpandedInsts0_14;
                MR_Word next_value_of_InstX_15;

                check_hlds__mode_util__inst_lookup_3_p_0(ModuleInfo_9, InstNameX_32, &InstX1_34);
                // direct tailcall eliminated
                ;
                next_value_of_ExpandedInsts0_14 = ExpandedInsts1_33;
                next_value_of_InstX_15 = InstX1_34;
                ExpandedInsts0_14 = next_value_of_ExpandedInsts0_14;
                InstX_15 = next_value_of_InstX_15;
                continue;
              }
              else
              {
                succeeded = check_hlds__modecheck_coerce__is_user_inst_1_p_0(InstNameX_32);
                if (succeeded)
                  succeeded = check_hlds__modecheck_coerce__check_is_subtype_4_p_0(ModuleInfo_9, TVarSet_10, TypeX_12, TypeY_13);
                if (succeeded)
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                    *Res_16 = base;
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (InstX_15));
                  }
                else
                  *Res_16 = (MR_Word) ((MR_Unsigned) 0U);
              }
            }
            break;
          case (MR_Integer) 5:
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.modecheck_coerce.modecheck_coerce_make_inst\'/8", (MR_String) "abstract inst");
              return;
            }
            break;
        }
        break;
    }
    break;
  }
}

static MR_bool MR_CALL 
check_hlds__modecheck_coerce__modecheck_coerce_from_bound_make_bound_functor_arg_insts_8_p_0(
  MR_Word ModuleInfo_9,
  MR_Word TVarSet_10,
  MR_Word LiveX_11,
  MR_Word ExpandedInsts0_12,
  MR_Word ArgTypesX_13,
  MR_Word ArgTypesY_14,
  MR_Word ArgInstsX_15,
  MR_Word * ArgInstsY_16)
{
  {
    MR_bool succeeded = (ArgTypesX_13 == (MR_Word) ((MR_Unsigned) 0U));

    if (succeeded)
    {
      succeeded = (ArgTypesY_14 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
        succeeded = (ArgInstsX_15 == (MR_Word) ((MR_Unsigned) 0U));
    }
    if (succeeded)
    {
      *ArgInstsY_16 = (MR_Word) ((MR_Unsigned) 0U);
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Word HeadArgTypeX_17;
      MR_Word TailArgTypesX_18;
      MR_Word HeadArgTypeY_19;
      MR_Word TailArgTypesY_20;
      MR_Word HeadArgInstX_21;
      MR_Word TailArgInstsX_22;

      succeeded = (ArgTypesX_13 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        HeadArgTypeX_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgTypesX_13, (MR_Integer) 0))));
        TailArgTypesX_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgTypesX_13, (MR_Integer) 1))));
        succeeded = (ArgTypesY_14 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          HeadArgTypeY_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgTypesY_14, (MR_Integer) 0))));
          TailArgTypesY_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgTypesY_14, (MR_Integer) 1))));
          succeeded = (ArgInstsX_15 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            HeadArgInstX_21 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgInstsX_15, (MR_Integer) 0))));
            TailArgInstsX_22 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgInstsX_15, (MR_Integer) 1))));
          }
        }
      }
      if (succeeded)
      {
        MR_Word HeadArgInstY_23;
        MR_Word TailArgInstsY_24;
        MR_Word Var_25;

        check_hlds__modecheck_coerce__modecheck_coerce_make_inst_8_p_0(ModuleInfo_9, TVarSet_10, LiveX_11, HeadArgTypeX_17, HeadArgTypeY_19, ExpandedInsts0_12, HeadArgInstX_21, &Var_25);
        succeeded = (Var_25 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          HeadArgInstY_23 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_25, (MR_Integer) 0))));
          succeeded = check_hlds__modecheck_coerce__modecheck_coerce_from_bound_make_bound_functor_arg_insts_8_p_0(ModuleInfo_9, TVarSet_10, LiveX_11, ExpandedInsts0_12, TailArgTypesX_18, TailArgTypesY_20, TailArgInstsX_22, &TailArgInstsY_24);
          if (succeeded)
          {
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *ArgInstsY_16 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (HeadArgInstY_23));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (TailArgInstsY_24));
            }
            succeeded = MR_TRUE;
          }
        }
      }
      else
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.modecheck_coerce.modecheck_coerce_from_bound_make_bound_functor_arg_insts\'/8", (MR_String) "length mismatch");
        succeeded = MR_TRUE;
      }
    }
    return succeeded;
  }
}

static MR_bool MR_CALL 
check_hlds__modecheck_coerce__modecheck_coerce_from_bound_make_bound_functors_8_p_0(
  MR_Word ModuleInfo_9,
  MR_Word TVarSet_10,
  MR_Word LiveX_11,
  MR_Word TypeX_12,
  MR_Word TypeY_13,
  MR_Word ExpandedInsts0_14,
  MR_Word FunctorsX_15,
  MR_Word * FunctorsY_16)
{
  {
    MR_bool succeeded;

    if ((FunctorsX_15 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *FunctorsY_16 = (MR_Word) ((MR_Unsigned) 0U);
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Word HeadFunctorX_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), FunctorsX_15, (MR_Integer) 0))));
      MR_Word TailFunctorsX_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), FunctorsX_15, (MR_Integer) 1))));
      MR_Word HeadFunctorY_19;
      MR_Word TailFunctorsY_20;
      MR_Word Var_21;
      MR_Word ConsIdX_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadFunctorX_17, (MR_Integer) 0))));
      MR_Word ArgInstsX_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadFunctorX_17, (MR_Integer) 1))));

      switch (MR_tag((MR_Word) ConsIdX_30)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.modecheck_coerce.modecheck_coerce_from_bound_make_bound_functor\'/8", (MR_String) "unsupported cons_id");
          break;
        case (MR_Integer) 1:
        case (MR_Integer) 2:
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.modecheck_coerce.modecheck_coerce_from_bound_make_bound_functor\'/8", (MR_String) "unsupported cons_id");
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsIdX_30, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
            case (MR_Integer) 1:
            case (MR_Integer) 4:
            case (MR_Integer) 18:
            case (MR_Integer) 19:
            case (MR_Integer) 20:
            case (MR_Integer) 21:
            case (MR_Integer) 22:
            case (MR_Integer) 23:
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.modecheck_coerce.modecheck_coerce_from_bound_make_bound_functor\'/8", (MR_String) "unsupported cons_id");
              break;
            case (MR_Integer) 2:
              {
                MR_Word ConsIdY_35;
                MR_Word ArgTypesX_36;
                MR_Word ArgTypesY_37;
                MR_Word TypeCtorInfo_67_80;
                MR_Integer Arity_38;
                MR_Integer Var_81;

                succeeded = check_hlds__modecheck_coerce__get_bound_functor_cons_and_arg_types_8_p_0(ModuleInfo_9, TypeX_12, TypeY_13, ConsIdX_30, &ConsIdY_35, &ArgTypesX_36, &ArgTypesY_37, &Arity_38);
                if (succeeded)
                {
                  TypeCtorInfo_67_80 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0);
                  mercury__list__length_2_p_0(TypeCtorInfo_67_80, ArgInstsX_31, &Var_81);
                  succeeded = (Arity_38 == Var_81);
                }
                if (succeeded)
                {
                  MR_Word ArgInstsY_39;

                  succeeded = check_hlds__modecheck_coerce__modecheck_coerce_from_bound_make_bound_functor_arg_insts_8_p_0(ModuleInfo_9, TVarSet_10, LiveX_11, ExpandedInsts0_14, ArgTypesX_36, ArgTypesY_37, ArgInstsX_31, &ArgInstsY_39);
                  if (succeeded)
                  {
                    MR_Word FunctorY_40;

                    {
                      FunctorY_40 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), FunctorY_40, 0) = ((MR_Box) (ConsIdY_35));
                      MR_hl_field(MR_mktag(0), FunctorY_40, 1) = ((MR_Box) (ArgInstsY_39));
                    }
                    {
                      Var_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_21, 0) = ((MR_Box) (FunctorY_40));
                    }
                  }
                  else
                    Var_21 = (MR_Word) ((MR_Unsigned) 0U);
                }
                else
                  Var_21 = (MR_Word) ((MR_Unsigned) 0U);
              }
              break;
            case (MR_Integer) 3:
              mercury__require__sorry_2_p_0((MR_String) "predicate \140check_hlds.modecheck_coerce.modecheck_coerce_from_bound_make_bound_functor\'/8", (MR_String) "tuple_cons");
              break;
            case (MR_Integer) 5:
            case (MR_Integer) 6:
            case (MR_Integer) 7:
            case (MR_Integer) 8:
            case (MR_Integer) 9:
            case (MR_Integer) 10:
            case (MR_Integer) 11:
            case (MR_Integer) 12:
            case (MR_Integer) 13:
            case (MR_Integer) 14:
            case (MR_Integer) 15:
            case (MR_Integer) 16:
            case (MR_Integer) 17:
              {
                succeeded = check_hlds__modecheck_coerce__cons_id_matches_builtin_type_2_p_0(ConsIdX_30, TypeX_12);
                if (succeeded)
                {
                  succeeded = parse_tree__prog_data____Unify____mer_type_0_0(TypeX_12, TypeY_13);
                  if (succeeded)
                    succeeded = (ArgInstsX_31 == (MR_Word) ((MR_Unsigned) 0U));
                }
                if (succeeded)
                  {
                    Var_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_21, 0) = ((MR_Box) (HeadFunctorX_17));
                  }
                else
                  Var_21 = (MR_Word) ((MR_Unsigned) 0U);
              }
              break;
          }
          break;
      }
      succeeded = (Var_21 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        HeadFunctorY_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_21, (MR_Integer) 0))));
        succeeded = check_hlds__modecheck_coerce__modecheck_coerce_from_bound_make_bound_functors_8_p_0(ModuleInfo_9, TVarSet_10, LiveX_11, TypeX_12, TypeY_13, ExpandedInsts0_14, TailFunctorsX_18, &TailFunctorsY_20);
        if (succeeded)
        {
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *FunctorsY_16 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (HeadFunctorY_19));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (TailFunctorsY_20));
          }
          succeeded = MR_TRUE;
        }
      }
    }
    return succeeded;
  }
}

static MR_bool MR_CALL 
check_hlds__modecheck_coerce__check_is_subtype_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word TVarSet_6,
  MR_Word TypeA_7,
  MR_Word TypeB_8)
{
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
            MR_String Var_53;
            MR_String Var_54;

            succeeded = ((MR_tag((MR_Word) TypeB_8)) == (MR_Integer) 0);
            if (succeeded)
            {
              Var_53 = (MR_String) "predicate \140check_hlds.modecheck_coerce.compare_types_nonvar\'/5";
              Var_54 = (MR_String) "type_variable";
              mercury__require__unexpected_2_p_0(Var_53, Var_54);
              succeeded = MR_TRUE;
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word TypeCtorA_34;
            MR_Word ArgsA_35;
            MR_Word TypeCtorB_36;
            MR_Word ArgsB_37;

            succeeded = parse_tree__prog_type__type_to_ctor_and_args_3_p_0(TypeA_7, &TypeCtorA_34, &ArgsA_35);
            if (succeeded)
            {
              succeeded = parse_tree__prog_type__type_to_ctor_and_args_3_p_0(TypeB_8, &TypeCtorB_36, &ArgsB_37);
              if (succeeded)
              {
                succeeded = parse_tree__prog_data____Unify____type_ctor_0_0(TypeCtorA_34, TypeCtorB_36);
                if (succeeded)
                  succeeded = check_hlds__modecheck_coerce__compare_types_corresponding_5_p_0(TypeTable_9, TVarSet_6, (MR_Integer) 1, ArgsA_35, ArgsB_37);
                else
                {
                  MR_Word SuperTypeA_38;

                  succeeded = MR_TRUE;
                  if (succeeded)
                  {
                    succeeded = check_hlds__type_util__get_supertype_5_p_0(TypeTable_9, TVarSet_6, TypeCtorA_34, ArgsA_35, &SuperTypeA_38);
                    if (succeeded)
                      succeeded = check_hlds__modecheck_coerce__compare_types_5_p_0(TypeTable_9, TVarSet_6, (MR_Integer) 1, SuperTypeA_38, TypeB_8);
                  }
                }
              }
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word BuiltinType_26 = ((MR_Word) ((MR_hl_field(MR_mktag(2), TypeA_7, (MR_Integer) 0))));
            MR_Word Var_60;

            succeeded = ((MR_tag((MR_Word) TypeB_8)) == (MR_Integer) 2);
            if (succeeded)
            {
              Var_60 = ((MR_Word) ((MR_hl_field(MR_mktag(2), TypeB_8, (MR_Integer) 0))));
              succeeded = parse_tree__prog_data____Unify____builtin_type_0_0(BuiltinType_26, Var_60);
            }
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), TypeA_7, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word Kind_39 = ((MR_Word) ((MR_hl_field(MR_mktag(3), TypeA_7, (MR_Integer) 2))));
                MR_Word ArgsA_55 = ((MR_Word) ((MR_hl_field(MR_mktag(3), TypeA_7, (MR_Integer) 1))));
                MR_Word ArgsB_56;
                MR_Word Var_61;

                succeeded = ((((MR_tag((MR_Word) TypeB_8)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), TypeB_8, (MR_Integer) 0)))) == (MR_Integer) 0)));
                if (succeeded)
                {
                  ArgsB_56 = ((MR_Word) ((MR_hl_field(MR_mktag(3), TypeB_8, (MR_Integer) 1))));
                  Var_61 = ((MR_Word) ((MR_hl_field(MR_mktag(3), TypeB_8, (MR_Integer) 2))));
                  succeeded = parse_tree__prog_data____Unify____kind_0_0(Kind_39, Var_61);
                  if (succeeded)
                    succeeded = check_hlds__modecheck_coerce__compare_types_corresponding_5_p_0(TypeTable_9, TVarSet_6, (MR_Integer) 1, ArgsA_55, ArgsB_56);
                }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word PredOrFunc_40 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), TypeA_7, (MR_Integer) 1))) & (MR_Integer) 1);
                MR_Word Purity_42 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), TypeA_7, (MR_Integer) 4))) & (MR_Integer) 3);
                MR_Word Var_52;
                MR_Word ArgsA_57 = ((MR_Word) ((MR_hl_field(MR_mktag(3), TypeA_7, (MR_Integer) 2))));
                MR_Word ArgsB_58;
                MR_Word Var_62;
                MR_Word Var_63;

                succeeded = ((((MR_tag((MR_Word) TypeB_8)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), TypeB_8, (MR_Integer) 0)))) == (MR_Integer) 1)));
                if (succeeded)
                {
                  Var_62 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), TypeB_8, (MR_Integer) 1))) & (MR_Integer) 1);
                  ArgsB_58 = ((MR_Word) ((MR_hl_field(MR_mktag(3), TypeB_8, (MR_Integer) 2))));
                  Var_63 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), TypeB_8, (MR_Integer) 4))) & (MR_Integer) 3);
                  succeeded = (PredOrFunc_40 == Var_62);
                  if (succeeded)
                  {
                    succeeded = (Purity_42 == Var_63);
                    if (succeeded)
                    {
                      succeeded = MR_TRUE;
                      if (succeeded)
                      {
                        Var_52 = (MR_Integer) 0;
                        succeeded = check_hlds__modecheck_coerce__compare_types_corresponding_5_p_0(TypeTable_9, TVarSet_6, Var_52, ArgsA_57, ArgsB_58);
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
                MR_Word TypeA1_48 = ((MR_Word) ((MR_hl_field(MR_mktag(3), TypeA_7, (MR_Integer) 1))));
                MR_Word TypeB1_49;
                MR_Word Kind_59 = ((MR_Word) ((MR_hl_field(MR_mktag(3), TypeA_7, (MR_Integer) 2))));
                MR_Word Var_65;

                succeeded = ((((MR_tag((MR_Word) TypeB_8)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), TypeB_8, (MR_Integer) 0)))) == (MR_Integer) 3)));
                if (succeeded)
                {
                  TypeB1_49 = ((MR_Word) ((MR_hl_field(MR_mktag(3), TypeB_8, (MR_Integer) 1))));
                  Var_65 = ((MR_Word) ((MR_hl_field(MR_mktag(3), TypeB_8, (MR_Integer) 2))));
                  succeeded = parse_tree__prog_data____Unify____kind_0_0(Kind_59, Var_65);
                  if (succeeded)
                    succeeded = check_hlds__modecheck_coerce__compare_types_5_p_0(TypeTable_9, TVarSet_6, (MR_Integer) 1, TypeA1_48, TypeB1_49);
                }
              }
              break;
          }
          break;
      }
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__modecheck_coerce__modecheck_coerce_from_ground_make_inst_7_p_0(
  MR_Word ModuleInfo_8,
  MR_Word TVarSet_9,
  MR_Word LiveX_10,
  MR_Word UniqX_11,
  MR_Word TypeX_12,
  MR_Word TypeY_13,
  MR_Word * MaybeInstY_14)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__prog_data____Unify____mer_type_0_0(TypeX_12, TypeY_13);
    if (succeeded)
    {
      MR_Word UniqY_15;
      MR_Word InstY_16;

      switch (UniqX_11) {
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
          switch (LiveX_10) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
              UniqY_15 = UniqX_11;
              break;
            case (MR_Integer) 0:
              UniqY_15 = (MR_Integer) 0;
              break;
          }
          break;
        case (MR_Integer) 0:
          UniqY_15 = (MR_Integer) 0;
          break;
      }
      {
        InstY_16 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), InstY_16, 0) = ((MR_Box) ((MR_Unsigned) 1U));
        MR_hl_field(MR_mktag(3), InstY_16, 1) = (MR_Box) ((MR_Unsigned) (UniqY_15));
        MR_hl_field(MR_mktag(3), InstY_16, 2) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *MaybeInstY_14 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (InstY_16));
      }
    }
    else
    {
      MR_Word TypeTable_32;

      hlds__hlds_module__module_info_get_type_table_2_p_0(ModuleInfo_8, &TypeTable_32);
      succeeded = ((MR_tag((MR_Word) TypeX_12)) == (MR_Integer) 0);
      if (succeeded)
      {
      }
      if (!(succeeded))
      {
        succeeded = ((MR_tag((MR_Word) TypeY_13)) == (MR_Integer) 0);
        if (succeeded)
        {
        }
      }
      if (succeeded)
        succeeded = parse_tree__prog_data____Unify____mer_type_0_0(TypeX_12, TypeY_13);
      else
        switch (MR_tag((MR_Word) TypeX_12)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_String Var_76;
              MR_String Var_77;

              succeeded = ((MR_tag((MR_Word) TypeY_13)) == (MR_Integer) 0);
              if (succeeded)
              {
                Var_76 = (MR_String) "predicate \140check_hlds.modecheck_coerce.compare_types_nonvar\'/5";
                Var_77 = (MR_String) "type_variable";
                {
                  mercury__require__unexpected_2_p_0(Var_76, Var_77);
                  return;
                }
                succeeded = MR_TRUE;
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word TypeCtorA_57;
              MR_Word ArgsA_58;
              MR_Word TypeCtorB_59;
              MR_Word ArgsB_60;

              succeeded = parse_tree__prog_type__type_to_ctor_and_args_3_p_0(TypeX_12, &TypeCtorA_57, &ArgsA_58);
              if (succeeded)
              {
                succeeded = parse_tree__prog_type__type_to_ctor_and_args_3_p_0(TypeY_13, &TypeCtorB_59, &ArgsB_60);
                if (succeeded)
                {
                  succeeded = parse_tree__prog_data____Unify____type_ctor_0_0(TypeCtorA_57, TypeCtorB_59);
                  if (succeeded)
                    succeeded = check_hlds__modecheck_coerce__compare_types_corresponding_5_p_0(TypeTable_32, TVarSet_9, (MR_Integer) 1, ArgsA_58, ArgsB_60);
                  else
                  {
                    MR_Word SuperTypeA_61;

                    succeeded = MR_TRUE;
                    if (succeeded)
                    {
                      succeeded = check_hlds__type_util__get_supertype_5_p_0(TypeTable_32, TVarSet_9, TypeCtorA_57, ArgsA_58, &SuperTypeA_61);
                      if (succeeded)
                        succeeded = check_hlds__modecheck_coerce__compare_types_5_p_0(TypeTable_32, TVarSet_9, (MR_Integer) 1, SuperTypeA_61, TypeY_13);
                    }
                  }
                }
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word BuiltinType_49 = ((MR_Word) ((MR_hl_field(MR_mktag(2), TypeX_12, (MR_Integer) 0))));
              MR_Word Var_83;

              succeeded = ((MR_tag((MR_Word) TypeY_13)) == (MR_Integer) 2);
              if (succeeded)
              {
                Var_83 = ((MR_Word) ((MR_hl_field(MR_mktag(2), TypeY_13, (MR_Integer) 0))));
                succeeded = parse_tree__prog_data____Unify____builtin_type_0_0(BuiltinType_49, Var_83);
              }
            }
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), TypeX_12, (MR_Integer) 0))))) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word Kind_62 = ((MR_Word) ((MR_hl_field(MR_mktag(3), TypeX_12, (MR_Integer) 2))));
                  MR_Word ArgsA_78 = ((MR_Word) ((MR_hl_field(MR_mktag(3), TypeX_12, (MR_Integer) 1))));
                  MR_Word ArgsB_79;
                  MR_Word Var_84;

                  succeeded = ((((MR_tag((MR_Word) TypeY_13)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), TypeY_13, (MR_Integer) 0)))) == (MR_Integer) 0)));
                  if (succeeded)
                  {
                    ArgsB_79 = ((MR_Word) ((MR_hl_field(MR_mktag(3), TypeY_13, (MR_Integer) 1))));
                    Var_84 = ((MR_Word) ((MR_hl_field(MR_mktag(3), TypeY_13, (MR_Integer) 2))));
                    succeeded = parse_tree__prog_data____Unify____kind_0_0(Kind_62, Var_84);
                    if (succeeded)
                      succeeded = check_hlds__modecheck_coerce__compare_types_corresponding_5_p_0(TypeTable_32, TVarSet_9, (MR_Integer) 1, ArgsA_78, ArgsB_79);
                  }
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word PredOrFunc_63 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), TypeX_12, (MR_Integer) 1))) & (MR_Integer) 1);
                  MR_Word Purity_65 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), TypeX_12, (MR_Integer) 4))) & (MR_Integer) 3);
                  MR_Word Var_75;
                  MR_Word ArgsA_80 = ((MR_Word) ((MR_hl_field(MR_mktag(3), TypeX_12, (MR_Integer) 2))));
                  MR_Word ArgsB_81;
                  MR_Word Var_85;
                  MR_Word Var_86;

                  succeeded = ((((MR_tag((MR_Word) TypeY_13)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), TypeY_13, (MR_Integer) 0)))) == (MR_Integer) 1)));
                  if (succeeded)
                  {
                    Var_85 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), TypeY_13, (MR_Integer) 1))) & (MR_Integer) 1);
                    ArgsB_81 = ((MR_Word) ((MR_hl_field(MR_mktag(3), TypeY_13, (MR_Integer) 2))));
                    Var_86 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), TypeY_13, (MR_Integer) 4))) & (MR_Integer) 3);
                    succeeded = (PredOrFunc_63 == Var_85);
                    if (succeeded)
                    {
                      succeeded = (Purity_65 == Var_86);
                      if (succeeded)
                      {
                        succeeded = MR_TRUE;
                        if (succeeded)
                        {
                          Var_75 = (MR_Integer) 0;
                          succeeded = check_hlds__modecheck_coerce__compare_types_corresponding_5_p_0(TypeTable_32, TVarSet_9, Var_75, ArgsA_80, ArgsB_81);
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
                  MR_Word TypeA1_71 = ((MR_Word) ((MR_hl_field(MR_mktag(3), TypeX_12, (MR_Integer) 1))));
                  MR_Word TypeB1_72;
                  MR_Word Kind_82 = ((MR_Word) ((MR_hl_field(MR_mktag(3), TypeX_12, (MR_Integer) 2))));
                  MR_Word Var_88;

                  succeeded = ((((MR_tag((MR_Word) TypeY_13)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), TypeY_13, (MR_Integer) 0)))) == (MR_Integer) 3)));
                  if (succeeded)
                  {
                    TypeB1_72 = ((MR_Word) ((MR_hl_field(MR_mktag(3), TypeY_13, (MR_Integer) 1))));
                    Var_88 = ((MR_Word) ((MR_hl_field(MR_mktag(3), TypeY_13, (MR_Integer) 2))));
                    succeeded = parse_tree__prog_data____Unify____kind_0_0(Kind_82, Var_88);
                    if (succeeded)
                      succeeded = check_hlds__modecheck_coerce__compare_types_5_p_0(TypeTable_32, TVarSet_9, (MR_Integer) 1, TypeA1_71, TypeB1_72);
                  }
                }
                break;
            }
            break;
        }
      if (succeeded)
      {
        MR_Word SeenTypes0_17;
        MR_Word InstY_19;

        mercury__set__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), &SeenTypes0_17);
        check_hlds__modecheck_coerce__modecheck_coerce_from_ground_make_inst_for_subtype_8_p_0(ModuleInfo_8, TVarSet_9, LiveX_10, UniqX_11, SeenTypes0_17, TypeX_12, TypeY_13, &InstY_19);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *MaybeInstY_14 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (InstY_19));
        }
      }
      else
        *MaybeInstY_14 = (MR_Word) ((MR_Unsigned) 0U);
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
            MR_String Var_48;
            MR_String Var_49;

            succeeded = ((MR_tag((MR_Word) TypeB_10)) == (MR_Integer) 0);
            if (succeeded)
            {
              Var_48 = (MR_String) "predicate \140check_hlds.modecheck_coerce.compare_types_nonvar\'/5";
              Var_49 = (MR_String) "type_variable";
              mercury__require__unexpected_2_p_0(Var_48, Var_49);
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

            succeeded = parse_tree__prog_type__type_to_ctor_and_args_3_p_0(TypeA_9, &TypeCtorA_29, &ArgsA_30);
            if (succeeded)
            {
              succeeded = parse_tree__prog_type__type_to_ctor_and_args_3_p_0(TypeB_10, &TypeCtorB_31, &ArgsB_32);
              if (succeeded)
              {
                succeeded = parse_tree__prog_data____Unify____type_ctor_0_0(TypeCtorA_29, TypeCtorB_31);
                if (succeeded)
                  succeeded = check_hlds__modecheck_coerce__compare_types_corresponding_5_p_0(TypeTable_6, TVarSet_7, Comparison_8, ArgsA_30, ArgsB_32);
                else
                {
                  MR_Word SuperTypeA_33;
                  MR_Word next_value_of_TypeA_9;

                  succeeded = (Comparison_8 == (MR_Integer) 1);
                  if (succeeded)
                  {
                    succeeded = check_hlds__type_util__get_supertype_5_p_0(TypeTable_6, TVarSet_7, TypeCtorA_29, ArgsA_30, &SuperTypeA_33);
                    if (succeeded)
                    {
                      // direct tailcall eliminated
                      ;
                      next_value_of_TypeA_9 = SuperTypeA_33;
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
            MR_Word BuiltinType_21 = ((MR_Word) ((MR_hl_field(MR_mktag(2), TypeA_9, (MR_Integer) 0))));
            MR_Word Var_55;

            succeeded = ((MR_tag((MR_Word) TypeB_10)) == (MR_Integer) 2);
            if (succeeded)
            {
              Var_55 = ((MR_Word) ((MR_hl_field(MR_mktag(2), TypeB_10, (MR_Integer) 0))));
              succeeded = parse_tree__prog_data____Unify____builtin_type_0_0(BuiltinType_21, Var_55);
            }
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), TypeA_9, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word Kind_34 = ((MR_Word) ((MR_hl_field(MR_mktag(3), TypeA_9, (MR_Integer) 2))));
                MR_Word ArgsA_50 = ((MR_Word) ((MR_hl_field(MR_mktag(3), TypeA_9, (MR_Integer) 1))));
                MR_Word ArgsB_51;
                MR_Word Var_56;

                succeeded = ((((MR_tag((MR_Word) TypeB_10)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), TypeB_10, (MR_Integer) 0)))) == (MR_Integer) 0)));
                if (succeeded)
                {
                  ArgsB_51 = ((MR_Word) ((MR_hl_field(MR_mktag(3), TypeB_10, (MR_Integer) 1))));
                  Var_56 = ((MR_Word) ((MR_hl_field(MR_mktag(3), TypeB_10, (MR_Integer) 2))));
                  succeeded = parse_tree__prog_data____Unify____kind_0_0(Kind_34, Var_56);
                  if (succeeded)
                    succeeded = check_hlds__modecheck_coerce__compare_types_corresponding_5_p_0(TypeTable_6, TVarSet_7, Comparison_8, ArgsA_50, ArgsB_51);
                }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word PredOrFunc_35 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), TypeA_9, (MR_Integer) 1))) & (MR_Integer) 1);
                MR_Word Purity_37 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), TypeA_9, (MR_Integer) 4))) & (MR_Integer) 3);
                MR_Word Var_47;
                MR_Word ArgsA_52 = ((MR_Word) ((MR_hl_field(MR_mktag(3), TypeA_9, (MR_Integer) 2))));
                MR_Word ArgsB_53;
                MR_Word Var_57;
                MR_Word Var_58;

                succeeded = ((((MR_tag((MR_Word) TypeB_10)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), TypeB_10, (MR_Integer) 0)))) == (MR_Integer) 1)));
                if (succeeded)
                {
                  Var_57 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), TypeB_10, (MR_Integer) 1))) & (MR_Integer) 1);
                  ArgsB_53 = ((MR_Word) ((MR_hl_field(MR_mktag(3), TypeB_10, (MR_Integer) 2))));
                  Var_58 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), TypeB_10, (MR_Integer) 4))) & (MR_Integer) 3);
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
                        succeeded = check_hlds__modecheck_coerce__compare_types_corresponding_5_p_0(TypeTable_6, TVarSet_7, Var_47, ArgsA_52, ArgsB_53);
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
                MR_Word TypeA1_43 = ((MR_Word) ((MR_hl_field(MR_mktag(3), TypeA_9, (MR_Integer) 1))));
                MR_Word TypeB1_44;
                MR_Word Kind_54 = ((MR_Word) ((MR_hl_field(MR_mktag(3), TypeA_9, (MR_Integer) 2))));
                MR_Word Var_60;
                MR_Word next_value_of_TypeA_9;
                MR_Word next_value_of_TypeB_10;

                succeeded = ((((MR_tag((MR_Word) TypeB_10)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), TypeB_10, (MR_Integer) 0)))) == (MR_Integer) 3)));
                if (succeeded)
                {
                  TypeB1_44 = ((MR_Word) ((MR_hl_field(MR_mktag(3), TypeB_10, (MR_Integer) 1))));
                  Var_60 = ((MR_Word) ((MR_hl_field(MR_mktag(3), TypeB_10, (MR_Integer) 2))));
                  succeeded = parse_tree__prog_data____Unify____kind_0_0(Kind_54, Var_60);
                  if (succeeded)
                  {
                    // direct tailcall eliminated
                    ;
                    next_value_of_TypeA_9 = TypeA1_43;
                    next_value_of_TypeB_10 = TypeB1_44;
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
      MR_Word TypeA_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 0))));
      MR_Word TypesA_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 1))));
      MR_Word TypeB_14;
      MR_Word TypesB_15;
      MR_Word next_value_of_HeadVar__4_4;
      MR_Word next_value_of_HeadVar__5_5;

      succeeded = (HeadVar__5_5 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        TypeB_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__5_5, (MR_Integer) 0))));
        TypesB_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__5_5, (MR_Integer) 1))));
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
                MR_String Var_58;
                MR_String Var_59;

                succeeded = ((MR_tag((MR_Word) TypeB_14)) == (MR_Integer) 0);
                if (succeeded)
                {
                  Var_58 = (MR_String) "predicate \140check_hlds.modecheck_coerce.compare_types_nonvar\'/5";
                  Var_59 = (MR_String) "type_variable";
                  mercury__require__unexpected_2_p_0(Var_58, Var_59);
                  succeeded = MR_TRUE;
                }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word TypeCtorA_39;
                MR_Word ArgsA_40;
                MR_Word TypeCtorB_41;
                MR_Word ArgsB_42;

                succeeded = parse_tree__prog_type__type_to_ctor_and_args_3_p_0(TypeA_12, &TypeCtorA_39, &ArgsA_40);
                if (succeeded)
                {
                  succeeded = parse_tree__prog_type__type_to_ctor_and_args_3_p_0(TypeB_14, &TypeCtorB_41, &ArgsB_42);
                  if (succeeded)
                  {
                    succeeded = parse_tree__prog_data____Unify____type_ctor_0_0(TypeCtorA_39, TypeCtorB_41);
                    if (succeeded)
                      succeeded = check_hlds__modecheck_coerce__compare_types_corresponding_5_p_0(HeadVar__1_1, HeadVar__2_2, HeadVar__3_3, ArgsA_40, ArgsB_42);
                    else
                    {
                      MR_Word SuperTypeA_43;

                      succeeded = (HeadVar__3_3 == (MR_Integer) 1);
                      if (succeeded)
                      {
                        succeeded = check_hlds__type_util__get_supertype_5_p_0(HeadVar__1_1, HeadVar__2_2, TypeCtorA_39, ArgsA_40, &SuperTypeA_43);
                        if (succeeded)
                          succeeded = check_hlds__modecheck_coerce__compare_types_5_p_0(HeadVar__1_1, HeadVar__2_2, HeadVar__3_3, SuperTypeA_43, TypeB_14);
                      }
                    }
                  }
                }
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word BuiltinType_31 = ((MR_Word) ((MR_hl_field(MR_mktag(2), TypeA_12, (MR_Integer) 0))));
                MR_Word Var_65;

                succeeded = ((MR_tag((MR_Word) TypeB_14)) == (MR_Integer) 2);
                if (succeeded)
                {
                  Var_65 = ((MR_Word) ((MR_hl_field(MR_mktag(2), TypeB_14, (MR_Integer) 0))));
                  succeeded = parse_tree__prog_data____Unify____builtin_type_0_0(BuiltinType_31, Var_65);
                }
              }
              break;
            case (MR_Integer) 3:
              switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), TypeA_12, (MR_Integer) 0))))) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Word Kind_44 = ((MR_Word) ((MR_hl_field(MR_mktag(3), TypeA_12, (MR_Integer) 2))));
                    MR_Word ArgsA_60 = ((MR_Word) ((MR_hl_field(MR_mktag(3), TypeA_12, (MR_Integer) 1))));
                    MR_Word ArgsB_61;
                    MR_Word Var_66;

                    succeeded = ((((MR_tag((MR_Word) TypeB_14)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), TypeB_14, (MR_Integer) 0)))) == (MR_Integer) 0)));
                    if (succeeded)
                    {
                      ArgsB_61 = ((MR_Word) ((MR_hl_field(MR_mktag(3), TypeB_14, (MR_Integer) 1))));
                      Var_66 = ((MR_Word) ((MR_hl_field(MR_mktag(3), TypeB_14, (MR_Integer) 2))));
                      succeeded = parse_tree__prog_data____Unify____kind_0_0(Kind_44, Var_66);
                      if (succeeded)
                        succeeded = check_hlds__modecheck_coerce__compare_types_corresponding_5_p_0(HeadVar__1_1, HeadVar__2_2, HeadVar__3_3, ArgsA_60, ArgsB_61);
                    }
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word PredOrFunc_45 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), TypeA_12, (MR_Integer) 1))) & (MR_Integer) 1);
                    MR_Word Purity_47 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), TypeA_12, (MR_Integer) 4))) & (MR_Integer) 3);
                    MR_Word Var_57;
                    MR_Word ArgsA_62 = ((MR_Word) ((MR_hl_field(MR_mktag(3), TypeA_12, (MR_Integer) 2))));
                    MR_Word ArgsB_63;
                    MR_Word Var_67;
                    MR_Word Var_68;

                    succeeded = ((((MR_tag((MR_Word) TypeB_14)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), TypeB_14, (MR_Integer) 0)))) == (MR_Integer) 1)));
                    if (succeeded)
                    {
                      Var_67 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), TypeB_14, (MR_Integer) 1))) & (MR_Integer) 1);
                      ArgsB_63 = ((MR_Word) ((MR_hl_field(MR_mktag(3), TypeB_14, (MR_Integer) 2))));
                      Var_68 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), TypeB_14, (MR_Integer) 4))) & (MR_Integer) 3);
                      succeeded = (PredOrFunc_45 == Var_67);
                      if (succeeded)
                      {
                        succeeded = (Purity_47 == Var_68);
                        if (succeeded)
                        {
                          succeeded = MR_TRUE;
                          if (succeeded)
                          {
                            Var_57 = (MR_Integer) 0;
                            succeeded = check_hlds__modecheck_coerce__compare_types_corresponding_5_p_0(HeadVar__1_1, HeadVar__2_2, Var_57, ArgsA_62, ArgsB_63);
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
                    MR_Word TypeA1_53 = ((MR_Word) ((MR_hl_field(MR_mktag(3), TypeA_12, (MR_Integer) 1))));
                    MR_Word TypeB1_54;
                    MR_Word Kind_64 = ((MR_Word) ((MR_hl_field(MR_mktag(3), TypeA_12, (MR_Integer) 2))));
                    MR_Word Var_70;

                    succeeded = ((((MR_tag((MR_Word) TypeB_14)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), TypeB_14, (MR_Integer) 0)))) == (MR_Integer) 3)));
                    if (succeeded)
                    {
                      TypeB1_54 = ((MR_Word) ((MR_hl_field(MR_mktag(3), TypeB_14, (MR_Integer) 1))));
                      Var_70 = ((MR_Word) ((MR_hl_field(MR_mktag(3), TypeB_14, (MR_Integer) 2))));
                      succeeded = parse_tree__prog_data____Unify____kind_0_0(Kind_64, Var_70);
                      if (succeeded)
                        succeeded = check_hlds__modecheck_coerce__compare_types_5_p_0(HeadVar__1_1, HeadVar__2_2, HeadVar__3_3, TypeA1_53, TypeB1_54);
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
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_FunctorY_18;

    check_hlds__modecheck_coerce__modecheck_coerce_from_ground_make_bound_functor_9_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 7)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 8)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 9)))), ((MR_Word) (wrapper_arg_1)), &conv0_FunctorY_18);
    *wrapper_arg_2 = ((MR_Box) (conv0_FunctorY_18));
  }
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
      MR_Word CtorsX_30;

      succeeded = check_hlds__type_util__type_constructors_3_p_0(ModuleInfo_9, TypeX_14, &CtorsX_30);
      if (succeeded)
      {
        MR_Word FunctorsY_31;
        MR_Word UniqY_32;
        MR_Word Var_34;

        {
          Var_34 = (MR_Word) MR_new_object(MR_Word, (10 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_34, 0) = ((MR_Box) (&check_hlds__modecheck_coerce_scalar_common_4[0]));
          MR_hl_field(MR_mktag(0), Var_34, 1) = ((MR_Box) (check_hlds__modecheck_coerce__modecheck_coerce_from_ground_make_inst_for_subtype_8_p_0_1));
          MR_hl_field(MR_mktag(0), Var_34, 2) = ((MR_Box) ((MR_Integer) 7));
          MR_hl_field(MR_mktag(0), Var_34, 3) = ((MR_Box) (ModuleInfo_9));
          MR_hl_field(MR_mktag(0), Var_34, 4) = ((MR_Box) (TVarSet_10));
          MR_hl_field(MR_mktag(0), Var_34, 5) = ((MR_Box) (LiveX_11));
          MR_hl_field(MR_mktag(0), Var_34, 6) = ((MR_Box) (UniqX_12));
          MR_hl_field(MR_mktag(0), Var_34, 7) = ((MR_Box) (SeenTypes1_17));
          MR_hl_field(MR_mktag(0), Var_34, 8) = ((MR_Box) (TypeX_14));
          MR_hl_field(MR_mktag(0), Var_34, 9) = ((MR_Box) (TypeY_15));
        }
        mercury__list__map_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_bound_inst_0), Var_34, CtorsX_30, &FunctorsY_31);
        UniqY_32 = check_hlds__modecheck_coerce__uniqueness_for_coerce_result_2_f_0(LiveX_11, UniqX_12);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
          *InstY_16 = base;
          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(3), base, 1) = (MR_Box) ((MR_Unsigned) (UniqY_32));
          MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__modecheck_coerce_scalar_common_3[0])));
          MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (FunctorsY_31));
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
        base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
        *InstY_16 = base;
        MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 1U));
        MR_hl_field(MR_mktag(3), base, 1) = (MR_Box) ((MR_Unsigned) (UniqY_18));
        MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) ((MR_Unsigned) 0U));
      }
    }
  }
}

static MR_bool MR_CALL 
check_hlds__modecheck_coerce__cons_id_matches_builtin_type_2_p_0(
  MR_Word ConsId_3,
  MR_Word Type_4)
{
  {
    MR_bool succeeded;

    switch (MR_tag((MR_Word) ConsId_3)) {
      default:
        succeeded = MR_FALSE;
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsId_3, (MR_Integer) 0))))) {
          default:
            succeeded = MR_FALSE;
            break;
          case (MR_Integer) 5:
            {
              MR_Word Var_18;

              Var_18 = parse_tree__builtin_lib_types__int_type_0_f_0();
              succeeded = parse_tree__prog_data____Unify____mer_type_0_0(Type_4, Var_18);
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word Var_19;

              Var_19 = parse_tree__builtin_lib_types__uint_type_0_f_0();
              succeeded = parse_tree__prog_data____Unify____mer_type_0_0(Type_4, Var_19);
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Word Var_20;

              Var_20 = parse_tree__builtin_lib_types__int8_type_0_f_0();
              succeeded = parse_tree__prog_data____Unify____mer_type_0_0(Type_4, Var_20);
            }
            break;
          case (MR_Integer) 8:
            {
              MR_Word Var_21;

              Var_21 = parse_tree__builtin_lib_types__uint8_type_0_f_0();
              succeeded = parse_tree__prog_data____Unify____mer_type_0_0(Type_4, Var_21);
            }
            break;
          case (MR_Integer) 9:
            {
              MR_Word Var_22;

              Var_22 = parse_tree__builtin_lib_types__int16_type_0_f_0();
              succeeded = parse_tree__prog_data____Unify____mer_type_0_0(Type_4, Var_22);
            }
            break;
          case (MR_Integer) 10:
            {
              MR_Word Var_23;

              Var_23 = parse_tree__builtin_lib_types__uint16_type_0_f_0();
              succeeded = parse_tree__prog_data____Unify____mer_type_0_0(Type_4, Var_23);
            }
            break;
          case (MR_Integer) 11:
            {
              MR_Word Var_24;

              Var_24 = parse_tree__builtin_lib_types__int32_type_0_f_0();
              succeeded = parse_tree__prog_data____Unify____mer_type_0_0(Type_4, Var_24);
            }
            break;
          case (MR_Integer) 12:
            {
              MR_Word Var_25;

              Var_25 = parse_tree__builtin_lib_types__uint32_type_0_f_0();
              succeeded = parse_tree__prog_data____Unify____mer_type_0_0(Type_4, Var_25);
            }
            break;
          case (MR_Integer) 13:
            {
              MR_Word Var_26;

              Var_26 = parse_tree__builtin_lib_types__int64_type_0_f_0();
              succeeded = parse_tree__prog_data____Unify____mer_type_0_0(Type_4, Var_26);
            }
            break;
          case (MR_Integer) 14:
            {
              MR_Word Var_27;

              Var_27 = parse_tree__builtin_lib_types__uint64_type_0_f_0();
              succeeded = parse_tree__prog_data____Unify____mer_type_0_0(Type_4, Var_27);
            }
            break;
          case (MR_Integer) 15:
            {
              MR_Word Var_28;

              Var_28 = parse_tree__builtin_lib_types__float_type_0_f_0();
              succeeded = parse_tree__prog_data____Unify____mer_type_0_0(Type_4, Var_28);
            }
            break;
          case (MR_Integer) 16:
            {
              MR_Word Var_29;

              Var_29 = parse_tree__builtin_lib_types__char_type_0_f_0();
              succeeded = parse_tree__prog_data____Unify____mer_type_0_0(Type_4, Var_29);
            }
            break;
          case (MR_Integer) 17:
            {
              MR_Word Var_30;

              Var_30 = parse_tree__builtin_lib_types__string_type_0_f_0();
              succeeded = parse_tree__prog_data____Unify____mer_type_0_0(Type_4, Var_30);
            }
            break;
        }
        break;
    }
    return succeeded;
  }
}

static MR_bool MR_CALL 
check_hlds__modecheck_coerce__get_bound_functor_cons_and_arg_types_8_p_0(
  MR_Word ModuleInfo_9,
  MR_Word TypeX_10,
  MR_Word TypeY_11,
  MR_Word ConsIdX_12,
  MR_Word * ConsIdY_13,
  MR_Word * ArgTypesX_14,
  MR_Word * ArgTypesY_15,
  MR_Integer * Arity_16)
{
  {
    MR_bool succeeded;
    MR_Word TypeCtorY_17;
    MR_Word SymName0_59;
    MR_Integer Arity_60;
    MR_Word TypeCtor0_61;
    MR_Word ModuleName_62;
    MR_Word SymName_63;
    MR_Word Var_64;

    succeeded = parse_tree__prog_type__type_to_ctor_2_p_0(TypeY_11, &TypeCtorY_17);
    if (succeeded)
    {
      SymName0_59 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsIdX_12, (MR_Integer) 1))));
      Arity_60 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsIdX_12, (MR_Integer) 2))));
      TypeCtor0_61 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsIdX_12, (MR_Integer) 3))));
      ModuleName_62 = check_hlds__type_util__type_ctor_module_1_f_0(TypeCtorY_17);
      if (((MR_tag((MR_Word) SymName0_59)) == (MR_Integer) 1))
      {
        MR_String Name_71 = ((MR_String) ((MR_hl_field(MR_mktag(1), SymName0_59, (MR_Integer) 1))));

        {
          SymName_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), SymName_63, 0) = ((MR_Box) (ModuleName_62));
          MR_hl_field(MR_mktag(1), SymName_63, 1) = ((MR_Box) (Name_71));
        }
      }
      else
        SymName_63 = SymName0_59;
      Var_64 = parse_tree__prog_data__cons_id_dummy_type_ctor_0_f_0();
      succeeded = parse_tree__prog_data____Unify____type_ctor_0_0(TypeCtor0_61, Var_64);
      if (succeeded)
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
          *ConsIdY_13 = base;
          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 2U));
          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (SymName_63));
          MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (Arity_60));
          MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (TypeCtor0_61));
        }
      else
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
          *ConsIdY_13 = base;
          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 2U));
          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (SymName_63));
          MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (Arity_60));
          MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (TypeCtorY_17));
        }
      switch (MR_tag((MR_Word) TypeX_10)) {
        default:
          succeeded = MR_FALSE;
          break;
        case (MR_Integer) 1:
          {
            MR_Word TypeCtorInfo_45_45;
            MR_Integer Var_47;
            MR_Word TypeCtor_76;
            MR_Word TypeArgs_77;
            MR_Word ConsTable_78;
            MR_Word ConsDefn_79;
            MR_Word TypeParams_82;
            MR_Word CtorArgs_85;
            MR_Word CtorArgTypes0_87;

            succeeded = ((MR_tag((MR_Word) TypeY_11)) == (MR_Integer) 1);
            if (succeeded)
            {
              succeeded = parse_tree__prog_type__type_to_ctor_and_args_3_p_0(TypeX_10, &TypeCtor_76, &TypeArgs_77);
              if (succeeded)
              {
                hlds__hlds_module__module_info_get_cons_table_2_p_0(ModuleInfo_9, &ConsTable_78);
                succeeded = hlds__hlds_cons__search_cons_table_of_type_ctor_4_p_0(ConsTable_78, TypeCtor_76, ConsIdX_12, &ConsDefn_79);
                if (succeeded)
                {
                  TypeParams_82 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ConsDefn_79, (MR_Integer) 2))));
                  CtorArgs_85 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ConsDefn_79, (MR_Integer) 5))));
                  parse_tree__prog_data__get_ctor_arg_types_2_p_0(CtorArgs_85, &CtorArgTypes0_87);
                  if ((TypeParams_82 == (MR_Word) ((MR_Unsigned) 0U)))
                    *ArgTypesX_14 = CtorArgTypes0_87;
                  else
                  {
                    MR_Word Subst_90;

                    mercury__map__from_corresponding_lists_3_p_0((MR_Word) (&check_hlds__modecheck_coerce_scalar_common_2[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), TypeParams_82, TypeArgs_77, &Subst_90);
                    parse_tree__prog_type_subst__apply_subst_to_type_list_3_p_0(Subst_90, CtorArgTypes0_87, ArgTypesX_14);
                  }
                  succeeded = check_hlds__modecheck_coerce__get_ctor_arg_types_do_subst_4_p_0(ModuleInfo_9, TypeY_11, *ConsIdY_13, ArgTypesY_15);
                  if (succeeded)
                  {
                    TypeCtorInfo_45_45 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0);
                    mercury__list__length_2_p_0(TypeCtorInfo_45_45, *ArgTypesX_14, Arity_16);
                    mercury__list__length_2_p_0(TypeCtorInfo_45_45, *ArgTypesY_15, &Var_47);
                    succeeded = (*Arity_16 == Var_47);
                  }
                }
              }
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word BuiltinType_27 = ((MR_Word) ((MR_hl_field(MR_mktag(2), TypeX_10, (MR_Integer) 0))));
            MR_Word Var_50;

            succeeded = ((MR_tag((MR_Word) TypeY_11)) == (MR_Integer) 2);
            if (succeeded)
            {
              Var_50 = ((MR_Word) ((MR_hl_field(MR_mktag(2), TypeY_11, (MR_Integer) 0))));
              succeeded = parse_tree__prog_data____Unify____builtin_type_0_0(BuiltinType_27, Var_50);
              if (succeeded)
              {
                succeeded = (BuiltinType_27 == (MR_Word) ((MR_Unsigned) 8U));
                if (succeeded)
                {
                  *Arity_16 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsIdX_12, (MR_Integer) 2))));
                  succeeded = (*Arity_16 == (MR_Integer) 0);
                  if (succeeded)
                  {
                    *ArgTypesX_14 = (MR_Word) ((MR_Unsigned) 0U);
                    *ArgTypesY_15 = (MR_Word) ((MR_Unsigned) 0U);
                    succeeded = MR_TRUE;
                  }
                }
              }
            }
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), TypeX_10, (MR_Integer) 0))))) {
            default:
              succeeded = MR_FALSE;
              break;
            case (MR_Integer) 0:
              {
                MR_Word TypeCtorInfo_46_46;
                MR_Word Var_43;
                MR_String Var_44;
                MR_Integer Var_48;
                MR_Integer Var_49;

                *ArgTypesX_14 = ((MR_Word) ((MR_hl_field(MR_mktag(3), TypeX_10, (MR_Integer) 1))));
                succeeded = ((((MR_tag((MR_Word) TypeY_11)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), TypeY_11, (MR_Integer) 0)))) == (MR_Integer) 0)));
                if (succeeded)
                {
                  *ArgTypesY_15 = ((MR_Word) ((MR_hl_field(MR_mktag(3), TypeY_11, (MR_Integer) 1))));
                  Var_43 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsIdX_12, (MR_Integer) 1))));
                  *Arity_16 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsIdX_12, (MR_Integer) 2))));
                  succeeded = ((MR_tag((MR_Word) Var_43)) == (MR_Integer) 0);
                  if (succeeded)
                  {
                    Var_44 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_43, (MR_Integer) 0))));
                    succeeded = (strcmp(Var_44, (MR_String) "{}") == 0);
                    if (succeeded)
                    {
                      TypeCtorInfo_46_46 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0);
                      mercury__list__length_2_p_0(TypeCtorInfo_46_46, *ArgTypesX_14, &Var_48);
                      succeeded = (*Arity_16 == Var_48);
                      if (succeeded)
                      {
                        mercury__list__length_2_p_0(TypeCtorInfo_46_46, *ArgTypesY_15, &Var_49);
                        succeeded = (*Arity_16 == Var_49);
                      }
                    }
                  }
                }
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Word TypeX1_30 = ((MR_Word) ((MR_hl_field(MR_mktag(3), TypeX_10, (MR_Integer) 1))));
                MR_Word Kind_31 = ((MR_Word) ((MR_hl_field(MR_mktag(3), TypeX_10, (MR_Integer) 2))));
                MR_Word TypeY1_32;
                MR_Word Var_51;
                MR_Word Var_52;

                succeeded = ((((MR_tag((MR_Word) TypeY_11)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), TypeY_11, (MR_Integer) 0)))) == (MR_Integer) 3)));
                if (succeeded)
                {
                  TypeY1_32 = ((MR_Word) ((MR_hl_field(MR_mktag(3), TypeY_11, (MR_Integer) 1))));
                  Var_51 = ((MR_Word) ((MR_hl_field(MR_mktag(3), TypeY_11, (MR_Integer) 2))));
                  succeeded = parse_tree__prog_data____Unify____kind_0_0(Kind_31, Var_51);
                  if (succeeded)
                  {
                    succeeded = check_hlds__modecheck_coerce__get_bound_functor_cons_and_arg_types_8_p_0(ModuleInfo_9, TypeX1_30, TypeY1_32, ConsIdX_12, &Var_52, ArgTypesX_14, ArgTypesY_15, Arity_16);
                    if (succeeded)
                      succeeded = parse_tree__prog_data____Unify____cons_id_0_0(*ConsIdY_13, Var_52);
                  }
                }
              }
              break;
          }
          break;
      }
    }
    return succeeded;
  }
}

static MR_bool MR_CALL 
check_hlds__modecheck_coerce__get_ctor_arg_types_do_subst_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word Type_6,
  MR_Word ConsId_7,
  MR_Word * CtorArgTypes_8)
{
  {
    MR_bool succeeded;
    MR_Word TypeCtor_9;
    MR_Word TypeArgs_10;
    MR_Word ConsTable_11;
    MR_Word ConsDefn_12;
    MR_Word TypeParams_15;
    MR_Word CtorArgs_18;
    MR_Word CtorArgTypes0_20;

    succeeded = parse_tree__prog_type__type_to_ctor_and_args_3_p_0(Type_6, &TypeCtor_9, &TypeArgs_10);
    if (succeeded)
    {
      hlds__hlds_module__module_info_get_cons_table_2_p_0(ModuleInfo_5, &ConsTable_11);
      succeeded = hlds__hlds_cons__search_cons_table_of_type_ctor_4_p_0(ConsTable_11, TypeCtor_9, ConsId_7, &ConsDefn_12);
      if (succeeded)
      {
        TypeParams_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ConsDefn_12, (MR_Integer) 2))));
        CtorArgs_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ConsDefn_12, (MR_Integer) 5))));
        parse_tree__prog_data__get_ctor_arg_types_2_p_0(CtorArgs_18, &CtorArgTypes0_20);
        if ((TypeParams_15 == (MR_Word) ((MR_Unsigned) 0U)))
          *CtorArgTypes_8 = CtorArgTypes0_20;
        else
        {
          MR_Word Subst_23;

          mercury__map__from_corresponding_lists_3_p_0((MR_Word) (&check_hlds__modecheck_coerce_scalar_common_2[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), TypeParams_15, TypeArgs_10, &Subst_23);
          parse_tree__prog_type_subst__apply_subst_to_type_list_3_p_0(Subst_23, CtorArgTypes0_20, CtorArgTypes_8);
        }
        succeeded = MR_TRUE;
      }
    }
    return succeeded;
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
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), InstName_2, (MR_Integer) 0))))) {
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
              MR_Word InstName1_6 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstName_2, (MR_Integer) 2))));
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
}

static MR_bool MR_CALL 
check_hlds__modecheck_coerce____Unify____expanded_insts_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = check_hlds__modecheck_coerce____Unify____expanded_insts_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__modecheck_coerce____Compare____expanded_insts_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    check_hlds__modecheck_coerce____Compare____expanded_insts_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__modecheck_coerce____Unify____modecheck_coerce_result_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = check_hlds__modecheck_coerce____Unify____modecheck_coerce_result_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__modecheck_coerce____Compare____modecheck_coerce_result_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    check_hlds__modecheck_coerce____Compare____modecheck_coerce_result_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__modecheck_coerce____Unify____types_comparison_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = check_hlds__modecheck_coerce____Unify____types_comparison_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__modecheck_coerce____Compare____types_comparison_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    check_hlds__modecheck_coerce____Compare____types_comparison_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

void mercury__check_hlds__modecheck_coerce__init(void)
{
}

void mercury__check_hlds__modecheck_coerce__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&check_hlds__modecheck_coerce__check_hlds__modecheck_coerce__type_ctor_info_expanded_insts_0);
	MR_register_type_ctor_info(&check_hlds__modecheck_coerce__check_hlds__modecheck_coerce__type_ctor_info_modecheck_coerce_result_0);
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
