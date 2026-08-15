/*
** Automatically generated from `goal_transform.m'
** by the Mercury compiler,
** version rotd-2026-08-15
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


// :- module hlds.goal_transform.
// :- implementation.

/*
INIT mercury__hlds__goal_transform__init
ENDINIT
*/

#include "hlds.goal_transform.mih"


#include "analysis.mih"
#include "array.mih"
#include "assoc_list.mih"
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
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
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
#include "hlds.hlds_markers.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_promise.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.inst_graph.mih"
#include "hlds.inst_lookup.mih"
#include "hlds.instmap.mih"
#include "hlds.pred_name.mih"
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "hlds.type_util.mih"
#include "libs.dependency_graph.mih"
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.polyhedron.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.sym_name.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.d_file_deps.mih"
#include "parse_tree.error_spec.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_event.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_data_rare.mih"
#include "parse_tree.prog_data_used_modules.mih"
#include "parse_tree.prog_detism.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_item_pragma.mih"
#include "parse_tree.prog_item_type.mih"
#include "parse_tree.prog_mode.mih"
#include "parse_tree.prog_parse_tree.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_type.mih"
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




static const MR_FA_PseudoTypeInfo_Struct1 hlds__goal_transform__list__pti_list_1__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0;

static const MR_VA_PseudoTypeInfo_Struct2 hlds__goal_transform____vpti_pred_2__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__goal_transform__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_EnumFunctorDesc hlds__goal_transform__hlds__goal_transform__enum_functor_desc_attach_in_from_ground_term_0_0;

static const MR_EnumFunctorDesc hlds__goal_transform__hlds__goal_transform__enum_functor_desc_attach_in_from_ground_term_0_1;

static const MR_EnumFunctorDescPtr hlds__goal_transform__hlds__goal_transform__enum_ordinal_ordered_attach_in_from_ground_term_0[2];

static const MR_EnumFunctorDescPtr hlds__goal_transform__hlds__goal_transform__enum_name_ordered_attach_in_from_ground_term_0[2];

static const MR_Integer hlds__goal_transform__hlds__goal_transform__functor_number_map_attach_in_from_ground_term_0[2];

static const MR_PseudoTypeInfo hlds__goal_transform__hlds__goal_transform__field_types_maybe_transformed_goal_0_0[1];

static const MR_DuFunctorDesc hlds__goal_transform__hlds__goal_transform__du_functor_desc_maybe_transformed_goal_0_0;

static const MR_PseudoTypeInfo hlds__goal_transform__hlds__goal_transform__field_types_maybe_transformed_goal_0_1[1];

static const MR_DuFunctorDesc hlds__goal_transform__hlds__goal_transform__du_functor_desc_maybe_transformed_goal_0_1;

static const MR_DuFunctorDesc hlds__goal_transform__hlds__goal_transform__du_functor_desc_maybe_transformed_goal_0_2;

static const MR_DuFunctorDescPtr hlds__goal_transform__hlds__goal_transform__du_stag_ordered_maybe_transformed_goal_0_0[1];

static const MR_DuFunctorDescPtr hlds__goal_transform__hlds__goal_transform__du_stag_ordered_maybe_transformed_goal_0_1[1];

static const MR_DuFunctorDescPtr hlds__goal_transform__hlds__goal_transform__du_stag_ordered_maybe_transformed_goal_0_2[1];

static const MR_DuPtagLayout hlds__goal_transform__hlds__goal_transform__du_ptag_ordered_maybe_transformed_goal_0[3];

static const MR_DuFunctorDescPtr hlds__goal_transform__hlds__goal_transform__du_name_ordered_maybe_transformed_goal_0[3];

static const MR_Integer hlds__goal_transform__hlds__goal_transform__functor_number_map_maybe_transformed_goal_0[3];

static void MR_CALL 
hlds__goal_transform__IntroducedFrom__pred__case_to_disjunct__814__1_2_p_0(
  MR_Word LambdaHeadVar__1_65,
  MR_Word * LambdaHeadVar__2_66);

static void MR_CALL 
hlds__goal_transform__IntroducedFrom__pred__case_to_disjunct__798__1_3_p_0(
  MR_Word STATE_VARIABLE_ModuleInfo_0_56,
  MR_Word LambdaHeadVar__1_58,
  MR_Word * LambdaHeadVar__2_59);

static void MR_CALL 
hlds__goal_transform__IntroducedFrom__pred__transform_all_goals__751__1_3_p_0(
  MR_Word TransformPred_4,
  MR_Word LambdaHeadVar__1_61,
  MR_Word * LambdaHeadVar__2_62);

static MR_Word MR_CALL 
hlds__goal_transform__IntroducedFrom__func__maybe_transform_goal_at_goal_path_with_instmap__570__1_1_f_0(
  MR_Word LambdaHeadVar__1_95);

static MR_Word MR_CALL 
hlds__goal_transform__maybe_strip_equality_pretest_case_1_f_0(
  MR_Word Case0_3);

static void MR_CALL 
hlds__goal_transform__flatten_disj_acc_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
hlds__goal_transform__flatten_disj_acc_3_p_0(
  MR_Word Disjunct_4,
  MR_Word STATE_VARIABLE_FlatDisjuncts_0_8,
  MR_Word * STATE_VARIABLE_FlatDisjuncts_9);

static void MR_CALL 
hlds__goal_transform__switch_to_disjunction_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static void MR_CALL 
hlds__goal_transform__case_to_disjunct_9_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
hlds__goal_transform__case_to_disjunct_9_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
hlds__goal_transform__case_to_disjunct_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
hlds__goal_transform__transform_all_goals_3_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
hlds__goal_transform__transform_all_goals_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
hlds__goal_transform__transform_all_goals_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
hlds__goal_transform__maybe_transform_goal_at_goal_path_with_instmap_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_Box MR_CALL 
hlds__goal_transform__maybe_transform_goal_at_goal_path_with_instmap_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
hlds__goal_transform__maybe_error_to_maybe_transformed_goal_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2);

static MR_Box MR_CALL 
hlds__goal_transform__maybe_strip_equality_pretest_1_f_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
hlds__goal_transform__maybe_strip_equality_pretest_1_f_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
hlds__goal_transform__maybe_strip_equality_pretest_1_f_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
hlds__goal_transform__maybe_strip_equality_pretest_1_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
hlds__goal_transform__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_99_97_115_101_115_95_95_91_50_93_95_49_4_p_1_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
hlds__goal_transform__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_99_97_115_101_115_95_95_91_50_93_95_49_4_p_1(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4);

static void MR_CALL 
hlds__goal_transform__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_103_111_97_108_115_95_95_91_50_93_95_49_4_p_1_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
hlds__goal_transform__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_103_111_97_108_115_95_95_91_50_93_95_49_4_p_1(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4);

static void MR_CALL 
hlds__goal_transform__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_97_108_108_95_103_111_97_108_115_95_95_91_50_93_95_49_4_p_1_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
hlds__goal_transform__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_99_97_115_101_115_95_95_91_50_93_95_48_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
hlds__goal_transform__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_99_97_115_101_115_95_95_91_50_93_95_48_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4);

static void MR_CALL 
hlds__goal_transform__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_103_111_97_108_115_95_95_91_50_93_95_48_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
hlds__goal_transform__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_103_111_97_108_115_95_95_91_50_93_95_48_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4);

static void MR_CALL 
hlds__goal_transform__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_97_108_108_95_103_111_97_108_115_95_95_91_50_93_95_48_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
hlds__goal_transform__flatten_disj_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_bool MR_CALL 
hlds__goal_transform____Unify____attach_in_from_ground_term_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__goal_transform____Compare____attach_in_from_ground_term_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__goal_transform____Unify____maybe_transformed_goal_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__goal_transform____Compare____maybe_transformed_goal_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box hlds__goal_transform_scalar_common_1[3][2];

static /* final */ const MR_Box hlds__goal_transform_scalar_common_2[6][6];

static /* final */ const MR_Box hlds__goal_transform_scalar_common_3[16][3];

static /* final */ const MR_Box hlds__goal_transform_scalar_common_4[4][5];

static /* final */ const MR_Box hlds__goal_transform_scalar_common_5[1][7];

static /* final */ const MR_Box hlds__goal_transform_scalar_common_6[1][12];




static /* final */ const MR_Box hlds__goal_transform_scalar_common_1[3][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row   2 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
};

static /* final */ const MR_Box hlds__goal_transform_scalar_common_2[6][6] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&hlds__goal_transform__list__pti_list_1__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&hlds__goal_transform__list__pti_list_1__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_markers__hlds__hlds_markers__type_ctor_info_goal_feature_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_info_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_info_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__instmap__hlds__instmap__type_ctor_info_instmap_0)),
    ((MR_Box) (&hlds__instmap__hlds__instmap__type_ctor_info_instmap_0)),
    ((MR_Box) (&hlds__instmap__hlds__instmap__type_ctor_info_instmap_0))
  },
  /* row   3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__goal_transform____vpti_pred_2__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0))
  },
  /* row   4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__goal_transform____vpti_pred_2__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0))
  },
  /* row   5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&parse_tree__var_table__parse_tree__var_table__type_ctor_info_var_table_entry_0))
  },
};

static /* final */ const MR_Box hlds__goal_transform_scalar_common_3[16][3] = {
  /* row   0 */
  {
    ((MR_Box) (&hlds__goal_transform_scalar_common_2[0])),
    ((MR_Box) (hlds__goal_transform__flatten_disj_2_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   1 */
  {
    ((MR_Box) (&hlds__goal_transform_scalar_common_2[1])),
    ((MR_Box) (hlds__goal_transform__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_97_108_108_95_103_111_97_108_115_95_95_91_50_93_95_48_4_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   2 */
  {
    ((MR_Box) (&hlds__goal_transform_scalar_common_2[1])),
    ((MR_Box) (hlds__goal_transform__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_103_111_97_108_115_95_95_91_50_93_95_48_4_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   3 */
  {
    ((MR_Box) (&hlds__goal_transform_scalar_common_2[1])),
    ((MR_Box) (hlds__goal_transform__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_99_97_115_101_115_95_95_91_50_93_95_48_4_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   4 */
  {
    ((MR_Box) (&hlds__goal_transform_scalar_common_2[1])),
    ((MR_Box) (hlds__goal_transform__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_97_108_108_95_103_111_97_108_115_95_95_91_50_93_95_49_4_p_1_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   5 */
  {
    ((MR_Box) (&hlds__goal_transform_scalar_common_2[1])),
    ((MR_Box) (hlds__goal_transform__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_103_111_97_108_115_95_95_91_50_93_95_49_4_p_1_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   6 */
  {
    ((MR_Box) (&hlds__goal_transform_scalar_common_2[1])),
    ((MR_Box) (hlds__goal_transform__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_99_97_115_101_115_95_95_91_50_93_95_49_4_p_1_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   7 */
  {
    ((MR_Box) (&hlds__goal_transform_scalar_common_4[0])),
    ((MR_Box) (hlds__goal_transform__maybe_strip_equality_pretest_1_f_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   8 */
  {
    ((MR_Box) (&hlds__goal_transform_scalar_common_4[0])),
    ((MR_Box) (hlds__goal_transform__maybe_strip_equality_pretest_1_f_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   9 */
  {
    ((MR_Box) (&hlds__goal_transform_scalar_common_4[0])),
    ((MR_Box) (hlds__goal_transform__maybe_strip_equality_pretest_1_f_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  10 */
  {
    ((MR_Box) (&hlds__goal_transform_scalar_common_4[1])),
    ((MR_Box) (hlds__goal_transform__maybe_strip_equality_pretest_1_f_0_4)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  11 */
  {
    ((MR_Box) (&hlds__goal_transform_scalar_common_4[2])),
    ((MR_Box) (hlds__goal_transform__maybe_transform_goal_at_goal_path_with_instmap_5_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  12 */
  {
    ((MR_Box) (&hlds__goal_transform_scalar_common_2[2])),
    ((MR_Box) (hlds__goal_transform__maybe_transform_goal_at_goal_path_with_instmap_5_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  13 */
  {
    ((MR_Box) (&hlds__goal_transform_scalar_common_5[0])),
    ((MR_Box) (hlds__goal_transform__case_to_disjunct_9_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  14 */
  {
    ((MR_Box) (&hlds__goal_transform_scalar_common_4[3])),
    ((MR_Box) (hlds__goal_transform__case_to_disjunct_9_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  15 */
  {
    ((MR_Box) (&hlds__goal_transform_scalar_common_2[0])),
    ((MR_Box) (hlds__goal_transform__flatten_disj_acc_3_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box hlds__goal_transform_scalar_common_4[4][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&hlds__instmap__hlds__instmap__type_ctor_info_instmap_0))
  },
  /* row   3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_unify_mode_0))
  },
};

static /* final */ const MR_Box hlds__goal_transform_scalar_common_5[1][7] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&parse_tree__var_table__parse_tree__var_table__type_ctor_info_var_table_entry_0)),
    ((MR_Box) (&hlds__goal_transform__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&parse_tree__var_table__parse_tree__var_table__type_ctor_info_var_table_0)),
    ((MR_Box) (&parse_tree__var_table__parse_tree__var_table__type_ctor_info_var_table_0))
  },
};

static /* final */ const MR_Box hlds__goal_transform_scalar_common_6[1][12] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 9)),
    ((MR_Box) (&hlds__goal_transform__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&hlds__instmap__hlds__instmap__type_ctor_info_instmap_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&parse_tree__var_table__parse_tree__var_table__type_ctor_info_var_table_0)),
    ((MR_Box) (&parse_tree__var_table__parse_tree__var_table__type_ctor_info_var_table_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


static const MR_FA_PseudoTypeInfo_Struct1 hlds__goal_transform__list__pti_list_1__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0) }
};

static const MR_VA_PseudoTypeInfo_Struct2 hlds__goal_transform____vpti_pred_2__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 2,
  {
    (MR_PseudoTypeInfo) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0),
    (MR_PseudoTypeInfo) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__goal_transform__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static const MR_EnumFunctorDesc hlds__goal_transform__hlds__goal_transform__enum_functor_desc_attach_in_from_ground_term_0_0 = {
  (MR_String) "attach_in_from_ground_term",
  INT32_C(0)
};

static const MR_EnumFunctorDesc hlds__goal_transform__hlds__goal_transform__enum_functor_desc_attach_in_from_ground_term_0_1 = {
  (MR_String) "do_not_attach_in_from_ground_term",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr hlds__goal_transform__hlds__goal_transform__enum_ordinal_ordered_attach_in_from_ground_term_0[2] = {
  &hlds__goal_transform__hlds__goal_transform__enum_functor_desc_attach_in_from_ground_term_0_0,
  &hlds__goal_transform__hlds__goal_transform__enum_functor_desc_attach_in_from_ground_term_0_1
};

static const MR_EnumFunctorDescPtr hlds__goal_transform__hlds__goal_transform__enum_name_ordered_attach_in_from_ground_term_0[2] = {
  &hlds__goal_transform__hlds__goal_transform__enum_functor_desc_attach_in_from_ground_term_0_0,
  &hlds__goal_transform__hlds__goal_transform__enum_functor_desc_attach_in_from_ground_term_0_1
};

static const MR_Integer hlds__goal_transform__hlds__goal_transform__functor_number_map_attach_in_from_ground_term_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct hlds__goal_transform__hlds__goal_transform__type_ctor_info_attach_in_from_ground_term_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (hlds__goal_transform____Unify____attach_in_from_ground_term_0_0_10001)),
  ((MR_Box) (hlds__goal_transform____Compare____attach_in_from_ground_term_0_0_10001)),
  (MR_String) "hlds.goal_transform",
  (MR_String) "attach_in_from_ground_term",
  { hlds__goal_transform__hlds__goal_transform__enum_name_ordered_attach_in_from_ground_term_0 },
  { hlds__goal_transform__hlds__goal_transform__enum_ordinal_ordered_attach_in_from_ground_term_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  hlds__goal_transform__hlds__goal_transform__functor_number_map_attach_in_from_ground_term_0,

};

static const MR_PseudoTypeInfo hlds__goal_transform__hlds__goal_transform__field_types_maybe_transformed_goal_0_0[1] = { (MR_PseudoTypeInfo) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0) };

static const MR_DuFunctorDesc hlds__goal_transform__hlds__goal_transform__du_functor_desc_maybe_transformed_goal_0_0 = {
  (MR_String) "ok",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(0),
  hlds__goal_transform__hlds__goal_transform__field_types_maybe_transformed_goal_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo hlds__goal_transform__hlds__goal_transform__field_types_maybe_transformed_goal_0_1[1] = { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0) };

static const MR_DuFunctorDesc hlds__goal_transform__hlds__goal_transform__du_functor_desc_maybe_transformed_goal_0_1 = {
  (MR_String) "error",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(2),
  (MR_Integer) -1,
  INT32_C(1),
  hlds__goal_transform__hlds__goal_transform__field_types_maybe_transformed_goal_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc hlds__goal_transform__hlds__goal_transform__du_functor_desc_maybe_transformed_goal_0_2 = {
  (MR_String) "goal_not_found",
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

static const MR_DuFunctorDescPtr hlds__goal_transform__hlds__goal_transform__du_stag_ordered_maybe_transformed_goal_0_0[1] = { &hlds__goal_transform__hlds__goal_transform__du_functor_desc_maybe_transformed_goal_0_2 };

static const MR_DuFunctorDescPtr hlds__goal_transform__hlds__goal_transform__du_stag_ordered_maybe_transformed_goal_0_1[1] = { &hlds__goal_transform__hlds__goal_transform__du_functor_desc_maybe_transformed_goal_0_0 };

static const MR_DuFunctorDescPtr hlds__goal_transform__hlds__goal_transform__du_stag_ordered_maybe_transformed_goal_0_2[1] = { &hlds__goal_transform__hlds__goal_transform__du_functor_desc_maybe_transformed_goal_0_1 };

static const MR_DuPtagLayout hlds__goal_transform__hlds__goal_transform__du_ptag_ordered_maybe_transformed_goal_0[3] = {
  {
    UINT32_C(1),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    hlds__goal_transform__hlds__goal_transform__du_stag_ordered_maybe_transformed_goal_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    hlds__goal_transform__hlds__goal_transform__du_stag_ordered_maybe_transformed_goal_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    hlds__goal_transform__hlds__goal_transform__du_stag_ordered_maybe_transformed_goal_0_2,
    INT8_C(-1),
    UINT8_C(2),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr hlds__goal_transform__hlds__goal_transform__du_name_ordered_maybe_transformed_goal_0[3] = {
  &hlds__goal_transform__hlds__goal_transform__du_functor_desc_maybe_transformed_goal_0_1,
  &hlds__goal_transform__hlds__goal_transform__du_functor_desc_maybe_transformed_goal_0_2,
  &hlds__goal_transform__hlds__goal_transform__du_functor_desc_maybe_transformed_goal_0_0
};

static const MR_Integer hlds__goal_transform__hlds__goal_transform__functor_number_map_maybe_transformed_goal_0[3] = {
  (MR_Integer) 2,
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct hlds__goal_transform__hlds__goal_transform__type_ctor_info_maybe_transformed_goal_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(3),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__goal_transform____Unify____maybe_transformed_goal_0_0_10001)),
  ((MR_Box) (hlds__goal_transform____Compare____maybe_transformed_goal_0_0_10001)),
  (MR_String) "hlds.goal_transform",
  (MR_String) "maybe_transformed_goal",
  { hlds__goal_transform__hlds__goal_transform__du_name_ordered_maybe_transformed_goal_0 },
  { hlds__goal_transform__hlds__goal_transform__du_ptag_ordered_maybe_transformed_goal_0 },
  (MR_Integer) 3,
  UINT16_C(12),
  hlds__goal_transform__hlds__goal_transform__functor_number_map_maybe_transformed_goal_0,

};

static void MR_CALL 
hlds__goal_transform__IntroducedFrom__pred__case_to_disjunct__814__1_2_p_0(
  MR_Word LambdaHeadVar__1_65,
  MR_Word * LambdaHeadVar__2_66)
{
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    *LambdaHeadVar__2_66 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (LambdaHeadVar__1_65));
    MR_hl_field(0, base, 1) = ((MR_Box) (LambdaHeadVar__1_65));
    MR_hl_field(0, base, 2) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, base, 3) = ((MR_Box) (LambdaHeadVar__1_65));
  }
}

static void MR_CALL 
hlds__goal_transform__IntroducedFrom__pred__case_to_disjunct__798__1_3_p_0(
  MR_Word STATE_VARIABLE_ModuleInfo_0_56,
  MR_Word LambdaHeadVar__1_58,
  MR_Word * LambdaHeadVar__2_59)
{
  MR_Word IsDummy_87;

  IsDummy_87 = hlds__type_util__is_type_a_dummy_2_f_0(STATE_VARIABLE_ModuleInfo_0_56, LambdaHeadVar__1_58);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    *LambdaHeadVar__2_59 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) ((MR_String) ""));
    MR_hl_field(0, base, 1) = ((MR_Box) (LambdaHeadVar__1_58));
    MR_hl_field(0, base, 2) = (MR_Box) ((MR_Unsigned) (IsDummy_87));
  }
}

static void MR_CALL 
hlds__goal_transform__IntroducedFrom__pred__transform_all_goals__751__1_3_p_0(
  MR_Word TransformPred_4,
  MR_Word LambdaHeadVar__1_61,
  MR_Word * LambdaHeadVar__2_62)
{
  MR_Word GoalI0_43 = ((MR_Word) ((MR_hl_field(0, LambdaHeadVar__1_61, 2))));
  MR_Word GoalI_44;
  MR_Word Var_71;
  MR_Word Var_72;

  hlds__goal_transform__transform_all_goals_3_p_0(TransformPred_4, GoalI0_43, &GoalI_44);
  Var_71 = ((MR_Word) ((MR_hl_field(0, LambdaHeadVar__1_61, 0))));
  Var_72 = ((MR_Word) ((MR_hl_field(0, LambdaHeadVar__1_61, 1))));
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    *LambdaHeadVar__2_62 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_71));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_72));
    MR_hl_field(0, base, 2) = ((MR_Box) (GoalI_44));
  }
}

static MR_Word MR_CALL 
hlds__goal_transform__IntroducedFrom__func__maybe_transform_goal_at_goal_path_with_instmap__570__1_1_f_0(
  MR_Word LambdaHeadVar__1_95)
{
  MR_Word LambdaHeadVar__2_96;
  MR_Word Var_97 = ((MR_Word) ((MR_hl_field(0, LambdaHeadVar__1_95, 1))));

  LambdaHeadVar__2_96 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(Var_97);
  return LambdaHeadVar__2_96;
}

void MR_CALL 
hlds__goal_transform____Compare____maybe_transformed_goal_0_0(
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
              MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
              MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));

              hlds__hlds_goal____Compare____hlds_goal_0_0(HeadVar__1_1, ArgX1_4, ArgY1_5);
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
              MR_String ArgX1_6 = ((MR_String) ((MR_hl_field(2, HeadVar__2_2, 0))));
              MR_String ArgY1_7 = ((MR_String) ((MR_hl_field(2, HeadVar__3_3, 0))));

              mercury__private_builtin__builtin_compare_string_3_p_0(HeadVar__1_1, ArgX1_6, ArgY1_7);
            }
            break;
        }
        break;
    }
}

MR_bool MR_CALL 
hlds__goal_transform____Unify____maybe_transformed_goal_0_0(
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
          MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
          MR_Word ArgY1_4;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
          if (succeeded)
          {
            ArgY1_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
            succeeded = hlds__hlds_goal____Unify____hlds_goal_0_0(ArgX1_3, ArgY1_4);
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_String ArgX1_5 = ((MR_String) ((MR_hl_field(2, HeadVar__1_1, 0))));
          MR_String ArgY1_6;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 2);
          if (succeeded)
          {
            ArgY1_6 = ((MR_String) ((MR_hl_field(2, HeadVar__2_2, 0))));
            succeeded = (strcmp(ArgX1_5, ArgY1_6) == 0);
          }
        }
        break;
    }
  return succeeded;
}

void MR_CALL 
hlds__goal_transform____Compare____attach_in_from_ground_term_0_0(
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

MR_bool MR_CALL 
hlds__goal_transform____Unify____attach_in_from_ground_term_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

static MR_Word MR_CALL 
hlds__goal_transform__maybe_strip_equality_pretest_case_1_f_0(
  MR_Word Case0_3)
{
  MR_Word Case_4;
  MR_Word MainConsId_5 = ((MR_Word) ((MR_hl_field(0, Case0_3, 0))));
  MR_Word OtherConsIds_6 = ((MR_Word) ((MR_hl_field(0, Case0_3, 1))));
  MR_Word Goal0_7 = ((MR_Word) ((MR_hl_field(0, Case0_3, 2))));
  MR_Word Goal_8;

  Goal_8 = hlds__goal_transform__maybe_strip_equality_pretest_1_f_0(Goal0_7);
  {
    Case_4 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Case_4, 0) = ((MR_Box) (MainConsId_5));
    MR_hl_field(0, Case_4, 1) = ((MR_Box) (OtherConsIds_6));
    MR_hl_field(0, Case_4, 2) = ((MR_Box) (Goal_8));
  }
  return Case_4;
}

static void MR_CALL 
hlds__goal_transform__flatten_disj_acc_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_FlatDisjuncts_9;

  hlds__goal_transform__flatten_disj_acc_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_FlatDisjuncts_9);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_FlatDisjuncts_9));
}

static void MR_CALL 
hlds__goal_transform__flatten_disj_acc_3_p_0(
  MR_Word Disjunct_4,
  MR_Word STATE_VARIABLE_FlatDisjuncts_0_8,
  MR_Word * STATE_VARIABLE_FlatDisjuncts_9)
{
  MR_bool succeeded;
  MR_Word SubDisjs_6;
  MR_Word Var_10 = ((MR_Word) ((MR_hl_field(0, Disjunct_4, 0))));

  succeeded = ((((MR_tag((MR_Word) Var_10)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Var_10, 0)))) == (MR_Integer) 3)));
  if (succeeded)
  {
    SubDisjs_6 = ((MR_Word) ((MR_hl_field(3, Var_10, 1))));
    {
      MR_Box conv1_STATE_VARIABLE_FlatDisjuncts_9;

      mercury__list__foldr_4_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&hlds__goal_transform_scalar_common_1[0]), (MR_Word) (&hlds__goal_transform_scalar_common_3[15]), SubDisjs_6, ((MR_Box) (STATE_VARIABLE_FlatDisjuncts_0_8)), &conv1_STATE_VARIABLE_FlatDisjuncts_9);
      *STATE_VARIABLE_FlatDisjuncts_9 = ((MR_Word) (conv1_STATE_VARIABLE_FlatDisjuncts_9));
    }
  }
  else
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_FlatDisjuncts_9 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Disjunct_4));
      MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_FlatDisjuncts_0_8));
    }
}

static void MR_CALL 
hlds__goal_transform__switch_to_disjunction_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_Disjunct_14;
  MR_Word conv1_STATE_VARIABLE_VarTable_55;
  MR_Word conv0_STATE_VARIABLE_ModuleInfo_57;

  hlds__goal_transform__case_to_disjunct_9_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) ((MR_hl_field(0, closure, 5)))), ((MR_Word) (wrapper_arg_1)), &conv2_Disjunct_14, ((MR_Word) (wrapper_arg_3)), &conv1_STATE_VARIABLE_VarTable_55, ((MR_Word) (wrapper_arg_5)), &conv0_STATE_VARIABLE_ModuleInfo_57);
  *wrapper_arg_2 = ((MR_Box) (conv2_Disjunct_14));
  *wrapper_arg_4 = ((MR_Box) (conv1_STATE_VARIABLE_VarTable_55));
  *wrapper_arg_6 = ((MR_Box) (conv0_STATE_VARIABLE_ModuleInfo_57));
}

void MR_CALL 
hlds__goal_transform__switch_to_disjunction_8_p_0(
  MR_Word Var_1,
  MR_Word HeadVar__2_2,
  MR_Word InstMap_3,
  MR_Word * HeadVar__4_4,
  MR_Word STATE_VARIABLE_VarTable_0_5,
  MR_Word * STATE_VARIABLE_VarTable_6,
  MR_Word STATE_VARIABLE_ModuleInfo_0_7,
  MR_Word * STATE_VARIABLE_ModuleInfo_8)
{
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_ModuleInfo_8 = STATE_VARIABLE_ModuleInfo_0_7;
    *STATE_VARIABLE_VarTable_6 = STATE_VARIABLE_VarTable_0_5;
  }
  else
  {
    MR_Word Case_18 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
    MR_Word Cases_19 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
    MR_Word MainConsId_24 = ((MR_Word) ((MR_hl_field(0, Case_18, 0))));
    MR_Word OtherConsIds_25 = ((MR_Word) ((MR_hl_field(0, Case_18, 1))));
    MR_Word CaseGoal_26 = ((MR_Word) ((MR_hl_field(0, Case_18, 2))));
    MR_Word MainDisjunctGoal_27;
    MR_Word OtherDisjunctGoals_28;
    MR_Word CasesGoals_29;
    MR_Word STATE_VARIABLE_VarTable_1_34;
    MR_Word STATE_VARIABLE_ModuleInfo_1_35;
    MR_Word Var_36;
    MR_Word STATE_VARIABLE_VarTable_2_37;
    MR_Word STATE_VARIABLE_ModuleInfo_2_38;
    MR_Word Var_41;
    MR_Box conv4_STATE_VARIABLE_VarTable_2_37;
    MR_Box conv3_STATE_VARIABLE_ModuleInfo_2_38;

    hlds__goal_transform__case_to_disjunct_9_p_0(Var_1, CaseGoal_26, InstMap_3, MainConsId_24, &MainDisjunctGoal_27, STATE_VARIABLE_VarTable_0_5, &STATE_VARIABLE_VarTable_1_34, STATE_VARIABLE_ModuleInfo_0_7, &STATE_VARIABLE_ModuleInfo_1_35);
    {
      Var_36 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_36, 0) = ((MR_Box) (&hlds__goal_transform_scalar_common_6[0]));
      MR_hl_field(0, Var_36, 1) = ((MR_Box) (hlds__goal_transform__switch_to_disjunction_8_p_0_1));
      MR_hl_field(0, Var_36, 2) = ((MR_Box) ((MR_Integer) 3));
      MR_hl_field(0, Var_36, 3) = ((MR_Box) (Var_1));
      MR_hl_field(0, Var_36, 4) = ((MR_Box) (CaseGoal_26));
      MR_hl_field(0, Var_36, 5) = ((MR_Box) (InstMap_3));
    }
    mercury__list__map_foldl2_7_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&parse_tree__var_table__parse_tree__var_table__type_ctor_info_var_table_0), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0), Var_36, OtherConsIds_25, &OtherDisjunctGoals_28, ((MR_Box) (STATE_VARIABLE_VarTable_1_34)), &conv4_STATE_VARIABLE_VarTable_2_37, ((MR_Box) (STATE_VARIABLE_ModuleInfo_1_35)), &conv3_STATE_VARIABLE_ModuleInfo_2_38);
    STATE_VARIABLE_VarTable_2_37 = ((MR_Word) (conv4_STATE_VARIABLE_VarTable_2_37));
    STATE_VARIABLE_ModuleInfo_2_38 = ((MR_Word) (conv3_STATE_VARIABLE_ModuleInfo_2_38));
    hlds__goal_transform__switch_to_disjunction_8_p_0(Var_1, Cases_19, InstMap_3, &CasesGoals_29, STATE_VARIABLE_VarTable_2_37, STATE_VARIABLE_VarTable_6, STATE_VARIABLE_ModuleInfo_2_38, STATE_VARIABLE_ModuleInfo_8);
    {
      Var_41 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_41, 0) = ((MR_Box) (MainDisjunctGoal_27));
      MR_hl_field(1, Var_41, 1) = ((MR_Box) (OtherDisjunctGoals_28));
    }
    *HeadVar__4_4 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), Var_41, CasesGoals_29);
  }
}

static void MR_CALL 
hlds__goal_transform__case_to_disjunct_9_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv4_LambdaHeadVar__2_66;

  hlds__goal_transform__IntroducedFrom__pred__case_to_disjunct__814__1_2_p_0(((MR_Word) (wrapper_arg_1)), &conv4_LambdaHeadVar__2_66);
  *wrapper_arg_2 = ((MR_Box) (conv4_LambdaHeadVar__2_66));
}

static void MR_CALL 
hlds__goal_transform__case_to_disjunct_9_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_HeadVar__2_2;
  MR_Word conv1_HeadVar__4_4;

  parse_tree__var_table__add_var_entry_4_p_0(((MR_Word) (wrapper_arg_1)), &conv2_HeadVar__2_2, ((MR_Word) (wrapper_arg_3)), &conv1_HeadVar__4_4);
  *wrapper_arg_2 = ((MR_Box) (conv2_HeadVar__2_2));
  *wrapper_arg_4 = ((MR_Box) (conv1_HeadVar__4_4));
}

static void MR_CALL 
hlds__goal_transform__case_to_disjunct_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_LambdaHeadVar__2_59;

  hlds__goal_transform__IntroducedFrom__pred__case_to_disjunct__798__1_3_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), &conv0_LambdaHeadVar__2_59);
  *wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_59));
}

void MR_CALL 
hlds__goal_transform__case_to_disjunct_9_p_0(
  MR_Word Var_10,
  MR_Word CaseGoal_11,
  MR_Word InstMap_12,
  MR_Word ConsId_13,
  MR_Word * Disjunct_14,
  MR_Word STATE_VARIABLE_VarTable_0_54,
  MR_Word * STATE_VARIABLE_VarTable_55,
  MR_Word STATE_VARIABLE_ModuleInfo_0_56,
  MR_Word * STATE_VARIABLE_ModuleInfo_57)
{
  MR_bool succeeded;
  MR_Integer ConsArity_17;
  MR_Word VarType_18;
  MR_Word ArgTypes_19;
  MR_Word MakeArgEntry_20;
  MR_Word ArgEntries_23;
  MR_Word ArgVars_24;
  MR_Word Inst0_25;
  MR_Word ArgInsts_28;
  MR_Word UniModes_32;
  MR_Word UnifyMode_33;
  MR_Word Unification_35;
  MR_Word RHS_36;
  MR_Word ExtraGoalExpr_37;
  MR_Word NonLocals_38;
  MR_Word ExtraInstMapDelta0_39;
  MR_Word ExtraInstMapDelta_40;
  MR_Word ExtraGoalInfo_41;
  MR_Word CaseGoalConj_42;
  MR_Word GoalList_43;
  MR_Word CaseGoalInfo_45;
  MR_Word CaseNonLocals0_46;
  MR_Word CaseNonLocals_47;
  MR_Word CaseInstMapDelta_48;
  MR_Word InstMapDelta_49;
  MR_Word CaseDetism0_50;
  MR_Word Detism_51;
  MR_Word CasePurity_52;
  MR_Word CombinedGoalInfo_53;
  MR_Word Var_81;
  MR_Word Var_84;
  MR_Box conv3_STATE_VARIABLE_VarTable_55;
  MR_Word ArgInsts1_27;
  MR_Word Inst1_26;

  ConsArity_17 = parse_tree__prog_util__cons_id_arity_1_f_0(ConsId_13);
  parse_tree__var_table__lookup_var_type_3_p_0(STATE_VARIABLE_VarTable_0_54, Var_10, &VarType_18);
  hlds__type_util__get_cons_id_arg_types_4_p_0(STATE_VARIABLE_ModuleInfo_0_56, VarType_18, ConsId_13, &ArgTypes_19);
  {
    MakeArgEntry_20 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, MakeArgEntry_20, 0) = ((MR_Box) (&hlds__goal_transform_scalar_common_2[5]));
    MR_hl_field(0, MakeArgEntry_20, 1) = ((MR_Box) (hlds__goal_transform__case_to_disjunct_9_p_0_1));
    MR_hl_field(0, MakeArgEntry_20, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, MakeArgEntry_20, 3) = ((MR_Box) (STATE_VARIABLE_ModuleInfo_0_56));
  }
  mercury__list__map_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&parse_tree__var_table__parse_tree__var_table__type_ctor_info_var_table_entry_0), MakeArgEntry_20, ArgTypes_19, &ArgEntries_23);
  mercury__list__map_foldl_5_p_0((MR_Word) (&parse_tree__var_table__parse_tree__var_table__type_ctor_info_var_table_entry_0), (MR_Word) (&hlds__goal_transform_scalar_common_1[1]), (MR_Word) (&parse_tree__var_table__parse_tree__var_table__type_ctor_info_var_table_0), (MR_Word) (&hlds__goal_transform_scalar_common_3[13]), ArgEntries_23, &ArgVars_24, ((MR_Box) (STATE_VARIABLE_VarTable_0_54)), &conv3_STATE_VARIABLE_VarTable_55);
  *STATE_VARIABLE_VarTable_55 = ((MR_Word) (conv3_STATE_VARIABLE_VarTable_55));
  hlds__instmap__instmap_lookup_var_3_p_0(InstMap_12, Var_10, &Inst0_25);
  hlds__inst_lookup__inst_expand_3_p_0(STATE_VARIABLE_ModuleInfo_0_56, Inst0_25, &Inst1_26);
  succeeded = parse_tree__prog_mode__get_arg_insts_4_p_0(Inst1_26, ConsId_13, ConsArity_17, &ArgInsts1_27);
  if (succeeded)
    ArgInsts_28 = ArgInsts1_27;
  else
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.goal_transform.case_to_disjunct\'/9", (MR_String) "get_arg_insts failed");
      return;
    }
  mercury__list__map_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_unify_mode_0), (MR_Word) (&hlds__goal_transform_scalar_common_3[14]), ArgInsts_28, &UniModes_32);
  {
    UnifyMode_33 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, UnifyMode_33, 0) = ((MR_Box) (Inst0_25));
    MR_hl_field(0, UnifyMode_33, 1) = ((MR_Box) (Inst0_25));
    MR_hl_field(0, UnifyMode_33, 2) = ((MR_Box) (Inst0_25));
    MR_hl_field(0, UnifyMode_33, 3) = ((MR_Box) (Inst0_25));
  }
  {
    Unification_35 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Unification_35, 0) = ((MR_Box) (Var_10));
    MR_hl_field(1, Unification_35, 1) = ((MR_Box) (ConsId_13));
    MR_hl_field(1, Unification_35, 2) = ((MR_Box) (ArgVars_24));
    MR_hl_field(1, Unification_35, 3) = ((MR_Box) (UniModes_32));
    MR_hl_field(1, Unification_35, 4) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 0) << 1)) | (MR_Unsigned) ((MR_Integer) 1)));
  }
  {
    RHS_36 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, RHS_36, 0) = ((MR_Box) (ConsId_13));
    MR_hl_field(1, RHS_36, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    MR_hl_field(1, RHS_36, 2) = ((MR_Box) (ArgVars_24));
  }
  {
    ExtraGoalExpr_37 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, ExtraGoalExpr_37, 0) = ((MR_Box) (Var_10));
    MR_hl_field(1, ExtraGoalExpr_37, 1) = ((MR_Box) (RHS_36));
    MR_hl_field(1, ExtraGoalExpr_37, 2) = ((MR_Box) (UnifyMode_33));
    MR_hl_field(1, ExtraGoalExpr_37, 3) = ((MR_Box) (Unification_35));
    MR_hl_field(1, ExtraGoalExpr_37, 4) = ((MR_Box) (&hlds__goal_transform_scalar_common_1[2]));
  }
  NonLocals_38 = parse_tree__set_of_var__make_singleton_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_10);
  hlds__instmap__instmap_delta_init_reachable_1_p_0(&ExtraInstMapDelta0_39);
  hlds__instmap__instmap_delta_bind_var_to_functor_8_p_0(Var_10, VarType_18, ConsId_13, InstMap_12, ExtraInstMapDelta0_39, &ExtraInstMapDelta_40, STATE_VARIABLE_ModuleInfo_0_56, STATE_VARIABLE_ModuleInfo_57);
  hlds__hlds_goal__goal_info_init_5_p_0(NonLocals_38, ExtraInstMapDelta_40, (MR_Integer) 1, (MR_Integer) 0, &ExtraGoalInfo_41);
  hlds__hlds_goal__goal_to_conj_list_2_p_0(CaseGoal_11, &CaseGoalConj_42);
  {
    Var_81 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_81, 0) = ((MR_Box) (ExtraGoalExpr_37));
    MR_hl_field(0, Var_81, 1) = ((MR_Box) (ExtraGoalInfo_41));
  }
  {
    GoalList_43 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, GoalList_43, 0) = ((MR_Box) (Var_81));
    MR_hl_field(1, GoalList_43, 1) = ((MR_Box) (CaseGoalConj_42));
  }
  CaseGoalInfo_45 = ((MR_Word) ((MR_hl_field(0, CaseGoal_11, 1))));
  CaseNonLocals0_46 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(CaseGoalInfo_45);
  parse_tree__set_of_var__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_10, CaseNonLocals0_46, &CaseNonLocals_47);
  CaseInstMapDelta_48 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(CaseGoalInfo_45);
  hlds__instmap__instmap_delta_apply_instmap_delta_4_p_0(ExtraInstMapDelta_40, CaseInstMapDelta_48, (MR_Integer) 2, &InstMapDelta_49);
  CaseDetism0_50 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(CaseGoalInfo_45);
  parse_tree__prog_detism__det_conjunction_detism_3_p_0((MR_Integer) 1, CaseDetism0_50, &Detism_51);
  CasePurity_52 = hlds__hlds_goal__goal_info_get_purity_1_f_0(CaseGoalInfo_45);
  hlds__hlds_goal__goal_info_init_5_p_0(CaseNonLocals_47, InstMapDelta_49, Detism_51, CasePurity_52, &CombinedGoalInfo_53);
  {
    Var_84 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_84, 0) = ((MR_Box) ((MR_Unsigned) 2U));
    MR_hl_field(3, Var_84, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    MR_hl_field(3, Var_84, 2) = ((MR_Box) (GoalList_43));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *Disjunct_14 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_84));
    MR_hl_field(0, base, 1) = ((MR_Box) (CombinedGoalInfo_53));
  }
}

static void MR_CALL 
hlds__goal_transform__transform_all_goals_3_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_LambdaHeadVar__2_62;

  hlds__goal_transform__IntroducedFrom__pred__transform_all_goals__751__1_3_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), &conv2_LambdaHeadVar__2_62);
  *wrapper_arg_2 = ((MR_Box) (conv2_LambdaHeadVar__2_62));
}

static void MR_CALL 
hlds__goal_transform__transform_all_goals_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_Goal_6;

  hlds__goal_transform__transform_all_goals_3_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), &conv1_Goal_6);
  *wrapper_arg_2 = ((MR_Box) (conv1_Goal_6));
}

static void MR_CALL 
hlds__goal_transform__transform_all_goals_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_Goal_6;

  hlds__goal_transform__transform_all_goals_3_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), &conv0_Goal_6);
  *wrapper_arg_2 = ((MR_Box) (conv0_Goal_6));
}

void MR_CALL 
hlds__goal_transform__transform_all_goals_3_p_0(
  MR_Word TransformPred_4,
  MR_Word Goal0_5,
  MR_Word * Goal_6)
{
  MR_Word GoalExpr0_7 = ((MR_Word) ((MR_hl_field(0, Goal0_5, 0))));
  MR_Word GoalInfo0_8 = ((MR_Word) ((MR_hl_field(0, Goal0_5, 1))));
  MR_Word GoalExpr_32;
  MR_Word Goal1_57;
  void MR_CALL (* func_3)(MR_Box, MR_Box, MR_Box *);
  MR_Box conv4_Goal_6;

  switch (MR_tag((MR_Word) GoalExpr0_7)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word SubGoal0_46 = (MR_Word) ((MR_Word) (GoalExpr0_7));
        MR_Word SubGoal_47;

        hlds__goal_transform__transform_all_goals_3_p_0(TransformPred_4, SubGoal0_46, &SubGoal_47);
        GoalExpr_32 = (MR_Word) ((MR_Word) (SubGoal_47));
      }
      break;
    case (MR_Integer) 1:
    case (MR_Integer) 2:
      GoalExpr_32 = GoalExpr0_7;
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, GoalExpr0_7, 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
        case (MR_Integer) 1:
          GoalExpr_32 = GoalExpr0_7;
          break;
        case (MR_Integer) 2:
          {
            MR_Word ConjType_33 = ((MR_Unsigned) ((MR_hl_field(3, GoalExpr0_7, 1))) & (MR_Integer) 1);
            MR_Word Conjs0_34 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_7, 2))));
            MR_Word Conjs_35;
            MR_Word Var_58;

            {
              Var_58 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_58, 0) = ((MR_Box) (&hlds__goal_transform_scalar_common_2[3]));
              MR_hl_field(0, Var_58, 1) = ((MR_Box) (hlds__goal_transform__transform_all_goals_3_p_0_1));
              MR_hl_field(0, Var_58, 2) = ((MR_Box) ((MR_Integer) 1));
              MR_hl_field(0, Var_58, 3) = ((MR_Box) (TransformPred_4));
            }
            mercury__list__map_3_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), Var_58, Conjs0_34, &Conjs_35);
            {
              GoalExpr_32 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, GoalExpr_32, 0) = ((MR_Box) ((MR_Unsigned) 2U));
              MR_hl_field(3, GoalExpr_32, 1) = (MR_Box) ((MR_Unsigned) (ConjType_33));
              MR_hl_field(3, GoalExpr_32, 2) = ((MR_Box) (Conjs_35));
            }
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word Disjs0_36 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_7, 1))));
            MR_Word Disjs_37;
            MR_Word Var_59;

            {
              Var_59 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_59, 0) = ((MR_Box) (&hlds__goal_transform_scalar_common_2[3]));
              MR_hl_field(0, Var_59, 1) = ((MR_Box) (hlds__goal_transform__transform_all_goals_3_p_0_2));
              MR_hl_field(0, Var_59, 2) = ((MR_Box) ((MR_Integer) 1));
              MR_hl_field(0, Var_59, 3) = ((MR_Box) (TransformPred_4));
            }
            mercury__list__map_3_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), Var_59, Disjs0_36, &Disjs_37);
            {
              GoalExpr_32 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, GoalExpr_32, 0) = ((MR_Box) ((MR_Unsigned) 3U));
              MR_hl_field(3, GoalExpr_32, 1) = ((MR_Box) (Disjs_37));
            }
          }
          break;
        case (MR_Integer) 4:
          {
            MR_Word Var_38 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_7, 1))));
            MR_Word CanFail_39 = ((MR_Unsigned) ((MR_hl_field(3, GoalExpr0_7, 2))) & (MR_Integer) 1);
            MR_Word Cases0_40 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_7, 3))));
            MR_Word Cases_45;
            MR_Word Var_60;

            {
              Var_60 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_60, 0) = ((MR_Box) (&hlds__goal_transform_scalar_common_2[4]));
              MR_hl_field(0, Var_60, 1) = ((MR_Box) (hlds__goal_transform__transform_all_goals_3_p_0_3));
              MR_hl_field(0, Var_60, 2) = ((MR_Box) ((MR_Integer) 1));
              MR_hl_field(0, Var_60, 3) = ((MR_Box) (TransformPred_4));
            }
            mercury__list__map_3_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0), Var_60, Cases0_40, &Cases_45);
            {
              GoalExpr_32 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, GoalExpr_32, 0) = ((MR_Box) ((MR_Unsigned) 4U));
              MR_hl_field(3, GoalExpr_32, 1) = ((MR_Box) (Var_38));
              MR_hl_field(3, GoalExpr_32, 2) = (MR_Box) ((MR_Unsigned) (CanFail_39));
              MR_hl_field(3, GoalExpr_32, 3) = ((MR_Box) (Cases_45));
            }
          }
          break;
        case (MR_Integer) 5:
          {
            MR_Word Reason_48 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_7, 1))));
            MR_Word SubGoal0_67 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_7, 2))));
            MR_Word SubGoal_68;

            hlds__goal_transform__transform_all_goals_3_p_0(TransformPred_4, SubGoal0_67, &SubGoal_68);
            {
              GoalExpr_32 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, GoalExpr_32, 0) = ((MR_Box) ((MR_Unsigned) 5U));
              MR_hl_field(3, GoalExpr_32, 1) = ((MR_Box) (Reason_48));
              MR_hl_field(3, GoalExpr_32, 2) = ((MR_Box) (SubGoal_68));
            }
          }
          break;
        case (MR_Integer) 6:
          {
            MR_Word ExistVars_49 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_7, 1))));
            MR_Word Cond0_50 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_7, 2))));
            MR_Word Then0_51 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_7, 3))));
            MR_Word Else0_52 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_7, 4))));
            MR_Word Cond_53;
            MR_Word Then_54;
            MR_Word Else_55;

            hlds__goal_transform__transform_all_goals_3_p_0(TransformPred_4, Cond0_50, &Cond_53);
            hlds__goal_transform__transform_all_goals_3_p_0(TransformPred_4, Then0_51, &Then_54);
            hlds__goal_transform__transform_all_goals_3_p_0(TransformPred_4, Else0_52, &Else_55);
            {
              GoalExpr_32 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, GoalExpr_32, 0) = ((MR_Box) ((MR_Unsigned) 6U));
              MR_hl_field(3, GoalExpr_32, 1) = ((MR_Box) (ExistVars_49));
              MR_hl_field(3, GoalExpr_32, 2) = ((MR_Box) (Cond_53));
              MR_hl_field(3, GoalExpr_32, 3) = ((MR_Box) (Then_54));
              MR_hl_field(3, GoalExpr_32, 4) = ((MR_Box) (Else_55));
            }
          }
          break;
        case (MR_Integer) 7:
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.goal_transform.transform_all_goals\'/3", (MR_String) "shorthand");
            return;
          }
          break;
      }
      break;
  }
  {
    Goal1_57 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Goal1_57, 0) = ((MR_Box) (GoalExpr_32));
    MR_hl_field(0, Goal1_57, 1) = ((MR_Box) (GoalInfo0_8));
  }
  func_3 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, TransformPred_4, 1))));
  func_3(((MR_Box) (TransformPred_4)), ((MR_Box) (Goal1_57)), &conv4_Goal_6);
  *Goal_6 = ((MR_Word) (conv4_Goal_6));
}

static void MR_CALL 
hlds__goal_transform__maybe_transform_goal_at_goal_path_with_instmap_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv4_HeadVar__3_3;

  hlds__instmap__apply_instmap_delta_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv4_HeadVar__3_3);
  *wrapper_arg_3 = ((MR_Box) (conv4_HeadVar__3_3));
}

static MR_Box MR_CALL 
hlds__goal_transform__maybe_transform_goal_at_goal_path_with_instmap_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv3_LambdaHeadVar__2_96;

  conv3_LambdaHeadVar__2_96 = hlds__goal_transform__IntroducedFrom__func__maybe_transform_goal_at_goal_path_with_instmap__570__1_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv3_LambdaHeadVar__2_96));
  return wrapper_arg_2;
}

void MR_CALL 
hlds__goal_transform__maybe_transform_goal_at_goal_path_with_instmap_5_p_0(
  MR_Word TransformPred_6,
  MR_Word TargetGoalPath_7,
  MR_Word Instmap0_8,
  MR_Word Goal0_9,
  MR_Word * MaybeGoal_10)
{
  MR_bool succeeded;

  if ((TargetGoalPath_7 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word MaybeGoal0_11;
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, TransformPred_6, 1))));
    MR_Box conv1_MaybeGoal0_11;

    func_0(((MR_Box) (TransformPred_6)), ((MR_Box) (Instmap0_8)), ((MR_Box) (Goal0_9)), &conv1_MaybeGoal0_11);
    MaybeGoal0_11 = ((MR_Word) (conv1_MaybeGoal0_11));
    if (((MR_tag((MR_Word) MaybeGoal0_11)) == (MR_Integer) 1))
    {
      MR_String Error_168 = ((MR_String) ((MR_hl_field(1, MaybeGoal0_11, 0))));

      {
        MR_Word base;
        base = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *MaybeGoal_10 = base;
        MR_hl_field(2, base, 0) = ((MR_Box) (Error_168));
      }
    }
    else
    {
      MR_Word Goal_167 = ((MR_Word) ((MR_hl_field(0, MaybeGoal0_11, 0))));

      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *MaybeGoal_10 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Goal_167));
      }
    }
  }
  else
  {
    MR_Word FirstStep_12 = ((MR_Word) ((MR_hl_field(1, TargetGoalPath_7, 0))));
    MR_Word LaterPath_13 = ((MR_Word) ((MR_hl_field(1, TargetGoalPath_7, 1))));
    MR_Word GoalExpr0_14 = ((MR_Word) ((MR_hl_field(0, Goal0_9, 0))));
    MR_Word GoalInfo0_15 = ((MR_Word) ((MR_hl_field(0, Goal0_9, 1))));

    switch (MR_tag((MR_Word) GoalExpr0_14)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word SubGoal0_71 = (MR_Word) ((MR_Word) (GoalExpr0_14));

          succeeded = (FirstStep_12 == (MR_Word) ((MR_Unsigned) 12U));
          if (succeeded)
          {
            MR_Word MaybeSubGoal_72;

            hlds__goal_transform__maybe_transform_goal_at_goal_path_with_instmap_5_p_0(TransformPred_6, LaterPath_13, Instmap0_8, SubGoal0_71, &MaybeSubGoal_72);
            switch (MR_tag((MR_Word) MaybeSubGoal_72)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
              case (MR_Integer) 2:
                *MaybeGoal_10 = MaybeSubGoal_72;
                break;
              case (MR_Integer) 1:
                {
                  MR_Word SubGoal_73 = ((MR_Word) ((MR_hl_field(1, MaybeSubGoal_72, 0))));
                  MR_Word Var_102;
                  MR_Word GoalExpr_122 = (MR_Word) ((MR_Word) (SubGoal_73));

                  {
                    Var_102 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(0, Var_102, 0) = ((MR_Box) (GoalExpr_122));
                    MR_hl_field(0, Var_102, 1) = ((MR_Box) (GoalInfo0_15));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                    *MaybeGoal_10 = base;
                    MR_hl_field(1, base, 0) = ((MR_Box) (Var_102));
                  }
                }
                break;
            }
          }
          else
            *MaybeGoal_10 = (MR_Word) ((MR_Unsigned) 0U);
        }
        break;
      case (MR_Integer) 1:
      case (MR_Integer) 2:
        *MaybeGoal_10 = (MR_Word) ((MR_Unsigned) 0U);
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, GoalExpr0_14, 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 1:
            *MaybeGoal_10 = (MR_Word) ((MR_Unsigned) 0U);
            break;
          case (MR_Integer) 2:
            {
              MR_Word ConjType_39 = ((MR_Unsigned) ((MR_hl_field(3, GoalExpr0_14, 1))) & (MR_Integer) 1);
              MR_Word Conjs0_40 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_14, 2))));
              MR_Integer ConjNum_41;
              MR_Word Conj0_42;
              MR_Word TypeCtorInfo_156_156;
              MR_Box conv2_Conj0_42;

              succeeded = ((MR_tag((MR_Word) FirstStep_12)) == (MR_Integer) 1);
              if (succeeded)
              {
                ConjNum_41 = ((MR_Integer) ((MR_hl_field(1, FirstStep_12, 0))));
                TypeCtorInfo_156_156 = (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0);
                succeeded = mercury__list__index1_3_p_0(TypeCtorInfo_156_156, Conjs0_40, ConjNum_41, &conv2_Conj0_42);
                if (succeeded)
                {
                  Conj0_42 = ((MR_Word) (conv2_Conj0_42));
                  succeeded = MR_TRUE;
                }
              }
              if (succeeded)
              {
                MR_Word HeadConjs_43;
                MR_Word HeadInstdeltas_44;
                MR_Word Instmap_46;
                MR_Word MaybeConj_47;
                MR_Integer Var_92 = (MR_Integer) ((MR_Unsigned) ConjNum_41 - (MR_Unsigned) 1);
                MR_Box conv5_Instmap_46;

                mercury__list__take_upto_3_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), Var_92, Conjs0_40, &HeadConjs_43);
                HeadInstdeltas_44 = mercury__list__map_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&hlds__instmap__hlds__instmap__type_ctor_info_instmap_delta_0), (MR_Word) (&hlds__goal_transform_scalar_common_3[11]), HeadConjs_43);
                mercury__list__foldl_4_p_0((MR_Word) (&hlds__instmap__hlds__instmap__type_ctor_info_instmap_delta_0), (MR_Word) (&hlds__instmap__hlds__instmap__type_ctor_info_instmap_0), (MR_Word) (&hlds__goal_transform_scalar_common_3[12]), HeadInstdeltas_44, ((MR_Box) (Instmap0_8)), &conv5_Instmap_46);
                Instmap_46 = ((MR_Word) (conv5_Instmap_46));
                hlds__goal_transform__maybe_transform_goal_at_goal_path_with_instmap_5_p_0(TransformPred_6, LaterPath_13, Instmap_46, Conj0_42, &MaybeConj_47);
                switch (MR_tag((MR_Word) MaybeConj_47)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                  case (MR_Integer) 2:
                    *MaybeGoal_10 = MaybeConj_47;
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Word Conj_48 = ((MR_Word) ((MR_hl_field(1, MaybeConj_47, 0))));
                      MR_Word Conjs_49;
                      MR_Word GoalExpr_50;
                      MR_Word Var_99;

                      mercury__list__det_replace_nth_4_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), Conjs0_40, ConjNum_41, ((MR_Box) (Conj_48)), &Conjs_49);
                      {
                        GoalExpr_50 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(3, GoalExpr_50, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                        MR_hl_field(3, GoalExpr_50, 1) = (MR_Box) ((MR_Unsigned) (ConjType_39));
                        MR_hl_field(3, GoalExpr_50, 2) = ((MR_Box) (Conjs_49));
                      }
                      {
                        Var_99 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(0, Var_99, 0) = ((MR_Box) (GoalExpr_50));
                        MR_hl_field(0, Var_99, 1) = ((MR_Box) (GoalInfo0_15));
                      }
                      {
                        MR_Word base;
                        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                        *MaybeGoal_10 = base;
                        MR_hl_field(1, base, 0) = ((MR_Box) (Var_99));
                      }
                    }
                    break;
                }
              }
              else
                *MaybeGoal_10 = (MR_Word) ((MR_Unsigned) 0U);
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word Disjs0_52 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_14, 1))));
              MR_Integer DisjNum_53;
              MR_Word Disj0_54;
              MR_Word TypeCtorInfo_163_163;
              MR_Box conv6_Disj0_54;

              succeeded = ((MR_tag((MR_Word) FirstStep_12)) == (MR_Integer) 2);
              if (succeeded)
              {
                DisjNum_53 = ((MR_Integer) ((MR_hl_field(2, FirstStep_12, 0))));
                TypeCtorInfo_163_163 = (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0);
                succeeded = mercury__list__index1_3_p_0(TypeCtorInfo_163_163, Disjs0_52, DisjNum_53, &conv6_Disj0_54);
                if (succeeded)
                {
                  Disj0_54 = ((MR_Word) (conv6_Disj0_54));
                  succeeded = MR_TRUE;
                }
              }
              if (succeeded)
              {
                MR_Word MaybeDisj_55;

                hlds__goal_transform__maybe_transform_goal_at_goal_path_with_instmap_5_p_0(TransformPred_6, LaterPath_13, Instmap0_8, Disj0_54, &MaybeDisj_55);
                switch (MR_tag((MR_Word) MaybeDisj_55)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                  case (MR_Integer) 2:
                    *MaybeGoal_10 = MaybeDisj_55;
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Word Disj_56 = ((MR_Word) ((MR_hl_field(1, MaybeDisj_55, 0))));
                      MR_Word Disjs_57;
                      MR_Word Var_100;
                      MR_Word GoalExpr_112;

                      mercury__list__det_replace_nth_4_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), Disjs0_52, DisjNum_53, ((MR_Box) (Disj_56)), &Disjs_57);
                      {
                        GoalExpr_112 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(3, GoalExpr_112, 0) = ((MR_Box) ((MR_Unsigned) 3U));
                        MR_hl_field(3, GoalExpr_112, 1) = ((MR_Box) (Disjs_57));
                      }
                      {
                        Var_100 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(0, Var_100, 0) = ((MR_Box) (GoalExpr_112));
                        MR_hl_field(0, Var_100, 1) = ((MR_Box) (GoalInfo0_15));
                      }
                      {
                        MR_Word base;
                        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                        *MaybeGoal_10 = base;
                        MR_hl_field(1, base, 0) = ((MR_Box) (Var_100));
                      }
                    }
                    break;
                }
              }
              else
                *MaybeGoal_10 = (MR_Word) ((MR_Unsigned) 0U);
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word Var_59 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_14, 1))));
              MR_Word CanFail_60 = ((MR_Unsigned) ((MR_hl_field(3, GoalExpr0_14, 2))) & (MR_Integer) 1);
              MR_Word Cases0_61 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_14, 3))));
              MR_Integer CaseNum_62;
              MR_Word Case0_64;
              MR_Word TypeCtorInfo_165_165;
              MR_Box conv7_Case0_64;

              succeeded = ((((MR_tag((MR_Word) FirstStep_12)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, FirstStep_12, 0)))) == (MR_Integer) 0)));
              if (succeeded)
              {
                CaseNum_62 = ((MR_Integer) ((MR_hl_field(3, FirstStep_12, 1))));
                TypeCtorInfo_165_165 = (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0);
                succeeded = mercury__list__index1_3_p_0(TypeCtorInfo_165_165, Cases0_61, CaseNum_62, &conv7_Case0_64);
                if (succeeded)
                {
                  Case0_64 = ((MR_Word) (conv7_Case0_64));
                  succeeded = MR_TRUE;
                }
              }
              if (succeeded)
              {
                MR_Word CaseGoal0_65 = ((MR_Word) ((MR_hl_field(0, Case0_64, 2))));
                MR_Word MaybeCaseGoal_66;

                hlds__goal_transform__maybe_transform_goal_at_goal_path_with_instmap_5_p_0(TransformPred_6, LaterPath_13, Instmap0_8, CaseGoal0_65, &MaybeCaseGoal_66);
                switch (MR_tag((MR_Word) MaybeCaseGoal_66)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                  case (MR_Integer) 2:
                    *MaybeGoal_10 = MaybeCaseGoal_66;
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Word CaseGoal_67 = ((MR_Word) ((MR_hl_field(1, MaybeCaseGoal_66, 0))));
                      MR_Word Case_68;
                      MR_Word Cases_69;
                      MR_Word Var_101;
                      MR_Word GoalExpr_117;
                      MR_Word Var_152 = ((MR_Word) ((MR_hl_field(0, Case0_64, 0))));
                      MR_Word Var_153 = ((MR_Word) ((MR_hl_field(0, Case0_64, 1))));

                      {
                        Case_68 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(0, Case_68, 0) = ((MR_Box) (Var_152));
                        MR_hl_field(0, Case_68, 1) = ((MR_Box) (Var_153));
                        MR_hl_field(0, Case_68, 2) = ((MR_Box) (CaseGoal_67));
                      }
                      mercury__list__det_replace_nth_4_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0), Cases0_61, CaseNum_62, ((MR_Box) (Case_68)), &Cases_69);
                      {
                        GoalExpr_117 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(3, GoalExpr_117, 0) = ((MR_Box) ((MR_Unsigned) 4U));
                        MR_hl_field(3, GoalExpr_117, 1) = ((MR_Box) (Var_59));
                        MR_hl_field(3, GoalExpr_117, 2) = (MR_Box) ((MR_Unsigned) (CanFail_60));
                        MR_hl_field(3, GoalExpr_117, 3) = ((MR_Box) (Cases_69));
                      }
                      {
                        Var_101 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(0, Var_101, 0) = ((MR_Box) (GoalExpr_117));
                        MR_hl_field(0, Var_101, 1) = ((MR_Box) (GoalInfo0_15));
                      }
                      {
                        MR_Word base;
                        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                        *MaybeGoal_10 = base;
                        MR_hl_field(1, base, 0) = ((MR_Box) (Var_101));
                      }
                    }
                    break;
                }
              }
              else
                *MaybeGoal_10 = (MR_Word) ((MR_Unsigned) 0U);
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word Reason_75 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_14, 1))));
              MR_Word SubGoal0_138 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_14, 2))));

              succeeded = ((((MR_tag((MR_Word) FirstStep_12)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, FirstStep_12, 0)))) == (MR_Integer) 1)));
              if (succeeded)
              {
                MR_Word MaybeSubGoal_132;

                hlds__goal_transform__maybe_transform_goal_at_goal_path_with_instmap_5_p_0(TransformPred_6, LaterPath_13, Instmap0_8, SubGoal0_138, &MaybeSubGoal_132);
                switch (MR_tag((MR_Word) MaybeSubGoal_132)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                  case (MR_Integer) 2:
                    *MaybeGoal_10 = MaybeSubGoal_132;
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Word Var_103;
                      MR_Word GoalExpr_127;
                      MR_Word SubGoal_128 = ((MR_Word) ((MR_hl_field(1, MaybeSubGoal_132, 0))));

                      {
                        GoalExpr_127 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(3, GoalExpr_127, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                        MR_hl_field(3, GoalExpr_127, 1) = ((MR_Box) (Reason_75));
                        MR_hl_field(3, GoalExpr_127, 2) = ((MR_Box) (SubGoal_128));
                      }
                      {
                        Var_103 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(0, Var_103, 0) = ((MR_Box) (GoalExpr_127));
                        MR_hl_field(0, Var_103, 1) = ((MR_Box) (GoalInfo0_15));
                      }
                      {
                        MR_Word base;
                        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                        *MaybeGoal_10 = base;
                        MR_hl_field(1, base, 0) = ((MR_Box) (Var_103));
                      }
                    }
                    break;
                }
              }
              else
                *MaybeGoal_10 = (MR_Word) ((MR_Unsigned) 0U);
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word ExistVars_78 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_14, 1))));
              MR_Word Cond0_79 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_14, 2))));
              MR_Word Then0_80 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_14, 3))));
              MR_Word Else0_81 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_14, 4))));

              succeeded = (FirstStep_12 == (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                MR_Word MaybeCond_82;

                hlds__goal_transform__maybe_transform_goal_at_goal_path_with_instmap_5_p_0(TransformPred_6, LaterPath_13, Instmap0_8, Cond0_79, &MaybeCond_82);
                switch (MR_tag((MR_Word) MaybeCond_82)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                  case (MR_Integer) 2:
                    *MaybeGoal_10 = MaybeCond_82;
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Word Cond_83 = ((MR_Word) ((MR_hl_field(1, MaybeCond_82, 0))));
                      MR_Word Var_104;
                      MR_Word GoalExpr_141;

                      {
                        GoalExpr_141 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(3, GoalExpr_141, 0) = ((MR_Box) ((MR_Unsigned) 6U));
                        MR_hl_field(3, GoalExpr_141, 1) = ((MR_Box) (ExistVars_78));
                        MR_hl_field(3, GoalExpr_141, 2) = ((MR_Box) (Cond_83));
                        MR_hl_field(3, GoalExpr_141, 3) = ((MR_Box) (Then0_80));
                        MR_hl_field(3, GoalExpr_141, 4) = ((MR_Box) (Else0_81));
                      }
                      {
                        Var_104 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(0, Var_104, 0) = ((MR_Box) (GoalExpr_141));
                        MR_hl_field(0, Var_104, 1) = ((MR_Box) (GoalInfo0_15));
                      }
                      {
                        MR_Word base;
                        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                        *MaybeGoal_10 = base;
                        MR_hl_field(1, base, 0) = ((MR_Box) (Var_104));
                      }
                    }
                    break;
                }
              }
              else
              {
                succeeded = (FirstStep_12 == (MR_Word) ((MR_Unsigned) 4U));
                if (succeeded)
                {
                  MR_Word MaybeThen_85;
                  MR_Word Var_105;
                  MR_Word Var_106 = ((MR_Word) ((MR_hl_field(0, Cond0_79, 1))));
                  MR_Word Instmap_146;

                  Var_105 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(Var_106);
                  hlds__instmap__apply_instmap_delta_3_p_0(Var_105, Instmap0_8, &Instmap_146);
                  hlds__goal_transform__maybe_transform_goal_at_goal_path_with_instmap_5_p_0(TransformPred_6, LaterPath_13, Instmap_146, Then0_80, &MaybeThen_85);
                  switch (MR_tag((MR_Word) MaybeThen_85)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                    case (MR_Integer) 2:
                      *MaybeGoal_10 = MaybeThen_85;
                      break;
                    case (MR_Integer) 1:
                      {
                        MR_Word Then_86 = ((MR_Word) ((MR_hl_field(1, MaybeThen_85, 0))));
                        MR_Word Var_107;
                        MR_Word GoalExpr_144;

                        {
                          GoalExpr_144 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(3, GoalExpr_144, 0) = ((MR_Box) ((MR_Unsigned) 6U));
                          MR_hl_field(3, GoalExpr_144, 1) = ((MR_Box) (ExistVars_78));
                          MR_hl_field(3, GoalExpr_144, 2) = ((MR_Box) (Cond0_79));
                          MR_hl_field(3, GoalExpr_144, 3) = ((MR_Box) (Then_86));
                          MR_hl_field(3, GoalExpr_144, 4) = ((MR_Box) (Else0_81));
                        }
                        {
                          Var_107 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(0, Var_107, 0) = ((MR_Box) (GoalExpr_144));
                          MR_hl_field(0, Var_107, 1) = ((MR_Box) (GoalInfo0_15));
                        }
                        {
                          MR_Word base;
                          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                          *MaybeGoal_10 = base;
                          MR_hl_field(1, base, 0) = ((MR_Box) (Var_107));
                        }
                      }
                      break;
                  }
                }
                else
                {
                  succeeded = (FirstStep_12 == (MR_Word) ((MR_Unsigned) 8U));
                  if (succeeded)
                  {
                    MR_Word MaybeElse_88;

                    hlds__goal_transform__maybe_transform_goal_at_goal_path_with_instmap_5_p_0(TransformPred_6, LaterPath_13, Instmap0_8, Else0_81, &MaybeElse_88);
                    switch (MR_tag((MR_Word) MaybeElse_88)) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                      case (MR_Integer) 2:
                        *MaybeGoal_10 = MaybeElse_88;
                        break;
                      case (MR_Integer) 1:
                        {
                          MR_Word Else_89 = ((MR_Word) ((MR_hl_field(1, MaybeElse_88, 0))));
                          MR_Word Var_108;
                          MR_Word GoalExpr_148;

                          {
                            GoalExpr_148 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(3, GoalExpr_148, 0) = ((MR_Box) ((MR_Unsigned) 6U));
                            MR_hl_field(3, GoalExpr_148, 1) = ((MR_Box) (ExistVars_78));
                            MR_hl_field(3, GoalExpr_148, 2) = ((MR_Box) (Cond0_79));
                            MR_hl_field(3, GoalExpr_148, 3) = ((MR_Box) (Then0_80));
                            MR_hl_field(3, GoalExpr_148, 4) = ((MR_Box) (Else_89));
                          }
                          {
                            Var_108 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                            MR_hl_field(0, Var_108, 0) = ((MR_Box) (GoalExpr_148));
                            MR_hl_field(0, Var_108, 1) = ((MR_Box) (GoalInfo0_15));
                          }
                          {
                            MR_Word base;
                            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                            *MaybeGoal_10 = base;
                            MR_hl_field(1, base, 0) = ((MR_Box) (Var_108));
                          }
                        }
                        break;
                    }
                  }
                  else
                    *MaybeGoal_10 = (MR_Word) ((MR_Unsigned) 0U);
                }
              }
            }
            break;
          case (MR_Integer) 7:
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.goal_transform.maybe_transform_goal_at_goal_path_with_instmap\'/5", (MR_String) "shorthand");
              return;
            }
            break;
        }
        break;
    }
  }
}

void MR_CALL 
hlds__goal_transform__maybe_transform_goal_at_goal_path_4_p_0(
  MR_Word TransformPred_5,
  MR_Word TargetGoalPath_6,
  MR_Word Goal0_7,
  MR_Word * MaybeGoal_8)
{
  MR_bool succeeded;

  if ((TargetGoalPath_6 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word MaybeGoal0_9;
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, TransformPred_5, 1))));
    MR_Box conv1_MaybeGoal0_9;

    func_0(((MR_Box) (TransformPred_5)), ((MR_Box) (Goal0_7)), &conv1_MaybeGoal0_9);
    MaybeGoal0_9 = ((MR_Word) (conv1_MaybeGoal0_9));
    hlds__goal_transform__maybe_error_to_maybe_transformed_goal_2_p_0(MaybeGoal0_9, MaybeGoal_8);
  }
  else
  {
    MR_Word FirstStep_10 = ((MR_Word) ((MR_hl_field(1, TargetGoalPath_6, 0))));
    MR_Word LaterPath_11 = ((MR_Word) ((MR_hl_field(1, TargetGoalPath_6, 1))));
    MR_Word GoalExpr0_12 = ((MR_Word) ((MR_hl_field(0, Goal0_7, 0))));
    MR_Word GoalInfo0_13 = ((MR_Word) ((MR_hl_field(0, Goal0_7, 1))));

    switch (MR_tag((MR_Word) GoalExpr0_12)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word SubGoal0_65 = (MR_Word) ((MR_Word) (GoalExpr0_12));

          succeeded = (FirstStep_10 == (MR_Word) ((MR_Unsigned) 12U));
          if (succeeded)
          {
            MR_Word MaybeSubGoal_66;

            hlds__goal_transform__maybe_transform_goal_at_goal_path_4_p_0(TransformPred_5, LaterPath_11, SubGoal0_65, &MaybeSubGoal_66);
            switch (MR_tag((MR_Word) MaybeSubGoal_66)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
              case (MR_Integer) 2:
                *MaybeGoal_8 = MaybeSubGoal_66;
                break;
              case (MR_Integer) 1:
                {
                  MR_Word SubGoal_67 = ((MR_Word) ((MR_hl_field(1, MaybeSubGoal_66, 0))));
                  MR_Word Var_89;
                  MR_Word GoalExpr_106 = (MR_Word) ((MR_Word) (SubGoal_67));

                  {
                    Var_89 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(0, Var_89, 0) = ((MR_Box) (GoalExpr_106));
                    MR_hl_field(0, Var_89, 1) = ((MR_Box) (GoalInfo0_13));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                    *MaybeGoal_8 = base;
                    MR_hl_field(1, base, 0) = ((MR_Box) (Var_89));
                  }
                }
                break;
            }
          }
          else
            *MaybeGoal_8 = (MR_Word) ((MR_Unsigned) 0U);
        }
        break;
      case (MR_Integer) 1:
      case (MR_Integer) 2:
        *MaybeGoal_8 = (MR_Word) ((MR_Unsigned) 0U);
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, GoalExpr0_12, 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 1:
            *MaybeGoal_8 = (MR_Word) ((MR_Unsigned) 0U);
            break;
          case (MR_Integer) 2:
            {
              MR_Word ConjType_37 = ((MR_Unsigned) ((MR_hl_field(3, GoalExpr0_12, 1))) & (MR_Integer) 1);
              MR_Word Conjs0_38 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_12, 2))));
              MR_Integer ConjNum_39;
              MR_Word Conj0_40;
              MR_Word TypeCtorInfo_137_137;
              MR_Box conv2_Conj0_40;

              succeeded = ((MR_tag((MR_Word) FirstStep_10)) == (MR_Integer) 1);
              if (succeeded)
              {
                ConjNum_39 = ((MR_Integer) ((MR_hl_field(1, FirstStep_10, 0))));
                TypeCtorInfo_137_137 = (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0);
                succeeded = mercury__list__index1_3_p_0(TypeCtorInfo_137_137, Conjs0_38, ConjNum_39, &conv2_Conj0_40);
                if (succeeded)
                {
                  Conj0_40 = ((MR_Word) (conv2_Conj0_40));
                  succeeded = MR_TRUE;
                }
              }
              if (succeeded)
              {
                MR_Word MaybeConj_41;

                hlds__goal_transform__maybe_transform_goal_at_goal_path_4_p_0(TransformPred_5, LaterPath_11, Conj0_40, &MaybeConj_41);
                switch (MR_tag((MR_Word) MaybeConj_41)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                  case (MR_Integer) 2:
                    *MaybeGoal_8 = MaybeConj_41;
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Word Conj_42 = ((MR_Word) ((MR_hl_field(1, MaybeConj_41, 0))));
                      MR_Word Conjs_43;
                      MR_Word GoalExpr_44;
                      MR_Word Var_86;

                      mercury__list__det_replace_nth_4_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), Conjs0_38, ConjNum_39, ((MR_Box) (Conj_42)), &Conjs_43);
                      {
                        GoalExpr_44 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(3, GoalExpr_44, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                        MR_hl_field(3, GoalExpr_44, 1) = (MR_Box) ((MR_Unsigned) (ConjType_37));
                        MR_hl_field(3, GoalExpr_44, 2) = ((MR_Box) (Conjs_43));
                      }
                      {
                        Var_86 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(0, Var_86, 0) = ((MR_Box) (GoalExpr_44));
                        MR_hl_field(0, Var_86, 1) = ((MR_Box) (GoalInfo0_13));
                      }
                      {
                        MR_Word base;
                        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                        *MaybeGoal_8 = base;
                        MR_hl_field(1, base, 0) = ((MR_Box) (Var_86));
                      }
                    }
                    break;
                }
              }
              else
                *MaybeGoal_8 = (MR_Word) ((MR_Unsigned) 0U);
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word Disjs0_46 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_12, 1))));
              MR_Integer DisjNum_47;
              MR_Word Disj0_48;
              MR_Word TypeCtorInfo_139_139;
              MR_Box conv3_Disj0_48;

              succeeded = ((MR_tag((MR_Word) FirstStep_10)) == (MR_Integer) 2);
              if (succeeded)
              {
                DisjNum_47 = ((MR_Integer) ((MR_hl_field(2, FirstStep_10, 0))));
                TypeCtorInfo_139_139 = (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0);
                succeeded = mercury__list__index1_3_p_0(TypeCtorInfo_139_139, Disjs0_46, DisjNum_47, &conv3_Disj0_48);
                if (succeeded)
                {
                  Disj0_48 = ((MR_Word) (conv3_Disj0_48));
                  succeeded = MR_TRUE;
                }
              }
              if (succeeded)
              {
                MR_Word MaybeDisj_49;

                hlds__goal_transform__maybe_transform_goal_at_goal_path_4_p_0(TransformPred_5, LaterPath_11, Disj0_48, &MaybeDisj_49);
                switch (MR_tag((MR_Word) MaybeDisj_49)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                  case (MR_Integer) 2:
                    *MaybeGoal_8 = MaybeDisj_49;
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Word Disj_50 = ((MR_Word) ((MR_hl_field(1, MaybeDisj_49, 0))));
                      MR_Word Disjs_51;
                      MR_Word Var_87;
                      MR_Word GoalExpr_96;

                      mercury__list__det_replace_nth_4_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), Disjs0_46, DisjNum_47, ((MR_Box) (Disj_50)), &Disjs_51);
                      {
                        GoalExpr_96 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(3, GoalExpr_96, 0) = ((MR_Box) ((MR_Unsigned) 3U));
                        MR_hl_field(3, GoalExpr_96, 1) = ((MR_Box) (Disjs_51));
                      }
                      {
                        Var_87 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(0, Var_87, 0) = ((MR_Box) (GoalExpr_96));
                        MR_hl_field(0, Var_87, 1) = ((MR_Box) (GoalInfo0_13));
                      }
                      {
                        MR_Word base;
                        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                        *MaybeGoal_8 = base;
                        MR_hl_field(1, base, 0) = ((MR_Box) (Var_87));
                      }
                    }
                    break;
                }
              }
              else
                *MaybeGoal_8 = (MR_Word) ((MR_Unsigned) 0U);
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word Var_53 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_12, 1))));
              MR_Word CanFail_54 = ((MR_Unsigned) ((MR_hl_field(3, GoalExpr0_12, 2))) & (MR_Integer) 1);
              MR_Word Cases0_55 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_12, 3))));
              MR_Integer CaseNum_56;
              MR_Word Case0_58;
              MR_Word TypeCtorInfo_141_141;
              MR_Box conv4_Case0_58;

              succeeded = ((((MR_tag((MR_Word) FirstStep_10)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, FirstStep_10, 0)))) == (MR_Integer) 0)));
              if (succeeded)
              {
                CaseNum_56 = ((MR_Integer) ((MR_hl_field(3, FirstStep_10, 1))));
                TypeCtorInfo_141_141 = (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0);
                succeeded = mercury__list__index1_3_p_0(TypeCtorInfo_141_141, Cases0_55, CaseNum_56, &conv4_Case0_58);
                if (succeeded)
                {
                  Case0_58 = ((MR_Word) (conv4_Case0_58));
                  succeeded = MR_TRUE;
                }
              }
              if (succeeded)
              {
                MR_Word CaseGoal0_59 = ((MR_Word) ((MR_hl_field(0, Case0_58, 2))));
                MR_Word MaybeCaseGoal_60;

                hlds__goal_transform__maybe_transform_goal_at_goal_path_4_p_0(TransformPred_5, LaterPath_11, CaseGoal0_59, &MaybeCaseGoal_60);
                switch (MR_tag((MR_Word) MaybeCaseGoal_60)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                  case (MR_Integer) 2:
                    *MaybeGoal_8 = MaybeCaseGoal_60;
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Word CaseGoal_61 = ((MR_Word) ((MR_hl_field(1, MaybeCaseGoal_60, 0))));
                      MR_Word Case_62;
                      MR_Word Cases_63;
                      MR_Word Var_88;
                      MR_Word GoalExpr_101;
                      MR_Word Var_134 = ((MR_Word) ((MR_hl_field(0, Case0_58, 0))));
                      MR_Word Var_135 = ((MR_Word) ((MR_hl_field(0, Case0_58, 1))));

                      {
                        Case_62 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(0, Case_62, 0) = ((MR_Box) (Var_134));
                        MR_hl_field(0, Case_62, 1) = ((MR_Box) (Var_135));
                        MR_hl_field(0, Case_62, 2) = ((MR_Box) (CaseGoal_61));
                      }
                      mercury__list__det_replace_nth_4_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0), Cases0_55, CaseNum_56, ((MR_Box) (Case_62)), &Cases_63);
                      {
                        GoalExpr_101 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(3, GoalExpr_101, 0) = ((MR_Box) ((MR_Unsigned) 4U));
                        MR_hl_field(3, GoalExpr_101, 1) = ((MR_Box) (Var_53));
                        MR_hl_field(3, GoalExpr_101, 2) = (MR_Box) ((MR_Unsigned) (CanFail_54));
                        MR_hl_field(3, GoalExpr_101, 3) = ((MR_Box) (Cases_63));
                      }
                      {
                        Var_88 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(0, Var_88, 0) = ((MR_Box) (GoalExpr_101));
                        MR_hl_field(0, Var_88, 1) = ((MR_Box) (GoalInfo0_13));
                      }
                      {
                        MR_Word base;
                        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                        *MaybeGoal_8 = base;
                        MR_hl_field(1, base, 0) = ((MR_Box) (Var_88));
                      }
                    }
                    break;
                }
              }
              else
                *MaybeGoal_8 = (MR_Word) ((MR_Unsigned) 0U);
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word Reason_69 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_12, 1))));
              MR_Word SubGoal0_122 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_12, 2))));

              succeeded = ((((MR_tag((MR_Word) FirstStep_10)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, FirstStep_10, 0)))) == (MR_Integer) 1)));
              if (succeeded)
              {
                MR_Word MaybeSubGoal_116;

                hlds__goal_transform__maybe_transform_goal_at_goal_path_4_p_0(TransformPred_5, LaterPath_11, SubGoal0_122, &MaybeSubGoal_116);
                switch (MR_tag((MR_Word) MaybeSubGoal_116)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                  case (MR_Integer) 2:
                    *MaybeGoal_8 = MaybeSubGoal_116;
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Word Var_90;
                      MR_Word GoalExpr_111;
                      MR_Word SubGoal_112 = ((MR_Word) ((MR_hl_field(1, MaybeSubGoal_116, 0))));

                      {
                        GoalExpr_111 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(3, GoalExpr_111, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                        MR_hl_field(3, GoalExpr_111, 1) = ((MR_Box) (Reason_69));
                        MR_hl_field(3, GoalExpr_111, 2) = ((MR_Box) (SubGoal_112));
                      }
                      {
                        Var_90 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(0, Var_90, 0) = ((MR_Box) (GoalExpr_111));
                        MR_hl_field(0, Var_90, 1) = ((MR_Box) (GoalInfo0_13));
                      }
                      {
                        MR_Word base;
                        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                        *MaybeGoal_8 = base;
                        MR_hl_field(1, base, 0) = ((MR_Box) (Var_90));
                      }
                    }
                    break;
                }
              }
              else
                *MaybeGoal_8 = (MR_Word) ((MR_Unsigned) 0U);
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word ExistVars_72 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_12, 1))));
              MR_Word Cond0_73 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_12, 2))));
              MR_Word Then0_74 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_12, 3))));
              MR_Word Else0_75 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_12, 4))));

              succeeded = (FirstStep_10 == (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                MR_Word MaybeCond_76;

                hlds__goal_transform__maybe_transform_goal_at_goal_path_4_p_0(TransformPred_5, LaterPath_11, Cond0_73, &MaybeCond_76);
                switch (MR_tag((MR_Word) MaybeCond_76)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                  case (MR_Integer) 2:
                    *MaybeGoal_8 = MaybeCond_76;
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Word Cond_77 = ((MR_Word) ((MR_hl_field(1, MaybeCond_76, 0))));
                      MR_Word Var_91;
                      MR_Word GoalExpr_125;

                      {
                        GoalExpr_125 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(3, GoalExpr_125, 0) = ((MR_Box) ((MR_Unsigned) 6U));
                        MR_hl_field(3, GoalExpr_125, 1) = ((MR_Box) (ExistVars_72));
                        MR_hl_field(3, GoalExpr_125, 2) = ((MR_Box) (Cond_77));
                        MR_hl_field(3, GoalExpr_125, 3) = ((MR_Box) (Then0_74));
                        MR_hl_field(3, GoalExpr_125, 4) = ((MR_Box) (Else0_75));
                      }
                      {
                        Var_91 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(0, Var_91, 0) = ((MR_Box) (GoalExpr_125));
                        MR_hl_field(0, Var_91, 1) = ((MR_Box) (GoalInfo0_13));
                      }
                      {
                        MR_Word base;
                        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                        *MaybeGoal_8 = base;
                        MR_hl_field(1, base, 0) = ((MR_Box) (Var_91));
                      }
                    }
                    break;
                }
              }
              else
              {
                succeeded = (FirstStep_10 == (MR_Word) ((MR_Unsigned) 4U));
                if (succeeded)
                {
                  MR_Word MaybeThen_79;

                  hlds__goal_transform__maybe_transform_goal_at_goal_path_4_p_0(TransformPred_5, LaterPath_11, Then0_74, &MaybeThen_79);
                  switch (MR_tag((MR_Word) MaybeThen_79)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                    case (MR_Integer) 2:
                      *MaybeGoal_8 = MaybeThen_79;
                      break;
                    case (MR_Integer) 1:
                      {
                        MR_Word Then_80 = ((MR_Word) ((MR_hl_field(1, MaybeThen_79, 0))));
                        MR_Word Var_92;
                        MR_Word GoalExpr_128;

                        {
                          GoalExpr_128 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(3, GoalExpr_128, 0) = ((MR_Box) ((MR_Unsigned) 6U));
                          MR_hl_field(3, GoalExpr_128, 1) = ((MR_Box) (ExistVars_72));
                          MR_hl_field(3, GoalExpr_128, 2) = ((MR_Box) (Cond0_73));
                          MR_hl_field(3, GoalExpr_128, 3) = ((MR_Box) (Then_80));
                          MR_hl_field(3, GoalExpr_128, 4) = ((MR_Box) (Else0_75));
                        }
                        {
                          Var_92 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(0, Var_92, 0) = ((MR_Box) (GoalExpr_128));
                          MR_hl_field(0, Var_92, 1) = ((MR_Box) (GoalInfo0_13));
                        }
                        {
                          MR_Word base;
                          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                          *MaybeGoal_8 = base;
                          MR_hl_field(1, base, 0) = ((MR_Box) (Var_92));
                        }
                      }
                      break;
                  }
                }
                else
                {
                  succeeded = (FirstStep_10 == (MR_Word) ((MR_Unsigned) 8U));
                  if (succeeded)
                  {
                    MR_Word MaybeElse_82;

                    hlds__goal_transform__maybe_transform_goal_at_goal_path_4_p_0(TransformPred_5, LaterPath_11, Else0_75, &MaybeElse_82);
                    switch (MR_tag((MR_Word) MaybeElse_82)) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                      case (MR_Integer) 2:
                        *MaybeGoal_8 = MaybeElse_82;
                        break;
                      case (MR_Integer) 1:
                        {
                          MR_Word Else_83 = ((MR_Word) ((MR_hl_field(1, MaybeElse_82, 0))));
                          MR_Word Var_93;
                          MR_Word GoalExpr_131;

                          {
                            GoalExpr_131 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(3, GoalExpr_131, 0) = ((MR_Box) ((MR_Unsigned) 6U));
                            MR_hl_field(3, GoalExpr_131, 1) = ((MR_Box) (ExistVars_72));
                            MR_hl_field(3, GoalExpr_131, 2) = ((MR_Box) (Cond0_73));
                            MR_hl_field(3, GoalExpr_131, 3) = ((MR_Box) (Then0_74));
                            MR_hl_field(3, GoalExpr_131, 4) = ((MR_Box) (Else_83));
                          }
                          {
                            Var_93 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                            MR_hl_field(0, Var_93, 0) = ((MR_Box) (GoalExpr_131));
                            MR_hl_field(0, Var_93, 1) = ((MR_Box) (GoalInfo0_13));
                          }
                          {
                            MR_Word base;
                            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                            *MaybeGoal_8 = base;
                            MR_hl_field(1, base, 0) = ((MR_Box) (Var_93));
                          }
                        }
                        break;
                    }
                  }
                  else
                    *MaybeGoal_8 = (MR_Word) ((MR_Unsigned) 0U);
                }
              }
            }
            break;
          case (MR_Integer) 7:
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.goal_transform.maybe_transform_goal_at_goal_path\'/4", (MR_String) "shorthand");
              return;
            }
            break;
        }
        break;
    }
  }
}

static void MR_CALL 
hlds__goal_transform__maybe_error_to_maybe_transformed_goal_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2)
{
  if (((MR_tag((MR_Word) HeadVar__1_1)) == (MR_Integer) 1))
  {
    MR_String Error_4 = ((MR_String) ((MR_hl_field(1, HeadVar__1_1, 0))));

    {
      MR_Word base;
      base = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__2_2 = base;
      MR_hl_field(2, base, 0) = ((MR_Box) (Error_4));
    }
  }
  else
  {
    MR_Word Goal_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 0))));

    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__2_2 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Goal_3));
    }
  }
}

static MR_Box MR_CALL 
hlds__goal_transform__maybe_strip_equality_pretest_1_f_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv3_Case_4;

  conv3_Case_4 = hlds__goal_transform__maybe_strip_equality_pretest_case_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv3_Case_4));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
hlds__goal_transform__maybe_strip_equality_pretest_1_f_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv2_Goal_4;

  conv2_Goal_4 = hlds__goal_transform__maybe_strip_equality_pretest_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv2_Goal_4));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
hlds__goal_transform__maybe_strip_equality_pretest_1_f_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv1_Goal_4;

  conv1_Goal_4 = hlds__goal_transform__maybe_strip_equality_pretest_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv1_Goal_4));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
hlds__goal_transform__maybe_strip_equality_pretest_1_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_Goal_4;

  conv0_Goal_4 = hlds__goal_transform__maybe_strip_equality_pretest_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_Goal_4));
  return wrapper_arg_2;
}

MR_Word MR_CALL 
hlds__goal_transform__maybe_strip_equality_pretest_1_f_0(
  MR_Word Goal0_3)
{
  MR_bool succeeded;
  MR_Word Goal_4;
  MR_Word GoalExpr0_5 = ((MR_Word) ((MR_hl_field(0, Goal0_3, 0))));
  MR_Word GoalInfo0_6 = ((MR_Word) ((MR_hl_field(0, Goal0_3, 1))));

  switch (MR_tag((MR_Word) GoalExpr0_5)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word SubGoal0_47 = (MR_Word) ((MR_Word) (GoalExpr0_5));
        MR_Word SubGoal_48;
        MR_Word GoalExpr_79;

        SubGoal_48 = hlds__goal_transform__maybe_strip_equality_pretest_1_f_0(SubGoal0_47);
        GoalExpr_79 = (MR_Word) ((MR_Word) (SubGoal_48));
        {
          Goal_4 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Goal_4, 0) = ((MR_Box) (GoalExpr_79));
          MR_hl_field(0, Goal_4, 1) = ((MR_Box) (GoalInfo0_6));
        }
      }
      break;
    case (MR_Integer) 1:
    case (MR_Integer) 2:
      Goal_4 = Goal0_3;
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, GoalExpr0_5, 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
        case (MR_Integer) 1:
          Goal_4 = Goal0_3;
          break;
        case (MR_Integer) 2:
          {
            MR_Word ConjType_30 = ((MR_Unsigned) ((MR_hl_field(3, GoalExpr0_5, 1))) & (MR_Integer) 1);
            MR_Word Goals0_31 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_5, 2))));
            MR_Word Goals_32;
            MR_Word GoalExpr_33;

            Goals_32 = mercury__list__map_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&hlds__goal_transform_scalar_common_3[7]), Goals0_31);
            {
              GoalExpr_33 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, GoalExpr_33, 0) = ((MR_Box) ((MR_Unsigned) 2U));
              MR_hl_field(3, GoalExpr_33, 1) = (MR_Box) ((MR_Unsigned) (ConjType_30));
              MR_hl_field(3, GoalExpr_33, 2) = ((MR_Box) (Goals_32));
            }
            {
              Goal_4 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Goal_4, 0) = ((MR_Box) (GoalExpr_33));
              MR_hl_field(0, Goal_4, 1) = ((MR_Box) (GoalInfo0_6));
            }
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word SubGoals0_34 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_5, 1))));
            MR_Word SubGoals_35;
            MR_Word GoalExpr_74;

            SubGoals_35 = mercury__list__map_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&hlds__goal_transform_scalar_common_3[8]), SubGoals0_34);
            {
              GoalExpr_74 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, GoalExpr_74, 0) = ((MR_Box) ((MR_Unsigned) 3U));
              MR_hl_field(3, GoalExpr_74, 1) = ((MR_Box) (SubGoals_35));
            }
            {
              Goal_4 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Goal_4, 0) = ((MR_Box) (GoalExpr_74));
              MR_hl_field(0, Goal_4, 1) = ((MR_Box) (GoalInfo0_6));
            }
          }
          break;
        case (MR_Integer) 4:
          {
            MR_Word Var_36 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_5, 1))));
            MR_Word CanFail_37 = ((MR_Unsigned) ((MR_hl_field(3, GoalExpr0_5, 2))) & (MR_Integer) 1);
            MR_Word Cases0_38 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_5, 3))));
            MR_Word Cases_39;
            MR_Word GoalExpr_75;

            Cases_39 = mercury__list__map_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0), (MR_Word) (&hlds__goal_transform_scalar_common_3[10]), Cases0_38);
            {
              GoalExpr_75 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, GoalExpr_75, 0) = ((MR_Box) ((MR_Unsigned) 4U));
              MR_hl_field(3, GoalExpr_75, 1) = ((MR_Box) (Var_36));
              MR_hl_field(3, GoalExpr_75, 2) = (MR_Box) ((MR_Unsigned) (CanFail_37));
              MR_hl_field(3, GoalExpr_75, 3) = ((MR_Box) (Cases_39));
            }
            {
              Goal_4 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Goal_4, 0) = ((MR_Box) (GoalExpr_75));
              MR_hl_field(0, Goal_4, 1) = ((MR_Box) (GoalInfo0_6));
            }
          }
          break;
        case (MR_Integer) 5:
          {
            MR_Word Reason_49 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_5, 1))));
            MR_Word SubGoal0_85 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_5, 2))));
            MR_Word FGT_51;

            succeeded = ((((MR_tag((MR_Word) Reason_49)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Reason_49, 0)))) == (MR_Integer) 6)));
            if (succeeded)
            {
              FGT_51 = ((MR_Unsigned) ((MR_hl_field(3, Reason_49, 2))) & (MR_Integer) 3);
              switch (FGT_51) {
                default:
                  succeeded = MR_FALSE;
                  break;
                case (MR_Integer) 1:
                  succeeded = MR_TRUE;
                  break;
                case (MR_Integer) 2:
                  succeeded = MR_TRUE;
                  break;
              }
            }
            if (succeeded)
              Goal_4 = Goal0_3;
            else
            {
              MR_Word GoalExpr_80;
              MR_Word SubGoal_81;

              SubGoal_81 = hlds__goal_transform__maybe_strip_equality_pretest_1_f_0(SubGoal0_85);
              {
                GoalExpr_80 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, GoalExpr_80, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                MR_hl_field(3, GoalExpr_80, 1) = ((MR_Box) (Reason_49));
                MR_hl_field(3, GoalExpr_80, 2) = ((MR_Box) (SubGoal_81));
              }
              {
                Goal_4 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Goal_4, 0) = ((MR_Box) (GoalExpr_80));
                MR_hl_field(0, Goal_4, 1) = ((MR_Box) (GoalInfo0_6));
              }
            }
          }
          break;
        case (MR_Integer) 6:
          {
            MR_Word Vars_40 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_5, 1))));
            MR_Word Cond0_41 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_5, 2))));
            MR_Word Then0_42 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_5, 3))));
            MR_Word Else0_43 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_5, 4))));

            succeeded = hlds__hlds_goal__goal_info_has_feature_2_p_0(GoalInfo0_6, (MR_Integer) 22);
            if (succeeded)
              Goal_4 = Else0_43;
            else
            {
              MR_Word Cond_44;
              MR_Word Then_45;
              MR_Word Else_46;
              MR_Word GoalExpr_76;

              Cond_44 = hlds__goal_transform__maybe_strip_equality_pretest_1_f_0(Cond0_41);
              Then_45 = hlds__goal_transform__maybe_strip_equality_pretest_1_f_0(Then0_42);
              Else_46 = hlds__goal_transform__maybe_strip_equality_pretest_1_f_0(Else0_43);
              {
                GoalExpr_76 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, GoalExpr_76, 0) = ((MR_Box) ((MR_Unsigned) 6U));
                MR_hl_field(3, GoalExpr_76, 1) = ((MR_Box) (Vars_40));
                MR_hl_field(3, GoalExpr_76, 2) = ((MR_Box) (Cond_44));
                MR_hl_field(3, GoalExpr_76, 3) = ((MR_Box) (Then_45));
                MR_hl_field(3, GoalExpr_76, 4) = ((MR_Box) (Else_46));
              }
              {
                Goal_4 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Goal_4, 0) = ((MR_Box) (GoalExpr_76));
                MR_hl_field(0, Goal_4, 1) = ((MR_Box) (GoalInfo0_6));
              }
            }
          }
          break;
        case (MR_Integer) 7:
          {
            MR_Word ShortHand0_52 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_5, 1))));

            switch (MR_tag((MR_Word) ShortHand0_52)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                mercury__require__unexpected_2_p_0((MR_String) "function \140hlds.goal_transform.maybe_strip_equality_pretest\'/1", (MR_String) "bi_implication");
                break;
              case (MR_Integer) 1:
                {
                  MR_Word GoalType_53 = ((MR_Unsigned) ((MR_hl_field(1, ShortHand0_52, 0))) & (MR_Integer) 3);
                  MR_Word Outer_54 = ((MR_Word) ((MR_hl_field(1, ShortHand0_52, 1))));
                  MR_Word Inner_55 = ((MR_Word) ((MR_hl_field(1, ShortHand0_52, 2))));
                  MR_Word MaybeOutputVars_56 = ((MR_Word) ((MR_hl_field(1, ShortHand0_52, 3))));
                  MR_Word MainGoal0_57 = ((MR_Word) ((MR_hl_field(1, ShortHand0_52, 4))));
                  MR_Word OrElseGoals0_58 = ((MR_Word) ((MR_hl_field(1, ShortHand0_52, 5))));
                  MR_Word OrElseInners_59 = ((MR_Word) ((MR_hl_field(1, ShortHand0_52, 6))));
                  MR_Word MainGoal_60;
                  MR_Word OrElseGoals_61;
                  MR_Word ShortHand_62;
                  MR_Word GoalExpr_87;

                  MainGoal_60 = hlds__goal_transform__maybe_strip_equality_pretest_1_f_0(MainGoal0_57);
                  OrElseGoals_61 = mercury__list__map_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&hlds__goal_transform_scalar_common_3[9]), OrElseGoals0_58);
                  {
                    ShortHand_62 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, ShortHand_62, 0) = (MR_Box) ((MR_Unsigned) (GoalType_53));
                    MR_hl_field(1, ShortHand_62, 1) = ((MR_Box) (Outer_54));
                    MR_hl_field(1, ShortHand_62, 2) = ((MR_Box) (Inner_55));
                    MR_hl_field(1, ShortHand_62, 3) = ((MR_Box) (MaybeOutputVars_56));
                    MR_hl_field(1, ShortHand_62, 4) = ((MR_Box) (MainGoal_60));
                    MR_hl_field(1, ShortHand_62, 5) = ((MR_Box) (OrElseGoals_61));
                    MR_hl_field(1, ShortHand_62, 6) = ((MR_Box) (OrElseInners_59));
                  }
                  {
                    GoalExpr_87 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(3, GoalExpr_87, 0) = ((MR_Box) ((MR_Unsigned) 7U));
                    MR_hl_field(3, GoalExpr_87, 1) = ((MR_Box) (ShortHand_62));
                  }
                  {
                    Goal_4 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(0, Goal_4, 0) = ((MR_Box) (GoalExpr_87));
                    MR_hl_field(0, Goal_4, 1) = ((MR_Box) (GoalInfo0_6));
                  }
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word MaybeIO_63 = ((MR_Word) ((MR_hl_field(2, ShortHand0_52, 0))));
                  MR_Word ResultVar_64 = ((MR_Word) ((MR_hl_field(2, ShortHand0_52, 1))));
                  MR_Word GoalExpr_88;
                  MR_Word SubGoal0_89 = ((MR_Word) ((MR_hl_field(2, ShortHand0_52, 2))));
                  MR_Word SubGoal_90;
                  MR_Word ShortHand_91;

                  SubGoal_90 = hlds__goal_transform__maybe_strip_equality_pretest_1_f_0(SubGoal0_89);
                  {
                    ShortHand_91 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(2, ShortHand_91, 0) = ((MR_Box) (MaybeIO_63));
                    MR_hl_field(2, ShortHand_91, 1) = ((MR_Box) (ResultVar_64));
                    MR_hl_field(2, ShortHand_91, 2) = ((MR_Box) (SubGoal_90));
                  }
                  {
                    GoalExpr_88 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(3, GoalExpr_88, 0) = ((MR_Box) ((MR_Unsigned) 7U));
                    MR_hl_field(3, GoalExpr_88, 1) = ((MR_Box) (ShortHand_91));
                  }
                  {
                    Goal_4 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(0, Goal_4, 0) = ((MR_Box) (GoalExpr_88));
                    MR_hl_field(0, Goal_4, 1) = ((MR_Box) (GoalInfo0_6));
                  }
                }
                break;
            }
          }
          break;
      }
      break;
  }
  return Goal_4;
}

void MR_CALL 
hlds__goal_transform__attach_features_to_all_goals_4_p_1(
  MR_Word Features_5,
  MR_Word InFromGroundTerm_6,
  MR_Word Goal0_7,
  MR_Word * Goal_8)
{
  hlds__goal_transform__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_97_108_108_95_103_111_97_108_115_95_95_91_50_93_95_49_4_p_1(Features_5, Goal0_7, Goal_8);
}

static void MR_CALL 
hlds__goal_transform__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_99_97_115_101_115_95_95_91_50_93_95_49_4_p_1_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__3_3;

  hlds__hlds_goal__goal_info_add_feature_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_HeadVar__3_3);
  *wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__3_3));
}

static void MR_CALL 
hlds__goal_transform__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_99_97_115_101_115_95_95_91_50_93_95_49_4_p_1(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4)
{
  MR_bool succeeded;

  if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word Case0_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));
    MR_Word Cases0_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 1))));
    MR_Word Case_11;
    MR_Word Cases_12;
    MR_Word MainConsId_13 = ((MR_Word) ((MR_hl_field(0, Case0_9, 0))));
    MR_Word OtherConsIds_14 = ((MR_Word) ((MR_hl_field(0, Case0_9, 1))));
    MR_Word Goal0_15 = ((MR_Word) ((MR_hl_field(0, Case0_9, 2))));
    MR_Word Goal_16;
    MR_Word GoalExpr0_17 = ((MR_Word) ((MR_hl_field(0, Goal0_15, 0))));
    MR_Word GoalInfo0_18 = ((MR_Word) ((MR_hl_field(0, Goal0_15, 1))));
    MR_Word GoalExpr_19;
    MR_Word GoalInfo_20;
    MR_Box conv1_GoalInfo_20;

    switch (MR_tag((MR_Word) GoalExpr0_17)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word SubGoal0_61 = (MR_Word) ((MR_Word) (GoalExpr0_17));
          MR_Word SubGoal_62;

          hlds__goal_transform__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_97_108_108_95_103_111_97_108_115_95_95_91_50_93_95_49_4_p_1(HeadVar__1_1, SubGoal0_61, &SubGoal_62);
          GoalExpr_19 = (MR_Word) ((MR_Word) (SubGoal_62));
        }
        break;
      case (MR_Integer) 1:
      case (MR_Integer) 2:
        GoalExpr_19 = GoalExpr0_17;
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, GoalExpr0_17, 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 1:
            GoalExpr_19 = GoalExpr0_17;
            break;
          case (MR_Integer) 2:
            {
              MR_Word ConjType_47 = ((MR_Unsigned) ((MR_hl_field(3, GoalExpr0_17, 1))) & (MR_Integer) 1);
              MR_Word Goals0_48 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_17, 2))));
              MR_Word Goals_49;

              hlds__goal_transform__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_103_111_97_108_115_95_95_91_50_93_95_49_4_p_1(HeadVar__1_1, Goals0_48, &Goals_49);
              {
                GoalExpr_19 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, GoalExpr_19, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                MR_hl_field(3, GoalExpr_19, 1) = (MR_Box) ((MR_Unsigned) (ConjType_47));
                MR_hl_field(3, GoalExpr_19, 2) = ((MR_Box) (Goals_49));
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word Goals0_83 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_17, 1))));
              MR_Word Goals_84;

              hlds__goal_transform__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_103_111_97_108_115_95_95_91_50_93_95_49_4_p_1(HeadVar__1_1, Goals0_83, &Goals_84);
              {
                GoalExpr_19 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, GoalExpr_19, 0) = ((MR_Box) ((MR_Unsigned) 3U));
                MR_hl_field(3, GoalExpr_19, 1) = ((MR_Box) (Goals_84));
              }
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word Var_50 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_17, 1))));
              MR_Word CanFail_51 = ((MR_Unsigned) ((MR_hl_field(3, GoalExpr0_17, 2))) & (MR_Integer) 1);
              MR_Word Cases0_52 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_17, 3))));
              MR_Word Cases_53;

              hlds__goal_transform__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_99_97_115_101_115_95_95_91_50_93_95_49_4_p_1(HeadVar__1_1, Cases0_52, &Cases_53);
              {
                GoalExpr_19 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, GoalExpr_19, 0) = ((MR_Box) ((MR_Unsigned) 4U));
                MR_hl_field(3, GoalExpr_19, 1) = ((MR_Box) (Var_50));
                MR_hl_field(3, GoalExpr_19, 2) = (MR_Box) ((MR_Unsigned) (CanFail_51));
                MR_hl_field(3, GoalExpr_19, 3) = ((MR_Box) (Cases_53));
              }
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word Reason_63 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_17, 1))));
              MR_Word SubGoal0_85 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_17, 2))));
              MR_Word SubGoal_86;

              succeeded = ((((MR_tag((MR_Word) Reason_63)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Reason_63, 0)))) == (MR_Integer) 6)));
              if (succeeded)
                SubGoal_86 = SubGoal0_85;
              else
                hlds__goal_transform__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_97_108_108_95_103_111_97_108_115_95_95_91_50_93_95_49_4_p_1(HeadVar__1_1, SubGoal0_85, &SubGoal_86);
              {
                GoalExpr_19 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, GoalExpr_19, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                MR_hl_field(3, GoalExpr_19, 1) = ((MR_Box) (Reason_63));
                MR_hl_field(3, GoalExpr_19, 2) = ((MR_Box) (SubGoal_86));
              }
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word Vars_54 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_17, 1))));
              MR_Word Cond0_55 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_17, 2))));
              MR_Word Then0_56 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_17, 3))));
              MR_Word Else0_57 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_17, 4))));
              MR_Word Cond_58;
              MR_Word Then_59;
              MR_Word Else_60;

              hlds__goal_transform__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_97_108_108_95_103_111_97_108_115_95_95_91_50_93_95_49_4_p_1(HeadVar__1_1, Cond0_55, &Cond_58);
              hlds__goal_transform__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_97_108_108_95_103_111_97_108_115_95_95_91_50_93_95_49_4_p_1(HeadVar__1_1, Then0_56, &Then_59);
              hlds__goal_transform__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_97_108_108_95_103_111_97_108_115_95_95_91_50_93_95_49_4_p_1(HeadVar__1_1, Else0_57, &Else_60);
              {
                GoalExpr_19 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, GoalExpr_19, 0) = ((MR_Box) ((MR_Unsigned) 6U));
                MR_hl_field(3, GoalExpr_19, 1) = ((MR_Box) (Vars_54));
                MR_hl_field(3, GoalExpr_19, 2) = ((MR_Box) (Cond_58));
                MR_hl_field(3, GoalExpr_19, 3) = ((MR_Box) (Then_59));
                MR_hl_field(3, GoalExpr_19, 4) = ((MR_Box) (Else_60));
              }
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Word ShortHand0_66 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_17, 1))));
              MR_Word ShortHand_76;

              switch (MR_tag((MR_Word) ShortHand0_66)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Word GoalA0_79 = ((MR_Word) ((MR_hl_field(0, ShortHand0_66, 0))));
                    MR_Word GoalB0_80 = ((MR_Word) ((MR_hl_field(0, ShortHand0_66, 1))));
                    MR_Word GoalA_81;
                    MR_Word GoalB_82;

                    hlds__goal_transform__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_97_108_108_95_103_111_97_108_115_95_95_91_50_93_95_49_4_p_1(HeadVar__1_1, GoalA0_79, &GoalA_81);
                    hlds__goal_transform__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_97_108_108_95_103_111_97_108_115_95_95_91_50_93_95_49_4_p_1(HeadVar__1_1, GoalB0_80, &GoalB_82);
                    {
                      ShortHand_76 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(0, ShortHand_76, 0) = ((MR_Box) (GoalA_81));
                      MR_hl_field(0, ShortHand_76, 1) = ((MR_Box) (GoalB_82));
                    }
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word GoalType_67 = ((MR_Unsigned) ((MR_hl_field(1, ShortHand0_66, 0))) & (MR_Integer) 3);
                    MR_Word Outer_68 = ((MR_Word) ((MR_hl_field(1, ShortHand0_66, 1))));
                    MR_Word Inner_69 = ((MR_Word) ((MR_hl_field(1, ShortHand0_66, 2))));
                    MR_Word MaybeOutputVars_70 = ((MR_Word) ((MR_hl_field(1, ShortHand0_66, 3))));
                    MR_Word MainGoal0_71 = ((MR_Word) ((MR_hl_field(1, ShortHand0_66, 4))));
                    MR_Word OrElseGoals0_72 = ((MR_Word) ((MR_hl_field(1, ShortHand0_66, 5))));
                    MR_Word OrElseInners_73 = ((MR_Word) ((MR_hl_field(1, ShortHand0_66, 6))));
                    MR_Word MainGoal_74;
                    MR_Word OrElseGoals_75;

                    hlds__goal_transform__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_97_108_108_95_103_111_97_108_115_95_95_91_50_93_95_49_4_p_1(HeadVar__1_1, MainGoal0_71, &MainGoal_74);
                    hlds__goal_transform__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_103_111_97_108_115_95_95_91_50_93_95_49_4_p_1(HeadVar__1_1, OrElseGoals0_72, &OrElseGoals_75);
                    {
                      ShortHand_76 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, ShortHand_76, 0) = (MR_Box) ((MR_Unsigned) (GoalType_67));
                      MR_hl_field(1, ShortHand_76, 1) = ((MR_Box) (Outer_68));
                      MR_hl_field(1, ShortHand_76, 2) = ((MR_Box) (Inner_69));
                      MR_hl_field(1, ShortHand_76, 3) = ((MR_Box) (MaybeOutputVars_70));
                      MR_hl_field(1, ShortHand_76, 4) = ((MR_Box) (MainGoal_74));
                      MR_hl_field(1, ShortHand_76, 5) = ((MR_Box) (OrElseGoals_75));
                      MR_hl_field(1, ShortHand_76, 6) = ((MR_Box) (OrElseInners_73));
                    }
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word MaybeIO_77 = ((MR_Word) ((MR_hl_field(2, ShortHand0_66, 0))));
                    MR_Word ResultVar_78 = ((MR_Word) ((MR_hl_field(2, ShortHand0_66, 1))));
                    MR_Word SubGoal0_87 = ((MR_Word) ((MR_hl_field(2, ShortHand0_66, 2))));
                    MR_Word SubGoal_88;

                    hlds__goal_transform__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_97_108_108_95_103_111_97_108_115_95_95_91_50_93_95_49_4_p_1(HeadVar__1_1, SubGoal0_87, &SubGoal_88);
                    {
                      ShortHand_76 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(2, ShortHand_76, 0) = ((MR_Box) (MaybeIO_77));
                      MR_hl_field(2, ShortHand_76, 1) = ((MR_Box) (ResultVar_78));
                      MR_hl_field(2, ShortHand_76, 2) = ((MR_Box) (SubGoal_88));
                    }
                  }
                  break;
              }
              {
                GoalExpr_19 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, GoalExpr_19, 0) = ((MR_Box) ((MR_Unsigned) 7U));
                MR_hl_field(3, GoalExpr_19, 1) = ((MR_Box) (ShortHand_76));
              }
            }
            break;
        }
        break;
    }
    mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_markers__hlds__hlds_markers__type_ctor_info_goal_feature_0), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_info_0), (MR_Word) (&hlds__goal_transform_scalar_common_3[6]), HeadVar__1_1, ((MR_Box) (GoalInfo0_18)), &conv1_GoalInfo_20);
    GoalInfo_20 = ((MR_Word) (conv1_GoalInfo_20));
    {
      Goal_16 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Goal_16, 0) = ((MR_Box) (GoalExpr_19));
      MR_hl_field(0, Goal_16, 1) = ((MR_Box) (GoalInfo_20));
    }
    {
      Case_11 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Case_11, 0) = ((MR_Box) (MainConsId_13));
      MR_hl_field(0, Case_11, 1) = ((MR_Box) (OtherConsIds_14));
      MR_hl_field(0, Case_11, 2) = ((MR_Box) (Goal_16));
    }
    hlds__goal_transform__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_99_97_115_101_115_95_95_91_50_93_95_49_4_p_1(HeadVar__1_1, Cases0_10, &Cases_12);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__4_4 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Case_11));
      MR_hl_field(1, base, 1) = ((MR_Box) (Cases_12));
    }
  }
}

static void MR_CALL 
hlds__goal_transform__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_103_111_97_108_115_95_95_91_50_93_95_49_4_p_1_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__3_3;

  hlds__hlds_goal__goal_info_add_feature_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_HeadVar__3_3);
  *wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__3_3));
}

static void MR_CALL 
hlds__goal_transform__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_103_111_97_108_115_95_95_91_50_93_95_49_4_p_1(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4)
{
  MR_bool succeeded;

  if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word Goal0_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));
    MR_Word Goals0_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 1))));
    MR_Word Goal_11;
    MR_Word Goals_12;
    MR_Word GoalExpr0_13 = ((MR_Word) ((MR_hl_field(0, Goal0_9, 0))));
    MR_Word GoalInfo0_14 = ((MR_Word) ((MR_hl_field(0, Goal0_9, 1))));
    MR_Word GoalExpr_15;
    MR_Word GoalInfo_16;
    MR_Box conv1_GoalInfo_16;

    switch (MR_tag((MR_Word) GoalExpr0_13)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word SubGoal0_57 = (MR_Word) ((MR_Word) (GoalExpr0_13));
          MR_Word SubGoal_58;

          hlds__goal_transform__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_97_108_108_95_103_111_97_108_115_95_95_91_50_93_95_49_4_p_1(HeadVar__1_1, SubGoal0_57, &SubGoal_58);
          GoalExpr_15 = (MR_Word) ((MR_Word) (SubGoal_58));
        }
        break;
      case (MR_Integer) 1:
      case (MR_Integer) 2:
        GoalExpr_15 = GoalExpr0_13;
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, GoalExpr0_13, 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 1:
            GoalExpr_15 = GoalExpr0_13;
            break;
          case (MR_Integer) 2:
            {
              MR_Word ConjType_43 = ((MR_Unsigned) ((MR_hl_field(3, GoalExpr0_13, 1))) & (MR_Integer) 1);
              MR_Word Goals0_44 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_13, 2))));
              MR_Word Goals_45;

              hlds__goal_transform__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_103_111_97_108_115_95_95_91_50_93_95_49_4_p_1(HeadVar__1_1, Goals0_44, &Goals_45);
              {
                GoalExpr_15 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, GoalExpr_15, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                MR_hl_field(3, GoalExpr_15, 1) = (MR_Box) ((MR_Unsigned) (ConjType_43));
                MR_hl_field(3, GoalExpr_15, 2) = ((MR_Box) (Goals_45));
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word Goals0_79 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_13, 1))));
              MR_Word Goals_80;

              hlds__goal_transform__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_103_111_97_108_115_95_95_91_50_93_95_49_4_p_1(HeadVar__1_1, Goals0_79, &Goals_80);
              {
                GoalExpr_15 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, GoalExpr_15, 0) = ((MR_Box) ((MR_Unsigned) 3U));
                MR_hl_field(3, GoalExpr_15, 1) = ((MR_Box) (Goals_80));
              }
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word Var_46 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_13, 1))));
              MR_Word CanFail_47 = ((MR_Unsigned) ((MR_hl_field(3, GoalExpr0_13, 2))) & (MR_Integer) 1);
              MR_Word Cases0_48 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_13, 3))));
              MR_Word Cases_49;

              hlds__goal_transform__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_99_97_115_101_115_95_95_91_50_93_95_49_4_p_1(HeadVar__1_1, Cases0_48, &Cases_49);
              {
                GoalExpr_15 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, GoalExpr_15, 0) = ((MR_Box) ((MR_Unsigned) 4U));
                MR_hl_field(3, GoalExpr_15, 1) = ((MR_Box) (Var_46));
                MR_hl_field(3, GoalExpr_15, 2) = (MR_Box) ((MR_Unsigned) (CanFail_47));
                MR_hl_field(3, GoalExpr_15, 3) = ((MR_Box) (Cases_49));
              }
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word Reason_59 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_13, 1))));
              MR_Word SubGoal0_81 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_13, 2))));
              MR_Word SubGoal_82;

              succeeded = ((((MR_tag((MR_Word) Reason_59)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Reason_59, 0)))) == (MR_Integer) 6)));
              if (succeeded)
                SubGoal_82 = SubGoal0_81;
              else
                hlds__goal_transform__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_97_108_108_95_103_111_97_108_115_95_95_91_50_93_95_49_4_p_1(HeadVar__1_1, SubGoal0_81, &SubGoal_82);
              {
                GoalExpr_15 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, GoalExpr_15, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                MR_hl_field(3, GoalExpr_15, 1) = ((MR_Box) (Reason_59));
                MR_hl_field(3, GoalExpr_15, 2) = ((MR_Box) (SubGoal_82));
              }
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word Vars_50 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_13, 1))));
              MR_Word Cond0_51 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_13, 2))));
              MR_Word Then0_52 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_13, 3))));
              MR_Word Else0_53 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_13, 4))));
              MR_Word Cond_54;
              MR_Word Then_55;
              MR_Word Else_56;

              hlds__goal_transform__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_97_108_108_95_103_111_97_108_115_95_95_91_50_93_95_49_4_p_1(HeadVar__1_1, Cond0_51, &Cond_54);
              hlds__goal_transform__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_97_108_108_95_103_111_97_108_115_95_95_91_50_93_95_49_4_p_1(HeadVar__1_1, Then0_52, &Then_55);
              hlds__goal_transform__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_97_108_108_95_103_111_97_108_115_95_95_91_50_93_95_49_4_p_1(HeadVar__1_1, Else0_53, &Else_56);
              {
                GoalExpr_15 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, GoalExpr_15, 0) = ((MR_Box) ((MR_Unsigned) 6U));
                MR_hl_field(3, GoalExpr_15, 1) = ((MR_Box) (Vars_50));
                MR_hl_field(3, GoalExpr_15, 2) = ((MR_Box) (Cond_54));
                MR_hl_field(3, GoalExpr_15, 3) = ((MR_Box) (Then_55));
                MR_hl_field(3, GoalExpr_15, 4) = ((MR_Box) (Else_56));
              }
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Word ShortHand0_62 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_13, 1))));
              MR_Word ShortHand_72;

              switch (MR_tag((MR_Word) ShortHand0_62)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Word GoalA0_75 = ((MR_Word) ((MR_hl_field(0, ShortHand0_62, 0))));
                    MR_Word GoalB0_76 = ((MR_Word) ((MR_hl_field(0, ShortHand0_62, 1))));
                    MR_Word GoalA_77;
                    MR_Word GoalB_78;

                    hlds__goal_transform__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_97_108_108_95_103_111_97_108_115_95_95_91_50_93_95_49_4_p_1(HeadVar__1_1, GoalA0_75, &GoalA_77);
                    hlds__goal_transform__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_97_108_108_95_103_111_97_108_115_95_95_91_50_93_95_49_4_p_1(HeadVar__1_1, GoalB0_76, &GoalB_78);
                    {
                      ShortHand_72 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(0, ShortHand_72, 0) = ((MR_Box) (GoalA_77));
                      MR_hl_field(0, ShortHand_72, 1) = ((MR_Box) (GoalB_78));
                    }
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word GoalType_63 = ((MR_Unsigned) ((MR_hl_field(1, ShortHand0_62, 0))) & (MR_Integer) 3);
                    MR_Word Outer_64 = ((MR_Word) ((MR_hl_field(1, ShortHand0_62, 1))));
                    MR_Word Inner_65 = ((MR_Word) ((MR_hl_field(1, ShortHand0_62, 2))));
                    MR_Word MaybeOutputVars_66 = ((MR_Word) ((MR_hl_field(1, ShortHand0_62, 3))));
                    MR_Word MainGoal0_67 = ((MR_Word) ((MR_hl_field(1, ShortHand0_62, 4))));
                    MR_Word OrElseGoals0_68 = ((MR_Word) ((MR_hl_field(1, ShortHand0_62, 5))));
                    MR_Word OrElseInners_69 = ((MR_Word) ((MR_hl_field(1, ShortHand0_62, 6))));
                    MR_Word MainGoal_70;
                    MR_Word OrElseGoals_71;

                    hlds__goal_transform__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_97_108_108_95_103_111_97_108_115_95_95_91_50_93_95_49_4_p_1(HeadVar__1_1, MainGoal0_67, &MainGoal_70);
                    hlds__goal_transform__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_103_111_97_108_115_95_95_91_50_93_95_49_4_p_1(HeadVar__1_1, OrElseGoals0_68, &OrElseGoals_71);
                    {
                      ShortHand_72 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, ShortHand_72, 0) = (MR_Box) ((MR_Unsigned) (GoalType_63));
                      MR_hl_field(1, ShortHand_72, 1) = ((MR_Box) (Outer_64));
                      MR_hl_field(1, ShortHand_72, 2) = ((MR_Box) (Inner_65));
                      MR_hl_field(1, ShortHand_72, 3) = ((MR_Box) (MaybeOutputVars_66));
                      MR_hl_field(1, ShortHand_72, 4) = ((MR_Box) (MainGoal_70));
                      MR_hl_field(1, ShortHand_72, 5) = ((MR_Box) (OrElseGoals_71));
                      MR_hl_field(1, ShortHand_72, 6) = ((MR_Box) (OrElseInners_69));
                    }
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word MaybeIO_73 = ((MR_Word) ((MR_hl_field(2, ShortHand0_62, 0))));
                    MR_Word ResultVar_74 = ((MR_Word) ((MR_hl_field(2, ShortHand0_62, 1))));
                    MR_Word SubGoal0_83 = ((MR_Word) ((MR_hl_field(2, ShortHand0_62, 2))));
                    MR_Word SubGoal_84;

                    hlds__goal_transform__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_97_108_108_95_103_111_97_108_115_95_95_91_50_93_95_49_4_p_1(HeadVar__1_1, SubGoal0_83, &SubGoal_84);
                    {
                      ShortHand_72 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(2, ShortHand_72, 0) = ((MR_Box) (MaybeIO_73));
                      MR_hl_field(2, ShortHand_72, 1) = ((MR_Box) (ResultVar_74));
                      MR_hl_field(2, ShortHand_72, 2) = ((MR_Box) (SubGoal_84));
                    }
                  }
                  break;
              }
              {
                GoalExpr_15 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, GoalExpr_15, 0) = ((MR_Box) ((MR_Unsigned) 7U));
                MR_hl_field(3, GoalExpr_15, 1) = ((MR_Box) (ShortHand_72));
              }
            }
            break;
        }
        break;
    }
    mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_markers__hlds__hlds_markers__type_ctor_info_goal_feature_0), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_info_0), (MR_Word) (&hlds__goal_transform_scalar_common_3[5]), HeadVar__1_1, ((MR_Box) (GoalInfo0_14)), &conv1_GoalInfo_16);
    GoalInfo_16 = ((MR_Word) (conv1_GoalInfo_16));
    {
      Goal_11 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Goal_11, 0) = ((MR_Box) (GoalExpr_15));
      MR_hl_field(0, Goal_11, 1) = ((MR_Box) (GoalInfo_16));
    }
    hlds__goal_transform__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_103_111_97_108_115_95_95_91_50_93_95_49_4_p_1(HeadVar__1_1, Goals0_10, &Goals_12);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__4_4 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Goal_11));
      MR_hl_field(1, base, 1) = ((MR_Box) (Goals_12));
    }
  }
}

static void MR_CALL 
hlds__goal_transform__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_97_108_108_95_103_111_97_108_115_95_95_91_50_93_95_49_4_p_1_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__3_3;

  hlds__hlds_goal__goal_info_add_feature_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_HeadVar__3_3);
  *wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__3_3));
}

void MR_CALL 
hlds__goal_transform__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_97_108_108_95_103_111_97_108_115_95_95_91_50_93_95_49_4_p_1(
  MR_Word Features_5,
  MR_Word Goal0_7,
  MR_Word * Goal_8)
{
  MR_bool succeeded;
  MR_Word GoalExpr0_9 = ((MR_Word) ((MR_hl_field(0, Goal0_7, 0))));
  MR_Word GoalInfo0_10 = ((MR_Word) ((MR_hl_field(0, Goal0_7, 1))));
  MR_Word GoalExpr_11;
  MR_Word GoalInfo_12;
  MR_Box conv1_GoalInfo_12;

  switch (MR_tag((MR_Word) GoalExpr0_9)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word SubGoal0_56 = (MR_Word) ((MR_Word) (GoalExpr0_9));
        MR_Word SubGoal_57;

        hlds__goal_transform__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_97_108_108_95_103_111_97_108_115_95_95_91_50_93_95_49_4_p_1(Features_5, SubGoal0_56, &SubGoal_57);
        GoalExpr_11 = (MR_Word) ((MR_Word) (SubGoal_57));
      }
      break;
    case (MR_Integer) 1:
    case (MR_Integer) 2:
      GoalExpr_11 = GoalExpr0_9;
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, GoalExpr0_9, 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
        case (MR_Integer) 1:
          GoalExpr_11 = GoalExpr0_9;
          break;
        case (MR_Integer) 2:
          {
            MR_Word ConjType_42 = ((MR_Unsigned) ((MR_hl_field(3, GoalExpr0_9, 1))) & (MR_Integer) 1);
            MR_Word Goals0_43 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_9, 2))));
            MR_Word Goals_44;

            hlds__goal_transform__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_103_111_97_108_115_95_95_91_50_93_95_49_4_p_1(Features_5, Goals0_43, &Goals_44);
            {
              GoalExpr_11 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, GoalExpr_11, 0) = ((MR_Box) ((MR_Unsigned) 2U));
              MR_hl_field(3, GoalExpr_11, 1) = (MR_Box) ((MR_Unsigned) (ConjType_42));
              MR_hl_field(3, GoalExpr_11, 2) = ((MR_Box) (Goals_44));
            }
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word Goals0_78 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_9, 1))));
            MR_Word Goals_79;

            hlds__goal_transform__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_103_111_97_108_115_95_95_91_50_93_95_49_4_p_1(Features_5, Goals0_78, &Goals_79);
            {
              GoalExpr_11 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, GoalExpr_11, 0) = ((MR_Box) ((MR_Unsigned) 3U));
              MR_hl_field(3, GoalExpr_11, 1) = ((MR_Box) (Goals_79));
            }
          }
          break;
        case (MR_Integer) 4:
          {
            MR_Word Var_45 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_9, 1))));
            MR_Word CanFail_46 = ((MR_Unsigned) ((MR_hl_field(3, GoalExpr0_9, 2))) & (MR_Integer) 1);
            MR_Word Cases0_47 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_9, 3))));
            MR_Word Cases_48;

            hlds__goal_transform__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_99_97_115_101_115_95_95_91_50_93_95_49_4_p_1(Features_5, Cases0_47, &Cases_48);
            {
              GoalExpr_11 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, GoalExpr_11, 0) = ((MR_Box) ((MR_Unsigned) 4U));
              MR_hl_field(3, GoalExpr_11, 1) = ((MR_Box) (Var_45));
              MR_hl_field(3, GoalExpr_11, 2) = (MR_Box) ((MR_Unsigned) (CanFail_46));
              MR_hl_field(3, GoalExpr_11, 3) = ((MR_Box) (Cases_48));
            }
          }
          break;
        case (MR_Integer) 5:
          {
            MR_Word Reason_58 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_9, 1))));
            MR_Word SubGoal0_80 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_9, 2))));
            MR_Word SubGoal_81;

            succeeded = ((((MR_tag((MR_Word) Reason_58)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Reason_58, 0)))) == (MR_Integer) 6)));
            if (succeeded)
              SubGoal_81 = SubGoal0_80;
            else
              hlds__goal_transform__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_97_108_108_95_103_111_97_108_115_95_95_91_50_93_95_49_4_p_1(Features_5, SubGoal0_80, &SubGoal_81);
            {
              GoalExpr_11 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, GoalExpr_11, 0) = ((MR_Box) ((MR_Unsigned) 5U));
              MR_hl_field(3, GoalExpr_11, 1) = ((MR_Box) (Reason_58));
              MR_hl_field(3, GoalExpr_11, 2) = ((MR_Box) (SubGoal_81));
            }
          }
          break;
        case (MR_Integer) 6:
          {
            MR_Word Vars_49 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_9, 1))));
            MR_Word Cond0_50 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_9, 2))));
            MR_Word Then0_51 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_9, 3))));
            MR_Word Else0_52 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_9, 4))));
            MR_Word Cond_53;
            MR_Word Then_54;
            MR_Word Else_55;

            hlds__goal_transform__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_97_108_108_95_103_111_97_108_115_95_95_91_50_93_95_49_4_p_1(Features_5, Cond0_50, &Cond_53);
            hlds__goal_transform__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_97_108_108_95_103_111_97_108_115_95_95_91_50_93_95_49_4_p_1(Features_5, Then0_51, &Then_54);
            hlds__goal_transform__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_97_108_108_95_103_111_97_108_115_95_95_91_50_93_95_49_4_p_1(Features_5, Else0_52, &Else_55);
            {
              GoalExpr_11 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, GoalExpr_11, 0) = ((MR_Box) ((MR_Unsigned) 6U));
              MR_hl_field(3, GoalExpr_11, 1) = ((MR_Box) (Vars_49));
              MR_hl_field(3, GoalExpr_11, 2) = ((MR_Box) (Cond_53));
              MR_hl_field(3, GoalExpr_11, 3) = ((MR_Box) (Then_54));
              MR_hl_field(3, GoalExpr_11, 4) = ((MR_Box) (Else_55));
            }
          }
          break;
        case (MR_Integer) 7:
          {
            MR_Word ShortHand0_61 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_9, 1))));
            MR_Word ShortHand_71;

            switch (MR_tag((MR_Word) ShortHand0_61)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word GoalA0_74 = ((MR_Word) ((MR_hl_field(0, ShortHand0_61, 0))));
                  MR_Word GoalB0_75 = ((MR_Word) ((MR_hl_field(0, ShortHand0_61, 1))));
                  MR_Word GoalA_76;
                  MR_Word GoalB_77;

                  hlds__goal_transform__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_97_108_108_95_103_111_97_108_115_95_95_91_50_93_95_49_4_p_1(Features_5, GoalA0_74, &GoalA_76);
                  hlds__goal_transform__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_97_108_108_95_103_111_97_108_115_95_95_91_50_93_95_49_4_p_1(Features_5, GoalB0_75, &GoalB_77);
                  {
                    ShortHand_71 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(0, ShortHand_71, 0) = ((MR_Box) (GoalA_76));
                    MR_hl_field(0, ShortHand_71, 1) = ((MR_Box) (GoalB_77));
                  }
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word GoalType_62 = ((MR_Unsigned) ((MR_hl_field(1, ShortHand0_61, 0))) & (MR_Integer) 3);
                  MR_Word Outer_63 = ((MR_Word) ((MR_hl_field(1, ShortHand0_61, 1))));
                  MR_Word Inner_64 = ((MR_Word) ((MR_hl_field(1, ShortHand0_61, 2))));
                  MR_Word MaybeOutputVars_65 = ((MR_Word) ((MR_hl_field(1, ShortHand0_61, 3))));
                  MR_Word MainGoal0_66 = ((MR_Word) ((MR_hl_field(1, ShortHand0_61, 4))));
                  MR_Word OrElseGoals0_67 = ((MR_Word) ((MR_hl_field(1, ShortHand0_61, 5))));
                  MR_Word OrElseInners_68 = ((MR_Word) ((MR_hl_field(1, ShortHand0_61, 6))));
                  MR_Word MainGoal_69;
                  MR_Word OrElseGoals_70;

                  hlds__goal_transform__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_97_108_108_95_103_111_97_108_115_95_95_91_50_93_95_49_4_p_1(Features_5, MainGoal0_66, &MainGoal_69);
                  hlds__goal_transform__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_103_111_97_108_115_95_95_91_50_93_95_49_4_p_1(Features_5, OrElseGoals0_67, &OrElseGoals_70);
                  {
                    ShortHand_71 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, ShortHand_71, 0) = (MR_Box) ((MR_Unsigned) (GoalType_62));
                    MR_hl_field(1, ShortHand_71, 1) = ((MR_Box) (Outer_63));
                    MR_hl_field(1, ShortHand_71, 2) = ((MR_Box) (Inner_64));
                    MR_hl_field(1, ShortHand_71, 3) = ((MR_Box) (MaybeOutputVars_65));
                    MR_hl_field(1, ShortHand_71, 4) = ((MR_Box) (MainGoal_69));
                    MR_hl_field(1, ShortHand_71, 5) = ((MR_Box) (OrElseGoals_70));
                    MR_hl_field(1, ShortHand_71, 6) = ((MR_Box) (OrElseInners_68));
                  }
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word MaybeIO_72 = ((MR_Word) ((MR_hl_field(2, ShortHand0_61, 0))));
                  MR_Word ResultVar_73 = ((MR_Word) ((MR_hl_field(2, ShortHand0_61, 1))));
                  MR_Word SubGoal0_82 = ((MR_Word) ((MR_hl_field(2, ShortHand0_61, 2))));
                  MR_Word SubGoal_83;

                  hlds__goal_transform__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_97_108_108_95_103_111_97_108_115_95_95_91_50_93_95_49_4_p_1(Features_5, SubGoal0_82, &SubGoal_83);
                  {
                    ShortHand_71 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(2, ShortHand_71, 0) = ((MR_Box) (MaybeIO_72));
                    MR_hl_field(2, ShortHand_71, 1) = ((MR_Box) (ResultVar_73));
                    MR_hl_field(2, ShortHand_71, 2) = ((MR_Box) (SubGoal_83));
                  }
                }
                break;
            }
            {
              GoalExpr_11 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, GoalExpr_11, 0) = ((MR_Box) ((MR_Unsigned) 7U));
              MR_hl_field(3, GoalExpr_11, 1) = ((MR_Box) (ShortHand_71));
            }
          }
          break;
      }
      break;
  }
  mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_markers__hlds__hlds_markers__type_ctor_info_goal_feature_0), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_info_0), (MR_Word) (&hlds__goal_transform_scalar_common_3[4]), Features_5, ((MR_Box) (GoalInfo0_10)), &conv1_GoalInfo_12);
  GoalInfo_12 = ((MR_Word) (conv1_GoalInfo_12));
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *Goal_8 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_11));
    MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo_12));
  }
}

void MR_CALL 
hlds__goal_transform__attach_features_to_all_goals_4_p_0(
  MR_Word Features_5,
  MR_Word InFromGroundTerm_6,
  MR_Word Goal0_7,
  MR_Word * Goal_8)
{
  hlds__goal_transform__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_97_108_108_95_103_111_97_108_115_95_95_91_50_93_95_48_4_p_0(Features_5, Goal0_7, Goal_8);
}

static void MR_CALL 
hlds__goal_transform__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_99_97_115_101_115_95_95_91_50_93_95_48_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__3_3;

  hlds__hlds_goal__goal_info_add_feature_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_HeadVar__3_3);
  *wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__3_3));
}

static void MR_CALL 
hlds__goal_transform__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_99_97_115_101_115_95_95_91_50_93_95_48_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4)
{
  MR_bool succeeded;

  if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word Case0_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));
    MR_Word Cases0_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 1))));
    MR_Word Case_11;
    MR_Word Cases_12;
    MR_Word MainConsId_13 = ((MR_Word) ((MR_hl_field(0, Case0_9, 0))));
    MR_Word OtherConsIds_14 = ((MR_Word) ((MR_hl_field(0, Case0_9, 1))));
    MR_Word Goal0_15 = ((MR_Word) ((MR_hl_field(0, Case0_9, 2))));
    MR_Word Goal_16;
    MR_Word GoalExpr0_17 = ((MR_Word) ((MR_hl_field(0, Goal0_15, 0))));
    MR_Word GoalInfo0_18 = ((MR_Word) ((MR_hl_field(0, Goal0_15, 1))));
    MR_Word GoalExpr_19;
    MR_Word GoalInfo_20;
    MR_Box conv1_GoalInfo_20;

    switch (MR_tag((MR_Word) GoalExpr0_17)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word SubGoal0_61 = (MR_Word) ((MR_Word) (GoalExpr0_17));
          MR_Word SubGoal_62;

          hlds__goal_transform__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_97_108_108_95_103_111_97_108_115_95_95_91_50_93_95_48_4_p_0(HeadVar__1_1, SubGoal0_61, &SubGoal_62);
          GoalExpr_19 = (MR_Word) ((MR_Word) (SubGoal_62));
        }
        break;
      case (MR_Integer) 1:
      case (MR_Integer) 2:
        GoalExpr_19 = GoalExpr0_17;
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, GoalExpr0_17, 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 1:
            GoalExpr_19 = GoalExpr0_17;
            break;
          case (MR_Integer) 2:
            {
              MR_Word ConjType_47 = ((MR_Unsigned) ((MR_hl_field(3, GoalExpr0_17, 1))) & (MR_Integer) 1);
              MR_Word Goals0_48 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_17, 2))));
              MR_Word Goals_49;

              hlds__goal_transform__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_103_111_97_108_115_95_95_91_50_93_95_48_4_p_0(HeadVar__1_1, Goals0_48, &Goals_49);
              {
                GoalExpr_19 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, GoalExpr_19, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                MR_hl_field(3, GoalExpr_19, 1) = (MR_Box) ((MR_Unsigned) (ConjType_47));
                MR_hl_field(3, GoalExpr_19, 2) = ((MR_Box) (Goals_49));
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word Goals0_83 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_17, 1))));
              MR_Word Goals_84;

              hlds__goal_transform__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_103_111_97_108_115_95_95_91_50_93_95_48_4_p_0(HeadVar__1_1, Goals0_83, &Goals_84);
              {
                GoalExpr_19 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, GoalExpr_19, 0) = ((MR_Box) ((MR_Unsigned) 3U));
                MR_hl_field(3, GoalExpr_19, 1) = ((MR_Box) (Goals_84));
              }
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word Var_50 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_17, 1))));
              MR_Word CanFail_51 = ((MR_Unsigned) ((MR_hl_field(3, GoalExpr0_17, 2))) & (MR_Integer) 1);
              MR_Word Cases0_52 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_17, 3))));
              MR_Word Cases_53;

              hlds__goal_transform__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_99_97_115_101_115_95_95_91_50_93_95_48_4_p_0(HeadVar__1_1, Cases0_52, &Cases_53);
              {
                GoalExpr_19 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, GoalExpr_19, 0) = ((MR_Box) ((MR_Unsigned) 4U));
                MR_hl_field(3, GoalExpr_19, 1) = ((MR_Box) (Var_50));
                MR_hl_field(3, GoalExpr_19, 2) = (MR_Box) ((MR_Unsigned) (CanFail_51));
                MR_hl_field(3, GoalExpr_19, 3) = ((MR_Box) (Cases_53));
              }
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word Reason_63 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_17, 1))));
              MR_Word SubGoal0_85 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_17, 2))));
              MR_Word SubGoal_86;

              succeeded = ((((MR_tag((MR_Word) Reason_63)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Reason_63, 0)))) == (MR_Integer) 6)));
              if (succeeded)
                hlds__goal_transform__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_97_108_108_95_103_111_97_108_115_95_95_91_50_93_95_48_4_p_0(HeadVar__1_1, SubGoal0_85, &SubGoal_86);
              else
                hlds__goal_transform__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_97_108_108_95_103_111_97_108_115_95_95_91_50_93_95_48_4_p_0(HeadVar__1_1, SubGoal0_85, &SubGoal_86);
              {
                GoalExpr_19 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, GoalExpr_19, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                MR_hl_field(3, GoalExpr_19, 1) = ((MR_Box) (Reason_63));
                MR_hl_field(3, GoalExpr_19, 2) = ((MR_Box) (SubGoal_86));
              }
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word Vars_54 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_17, 1))));
              MR_Word Cond0_55 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_17, 2))));
              MR_Word Then0_56 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_17, 3))));
              MR_Word Else0_57 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_17, 4))));
              MR_Word Cond_58;
              MR_Word Then_59;
              MR_Word Else_60;

              hlds__goal_transform__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_97_108_108_95_103_111_97_108_115_95_95_91_50_93_95_48_4_p_0(HeadVar__1_1, Cond0_55, &Cond_58);
              hlds__goal_transform__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_97_108_108_95_103_111_97_108_115_95_95_91_50_93_95_48_4_p_0(HeadVar__1_1, Then0_56, &Then_59);
              hlds__goal_transform__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_97_108_108_95_103_111_97_108_115_95_95_91_50_93_95_48_4_p_0(HeadVar__1_1, Else0_57, &Else_60);
              {
                GoalExpr_19 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, GoalExpr_19, 0) = ((MR_Box) ((MR_Unsigned) 6U));
                MR_hl_field(3, GoalExpr_19, 1) = ((MR_Box) (Vars_54));
                MR_hl_field(3, GoalExpr_19, 2) = ((MR_Box) (Cond_58));
                MR_hl_field(3, GoalExpr_19, 3) = ((MR_Box) (Then_59));
                MR_hl_field(3, GoalExpr_19, 4) = ((MR_Box) (Else_60));
              }
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Word ShortHand0_66 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_17, 1))));
              MR_Word ShortHand_76;

              switch (MR_tag((MR_Word) ShortHand0_66)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Word GoalA0_79 = ((MR_Word) ((MR_hl_field(0, ShortHand0_66, 0))));
                    MR_Word GoalB0_80 = ((MR_Word) ((MR_hl_field(0, ShortHand0_66, 1))));
                    MR_Word GoalA_81;
                    MR_Word GoalB_82;

                    hlds__goal_transform__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_97_108_108_95_103_111_97_108_115_95_95_91_50_93_95_48_4_p_0(HeadVar__1_1, GoalA0_79, &GoalA_81);
                    hlds__goal_transform__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_97_108_108_95_103_111_97_108_115_95_95_91_50_93_95_48_4_p_0(HeadVar__1_1, GoalB0_80, &GoalB_82);
                    {
                      ShortHand_76 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(0, ShortHand_76, 0) = ((MR_Box) (GoalA_81));
                      MR_hl_field(0, ShortHand_76, 1) = ((MR_Box) (GoalB_82));
                    }
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word GoalType_67 = ((MR_Unsigned) ((MR_hl_field(1, ShortHand0_66, 0))) & (MR_Integer) 3);
                    MR_Word Outer_68 = ((MR_Word) ((MR_hl_field(1, ShortHand0_66, 1))));
                    MR_Word Inner_69 = ((MR_Word) ((MR_hl_field(1, ShortHand0_66, 2))));
                    MR_Word MaybeOutputVars_70 = ((MR_Word) ((MR_hl_field(1, ShortHand0_66, 3))));
                    MR_Word MainGoal0_71 = ((MR_Word) ((MR_hl_field(1, ShortHand0_66, 4))));
                    MR_Word OrElseGoals0_72 = ((MR_Word) ((MR_hl_field(1, ShortHand0_66, 5))));
                    MR_Word OrElseInners_73 = ((MR_Word) ((MR_hl_field(1, ShortHand0_66, 6))));
                    MR_Word MainGoal_74;
                    MR_Word OrElseGoals_75;

                    hlds__goal_transform__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_97_108_108_95_103_111_97_108_115_95_95_91_50_93_95_48_4_p_0(HeadVar__1_1, MainGoal0_71, &MainGoal_74);
                    hlds__goal_transform__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_103_111_97_108_115_95_95_91_50_93_95_48_4_p_0(HeadVar__1_1, OrElseGoals0_72, &OrElseGoals_75);
                    {
                      ShortHand_76 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, ShortHand_76, 0) = (MR_Box) ((MR_Unsigned) (GoalType_67));
                      MR_hl_field(1, ShortHand_76, 1) = ((MR_Box) (Outer_68));
                      MR_hl_field(1, ShortHand_76, 2) = ((MR_Box) (Inner_69));
                      MR_hl_field(1, ShortHand_76, 3) = ((MR_Box) (MaybeOutputVars_70));
                      MR_hl_field(1, ShortHand_76, 4) = ((MR_Box) (MainGoal_74));
                      MR_hl_field(1, ShortHand_76, 5) = ((MR_Box) (OrElseGoals_75));
                      MR_hl_field(1, ShortHand_76, 6) = ((MR_Box) (OrElseInners_73));
                    }
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word MaybeIO_77 = ((MR_Word) ((MR_hl_field(2, ShortHand0_66, 0))));
                    MR_Word ResultVar_78 = ((MR_Word) ((MR_hl_field(2, ShortHand0_66, 1))));
                    MR_Word SubGoal0_87 = ((MR_Word) ((MR_hl_field(2, ShortHand0_66, 2))));
                    MR_Word SubGoal_88;

                    hlds__goal_transform__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_97_108_108_95_103_111_97_108_115_95_95_91_50_93_95_48_4_p_0(HeadVar__1_1, SubGoal0_87, &SubGoal_88);
                    {
                      ShortHand_76 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(2, ShortHand_76, 0) = ((MR_Box) (MaybeIO_77));
                      MR_hl_field(2, ShortHand_76, 1) = ((MR_Box) (ResultVar_78));
                      MR_hl_field(2, ShortHand_76, 2) = ((MR_Box) (SubGoal_88));
                    }
                  }
                  break;
              }
              {
                GoalExpr_19 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, GoalExpr_19, 0) = ((MR_Box) ((MR_Unsigned) 7U));
                MR_hl_field(3, GoalExpr_19, 1) = ((MR_Box) (ShortHand_76));
              }
            }
            break;
        }
        break;
    }
    mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_markers__hlds__hlds_markers__type_ctor_info_goal_feature_0), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_info_0), (MR_Word) (&hlds__goal_transform_scalar_common_3[3]), HeadVar__1_1, ((MR_Box) (GoalInfo0_18)), &conv1_GoalInfo_20);
    GoalInfo_20 = ((MR_Word) (conv1_GoalInfo_20));
    {
      Goal_16 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Goal_16, 0) = ((MR_Box) (GoalExpr_19));
      MR_hl_field(0, Goal_16, 1) = ((MR_Box) (GoalInfo_20));
    }
    {
      Case_11 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Case_11, 0) = ((MR_Box) (MainConsId_13));
      MR_hl_field(0, Case_11, 1) = ((MR_Box) (OtherConsIds_14));
      MR_hl_field(0, Case_11, 2) = ((MR_Box) (Goal_16));
    }
    hlds__goal_transform__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_99_97_115_101_115_95_95_91_50_93_95_48_4_p_0(HeadVar__1_1, Cases0_10, &Cases_12);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__4_4 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Case_11));
      MR_hl_field(1, base, 1) = ((MR_Box) (Cases_12));
    }
  }
}

static void MR_CALL 
hlds__goal_transform__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_103_111_97_108_115_95_95_91_50_93_95_48_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__3_3;

  hlds__hlds_goal__goal_info_add_feature_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_HeadVar__3_3);
  *wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__3_3));
}

static void MR_CALL 
hlds__goal_transform__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_103_111_97_108_115_95_95_91_50_93_95_48_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4)
{
  MR_bool succeeded;

  if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word Goal0_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));
    MR_Word Goals0_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 1))));
    MR_Word Goal_11;
    MR_Word Goals_12;
    MR_Word GoalExpr0_13 = ((MR_Word) ((MR_hl_field(0, Goal0_9, 0))));
    MR_Word GoalInfo0_14 = ((MR_Word) ((MR_hl_field(0, Goal0_9, 1))));
    MR_Word GoalExpr_15;
    MR_Word GoalInfo_16;
    MR_Box conv1_GoalInfo_16;

    switch (MR_tag((MR_Word) GoalExpr0_13)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word SubGoal0_57 = (MR_Word) ((MR_Word) (GoalExpr0_13));
          MR_Word SubGoal_58;

          hlds__goal_transform__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_97_108_108_95_103_111_97_108_115_95_95_91_50_93_95_48_4_p_0(HeadVar__1_1, SubGoal0_57, &SubGoal_58);
          GoalExpr_15 = (MR_Word) ((MR_Word) (SubGoal_58));
        }
        break;
      case (MR_Integer) 1:
      case (MR_Integer) 2:
        GoalExpr_15 = GoalExpr0_13;
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, GoalExpr0_13, 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 1:
            GoalExpr_15 = GoalExpr0_13;
            break;
          case (MR_Integer) 2:
            {
              MR_Word ConjType_43 = ((MR_Unsigned) ((MR_hl_field(3, GoalExpr0_13, 1))) & (MR_Integer) 1);
              MR_Word Goals0_44 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_13, 2))));
              MR_Word Goals_45;

              hlds__goal_transform__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_103_111_97_108_115_95_95_91_50_93_95_48_4_p_0(HeadVar__1_1, Goals0_44, &Goals_45);
              {
                GoalExpr_15 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, GoalExpr_15, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                MR_hl_field(3, GoalExpr_15, 1) = (MR_Box) ((MR_Unsigned) (ConjType_43));
                MR_hl_field(3, GoalExpr_15, 2) = ((MR_Box) (Goals_45));
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word Goals0_79 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_13, 1))));
              MR_Word Goals_80;

              hlds__goal_transform__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_103_111_97_108_115_95_95_91_50_93_95_48_4_p_0(HeadVar__1_1, Goals0_79, &Goals_80);
              {
                GoalExpr_15 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, GoalExpr_15, 0) = ((MR_Box) ((MR_Unsigned) 3U));
                MR_hl_field(3, GoalExpr_15, 1) = ((MR_Box) (Goals_80));
              }
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word Var_46 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_13, 1))));
              MR_Word CanFail_47 = ((MR_Unsigned) ((MR_hl_field(3, GoalExpr0_13, 2))) & (MR_Integer) 1);
              MR_Word Cases0_48 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_13, 3))));
              MR_Word Cases_49;

              hlds__goal_transform__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_99_97_115_101_115_95_95_91_50_93_95_48_4_p_0(HeadVar__1_1, Cases0_48, &Cases_49);
              {
                GoalExpr_15 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, GoalExpr_15, 0) = ((MR_Box) ((MR_Unsigned) 4U));
                MR_hl_field(3, GoalExpr_15, 1) = ((MR_Box) (Var_46));
                MR_hl_field(3, GoalExpr_15, 2) = (MR_Box) ((MR_Unsigned) (CanFail_47));
                MR_hl_field(3, GoalExpr_15, 3) = ((MR_Box) (Cases_49));
              }
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word Reason_59 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_13, 1))));
              MR_Word SubGoal0_81 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_13, 2))));
              MR_Word SubGoal_82;

              succeeded = ((((MR_tag((MR_Word) Reason_59)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Reason_59, 0)))) == (MR_Integer) 6)));
              if (succeeded)
                hlds__goal_transform__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_97_108_108_95_103_111_97_108_115_95_95_91_50_93_95_48_4_p_0(HeadVar__1_1, SubGoal0_81, &SubGoal_82);
              else
                hlds__goal_transform__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_97_108_108_95_103_111_97_108_115_95_95_91_50_93_95_48_4_p_0(HeadVar__1_1, SubGoal0_81, &SubGoal_82);
              {
                GoalExpr_15 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, GoalExpr_15, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                MR_hl_field(3, GoalExpr_15, 1) = ((MR_Box) (Reason_59));
                MR_hl_field(3, GoalExpr_15, 2) = ((MR_Box) (SubGoal_82));
              }
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word Vars_50 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_13, 1))));
              MR_Word Cond0_51 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_13, 2))));
              MR_Word Then0_52 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_13, 3))));
              MR_Word Else0_53 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_13, 4))));
              MR_Word Cond_54;
              MR_Word Then_55;
              MR_Word Else_56;

              hlds__goal_transform__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_97_108_108_95_103_111_97_108_115_95_95_91_50_93_95_48_4_p_0(HeadVar__1_1, Cond0_51, &Cond_54);
              hlds__goal_transform__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_97_108_108_95_103_111_97_108_115_95_95_91_50_93_95_48_4_p_0(HeadVar__1_1, Then0_52, &Then_55);
              hlds__goal_transform__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_97_108_108_95_103_111_97_108_115_95_95_91_50_93_95_48_4_p_0(HeadVar__1_1, Else0_53, &Else_56);
              {
                GoalExpr_15 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, GoalExpr_15, 0) = ((MR_Box) ((MR_Unsigned) 6U));
                MR_hl_field(3, GoalExpr_15, 1) = ((MR_Box) (Vars_50));
                MR_hl_field(3, GoalExpr_15, 2) = ((MR_Box) (Cond_54));
                MR_hl_field(3, GoalExpr_15, 3) = ((MR_Box) (Then_55));
                MR_hl_field(3, GoalExpr_15, 4) = ((MR_Box) (Else_56));
              }
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Word ShortHand0_62 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_13, 1))));
              MR_Word ShortHand_72;

              switch (MR_tag((MR_Word) ShortHand0_62)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Word GoalA0_75 = ((MR_Word) ((MR_hl_field(0, ShortHand0_62, 0))));
                    MR_Word GoalB0_76 = ((MR_Word) ((MR_hl_field(0, ShortHand0_62, 1))));
                    MR_Word GoalA_77;
                    MR_Word GoalB_78;

                    hlds__goal_transform__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_97_108_108_95_103_111_97_108_115_95_95_91_50_93_95_48_4_p_0(HeadVar__1_1, GoalA0_75, &GoalA_77);
                    hlds__goal_transform__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_97_108_108_95_103_111_97_108_115_95_95_91_50_93_95_48_4_p_0(HeadVar__1_1, GoalB0_76, &GoalB_78);
                    {
                      ShortHand_72 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(0, ShortHand_72, 0) = ((MR_Box) (GoalA_77));
                      MR_hl_field(0, ShortHand_72, 1) = ((MR_Box) (GoalB_78));
                    }
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word GoalType_63 = ((MR_Unsigned) ((MR_hl_field(1, ShortHand0_62, 0))) & (MR_Integer) 3);
                    MR_Word Outer_64 = ((MR_Word) ((MR_hl_field(1, ShortHand0_62, 1))));
                    MR_Word Inner_65 = ((MR_Word) ((MR_hl_field(1, ShortHand0_62, 2))));
                    MR_Word MaybeOutputVars_66 = ((MR_Word) ((MR_hl_field(1, ShortHand0_62, 3))));
                    MR_Word MainGoal0_67 = ((MR_Word) ((MR_hl_field(1, ShortHand0_62, 4))));
                    MR_Word OrElseGoals0_68 = ((MR_Word) ((MR_hl_field(1, ShortHand0_62, 5))));
                    MR_Word OrElseInners_69 = ((MR_Word) ((MR_hl_field(1, ShortHand0_62, 6))));
                    MR_Word MainGoal_70;
                    MR_Word OrElseGoals_71;

                    hlds__goal_transform__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_97_108_108_95_103_111_97_108_115_95_95_91_50_93_95_48_4_p_0(HeadVar__1_1, MainGoal0_67, &MainGoal_70);
                    hlds__goal_transform__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_103_111_97_108_115_95_95_91_50_93_95_48_4_p_0(HeadVar__1_1, OrElseGoals0_68, &OrElseGoals_71);
                    {
                      ShortHand_72 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, ShortHand_72, 0) = (MR_Box) ((MR_Unsigned) (GoalType_63));
                      MR_hl_field(1, ShortHand_72, 1) = ((MR_Box) (Outer_64));
                      MR_hl_field(1, ShortHand_72, 2) = ((MR_Box) (Inner_65));
                      MR_hl_field(1, ShortHand_72, 3) = ((MR_Box) (MaybeOutputVars_66));
                      MR_hl_field(1, ShortHand_72, 4) = ((MR_Box) (MainGoal_70));
                      MR_hl_field(1, ShortHand_72, 5) = ((MR_Box) (OrElseGoals_71));
                      MR_hl_field(1, ShortHand_72, 6) = ((MR_Box) (OrElseInners_69));
                    }
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word MaybeIO_73 = ((MR_Word) ((MR_hl_field(2, ShortHand0_62, 0))));
                    MR_Word ResultVar_74 = ((MR_Word) ((MR_hl_field(2, ShortHand0_62, 1))));
                    MR_Word SubGoal0_83 = ((MR_Word) ((MR_hl_field(2, ShortHand0_62, 2))));
                    MR_Word SubGoal_84;

                    hlds__goal_transform__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_97_108_108_95_103_111_97_108_115_95_95_91_50_93_95_48_4_p_0(HeadVar__1_1, SubGoal0_83, &SubGoal_84);
                    {
                      ShortHand_72 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(2, ShortHand_72, 0) = ((MR_Box) (MaybeIO_73));
                      MR_hl_field(2, ShortHand_72, 1) = ((MR_Box) (ResultVar_74));
                      MR_hl_field(2, ShortHand_72, 2) = ((MR_Box) (SubGoal_84));
                    }
                  }
                  break;
              }
              {
                GoalExpr_15 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, GoalExpr_15, 0) = ((MR_Box) ((MR_Unsigned) 7U));
                MR_hl_field(3, GoalExpr_15, 1) = ((MR_Box) (ShortHand_72));
              }
            }
            break;
        }
        break;
    }
    mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_markers__hlds__hlds_markers__type_ctor_info_goal_feature_0), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_info_0), (MR_Word) (&hlds__goal_transform_scalar_common_3[2]), HeadVar__1_1, ((MR_Box) (GoalInfo0_14)), &conv1_GoalInfo_16);
    GoalInfo_16 = ((MR_Word) (conv1_GoalInfo_16));
    {
      Goal_11 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Goal_11, 0) = ((MR_Box) (GoalExpr_15));
      MR_hl_field(0, Goal_11, 1) = ((MR_Box) (GoalInfo_16));
    }
    hlds__goal_transform__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_103_111_97_108_115_95_95_91_50_93_95_48_4_p_0(HeadVar__1_1, Goals0_10, &Goals_12);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__4_4 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Goal_11));
      MR_hl_field(1, base, 1) = ((MR_Box) (Goals_12));
    }
  }
}

static void MR_CALL 
hlds__goal_transform__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_97_108_108_95_103_111_97_108_115_95_95_91_50_93_95_48_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__3_3;

  hlds__hlds_goal__goal_info_add_feature_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_HeadVar__3_3);
  *wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__3_3));
}

void MR_CALL 
hlds__goal_transform__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_97_108_108_95_103_111_97_108_115_95_95_91_50_93_95_48_4_p_0(
  MR_Word Features_5,
  MR_Word Goal0_7,
  MR_Word * Goal_8)
{
  MR_bool succeeded;
  MR_Word GoalExpr0_9 = ((MR_Word) ((MR_hl_field(0, Goal0_7, 0))));
  MR_Word GoalInfo0_10 = ((MR_Word) ((MR_hl_field(0, Goal0_7, 1))));
  MR_Word GoalExpr_11;
  MR_Word GoalInfo_12;
  MR_Box conv1_GoalInfo_12;

  switch (MR_tag((MR_Word) GoalExpr0_9)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word SubGoal0_56 = (MR_Word) ((MR_Word) (GoalExpr0_9));
        MR_Word SubGoal_57;

        hlds__goal_transform__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_97_108_108_95_103_111_97_108_115_95_95_91_50_93_95_48_4_p_0(Features_5, SubGoal0_56, &SubGoal_57);
        GoalExpr_11 = (MR_Word) ((MR_Word) (SubGoal_57));
      }
      break;
    case (MR_Integer) 1:
    case (MR_Integer) 2:
      GoalExpr_11 = GoalExpr0_9;
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, GoalExpr0_9, 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
        case (MR_Integer) 1:
          GoalExpr_11 = GoalExpr0_9;
          break;
        case (MR_Integer) 2:
          {
            MR_Word ConjType_42 = ((MR_Unsigned) ((MR_hl_field(3, GoalExpr0_9, 1))) & (MR_Integer) 1);
            MR_Word Goals0_43 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_9, 2))));
            MR_Word Goals_44;

            hlds__goal_transform__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_103_111_97_108_115_95_95_91_50_93_95_48_4_p_0(Features_5, Goals0_43, &Goals_44);
            {
              GoalExpr_11 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, GoalExpr_11, 0) = ((MR_Box) ((MR_Unsigned) 2U));
              MR_hl_field(3, GoalExpr_11, 1) = (MR_Box) ((MR_Unsigned) (ConjType_42));
              MR_hl_field(3, GoalExpr_11, 2) = ((MR_Box) (Goals_44));
            }
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word Goals0_78 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_9, 1))));
            MR_Word Goals_79;

            hlds__goal_transform__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_103_111_97_108_115_95_95_91_50_93_95_48_4_p_0(Features_5, Goals0_78, &Goals_79);
            {
              GoalExpr_11 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, GoalExpr_11, 0) = ((MR_Box) ((MR_Unsigned) 3U));
              MR_hl_field(3, GoalExpr_11, 1) = ((MR_Box) (Goals_79));
            }
          }
          break;
        case (MR_Integer) 4:
          {
            MR_Word Var_45 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_9, 1))));
            MR_Word CanFail_46 = ((MR_Unsigned) ((MR_hl_field(3, GoalExpr0_9, 2))) & (MR_Integer) 1);
            MR_Word Cases0_47 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_9, 3))));
            MR_Word Cases_48;

            hlds__goal_transform__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_99_97_115_101_115_95_95_91_50_93_95_48_4_p_0(Features_5, Cases0_47, &Cases_48);
            {
              GoalExpr_11 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, GoalExpr_11, 0) = ((MR_Box) ((MR_Unsigned) 4U));
              MR_hl_field(3, GoalExpr_11, 1) = ((MR_Box) (Var_45));
              MR_hl_field(3, GoalExpr_11, 2) = (MR_Box) ((MR_Unsigned) (CanFail_46));
              MR_hl_field(3, GoalExpr_11, 3) = ((MR_Box) (Cases_48));
            }
          }
          break;
        case (MR_Integer) 5:
          {
            MR_Word Reason_58 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_9, 1))));
            MR_Word SubGoal0_80 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_9, 2))));
            MR_Word SubGoal_81;

            succeeded = ((((MR_tag((MR_Word) Reason_58)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Reason_58, 0)))) == (MR_Integer) 6)));
            if (succeeded)
              hlds__goal_transform__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_97_108_108_95_103_111_97_108_115_95_95_91_50_93_95_48_4_p_0(Features_5, SubGoal0_80, &SubGoal_81);
            else
              hlds__goal_transform__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_97_108_108_95_103_111_97_108_115_95_95_91_50_93_95_48_4_p_0(Features_5, SubGoal0_80, &SubGoal_81);
            {
              GoalExpr_11 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, GoalExpr_11, 0) = ((MR_Box) ((MR_Unsigned) 5U));
              MR_hl_field(3, GoalExpr_11, 1) = ((MR_Box) (Reason_58));
              MR_hl_field(3, GoalExpr_11, 2) = ((MR_Box) (SubGoal_81));
            }
          }
          break;
        case (MR_Integer) 6:
          {
            MR_Word Vars_49 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_9, 1))));
            MR_Word Cond0_50 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_9, 2))));
            MR_Word Then0_51 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_9, 3))));
            MR_Word Else0_52 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_9, 4))));
            MR_Word Cond_53;
            MR_Word Then_54;
            MR_Word Else_55;

            hlds__goal_transform__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_97_108_108_95_103_111_97_108_115_95_95_91_50_93_95_48_4_p_0(Features_5, Cond0_50, &Cond_53);
            hlds__goal_transform__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_97_108_108_95_103_111_97_108_115_95_95_91_50_93_95_48_4_p_0(Features_5, Then0_51, &Then_54);
            hlds__goal_transform__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_97_108_108_95_103_111_97_108_115_95_95_91_50_93_95_48_4_p_0(Features_5, Else0_52, &Else_55);
            {
              GoalExpr_11 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, GoalExpr_11, 0) = ((MR_Box) ((MR_Unsigned) 6U));
              MR_hl_field(3, GoalExpr_11, 1) = ((MR_Box) (Vars_49));
              MR_hl_field(3, GoalExpr_11, 2) = ((MR_Box) (Cond_53));
              MR_hl_field(3, GoalExpr_11, 3) = ((MR_Box) (Then_54));
              MR_hl_field(3, GoalExpr_11, 4) = ((MR_Box) (Else_55));
            }
          }
          break;
        case (MR_Integer) 7:
          {
            MR_Word ShortHand0_61 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_9, 1))));
            MR_Word ShortHand_71;

            switch (MR_tag((MR_Word) ShortHand0_61)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word GoalA0_74 = ((MR_Word) ((MR_hl_field(0, ShortHand0_61, 0))));
                  MR_Word GoalB0_75 = ((MR_Word) ((MR_hl_field(0, ShortHand0_61, 1))));
                  MR_Word GoalA_76;
                  MR_Word GoalB_77;

                  hlds__goal_transform__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_97_108_108_95_103_111_97_108_115_95_95_91_50_93_95_48_4_p_0(Features_5, GoalA0_74, &GoalA_76);
                  hlds__goal_transform__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_97_108_108_95_103_111_97_108_115_95_95_91_50_93_95_48_4_p_0(Features_5, GoalB0_75, &GoalB_77);
                  {
                    ShortHand_71 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(0, ShortHand_71, 0) = ((MR_Box) (GoalA_76));
                    MR_hl_field(0, ShortHand_71, 1) = ((MR_Box) (GoalB_77));
                  }
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word GoalType_62 = ((MR_Unsigned) ((MR_hl_field(1, ShortHand0_61, 0))) & (MR_Integer) 3);
                  MR_Word Outer_63 = ((MR_Word) ((MR_hl_field(1, ShortHand0_61, 1))));
                  MR_Word Inner_64 = ((MR_Word) ((MR_hl_field(1, ShortHand0_61, 2))));
                  MR_Word MaybeOutputVars_65 = ((MR_Word) ((MR_hl_field(1, ShortHand0_61, 3))));
                  MR_Word MainGoal0_66 = ((MR_Word) ((MR_hl_field(1, ShortHand0_61, 4))));
                  MR_Word OrElseGoals0_67 = ((MR_Word) ((MR_hl_field(1, ShortHand0_61, 5))));
                  MR_Word OrElseInners_68 = ((MR_Word) ((MR_hl_field(1, ShortHand0_61, 6))));
                  MR_Word MainGoal_69;
                  MR_Word OrElseGoals_70;

                  hlds__goal_transform__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_97_108_108_95_103_111_97_108_115_95_95_91_50_93_95_48_4_p_0(Features_5, MainGoal0_66, &MainGoal_69);
                  hlds__goal_transform__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_103_111_97_108_115_95_95_91_50_93_95_48_4_p_0(Features_5, OrElseGoals0_67, &OrElseGoals_70);
                  {
                    ShortHand_71 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, ShortHand_71, 0) = (MR_Box) ((MR_Unsigned) (GoalType_62));
                    MR_hl_field(1, ShortHand_71, 1) = ((MR_Box) (Outer_63));
                    MR_hl_field(1, ShortHand_71, 2) = ((MR_Box) (Inner_64));
                    MR_hl_field(1, ShortHand_71, 3) = ((MR_Box) (MaybeOutputVars_65));
                    MR_hl_field(1, ShortHand_71, 4) = ((MR_Box) (MainGoal_69));
                    MR_hl_field(1, ShortHand_71, 5) = ((MR_Box) (OrElseGoals_70));
                    MR_hl_field(1, ShortHand_71, 6) = ((MR_Box) (OrElseInners_68));
                  }
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word MaybeIO_72 = ((MR_Word) ((MR_hl_field(2, ShortHand0_61, 0))));
                  MR_Word ResultVar_73 = ((MR_Word) ((MR_hl_field(2, ShortHand0_61, 1))));
                  MR_Word SubGoal0_82 = ((MR_Word) ((MR_hl_field(2, ShortHand0_61, 2))));
                  MR_Word SubGoal_83;

                  hlds__goal_transform__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_116_97_99_104_95_102_101_97_116_117_114_101_115_95_116_111_95_97_108_108_95_103_111_97_108_115_95_95_91_50_93_95_48_4_p_0(Features_5, SubGoal0_82, &SubGoal_83);
                  {
                    ShortHand_71 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(2, ShortHand_71, 0) = ((MR_Box) (MaybeIO_72));
                    MR_hl_field(2, ShortHand_71, 1) = ((MR_Box) (ResultVar_73));
                    MR_hl_field(2, ShortHand_71, 2) = ((MR_Box) (SubGoal_83));
                  }
                }
                break;
            }
            {
              GoalExpr_11 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, GoalExpr_11, 0) = ((MR_Box) ((MR_Unsigned) 7U));
              MR_hl_field(3, GoalExpr_11, 1) = ((MR_Box) (ShortHand_71));
            }
          }
          break;
      }
      break;
  }
  mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_markers__hlds__hlds_markers__type_ctor_info_goal_feature_0), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_info_0), (MR_Word) (&hlds__goal_transform_scalar_common_3[1]), Features_5, ((MR_Box) (GoalInfo0_10)), &conv1_GoalInfo_12);
  GoalInfo_12 = ((MR_Word) (conv1_GoalInfo_12));
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *Goal_8 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_11));
    MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo_12));
  }
}

static void MR_CALL 
hlds__goal_transform__flatten_disj_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_FlatDisjuncts_9;

  hlds__goal_transform__flatten_disj_acc_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_FlatDisjuncts_9);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_FlatDisjuncts_9));
}

void MR_CALL 
hlds__goal_transform__flatten_disj_2_p_0(
  MR_Word Disjuncts_3,
  MR_Word * FlatDisjuncts_4)
{
  MR_Box conv1_FlatDisjuncts_4;

  mercury__list__foldr_4_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&hlds__goal_transform_scalar_common_1[0]), (MR_Word) (&hlds__goal_transform_scalar_common_3[0]), Disjuncts_3, ((MR_Box) ((MR_Unsigned) 0U)), &conv1_FlatDisjuncts_4);
  *FlatDisjuncts_4 = ((MR_Word) (conv1_FlatDisjuncts_4));
}

void MR_CALL 
hlds__goal_transform__flatten_conj_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2)
{
  MR_bool succeeded;

  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word Goal_3 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
    MR_Word Goals0_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
    MR_Word FlatConjTail_6;
    MR_Word SubGoals_7;
    MR_Word Var_9;
    MR_Word Var_10;

    hlds__goal_transform__flatten_conj_2_p_0(Goals0_4, &FlatConjTail_6);
    Var_9 = ((MR_Word) ((MR_hl_field(0, Goal_3, 0))));
    succeeded = ((((MR_tag((MR_Word) Var_9)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Var_9, 0)))) == (MR_Integer) 2)));
    if (succeeded)
    {
      Var_10 = ((MR_Unsigned) ((MR_hl_field(3, Var_9, 1))) & (MR_Integer) 1);
      SubGoals_7 = ((MR_Word) ((MR_hl_field(3, Var_9, 2))));
      succeeded = (Var_10 == (MR_Integer) 0);
    }
    if (succeeded)
      *HeadVar__2_2 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), SubGoals_7, FlatConjTail_6);
    else
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__2_2 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Goal_3));
        MR_hl_field(1, base, 1) = ((MR_Box) (FlatConjTail_6));
      }
  }
}

static MR_bool MR_CALL 
hlds__goal_transform____Unify____attach_in_from_ground_term_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = hlds__goal_transform____Unify____attach_in_from_ground_term_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
hlds__goal_transform____Compare____attach_in_from_ground_term_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  hlds__goal_transform____Compare____attach_in_from_ground_term_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
hlds__goal_transform____Unify____maybe_transformed_goal_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = hlds__goal_transform____Unify____maybe_transformed_goal_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
hlds__goal_transform____Compare____maybe_transformed_goal_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  hlds__goal_transform____Compare____maybe_transformed_goal_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__hlds__goal_transform__init(void)
{
}

void mercury__hlds__goal_transform__init_type_tables(void)
{
  static MR_bool initialised = MR_FALSE;
  if (initialised) return;
  initialised = MR_TRUE;

  MR_register_type_ctor_info(&hlds__goal_transform__hlds__goal_transform__type_ctor_info_attach_in_from_ground_term_0);
  MR_register_type_ctor_info(&hlds__goal_transform__hlds__goal_transform__type_ctor_info_maybe_transformed_goal_0);
}

void mercury__hlds__goal_transform__init_debugger(void)
{
  MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__hlds__goal_transform__grade_check(void)
{
  return &MR_GRADE_VAR;
}

// :- end_module hlds.goal_transform.
