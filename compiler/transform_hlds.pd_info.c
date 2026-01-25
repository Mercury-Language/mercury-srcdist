/*
** Automatically generated from `pd_info.m'
** by the Mercury compiler,
** version rotd-2026-01-25
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


// :- module transform_hlds.pd_info.
// :- implementation.

/*
INIT mercury__transform_hlds__pd_info__init
ENDINIT
*/

#include "transform_hlds.pd_info.mih"


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
#include "getopt.mih"
#include "hlds.mih"
#include "int.mih"
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
#include "check_hlds.inst_match.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.proc_requests.mih"
#include "check_hlds.simplify.mih"
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
#include "hlds.hlds_proc_util.mih"
#include "hlds.hlds_promise.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.inst_graph.mih"
#include "hlds.instmap.mih"
#include "hlds.mode_util.mih"
#include "hlds.pred_name.mih"
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "libs.dependency_graph.mih"
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.op_mode.mih"
#include "libs.optdb_help.mih"
#include "libs.optimization_options.mih"
#include "libs.option_categories.mih"
#include "libs.options.mih"
#include "libs.polyhedron.mih"
#include "libs.trace_params.mih"
#include "mdbcomp.feedback.mih"
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
#include "parse_tree.prog_data_used_modules.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_parse_tree.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_db.mih"
#include "parse_tree.var_table.mih"
#include "recompilation.record_uses.mih"
#include "transform_hlds.pd_debug.mih"
#include "transform_hlds.pd_term.mih"
#include "transform_hlds.pd_util.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"
#include "check_hlds.simplify.simplify_tasks.mih"
#include "mdbcomp.feedback.feedback_info.mih"
#include "parse_tree.module_qual.mq_info.mih"




static const MR_FA_TypeInfo_Struct1 transform_hlds__pd_info__set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_int_0;

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__pd_info__tree234__pti_tree234_2__pseudo_1__plain_set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_int_0;

static const MR_FA_TypeInfo_Struct1 transform_hlds__pd_info__list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0;

static const MR_FA_TypeInfo_Struct2 transform_hlds__pd_info__tree234__ti_tree234_2list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0;

static const MR_DuFunctorDesc transform_hlds__pd_info__transform_hlds__pd_info__du_functor_desc_maybe_version_0_0;

static const MR_FA_TypeInfo_Struct1 transform_hlds__pd_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct2 transform_hlds__pd_info__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct1 transform_hlds__pd_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_TypeInfo_Struct2 transform_hlds__pd_info__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0parse_tree__prog_data__type_ctor_info_mer_type_0;

static const MR_PseudoTypeInfo transform_hlds__pd_info__transform_hlds__pd_info__field_types_maybe_version_0_1[5];

static const MR_ConstString transform_hlds__pd_info__transform_hlds__pd_info__field_names_maybe_version_0_1[5];

static const MR_DuArgLocn transform_hlds__pd_info__transform_hlds__pd_info__field_locns_maybe_version_0_1[5];

static const MR_DuFunctorDesc transform_hlds__pd_info__transform_hlds__pd_info__du_functor_desc_maybe_version_0_1;

static const MR_DuFunctorDescPtr transform_hlds__pd_info__transform_hlds__pd_info__du_stag_ordered_maybe_version_0_0[1];

static const MR_DuFunctorDescPtr transform_hlds__pd_info__transform_hlds__pd_info__du_stag_ordered_maybe_version_0_1[1];

static const MR_DuPtagLayout transform_hlds__pd_info__transform_hlds__pd_info__du_ptag_ordered_maybe_version_0[2];

static const MR_DuFunctorDescPtr transform_hlds__pd_info__transform_hlds__pd_info__du_name_ordered_maybe_version_0[2];

static const MR_Integer transform_hlds__pd_info__transform_hlds__pd_info__functor_number_map_maybe_version_0[2];

static const MR_FA_TypeInfo_Struct1 transform_hlds__pd_info__transform_hlds__pd_info__ti_pd_branch_info_1builtin__type_ctor_info_int_0;

static const MR_FA_TypeInfo_Struct2 transform_hlds__pd_info__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0transform_hlds__pd_info__ti_pd_branch_info_1builtin__type_ctor_info_int_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__pd_info__set_ordlist__pti_set_ordlist_1__pseudo_1;

static const MR_PseudoTypeInfo transform_hlds__pd_info__transform_hlds__pd_info__field_types_pd_branch_info_1_0[3];

static const MR_DuFunctorDesc transform_hlds__pd_info__transform_hlds__pd_info__du_functor_desc_pd_branch_info_1_0;

static const MR_DuFunctorDescPtr transform_hlds__pd_info__transform_hlds__pd_info__du_stag_ordered_pd_branch_info_1_0[1];

static const MR_DuPtagLayout transform_hlds__pd_info__transform_hlds__pd_info__du_ptag_ordered_pd_branch_info_1[1];

static const MR_DuFunctorDescPtr transform_hlds__pd_info__transform_hlds__pd_info__du_name_ordered_pd_branch_info_1[1];

static const MR_Integer transform_hlds__pd_info__transform_hlds__pd_info__functor_number_map_pd_branch_info_1[1];

static const MR_FA_TypeInfo_Struct1 transform_hlds__pd_info__maybe__ti_maybe_1io__type_ctor_info_text_output_stream_0;

static const MR_FA_TypeInfo_Struct1 transform_hlds__pd_info__maybe__ti_maybe_1transform_hlds__pd_info__type_ctor_info_unfold_info_0;

static const MR_FA_TypeInfo_Struct2 transform_hlds__pd_info__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0transform_hlds__pd_info__type_ctor_info_version_info_0;

static const MR_FA_TypeInfo_Struct1 transform_hlds__pd_info__set_ordlist__ti_set_ordlist_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0;

static const MR_FA_TypeInfo_Struct2 transform_hlds__pd_info__pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0hlds__hlds_pred__type_ctor_info_pred_proc_id_0;

static const MR_FA_TypeInfo_Struct1 transform_hlds__pd_info__set_ordlist__ti_set_ordlist_1pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0hlds__hlds_pred__type_ctor_info_pred_proc_id_0;

static const MR_PseudoTypeInfo transform_hlds__pd_info__transform_hlds__pd_info__field_types_pd_info_0_0[13];

static const MR_ConstString transform_hlds__pd_info__transform_hlds__pd_info__field_names_pd_info_0_0[13];

static const MR_DuFunctorDesc transform_hlds__pd_info__transform_hlds__pd_info__du_functor_desc_pd_info_0_0;

static const MR_DuFunctorDescPtr transform_hlds__pd_info__transform_hlds__pd_info__du_stag_ordered_pd_info_0_0[1];

static const MR_DuPtagLayout transform_hlds__pd_info__transform_hlds__pd_info__du_ptag_ordered_pd_info_0[1];

static const MR_DuFunctorDescPtr transform_hlds__pd_info__transform_hlds__pd_info__du_name_ordered_pd_info_0[1];

static const MR_Integer transform_hlds__pd_info__transform_hlds__pd_info__functor_number_map_pd_info_0[1];

static const MR_FA_TypeInfo_Struct1 transform_hlds__pd_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0;

static const MR_FA_TypeInfo_Struct2 transform_hlds__pd_info__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0parse_tree__prog_data__type_ctor_info_mer_inst_0;

static const MR_FA_TypeInfo_Struct2 transform_hlds__pd_info__pair__ti_pair_2builtin__type_ctor_info_int_0builtin__type_ctor_info_int_0;

static const MR_FA_TypeInfo_Struct1 transform_hlds__pd_info__list__ti_list_1pair__ti_pair_2builtin__type_ctor_info_int_0builtin__type_ctor_info_int_0;

static const MR_FA_TypeInfo_Struct2 transform_hlds__pd_info__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0list__ti_list_1pair__ti_pair_2builtin__type_ctor_info_int_0builtin__type_ctor_info_int_0;

static const MR_PseudoTypeInfo transform_hlds__pd_info__transform_hlds__pd_info__field_types_unfold_info_0_0[11];

static const MR_ConstString transform_hlds__pd_info__transform_hlds__pd_info__field_names_unfold_info_0_0[11];

static const MR_DuArgLocn transform_hlds__pd_info__transform_hlds__pd_info__field_locns_unfold_info_0_0[11];

static const MR_DuFunctorDesc transform_hlds__pd_info__transform_hlds__pd_info__du_functor_desc_unfold_info_0_0;

static const MR_DuFunctorDescPtr transform_hlds__pd_info__transform_hlds__pd_info__du_stag_ordered_unfold_info_0_0[1];

static const MR_DuPtagLayout transform_hlds__pd_info__transform_hlds__pd_info__du_ptag_ordered_unfold_info_0[1];

static const MR_DuFunctorDescPtr transform_hlds__pd_info__transform_hlds__pd_info__du_name_ordered_unfold_info_0[1];

static const MR_Integer transform_hlds__pd_info__transform_hlds__pd_info__functor_number_map_unfold_info_0[1];

static const MR_FA_TypeInfo_Struct1 transform_hlds__pd_info__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct1 transform_hlds__pd_info__list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_type_0;

static const MR_FA_TypeInfo_Struct1 transform_hlds__pd_info__maybe__ti_maybe_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0;

static const MR_PseudoTypeInfo transform_hlds__pd_info__transform_hlds__pd_info__field_types_version_info_0_0[9];

static const MR_ConstString transform_hlds__pd_info__transform_hlds__pd_info__field_names_version_info_0_0[9];

static const MR_DuFunctorDesc transform_hlds__pd_info__transform_hlds__pd_info__du_functor_desc_version_info_0_0;

static const MR_DuFunctorDescPtr transform_hlds__pd_info__transform_hlds__pd_info__du_stag_ordered_version_info_0_0[1];

static const MR_DuPtagLayout transform_hlds__pd_info__transform_hlds__pd_info__du_ptag_ordered_version_info_0[1];

static const MR_DuFunctorDescPtr transform_hlds__pd_info__transform_hlds__pd_info__du_name_ordered_version_info_0[1];

static const MR_Integer transform_hlds__pd_info__transform_hlds__pd_info__functor_number_map_version_info_0[1];

static const MR_EnumFunctorDesc transform_hlds__pd_info__transform_hlds__pd_info__enum_functor_desc_version_is_exact_0_0;

static const MR_EnumFunctorDesc transform_hlds__pd_info__transform_hlds__pd_info__enum_functor_desc_version_is_exact_0_1;

static const MR_EnumFunctorDescPtr transform_hlds__pd_info__transform_hlds__pd_info__enum_ordinal_ordered_version_is_exact_0[2];

static const MR_EnumFunctorDescPtr transform_hlds__pd_info__transform_hlds__pd_info__enum_name_ordered_version_is_exact_0[2];

static const MR_Integer transform_hlds__pd_info__transform_hlds__pd_info__functor_number_map_version_is_exact_0[2];

static MR_bool MR_CALL 
transform_hlds__pd_info__pd_info_get_matching_version_7_p_0(
  MR_Word ModuleInfo_1,
  MR_Word ThisGoal_2,
  MR_Word ThisInstMap_3,
  MR_Word VarTable_4,
  MR_Word HeadVar__5_5,
  MR_Word Versions_6,
  MR_Word * HeadVar__7_7);

static void MR_CALL 
transform_hlds__pd_info__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_100_95_105_110_102_111_95_112_105_99_107_95_118_101_114_115_105_111_110_95_95_91_49_93_95_48_7_p_0(
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word HeadVar__6_6,
  MR_Word * HeadVar__7_7);

static MR_bool MR_CALL 
transform_hlds__pd_info__pd_info_check_insts_8_p_0(
  MR_Word ModuleInfo_1,
  MR_Word HeadVar__2_2,
  MR_Word VarRenaming_3,
  MR_Word OldInstMap_4,
  MR_Word NewInstMap_5,
  MR_Word VarTable_6,
  MR_Word STATE_VARIABLE_ExactSoFar_0_7,
  MR_Word * STATE_VARIABLE_ExactSoFar_8);

static MR_bool MR_CALL 
transform_hlds__pd_info____Unify____branch_info_map_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static void MR_CALL 
transform_hlds__pd_info____Compare____branch_info_map_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4);

static MR_bool MR_CALL 
transform_hlds__pd_info____Unify____goal_version_index_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__pd_info____Compare____goal_version_index_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__pd_info____Unify____maybe_version_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__pd_info____Compare____maybe_version_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__pd_info____Unify____pd_arg_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__pd_info____Compare____pd_arg_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__pd_info____Unify____pd_branch_info_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static void MR_CALL 
transform_hlds__pd_info____Compare____pd_branch_info_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4);

static MR_bool MR_CALL 
transform_hlds__pd_info____Unify____pd_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__pd_info____Compare____pd_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__pd_info____Unify____pd_proc_arg_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__pd_info____Compare____pd_proc_arg_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__pd_info____Unify____unfold_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__pd_info____Compare____unfold_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__pd_info____Unify____useless_versions_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__pd_info____Compare____useless_versions_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__pd_info____Unify____version_index_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__pd_info____Compare____version_index_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__pd_info____Unify____version_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__pd_info____Compare____version_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__pd_info____Unify____version_is_exact_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__pd_info____Compare____version_is_exact_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box transform_hlds__pd_info_scalar_common_1[13][2];

static /* final */ const MR_Box transform_hlds__pd_info_scalar_common_2[7][3];




static /* final */ const MR_Box transform_hlds__pd_info_scalar_common_1[13][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row   3 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row   4 */
  {
    ((MR_Box) (&transform_hlds__pd_info__transform_hlds__pd_info__type_ctor_info_pd_branch_info_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row   5 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0))
  },
  /* row   6 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&transform_hlds__pd_info__transform_hlds__pd_info__type_ctor_info_unfold_info_0))
  },
  /* row   7 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0))
  },
  /* row   8 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&transform_hlds__pd_info_scalar_common_2[0]))
  },
  /* row   9 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0))
  },
  /* row  10 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&transform_hlds__pd_info_scalar_common_1[1]))
  },
  /* row  11 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row  12 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0))
  },
};

static /* final */ const MR_Box transform_hlds__pd_info_scalar_common_2[7][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&transform_hlds__pd_info_scalar_common_1[0])),
    ((MR_Box) (&transform_hlds__pd_info_scalar_common_1[0]))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&transform_hlds__pd_info_scalar_common_1[1])),
    ((MR_Box) (&transform_hlds__pd_info_scalar_common_1[1]))
  },
  /* row   3 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&transform_hlds__pd_info_scalar_common_1[3])),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row   4 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&transform_hlds__pd_info_scalar_common_1[4]))
  },
  /* row   5 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&transform_hlds__pd_info__transform_hlds__pd_info__type_ctor_info_version_info_0))
  },
  /* row   6 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&transform_hlds__pd_info_scalar_common_1[9])),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


static const MR_FA_TypeInfo_Struct1 transform_hlds__pd_info__set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_int_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  { (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0) }
};

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__pd_info__tree234__pti_tree234_2__pseudo_1__plain_set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_int_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) ((MR_Integer) 1),
    (MR_PseudoTypeInfo) (&transform_hlds__pd_info__set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_int_0)
  }
};

const MR_TypeCtorInfo_Struct transform_hlds__pd_info__transform_hlds__pd_info__type_ctor_info_branch_info_map_1 = {
  (MR_Integer) 1,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV,
  ((MR_Box) (transform_hlds__pd_info____Unify____branch_info_map_1_0_10001)),
  ((MR_Box) (transform_hlds__pd_info____Compare____branch_info_map_1_0_10001)),
  (MR_String) "transform_hlds.pd_info",
  (MR_String) "branch_info_map",
  { NULL },
  { (MR_PseudoTypeInfo) (&transform_hlds__pd_info__tree234__pti_tree234_2__pseudo_1__plain_set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_int_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_FA_TypeInfo_Struct1 transform_hlds__pd_info__list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0) }
};

static const MR_FA_TypeInfo_Struct2 transform_hlds__pd_info__tree234__ti_tree234_2list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&transform_hlds__pd_info__list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0),
    (MR_TypeInfo) (&transform_hlds__pd_info__list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0)
  }
};

const MR_TypeCtorInfo_Struct transform_hlds__pd_info__transform_hlds__pd_info__type_ctor_info_goal_version_index_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (transform_hlds__pd_info____Unify____goal_version_index_0_0_10001)),
  ((MR_Box) (transform_hlds__pd_info____Compare____goal_version_index_0_0_10001)),
  (MR_String) "transform_hlds.pd_info",
  (MR_String) "goal_version_index",
  { NULL },
  { (MR_PseudoTypeInfo) (&transform_hlds__pd_info__tree234__ti_tree234_2list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_DuFunctorDesc transform_hlds__pd_info__transform_hlds__pd_info__du_functor_desc_maybe_version_0_0 = {
  (MR_String) "no_version",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 0,
  INT32_C(0),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__pd_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  { (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static const MR_FA_TypeInfo_Struct2 transform_hlds__pd_info__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&transform_hlds__pd_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
    (MR_TypeInfo) (&transform_hlds__pd_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__pd_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  { (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0) }
};

static const MR_FA_TypeInfo_Struct2 transform_hlds__pd_info__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&transform_hlds__pd_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0),
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)
  }
};

static const MR_PseudoTypeInfo transform_hlds__pd_info__transform_hlds__pd_info__field_types_maybe_version_0_1[5] = {
  (MR_PseudoTypeInfo) (&transform_hlds__pd_info__transform_hlds__pd_info__type_ctor_info_version_is_exact_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0),
  (MR_PseudoTypeInfo) (&transform_hlds__pd_info__transform_hlds__pd_info__type_ctor_info_version_info_0),
  (MR_PseudoTypeInfo) (&transform_hlds__pd_info__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
  (MR_PseudoTypeInfo) (&transform_hlds__pd_info__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0parse_tree__prog_data__type_ctor_info_mer_type_0)
};

static const MR_ConstString transform_hlds__pd_info__transform_hlds__pd_info__field_names_maybe_version_0_1[5] = {
  (MR_String) "mv_is_exact",
  (MR_String) "mv_ppid",
  (MR_String) "mv_version",
  (MR_String) "mv_renaming",
  (MR_String) "mv_tsubst"
};

static const MR_DuArgLocn transform_hlds__pd_info__transform_hlds__pd_info__field_locns_maybe_version_0_1[5] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 1
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
  }
};

static const MR_DuFunctorDesc transform_hlds__pd_info__transform_hlds__pd_info__du_functor_desc_maybe_version_0_1 = {
  (MR_String) "version",
  INT16_C(5),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  transform_hlds__pd_info__transform_hlds__pd_info__field_types_maybe_version_0_1,
  transform_hlds__pd_info__transform_hlds__pd_info__field_names_maybe_version_0_1,
  transform_hlds__pd_info__transform_hlds__pd_info__field_locns_maybe_version_0_1,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr transform_hlds__pd_info__transform_hlds__pd_info__du_stag_ordered_maybe_version_0_0[1] = { &transform_hlds__pd_info__transform_hlds__pd_info__du_functor_desc_maybe_version_0_0 };

static const MR_DuFunctorDescPtr transform_hlds__pd_info__transform_hlds__pd_info__du_stag_ordered_maybe_version_0_1[1] = { &transform_hlds__pd_info__transform_hlds__pd_info__du_functor_desc_maybe_version_0_1 };

static const MR_DuPtagLayout transform_hlds__pd_info__transform_hlds__pd_info__du_ptag_ordered_maybe_version_0[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    transform_hlds__pd_info__transform_hlds__pd_info__du_stag_ordered_maybe_version_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    transform_hlds__pd_info__transform_hlds__pd_info__du_stag_ordered_maybe_version_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr transform_hlds__pd_info__transform_hlds__pd_info__du_name_ordered_maybe_version_0[2] = {
  &transform_hlds__pd_info__transform_hlds__pd_info__du_functor_desc_maybe_version_0_0,
  &transform_hlds__pd_info__transform_hlds__pd_info__du_functor_desc_maybe_version_0_1
};

static const MR_Integer transform_hlds__pd_info__transform_hlds__pd_info__functor_number_map_maybe_version_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct transform_hlds__pd_info__transform_hlds__pd_info__type_ctor_info_maybe_version_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__pd_info____Unify____maybe_version_0_0_10001)),
  ((MR_Box) (transform_hlds__pd_info____Compare____maybe_version_0_0_10001)),
  (MR_String) "transform_hlds.pd_info",
  (MR_String) "maybe_version",
  { transform_hlds__pd_info__transform_hlds__pd_info__du_name_ordered_maybe_version_0 },
  { transform_hlds__pd_info__transform_hlds__pd_info__du_ptag_ordered_maybe_version_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  transform_hlds__pd_info__transform_hlds__pd_info__functor_number_map_maybe_version_0,

};

static const MR_FA_TypeInfo_Struct1 transform_hlds__pd_info__transform_hlds__pd_info__ti_pd_branch_info_1builtin__type_ctor_info_int_0 = {
  &transform_hlds__pd_info__transform_hlds__pd_info__type_ctor_info_pd_branch_info_1,
  { (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0) }
};

static const MR_FA_TypeInfo_Struct2 transform_hlds__pd_info__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0transform_hlds__pd_info__ti_pd_branch_info_1builtin__type_ctor_info_int_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0),
    (MR_TypeInfo) (&transform_hlds__pd_info__transform_hlds__pd_info__ti_pd_branch_info_1builtin__type_ctor_info_int_0)
  }
};

const MR_TypeCtorInfo_Struct transform_hlds__pd_info__transform_hlds__pd_info__type_ctor_info_pd_arg_info_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (transform_hlds__pd_info____Unify____pd_arg_info_0_0_10001)),
  ((MR_Box) (transform_hlds__pd_info____Compare____pd_arg_info_0_0_10001)),
  (MR_String) "transform_hlds.pd_info",
  (MR_String) "pd_arg_info",
  { NULL },
  { (MR_PseudoTypeInfo) (&transform_hlds__pd_info__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0transform_hlds__pd_info__ti_pd_branch_info_1builtin__type_ctor_info_int_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__pd_info__set_ordlist__pti_set_ordlist_1__pseudo_1 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  { (MR_PseudoTypeInfo) ((MR_Integer) 1) }
};

static const MR_PseudoTypeInfo transform_hlds__pd_info__transform_hlds__pd_info__field_types_pd_branch_info_1_0[3] = {
  (MR_PseudoTypeInfo) (&transform_hlds__pd_info__tree234__pti_tree234_2__pseudo_1__plain_set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&transform_hlds__pd_info__set_ordlist__pti_set_ordlist_1__pseudo_1),
  (MR_PseudoTypeInfo) (&transform_hlds__pd_info__set_ordlist__pti_set_ordlist_1__pseudo_1)
};

static const MR_DuFunctorDesc transform_hlds__pd_info__transform_hlds__pd_info__du_functor_desc_pd_branch_info_1_0 = {
  (MR_String) "pd_branch_info",
  INT16_C(3),
  UINT16_C(7),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  transform_hlds__pd_info__transform_hlds__pd_info__field_types_pd_branch_info_1_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr transform_hlds__pd_info__transform_hlds__pd_info__du_stag_ordered_pd_branch_info_1_0[1] = { &transform_hlds__pd_info__transform_hlds__pd_info__du_functor_desc_pd_branch_info_1_0 };

static const MR_DuPtagLayout transform_hlds__pd_info__transform_hlds__pd_info__du_ptag_ordered_pd_branch_info_1[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    transform_hlds__pd_info__transform_hlds__pd_info__du_stag_ordered_pd_branch_info_1_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr transform_hlds__pd_info__transform_hlds__pd_info__du_name_ordered_pd_branch_info_1[1] = { &transform_hlds__pd_info__transform_hlds__pd_info__du_functor_desc_pd_branch_info_1_0 };

static const MR_Integer transform_hlds__pd_info__transform_hlds__pd_info__functor_number_map_pd_branch_info_1[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct transform_hlds__pd_info__transform_hlds__pd_info__type_ctor_info_pd_branch_info_1 = {
  (MR_Integer) 1,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__pd_info____Unify____pd_branch_info_1_0_10001)),
  ((MR_Box) (transform_hlds__pd_info____Compare____pd_branch_info_1_0_10001)),
  (MR_String) "transform_hlds.pd_info",
  (MR_String) "pd_branch_info",
  { transform_hlds__pd_info__transform_hlds__pd_info__du_name_ordered_pd_branch_info_1 },
  { transform_hlds__pd_info__transform_hlds__pd_info__du_ptag_ordered_pd_branch_info_1 },
  (MR_Integer) 1,
  UINT16_C(12),
  transform_hlds__pd_info__transform_hlds__pd_info__functor_number_map_pd_branch_info_1,

};

static const MR_FA_TypeInfo_Struct1 transform_hlds__pd_info__maybe__ti_maybe_1io__type_ctor_info_text_output_stream_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  { (MR_TypeInfo) (&mercury__io__io__type_ctor_info_text_output_stream_0) }
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__pd_info__maybe__ti_maybe_1transform_hlds__pd_info__type_ctor_info_unfold_info_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  { (MR_TypeInfo) (&transform_hlds__pd_info__transform_hlds__pd_info__type_ctor_info_unfold_info_0) }
};

static const MR_FA_TypeInfo_Struct2 transform_hlds__pd_info__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0transform_hlds__pd_info__type_ctor_info_version_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0),
    (MR_TypeInfo) (&transform_hlds__pd_info__transform_hlds__pd_info__type_ctor_info_version_info_0)
  }
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__pd_info__set_ordlist__ti_set_ordlist_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  { (MR_TypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0) }
};

static const MR_FA_TypeInfo_Struct2 transform_hlds__pd_info__pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0hlds__hlds_pred__type_ctor_info_pred_proc_id_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0),
    (MR_TypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)
  }
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__pd_info__set_ordlist__ti_set_ordlist_1pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0hlds__hlds_pred__type_ctor_info_pred_proc_id_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  { (MR_TypeInfo) (&transform_hlds__pd_info__pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0hlds__hlds_pred__type_ctor_info_pred_proc_id_0) }
};

static const MR_PseudoTypeInfo transform_hlds__pd_info__transform_hlds__pd_info__field_types_pd_info_0_0[13] = {
  (MR_PseudoTypeInfo) (&mercury__io__io__type_ctor_info_text_output_stream_0),
  (MR_PseudoTypeInfo) (&transform_hlds__pd_info__maybe__ti_maybe_1io__type_ctor_info_text_output_stream_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0),
  (MR_PseudoTypeInfo) (&transform_hlds__pd_info__maybe__ti_maybe_1transform_hlds__pd_info__type_ctor_info_unfold_info_0),
  (MR_PseudoTypeInfo) (&transform_hlds__pd_info__tree234__ti_tree234_2list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0),
  (MR_PseudoTypeInfo) (&transform_hlds__pd_info__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0transform_hlds__pd_info__type_ctor_info_version_info_0),
  (MR_PseudoTypeInfo) (&transform_hlds__pd_info__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0transform_hlds__pd_info__ti_pd_branch_info_1builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__counter__counter__type_ctor_info_counter_0),
  (MR_PseudoTypeInfo) (&transform_hlds__pd_term__transform_hlds__pd_term__type_ctor_info_global_term_info_0),
  (MR_PseudoTypeInfo) (&transform_hlds__pd_info__set_ordlist__ti_set_ordlist_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&transform_hlds__pd_info__set_ordlist__ti_set_ordlist_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0),
  (MR_PseudoTypeInfo) (&transform_hlds__pd_info__set_ordlist__ti_set_ordlist_1pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0hlds__hlds_pred__type_ctor_info_pred_proc_id_0)
};

static const MR_ConstString transform_hlds__pd_info__transform_hlds__pd_info__field_names_pd_info_0_0[13] = {
  (MR_String) "pdi_progress_stream",
  (MR_String) "pdi_maybe_debug_stream",
  (MR_String) "pdi_module_info",
  (MR_String) "pdi_maybe_unfold_info",
  (MR_String) "pdi_goal_version_index",
  (MR_String) "pdi_versions",
  (MR_String) "pdi_proc_arg_info",
  (MR_String) "pdi_counter",
  (MR_String) "pdi_global_term_info",
  (MR_String) "pdi_parent_versions",
  (MR_String) "pdi_depth",
  (MR_String) "pdi_created_versions",
  (MR_String) "pdi_useless_versions"
};

static const MR_DuFunctorDesc transform_hlds__pd_info__transform_hlds__pd_info__du_functor_desc_pd_info_0_0 = {
  (MR_String) "pd_info",
  INT16_C(13),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  transform_hlds__pd_info__transform_hlds__pd_info__field_types_pd_info_0_0,
  transform_hlds__pd_info__transform_hlds__pd_info__field_names_pd_info_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr transform_hlds__pd_info__transform_hlds__pd_info__du_stag_ordered_pd_info_0_0[1] = { &transform_hlds__pd_info__transform_hlds__pd_info__du_functor_desc_pd_info_0_0 };

static const MR_DuPtagLayout transform_hlds__pd_info__transform_hlds__pd_info__du_ptag_ordered_pd_info_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    transform_hlds__pd_info__transform_hlds__pd_info__du_stag_ordered_pd_info_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr transform_hlds__pd_info__transform_hlds__pd_info__du_name_ordered_pd_info_0[1] = { &transform_hlds__pd_info__transform_hlds__pd_info__du_functor_desc_pd_info_0_0 };

static const MR_Integer transform_hlds__pd_info__transform_hlds__pd_info__functor_number_map_pd_info_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct transform_hlds__pd_info__transform_hlds__pd_info__type_ctor_info_pd_info_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__pd_info____Unify____pd_info_0_0_10001)),
  ((MR_Box) (transform_hlds__pd_info____Compare____pd_info_0_0_10001)),
  (MR_String) "transform_hlds.pd_info",
  (MR_String) "pd_info",
  { transform_hlds__pd_info__transform_hlds__pd_info__du_name_ordered_pd_info_0 },
  { transform_hlds__pd_info__transform_hlds__pd_info__du_ptag_ordered_pd_info_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  transform_hlds__pd_info__transform_hlds__pd_info__functor_number_map_pd_info_0,

};

const MR_TypeCtorInfo_Struct transform_hlds__pd_info__transform_hlds__pd_info__type_ctor_info_pd_proc_arg_info_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (transform_hlds__pd_info____Unify____pd_proc_arg_info_0_0_10001)),
  ((MR_Box) (transform_hlds__pd_info____Compare____pd_proc_arg_info_0_0_10001)),
  (MR_String) "transform_hlds.pd_info",
  (MR_String) "pd_proc_arg_info",
  { NULL },
  { (MR_PseudoTypeInfo) (&transform_hlds__pd_info__transform_hlds__pd_info__ti_pd_branch_info_1builtin__type_ctor_info_int_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_FA_TypeInfo_Struct1 transform_hlds__pd_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  { (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0) }
};

static const MR_FA_TypeInfo_Struct2 transform_hlds__pd_info__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0parse_tree__prog_data__type_ctor_info_mer_inst_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&transform_hlds__pd_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0),
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0)
  }
};

static const MR_FA_TypeInfo_Struct2 transform_hlds__pd_info__pair__ti_pair_2builtin__type_ctor_info_int_0builtin__type_ctor_info_int_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
    (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
  }
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__pd_info__list__ti_list_1pair__ti_pair_2builtin__type_ctor_info_int_0builtin__type_ctor_info_int_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&transform_hlds__pd_info__pair__ti_pair_2builtin__type_ctor_info_int_0builtin__type_ctor_info_int_0) }
};

static const MR_FA_TypeInfo_Struct2 transform_hlds__pd_info__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0list__ti_list_1pair__ti_pair_2builtin__type_ctor_info_int_0builtin__type_ctor_info_int_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0),
    (MR_TypeInfo) (&transform_hlds__pd_info__list__ti_list_1pair__ti_pair_2builtin__type_ctor_info_int_0builtin__type_ctor_info_int_0)
  }
};

static const MR_PseudoTypeInfo transform_hlds__pd_info__transform_hlds__pd_info__field_types_unfold_info_0_0[11] = {
  (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0),
  (MR_PseudoTypeInfo) (&transform_hlds__pd_info__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0parse_tree__prog_data__type_ctor_info_mer_inst_0),
  (MR_PseudoTypeInfo) (&hlds__instmap__hlds__instmap__type_ctor_info_instmap_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&transform_hlds__pd_info__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0list__ti_list_1pair__ti_pair_2builtin__type_ctor_info_int_0builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0),
  (MR_PseudoTypeInfo) (&transform_hlds__pd_info__set_ordlist__ti_set_ordlist_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__bool__bool__type_ctor_info_bool_0),
  (MR_PseudoTypeInfo) (&mercury__bool__bool__type_ctor_info_bool_0)
};

static const MR_ConstString transform_hlds__pd_info__transform_hlds__pd_info__field_names_unfold_info_0_0[11] = {
  (MR_String) "ufi_proc_info",
  (MR_String) "ufi_head_inst_vars",
  (MR_String) "ufi_instmap",
  (MR_String) "ufi_cost_delta",
  (MR_String) "ufi_local_term_info",
  (MR_String) "ufi_pred_info",
  (MR_String) "ufi_parents",
  (MR_String) "ufi_pred_proc_id",
  (MR_String) "ufi_size_delta",
  (MR_String) "ufi_changed",
  (MR_String) "ufi_rerun_det"
};

static const MR_DuArgLocn transform_hlds__pd_info__transform_hlds__pd_info__field_locns_unfold_info_0_0[11] = {
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
    (MR_Integer) 0
  },
  {
    (MR_Integer) 6,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 7,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 8,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 9,
    (MR_Integer) 1,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 9,
    (MR_Integer) 0,
    (MR_Integer) 1
  }
};

static const MR_DuFunctorDesc transform_hlds__pd_info__transform_hlds__pd_info__du_functor_desc_unfold_info_0_0 = {
  (MR_String) "unfold_info",
  INT16_C(11),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  transform_hlds__pd_info__transform_hlds__pd_info__field_types_unfold_info_0_0,
  transform_hlds__pd_info__transform_hlds__pd_info__field_names_unfold_info_0_0,
  transform_hlds__pd_info__transform_hlds__pd_info__field_locns_unfold_info_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr transform_hlds__pd_info__transform_hlds__pd_info__du_stag_ordered_unfold_info_0_0[1] = { &transform_hlds__pd_info__transform_hlds__pd_info__du_functor_desc_unfold_info_0_0 };

static const MR_DuPtagLayout transform_hlds__pd_info__transform_hlds__pd_info__du_ptag_ordered_unfold_info_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    transform_hlds__pd_info__transform_hlds__pd_info__du_stag_ordered_unfold_info_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr transform_hlds__pd_info__transform_hlds__pd_info__du_name_ordered_unfold_info_0[1] = { &transform_hlds__pd_info__transform_hlds__pd_info__du_functor_desc_unfold_info_0_0 };

static const MR_Integer transform_hlds__pd_info__transform_hlds__pd_info__functor_number_map_unfold_info_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct transform_hlds__pd_info__transform_hlds__pd_info__type_ctor_info_unfold_info_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__pd_info____Unify____unfold_info_0_0_10001)),
  ((MR_Box) (transform_hlds__pd_info____Compare____unfold_info_0_0_10001)),
  (MR_String) "transform_hlds.pd_info",
  (MR_String) "unfold_info",
  { transform_hlds__pd_info__transform_hlds__pd_info__du_name_ordered_unfold_info_0 },
  { transform_hlds__pd_info__transform_hlds__pd_info__du_ptag_ordered_unfold_info_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  transform_hlds__pd_info__transform_hlds__pd_info__functor_number_map_unfold_info_0,

};

const MR_TypeCtorInfo_Struct transform_hlds__pd_info__transform_hlds__pd_info__type_ctor_info_useless_versions_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (transform_hlds__pd_info____Unify____useless_versions_0_0_10001)),
  ((MR_Box) (transform_hlds__pd_info____Compare____useless_versions_0_0_10001)),
  (MR_String) "transform_hlds.pd_info",
  (MR_String) "useless_versions",
  { NULL },
  { (MR_PseudoTypeInfo) (&transform_hlds__pd_info__set_ordlist__ti_set_ordlist_1pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0hlds__hlds_pred__type_ctor_info_pred_proc_id_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

const MR_TypeCtorInfo_Struct transform_hlds__pd_info__transform_hlds__pd_info__type_ctor_info_version_index_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (transform_hlds__pd_info____Unify____version_index_0_0_10001)),
  ((MR_Box) (transform_hlds__pd_info____Compare____version_index_0_0_10001)),
  (MR_String) "transform_hlds.pd_info",
  (MR_String) "version_index",
  { NULL },
  { (MR_PseudoTypeInfo) (&transform_hlds__pd_info__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0transform_hlds__pd_info__type_ctor_info_version_info_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_FA_TypeInfo_Struct1 transform_hlds__pd_info__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&transform_hlds__pd_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__pd_info__list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0) }
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__pd_info__maybe__ti_maybe_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  { (MR_TypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0) }
};

static const MR_PseudoTypeInfo transform_hlds__pd_info__transform_hlds__pd_info__field_types_version_info_0_0[9] = {
  (MR_PseudoTypeInfo) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0),
  (MR_PseudoTypeInfo) (&transform_hlds__pd_info__list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0),
  (MR_PseudoTypeInfo) (&transform_hlds__pd_info__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
  (MR_PseudoTypeInfo) (&transform_hlds__pd_info__list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_type_0),
  (MR_PseudoTypeInfo) (&hlds__instmap__hlds__instmap__type_ctor_info_instmap_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&transform_hlds__pd_info__set_ordlist__ti_set_ordlist_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0),
  (MR_PseudoTypeInfo) (&transform_hlds__pd_info__maybe__ti_maybe_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0)
};

static const MR_ConstString transform_hlds__pd_info__transform_hlds__pd_info__field_names_version_info_0_0[9] = {
  (MR_String) "version_orig_goal",
  (MR_String) "version_deforest_calls",
  (MR_String) "version_arg_vars",
  (MR_String) "version_arg_types",
  (MR_String) "version_init_insts",
  (MR_String) "version_orig_cost",
  (MR_String) "version_cost_improv",
  (MR_String) "version_parents",
  (MR_String) "version_source"
};

static const MR_DuFunctorDesc transform_hlds__pd_info__transform_hlds__pd_info__du_functor_desc_version_info_0_0 = {
  (MR_String) "version_info",
  INT16_C(9),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  transform_hlds__pd_info__transform_hlds__pd_info__field_types_version_info_0_0,
  transform_hlds__pd_info__transform_hlds__pd_info__field_names_version_info_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr transform_hlds__pd_info__transform_hlds__pd_info__du_stag_ordered_version_info_0_0[1] = { &transform_hlds__pd_info__transform_hlds__pd_info__du_functor_desc_version_info_0_0 };

static const MR_DuPtagLayout transform_hlds__pd_info__transform_hlds__pd_info__du_ptag_ordered_version_info_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    transform_hlds__pd_info__transform_hlds__pd_info__du_stag_ordered_version_info_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr transform_hlds__pd_info__transform_hlds__pd_info__du_name_ordered_version_info_0[1] = { &transform_hlds__pd_info__transform_hlds__pd_info__du_functor_desc_version_info_0_0 };

static const MR_Integer transform_hlds__pd_info__transform_hlds__pd_info__functor_number_map_version_info_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct transform_hlds__pd_info__transform_hlds__pd_info__type_ctor_info_version_info_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__pd_info____Unify____version_info_0_0_10001)),
  ((MR_Box) (transform_hlds__pd_info____Compare____version_info_0_0_10001)),
  (MR_String) "transform_hlds.pd_info",
  (MR_String) "version_info",
  { transform_hlds__pd_info__transform_hlds__pd_info__du_name_ordered_version_info_0 },
  { transform_hlds__pd_info__transform_hlds__pd_info__du_ptag_ordered_version_info_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  transform_hlds__pd_info__transform_hlds__pd_info__functor_number_map_version_info_0,

};

static const MR_EnumFunctorDesc transform_hlds__pd_info__transform_hlds__pd_info__enum_functor_desc_version_is_exact_0_0 = {
  (MR_String) "exact",
  INT32_C(0)
};

static const MR_EnumFunctorDesc transform_hlds__pd_info__transform_hlds__pd_info__enum_functor_desc_version_is_exact_0_1 = {
  (MR_String) "more_general",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr transform_hlds__pd_info__transform_hlds__pd_info__enum_ordinal_ordered_version_is_exact_0[2] = {
  &transform_hlds__pd_info__transform_hlds__pd_info__enum_functor_desc_version_is_exact_0_0,
  &transform_hlds__pd_info__transform_hlds__pd_info__enum_functor_desc_version_is_exact_0_1
};

static const MR_EnumFunctorDescPtr transform_hlds__pd_info__transform_hlds__pd_info__enum_name_ordered_version_is_exact_0[2] = {
  &transform_hlds__pd_info__transform_hlds__pd_info__enum_functor_desc_version_is_exact_0_0,
  &transform_hlds__pd_info__transform_hlds__pd_info__enum_functor_desc_version_is_exact_0_1
};

static const MR_Integer transform_hlds__pd_info__transform_hlds__pd_info__functor_number_map_version_is_exact_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct transform_hlds__pd_info__transform_hlds__pd_info__type_ctor_info_version_is_exact_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (transform_hlds__pd_info____Unify____version_is_exact_0_0_10001)),
  ((MR_Box) (transform_hlds__pd_info____Compare____version_is_exact_0_0_10001)),
  (MR_String) "transform_hlds.pd_info",
  (MR_String) "version_is_exact",
  { transform_hlds__pd_info__transform_hlds__pd_info__enum_name_ordered_version_is_exact_0 },
  { transform_hlds__pd_info__transform_hlds__pd_info__enum_ordinal_ordered_version_is_exact_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  transform_hlds__pd_info__transform_hlds__pd_info__functor_number_map_version_is_exact_0,

};

void MR_CALL 
transform_hlds__pd_info____Compare____version_is_exact_0_0(
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
transform_hlds__pd_info____Unify____version_is_exact_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
transform_hlds__pd_info____Compare____version_index_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__pd_info_scalar_common_2[5]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

MR_bool MR_CALL 
transform_hlds__pd_info____Unify____version_index_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&transform_hlds__pd_info_scalar_common_2[5]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

void MR_CALL 
transform_hlds__pd_info____Compare____useless_versions_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__pd_info_scalar_common_1[8]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

MR_bool MR_CALL 
transform_hlds__pd_info____Unify____useless_versions_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&transform_hlds__pd_info_scalar_common_1[8]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

void MR_CALL 
transform_hlds__pd_info____Compare____unfold_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_36 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_37 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_36 == CastY_37);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 1))));
    MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 2))));
    MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 2))));
    MR_Integer ArgX4_13 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 3))));
    MR_Integer ArgY4_14 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, 3))));
    MR_Word ArgX5_16 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 4))));
    MR_Word ArgY5_17 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 4))));
    MR_Word ArgX6_19 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 5))));
    MR_Word ArgY6_20 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 5))));
    MR_Word ArgX7_22 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 6))));
    MR_Word ArgY7_23 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 6))));
    MR_Word ArgX8_25 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 7))));
    MR_Word ArgY8_26 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 7))));
    MR_Integer ArgX9_28 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 8))));
    MR_Integer ArgY9_29 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, 8))));
    MR_Word ArgX10_31 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 9))) >> 1)) & (MR_Integer) 1);
    MR_Word ArgY10_32 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, 9))) >> 1)) & (MR_Integer) 1);
    MR_Word ArgX11_34 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 9))) & (MR_Integer) 1);
    MR_Word ArgY11_35 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, 9))) & (MR_Integer) 1);
    MR_Word SubResult1_6;

    hlds__hlds_pred____Compare____proc_info_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;

      mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__pd_info_scalar_common_2[6]), &SubResult2_9, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
      succeeded = (SubResult2_9 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
      {
        MR_Word SubResult3_12;

        hlds__instmap____Compare____instmap_0_0(&SubResult3_12, ArgX3_10, ArgY3_11);
        succeeded = (SubResult3_12 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult3_12;
        else
        {
          MR_Word SubResult4_15;

          succeeded = (ArgX4_13 < ArgY4_14);
          if (succeeded)
          {
            SubResult4_15 = (MR_Integer) 1;
            succeeded = MR_TRUE;
          }
          else
          {
            succeeded = (ArgX4_13 > ArgY4_14);
            if (succeeded)
            {
              SubResult4_15 = (MR_Integer) 2;
              succeeded = MR_TRUE;
            }
          }
          if (succeeded)
            *HeadVar__1_1 = SubResult4_15;
          else
          {
            MR_Word SubResult5_18;

            mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__pd_term__transform_hlds__pd_term__type_ctor_info_local_term_info_0), &SubResult5_18, ((MR_Box) (ArgX5_16)), ((MR_Box) (ArgY5_17)));
            succeeded = (SubResult5_18 != (MR_Integer) 0);
            if (succeeded)
              *HeadVar__1_1 = SubResult5_18;
            else
            {
              MR_Word SubResult6_21;

              hlds__hlds_pred____Compare____pred_info_0_0(&SubResult6_21, ArgX6_19, ArgY6_20);
              succeeded = (SubResult6_21 != (MR_Integer) 0);
              if (succeeded)
                *HeadVar__1_1 = SubResult6_21;
              else
              {
                MR_Word SubResult7_24;

                mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__pd_info_scalar_common_1[7]), &SubResult7_24, ((MR_Box) (ArgX7_22)), ((MR_Box) (ArgY7_23)));
                succeeded = (SubResult7_24 != (MR_Integer) 0);
                if (succeeded)
                  *HeadVar__1_1 = SubResult7_24;
                else
                {
                  MR_Word SubResult8_27;

                  hlds__hlds_pred____Compare____pred_proc_id_0_0(&SubResult8_27, ArgX8_25, ArgY8_26);
                  succeeded = (SubResult8_27 != (MR_Integer) 0);
                  if (succeeded)
                    *HeadVar__1_1 = SubResult8_27;
                  else
                  {
                    MR_Word SubResult9_30;

                    succeeded = (ArgX9_28 < ArgY9_29);
                    if (succeeded)
                    {
                      SubResult9_30 = (MR_Integer) 1;
                      succeeded = MR_TRUE;
                    }
                    else
                    {
                      succeeded = (ArgX9_28 > ArgY9_29);
                      if (succeeded)
                      {
                        SubResult9_30 = (MR_Integer) 2;
                        succeeded = MR_TRUE;
                      }
                    }
                    if (succeeded)
                      *HeadVar__1_1 = SubResult9_30;
                    else
                    {
                      MR_Word SubResult10_33;
                      MR_Integer Var_49 = (MR_Integer) (ArgX10_31);
                      MR_Integer Var_50 = (MR_Integer) (ArgY10_32);

                      succeeded = (Var_49 < Var_50);
                      if (succeeded)
                      {
                        SubResult10_33 = (MR_Integer) 1;
                        succeeded = MR_TRUE;
                      }
                      else
                      {
                        succeeded = (Var_49 > Var_50);
                        if (succeeded)
                        {
                          SubResult10_33 = (MR_Integer) 2;
                          succeeded = MR_TRUE;
                        }
                      }
                      if (succeeded)
                        *HeadVar__1_1 = SubResult10_33;
                      else
                      {
                        MR_Integer Var_51 = (MR_Integer) (ArgX11_34);
                        MR_Integer Var_52 = (MR_Integer) (ArgY11_35);

                        succeeded = (Var_51 < Var_52);
                        if (succeeded)
                          *HeadVar__1_1 = (MR_Integer) 1;
                        else
                        {
                          succeeded = (Var_51 > Var_52);
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
      }
    }
  }
}

MR_bool MR_CALL 
transform_hlds__pd_info____Unify____unfold_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_25 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_26 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_25 == CastY_26);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Word TypeInfo_28_28;
    MR_Word TypeCtorInfo_30_30;
    MR_Word TypeInfo_32_32;
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 2))));
    MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 2))));
    MR_Integer ArgX4_9 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, 3))));
    MR_Integer ArgY4_10 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 3))));
    MR_Word ArgX5_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 4))));
    MR_Word ArgY5_12 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 4))));
    MR_Word ArgX6_13 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 5))));
    MR_Word ArgY6_14 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 5))));
    MR_Word ArgX7_15 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 6))));
    MR_Word ArgY7_16 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 6))));
    MR_Word ArgX8_17 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 7))));
    MR_Word ArgY8_18 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 7))));
    MR_Integer ArgX9_19 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, 8))));
    MR_Integer ArgY9_20 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 8))));
    MR_Word ArgX10_21 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, 9))) >> 1)) & (MR_Integer) 1);
    MR_Word ArgY10_22 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 9))) >> 1)) & (MR_Integer) 1);
    MR_Word ArgX11_23 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, 9))) & (MR_Integer) 1);
    MR_Word ArgY11_24 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 9))) & (MR_Integer) 1);

    succeeded = hlds__hlds_pred____Unify____proc_info_0_0(ArgX1_3, ArgY1_4);
    if (succeeded)
    {
      TypeInfo_28_28 = (MR_Word) (&transform_hlds__pd_info_scalar_common_2[6]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_28_28, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
      if (succeeded)
      {
        succeeded = hlds__instmap____Unify____instmap_0_0(ArgX3_7, ArgY3_8);
        if (succeeded)
        {
          succeeded = (ArgX4_9 == ArgY4_10);
          if (succeeded)
          {
            TypeCtorInfo_30_30 = (MR_Word) (&transform_hlds__pd_term__transform_hlds__pd_term__type_ctor_info_local_term_info_0);
            succeeded = mercury__builtin__unify_2_p_0(TypeCtorInfo_30_30, ((MR_Box) (ArgX5_11)), ((MR_Box) (ArgY5_12)));
            if (succeeded)
            {
              succeeded = hlds__hlds_pred____Unify____pred_info_0_0(ArgX6_13, ArgY6_14);
              if (succeeded)
              {
                TypeInfo_32_32 = (MR_Word) (&transform_hlds__pd_info_scalar_common_1[7]);
                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_32_32, ((MR_Box) (ArgX7_15)), ((MR_Box) (ArgY7_16)));
                if (succeeded)
                {
                  succeeded = hlds__hlds_pred____Unify____pred_proc_id_0_0(ArgX8_17, ArgY8_18);
                  if (succeeded)
                  {
                    succeeded = (ArgX9_19 == ArgY9_20);
                    if (succeeded)
                    {
                      succeeded = (ArgX10_21 == ArgY10_22);
                      if (succeeded)
                        succeeded = (ArgX11_23 == ArgY11_24);
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

void MR_CALL 
transform_hlds__pd_info____Compare____pd_proc_arg_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__pd_info_scalar_common_1[4]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

MR_bool MR_CALL 
transform_hlds__pd_info____Unify____pd_proc_arg_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = transform_hlds__pd_info____Unify____pd_branch_info_1_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), Cast_HeadVar1_3, Cast_HeadVar2_4);
  return succeeded;
}

void MR_CALL 
transform_hlds__pd_info____Compare____pd_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_42 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_43 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_42 == CastY_43);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 1))));
    MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 2))));
    MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 2))));
    MR_Word ArgX4_13 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 3))));
    MR_Word ArgY4_14 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 3))));
    MR_Word ArgX5_16 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 4))));
    MR_Word ArgY5_17 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 4))));
    MR_Word ArgX6_19 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 5))));
    MR_Word ArgY6_20 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 5))));
    MR_Word ArgX7_22 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 6))));
    MR_Word ArgY7_23 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 6))));
    MR_Word ArgX8_25 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 7))));
    MR_Word ArgY8_26 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 7))));
    MR_Word ArgX9_28 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 8))));
    MR_Word ArgY9_29 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 8))));
    MR_Word ArgX10_31 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 9))));
    MR_Word ArgY10_32 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 9))));
    MR_Integer ArgX11_34 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 10))));
    MR_Integer ArgY11_35 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, 10))));
    MR_Word ArgX12_37 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 11))));
    MR_Word ArgY12_38 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 11))));
    MR_Word ArgX13_40 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 12))));
    MR_Word ArgY13_41 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 12))));
    MR_Word SubResult1_6;

    mercury__io____Compare____text_output_stream_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;

      mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__pd_info_scalar_common_1[5]), &SubResult2_9, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
      succeeded = (SubResult2_9 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
      {
        MR_Word SubResult3_12;

        hlds__hlds_module____Compare____module_info_0_0(&SubResult3_12, ArgX3_10, ArgY3_11);
        succeeded = (SubResult3_12 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult3_12;
        else
        {
          MR_Word SubResult4_15;

          mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__pd_info_scalar_common_1[6]), &SubResult4_15, ((MR_Box) (ArgX4_13)), ((MR_Box) (ArgY4_14)));
          succeeded = (SubResult4_15 != (MR_Integer) 0);
          if (succeeded)
            *HeadVar__1_1 = SubResult4_15;
          else
          {
            MR_Word SubResult5_18;

            mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__pd_info_scalar_common_2[1]), &SubResult5_18, ((MR_Box) (ArgX5_16)), ((MR_Box) (ArgY5_17)));
            succeeded = (SubResult5_18 != (MR_Integer) 0);
            if (succeeded)
              *HeadVar__1_1 = SubResult5_18;
            else
            {
              MR_Word SubResult6_21;

              mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__pd_info_scalar_common_2[5]), &SubResult6_21, ((MR_Box) (ArgX6_19)), ((MR_Box) (ArgY6_20)));
              succeeded = (SubResult6_21 != (MR_Integer) 0);
              if (succeeded)
                *HeadVar__1_1 = SubResult6_21;
              else
              {
                MR_Word SubResult7_24;

                mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__pd_info_scalar_common_2[4]), &SubResult7_24, ((MR_Box) (ArgX7_22)), ((MR_Box) (ArgY7_23)));
                succeeded = (SubResult7_24 != (MR_Integer) 0);
                if (succeeded)
                  *HeadVar__1_1 = SubResult7_24;
                else
                {
                  MR_Word SubResult8_27;

                  mercury__counter____Compare____counter_0_0(&SubResult8_27, ArgX8_25, ArgY8_26);
                  succeeded = (SubResult8_27 != (MR_Integer) 0);
                  if (succeeded)
                    *HeadVar__1_1 = SubResult8_27;
                  else
                  {
                    MR_Word SubResult9_30;

                    transform_hlds__pd_term____Compare____global_term_info_0_0(&SubResult9_30, ArgX9_28, ArgY9_29);
                    succeeded = (SubResult9_30 != (MR_Integer) 0);
                    if (succeeded)
                      *HeadVar__1_1 = SubResult9_30;
                    else
                    {
                      MR_Word SubResult10_33;

                      mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__pd_info_scalar_common_1[7]), &SubResult10_33, ((MR_Box) (ArgX10_31)), ((MR_Box) (ArgY10_32)));
                      succeeded = (SubResult10_33 != (MR_Integer) 0);
                      if (succeeded)
                        *HeadVar__1_1 = SubResult10_33;
                      else
                      {
                        MR_Word SubResult11_36;

                        succeeded = (ArgX11_34 < ArgY11_35);
                        if (succeeded)
                        {
                          SubResult11_36 = (MR_Integer) 1;
                          succeeded = MR_TRUE;
                        }
                        else
                        {
                          succeeded = (ArgX11_34 > ArgY11_35);
                          if (succeeded)
                          {
                            SubResult11_36 = (MR_Integer) 2;
                            succeeded = MR_TRUE;
                          }
                        }
                        if (succeeded)
                          *HeadVar__1_1 = SubResult11_36;
                        else
                        {
                          MR_Word SubResult12_39;

                          mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__pd_info_scalar_common_1[7]), &SubResult12_39, ((MR_Box) (ArgX12_37)), ((MR_Box) (ArgY12_38)));
                          succeeded = (SubResult12_39 != (MR_Integer) 0);
                          if (succeeded)
                            *HeadVar__1_1 = SubResult12_39;
                          else
                            mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__pd_info_scalar_common_1[8]), HeadVar__1_1, ((MR_Box) (ArgX13_40)), ((MR_Box) (ArgY13_41)));
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

MR_bool MR_CALL 
transform_hlds__pd_info____Unify____pd_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_29 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_30 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_29 == CastY_30);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Word TypeInfo_32_32;
    MR_Word TypeInfo_34_34;
    MR_Word TypeInfo_35_35;
    MR_Word TypeInfo_36_36;
    MR_Word TypeInfo_37_37;
    MR_Word TypeInfo_40_40;
    MR_Word TypeInfo_41_41;
    MR_Word TypeInfo_42_42;
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 2))));
    MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 2))));
    MR_Word ArgX4_9 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 3))));
    MR_Word ArgY4_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 3))));
    MR_Word ArgX5_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 4))));
    MR_Word ArgY5_12 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 4))));
    MR_Word ArgX6_13 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 5))));
    MR_Word ArgY6_14 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 5))));
    MR_Word ArgX7_15 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 6))));
    MR_Word ArgY7_16 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 6))));
    MR_Word ArgX8_17 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 7))));
    MR_Word ArgY8_18 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 7))));
    MR_Word ArgX9_19 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 8))));
    MR_Word ArgY9_20 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 8))));
    MR_Word ArgX10_21 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 9))));
    MR_Word ArgY10_22 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 9))));
    MR_Integer ArgX11_23 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, 10))));
    MR_Integer ArgY11_24 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 10))));
    MR_Word ArgX12_25 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 11))));
    MR_Word ArgY12_26 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 11))));
    MR_Word ArgX13_27 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 12))));
    MR_Word ArgY13_28 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 12))));

    succeeded = mercury__io____Unify____text_output_stream_0_0(ArgX1_3, ArgY1_4);
    if (succeeded)
    {
      TypeInfo_32_32 = (MR_Word) (&transform_hlds__pd_info_scalar_common_1[5]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_32_32, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
      if (succeeded)
      {
        succeeded = hlds__hlds_module____Unify____module_info_0_0(ArgX3_7, ArgY3_8);
        if (succeeded)
        {
          TypeInfo_34_34 = (MR_Word) (&transform_hlds__pd_info_scalar_common_1[6]);
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_34_34, ((MR_Box) (ArgX4_9)), ((MR_Box) (ArgY4_10)));
          if (succeeded)
          {
            TypeInfo_35_35 = (MR_Word) (&transform_hlds__pd_info_scalar_common_2[1]);
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_35_35, ((MR_Box) (ArgX5_11)), ((MR_Box) (ArgY5_12)));
            if (succeeded)
            {
              TypeInfo_36_36 = (MR_Word) (&transform_hlds__pd_info_scalar_common_2[5]);
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_36_36, ((MR_Box) (ArgX6_13)), ((MR_Box) (ArgY6_14)));
              if (succeeded)
              {
                TypeInfo_37_37 = (MR_Word) (&transform_hlds__pd_info_scalar_common_2[4]);
                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_37_37, ((MR_Box) (ArgX7_15)), ((MR_Box) (ArgY7_16)));
                if (succeeded)
                {
                  succeeded = mercury__counter____Unify____counter_0_0(ArgX8_17, ArgY8_18);
                  if (succeeded)
                  {
                    succeeded = transform_hlds__pd_term____Unify____global_term_info_0_0(ArgX9_19, ArgY9_20);
                    if (succeeded)
                    {
                      TypeInfo_40_40 = (MR_Word) (&transform_hlds__pd_info_scalar_common_1[7]);
                      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_40_40, ((MR_Box) (ArgX10_21)), ((MR_Box) (ArgY10_22)));
                      if (succeeded)
                      {
                        succeeded = (ArgX11_23 == ArgY11_24);
                        if (succeeded)
                        {
                          TypeInfo_41_41 = (MR_Word) (&transform_hlds__pd_info_scalar_common_1[7]);
                          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_41_41, ((MR_Box) (ArgX12_25)), ((MR_Box) (ArgY12_26)));
                          if (succeeded)
                          {
                            TypeInfo_42_42 = (MR_Word) (&transform_hlds__pd_info_scalar_common_1[8]);
                            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_42_42, ((MR_Box) (ArgX13_27)), ((MR_Box) (ArgY13_28)));
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
  return succeeded;
}

void MR_CALL 
transform_hlds__pd_info____Compare____pd_branch_info_1_0(
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
  {
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 1))));
    MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 2))));
    MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 2))));
    MR_Word SubResult1_6;

    mercury__tree234____Compare____tree234_2_0(TypeInfo_for_T_14, (MR_Word) (&transform_hlds__pd_info_scalar_common_1[2]), &SubResult1_6, ArgX1_4, ArgY1_5);
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;

      mercury__set_ordlist____Compare____set_ordlist_1_0(TypeInfo_for_T_14, &SubResult2_9, ArgX2_7, ArgY2_8);
      succeeded = (SubResult2_9 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
        mercury__set_ordlist____Compare____set_ordlist_1_0(TypeInfo_for_T_14, HeadVar__1_1, ArgX3_10, ArgY3_11);
    }
  }
}

MR_bool MR_CALL 
transform_hlds__pd_info____Unify____pd_branch_info_1_0(
  MR_Word TypeInfo_for_T_11,
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
  {
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 2))));
    MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 2))));

    succeeded = mercury__tree234____Unify____tree234_2_0(TypeInfo_for_T_11, (MR_Word) (&transform_hlds__pd_info_scalar_common_1[2]), ArgX1_3, ArgY1_4);
    if (succeeded)
    {
      succeeded = mercury__set_ordlist____Unify____set_ordlist_1_0(TypeInfo_for_T_11, ArgX2_5, ArgY2_6);
      if (succeeded)
        succeeded = mercury__set_ordlist____Unify____set_ordlist_1_0(TypeInfo_for_T_11, ArgX3_7, ArgY3_8);
    }
  }
  return succeeded;
}

void MR_CALL 
transform_hlds__pd_info____Compare____pd_arg_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__pd_info_scalar_common_2[4]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

MR_bool MR_CALL 
transform_hlds__pd_info____Unify____pd_arg_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&transform_hlds__pd_info_scalar_common_2[4]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

void MR_CALL 
transform_hlds__pd_info____Compare____maybe_version_0_0(
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
      *HeadVar__1_1 = (MR_Integer) 1;
  else
  if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__1_1 = (MR_Integer) 2;
  else
  {
    MR_Word ArgX1_4 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__2_2, 0))) & (MR_Integer) 1);
    MR_Word ArgY1_5 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__3_3, 0))) & (MR_Integer) 1);
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 1))));
    MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 2))));
    MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 2))));
    MR_Word ArgX4_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 3))));
    MR_Word ArgY4_14 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 3))));
    MR_Word ArgX5_16 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 4))));
    MR_Word ArgY5_17 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 4))));
    MR_Word SubResult1_6;
    MR_Integer Var_25 = (MR_Integer) (ArgX1_4);
    MR_Integer Var_26 = (MR_Integer) (ArgY1_5);

    succeeded = (Var_25 < Var_26);
    if (succeeded)
    {
      SubResult1_6 = (MR_Integer) 1;
      succeeded = MR_TRUE;
    }
    else
    {
      succeeded = (Var_25 > Var_26);
      if (succeeded)
      {
        SubResult1_6 = (MR_Integer) 2;
        succeeded = MR_TRUE;
      }
    }
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;

      hlds__hlds_pred____Compare____pred_proc_id_0_0(&SubResult2_9, ArgX2_7, ArgY2_8);
      succeeded = (SubResult2_9 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
      {
        MR_Word SubResult3_12;

        transform_hlds__pd_info____Compare____version_info_0_0(&SubResult3_12, ArgX3_10, ArgY3_11);
        succeeded = (SubResult3_12 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult3_12;
        else
        {
          MR_Word SubResult4_15;

          mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__pd_info_scalar_common_2[2]), &SubResult4_15, ((MR_Box) (ArgX4_13)), ((MR_Box) (ArgY4_14)));
          succeeded = (SubResult4_15 != (MR_Integer) 0);
          if (succeeded)
            *HeadVar__1_1 = SubResult4_15;
          else
            mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__pd_info_scalar_common_2[3]), HeadVar__1_1, ((MR_Box) (ArgX5_16)), ((MR_Box) (ArgY5_17)));
        }
      }
    }
  }
}

void MR_CALL 
transform_hlds__pd_info____Compare____version_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_30 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_31 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_30 == CastY_31);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 1))));
    MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 2))));
    MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 2))));
    MR_Word ArgX4_13 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 3))));
    MR_Word ArgY4_14 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 3))));
    MR_Word ArgX5_16 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 4))));
    MR_Word ArgY5_17 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 4))));
    MR_Integer ArgX6_19 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 5))));
    MR_Integer ArgY6_20 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, 5))));
    MR_Integer ArgX7_22 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 6))));
    MR_Integer ArgY7_23 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, 6))));
    MR_Word ArgX8_25 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 7))));
    MR_Word ArgY8_26 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 7))));
    MR_Word ArgX9_28 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 8))));
    MR_Word ArgY9_29 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 8))));
    MR_Word SubResult1_6;

    hlds__hlds_goal____Compare____hlds_goal_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;

      mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__pd_info_scalar_common_1[0]), &SubResult2_9, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
      succeeded = (SubResult2_9 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
      {
        MR_Word SubResult3_12;

        mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__pd_info_scalar_common_1[10]), &SubResult3_12, ((MR_Box) (ArgX3_10)), ((MR_Box) (ArgY3_11)));
        succeeded = (SubResult3_12 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult3_12;
        else
        {
          MR_Word SubResult4_15;

          mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__pd_info_scalar_common_1[11]), &SubResult4_15, ((MR_Box) (ArgX4_13)), ((MR_Box) (ArgY4_14)));
          succeeded = (SubResult4_15 != (MR_Integer) 0);
          if (succeeded)
            *HeadVar__1_1 = SubResult4_15;
          else
          {
            MR_Word SubResult5_18;

            hlds__instmap____Compare____instmap_0_0(&SubResult5_18, ArgX5_16, ArgY5_17);
            succeeded = (SubResult5_18 != (MR_Integer) 0);
            if (succeeded)
              *HeadVar__1_1 = SubResult5_18;
            else
            {
              MR_Word SubResult6_21;

              succeeded = (ArgX6_19 < ArgY6_20);
              if (succeeded)
              {
                SubResult6_21 = (MR_Integer) 1;
                succeeded = MR_TRUE;
              }
              else
              {
                succeeded = (ArgX6_19 > ArgY6_20);
                if (succeeded)
                {
                  SubResult6_21 = (MR_Integer) 2;
                  succeeded = MR_TRUE;
                }
              }
              if (succeeded)
                *HeadVar__1_1 = SubResult6_21;
              else
              {
                MR_Word SubResult7_24;

                succeeded = (ArgX7_22 < ArgY7_23);
                if (succeeded)
                {
                  SubResult7_24 = (MR_Integer) 1;
                  succeeded = MR_TRUE;
                }
                else
                {
                  succeeded = (ArgX7_22 > ArgY7_23);
                  if (succeeded)
                  {
                    SubResult7_24 = (MR_Integer) 2;
                    succeeded = MR_TRUE;
                  }
                }
                if (succeeded)
                  *HeadVar__1_1 = SubResult7_24;
                else
                {
                  MR_Word SubResult8_27;

                  mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__pd_info_scalar_common_1[7]), &SubResult8_27, ((MR_Box) (ArgX8_25)), ((MR_Box) (ArgY8_26)));
                  succeeded = (SubResult8_27 != (MR_Integer) 0);
                  if (succeeded)
                    *HeadVar__1_1 = SubResult8_27;
                  else
                    mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__pd_info_scalar_common_1[12]), HeadVar__1_1, ((MR_Box) (ArgX9_28)), ((MR_Box) (ArgY9_29)));
                }
              }
            }
          }
        }
      }
    }
  }
}

MR_bool MR_CALL 
transform_hlds__pd_info____Unify____maybe_version_0_0(
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
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Integer CastX_13 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_14 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastY_14 == CastX_13);
  }
  else
  {
    MR_Word TypeInfo_18_18;
    MR_Word TypeInfo_19_19;
    MR_Word ArgX1_3 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__1_1, 0))) & (MR_Integer) 1);
    MR_Word ArgY1_4;
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
    MR_Word ArgY2_6;
    MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 2))));
    MR_Word ArgY3_8;
    MR_Word ArgX4_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 3))));
    MR_Word ArgY4_10;
    MR_Word ArgX5_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 4))));
    MR_Word ArgY5_12;

    succeeded = (HeadVar__2_2 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      ArgY1_4 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__2_2, 0))) & (MR_Integer) 1);
      ArgY2_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
      ArgY3_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 2))));
      ArgY4_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 3))));
      ArgY5_12 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 4))));
      succeeded = (ArgX1_3 == ArgY1_4);
      if (succeeded)
      {
        succeeded = hlds__hlds_pred____Unify____pred_proc_id_0_0(ArgX2_5, ArgY2_6);
        if (succeeded)
        {
          succeeded = transform_hlds__pd_info____Unify____version_info_0_0(ArgX3_7, ArgY3_8);
          if (succeeded)
          {
            TypeInfo_18_18 = (MR_Word) (&transform_hlds__pd_info_scalar_common_2[2]);
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_18_18, ((MR_Box) (ArgX4_9)), ((MR_Box) (ArgY4_10)));
            if (succeeded)
            {
              TypeInfo_19_19 = (MR_Word) (&transform_hlds__pd_info_scalar_common_2[3]);
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_19_19, ((MR_Box) (ArgX5_11)), ((MR_Box) (ArgY5_12)));
            }
          }
        }
      }
    }
  }
  return succeeded;
}

MR_bool MR_CALL 
transform_hlds__pd_info____Unify____version_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_21 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_22 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_21 == CastY_22);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Word TypeInfo_24_24;
    MR_Word TypeInfo_25_25;
    MR_Word TypeInfo_26_26;
    MR_Word TypeInfo_28_28;
    MR_Word TypeInfo_29_29;
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 2))));
    MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 2))));
    MR_Word ArgX4_9 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 3))));
    MR_Word ArgY4_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 3))));
    MR_Word ArgX5_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 4))));
    MR_Word ArgY5_12 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 4))));
    MR_Integer ArgX6_13 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, 5))));
    MR_Integer ArgY6_14 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 5))));
    MR_Integer ArgX7_15 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, 6))));
    MR_Integer ArgY7_16 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 6))));
    MR_Word ArgX8_17 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 7))));
    MR_Word ArgY8_18 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 7))));
    MR_Word ArgX9_19 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 8))));
    MR_Word ArgY9_20 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 8))));

    succeeded = hlds__hlds_goal____Unify____hlds_goal_0_0(ArgX1_3, ArgY1_4);
    if (succeeded)
    {
      TypeInfo_24_24 = (MR_Word) (&transform_hlds__pd_info_scalar_common_1[0]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_24_24, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
      if (succeeded)
      {
        TypeInfo_25_25 = (MR_Word) (&transform_hlds__pd_info_scalar_common_1[10]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_25_25, ((MR_Box) (ArgX3_7)), ((MR_Box) (ArgY3_8)));
        if (succeeded)
        {
          TypeInfo_26_26 = (MR_Word) (&transform_hlds__pd_info_scalar_common_1[11]);
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_26_26, ((MR_Box) (ArgX4_9)), ((MR_Box) (ArgY4_10)));
          if (succeeded)
          {
            succeeded = hlds__instmap____Unify____instmap_0_0(ArgX5_11, ArgY5_12);
            if (succeeded)
            {
              succeeded = (ArgX6_13 == ArgY6_14);
              if (succeeded)
              {
                succeeded = (ArgX7_15 == ArgY7_16);
                if (succeeded)
                {
                  TypeInfo_28_28 = (MR_Word) (&transform_hlds__pd_info_scalar_common_1[7]);
                  succeeded = mercury__builtin__unify_2_p_0(TypeInfo_28_28, ((MR_Box) (ArgX8_17)), ((MR_Box) (ArgY8_18)));
                  if (succeeded)
                  {
                    TypeInfo_29_29 = (MR_Word) (&transform_hlds__pd_info_scalar_common_1[12]);
                    succeeded = mercury__builtin__unify_2_p_0(TypeInfo_29_29, ((MR_Box) (ArgX9_19)), ((MR_Box) (ArgY9_20)));
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

void MR_CALL 
transform_hlds__pd_info____Compare____goal_version_index_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__pd_info_scalar_common_2[1]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

MR_bool MR_CALL 
transform_hlds__pd_info____Unify____goal_version_index_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&transform_hlds__pd_info_scalar_common_2[1]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

void MR_CALL 
transform_hlds__pd_info____Compare____branch_info_map_1_0(
  MR_Word TypeInfo_for_T_6,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__tree234____Compare____tree234_2_0(TypeInfo_for_T_6, (MR_Word) (&transform_hlds__pd_info_scalar_common_1[2]), HeadVar__1_1, Cast_HeadVar1_4, Cast_HeadVar2_5);
}

MR_bool MR_CALL 
transform_hlds__pd_info____Unify____branch_info_map_1_0(
  MR_Word TypeInfo_for_T_5,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__tree234____Unify____tree234_2_0(TypeInfo_for_T_5, (MR_Word) (&transform_hlds__pd_info_scalar_common_1[2]), Cast_HeadVar1_3, Cast_HeadVar2_4);
  return succeeded;
}

void MR_CALL 
transform_hlds__pd_info__pd_info_invalidate_version_3_p_0(
  MR_Word PredProcId_4,
  MR_Word STATE_VARIABLE_PDInfo_0_15,
  MR_Word * STATE_VARIABLE_PDInfo_16)
{
  MR_bool succeeded;
  MR_Word Versions0_6 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PDInfo_0_15, 5))));
  MR_Word Version_7;
  MR_Word Goal_8;
  MR_Word Calls_9;
  MR_Word STATE_VARIABLE_PDInfo_1_18;
  MR_Box conv0_Version_7;
  MR_Word FirstCall_10;
  MR_Word LastCall_12;
  MR_Box conv1_LastCall_12;

  mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__pd_info__transform_hlds__pd_info__type_ctor_info_version_info_0), Versions0_6, ((MR_Box) (PredProcId_4)), &conv0_Version_7);
  Version_7 = ((MR_Word) (conv0_Version_7));
  Goal_8 = ((MR_Word) ((MR_hl_field(0, Version_7, 0))));
  transform_hlds__pd_util__goal_get_calls_2_p_0(Goal_8, &Calls_9);
  succeeded = (Calls_9 != (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
  {
    FirstCall_10 = ((MR_Word) ((MR_hl_field(1, Calls_9, 0))));
    succeeded = mercury__list__last_2_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), Calls_9, &conv1_LastCall_12);
    if (succeeded)
    {
      LastCall_12 = ((MR_Word) (conv1_LastCall_12));
      succeeded = MR_TRUE;
    }
  }
  if (succeeded)
  {
    MR_Word Useless0_13 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PDInfo_0_15, 12))));
    MR_Word Useless_14;
    MR_Word Var_17;
    MR_Word Var_54;
    MR_Word Var_55;
    MR_Word Var_56;
    MR_Word Var_57;
    MR_Word Var_58;
    MR_Word Var_59;
    MR_Word Var_60;
    MR_Word Var_61;
    MR_Word Var_62;
    MR_Word Var_63;
    MR_Integer Var_64;
    MR_Word Var_65;

    {
      Var_17 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_17, 0) = ((MR_Box) (FirstCall_10));
      MR_hl_field(0, Var_17, 1) = ((MR_Box) (LastCall_12));
    }
    mercury__set__insert_3_p_0((MR_Word) (&transform_hlds__pd_info_scalar_common_2[0]), ((MR_Box) (Var_17)), Useless0_13, &Useless_14);
    Var_54 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PDInfo_0_15, 0))));
    Var_55 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PDInfo_0_15, 1))));
    Var_56 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PDInfo_0_15, 2))));
    Var_57 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PDInfo_0_15, 3))));
    Var_58 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PDInfo_0_15, 4))));
    Var_59 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PDInfo_0_15, 5))));
    Var_60 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PDInfo_0_15, 6))));
    Var_61 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PDInfo_0_15, 7))));
    Var_62 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PDInfo_0_15, 8))));
    Var_63 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PDInfo_0_15, 9))));
    Var_64 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_PDInfo_0_15, 10))));
    Var_65 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PDInfo_0_15, 11))));
    {
      STATE_VARIABLE_PDInfo_1_18 = (MR_Word) MR_new_object(MR_Word, (13 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, STATE_VARIABLE_PDInfo_1_18, 0) = ((MR_Box) (Var_54));
      MR_hl_field(0, STATE_VARIABLE_PDInfo_1_18, 1) = ((MR_Box) (Var_55));
      MR_hl_field(0, STATE_VARIABLE_PDInfo_1_18, 2) = ((MR_Box) (Var_56));
      MR_hl_field(0, STATE_VARIABLE_PDInfo_1_18, 3) = ((MR_Box) (Var_57));
      MR_hl_field(0, STATE_VARIABLE_PDInfo_1_18, 4) = ((MR_Box) (Var_58));
      MR_hl_field(0, STATE_VARIABLE_PDInfo_1_18, 5) = ((MR_Box) (Var_59));
      MR_hl_field(0, STATE_VARIABLE_PDInfo_1_18, 6) = ((MR_Box) (Var_60));
      MR_hl_field(0, STATE_VARIABLE_PDInfo_1_18, 7) = ((MR_Box) (Var_61));
      MR_hl_field(0, STATE_VARIABLE_PDInfo_1_18, 8) = ((MR_Box) (Var_62));
      MR_hl_field(0, STATE_VARIABLE_PDInfo_1_18, 9) = ((MR_Box) (Var_63));
      MR_hl_field(0, STATE_VARIABLE_PDInfo_1_18, 10) = ((MR_Box) (Var_64));
      MR_hl_field(0, STATE_VARIABLE_PDInfo_1_18, 11) = ((MR_Box) (Var_65));
      MR_hl_field(0, STATE_VARIABLE_PDInfo_1_18, 12) = ((MR_Box) (Useless_14));
    }
  }
  else
    STATE_VARIABLE_PDInfo_1_18 = STATE_VARIABLE_PDInfo_0_15;
  transform_hlds__pd_info__pd_info_remove_version_3_p_0(PredProcId_4, STATE_VARIABLE_PDInfo_1_18, STATE_VARIABLE_PDInfo_16);
}

void MR_CALL 
transform_hlds__pd_info__pd_info_remove_version_3_p_0(
  MR_Word PredProcId_4,
  MR_Word STATE_VARIABLE_PDInfo_0_21,
  MR_Word * STATE_VARIABLE_PDInfo_22)
{
  MR_bool succeeded;
  MR_Word Versions0_6 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PDInfo_0_21, 5))));
  MR_Word Version_7;
  MR_Word Goal_8;
  MR_Word Calls_9;
  MR_Word Versions_10;
  MR_Word GoalIndex0_11;
  MR_Word CreatedVersions0_15;
  MR_Word CreatedVersions_16;
  MR_Word ModuleInfo0_17;
  MR_Word PredId_18;
  MR_Word ModuleInfo_20;
  MR_Word STATE_VARIABLE_PDInfo_1_23;
  MR_Word STATE_VARIABLE_PDInfo_2_24;
  MR_Word STATE_VARIABLE_PDInfo_3_25;
  MR_Box conv0_Version_7;
  MR_Word Var_50;
  MR_Word Var_51;
  MR_Word Var_52;
  MR_Word Var_53;
  MR_Word Var_56;
  MR_Word Var_57;
  MR_Word Var_58;
  MR_Word Var_59;
  MR_Integer Var_60;
  MR_Word Var_61;
  MR_Word Var_62;
  MR_Word GoalVersions0_12;
  MR_Box conv1_GoalVersions0_12;

  mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__pd_info__transform_hlds__pd_info__type_ctor_info_version_info_0), Versions0_6, ((MR_Box) (PredProcId_4)), &conv0_Version_7);
  Version_7 = ((MR_Word) (conv0_Version_7));
  Goal_8 = ((MR_Word) ((MR_hl_field(0, Version_7, 0))));
  transform_hlds__pd_util__goal_get_calls_2_p_0(Goal_8, &Calls_9);
  mercury__map__delete_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__pd_info__transform_hlds__pd_info__type_ctor_info_version_info_0), ((MR_Box) (PredProcId_4)), Versions0_6, &Versions_10);
  Var_50 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PDInfo_0_21, 0))));
  Var_51 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PDInfo_0_21, 1))));
  Var_52 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PDInfo_0_21, 2))));
  Var_53 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PDInfo_0_21, 3))));
  GoalIndex0_11 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PDInfo_0_21, 4))));
  Var_56 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PDInfo_0_21, 6))));
  Var_57 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PDInfo_0_21, 7))));
  Var_58 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PDInfo_0_21, 8))));
  Var_59 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PDInfo_0_21, 9))));
  Var_60 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_PDInfo_0_21, 10))));
  Var_61 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PDInfo_0_21, 11))));
  Var_62 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PDInfo_0_21, 12))));
  {
    STATE_VARIABLE_PDInfo_1_23 = (MR_Word) MR_new_object(MR_Word, (13 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, STATE_VARIABLE_PDInfo_1_23, 0) = ((MR_Box) (Var_50));
    MR_hl_field(0, STATE_VARIABLE_PDInfo_1_23, 1) = ((MR_Box) (Var_51));
    MR_hl_field(0, STATE_VARIABLE_PDInfo_1_23, 2) = ((MR_Box) (Var_52));
    MR_hl_field(0, STATE_VARIABLE_PDInfo_1_23, 3) = ((MR_Box) (Var_53));
    MR_hl_field(0, STATE_VARIABLE_PDInfo_1_23, 4) = ((MR_Box) (GoalIndex0_11));
    MR_hl_field(0, STATE_VARIABLE_PDInfo_1_23, 5) = ((MR_Box) (Versions_10));
    MR_hl_field(0, STATE_VARIABLE_PDInfo_1_23, 6) = ((MR_Box) (Var_56));
    MR_hl_field(0, STATE_VARIABLE_PDInfo_1_23, 7) = ((MR_Box) (Var_57));
    MR_hl_field(0, STATE_VARIABLE_PDInfo_1_23, 8) = ((MR_Box) (Var_58));
    MR_hl_field(0, STATE_VARIABLE_PDInfo_1_23, 9) = ((MR_Box) (Var_59));
    MR_hl_field(0, STATE_VARIABLE_PDInfo_1_23, 10) = ((MR_Box) (Var_60));
    MR_hl_field(0, STATE_VARIABLE_PDInfo_1_23, 11) = ((MR_Box) (Var_61));
    MR_hl_field(0, STATE_VARIABLE_PDInfo_1_23, 12) = ((MR_Box) (Var_62));
  }
  succeeded = mercury__map__search_3_p_0((MR_Word) (&transform_hlds__pd_info_scalar_common_1[0]), (MR_Word) (&transform_hlds__pd_info_scalar_common_1[0]), GoalIndex0_11, ((MR_Box) (Calls_9)), &conv1_GoalVersions0_12);
  if (succeeded)
  {
    GoalVersions0_12 = ((MR_Word) (conv1_GoalVersions0_12));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    MR_Word GoalVersions_13;
    MR_Word GoalIndex_14;
    MR_Word Var_75;
    MR_Word Var_76;
    MR_Word Var_77;
    MR_Word Var_78;
    MR_Word Var_80;
    MR_Word Var_81;
    MR_Word Var_82;
    MR_Word Var_83;
    MR_Word Var_84;
    MR_Integer Var_85;
    MR_Word Var_86;
    MR_Word Var_87;

    mercury__list__delete_all_3_p_1((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), GoalVersions0_12, ((MR_Box) (PredProcId_4)), &GoalVersions_13);
    mercury__map__det_update_4_p_0((MR_Word) (&transform_hlds__pd_info_scalar_common_1[0]), (MR_Word) (&transform_hlds__pd_info_scalar_common_1[0]), ((MR_Box) (Calls_9)), ((MR_Box) (GoalVersions_13)), GoalIndex0_11, &GoalIndex_14);
    Var_75 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PDInfo_1_23, 0))));
    Var_76 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PDInfo_1_23, 1))));
    Var_77 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PDInfo_1_23, 2))));
    Var_78 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PDInfo_1_23, 3))));
    Var_80 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PDInfo_1_23, 5))));
    Var_81 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PDInfo_1_23, 6))));
    Var_82 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PDInfo_1_23, 7))));
    Var_83 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PDInfo_1_23, 8))));
    Var_84 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PDInfo_1_23, 9))));
    Var_85 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_PDInfo_1_23, 10))));
    Var_86 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PDInfo_1_23, 11))));
    Var_87 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PDInfo_1_23, 12))));
    {
      STATE_VARIABLE_PDInfo_2_24 = (MR_Word) MR_new_object(MR_Word, (13 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, STATE_VARIABLE_PDInfo_2_24, 0) = ((MR_Box) (Var_75));
      MR_hl_field(0, STATE_VARIABLE_PDInfo_2_24, 1) = ((MR_Box) (Var_76));
      MR_hl_field(0, STATE_VARIABLE_PDInfo_2_24, 2) = ((MR_Box) (Var_77));
      MR_hl_field(0, STATE_VARIABLE_PDInfo_2_24, 3) = ((MR_Box) (Var_78));
      MR_hl_field(0, STATE_VARIABLE_PDInfo_2_24, 4) = ((MR_Box) (GoalIndex_14));
      MR_hl_field(0, STATE_VARIABLE_PDInfo_2_24, 5) = ((MR_Box) (Var_80));
      MR_hl_field(0, STATE_VARIABLE_PDInfo_2_24, 6) = ((MR_Box) (Var_81));
      MR_hl_field(0, STATE_VARIABLE_PDInfo_2_24, 7) = ((MR_Box) (Var_82));
      MR_hl_field(0, STATE_VARIABLE_PDInfo_2_24, 8) = ((MR_Box) (Var_83));
      MR_hl_field(0, STATE_VARIABLE_PDInfo_2_24, 9) = ((MR_Box) (Var_84));
      MR_hl_field(0, STATE_VARIABLE_PDInfo_2_24, 10) = ((MR_Box) (Var_85));
      MR_hl_field(0, STATE_VARIABLE_PDInfo_2_24, 11) = ((MR_Box) (Var_86));
      MR_hl_field(0, STATE_VARIABLE_PDInfo_2_24, 12) = ((MR_Box) (Var_87));
    }
  }
  else
    STATE_VARIABLE_PDInfo_2_24 = STATE_VARIABLE_PDInfo_1_23;
  CreatedVersions0_15 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PDInfo_2_24, 11))));
  mercury__set__delete_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), ((MR_Box) (PredProcId_4)), CreatedVersions0_15, &CreatedVersions_16);
  transform_hlds__pd_info__pd_info_set_created_versions_3_p_0(CreatedVersions_16, STATE_VARIABLE_PDInfo_2_24, &STATE_VARIABLE_PDInfo_3_25);
  transform_hlds__pd_info__pd_info_get_module_info_2_p_0(STATE_VARIABLE_PDInfo_3_25, &ModuleInfo0_17);
  PredId_18 = ((MR_Word) ((MR_hl_field(0, PredProcId_4, 0))));
  hlds__hlds_module__module_info_remove_predicate_3_p_0(PredId_18, ModuleInfo0_17, &ModuleInfo_20);
  transform_hlds__pd_info__pd_info_set_module_info_3_p_0(ModuleInfo_20, STATE_VARIABLE_PDInfo_3_25, STATE_VARIABLE_PDInfo_22);
}

void MR_CALL 
transform_hlds__pd_info__pd_info_register_version_4_p_0(
  MR_Word PredProcId_5,
  MR_Word Version_6,
  MR_Word STATE_VARIABLE_PDInfo_0_19,
  MR_Word * STATE_VARIABLE_PDInfo_20)
{
  MR_bool succeeded;
  MR_Word GoalVersionIndex0_9;
  MR_Word Goal_10;
  MR_Word Calls_11;
  MR_Word GoalVersionIndex_14;
  MR_Word Versions0_15;
  MR_Word Versions_16;
  MR_Word CreatedVersions0_17;
  MR_Word CreatedVersions_18;
  MR_Word STATE_VARIABLE_PDInfo_1_25;
  MR_Word STATE_VARIABLE_PDInfo_2_26;
  MR_Word VersionList0_12;
  MR_Box conv0_VersionList0_12;
  MR_Word Var_54;
  MR_Word Var_55;
  MR_Word Var_56;
  MR_Word Var_57;
  MR_Word Var_60;
  MR_Word Var_61;
  MR_Word Var_62;
  MR_Word Var_63;
  MR_Integer Var_64;
  MR_Word Var_65;
  MR_Word Var_66;
  MR_Word Var_79;
  MR_Word Var_80;
  MR_Word Var_81;
  MR_Word Var_82;
  MR_Word Var_83;
  MR_Word Var_85;
  MR_Word Var_86;
  MR_Word Var_87;
  MR_Word Var_88;
  MR_Integer Var_89;
  MR_Word Var_91;

  transform_hlds__pd_debug__pd_debug_register_version_6_p_0(STATE_VARIABLE_PDInfo_0_19, (MR_String) "pd_info_register_version", PredProcId_5, Version_6);
  GoalVersionIndex0_9 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PDInfo_0_19, 4))));
  Goal_10 = ((MR_Word) ((MR_hl_field(0, Version_6, 0))));
  transform_hlds__pd_util__goal_get_calls_2_p_0(Goal_10, &Calls_11);
  succeeded = mercury__map__search_3_p_0((MR_Word) (&transform_hlds__pd_info_scalar_common_1[0]), (MR_Word) (&transform_hlds__pd_info_scalar_common_1[0]), GoalVersionIndex0_9, ((MR_Box) (Calls_11)), &conv0_VersionList0_12);
  if (succeeded)
  {
    VersionList0_12 = ((MR_Word) (conv0_VersionList0_12));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    MR_Word VersionList_13;

    {
      VersionList_13 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, VersionList_13, 0) = ((MR_Box) (PredProcId_5));
      MR_hl_field(1, VersionList_13, 1) = ((MR_Box) (VersionList0_12));
    }
    mercury__map__det_update_4_p_0((MR_Word) (&transform_hlds__pd_info_scalar_common_1[0]), (MR_Word) (&transform_hlds__pd_info_scalar_common_1[0]), ((MR_Box) (Calls_11)), ((MR_Box) (VersionList_13)), GoalVersionIndex0_9, &GoalVersionIndex_14);
  }
  else
  {
    MR_Word VersionList_28;

    {
      VersionList_28 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, VersionList_28, 0) = ((MR_Box) (PredProcId_5));
      MR_hl_field(1, VersionList_28, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    mercury__map__det_insert_4_p_0((MR_Word) (&transform_hlds__pd_info_scalar_common_1[0]), (MR_Word) (&transform_hlds__pd_info_scalar_common_1[0]), ((MR_Box) (Calls_11)), ((MR_Box) (VersionList_28)), GoalVersionIndex0_9, &GoalVersionIndex_14);
  }
  Var_54 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PDInfo_0_19, 0))));
  Var_55 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PDInfo_0_19, 1))));
  Var_56 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PDInfo_0_19, 2))));
  Var_57 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PDInfo_0_19, 3))));
  Versions0_15 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PDInfo_0_19, 5))));
  Var_60 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PDInfo_0_19, 6))));
  Var_61 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PDInfo_0_19, 7))));
  Var_62 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PDInfo_0_19, 8))));
  Var_63 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PDInfo_0_19, 9))));
  Var_64 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_PDInfo_0_19, 10))));
  Var_65 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PDInfo_0_19, 11))));
  Var_66 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PDInfo_0_19, 12))));
  {
    STATE_VARIABLE_PDInfo_1_25 = (MR_Word) MR_new_object(MR_Word, (13 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, STATE_VARIABLE_PDInfo_1_25, 0) = ((MR_Box) (Var_54));
    MR_hl_field(0, STATE_VARIABLE_PDInfo_1_25, 1) = ((MR_Box) (Var_55));
    MR_hl_field(0, STATE_VARIABLE_PDInfo_1_25, 2) = ((MR_Box) (Var_56));
    MR_hl_field(0, STATE_VARIABLE_PDInfo_1_25, 3) = ((MR_Box) (Var_57));
    MR_hl_field(0, STATE_VARIABLE_PDInfo_1_25, 4) = ((MR_Box) (GoalVersionIndex_14));
    MR_hl_field(0, STATE_VARIABLE_PDInfo_1_25, 5) = ((MR_Box) (Versions0_15));
    MR_hl_field(0, STATE_VARIABLE_PDInfo_1_25, 6) = ((MR_Box) (Var_60));
    MR_hl_field(0, STATE_VARIABLE_PDInfo_1_25, 7) = ((MR_Box) (Var_61));
    MR_hl_field(0, STATE_VARIABLE_PDInfo_1_25, 8) = ((MR_Box) (Var_62));
    MR_hl_field(0, STATE_VARIABLE_PDInfo_1_25, 9) = ((MR_Box) (Var_63));
    MR_hl_field(0, STATE_VARIABLE_PDInfo_1_25, 10) = ((MR_Box) (Var_64));
    MR_hl_field(0, STATE_VARIABLE_PDInfo_1_25, 11) = ((MR_Box) (Var_65));
    MR_hl_field(0, STATE_VARIABLE_PDInfo_1_25, 12) = ((MR_Box) (Var_66));
  }
  mercury__map__det_insert_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__pd_info__transform_hlds__pd_info__type_ctor_info_version_info_0), ((MR_Box) (PredProcId_5)), ((MR_Box) (Version_6)), Versions0_15, &Versions_16);
  Var_79 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PDInfo_1_25, 0))));
  Var_80 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PDInfo_1_25, 1))));
  Var_81 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PDInfo_1_25, 2))));
  Var_82 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PDInfo_1_25, 3))));
  Var_83 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PDInfo_1_25, 4))));
  Var_85 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PDInfo_1_25, 6))));
  Var_86 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PDInfo_1_25, 7))));
  Var_87 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PDInfo_1_25, 8))));
  Var_88 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PDInfo_1_25, 9))));
  Var_89 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_PDInfo_1_25, 10))));
  CreatedVersions0_17 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PDInfo_1_25, 11))));
  Var_91 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PDInfo_1_25, 12))));
  {
    STATE_VARIABLE_PDInfo_2_26 = (MR_Word) MR_new_object(MR_Word, (13 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, STATE_VARIABLE_PDInfo_2_26, 0) = ((MR_Box) (Var_79));
    MR_hl_field(0, STATE_VARIABLE_PDInfo_2_26, 1) = ((MR_Box) (Var_80));
    MR_hl_field(0, STATE_VARIABLE_PDInfo_2_26, 2) = ((MR_Box) (Var_81));
    MR_hl_field(0, STATE_VARIABLE_PDInfo_2_26, 3) = ((MR_Box) (Var_82));
    MR_hl_field(0, STATE_VARIABLE_PDInfo_2_26, 4) = ((MR_Box) (Var_83));
    MR_hl_field(0, STATE_VARIABLE_PDInfo_2_26, 5) = ((MR_Box) (Versions_16));
    MR_hl_field(0, STATE_VARIABLE_PDInfo_2_26, 6) = ((MR_Box) (Var_85));
    MR_hl_field(0, STATE_VARIABLE_PDInfo_2_26, 7) = ((MR_Box) (Var_86));
    MR_hl_field(0, STATE_VARIABLE_PDInfo_2_26, 8) = ((MR_Box) (Var_87));
    MR_hl_field(0, STATE_VARIABLE_PDInfo_2_26, 9) = ((MR_Box) (Var_88));
    MR_hl_field(0, STATE_VARIABLE_PDInfo_2_26, 10) = ((MR_Box) (Var_89));
    MR_hl_field(0, STATE_VARIABLE_PDInfo_2_26, 11) = ((MR_Box) (CreatedVersions0_17));
    MR_hl_field(0, STATE_VARIABLE_PDInfo_2_26, 12) = ((MR_Box) (Var_91));
  }
  mercury__set__insert_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), ((MR_Box) (PredProcId_5)), CreatedVersions0_17, &CreatedVersions_18);
  transform_hlds__pd_info__pd_info_set_created_versions_3_p_0(CreatedVersions_18, STATE_VARIABLE_PDInfo_2_26, STATE_VARIABLE_PDInfo_20);
}

void MR_CALL 
transform_hlds__pd_info__pd_info_define_new_pred_5_p_0(
  MR_Word Goal_6,
  MR_Word * PredProcId_7,
  MR_Word * CallGoal_8,
  MR_Word STATE_VARIABLE_PDInfo_0_38,
  MR_Word * STATE_VARIABLE_PDInfo_39)
{
  MR_Word InstMap_10;
  MR_Word GoalInfo_12;
  MR_Word NonLocals_13;
  MR_Word Args_14;
  MR_Word Counter0_15;
  MR_Integer SeqNum_16;
  MR_Word Counter_17;
  MR_Word PredInfo_18;
  MR_Word PredModule_19;
  MR_String PredName_20;
  MR_Word Context_21;
  MR_Integer LineNum_22;
  MR_Word ModuleInfo0_23;
  MR_Word Origin_24;
  MR_Word Transform_25;
  MR_Word NewPredSymName_26;
  MR_Word ProcInfo_27;
  MR_Word TVarSet_28;
  MR_Word Markers_29;
  MR_Word ClassContext_30;
  MR_Word VarTable_31;
  MR_Word RttiVarMaps_32;
  MR_Word InstVarSet_33;
  MR_Word HasParallelConj_34;
  MR_Word VarNameRemap_35;
  MR_Word ModuleInfo_37;
  MR_Word STATE_VARIABLE_PDInfo_1_40;
  MR_Word Var_41;
  MR_Word Var_43;
  MR_Word UnfoldInfo_46;
  MR_Word MaybeUnfoldInfo_57 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PDInfo_0_38, 3))));
  MR_Word Var_84;
  MR_Word Var_85;
  MR_Word Var_86;
  MR_Word Var_87;
  MR_Word Var_88;
  MR_Word Var_89;
  MR_Word Var_90;
  MR_Word Var_92;
  MR_Word Var_93;
  MR_Integer Var_94;
  MR_Word Var_95;
  MR_Word Var_96;
  MR_Word _ExtraArgs_36;

  if ((MaybeUnfoldInfo_57 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.pd_info.pd_info_get_unfold_info\'/2", (MR_String) "unfold_info not set");
      return;
    }
  else
    UnfoldInfo_46 = ((MR_Word) ((MR_hl_field(1, MaybeUnfoldInfo_57, 0))));
  InstMap_10 = ((MR_Word) ((MR_hl_field(0, UnfoldInfo_46, 2))));
  GoalInfo_12 = ((MR_Word) ((MR_hl_field(0, Goal_6, 1))));
  NonLocals_13 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(GoalInfo_12);
  parse_tree__set_of_var__to_sorted_list_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), NonLocals_13, &Args_14);
  Counter0_15 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PDInfo_0_38, 7))));
  mercury__counter__allocate_3_p_0(&SeqNum_16, Counter0_15, &Counter_17);
  Var_84 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PDInfo_0_38, 0))));
  Var_85 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PDInfo_0_38, 1))));
  Var_86 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PDInfo_0_38, 2))));
  Var_87 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PDInfo_0_38, 3))));
  Var_88 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PDInfo_0_38, 4))));
  Var_89 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PDInfo_0_38, 5))));
  Var_90 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PDInfo_0_38, 6))));
  Var_92 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PDInfo_0_38, 8))));
  Var_93 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PDInfo_0_38, 9))));
  Var_94 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_PDInfo_0_38, 10))));
  Var_95 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PDInfo_0_38, 11))));
  Var_96 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PDInfo_0_38, 12))));
  {
    STATE_VARIABLE_PDInfo_1_40 = (MR_Word) MR_new_object(MR_Word, (13 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, STATE_VARIABLE_PDInfo_1_40, 0) = ((MR_Box) (Var_84));
    MR_hl_field(0, STATE_VARIABLE_PDInfo_1_40, 1) = ((MR_Box) (Var_85));
    MR_hl_field(0, STATE_VARIABLE_PDInfo_1_40, 2) = ((MR_Box) (Var_86));
    MR_hl_field(0, STATE_VARIABLE_PDInfo_1_40, 3) = ((MR_Box) (Var_87));
    MR_hl_field(0, STATE_VARIABLE_PDInfo_1_40, 4) = ((MR_Box) (Var_88));
    MR_hl_field(0, STATE_VARIABLE_PDInfo_1_40, 5) = ((MR_Box) (Var_89));
    MR_hl_field(0, STATE_VARIABLE_PDInfo_1_40, 6) = ((MR_Box) (Var_90));
    MR_hl_field(0, STATE_VARIABLE_PDInfo_1_40, 7) = ((MR_Box) (Counter_17));
    MR_hl_field(0, STATE_VARIABLE_PDInfo_1_40, 8) = ((MR_Box) (Var_92));
    MR_hl_field(0, STATE_VARIABLE_PDInfo_1_40, 9) = ((MR_Box) (Var_93));
    MR_hl_field(0, STATE_VARIABLE_PDInfo_1_40, 10) = ((MR_Box) (Var_94));
    MR_hl_field(0, STATE_VARIABLE_PDInfo_1_40, 11) = ((MR_Box) (Var_95));
    MR_hl_field(0, STATE_VARIABLE_PDInfo_1_40, 12) = ((MR_Box) (Var_96));
  }
  transform_hlds__pd_info__pd_info_get_pred_info_2_p_0(STATE_VARIABLE_PDInfo_1_40, &PredInfo_18);
  PredModule_19 = hlds__hlds_pred__pred_info_module_1_f_0(PredInfo_18);
  PredName_20 = hlds__hlds_pred__pred_info_name_1_f_0(PredInfo_18);
  Context_21 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_12);
  LineNum_22 = mercury__term_context__context_line_1_f_0(Context_21);
  transform_hlds__pd_info__pd_info_get_module_info_2_p_0(STATE_VARIABLE_PDInfo_1_40, &ModuleInfo0_23);
  {
    Var_41 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_41, 0) = ((MR_Box) (LineNum_22));
    MR_hl_field(1, Var_41, 1) = ((MR_Box) (SeqNum_16));
  }
  {
    Origin_24 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Origin_24, 0) = ((MR_Box) (Var_41));
  }
  {
    Var_43 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_43, 0) = ((MR_Box) (LineNum_22));
    MR_hl_field(0, Var_43, 1) = ((MR_Box) (SeqNum_16));
  }
  {
    Transform_25 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Transform_25, 0) = ((MR_Box) ((MR_Unsigned) 1U));
    MR_hl_field(3, Transform_25, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    MR_hl_field(3, Transform_25, 2) = ((MR_Box) (Var_43));
  }
  hlds__pred_name__make_transformed_pred_sym_name_4_p_0(PredModule_19, PredName_20, Transform_25, &NewPredSymName_26);
  transform_hlds__pd_info__pd_info_get_proc_info_2_p_0(STATE_VARIABLE_PDInfo_1_40, &ProcInfo_27);
  hlds__hlds_pred__pred_info_get_typevarset_2_p_0(PredInfo_18, &TVarSet_28);
  hlds__hlds_pred__pred_info_get_markers_2_p_0(PredInfo_18, &Markers_29);
  hlds__hlds_pred__pred_info_get_class_context_2_p_0(PredInfo_18, &ClassContext_30);
  hlds__hlds_pred__proc_info_get_var_table_2_p_0(ProcInfo_27, &VarTable_31);
  hlds__hlds_pred__proc_info_get_rtti_varmaps_2_p_0(ProcInfo_27, &RttiVarMaps_32);
  hlds__hlds_pred__proc_info_get_inst_varset_2_p_0(ProcInfo_27, &InstVarSet_33);
  hlds__hlds_pred__proc_info_get_has_parallel_conj_2_p_0(ProcInfo_27, &HasParallelConj_34);
  hlds__hlds_pred__proc_info_get_var_name_remap_2_p_0(ProcInfo_27, &VarNameRemap_35);
  hlds__hlds_pred__define_new_pred_19_p_0(NewPredSymName_26, Origin_24, TVarSet_28, InstVarSet_33, VarTable_31, RttiVarMaps_32, ClassContext_30, InstMap_10, VarNameRemap_35, Markers_29, (MR_Integer) 1, HasParallelConj_34, PredProcId_7, Args_14, &_ExtraArgs_36, Goal_6, CallGoal_8, ModuleInfo0_23, &ModuleInfo_37);
  transform_hlds__pd_info__pd_info_set_module_info_3_p_0(ModuleInfo_37, STATE_VARIABLE_PDInfo_1_40, STATE_VARIABLE_PDInfo_39);
}

void MR_CALL 
transform_hlds__pd_info__pd_info_search_version_3_p_0(
  MR_Word PDInfo_4,
  MR_Word Goal_5,
  MR_Word * MaybeVersion_6)
{
  MR_bool succeeded;
  MR_Word CalledPreds_8;
  MR_Word Versions_9;
  MR_Word GoalVersionIndex_10;
  MR_Word ModuleInfo_11;
  MR_Word ProcInfo_12;
  MR_Word InstMap_13;
  MR_Word VarTable_14;
  MR_Word UnfoldInfo_61;
  MR_Word MaybeUnfoldInfo_72;
  MR_Word MaybeVersion0_16;
  MR_Word VersionIds_15;
  MR_Box conv0_VersionIds_15;

  transform_hlds__pd_debug__pd_debug_output_goal_6_p_0(PDInfo_4, (MR_String) "pd_info_search_version", (MR_String) "searching for version:\n", Goal_5);
  transform_hlds__pd_util__goal_get_calls_2_p_0(Goal_5, &CalledPreds_8);
  ModuleInfo_11 = ((MR_Word) ((MR_hl_field(0, PDInfo_4, 2))));
  MaybeUnfoldInfo_72 = ((MR_Word) ((MR_hl_field(0, PDInfo_4, 3))));
  GoalVersionIndex_10 = ((MR_Word) ((MR_hl_field(0, PDInfo_4, 4))));
  Versions_9 = ((MR_Word) ((MR_hl_field(0, PDInfo_4, 5))));
  if ((MaybeUnfoldInfo_72 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.pd_info.pd_info_get_unfold_info\'/2", (MR_String) "unfold_info not set");
      return;
    }
  else
    UnfoldInfo_61 = ((MR_Word) ((MR_hl_field(1, MaybeUnfoldInfo_72, 0))));
  ProcInfo_12 = ((MR_Word) ((MR_hl_field(0, UnfoldInfo_61, 0))));
  transform_hlds__pd_info__pd_info_get_instmap_2_p_0(PDInfo_4, &InstMap_13);
  hlds__hlds_pred__proc_info_get_var_table_2_p_0(ProcInfo_12, &VarTable_14);
  succeeded = mercury__map__search_3_p_0((MR_Word) (&transform_hlds__pd_info_scalar_common_1[0]), (MR_Word) (&transform_hlds__pd_info_scalar_common_1[0]), GoalVersionIndex_10, ((MR_Box) (CalledPreds_8)), &conv0_VersionIds_15);
  if (succeeded)
  {
    VersionIds_15 = ((MR_Word) (conv0_VersionIds_15));
    succeeded = MR_TRUE;
  }
  if (succeeded)
    succeeded = transform_hlds__pd_info__pd_info_get_matching_version_7_p_0(ModuleInfo_11, Goal_5, InstMap_13, VarTable_14, VersionIds_15, Versions_9, &MaybeVersion0_16);
  if (succeeded)
    *MaybeVersion_6 = MaybeVersion0_16;
  else
    *MaybeVersion_6 = (MR_Word) ((MR_Unsigned) 0U);
  transform_hlds__pd_debug__pd_debug_search_version_result_5_p_0(PDInfo_4, (MR_String) "pd_info_search_version", *MaybeVersion_6);
}

static MR_bool MR_CALL 
transform_hlds__pd_info__pd_info_get_matching_version_7_p_0(
  MR_Word ModuleInfo_1,
  MR_Word ThisGoal_2,
  MR_Word ThisInstMap_3,
  MR_Word VarTable_4,
  MR_Word HeadVar__5_5,
  MR_Word Versions_6,
  MR_Word * HeadVar__7_7)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if ((HeadVar__5_5 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *HeadVar__7_7 = (MR_Word) ((MR_Unsigned) 0U);
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Word VersionId_17 = ((MR_Word) ((MR_hl_field(1, HeadVar__5_5, 0))));
      MR_Word VersionIds_18 = ((MR_Word) ((MR_hl_field(1, HeadVar__5_5, 1))));
      MR_Word Version_21;
      MR_Word OldGoal_22;
      MR_Word OldArgs_24;
      MR_Word OldArgTypes_25;
      MR_Word OldInstMap_26;
      MR_Box conv0_Version_21;
      MR_Word MaybeVersion1_31;
      MR_Word OldNewRenaming_50;
      MR_Word TypeRenaming_51;
      MR_Word Exact_56;
      MR_Word TypeCtorInfo_31_58;
      MR_Word OldGoalInfo_53;
      MR_Word OldNonLocals0_54;
      MR_Word OldNonLocalsList_55;
      MR_Word Var_57;

      mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__pd_info__transform_hlds__pd_info__type_ctor_info_version_info_0), Versions_6, ((MR_Box) (VersionId_17)), &conv0_Version_21);
      Version_21 = ((MR_Word) (conv0_Version_21));
      OldGoal_22 = ((MR_Word) ((MR_hl_field(0, Version_21, 0))));
      OldArgs_24 = ((MR_Word) ((MR_hl_field(0, Version_21, 2))));
      OldArgTypes_25 = ((MR_Word) ((MR_hl_field(0, Version_21, 3))));
      OldInstMap_26 = ((MR_Word) ((MR_hl_field(0, Version_21, 4))));
      succeeded = transform_hlds__pd_util__goals_match_8_p_0(ModuleInfo_1, OldGoal_22, OldArgs_24, OldArgTypes_25, ThisGoal_2, VarTable_4, &OldNewRenaming_50, &TypeRenaming_51);
      if (succeeded)
      {
        OldGoalInfo_53 = ((MR_Word) ((MR_hl_field(0, OldGoal_22, 1))));
        OldNonLocals0_54 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(OldGoalInfo_53);
        TypeCtorInfo_31_58 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
        parse_tree__set_of_var__to_sorted_list_2_p_0(TypeCtorInfo_31_58, OldNonLocals0_54, &OldNonLocalsList_55);
        Var_57 = (MR_Integer) 0;
        succeeded = transform_hlds__pd_info__pd_info_check_insts_8_p_0(ModuleInfo_1, OldNonLocalsList_55, OldNewRenaming_50, OldInstMap_26, ThisInstMap_3, VarTable_4, Var_57, &Exact_56);
        if (succeeded)
        {
          {
            MaybeVersion1_31 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, MaybeVersion1_31, 0) = (MR_Box) ((MR_Unsigned) (Exact_56));
            MR_hl_field(1, MaybeVersion1_31, 1) = ((MR_Box) (VersionId_17));
            MR_hl_field(1, MaybeVersion1_31, 2) = ((MR_Box) (Version_21));
            MR_hl_field(1, MaybeVersion1_31, 3) = ((MR_Box) (OldNewRenaming_50));
            MR_hl_field(1, MaybeVersion1_31, 4) = ((MR_Box) (TypeRenaming_51));
          }
          succeeded = MR_TRUE;
        }
      }
      if (succeeded)
        switch (Exact_56) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              *HeadVar__7_7 = MaybeVersion1_31;
              succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word MaybeVersion2_40;

              succeeded = transform_hlds__pd_info__pd_info_get_matching_version_7_p_0(ModuleInfo_1, ThisGoal_2, ThisInstMap_3, VarTable_4, VersionIds_18, Versions_6, &MaybeVersion2_40);
              if (succeeded)
              {
                transform_hlds__pd_info__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_100_95_105_110_102_111_95_112_105_99_107_95_118_101_114_115_105_111_110_95_95_91_49_93_95_48_7_p_0(VersionId_17, OldNewRenaming_50, TypeRenaming_51, Version_21, MaybeVersion2_40, HeadVar__7_7);
                succeeded = MR_TRUE;
              }
            }
            break;
        }
      else
      {
        MR_Word next_value_of_HeadVar__5_5 = VersionIds_18;

        // direct tailcall eliminated
        ;
        HeadVar__5_5 = next_value_of_HeadVar__5_5;
        continue;
      }
    }
    return succeeded;
    break;
  }
}

static void MR_CALL 
transform_hlds__pd_info__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_100_95_105_110_102_111_95_112_105_99_107_95_118_101_114_115_105_111_110_95_95_91_49_93_95_48_7_p_0(
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word HeadVar__6_6,
  MR_Word * HeadVar__7_7)
{
  MR_bool succeeded;

  if ((HeadVar__6_6 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__7_7 = base;
      MR_hl_field(1, base, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
      MR_hl_field(1, base, 1) = ((MR_Box) (HeadVar__2_2));
      MR_hl_field(1, base, 2) = ((MR_Box) (HeadVar__5_5));
      MR_hl_field(1, base, 3) = ((MR_Box) (HeadVar__3_3));
      MR_hl_field(1, base, 4) = ((MR_Box) (HeadVar__4_4));
    }
  else
  {
    MR_Word Var_56 = ((MR_Word) ((MR_hl_field(1, HeadVar__6_6, 4))));
    MR_Word Var_57 = ((MR_Word) ((MR_hl_field(1, HeadVar__6_6, 3))));
    MR_Word Var_58 = ((MR_Word) ((MR_hl_field(1, HeadVar__6_6, 2))));
    MR_Word Var_59 = ((MR_Word) ((MR_hl_field(1, HeadVar__6_6, 1))));
    MR_Word Var_60 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__6_6, 0))) & (MR_Integer) 1);

    switch (Var_60) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__7_7 = base;
          MR_hl_field(1, base, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
          MR_hl_field(1, base, 1) = ((MR_Box) (Var_59));
          MR_hl_field(1, base, 2) = ((MR_Box) (Var_58));
          MR_hl_field(1, base, 3) = ((MR_Box) (Var_57));
          MR_hl_field(1, base, 4) = ((MR_Box) (Var_56));
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Integer CostDelta1_41 = ((MR_Integer) ((MR_hl_field(0, HeadVar__5_5, 6))));
          MR_Integer CostDelta2_50 = ((MR_Integer) ((MR_hl_field(0, Var_58, 6))));

          succeeded = (CostDelta1_41 > CostDelta2_50);
          if (succeeded)
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
              *HeadVar__7_7 = base;
              MR_hl_field(1, base, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
              MR_hl_field(1, base, 1) = ((MR_Box) (HeadVar__2_2));
              MR_hl_field(1, base, 2) = ((MR_Box) (HeadVar__5_5));
              MR_hl_field(1, base, 3) = ((MR_Box) (HeadVar__3_3));
              MR_hl_field(1, base, 4) = ((MR_Box) (HeadVar__4_4));
            }
          else
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
              *HeadVar__7_7 = base;
              MR_hl_field(1, base, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
              MR_hl_field(1, base, 1) = ((MR_Box) (Var_59));
              MR_hl_field(1, base, 2) = ((MR_Box) (Var_58));
              MR_hl_field(1, base, 3) = ((MR_Box) (Var_57));
              MR_hl_field(1, base, 4) = ((MR_Box) (Var_56));
            }
        }
        break;
    }
  }
}

static MR_bool MR_CALL 
transform_hlds__pd_info__pd_info_check_insts_8_p_0(
  MR_Word ModuleInfo_1,
  MR_Word HeadVar__2_2,
  MR_Word VarRenaming_3,
  MR_Word OldInstMap_4,
  MR_Word NewInstMap_5,
  MR_Word VarTable_6,
  MR_Word STATE_VARIABLE_ExactSoFar_0_7,
  MR_Word * STATE_VARIABLE_ExactSoFar_8)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_ExactSoFar_8 = STATE_VARIABLE_ExactSoFar_0_7;
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Word OldVar_18 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
      MR_Word Vars_19 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
      MR_Word OldVarInst_25;
      MR_Word NewVar_26;
      MR_Word NewVarInst_27;
      MR_Word Type_28;
      MR_Word STATE_VARIABLE_ExactSoFar_1_31;
      MR_Box conv0_NewVar_26;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_STATE_VARIABLE_ExactSoFar_0_7;

      hlds__instmap__instmap_lookup_var_3_p_0(OldInstMap_4, OldVar_18, &OldVarInst_25);
      mercury__map__lookup_3_p_0((MR_Word) (&transform_hlds__pd_info_scalar_common_1[1]), (MR_Word) (&transform_hlds__pd_info_scalar_common_1[1]), VarRenaming_3, ((MR_Box) (OldVar_18)), &conv0_NewVar_26);
      NewVar_26 = ((MR_Word) (conv0_NewVar_26));
      hlds__instmap__instmap_lookup_var_3_p_0(NewInstMap_5, NewVar_26, &NewVarInst_27);
      parse_tree__var_table__lookup_var_type_3_p_0(VarTable_6, NewVar_26, &Type_28);
      succeeded = check_hlds__inst_match__inst_matches_initial_4_p_0(ModuleInfo_1, Type_28, NewVarInst_27, OldVarInst_25);
      if (succeeded)
      {
        switch (STATE_VARIABLE_ExactSoFar_0_7) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              succeeded = check_hlds__inst_match__inst_matches_initial_4_p_0(ModuleInfo_1, Type_28, OldVarInst_25, NewVarInst_27);
              if (succeeded)
                STATE_VARIABLE_ExactSoFar_1_31 = (MR_Integer) 0;
              else
                STATE_VARIABLE_ExactSoFar_1_31 = (MR_Integer) 1;
            }
            break;
          case (MR_Integer) 1:
            STATE_VARIABLE_ExactSoFar_1_31 = STATE_VARIABLE_ExactSoFar_0_7;
            break;
        }
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__2_2 = Vars_19;
        next_value_of_STATE_VARIABLE_ExactSoFar_0_7 = STATE_VARIABLE_ExactSoFar_1_31;
        HeadVar__2_2 = next_value_of_HeadVar__2_2;
        STATE_VARIABLE_ExactSoFar_0_7 = next_value_of_STATE_VARIABLE_ExactSoFar_0_7;
        continue;
      }
    }
    return succeeded;
    break;
  }
}

void MR_CALL 
transform_hlds__pd_info__pd_info_incr_size_delta_3_p_0(
  MR_Integer Delta1_4,
  MR_Word STATE_VARIABLE_PDInfo_0_8,
  MR_Word * STATE_VARIABLE_PDInfo_9)
{
  MR_Integer Delta0_6;
  MR_Integer Delta_7;
  MR_Word UnfoldInfo_10;
  MR_Word MaybeUnfoldInfo_21 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PDInfo_0_8, 3))));

  if ((MaybeUnfoldInfo_21 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.pd_info.pd_info_get_unfold_info\'/2", (MR_String) "unfold_info not set");
      return;
    }
  else
    UnfoldInfo_10 = ((MR_Word) ((MR_hl_field(1, MaybeUnfoldInfo_21, 0))));
  Delta0_6 = ((MR_Integer) ((MR_hl_field(0, UnfoldInfo_10, 8))));
  Delta_7 = (MR_Integer) ((MR_Unsigned) Delta0_6 + (MR_Unsigned) Delta1_4);
  transform_hlds__pd_info__pd_info_set_size_delta_3_p_0(Delta_7, STATE_VARIABLE_PDInfo_0_8, STATE_VARIABLE_PDInfo_9);
}

void MR_CALL 
transform_hlds__pd_info__pd_info_incr_cost_delta_3_p_0(
  MR_Integer Delta1_4,
  MR_Word STATE_VARIABLE_PDInfo_0_8,
  MR_Word * STATE_VARIABLE_PDInfo_9)
{
  MR_Integer Delta0_6;
  MR_Integer Delta_7;
  MR_Word UnfoldInfo_10;
  MR_Word MaybeUnfoldInfo_21 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PDInfo_0_8, 3))));

  if ((MaybeUnfoldInfo_21 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.pd_info.pd_info_get_unfold_info\'/2", (MR_String) "unfold_info not set");
      return;
    }
  else
    UnfoldInfo_10 = ((MR_Word) ((MR_hl_field(1, MaybeUnfoldInfo_21, 0))));
  Delta0_6 = ((MR_Integer) ((MR_hl_field(0, UnfoldInfo_10, 3))));
  Delta_7 = (MR_Integer) ((MR_Unsigned) Delta0_6 + (MR_Unsigned) Delta1_4);
  transform_hlds__pd_info__pd_info_set_cost_delta_3_p_0(Delta_7, STATE_VARIABLE_PDInfo_0_8, STATE_VARIABLE_PDInfo_9);
}

void MR_CALL 
transform_hlds__pd_info__pd_info_set_rerun_det_3_p_0(
  MR_Word Rerun_4,
  MR_Word STATE_VARIABLE_PDInfo_0_8,
  MR_Word * STATE_VARIABLE_PDInfo_9)
{
  MR_Word UnfoldInfo0_6;
  MR_Word UnfoldInfo_7;
  MR_Word MaybeUnfoldInfo_21 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PDInfo_0_8, 3))));
  MR_Word Var_24 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PDInfo_0_8, 0))));
  MR_Word Var_25 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PDInfo_0_8, 1))));
  MR_Word Var_26 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PDInfo_0_8, 2))));
  MR_Word Var_27 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PDInfo_0_8, 4))));
  MR_Word Var_28 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PDInfo_0_8, 5))));
  MR_Word Var_29 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PDInfo_0_8, 6))));
  MR_Word Var_30 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PDInfo_0_8, 7))));
  MR_Word Var_31 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PDInfo_0_8, 8))));
  MR_Word Var_32 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PDInfo_0_8, 9))));
  MR_Integer Var_33 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_PDInfo_0_8, 10))));
  MR_Word Var_34 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PDInfo_0_8, 11))));
  MR_Word Var_35 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PDInfo_0_8, 12))));
  MR_Word Var_36;
  MR_Word Var_10;
  MR_Word Var_11;
  MR_Word Var_12;
  MR_Integer Var_13;
  MR_Word Var_14;
  MR_Word Var_15;
  MR_Word Var_16;
  MR_Word Var_17;
  MR_Integer Var_18;
  MR_Word Var_19;

  if ((MaybeUnfoldInfo_21 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.pd_info.pd_info_get_unfold_info\'/2", (MR_String) "unfold_info not set");
      return;
    }
  else
    UnfoldInfo0_6 = ((MR_Word) ((MR_hl_field(1, MaybeUnfoldInfo_21, 0))));
  Var_10 = ((MR_Word) ((MR_hl_field(0, UnfoldInfo0_6, 0))));
  Var_11 = ((MR_Word) ((MR_hl_field(0, UnfoldInfo0_6, 1))));
  Var_12 = ((MR_Word) ((MR_hl_field(0, UnfoldInfo0_6, 2))));
  Var_13 = ((MR_Integer) ((MR_hl_field(0, UnfoldInfo0_6, 3))));
  Var_14 = ((MR_Word) ((MR_hl_field(0, UnfoldInfo0_6, 4))));
  Var_15 = ((MR_Word) ((MR_hl_field(0, UnfoldInfo0_6, 5))));
  Var_16 = ((MR_Word) ((MR_hl_field(0, UnfoldInfo0_6, 6))));
  Var_17 = ((MR_Word) ((MR_hl_field(0, UnfoldInfo0_6, 7))));
  Var_18 = ((MR_Integer) ((MR_hl_field(0, UnfoldInfo0_6, 8))));
  Var_19 = ((((MR_Unsigned) ((MR_hl_field(0, UnfoldInfo0_6, 9))) >> 1)) & (MR_Integer) 1);
  {
    UnfoldInfo_7 = (MR_Word) MR_new_object(MR_Word, (10 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, UnfoldInfo_7, 0) = ((MR_Box) (Var_10));
    MR_hl_field(0, UnfoldInfo_7, 1) = ((MR_Box) (Var_11));
    MR_hl_field(0, UnfoldInfo_7, 2) = ((MR_Box) (Var_12));
    MR_hl_field(0, UnfoldInfo_7, 3) = ((MR_Box) (Var_13));
    MR_hl_field(0, UnfoldInfo_7, 4) = ((MR_Box) (Var_14));
    MR_hl_field(0, UnfoldInfo_7, 5) = ((MR_Box) (Var_15));
    MR_hl_field(0, UnfoldInfo_7, 6) = ((MR_Box) (Var_16));
    MR_hl_field(0, UnfoldInfo_7, 7) = ((MR_Box) (Var_17));
    MR_hl_field(0, UnfoldInfo_7, 8) = ((MR_Box) (Var_18));
    MR_hl_field(0, UnfoldInfo_7, 9) = (MR_Box) (((((MR_Unsigned) (Var_19) << 1)) | (MR_Unsigned) (Rerun_4)));
  }
  {
    Var_36 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_36, 0) = ((MR_Box) (UnfoldInfo_7));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (13 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_PDInfo_9 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_24));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_25));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_26));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_36));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_27));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_28));
    MR_hl_field(0, base, 6) = ((MR_Box) (Var_29));
    MR_hl_field(0, base, 7) = ((MR_Box) (Var_30));
    MR_hl_field(0, base, 8) = ((MR_Box) (Var_31));
    MR_hl_field(0, base, 9) = ((MR_Box) (Var_32));
    MR_hl_field(0, base, 10) = ((MR_Box) (Var_33));
    MR_hl_field(0, base, 11) = ((MR_Box) (Var_34));
    MR_hl_field(0, base, 12) = ((MR_Box) (Var_35));
  }
}

void MR_CALL 
transform_hlds__pd_info__pd_info_set_changed_3_p_0(
  MR_Word Changed_4,
  MR_Word STATE_VARIABLE_PDInfo_0_8,
  MR_Word * STATE_VARIABLE_PDInfo_9)
{
  MR_Word UnfoldInfo0_6;
  MR_Word UnfoldInfo_7;
  MR_Word MaybeUnfoldInfo_21 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PDInfo_0_8, 3))));
  MR_Word Var_24 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PDInfo_0_8, 0))));
  MR_Word Var_25 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PDInfo_0_8, 1))));
  MR_Word Var_26 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PDInfo_0_8, 2))));
  MR_Word Var_27 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PDInfo_0_8, 4))));
  MR_Word Var_28 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PDInfo_0_8, 5))));
  MR_Word Var_29 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PDInfo_0_8, 6))));
  MR_Word Var_30 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PDInfo_0_8, 7))));
  MR_Word Var_31 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PDInfo_0_8, 8))));
  MR_Word Var_32 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PDInfo_0_8, 9))));
  MR_Integer Var_33 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_PDInfo_0_8, 10))));
  MR_Word Var_34 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PDInfo_0_8, 11))));
  MR_Word Var_35 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PDInfo_0_8, 12))));
  MR_Word Var_36;
  MR_Word Var_10;
  MR_Word Var_11;
  MR_Word Var_12;
  MR_Integer Var_13;
  MR_Word Var_14;
  MR_Word Var_15;
  MR_Word Var_16;
  MR_Word Var_17;
  MR_Integer Var_18;
  MR_Word Var_20;

  if ((MaybeUnfoldInfo_21 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.pd_info.pd_info_get_unfold_info\'/2", (MR_String) "unfold_info not set");
      return;
    }
  else
    UnfoldInfo0_6 = ((MR_Word) ((MR_hl_field(1, MaybeUnfoldInfo_21, 0))));
  Var_10 = ((MR_Word) ((MR_hl_field(0, UnfoldInfo0_6, 0))));
  Var_11 = ((MR_Word) ((MR_hl_field(0, UnfoldInfo0_6, 1))));
  Var_12 = ((MR_Word) ((MR_hl_field(0, UnfoldInfo0_6, 2))));
  Var_13 = ((MR_Integer) ((MR_hl_field(0, UnfoldInfo0_6, 3))));
  Var_14 = ((MR_Word) ((MR_hl_field(0, UnfoldInfo0_6, 4))));
  Var_15 = ((MR_Word) ((MR_hl_field(0, UnfoldInfo0_6, 5))));
  Var_16 = ((MR_Word) ((MR_hl_field(0, UnfoldInfo0_6, 6))));
  Var_17 = ((MR_Word) ((MR_hl_field(0, UnfoldInfo0_6, 7))));
  Var_18 = ((MR_Integer) ((MR_hl_field(0, UnfoldInfo0_6, 8))));
  Var_20 = ((MR_Unsigned) ((MR_hl_field(0, UnfoldInfo0_6, 9))) & (MR_Integer) 1);
  {
    UnfoldInfo_7 = (MR_Word) MR_new_object(MR_Word, (10 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, UnfoldInfo_7, 0) = ((MR_Box) (Var_10));
    MR_hl_field(0, UnfoldInfo_7, 1) = ((MR_Box) (Var_11));
    MR_hl_field(0, UnfoldInfo_7, 2) = ((MR_Box) (Var_12));
    MR_hl_field(0, UnfoldInfo_7, 3) = ((MR_Box) (Var_13));
    MR_hl_field(0, UnfoldInfo_7, 4) = ((MR_Box) (Var_14));
    MR_hl_field(0, UnfoldInfo_7, 5) = ((MR_Box) (Var_15));
    MR_hl_field(0, UnfoldInfo_7, 6) = ((MR_Box) (Var_16));
    MR_hl_field(0, UnfoldInfo_7, 7) = ((MR_Box) (Var_17));
    MR_hl_field(0, UnfoldInfo_7, 8) = ((MR_Box) (Var_18));
    MR_hl_field(0, UnfoldInfo_7, 9) = (MR_Box) (((((MR_Unsigned) (Changed_4) << 1)) | (MR_Unsigned) (Var_20)));
  }
  {
    Var_36 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_36, 0) = ((MR_Box) (UnfoldInfo_7));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (13 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_PDInfo_9 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_24));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_25));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_26));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_36));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_27));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_28));
    MR_hl_field(0, base, 6) = ((MR_Box) (Var_29));
    MR_hl_field(0, base, 7) = ((MR_Box) (Var_30));
    MR_hl_field(0, base, 8) = ((MR_Box) (Var_31));
    MR_hl_field(0, base, 9) = ((MR_Box) (Var_32));
    MR_hl_field(0, base, 10) = ((MR_Box) (Var_33));
    MR_hl_field(0, base, 11) = ((MR_Box) (Var_34));
    MR_hl_field(0, base, 12) = ((MR_Box) (Var_35));
  }
}

void MR_CALL 
transform_hlds__pd_info__pd_info_set_size_delta_3_p_0(
  MR_Integer SizeDelta_4,
  MR_Word STATE_VARIABLE_PDInfo_0_8,
  MR_Word * STATE_VARIABLE_PDInfo_9)
{
  MR_Word UnfoldInfo0_6;
  MR_Word UnfoldInfo_7;
  MR_Word MaybeUnfoldInfo_21 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PDInfo_0_8, 3))));
  MR_Word Var_24 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PDInfo_0_8, 0))));
  MR_Word Var_25 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PDInfo_0_8, 1))));
  MR_Word Var_26 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PDInfo_0_8, 2))));
  MR_Word Var_27 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PDInfo_0_8, 4))));
  MR_Word Var_28 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PDInfo_0_8, 5))));
  MR_Word Var_29 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PDInfo_0_8, 6))));
  MR_Word Var_30 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PDInfo_0_8, 7))));
  MR_Word Var_31 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PDInfo_0_8, 8))));
  MR_Word Var_32 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PDInfo_0_8, 9))));
  MR_Integer Var_33 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_PDInfo_0_8, 10))));
  MR_Word Var_34 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PDInfo_0_8, 11))));
  MR_Word Var_35 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PDInfo_0_8, 12))));
  MR_Word Var_36;
  MR_Word Var_10;
  MR_Word Var_11;
  MR_Word Var_12;
  MR_Integer Var_13;
  MR_Word Var_14;
  MR_Word Var_15;
  MR_Word Var_16;
  MR_Word Var_17;
  MR_Unsigned packed_word_0;

  if ((MaybeUnfoldInfo_21 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.pd_info.pd_info_get_unfold_info\'/2", (MR_String) "unfold_info not set");
      return;
    }
  else
    UnfoldInfo0_6 = ((MR_Word) ((MR_hl_field(1, MaybeUnfoldInfo_21, 0))));
  Var_10 = ((MR_Word) ((MR_hl_field(0, UnfoldInfo0_6, 0))));
  Var_11 = ((MR_Word) ((MR_hl_field(0, UnfoldInfo0_6, 1))));
  Var_12 = ((MR_Word) ((MR_hl_field(0, UnfoldInfo0_6, 2))));
  Var_13 = ((MR_Integer) ((MR_hl_field(0, UnfoldInfo0_6, 3))));
  Var_14 = ((MR_Word) ((MR_hl_field(0, UnfoldInfo0_6, 4))));
  Var_15 = ((MR_Word) ((MR_hl_field(0, UnfoldInfo0_6, 5))));
  Var_16 = ((MR_Word) ((MR_hl_field(0, UnfoldInfo0_6, 6))));
  Var_17 = ((MR_Word) ((MR_hl_field(0, UnfoldInfo0_6, 7))));
  packed_word_0 = (MR_Unsigned) ((MR_hl_field(0, UnfoldInfo0_6, 9)));
  {
    UnfoldInfo_7 = (MR_Word) MR_new_object(MR_Word, (10 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, UnfoldInfo_7, 0) = ((MR_Box) (Var_10));
    MR_hl_field(0, UnfoldInfo_7, 1) = ((MR_Box) (Var_11));
    MR_hl_field(0, UnfoldInfo_7, 2) = ((MR_Box) (Var_12));
    MR_hl_field(0, UnfoldInfo_7, 3) = ((MR_Box) (Var_13));
    MR_hl_field(0, UnfoldInfo_7, 4) = ((MR_Box) (Var_14));
    MR_hl_field(0, UnfoldInfo_7, 5) = ((MR_Box) (Var_15));
    MR_hl_field(0, UnfoldInfo_7, 6) = ((MR_Box) (Var_16));
    MR_hl_field(0, UnfoldInfo_7, 7) = ((MR_Box) (Var_17));
    MR_hl_field(0, UnfoldInfo_7, 8) = ((MR_Box) (SizeDelta_4));
    MR_hl_field(0, UnfoldInfo_7, 9) = (MR_Box) (packed_word_0);
  }
  {
    Var_36 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_36, 0) = ((MR_Box) (UnfoldInfo_7));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (13 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_PDInfo_9 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_24));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_25));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_26));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_36));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_27));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_28));
    MR_hl_field(0, base, 6) = ((MR_Box) (Var_29));
    MR_hl_field(0, base, 7) = ((MR_Box) (Var_30));
    MR_hl_field(0, base, 8) = ((MR_Box) (Var_31));
    MR_hl_field(0, base, 9) = ((MR_Box) (Var_32));
    MR_hl_field(0, base, 10) = ((MR_Box) (Var_33));
    MR_hl_field(0, base, 11) = ((MR_Box) (Var_34));
    MR_hl_field(0, base, 12) = ((MR_Box) (Var_35));
  }
}

void MR_CALL 
transform_hlds__pd_info__pd_info_set_pred_proc_id_3_p_0(
  MR_Word PredProcId_4,
  MR_Word STATE_VARIABLE_PDInfo_0_8,
  MR_Word * STATE_VARIABLE_PDInfo_9)
{
  MR_Word UnfoldInfo0_6;
  MR_Word UnfoldInfo_7;
  MR_Word MaybeUnfoldInfo_21 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PDInfo_0_8, 3))));
  MR_Word Var_24 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PDInfo_0_8, 0))));
  MR_Word Var_25 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PDInfo_0_8, 1))));
  MR_Word Var_26 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PDInfo_0_8, 2))));
  MR_Word Var_27 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PDInfo_0_8, 4))));
  MR_Word Var_28 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PDInfo_0_8, 5))));
  MR_Word Var_29 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PDInfo_0_8, 6))));
  MR_Word Var_30 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PDInfo_0_8, 7))));
  MR_Word Var_31 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PDInfo_0_8, 8))));
  MR_Word Var_32 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PDInfo_0_8, 9))));
  MR_Integer Var_33 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_PDInfo_0_8, 10))));
  MR_Word Var_34 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PDInfo_0_8, 11))));
  MR_Word Var_35 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PDInfo_0_8, 12))));
  MR_Word Var_36;
  MR_Word Var_10;
  MR_Word Var_11;
  MR_Word Var_12;
  MR_Integer Var_13;
  MR_Word Var_14;
  MR_Word Var_15;
  MR_Word Var_16;
  MR_Integer Var_18;
  MR_Unsigned packed_word_0;

  if ((MaybeUnfoldInfo_21 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.pd_info.pd_info_get_unfold_info\'/2", (MR_String) "unfold_info not set");
      return;
    }
  else
    UnfoldInfo0_6 = ((MR_Word) ((MR_hl_field(1, MaybeUnfoldInfo_21, 0))));
  Var_10 = ((MR_Word) ((MR_hl_field(0, UnfoldInfo0_6, 0))));
  Var_11 = ((MR_Word) ((MR_hl_field(0, UnfoldInfo0_6, 1))));
  Var_12 = ((MR_Word) ((MR_hl_field(0, UnfoldInfo0_6, 2))));
  Var_13 = ((MR_Integer) ((MR_hl_field(0, UnfoldInfo0_6, 3))));
  Var_14 = ((MR_Word) ((MR_hl_field(0, UnfoldInfo0_6, 4))));
  Var_15 = ((MR_Word) ((MR_hl_field(0, UnfoldInfo0_6, 5))));
  Var_16 = ((MR_Word) ((MR_hl_field(0, UnfoldInfo0_6, 6))));
  Var_18 = ((MR_Integer) ((MR_hl_field(0, UnfoldInfo0_6, 8))));
  packed_word_0 = (MR_Unsigned) ((MR_hl_field(0, UnfoldInfo0_6, 9)));
  {
    UnfoldInfo_7 = (MR_Word) MR_new_object(MR_Word, (10 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, UnfoldInfo_7, 0) = ((MR_Box) (Var_10));
    MR_hl_field(0, UnfoldInfo_7, 1) = ((MR_Box) (Var_11));
    MR_hl_field(0, UnfoldInfo_7, 2) = ((MR_Box) (Var_12));
    MR_hl_field(0, UnfoldInfo_7, 3) = ((MR_Box) (Var_13));
    MR_hl_field(0, UnfoldInfo_7, 4) = ((MR_Box) (Var_14));
    MR_hl_field(0, UnfoldInfo_7, 5) = ((MR_Box) (Var_15));
    MR_hl_field(0, UnfoldInfo_7, 6) = ((MR_Box) (Var_16));
    MR_hl_field(0, UnfoldInfo_7, 7) = ((MR_Box) (PredProcId_4));
    MR_hl_field(0, UnfoldInfo_7, 8) = ((MR_Box) (Var_18));
    MR_hl_field(0, UnfoldInfo_7, 9) = (MR_Box) (packed_word_0);
  }
  {
    Var_36 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_36, 0) = ((MR_Box) (UnfoldInfo_7));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (13 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_PDInfo_9 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_24));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_25));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_26));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_36));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_27));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_28));
    MR_hl_field(0, base, 6) = ((MR_Box) (Var_29));
    MR_hl_field(0, base, 7) = ((MR_Box) (Var_30));
    MR_hl_field(0, base, 8) = ((MR_Box) (Var_31));
    MR_hl_field(0, base, 9) = ((MR_Box) (Var_32));
    MR_hl_field(0, base, 10) = ((MR_Box) (Var_33));
    MR_hl_field(0, base, 11) = ((MR_Box) (Var_34));
    MR_hl_field(0, base, 12) = ((MR_Box) (Var_35));
  }
}

void MR_CALL 
transform_hlds__pd_info__pd_info_set_parents_3_p_0(
  MR_Word Parents_4,
  MR_Word STATE_VARIABLE_PDInfo_0_8,
  MR_Word * STATE_VARIABLE_PDInfo_9)
{
  MR_Word UnfoldInfo0_6;
  MR_Word UnfoldInfo_7;
  MR_Word MaybeUnfoldInfo_21 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PDInfo_0_8, 3))));
  MR_Word Var_24 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PDInfo_0_8, 0))));
  MR_Word Var_25 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PDInfo_0_8, 1))));
  MR_Word Var_26 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PDInfo_0_8, 2))));
  MR_Word Var_27 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PDInfo_0_8, 4))));
  MR_Word Var_28 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PDInfo_0_8, 5))));
  MR_Word Var_29 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PDInfo_0_8, 6))));
  MR_Word Var_30 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PDInfo_0_8, 7))));
  MR_Word Var_31 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PDInfo_0_8, 8))));
  MR_Word Var_32 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PDInfo_0_8, 9))));
  MR_Integer Var_33 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_PDInfo_0_8, 10))));
  MR_Word Var_34 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PDInfo_0_8, 11))));
  MR_Word Var_35 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PDInfo_0_8, 12))));
  MR_Word Var_36;
  MR_Word Var_10;
  MR_Word Var_11;
  MR_Word Var_12;
  MR_Integer Var_13;
  MR_Word Var_14;
  MR_Word Var_15;
  MR_Word Var_17;
  MR_Integer Var_18;
  MR_Unsigned packed_word_0;

  if ((MaybeUnfoldInfo_21 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.pd_info.pd_info_get_unfold_info\'/2", (MR_String) "unfold_info not set");
      return;
    }
  else
    UnfoldInfo0_6 = ((MR_Word) ((MR_hl_field(1, MaybeUnfoldInfo_21, 0))));
  Var_10 = ((MR_Word) ((MR_hl_field(0, UnfoldInfo0_6, 0))));
  Var_11 = ((MR_Word) ((MR_hl_field(0, UnfoldInfo0_6, 1))));
  Var_12 = ((MR_Word) ((MR_hl_field(0, UnfoldInfo0_6, 2))));
  Var_13 = ((MR_Integer) ((MR_hl_field(0, UnfoldInfo0_6, 3))));
  Var_14 = ((MR_Word) ((MR_hl_field(0, UnfoldInfo0_6, 4))));
  Var_15 = ((MR_Word) ((MR_hl_field(0, UnfoldInfo0_6, 5))));
  Var_17 = ((MR_Word) ((MR_hl_field(0, UnfoldInfo0_6, 7))));
  Var_18 = ((MR_Integer) ((MR_hl_field(0, UnfoldInfo0_6, 8))));
  packed_word_0 = (MR_Unsigned) ((MR_hl_field(0, UnfoldInfo0_6, 9)));
  {
    UnfoldInfo_7 = (MR_Word) MR_new_object(MR_Word, (10 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, UnfoldInfo_7, 0) = ((MR_Box) (Var_10));
    MR_hl_field(0, UnfoldInfo_7, 1) = ((MR_Box) (Var_11));
    MR_hl_field(0, UnfoldInfo_7, 2) = ((MR_Box) (Var_12));
    MR_hl_field(0, UnfoldInfo_7, 3) = ((MR_Box) (Var_13));
    MR_hl_field(0, UnfoldInfo_7, 4) = ((MR_Box) (Var_14));
    MR_hl_field(0, UnfoldInfo_7, 5) = ((MR_Box) (Var_15));
    MR_hl_field(0, UnfoldInfo_7, 6) = ((MR_Box) (Parents_4));
    MR_hl_field(0, UnfoldInfo_7, 7) = ((MR_Box) (Var_17));
    MR_hl_field(0, UnfoldInfo_7, 8) = ((MR_Box) (Var_18));
    MR_hl_field(0, UnfoldInfo_7, 9) = (MR_Box) (packed_word_0);
  }
  {
    Var_36 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_36, 0) = ((MR_Box) (UnfoldInfo_7));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (13 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_PDInfo_9 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_24));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_25));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_26));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_36));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_27));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_28));
    MR_hl_field(0, base, 6) = ((MR_Box) (Var_29));
    MR_hl_field(0, base, 7) = ((MR_Box) (Var_30));
    MR_hl_field(0, base, 8) = ((MR_Box) (Var_31));
    MR_hl_field(0, base, 9) = ((MR_Box) (Var_32));
    MR_hl_field(0, base, 10) = ((MR_Box) (Var_33));
    MR_hl_field(0, base, 11) = ((MR_Box) (Var_34));
    MR_hl_field(0, base, 12) = ((MR_Box) (Var_35));
  }
}

void MR_CALL 
transform_hlds__pd_info__pd_info_set_pred_info_3_p_0(
  MR_Word PredInfo_4,
  MR_Word STATE_VARIABLE_PDInfo_0_8,
  MR_Word * STATE_VARIABLE_PDInfo_9)
{
  MR_Word UnfoldInfo0_6;
  MR_Word UnfoldInfo_7;
  MR_Word MaybeUnfoldInfo_21 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PDInfo_0_8, 3))));
  MR_Word Var_24 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PDInfo_0_8, 0))));
  MR_Word Var_25 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PDInfo_0_8, 1))));
  MR_Word Var_26 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PDInfo_0_8, 2))));
  MR_Word Var_27 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PDInfo_0_8, 4))));
  MR_Word Var_28 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PDInfo_0_8, 5))));
  MR_Word Var_29 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PDInfo_0_8, 6))));
  MR_Word Var_30 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PDInfo_0_8, 7))));
  MR_Word Var_31 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PDInfo_0_8, 8))));
  MR_Word Var_32 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PDInfo_0_8, 9))));
  MR_Integer Var_33 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_PDInfo_0_8, 10))));
  MR_Word Var_34 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PDInfo_0_8, 11))));
  MR_Word Var_35 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PDInfo_0_8, 12))));
  MR_Word Var_36;
  MR_Word Var_10;
  MR_Word Var_11;
  MR_Word Var_12;
  MR_Integer Var_13;
  MR_Word Var_14;
  MR_Word Var_16;
  MR_Word Var_17;
  MR_Integer Var_18;
  MR_Unsigned packed_word_0;

  if ((MaybeUnfoldInfo_21 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.pd_info.pd_info_get_unfold_info\'/2", (MR_String) "unfold_info not set");
      return;
    }
  else
    UnfoldInfo0_6 = ((MR_Word) ((MR_hl_field(1, MaybeUnfoldInfo_21, 0))));
  Var_10 = ((MR_Word) ((MR_hl_field(0, UnfoldInfo0_6, 0))));
  Var_11 = ((MR_Word) ((MR_hl_field(0, UnfoldInfo0_6, 1))));
  Var_12 = ((MR_Word) ((MR_hl_field(0, UnfoldInfo0_6, 2))));
  Var_13 = ((MR_Integer) ((MR_hl_field(0, UnfoldInfo0_6, 3))));
  Var_14 = ((MR_Word) ((MR_hl_field(0, UnfoldInfo0_6, 4))));
  Var_16 = ((MR_Word) ((MR_hl_field(0, UnfoldInfo0_6, 6))));
  Var_17 = ((MR_Word) ((MR_hl_field(0, UnfoldInfo0_6, 7))));
  Var_18 = ((MR_Integer) ((MR_hl_field(0, UnfoldInfo0_6, 8))));
  packed_word_0 = (MR_Unsigned) ((MR_hl_field(0, UnfoldInfo0_6, 9)));
  {
    UnfoldInfo_7 = (MR_Word) MR_new_object(MR_Word, (10 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, UnfoldInfo_7, 0) = ((MR_Box) (Var_10));
    MR_hl_field(0, UnfoldInfo_7, 1) = ((MR_Box) (Var_11));
    MR_hl_field(0, UnfoldInfo_7, 2) = ((MR_Box) (Var_12));
    MR_hl_field(0, UnfoldInfo_7, 3) = ((MR_Box) (Var_13));
    MR_hl_field(0, UnfoldInfo_7, 4) = ((MR_Box) (Var_14));
    MR_hl_field(0, UnfoldInfo_7, 5) = ((MR_Box) (PredInfo_4));
    MR_hl_field(0, UnfoldInfo_7, 6) = ((MR_Box) (Var_16));
    MR_hl_field(0, UnfoldInfo_7, 7) = ((MR_Box) (Var_17));
    MR_hl_field(0, UnfoldInfo_7, 8) = ((MR_Box) (Var_18));
    MR_hl_field(0, UnfoldInfo_7, 9) = (MR_Box) (packed_word_0);
  }
  {
    Var_36 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_36, 0) = ((MR_Box) (UnfoldInfo_7));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (13 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_PDInfo_9 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_24));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_25));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_26));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_36));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_27));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_28));
    MR_hl_field(0, base, 6) = ((MR_Box) (Var_29));
    MR_hl_field(0, base, 7) = ((MR_Box) (Var_30));
    MR_hl_field(0, base, 8) = ((MR_Box) (Var_31));
    MR_hl_field(0, base, 9) = ((MR_Box) (Var_32));
    MR_hl_field(0, base, 10) = ((MR_Box) (Var_33));
    MR_hl_field(0, base, 11) = ((MR_Box) (Var_34));
    MR_hl_field(0, base, 12) = ((MR_Box) (Var_35));
  }
}

void MR_CALL 
transform_hlds__pd_info__pd_info_set_local_term_info_3_p_0(
  MR_Word TermInfo_4,
  MR_Word STATE_VARIABLE_PDInfo_0_8,
  MR_Word * STATE_VARIABLE_PDInfo_9)
{
  MR_Word UnfoldInfo0_6;
  MR_Word UnfoldInfo_7;
  MR_Word MaybeUnfoldInfo_21 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PDInfo_0_8, 3))));
  MR_Word Var_24 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PDInfo_0_8, 0))));
  MR_Word Var_25 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PDInfo_0_8, 1))));
  MR_Word Var_26 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PDInfo_0_8, 2))));
  MR_Word Var_27 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PDInfo_0_8, 4))));
  MR_Word Var_28 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PDInfo_0_8, 5))));
  MR_Word Var_29 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PDInfo_0_8, 6))));
  MR_Word Var_30 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PDInfo_0_8, 7))));
  MR_Word Var_31 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PDInfo_0_8, 8))));
  MR_Word Var_32 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PDInfo_0_8, 9))));
  MR_Integer Var_33 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_PDInfo_0_8, 10))));
  MR_Word Var_34 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PDInfo_0_8, 11))));
  MR_Word Var_35 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PDInfo_0_8, 12))));
  MR_Word Var_36;
  MR_Word Var_10;
  MR_Word Var_11;
  MR_Word Var_12;
  MR_Integer Var_13;
  MR_Word Var_15;
  MR_Word Var_16;
  MR_Word Var_17;
  MR_Integer Var_18;
  MR_Unsigned packed_word_0;

  if ((MaybeUnfoldInfo_21 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.pd_info.pd_info_get_unfold_info\'/2", (MR_String) "unfold_info not set");
      return;
    }
  else
    UnfoldInfo0_6 = ((MR_Word) ((MR_hl_field(1, MaybeUnfoldInfo_21, 0))));
  Var_10 = ((MR_Word) ((MR_hl_field(0, UnfoldInfo0_6, 0))));
  Var_11 = ((MR_Word) ((MR_hl_field(0, UnfoldInfo0_6, 1))));
  Var_12 = ((MR_Word) ((MR_hl_field(0, UnfoldInfo0_6, 2))));
  Var_13 = ((MR_Integer) ((MR_hl_field(0, UnfoldInfo0_6, 3))));
  Var_15 = ((MR_Word) ((MR_hl_field(0, UnfoldInfo0_6, 5))));
  Var_16 = ((MR_Word) ((MR_hl_field(0, UnfoldInfo0_6, 6))));
  Var_17 = ((MR_Word) ((MR_hl_field(0, UnfoldInfo0_6, 7))));
  Var_18 = ((MR_Integer) ((MR_hl_field(0, UnfoldInfo0_6, 8))));
  packed_word_0 = (MR_Unsigned) ((MR_hl_field(0, UnfoldInfo0_6, 9)));
  {
    UnfoldInfo_7 = (MR_Word) MR_new_object(MR_Word, (10 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, UnfoldInfo_7, 0) = ((MR_Box) (Var_10));
    MR_hl_field(0, UnfoldInfo_7, 1) = ((MR_Box) (Var_11));
    MR_hl_field(0, UnfoldInfo_7, 2) = ((MR_Box) (Var_12));
    MR_hl_field(0, UnfoldInfo_7, 3) = ((MR_Box) (Var_13));
    MR_hl_field(0, UnfoldInfo_7, 4) = ((MR_Box) (TermInfo_4));
    MR_hl_field(0, UnfoldInfo_7, 5) = ((MR_Box) (Var_15));
    MR_hl_field(0, UnfoldInfo_7, 6) = ((MR_Box) (Var_16));
    MR_hl_field(0, UnfoldInfo_7, 7) = ((MR_Box) (Var_17));
    MR_hl_field(0, UnfoldInfo_7, 8) = ((MR_Box) (Var_18));
    MR_hl_field(0, UnfoldInfo_7, 9) = (MR_Box) (packed_word_0);
  }
  {
    Var_36 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_36, 0) = ((MR_Box) (UnfoldInfo_7));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (13 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_PDInfo_9 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_24));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_25));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_26));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_36));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_27));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_28));
    MR_hl_field(0, base, 6) = ((MR_Box) (Var_29));
    MR_hl_field(0, base, 7) = ((MR_Box) (Var_30));
    MR_hl_field(0, base, 8) = ((MR_Box) (Var_31));
    MR_hl_field(0, base, 9) = ((MR_Box) (Var_32));
    MR_hl_field(0, base, 10) = ((MR_Box) (Var_33));
    MR_hl_field(0, base, 11) = ((MR_Box) (Var_34));
    MR_hl_field(0, base, 12) = ((MR_Box) (Var_35));
  }
}

void MR_CALL 
transform_hlds__pd_info__pd_info_set_cost_delta_3_p_0(
  MR_Integer CostDelta_4,
  MR_Word STATE_VARIABLE_PDInfo_0_8,
  MR_Word * STATE_VARIABLE_PDInfo_9)
{
  MR_Word UnfoldInfo0_6;
  MR_Word UnfoldInfo_7;
  MR_Word MaybeUnfoldInfo_21 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PDInfo_0_8, 3))));
  MR_Word Var_24 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PDInfo_0_8, 0))));
  MR_Word Var_25 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PDInfo_0_8, 1))));
  MR_Word Var_26 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PDInfo_0_8, 2))));
  MR_Word Var_27 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PDInfo_0_8, 4))));
  MR_Word Var_28 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PDInfo_0_8, 5))));
  MR_Word Var_29 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PDInfo_0_8, 6))));
  MR_Word Var_30 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PDInfo_0_8, 7))));
  MR_Word Var_31 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PDInfo_0_8, 8))));
  MR_Word Var_32 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PDInfo_0_8, 9))));
  MR_Integer Var_33 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_PDInfo_0_8, 10))));
  MR_Word Var_34 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PDInfo_0_8, 11))));
  MR_Word Var_35 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PDInfo_0_8, 12))));
  MR_Word Var_36;
  MR_Word Var_10;
  MR_Word Var_11;
  MR_Word Var_12;
  MR_Word Var_14;
  MR_Word Var_15;
  MR_Word Var_16;
  MR_Word Var_17;
  MR_Integer Var_18;
  MR_Unsigned packed_word_0;

  if ((MaybeUnfoldInfo_21 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.pd_info.pd_info_get_unfold_info\'/2", (MR_String) "unfold_info not set");
      return;
    }
  else
    UnfoldInfo0_6 = ((MR_Word) ((MR_hl_field(1, MaybeUnfoldInfo_21, 0))));
  Var_10 = ((MR_Word) ((MR_hl_field(0, UnfoldInfo0_6, 0))));
  Var_11 = ((MR_Word) ((MR_hl_field(0, UnfoldInfo0_6, 1))));
  Var_12 = ((MR_Word) ((MR_hl_field(0, UnfoldInfo0_6, 2))));
  Var_14 = ((MR_Word) ((MR_hl_field(0, UnfoldInfo0_6, 4))));
  Var_15 = ((MR_Word) ((MR_hl_field(0, UnfoldInfo0_6, 5))));
  Var_16 = ((MR_Word) ((MR_hl_field(0, UnfoldInfo0_6, 6))));
  Var_17 = ((MR_Word) ((MR_hl_field(0, UnfoldInfo0_6, 7))));
  Var_18 = ((MR_Integer) ((MR_hl_field(0, UnfoldInfo0_6, 8))));
  packed_word_0 = (MR_Unsigned) ((MR_hl_field(0, UnfoldInfo0_6, 9)));
  {
    UnfoldInfo_7 = (MR_Word) MR_new_object(MR_Word, (10 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, UnfoldInfo_7, 0) = ((MR_Box) (Var_10));
    MR_hl_field(0, UnfoldInfo_7, 1) = ((MR_Box) (Var_11));
    MR_hl_field(0, UnfoldInfo_7, 2) = ((MR_Box) (Var_12));
    MR_hl_field(0, UnfoldInfo_7, 3) = ((MR_Box) (CostDelta_4));
    MR_hl_field(0, UnfoldInfo_7, 4) = ((MR_Box) (Var_14));
    MR_hl_field(0, UnfoldInfo_7, 5) = ((MR_Box) (Var_15));
    MR_hl_field(0, UnfoldInfo_7, 6) = ((MR_Box) (Var_16));
    MR_hl_field(0, UnfoldInfo_7, 7) = ((MR_Box) (Var_17));
    MR_hl_field(0, UnfoldInfo_7, 8) = ((MR_Box) (Var_18));
    MR_hl_field(0, UnfoldInfo_7, 9) = (MR_Box) (packed_word_0);
  }
  {
    Var_36 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_36, 0) = ((MR_Box) (UnfoldInfo_7));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (13 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_PDInfo_9 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_24));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_25));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_26));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_36));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_27));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_28));
    MR_hl_field(0, base, 6) = ((MR_Box) (Var_29));
    MR_hl_field(0, base, 7) = ((MR_Box) (Var_30));
    MR_hl_field(0, base, 8) = ((MR_Box) (Var_31));
    MR_hl_field(0, base, 9) = ((MR_Box) (Var_32));
    MR_hl_field(0, base, 10) = ((MR_Box) (Var_33));
    MR_hl_field(0, base, 11) = ((MR_Box) (Var_34));
    MR_hl_field(0, base, 12) = ((MR_Box) (Var_35));
  }
}

void MR_CALL 
transform_hlds__pd_info__pd_info_set_proc_info_3_p_0(
  MR_Word ProcInfo_4,
  MR_Word STATE_VARIABLE_PDInfo_0_8,
  MR_Word * STATE_VARIABLE_PDInfo_9)
{
  MR_Word UnfoldInfo0_6;
  MR_Word UnfoldInfo_7;
  MR_Word MaybeUnfoldInfo_21 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PDInfo_0_8, 3))));
  MR_Word Var_24 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PDInfo_0_8, 0))));
  MR_Word Var_25 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PDInfo_0_8, 1))));
  MR_Word Var_26 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PDInfo_0_8, 2))));
  MR_Word Var_27 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PDInfo_0_8, 4))));
  MR_Word Var_28 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PDInfo_0_8, 5))));
  MR_Word Var_29 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PDInfo_0_8, 6))));
  MR_Word Var_30 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PDInfo_0_8, 7))));
  MR_Word Var_31 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PDInfo_0_8, 8))));
  MR_Word Var_32 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PDInfo_0_8, 9))));
  MR_Integer Var_33 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_PDInfo_0_8, 10))));
  MR_Word Var_34 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PDInfo_0_8, 11))));
  MR_Word Var_35 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PDInfo_0_8, 12))));
  MR_Word Var_36;
  MR_Word Var_11;
  MR_Word Var_12;
  MR_Integer Var_13;
  MR_Word Var_14;
  MR_Word Var_15;
  MR_Word Var_16;
  MR_Word Var_17;
  MR_Integer Var_18;
  MR_Unsigned packed_word_0;

  if ((MaybeUnfoldInfo_21 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.pd_info.pd_info_get_unfold_info\'/2", (MR_String) "unfold_info not set");
      return;
    }
  else
    UnfoldInfo0_6 = ((MR_Word) ((MR_hl_field(1, MaybeUnfoldInfo_21, 0))));
  Var_11 = ((MR_Word) ((MR_hl_field(0, UnfoldInfo0_6, 1))));
  Var_12 = ((MR_Word) ((MR_hl_field(0, UnfoldInfo0_6, 2))));
  Var_13 = ((MR_Integer) ((MR_hl_field(0, UnfoldInfo0_6, 3))));
  Var_14 = ((MR_Word) ((MR_hl_field(0, UnfoldInfo0_6, 4))));
  Var_15 = ((MR_Word) ((MR_hl_field(0, UnfoldInfo0_6, 5))));
  Var_16 = ((MR_Word) ((MR_hl_field(0, UnfoldInfo0_6, 6))));
  Var_17 = ((MR_Word) ((MR_hl_field(0, UnfoldInfo0_6, 7))));
  Var_18 = ((MR_Integer) ((MR_hl_field(0, UnfoldInfo0_6, 8))));
  packed_word_0 = (MR_Unsigned) ((MR_hl_field(0, UnfoldInfo0_6, 9)));
  {
    UnfoldInfo_7 = (MR_Word) MR_new_object(MR_Word, (10 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, UnfoldInfo_7, 0) = ((MR_Box) (ProcInfo_4));
    MR_hl_field(0, UnfoldInfo_7, 1) = ((MR_Box) (Var_11));
    MR_hl_field(0, UnfoldInfo_7, 2) = ((MR_Box) (Var_12));
    MR_hl_field(0, UnfoldInfo_7, 3) = ((MR_Box) (Var_13));
    MR_hl_field(0, UnfoldInfo_7, 4) = ((MR_Box) (Var_14));
    MR_hl_field(0, UnfoldInfo_7, 5) = ((MR_Box) (Var_15));
    MR_hl_field(0, UnfoldInfo_7, 6) = ((MR_Box) (Var_16));
    MR_hl_field(0, UnfoldInfo_7, 7) = ((MR_Box) (Var_17));
    MR_hl_field(0, UnfoldInfo_7, 8) = ((MR_Box) (Var_18));
    MR_hl_field(0, UnfoldInfo_7, 9) = (MR_Box) (packed_word_0);
  }
  {
    Var_36 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_36, 0) = ((MR_Box) (UnfoldInfo_7));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (13 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_PDInfo_9 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_24));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_25));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_26));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_36));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_27));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_28));
    MR_hl_field(0, base, 6) = ((MR_Box) (Var_29));
    MR_hl_field(0, base, 7) = ((MR_Box) (Var_30));
    MR_hl_field(0, base, 8) = ((MR_Box) (Var_31));
    MR_hl_field(0, base, 9) = ((MR_Box) (Var_32));
    MR_hl_field(0, base, 10) = ((MR_Box) (Var_33));
    MR_hl_field(0, base, 11) = ((MR_Box) (Var_34));
    MR_hl_field(0, base, 12) = ((MR_Box) (Var_35));
  }
}

void MR_CALL 
transform_hlds__pd_info__pd_info_get_rerun_det_2_p_0(
  MR_Word PDInfo_3,
  MR_Word * HeadVar__2_2)
{
  MR_Word UnfoldInfo_4;
  MR_Word MaybeUnfoldInfo_15 = ((MR_Word) ((MR_hl_field(0, PDInfo_3, 3))));

  if ((MaybeUnfoldInfo_15 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.pd_info.pd_info_get_unfold_info\'/2", (MR_String) "unfold_info not set");
      return;
    }
  else
    UnfoldInfo_4 = ((MR_Word) ((MR_hl_field(1, MaybeUnfoldInfo_15, 0))));
  *HeadVar__2_2 = ((MR_Unsigned) ((MR_hl_field(0, UnfoldInfo_4, 9))) & (MR_Integer) 1);
}

void MR_CALL 
transform_hlds__pd_info__pd_info_get_changed_2_p_0(
  MR_Word PDInfo_3,
  MR_Word * HeadVar__2_2)
{
  MR_Word UnfoldInfo_4;
  MR_Word MaybeUnfoldInfo_15 = ((MR_Word) ((MR_hl_field(0, PDInfo_3, 3))));

  if ((MaybeUnfoldInfo_15 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.pd_info.pd_info_get_unfold_info\'/2", (MR_String) "unfold_info not set");
      return;
    }
  else
    UnfoldInfo_4 = ((MR_Word) ((MR_hl_field(1, MaybeUnfoldInfo_15, 0))));
  *HeadVar__2_2 = ((((MR_Unsigned) ((MR_hl_field(0, UnfoldInfo_4, 9))) >> 1)) & (MR_Integer) 1);
}

void MR_CALL 
transform_hlds__pd_info__pd_info_get_size_delta_2_p_0(
  MR_Word PDInfo_3,
  MR_Integer * HeadVar__2_2)
{
  MR_Word UnfoldInfo_4;
  MR_Word MaybeUnfoldInfo_15 = ((MR_Word) ((MR_hl_field(0, PDInfo_3, 3))));

  if ((MaybeUnfoldInfo_15 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.pd_info.pd_info_get_unfold_info\'/2", (MR_String) "unfold_info not set");
      return;
    }
  else
    UnfoldInfo_4 = ((MR_Word) ((MR_hl_field(1, MaybeUnfoldInfo_15, 0))));
  *HeadVar__2_2 = ((MR_Integer) ((MR_hl_field(0, UnfoldInfo_4, 8))));
}

void MR_CALL 
transform_hlds__pd_info__pd_info_get_pred_proc_id_2_p_0(
  MR_Word PDInfo_3,
  MR_Word * HeadVar__2_2)
{
  MR_Word UnfoldInfo_4;
  MR_Word MaybeUnfoldInfo_15 = ((MR_Word) ((MR_hl_field(0, PDInfo_3, 3))));

  if ((MaybeUnfoldInfo_15 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.pd_info.pd_info_get_unfold_info\'/2", (MR_String) "unfold_info not set");
      return;
    }
  else
    UnfoldInfo_4 = ((MR_Word) ((MR_hl_field(1, MaybeUnfoldInfo_15, 0))));
  *HeadVar__2_2 = ((MR_Word) ((MR_hl_field(0, UnfoldInfo_4, 7))));
}

void MR_CALL 
transform_hlds__pd_info__pd_info_get_parents_2_p_0(
  MR_Word PDInfo_3,
  MR_Word * HeadVar__2_2)
{
  MR_Word UnfoldInfo_4;
  MR_Word MaybeUnfoldInfo_15 = ((MR_Word) ((MR_hl_field(0, PDInfo_3, 3))));

  if ((MaybeUnfoldInfo_15 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.pd_info.pd_info_get_unfold_info\'/2", (MR_String) "unfold_info not set");
      return;
    }
  else
    UnfoldInfo_4 = ((MR_Word) ((MR_hl_field(1, MaybeUnfoldInfo_15, 0))));
  *HeadVar__2_2 = ((MR_Word) ((MR_hl_field(0, UnfoldInfo_4, 6))));
}

void MR_CALL 
transform_hlds__pd_info__pd_info_get_pred_info_2_p_0(
  MR_Word PDInfo_3,
  MR_Word * HeadVar__2_2)
{
  MR_Word UnfoldInfo_4;
  MR_Word MaybeUnfoldInfo_15 = ((MR_Word) ((MR_hl_field(0, PDInfo_3, 3))));

  if ((MaybeUnfoldInfo_15 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.pd_info.pd_info_get_unfold_info\'/2", (MR_String) "unfold_info not set");
      return;
    }
  else
    UnfoldInfo_4 = ((MR_Word) ((MR_hl_field(1, MaybeUnfoldInfo_15, 0))));
  *HeadVar__2_2 = ((MR_Word) ((MR_hl_field(0, UnfoldInfo_4, 5))));
}

void MR_CALL 
transform_hlds__pd_info__pd_info_get_local_term_info_2_p_0(
  MR_Word PDInfo_3,
  MR_Word * HeadVar__2_2)
{
  MR_Word UnfoldInfo_4;
  MR_Word MaybeUnfoldInfo_15 = ((MR_Word) ((MR_hl_field(0, PDInfo_3, 3))));

  if ((MaybeUnfoldInfo_15 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.pd_info.pd_info_get_unfold_info\'/2", (MR_String) "unfold_info not set");
      return;
    }
  else
    UnfoldInfo_4 = ((MR_Word) ((MR_hl_field(1, MaybeUnfoldInfo_15, 0))));
  *HeadVar__2_2 = ((MR_Word) ((MR_hl_field(0, UnfoldInfo_4, 4))));
}

void MR_CALL 
transform_hlds__pd_info__pd_info_get_cost_delta_2_p_0(
  MR_Word PDInfo_3,
  MR_Integer * HeadVar__2_2)
{
  MR_Word UnfoldInfo_4;
  MR_Word MaybeUnfoldInfo_15 = ((MR_Word) ((MR_hl_field(0, PDInfo_3, 3))));

  if ((MaybeUnfoldInfo_15 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.pd_info.pd_info_get_unfold_info\'/2", (MR_String) "unfold_info not set");
      return;
    }
  else
    UnfoldInfo_4 = ((MR_Word) ((MR_hl_field(1, MaybeUnfoldInfo_15, 0))));
  *HeadVar__2_2 = ((MR_Integer) ((MR_hl_field(0, UnfoldInfo_4, 3))));
}

void MR_CALL 
transform_hlds__pd_info__pd_info_get_instmap_2_p_0(
  MR_Word PDInfo_3,
  MR_Word * HeadVar__2_2)
{
  MR_Word UnfoldInfo_4;
  MR_Word MaybeUnfoldInfo_15 = ((MR_Word) ((MR_hl_field(0, PDInfo_3, 3))));

  if ((MaybeUnfoldInfo_15 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.pd_info.pd_info_get_unfold_info\'/2", (MR_String) "unfold_info not set");
      return;
    }
  else
    UnfoldInfo_4 = ((MR_Word) ((MR_hl_field(1, MaybeUnfoldInfo_15, 0))));
  *HeadVar__2_2 = ((MR_Word) ((MR_hl_field(0, UnfoldInfo_4, 2))));
}

void MR_CALL 
transform_hlds__pd_info__pd_info_get_head_inst_vars_2_p_0(
  MR_Word PDInfo_3,
  MR_Word * HeadVar__2_2)
{
  MR_Word UnfoldInfo_4;
  MR_Word MaybeUnfoldInfo_15 = ((MR_Word) ((MR_hl_field(0, PDInfo_3, 3))));

  if ((MaybeUnfoldInfo_15 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.pd_info.pd_info_get_unfold_info\'/2", (MR_String) "unfold_info not set");
      return;
    }
  else
    UnfoldInfo_4 = ((MR_Word) ((MR_hl_field(1, MaybeUnfoldInfo_15, 0))));
  *HeadVar__2_2 = ((MR_Word) ((MR_hl_field(0, UnfoldInfo_4, 1))));
}

void MR_CALL 
transform_hlds__pd_info__pd_info_get_proc_info_2_p_0(
  MR_Word PDInfo_3,
  MR_Word * HeadVar__2_2)
{
  MR_Word UnfoldInfo_4;
  MR_Word MaybeUnfoldInfo_15 = ((MR_Word) ((MR_hl_field(0, PDInfo_3, 3))));

  if ((MaybeUnfoldInfo_15 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.pd_info.pd_info_get_unfold_info\'/2", (MR_String) "unfold_info not set");
      return;
    }
  else
    UnfoldInfo_4 = ((MR_Word) ((MR_hl_field(1, MaybeUnfoldInfo_15, 0))));
  *HeadVar__2_2 = ((MR_Word) ((MR_hl_field(0, UnfoldInfo_4, 0))));
}

void MR_CALL 
transform_hlds__pd_info__pd_info_bind_var_to_functors_5_p_0(
  MR_Word Var_6,
  MR_Word MainConsId_7,
  MR_Word OtherConsIds_8,
  MR_Word STATE_VARIABLE_PDInfo_0_17,
  MR_Word * STATE_VARIABLE_PDInfo_18)
{
  MR_Word InstMap0_10;
  MR_Word ModuleInfo0_11 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PDInfo_0_17, 2))));
  MR_Word ProcInfo_12;
  MR_Word VarTable_13;
  MR_Word Type_14;
  MR_Word InstMap_15;
  MR_Word ModuleInfo_16;
  MR_Word STATE_VARIABLE_PDInfo_1_19;
  MR_Word UnfoldInfo_20;
  MR_Word UnfoldInfo_58;
  MR_Word MaybeUnfoldInfo_69 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PDInfo_0_17, 3))));
  MR_Word Var_84;
  MR_Word Var_85;
  MR_Word Var_87;
  MR_Word Var_88;
  MR_Word Var_89;
  MR_Word Var_90;
  MR_Word Var_91;
  MR_Word Var_92;
  MR_Word Var_93;
  MR_Integer Var_94;
  MR_Word Var_95;
  MR_Word Var_96;

  if ((MaybeUnfoldInfo_69 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.pd_info.pd_info_get_unfold_info\'/2", (MR_String) "unfold_info not set");
      return;
    }
  else
    UnfoldInfo_20 = ((MR_Word) ((MR_hl_field(1, MaybeUnfoldInfo_69, 0))));
  InstMap0_10 = ((MR_Word) ((MR_hl_field(0, UnfoldInfo_20, 2))));
  UnfoldInfo_58 = ((MR_Word) ((MR_hl_field(1, MaybeUnfoldInfo_69, 0))));
  ProcInfo_12 = ((MR_Word) ((MR_hl_field(0, UnfoldInfo_58, 0))));
  hlds__hlds_pred__proc_info_get_var_table_2_p_0(ProcInfo_12, &VarTable_13);
  parse_tree__var_table__lookup_var_type_3_p_0(VarTable_13, Var_6, &Type_14);
  hlds__instmap__bind_var_to_functors_8_p_0(Var_6, Type_14, MainConsId_7, OtherConsIds_8, InstMap0_10, &InstMap_15, ModuleInfo0_11, &ModuleInfo_16);
  transform_hlds__pd_info__pd_info_set_instmap_3_p_0(InstMap_15, STATE_VARIABLE_PDInfo_0_17, &STATE_VARIABLE_PDInfo_1_19);
  Var_84 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PDInfo_1_19, 0))));
  Var_85 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PDInfo_1_19, 1))));
  Var_87 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PDInfo_1_19, 3))));
  Var_88 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PDInfo_1_19, 4))));
  Var_89 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PDInfo_1_19, 5))));
  Var_90 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PDInfo_1_19, 6))));
  Var_91 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PDInfo_1_19, 7))));
  Var_92 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PDInfo_1_19, 8))));
  Var_93 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PDInfo_1_19, 9))));
  Var_94 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_PDInfo_1_19, 10))));
  Var_95 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PDInfo_1_19, 11))));
  Var_96 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PDInfo_1_19, 12))));
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (13 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_PDInfo_18 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_84));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_85));
    MR_hl_field(0, base, 2) = ((MR_Box) (ModuleInfo_16));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_87));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_88));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_89));
    MR_hl_field(0, base, 6) = ((MR_Box) (Var_90));
    MR_hl_field(0, base, 7) = ((MR_Box) (Var_91));
    MR_hl_field(0, base, 8) = ((MR_Box) (Var_92));
    MR_hl_field(0, base, 9) = ((MR_Box) (Var_93));
    MR_hl_field(0, base, 10) = ((MR_Box) (Var_94));
    MR_hl_field(0, base, 11) = ((MR_Box) (Var_95));
    MR_hl_field(0, base, 12) = ((MR_Box) (Var_96));
  }
}

void MR_CALL 
transform_hlds__pd_info__pd_info_update_goal_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_PDInfo_0_10,
  MR_Word * STATE_VARIABLE_PDInfo_11)
{
  MR_Word GoalInfo_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 1))));
  MR_Word InstMap0_7;
  MR_Word Delta_8;
  MR_Word InstMap_9;
  MR_Word UnfoldInfo_12;
  MR_Word MaybeUnfoldInfo_23 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PDInfo_0_10, 3))));

  if ((MaybeUnfoldInfo_23 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.pd_info.pd_info_get_unfold_info\'/2", (MR_String) "unfold_info not set");
      return;
    }
  else
    UnfoldInfo_12 = ((MR_Word) ((MR_hl_field(1, MaybeUnfoldInfo_23, 0))));
  InstMap0_7 = ((MR_Word) ((MR_hl_field(0, UnfoldInfo_12, 2))));
  Delta_8 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(GoalInfo_5);
  hlds__instmap__apply_instmap_delta_3_p_0(Delta_8, InstMap0_7, &InstMap_9);
  transform_hlds__pd_info__pd_info_set_instmap_3_p_0(InstMap_9, STATE_VARIABLE_PDInfo_0_10, STATE_VARIABLE_PDInfo_11);
}

void MR_CALL 
transform_hlds__pd_info__pd_info_set_instmap_3_p_0(
  MR_Word InstMap_4,
  MR_Word STATE_VARIABLE_PDInfo_0_8,
  MR_Word * STATE_VARIABLE_PDInfo_9)
{
  MR_Word UnfoldInfo0_6;
  MR_Word UnfoldInfo_7;
  MR_Word MaybeUnfoldInfo_21 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PDInfo_0_8, 3))));
  MR_Word Var_24 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PDInfo_0_8, 0))));
  MR_Word Var_25 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PDInfo_0_8, 1))));
  MR_Word Var_26 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PDInfo_0_8, 2))));
  MR_Word Var_27 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PDInfo_0_8, 4))));
  MR_Word Var_28 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PDInfo_0_8, 5))));
  MR_Word Var_29 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PDInfo_0_8, 6))));
  MR_Word Var_30 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PDInfo_0_8, 7))));
  MR_Word Var_31 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PDInfo_0_8, 8))));
  MR_Word Var_32 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PDInfo_0_8, 9))));
  MR_Integer Var_33 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_PDInfo_0_8, 10))));
  MR_Word Var_34 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PDInfo_0_8, 11))));
  MR_Word Var_35 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PDInfo_0_8, 12))));
  MR_Word Var_36;
  MR_Word Var_10;
  MR_Word Var_11;
  MR_Integer Var_13;
  MR_Word Var_14;
  MR_Word Var_15;
  MR_Word Var_16;
  MR_Word Var_17;
  MR_Integer Var_18;
  MR_Unsigned packed_word_0;

  if ((MaybeUnfoldInfo_21 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.pd_info.pd_info_get_unfold_info\'/2", (MR_String) "unfold_info not set");
      return;
    }
  else
    UnfoldInfo0_6 = ((MR_Word) ((MR_hl_field(1, MaybeUnfoldInfo_21, 0))));
  Var_10 = ((MR_Word) ((MR_hl_field(0, UnfoldInfo0_6, 0))));
  Var_11 = ((MR_Word) ((MR_hl_field(0, UnfoldInfo0_6, 1))));
  Var_13 = ((MR_Integer) ((MR_hl_field(0, UnfoldInfo0_6, 3))));
  Var_14 = ((MR_Word) ((MR_hl_field(0, UnfoldInfo0_6, 4))));
  Var_15 = ((MR_Word) ((MR_hl_field(0, UnfoldInfo0_6, 5))));
  Var_16 = ((MR_Word) ((MR_hl_field(0, UnfoldInfo0_6, 6))));
  Var_17 = ((MR_Word) ((MR_hl_field(0, UnfoldInfo0_6, 7))));
  Var_18 = ((MR_Integer) ((MR_hl_field(0, UnfoldInfo0_6, 8))));
  packed_word_0 = (MR_Unsigned) ((MR_hl_field(0, UnfoldInfo0_6, 9)));
  {
    UnfoldInfo_7 = (MR_Word) MR_new_object(MR_Word, (10 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, UnfoldInfo_7, 0) = ((MR_Box) (Var_10));
    MR_hl_field(0, UnfoldInfo_7, 1) = ((MR_Box) (Var_11));
    MR_hl_field(0, UnfoldInfo_7, 2) = ((MR_Box) (InstMap_4));
    MR_hl_field(0, UnfoldInfo_7, 3) = ((MR_Box) (Var_13));
    MR_hl_field(0, UnfoldInfo_7, 4) = ((MR_Box) (Var_14));
    MR_hl_field(0, UnfoldInfo_7, 5) = ((MR_Box) (Var_15));
    MR_hl_field(0, UnfoldInfo_7, 6) = ((MR_Box) (Var_16));
    MR_hl_field(0, UnfoldInfo_7, 7) = ((MR_Box) (Var_17));
    MR_hl_field(0, UnfoldInfo_7, 8) = ((MR_Box) (Var_18));
    MR_hl_field(0, UnfoldInfo_7, 9) = (MR_Box) (packed_word_0);
  }
  {
    Var_36 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_36, 0) = ((MR_Box) (UnfoldInfo_7));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (13 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_PDInfo_9 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_24));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_25));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_26));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_36));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_27));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_28));
    MR_hl_field(0, base, 6) = ((MR_Box) (Var_29));
    MR_hl_field(0, base, 7) = ((MR_Box) (Var_30));
    MR_hl_field(0, base, 8) = ((MR_Box) (Var_31));
    MR_hl_field(0, base, 9) = ((MR_Box) (Var_32));
    MR_hl_field(0, base, 10) = ((MR_Box) (Var_33));
    MR_hl_field(0, base, 11) = ((MR_Box) (Var_34));
    MR_hl_field(0, base, 12) = ((MR_Box) (Var_35));
  }
}

void MR_CALL 
transform_hlds__pd_info__pd_info_set_useless_versions_3_p_0(
  MR_Word Versions_4,
  MR_Word STATE_VARIABLE_PDInfo_0_6,
  MR_Word * STATE_VARIABLE_PDInfo_7)
{
  MR_Word Var_8 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PDInfo_0_6, 0))));
  MR_Word Var_9 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PDInfo_0_6, 1))));
  MR_Word Var_10 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PDInfo_0_6, 2))));
  MR_Word Var_11 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PDInfo_0_6, 3))));
  MR_Word Var_12 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PDInfo_0_6, 4))));
  MR_Word Var_13 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PDInfo_0_6, 5))));
  MR_Word Var_14 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PDInfo_0_6, 6))));
  MR_Word Var_15 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PDInfo_0_6, 7))));
  MR_Word Var_16 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PDInfo_0_6, 8))));
  MR_Word Var_17 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PDInfo_0_6, 9))));
  MR_Integer Var_18 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_PDInfo_0_6, 10))));
  MR_Word Var_19 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PDInfo_0_6, 11))));

  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (13 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_PDInfo_7 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_8));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_9));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_10));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_11));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_12));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_13));
    MR_hl_field(0, base, 6) = ((MR_Box) (Var_14));
    MR_hl_field(0, base, 7) = ((MR_Box) (Var_15));
    MR_hl_field(0, base, 8) = ((MR_Box) (Var_16));
    MR_hl_field(0, base, 9) = ((MR_Box) (Var_17));
    MR_hl_field(0, base, 10) = ((MR_Box) (Var_18));
    MR_hl_field(0, base, 11) = ((MR_Box) (Var_19));
    MR_hl_field(0, base, 12) = ((MR_Box) (Versions_4));
  }
}

void MR_CALL 
transform_hlds__pd_info__pd_info_set_created_versions_3_p_0(
  MR_Word Versions_4,
  MR_Word STATE_VARIABLE_PDInfo_0_6,
  MR_Word * STATE_VARIABLE_PDInfo_7)
{
  MR_Word Var_8 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PDInfo_0_6, 0))));
  MR_Word Var_9 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PDInfo_0_6, 1))));
  MR_Word Var_10 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PDInfo_0_6, 2))));
  MR_Word Var_11 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PDInfo_0_6, 3))));
  MR_Word Var_12 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PDInfo_0_6, 4))));
  MR_Word Var_13 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PDInfo_0_6, 5))));
  MR_Word Var_14 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PDInfo_0_6, 6))));
  MR_Word Var_15 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PDInfo_0_6, 7))));
  MR_Word Var_16 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PDInfo_0_6, 8))));
  MR_Word Var_17 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PDInfo_0_6, 9))));
  MR_Integer Var_18 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_PDInfo_0_6, 10))));
  MR_Word Var_20 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PDInfo_0_6, 12))));

  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (13 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_PDInfo_7 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_8));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_9));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_10));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_11));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_12));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_13));
    MR_hl_field(0, base, 6) = ((MR_Box) (Var_14));
    MR_hl_field(0, base, 7) = ((MR_Box) (Var_15));
    MR_hl_field(0, base, 8) = ((MR_Box) (Var_16));
    MR_hl_field(0, base, 9) = ((MR_Box) (Var_17));
    MR_hl_field(0, base, 10) = ((MR_Box) (Var_18));
    MR_hl_field(0, base, 11) = ((MR_Box) (Versions_4));
    MR_hl_field(0, base, 12) = ((MR_Box) (Var_20));
  }
}

void MR_CALL 
transform_hlds__pd_info__pd_info_set_depth_3_p_0(
  MR_Integer Depth_4,
  MR_Word STATE_VARIABLE_PDInfo_0_6,
  MR_Word * STATE_VARIABLE_PDInfo_7)
{
  MR_Word Var_8 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PDInfo_0_6, 0))));
  MR_Word Var_9 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PDInfo_0_6, 1))));
  MR_Word Var_10 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PDInfo_0_6, 2))));
  MR_Word Var_11 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PDInfo_0_6, 3))));
  MR_Word Var_12 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PDInfo_0_6, 4))));
  MR_Word Var_13 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PDInfo_0_6, 5))));
  MR_Word Var_14 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PDInfo_0_6, 6))));
  MR_Word Var_15 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PDInfo_0_6, 7))));
  MR_Word Var_16 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PDInfo_0_6, 8))));
  MR_Word Var_17 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PDInfo_0_6, 9))));
  MR_Word Var_19 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PDInfo_0_6, 11))));
  MR_Word Var_20 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PDInfo_0_6, 12))));

  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (13 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_PDInfo_7 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_8));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_9));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_10));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_11));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_12));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_13));
    MR_hl_field(0, base, 6) = ((MR_Box) (Var_14));
    MR_hl_field(0, base, 7) = ((MR_Box) (Var_15));
    MR_hl_field(0, base, 8) = ((MR_Box) (Var_16));
    MR_hl_field(0, base, 9) = ((MR_Box) (Var_17));
    MR_hl_field(0, base, 10) = ((MR_Box) (Depth_4));
    MR_hl_field(0, base, 11) = ((MR_Box) (Var_19));
    MR_hl_field(0, base, 12) = ((MR_Box) (Var_20));
  }
}

void MR_CALL 
transform_hlds__pd_info__pd_info_set_parent_versions_3_p_0(
  MR_Word Parents_4,
  MR_Word STATE_VARIABLE_PDInfo_0_6,
  MR_Word * STATE_VARIABLE_PDInfo_7)
{
  MR_Word Var_8 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PDInfo_0_6, 0))));
  MR_Word Var_9 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PDInfo_0_6, 1))));
  MR_Word Var_10 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PDInfo_0_6, 2))));
  MR_Word Var_11 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PDInfo_0_6, 3))));
  MR_Word Var_12 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PDInfo_0_6, 4))));
  MR_Word Var_13 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PDInfo_0_6, 5))));
  MR_Word Var_14 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PDInfo_0_6, 6))));
  MR_Word Var_15 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PDInfo_0_6, 7))));
  MR_Word Var_16 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PDInfo_0_6, 8))));
  MR_Integer Var_18 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_PDInfo_0_6, 10))));
  MR_Word Var_19 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PDInfo_0_6, 11))));
  MR_Word Var_20 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PDInfo_0_6, 12))));

  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (13 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_PDInfo_7 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_8));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_9));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_10));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_11));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_12));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_13));
    MR_hl_field(0, base, 6) = ((MR_Box) (Var_14));
    MR_hl_field(0, base, 7) = ((MR_Box) (Var_15));
    MR_hl_field(0, base, 8) = ((MR_Box) (Var_16));
    MR_hl_field(0, base, 9) = ((MR_Box) (Parents_4));
    MR_hl_field(0, base, 10) = ((MR_Box) (Var_18));
    MR_hl_field(0, base, 11) = ((MR_Box) (Var_19));
    MR_hl_field(0, base, 12) = ((MR_Box) (Var_20));
  }
}

void MR_CALL 
transform_hlds__pd_info__pd_info_set_global_term_info_3_p_0(
  MR_Word TermInfo_4,
  MR_Word STATE_VARIABLE_PDInfo_0_6,
  MR_Word * STATE_VARIABLE_PDInfo_7)
{
  MR_Word Var_8 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PDInfo_0_6, 0))));
  MR_Word Var_9 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PDInfo_0_6, 1))));
  MR_Word Var_10 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PDInfo_0_6, 2))));
  MR_Word Var_11 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PDInfo_0_6, 3))));
  MR_Word Var_12 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PDInfo_0_6, 4))));
  MR_Word Var_13 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PDInfo_0_6, 5))));
  MR_Word Var_14 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PDInfo_0_6, 6))));
  MR_Word Var_15 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PDInfo_0_6, 7))));
  MR_Word Var_17 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PDInfo_0_6, 9))));
  MR_Integer Var_18 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_PDInfo_0_6, 10))));
  MR_Word Var_19 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PDInfo_0_6, 11))));
  MR_Word Var_20 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PDInfo_0_6, 12))));

  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (13 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_PDInfo_7 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_8));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_9));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_10));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_11));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_12));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_13));
    MR_hl_field(0, base, 6) = ((MR_Box) (Var_14));
    MR_hl_field(0, base, 7) = ((MR_Box) (Var_15));
    MR_hl_field(0, base, 8) = ((MR_Box) (TermInfo_4));
    MR_hl_field(0, base, 9) = ((MR_Box) (Var_17));
    MR_hl_field(0, base, 10) = ((MR_Box) (Var_18));
    MR_hl_field(0, base, 11) = ((MR_Box) (Var_19));
    MR_hl_field(0, base, 12) = ((MR_Box) (Var_20));
  }
}

void MR_CALL 
transform_hlds__pd_info__pd_info_set_counter_3_p_0(
  MR_Word Counter_4,
  MR_Word STATE_VARIABLE_PDInfo_0_6,
  MR_Word * STATE_VARIABLE_PDInfo_7)
{
  MR_Word Var_8 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PDInfo_0_6, 0))));
  MR_Word Var_9 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PDInfo_0_6, 1))));
  MR_Word Var_10 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PDInfo_0_6, 2))));
  MR_Word Var_11 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PDInfo_0_6, 3))));
  MR_Word Var_12 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PDInfo_0_6, 4))));
  MR_Word Var_13 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PDInfo_0_6, 5))));
  MR_Word Var_14 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PDInfo_0_6, 6))));
  MR_Word Var_16 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PDInfo_0_6, 8))));
  MR_Word Var_17 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PDInfo_0_6, 9))));
  MR_Integer Var_18 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_PDInfo_0_6, 10))));
  MR_Word Var_19 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PDInfo_0_6, 11))));
  MR_Word Var_20 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PDInfo_0_6, 12))));

  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (13 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_PDInfo_7 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_8));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_9));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_10));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_11));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_12));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_13));
    MR_hl_field(0, base, 6) = ((MR_Box) (Var_14));
    MR_hl_field(0, base, 7) = ((MR_Box) (Counter_4));
    MR_hl_field(0, base, 8) = ((MR_Box) (Var_16));
    MR_hl_field(0, base, 9) = ((MR_Box) (Var_17));
    MR_hl_field(0, base, 10) = ((MR_Box) (Var_18));
    MR_hl_field(0, base, 11) = ((MR_Box) (Var_19));
    MR_hl_field(0, base, 12) = ((MR_Box) (Var_20));
  }
}

void MR_CALL 
transform_hlds__pd_info__pd_info_set_proc_arg_info_3_p_0(
  MR_Word ProcArgInfo_4,
  MR_Word STATE_VARIABLE_PDInfo_0_6,
  MR_Word * STATE_VARIABLE_PDInfo_7)
{
  MR_Word Var_8 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PDInfo_0_6, 0))));
  MR_Word Var_9 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PDInfo_0_6, 1))));
  MR_Word Var_10 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PDInfo_0_6, 2))));
  MR_Word Var_11 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PDInfo_0_6, 3))));
  MR_Word Var_12 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PDInfo_0_6, 4))));
  MR_Word Var_13 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PDInfo_0_6, 5))));
  MR_Word Var_15 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PDInfo_0_6, 7))));
  MR_Word Var_16 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PDInfo_0_6, 8))));
  MR_Word Var_17 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PDInfo_0_6, 9))));
  MR_Integer Var_18 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_PDInfo_0_6, 10))));
  MR_Word Var_19 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PDInfo_0_6, 11))));
  MR_Word Var_20 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PDInfo_0_6, 12))));

  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (13 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_PDInfo_7 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_8));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_9));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_10));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_11));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_12));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_13));
    MR_hl_field(0, base, 6) = ((MR_Box) (ProcArgInfo_4));
    MR_hl_field(0, base, 7) = ((MR_Box) (Var_15));
    MR_hl_field(0, base, 8) = ((MR_Box) (Var_16));
    MR_hl_field(0, base, 9) = ((MR_Box) (Var_17));
    MR_hl_field(0, base, 10) = ((MR_Box) (Var_18));
    MR_hl_field(0, base, 11) = ((MR_Box) (Var_19));
    MR_hl_field(0, base, 12) = ((MR_Box) (Var_20));
  }
}

void MR_CALL 
transform_hlds__pd_info__pd_info_set_versions_3_p_0(
  MR_Word Versions_4,
  MR_Word STATE_VARIABLE_PDInfo_0_6,
  MR_Word * STATE_VARIABLE_PDInfo_7)
{
  MR_Word Var_8 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PDInfo_0_6, 0))));
  MR_Word Var_9 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PDInfo_0_6, 1))));
  MR_Word Var_10 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PDInfo_0_6, 2))));
  MR_Word Var_11 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PDInfo_0_6, 3))));
  MR_Word Var_12 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PDInfo_0_6, 4))));
  MR_Word Var_14 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PDInfo_0_6, 6))));
  MR_Word Var_15 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PDInfo_0_6, 7))));
  MR_Word Var_16 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PDInfo_0_6, 8))));
  MR_Word Var_17 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PDInfo_0_6, 9))));
  MR_Integer Var_18 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_PDInfo_0_6, 10))));
  MR_Word Var_19 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PDInfo_0_6, 11))));
  MR_Word Var_20 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PDInfo_0_6, 12))));

  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (13 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_PDInfo_7 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_8));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_9));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_10));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_11));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_12));
    MR_hl_field(0, base, 5) = ((MR_Box) (Versions_4));
    MR_hl_field(0, base, 6) = ((MR_Box) (Var_14));
    MR_hl_field(0, base, 7) = ((MR_Box) (Var_15));
    MR_hl_field(0, base, 8) = ((MR_Box) (Var_16));
    MR_hl_field(0, base, 9) = ((MR_Box) (Var_17));
    MR_hl_field(0, base, 10) = ((MR_Box) (Var_18));
    MR_hl_field(0, base, 11) = ((MR_Box) (Var_19));
    MR_hl_field(0, base, 12) = ((MR_Box) (Var_20));
  }
}

void MR_CALL 
transform_hlds__pd_info__pd_info_set_goal_version_index_3_p_0(
  MR_Word Index_4,
  MR_Word STATE_VARIABLE_PDInfo_0_6,
  MR_Word * STATE_VARIABLE_PDInfo_7)
{
  MR_Word Var_8 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PDInfo_0_6, 0))));
  MR_Word Var_9 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PDInfo_0_6, 1))));
  MR_Word Var_10 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PDInfo_0_6, 2))));
  MR_Word Var_11 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PDInfo_0_6, 3))));
  MR_Word Var_13 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PDInfo_0_6, 5))));
  MR_Word Var_14 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PDInfo_0_6, 6))));
  MR_Word Var_15 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PDInfo_0_6, 7))));
  MR_Word Var_16 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PDInfo_0_6, 8))));
  MR_Word Var_17 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PDInfo_0_6, 9))));
  MR_Integer Var_18 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_PDInfo_0_6, 10))));
  MR_Word Var_19 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PDInfo_0_6, 11))));
  MR_Word Var_20 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PDInfo_0_6, 12))));

  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (13 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_PDInfo_7 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_8));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_9));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_10));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_11));
    MR_hl_field(0, base, 4) = ((MR_Box) (Index_4));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_13));
    MR_hl_field(0, base, 6) = ((MR_Box) (Var_14));
    MR_hl_field(0, base, 7) = ((MR_Box) (Var_15));
    MR_hl_field(0, base, 8) = ((MR_Box) (Var_16));
    MR_hl_field(0, base, 9) = ((MR_Box) (Var_17));
    MR_hl_field(0, base, 10) = ((MR_Box) (Var_18));
    MR_hl_field(0, base, 11) = ((MR_Box) (Var_19));
    MR_hl_field(0, base, 12) = ((MR_Box) (Var_20));
  }
}

void MR_CALL 
transform_hlds__pd_info__pd_info_unset_unfold_info_2_p_0(
  MR_Word STATE_VARIABLE_PDInfo_0_4,
  MR_Word * STATE_VARIABLE_PDInfo_5)
{
  MR_Word Var_8 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PDInfo_0_4, 0))));
  MR_Word Var_9 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PDInfo_0_4, 1))));
  MR_Word Var_10 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PDInfo_0_4, 2))));
  MR_Word Var_12 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PDInfo_0_4, 4))));
  MR_Word Var_13 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PDInfo_0_4, 5))));
  MR_Word Var_14 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PDInfo_0_4, 6))));
  MR_Word Var_15 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PDInfo_0_4, 7))));
  MR_Word Var_16 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PDInfo_0_4, 8))));
  MR_Word Var_17 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PDInfo_0_4, 9))));
  MR_Integer Var_18 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_PDInfo_0_4, 10))));
  MR_Word Var_19 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PDInfo_0_4, 11))));
  MR_Word Var_20 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PDInfo_0_4, 12))));

  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (13 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_PDInfo_5 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_8));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_9));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_10));
    MR_hl_field(0, base, 3) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_12));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_13));
    MR_hl_field(0, base, 6) = ((MR_Box) (Var_14));
    MR_hl_field(0, base, 7) = ((MR_Box) (Var_15));
    MR_hl_field(0, base, 8) = ((MR_Box) (Var_16));
    MR_hl_field(0, base, 9) = ((MR_Box) (Var_17));
    MR_hl_field(0, base, 10) = ((MR_Box) (Var_18));
    MR_hl_field(0, base, 11) = ((MR_Box) (Var_19));
    MR_hl_field(0, base, 12) = ((MR_Box) (Var_20));
  }
}

void MR_CALL 
transform_hlds__pd_info__pd_info_set_unfold_info_3_p_0(
  MR_Word UnfoldInfo_4,
  MR_Word STATE_VARIABLE_PDInfo_0_6,
  MR_Word * STATE_VARIABLE_PDInfo_7)
{
  MR_Word Var_9;
  MR_Word Var_10;
  MR_Word Var_11;
  MR_Word Var_12;
  MR_Word Var_14;
  MR_Word Var_15;
  MR_Word Var_16;
  MR_Word Var_17;
  MR_Word Var_18;
  MR_Word Var_19;
  MR_Integer Var_20;
  MR_Word Var_21;
  MR_Word Var_22;

  {
    Var_9 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_9, 0) = ((MR_Box) (UnfoldInfo_4));
  }
  Var_10 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PDInfo_0_6, 0))));
  Var_11 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PDInfo_0_6, 1))));
  Var_12 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PDInfo_0_6, 2))));
  Var_14 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PDInfo_0_6, 4))));
  Var_15 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PDInfo_0_6, 5))));
  Var_16 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PDInfo_0_6, 6))));
  Var_17 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PDInfo_0_6, 7))));
  Var_18 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PDInfo_0_6, 8))));
  Var_19 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PDInfo_0_6, 9))));
  Var_20 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_PDInfo_0_6, 10))));
  Var_21 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PDInfo_0_6, 11))));
  Var_22 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PDInfo_0_6, 12))));
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (13 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_PDInfo_7 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_10));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_11));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_12));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_9));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_14));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_15));
    MR_hl_field(0, base, 6) = ((MR_Box) (Var_16));
    MR_hl_field(0, base, 7) = ((MR_Box) (Var_17));
    MR_hl_field(0, base, 8) = ((MR_Box) (Var_18));
    MR_hl_field(0, base, 9) = ((MR_Box) (Var_19));
    MR_hl_field(0, base, 10) = ((MR_Box) (Var_20));
    MR_hl_field(0, base, 11) = ((MR_Box) (Var_21));
    MR_hl_field(0, base, 12) = ((MR_Box) (Var_22));
  }
}

void MR_CALL 
transform_hlds__pd_info__pd_info_set_module_info_3_p_0(
  MR_Word ModuleInfo_4,
  MR_Word STATE_VARIABLE_PDInfo_0_6,
  MR_Word * STATE_VARIABLE_PDInfo_7)
{
  MR_Word Var_8 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PDInfo_0_6, 0))));
  MR_Word Var_9 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PDInfo_0_6, 1))));
  MR_Word Var_11 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PDInfo_0_6, 3))));
  MR_Word Var_12 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PDInfo_0_6, 4))));
  MR_Word Var_13 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PDInfo_0_6, 5))));
  MR_Word Var_14 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PDInfo_0_6, 6))));
  MR_Word Var_15 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PDInfo_0_6, 7))));
  MR_Word Var_16 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PDInfo_0_6, 8))));
  MR_Word Var_17 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PDInfo_0_6, 9))));
  MR_Integer Var_18 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_PDInfo_0_6, 10))));
  MR_Word Var_19 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PDInfo_0_6, 11))));
  MR_Word Var_20 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PDInfo_0_6, 12))));

  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (13 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_PDInfo_7 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_8));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_9));
    MR_hl_field(0, base, 2) = ((MR_Box) (ModuleInfo_4));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_11));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_12));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_13));
    MR_hl_field(0, base, 6) = ((MR_Box) (Var_14));
    MR_hl_field(0, base, 7) = ((MR_Box) (Var_15));
    MR_hl_field(0, base, 8) = ((MR_Box) (Var_16));
    MR_hl_field(0, base, 9) = ((MR_Box) (Var_17));
    MR_hl_field(0, base, 10) = ((MR_Box) (Var_18));
    MR_hl_field(0, base, 11) = ((MR_Box) (Var_19));
    MR_hl_field(0, base, 12) = ((MR_Box) (Var_20));
  }
}

void MR_CALL 
transform_hlds__pd_info__pd_info_get_useless_versions_2_p_0(
  MR_Word PDInfo_3,
  MR_Word * HeadVar__2_2)
{
  *HeadVar__2_2 = ((MR_Word) ((MR_hl_field(0, PDInfo_3, 12))));
}

void MR_CALL 
transform_hlds__pd_info__pd_info_get_created_versions_2_p_0(
  MR_Word PDInfo_3,
  MR_Word * HeadVar__2_2)
{
  *HeadVar__2_2 = ((MR_Word) ((MR_hl_field(0, PDInfo_3, 11))));
}

void MR_CALL 
transform_hlds__pd_info__pd_info_get_depth_2_p_0(
  MR_Word PDInfo_3,
  MR_Integer * HeadVar__2_2)
{
  *HeadVar__2_2 = ((MR_Integer) ((MR_hl_field(0, PDInfo_3, 10))));
}

void MR_CALL 
transform_hlds__pd_info__pd_info_get_parent_versions_2_p_0(
  MR_Word PDInfo_3,
  MR_Word * HeadVar__2_2)
{
  *HeadVar__2_2 = ((MR_Word) ((MR_hl_field(0, PDInfo_3, 9))));
}

void MR_CALL 
transform_hlds__pd_info__pd_info_get_global_term_info_2_p_0(
  MR_Word PDInfo_3,
  MR_Word * HeadVar__2_2)
{
  *HeadVar__2_2 = ((MR_Word) ((MR_hl_field(0, PDInfo_3, 8))));
}

void MR_CALL 
transform_hlds__pd_info__pd_info_get_counter_2_p_0(
  MR_Word PDInfo_3,
  MR_Word * HeadVar__2_2)
{
  *HeadVar__2_2 = ((MR_Word) ((MR_hl_field(0, PDInfo_3, 7))));
}

void MR_CALL 
transform_hlds__pd_info__pd_info_get_proc_arg_info_2_p_0(
  MR_Word PDInfo_3,
  MR_Word * HeadVar__2_2)
{
  *HeadVar__2_2 = ((MR_Word) ((MR_hl_field(0, PDInfo_3, 6))));
}

void MR_CALL 
transform_hlds__pd_info__pd_info_get_versions_2_p_0(
  MR_Word PDInfo_3,
  MR_Word * HeadVar__2_2)
{
  *HeadVar__2_2 = ((MR_Word) ((MR_hl_field(0, PDInfo_3, 5))));
}

void MR_CALL 
transform_hlds__pd_info__pd_info_get_goal_version_index_2_p_0(
  MR_Word PDInfo_3,
  MR_Word * HeadVar__2_2)
{
  *HeadVar__2_2 = ((MR_Word) ((MR_hl_field(0, PDInfo_3, 4))));
}

void MR_CALL 
transform_hlds__pd_info__pd_info_get_unfold_info_2_p_0(
  MR_Word PDInfo_3,
  MR_Word * UnfoldInfo_4)
{
  MR_Word MaybeUnfoldInfo_5 = ((MR_Word) ((MR_hl_field(0, PDInfo_3, 3))));

  if ((MaybeUnfoldInfo_5 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.pd_info.pd_info_get_unfold_info\'/2", (MR_String) "unfold_info not set");
      return;
    }
  else
    *UnfoldInfo_4 = ((MR_Word) ((MR_hl_field(1, MaybeUnfoldInfo_5, 0))));
}

void MR_CALL 
transform_hlds__pd_info__pd_info_get_module_info_2_p_0(
  MR_Word PDInfo_3,
  MR_Word * HeadVar__2_2)
{
  *HeadVar__2_2 = ((MR_Word) ((MR_hl_field(0, PDInfo_3, 2))));
}

void MR_CALL 
transform_hlds__pd_info__pd_info_get_maybe_debug_stream_2_p_0(
  MR_Word PDInfo_3,
  MR_Word * HeadVar__2_2)
{
  *HeadVar__2_2 = ((MR_Word) ((MR_hl_field(0, PDInfo_3, 1))));
}

void MR_CALL 
transform_hlds__pd_info__pd_info_get_progress_stream_2_p_0(
  MR_Word PDInfo_3,
  MR_Word * HeadVar__2_2)
{
  *HeadVar__2_2 = ((MR_Word) ((MR_hl_field(0, PDInfo_3, 0))));
}

void MR_CALL 
transform_hlds__pd_info__pd_info_init_unfold_info_5_p_0(
  MR_Word PredProcId_6,
  MR_Word PredInfo_7,
  MR_Word ProcInfo_8,
  MR_Word STATE_VARIABLE_PDInfo_0_18,
  MR_Word * STATE_VARIABLE_PDInfo_19)
{
  MR_Word ModuleInfo_10 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PDInfo_0_18, 2))));
  MR_Word ArgModes_11;
  MR_Word HeadInstVars_12;
  MR_Word InstMap_13;
  MR_Word LocalTermInfo_15;
  MR_Word Parents_16;
  MR_Word UnfoldInfo_17;
  MR_Word Var_36;
  MR_Word Var_37;
  MR_Word Var_38;
  MR_Word Var_39;
  MR_Word Var_41;
  MR_Word Var_42;
  MR_Word Var_43;
  MR_Word Var_44;
  MR_Word Var_45;
  MR_Word Var_46;
  MR_Integer Var_47;
  MR_Word Var_48;
  MR_Word Var_49;

  hlds__hlds_pred__proc_info_get_argmodes_2_p_0(ProcInfo_8, &ArgModes_11);
  hlds__mode_util__get_constrained_inst_vars_3_p_0(ModuleInfo_10, ArgModes_11, &HeadInstVars_12);
  hlds__hlds_proc_util__proc_info_get_initial_instmap_3_p_0(ModuleInfo_10, ProcInfo_8, &InstMap_13);
  transform_hlds__pd_term__local_term_info_init_1_p_0(&LocalTermInfo_15);
  Parents_16 = mercury__set__make_singleton_set_1_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), ((MR_Box) (PredProcId_6)));
  {
    UnfoldInfo_17 = (MR_Word) MR_new_object(MR_Word, (10 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, UnfoldInfo_17, 0) = ((MR_Box) (ProcInfo_8));
    MR_hl_field(0, UnfoldInfo_17, 1) = ((MR_Box) (HeadInstVars_12));
    MR_hl_field(0, UnfoldInfo_17, 2) = ((MR_Box) (InstMap_13));
    MR_hl_field(0, UnfoldInfo_17, 3) = ((MR_Box) ((MR_Integer) 0));
    MR_hl_field(0, UnfoldInfo_17, 4) = ((MR_Box) (LocalTermInfo_15));
    MR_hl_field(0, UnfoldInfo_17, 5) = ((MR_Box) (PredInfo_7));
    MR_hl_field(0, UnfoldInfo_17, 6) = ((MR_Box) (Parents_16));
    MR_hl_field(0, UnfoldInfo_17, 7) = ((MR_Box) (PredProcId_6));
    MR_hl_field(0, UnfoldInfo_17, 8) = ((MR_Box) ((MR_Integer) 0));
    MR_hl_field(0, UnfoldInfo_17, 9) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 0) << 1)) | (MR_Unsigned) ((MR_Integer) 0)));
  }
  {
    Var_36 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_36, 0) = ((MR_Box) (UnfoldInfo_17));
  }
  Var_37 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PDInfo_0_18, 0))));
  Var_38 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PDInfo_0_18, 1))));
  Var_39 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PDInfo_0_18, 2))));
  Var_41 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PDInfo_0_18, 4))));
  Var_42 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PDInfo_0_18, 5))));
  Var_43 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PDInfo_0_18, 6))));
  Var_44 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PDInfo_0_18, 7))));
  Var_45 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PDInfo_0_18, 8))));
  Var_46 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PDInfo_0_18, 9))));
  Var_47 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_PDInfo_0_18, 10))));
  Var_48 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PDInfo_0_18, 11))));
  Var_49 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PDInfo_0_18, 12))));
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (13 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_PDInfo_19 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_37));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_38));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_39));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_36));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_41));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_42));
    MR_hl_field(0, base, 6) = ((MR_Box) (Var_43));
    MR_hl_field(0, base, 7) = ((MR_Box) (Var_44));
    MR_hl_field(0, base, 8) = ((MR_Box) (Var_45));
    MR_hl_field(0, base, 9) = ((MR_Box) (Var_46));
    MR_hl_field(0, base, 10) = ((MR_Box) (Var_47));
    MR_hl_field(0, base, 11) = ((MR_Box) (Var_48));
    MR_hl_field(0, base, 12) = ((MR_Box) (Var_49));
  }
}

void MR_CALL 
transform_hlds__pd_info__pd_info_init_4_p_0(
  MR_Word ProgressStream_5,
  MR_Word ModuleInfo_6,
  MR_Word ProcArgInfos_7,
  MR_Word * PDInfo_8)
{
  MR_Word Globals_9;
  MR_Word DebugPD_10;
  MR_Word MaybeDebugStream_11;
  MR_Word GoalVersionIndex_13;
  MR_Word Versions_14;
  MR_Word ParentVersions_15;
  MR_Word GlobalTermInfo_16;
  MR_Word CreatedVersions_18;
  MR_Word UselessVersions_19;
  MR_Word Var_21;

  hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_6, &Globals_9);
  libs__globals__lookup_bool_option_3_p_0(Globals_9, (MR_Integer) 713, &DebugPD_10);
  switch (DebugPD_10) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      MaybeDebugStream_11 = (MR_Word) ((MR_Unsigned) 0U);
      break;
    case (MR_Integer) 1:
      {
        MaybeDebugStream_11 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, MaybeDebugStream_11, 0) = ((MR_Box) (ProgressStream_5));
      }
      break;
  }
  mercury__map__init_1_p_0((MR_Word) (&transform_hlds__pd_info_scalar_common_1[0]), (MR_Word) (&transform_hlds__pd_info_scalar_common_1[0]), &GoalVersionIndex_13);
  mercury__map__init_1_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__pd_info__transform_hlds__pd_info__type_ctor_info_version_info_0), &Versions_14);
  mercury__set__init_1_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), &ParentVersions_15);
  transform_hlds__pd_term__global_term_info_init_1_p_0(&GlobalTermInfo_16);
  mercury__set__init_1_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), &CreatedVersions_18);
  mercury__set__init_1_p_0((MR_Word) (&transform_hlds__pd_info_scalar_common_2[0]), &UselessVersions_19);
  Var_21 = mercury__counter__init_1_f_0((MR_Integer) 0);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (13 * sizeof(MR_Word)), NULL, NULL);
    *PDInfo_8 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (ProgressStream_5));
    MR_hl_field(0, base, 1) = ((MR_Box) (MaybeDebugStream_11));
    MR_hl_field(0, base, 2) = ((MR_Box) (ModuleInfo_6));
    MR_hl_field(0, base, 3) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, base, 4) = ((MR_Box) (GoalVersionIndex_13));
    MR_hl_field(0, base, 5) = ((MR_Box) (Versions_14));
    MR_hl_field(0, base, 6) = ((MR_Box) (ProcArgInfos_7));
    MR_hl_field(0, base, 7) = ((MR_Box) (Var_21));
    MR_hl_field(0, base, 8) = ((MR_Box) (GlobalTermInfo_16));
    MR_hl_field(0, base, 9) = ((MR_Box) (ParentVersions_15));
    MR_hl_field(0, base, 10) = ((MR_Box) ((MR_Integer) 0));
    MR_hl_field(0, base, 11) = ((MR_Box) (CreatedVersions_18));
    MR_hl_field(0, base, 12) = ((MR_Box) (UselessVersions_19));
  }
}

static MR_bool MR_CALL 
transform_hlds__pd_info____Unify____branch_info_map_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_bool succeeded;

  succeeded = transform_hlds__pd_info____Unify____branch_info_map_1_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__pd_info____Compare____branch_info_map_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  MR_Word conv0_HeadVar__1_1;

  transform_hlds__pd_info____Compare____branch_info_map_1_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
  *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
transform_hlds__pd_info____Unify____goal_version_index_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = transform_hlds__pd_info____Unify____goal_version_index_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__pd_info____Compare____goal_version_index_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  transform_hlds__pd_info____Compare____goal_version_index_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
transform_hlds__pd_info____Unify____maybe_version_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = transform_hlds__pd_info____Unify____maybe_version_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__pd_info____Compare____maybe_version_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  transform_hlds__pd_info____Compare____maybe_version_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
transform_hlds__pd_info____Unify____pd_arg_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = transform_hlds__pd_info____Unify____pd_arg_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__pd_info____Compare____pd_arg_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  transform_hlds__pd_info____Compare____pd_arg_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
transform_hlds__pd_info____Unify____pd_branch_info_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_bool succeeded;

  succeeded = transform_hlds__pd_info____Unify____pd_branch_info_1_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__pd_info____Compare____pd_branch_info_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  MR_Word conv0_HeadVar__1_1;

  transform_hlds__pd_info____Compare____pd_branch_info_1_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
  *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
transform_hlds__pd_info____Unify____pd_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = transform_hlds__pd_info____Unify____pd_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__pd_info____Compare____pd_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  transform_hlds__pd_info____Compare____pd_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
transform_hlds__pd_info____Unify____pd_proc_arg_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = transform_hlds__pd_info____Unify____pd_proc_arg_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__pd_info____Compare____pd_proc_arg_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  transform_hlds__pd_info____Compare____pd_proc_arg_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
transform_hlds__pd_info____Unify____unfold_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = transform_hlds__pd_info____Unify____unfold_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__pd_info____Compare____unfold_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  transform_hlds__pd_info____Compare____unfold_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
transform_hlds__pd_info____Unify____useless_versions_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = transform_hlds__pd_info____Unify____useless_versions_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__pd_info____Compare____useless_versions_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  transform_hlds__pd_info____Compare____useless_versions_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
transform_hlds__pd_info____Unify____version_index_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = transform_hlds__pd_info____Unify____version_index_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__pd_info____Compare____version_index_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  transform_hlds__pd_info____Compare____version_index_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
transform_hlds__pd_info____Unify____version_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = transform_hlds__pd_info____Unify____version_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__pd_info____Compare____version_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  transform_hlds__pd_info____Compare____version_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
transform_hlds__pd_info____Unify____version_is_exact_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = transform_hlds__pd_info____Unify____version_is_exact_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__pd_info____Compare____version_is_exact_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  transform_hlds__pd_info____Compare____version_is_exact_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__transform_hlds__pd_info__init(void)
{
}

void mercury__transform_hlds__pd_info__init_type_tables(void)
{
  static MR_bool initialised = MR_FALSE;
  if (initialised) return;
  initialised = MR_TRUE;

  MR_register_type_ctor_info(&transform_hlds__pd_info__transform_hlds__pd_info__type_ctor_info_branch_info_map_1);
  MR_register_type_ctor_info(&transform_hlds__pd_info__transform_hlds__pd_info__type_ctor_info_goal_version_index_0);
  MR_register_type_ctor_info(&transform_hlds__pd_info__transform_hlds__pd_info__type_ctor_info_maybe_version_0);
  MR_register_type_ctor_info(&transform_hlds__pd_info__transform_hlds__pd_info__type_ctor_info_pd_arg_info_0);
  MR_register_type_ctor_info(&transform_hlds__pd_info__transform_hlds__pd_info__type_ctor_info_pd_branch_info_1);
  MR_register_type_ctor_info(&transform_hlds__pd_info__transform_hlds__pd_info__type_ctor_info_pd_info_0);
  MR_register_type_ctor_info(&transform_hlds__pd_info__transform_hlds__pd_info__type_ctor_info_pd_proc_arg_info_0);
  MR_register_type_ctor_info(&transform_hlds__pd_info__transform_hlds__pd_info__type_ctor_info_unfold_info_0);
  MR_register_type_ctor_info(&transform_hlds__pd_info__transform_hlds__pd_info__type_ctor_info_useless_versions_0);
  MR_register_type_ctor_info(&transform_hlds__pd_info__transform_hlds__pd_info__type_ctor_info_version_index_0);
  MR_register_type_ctor_info(&transform_hlds__pd_info__transform_hlds__pd_info__type_ctor_info_version_info_0);
  MR_register_type_ctor_info(&transform_hlds__pd_info__transform_hlds__pd_info__type_ctor_info_version_is_exact_0);
}

void mercury__transform_hlds__pd_info__init_debugger(void)
{
  MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__transform_hlds__pd_info__grade_check(void)
{
  return &MR_GRADE_VAR;
}

// :- end_module transform_hlds.pd_info.
