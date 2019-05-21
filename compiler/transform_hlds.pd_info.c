/*
** Automatically generated from `pd_info.m'
** by the Mercury compiler,
** version rotd-2017-08-05
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


/* :- module transform_hlds.pd_info. */
/* :- implementation. */

/*
INIT mercury__transform_hlds__pd_info__init
ENDINIT
*/

#include "transform_hlds.pd_info.mih"


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
#include "check_hlds.inst_match.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.modecheck_util.mih"
#include "check_hlds.proc_requests.mih"
#include "check_hlds.simplify.mih"
#include "hlds.const_struct.mih"
#include "hlds.hlds_args.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_dependency_graph.mih"
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
#include "counter.mih"
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
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.pd_debug.mih"
#include "transform_hlds.pd_term.mih"
#include "transform_hlds.pd_util.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "check_hlds.simplify.simplify_tasks.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




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

static const MR_FA_TypeInfo_Struct1 transform_hlds__pd_info__maybe__ti_maybe_1transform_hlds__pd_info__type_ctor_info_unfold_info_0;

static const MR_FA_TypeInfo_Struct2 transform_hlds__pd_info__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0transform_hlds__pd_info__type_ctor_info_version_info_0;

static const MR_FA_TypeInfo_Struct1 transform_hlds__pd_info__set_ordlist__ti_set_ordlist_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0;

static const MR_FA_TypeInfo_Struct2 transform_hlds__pd_info__pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0hlds__hlds_pred__type_ctor_info_pred_proc_id_0;

static const MR_FA_TypeInfo_Struct1 transform_hlds__pd_info__set_ordlist__ti_set_ordlist_1pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0hlds__hlds_pred__type_ctor_info_pred_proc_id_0;

static const MR_PseudoTypeInfo transform_hlds__pd_info__transform_hlds__pd_info__field_types_pd_info_0_0[11];

static const MR_ConstString transform_hlds__pd_info__transform_hlds__pd_info__field_names_pd_info_0_0[11];

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

static const MR_EnumFunctorDescPtr transform_hlds__pd_info__transform_hlds__pd_info__enum_value_ordered_version_is_exact_0[2];

static const MR_EnumFunctorDescPtr transform_hlds__pd_info__transform_hlds__pd_info__enum_name_ordered_version_is_exact_0[2];

static const MR_Integer transform_hlds__pd_info__transform_hlds__pd_info__functor_number_map_version_is_exact_0[2];

static MR_bool MR_CALL 
transform_hlds__pd_info__get_matching_version_7_p_0(
  MR_Word transform_hlds__pd_info__ModuleInfo_1,
  MR_Word transform_hlds__pd_info__ThisGoal_2,
  MR_Word transform_hlds__pd_info__ThisInstMap_3,
  MR_Word transform_hlds__pd_info__VarTypes_4,
  MR_Word transform_hlds__pd_info__HeadVar__5_5,
  MR_Word transform_hlds__pd_info__Versions_6,
  MR_Word * transform_hlds__pd_info__HeadVar__7_7);

static void MR_CALL 
transform_hlds__pd_info__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_105_99_107_95_118_101_114_115_105_111_110_95_95_91_49_93_95_48_7_p_0(
  MR_Word transform_hlds__pd_info__HeadVar__2_2,
  MR_Word transform_hlds__pd_info__HeadVar__3_3,
  MR_Word transform_hlds__pd_info__HeadVar__4_4,
  MR_Word transform_hlds__pd_info__HeadVar__5_5,
  MR_Word transform_hlds__pd_info__HeadVar__6_6,
  MR_Word * transform_hlds__pd_info__HeadVar__7_7);

static MR_bool MR_CALL 
transform_hlds__pd_info__check_insts_8_p_0(
  MR_Word transform_hlds__pd_info__ModuleInfo_1,
  MR_Word transform_hlds__pd_info__HeadVar__2_2,
  MR_Word transform_hlds__pd_info__VarRenaming_3,
  MR_Word transform_hlds__pd_info__OldInstMap_4,
  MR_Word transform_hlds__pd_info__NewInstMap_5,
  MR_Word transform_hlds__pd_info__VarTypes_6,
  MR_Word transform_hlds__pd_info__STATE_VARIABLE_ExactSoFar_0_7,
  MR_Word * transform_hlds__pd_info__STATE_VARIABLE_ExactSoFar_8);

static MR_bool MR_CALL 
transform_hlds__pd_info____Unify____branch_info_map_1_0_10001(
  MR_Box transform_hlds__pd_info__wrapper_arg_1,
  MR_Box transform_hlds__pd_info__wrapper_arg_2,
  MR_Box transform_hlds__pd_info__wrapper_arg_3);

static void MR_CALL 
transform_hlds__pd_info____Compare____branch_info_map_1_0_10001(
  MR_Box transform_hlds__pd_info__wrapper_arg_1,
  MR_Box * transform_hlds__pd_info__wrapper_arg_2,
  MR_Box transform_hlds__pd_info__wrapper_arg_3,
  MR_Box transform_hlds__pd_info__wrapper_arg_4);

static MR_bool MR_CALL 
transform_hlds__pd_info____Unify____goal_version_index_0_0_10001(
  MR_Box transform_hlds__pd_info__wrapper_arg_1,
  MR_Box transform_hlds__pd_info__wrapper_arg_2);

static void MR_CALL 
transform_hlds__pd_info____Compare____goal_version_index_0_0_10001(
  MR_Box * transform_hlds__pd_info__wrapper_arg_1,
  MR_Box transform_hlds__pd_info__wrapper_arg_2,
  MR_Box transform_hlds__pd_info__wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__pd_info____Unify____maybe_version_0_0_10001(
  MR_Box transform_hlds__pd_info__wrapper_arg_1,
  MR_Box transform_hlds__pd_info__wrapper_arg_2);

static void MR_CALL 
transform_hlds__pd_info____Compare____maybe_version_0_0_10001(
  MR_Box * transform_hlds__pd_info__wrapper_arg_1,
  MR_Box transform_hlds__pd_info__wrapper_arg_2,
  MR_Box transform_hlds__pd_info__wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__pd_info____Unify____pd_arg_info_0_0_10001(
  MR_Box transform_hlds__pd_info__wrapper_arg_1,
  MR_Box transform_hlds__pd_info__wrapper_arg_2);

static void MR_CALL 
transform_hlds__pd_info____Compare____pd_arg_info_0_0_10001(
  MR_Box * transform_hlds__pd_info__wrapper_arg_1,
  MR_Box transform_hlds__pd_info__wrapper_arg_2,
  MR_Box transform_hlds__pd_info__wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__pd_info____Unify____pd_branch_info_1_0_10001(
  MR_Box transform_hlds__pd_info__wrapper_arg_1,
  MR_Box transform_hlds__pd_info__wrapper_arg_2,
  MR_Box transform_hlds__pd_info__wrapper_arg_3);

static void MR_CALL 
transform_hlds__pd_info____Compare____pd_branch_info_1_0_10001(
  MR_Box transform_hlds__pd_info__wrapper_arg_1,
  MR_Box * transform_hlds__pd_info__wrapper_arg_2,
  MR_Box transform_hlds__pd_info__wrapper_arg_3,
  MR_Box transform_hlds__pd_info__wrapper_arg_4);

static MR_bool MR_CALL 
transform_hlds__pd_info____Unify____pd_info_0_0_10001(
  MR_Box transform_hlds__pd_info__wrapper_arg_1,
  MR_Box transform_hlds__pd_info__wrapper_arg_2);

static void MR_CALL 
transform_hlds__pd_info____Compare____pd_info_0_0_10001(
  MR_Box * transform_hlds__pd_info__wrapper_arg_1,
  MR_Box transform_hlds__pd_info__wrapper_arg_2,
  MR_Box transform_hlds__pd_info__wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__pd_info____Unify____pd_proc_arg_info_0_0_10001(
  MR_Box transform_hlds__pd_info__wrapper_arg_1,
  MR_Box transform_hlds__pd_info__wrapper_arg_2);

static void MR_CALL 
transform_hlds__pd_info____Compare____pd_proc_arg_info_0_0_10001(
  MR_Box * transform_hlds__pd_info__wrapper_arg_1,
  MR_Box transform_hlds__pd_info__wrapper_arg_2,
  MR_Box transform_hlds__pd_info__wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__pd_info____Unify____unfold_info_0_0_10001(
  MR_Box transform_hlds__pd_info__wrapper_arg_1,
  MR_Box transform_hlds__pd_info__wrapper_arg_2);

static void MR_CALL 
transform_hlds__pd_info____Compare____unfold_info_0_0_10001(
  MR_Box * transform_hlds__pd_info__wrapper_arg_1,
  MR_Box transform_hlds__pd_info__wrapper_arg_2,
  MR_Box transform_hlds__pd_info__wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__pd_info____Unify____useless_versions_0_0_10001(
  MR_Box transform_hlds__pd_info__wrapper_arg_1,
  MR_Box transform_hlds__pd_info__wrapper_arg_2);

static void MR_CALL 
transform_hlds__pd_info____Compare____useless_versions_0_0_10001(
  MR_Box * transform_hlds__pd_info__wrapper_arg_1,
  MR_Box transform_hlds__pd_info__wrapper_arg_2,
  MR_Box transform_hlds__pd_info__wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__pd_info____Unify____version_index_0_0_10001(
  MR_Box transform_hlds__pd_info__wrapper_arg_1,
  MR_Box transform_hlds__pd_info__wrapper_arg_2);

static void MR_CALL 
transform_hlds__pd_info____Compare____version_index_0_0_10001(
  MR_Box * transform_hlds__pd_info__wrapper_arg_1,
  MR_Box transform_hlds__pd_info__wrapper_arg_2,
  MR_Box transform_hlds__pd_info__wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__pd_info____Unify____version_info_0_0_10001(
  MR_Box transform_hlds__pd_info__wrapper_arg_1,
  MR_Box transform_hlds__pd_info__wrapper_arg_2);

static void MR_CALL 
transform_hlds__pd_info____Compare____version_info_0_0_10001(
  MR_Box * transform_hlds__pd_info__wrapper_arg_1,
  MR_Box transform_hlds__pd_info__wrapper_arg_2,
  MR_Box transform_hlds__pd_info__wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__pd_info____Unify____version_is_exact_0_0_10001(
  MR_Box transform_hlds__pd_info__wrapper_arg_1,
  MR_Box transform_hlds__pd_info__wrapper_arg_2);

static void MR_CALL 
transform_hlds__pd_info____Compare____version_is_exact_0_0_10001(
  MR_Box * transform_hlds__pd_info__wrapper_arg_1,
  MR_Box transform_hlds__pd_info__wrapper_arg_2,
  MR_Box transform_hlds__pd_info__wrapper_arg_3);


static /* final */ const MR_Box transform_hlds__pd_info_scalar_common_1[13][2];

static /* final */ const MR_Box transform_hlds__pd_info_scalar_common_2[9][3];




static /* final */ const MR_Box transform_hlds__pd_info_scalar_common_1[13][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&transform_hlds__pd_info__transform_hlds__pd_info__type_ctor_info_pd_branch_info_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&transform_hlds__pd_info__transform_hlds__pd_info__type_ctor_info_unfold_info_0))
  },
  /* row 6 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0))
  },
  /* row 7 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&transform_hlds__pd_info_scalar_common_2[0]))
  },
  /* row 8 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0))
  },
  /* row 9 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&transform_hlds__pd_info_scalar_common_2[7]))
  },
  /* row 10 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&transform_hlds__pd_info_scalar_common_1[1]))
  },
  /* row 11 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row 12 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0))
  },
};

static /* final */ const MR_Box transform_hlds__pd_info_scalar_common_2[9][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&transform_hlds__pd_info_scalar_common_1[0])),
    ((MR_Box) (&transform_hlds__pd_info_scalar_common_1[0]))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&transform_hlds__pd_info_scalar_common_1[1])),
    ((MR_Box) (&transform_hlds__pd_info_scalar_common_1[1]))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&transform_hlds__pd_info_scalar_common_1[3])),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&transform_hlds__pd_info_scalar_common_1[4]))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&transform_hlds__pd_info__transform_hlds__pd_info__type_ctor_info_version_info_0))
  },
  /* row 6 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&transform_hlds__pd_info_scalar_common_1[8])),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0))
  },
  /* row 7 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 8 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&transform_hlds__pd_info_scalar_common_1[9]))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_FA_TypeInfo_Struct1 transform_hlds__pd_info__set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_int_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__pd_info__tree234__pti_tree234_2__pseudo_1__plain_set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_int_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1,
    (MR_PseudoTypeInfo) &transform_hlds__pd_info__set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_int_0
  }
};

const MR_TypeCtorInfo_Struct transform_hlds__pd_info__transform_hlds__pd_info__type_ctor_info_branch_info_map_1 = {
  (MR_Integer) 1,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_EQUIV,
  ((MR_Box) (transform_hlds__pd_info____Unify____branch_info_map_1_0_10001)),
  ((MR_Box) (transform_hlds__pd_info____Compare____branch_info_map_1_0_10001)),
  (MR_String) "transform_hlds.pd_info",
  (MR_String) "branch_info_map",
  {     NULL },
  {     (MR_PseudoTypeInfo) &transform_hlds__pd_info__tree234__pti_tree234_2__pseudo_1__plain_set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_int_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__pd_info__list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0
  }
};

static const MR_FA_TypeInfo_Struct2 transform_hlds__pd_info__tree234__ti_tree234_2list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &transform_hlds__pd_info__list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
    (MR_TypeInfo) &transform_hlds__pd_info__list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0
  }
};

const MR_TypeCtorInfo_Struct transform_hlds__pd_info__transform_hlds__pd_info__type_ctor_info_goal_version_index_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (transform_hlds__pd_info____Unify____goal_version_index_0_0_10001)),
  ((MR_Box) (transform_hlds__pd_info____Compare____goal_version_index_0_0_10001)),
  (MR_String) "transform_hlds.pd_info",
  (MR_String) "goal_version_index",
  {     NULL },
  {     (MR_PseudoTypeInfo) &transform_hlds__pd_info__tree234__ti_tree234_2list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static const MR_DuFunctorDesc transform_hlds__pd_info__transform_hlds__pd_info__du_functor_desc_maybe_version_0_0 = {
  (MR_String) "no_version",
  (MR_Integer) 0,
  (MR_Integer) 0,
  MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 0,
  (MR_Integer) 0,
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__pd_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_TypeInfo_Struct2 transform_hlds__pd_info__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &transform_hlds__pd_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_TypeInfo) &transform_hlds__pd_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__pd_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

static const MR_FA_TypeInfo_Struct2 transform_hlds__pd_info__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &transform_hlds__pd_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0,
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

static const MR_PseudoTypeInfo transform_hlds__pd_info__transform_hlds__pd_info__field_types_maybe_version_0_1[5] = {
  (MR_PseudoTypeInfo) &transform_hlds__pd_info__transform_hlds__pd_info__type_ctor_info_version_is_exact_0,
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
  (MR_PseudoTypeInfo) &transform_hlds__pd_info__transform_hlds__pd_info__type_ctor_info_version_info_0,
  (MR_PseudoTypeInfo) &transform_hlds__pd_info__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &transform_hlds__pd_info__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0parse_tree__prog_data__type_ctor_info_mer_type_0
};

static const MR_ConstString transform_hlds__pd_info__transform_hlds__pd_info__field_names_maybe_version_0_1[5] = {
  (MR_String) "mv_is_exact",
  (MR_String) "mv_ppid",
  (MR_String) "mv_version",
  (MR_String) "mv_renaming",
  (MR_String) "mv_tsubst"
};

static const MR_DuFunctorDesc transform_hlds__pd_info__transform_hlds__pd_info__du_functor_desc_maybe_version_0_1 = {
  (MR_String) "version",
  (MR_Integer) 5,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  transform_hlds__pd_info__transform_hlds__pd_info__field_types_maybe_version_0_1,
  transform_hlds__pd_info__transform_hlds__pd_info__field_names_maybe_version_0_1,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr transform_hlds__pd_info__transform_hlds__pd_info__du_stag_ordered_maybe_version_0_0[1] = {
  &transform_hlds__pd_info__transform_hlds__pd_info__du_functor_desc_maybe_version_0_0
};

static const MR_DuFunctorDescPtr transform_hlds__pd_info__transform_hlds__pd_info__du_stag_ordered_maybe_version_0_1[1] = {
  &transform_hlds__pd_info__transform_hlds__pd_info__du_functor_desc_maybe_version_0_1
};

static const MR_DuPtagLayout transform_hlds__pd_info__transform_hlds__pd_info__du_ptag_ordered_maybe_version_0[2] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_LOCAL,
    transform_hlds__pd_info__transform_hlds__pd_info__du_stag_ordered_maybe_version_0_0
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    transform_hlds__pd_info__transform_hlds__pd_info__du_stag_ordered_maybe_version_0_1
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
  (MR_Integer) 17,
  (MR_Integer) 2,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__pd_info____Unify____maybe_version_0_0_10001)),
  ((MR_Box) (transform_hlds__pd_info____Compare____maybe_version_0_0_10001)),
  (MR_String) "transform_hlds.pd_info",
  (MR_String) "maybe_version",
  {     transform_hlds__pd_info__transform_hlds__pd_info__du_name_ordered_maybe_version_0 },
  {     transform_hlds__pd_info__transform_hlds__pd_info__du_ptag_ordered_maybe_version_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  transform_hlds__pd_info__transform_hlds__pd_info__functor_number_map_maybe_version_0
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__pd_info__transform_hlds__pd_info__ti_pd_branch_info_1builtin__type_ctor_info_int_0 = {
  &transform_hlds__pd_info__transform_hlds__pd_info__type_ctor_info_pd_branch_info_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

static const MR_FA_TypeInfo_Struct2 transform_hlds__pd_info__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0transform_hlds__pd_info__ti_pd_branch_info_1builtin__type_ctor_info_int_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
    (MR_TypeInfo) &transform_hlds__pd_info__transform_hlds__pd_info__ti_pd_branch_info_1builtin__type_ctor_info_int_0
  }
};

const MR_TypeCtorInfo_Struct transform_hlds__pd_info__transform_hlds__pd_info__type_ctor_info_pd_arg_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (transform_hlds__pd_info____Unify____pd_arg_info_0_0_10001)),
  ((MR_Box) (transform_hlds__pd_info____Compare____pd_arg_info_0_0_10001)),
  (MR_String) "transform_hlds.pd_info",
  (MR_String) "pd_arg_info",
  {     NULL },
  {     (MR_PseudoTypeInfo) &transform_hlds__pd_info__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0transform_hlds__pd_info__ti_pd_branch_info_1builtin__type_ctor_info_int_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__pd_info__set_ordlist__pti_set_ordlist_1__pseudo_1 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

static const MR_PseudoTypeInfo transform_hlds__pd_info__transform_hlds__pd_info__field_types_pd_branch_info_1_0[3] = {
  (MR_PseudoTypeInfo) &transform_hlds__pd_info__tree234__pti_tree234_2__pseudo_1__plain_set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &transform_hlds__pd_info__set_ordlist__pti_set_ordlist_1__pseudo_1,
  (MR_PseudoTypeInfo) &transform_hlds__pd_info__set_ordlist__pti_set_ordlist_1__pseudo_1
};

static const MR_DuFunctorDesc transform_hlds__pd_info__transform_hlds__pd_info__du_functor_desc_pd_branch_info_1_0 = {
  (MR_String) "pd_branch_info",
  (MR_Integer) 3,
  (MR_Integer) 7,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  transform_hlds__pd_info__transform_hlds__pd_info__field_types_pd_branch_info_1_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr transform_hlds__pd_info__transform_hlds__pd_info__du_stag_ordered_pd_branch_info_1_0[1] = {
  &transform_hlds__pd_info__transform_hlds__pd_info__du_functor_desc_pd_branch_info_1_0
};

static const MR_DuPtagLayout transform_hlds__pd_info__transform_hlds__pd_info__du_ptag_ordered_pd_branch_info_1[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    transform_hlds__pd_info__transform_hlds__pd_info__du_stag_ordered_pd_branch_info_1_0
  }
};

static const MR_DuFunctorDescPtr transform_hlds__pd_info__transform_hlds__pd_info__du_name_ordered_pd_branch_info_1[1] = {
  &transform_hlds__pd_info__transform_hlds__pd_info__du_functor_desc_pd_branch_info_1_0
};

static const MR_Integer transform_hlds__pd_info__transform_hlds__pd_info__functor_number_map_pd_branch_info_1[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct transform_hlds__pd_info__transform_hlds__pd_info__type_ctor_info_pd_branch_info_1 = {
  (MR_Integer) 1,
  (MR_Integer) 17,
  (MR_Integer) 1,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__pd_info____Unify____pd_branch_info_1_0_10001)),
  ((MR_Box) (transform_hlds__pd_info____Compare____pd_branch_info_1_0_10001)),
  (MR_String) "transform_hlds.pd_info",
  (MR_String) "pd_branch_info",
  {     transform_hlds__pd_info__transform_hlds__pd_info__du_name_ordered_pd_branch_info_1 },
  {     transform_hlds__pd_info__transform_hlds__pd_info__du_ptag_ordered_pd_branch_info_1 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  transform_hlds__pd_info__transform_hlds__pd_info__functor_number_map_pd_branch_info_1
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__pd_info__maybe__ti_maybe_1transform_hlds__pd_info__type_ctor_info_unfold_info_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &transform_hlds__pd_info__transform_hlds__pd_info__type_ctor_info_unfold_info_0
  }
};

static const MR_FA_TypeInfo_Struct2 transform_hlds__pd_info__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0transform_hlds__pd_info__type_ctor_info_version_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
    (MR_TypeInfo) &transform_hlds__pd_info__transform_hlds__pd_info__type_ctor_info_version_info_0
  }
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__pd_info__set_ordlist__ti_set_ordlist_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0
  }
};

static const MR_FA_TypeInfo_Struct2 transform_hlds__pd_info__pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0hlds__hlds_pred__type_ctor_info_pred_proc_id_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0
  }
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__pd_info__set_ordlist__ti_set_ordlist_1pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0hlds__hlds_pred__type_ctor_info_pred_proc_id_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) &transform_hlds__pd_info__pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0hlds__hlds_pred__type_ctor_info_pred_proc_id_0
  }
};

static const MR_PseudoTypeInfo transform_hlds__pd_info__transform_hlds__pd_info__field_types_pd_info_0_0[11] = {
  (MR_PseudoTypeInfo) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0,
  (MR_PseudoTypeInfo) &transform_hlds__pd_info__maybe__ti_maybe_1transform_hlds__pd_info__type_ctor_info_unfold_info_0,
  (MR_PseudoTypeInfo) &transform_hlds__pd_info__tree234__ti_tree234_2list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
  (MR_PseudoTypeInfo) &transform_hlds__pd_info__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0transform_hlds__pd_info__type_ctor_info_version_info_0,
  (MR_PseudoTypeInfo) &transform_hlds__pd_info__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0transform_hlds__pd_info__ti_pd_branch_info_1builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__counter__counter__type_ctor_info_counter_0,
  (MR_PseudoTypeInfo) &transform_hlds__pd_term__transform_hlds__pd_term__type_ctor_info_global_term_info_0,
  (MR_PseudoTypeInfo) &transform_hlds__pd_info__set_ordlist__ti_set_ordlist_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &transform_hlds__pd_info__set_ordlist__ti_set_ordlist_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
  (MR_PseudoTypeInfo) &transform_hlds__pd_info__set_ordlist__ti_set_ordlist_1pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0hlds__hlds_pred__type_ctor_info_pred_proc_id_0
};

static const MR_ConstString transform_hlds__pd_info__transform_hlds__pd_info__field_names_pd_info_0_0[11] = {
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
  (MR_Integer) 11,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  transform_hlds__pd_info__transform_hlds__pd_info__field_types_pd_info_0_0,
  transform_hlds__pd_info__transform_hlds__pd_info__field_names_pd_info_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr transform_hlds__pd_info__transform_hlds__pd_info__du_stag_ordered_pd_info_0_0[1] = {
  &transform_hlds__pd_info__transform_hlds__pd_info__du_functor_desc_pd_info_0_0
};

static const MR_DuPtagLayout transform_hlds__pd_info__transform_hlds__pd_info__du_ptag_ordered_pd_info_0[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    transform_hlds__pd_info__transform_hlds__pd_info__du_stag_ordered_pd_info_0_0
  }
};

static const MR_DuFunctorDescPtr transform_hlds__pd_info__transform_hlds__pd_info__du_name_ordered_pd_info_0[1] = {
  &transform_hlds__pd_info__transform_hlds__pd_info__du_functor_desc_pd_info_0_0
};

static const MR_Integer transform_hlds__pd_info__transform_hlds__pd_info__functor_number_map_pd_info_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct transform_hlds__pd_info__transform_hlds__pd_info__type_ctor_info_pd_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 1,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__pd_info____Unify____pd_info_0_0_10001)),
  ((MR_Box) (transform_hlds__pd_info____Compare____pd_info_0_0_10001)),
  (MR_String) "transform_hlds.pd_info",
  (MR_String) "pd_info",
  {     transform_hlds__pd_info__transform_hlds__pd_info__du_name_ordered_pd_info_0 },
  {     transform_hlds__pd_info__transform_hlds__pd_info__du_ptag_ordered_pd_info_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  transform_hlds__pd_info__transform_hlds__pd_info__functor_number_map_pd_info_0
};

const MR_TypeCtorInfo_Struct transform_hlds__pd_info__transform_hlds__pd_info__type_ctor_info_pd_proc_arg_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (transform_hlds__pd_info____Unify____pd_proc_arg_info_0_0_10001)),
  ((MR_Box) (transform_hlds__pd_info____Compare____pd_proc_arg_info_0_0_10001)),
  (MR_String) "transform_hlds.pd_info",
  (MR_String) "pd_proc_arg_info",
  {     NULL },
  {     (MR_PseudoTypeInfo) &transform_hlds__pd_info__transform_hlds__pd_info__ti_pd_branch_info_1builtin__type_ctor_info_int_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__pd_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0
  }
};

static const MR_FA_TypeInfo_Struct2 transform_hlds__pd_info__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0parse_tree__prog_data__type_ctor_info_mer_inst_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &transform_hlds__pd_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0,
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0
  }
};

static const MR_FA_TypeInfo_Struct2 transform_hlds__pd_info__pair__ti_pair_2builtin__type_ctor_info_int_0builtin__type_ctor_info_int_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__pd_info__list__ti_list_1pair__ti_pair_2builtin__type_ctor_info_int_0builtin__type_ctor_info_int_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &transform_hlds__pd_info__pair__ti_pair_2builtin__type_ctor_info_int_0builtin__type_ctor_info_int_0
  }
};

static const MR_FA_TypeInfo_Struct2 transform_hlds__pd_info__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0list__ti_list_1pair__ti_pair_2builtin__type_ctor_info_int_0builtin__type_ctor_info_int_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
    (MR_TypeInfo) &transform_hlds__pd_info__list__ti_list_1pair__ti_pair_2builtin__type_ctor_info_int_0builtin__type_ctor_info_int_0
  }
};

static const MR_PseudoTypeInfo transform_hlds__pd_info__transform_hlds__pd_info__field_types_unfold_info_0_0[11] = {
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0,
  (MR_PseudoTypeInfo) &transform_hlds__pd_info__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0parse_tree__prog_data__type_ctor_info_mer_inst_0,
  (MR_PseudoTypeInfo) &hlds__instmap__hlds__instmap__type_ctor_info_instmap_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &transform_hlds__pd_info__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0list__ti_list_1pair__ti_pair_2builtin__type_ctor_info_int_0builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0,
  (MR_PseudoTypeInfo) &transform_hlds__pd_info__set_ordlist__ti_set_ordlist_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0
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
  (MR_String) "ufi_changed",
  (MR_String) "ufi_size_delta",
  (MR_String) "ufi_rerun_det"
};

static const MR_DuFunctorDesc transform_hlds__pd_info__transform_hlds__pd_info__du_functor_desc_unfold_info_0_0 = {
  (MR_String) "unfold_info",
  (MR_Integer) 11,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  transform_hlds__pd_info__transform_hlds__pd_info__field_types_unfold_info_0_0,
  transform_hlds__pd_info__transform_hlds__pd_info__field_names_unfold_info_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr transform_hlds__pd_info__transform_hlds__pd_info__du_stag_ordered_unfold_info_0_0[1] = {
  &transform_hlds__pd_info__transform_hlds__pd_info__du_functor_desc_unfold_info_0_0
};

static const MR_DuPtagLayout transform_hlds__pd_info__transform_hlds__pd_info__du_ptag_ordered_unfold_info_0[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    transform_hlds__pd_info__transform_hlds__pd_info__du_stag_ordered_unfold_info_0_0
  }
};

static const MR_DuFunctorDescPtr transform_hlds__pd_info__transform_hlds__pd_info__du_name_ordered_unfold_info_0[1] = {
  &transform_hlds__pd_info__transform_hlds__pd_info__du_functor_desc_unfold_info_0_0
};

static const MR_Integer transform_hlds__pd_info__transform_hlds__pd_info__functor_number_map_unfold_info_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct transform_hlds__pd_info__transform_hlds__pd_info__type_ctor_info_unfold_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 1,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__pd_info____Unify____unfold_info_0_0_10001)),
  ((MR_Box) (transform_hlds__pd_info____Compare____unfold_info_0_0_10001)),
  (MR_String) "transform_hlds.pd_info",
  (MR_String) "unfold_info",
  {     transform_hlds__pd_info__transform_hlds__pd_info__du_name_ordered_unfold_info_0 },
  {     transform_hlds__pd_info__transform_hlds__pd_info__du_ptag_ordered_unfold_info_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  transform_hlds__pd_info__transform_hlds__pd_info__functor_number_map_unfold_info_0
};

const MR_TypeCtorInfo_Struct transform_hlds__pd_info__transform_hlds__pd_info__type_ctor_info_useless_versions_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (transform_hlds__pd_info____Unify____useless_versions_0_0_10001)),
  ((MR_Box) (transform_hlds__pd_info____Compare____useless_versions_0_0_10001)),
  (MR_String) "transform_hlds.pd_info",
  (MR_String) "useless_versions",
  {     NULL },
  {     (MR_PseudoTypeInfo) &transform_hlds__pd_info__set_ordlist__ti_set_ordlist_1pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0hlds__hlds_pred__type_ctor_info_pred_proc_id_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

const MR_TypeCtorInfo_Struct transform_hlds__pd_info__transform_hlds__pd_info__type_ctor_info_version_index_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (transform_hlds__pd_info____Unify____version_index_0_0_10001)),
  ((MR_Box) (transform_hlds__pd_info____Compare____version_index_0_0_10001)),
  (MR_String) "transform_hlds.pd_info",
  (MR_String) "version_index",
  {     NULL },
  {     (MR_PseudoTypeInfo) &transform_hlds__pd_info__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0transform_hlds__pd_info__type_ctor_info_version_info_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__pd_info__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &transform_hlds__pd_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__pd_info__list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__pd_info__maybe__ti_maybe_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0
  }
};

static const MR_PseudoTypeInfo transform_hlds__pd_info__transform_hlds__pd_info__field_types_version_info_0_0[9] = {
  (MR_PseudoTypeInfo) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0,
  (MR_PseudoTypeInfo) &transform_hlds__pd_info__list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
  (MR_PseudoTypeInfo) &transform_hlds__pd_info__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &transform_hlds__pd_info__list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_type_0,
  (MR_PseudoTypeInfo) &hlds__instmap__hlds__instmap__type_ctor_info_instmap_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &transform_hlds__pd_info__set_ordlist__ti_set_ordlist_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
  (MR_PseudoTypeInfo) &transform_hlds__pd_info__maybe__ti_maybe_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0
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
  (MR_Integer) 9,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  transform_hlds__pd_info__transform_hlds__pd_info__field_types_version_info_0_0,
  transform_hlds__pd_info__transform_hlds__pd_info__field_names_version_info_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr transform_hlds__pd_info__transform_hlds__pd_info__du_stag_ordered_version_info_0_0[1] = {
  &transform_hlds__pd_info__transform_hlds__pd_info__du_functor_desc_version_info_0_0
};

static const MR_DuPtagLayout transform_hlds__pd_info__transform_hlds__pd_info__du_ptag_ordered_version_info_0[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    transform_hlds__pd_info__transform_hlds__pd_info__du_stag_ordered_version_info_0_0
  }
};

static const MR_DuFunctorDescPtr transform_hlds__pd_info__transform_hlds__pd_info__du_name_ordered_version_info_0[1] = {
  &transform_hlds__pd_info__transform_hlds__pd_info__du_functor_desc_version_info_0_0
};

static const MR_Integer transform_hlds__pd_info__transform_hlds__pd_info__functor_number_map_version_info_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct transform_hlds__pd_info__transform_hlds__pd_info__type_ctor_info_version_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 1,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__pd_info____Unify____version_info_0_0_10001)),
  ((MR_Box) (transform_hlds__pd_info____Compare____version_info_0_0_10001)),
  (MR_String) "transform_hlds.pd_info",
  (MR_String) "version_info",
  {     transform_hlds__pd_info__transform_hlds__pd_info__du_name_ordered_version_info_0 },
  {     transform_hlds__pd_info__transform_hlds__pd_info__du_ptag_ordered_version_info_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  transform_hlds__pd_info__transform_hlds__pd_info__functor_number_map_version_info_0
};

static const MR_EnumFunctorDesc transform_hlds__pd_info__transform_hlds__pd_info__enum_functor_desc_version_is_exact_0_0 = {
  (MR_String) "exact",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc transform_hlds__pd_info__transform_hlds__pd_info__enum_functor_desc_version_is_exact_0_1 = {
  (MR_String) "more_general",
  (MR_Integer) 1
};

static const MR_EnumFunctorDescPtr transform_hlds__pd_info__transform_hlds__pd_info__enum_value_ordered_version_is_exact_0[2] = {
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
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (transform_hlds__pd_info____Unify____version_is_exact_0_0_10001)),
  ((MR_Box) (transform_hlds__pd_info____Compare____version_is_exact_0_0_10001)),
  (MR_String) "transform_hlds.pd_info",
  (MR_String) "version_is_exact",
  {     transform_hlds__pd_info__transform_hlds__pd_info__enum_name_ordered_version_is_exact_0 },
  {     transform_hlds__pd_info__transform_hlds__pd_info__enum_value_ordered_version_is_exact_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  transform_hlds__pd_info__transform_hlds__pd_info__functor_number_map_version_is_exact_0
};

void MR_CALL 
transform_hlds__pd_info____Compare____version_is_exact_0_0(
  MR_Word * transform_hlds__pd_info__HeadVar__1_1,
  MR_Word transform_hlds__pd_info__HeadVar__2_2,
  MR_Word transform_hlds__pd_info__HeadVar__3_3)
{
  {
    MR_Integer transform_hlds__pd_info__Cast_HeadVar1_4 = (MR_Integer) transform_hlds__pd_info__HeadVar__2_2;
    MR_Integer transform_hlds__pd_info__Cast_HeadVar2_5 = (MR_Integer) transform_hlds__pd_info__HeadVar__3_3;

    mercury__private_builtin__builtin_compare_int_3_p_0(transform_hlds__pd_info__HeadVar__1_1, transform_hlds__pd_info__Cast_HeadVar1_4, transform_hlds__pd_info__Cast_HeadVar2_5);
  }
}

MR_bool MR_CALL 
transform_hlds__pd_info____Unify____version_is_exact_0_0(
  MR_Word transform_hlds__pd_info__HeadVar__2_1,
  MR_Word transform_hlds__pd_info__HeadVar__2_2)
{
  {
    MR_bool transform_hlds__pd_info__succeeded = (transform_hlds__pd_info__HeadVar__2_1 == transform_hlds__pd_info__HeadVar__2_2);

    return transform_hlds__pd_info__succeeded;
  }
}

void MR_CALL 
transform_hlds__pd_info____Compare____version_index_0_0(
  MR_Word * transform_hlds__pd_info__HeadVar__1_1,
  MR_Word transform_hlds__pd_info__HeadVar__2_2,
  MR_Word transform_hlds__pd_info__HeadVar__3_3)
{
  {
    MR_Word transform_hlds__pd_info__Cast_HeadVar1_4 = transform_hlds__pd_info__HeadVar__2_2;
    MR_Word transform_hlds__pd_info__Cast_HeadVar2_5 = transform_hlds__pd_info__HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__pd_info_scalar_common_2[5], transform_hlds__pd_info__HeadVar__1_1, ((MR_Box) (transform_hlds__pd_info__Cast_HeadVar1_4)), ((MR_Box) (transform_hlds__pd_info__Cast_HeadVar2_5)));
  }
}

MR_bool MR_CALL 
transform_hlds__pd_info____Unify____version_index_0_0(
  MR_Word transform_hlds__pd_info__HeadVar__1_1,
  MR_Word transform_hlds__pd_info__HeadVar__2_2)
{
  {
    MR_bool transform_hlds__pd_info__succeeded;
    MR_Word transform_hlds__pd_info__Cast_HeadVar1_3 = transform_hlds__pd_info__HeadVar__1_1;
    MR_Word transform_hlds__pd_info__Cast_HeadVar2_4 = transform_hlds__pd_info__HeadVar__2_2;

    transform_hlds__pd_info__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__pd_info_scalar_common_2[5], ((MR_Box) (transform_hlds__pd_info__Cast_HeadVar1_3)), ((MR_Box) (transform_hlds__pd_info__Cast_HeadVar2_4)));
    return transform_hlds__pd_info__succeeded;
  }
}

void MR_CALL 
transform_hlds__pd_info____Compare____useless_versions_0_0(
  MR_Word * transform_hlds__pd_info__HeadVar__1_1,
  MR_Word transform_hlds__pd_info__HeadVar__2_2,
  MR_Word transform_hlds__pd_info__HeadVar__3_3)
{
  {
    MR_Word transform_hlds__pd_info__Cast_HeadVar1_4 = transform_hlds__pd_info__HeadVar__2_2;
    MR_Word transform_hlds__pd_info__Cast_HeadVar2_5 = transform_hlds__pd_info__HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__pd_info_scalar_common_1[7], transform_hlds__pd_info__HeadVar__1_1, ((MR_Box) (transform_hlds__pd_info__Cast_HeadVar1_4)), ((MR_Box) (transform_hlds__pd_info__Cast_HeadVar2_5)));
  }
}

MR_bool MR_CALL 
transform_hlds__pd_info____Unify____useless_versions_0_0(
  MR_Word transform_hlds__pd_info__HeadVar__1_1,
  MR_Word transform_hlds__pd_info__HeadVar__2_2)
{
  {
    MR_bool transform_hlds__pd_info__succeeded;
    MR_Word transform_hlds__pd_info__Cast_HeadVar1_3 = transform_hlds__pd_info__HeadVar__1_1;
    MR_Word transform_hlds__pd_info__Cast_HeadVar2_4 = transform_hlds__pd_info__HeadVar__2_2;

    transform_hlds__pd_info__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__pd_info_scalar_common_1[7], ((MR_Box) (transform_hlds__pd_info__Cast_HeadVar1_3)), ((MR_Box) (transform_hlds__pd_info__Cast_HeadVar2_4)));
    return transform_hlds__pd_info__succeeded;
  }
}

void MR_CALL 
transform_hlds__pd_info____Compare____unfold_info_0_0(
  MR_Word * transform_hlds__pd_info__HeadVar__1_1,
  MR_Word transform_hlds__pd_info__HeadVar__2_2,
  MR_Word transform_hlds__pd_info__HeadVar__3_3)
{
  {
    MR_bool transform_hlds__pd_info__succeeded;
    MR_Integer transform_hlds__pd_info__CastX_36 = (MR_Integer) transform_hlds__pd_info__HeadVar__2_2;
    MR_Integer transform_hlds__pd_info__CastY_37 = (MR_Integer) transform_hlds__pd_info__HeadVar__3_3;

    transform_hlds__pd_info__succeeded = (transform_hlds__pd_info__CastX_36 == transform_hlds__pd_info__CastY_37);
    if (transform_hlds__pd_info__succeeded)
      *transform_hlds__pd_info__HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Word transform_hlds__pd_info__ArgX1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__2_2, (MR_Integer) 0)));
      MR_Word transform_hlds__pd_info__ArgY1_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__3_3, (MR_Integer) 0)));
      MR_Word transform_hlds__pd_info__ArgX2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__2_2, (MR_Integer) 1)));
      MR_Word transform_hlds__pd_info__ArgY2_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__3_3, (MR_Integer) 1)));
      MR_Word transform_hlds__pd_info__ArgX3_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__2_2, (MR_Integer) 2)));
      MR_Word transform_hlds__pd_info__ArgY3_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__3_3, (MR_Integer) 2)));
      MR_Integer transform_hlds__pd_info__ArgX4_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__2_2, (MR_Integer) 3)));
      MR_Integer transform_hlds__pd_info__ArgY4_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__3_3, (MR_Integer) 3)));
      MR_Word transform_hlds__pd_info__ArgX5_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__2_2, (MR_Integer) 4)));
      MR_Word transform_hlds__pd_info__ArgY5_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__3_3, (MR_Integer) 4)));
      MR_Word transform_hlds__pd_info__ArgX6_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__2_2, (MR_Integer) 5)));
      MR_Word transform_hlds__pd_info__ArgY6_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__3_3, (MR_Integer) 5)));
      MR_Word transform_hlds__pd_info__ArgX7_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__2_2, (MR_Integer) 6)));
      MR_Word transform_hlds__pd_info__ArgY7_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__3_3, (MR_Integer) 6)));
      MR_Word transform_hlds__pd_info__ArgX8_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__2_2, (MR_Integer) 7)));
      MR_Word transform_hlds__pd_info__ArgY8_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__3_3, (MR_Integer) 7)));
      MR_Word transform_hlds__pd_info__ArgX9_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__2_2, (MR_Integer) 8)));
      MR_Word transform_hlds__pd_info__ArgY9_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__3_3, (MR_Integer) 8)));
      MR_Integer transform_hlds__pd_info__ArgX10_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__2_2, (MR_Integer) 9)));
      MR_Integer transform_hlds__pd_info__ArgY10_23 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__3_3, (MR_Integer) 9)));
      MR_Word transform_hlds__pd_info__ArgX11_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__2_2, (MR_Integer) 10)));
      MR_Word transform_hlds__pd_info__ArgY11_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__3_3, (MR_Integer) 10)));
      MR_Word transform_hlds__pd_info__Var_26;

      hlds__hlds_pred____Compare____proc_info_0_0(&transform_hlds__pd_info__Var_26, transform_hlds__pd_info__ArgX1_4, transform_hlds__pd_info__ArgY1_5);
      transform_hlds__pd_info__succeeded = (transform_hlds__pd_info__Var_26 == (MR_Integer) 0);
      transform_hlds__pd_info__succeeded = !(transform_hlds__pd_info__succeeded);
      if (transform_hlds__pd_info__succeeded)
        *transform_hlds__pd_info__HeadVar__1_1 = transform_hlds__pd_info__Var_26;
      else
      {
        MR_Word transform_hlds__pd_info__Var_27;

        mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__pd_info_scalar_common_2[6], &transform_hlds__pd_info__Var_27, ((MR_Box) (transform_hlds__pd_info__ArgX2_6)), ((MR_Box) (transform_hlds__pd_info__ArgY2_7)));
        transform_hlds__pd_info__succeeded = (transform_hlds__pd_info__Var_27 == (MR_Integer) 0);
        transform_hlds__pd_info__succeeded = !(transform_hlds__pd_info__succeeded);
        if (transform_hlds__pd_info__succeeded)
          *transform_hlds__pd_info__HeadVar__1_1 = transform_hlds__pd_info__Var_27;
        else
        {
          MR_Word transform_hlds__pd_info__Var_28;

          hlds__instmap____Compare____instmap_0_0(&transform_hlds__pd_info__Var_28, transform_hlds__pd_info__ArgX3_8, transform_hlds__pd_info__ArgY3_9);
          transform_hlds__pd_info__succeeded = (transform_hlds__pd_info__Var_28 == (MR_Integer) 0);
          transform_hlds__pd_info__succeeded = !(transform_hlds__pd_info__succeeded);
          if (transform_hlds__pd_info__succeeded)
            *transform_hlds__pd_info__HeadVar__1_1 = transform_hlds__pd_info__Var_28;
          else
          {
            MR_Word transform_hlds__pd_info__Var_29;

            mercury__private_builtin__builtin_compare_int_3_p_0(&transform_hlds__pd_info__Var_29, transform_hlds__pd_info__ArgX4_10, transform_hlds__pd_info__ArgY4_11);
            transform_hlds__pd_info__succeeded = (transform_hlds__pd_info__Var_29 == (MR_Integer) 0);
            transform_hlds__pd_info__succeeded = !(transform_hlds__pd_info__succeeded);
            if (transform_hlds__pd_info__succeeded)
              *transform_hlds__pd_info__HeadVar__1_1 = transform_hlds__pd_info__Var_29;
            else
            {
              MR_Word transform_hlds__pd_info__Var_30;

              mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__pd_info_scalar_common_2[8], &transform_hlds__pd_info__Var_30, ((MR_Box) (transform_hlds__pd_info__ArgX5_12)), ((MR_Box) (transform_hlds__pd_info__ArgY5_13)));
              transform_hlds__pd_info__succeeded = (transform_hlds__pd_info__Var_30 == (MR_Integer) 0);
              transform_hlds__pd_info__succeeded = !(transform_hlds__pd_info__succeeded);
              if (transform_hlds__pd_info__succeeded)
                *transform_hlds__pd_info__HeadVar__1_1 = transform_hlds__pd_info__Var_30;
              else
              {
                MR_Word transform_hlds__pd_info__Var_31;

                hlds__hlds_pred____Compare____pred_info_0_0(&transform_hlds__pd_info__Var_31, transform_hlds__pd_info__ArgX6_14, transform_hlds__pd_info__ArgY6_15);
                transform_hlds__pd_info__succeeded = (transform_hlds__pd_info__Var_31 == (MR_Integer) 0);
                transform_hlds__pd_info__succeeded = !(transform_hlds__pd_info__succeeded);
                if (transform_hlds__pd_info__succeeded)
                  *transform_hlds__pd_info__HeadVar__1_1 = transform_hlds__pd_info__Var_31;
                else
                {
                  MR_Word transform_hlds__pd_info__Var_32;

                  mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__pd_info_scalar_common_1[6], &transform_hlds__pd_info__Var_32, ((MR_Box) (transform_hlds__pd_info__ArgX7_16)), ((MR_Box) (transform_hlds__pd_info__ArgY7_17)));
                  transform_hlds__pd_info__succeeded = (transform_hlds__pd_info__Var_32 == (MR_Integer) 0);
                  transform_hlds__pd_info__succeeded = !(transform_hlds__pd_info__succeeded);
                  if (transform_hlds__pd_info__succeeded)
                    *transform_hlds__pd_info__HeadVar__1_1 = transform_hlds__pd_info__Var_32;
                  else
                  {
                    MR_Word transform_hlds__pd_info__Var_33;

                    hlds__hlds_pred____Compare____pred_proc_id_0_0(&transform_hlds__pd_info__Var_33, transform_hlds__pd_info__ArgX8_18, transform_hlds__pd_info__ArgY8_19);
                    transform_hlds__pd_info__succeeded = (transform_hlds__pd_info__Var_33 == (MR_Integer) 0);
                    transform_hlds__pd_info__succeeded = !(transform_hlds__pd_info__succeeded);
                    if (transform_hlds__pd_info__succeeded)
                      *transform_hlds__pd_info__HeadVar__1_1 = transform_hlds__pd_info__Var_33;
                    else
                    {
                      MR_Word transform_hlds__pd_info__Var_34;
                      MR_Integer transform_hlds__pd_info__Var_49 = (MR_Integer) transform_hlds__pd_info__ArgX9_20;
                      MR_Integer transform_hlds__pd_info__Var_50 = (MR_Integer) transform_hlds__pd_info__ArgY9_21;

                      mercury__private_builtin__builtin_compare_int_3_p_0(&transform_hlds__pd_info__Var_34, transform_hlds__pd_info__Var_49, transform_hlds__pd_info__Var_50);
                      transform_hlds__pd_info__succeeded = (transform_hlds__pd_info__Var_34 == (MR_Integer) 0);
                      transform_hlds__pd_info__succeeded = !(transform_hlds__pd_info__succeeded);
                      if (transform_hlds__pd_info__succeeded)
                        *transform_hlds__pd_info__HeadVar__1_1 = transform_hlds__pd_info__Var_34;
                      else
                      {
                        MR_Word transform_hlds__pd_info__Var_35;

                        mercury__private_builtin__builtin_compare_int_3_p_0(&transform_hlds__pd_info__Var_35, transform_hlds__pd_info__ArgX10_22, transform_hlds__pd_info__ArgY10_23);
                        transform_hlds__pd_info__succeeded = (transform_hlds__pd_info__Var_35 == (MR_Integer) 0);
                        transform_hlds__pd_info__succeeded = !(transform_hlds__pd_info__succeeded);
                        if (transform_hlds__pd_info__succeeded)
                          *transform_hlds__pd_info__HeadVar__1_1 = transform_hlds__pd_info__Var_35;
                        else
                        {
                          MR_Integer transform_hlds__pd_info__Var_51 = (MR_Integer) transform_hlds__pd_info__ArgX11_24;
                          MR_Integer transform_hlds__pd_info__Var_52 = (MR_Integer) transform_hlds__pd_info__ArgY11_25;

                          mercury__private_builtin__builtin_compare_int_3_p_0(transform_hlds__pd_info__HeadVar__1_1, transform_hlds__pd_info__Var_51, transform_hlds__pd_info__Var_52);
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
  MR_Word transform_hlds__pd_info__HeadVar__1_1,
  MR_Word transform_hlds__pd_info__HeadVar__2_2)
{
  {
    MR_bool transform_hlds__pd_info__succeeded;
    MR_Integer transform_hlds__pd_info__CastX_25 = (MR_Integer) transform_hlds__pd_info__HeadVar__1_1;
    MR_Integer transform_hlds__pd_info__CastY_26 = (MR_Integer) transform_hlds__pd_info__HeadVar__2_2;

    transform_hlds__pd_info__succeeded = (transform_hlds__pd_info__CastX_25 == transform_hlds__pd_info__CastY_26);
    if (transform_hlds__pd_info__succeeded)
      transform_hlds__pd_info__succeeded = MR_TRUE;
    else
    {
      MR_Word transform_hlds__pd_info__TypeInfo_28_28;
      MR_Word transform_hlds__pd_info__TypeInfo_30_30;
      MR_Word transform_hlds__pd_info__TypeInfo_32_32;
      MR_Word transform_hlds__pd_info__ArgX1_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__1_1, (MR_Integer) 0)));
      MR_Word transform_hlds__pd_info__ArgY1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__2_2, (MR_Integer) 0)));
      MR_Word transform_hlds__pd_info__ArgX2_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__1_1, (MR_Integer) 1)));
      MR_Word transform_hlds__pd_info__ArgY2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__2_2, (MR_Integer) 1)));
      MR_Word transform_hlds__pd_info__ArgX3_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__1_1, (MR_Integer) 2)));
      MR_Word transform_hlds__pd_info__ArgY3_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__2_2, (MR_Integer) 2)));
      MR_Integer transform_hlds__pd_info__ArgX4_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__1_1, (MR_Integer) 3)));
      MR_Integer transform_hlds__pd_info__ArgY4_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__2_2, (MR_Integer) 3)));
      MR_Word transform_hlds__pd_info__ArgX5_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__1_1, (MR_Integer) 4)));
      MR_Word transform_hlds__pd_info__ArgY5_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__2_2, (MR_Integer) 4)));
      MR_Word transform_hlds__pd_info__ArgX6_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__1_1, (MR_Integer) 5)));
      MR_Word transform_hlds__pd_info__ArgY6_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__2_2, (MR_Integer) 5)));
      MR_Word transform_hlds__pd_info__ArgX7_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__1_1, (MR_Integer) 6)));
      MR_Word transform_hlds__pd_info__ArgY7_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__2_2, (MR_Integer) 6)));
      MR_Word transform_hlds__pd_info__ArgX8_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__1_1, (MR_Integer) 7)));
      MR_Word transform_hlds__pd_info__ArgY8_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__2_2, (MR_Integer) 7)));
      MR_Word transform_hlds__pd_info__ArgX9_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__1_1, (MR_Integer) 8)));
      MR_Word transform_hlds__pd_info__ArgY9_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__2_2, (MR_Integer) 8)));
      MR_Integer transform_hlds__pd_info__ArgX10_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__1_1, (MR_Integer) 9)));
      MR_Integer transform_hlds__pd_info__ArgY10_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__2_2, (MR_Integer) 9)));
      MR_Word transform_hlds__pd_info__ArgX11_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__1_1, (MR_Integer) 10)));
      MR_Word transform_hlds__pd_info__ArgY11_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__2_2, (MR_Integer) 10)));

      transform_hlds__pd_info__succeeded = hlds__hlds_pred____Unify____proc_info_0_0(transform_hlds__pd_info__ArgX1_3, transform_hlds__pd_info__ArgY1_4);
      if (transform_hlds__pd_info__succeeded)
      {
        transform_hlds__pd_info__TypeInfo_28_28 = (MR_Word) &transform_hlds__pd_info_scalar_common_2[6];
        transform_hlds__pd_info__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__pd_info__TypeInfo_28_28, ((MR_Box) (transform_hlds__pd_info__ArgX2_5)), ((MR_Box) (transform_hlds__pd_info__ArgY2_6)));
        if (transform_hlds__pd_info__succeeded)
        {
          transform_hlds__pd_info__succeeded = hlds__instmap____Unify____instmap_0_0(transform_hlds__pd_info__ArgX3_7, transform_hlds__pd_info__ArgY3_8);
          if (transform_hlds__pd_info__succeeded)
          {
            transform_hlds__pd_info__succeeded = (transform_hlds__pd_info__ArgX4_9 == transform_hlds__pd_info__ArgY4_10);
            if (transform_hlds__pd_info__succeeded)
            {
              transform_hlds__pd_info__TypeInfo_30_30 = (MR_Word) &transform_hlds__pd_info_scalar_common_2[8];
              transform_hlds__pd_info__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__pd_info__TypeInfo_30_30, ((MR_Box) (transform_hlds__pd_info__ArgX5_11)), ((MR_Box) (transform_hlds__pd_info__ArgY5_12)));
              if (transform_hlds__pd_info__succeeded)
              {
                transform_hlds__pd_info__succeeded = hlds__hlds_pred____Unify____pred_info_0_0(transform_hlds__pd_info__ArgX6_13, transform_hlds__pd_info__ArgY6_14);
                if (transform_hlds__pd_info__succeeded)
                {
                  transform_hlds__pd_info__TypeInfo_32_32 = (MR_Word) &transform_hlds__pd_info_scalar_common_1[6];
                  transform_hlds__pd_info__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__pd_info__TypeInfo_32_32, ((MR_Box) (transform_hlds__pd_info__ArgX7_15)), ((MR_Box) (transform_hlds__pd_info__ArgY7_16)));
                  if (transform_hlds__pd_info__succeeded)
                  {
                    transform_hlds__pd_info__succeeded = hlds__hlds_pred____Unify____pred_proc_id_0_0(transform_hlds__pd_info__ArgX8_17, transform_hlds__pd_info__ArgY8_18);
                    if (transform_hlds__pd_info__succeeded)
                    {
                      transform_hlds__pd_info__succeeded = (transform_hlds__pd_info__ArgX9_19 == transform_hlds__pd_info__ArgY9_20);
                      if (transform_hlds__pd_info__succeeded)
                      {
                        transform_hlds__pd_info__succeeded = (transform_hlds__pd_info__ArgX10_21 == transform_hlds__pd_info__ArgY10_22);
                        if (transform_hlds__pd_info__succeeded)
                          transform_hlds__pd_info__succeeded = (transform_hlds__pd_info__ArgX11_23 == transform_hlds__pd_info__ArgY11_24);
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
    return transform_hlds__pd_info__succeeded;
  }
}

void MR_CALL 
transform_hlds__pd_info____Compare____pd_proc_arg_info_0_0(
  MR_Word * transform_hlds__pd_info__HeadVar__1_1,
  MR_Word transform_hlds__pd_info__HeadVar__2_2,
  MR_Word transform_hlds__pd_info__HeadVar__3_3)
{
  {
    MR_Word transform_hlds__pd_info__Cast_HeadVar1_4 = transform_hlds__pd_info__HeadVar__2_2;
    MR_Word transform_hlds__pd_info__Cast_HeadVar2_5 = transform_hlds__pd_info__HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__pd_info_scalar_common_1[4], transform_hlds__pd_info__HeadVar__1_1, ((MR_Box) (transform_hlds__pd_info__Cast_HeadVar1_4)), ((MR_Box) (transform_hlds__pd_info__Cast_HeadVar2_5)));
  }
}

MR_bool MR_CALL 
transform_hlds__pd_info____Unify____pd_proc_arg_info_0_0(
  MR_Word transform_hlds__pd_info__HeadVar__1_1,
  MR_Word transform_hlds__pd_info__HeadVar__2_2)
{
  {
    MR_bool transform_hlds__pd_info__succeeded;
    MR_Word transform_hlds__pd_info__Cast_HeadVar1_3 = transform_hlds__pd_info__HeadVar__1_1;
    MR_Word transform_hlds__pd_info__Cast_HeadVar2_4 = transform_hlds__pd_info__HeadVar__2_2;

    transform_hlds__pd_info__succeeded = transform_hlds__pd_info____Unify____pd_branch_info_1_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, transform_hlds__pd_info__Cast_HeadVar1_3, transform_hlds__pd_info__Cast_HeadVar2_4);
    return transform_hlds__pd_info__succeeded;
  }
}

void MR_CALL 
transform_hlds__pd_info____Compare____pd_info_0_0(
  MR_Word * transform_hlds__pd_info__HeadVar__1_1,
  MR_Word transform_hlds__pd_info__HeadVar__2_2,
  MR_Word transform_hlds__pd_info__HeadVar__3_3)
{
  {
    MR_bool transform_hlds__pd_info__succeeded;
    MR_Integer transform_hlds__pd_info__CastX_36 = (MR_Integer) transform_hlds__pd_info__HeadVar__2_2;
    MR_Integer transform_hlds__pd_info__CastY_37 = (MR_Integer) transform_hlds__pd_info__HeadVar__3_3;

    transform_hlds__pd_info__succeeded = (transform_hlds__pd_info__CastX_36 == transform_hlds__pd_info__CastY_37);
    if (transform_hlds__pd_info__succeeded)
      *transform_hlds__pd_info__HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Word transform_hlds__pd_info__ArgX1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__2_2, (MR_Integer) 0)));
      MR_Word transform_hlds__pd_info__ArgY1_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__3_3, (MR_Integer) 0)));
      MR_Word transform_hlds__pd_info__ArgX2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__2_2, (MR_Integer) 1)));
      MR_Word transform_hlds__pd_info__ArgY2_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__3_3, (MR_Integer) 1)));
      MR_Word transform_hlds__pd_info__ArgX3_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__2_2, (MR_Integer) 2)));
      MR_Word transform_hlds__pd_info__ArgY3_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__3_3, (MR_Integer) 2)));
      MR_Word transform_hlds__pd_info__ArgX4_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__2_2, (MR_Integer) 3)));
      MR_Word transform_hlds__pd_info__ArgY4_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__3_3, (MR_Integer) 3)));
      MR_Word transform_hlds__pd_info__ArgX5_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__2_2, (MR_Integer) 4)));
      MR_Word transform_hlds__pd_info__ArgY5_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__3_3, (MR_Integer) 4)));
      MR_Word transform_hlds__pd_info__ArgX6_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__2_2, (MR_Integer) 5)));
      MR_Word transform_hlds__pd_info__ArgY6_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__3_3, (MR_Integer) 5)));
      MR_Word transform_hlds__pd_info__ArgX7_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__2_2, (MR_Integer) 6)));
      MR_Word transform_hlds__pd_info__ArgY7_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__3_3, (MR_Integer) 6)));
      MR_Word transform_hlds__pd_info__ArgX8_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__2_2, (MR_Integer) 7)));
      MR_Word transform_hlds__pd_info__ArgY8_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__3_3, (MR_Integer) 7)));
      MR_Integer transform_hlds__pd_info__ArgX9_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__2_2, (MR_Integer) 8)));
      MR_Integer transform_hlds__pd_info__ArgY9_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__3_3, (MR_Integer) 8)));
      MR_Word transform_hlds__pd_info__ArgX10_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__2_2, (MR_Integer) 9)));
      MR_Word transform_hlds__pd_info__ArgY10_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__3_3, (MR_Integer) 9)));
      MR_Word transform_hlds__pd_info__ArgX11_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__2_2, (MR_Integer) 10)));
      MR_Word transform_hlds__pd_info__ArgY11_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__3_3, (MR_Integer) 10)));
      MR_Word transform_hlds__pd_info__Var_26;

      hlds__hlds_module____Compare____module_info_0_0(&transform_hlds__pd_info__Var_26, transform_hlds__pd_info__ArgX1_4, transform_hlds__pd_info__ArgY1_5);
      transform_hlds__pd_info__succeeded = (transform_hlds__pd_info__Var_26 == (MR_Integer) 0);
      transform_hlds__pd_info__succeeded = !(transform_hlds__pd_info__succeeded);
      if (transform_hlds__pd_info__succeeded)
        *transform_hlds__pd_info__HeadVar__1_1 = transform_hlds__pd_info__Var_26;
      else
      {
        MR_Word transform_hlds__pd_info__Var_27;

        mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__pd_info_scalar_common_1[5], &transform_hlds__pd_info__Var_27, ((MR_Box) (transform_hlds__pd_info__ArgX2_6)), ((MR_Box) (transform_hlds__pd_info__ArgY2_7)));
        transform_hlds__pd_info__succeeded = (transform_hlds__pd_info__Var_27 == (MR_Integer) 0);
        transform_hlds__pd_info__succeeded = !(transform_hlds__pd_info__succeeded);
        if (transform_hlds__pd_info__succeeded)
          *transform_hlds__pd_info__HeadVar__1_1 = transform_hlds__pd_info__Var_27;
        else
        {
          MR_Word transform_hlds__pd_info__Var_28;

          mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__pd_info_scalar_common_2[1], &transform_hlds__pd_info__Var_28, ((MR_Box) (transform_hlds__pd_info__ArgX3_8)), ((MR_Box) (transform_hlds__pd_info__ArgY3_9)));
          transform_hlds__pd_info__succeeded = (transform_hlds__pd_info__Var_28 == (MR_Integer) 0);
          transform_hlds__pd_info__succeeded = !(transform_hlds__pd_info__succeeded);
          if (transform_hlds__pd_info__succeeded)
            *transform_hlds__pd_info__HeadVar__1_1 = transform_hlds__pd_info__Var_28;
          else
          {
            MR_Word transform_hlds__pd_info__Var_29;

            mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__pd_info_scalar_common_2[5], &transform_hlds__pd_info__Var_29, ((MR_Box) (transform_hlds__pd_info__ArgX4_10)), ((MR_Box) (transform_hlds__pd_info__ArgY4_11)));
            transform_hlds__pd_info__succeeded = (transform_hlds__pd_info__Var_29 == (MR_Integer) 0);
            transform_hlds__pd_info__succeeded = !(transform_hlds__pd_info__succeeded);
            if (transform_hlds__pd_info__succeeded)
              *transform_hlds__pd_info__HeadVar__1_1 = transform_hlds__pd_info__Var_29;
            else
            {
              MR_Word transform_hlds__pd_info__Var_30;

              mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__pd_info_scalar_common_2[4], &transform_hlds__pd_info__Var_30, ((MR_Box) (transform_hlds__pd_info__ArgX5_12)), ((MR_Box) (transform_hlds__pd_info__ArgY5_13)));
              transform_hlds__pd_info__succeeded = (transform_hlds__pd_info__Var_30 == (MR_Integer) 0);
              transform_hlds__pd_info__succeeded = !(transform_hlds__pd_info__succeeded);
              if (transform_hlds__pd_info__succeeded)
                *transform_hlds__pd_info__HeadVar__1_1 = transform_hlds__pd_info__Var_30;
              else
              {
                MR_Word transform_hlds__pd_info__Var_31;

                mercury__counter____Compare____counter_0_0(&transform_hlds__pd_info__Var_31, transform_hlds__pd_info__ArgX6_14, transform_hlds__pd_info__ArgY6_15);
                transform_hlds__pd_info__succeeded = (transform_hlds__pd_info__Var_31 == (MR_Integer) 0);
                transform_hlds__pd_info__succeeded = !(transform_hlds__pd_info__succeeded);
                if (transform_hlds__pd_info__succeeded)
                  *transform_hlds__pd_info__HeadVar__1_1 = transform_hlds__pd_info__Var_31;
                else
                {
                  MR_Word transform_hlds__pd_info__Var_32;

                  transform_hlds__pd_term____Compare____global_term_info_0_0(&transform_hlds__pd_info__Var_32, transform_hlds__pd_info__ArgX7_16, transform_hlds__pd_info__ArgY7_17);
                  transform_hlds__pd_info__succeeded = (transform_hlds__pd_info__Var_32 == (MR_Integer) 0);
                  transform_hlds__pd_info__succeeded = !(transform_hlds__pd_info__succeeded);
                  if (transform_hlds__pd_info__succeeded)
                    *transform_hlds__pd_info__HeadVar__1_1 = transform_hlds__pd_info__Var_32;
                  else
                  {
                    MR_Word transform_hlds__pd_info__Var_33;

                    mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__pd_info_scalar_common_1[6], &transform_hlds__pd_info__Var_33, ((MR_Box) (transform_hlds__pd_info__ArgX8_18)), ((MR_Box) (transform_hlds__pd_info__ArgY8_19)));
                    transform_hlds__pd_info__succeeded = (transform_hlds__pd_info__Var_33 == (MR_Integer) 0);
                    transform_hlds__pd_info__succeeded = !(transform_hlds__pd_info__succeeded);
                    if (transform_hlds__pd_info__succeeded)
                      *transform_hlds__pd_info__HeadVar__1_1 = transform_hlds__pd_info__Var_33;
                    else
                    {
                      MR_Word transform_hlds__pd_info__Var_34;

                      mercury__private_builtin__builtin_compare_int_3_p_0(&transform_hlds__pd_info__Var_34, transform_hlds__pd_info__ArgX9_20, transform_hlds__pd_info__ArgY9_21);
                      transform_hlds__pd_info__succeeded = (transform_hlds__pd_info__Var_34 == (MR_Integer) 0);
                      transform_hlds__pd_info__succeeded = !(transform_hlds__pd_info__succeeded);
                      if (transform_hlds__pd_info__succeeded)
                        *transform_hlds__pd_info__HeadVar__1_1 = transform_hlds__pd_info__Var_34;
                      else
                      {
                        MR_Word transform_hlds__pd_info__Var_35;

                        mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__pd_info_scalar_common_1[6], &transform_hlds__pd_info__Var_35, ((MR_Box) (transform_hlds__pd_info__ArgX10_22)), ((MR_Box) (transform_hlds__pd_info__ArgY10_23)));
                        transform_hlds__pd_info__succeeded = (transform_hlds__pd_info__Var_35 == (MR_Integer) 0);
                        transform_hlds__pd_info__succeeded = !(transform_hlds__pd_info__succeeded);
                        if (transform_hlds__pd_info__succeeded)
                          *transform_hlds__pd_info__HeadVar__1_1 = transform_hlds__pd_info__Var_35;
                        else
                        {
                          mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__pd_info_scalar_common_1[7], transform_hlds__pd_info__HeadVar__1_1, ((MR_Box) (transform_hlds__pd_info__ArgX11_24)), ((MR_Box) (transform_hlds__pd_info__ArgY11_25)));
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
  MR_Word transform_hlds__pd_info__HeadVar__1_1,
  MR_Word transform_hlds__pd_info__HeadVar__2_2)
{
  {
    MR_bool transform_hlds__pd_info__succeeded;
    MR_Integer transform_hlds__pd_info__CastX_25 = (MR_Integer) transform_hlds__pd_info__HeadVar__1_1;
    MR_Integer transform_hlds__pd_info__CastY_26 = (MR_Integer) transform_hlds__pd_info__HeadVar__2_2;

    transform_hlds__pd_info__succeeded = (transform_hlds__pd_info__CastX_25 == transform_hlds__pd_info__CastY_26);
    if (transform_hlds__pd_info__succeeded)
      transform_hlds__pd_info__succeeded = MR_TRUE;
    else
    {
      MR_Word transform_hlds__pd_info__TypeInfo_28_28;
      MR_Word transform_hlds__pd_info__TypeInfo_29_29;
      MR_Word transform_hlds__pd_info__TypeInfo_30_30;
      MR_Word transform_hlds__pd_info__TypeInfo_31_31;
      MR_Word transform_hlds__pd_info__TypeInfo_34_34;
      MR_Word transform_hlds__pd_info__TypeInfo_35_35;
      MR_Word transform_hlds__pd_info__TypeInfo_36_36;
      MR_Word transform_hlds__pd_info__ArgX1_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__1_1, (MR_Integer) 0)));
      MR_Word transform_hlds__pd_info__ArgY1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__2_2, (MR_Integer) 0)));
      MR_Word transform_hlds__pd_info__ArgX2_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__1_1, (MR_Integer) 1)));
      MR_Word transform_hlds__pd_info__ArgY2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__2_2, (MR_Integer) 1)));
      MR_Word transform_hlds__pd_info__ArgX3_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__1_1, (MR_Integer) 2)));
      MR_Word transform_hlds__pd_info__ArgY3_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__2_2, (MR_Integer) 2)));
      MR_Word transform_hlds__pd_info__ArgX4_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__1_1, (MR_Integer) 3)));
      MR_Word transform_hlds__pd_info__ArgY4_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__2_2, (MR_Integer) 3)));
      MR_Word transform_hlds__pd_info__ArgX5_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__1_1, (MR_Integer) 4)));
      MR_Word transform_hlds__pd_info__ArgY5_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__2_2, (MR_Integer) 4)));
      MR_Word transform_hlds__pd_info__ArgX6_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__1_1, (MR_Integer) 5)));
      MR_Word transform_hlds__pd_info__ArgY6_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__2_2, (MR_Integer) 5)));
      MR_Word transform_hlds__pd_info__ArgX7_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__1_1, (MR_Integer) 6)));
      MR_Word transform_hlds__pd_info__ArgY7_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__2_2, (MR_Integer) 6)));
      MR_Word transform_hlds__pd_info__ArgX8_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__1_1, (MR_Integer) 7)));
      MR_Word transform_hlds__pd_info__ArgY8_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__2_2, (MR_Integer) 7)));
      MR_Integer transform_hlds__pd_info__ArgX9_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__1_1, (MR_Integer) 8)));
      MR_Integer transform_hlds__pd_info__ArgY9_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__2_2, (MR_Integer) 8)));
      MR_Word transform_hlds__pd_info__ArgX10_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__1_1, (MR_Integer) 9)));
      MR_Word transform_hlds__pd_info__ArgY10_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__2_2, (MR_Integer) 9)));
      MR_Word transform_hlds__pd_info__ArgX11_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__1_1, (MR_Integer) 10)));
      MR_Word transform_hlds__pd_info__ArgY11_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__2_2, (MR_Integer) 10)));

      transform_hlds__pd_info__succeeded = hlds__hlds_module____Unify____module_info_0_0(transform_hlds__pd_info__ArgX1_3, transform_hlds__pd_info__ArgY1_4);
      if (transform_hlds__pd_info__succeeded)
      {
        transform_hlds__pd_info__TypeInfo_28_28 = (MR_Word) &transform_hlds__pd_info_scalar_common_1[5];
        transform_hlds__pd_info__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__pd_info__TypeInfo_28_28, ((MR_Box) (transform_hlds__pd_info__ArgX2_5)), ((MR_Box) (transform_hlds__pd_info__ArgY2_6)));
        if (transform_hlds__pd_info__succeeded)
        {
          transform_hlds__pd_info__TypeInfo_29_29 = (MR_Word) &transform_hlds__pd_info_scalar_common_2[1];
          transform_hlds__pd_info__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__pd_info__TypeInfo_29_29, ((MR_Box) (transform_hlds__pd_info__ArgX3_7)), ((MR_Box) (transform_hlds__pd_info__ArgY3_8)));
          if (transform_hlds__pd_info__succeeded)
          {
            transform_hlds__pd_info__TypeInfo_30_30 = (MR_Word) &transform_hlds__pd_info_scalar_common_2[5];
            transform_hlds__pd_info__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__pd_info__TypeInfo_30_30, ((MR_Box) (transform_hlds__pd_info__ArgX4_9)), ((MR_Box) (transform_hlds__pd_info__ArgY4_10)));
            if (transform_hlds__pd_info__succeeded)
            {
              transform_hlds__pd_info__TypeInfo_31_31 = (MR_Word) &transform_hlds__pd_info_scalar_common_2[4];
              transform_hlds__pd_info__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__pd_info__TypeInfo_31_31, ((MR_Box) (transform_hlds__pd_info__ArgX5_11)), ((MR_Box) (transform_hlds__pd_info__ArgY5_12)));
              if (transform_hlds__pd_info__succeeded)
              {
                transform_hlds__pd_info__succeeded = mercury__counter____Unify____counter_0_0(transform_hlds__pd_info__ArgX6_13, transform_hlds__pd_info__ArgY6_14);
                if (transform_hlds__pd_info__succeeded)
                {
                  transform_hlds__pd_info__succeeded = transform_hlds__pd_term____Unify____global_term_info_0_0(transform_hlds__pd_info__ArgX7_15, transform_hlds__pd_info__ArgY7_16);
                  if (transform_hlds__pd_info__succeeded)
                  {
                    transform_hlds__pd_info__TypeInfo_34_34 = (MR_Word) &transform_hlds__pd_info_scalar_common_1[6];
                    transform_hlds__pd_info__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__pd_info__TypeInfo_34_34, ((MR_Box) (transform_hlds__pd_info__ArgX8_17)), ((MR_Box) (transform_hlds__pd_info__ArgY8_18)));
                    if (transform_hlds__pd_info__succeeded)
                    {
                      transform_hlds__pd_info__succeeded = (transform_hlds__pd_info__ArgX9_19 == transform_hlds__pd_info__ArgY9_20);
                      if (transform_hlds__pd_info__succeeded)
                      {
                        transform_hlds__pd_info__TypeInfo_35_35 = (MR_Word) &transform_hlds__pd_info_scalar_common_1[6];
                        transform_hlds__pd_info__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__pd_info__TypeInfo_35_35, ((MR_Box) (transform_hlds__pd_info__ArgX10_21)), ((MR_Box) (transform_hlds__pd_info__ArgY10_22)));
                        if (transform_hlds__pd_info__succeeded)
                        {
                          transform_hlds__pd_info__TypeInfo_36_36 = (MR_Word) &transform_hlds__pd_info_scalar_common_1[7];
                          transform_hlds__pd_info__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__pd_info__TypeInfo_36_36, ((MR_Box) (transform_hlds__pd_info__ArgX11_23)), ((MR_Box) (transform_hlds__pd_info__ArgY11_24)));
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
    return transform_hlds__pd_info__succeeded;
  }
}

void MR_CALL 
transform_hlds__pd_info____Compare____pd_branch_info_1_0(
  MR_Word transform_hlds__pd_info__TypeInfo_for_T_14,
  MR_Word * transform_hlds__pd_info__HeadVar__1_1,
  MR_Word transform_hlds__pd_info__HeadVar__2_2,
  MR_Word transform_hlds__pd_info__HeadVar__3_3)
{
  {
    MR_bool transform_hlds__pd_info__succeeded;
    MR_Integer transform_hlds__pd_info__CastX_12 = (MR_Integer) transform_hlds__pd_info__HeadVar__2_2;
    MR_Integer transform_hlds__pd_info__CastY_13 = (MR_Integer) transform_hlds__pd_info__HeadVar__3_3;

    transform_hlds__pd_info__succeeded = (transform_hlds__pd_info__CastX_12 == transform_hlds__pd_info__CastY_13);
    if (transform_hlds__pd_info__succeeded)
      *transform_hlds__pd_info__HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Word transform_hlds__pd_info__ArgX1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__2_2, (MR_Integer) 0)));
      MR_Word transform_hlds__pd_info__ArgY1_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__3_3, (MR_Integer) 0)));
      MR_Word transform_hlds__pd_info__ArgX2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__2_2, (MR_Integer) 1)));
      MR_Word transform_hlds__pd_info__ArgY2_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__3_3, (MR_Integer) 1)));
      MR_Word transform_hlds__pd_info__ArgX3_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__2_2, (MR_Integer) 2)));
      MR_Word transform_hlds__pd_info__ArgY3_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__3_3, (MR_Integer) 2)));
      MR_Word transform_hlds__pd_info__Var_10;

      mercury__tree234____Compare____tree234_2_0(transform_hlds__pd_info__TypeInfo_for_T_14, (MR_Word) &transform_hlds__pd_info_scalar_common_1[2], &transform_hlds__pd_info__Var_10, transform_hlds__pd_info__ArgX1_4, transform_hlds__pd_info__ArgY1_5);
      transform_hlds__pd_info__succeeded = (transform_hlds__pd_info__Var_10 == (MR_Integer) 0);
      transform_hlds__pd_info__succeeded = !(transform_hlds__pd_info__succeeded);
      if (transform_hlds__pd_info__succeeded)
        *transform_hlds__pd_info__HeadVar__1_1 = transform_hlds__pd_info__Var_10;
      else
      {
        MR_Word transform_hlds__pd_info__Var_11;

        mercury__set_ordlist____Compare____set_ordlist_1_0(transform_hlds__pd_info__TypeInfo_for_T_14, &transform_hlds__pd_info__Var_11, transform_hlds__pd_info__ArgX2_6, transform_hlds__pd_info__ArgY2_7);
        transform_hlds__pd_info__succeeded = (transform_hlds__pd_info__Var_11 == (MR_Integer) 0);
        transform_hlds__pd_info__succeeded = !(transform_hlds__pd_info__succeeded);
        if (transform_hlds__pd_info__succeeded)
          *transform_hlds__pd_info__HeadVar__1_1 = transform_hlds__pd_info__Var_11;
        else
          mercury__set_ordlist____Compare____set_ordlist_1_0(transform_hlds__pd_info__TypeInfo_for_T_14, transform_hlds__pd_info__HeadVar__1_1, transform_hlds__pd_info__ArgX3_8, transform_hlds__pd_info__ArgY3_9);
      }
    }
  }
}

MR_bool MR_CALL 
transform_hlds__pd_info____Unify____pd_branch_info_1_0(
  MR_Word transform_hlds__pd_info__TypeInfo_for_T_11,
  MR_Word transform_hlds__pd_info__HeadVar__1_1,
  MR_Word transform_hlds__pd_info__HeadVar__2_2)
{
  {
    MR_bool transform_hlds__pd_info__succeeded;
    MR_Integer transform_hlds__pd_info__CastX_9 = (MR_Integer) transform_hlds__pd_info__HeadVar__1_1;
    MR_Integer transform_hlds__pd_info__CastY_10 = (MR_Integer) transform_hlds__pd_info__HeadVar__2_2;

    transform_hlds__pd_info__succeeded = (transform_hlds__pd_info__CastX_9 == transform_hlds__pd_info__CastY_10);
    if (transform_hlds__pd_info__succeeded)
      transform_hlds__pd_info__succeeded = MR_TRUE;
    else
    {
      MR_Word transform_hlds__pd_info__ArgX1_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__1_1, (MR_Integer) 0)));
      MR_Word transform_hlds__pd_info__ArgY1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__2_2, (MR_Integer) 0)));
      MR_Word transform_hlds__pd_info__ArgX2_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__1_1, (MR_Integer) 1)));
      MR_Word transform_hlds__pd_info__ArgY2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__2_2, (MR_Integer) 1)));
      MR_Word transform_hlds__pd_info__ArgX3_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__1_1, (MR_Integer) 2)));
      MR_Word transform_hlds__pd_info__ArgY3_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__2_2, (MR_Integer) 2)));

      transform_hlds__pd_info__succeeded = mercury__tree234____Unify____tree234_2_0(transform_hlds__pd_info__TypeInfo_for_T_11, (MR_Word) &transform_hlds__pd_info_scalar_common_1[2], transform_hlds__pd_info__ArgX1_3, transform_hlds__pd_info__ArgY1_4);
      if (transform_hlds__pd_info__succeeded)
      {
        transform_hlds__pd_info__succeeded = mercury__set_ordlist____Unify____set_ordlist_1_0(transform_hlds__pd_info__TypeInfo_for_T_11, transform_hlds__pd_info__ArgX2_5, transform_hlds__pd_info__ArgY2_6);
        if (transform_hlds__pd_info__succeeded)
          transform_hlds__pd_info__succeeded = mercury__set_ordlist____Unify____set_ordlist_1_0(transform_hlds__pd_info__TypeInfo_for_T_11, transform_hlds__pd_info__ArgX3_7, transform_hlds__pd_info__ArgY3_8);
      }
    }
    return transform_hlds__pd_info__succeeded;
  }
}

void MR_CALL 
transform_hlds__pd_info____Compare____pd_arg_info_0_0(
  MR_Word * transform_hlds__pd_info__HeadVar__1_1,
  MR_Word transform_hlds__pd_info__HeadVar__2_2,
  MR_Word transform_hlds__pd_info__HeadVar__3_3)
{
  {
    MR_Word transform_hlds__pd_info__Cast_HeadVar1_4 = transform_hlds__pd_info__HeadVar__2_2;
    MR_Word transform_hlds__pd_info__Cast_HeadVar2_5 = transform_hlds__pd_info__HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__pd_info_scalar_common_2[4], transform_hlds__pd_info__HeadVar__1_1, ((MR_Box) (transform_hlds__pd_info__Cast_HeadVar1_4)), ((MR_Box) (transform_hlds__pd_info__Cast_HeadVar2_5)));
  }
}

MR_bool MR_CALL 
transform_hlds__pd_info____Unify____pd_arg_info_0_0(
  MR_Word transform_hlds__pd_info__HeadVar__1_1,
  MR_Word transform_hlds__pd_info__HeadVar__2_2)
{
  {
    MR_bool transform_hlds__pd_info__succeeded;
    MR_Word transform_hlds__pd_info__Cast_HeadVar1_3 = transform_hlds__pd_info__HeadVar__1_1;
    MR_Word transform_hlds__pd_info__Cast_HeadVar2_4 = transform_hlds__pd_info__HeadVar__2_2;

    transform_hlds__pd_info__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__pd_info_scalar_common_2[4], ((MR_Box) (transform_hlds__pd_info__Cast_HeadVar1_3)), ((MR_Box) (transform_hlds__pd_info__Cast_HeadVar2_4)));
    return transform_hlds__pd_info__succeeded;
  }
}

void MR_CALL 
transform_hlds__pd_info____Compare____maybe_version_0_0(
  MR_Word * transform_hlds__pd_info__HeadVar__1_1,
  MR_Word transform_hlds__pd_info__HeadVar__2_2,
  MR_Word transform_hlds__pd_info__HeadVar__3_3)
{
  {
    MR_bool transform_hlds__pd_info__succeeded;
    MR_Integer transform_hlds__pd_info__CastX_28 = (MR_Integer) transform_hlds__pd_info__HeadVar__2_2;
    MR_Integer transform_hlds__pd_info__CastY_29 = (MR_Integer) transform_hlds__pd_info__HeadVar__3_3;

    transform_hlds__pd_info__succeeded = (transform_hlds__pd_info__CastX_28 == transform_hlds__pd_info__CastY_29);
    if (transform_hlds__pd_info__succeeded)
      *transform_hlds__pd_info__HeadVar__1_1 = (MR_Integer) 0;
    else
    if ((transform_hlds__pd_info__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      if ((transform_hlds__pd_info__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        *transform_hlds__pd_info__HeadVar__1_1 = (MR_Integer) 0;
      else
        *transform_hlds__pd_info__HeadVar__1_1 = (MR_Integer) 1;
    else
    {
      MR_Word transform_hlds__pd_info__Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_info__HeadVar__2_2, (MR_Integer) 4)));
      MR_Word transform_hlds__pd_info__Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_info__HeadVar__2_2, (MR_Integer) 3)));
      MR_Word transform_hlds__pd_info__Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_info__HeadVar__2_2, (MR_Integer) 2)));
      MR_Word transform_hlds__pd_info__Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_info__HeadVar__2_2, (MR_Integer) 1)));
      MR_Word transform_hlds__pd_info__Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_info__HeadVar__2_2, (MR_Integer) 0)));

      if ((transform_hlds__pd_info__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        *transform_hlds__pd_info__HeadVar__1_1 = (MR_Integer) 2;
      else
      {
        MR_Word transform_hlds__pd_info__ArgY1_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_info__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word transform_hlds__pd_info__ArgY2_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_info__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word transform_hlds__pd_info__ArgY3_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_info__HeadVar__3_3, (MR_Integer) 2)));
        MR_Word transform_hlds__pd_info__ArgY4_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_info__HeadVar__3_3, (MR_Integer) 3)));
        MR_Word transform_hlds__pd_info__ArgY5_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_info__HeadVar__3_3, (MR_Integer) 4)));
        MR_Word transform_hlds__pd_info__Var_24;
        MR_Integer transform_hlds__pd_info__Var_40 = (MR_Integer) transform_hlds__pd_info__Var_39;
        MR_Integer transform_hlds__pd_info__Var_41 = (MR_Integer) transform_hlds__pd_info__ArgY1_15;

        mercury__private_builtin__builtin_compare_int_3_p_0(&transform_hlds__pd_info__Var_24, transform_hlds__pd_info__Var_40, transform_hlds__pd_info__Var_41);
        transform_hlds__pd_info__succeeded = (transform_hlds__pd_info__Var_24 == (MR_Integer) 0);
        transform_hlds__pd_info__succeeded = !(transform_hlds__pd_info__succeeded);
        if (transform_hlds__pd_info__succeeded)
          *transform_hlds__pd_info__HeadVar__1_1 = transform_hlds__pd_info__Var_24;
        else
        {
          MR_Word transform_hlds__pd_info__Var_25;

          hlds__hlds_pred____Compare____pred_proc_id_0_0(&transform_hlds__pd_info__Var_25, transform_hlds__pd_info__Var_38, transform_hlds__pd_info__ArgY2_17);
          transform_hlds__pd_info__succeeded = (transform_hlds__pd_info__Var_25 == (MR_Integer) 0);
          transform_hlds__pd_info__succeeded = !(transform_hlds__pd_info__succeeded);
          if (transform_hlds__pd_info__succeeded)
            *transform_hlds__pd_info__HeadVar__1_1 = transform_hlds__pd_info__Var_25;
          else
          {
            MR_Word transform_hlds__pd_info__Var_26;

            transform_hlds__pd_info____Compare____version_info_0_0(&transform_hlds__pd_info__Var_26, transform_hlds__pd_info__Var_37, transform_hlds__pd_info__ArgY3_19);
            transform_hlds__pd_info__succeeded = (transform_hlds__pd_info__Var_26 == (MR_Integer) 0);
            transform_hlds__pd_info__succeeded = !(transform_hlds__pd_info__succeeded);
            if (transform_hlds__pd_info__succeeded)
              *transform_hlds__pd_info__HeadVar__1_1 = transform_hlds__pd_info__Var_26;
            else
            {
              MR_Word transform_hlds__pd_info__Var_27;

              mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__pd_info_scalar_common_2[2], &transform_hlds__pd_info__Var_27, ((MR_Box) (transform_hlds__pd_info__Var_36)), ((MR_Box) (transform_hlds__pd_info__ArgY4_21)));
              transform_hlds__pd_info__succeeded = (transform_hlds__pd_info__Var_27 == (MR_Integer) 0);
              transform_hlds__pd_info__succeeded = !(transform_hlds__pd_info__succeeded);
              if (transform_hlds__pd_info__succeeded)
                *transform_hlds__pd_info__HeadVar__1_1 = transform_hlds__pd_info__Var_27;
              else
              {
                mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__pd_info_scalar_common_2[3], transform_hlds__pd_info__HeadVar__1_1, ((MR_Box) (transform_hlds__pd_info__Var_35)), ((MR_Box) (transform_hlds__pd_info__ArgY5_23)));
              }
            }
          }
        }
      }
    }
  }
}

void MR_CALL 
transform_hlds__pd_info____Compare____version_info_0_0(
  MR_Word * transform_hlds__pd_info__HeadVar__1_1,
  MR_Word transform_hlds__pd_info__HeadVar__2_2,
  MR_Word transform_hlds__pd_info__HeadVar__3_3)
{
  {
    MR_bool transform_hlds__pd_info__succeeded;
    MR_Integer transform_hlds__pd_info__CastX_30 = (MR_Integer) transform_hlds__pd_info__HeadVar__2_2;
    MR_Integer transform_hlds__pd_info__CastY_31 = (MR_Integer) transform_hlds__pd_info__HeadVar__3_3;

    transform_hlds__pd_info__succeeded = (transform_hlds__pd_info__CastX_30 == transform_hlds__pd_info__CastY_31);
    if (transform_hlds__pd_info__succeeded)
      *transform_hlds__pd_info__HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Word transform_hlds__pd_info__ArgX1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__2_2, (MR_Integer) 0)));
      MR_Word transform_hlds__pd_info__ArgY1_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__3_3, (MR_Integer) 0)));
      MR_Word transform_hlds__pd_info__ArgX2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__2_2, (MR_Integer) 1)));
      MR_Word transform_hlds__pd_info__ArgY2_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__3_3, (MR_Integer) 1)));
      MR_Word transform_hlds__pd_info__ArgX3_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__2_2, (MR_Integer) 2)));
      MR_Word transform_hlds__pd_info__ArgY3_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__3_3, (MR_Integer) 2)));
      MR_Word transform_hlds__pd_info__ArgX4_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__2_2, (MR_Integer) 3)));
      MR_Word transform_hlds__pd_info__ArgY4_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__3_3, (MR_Integer) 3)));
      MR_Word transform_hlds__pd_info__ArgX5_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__2_2, (MR_Integer) 4)));
      MR_Word transform_hlds__pd_info__ArgY5_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__3_3, (MR_Integer) 4)));
      MR_Integer transform_hlds__pd_info__ArgX6_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__2_2, (MR_Integer) 5)));
      MR_Integer transform_hlds__pd_info__ArgY6_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__3_3, (MR_Integer) 5)));
      MR_Integer transform_hlds__pd_info__ArgX7_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__2_2, (MR_Integer) 6)));
      MR_Integer transform_hlds__pd_info__ArgY7_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__3_3, (MR_Integer) 6)));
      MR_Word transform_hlds__pd_info__ArgX8_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__2_2, (MR_Integer) 7)));
      MR_Word transform_hlds__pd_info__ArgY8_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__3_3, (MR_Integer) 7)));
      MR_Word transform_hlds__pd_info__ArgX9_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__2_2, (MR_Integer) 8)));
      MR_Word transform_hlds__pd_info__ArgY9_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__3_3, (MR_Integer) 8)));
      MR_Word transform_hlds__pd_info__Var_22;

      hlds__hlds_goal____Compare____hlds_goal_0_0(&transform_hlds__pd_info__Var_22, transform_hlds__pd_info__ArgX1_4, transform_hlds__pd_info__ArgY1_5);
      transform_hlds__pd_info__succeeded = (transform_hlds__pd_info__Var_22 == (MR_Integer) 0);
      transform_hlds__pd_info__succeeded = !(transform_hlds__pd_info__succeeded);
      if (transform_hlds__pd_info__succeeded)
        *transform_hlds__pd_info__HeadVar__1_1 = transform_hlds__pd_info__Var_22;
      else
      {
        MR_Word transform_hlds__pd_info__Var_23;

        mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__pd_info_scalar_common_1[0], &transform_hlds__pd_info__Var_23, ((MR_Box) (transform_hlds__pd_info__ArgX2_6)), ((MR_Box) (transform_hlds__pd_info__ArgY2_7)));
        transform_hlds__pd_info__succeeded = (transform_hlds__pd_info__Var_23 == (MR_Integer) 0);
        transform_hlds__pd_info__succeeded = !(transform_hlds__pd_info__succeeded);
        if (transform_hlds__pd_info__succeeded)
          *transform_hlds__pd_info__HeadVar__1_1 = transform_hlds__pd_info__Var_23;
        else
        {
          MR_Word transform_hlds__pd_info__Var_24;

          mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__pd_info_scalar_common_1[10], &transform_hlds__pd_info__Var_24, ((MR_Box) (transform_hlds__pd_info__ArgX3_8)), ((MR_Box) (transform_hlds__pd_info__ArgY3_9)));
          transform_hlds__pd_info__succeeded = (transform_hlds__pd_info__Var_24 == (MR_Integer) 0);
          transform_hlds__pd_info__succeeded = !(transform_hlds__pd_info__succeeded);
          if (transform_hlds__pd_info__succeeded)
            *transform_hlds__pd_info__HeadVar__1_1 = transform_hlds__pd_info__Var_24;
          else
          {
            MR_Word transform_hlds__pd_info__Var_25;

            mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__pd_info_scalar_common_1[11], &transform_hlds__pd_info__Var_25, ((MR_Box) (transform_hlds__pd_info__ArgX4_10)), ((MR_Box) (transform_hlds__pd_info__ArgY4_11)));
            transform_hlds__pd_info__succeeded = (transform_hlds__pd_info__Var_25 == (MR_Integer) 0);
            transform_hlds__pd_info__succeeded = !(transform_hlds__pd_info__succeeded);
            if (transform_hlds__pd_info__succeeded)
              *transform_hlds__pd_info__HeadVar__1_1 = transform_hlds__pd_info__Var_25;
            else
            {
              MR_Word transform_hlds__pd_info__Var_26;

              hlds__instmap____Compare____instmap_0_0(&transform_hlds__pd_info__Var_26, transform_hlds__pd_info__ArgX5_12, transform_hlds__pd_info__ArgY5_13);
              transform_hlds__pd_info__succeeded = (transform_hlds__pd_info__Var_26 == (MR_Integer) 0);
              transform_hlds__pd_info__succeeded = !(transform_hlds__pd_info__succeeded);
              if (transform_hlds__pd_info__succeeded)
                *transform_hlds__pd_info__HeadVar__1_1 = transform_hlds__pd_info__Var_26;
              else
              {
                MR_Word transform_hlds__pd_info__Var_27;

                mercury__private_builtin__builtin_compare_int_3_p_0(&transform_hlds__pd_info__Var_27, transform_hlds__pd_info__ArgX6_14, transform_hlds__pd_info__ArgY6_15);
                transform_hlds__pd_info__succeeded = (transform_hlds__pd_info__Var_27 == (MR_Integer) 0);
                transform_hlds__pd_info__succeeded = !(transform_hlds__pd_info__succeeded);
                if (transform_hlds__pd_info__succeeded)
                  *transform_hlds__pd_info__HeadVar__1_1 = transform_hlds__pd_info__Var_27;
                else
                {
                  MR_Word transform_hlds__pd_info__Var_28;

                  mercury__private_builtin__builtin_compare_int_3_p_0(&transform_hlds__pd_info__Var_28, transform_hlds__pd_info__ArgX7_16, transform_hlds__pd_info__ArgY7_17);
                  transform_hlds__pd_info__succeeded = (transform_hlds__pd_info__Var_28 == (MR_Integer) 0);
                  transform_hlds__pd_info__succeeded = !(transform_hlds__pd_info__succeeded);
                  if (transform_hlds__pd_info__succeeded)
                    *transform_hlds__pd_info__HeadVar__1_1 = transform_hlds__pd_info__Var_28;
                  else
                  {
                    MR_Word transform_hlds__pd_info__Var_29;

                    mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__pd_info_scalar_common_1[6], &transform_hlds__pd_info__Var_29, ((MR_Box) (transform_hlds__pd_info__ArgX8_18)), ((MR_Box) (transform_hlds__pd_info__ArgY8_19)));
                    transform_hlds__pd_info__succeeded = (transform_hlds__pd_info__Var_29 == (MR_Integer) 0);
                    transform_hlds__pd_info__succeeded = !(transform_hlds__pd_info__succeeded);
                    if (transform_hlds__pd_info__succeeded)
                      *transform_hlds__pd_info__HeadVar__1_1 = transform_hlds__pd_info__Var_29;
                    else
                    {
                      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__pd_info_scalar_common_1[12], transform_hlds__pd_info__HeadVar__1_1, ((MR_Box) (transform_hlds__pd_info__ArgX9_20)), ((MR_Box) (transform_hlds__pd_info__ArgY9_21)));
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
transform_hlds__pd_info____Unify____maybe_version_0_0(
  MR_Word transform_hlds__pd_info__HeadVar__1_1,
  MR_Word transform_hlds__pd_info__HeadVar__2_2)
{
  {
    MR_bool transform_hlds__pd_info__succeeded;
    MR_Integer transform_hlds__pd_info__CastX_15 = (MR_Integer) transform_hlds__pd_info__HeadVar__1_1;
    MR_Integer transform_hlds__pd_info__CastY_16 = (MR_Integer) transform_hlds__pd_info__HeadVar__2_2;

    transform_hlds__pd_info__succeeded = (transform_hlds__pd_info__CastX_15 == transform_hlds__pd_info__CastY_16);
    if (transform_hlds__pd_info__succeeded)
      transform_hlds__pd_info__succeeded = MR_TRUE;
    else
    if ((transform_hlds__pd_info__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      MR_Integer transform_hlds__pd_info__CastX_3 = (MR_Integer) transform_hlds__pd_info__HeadVar__1_1;
      MR_Integer transform_hlds__pd_info__CastY_4 = (MR_Integer) transform_hlds__pd_info__HeadVar__2_2;

      transform_hlds__pd_info__succeeded = (transform_hlds__pd_info__CastY_4 == transform_hlds__pd_info__CastX_3);
    }
    else
    {
      MR_Word transform_hlds__pd_info__TypeInfo_18_18;
      MR_Word transform_hlds__pd_info__TypeInfo_19_19;
      MR_Word transform_hlds__pd_info__ArgX1_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_info__HeadVar__1_1, (MR_Integer) 0)));
      MR_Word transform_hlds__pd_info__ArgY1_6;
      MR_Word transform_hlds__pd_info__ArgX2_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_info__HeadVar__1_1, (MR_Integer) 1)));
      MR_Word transform_hlds__pd_info__ArgY2_8;
      MR_Word transform_hlds__pd_info__ArgX3_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_info__HeadVar__1_1, (MR_Integer) 2)));
      MR_Word transform_hlds__pd_info__ArgY3_10;
      MR_Word transform_hlds__pd_info__ArgX4_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_info__HeadVar__1_1, (MR_Integer) 3)));
      MR_Word transform_hlds__pd_info__ArgY4_12;
      MR_Word transform_hlds__pd_info__ArgX5_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_info__HeadVar__1_1, (MR_Integer) 4)));
      MR_Word transform_hlds__pd_info__ArgY5_14;

      transform_hlds__pd_info__succeeded = ((MR_tag((MR_Word) transform_hlds__pd_info__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
      if (transform_hlds__pd_info__succeeded)
      {
        transform_hlds__pd_info__ArgY1_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_info__HeadVar__2_2, (MR_Integer) 0)));
        transform_hlds__pd_info__ArgY2_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_info__HeadVar__2_2, (MR_Integer) 1)));
        transform_hlds__pd_info__ArgY3_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_info__HeadVar__2_2, (MR_Integer) 2)));
        transform_hlds__pd_info__ArgY4_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_info__HeadVar__2_2, (MR_Integer) 3)));
        transform_hlds__pd_info__ArgY5_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_info__HeadVar__2_2, (MR_Integer) 4)));
        transform_hlds__pd_info__succeeded = (transform_hlds__pd_info__ArgX1_5 == transform_hlds__pd_info__ArgY1_6);
        if (transform_hlds__pd_info__succeeded)
        {
          transform_hlds__pd_info__succeeded = hlds__hlds_pred____Unify____pred_proc_id_0_0(transform_hlds__pd_info__ArgX2_7, transform_hlds__pd_info__ArgY2_8);
          if (transform_hlds__pd_info__succeeded)
          {
            transform_hlds__pd_info__succeeded = transform_hlds__pd_info____Unify____version_info_0_0(transform_hlds__pd_info__ArgX3_9, transform_hlds__pd_info__ArgY3_10);
            if (transform_hlds__pd_info__succeeded)
            {
              transform_hlds__pd_info__TypeInfo_18_18 = (MR_Word) &transform_hlds__pd_info_scalar_common_2[2];
              transform_hlds__pd_info__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__pd_info__TypeInfo_18_18, ((MR_Box) (transform_hlds__pd_info__ArgX4_11)), ((MR_Box) (transform_hlds__pd_info__ArgY4_12)));
              if (transform_hlds__pd_info__succeeded)
              {
                transform_hlds__pd_info__TypeInfo_19_19 = (MR_Word) &transform_hlds__pd_info_scalar_common_2[3];
                transform_hlds__pd_info__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__pd_info__TypeInfo_19_19, ((MR_Box) (transform_hlds__pd_info__ArgX5_13)), ((MR_Box) (transform_hlds__pd_info__ArgY5_14)));
              }
            }
          }
        }
      }
    }
    return transform_hlds__pd_info__succeeded;
  }
}

MR_bool MR_CALL 
transform_hlds__pd_info____Unify____version_info_0_0(
  MR_Word transform_hlds__pd_info__HeadVar__1_1,
  MR_Word transform_hlds__pd_info__HeadVar__2_2)
{
  {
    MR_bool transform_hlds__pd_info__succeeded;
    MR_Integer transform_hlds__pd_info__CastX_21 = (MR_Integer) transform_hlds__pd_info__HeadVar__1_1;
    MR_Integer transform_hlds__pd_info__CastY_22 = (MR_Integer) transform_hlds__pd_info__HeadVar__2_2;

    transform_hlds__pd_info__succeeded = (transform_hlds__pd_info__CastX_21 == transform_hlds__pd_info__CastY_22);
    if (transform_hlds__pd_info__succeeded)
      transform_hlds__pd_info__succeeded = MR_TRUE;
    else
    {
      MR_Word transform_hlds__pd_info__TypeInfo_24_24;
      MR_Word transform_hlds__pd_info__TypeInfo_25_25;
      MR_Word transform_hlds__pd_info__TypeInfo_26_26;
      MR_Word transform_hlds__pd_info__TypeInfo_28_28;
      MR_Word transform_hlds__pd_info__TypeInfo_29_29;
      MR_Word transform_hlds__pd_info__ArgX1_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__1_1, (MR_Integer) 0)));
      MR_Word transform_hlds__pd_info__ArgY1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__2_2, (MR_Integer) 0)));
      MR_Word transform_hlds__pd_info__ArgX2_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__1_1, (MR_Integer) 1)));
      MR_Word transform_hlds__pd_info__ArgY2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__2_2, (MR_Integer) 1)));
      MR_Word transform_hlds__pd_info__ArgX3_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__1_1, (MR_Integer) 2)));
      MR_Word transform_hlds__pd_info__ArgY3_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__2_2, (MR_Integer) 2)));
      MR_Word transform_hlds__pd_info__ArgX4_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__1_1, (MR_Integer) 3)));
      MR_Word transform_hlds__pd_info__ArgY4_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__2_2, (MR_Integer) 3)));
      MR_Word transform_hlds__pd_info__ArgX5_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__1_1, (MR_Integer) 4)));
      MR_Word transform_hlds__pd_info__ArgY5_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__2_2, (MR_Integer) 4)));
      MR_Integer transform_hlds__pd_info__ArgX6_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__1_1, (MR_Integer) 5)));
      MR_Integer transform_hlds__pd_info__ArgY6_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__2_2, (MR_Integer) 5)));
      MR_Integer transform_hlds__pd_info__ArgX7_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__1_1, (MR_Integer) 6)));
      MR_Integer transform_hlds__pd_info__ArgY7_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__2_2, (MR_Integer) 6)));
      MR_Word transform_hlds__pd_info__ArgX8_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__1_1, (MR_Integer) 7)));
      MR_Word transform_hlds__pd_info__ArgY8_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__2_2, (MR_Integer) 7)));
      MR_Word transform_hlds__pd_info__ArgX9_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__1_1, (MR_Integer) 8)));
      MR_Word transform_hlds__pd_info__ArgY9_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__2_2, (MR_Integer) 8)));

      transform_hlds__pd_info__succeeded = hlds__hlds_goal____Unify____hlds_goal_0_0(transform_hlds__pd_info__ArgX1_3, transform_hlds__pd_info__ArgY1_4);
      if (transform_hlds__pd_info__succeeded)
      {
        transform_hlds__pd_info__TypeInfo_24_24 = (MR_Word) &transform_hlds__pd_info_scalar_common_1[0];
        transform_hlds__pd_info__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__pd_info__TypeInfo_24_24, ((MR_Box) (transform_hlds__pd_info__ArgX2_5)), ((MR_Box) (transform_hlds__pd_info__ArgY2_6)));
        if (transform_hlds__pd_info__succeeded)
        {
          transform_hlds__pd_info__TypeInfo_25_25 = (MR_Word) &transform_hlds__pd_info_scalar_common_1[10];
          transform_hlds__pd_info__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__pd_info__TypeInfo_25_25, ((MR_Box) (transform_hlds__pd_info__ArgX3_7)), ((MR_Box) (transform_hlds__pd_info__ArgY3_8)));
          if (transform_hlds__pd_info__succeeded)
          {
            transform_hlds__pd_info__TypeInfo_26_26 = (MR_Word) &transform_hlds__pd_info_scalar_common_1[11];
            transform_hlds__pd_info__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__pd_info__TypeInfo_26_26, ((MR_Box) (transform_hlds__pd_info__ArgX4_9)), ((MR_Box) (transform_hlds__pd_info__ArgY4_10)));
            if (transform_hlds__pd_info__succeeded)
            {
              transform_hlds__pd_info__succeeded = hlds__instmap____Unify____instmap_0_0(transform_hlds__pd_info__ArgX5_11, transform_hlds__pd_info__ArgY5_12);
              if (transform_hlds__pd_info__succeeded)
              {
                transform_hlds__pd_info__succeeded = (transform_hlds__pd_info__ArgX6_13 == transform_hlds__pd_info__ArgY6_14);
                if (transform_hlds__pd_info__succeeded)
                {
                  transform_hlds__pd_info__succeeded = (transform_hlds__pd_info__ArgX7_15 == transform_hlds__pd_info__ArgY7_16);
                  if (transform_hlds__pd_info__succeeded)
                  {
                    transform_hlds__pd_info__TypeInfo_28_28 = (MR_Word) &transform_hlds__pd_info_scalar_common_1[6];
                    transform_hlds__pd_info__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__pd_info__TypeInfo_28_28, ((MR_Box) (transform_hlds__pd_info__ArgX8_17)), ((MR_Box) (transform_hlds__pd_info__ArgY8_18)));
                    if (transform_hlds__pd_info__succeeded)
                    {
                      transform_hlds__pd_info__TypeInfo_29_29 = (MR_Word) &transform_hlds__pd_info_scalar_common_1[12];
                      transform_hlds__pd_info__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__pd_info__TypeInfo_29_29, ((MR_Box) (transform_hlds__pd_info__ArgX9_19)), ((MR_Box) (transform_hlds__pd_info__ArgY9_20)));
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    return transform_hlds__pd_info__succeeded;
  }
}

void MR_CALL 
transform_hlds__pd_info____Compare____goal_version_index_0_0(
  MR_Word * transform_hlds__pd_info__HeadVar__1_1,
  MR_Word transform_hlds__pd_info__HeadVar__2_2,
  MR_Word transform_hlds__pd_info__HeadVar__3_3)
{
  {
    MR_Word transform_hlds__pd_info__Cast_HeadVar1_4 = transform_hlds__pd_info__HeadVar__2_2;
    MR_Word transform_hlds__pd_info__Cast_HeadVar2_5 = transform_hlds__pd_info__HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__pd_info_scalar_common_2[1], transform_hlds__pd_info__HeadVar__1_1, ((MR_Box) (transform_hlds__pd_info__Cast_HeadVar1_4)), ((MR_Box) (transform_hlds__pd_info__Cast_HeadVar2_5)));
  }
}

MR_bool MR_CALL 
transform_hlds__pd_info____Unify____goal_version_index_0_0(
  MR_Word transform_hlds__pd_info__HeadVar__1_1,
  MR_Word transform_hlds__pd_info__HeadVar__2_2)
{
  {
    MR_bool transform_hlds__pd_info__succeeded;
    MR_Word transform_hlds__pd_info__Cast_HeadVar1_3 = transform_hlds__pd_info__HeadVar__1_1;
    MR_Word transform_hlds__pd_info__Cast_HeadVar2_4 = transform_hlds__pd_info__HeadVar__2_2;

    transform_hlds__pd_info__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__pd_info_scalar_common_2[1], ((MR_Box) (transform_hlds__pd_info__Cast_HeadVar1_3)), ((MR_Box) (transform_hlds__pd_info__Cast_HeadVar2_4)));
    return transform_hlds__pd_info__succeeded;
  }
}

void MR_CALL 
transform_hlds__pd_info____Compare____branch_info_map_1_0(
  MR_Word transform_hlds__pd_info__TypeInfo_for_T_6,
  MR_Word * transform_hlds__pd_info__HeadVar__1_1,
  MR_Word transform_hlds__pd_info__HeadVar__2_2,
  MR_Word transform_hlds__pd_info__HeadVar__3_3)
{
  {
    MR_Word transform_hlds__pd_info__Cast_HeadVar1_4 = transform_hlds__pd_info__HeadVar__2_2;
    MR_Word transform_hlds__pd_info__Cast_HeadVar2_5 = transform_hlds__pd_info__HeadVar__3_3;

    mercury__tree234____Compare____tree234_2_0(transform_hlds__pd_info__TypeInfo_for_T_6, (MR_Word) &transform_hlds__pd_info_scalar_common_1[2], transform_hlds__pd_info__HeadVar__1_1, transform_hlds__pd_info__Cast_HeadVar1_4, transform_hlds__pd_info__Cast_HeadVar2_5);
  }
}

MR_bool MR_CALL 
transform_hlds__pd_info____Unify____branch_info_map_1_0(
  MR_Word transform_hlds__pd_info__TypeInfo_for_T_5,
  MR_Word transform_hlds__pd_info__HeadVar__1_1,
  MR_Word transform_hlds__pd_info__HeadVar__2_2)
{
  {
    MR_bool transform_hlds__pd_info__succeeded;
    MR_Word transform_hlds__pd_info__Cast_HeadVar1_3 = transform_hlds__pd_info__HeadVar__1_1;
    MR_Word transform_hlds__pd_info__Cast_HeadVar2_4 = transform_hlds__pd_info__HeadVar__2_2;

    transform_hlds__pd_info__succeeded = mercury__tree234____Unify____tree234_2_0(transform_hlds__pd_info__TypeInfo_for_T_5, (MR_Word) &transform_hlds__pd_info_scalar_common_1[2], transform_hlds__pd_info__Cast_HeadVar1_3, transform_hlds__pd_info__Cast_HeadVar2_4);
    return transform_hlds__pd_info__succeeded;
  }
}

void MR_CALL 
transform_hlds__pd_info__invalidate_version_3_p_0(
  MR_Word transform_hlds__pd_info__PredProcId_4,
  MR_Word transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_15,
  MR_Word * transform_hlds__pd_info__STATE_VARIABLE_PDInfo_16)
{
  {
    MR_bool transform_hlds__pd_info__succeeded;
    MR_Word transform_hlds__pd_info__TypeCtorInfo_28_28 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
    MR_Word transform_hlds__pd_info__Versions0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_15, (MR_Integer) 3)));
    MR_Word transform_hlds__pd_info__Version_7;
    MR_Word transform_hlds__pd_info__Goal_8;
    MR_Word transform_hlds__pd_info__Calls_9;
    MR_Word transform_hlds__pd_info__STATE_VARIABLE_PDInfo_18_18;
    MR_Word transform_hlds__pd_info__Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_15, (MR_Integer) 0)));
    MR_Word transform_hlds__pd_info__Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_15, (MR_Integer) 1)));
    MR_Word transform_hlds__pd_info__Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_15, (MR_Integer) 2)));
    MR_Word transform_hlds__pd_info__Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_15, (MR_Integer) 4)));
    MR_Word transform_hlds__pd_info__Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_15, (MR_Integer) 5)));
    MR_Word transform_hlds__pd_info__Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_15, (MR_Integer) 6)));
    MR_Word transform_hlds__pd_info__Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_15, (MR_Integer) 7)));
    MR_Integer transform_hlds__pd_info__Var_39 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_15, (MR_Integer) 8)));
    MR_Word transform_hlds__pd_info__Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_15, (MR_Integer) 9)));
    MR_Word transform_hlds__pd_info__Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_15, (MR_Integer) 10)));
    MR_Box transform_hlds__pd_info__conv0_Version_7;
    MR_Word transform_hlds__pd_info__Var_20;
    MR_Word transform_hlds__pd_info__Var_21;
    MR_Word transform_hlds__pd_info__Var_22;
    MR_Word transform_hlds__pd_info__Var_23;
    MR_Integer transform_hlds__pd_info__Var_24;
    MR_Integer transform_hlds__pd_info__Var_25;
    MR_Word transform_hlds__pd_info__Var_26;
    MR_Word transform_hlds__pd_info__Var_27;
    MR_Word transform_hlds__pd_info__FirstCall_10;
    MR_Word transform_hlds__pd_info__LastCall_12;
    MR_Word transform_hlds__pd_info__Var_11;
    MR_Box transform_hlds__pd_info__conv1_LastCall_12;

    mercury__map__lookup_3_p_0(transform_hlds__pd_info__TypeCtorInfo_28_28, (MR_Word) &transform_hlds__pd_info__transform_hlds__pd_info__type_ctor_info_version_info_0, transform_hlds__pd_info__Versions0_6, ((MR_Box) (transform_hlds__pd_info__PredProcId_4)), &transform_hlds__pd_info__conv0_Version_7);
    transform_hlds__pd_info__Version_7 = ((MR_Word) transform_hlds__pd_info__conv0_Version_7);
    transform_hlds__pd_info__Goal_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__Version_7, (MR_Integer) 0)));
    transform_hlds__pd_info__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__Version_7, (MR_Integer) 1)));
    transform_hlds__pd_info__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__Version_7, (MR_Integer) 2)));
    transform_hlds__pd_info__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__Version_7, (MR_Integer) 3)));
    transform_hlds__pd_info__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__Version_7, (MR_Integer) 4)));
    transform_hlds__pd_info__Var_24 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__Version_7, (MR_Integer) 5)));
    transform_hlds__pd_info__Var_25 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__Version_7, (MR_Integer) 6)));
    transform_hlds__pd_info__Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__Version_7, (MR_Integer) 7)));
    transform_hlds__pd_info__Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__Version_7, (MR_Integer) 8)));
    transform_hlds__pd_util__goal_get_calls_2_p_0(transform_hlds__pd_info__Goal_8, &transform_hlds__pd_info__Calls_9);
    transform_hlds__pd_info__succeeded = ((MR_tag((MR_Word) transform_hlds__pd_info__Calls_9)) == (MR_mktag((MR_Integer) 1)));
    if (transform_hlds__pd_info__succeeded)
    {
      transform_hlds__pd_info__FirstCall_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_info__Calls_9, (MR_Integer) 0)));
      transform_hlds__pd_info__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_info__Calls_9, (MR_Integer) 1)));
      transform_hlds__pd_info__succeeded = mercury__list__last_2_p_0(transform_hlds__pd_info__TypeCtorInfo_28_28, transform_hlds__pd_info__Calls_9, &transform_hlds__pd_info__conv1_LastCall_12);
      if (transform_hlds__pd_info__succeeded)
      {
        transform_hlds__pd_info__LastCall_12 = ((MR_Word) transform_hlds__pd_info__conv1_LastCall_12);
        transform_hlds__pd_info__succeeded = MR_TRUE;
      }
    }
    if (transform_hlds__pd_info__succeeded)
    {
      MR_Word transform_hlds__pd_info__Useless0_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_15, (MR_Integer) 10)));
      MR_Word transform_hlds__pd_info__Useless_14;
      MR_Word transform_hlds__pd_info__Var_17;
      MR_Word transform_hlds__pd_info__Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_15, (MR_Integer) 0)));
      MR_Word transform_hlds__pd_info__Var_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_15, (MR_Integer) 1)));
      MR_Word transform_hlds__pd_info__Var_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_15, (MR_Integer) 2)));
      MR_Word transform_hlds__pd_info__Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_15, (MR_Integer) 3)));
      MR_Word transform_hlds__pd_info__Var_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_15, (MR_Integer) 4)));
      MR_Word transform_hlds__pd_info__Var_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_15, (MR_Integer) 5)));
      MR_Word transform_hlds__pd_info__Var_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_15, (MR_Integer) 6)));
      MR_Word transform_hlds__pd_info__Var_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_15, (MR_Integer) 7)));
      MR_Integer transform_hlds__pd_info__Var_51 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_15, (MR_Integer) 8)));
      MR_Word transform_hlds__pd_info__Var_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_15, (MR_Integer) 9)));
      MR_Word transform_hlds__pd_info__Var_58;
      MR_Word transform_hlds__pd_info__Var_59;
      MR_Word transform_hlds__pd_info__Var_60;
      MR_Word transform_hlds__pd_info__Var_61;
      MR_Word transform_hlds__pd_info__Var_62;
      MR_Word transform_hlds__pd_info__Var_63;
      MR_Word transform_hlds__pd_info__Var_64;
      MR_Word transform_hlds__pd_info__Var_65;
      MR_Integer transform_hlds__pd_info__Var_66;
      MR_Word transform_hlds__pd_info__Var_67;
      MR_Word transform_hlds__pd_info__Var_68;

      {
        transform_hlds__pd_info__Var_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), transform_hlds__pd_info__Var_17, 0) = ((MR_Box) (transform_hlds__pd_info__FirstCall_10));
        MR_hl_field(MR_mktag(0), transform_hlds__pd_info__Var_17, 1) = ((MR_Box) (transform_hlds__pd_info__LastCall_12));
      }
      mercury__set__insert_3_p_0((MR_Word) &transform_hlds__pd_info_scalar_common_2[0], ((MR_Box) (transform_hlds__pd_info__Var_17)), transform_hlds__pd_info__Useless0_13, &transform_hlds__pd_info__Useless_14);
      transform_hlds__pd_info__Var_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_15, (MR_Integer) 0)));
      transform_hlds__pd_info__Var_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_15, (MR_Integer) 1)));
      transform_hlds__pd_info__Var_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_15, (MR_Integer) 2)));
      transform_hlds__pd_info__Var_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_15, (MR_Integer) 3)));
      transform_hlds__pd_info__Var_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_15, (MR_Integer) 4)));
      transform_hlds__pd_info__Var_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_15, (MR_Integer) 5)));
      transform_hlds__pd_info__Var_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_15, (MR_Integer) 6)));
      transform_hlds__pd_info__Var_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_15, (MR_Integer) 7)));
      transform_hlds__pd_info__Var_66 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_15, (MR_Integer) 8)));
      transform_hlds__pd_info__Var_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_15, (MR_Integer) 9)));
      transform_hlds__pd_info__Var_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_15, (MR_Integer) 10)));
      {
        transform_hlds__pd_info__STATE_VARIABLE_PDInfo_18_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_18_18, 0) = ((MR_Box) (transform_hlds__pd_info__Var_58));
        MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_18_18, 1) = ((MR_Box) (transform_hlds__pd_info__Var_59));
        MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_18_18, 2) = ((MR_Box) (transform_hlds__pd_info__Var_60));
        MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_18_18, 3) = ((MR_Box) (transform_hlds__pd_info__Var_61));
        MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_18_18, 4) = ((MR_Box) (transform_hlds__pd_info__Var_62));
        MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_18_18, 5) = ((MR_Box) (transform_hlds__pd_info__Var_63));
        MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_18_18, 6) = ((MR_Box) (transform_hlds__pd_info__Var_64));
        MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_18_18, 7) = ((MR_Box) (transform_hlds__pd_info__Var_65));
        MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_18_18, 8) = ((MR_Box) (transform_hlds__pd_info__Var_66));
        MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_18_18, 9) = ((MR_Box) (transform_hlds__pd_info__Var_67));
        MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_18_18, 10) = ((MR_Box) (transform_hlds__pd_info__Useless_14));
      }
    }
    else
      transform_hlds__pd_info__STATE_VARIABLE_PDInfo_18_18 = transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_15;
    transform_hlds__pd_info__remove_version_3_p_0(transform_hlds__pd_info__PredProcId_4, transform_hlds__pd_info__STATE_VARIABLE_PDInfo_18_18, transform_hlds__pd_info__STATE_VARIABLE_PDInfo_16);
  }
}

void MR_CALL 
transform_hlds__pd_info__remove_version_3_p_0(
  MR_Word transform_hlds__pd_info__PredProcId_4,
  MR_Word transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_21,
  MR_Word * transform_hlds__pd_info__STATE_VARIABLE_PDInfo_22)
{
  {
    MR_bool transform_hlds__pd_info__succeeded;
    MR_Word transform_hlds__pd_info__TypeCtorInfo_35_35 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
    MR_Word transform_hlds__pd_info__TypeCtorInfo_36_36 = (MR_Word) &transform_hlds__pd_info__transform_hlds__pd_info__type_ctor_info_version_info_0;
    MR_Word transform_hlds__pd_info__Versions0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_21, (MR_Integer) 3)));
    MR_Word transform_hlds__pd_info__Version_7;
    MR_Word transform_hlds__pd_info__Goal_8;
    MR_Word transform_hlds__pd_info__Calls_9;
    MR_Word transform_hlds__pd_info__Versions_10;
    MR_Word transform_hlds__pd_info__GoalIndex0_11;
    MR_Word transform_hlds__pd_info__CreatedVersions0_15;
    MR_Word transform_hlds__pd_info__CreatedVersions_16;
    MR_Word transform_hlds__pd_info__ModuleInfo0_17;
    MR_Word transform_hlds__pd_info__PredId_18;
    MR_Word transform_hlds__pd_info__ModuleInfo_20;
    MR_Word transform_hlds__pd_info__STATE_VARIABLE_PDInfo_23_23;
    MR_Word transform_hlds__pd_info__STATE_VARIABLE_PDInfo_24_24;
    MR_Word transform_hlds__pd_info__STATE_VARIABLE_PDInfo_25_25;
    MR_Word transform_hlds__pd_info__Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_21, (MR_Integer) 0)));
    MR_Word transform_hlds__pd_info__Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_21, (MR_Integer) 1)));
    MR_Word transform_hlds__pd_info__Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_21, (MR_Integer) 2)));
    MR_Word transform_hlds__pd_info__Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_21, (MR_Integer) 4)));
    MR_Word transform_hlds__pd_info__Var_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_21, (MR_Integer) 5)));
    MR_Word transform_hlds__pd_info__Var_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_21, (MR_Integer) 6)));
    MR_Word transform_hlds__pd_info__Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_21, (MR_Integer) 7)));
    MR_Integer transform_hlds__pd_info__Var_47 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_21, (MR_Integer) 8)));
    MR_Word transform_hlds__pd_info__Var_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_21, (MR_Integer) 9)));
    MR_Word transform_hlds__pd_info__Var_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_21, (MR_Integer) 10)));
    MR_Box transform_hlds__pd_info__conv0_Version_7;
    MR_Word transform_hlds__pd_info__Var_27;
    MR_Word transform_hlds__pd_info__Var_28;
    MR_Word transform_hlds__pd_info__Var_29;
    MR_Word transform_hlds__pd_info__Var_30;
    MR_Integer transform_hlds__pd_info__Var_31;
    MR_Integer transform_hlds__pd_info__Var_32;
    MR_Word transform_hlds__pd_info__Var_33;
    MR_Word transform_hlds__pd_info__Var_34;
    MR_Word transform_hlds__pd_info__Var_55;
    MR_Word transform_hlds__pd_info__Var_56;
    MR_Word transform_hlds__pd_info__Var_59;
    MR_Word transform_hlds__pd_info__Var_60;
    MR_Word transform_hlds__pd_info__Var_61;
    MR_Word transform_hlds__pd_info__Var_62;
    MR_Integer transform_hlds__pd_info__Var_63;
    MR_Word transform_hlds__pd_info__Var_64;
    MR_Word transform_hlds__pd_info__Var_65;
    MR_Word transform_hlds__pd_info__Var_58;
    MR_Word transform_hlds__pd_info__GoalVersions0_12;
    MR_Word transform_hlds__pd_info__TypeInfo_37_37;
    MR_Box transform_hlds__pd_info__conv1_GoalVersions0_12;
    MR_Integer transform_hlds__pd_info__Var_19;

    mercury__map__lookup_3_p_0(transform_hlds__pd_info__TypeCtorInfo_35_35, transform_hlds__pd_info__TypeCtorInfo_36_36, transform_hlds__pd_info__Versions0_6, ((MR_Box) (transform_hlds__pd_info__PredProcId_4)), &transform_hlds__pd_info__conv0_Version_7);
    transform_hlds__pd_info__Version_7 = ((MR_Word) transform_hlds__pd_info__conv0_Version_7);
    transform_hlds__pd_info__Goal_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__Version_7, (MR_Integer) 0)));
    transform_hlds__pd_info__Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__Version_7, (MR_Integer) 1)));
    transform_hlds__pd_info__Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__Version_7, (MR_Integer) 2)));
    transform_hlds__pd_info__Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__Version_7, (MR_Integer) 3)));
    transform_hlds__pd_info__Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__Version_7, (MR_Integer) 4)));
    transform_hlds__pd_info__Var_31 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__Version_7, (MR_Integer) 5)));
    transform_hlds__pd_info__Var_32 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__Version_7, (MR_Integer) 6)));
    transform_hlds__pd_info__Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__Version_7, (MR_Integer) 7)));
    transform_hlds__pd_info__Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__Version_7, (MR_Integer) 8)));
    transform_hlds__pd_util__goal_get_calls_2_p_0(transform_hlds__pd_info__Goal_8, &transform_hlds__pd_info__Calls_9);
    mercury__map__delete_3_p_0(transform_hlds__pd_info__TypeCtorInfo_35_35, transform_hlds__pd_info__TypeCtorInfo_36_36, ((MR_Box) (transform_hlds__pd_info__PredProcId_4)), transform_hlds__pd_info__Versions0_6, &transform_hlds__pd_info__Versions_10);
    transform_hlds__pd_info__Var_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_21, (MR_Integer) 0)));
    transform_hlds__pd_info__Var_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_21, (MR_Integer) 1)));
    transform_hlds__pd_info__GoalIndex0_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_21, (MR_Integer) 2)));
    transform_hlds__pd_info__Var_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_21, (MR_Integer) 3)));
    transform_hlds__pd_info__Var_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_21, (MR_Integer) 4)));
    transform_hlds__pd_info__Var_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_21, (MR_Integer) 5)));
    transform_hlds__pd_info__Var_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_21, (MR_Integer) 6)));
    transform_hlds__pd_info__Var_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_21, (MR_Integer) 7)));
    transform_hlds__pd_info__Var_63 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_21, (MR_Integer) 8)));
    transform_hlds__pd_info__Var_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_21, (MR_Integer) 9)));
    transform_hlds__pd_info__Var_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_21, (MR_Integer) 10)));
    {
      transform_hlds__pd_info__STATE_VARIABLE_PDInfo_23_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_23_23, 0) = ((MR_Box) (transform_hlds__pd_info__Var_55));
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_23_23, 1) = ((MR_Box) (transform_hlds__pd_info__Var_56));
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_23_23, 2) = ((MR_Box) (transform_hlds__pd_info__GoalIndex0_11));
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_23_23, 3) = ((MR_Box) (transform_hlds__pd_info__Versions_10));
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_23_23, 4) = ((MR_Box) (transform_hlds__pd_info__Var_59));
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_23_23, 5) = ((MR_Box) (transform_hlds__pd_info__Var_60));
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_23_23, 6) = ((MR_Box) (transform_hlds__pd_info__Var_61));
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_23_23, 7) = ((MR_Box) (transform_hlds__pd_info__Var_62));
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_23_23, 8) = ((MR_Box) (transform_hlds__pd_info__Var_63));
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_23_23, 9) = ((MR_Box) (transform_hlds__pd_info__Var_64));
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_23_23, 10) = ((MR_Box) (transform_hlds__pd_info__Var_65));
    }
    transform_hlds__pd_info__TypeInfo_37_37 = (MR_Word) &transform_hlds__pd_info_scalar_common_1[0];
    transform_hlds__pd_info__succeeded = mercury__map__search_3_p_0(transform_hlds__pd_info__TypeInfo_37_37, transform_hlds__pd_info__TypeInfo_37_37, transform_hlds__pd_info__GoalIndex0_11, ((MR_Box) (transform_hlds__pd_info__Calls_9)), &transform_hlds__pd_info__conv1_GoalVersions0_12);
    if (transform_hlds__pd_info__succeeded)
    {
      transform_hlds__pd_info__GoalVersions0_12 = ((MR_Word) transform_hlds__pd_info__conv1_GoalVersions0_12);
      transform_hlds__pd_info__succeeded = MR_TRUE;
    }
    if (transform_hlds__pd_info__succeeded)
    {
      MR_Word transform_hlds__pd_info__TypeInfo_38_38;
      MR_Word transform_hlds__pd_info__GoalVersions_13;
      MR_Word transform_hlds__pd_info__GoalIndex_14;
      MR_Word transform_hlds__pd_info__Var_82;
      MR_Word transform_hlds__pd_info__Var_83;
      MR_Word transform_hlds__pd_info__Var_85;
      MR_Word transform_hlds__pd_info__Var_86;
      MR_Word transform_hlds__pd_info__Var_87;
      MR_Word transform_hlds__pd_info__Var_88;
      MR_Word transform_hlds__pd_info__Var_89;
      MR_Integer transform_hlds__pd_info__Var_90;
      MR_Word transform_hlds__pd_info__Var_91;
      MR_Word transform_hlds__pd_info__Var_92;
      MR_Word transform_hlds__pd_info__Var_84;

      mercury__list__delete_all_3_p_1(transform_hlds__pd_info__TypeCtorInfo_35_35, transform_hlds__pd_info__GoalVersions0_12, ((MR_Box) (transform_hlds__pd_info__PredProcId_4)), &transform_hlds__pd_info__GoalVersions_13);
      transform_hlds__pd_info__TypeInfo_38_38 = (MR_Word) &transform_hlds__pd_info_scalar_common_1[0];
      mercury__map__det_update_4_p_0(transform_hlds__pd_info__TypeInfo_38_38, transform_hlds__pd_info__TypeInfo_38_38, ((MR_Box) (transform_hlds__pd_info__Calls_9)), ((MR_Box) (transform_hlds__pd_info__GoalVersions_13)), transform_hlds__pd_info__GoalIndex0_11, &transform_hlds__pd_info__GoalIndex_14);
      transform_hlds__pd_info__Var_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_23_23, (MR_Integer) 0)));
      transform_hlds__pd_info__Var_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_23_23, (MR_Integer) 1)));
      transform_hlds__pd_info__Var_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_23_23, (MR_Integer) 2)));
      transform_hlds__pd_info__Var_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_23_23, (MR_Integer) 3)));
      transform_hlds__pd_info__Var_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_23_23, (MR_Integer) 4)));
      transform_hlds__pd_info__Var_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_23_23, (MR_Integer) 5)));
      transform_hlds__pd_info__Var_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_23_23, (MR_Integer) 6)));
      transform_hlds__pd_info__Var_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_23_23, (MR_Integer) 7)));
      transform_hlds__pd_info__Var_90 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_23_23, (MR_Integer) 8)));
      transform_hlds__pd_info__Var_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_23_23, (MR_Integer) 9)));
      transform_hlds__pd_info__Var_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_23_23, (MR_Integer) 10)));
      {
        transform_hlds__pd_info__STATE_VARIABLE_PDInfo_24_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_24_24, 0) = ((MR_Box) (transform_hlds__pd_info__Var_82));
        MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_24_24, 1) = ((MR_Box) (transform_hlds__pd_info__Var_83));
        MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_24_24, 2) = ((MR_Box) (transform_hlds__pd_info__GoalIndex_14));
        MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_24_24, 3) = ((MR_Box) (transform_hlds__pd_info__Var_85));
        MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_24_24, 4) = ((MR_Box) (transform_hlds__pd_info__Var_86));
        MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_24_24, 5) = ((MR_Box) (transform_hlds__pd_info__Var_87));
        MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_24_24, 6) = ((MR_Box) (transform_hlds__pd_info__Var_88));
        MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_24_24, 7) = ((MR_Box) (transform_hlds__pd_info__Var_89));
        MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_24_24, 8) = ((MR_Box) (transform_hlds__pd_info__Var_90));
        MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_24_24, 9) = ((MR_Box) (transform_hlds__pd_info__Var_91));
        MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_24_24, 10) = ((MR_Box) (transform_hlds__pd_info__Var_92));
      }
    }
    else
      transform_hlds__pd_info__STATE_VARIABLE_PDInfo_24_24 = transform_hlds__pd_info__STATE_VARIABLE_PDInfo_23_23;
    transform_hlds__pd_info__pd_info_get_created_versions_2_p_0(transform_hlds__pd_info__STATE_VARIABLE_PDInfo_24_24, &transform_hlds__pd_info__CreatedVersions0_15);
    mercury__set__delete_3_p_0(transform_hlds__pd_info__TypeCtorInfo_35_35, ((MR_Box) (transform_hlds__pd_info__PredProcId_4)), transform_hlds__pd_info__CreatedVersions0_15, &transform_hlds__pd_info__CreatedVersions_16);
    transform_hlds__pd_info__pd_info_set_created_versions_3_p_0(transform_hlds__pd_info__CreatedVersions_16, transform_hlds__pd_info__STATE_VARIABLE_PDInfo_24_24, &transform_hlds__pd_info__STATE_VARIABLE_PDInfo_25_25);
    transform_hlds__pd_info__pd_info_get_module_info_2_p_0(transform_hlds__pd_info__STATE_VARIABLE_PDInfo_25_25, &transform_hlds__pd_info__ModuleInfo0_17);
    transform_hlds__pd_info__PredId_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PredProcId_4, (MR_Integer) 0)));
    transform_hlds__pd_info__Var_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PredProcId_4, (MR_Integer) 1)));
    hlds__hlds_module__module_info_remove_predicate_3_p_0(transform_hlds__pd_info__PredId_18, transform_hlds__pd_info__ModuleInfo0_17, &transform_hlds__pd_info__ModuleInfo_20);
    transform_hlds__pd_info__pd_info_set_module_info_3_p_0(transform_hlds__pd_info__ModuleInfo_20, transform_hlds__pd_info__STATE_VARIABLE_PDInfo_25_25, transform_hlds__pd_info__STATE_VARIABLE_PDInfo_22);
  }
}

void MR_CALL 
transform_hlds__pd_info__register_version_4_p_0(
  MR_Word transform_hlds__pd_info__PredProcId_5,
  MR_Word transform_hlds__pd_info__Version_6,
  MR_Word transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_19,
  MR_Word * transform_hlds__pd_info__STATE_VARIABLE_PDInfo_20)
{
  {
    MR_bool transform_hlds__pd_info__succeeded;
    MR_Word transform_hlds__pd_info__TypeCtorInfo_39_39;
    MR_Word transform_hlds__pd_info__GoalVersionIndex0_9;
    MR_Word transform_hlds__pd_info__Goal_10;
    MR_Word transform_hlds__pd_info__Calls_11;
    MR_Word transform_hlds__pd_info__GoalVersionIndex_14;
    MR_Word transform_hlds__pd_info__Versions0_15;
    MR_Word transform_hlds__pd_info__Versions_16;
    MR_Word transform_hlds__pd_info__CreatedVersions0_17;
    MR_Word transform_hlds__pd_info__CreatedVersions_18;
    MR_Word transform_hlds__pd_info__STATE_VARIABLE_PDInfo_24_24;
    MR_Word transform_hlds__pd_info__STATE_VARIABLE_PDInfo_25_25;
    MR_Word transform_hlds__pd_info__Var_42;
    MR_Word transform_hlds__pd_info__Var_43;
    MR_Word transform_hlds__pd_info__Var_44;
    MR_Word transform_hlds__pd_info__Var_45;
    MR_Word transform_hlds__pd_info__Var_46;
    MR_Word transform_hlds__pd_info__Var_47;
    MR_Word transform_hlds__pd_info__Var_48;
    MR_Integer transform_hlds__pd_info__Var_49;
    MR_Word transform_hlds__pd_info__Var_50;
    MR_Word transform_hlds__pd_info__Var_51;
    MR_Word transform_hlds__pd_info__Var_28;
    MR_Word transform_hlds__pd_info__Var_29;
    MR_Word transform_hlds__pd_info__Var_30;
    MR_Word transform_hlds__pd_info__Var_31;
    MR_Integer transform_hlds__pd_info__Var_32;
    MR_Integer transform_hlds__pd_info__Var_33;
    MR_Word transform_hlds__pd_info__Var_34;
    MR_Word transform_hlds__pd_info__Var_35;
    MR_Word transform_hlds__pd_info__VersionList0_12;
    MR_Word transform_hlds__pd_info__TypeInfo_36_36;
    MR_Box transform_hlds__pd_info__conv0_VersionList0_12;
    MR_Word transform_hlds__pd_info__Var_57;
    MR_Word transform_hlds__pd_info__Var_58;
    MR_Word transform_hlds__pd_info__Var_61;
    MR_Word transform_hlds__pd_info__Var_62;
    MR_Word transform_hlds__pd_info__Var_63;
    MR_Word transform_hlds__pd_info__Var_64;
    MR_Integer transform_hlds__pd_info__Var_65;
    MR_Word transform_hlds__pd_info__Var_66;
    MR_Word transform_hlds__pd_info__Var_67;
    MR_Word transform_hlds__pd_info__Var_59;
    MR_Word transform_hlds__pd_info__Var_84;
    MR_Word transform_hlds__pd_info__Var_85;
    MR_Word transform_hlds__pd_info__Var_86;
    MR_Word transform_hlds__pd_info__Var_88;
    MR_Word transform_hlds__pd_info__Var_89;
    MR_Word transform_hlds__pd_info__Var_90;
    MR_Word transform_hlds__pd_info__Var_91;
    MR_Integer transform_hlds__pd_info__Var_92;
    MR_Word transform_hlds__pd_info__Var_93;
    MR_Word transform_hlds__pd_info__Var_94;
    MR_Word transform_hlds__pd_info__Var_87;

    transform_hlds__pd_debug__pd_debug_register_version_5_p_0(transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_19, transform_hlds__pd_info__PredProcId_5, transform_hlds__pd_info__Version_6);
    transform_hlds__pd_info__Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_19, (MR_Integer) 0)));
    transform_hlds__pd_info__Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_19, (MR_Integer) 1)));
    transform_hlds__pd_info__GoalVersionIndex0_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_19, (MR_Integer) 2)));
    transform_hlds__pd_info__Var_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_19, (MR_Integer) 3)));
    transform_hlds__pd_info__Var_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_19, (MR_Integer) 4)));
    transform_hlds__pd_info__Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_19, (MR_Integer) 5)));
    transform_hlds__pd_info__Var_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_19, (MR_Integer) 6)));
    transform_hlds__pd_info__Var_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_19, (MR_Integer) 7)));
    transform_hlds__pd_info__Var_49 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_19, (MR_Integer) 8)));
    transform_hlds__pd_info__Var_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_19, (MR_Integer) 9)));
    transform_hlds__pd_info__Var_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_19, (MR_Integer) 10)));
    transform_hlds__pd_info__Goal_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__Version_6, (MR_Integer) 0)));
    transform_hlds__pd_info__Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__Version_6, (MR_Integer) 1)));
    transform_hlds__pd_info__Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__Version_6, (MR_Integer) 2)));
    transform_hlds__pd_info__Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__Version_6, (MR_Integer) 3)));
    transform_hlds__pd_info__Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__Version_6, (MR_Integer) 4)));
    transform_hlds__pd_info__Var_32 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__Version_6, (MR_Integer) 5)));
    transform_hlds__pd_info__Var_33 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__Version_6, (MR_Integer) 6)));
    transform_hlds__pd_info__Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__Version_6, (MR_Integer) 7)));
    transform_hlds__pd_info__Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__Version_6, (MR_Integer) 8)));
    transform_hlds__pd_util__goal_get_calls_2_p_0(transform_hlds__pd_info__Goal_10, &transform_hlds__pd_info__Calls_11);
    transform_hlds__pd_info__TypeInfo_36_36 = (MR_Word) &transform_hlds__pd_info_scalar_common_1[0];
    transform_hlds__pd_info__succeeded = mercury__map__search_3_p_0(transform_hlds__pd_info__TypeInfo_36_36, transform_hlds__pd_info__TypeInfo_36_36, transform_hlds__pd_info__GoalVersionIndex0_9, ((MR_Box) (transform_hlds__pd_info__Calls_11)), &transform_hlds__pd_info__conv0_VersionList0_12);
    if (transform_hlds__pd_info__succeeded)
    {
      transform_hlds__pd_info__VersionList0_12 = ((MR_Word) transform_hlds__pd_info__conv0_VersionList0_12);
      transform_hlds__pd_info__succeeded = MR_TRUE;
    }
    if (transform_hlds__pd_info__succeeded)
    {
      MR_Word transform_hlds__pd_info__TypeInfo_37_37;
      MR_Word transform_hlds__pd_info__VersionList_13;

      {
        transform_hlds__pd_info__VersionList_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), transform_hlds__pd_info__VersionList_13, 0) = ((MR_Box) (transform_hlds__pd_info__PredProcId_5));
        MR_hl_field(MR_mktag(1), transform_hlds__pd_info__VersionList_13, 1) = ((MR_Box) (transform_hlds__pd_info__VersionList0_12));
      }
      transform_hlds__pd_info__TypeInfo_37_37 = (MR_Word) &transform_hlds__pd_info_scalar_common_1[0];
      mercury__map__det_update_4_p_0(transform_hlds__pd_info__TypeInfo_37_37, transform_hlds__pd_info__TypeInfo_37_37, ((MR_Box) (transform_hlds__pd_info__Calls_11)), ((MR_Box) (transform_hlds__pd_info__VersionList_13)), transform_hlds__pd_info__GoalVersionIndex0_9, &transform_hlds__pd_info__GoalVersionIndex_14);
    }
    else
    {
      MR_Word transform_hlds__pd_info__TypeInfo_38_38;
      MR_Word transform_hlds__pd_info__VersionList_27;

      {
        transform_hlds__pd_info__VersionList_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), transform_hlds__pd_info__VersionList_27, 0) = ((MR_Box) (transform_hlds__pd_info__PredProcId_5));
        MR_hl_field(MR_mktag(1), transform_hlds__pd_info__VersionList_27, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      transform_hlds__pd_info__TypeInfo_38_38 = (MR_Word) &transform_hlds__pd_info_scalar_common_1[0];
      mercury__map__det_insert_4_p_0(transform_hlds__pd_info__TypeInfo_38_38, transform_hlds__pd_info__TypeInfo_38_38, ((MR_Box) (transform_hlds__pd_info__Calls_11)), ((MR_Box) (transform_hlds__pd_info__VersionList_27)), transform_hlds__pd_info__GoalVersionIndex0_9, &transform_hlds__pd_info__GoalVersionIndex_14);
    }
    transform_hlds__pd_info__Var_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_19, (MR_Integer) 0)));
    transform_hlds__pd_info__Var_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_19, (MR_Integer) 1)));
    transform_hlds__pd_info__Var_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_19, (MR_Integer) 2)));
    transform_hlds__pd_info__Versions0_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_19, (MR_Integer) 3)));
    transform_hlds__pd_info__Var_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_19, (MR_Integer) 4)));
    transform_hlds__pd_info__Var_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_19, (MR_Integer) 5)));
    transform_hlds__pd_info__Var_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_19, (MR_Integer) 6)));
    transform_hlds__pd_info__Var_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_19, (MR_Integer) 7)));
    transform_hlds__pd_info__Var_65 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_19, (MR_Integer) 8)));
    transform_hlds__pd_info__Var_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_19, (MR_Integer) 9)));
    transform_hlds__pd_info__Var_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_19, (MR_Integer) 10)));
    {
      transform_hlds__pd_info__STATE_VARIABLE_PDInfo_24_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_24_24, 0) = ((MR_Box) (transform_hlds__pd_info__Var_57));
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_24_24, 1) = ((MR_Box) (transform_hlds__pd_info__Var_58));
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_24_24, 2) = ((MR_Box) (transform_hlds__pd_info__GoalVersionIndex_14));
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_24_24, 3) = ((MR_Box) (transform_hlds__pd_info__Versions0_15));
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_24_24, 4) = ((MR_Box) (transform_hlds__pd_info__Var_61));
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_24_24, 5) = ((MR_Box) (transform_hlds__pd_info__Var_62));
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_24_24, 6) = ((MR_Box) (transform_hlds__pd_info__Var_63));
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_24_24, 7) = ((MR_Box) (transform_hlds__pd_info__Var_64));
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_24_24, 8) = ((MR_Box) (transform_hlds__pd_info__Var_65));
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_24_24, 9) = ((MR_Box) (transform_hlds__pd_info__Var_66));
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_24_24, 10) = ((MR_Box) (transform_hlds__pd_info__Var_67));
    }
    transform_hlds__pd_info__TypeCtorInfo_39_39 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
    mercury__map__det_insert_4_p_0(transform_hlds__pd_info__TypeCtorInfo_39_39, (MR_Word) &transform_hlds__pd_info__transform_hlds__pd_info__type_ctor_info_version_info_0, ((MR_Box) (transform_hlds__pd_info__PredProcId_5)), ((MR_Box) (transform_hlds__pd_info__Version_6)), transform_hlds__pd_info__Versions0_15, &transform_hlds__pd_info__Versions_16);
    transform_hlds__pd_info__Var_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_24_24, (MR_Integer) 0)));
    transform_hlds__pd_info__Var_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_24_24, (MR_Integer) 1)));
    transform_hlds__pd_info__Var_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_24_24, (MR_Integer) 2)));
    transform_hlds__pd_info__Var_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_24_24, (MR_Integer) 3)));
    transform_hlds__pd_info__Var_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_24_24, (MR_Integer) 4)));
    transform_hlds__pd_info__Var_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_24_24, (MR_Integer) 5)));
    transform_hlds__pd_info__Var_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_24_24, (MR_Integer) 6)));
    transform_hlds__pd_info__Var_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_24_24, (MR_Integer) 7)));
    transform_hlds__pd_info__Var_92 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_24_24, (MR_Integer) 8)));
    transform_hlds__pd_info__Var_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_24_24, (MR_Integer) 9)));
    transform_hlds__pd_info__Var_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_24_24, (MR_Integer) 10)));
    {
      transform_hlds__pd_info__STATE_VARIABLE_PDInfo_25_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_25_25, 0) = ((MR_Box) (transform_hlds__pd_info__Var_84));
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_25_25, 1) = ((MR_Box) (transform_hlds__pd_info__Var_85));
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_25_25, 2) = ((MR_Box) (transform_hlds__pd_info__Var_86));
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_25_25, 3) = ((MR_Box) (transform_hlds__pd_info__Versions_16));
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_25_25, 4) = ((MR_Box) (transform_hlds__pd_info__Var_88));
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_25_25, 5) = ((MR_Box) (transform_hlds__pd_info__Var_89));
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_25_25, 6) = ((MR_Box) (transform_hlds__pd_info__Var_90));
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_25_25, 7) = ((MR_Box) (transform_hlds__pd_info__Var_91));
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_25_25, 8) = ((MR_Box) (transform_hlds__pd_info__Var_92));
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_25_25, 9) = ((MR_Box) (transform_hlds__pd_info__Var_93));
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_25_25, 10) = ((MR_Box) (transform_hlds__pd_info__Var_94));
    }
    transform_hlds__pd_info__pd_info_get_created_versions_2_p_0(transform_hlds__pd_info__STATE_VARIABLE_PDInfo_25_25, &transform_hlds__pd_info__CreatedVersions0_17);
    mercury__set__insert_3_p_0(transform_hlds__pd_info__TypeCtorInfo_39_39, ((MR_Box) (transform_hlds__pd_info__PredProcId_5)), transform_hlds__pd_info__CreatedVersions0_17, &transform_hlds__pd_info__CreatedVersions_18);
    transform_hlds__pd_info__pd_info_set_created_versions_3_p_0(transform_hlds__pd_info__CreatedVersions_18, transform_hlds__pd_info__STATE_VARIABLE_PDInfo_25_25, transform_hlds__pd_info__STATE_VARIABLE_PDInfo_20);
  }
}

void MR_CALL 
transform_hlds__pd_info__define_new_pred_6_p_0(
  MR_Word transform_hlds__pd_info__Origin_7,
  MR_Word transform_hlds__pd_info__Goal_8,
  MR_Word * transform_hlds__pd_info__PredProcId_9,
  MR_Word * transform_hlds__pd_info__CallGoal_10,
  MR_Word transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_39,
  MR_Word * transform_hlds__pd_info__STATE_VARIABLE_PDInfo_40)
{
  {
    MR_Word transform_hlds__pd_info__InstMap_12;
    MR_Word transform_hlds__pd_info__GoalInfo_14;
    MR_Word transform_hlds__pd_info__NonLocals_15;
    MR_Word transform_hlds__pd_info__Args_16;
    MR_Word transform_hlds__pd_info__Counter0_17;
    MR_Integer transform_hlds__pd_info__Count_18;
    MR_Word transform_hlds__pd_info__Counter_19;
    MR_Word transform_hlds__pd_info__PredInfo_20;
    MR_Word transform_hlds__pd_info__PredModule_21;
    MR_String transform_hlds__pd_info__PredName_22;
    MR_Word transform_hlds__pd_info__Context_23;
    MR_Integer transform_hlds__pd_info__Line_24;
    MR_Word transform_hlds__pd_info__ModuleInfo0_25;
    MR_Word transform_hlds__pd_info__SymName_26;
    MR_Word transform_hlds__pd_info__ProcInfo_27;
    MR_Word transform_hlds__pd_info__TVarSet_28;
    MR_Word transform_hlds__pd_info__Markers_29;
    MR_Word transform_hlds__pd_info__ClassContext_30;
    MR_Word transform_hlds__pd_info__VarSet_31;
    MR_Word transform_hlds__pd_info__VarTypes_32;
    MR_Word transform_hlds__pd_info__RttiVarMaps_33;
    MR_Word transform_hlds__pd_info__InstVarSet_34;
    MR_Word transform_hlds__pd_info__HasParallelConj_35;
    MR_Word transform_hlds__pd_info__VarNameRemap_36;
    MR_Word transform_hlds__pd_info__ModuleInfo_38;
    MR_Word transform_hlds__pd_info__STATE_VARIABLE_PDInfo_41_41;
    MR_Word transform_hlds__pd_info__Var_13;
    MR_Word transform_hlds__pd_info__Var_48;
    MR_Word transform_hlds__pd_info__Var_49;
    MR_Word transform_hlds__pd_info__Var_50;
    MR_Word transform_hlds__pd_info__Var_51;
    MR_Word transform_hlds__pd_info__Var_52;
    MR_Word transform_hlds__pd_info__Var_53;
    MR_Word transform_hlds__pd_info__Var_54;
    MR_Integer transform_hlds__pd_info__Var_55;
    MR_Word transform_hlds__pd_info__Var_56;
    MR_Word transform_hlds__pd_info__Var_57;
    MR_Word transform_hlds__pd_info__Var_63;
    MR_Word transform_hlds__pd_info__Var_64;
    MR_Word transform_hlds__pd_info__Var_65;
    MR_Word transform_hlds__pd_info__Var_66;
    MR_Word transform_hlds__pd_info__Var_67;
    MR_Word transform_hlds__pd_info__Var_69;
    MR_Word transform_hlds__pd_info__Var_70;
    MR_Integer transform_hlds__pd_info__Var_71;
    MR_Word transform_hlds__pd_info__Var_72;
    MR_Word transform_hlds__pd_info__Var_73;
    MR_Word transform_hlds__pd_info__Var_68;
    MR_Word transform_hlds__pd_info__Var_75;
    MR_Word transform_hlds__pd_info__Var_76;
    MR_Word transform_hlds__pd_info__Var_77;
    MR_Word transform_hlds__pd_info__Var_78;
    MR_Word transform_hlds__pd_info__Var_79;
    MR_Word transform_hlds__pd_info__Var_80;
    MR_Word transform_hlds__pd_info__Var_81;
    MR_Integer transform_hlds__pd_info__Var_82;
    MR_Word transform_hlds__pd_info__Var_83;
    MR_Word transform_hlds__pd_info__Var_84;
    MR_Word transform_hlds__pd_info___ExtraArgs_37;

    transform_hlds__pd_info__pd_info_get_instmap_2_p_0(transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_39, &transform_hlds__pd_info__InstMap_12);
    transform_hlds__pd_info__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__Goal_8, (MR_Integer) 0)));
    transform_hlds__pd_info__GoalInfo_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__Goal_8, (MR_Integer) 1)));
    transform_hlds__pd_info__NonLocals_15 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(transform_hlds__pd_info__GoalInfo_14);
    parse_tree__set_of_var__to_sorted_list_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, transform_hlds__pd_info__NonLocals_15, &transform_hlds__pd_info__Args_16);
    transform_hlds__pd_info__Var_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_39, (MR_Integer) 0)));
    transform_hlds__pd_info__Var_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_39, (MR_Integer) 1)));
    transform_hlds__pd_info__Var_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_39, (MR_Integer) 2)));
    transform_hlds__pd_info__Var_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_39, (MR_Integer) 3)));
    transform_hlds__pd_info__Var_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_39, (MR_Integer) 4)));
    transform_hlds__pd_info__Counter0_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_39, (MR_Integer) 5)));
    transform_hlds__pd_info__Var_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_39, (MR_Integer) 6)));
    transform_hlds__pd_info__Var_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_39, (MR_Integer) 7)));
    transform_hlds__pd_info__Var_55 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_39, (MR_Integer) 8)));
    transform_hlds__pd_info__Var_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_39, (MR_Integer) 9)));
    transform_hlds__pd_info__Var_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_39, (MR_Integer) 10)));
    mercury__counter__allocate_3_p_0(&transform_hlds__pd_info__Count_18, transform_hlds__pd_info__Counter0_17, &transform_hlds__pd_info__Counter_19);
    transform_hlds__pd_info__Var_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_39, (MR_Integer) 0)));
    transform_hlds__pd_info__Var_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_39, (MR_Integer) 1)));
    transform_hlds__pd_info__Var_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_39, (MR_Integer) 2)));
    transform_hlds__pd_info__Var_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_39, (MR_Integer) 3)));
    transform_hlds__pd_info__Var_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_39, (MR_Integer) 4)));
    transform_hlds__pd_info__Var_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_39, (MR_Integer) 5)));
    transform_hlds__pd_info__Var_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_39, (MR_Integer) 6)));
    transform_hlds__pd_info__Var_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_39, (MR_Integer) 7)));
    transform_hlds__pd_info__Var_71 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_39, (MR_Integer) 8)));
    transform_hlds__pd_info__Var_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_39, (MR_Integer) 9)));
    transform_hlds__pd_info__Var_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_39, (MR_Integer) 10)));
    {
      transform_hlds__pd_info__STATE_VARIABLE_PDInfo_41_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_41_41, 0) = ((MR_Box) (transform_hlds__pd_info__Var_63));
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_41_41, 1) = ((MR_Box) (transform_hlds__pd_info__Var_64));
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_41_41, 2) = ((MR_Box) (transform_hlds__pd_info__Var_65));
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_41_41, 3) = ((MR_Box) (transform_hlds__pd_info__Var_66));
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_41_41, 4) = ((MR_Box) (transform_hlds__pd_info__Var_67));
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_41_41, 5) = ((MR_Box) (transform_hlds__pd_info__Counter_19));
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_41_41, 6) = ((MR_Box) (transform_hlds__pd_info__Var_69));
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_41_41, 7) = ((MR_Box) (transform_hlds__pd_info__Var_70));
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_41_41, 8) = ((MR_Box) (transform_hlds__pd_info__Var_71));
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_41_41, 9) = ((MR_Box) (transform_hlds__pd_info__Var_72));
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_41_41, 10) = ((MR_Box) (transform_hlds__pd_info__Var_73));
    }
    transform_hlds__pd_info__pd_info_get_pred_info_2_p_0(transform_hlds__pd_info__STATE_VARIABLE_PDInfo_41_41, &transform_hlds__pd_info__PredInfo_20);
    transform_hlds__pd_info__PredModule_21 = hlds__hlds_pred__pred_info_module_1_f_0(transform_hlds__pd_info__PredInfo_20);
    transform_hlds__pd_info__PredName_22 = hlds__hlds_pred__pred_info_name_1_f_0(transform_hlds__pd_info__PredInfo_20);
    transform_hlds__pd_info__Context_23 = hlds__hlds_goal__goal_info_get_context_1_f_0(transform_hlds__pd_info__GoalInfo_14);
    mercury__term__context_line_2_p_0(transform_hlds__pd_info__Context_23, &transform_hlds__pd_info__Line_24);
    transform_hlds__pd_info__ModuleInfo0_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_41_41, (MR_Integer) 0)));
    transform_hlds__pd_info__Var_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_41_41, (MR_Integer) 1)));
    transform_hlds__pd_info__Var_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_41_41, (MR_Integer) 2)));
    transform_hlds__pd_info__Var_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_41_41, (MR_Integer) 3)));
    transform_hlds__pd_info__Var_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_41_41, (MR_Integer) 4)));
    transform_hlds__pd_info__Var_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_41_41, (MR_Integer) 5)));
    transform_hlds__pd_info__Var_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_41_41, (MR_Integer) 6)));
    transform_hlds__pd_info__Var_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_41_41, (MR_Integer) 7)));
    transform_hlds__pd_info__Var_82 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_41_41, (MR_Integer) 8)));
    transform_hlds__pd_info__Var_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_41_41, (MR_Integer) 9)));
    transform_hlds__pd_info__Var_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_41_41, (MR_Integer) 10)));
    parse_tree__prog_util__make_pred_name_with_context_7_p_0(transform_hlds__pd_info__PredModule_21, (MR_String) "DeforestationIn", (MR_Integer) 0, transform_hlds__pd_info__PredName_22, transform_hlds__pd_info__Line_24, transform_hlds__pd_info__Count_18, &transform_hlds__pd_info__SymName_26);
    transform_hlds__pd_info__pd_info_get_proc_info_2_p_0(transform_hlds__pd_info__STATE_VARIABLE_PDInfo_41_41, &transform_hlds__pd_info__ProcInfo_27);
    hlds__hlds_pred__pred_info_get_typevarset_2_p_0(transform_hlds__pd_info__PredInfo_20, &transform_hlds__pd_info__TVarSet_28);
    hlds__hlds_pred__pred_info_get_markers_2_p_0(transform_hlds__pd_info__PredInfo_20, &transform_hlds__pd_info__Markers_29);
    hlds__hlds_pred__pred_info_get_class_context_2_p_0(transform_hlds__pd_info__PredInfo_20, &transform_hlds__pd_info__ClassContext_30);
    hlds__hlds_pred__proc_info_get_varset_2_p_0(transform_hlds__pd_info__ProcInfo_27, &transform_hlds__pd_info__VarSet_31);
    hlds__hlds_pred__proc_info_get_vartypes_2_p_0(transform_hlds__pd_info__ProcInfo_27, &transform_hlds__pd_info__VarTypes_32);
    hlds__hlds_pred__proc_info_get_rtti_varmaps_2_p_0(transform_hlds__pd_info__ProcInfo_27, &transform_hlds__pd_info__RttiVarMaps_33);
    hlds__hlds_pred__proc_info_get_inst_varset_2_p_0(transform_hlds__pd_info__ProcInfo_27, &transform_hlds__pd_info__InstVarSet_34);
    hlds__hlds_pred__proc_info_get_has_parallel_conj_2_p_0(transform_hlds__pd_info__ProcInfo_27, &transform_hlds__pd_info__HasParallelConj_35);
    hlds__hlds_pred__proc_info_get_var_name_remap_2_p_0(transform_hlds__pd_info__ProcInfo_27, &transform_hlds__pd_info__VarNameRemap_36);
    hlds__hlds_pred__define_new_pred_20_p_0(transform_hlds__pd_info__Origin_7, transform_hlds__pd_info__Goal_8, transform_hlds__pd_info__CallGoal_10, transform_hlds__pd_info__Args_16, &transform_hlds__pd_info___ExtraArgs_37, transform_hlds__pd_info__InstMap_12, transform_hlds__pd_info__SymName_26, transform_hlds__pd_info__TVarSet_28, transform_hlds__pd_info__VarTypes_32, transform_hlds__pd_info__ClassContext_30, transform_hlds__pd_info__RttiVarMaps_33, transform_hlds__pd_info__VarSet_31, transform_hlds__pd_info__InstVarSet_34, transform_hlds__pd_info__Markers_29, (MR_Integer) 1, transform_hlds__pd_info__HasParallelConj_35, transform_hlds__pd_info__VarNameRemap_36, transform_hlds__pd_info__ModuleInfo0_25, &transform_hlds__pd_info__ModuleInfo_38, transform_hlds__pd_info__PredProcId_9);
    transform_hlds__pd_info__pd_info_set_module_info_3_p_0(transform_hlds__pd_info__ModuleInfo_38, transform_hlds__pd_info__STATE_VARIABLE_PDInfo_41_41, transform_hlds__pd_info__STATE_VARIABLE_PDInfo_40);
  }
}

void MR_CALL 
transform_hlds__pd_info__search_version_3_p_0(
  MR_Word transform_hlds__pd_info__PDInfo_4,
  MR_Word transform_hlds__pd_info__Goal_5,
  MR_Word * transform_hlds__pd_info__MaybeVersion_6)
{
  {
    MR_bool transform_hlds__pd_info__succeeded;
    MR_Word transform_hlds__pd_info__CalledPreds_8;
    MR_Word transform_hlds__pd_info__Versions_9;
    MR_Word transform_hlds__pd_info__GoalVersionIndex_10;
    MR_Word transform_hlds__pd_info__ModuleInfo_11;
    MR_Word transform_hlds__pd_info__ProcInfo_12;
    MR_Word transform_hlds__pd_info__InstMap_13;
    MR_Word transform_hlds__pd_info__VarTypes_14;
    MR_Word transform_hlds__pd_info__Var_25;
    MR_Word transform_hlds__pd_info__Var_27;
    MR_Word transform_hlds__pd_info__Var_28;
    MR_Word transform_hlds__pd_info__Var_29;
    MR_Word transform_hlds__pd_info__Var_30;
    MR_Integer transform_hlds__pd_info__Var_31;
    MR_Word transform_hlds__pd_info__Var_32;
    MR_Word transform_hlds__pd_info__Var_33;
    MR_Word transform_hlds__pd_info__MaybeVersion0_16;
    MR_Word transform_hlds__pd_info__TypeInfo_22_22;
    MR_Word transform_hlds__pd_info__VersionIds_15;
    MR_Box transform_hlds__pd_info__conv0_VersionIds_15;

    transform_hlds__pd_debug__pd_debug_output_goal_5_p_0(transform_hlds__pd_info__PDInfo_4, (MR_String) "Searching for version:\n", transform_hlds__pd_info__Goal_5);
    transform_hlds__pd_util__goal_get_calls_2_p_0(transform_hlds__pd_info__Goal_5, &transform_hlds__pd_info__CalledPreds_8);
    transform_hlds__pd_info__ModuleInfo_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_4, (MR_Integer) 0)));
    transform_hlds__pd_info__Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_4, (MR_Integer) 1)));
    transform_hlds__pd_info__GoalVersionIndex_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_4, (MR_Integer) 2)));
    transform_hlds__pd_info__Versions_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_4, (MR_Integer) 3)));
    transform_hlds__pd_info__Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_4, (MR_Integer) 4)));
    transform_hlds__pd_info__Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_4, (MR_Integer) 5)));
    transform_hlds__pd_info__Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_4, (MR_Integer) 6)));
    transform_hlds__pd_info__Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_4, (MR_Integer) 7)));
    transform_hlds__pd_info__Var_31 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_4, (MR_Integer) 8)));
    transform_hlds__pd_info__Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_4, (MR_Integer) 9)));
    transform_hlds__pd_info__Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_4, (MR_Integer) 10)));
    transform_hlds__pd_info__pd_info_get_proc_info_2_p_0(transform_hlds__pd_info__PDInfo_4, &transform_hlds__pd_info__ProcInfo_12);
    transform_hlds__pd_info__pd_info_get_instmap_2_p_0(transform_hlds__pd_info__PDInfo_4, &transform_hlds__pd_info__InstMap_13);
    hlds__hlds_pred__proc_info_get_vartypes_2_p_0(transform_hlds__pd_info__ProcInfo_12, &transform_hlds__pd_info__VarTypes_14);
    transform_hlds__pd_info__TypeInfo_22_22 = (MR_Word) &transform_hlds__pd_info_scalar_common_1[0];
    transform_hlds__pd_info__succeeded = mercury__map__search_3_p_0(transform_hlds__pd_info__TypeInfo_22_22, transform_hlds__pd_info__TypeInfo_22_22, transform_hlds__pd_info__GoalVersionIndex_10, ((MR_Box) (transform_hlds__pd_info__CalledPreds_8)), &transform_hlds__pd_info__conv0_VersionIds_15);
    if (transform_hlds__pd_info__succeeded)
    {
      transform_hlds__pd_info__VersionIds_15 = ((MR_Word) transform_hlds__pd_info__conv0_VersionIds_15);
      transform_hlds__pd_info__succeeded = MR_TRUE;
    }
    if (transform_hlds__pd_info__succeeded)
      transform_hlds__pd_info__succeeded = transform_hlds__pd_info__get_matching_version_7_p_0(transform_hlds__pd_info__ModuleInfo_11, transform_hlds__pd_info__Goal_5, transform_hlds__pd_info__InstMap_13, transform_hlds__pd_info__VarTypes_14, transform_hlds__pd_info__VersionIds_15, transform_hlds__pd_info__Versions_9, &transform_hlds__pd_info__MaybeVersion0_16);
    if (transform_hlds__pd_info__succeeded)
      *transform_hlds__pd_info__MaybeVersion_6 = transform_hlds__pd_info__MaybeVersion0_16;
    else
      *transform_hlds__pd_info__MaybeVersion_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    transform_hlds__pd_debug__pd_debug_search_version_result_4_p_0(transform_hlds__pd_info__PDInfo_4, *transform_hlds__pd_info__MaybeVersion_6);
  }
}

static MR_bool MR_CALL 
transform_hlds__pd_info__get_matching_version_7_p_0(
  MR_Word transform_hlds__pd_info__ModuleInfo_1,
  MR_Word transform_hlds__pd_info__ThisGoal_2,
  MR_Word transform_hlds__pd_info__ThisInstMap_3,
  MR_Word transform_hlds__pd_info__VarTypes_4,
  MR_Word transform_hlds__pd_info__HeadVar__5_5,
  MR_Word transform_hlds__pd_info__Versions_6,
  MR_Word * transform_hlds__pd_info__HeadVar__7_7)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool transform_hlds__pd_info__succeeded;

      if ((transform_hlds__pd_info__HeadVar__5_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *transform_hlds__pd_info__HeadVar__7_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        transform_hlds__pd_info__succeeded = MR_TRUE;
      }
      else
      {
        MR_Word transform_hlds__pd_info__VersionId_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_info__HeadVar__5_5, (MR_Integer) 0)));
        MR_Word transform_hlds__pd_info__VersionIds_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_info__HeadVar__5_5, (MR_Integer) 1)));
        MR_Word transform_hlds__pd_info__Version_21;
        MR_Word transform_hlds__pd_info__OldGoal_22;
        MR_Word transform_hlds__pd_info__OldArgs_24;
        MR_Word transform_hlds__pd_info__OldArgTypes_25;
        MR_Word transform_hlds__pd_info__OldInstMap_26;
        MR_Box transform_hlds__pd_info__conv0_Version_21;
        MR_Word transform_hlds__pd_info__Var_23;
        MR_Integer transform_hlds__pd_info__Var_27;
        MR_Integer transform_hlds__pd_info__Var_28;
        MR_Word transform_hlds__pd_info__Var_29;
        MR_Word transform_hlds__pd_info__Var_30;
        MR_Word transform_hlds__pd_info__MaybeVersion1_31;
        MR_Word transform_hlds__pd_info__OldNewRenaming_61;
        MR_Word transform_hlds__pd_info__TypeRenaming_62;
        MR_Word transform_hlds__pd_info__Exact_67;
        MR_Word transform_hlds__pd_info__TypeCtorInfo_31_69;
        MR_Word transform_hlds__pd_info__OldGoalInfo_64;
        MR_Word transform_hlds__pd_info__OldNonLocals0_65;
        MR_Word transform_hlds__pd_info__OldNonLocalsList_66;
        MR_Word transform_hlds__pd_info__Var_68;
        MR_Word transform_hlds__pd_info__Var_63;

        mercury__map__lookup_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &transform_hlds__pd_info__transform_hlds__pd_info__type_ctor_info_version_info_0, transform_hlds__pd_info__Versions_6, ((MR_Box) (transform_hlds__pd_info__VersionId_17)), &transform_hlds__pd_info__conv0_Version_21);
        transform_hlds__pd_info__Version_21 = ((MR_Word) transform_hlds__pd_info__conv0_Version_21);
        transform_hlds__pd_info__OldGoal_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__Version_21, (MR_Integer) 0)));
        transform_hlds__pd_info__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__Version_21, (MR_Integer) 1)));
        transform_hlds__pd_info__OldArgs_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__Version_21, (MR_Integer) 2)));
        transform_hlds__pd_info__OldArgTypes_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__Version_21, (MR_Integer) 3)));
        transform_hlds__pd_info__OldInstMap_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__Version_21, (MR_Integer) 4)));
        transform_hlds__pd_info__Var_27 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__Version_21, (MR_Integer) 5)));
        transform_hlds__pd_info__Var_28 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__Version_21, (MR_Integer) 6)));
        transform_hlds__pd_info__Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__Version_21, (MR_Integer) 7)));
        transform_hlds__pd_info__Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__Version_21, (MR_Integer) 8)));
        transform_hlds__pd_info__succeeded = transform_hlds__pd_util__goals_match_8_p_0(transform_hlds__pd_info__ModuleInfo_1, transform_hlds__pd_info__OldGoal_22, transform_hlds__pd_info__OldArgs_24, transform_hlds__pd_info__OldArgTypes_25, transform_hlds__pd_info__ThisGoal_2, transform_hlds__pd_info__VarTypes_4, &transform_hlds__pd_info__OldNewRenaming_61, &transform_hlds__pd_info__TypeRenaming_62);
        if (transform_hlds__pd_info__succeeded)
        {
          transform_hlds__pd_info__Var_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__OldGoal_22, (MR_Integer) 0)));
          transform_hlds__pd_info__OldGoalInfo_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__OldGoal_22, (MR_Integer) 1)));
          transform_hlds__pd_info__OldNonLocals0_65 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(transform_hlds__pd_info__OldGoalInfo_64);
          transform_hlds__pd_info__TypeCtorInfo_31_69 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
          parse_tree__set_of_var__to_sorted_list_2_p_0(transform_hlds__pd_info__TypeCtorInfo_31_69, transform_hlds__pd_info__OldNonLocals0_65, &transform_hlds__pd_info__OldNonLocalsList_66);
          transform_hlds__pd_info__Var_68 = (MR_Integer) 0;
          transform_hlds__pd_info__succeeded = transform_hlds__pd_info__check_insts_8_p_0(transform_hlds__pd_info__ModuleInfo_1, transform_hlds__pd_info__OldNonLocalsList_66, transform_hlds__pd_info__OldNewRenaming_61, transform_hlds__pd_info__OldInstMap_26, transform_hlds__pd_info__ThisInstMap_3, transform_hlds__pd_info__VarTypes_4, transform_hlds__pd_info__Var_68, &transform_hlds__pd_info__Exact_67);
          if (transform_hlds__pd_info__succeeded)
          {
            {
              transform_hlds__pd_info__MaybeVersion1_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), transform_hlds__pd_info__MaybeVersion1_31, 0) = ((MR_Box) (transform_hlds__pd_info__Exact_67));
              MR_hl_field(MR_mktag(1), transform_hlds__pd_info__MaybeVersion1_31, 1) = ((MR_Box) (transform_hlds__pd_info__VersionId_17));
              MR_hl_field(MR_mktag(1), transform_hlds__pd_info__MaybeVersion1_31, 2) = ((MR_Box) (transform_hlds__pd_info__Version_21));
              MR_hl_field(MR_mktag(1), transform_hlds__pd_info__MaybeVersion1_31, 3) = ((MR_Box) (transform_hlds__pd_info__OldNewRenaming_61));
              MR_hl_field(MR_mktag(1), transform_hlds__pd_info__MaybeVersion1_31, 4) = ((MR_Box) (transform_hlds__pd_info__TypeRenaming_62));
            }
            transform_hlds__pd_info__succeeded = MR_TRUE;
          }
        }
        if (transform_hlds__pd_info__succeeded)
          switch (transform_hlds__pd_info__Exact_67) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                *transform_hlds__pd_info__HeadVar__7_7 = transform_hlds__pd_info__MaybeVersion1_31;
                transform_hlds__pd_info__succeeded = MR_TRUE;
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word transform_hlds__pd_info__MaybeVersion2_40;

                transform_hlds__pd_info__succeeded = transform_hlds__pd_info__get_matching_version_7_p_0(transform_hlds__pd_info__ModuleInfo_1, transform_hlds__pd_info__ThisGoal_2, transform_hlds__pd_info__ThisInstMap_3, transform_hlds__pd_info__VarTypes_4, transform_hlds__pd_info__VersionIds_18, transform_hlds__pd_info__Versions_6, &transform_hlds__pd_info__MaybeVersion2_40);
                if (transform_hlds__pd_info__succeeded)
                {
                  transform_hlds__pd_info__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_105_99_107_95_118_101_114_115_105_111_110_95_95_91_49_93_95_48_7_p_0(transform_hlds__pd_info__VersionId_17, transform_hlds__pd_info__OldNewRenaming_61, transform_hlds__pd_info__TypeRenaming_62, transform_hlds__pd_info__Version_21, transform_hlds__pd_info__MaybeVersion2_40, transform_hlds__pd_info__HeadVar__7_7);
                  transform_hlds__pd_info__succeeded = MR_TRUE;
                }
              }
              break;
          }
        else
        {
          /* direct tailcall eliminated */
          {
            MR_Word transform_hlds__pd_info__next_value_of_HeadVar__5_5 = transform_hlds__pd_info__VersionIds_18;

            transform_hlds__pd_info__HeadVar__5_5 = transform_hlds__pd_info__next_value_of_HeadVar__5_5;
          }
          continue;
        }
      }
      return transform_hlds__pd_info__succeeded;
    }
    break;
  }
}

static void MR_CALL 
transform_hlds__pd_info__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_105_99_107_95_118_101_114_115_105_111_110_95_95_91_49_93_95_48_7_p_0(
  MR_Word transform_hlds__pd_info__HeadVar__2_2,
  MR_Word transform_hlds__pd_info__HeadVar__3_3,
  MR_Word transform_hlds__pd_info__HeadVar__4_4,
  MR_Word transform_hlds__pd_info__HeadVar__5_5,
  MR_Word transform_hlds__pd_info__HeadVar__6_6,
  MR_Word * transform_hlds__pd_info__HeadVar__7_7)
{
  {
    MR_bool transform_hlds__pd_info__succeeded;

    if ((transform_hlds__pd_info__HeadVar__6_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
        *transform_hlds__pd_info__HeadVar__7_7 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__pd_info__HeadVar__2_2));
        MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (transform_hlds__pd_info__HeadVar__5_5));
        MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (transform_hlds__pd_info__HeadVar__3_3));
        MR_hl_field(MR_mktag(1), base, 4) = ((MR_Box) (transform_hlds__pd_info__HeadVar__4_4));
      }
    }
    else
    {
      MR_Word transform_hlds__pd_info__Var_56 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_info__HeadVar__6_6, (MR_Integer) 4)));
      MR_Word transform_hlds__pd_info__Var_57 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_info__HeadVar__6_6, (MR_Integer) 3)));
      MR_Word transform_hlds__pd_info__Var_58 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_info__HeadVar__6_6, (MR_Integer) 2)));
      MR_Word transform_hlds__pd_info__Var_59 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_info__HeadVar__6_6, (MR_Integer) 1)));
      MR_Word transform_hlds__pd_info__Var_60 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_info__HeadVar__6_6, (MR_Integer) 0)));

      switch (transform_hlds__pd_info__Var_60) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
              *transform_hlds__pd_info__HeadVar__7_7 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) ((MR_Integer) 0));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__pd_info__Var_59));
              MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (transform_hlds__pd_info__Var_58));
              MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (transform_hlds__pd_info__Var_57));
              MR_hl_field(MR_mktag(1), base, 4) = ((MR_Box) (transform_hlds__pd_info__Var_56));
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Integer transform_hlds__pd_info__CostDelta1_41 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__5_5, (MR_Integer) 6)));
            MR_Integer transform_hlds__pd_info__CostDelta2_50 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__Var_58, (MR_Integer) 6)));
            MR_Word transform_hlds__pd_info__Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__5_5, (MR_Integer) 0)));
            MR_Word transform_hlds__pd_info__Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__5_5, (MR_Integer) 1)));
            MR_Word transform_hlds__pd_info__Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__5_5, (MR_Integer) 2)));
            MR_Word transform_hlds__pd_info__Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__5_5, (MR_Integer) 3)));
            MR_Word transform_hlds__pd_info__Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__5_5, (MR_Integer) 4)));
            MR_Integer transform_hlds__pd_info__Var_40 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__5_5, (MR_Integer) 5)));
            MR_Word transform_hlds__pd_info__Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__5_5, (MR_Integer) 7)));
            MR_Word transform_hlds__pd_info__Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__5_5, (MR_Integer) 8)));
            MR_Word transform_hlds__pd_info__Var_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__Var_58, (MR_Integer) 0)));
            MR_Word transform_hlds__pd_info__Var_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__Var_58, (MR_Integer) 1)));
            MR_Word transform_hlds__pd_info__Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__Var_58, (MR_Integer) 2)));
            MR_Word transform_hlds__pd_info__Var_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__Var_58, (MR_Integer) 3)));
            MR_Word transform_hlds__pd_info__Var_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__Var_58, (MR_Integer) 4)));
            MR_Integer transform_hlds__pd_info__Var_49 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__Var_58, (MR_Integer) 5)));
            MR_Word transform_hlds__pd_info__Var_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__Var_58, (MR_Integer) 7)));
            MR_Word transform_hlds__pd_info__Var_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__Var_58, (MR_Integer) 8)));

            transform_hlds__pd_info__succeeded = (transform_hlds__pd_info__CostDelta1_41 > transform_hlds__pd_info__CostDelta2_50);
            if (transform_hlds__pd_info__succeeded)
            {
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
                *transform_hlds__pd_info__HeadVar__7_7 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__pd_info__HeadVar__2_2));
                MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (transform_hlds__pd_info__HeadVar__5_5));
                MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (transform_hlds__pd_info__HeadVar__3_3));
                MR_hl_field(MR_mktag(1), base, 4) = ((MR_Box) (transform_hlds__pd_info__HeadVar__4_4));
              }
            }
            else
            {
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
                *transform_hlds__pd_info__HeadVar__7_7 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__pd_info__Var_59));
                MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (transform_hlds__pd_info__Var_58));
                MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (transform_hlds__pd_info__Var_57));
                MR_hl_field(MR_mktag(1), base, 4) = ((MR_Box) (transform_hlds__pd_info__Var_56));
              }
            }
          }
          break;
      }
    }
  }
}

static MR_bool MR_CALL 
transform_hlds__pd_info__check_insts_8_p_0(
  MR_Word transform_hlds__pd_info__ModuleInfo_1,
  MR_Word transform_hlds__pd_info__HeadVar__2_2,
  MR_Word transform_hlds__pd_info__VarRenaming_3,
  MR_Word transform_hlds__pd_info__OldInstMap_4,
  MR_Word transform_hlds__pd_info__NewInstMap_5,
  MR_Word transform_hlds__pd_info__VarTypes_6,
  MR_Word transform_hlds__pd_info__STATE_VARIABLE_ExactSoFar_0_7,
  MR_Word * transform_hlds__pd_info__STATE_VARIABLE_ExactSoFar_8)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool transform_hlds__pd_info__succeeded;

      if ((transform_hlds__pd_info__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *transform_hlds__pd_info__STATE_VARIABLE_ExactSoFar_8 = transform_hlds__pd_info__STATE_VARIABLE_ExactSoFar_0_7;
        transform_hlds__pd_info__succeeded = MR_TRUE;
      }
      else
      {
        MR_Word transform_hlds__pd_info__TypeInfo_34_34;
        MR_Word transform_hlds__pd_info__OldVar_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_info__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word transform_hlds__pd_info__Vars_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_info__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word transform_hlds__pd_info__OldVarInst_25;
        MR_Word transform_hlds__pd_info__NewVar_26;
        MR_Word transform_hlds__pd_info__NewVarInst_27;
        MR_Word transform_hlds__pd_info__Type_28;
        MR_Word transform_hlds__pd_info__STATE_VARIABLE_ExactSoFar_31_31;
        MR_Box transform_hlds__pd_info__conv0_NewVar_26;

        hlds__instmap__instmap_lookup_var_3_p_0(transform_hlds__pd_info__OldInstMap_4, transform_hlds__pd_info__OldVar_18, &transform_hlds__pd_info__OldVarInst_25);
        transform_hlds__pd_info__TypeInfo_34_34 = (MR_Word) &transform_hlds__pd_info_scalar_common_1[1];
        mercury__map__lookup_3_p_0(transform_hlds__pd_info__TypeInfo_34_34, transform_hlds__pd_info__TypeInfo_34_34, transform_hlds__pd_info__VarRenaming_3, ((MR_Box) (transform_hlds__pd_info__OldVar_18)), &transform_hlds__pd_info__conv0_NewVar_26);
        transform_hlds__pd_info__NewVar_26 = ((MR_Word) transform_hlds__pd_info__conv0_NewVar_26);
        hlds__instmap__instmap_lookup_var_3_p_0(transform_hlds__pd_info__NewInstMap_5, transform_hlds__pd_info__NewVar_26, &transform_hlds__pd_info__NewVarInst_27);
        hlds__vartypes__lookup_var_type_3_p_0(transform_hlds__pd_info__VarTypes_6, transform_hlds__pd_info__NewVar_26, &transform_hlds__pd_info__Type_28);
        transform_hlds__pd_info__succeeded = check_hlds__inst_match__inst_matches_initial_4_p_0(transform_hlds__pd_info__NewVarInst_27, transform_hlds__pd_info__OldVarInst_25, transform_hlds__pd_info__Type_28, transform_hlds__pd_info__ModuleInfo_1);
        if (transform_hlds__pd_info__succeeded)
        {
          switch (transform_hlds__pd_info__STATE_VARIABLE_ExactSoFar_0_7) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                transform_hlds__pd_info__succeeded = check_hlds__inst_match__inst_matches_initial_4_p_0(transform_hlds__pd_info__OldVarInst_25, transform_hlds__pd_info__NewVarInst_27, transform_hlds__pd_info__Type_28, transform_hlds__pd_info__ModuleInfo_1);
                if (transform_hlds__pd_info__succeeded)
                  transform_hlds__pd_info__STATE_VARIABLE_ExactSoFar_31_31 = (MR_Integer) 0;
                else
                  transform_hlds__pd_info__STATE_VARIABLE_ExactSoFar_31_31 = (MR_Integer) 1;
              }
              break;
            case (MR_Integer) 1:
              transform_hlds__pd_info__STATE_VARIABLE_ExactSoFar_31_31 = transform_hlds__pd_info__STATE_VARIABLE_ExactSoFar_0_7;
              break;
          }
          /* direct tailcall eliminated */
          {
            MR_Word transform_hlds__pd_info__next_value_of_HeadVar__2_2 = transform_hlds__pd_info__Vars_19;
            MR_Word transform_hlds__pd_info__next_value_of_STATE_VARIABLE_ExactSoFar_0_7 = transform_hlds__pd_info__STATE_VARIABLE_ExactSoFar_31_31;

            transform_hlds__pd_info__HeadVar__2_2 = transform_hlds__pd_info__next_value_of_HeadVar__2_2;
            transform_hlds__pd_info__STATE_VARIABLE_ExactSoFar_0_7 = transform_hlds__pd_info__next_value_of_STATE_VARIABLE_ExactSoFar_0_7;
          }
          continue;
        }
      }
      return transform_hlds__pd_info__succeeded;
    }
    break;
  }
}

void MR_CALL 
transform_hlds__pd_info__pd_info_incr_size_delta_3_p_0(
  MR_Integer transform_hlds__pd_info__Delta1_4,
  MR_Word transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8,
  MR_Word * transform_hlds__pd_info__STATE_VARIABLE_PDInfo_9)
{
  {
    MR_Integer transform_hlds__pd_info__Delta0_6;
    MR_Integer transform_hlds__pd_info__Delta_7;

    transform_hlds__pd_info__pd_info_get_size_delta_2_p_0(transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8, &transform_hlds__pd_info__Delta0_6);
    transform_hlds__pd_info__Delta_7 = (transform_hlds__pd_info__Delta0_6 + transform_hlds__pd_info__Delta1_4);
    transform_hlds__pd_info__pd_info_set_size_delta_3_p_0(transform_hlds__pd_info__Delta_7, transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8, transform_hlds__pd_info__STATE_VARIABLE_PDInfo_9);
  }
}

void MR_CALL 
transform_hlds__pd_info__pd_info_incr_cost_delta_3_p_0(
  MR_Integer transform_hlds__pd_info__Delta1_4,
  MR_Word transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8,
  MR_Word * transform_hlds__pd_info__STATE_VARIABLE_PDInfo_9)
{
  {
    MR_Integer transform_hlds__pd_info__Delta0_6;
    MR_Integer transform_hlds__pd_info__Delta_7;

    transform_hlds__pd_info__pd_info_get_cost_delta_2_p_0(transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8, &transform_hlds__pd_info__Delta0_6);
    transform_hlds__pd_info__Delta_7 = (transform_hlds__pd_info__Delta0_6 + transform_hlds__pd_info__Delta1_4);
    transform_hlds__pd_info__pd_info_set_cost_delta_3_p_0(transform_hlds__pd_info__Delta_7, transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8, transform_hlds__pd_info__STATE_VARIABLE_PDInfo_9);
  }
}

void MR_CALL 
transform_hlds__pd_info__pd_info_set_rerun_det_3_p_0(
  MR_Word transform_hlds__pd_info__Rerun_4,
  MR_Word transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8,
  MR_Word * transform_hlds__pd_info__STATE_VARIABLE_PDInfo_9)
{
  {
    MR_Word transform_hlds__pd_info__UnfoldInfo0_6;
    MR_Word transform_hlds__pd_info__UnfoldInfo_7;
    MR_Word transform_hlds__pd_info__MaybeUnfoldInfo_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8, (MR_Integer) 1)));
    MR_Word transform_hlds__pd_info__Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8, (MR_Integer) 0)));
    MR_Word transform_hlds__pd_info__Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8, (MR_Integer) 2)));
    MR_Word transform_hlds__pd_info__Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8, (MR_Integer) 3)));
    MR_Word transform_hlds__pd_info__Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8, (MR_Integer) 4)));
    MR_Word transform_hlds__pd_info__Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8, (MR_Integer) 5)));
    MR_Word transform_hlds__pd_info__Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8, (MR_Integer) 6)));
    MR_Word transform_hlds__pd_info__Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8, (MR_Integer) 7)));
    MR_Integer transform_hlds__pd_info__Var_35 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8, (MR_Integer) 8)));
    MR_Word transform_hlds__pd_info__Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8, (MR_Integer) 9)));
    MR_Word transform_hlds__pd_info__Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8, (MR_Integer) 10)));
    MR_Word transform_hlds__pd_info__Var_43;
    MR_Word transform_hlds__pd_info__Var_11;
    MR_Word transform_hlds__pd_info__Var_12;
    MR_Word transform_hlds__pd_info__Var_13;
    MR_Integer transform_hlds__pd_info__Var_14;
    MR_Word transform_hlds__pd_info__Var_15;
    MR_Word transform_hlds__pd_info__Var_16;
    MR_Word transform_hlds__pd_info__Var_17;
    MR_Word transform_hlds__pd_info__Var_18;
    MR_Word transform_hlds__pd_info__Var_19;
    MR_Integer transform_hlds__pd_info__Var_20;
    MR_Word transform_hlds__pd_info__Var_21;

    if ((transform_hlds__pd_info__MaybeUnfoldInfo_24 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      {
        mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.pd_info", (MR_String) "predicate \140transform_hlds.pd_info.pd_info_get_unfold_info\'/2", (MR_String) "unfold_info not set");
        return;
      }
    }
    else
      transform_hlds__pd_info__UnfoldInfo0_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_info__MaybeUnfoldInfo_24, (MR_Integer) 0)));
    transform_hlds__pd_info__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo0_6, (MR_Integer) 0)));
    transform_hlds__pd_info__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo0_6, (MR_Integer) 1)));
    transform_hlds__pd_info__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo0_6, (MR_Integer) 2)));
    transform_hlds__pd_info__Var_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo0_6, (MR_Integer) 3)));
    transform_hlds__pd_info__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo0_6, (MR_Integer) 4)));
    transform_hlds__pd_info__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo0_6, (MR_Integer) 5)));
    transform_hlds__pd_info__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo0_6, (MR_Integer) 6)));
    transform_hlds__pd_info__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo0_6, (MR_Integer) 7)));
    transform_hlds__pd_info__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo0_6, (MR_Integer) 8)));
    transform_hlds__pd_info__Var_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo0_6, (MR_Integer) 9)));
    transform_hlds__pd_info__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo0_6, (MR_Integer) 10)));
    {
      transform_hlds__pd_info__UnfoldInfo_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_7, 0) = ((MR_Box) (transform_hlds__pd_info__Var_11));
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_7, 1) = ((MR_Box) (transform_hlds__pd_info__Var_12));
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_7, 2) = ((MR_Box) (transform_hlds__pd_info__Var_13));
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_7, 3) = ((MR_Box) (transform_hlds__pd_info__Var_14));
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_7, 4) = ((MR_Box) (transform_hlds__pd_info__Var_15));
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_7, 5) = ((MR_Box) (transform_hlds__pd_info__Var_16));
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_7, 6) = ((MR_Box) (transform_hlds__pd_info__Var_17));
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_7, 7) = ((MR_Box) (transform_hlds__pd_info__Var_18));
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_7, 8) = ((MR_Box) (transform_hlds__pd_info__Var_19));
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_7, 9) = ((MR_Box) (transform_hlds__pd_info__Var_20));
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_7, 10) = ((MR_Box) (transform_hlds__pd_info__Rerun_4));
    }
    {
      transform_hlds__pd_info__Var_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__pd_info__Var_43, 0) = ((MR_Box) (transform_hlds__pd_info__UnfoldInfo_7));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
      *transform_hlds__pd_info__STATE_VARIABLE_PDInfo_9 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__pd_info__Var_28));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__pd_info__Var_43));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__pd_info__Var_29));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__pd_info__Var_30));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__pd_info__Var_31));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (transform_hlds__pd_info__Var_32));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (transform_hlds__pd_info__Var_33));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (transform_hlds__pd_info__Var_34));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (transform_hlds__pd_info__Var_35));
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (transform_hlds__pd_info__Var_36));
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (transform_hlds__pd_info__Var_37));
    }
  }
}

void MR_CALL 
transform_hlds__pd_info__pd_info_set_size_delta_3_p_0(
  MR_Integer transform_hlds__pd_info__SizeDelta_4,
  MR_Word transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8,
  MR_Word * transform_hlds__pd_info__STATE_VARIABLE_PDInfo_9)
{
  {
    MR_Word transform_hlds__pd_info__UnfoldInfo0_6;
    MR_Word transform_hlds__pd_info__UnfoldInfo_7;
    MR_Word transform_hlds__pd_info__MaybeUnfoldInfo_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8, (MR_Integer) 1)));
    MR_Word transform_hlds__pd_info__Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8, (MR_Integer) 0)));
    MR_Word transform_hlds__pd_info__Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8, (MR_Integer) 2)));
    MR_Word transform_hlds__pd_info__Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8, (MR_Integer) 3)));
    MR_Word transform_hlds__pd_info__Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8, (MR_Integer) 4)));
    MR_Word transform_hlds__pd_info__Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8, (MR_Integer) 5)));
    MR_Word transform_hlds__pd_info__Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8, (MR_Integer) 6)));
    MR_Word transform_hlds__pd_info__Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8, (MR_Integer) 7)));
    MR_Integer transform_hlds__pd_info__Var_35 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8, (MR_Integer) 8)));
    MR_Word transform_hlds__pd_info__Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8, (MR_Integer) 9)));
    MR_Word transform_hlds__pd_info__Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8, (MR_Integer) 10)));
    MR_Word transform_hlds__pd_info__Var_43;
    MR_Word transform_hlds__pd_info__Var_11;
    MR_Word transform_hlds__pd_info__Var_12;
    MR_Word transform_hlds__pd_info__Var_13;
    MR_Integer transform_hlds__pd_info__Var_14;
    MR_Word transform_hlds__pd_info__Var_15;
    MR_Word transform_hlds__pd_info__Var_16;
    MR_Word transform_hlds__pd_info__Var_17;
    MR_Word transform_hlds__pd_info__Var_18;
    MR_Word transform_hlds__pd_info__Var_19;
    MR_Word transform_hlds__pd_info__Var_21;
    MR_Integer transform_hlds__pd_info__Var_20;

    if ((transform_hlds__pd_info__MaybeUnfoldInfo_24 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      {
        mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.pd_info", (MR_String) "predicate \140transform_hlds.pd_info.pd_info_get_unfold_info\'/2", (MR_String) "unfold_info not set");
        return;
      }
    }
    else
      transform_hlds__pd_info__UnfoldInfo0_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_info__MaybeUnfoldInfo_24, (MR_Integer) 0)));
    transform_hlds__pd_info__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo0_6, (MR_Integer) 0)));
    transform_hlds__pd_info__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo0_6, (MR_Integer) 1)));
    transform_hlds__pd_info__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo0_6, (MR_Integer) 2)));
    transform_hlds__pd_info__Var_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo0_6, (MR_Integer) 3)));
    transform_hlds__pd_info__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo0_6, (MR_Integer) 4)));
    transform_hlds__pd_info__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo0_6, (MR_Integer) 5)));
    transform_hlds__pd_info__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo0_6, (MR_Integer) 6)));
    transform_hlds__pd_info__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo0_6, (MR_Integer) 7)));
    transform_hlds__pd_info__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo0_6, (MR_Integer) 8)));
    transform_hlds__pd_info__Var_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo0_6, (MR_Integer) 9)));
    transform_hlds__pd_info__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo0_6, (MR_Integer) 10)));
    {
      transform_hlds__pd_info__UnfoldInfo_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_7, 0) = ((MR_Box) (transform_hlds__pd_info__Var_11));
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_7, 1) = ((MR_Box) (transform_hlds__pd_info__Var_12));
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_7, 2) = ((MR_Box) (transform_hlds__pd_info__Var_13));
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_7, 3) = ((MR_Box) (transform_hlds__pd_info__Var_14));
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_7, 4) = ((MR_Box) (transform_hlds__pd_info__Var_15));
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_7, 5) = ((MR_Box) (transform_hlds__pd_info__Var_16));
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_7, 6) = ((MR_Box) (transform_hlds__pd_info__Var_17));
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_7, 7) = ((MR_Box) (transform_hlds__pd_info__Var_18));
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_7, 8) = ((MR_Box) (transform_hlds__pd_info__Var_19));
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_7, 9) = ((MR_Box) (transform_hlds__pd_info__SizeDelta_4));
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_7, 10) = ((MR_Box) (transform_hlds__pd_info__Var_21));
    }
    {
      transform_hlds__pd_info__Var_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__pd_info__Var_43, 0) = ((MR_Box) (transform_hlds__pd_info__UnfoldInfo_7));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
      *transform_hlds__pd_info__STATE_VARIABLE_PDInfo_9 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__pd_info__Var_28));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__pd_info__Var_43));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__pd_info__Var_29));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__pd_info__Var_30));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__pd_info__Var_31));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (transform_hlds__pd_info__Var_32));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (transform_hlds__pd_info__Var_33));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (transform_hlds__pd_info__Var_34));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (transform_hlds__pd_info__Var_35));
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (transform_hlds__pd_info__Var_36));
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (transform_hlds__pd_info__Var_37));
    }
  }
}

void MR_CALL 
transform_hlds__pd_info__pd_info_set_changed_3_p_0(
  MR_Word transform_hlds__pd_info__Changed_4,
  MR_Word transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8,
  MR_Word * transform_hlds__pd_info__STATE_VARIABLE_PDInfo_9)
{
  {
    MR_Word transform_hlds__pd_info__UnfoldInfo0_6;
    MR_Word transform_hlds__pd_info__UnfoldInfo_7;
    MR_Word transform_hlds__pd_info__MaybeUnfoldInfo_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8, (MR_Integer) 1)));
    MR_Word transform_hlds__pd_info__Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8, (MR_Integer) 0)));
    MR_Word transform_hlds__pd_info__Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8, (MR_Integer) 2)));
    MR_Word transform_hlds__pd_info__Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8, (MR_Integer) 3)));
    MR_Word transform_hlds__pd_info__Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8, (MR_Integer) 4)));
    MR_Word transform_hlds__pd_info__Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8, (MR_Integer) 5)));
    MR_Word transform_hlds__pd_info__Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8, (MR_Integer) 6)));
    MR_Word transform_hlds__pd_info__Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8, (MR_Integer) 7)));
    MR_Integer transform_hlds__pd_info__Var_35 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8, (MR_Integer) 8)));
    MR_Word transform_hlds__pd_info__Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8, (MR_Integer) 9)));
    MR_Word transform_hlds__pd_info__Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8, (MR_Integer) 10)));
    MR_Word transform_hlds__pd_info__Var_43;
    MR_Word transform_hlds__pd_info__Var_11;
    MR_Word transform_hlds__pd_info__Var_12;
    MR_Word transform_hlds__pd_info__Var_13;
    MR_Integer transform_hlds__pd_info__Var_14;
    MR_Word transform_hlds__pd_info__Var_15;
    MR_Word transform_hlds__pd_info__Var_16;
    MR_Word transform_hlds__pd_info__Var_17;
    MR_Word transform_hlds__pd_info__Var_18;
    MR_Integer transform_hlds__pd_info__Var_20;
    MR_Word transform_hlds__pd_info__Var_21;
    MR_Word transform_hlds__pd_info__Var_19;

    if ((transform_hlds__pd_info__MaybeUnfoldInfo_24 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      {
        mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.pd_info", (MR_String) "predicate \140transform_hlds.pd_info.pd_info_get_unfold_info\'/2", (MR_String) "unfold_info not set");
        return;
      }
    }
    else
      transform_hlds__pd_info__UnfoldInfo0_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_info__MaybeUnfoldInfo_24, (MR_Integer) 0)));
    transform_hlds__pd_info__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo0_6, (MR_Integer) 0)));
    transform_hlds__pd_info__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo0_6, (MR_Integer) 1)));
    transform_hlds__pd_info__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo0_6, (MR_Integer) 2)));
    transform_hlds__pd_info__Var_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo0_6, (MR_Integer) 3)));
    transform_hlds__pd_info__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo0_6, (MR_Integer) 4)));
    transform_hlds__pd_info__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo0_6, (MR_Integer) 5)));
    transform_hlds__pd_info__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo0_6, (MR_Integer) 6)));
    transform_hlds__pd_info__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo0_6, (MR_Integer) 7)));
    transform_hlds__pd_info__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo0_6, (MR_Integer) 8)));
    transform_hlds__pd_info__Var_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo0_6, (MR_Integer) 9)));
    transform_hlds__pd_info__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo0_6, (MR_Integer) 10)));
    {
      transform_hlds__pd_info__UnfoldInfo_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_7, 0) = ((MR_Box) (transform_hlds__pd_info__Var_11));
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_7, 1) = ((MR_Box) (transform_hlds__pd_info__Var_12));
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_7, 2) = ((MR_Box) (transform_hlds__pd_info__Var_13));
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_7, 3) = ((MR_Box) (transform_hlds__pd_info__Var_14));
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_7, 4) = ((MR_Box) (transform_hlds__pd_info__Var_15));
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_7, 5) = ((MR_Box) (transform_hlds__pd_info__Var_16));
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_7, 6) = ((MR_Box) (transform_hlds__pd_info__Var_17));
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_7, 7) = ((MR_Box) (transform_hlds__pd_info__Var_18));
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_7, 8) = ((MR_Box) (transform_hlds__pd_info__Changed_4));
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_7, 9) = ((MR_Box) (transform_hlds__pd_info__Var_20));
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_7, 10) = ((MR_Box) (transform_hlds__pd_info__Var_21));
    }
    {
      transform_hlds__pd_info__Var_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__pd_info__Var_43, 0) = ((MR_Box) (transform_hlds__pd_info__UnfoldInfo_7));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
      *transform_hlds__pd_info__STATE_VARIABLE_PDInfo_9 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__pd_info__Var_28));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__pd_info__Var_43));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__pd_info__Var_29));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__pd_info__Var_30));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__pd_info__Var_31));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (transform_hlds__pd_info__Var_32));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (transform_hlds__pd_info__Var_33));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (transform_hlds__pd_info__Var_34));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (transform_hlds__pd_info__Var_35));
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (transform_hlds__pd_info__Var_36));
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (transform_hlds__pd_info__Var_37));
    }
  }
}

void MR_CALL 
transform_hlds__pd_info__pd_info_set_pred_proc_id_3_p_0(
  MR_Word transform_hlds__pd_info__PredProcId_4,
  MR_Word transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8,
  MR_Word * transform_hlds__pd_info__STATE_VARIABLE_PDInfo_9)
{
  {
    MR_Word transform_hlds__pd_info__UnfoldInfo0_6;
    MR_Word transform_hlds__pd_info__UnfoldInfo_7;
    MR_Word transform_hlds__pd_info__MaybeUnfoldInfo_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8, (MR_Integer) 1)));
    MR_Word transform_hlds__pd_info__Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8, (MR_Integer) 0)));
    MR_Word transform_hlds__pd_info__Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8, (MR_Integer) 2)));
    MR_Word transform_hlds__pd_info__Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8, (MR_Integer) 3)));
    MR_Word transform_hlds__pd_info__Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8, (MR_Integer) 4)));
    MR_Word transform_hlds__pd_info__Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8, (MR_Integer) 5)));
    MR_Word transform_hlds__pd_info__Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8, (MR_Integer) 6)));
    MR_Word transform_hlds__pd_info__Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8, (MR_Integer) 7)));
    MR_Integer transform_hlds__pd_info__Var_35 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8, (MR_Integer) 8)));
    MR_Word transform_hlds__pd_info__Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8, (MR_Integer) 9)));
    MR_Word transform_hlds__pd_info__Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8, (MR_Integer) 10)));
    MR_Word transform_hlds__pd_info__Var_43;
    MR_Word transform_hlds__pd_info__Var_11;
    MR_Word transform_hlds__pd_info__Var_12;
    MR_Word transform_hlds__pd_info__Var_13;
    MR_Integer transform_hlds__pd_info__Var_14;
    MR_Word transform_hlds__pd_info__Var_15;
    MR_Word transform_hlds__pd_info__Var_16;
    MR_Word transform_hlds__pd_info__Var_17;
    MR_Word transform_hlds__pd_info__Var_19;
    MR_Integer transform_hlds__pd_info__Var_20;
    MR_Word transform_hlds__pd_info__Var_21;
    MR_Word transform_hlds__pd_info__Var_18;

    if ((transform_hlds__pd_info__MaybeUnfoldInfo_24 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      {
        mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.pd_info", (MR_String) "predicate \140transform_hlds.pd_info.pd_info_get_unfold_info\'/2", (MR_String) "unfold_info not set");
        return;
      }
    }
    else
      transform_hlds__pd_info__UnfoldInfo0_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_info__MaybeUnfoldInfo_24, (MR_Integer) 0)));
    transform_hlds__pd_info__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo0_6, (MR_Integer) 0)));
    transform_hlds__pd_info__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo0_6, (MR_Integer) 1)));
    transform_hlds__pd_info__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo0_6, (MR_Integer) 2)));
    transform_hlds__pd_info__Var_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo0_6, (MR_Integer) 3)));
    transform_hlds__pd_info__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo0_6, (MR_Integer) 4)));
    transform_hlds__pd_info__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo0_6, (MR_Integer) 5)));
    transform_hlds__pd_info__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo0_6, (MR_Integer) 6)));
    transform_hlds__pd_info__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo0_6, (MR_Integer) 7)));
    transform_hlds__pd_info__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo0_6, (MR_Integer) 8)));
    transform_hlds__pd_info__Var_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo0_6, (MR_Integer) 9)));
    transform_hlds__pd_info__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo0_6, (MR_Integer) 10)));
    {
      transform_hlds__pd_info__UnfoldInfo_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_7, 0) = ((MR_Box) (transform_hlds__pd_info__Var_11));
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_7, 1) = ((MR_Box) (transform_hlds__pd_info__Var_12));
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_7, 2) = ((MR_Box) (transform_hlds__pd_info__Var_13));
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_7, 3) = ((MR_Box) (transform_hlds__pd_info__Var_14));
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_7, 4) = ((MR_Box) (transform_hlds__pd_info__Var_15));
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_7, 5) = ((MR_Box) (transform_hlds__pd_info__Var_16));
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_7, 6) = ((MR_Box) (transform_hlds__pd_info__Var_17));
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_7, 7) = ((MR_Box) (transform_hlds__pd_info__PredProcId_4));
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_7, 8) = ((MR_Box) (transform_hlds__pd_info__Var_19));
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_7, 9) = ((MR_Box) (transform_hlds__pd_info__Var_20));
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_7, 10) = ((MR_Box) (transform_hlds__pd_info__Var_21));
    }
    {
      transform_hlds__pd_info__Var_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__pd_info__Var_43, 0) = ((MR_Box) (transform_hlds__pd_info__UnfoldInfo_7));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
      *transform_hlds__pd_info__STATE_VARIABLE_PDInfo_9 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__pd_info__Var_28));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__pd_info__Var_43));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__pd_info__Var_29));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__pd_info__Var_30));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__pd_info__Var_31));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (transform_hlds__pd_info__Var_32));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (transform_hlds__pd_info__Var_33));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (transform_hlds__pd_info__Var_34));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (transform_hlds__pd_info__Var_35));
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (transform_hlds__pd_info__Var_36));
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (transform_hlds__pd_info__Var_37));
    }
  }
}

void MR_CALL 
transform_hlds__pd_info__pd_info_set_parents_3_p_0(
  MR_Word transform_hlds__pd_info__Parents_4,
  MR_Word transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8,
  MR_Word * transform_hlds__pd_info__STATE_VARIABLE_PDInfo_9)
{
  {
    MR_Word transform_hlds__pd_info__UnfoldInfo0_6;
    MR_Word transform_hlds__pd_info__UnfoldInfo_7;
    MR_Word transform_hlds__pd_info__MaybeUnfoldInfo_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8, (MR_Integer) 1)));
    MR_Word transform_hlds__pd_info__Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8, (MR_Integer) 0)));
    MR_Word transform_hlds__pd_info__Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8, (MR_Integer) 2)));
    MR_Word transform_hlds__pd_info__Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8, (MR_Integer) 3)));
    MR_Word transform_hlds__pd_info__Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8, (MR_Integer) 4)));
    MR_Word transform_hlds__pd_info__Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8, (MR_Integer) 5)));
    MR_Word transform_hlds__pd_info__Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8, (MR_Integer) 6)));
    MR_Word transform_hlds__pd_info__Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8, (MR_Integer) 7)));
    MR_Integer transform_hlds__pd_info__Var_35 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8, (MR_Integer) 8)));
    MR_Word transform_hlds__pd_info__Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8, (MR_Integer) 9)));
    MR_Word transform_hlds__pd_info__Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8, (MR_Integer) 10)));
    MR_Word transform_hlds__pd_info__Var_43;
    MR_Word transform_hlds__pd_info__Var_11;
    MR_Word transform_hlds__pd_info__Var_12;
    MR_Word transform_hlds__pd_info__Var_13;
    MR_Integer transform_hlds__pd_info__Var_14;
    MR_Word transform_hlds__pd_info__Var_15;
    MR_Word transform_hlds__pd_info__Var_16;
    MR_Word transform_hlds__pd_info__Var_18;
    MR_Word transform_hlds__pd_info__Var_19;
    MR_Integer transform_hlds__pd_info__Var_20;
    MR_Word transform_hlds__pd_info__Var_21;
    MR_Word transform_hlds__pd_info__Var_17;

    if ((transform_hlds__pd_info__MaybeUnfoldInfo_24 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      {
        mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.pd_info", (MR_String) "predicate \140transform_hlds.pd_info.pd_info_get_unfold_info\'/2", (MR_String) "unfold_info not set");
        return;
      }
    }
    else
      transform_hlds__pd_info__UnfoldInfo0_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_info__MaybeUnfoldInfo_24, (MR_Integer) 0)));
    transform_hlds__pd_info__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo0_6, (MR_Integer) 0)));
    transform_hlds__pd_info__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo0_6, (MR_Integer) 1)));
    transform_hlds__pd_info__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo0_6, (MR_Integer) 2)));
    transform_hlds__pd_info__Var_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo0_6, (MR_Integer) 3)));
    transform_hlds__pd_info__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo0_6, (MR_Integer) 4)));
    transform_hlds__pd_info__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo0_6, (MR_Integer) 5)));
    transform_hlds__pd_info__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo0_6, (MR_Integer) 6)));
    transform_hlds__pd_info__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo0_6, (MR_Integer) 7)));
    transform_hlds__pd_info__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo0_6, (MR_Integer) 8)));
    transform_hlds__pd_info__Var_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo0_6, (MR_Integer) 9)));
    transform_hlds__pd_info__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo0_6, (MR_Integer) 10)));
    {
      transform_hlds__pd_info__UnfoldInfo_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_7, 0) = ((MR_Box) (transform_hlds__pd_info__Var_11));
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_7, 1) = ((MR_Box) (transform_hlds__pd_info__Var_12));
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_7, 2) = ((MR_Box) (transform_hlds__pd_info__Var_13));
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_7, 3) = ((MR_Box) (transform_hlds__pd_info__Var_14));
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_7, 4) = ((MR_Box) (transform_hlds__pd_info__Var_15));
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_7, 5) = ((MR_Box) (transform_hlds__pd_info__Var_16));
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_7, 6) = ((MR_Box) (transform_hlds__pd_info__Parents_4));
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_7, 7) = ((MR_Box) (transform_hlds__pd_info__Var_18));
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_7, 8) = ((MR_Box) (transform_hlds__pd_info__Var_19));
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_7, 9) = ((MR_Box) (transform_hlds__pd_info__Var_20));
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_7, 10) = ((MR_Box) (transform_hlds__pd_info__Var_21));
    }
    {
      transform_hlds__pd_info__Var_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__pd_info__Var_43, 0) = ((MR_Box) (transform_hlds__pd_info__UnfoldInfo_7));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
      *transform_hlds__pd_info__STATE_VARIABLE_PDInfo_9 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__pd_info__Var_28));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__pd_info__Var_43));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__pd_info__Var_29));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__pd_info__Var_30));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__pd_info__Var_31));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (transform_hlds__pd_info__Var_32));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (transform_hlds__pd_info__Var_33));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (transform_hlds__pd_info__Var_34));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (transform_hlds__pd_info__Var_35));
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (transform_hlds__pd_info__Var_36));
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (transform_hlds__pd_info__Var_37));
    }
  }
}

void MR_CALL 
transform_hlds__pd_info__pd_info_set_pred_info_3_p_0(
  MR_Word transform_hlds__pd_info__PredInfo_4,
  MR_Word transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8,
  MR_Word * transform_hlds__pd_info__STATE_VARIABLE_PDInfo_9)
{
  {
    MR_Word transform_hlds__pd_info__UnfoldInfo0_6;
    MR_Word transform_hlds__pd_info__UnfoldInfo_7;
    MR_Word transform_hlds__pd_info__MaybeUnfoldInfo_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8, (MR_Integer) 1)));
    MR_Word transform_hlds__pd_info__Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8, (MR_Integer) 0)));
    MR_Word transform_hlds__pd_info__Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8, (MR_Integer) 2)));
    MR_Word transform_hlds__pd_info__Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8, (MR_Integer) 3)));
    MR_Word transform_hlds__pd_info__Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8, (MR_Integer) 4)));
    MR_Word transform_hlds__pd_info__Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8, (MR_Integer) 5)));
    MR_Word transform_hlds__pd_info__Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8, (MR_Integer) 6)));
    MR_Word transform_hlds__pd_info__Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8, (MR_Integer) 7)));
    MR_Integer transform_hlds__pd_info__Var_35 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8, (MR_Integer) 8)));
    MR_Word transform_hlds__pd_info__Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8, (MR_Integer) 9)));
    MR_Word transform_hlds__pd_info__Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8, (MR_Integer) 10)));
    MR_Word transform_hlds__pd_info__Var_43;
    MR_Word transform_hlds__pd_info__Var_11;
    MR_Word transform_hlds__pd_info__Var_12;
    MR_Word transform_hlds__pd_info__Var_13;
    MR_Integer transform_hlds__pd_info__Var_14;
    MR_Word transform_hlds__pd_info__Var_15;
    MR_Word transform_hlds__pd_info__Var_17;
    MR_Word transform_hlds__pd_info__Var_18;
    MR_Word transform_hlds__pd_info__Var_19;
    MR_Integer transform_hlds__pd_info__Var_20;
    MR_Word transform_hlds__pd_info__Var_21;
    MR_Word transform_hlds__pd_info__Var_16;

    if ((transform_hlds__pd_info__MaybeUnfoldInfo_24 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      {
        mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.pd_info", (MR_String) "predicate \140transform_hlds.pd_info.pd_info_get_unfold_info\'/2", (MR_String) "unfold_info not set");
        return;
      }
    }
    else
      transform_hlds__pd_info__UnfoldInfo0_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_info__MaybeUnfoldInfo_24, (MR_Integer) 0)));
    transform_hlds__pd_info__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo0_6, (MR_Integer) 0)));
    transform_hlds__pd_info__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo0_6, (MR_Integer) 1)));
    transform_hlds__pd_info__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo0_6, (MR_Integer) 2)));
    transform_hlds__pd_info__Var_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo0_6, (MR_Integer) 3)));
    transform_hlds__pd_info__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo0_6, (MR_Integer) 4)));
    transform_hlds__pd_info__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo0_6, (MR_Integer) 5)));
    transform_hlds__pd_info__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo0_6, (MR_Integer) 6)));
    transform_hlds__pd_info__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo0_6, (MR_Integer) 7)));
    transform_hlds__pd_info__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo0_6, (MR_Integer) 8)));
    transform_hlds__pd_info__Var_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo0_6, (MR_Integer) 9)));
    transform_hlds__pd_info__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo0_6, (MR_Integer) 10)));
    {
      transform_hlds__pd_info__UnfoldInfo_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_7, 0) = ((MR_Box) (transform_hlds__pd_info__Var_11));
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_7, 1) = ((MR_Box) (transform_hlds__pd_info__Var_12));
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_7, 2) = ((MR_Box) (transform_hlds__pd_info__Var_13));
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_7, 3) = ((MR_Box) (transform_hlds__pd_info__Var_14));
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_7, 4) = ((MR_Box) (transform_hlds__pd_info__Var_15));
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_7, 5) = ((MR_Box) (transform_hlds__pd_info__PredInfo_4));
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_7, 6) = ((MR_Box) (transform_hlds__pd_info__Var_17));
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_7, 7) = ((MR_Box) (transform_hlds__pd_info__Var_18));
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_7, 8) = ((MR_Box) (transform_hlds__pd_info__Var_19));
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_7, 9) = ((MR_Box) (transform_hlds__pd_info__Var_20));
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_7, 10) = ((MR_Box) (transform_hlds__pd_info__Var_21));
    }
    {
      transform_hlds__pd_info__Var_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__pd_info__Var_43, 0) = ((MR_Box) (transform_hlds__pd_info__UnfoldInfo_7));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
      *transform_hlds__pd_info__STATE_VARIABLE_PDInfo_9 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__pd_info__Var_28));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__pd_info__Var_43));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__pd_info__Var_29));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__pd_info__Var_30));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__pd_info__Var_31));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (transform_hlds__pd_info__Var_32));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (transform_hlds__pd_info__Var_33));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (transform_hlds__pd_info__Var_34));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (transform_hlds__pd_info__Var_35));
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (transform_hlds__pd_info__Var_36));
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (transform_hlds__pd_info__Var_37));
    }
  }
}

void MR_CALL 
transform_hlds__pd_info__pd_info_set_local_term_info_3_p_0(
  MR_Word transform_hlds__pd_info__TermInfo_4,
  MR_Word transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8,
  MR_Word * transform_hlds__pd_info__STATE_VARIABLE_PDInfo_9)
{
  {
    MR_Word transform_hlds__pd_info__UnfoldInfo0_6;
    MR_Word transform_hlds__pd_info__UnfoldInfo_7;
    MR_Word transform_hlds__pd_info__MaybeUnfoldInfo_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8, (MR_Integer) 1)));
    MR_Word transform_hlds__pd_info__Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8, (MR_Integer) 0)));
    MR_Word transform_hlds__pd_info__Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8, (MR_Integer) 2)));
    MR_Word transform_hlds__pd_info__Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8, (MR_Integer) 3)));
    MR_Word transform_hlds__pd_info__Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8, (MR_Integer) 4)));
    MR_Word transform_hlds__pd_info__Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8, (MR_Integer) 5)));
    MR_Word transform_hlds__pd_info__Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8, (MR_Integer) 6)));
    MR_Word transform_hlds__pd_info__Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8, (MR_Integer) 7)));
    MR_Integer transform_hlds__pd_info__Var_35 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8, (MR_Integer) 8)));
    MR_Word transform_hlds__pd_info__Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8, (MR_Integer) 9)));
    MR_Word transform_hlds__pd_info__Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8, (MR_Integer) 10)));
    MR_Word transform_hlds__pd_info__Var_43;
    MR_Word transform_hlds__pd_info__Var_11;
    MR_Word transform_hlds__pd_info__Var_12;
    MR_Word transform_hlds__pd_info__Var_13;
    MR_Integer transform_hlds__pd_info__Var_14;
    MR_Word transform_hlds__pd_info__Var_16;
    MR_Word transform_hlds__pd_info__Var_17;
    MR_Word transform_hlds__pd_info__Var_18;
    MR_Word transform_hlds__pd_info__Var_19;
    MR_Integer transform_hlds__pd_info__Var_20;
    MR_Word transform_hlds__pd_info__Var_21;
    MR_Word transform_hlds__pd_info__Var_15;

    if ((transform_hlds__pd_info__MaybeUnfoldInfo_24 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      {
        mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.pd_info", (MR_String) "predicate \140transform_hlds.pd_info.pd_info_get_unfold_info\'/2", (MR_String) "unfold_info not set");
        return;
      }
    }
    else
      transform_hlds__pd_info__UnfoldInfo0_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_info__MaybeUnfoldInfo_24, (MR_Integer) 0)));
    transform_hlds__pd_info__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo0_6, (MR_Integer) 0)));
    transform_hlds__pd_info__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo0_6, (MR_Integer) 1)));
    transform_hlds__pd_info__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo0_6, (MR_Integer) 2)));
    transform_hlds__pd_info__Var_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo0_6, (MR_Integer) 3)));
    transform_hlds__pd_info__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo0_6, (MR_Integer) 4)));
    transform_hlds__pd_info__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo0_6, (MR_Integer) 5)));
    transform_hlds__pd_info__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo0_6, (MR_Integer) 6)));
    transform_hlds__pd_info__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo0_6, (MR_Integer) 7)));
    transform_hlds__pd_info__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo0_6, (MR_Integer) 8)));
    transform_hlds__pd_info__Var_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo0_6, (MR_Integer) 9)));
    transform_hlds__pd_info__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo0_6, (MR_Integer) 10)));
    {
      transform_hlds__pd_info__UnfoldInfo_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_7, 0) = ((MR_Box) (transform_hlds__pd_info__Var_11));
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_7, 1) = ((MR_Box) (transform_hlds__pd_info__Var_12));
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_7, 2) = ((MR_Box) (transform_hlds__pd_info__Var_13));
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_7, 3) = ((MR_Box) (transform_hlds__pd_info__Var_14));
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_7, 4) = ((MR_Box) (transform_hlds__pd_info__TermInfo_4));
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_7, 5) = ((MR_Box) (transform_hlds__pd_info__Var_16));
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_7, 6) = ((MR_Box) (transform_hlds__pd_info__Var_17));
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_7, 7) = ((MR_Box) (transform_hlds__pd_info__Var_18));
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_7, 8) = ((MR_Box) (transform_hlds__pd_info__Var_19));
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_7, 9) = ((MR_Box) (transform_hlds__pd_info__Var_20));
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_7, 10) = ((MR_Box) (transform_hlds__pd_info__Var_21));
    }
    {
      transform_hlds__pd_info__Var_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__pd_info__Var_43, 0) = ((MR_Box) (transform_hlds__pd_info__UnfoldInfo_7));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
      *transform_hlds__pd_info__STATE_VARIABLE_PDInfo_9 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__pd_info__Var_28));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__pd_info__Var_43));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__pd_info__Var_29));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__pd_info__Var_30));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__pd_info__Var_31));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (transform_hlds__pd_info__Var_32));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (transform_hlds__pd_info__Var_33));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (transform_hlds__pd_info__Var_34));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (transform_hlds__pd_info__Var_35));
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (transform_hlds__pd_info__Var_36));
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (transform_hlds__pd_info__Var_37));
    }
  }
}

void MR_CALL 
transform_hlds__pd_info__pd_info_set_cost_delta_3_p_0(
  MR_Integer transform_hlds__pd_info__CostDelta_4,
  MR_Word transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8,
  MR_Word * transform_hlds__pd_info__STATE_VARIABLE_PDInfo_9)
{
  {
    MR_Word transform_hlds__pd_info__UnfoldInfo0_6;
    MR_Word transform_hlds__pd_info__UnfoldInfo_7;
    MR_Word transform_hlds__pd_info__MaybeUnfoldInfo_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8, (MR_Integer) 1)));
    MR_Word transform_hlds__pd_info__Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8, (MR_Integer) 0)));
    MR_Word transform_hlds__pd_info__Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8, (MR_Integer) 2)));
    MR_Word transform_hlds__pd_info__Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8, (MR_Integer) 3)));
    MR_Word transform_hlds__pd_info__Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8, (MR_Integer) 4)));
    MR_Word transform_hlds__pd_info__Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8, (MR_Integer) 5)));
    MR_Word transform_hlds__pd_info__Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8, (MR_Integer) 6)));
    MR_Word transform_hlds__pd_info__Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8, (MR_Integer) 7)));
    MR_Integer transform_hlds__pd_info__Var_35 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8, (MR_Integer) 8)));
    MR_Word transform_hlds__pd_info__Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8, (MR_Integer) 9)));
    MR_Word transform_hlds__pd_info__Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8, (MR_Integer) 10)));
    MR_Word transform_hlds__pd_info__Var_43;
    MR_Word transform_hlds__pd_info__Var_11;
    MR_Word transform_hlds__pd_info__Var_12;
    MR_Word transform_hlds__pd_info__Var_13;
    MR_Word transform_hlds__pd_info__Var_15;
    MR_Word transform_hlds__pd_info__Var_16;
    MR_Word transform_hlds__pd_info__Var_17;
    MR_Word transform_hlds__pd_info__Var_18;
    MR_Word transform_hlds__pd_info__Var_19;
    MR_Integer transform_hlds__pd_info__Var_20;
    MR_Word transform_hlds__pd_info__Var_21;
    MR_Integer transform_hlds__pd_info__Var_14;

    if ((transform_hlds__pd_info__MaybeUnfoldInfo_24 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      {
        mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.pd_info", (MR_String) "predicate \140transform_hlds.pd_info.pd_info_get_unfold_info\'/2", (MR_String) "unfold_info not set");
        return;
      }
    }
    else
      transform_hlds__pd_info__UnfoldInfo0_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_info__MaybeUnfoldInfo_24, (MR_Integer) 0)));
    transform_hlds__pd_info__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo0_6, (MR_Integer) 0)));
    transform_hlds__pd_info__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo0_6, (MR_Integer) 1)));
    transform_hlds__pd_info__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo0_6, (MR_Integer) 2)));
    transform_hlds__pd_info__Var_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo0_6, (MR_Integer) 3)));
    transform_hlds__pd_info__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo0_6, (MR_Integer) 4)));
    transform_hlds__pd_info__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo0_6, (MR_Integer) 5)));
    transform_hlds__pd_info__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo0_6, (MR_Integer) 6)));
    transform_hlds__pd_info__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo0_6, (MR_Integer) 7)));
    transform_hlds__pd_info__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo0_6, (MR_Integer) 8)));
    transform_hlds__pd_info__Var_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo0_6, (MR_Integer) 9)));
    transform_hlds__pd_info__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo0_6, (MR_Integer) 10)));
    {
      transform_hlds__pd_info__UnfoldInfo_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_7, 0) = ((MR_Box) (transform_hlds__pd_info__Var_11));
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_7, 1) = ((MR_Box) (transform_hlds__pd_info__Var_12));
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_7, 2) = ((MR_Box) (transform_hlds__pd_info__Var_13));
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_7, 3) = ((MR_Box) (transform_hlds__pd_info__CostDelta_4));
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_7, 4) = ((MR_Box) (transform_hlds__pd_info__Var_15));
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_7, 5) = ((MR_Box) (transform_hlds__pd_info__Var_16));
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_7, 6) = ((MR_Box) (transform_hlds__pd_info__Var_17));
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_7, 7) = ((MR_Box) (transform_hlds__pd_info__Var_18));
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_7, 8) = ((MR_Box) (transform_hlds__pd_info__Var_19));
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_7, 9) = ((MR_Box) (transform_hlds__pd_info__Var_20));
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_7, 10) = ((MR_Box) (transform_hlds__pd_info__Var_21));
    }
    {
      transform_hlds__pd_info__Var_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__pd_info__Var_43, 0) = ((MR_Box) (transform_hlds__pd_info__UnfoldInfo_7));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
      *transform_hlds__pd_info__STATE_VARIABLE_PDInfo_9 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__pd_info__Var_28));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__pd_info__Var_43));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__pd_info__Var_29));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__pd_info__Var_30));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__pd_info__Var_31));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (transform_hlds__pd_info__Var_32));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (transform_hlds__pd_info__Var_33));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (transform_hlds__pd_info__Var_34));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (transform_hlds__pd_info__Var_35));
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (transform_hlds__pd_info__Var_36));
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (transform_hlds__pd_info__Var_37));
    }
  }
}

void MR_CALL 
transform_hlds__pd_info__pd_info_set_proc_info_3_p_0(
  MR_Word transform_hlds__pd_info__ProcInfo_4,
  MR_Word transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8,
  MR_Word * transform_hlds__pd_info__STATE_VARIABLE_PDInfo_9)
{
  {
    MR_Word transform_hlds__pd_info__UnfoldInfo0_6;
    MR_Word transform_hlds__pd_info__UnfoldInfo_7;
    MR_Word transform_hlds__pd_info__MaybeUnfoldInfo_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8, (MR_Integer) 1)));
    MR_Word transform_hlds__pd_info__Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8, (MR_Integer) 0)));
    MR_Word transform_hlds__pd_info__Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8, (MR_Integer) 2)));
    MR_Word transform_hlds__pd_info__Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8, (MR_Integer) 3)));
    MR_Word transform_hlds__pd_info__Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8, (MR_Integer) 4)));
    MR_Word transform_hlds__pd_info__Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8, (MR_Integer) 5)));
    MR_Word transform_hlds__pd_info__Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8, (MR_Integer) 6)));
    MR_Word transform_hlds__pd_info__Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8, (MR_Integer) 7)));
    MR_Integer transform_hlds__pd_info__Var_35 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8, (MR_Integer) 8)));
    MR_Word transform_hlds__pd_info__Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8, (MR_Integer) 9)));
    MR_Word transform_hlds__pd_info__Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8, (MR_Integer) 10)));
    MR_Word transform_hlds__pd_info__Var_43;
    MR_Word transform_hlds__pd_info__Var_12;
    MR_Word transform_hlds__pd_info__Var_13;
    MR_Integer transform_hlds__pd_info__Var_14;
    MR_Word transform_hlds__pd_info__Var_15;
    MR_Word transform_hlds__pd_info__Var_16;
    MR_Word transform_hlds__pd_info__Var_17;
    MR_Word transform_hlds__pd_info__Var_18;
    MR_Word transform_hlds__pd_info__Var_19;
    MR_Integer transform_hlds__pd_info__Var_20;
    MR_Word transform_hlds__pd_info__Var_21;
    MR_Word transform_hlds__pd_info__Var_11;

    if ((transform_hlds__pd_info__MaybeUnfoldInfo_24 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      {
        mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.pd_info", (MR_String) "predicate \140transform_hlds.pd_info.pd_info_get_unfold_info\'/2", (MR_String) "unfold_info not set");
        return;
      }
    }
    else
      transform_hlds__pd_info__UnfoldInfo0_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_info__MaybeUnfoldInfo_24, (MR_Integer) 0)));
    transform_hlds__pd_info__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo0_6, (MR_Integer) 0)));
    transform_hlds__pd_info__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo0_6, (MR_Integer) 1)));
    transform_hlds__pd_info__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo0_6, (MR_Integer) 2)));
    transform_hlds__pd_info__Var_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo0_6, (MR_Integer) 3)));
    transform_hlds__pd_info__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo0_6, (MR_Integer) 4)));
    transform_hlds__pd_info__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo0_6, (MR_Integer) 5)));
    transform_hlds__pd_info__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo0_6, (MR_Integer) 6)));
    transform_hlds__pd_info__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo0_6, (MR_Integer) 7)));
    transform_hlds__pd_info__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo0_6, (MR_Integer) 8)));
    transform_hlds__pd_info__Var_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo0_6, (MR_Integer) 9)));
    transform_hlds__pd_info__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo0_6, (MR_Integer) 10)));
    {
      transform_hlds__pd_info__UnfoldInfo_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_7, 0) = ((MR_Box) (transform_hlds__pd_info__ProcInfo_4));
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_7, 1) = ((MR_Box) (transform_hlds__pd_info__Var_12));
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_7, 2) = ((MR_Box) (transform_hlds__pd_info__Var_13));
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_7, 3) = ((MR_Box) (transform_hlds__pd_info__Var_14));
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_7, 4) = ((MR_Box) (transform_hlds__pd_info__Var_15));
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_7, 5) = ((MR_Box) (transform_hlds__pd_info__Var_16));
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_7, 6) = ((MR_Box) (transform_hlds__pd_info__Var_17));
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_7, 7) = ((MR_Box) (transform_hlds__pd_info__Var_18));
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_7, 8) = ((MR_Box) (transform_hlds__pd_info__Var_19));
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_7, 9) = ((MR_Box) (transform_hlds__pd_info__Var_20));
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_7, 10) = ((MR_Box) (transform_hlds__pd_info__Var_21));
    }
    {
      transform_hlds__pd_info__Var_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__pd_info__Var_43, 0) = ((MR_Box) (transform_hlds__pd_info__UnfoldInfo_7));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
      *transform_hlds__pd_info__STATE_VARIABLE_PDInfo_9 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__pd_info__Var_28));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__pd_info__Var_43));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__pd_info__Var_29));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__pd_info__Var_30));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__pd_info__Var_31));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (transform_hlds__pd_info__Var_32));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (transform_hlds__pd_info__Var_33));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (transform_hlds__pd_info__Var_34));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (transform_hlds__pd_info__Var_35));
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (transform_hlds__pd_info__Var_36));
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (transform_hlds__pd_info__Var_37));
    }
  }
}

void MR_CALL 
transform_hlds__pd_info__pd_info_get_rerun_det_2_p_0(
  MR_Word transform_hlds__pd_info__PDInfo_3,
  MR_Word * transform_hlds__pd_info__HeadVar__2_2)
{
  {
    MR_Word transform_hlds__pd_info__UnfoldInfo_4;
    MR_Word transform_hlds__pd_info__MaybeUnfoldInfo_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 1)));
    MR_Word transform_hlds__pd_info__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 0)));
    MR_Word transform_hlds__pd_info__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 2)));
    MR_Word transform_hlds__pd_info__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 3)));
    MR_Word transform_hlds__pd_info__Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 4)));
    MR_Word transform_hlds__pd_info__Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 5)));
    MR_Word transform_hlds__pd_info__Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 6)));
    MR_Word transform_hlds__pd_info__Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 7)));
    MR_Integer transform_hlds__pd_info__Var_28 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 8)));
    MR_Word transform_hlds__pd_info__Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 9)));
    MR_Word transform_hlds__pd_info__Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 10)));
    MR_Word transform_hlds__pd_info__Var_5;
    MR_Word transform_hlds__pd_info__Var_6;
    MR_Word transform_hlds__pd_info__Var_7;
    MR_Integer transform_hlds__pd_info__Var_8;
    MR_Word transform_hlds__pd_info__Var_9;
    MR_Word transform_hlds__pd_info__Var_10;
    MR_Word transform_hlds__pd_info__Var_11;
    MR_Word transform_hlds__pd_info__Var_12;
    MR_Word transform_hlds__pd_info__Var_13;
    MR_Integer transform_hlds__pd_info__Var_14;

    if ((transform_hlds__pd_info__MaybeUnfoldInfo_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      {
        mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.pd_info", (MR_String) "predicate \140transform_hlds.pd_info.pd_info_get_unfold_info\'/2", (MR_String) "unfold_info not set");
        return;
      }
    }
    else
      transform_hlds__pd_info__UnfoldInfo_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_info__MaybeUnfoldInfo_17, (MR_Integer) 0)));
    transform_hlds__pd_info__Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 0)));
    transform_hlds__pd_info__Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 1)));
    transform_hlds__pd_info__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 2)));
    transform_hlds__pd_info__Var_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 3)));
    transform_hlds__pd_info__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 4)));
    transform_hlds__pd_info__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 5)));
    transform_hlds__pd_info__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 6)));
    transform_hlds__pd_info__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 7)));
    transform_hlds__pd_info__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 8)));
    transform_hlds__pd_info__Var_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 9)));
    *transform_hlds__pd_info__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 10)));
  }
}

void MR_CALL 
transform_hlds__pd_info__pd_info_get_size_delta_2_p_0(
  MR_Word transform_hlds__pd_info__PDInfo_3,
  MR_Integer * transform_hlds__pd_info__HeadVar__2_2)
{
  {
    MR_Word transform_hlds__pd_info__UnfoldInfo_4;
    MR_Word transform_hlds__pd_info__MaybeUnfoldInfo_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 1)));
    MR_Word transform_hlds__pd_info__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 0)));
    MR_Word transform_hlds__pd_info__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 2)));
    MR_Word transform_hlds__pd_info__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 3)));
    MR_Word transform_hlds__pd_info__Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 4)));
    MR_Word transform_hlds__pd_info__Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 5)));
    MR_Word transform_hlds__pd_info__Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 6)));
    MR_Word transform_hlds__pd_info__Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 7)));
    MR_Integer transform_hlds__pd_info__Var_28 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 8)));
    MR_Word transform_hlds__pd_info__Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 9)));
    MR_Word transform_hlds__pd_info__Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 10)));
    MR_Word transform_hlds__pd_info__Var_5;
    MR_Word transform_hlds__pd_info__Var_6;
    MR_Word transform_hlds__pd_info__Var_7;
    MR_Integer transform_hlds__pd_info__Var_8;
    MR_Word transform_hlds__pd_info__Var_9;
    MR_Word transform_hlds__pd_info__Var_10;
    MR_Word transform_hlds__pd_info__Var_11;
    MR_Word transform_hlds__pd_info__Var_12;
    MR_Word transform_hlds__pd_info__Var_13;
    MR_Word transform_hlds__pd_info__Var_14;

    if ((transform_hlds__pd_info__MaybeUnfoldInfo_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      {
        mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.pd_info", (MR_String) "predicate \140transform_hlds.pd_info.pd_info_get_unfold_info\'/2", (MR_String) "unfold_info not set");
        return;
      }
    }
    else
      transform_hlds__pd_info__UnfoldInfo_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_info__MaybeUnfoldInfo_17, (MR_Integer) 0)));
    transform_hlds__pd_info__Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 0)));
    transform_hlds__pd_info__Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 1)));
    transform_hlds__pd_info__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 2)));
    transform_hlds__pd_info__Var_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 3)));
    transform_hlds__pd_info__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 4)));
    transform_hlds__pd_info__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 5)));
    transform_hlds__pd_info__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 6)));
    transform_hlds__pd_info__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 7)));
    transform_hlds__pd_info__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 8)));
    *transform_hlds__pd_info__HeadVar__2_2 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 9)));
    transform_hlds__pd_info__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 10)));
  }
}

void MR_CALL 
transform_hlds__pd_info__pd_info_get_changed_2_p_0(
  MR_Word transform_hlds__pd_info__PDInfo_3,
  MR_Word * transform_hlds__pd_info__HeadVar__2_2)
{
  {
    MR_Word transform_hlds__pd_info__UnfoldInfo_4;
    MR_Word transform_hlds__pd_info__MaybeUnfoldInfo_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 1)));
    MR_Word transform_hlds__pd_info__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 0)));
    MR_Word transform_hlds__pd_info__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 2)));
    MR_Word transform_hlds__pd_info__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 3)));
    MR_Word transform_hlds__pd_info__Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 4)));
    MR_Word transform_hlds__pd_info__Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 5)));
    MR_Word transform_hlds__pd_info__Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 6)));
    MR_Word transform_hlds__pd_info__Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 7)));
    MR_Integer transform_hlds__pd_info__Var_28 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 8)));
    MR_Word transform_hlds__pd_info__Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 9)));
    MR_Word transform_hlds__pd_info__Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 10)));
    MR_Word transform_hlds__pd_info__Var_5;
    MR_Word transform_hlds__pd_info__Var_6;
    MR_Word transform_hlds__pd_info__Var_7;
    MR_Integer transform_hlds__pd_info__Var_8;
    MR_Word transform_hlds__pd_info__Var_9;
    MR_Word transform_hlds__pd_info__Var_10;
    MR_Word transform_hlds__pd_info__Var_11;
    MR_Word transform_hlds__pd_info__Var_12;
    MR_Integer transform_hlds__pd_info__Var_13;
    MR_Word transform_hlds__pd_info__Var_14;

    if ((transform_hlds__pd_info__MaybeUnfoldInfo_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      {
        mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.pd_info", (MR_String) "predicate \140transform_hlds.pd_info.pd_info_get_unfold_info\'/2", (MR_String) "unfold_info not set");
        return;
      }
    }
    else
      transform_hlds__pd_info__UnfoldInfo_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_info__MaybeUnfoldInfo_17, (MR_Integer) 0)));
    transform_hlds__pd_info__Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 0)));
    transform_hlds__pd_info__Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 1)));
    transform_hlds__pd_info__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 2)));
    transform_hlds__pd_info__Var_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 3)));
    transform_hlds__pd_info__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 4)));
    transform_hlds__pd_info__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 5)));
    transform_hlds__pd_info__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 6)));
    transform_hlds__pd_info__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 7)));
    *transform_hlds__pd_info__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 8)));
    transform_hlds__pd_info__Var_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 9)));
    transform_hlds__pd_info__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 10)));
  }
}

void MR_CALL 
transform_hlds__pd_info__pd_info_get_pred_proc_id_2_p_0(
  MR_Word transform_hlds__pd_info__PDInfo_3,
  MR_Word * transform_hlds__pd_info__HeadVar__2_2)
{
  {
    MR_Word transform_hlds__pd_info__UnfoldInfo_4;
    MR_Word transform_hlds__pd_info__MaybeUnfoldInfo_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 1)));
    MR_Word transform_hlds__pd_info__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 0)));
    MR_Word transform_hlds__pd_info__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 2)));
    MR_Word transform_hlds__pd_info__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 3)));
    MR_Word transform_hlds__pd_info__Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 4)));
    MR_Word transform_hlds__pd_info__Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 5)));
    MR_Word transform_hlds__pd_info__Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 6)));
    MR_Word transform_hlds__pd_info__Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 7)));
    MR_Integer transform_hlds__pd_info__Var_28 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 8)));
    MR_Word transform_hlds__pd_info__Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 9)));
    MR_Word transform_hlds__pd_info__Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 10)));
    MR_Word transform_hlds__pd_info__Var_5;
    MR_Word transform_hlds__pd_info__Var_6;
    MR_Word transform_hlds__pd_info__Var_7;
    MR_Integer transform_hlds__pd_info__Var_8;
    MR_Word transform_hlds__pd_info__Var_9;
    MR_Word transform_hlds__pd_info__Var_10;
    MR_Word transform_hlds__pd_info__Var_11;
    MR_Word transform_hlds__pd_info__Var_12;
    MR_Integer transform_hlds__pd_info__Var_13;
    MR_Word transform_hlds__pd_info__Var_14;

    if ((transform_hlds__pd_info__MaybeUnfoldInfo_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      {
        mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.pd_info", (MR_String) "predicate \140transform_hlds.pd_info.pd_info_get_unfold_info\'/2", (MR_String) "unfold_info not set");
        return;
      }
    }
    else
      transform_hlds__pd_info__UnfoldInfo_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_info__MaybeUnfoldInfo_17, (MR_Integer) 0)));
    transform_hlds__pd_info__Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 0)));
    transform_hlds__pd_info__Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 1)));
    transform_hlds__pd_info__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 2)));
    transform_hlds__pd_info__Var_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 3)));
    transform_hlds__pd_info__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 4)));
    transform_hlds__pd_info__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 5)));
    transform_hlds__pd_info__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 6)));
    *transform_hlds__pd_info__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 7)));
    transform_hlds__pd_info__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 8)));
    transform_hlds__pd_info__Var_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 9)));
    transform_hlds__pd_info__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 10)));
  }
}

void MR_CALL 
transform_hlds__pd_info__pd_info_get_parents_2_p_0(
  MR_Word transform_hlds__pd_info__PDInfo_3,
  MR_Word * transform_hlds__pd_info__HeadVar__2_2)
{
  {
    MR_Word transform_hlds__pd_info__UnfoldInfo_4;
    MR_Word transform_hlds__pd_info__MaybeUnfoldInfo_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 1)));
    MR_Word transform_hlds__pd_info__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 0)));
    MR_Word transform_hlds__pd_info__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 2)));
    MR_Word transform_hlds__pd_info__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 3)));
    MR_Word transform_hlds__pd_info__Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 4)));
    MR_Word transform_hlds__pd_info__Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 5)));
    MR_Word transform_hlds__pd_info__Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 6)));
    MR_Word transform_hlds__pd_info__Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 7)));
    MR_Integer transform_hlds__pd_info__Var_28 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 8)));
    MR_Word transform_hlds__pd_info__Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 9)));
    MR_Word transform_hlds__pd_info__Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 10)));
    MR_Word transform_hlds__pd_info__Var_5;
    MR_Word transform_hlds__pd_info__Var_6;
    MR_Word transform_hlds__pd_info__Var_7;
    MR_Integer transform_hlds__pd_info__Var_8;
    MR_Word transform_hlds__pd_info__Var_9;
    MR_Word transform_hlds__pd_info__Var_10;
    MR_Word transform_hlds__pd_info__Var_11;
    MR_Word transform_hlds__pd_info__Var_12;
    MR_Integer transform_hlds__pd_info__Var_13;
    MR_Word transform_hlds__pd_info__Var_14;

    if ((transform_hlds__pd_info__MaybeUnfoldInfo_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      {
        mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.pd_info", (MR_String) "predicate \140transform_hlds.pd_info.pd_info_get_unfold_info\'/2", (MR_String) "unfold_info not set");
        return;
      }
    }
    else
      transform_hlds__pd_info__UnfoldInfo_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_info__MaybeUnfoldInfo_17, (MR_Integer) 0)));
    transform_hlds__pd_info__Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 0)));
    transform_hlds__pd_info__Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 1)));
    transform_hlds__pd_info__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 2)));
    transform_hlds__pd_info__Var_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 3)));
    transform_hlds__pd_info__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 4)));
    transform_hlds__pd_info__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 5)));
    *transform_hlds__pd_info__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 6)));
    transform_hlds__pd_info__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 7)));
    transform_hlds__pd_info__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 8)));
    transform_hlds__pd_info__Var_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 9)));
    transform_hlds__pd_info__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 10)));
  }
}

void MR_CALL 
transform_hlds__pd_info__pd_info_get_pred_info_2_p_0(
  MR_Word transform_hlds__pd_info__PDInfo_3,
  MR_Word * transform_hlds__pd_info__HeadVar__2_2)
{
  {
    MR_Word transform_hlds__pd_info__UnfoldInfo_4;
    MR_Word transform_hlds__pd_info__MaybeUnfoldInfo_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 1)));
    MR_Word transform_hlds__pd_info__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 0)));
    MR_Word transform_hlds__pd_info__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 2)));
    MR_Word transform_hlds__pd_info__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 3)));
    MR_Word transform_hlds__pd_info__Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 4)));
    MR_Word transform_hlds__pd_info__Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 5)));
    MR_Word transform_hlds__pd_info__Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 6)));
    MR_Word transform_hlds__pd_info__Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 7)));
    MR_Integer transform_hlds__pd_info__Var_28 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 8)));
    MR_Word transform_hlds__pd_info__Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 9)));
    MR_Word transform_hlds__pd_info__Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 10)));
    MR_Word transform_hlds__pd_info__Var_5;
    MR_Word transform_hlds__pd_info__Var_6;
    MR_Word transform_hlds__pd_info__Var_7;
    MR_Integer transform_hlds__pd_info__Var_8;
    MR_Word transform_hlds__pd_info__Var_9;
    MR_Word transform_hlds__pd_info__Var_10;
    MR_Word transform_hlds__pd_info__Var_11;
    MR_Word transform_hlds__pd_info__Var_12;
    MR_Integer transform_hlds__pd_info__Var_13;
    MR_Word transform_hlds__pd_info__Var_14;

    if ((transform_hlds__pd_info__MaybeUnfoldInfo_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      {
        mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.pd_info", (MR_String) "predicate \140transform_hlds.pd_info.pd_info_get_unfold_info\'/2", (MR_String) "unfold_info not set");
        return;
      }
    }
    else
      transform_hlds__pd_info__UnfoldInfo_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_info__MaybeUnfoldInfo_17, (MR_Integer) 0)));
    transform_hlds__pd_info__Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 0)));
    transform_hlds__pd_info__Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 1)));
    transform_hlds__pd_info__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 2)));
    transform_hlds__pd_info__Var_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 3)));
    transform_hlds__pd_info__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 4)));
    *transform_hlds__pd_info__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 5)));
    transform_hlds__pd_info__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 6)));
    transform_hlds__pd_info__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 7)));
    transform_hlds__pd_info__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 8)));
    transform_hlds__pd_info__Var_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 9)));
    transform_hlds__pd_info__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 10)));
  }
}

void MR_CALL 
transform_hlds__pd_info__pd_info_get_local_term_info_2_p_0(
  MR_Word transform_hlds__pd_info__PDInfo_3,
  MR_Word * transform_hlds__pd_info__HeadVar__2_2)
{
  {
    MR_Word transform_hlds__pd_info__UnfoldInfo_4;
    MR_Word transform_hlds__pd_info__MaybeUnfoldInfo_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 1)));
    MR_Word transform_hlds__pd_info__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 0)));
    MR_Word transform_hlds__pd_info__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 2)));
    MR_Word transform_hlds__pd_info__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 3)));
    MR_Word transform_hlds__pd_info__Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 4)));
    MR_Word transform_hlds__pd_info__Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 5)));
    MR_Word transform_hlds__pd_info__Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 6)));
    MR_Word transform_hlds__pd_info__Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 7)));
    MR_Integer transform_hlds__pd_info__Var_28 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 8)));
    MR_Word transform_hlds__pd_info__Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 9)));
    MR_Word transform_hlds__pd_info__Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 10)));
    MR_Word transform_hlds__pd_info__Var_5;
    MR_Word transform_hlds__pd_info__Var_6;
    MR_Word transform_hlds__pd_info__Var_7;
    MR_Integer transform_hlds__pd_info__Var_8;
    MR_Word transform_hlds__pd_info__Var_9;
    MR_Word transform_hlds__pd_info__Var_10;
    MR_Word transform_hlds__pd_info__Var_11;
    MR_Word transform_hlds__pd_info__Var_12;
    MR_Integer transform_hlds__pd_info__Var_13;
    MR_Word transform_hlds__pd_info__Var_14;

    if ((transform_hlds__pd_info__MaybeUnfoldInfo_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      {
        mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.pd_info", (MR_String) "predicate \140transform_hlds.pd_info.pd_info_get_unfold_info\'/2", (MR_String) "unfold_info not set");
        return;
      }
    }
    else
      transform_hlds__pd_info__UnfoldInfo_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_info__MaybeUnfoldInfo_17, (MR_Integer) 0)));
    transform_hlds__pd_info__Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 0)));
    transform_hlds__pd_info__Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 1)));
    transform_hlds__pd_info__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 2)));
    transform_hlds__pd_info__Var_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 3)));
    *transform_hlds__pd_info__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 4)));
    transform_hlds__pd_info__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 5)));
    transform_hlds__pd_info__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 6)));
    transform_hlds__pd_info__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 7)));
    transform_hlds__pd_info__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 8)));
    transform_hlds__pd_info__Var_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 9)));
    transform_hlds__pd_info__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 10)));
  }
}

void MR_CALL 
transform_hlds__pd_info__pd_info_get_cost_delta_2_p_0(
  MR_Word transform_hlds__pd_info__PDInfo_3,
  MR_Integer * transform_hlds__pd_info__HeadVar__2_2)
{
  {
    MR_Word transform_hlds__pd_info__UnfoldInfo_4;
    MR_Word transform_hlds__pd_info__MaybeUnfoldInfo_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 1)));
    MR_Word transform_hlds__pd_info__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 0)));
    MR_Word transform_hlds__pd_info__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 2)));
    MR_Word transform_hlds__pd_info__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 3)));
    MR_Word transform_hlds__pd_info__Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 4)));
    MR_Word transform_hlds__pd_info__Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 5)));
    MR_Word transform_hlds__pd_info__Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 6)));
    MR_Word transform_hlds__pd_info__Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 7)));
    MR_Integer transform_hlds__pd_info__Var_28 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 8)));
    MR_Word transform_hlds__pd_info__Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 9)));
    MR_Word transform_hlds__pd_info__Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 10)));
    MR_Word transform_hlds__pd_info__Var_5;
    MR_Word transform_hlds__pd_info__Var_6;
    MR_Word transform_hlds__pd_info__Var_7;
    MR_Word transform_hlds__pd_info__Var_8;
    MR_Word transform_hlds__pd_info__Var_9;
    MR_Word transform_hlds__pd_info__Var_10;
    MR_Word transform_hlds__pd_info__Var_11;
    MR_Word transform_hlds__pd_info__Var_12;
    MR_Integer transform_hlds__pd_info__Var_13;
    MR_Word transform_hlds__pd_info__Var_14;

    if ((transform_hlds__pd_info__MaybeUnfoldInfo_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      {
        mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.pd_info", (MR_String) "predicate \140transform_hlds.pd_info.pd_info_get_unfold_info\'/2", (MR_String) "unfold_info not set");
        return;
      }
    }
    else
      transform_hlds__pd_info__UnfoldInfo_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_info__MaybeUnfoldInfo_17, (MR_Integer) 0)));
    transform_hlds__pd_info__Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 0)));
    transform_hlds__pd_info__Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 1)));
    transform_hlds__pd_info__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 2)));
    *transform_hlds__pd_info__HeadVar__2_2 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 3)));
    transform_hlds__pd_info__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 4)));
    transform_hlds__pd_info__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 5)));
    transform_hlds__pd_info__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 6)));
    transform_hlds__pd_info__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 7)));
    transform_hlds__pd_info__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 8)));
    transform_hlds__pd_info__Var_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 9)));
    transform_hlds__pd_info__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 10)));
  }
}

void MR_CALL 
transform_hlds__pd_info__pd_info_get_head_inst_vars_2_p_0(
  MR_Word transform_hlds__pd_info__PDInfo_3,
  MR_Word * transform_hlds__pd_info__HeadVar__2_2)
{
  {
    MR_Word transform_hlds__pd_info__UnfoldInfo_4;
    MR_Word transform_hlds__pd_info__MaybeUnfoldInfo_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 1)));
    MR_Word transform_hlds__pd_info__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 0)));
    MR_Word transform_hlds__pd_info__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 2)));
    MR_Word transform_hlds__pd_info__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 3)));
    MR_Word transform_hlds__pd_info__Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 4)));
    MR_Word transform_hlds__pd_info__Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 5)));
    MR_Word transform_hlds__pd_info__Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 6)));
    MR_Word transform_hlds__pd_info__Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 7)));
    MR_Integer transform_hlds__pd_info__Var_28 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 8)));
    MR_Word transform_hlds__pd_info__Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 9)));
    MR_Word transform_hlds__pd_info__Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 10)));
    MR_Word transform_hlds__pd_info__Var_5;
    MR_Word transform_hlds__pd_info__Var_6;
    MR_Integer transform_hlds__pd_info__Var_7;
    MR_Word transform_hlds__pd_info__Var_8;
    MR_Word transform_hlds__pd_info__Var_9;
    MR_Word transform_hlds__pd_info__Var_10;
    MR_Word transform_hlds__pd_info__Var_11;
    MR_Word transform_hlds__pd_info__Var_12;
    MR_Integer transform_hlds__pd_info__Var_13;
    MR_Word transform_hlds__pd_info__Var_14;

    if ((transform_hlds__pd_info__MaybeUnfoldInfo_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      {
        mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.pd_info", (MR_String) "predicate \140transform_hlds.pd_info.pd_info_get_unfold_info\'/2", (MR_String) "unfold_info not set");
        return;
      }
    }
    else
      transform_hlds__pd_info__UnfoldInfo_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_info__MaybeUnfoldInfo_17, (MR_Integer) 0)));
    transform_hlds__pd_info__Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 0)));
    *transform_hlds__pd_info__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 1)));
    transform_hlds__pd_info__Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 2)));
    transform_hlds__pd_info__Var_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 3)));
    transform_hlds__pd_info__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 4)));
    transform_hlds__pd_info__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 5)));
    transform_hlds__pd_info__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 6)));
    transform_hlds__pd_info__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 7)));
    transform_hlds__pd_info__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 8)));
    transform_hlds__pd_info__Var_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 9)));
    transform_hlds__pd_info__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 10)));
  }
}

void MR_CALL 
transform_hlds__pd_info__pd_info_unset_unfold_info_2_p_0(
  MR_Word transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_4,
  MR_Word * transform_hlds__pd_info__STATE_VARIABLE_PDInfo_5)
{
  {
    MR_Word transform_hlds__pd_info__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_4, (MR_Integer) 0)));
    MR_Word transform_hlds__pd_info__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_4, (MR_Integer) 2)));
    MR_Word transform_hlds__pd_info__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_4, (MR_Integer) 3)));
    MR_Word transform_hlds__pd_info__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_4, (MR_Integer) 4)));
    MR_Word transform_hlds__pd_info__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_4, (MR_Integer) 5)));
    MR_Word transform_hlds__pd_info__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_4, (MR_Integer) 6)));
    MR_Word transform_hlds__pd_info__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_4, (MR_Integer) 7)));
    MR_Integer transform_hlds__pd_info__Var_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_4, (MR_Integer) 8)));
    MR_Word transform_hlds__pd_info__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_4, (MR_Integer) 9)));
    MR_Word transform_hlds__pd_info__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_4, (MR_Integer) 10)));
    MR_Word transform_hlds__pd_info__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_4, (MR_Integer) 1)));

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
      *transform_hlds__pd_info__STATE_VARIABLE_PDInfo_5 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__pd_info__Var_8));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__pd_info__Var_10));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__pd_info__Var_11));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__pd_info__Var_12));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (transform_hlds__pd_info__Var_13));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (transform_hlds__pd_info__Var_14));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (transform_hlds__pd_info__Var_15));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (transform_hlds__pd_info__Var_16));
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (transform_hlds__pd_info__Var_17));
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (transform_hlds__pd_info__Var_18));
    }
  }
}

void MR_CALL 
transform_hlds__pd_info__pd_info_bind_var_to_functors_5_p_0(
  MR_Word transform_hlds__pd_info__Var_6,
  MR_Word transform_hlds__pd_info__MainConsId_7,
  MR_Word transform_hlds__pd_info__OtherConsIds_8,
  MR_Word transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_17,
  MR_Word * transform_hlds__pd_info__STATE_VARIABLE_PDInfo_18)
{
  {
    MR_Word transform_hlds__pd_info__InstMap0_10;
    MR_Word transform_hlds__pd_info__ModuleInfo0_11;
    MR_Word transform_hlds__pd_info__ProcInfo_12;
    MR_Word transform_hlds__pd_info__VarTypes_13;
    MR_Word transform_hlds__pd_info__Type_14;
    MR_Word transform_hlds__pd_info__InstMap_15;
    MR_Word transform_hlds__pd_info__ModuleInfo_16;
    MR_Word transform_hlds__pd_info__STATE_VARIABLE_PDInfo_19_19;
    MR_Word transform_hlds__pd_info__Var_22;
    MR_Word transform_hlds__pd_info__Var_23;
    MR_Word transform_hlds__pd_info__Var_24;
    MR_Word transform_hlds__pd_info__Var_25;
    MR_Word transform_hlds__pd_info__Var_26;
    MR_Word transform_hlds__pd_info__Var_27;
    MR_Word transform_hlds__pd_info__Var_28;
    MR_Integer transform_hlds__pd_info__Var_29;
    MR_Word transform_hlds__pd_info__Var_30;
    MR_Word transform_hlds__pd_info__Var_31;
    MR_Word transform_hlds__pd_info__Var_38;
    MR_Word transform_hlds__pd_info__Var_39;
    MR_Word transform_hlds__pd_info__Var_40;
    MR_Word transform_hlds__pd_info__Var_41;
    MR_Word transform_hlds__pd_info__Var_42;
    MR_Word transform_hlds__pd_info__Var_43;
    MR_Word transform_hlds__pd_info__Var_44;
    MR_Integer transform_hlds__pd_info__Var_45;
    MR_Word transform_hlds__pd_info__Var_46;
    MR_Word transform_hlds__pd_info__Var_47;
    MR_Word transform_hlds__pd_info__Var_37;

    transform_hlds__pd_info__pd_info_get_instmap_2_p_0(transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_17, &transform_hlds__pd_info__InstMap0_10);
    transform_hlds__pd_info__ModuleInfo0_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_17, (MR_Integer) 0)));
    transform_hlds__pd_info__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_17, (MR_Integer) 1)));
    transform_hlds__pd_info__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_17, (MR_Integer) 2)));
    transform_hlds__pd_info__Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_17, (MR_Integer) 3)));
    transform_hlds__pd_info__Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_17, (MR_Integer) 4)));
    transform_hlds__pd_info__Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_17, (MR_Integer) 5)));
    transform_hlds__pd_info__Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_17, (MR_Integer) 6)));
    transform_hlds__pd_info__Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_17, (MR_Integer) 7)));
    transform_hlds__pd_info__Var_29 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_17, (MR_Integer) 8)));
    transform_hlds__pd_info__Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_17, (MR_Integer) 9)));
    transform_hlds__pd_info__Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_17, (MR_Integer) 10)));
    transform_hlds__pd_info__pd_info_get_proc_info_2_p_0(transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_17, &transform_hlds__pd_info__ProcInfo_12);
    hlds__hlds_pred__proc_info_get_vartypes_2_p_0(transform_hlds__pd_info__ProcInfo_12, &transform_hlds__pd_info__VarTypes_13);
    hlds__vartypes__lookup_var_type_3_p_0(transform_hlds__pd_info__VarTypes_13, transform_hlds__pd_info__Var_6, &transform_hlds__pd_info__Type_14);
    hlds__instmap__bind_var_to_functors_8_p_0(transform_hlds__pd_info__Var_6, transform_hlds__pd_info__Type_14, transform_hlds__pd_info__MainConsId_7, transform_hlds__pd_info__OtherConsIds_8, transform_hlds__pd_info__InstMap0_10, &transform_hlds__pd_info__InstMap_15, transform_hlds__pd_info__ModuleInfo0_11, &transform_hlds__pd_info__ModuleInfo_16);
    transform_hlds__pd_info__pd_info_set_instmap_3_p_0(transform_hlds__pd_info__InstMap_15, transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_17, &transform_hlds__pd_info__STATE_VARIABLE_PDInfo_19_19);
    transform_hlds__pd_info__Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_19_19, (MR_Integer) 0)));
    transform_hlds__pd_info__Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_19_19, (MR_Integer) 1)));
    transform_hlds__pd_info__Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_19_19, (MR_Integer) 2)));
    transform_hlds__pd_info__Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_19_19, (MR_Integer) 3)));
    transform_hlds__pd_info__Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_19_19, (MR_Integer) 4)));
    transform_hlds__pd_info__Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_19_19, (MR_Integer) 5)));
    transform_hlds__pd_info__Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_19_19, (MR_Integer) 6)));
    transform_hlds__pd_info__Var_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_19_19, (MR_Integer) 7)));
    transform_hlds__pd_info__Var_45 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_19_19, (MR_Integer) 8)));
    transform_hlds__pd_info__Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_19_19, (MR_Integer) 9)));
    transform_hlds__pd_info__Var_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_19_19, (MR_Integer) 10)));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
      *transform_hlds__pd_info__STATE_VARIABLE_PDInfo_18 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__pd_info__ModuleInfo_16));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__pd_info__Var_38));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__pd_info__Var_39));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__pd_info__Var_40));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__pd_info__Var_41));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (transform_hlds__pd_info__Var_42));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (transform_hlds__pd_info__Var_43));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (transform_hlds__pd_info__Var_44));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (transform_hlds__pd_info__Var_45));
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (transform_hlds__pd_info__Var_46));
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (transform_hlds__pd_info__Var_47));
    }
  }
}

void MR_CALL 
transform_hlds__pd_info__pd_info_get_proc_info_2_p_0(
  MR_Word transform_hlds__pd_info__PDInfo_3,
  MR_Word * transform_hlds__pd_info__HeadVar__2_2)
{
  {
    MR_Word transform_hlds__pd_info__UnfoldInfo_4;
    MR_Word transform_hlds__pd_info__MaybeUnfoldInfo_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 1)));
    MR_Word transform_hlds__pd_info__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 0)));
    MR_Word transform_hlds__pd_info__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 2)));
    MR_Word transform_hlds__pd_info__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 3)));
    MR_Word transform_hlds__pd_info__Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 4)));
    MR_Word transform_hlds__pd_info__Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 5)));
    MR_Word transform_hlds__pd_info__Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 6)));
    MR_Word transform_hlds__pd_info__Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 7)));
    MR_Integer transform_hlds__pd_info__Var_28 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 8)));
    MR_Word transform_hlds__pd_info__Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 9)));
    MR_Word transform_hlds__pd_info__Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 10)));
    MR_Word transform_hlds__pd_info__Var_5;
    MR_Word transform_hlds__pd_info__Var_6;
    MR_Integer transform_hlds__pd_info__Var_7;
    MR_Word transform_hlds__pd_info__Var_8;
    MR_Word transform_hlds__pd_info__Var_9;
    MR_Word transform_hlds__pd_info__Var_10;
    MR_Word transform_hlds__pd_info__Var_11;
    MR_Word transform_hlds__pd_info__Var_12;
    MR_Integer transform_hlds__pd_info__Var_13;
    MR_Word transform_hlds__pd_info__Var_14;

    if ((transform_hlds__pd_info__MaybeUnfoldInfo_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      {
        mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.pd_info", (MR_String) "predicate \140transform_hlds.pd_info.pd_info_get_unfold_info\'/2", (MR_String) "unfold_info not set");
        return;
      }
    }
    else
      transform_hlds__pd_info__UnfoldInfo_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_info__MaybeUnfoldInfo_17, (MR_Integer) 0)));
    *transform_hlds__pd_info__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 0)));
    transform_hlds__pd_info__Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 1)));
    transform_hlds__pd_info__Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 2)));
    transform_hlds__pd_info__Var_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 3)));
    transform_hlds__pd_info__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 4)));
    transform_hlds__pd_info__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 5)));
    transform_hlds__pd_info__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 6)));
    transform_hlds__pd_info__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 7)));
    transform_hlds__pd_info__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 8)));
    transform_hlds__pd_info__Var_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 9)));
    transform_hlds__pd_info__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 10)));
  }
}

void MR_CALL 
transform_hlds__pd_info__pd_info_update_goal_3_p_0(
  MR_Word transform_hlds__pd_info__HeadVar__1_1,
  MR_Word transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_10,
  MR_Word * transform_hlds__pd_info__STATE_VARIABLE_PDInfo_11)
{
  {
    MR_Word transform_hlds__pd_info__GoalInfo_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__1_1, (MR_Integer) 1)));
    MR_Word transform_hlds__pd_info__InstMap0_7;
    MR_Word transform_hlds__pd_info__Delta_8;
    MR_Word transform_hlds__pd_info__InstMap_9;
    MR_Word transform_hlds__pd_info__Var_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__HeadVar__1_1, (MR_Integer) 0)));

    transform_hlds__pd_info__pd_info_get_instmap_2_p_0(transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_10, &transform_hlds__pd_info__InstMap0_7);
    transform_hlds__pd_info__Delta_8 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(transform_hlds__pd_info__GoalInfo_5);
    hlds__instmap__apply_instmap_delta_3_p_0(transform_hlds__pd_info__InstMap0_7, transform_hlds__pd_info__Delta_8, &transform_hlds__pd_info__InstMap_9);
    transform_hlds__pd_info__pd_info_set_instmap_3_p_0(transform_hlds__pd_info__InstMap_9, transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_10, transform_hlds__pd_info__STATE_VARIABLE_PDInfo_11);
  }
}

void MR_CALL 
transform_hlds__pd_info__pd_info_set_instmap_3_p_0(
  MR_Word transform_hlds__pd_info__InstMap_4,
  MR_Word transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8,
  MR_Word * transform_hlds__pd_info__STATE_VARIABLE_PDInfo_9)
{
  {
    MR_Word transform_hlds__pd_info__UnfoldInfo0_6;
    MR_Word transform_hlds__pd_info__UnfoldInfo_7;
    MR_Word transform_hlds__pd_info__MaybeUnfoldInfo_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8, (MR_Integer) 1)));
    MR_Word transform_hlds__pd_info__Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8, (MR_Integer) 0)));
    MR_Word transform_hlds__pd_info__Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8, (MR_Integer) 2)));
    MR_Word transform_hlds__pd_info__Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8, (MR_Integer) 3)));
    MR_Word transform_hlds__pd_info__Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8, (MR_Integer) 4)));
    MR_Word transform_hlds__pd_info__Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8, (MR_Integer) 5)));
    MR_Word transform_hlds__pd_info__Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8, (MR_Integer) 6)));
    MR_Word transform_hlds__pd_info__Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8, (MR_Integer) 7)));
    MR_Integer transform_hlds__pd_info__Var_35 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8, (MR_Integer) 8)));
    MR_Word transform_hlds__pd_info__Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8, (MR_Integer) 9)));
    MR_Word transform_hlds__pd_info__Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_8, (MR_Integer) 10)));
    MR_Word transform_hlds__pd_info__Var_43;
    MR_Word transform_hlds__pd_info__Var_11;
    MR_Word transform_hlds__pd_info__Var_12;
    MR_Integer transform_hlds__pd_info__Var_14;
    MR_Word transform_hlds__pd_info__Var_15;
    MR_Word transform_hlds__pd_info__Var_16;
    MR_Word transform_hlds__pd_info__Var_17;
    MR_Word transform_hlds__pd_info__Var_18;
    MR_Word transform_hlds__pd_info__Var_19;
    MR_Integer transform_hlds__pd_info__Var_20;
    MR_Word transform_hlds__pd_info__Var_21;
    MR_Word transform_hlds__pd_info__Var_13;

    if ((transform_hlds__pd_info__MaybeUnfoldInfo_24 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      {
        mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.pd_info", (MR_String) "predicate \140transform_hlds.pd_info.pd_info_get_unfold_info\'/2", (MR_String) "unfold_info not set");
        return;
      }
    }
    else
      transform_hlds__pd_info__UnfoldInfo0_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_info__MaybeUnfoldInfo_24, (MR_Integer) 0)));
    transform_hlds__pd_info__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo0_6, (MR_Integer) 0)));
    transform_hlds__pd_info__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo0_6, (MR_Integer) 1)));
    transform_hlds__pd_info__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo0_6, (MR_Integer) 2)));
    transform_hlds__pd_info__Var_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo0_6, (MR_Integer) 3)));
    transform_hlds__pd_info__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo0_6, (MR_Integer) 4)));
    transform_hlds__pd_info__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo0_6, (MR_Integer) 5)));
    transform_hlds__pd_info__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo0_6, (MR_Integer) 6)));
    transform_hlds__pd_info__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo0_6, (MR_Integer) 7)));
    transform_hlds__pd_info__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo0_6, (MR_Integer) 8)));
    transform_hlds__pd_info__Var_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo0_6, (MR_Integer) 9)));
    transform_hlds__pd_info__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo0_6, (MR_Integer) 10)));
    {
      transform_hlds__pd_info__UnfoldInfo_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_7, 0) = ((MR_Box) (transform_hlds__pd_info__Var_11));
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_7, 1) = ((MR_Box) (transform_hlds__pd_info__Var_12));
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_7, 2) = ((MR_Box) (transform_hlds__pd_info__InstMap_4));
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_7, 3) = ((MR_Box) (transform_hlds__pd_info__Var_14));
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_7, 4) = ((MR_Box) (transform_hlds__pd_info__Var_15));
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_7, 5) = ((MR_Box) (transform_hlds__pd_info__Var_16));
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_7, 6) = ((MR_Box) (transform_hlds__pd_info__Var_17));
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_7, 7) = ((MR_Box) (transform_hlds__pd_info__Var_18));
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_7, 8) = ((MR_Box) (transform_hlds__pd_info__Var_19));
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_7, 9) = ((MR_Box) (transform_hlds__pd_info__Var_20));
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_7, 10) = ((MR_Box) (transform_hlds__pd_info__Var_21));
    }
    {
      transform_hlds__pd_info__Var_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__pd_info__Var_43, 0) = ((MR_Box) (transform_hlds__pd_info__UnfoldInfo_7));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
      *transform_hlds__pd_info__STATE_VARIABLE_PDInfo_9 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__pd_info__Var_28));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__pd_info__Var_43));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__pd_info__Var_29));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__pd_info__Var_30));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__pd_info__Var_31));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (transform_hlds__pd_info__Var_32));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (transform_hlds__pd_info__Var_33));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (transform_hlds__pd_info__Var_34));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (transform_hlds__pd_info__Var_35));
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (transform_hlds__pd_info__Var_36));
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (transform_hlds__pd_info__Var_37));
    }
  }
}

void MR_CALL 
transform_hlds__pd_info__pd_info_get_instmap_2_p_0(
  MR_Word transform_hlds__pd_info__PDInfo_3,
  MR_Word * transform_hlds__pd_info__HeadVar__2_2)
{
  {
    MR_Word transform_hlds__pd_info__UnfoldInfo_4;
    MR_Word transform_hlds__pd_info__MaybeUnfoldInfo_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 1)));
    MR_Word transform_hlds__pd_info__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 0)));
    MR_Word transform_hlds__pd_info__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 2)));
    MR_Word transform_hlds__pd_info__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 3)));
    MR_Word transform_hlds__pd_info__Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 4)));
    MR_Word transform_hlds__pd_info__Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 5)));
    MR_Word transform_hlds__pd_info__Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 6)));
    MR_Word transform_hlds__pd_info__Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 7)));
    MR_Integer transform_hlds__pd_info__Var_28 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 8)));
    MR_Word transform_hlds__pd_info__Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 9)));
    MR_Word transform_hlds__pd_info__Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 10)));
    MR_Word transform_hlds__pd_info__Var_5;
    MR_Word transform_hlds__pd_info__Var_6;
    MR_Integer transform_hlds__pd_info__Var_7;
    MR_Word transform_hlds__pd_info__Var_8;
    MR_Word transform_hlds__pd_info__Var_9;
    MR_Word transform_hlds__pd_info__Var_10;
    MR_Word transform_hlds__pd_info__Var_11;
    MR_Word transform_hlds__pd_info__Var_12;
    MR_Integer transform_hlds__pd_info__Var_13;
    MR_Word transform_hlds__pd_info__Var_14;

    if ((transform_hlds__pd_info__MaybeUnfoldInfo_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      {
        mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.pd_info", (MR_String) "predicate \140transform_hlds.pd_info.pd_info_get_unfold_info\'/2", (MR_String) "unfold_info not set");
        return;
      }
    }
    else
      transform_hlds__pd_info__UnfoldInfo_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_info__MaybeUnfoldInfo_17, (MR_Integer) 0)));
    transform_hlds__pd_info__Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 0)));
    transform_hlds__pd_info__Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 1)));
    *transform_hlds__pd_info__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 2)));
    transform_hlds__pd_info__Var_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 3)));
    transform_hlds__pd_info__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 4)));
    transform_hlds__pd_info__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 5)));
    transform_hlds__pd_info__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 6)));
    transform_hlds__pd_info__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 7)));
    transform_hlds__pd_info__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 8)));
    transform_hlds__pd_info__Var_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 9)));
    transform_hlds__pd_info__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_4, (MR_Integer) 10)));
  }
}

void MR_CALL 
transform_hlds__pd_info__pd_info_set_useless_versions_3_p_0(
  MR_Word transform_hlds__pd_info__Versions_4,
  MR_Word transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_6,
  MR_Word * transform_hlds__pd_info__STATE_VARIABLE_PDInfo_7)
{
  {
    MR_Word transform_hlds__pd_info__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_6, (MR_Integer) 0)));
    MR_Word transform_hlds__pd_info__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_6, (MR_Integer) 1)));
    MR_Word transform_hlds__pd_info__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_6, (MR_Integer) 2)));
    MR_Word transform_hlds__pd_info__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_6, (MR_Integer) 3)));
    MR_Word transform_hlds__pd_info__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_6, (MR_Integer) 4)));
    MR_Word transform_hlds__pd_info__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_6, (MR_Integer) 5)));
    MR_Word transform_hlds__pd_info__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_6, (MR_Integer) 6)));
    MR_Word transform_hlds__pd_info__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_6, (MR_Integer) 7)));
    MR_Integer transform_hlds__pd_info__Var_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_6, (MR_Integer) 8)));
    MR_Word transform_hlds__pd_info__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_6, (MR_Integer) 9)));
    MR_Word transform_hlds__pd_info__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_6, (MR_Integer) 10)));

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
      *transform_hlds__pd_info__STATE_VARIABLE_PDInfo_7 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__pd_info__Var_9));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__pd_info__Var_10));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__pd_info__Var_11));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__pd_info__Var_12));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__pd_info__Var_13));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (transform_hlds__pd_info__Var_14));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (transform_hlds__pd_info__Var_15));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (transform_hlds__pd_info__Var_16));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (transform_hlds__pd_info__Var_17));
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (transform_hlds__pd_info__Var_18));
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (transform_hlds__pd_info__Versions_4));
    }
  }
}

void MR_CALL 
transform_hlds__pd_info__pd_info_set_created_versions_3_p_0(
  MR_Word transform_hlds__pd_info__Versions_4,
  MR_Word transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_6,
  MR_Word * transform_hlds__pd_info__STATE_VARIABLE_PDInfo_7)
{
  {
    MR_Word transform_hlds__pd_info__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_6, (MR_Integer) 0)));
    MR_Word transform_hlds__pd_info__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_6, (MR_Integer) 1)));
    MR_Word transform_hlds__pd_info__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_6, (MR_Integer) 2)));
    MR_Word transform_hlds__pd_info__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_6, (MR_Integer) 3)));
    MR_Word transform_hlds__pd_info__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_6, (MR_Integer) 4)));
    MR_Word transform_hlds__pd_info__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_6, (MR_Integer) 5)));
    MR_Word transform_hlds__pd_info__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_6, (MR_Integer) 6)));
    MR_Word transform_hlds__pd_info__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_6, (MR_Integer) 7)));
    MR_Integer transform_hlds__pd_info__Var_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_6, (MR_Integer) 8)));
    MR_Word transform_hlds__pd_info__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_6, (MR_Integer) 10)));
    MR_Word transform_hlds__pd_info__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_6, (MR_Integer) 9)));

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
      *transform_hlds__pd_info__STATE_VARIABLE_PDInfo_7 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__pd_info__Var_9));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__pd_info__Var_10));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__pd_info__Var_11));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__pd_info__Var_12));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__pd_info__Var_13));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (transform_hlds__pd_info__Var_14));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (transform_hlds__pd_info__Var_15));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (transform_hlds__pd_info__Var_16));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (transform_hlds__pd_info__Var_17));
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (transform_hlds__pd_info__Versions_4));
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (transform_hlds__pd_info__Var_19));
    }
  }
}

void MR_CALL 
transform_hlds__pd_info__pd_info_set_depth_3_p_0(
  MR_Integer transform_hlds__pd_info__Depth_4,
  MR_Word transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_6,
  MR_Word * transform_hlds__pd_info__STATE_VARIABLE_PDInfo_7)
{
  {
    MR_Word transform_hlds__pd_info__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_6, (MR_Integer) 0)));
    MR_Word transform_hlds__pd_info__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_6, (MR_Integer) 1)));
    MR_Word transform_hlds__pd_info__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_6, (MR_Integer) 2)));
    MR_Word transform_hlds__pd_info__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_6, (MR_Integer) 3)));
    MR_Word transform_hlds__pd_info__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_6, (MR_Integer) 4)));
    MR_Word transform_hlds__pd_info__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_6, (MR_Integer) 5)));
    MR_Word transform_hlds__pd_info__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_6, (MR_Integer) 6)));
    MR_Word transform_hlds__pd_info__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_6, (MR_Integer) 7)));
    MR_Word transform_hlds__pd_info__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_6, (MR_Integer) 9)));
    MR_Word transform_hlds__pd_info__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_6, (MR_Integer) 10)));
    MR_Integer transform_hlds__pd_info__Var_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_6, (MR_Integer) 8)));

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
      *transform_hlds__pd_info__STATE_VARIABLE_PDInfo_7 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__pd_info__Var_9));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__pd_info__Var_10));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__pd_info__Var_11));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__pd_info__Var_12));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__pd_info__Var_13));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (transform_hlds__pd_info__Var_14));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (transform_hlds__pd_info__Var_15));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (transform_hlds__pd_info__Var_16));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (transform_hlds__pd_info__Depth_4));
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (transform_hlds__pd_info__Var_18));
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (transform_hlds__pd_info__Var_19));
    }
  }
}

void MR_CALL 
transform_hlds__pd_info__pd_info_set_parent_versions_3_p_0(
  MR_Word transform_hlds__pd_info__Parents_4,
  MR_Word transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_6,
  MR_Word * transform_hlds__pd_info__STATE_VARIABLE_PDInfo_7)
{
  {
    MR_Word transform_hlds__pd_info__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_6, (MR_Integer) 0)));
    MR_Word transform_hlds__pd_info__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_6, (MR_Integer) 1)));
    MR_Word transform_hlds__pd_info__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_6, (MR_Integer) 2)));
    MR_Word transform_hlds__pd_info__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_6, (MR_Integer) 3)));
    MR_Word transform_hlds__pd_info__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_6, (MR_Integer) 4)));
    MR_Word transform_hlds__pd_info__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_6, (MR_Integer) 5)));
    MR_Word transform_hlds__pd_info__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_6, (MR_Integer) 6)));
    MR_Integer transform_hlds__pd_info__Var_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_6, (MR_Integer) 8)));
    MR_Word transform_hlds__pd_info__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_6, (MR_Integer) 9)));
    MR_Word transform_hlds__pd_info__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_6, (MR_Integer) 10)));
    MR_Word transform_hlds__pd_info__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_6, (MR_Integer) 7)));

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
      *transform_hlds__pd_info__STATE_VARIABLE_PDInfo_7 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__pd_info__Var_9));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__pd_info__Var_10));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__pd_info__Var_11));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__pd_info__Var_12));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__pd_info__Var_13));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (transform_hlds__pd_info__Var_14));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (transform_hlds__pd_info__Var_15));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (transform_hlds__pd_info__Parents_4));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (transform_hlds__pd_info__Var_17));
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (transform_hlds__pd_info__Var_18));
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (transform_hlds__pd_info__Var_19));
    }
  }
}

void MR_CALL 
transform_hlds__pd_info__pd_info_set_global_term_info_3_p_0(
  MR_Word transform_hlds__pd_info__TermInfo_4,
  MR_Word transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_6,
  MR_Word * transform_hlds__pd_info__STATE_VARIABLE_PDInfo_7)
{
  {
    MR_Word transform_hlds__pd_info__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_6, (MR_Integer) 0)));
    MR_Word transform_hlds__pd_info__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_6, (MR_Integer) 1)));
    MR_Word transform_hlds__pd_info__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_6, (MR_Integer) 2)));
    MR_Word transform_hlds__pd_info__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_6, (MR_Integer) 3)));
    MR_Word transform_hlds__pd_info__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_6, (MR_Integer) 4)));
    MR_Word transform_hlds__pd_info__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_6, (MR_Integer) 5)));
    MR_Word transform_hlds__pd_info__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_6, (MR_Integer) 7)));
    MR_Integer transform_hlds__pd_info__Var_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_6, (MR_Integer) 8)));
    MR_Word transform_hlds__pd_info__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_6, (MR_Integer) 9)));
    MR_Word transform_hlds__pd_info__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_6, (MR_Integer) 10)));
    MR_Word transform_hlds__pd_info__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_6, (MR_Integer) 6)));

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
      *transform_hlds__pd_info__STATE_VARIABLE_PDInfo_7 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__pd_info__Var_9));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__pd_info__Var_10));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__pd_info__Var_11));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__pd_info__Var_12));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__pd_info__Var_13));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (transform_hlds__pd_info__Var_14));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (transform_hlds__pd_info__TermInfo_4));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (transform_hlds__pd_info__Var_16));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (transform_hlds__pd_info__Var_17));
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (transform_hlds__pd_info__Var_18));
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (transform_hlds__pd_info__Var_19));
    }
  }
}

void MR_CALL 
transform_hlds__pd_info__pd_info_set_counter_3_p_0(
  MR_Word transform_hlds__pd_info__Counter_4,
  MR_Word transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_6,
  MR_Word * transform_hlds__pd_info__STATE_VARIABLE_PDInfo_7)
{
  {
    MR_Word transform_hlds__pd_info__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_6, (MR_Integer) 0)));
    MR_Word transform_hlds__pd_info__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_6, (MR_Integer) 1)));
    MR_Word transform_hlds__pd_info__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_6, (MR_Integer) 2)));
    MR_Word transform_hlds__pd_info__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_6, (MR_Integer) 3)));
    MR_Word transform_hlds__pd_info__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_6, (MR_Integer) 4)));
    MR_Word transform_hlds__pd_info__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_6, (MR_Integer) 6)));
    MR_Word transform_hlds__pd_info__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_6, (MR_Integer) 7)));
    MR_Integer transform_hlds__pd_info__Var_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_6, (MR_Integer) 8)));
    MR_Word transform_hlds__pd_info__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_6, (MR_Integer) 9)));
    MR_Word transform_hlds__pd_info__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_6, (MR_Integer) 10)));
    MR_Word transform_hlds__pd_info__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_6, (MR_Integer) 5)));

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
      *transform_hlds__pd_info__STATE_VARIABLE_PDInfo_7 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__pd_info__Var_9));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__pd_info__Var_10));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__pd_info__Var_11));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__pd_info__Var_12));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__pd_info__Var_13));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (transform_hlds__pd_info__Counter_4));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (transform_hlds__pd_info__Var_15));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (transform_hlds__pd_info__Var_16));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (transform_hlds__pd_info__Var_17));
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (transform_hlds__pd_info__Var_18));
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (transform_hlds__pd_info__Var_19));
    }
  }
}

void MR_CALL 
transform_hlds__pd_info__pd_info_set_proc_arg_info_3_p_0(
  MR_Word transform_hlds__pd_info__ProcArgInfo_4,
  MR_Word transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_6,
  MR_Word * transform_hlds__pd_info__STATE_VARIABLE_PDInfo_7)
{
  {
    MR_Word transform_hlds__pd_info__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_6, (MR_Integer) 0)));
    MR_Word transform_hlds__pd_info__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_6, (MR_Integer) 1)));
    MR_Word transform_hlds__pd_info__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_6, (MR_Integer) 2)));
    MR_Word transform_hlds__pd_info__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_6, (MR_Integer) 3)));
    MR_Word transform_hlds__pd_info__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_6, (MR_Integer) 5)));
    MR_Word transform_hlds__pd_info__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_6, (MR_Integer) 6)));
    MR_Word transform_hlds__pd_info__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_6, (MR_Integer) 7)));
    MR_Integer transform_hlds__pd_info__Var_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_6, (MR_Integer) 8)));
    MR_Word transform_hlds__pd_info__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_6, (MR_Integer) 9)));
    MR_Word transform_hlds__pd_info__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_6, (MR_Integer) 10)));
    MR_Word transform_hlds__pd_info__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_6, (MR_Integer) 4)));

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
      *transform_hlds__pd_info__STATE_VARIABLE_PDInfo_7 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__pd_info__Var_9));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__pd_info__Var_10));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__pd_info__Var_11));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__pd_info__Var_12));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__pd_info__ProcArgInfo_4));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (transform_hlds__pd_info__Var_14));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (transform_hlds__pd_info__Var_15));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (transform_hlds__pd_info__Var_16));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (transform_hlds__pd_info__Var_17));
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (transform_hlds__pd_info__Var_18));
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (transform_hlds__pd_info__Var_19));
    }
  }
}

void MR_CALL 
transform_hlds__pd_info__pd_info_set_versions_3_p_0(
  MR_Word transform_hlds__pd_info__Versions_4,
  MR_Word transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_6,
  MR_Word * transform_hlds__pd_info__STATE_VARIABLE_PDInfo_7)
{
  {
    MR_Word transform_hlds__pd_info__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_6, (MR_Integer) 0)));
    MR_Word transform_hlds__pd_info__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_6, (MR_Integer) 1)));
    MR_Word transform_hlds__pd_info__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_6, (MR_Integer) 2)));
    MR_Word transform_hlds__pd_info__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_6, (MR_Integer) 4)));
    MR_Word transform_hlds__pd_info__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_6, (MR_Integer) 5)));
    MR_Word transform_hlds__pd_info__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_6, (MR_Integer) 6)));
    MR_Word transform_hlds__pd_info__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_6, (MR_Integer) 7)));
    MR_Integer transform_hlds__pd_info__Var_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_6, (MR_Integer) 8)));
    MR_Word transform_hlds__pd_info__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_6, (MR_Integer) 9)));
    MR_Word transform_hlds__pd_info__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_6, (MR_Integer) 10)));
    MR_Word transform_hlds__pd_info__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_6, (MR_Integer) 3)));

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
      *transform_hlds__pd_info__STATE_VARIABLE_PDInfo_7 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__pd_info__Var_9));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__pd_info__Var_10));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__pd_info__Var_11));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__pd_info__Versions_4));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__pd_info__Var_13));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (transform_hlds__pd_info__Var_14));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (transform_hlds__pd_info__Var_15));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (transform_hlds__pd_info__Var_16));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (transform_hlds__pd_info__Var_17));
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (transform_hlds__pd_info__Var_18));
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (transform_hlds__pd_info__Var_19));
    }
  }
}

void MR_CALL 
transform_hlds__pd_info__pd_info_set_goal_version_index_3_p_0(
  MR_Word transform_hlds__pd_info__Index_4,
  MR_Word transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_6,
  MR_Word * transform_hlds__pd_info__STATE_VARIABLE_PDInfo_7)
{
  {
    MR_Word transform_hlds__pd_info__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_6, (MR_Integer) 0)));
    MR_Word transform_hlds__pd_info__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_6, (MR_Integer) 1)));
    MR_Word transform_hlds__pd_info__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_6, (MR_Integer) 3)));
    MR_Word transform_hlds__pd_info__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_6, (MR_Integer) 4)));
    MR_Word transform_hlds__pd_info__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_6, (MR_Integer) 5)));
    MR_Word transform_hlds__pd_info__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_6, (MR_Integer) 6)));
    MR_Word transform_hlds__pd_info__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_6, (MR_Integer) 7)));
    MR_Integer transform_hlds__pd_info__Var_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_6, (MR_Integer) 8)));
    MR_Word transform_hlds__pd_info__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_6, (MR_Integer) 9)));
    MR_Word transform_hlds__pd_info__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_6, (MR_Integer) 10)));
    MR_Word transform_hlds__pd_info__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_6, (MR_Integer) 2)));

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
      *transform_hlds__pd_info__STATE_VARIABLE_PDInfo_7 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__pd_info__Var_9));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__pd_info__Var_10));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__pd_info__Index_4));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__pd_info__Var_12));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__pd_info__Var_13));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (transform_hlds__pd_info__Var_14));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (transform_hlds__pd_info__Var_15));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (transform_hlds__pd_info__Var_16));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (transform_hlds__pd_info__Var_17));
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (transform_hlds__pd_info__Var_18));
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (transform_hlds__pd_info__Var_19));
    }
  }
}

void MR_CALL 
transform_hlds__pd_info__pd_info_set_unfold_info_3_p_0(
  MR_Word transform_hlds__pd_info__UnfoldInfo_4,
  MR_Word transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_6,
  MR_Word * transform_hlds__pd_info__STATE_VARIABLE_PDInfo_7)
{
  {
    MR_Word transform_hlds__pd_info__Var_9;
    MR_Word transform_hlds__pd_info__Var_10;
    MR_Word transform_hlds__pd_info__Var_12;
    MR_Word transform_hlds__pd_info__Var_13;
    MR_Word transform_hlds__pd_info__Var_14;
    MR_Word transform_hlds__pd_info__Var_15;
    MR_Word transform_hlds__pd_info__Var_16;
    MR_Word transform_hlds__pd_info__Var_17;
    MR_Integer transform_hlds__pd_info__Var_18;
    MR_Word transform_hlds__pd_info__Var_19;
    MR_Word transform_hlds__pd_info__Var_20;
    MR_Word transform_hlds__pd_info__Var_11;

    {
      transform_hlds__pd_info__Var_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__pd_info__Var_9, 0) = ((MR_Box) (transform_hlds__pd_info__UnfoldInfo_4));
    }
    transform_hlds__pd_info__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_6, (MR_Integer) 0)));
    transform_hlds__pd_info__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_6, (MR_Integer) 1)));
    transform_hlds__pd_info__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_6, (MR_Integer) 2)));
    transform_hlds__pd_info__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_6, (MR_Integer) 3)));
    transform_hlds__pd_info__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_6, (MR_Integer) 4)));
    transform_hlds__pd_info__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_6, (MR_Integer) 5)));
    transform_hlds__pd_info__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_6, (MR_Integer) 6)));
    transform_hlds__pd_info__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_6, (MR_Integer) 7)));
    transform_hlds__pd_info__Var_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_6, (MR_Integer) 8)));
    transform_hlds__pd_info__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_6, (MR_Integer) 9)));
    transform_hlds__pd_info__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_6, (MR_Integer) 10)));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
      *transform_hlds__pd_info__STATE_VARIABLE_PDInfo_7 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__pd_info__Var_10));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__pd_info__Var_9));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__pd_info__Var_12));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__pd_info__Var_13));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__pd_info__Var_14));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (transform_hlds__pd_info__Var_15));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (transform_hlds__pd_info__Var_16));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (transform_hlds__pd_info__Var_17));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (transform_hlds__pd_info__Var_18));
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (transform_hlds__pd_info__Var_19));
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (transform_hlds__pd_info__Var_20));
    }
  }
}

void MR_CALL 
transform_hlds__pd_info__pd_info_set_module_info_3_p_0(
  MR_Word transform_hlds__pd_info__ModuleInfo_4,
  MR_Word transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_6,
  MR_Word * transform_hlds__pd_info__STATE_VARIABLE_PDInfo_7)
{
  {
    MR_Word transform_hlds__pd_info__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_6, (MR_Integer) 1)));
    MR_Word transform_hlds__pd_info__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_6, (MR_Integer) 2)));
    MR_Word transform_hlds__pd_info__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_6, (MR_Integer) 3)));
    MR_Word transform_hlds__pd_info__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_6, (MR_Integer) 4)));
    MR_Word transform_hlds__pd_info__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_6, (MR_Integer) 5)));
    MR_Word transform_hlds__pd_info__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_6, (MR_Integer) 6)));
    MR_Word transform_hlds__pd_info__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_6, (MR_Integer) 7)));
    MR_Integer transform_hlds__pd_info__Var_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_6, (MR_Integer) 8)));
    MR_Word transform_hlds__pd_info__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_6, (MR_Integer) 9)));
    MR_Word transform_hlds__pd_info__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_6, (MR_Integer) 10)));
    MR_Word transform_hlds__pd_info__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_6, (MR_Integer) 0)));

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
      *transform_hlds__pd_info__STATE_VARIABLE_PDInfo_7 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__pd_info__ModuleInfo_4));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__pd_info__Var_10));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__pd_info__Var_11));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__pd_info__Var_12));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__pd_info__Var_13));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (transform_hlds__pd_info__Var_14));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (transform_hlds__pd_info__Var_15));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (transform_hlds__pd_info__Var_16));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (transform_hlds__pd_info__Var_17));
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (transform_hlds__pd_info__Var_18));
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (transform_hlds__pd_info__Var_19));
    }
  }
}

void MR_CALL 
transform_hlds__pd_info__pd_info_get_useless_versions_2_p_0(
  MR_Word transform_hlds__pd_info__PDInfo_3,
  MR_Word * transform_hlds__pd_info__HeadVar__2_2)
{
  {
    MR_Word transform_hlds__pd_info__Var_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 0)));
    MR_Word transform_hlds__pd_info__Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 1)));
    MR_Word transform_hlds__pd_info__Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 2)));
    MR_Word transform_hlds__pd_info__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 3)));
    MR_Word transform_hlds__pd_info__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 4)));
    MR_Word transform_hlds__pd_info__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 5)));
    MR_Word transform_hlds__pd_info__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 6)));
    MR_Word transform_hlds__pd_info__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 7)));
    MR_Integer transform_hlds__pd_info__Var_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 8)));
    MR_Word transform_hlds__pd_info__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 9)));

    *transform_hlds__pd_info__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 10)));
  }
}

void MR_CALL 
transform_hlds__pd_info__pd_info_get_created_versions_2_p_0(
  MR_Word transform_hlds__pd_info__PDInfo_3,
  MR_Word * transform_hlds__pd_info__HeadVar__2_2)
{
  {
    MR_Word transform_hlds__pd_info__Var_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 0)));
    MR_Word transform_hlds__pd_info__Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 1)));
    MR_Word transform_hlds__pd_info__Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 2)));
    MR_Word transform_hlds__pd_info__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 3)));
    MR_Word transform_hlds__pd_info__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 4)));
    MR_Word transform_hlds__pd_info__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 5)));
    MR_Word transform_hlds__pd_info__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 6)));
    MR_Word transform_hlds__pd_info__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 7)));
    MR_Integer transform_hlds__pd_info__Var_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 8)));
    MR_Word transform_hlds__pd_info__Var_13;

    *transform_hlds__pd_info__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 9)));
    transform_hlds__pd_info__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 10)));
  }
}

void MR_CALL 
transform_hlds__pd_info__pd_info_get_depth_2_p_0(
  MR_Word transform_hlds__pd_info__PDInfo_3,
  MR_Integer * transform_hlds__pd_info__HeadVar__2_2)
{
  {
    MR_Word transform_hlds__pd_info__Var_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 0)));
    MR_Word transform_hlds__pd_info__Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 1)));
    MR_Word transform_hlds__pd_info__Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 2)));
    MR_Word transform_hlds__pd_info__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 3)));
    MR_Word transform_hlds__pd_info__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 4)));
    MR_Word transform_hlds__pd_info__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 5)));
    MR_Word transform_hlds__pd_info__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 6)));
    MR_Word transform_hlds__pd_info__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 7)));
    MR_Word transform_hlds__pd_info__Var_12;
    MR_Word transform_hlds__pd_info__Var_13;

    *transform_hlds__pd_info__HeadVar__2_2 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 8)));
    transform_hlds__pd_info__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 9)));
    transform_hlds__pd_info__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 10)));
  }
}

void MR_CALL 
transform_hlds__pd_info__pd_info_get_parent_versions_2_p_0(
  MR_Word transform_hlds__pd_info__PDInfo_3,
  MR_Word * transform_hlds__pd_info__HeadVar__2_2)
{
  {
    MR_Word transform_hlds__pd_info__Var_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 0)));
    MR_Word transform_hlds__pd_info__Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 1)));
    MR_Word transform_hlds__pd_info__Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 2)));
    MR_Word transform_hlds__pd_info__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 3)));
    MR_Word transform_hlds__pd_info__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 4)));
    MR_Word transform_hlds__pd_info__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 5)));
    MR_Word transform_hlds__pd_info__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 6)));
    MR_Integer transform_hlds__pd_info__Var_11;
    MR_Word transform_hlds__pd_info__Var_12;
    MR_Word transform_hlds__pd_info__Var_13;

    *transform_hlds__pd_info__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 7)));
    transform_hlds__pd_info__Var_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 8)));
    transform_hlds__pd_info__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 9)));
    transform_hlds__pd_info__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 10)));
  }
}

void MR_CALL 
transform_hlds__pd_info__pd_info_get_global_term_info_2_p_0(
  MR_Word transform_hlds__pd_info__PDInfo_3,
  MR_Word * transform_hlds__pd_info__HeadVar__2_2)
{
  {
    MR_Word transform_hlds__pd_info__Var_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 0)));
    MR_Word transform_hlds__pd_info__Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 1)));
    MR_Word transform_hlds__pd_info__Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 2)));
    MR_Word transform_hlds__pd_info__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 3)));
    MR_Word transform_hlds__pd_info__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 4)));
    MR_Word transform_hlds__pd_info__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 5)));
    MR_Word transform_hlds__pd_info__Var_10;
    MR_Integer transform_hlds__pd_info__Var_11;
    MR_Word transform_hlds__pd_info__Var_12;
    MR_Word transform_hlds__pd_info__Var_13;

    *transform_hlds__pd_info__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 6)));
    transform_hlds__pd_info__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 7)));
    transform_hlds__pd_info__Var_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 8)));
    transform_hlds__pd_info__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 9)));
    transform_hlds__pd_info__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 10)));
  }
}

void MR_CALL 
transform_hlds__pd_info__pd_info_get_counter_2_p_0(
  MR_Word transform_hlds__pd_info__PDInfo_3,
  MR_Word * transform_hlds__pd_info__HeadVar__2_2)
{
  {
    MR_Word transform_hlds__pd_info__Var_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 0)));
    MR_Word transform_hlds__pd_info__Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 1)));
    MR_Word transform_hlds__pd_info__Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 2)));
    MR_Word transform_hlds__pd_info__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 3)));
    MR_Word transform_hlds__pd_info__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 4)));
    MR_Word transform_hlds__pd_info__Var_9;
    MR_Word transform_hlds__pd_info__Var_10;
    MR_Integer transform_hlds__pd_info__Var_11;
    MR_Word transform_hlds__pd_info__Var_12;
    MR_Word transform_hlds__pd_info__Var_13;

    *transform_hlds__pd_info__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 5)));
    transform_hlds__pd_info__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 6)));
    transform_hlds__pd_info__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 7)));
    transform_hlds__pd_info__Var_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 8)));
    transform_hlds__pd_info__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 9)));
    transform_hlds__pd_info__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 10)));
  }
}

void MR_CALL 
transform_hlds__pd_info__pd_info_get_proc_arg_info_2_p_0(
  MR_Word transform_hlds__pd_info__PDInfo_3,
  MR_Word * transform_hlds__pd_info__HeadVar__2_2)
{
  {
    MR_Word transform_hlds__pd_info__Var_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 0)));
    MR_Word transform_hlds__pd_info__Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 1)));
    MR_Word transform_hlds__pd_info__Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 2)));
    MR_Word transform_hlds__pd_info__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 3)));
    MR_Word transform_hlds__pd_info__Var_8;
    MR_Word transform_hlds__pd_info__Var_9;
    MR_Word transform_hlds__pd_info__Var_10;
    MR_Integer transform_hlds__pd_info__Var_11;
    MR_Word transform_hlds__pd_info__Var_12;
    MR_Word transform_hlds__pd_info__Var_13;

    *transform_hlds__pd_info__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 4)));
    transform_hlds__pd_info__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 5)));
    transform_hlds__pd_info__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 6)));
    transform_hlds__pd_info__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 7)));
    transform_hlds__pd_info__Var_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 8)));
    transform_hlds__pd_info__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 9)));
    transform_hlds__pd_info__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 10)));
  }
}

void MR_CALL 
transform_hlds__pd_info__pd_info_get_versions_2_p_0(
  MR_Word transform_hlds__pd_info__PDInfo_3,
  MR_Word * transform_hlds__pd_info__HeadVar__2_2)
{
  {
    MR_Word transform_hlds__pd_info__Var_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 0)));
    MR_Word transform_hlds__pd_info__Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 1)));
    MR_Word transform_hlds__pd_info__Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 2)));
    MR_Word transform_hlds__pd_info__Var_7;
    MR_Word transform_hlds__pd_info__Var_8;
    MR_Word transform_hlds__pd_info__Var_9;
    MR_Word transform_hlds__pd_info__Var_10;
    MR_Integer transform_hlds__pd_info__Var_11;
    MR_Word transform_hlds__pd_info__Var_12;
    MR_Word transform_hlds__pd_info__Var_13;

    *transform_hlds__pd_info__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 3)));
    transform_hlds__pd_info__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 4)));
    transform_hlds__pd_info__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 5)));
    transform_hlds__pd_info__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 6)));
    transform_hlds__pd_info__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 7)));
    transform_hlds__pd_info__Var_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 8)));
    transform_hlds__pd_info__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 9)));
    transform_hlds__pd_info__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 10)));
  }
}

void MR_CALL 
transform_hlds__pd_info__pd_info_get_goal_version_index_2_p_0(
  MR_Word transform_hlds__pd_info__PDInfo_3,
  MR_Word * transform_hlds__pd_info__HeadVar__2_2)
{
  {
    MR_Word transform_hlds__pd_info__Var_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 0)));
    MR_Word transform_hlds__pd_info__Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 1)));
    MR_Word transform_hlds__pd_info__Var_6;
    MR_Word transform_hlds__pd_info__Var_7;
    MR_Word transform_hlds__pd_info__Var_8;
    MR_Word transform_hlds__pd_info__Var_9;
    MR_Word transform_hlds__pd_info__Var_10;
    MR_Integer transform_hlds__pd_info__Var_11;
    MR_Word transform_hlds__pd_info__Var_12;
    MR_Word transform_hlds__pd_info__Var_13;

    *transform_hlds__pd_info__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 2)));
    transform_hlds__pd_info__Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 3)));
    transform_hlds__pd_info__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 4)));
    transform_hlds__pd_info__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 5)));
    transform_hlds__pd_info__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 6)));
    transform_hlds__pd_info__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 7)));
    transform_hlds__pd_info__Var_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 8)));
    transform_hlds__pd_info__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 9)));
    transform_hlds__pd_info__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 10)));
  }
}

void MR_CALL 
transform_hlds__pd_info__pd_info_get_unfold_info_2_p_0(
  MR_Word transform_hlds__pd_info__PDInfo_3,
  MR_Word * transform_hlds__pd_info__UnfoldInfo_4)
{
  {
    MR_Word transform_hlds__pd_info__MaybeUnfoldInfo_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 1)));
    MR_Word transform_hlds__pd_info__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 0)));
    MR_Word transform_hlds__pd_info__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 2)));
    MR_Word transform_hlds__pd_info__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 3)));
    MR_Word transform_hlds__pd_info__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 4)));
    MR_Word transform_hlds__pd_info__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 5)));
    MR_Word transform_hlds__pd_info__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 6)));
    MR_Word transform_hlds__pd_info__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 7)));
    MR_Integer transform_hlds__pd_info__Var_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 8)));
    MR_Word transform_hlds__pd_info__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 9)));
    MR_Word transform_hlds__pd_info__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 10)));

    if ((transform_hlds__pd_info__MaybeUnfoldInfo_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      {
        mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.pd_info", (MR_String) "predicate \140transform_hlds.pd_info.pd_info_get_unfold_info\'/2", (MR_String) "unfold_info not set");
        return;
      }
    }
    else
      *transform_hlds__pd_info__UnfoldInfo_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_info__MaybeUnfoldInfo_5, (MR_Integer) 0)));
  }
}

void MR_CALL 
transform_hlds__pd_info__pd_info_get_module_info_2_p_0(
  MR_Word transform_hlds__pd_info__PDInfo_3,
  MR_Word * transform_hlds__pd_info__HeadVar__2_2)
{
  {
    MR_Word transform_hlds__pd_info__Var_4;
    MR_Word transform_hlds__pd_info__Var_5;
    MR_Word transform_hlds__pd_info__Var_6;
    MR_Word transform_hlds__pd_info__Var_7;
    MR_Word transform_hlds__pd_info__Var_8;
    MR_Word transform_hlds__pd_info__Var_9;
    MR_Word transform_hlds__pd_info__Var_10;
    MR_Integer transform_hlds__pd_info__Var_11;
    MR_Word transform_hlds__pd_info__Var_12;
    MR_Word transform_hlds__pd_info__Var_13;

    *transform_hlds__pd_info__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 0)));
    transform_hlds__pd_info__Var_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 1)));
    transform_hlds__pd_info__Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 2)));
    transform_hlds__pd_info__Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 3)));
    transform_hlds__pd_info__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 4)));
    transform_hlds__pd_info__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 5)));
    transform_hlds__pd_info__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 6)));
    transform_hlds__pd_info__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 7)));
    transform_hlds__pd_info__Var_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 8)));
    transform_hlds__pd_info__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 9)));
    transform_hlds__pd_info__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__PDInfo_3, (MR_Integer) 10)));
  }
}

void MR_CALL 
transform_hlds__pd_info__pd_info_init_unfold_info_5_p_0(
  MR_Word transform_hlds__pd_info__PredProcId_6,
  MR_Word transform_hlds__pd_info__PredInfo_7,
  MR_Word transform_hlds__pd_info__ProcInfo_8,
  MR_Word transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_18,
  MR_Word * transform_hlds__pd_info__STATE_VARIABLE_PDInfo_19)
{
  {
    MR_Word transform_hlds__pd_info__ModuleInfo_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_18, (MR_Integer) 0)));
    MR_Word transform_hlds__pd_info__ArgModes_11;
    MR_Word transform_hlds__pd_info__HeadInstVars_12;
    MR_Word transform_hlds__pd_info__InstMap_13;
    MR_Word transform_hlds__pd_info__LocalTermInfo_15;
    MR_Word transform_hlds__pd_info__Parents_16;
    MR_Word transform_hlds__pd_info__UnfoldInfo_17;
    MR_Word transform_hlds__pd_info__Var_41;
    MR_Word transform_hlds__pd_info__Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_18, (MR_Integer) 1)));
    MR_Word transform_hlds__pd_info__Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_18, (MR_Integer) 2)));
    MR_Word transform_hlds__pd_info__Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_18, (MR_Integer) 3)));
    MR_Word transform_hlds__pd_info__Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_18, (MR_Integer) 4)));
    MR_Word transform_hlds__pd_info__Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_18, (MR_Integer) 5)));
    MR_Word transform_hlds__pd_info__Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_18, (MR_Integer) 6)));
    MR_Word transform_hlds__pd_info__Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_18, (MR_Integer) 7)));
    MR_Integer transform_hlds__pd_info__Var_33 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_18, (MR_Integer) 8)));
    MR_Word transform_hlds__pd_info__Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_18, (MR_Integer) 9)));
    MR_Word transform_hlds__pd_info__Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_18, (MR_Integer) 10)));
    MR_Word transform_hlds__pd_info__Var_42;
    MR_Word transform_hlds__pd_info__Var_44;
    MR_Word transform_hlds__pd_info__Var_45;
    MR_Word transform_hlds__pd_info__Var_46;
    MR_Word transform_hlds__pd_info__Var_47;
    MR_Word transform_hlds__pd_info__Var_48;
    MR_Word transform_hlds__pd_info__Var_49;
    MR_Integer transform_hlds__pd_info__Var_50;
    MR_Word transform_hlds__pd_info__Var_51;
    MR_Word transform_hlds__pd_info__Var_52;
    MR_Word transform_hlds__pd_info__Var_43;

    hlds__hlds_pred__proc_info_get_argmodes_2_p_0(transform_hlds__pd_info__ProcInfo_8, &transform_hlds__pd_info__ArgModes_11);
    check_hlds__modecheck_util__get_constrained_inst_vars_3_p_0(transform_hlds__pd_info__ModuleInfo_10, transform_hlds__pd_info__ArgModes_11, &transform_hlds__pd_info__HeadInstVars_12);
    hlds__hlds_pred__proc_info_get_initial_instmap_3_p_0(transform_hlds__pd_info__ProcInfo_8, transform_hlds__pd_info__ModuleInfo_10, &transform_hlds__pd_info__InstMap_13);
    transform_hlds__pd_term__local_term_info_init_1_p_0(&transform_hlds__pd_info__LocalTermInfo_15);
    transform_hlds__pd_info__Parents_16 = mercury__set__make_singleton_set_1_f_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, ((MR_Box) (transform_hlds__pd_info__PredProcId_6)));
    {
      transform_hlds__pd_info__UnfoldInfo_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_17, 0) = ((MR_Box) (transform_hlds__pd_info__ProcInfo_8));
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_17, 1) = ((MR_Box) (transform_hlds__pd_info__HeadInstVars_12));
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_17, 2) = ((MR_Box) (transform_hlds__pd_info__InstMap_13));
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_17, 3) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_17, 4) = ((MR_Box) (transform_hlds__pd_info__LocalTermInfo_15));
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_17, 5) = ((MR_Box) (transform_hlds__pd_info__PredInfo_7));
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_17, 6) = ((MR_Box) (transform_hlds__pd_info__Parents_16));
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_17, 7) = ((MR_Box) (transform_hlds__pd_info__PredProcId_6));
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_17, 8) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_17, 9) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(0), transform_hlds__pd_info__UnfoldInfo_17, 10) = ((MR_Box) ((MR_Integer) 0));
    }
    {
      transform_hlds__pd_info__Var_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__pd_info__Var_41, 0) = ((MR_Box) (transform_hlds__pd_info__UnfoldInfo_17));
    }
    transform_hlds__pd_info__Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_18, (MR_Integer) 0)));
    transform_hlds__pd_info__Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_18, (MR_Integer) 1)));
    transform_hlds__pd_info__Var_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_18, (MR_Integer) 2)));
    transform_hlds__pd_info__Var_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_18, (MR_Integer) 3)));
    transform_hlds__pd_info__Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_18, (MR_Integer) 4)));
    transform_hlds__pd_info__Var_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_18, (MR_Integer) 5)));
    transform_hlds__pd_info__Var_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_18, (MR_Integer) 6)));
    transform_hlds__pd_info__Var_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_18, (MR_Integer) 7)));
    transform_hlds__pd_info__Var_50 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_18, (MR_Integer) 8)));
    transform_hlds__pd_info__Var_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_18, (MR_Integer) 9)));
    transform_hlds__pd_info__Var_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_info__STATE_VARIABLE_PDInfo_0_18, (MR_Integer) 10)));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
      *transform_hlds__pd_info__STATE_VARIABLE_PDInfo_19 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__pd_info__Var_42));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__pd_info__Var_41));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__pd_info__Var_44));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__pd_info__Var_45));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__pd_info__Var_46));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (transform_hlds__pd_info__Var_47));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (transform_hlds__pd_info__Var_48));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (transform_hlds__pd_info__Var_49));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (transform_hlds__pd_info__Var_50));
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (transform_hlds__pd_info__Var_51));
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (transform_hlds__pd_info__Var_52));
    }
  }
}

void MR_CALL 
transform_hlds__pd_info__pd_info_init_3_p_0(
  MR_Word transform_hlds__pd_info__ModuleInfo_4,
  MR_Word transform_hlds__pd_info__ProcArgInfos_5,
  MR_Word * transform_hlds__pd_info__PDInfo_6)
{
  {
    MR_Word transform_hlds__pd_info__TypeInfo_17_17 = (MR_Word) &transform_hlds__pd_info_scalar_common_1[0];
    MR_Word transform_hlds__pd_info__TypeCtorInfo_18_18;
    MR_Word transform_hlds__pd_info__GoalVersionIndex_7;
    MR_Word transform_hlds__pd_info__Versions_8;
    MR_Word transform_hlds__pd_info__ParentVersions_9;
    MR_Word transform_hlds__pd_info__GlobalInfo_10;
    MR_Word transform_hlds__pd_info__CreatedVersions_11;
    MR_Word transform_hlds__pd_info__UselessVersions_12;
    MR_Word transform_hlds__pd_info__Var_14;

    mercury__map__init_1_p_0(transform_hlds__pd_info__TypeInfo_17_17, transform_hlds__pd_info__TypeInfo_17_17, &transform_hlds__pd_info__GoalVersionIndex_7);
    transform_hlds__pd_info__TypeCtorInfo_18_18 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
    mercury__map__init_1_p_0(transform_hlds__pd_info__TypeCtorInfo_18_18, (MR_Word) &transform_hlds__pd_info__transform_hlds__pd_info__type_ctor_info_version_info_0, &transform_hlds__pd_info__Versions_8);
    mercury__set__init_1_p_0(transform_hlds__pd_info__TypeCtorInfo_18_18, &transform_hlds__pd_info__ParentVersions_9);
    transform_hlds__pd_term__global_term_info_init_1_p_0(&transform_hlds__pd_info__GlobalInfo_10);
    mercury__set__init_1_p_0(transform_hlds__pd_info__TypeCtorInfo_18_18, &transform_hlds__pd_info__CreatedVersions_11);
    mercury__set__init_1_p_0((MR_Word) &transform_hlds__pd_info_scalar_common_2[0], &transform_hlds__pd_info__UselessVersions_12);
    transform_hlds__pd_info__Var_14 = mercury__counter__init_1_f_0((MR_Integer) 0);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
      *transform_hlds__pd_info__PDInfo_6 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__pd_info__ModuleInfo_4));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__pd_info__GoalVersionIndex_7));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__pd_info__Versions_8));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__pd_info__ProcArgInfos_5));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (transform_hlds__pd_info__Var_14));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (transform_hlds__pd_info__GlobalInfo_10));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (transform_hlds__pd_info__ParentVersions_9));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (transform_hlds__pd_info__CreatedVersions_11));
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (transform_hlds__pd_info__UselessVersions_12));
    }
  }
}

static MR_bool MR_CALL 
transform_hlds__pd_info____Unify____branch_info_map_1_0_10001(
  MR_Box transform_hlds__pd_info__wrapper_arg_1,
  MR_Box transform_hlds__pd_info__wrapper_arg_2,
  MR_Box transform_hlds__pd_info__wrapper_arg_3)
{
  {
    MR_bool transform_hlds__pd_info__succeeded;

    transform_hlds__pd_info__succeeded = transform_hlds__pd_info____Unify____branch_info_map_1_0(((MR_Word) transform_hlds__pd_info__wrapper_arg_1), ((MR_Word) transform_hlds__pd_info__wrapper_arg_2), ((MR_Word) transform_hlds__pd_info__wrapper_arg_3));
    return transform_hlds__pd_info__succeeded;
  }
}

static void MR_CALL 
transform_hlds__pd_info____Compare____branch_info_map_1_0_10001(
  MR_Box transform_hlds__pd_info__wrapper_arg_1,
  MR_Box * transform_hlds__pd_info__wrapper_arg_2,
  MR_Box transform_hlds__pd_info__wrapper_arg_3,
  MR_Box transform_hlds__pd_info__wrapper_arg_4)
{
  {
    MR_Word transform_hlds__pd_info__conv0_HeadVar__1_1;

    transform_hlds__pd_info____Compare____branch_info_map_1_0(((MR_Word) transform_hlds__pd_info__wrapper_arg_1), &transform_hlds__pd_info__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__pd_info__wrapper_arg_3), ((MR_Word) transform_hlds__pd_info__wrapper_arg_4));
    *transform_hlds__pd_info__wrapper_arg_2 = ((MR_Box) (transform_hlds__pd_info__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
transform_hlds__pd_info____Unify____goal_version_index_0_0_10001(
  MR_Box transform_hlds__pd_info__wrapper_arg_1,
  MR_Box transform_hlds__pd_info__wrapper_arg_2)
{
  {
    MR_bool transform_hlds__pd_info__succeeded;

    transform_hlds__pd_info__succeeded = transform_hlds__pd_info____Unify____goal_version_index_0_0(((MR_Word) transform_hlds__pd_info__wrapper_arg_1), ((MR_Word) transform_hlds__pd_info__wrapper_arg_2));
    return transform_hlds__pd_info__succeeded;
  }
}

static void MR_CALL 
transform_hlds__pd_info____Compare____goal_version_index_0_0_10001(
  MR_Box * transform_hlds__pd_info__wrapper_arg_1,
  MR_Box transform_hlds__pd_info__wrapper_arg_2,
  MR_Box transform_hlds__pd_info__wrapper_arg_3)
{
  {
    MR_Word transform_hlds__pd_info__conv0_HeadVar__1_1;

    transform_hlds__pd_info____Compare____goal_version_index_0_0(&transform_hlds__pd_info__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__pd_info__wrapper_arg_2), ((MR_Word) transform_hlds__pd_info__wrapper_arg_3));
    *transform_hlds__pd_info__wrapper_arg_1 = ((MR_Box) (transform_hlds__pd_info__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
transform_hlds__pd_info____Unify____maybe_version_0_0_10001(
  MR_Box transform_hlds__pd_info__wrapper_arg_1,
  MR_Box transform_hlds__pd_info__wrapper_arg_2)
{
  {
    MR_bool transform_hlds__pd_info__succeeded;

    transform_hlds__pd_info__succeeded = transform_hlds__pd_info____Unify____maybe_version_0_0(((MR_Word) transform_hlds__pd_info__wrapper_arg_1), ((MR_Word) transform_hlds__pd_info__wrapper_arg_2));
    return transform_hlds__pd_info__succeeded;
  }
}

static void MR_CALL 
transform_hlds__pd_info____Compare____maybe_version_0_0_10001(
  MR_Box * transform_hlds__pd_info__wrapper_arg_1,
  MR_Box transform_hlds__pd_info__wrapper_arg_2,
  MR_Box transform_hlds__pd_info__wrapper_arg_3)
{
  {
    MR_Word transform_hlds__pd_info__conv0_HeadVar__1_1;

    transform_hlds__pd_info____Compare____maybe_version_0_0(&transform_hlds__pd_info__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__pd_info__wrapper_arg_2), ((MR_Word) transform_hlds__pd_info__wrapper_arg_3));
    *transform_hlds__pd_info__wrapper_arg_1 = ((MR_Box) (transform_hlds__pd_info__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
transform_hlds__pd_info____Unify____pd_arg_info_0_0_10001(
  MR_Box transform_hlds__pd_info__wrapper_arg_1,
  MR_Box transform_hlds__pd_info__wrapper_arg_2)
{
  {
    MR_bool transform_hlds__pd_info__succeeded;

    transform_hlds__pd_info__succeeded = transform_hlds__pd_info____Unify____pd_arg_info_0_0(((MR_Word) transform_hlds__pd_info__wrapper_arg_1), ((MR_Word) transform_hlds__pd_info__wrapper_arg_2));
    return transform_hlds__pd_info__succeeded;
  }
}

static void MR_CALL 
transform_hlds__pd_info____Compare____pd_arg_info_0_0_10001(
  MR_Box * transform_hlds__pd_info__wrapper_arg_1,
  MR_Box transform_hlds__pd_info__wrapper_arg_2,
  MR_Box transform_hlds__pd_info__wrapper_arg_3)
{
  {
    MR_Word transform_hlds__pd_info__conv0_HeadVar__1_1;

    transform_hlds__pd_info____Compare____pd_arg_info_0_0(&transform_hlds__pd_info__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__pd_info__wrapper_arg_2), ((MR_Word) transform_hlds__pd_info__wrapper_arg_3));
    *transform_hlds__pd_info__wrapper_arg_1 = ((MR_Box) (transform_hlds__pd_info__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
transform_hlds__pd_info____Unify____pd_branch_info_1_0_10001(
  MR_Box transform_hlds__pd_info__wrapper_arg_1,
  MR_Box transform_hlds__pd_info__wrapper_arg_2,
  MR_Box transform_hlds__pd_info__wrapper_arg_3)
{
  {
    MR_bool transform_hlds__pd_info__succeeded;

    transform_hlds__pd_info__succeeded = transform_hlds__pd_info____Unify____pd_branch_info_1_0(((MR_Word) transform_hlds__pd_info__wrapper_arg_1), ((MR_Word) transform_hlds__pd_info__wrapper_arg_2), ((MR_Word) transform_hlds__pd_info__wrapper_arg_3));
    return transform_hlds__pd_info__succeeded;
  }
}

static void MR_CALL 
transform_hlds__pd_info____Compare____pd_branch_info_1_0_10001(
  MR_Box transform_hlds__pd_info__wrapper_arg_1,
  MR_Box * transform_hlds__pd_info__wrapper_arg_2,
  MR_Box transform_hlds__pd_info__wrapper_arg_3,
  MR_Box transform_hlds__pd_info__wrapper_arg_4)
{
  {
    MR_Word transform_hlds__pd_info__conv0_HeadVar__1_1;

    transform_hlds__pd_info____Compare____pd_branch_info_1_0(((MR_Word) transform_hlds__pd_info__wrapper_arg_1), &transform_hlds__pd_info__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__pd_info__wrapper_arg_3), ((MR_Word) transform_hlds__pd_info__wrapper_arg_4));
    *transform_hlds__pd_info__wrapper_arg_2 = ((MR_Box) (transform_hlds__pd_info__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
transform_hlds__pd_info____Unify____pd_info_0_0_10001(
  MR_Box transform_hlds__pd_info__wrapper_arg_1,
  MR_Box transform_hlds__pd_info__wrapper_arg_2)
{
  {
    MR_bool transform_hlds__pd_info__succeeded;

    transform_hlds__pd_info__succeeded = transform_hlds__pd_info____Unify____pd_info_0_0(((MR_Word) transform_hlds__pd_info__wrapper_arg_1), ((MR_Word) transform_hlds__pd_info__wrapper_arg_2));
    return transform_hlds__pd_info__succeeded;
  }
}

static void MR_CALL 
transform_hlds__pd_info____Compare____pd_info_0_0_10001(
  MR_Box * transform_hlds__pd_info__wrapper_arg_1,
  MR_Box transform_hlds__pd_info__wrapper_arg_2,
  MR_Box transform_hlds__pd_info__wrapper_arg_3)
{
  {
    MR_Word transform_hlds__pd_info__conv0_HeadVar__1_1;

    transform_hlds__pd_info____Compare____pd_info_0_0(&transform_hlds__pd_info__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__pd_info__wrapper_arg_2), ((MR_Word) transform_hlds__pd_info__wrapper_arg_3));
    *transform_hlds__pd_info__wrapper_arg_1 = ((MR_Box) (transform_hlds__pd_info__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
transform_hlds__pd_info____Unify____pd_proc_arg_info_0_0_10001(
  MR_Box transform_hlds__pd_info__wrapper_arg_1,
  MR_Box transform_hlds__pd_info__wrapper_arg_2)
{
  {
    MR_bool transform_hlds__pd_info__succeeded;

    transform_hlds__pd_info__succeeded = transform_hlds__pd_info____Unify____pd_proc_arg_info_0_0(((MR_Word) transform_hlds__pd_info__wrapper_arg_1), ((MR_Word) transform_hlds__pd_info__wrapper_arg_2));
    return transform_hlds__pd_info__succeeded;
  }
}

static void MR_CALL 
transform_hlds__pd_info____Compare____pd_proc_arg_info_0_0_10001(
  MR_Box * transform_hlds__pd_info__wrapper_arg_1,
  MR_Box transform_hlds__pd_info__wrapper_arg_2,
  MR_Box transform_hlds__pd_info__wrapper_arg_3)
{
  {
    MR_Word transform_hlds__pd_info__conv0_HeadVar__1_1;

    transform_hlds__pd_info____Compare____pd_proc_arg_info_0_0(&transform_hlds__pd_info__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__pd_info__wrapper_arg_2), ((MR_Word) transform_hlds__pd_info__wrapper_arg_3));
    *transform_hlds__pd_info__wrapper_arg_1 = ((MR_Box) (transform_hlds__pd_info__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
transform_hlds__pd_info____Unify____unfold_info_0_0_10001(
  MR_Box transform_hlds__pd_info__wrapper_arg_1,
  MR_Box transform_hlds__pd_info__wrapper_arg_2)
{
  {
    MR_bool transform_hlds__pd_info__succeeded;

    transform_hlds__pd_info__succeeded = transform_hlds__pd_info____Unify____unfold_info_0_0(((MR_Word) transform_hlds__pd_info__wrapper_arg_1), ((MR_Word) transform_hlds__pd_info__wrapper_arg_2));
    return transform_hlds__pd_info__succeeded;
  }
}

static void MR_CALL 
transform_hlds__pd_info____Compare____unfold_info_0_0_10001(
  MR_Box * transform_hlds__pd_info__wrapper_arg_1,
  MR_Box transform_hlds__pd_info__wrapper_arg_2,
  MR_Box transform_hlds__pd_info__wrapper_arg_3)
{
  {
    MR_Word transform_hlds__pd_info__conv0_HeadVar__1_1;

    transform_hlds__pd_info____Compare____unfold_info_0_0(&transform_hlds__pd_info__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__pd_info__wrapper_arg_2), ((MR_Word) transform_hlds__pd_info__wrapper_arg_3));
    *transform_hlds__pd_info__wrapper_arg_1 = ((MR_Box) (transform_hlds__pd_info__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
transform_hlds__pd_info____Unify____useless_versions_0_0_10001(
  MR_Box transform_hlds__pd_info__wrapper_arg_1,
  MR_Box transform_hlds__pd_info__wrapper_arg_2)
{
  {
    MR_bool transform_hlds__pd_info__succeeded;

    transform_hlds__pd_info__succeeded = transform_hlds__pd_info____Unify____useless_versions_0_0(((MR_Word) transform_hlds__pd_info__wrapper_arg_1), ((MR_Word) transform_hlds__pd_info__wrapper_arg_2));
    return transform_hlds__pd_info__succeeded;
  }
}

static void MR_CALL 
transform_hlds__pd_info____Compare____useless_versions_0_0_10001(
  MR_Box * transform_hlds__pd_info__wrapper_arg_1,
  MR_Box transform_hlds__pd_info__wrapper_arg_2,
  MR_Box transform_hlds__pd_info__wrapper_arg_3)
{
  {
    MR_Word transform_hlds__pd_info__conv0_HeadVar__1_1;

    transform_hlds__pd_info____Compare____useless_versions_0_0(&transform_hlds__pd_info__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__pd_info__wrapper_arg_2), ((MR_Word) transform_hlds__pd_info__wrapper_arg_3));
    *transform_hlds__pd_info__wrapper_arg_1 = ((MR_Box) (transform_hlds__pd_info__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
transform_hlds__pd_info____Unify____version_index_0_0_10001(
  MR_Box transform_hlds__pd_info__wrapper_arg_1,
  MR_Box transform_hlds__pd_info__wrapper_arg_2)
{
  {
    MR_bool transform_hlds__pd_info__succeeded;

    transform_hlds__pd_info__succeeded = transform_hlds__pd_info____Unify____version_index_0_0(((MR_Word) transform_hlds__pd_info__wrapper_arg_1), ((MR_Word) transform_hlds__pd_info__wrapper_arg_2));
    return transform_hlds__pd_info__succeeded;
  }
}

static void MR_CALL 
transform_hlds__pd_info____Compare____version_index_0_0_10001(
  MR_Box * transform_hlds__pd_info__wrapper_arg_1,
  MR_Box transform_hlds__pd_info__wrapper_arg_2,
  MR_Box transform_hlds__pd_info__wrapper_arg_3)
{
  {
    MR_Word transform_hlds__pd_info__conv0_HeadVar__1_1;

    transform_hlds__pd_info____Compare____version_index_0_0(&transform_hlds__pd_info__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__pd_info__wrapper_arg_2), ((MR_Word) transform_hlds__pd_info__wrapper_arg_3));
    *transform_hlds__pd_info__wrapper_arg_1 = ((MR_Box) (transform_hlds__pd_info__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
transform_hlds__pd_info____Unify____version_info_0_0_10001(
  MR_Box transform_hlds__pd_info__wrapper_arg_1,
  MR_Box transform_hlds__pd_info__wrapper_arg_2)
{
  {
    MR_bool transform_hlds__pd_info__succeeded;

    transform_hlds__pd_info__succeeded = transform_hlds__pd_info____Unify____version_info_0_0(((MR_Word) transform_hlds__pd_info__wrapper_arg_1), ((MR_Word) transform_hlds__pd_info__wrapper_arg_2));
    return transform_hlds__pd_info__succeeded;
  }
}

static void MR_CALL 
transform_hlds__pd_info____Compare____version_info_0_0_10001(
  MR_Box * transform_hlds__pd_info__wrapper_arg_1,
  MR_Box transform_hlds__pd_info__wrapper_arg_2,
  MR_Box transform_hlds__pd_info__wrapper_arg_3)
{
  {
    MR_Word transform_hlds__pd_info__conv0_HeadVar__1_1;

    transform_hlds__pd_info____Compare____version_info_0_0(&transform_hlds__pd_info__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__pd_info__wrapper_arg_2), ((MR_Word) transform_hlds__pd_info__wrapper_arg_3));
    *transform_hlds__pd_info__wrapper_arg_1 = ((MR_Box) (transform_hlds__pd_info__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
transform_hlds__pd_info____Unify____version_is_exact_0_0_10001(
  MR_Box transform_hlds__pd_info__wrapper_arg_1,
  MR_Box transform_hlds__pd_info__wrapper_arg_2)
{
  {
    MR_bool transform_hlds__pd_info__succeeded;

    transform_hlds__pd_info__succeeded = transform_hlds__pd_info____Unify____version_is_exact_0_0(((MR_Word) transform_hlds__pd_info__wrapper_arg_1), ((MR_Word) transform_hlds__pd_info__wrapper_arg_2));
    return transform_hlds__pd_info__succeeded;
  }
}

static void MR_CALL 
transform_hlds__pd_info____Compare____version_is_exact_0_0_10001(
  MR_Box * transform_hlds__pd_info__wrapper_arg_1,
  MR_Box transform_hlds__pd_info__wrapper_arg_2,
  MR_Box transform_hlds__pd_info__wrapper_arg_3)
{
  {
    MR_Word transform_hlds__pd_info__conv0_HeadVar__1_1;

    transform_hlds__pd_info____Compare____version_is_exact_0_0(&transform_hlds__pd_info__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__pd_info__wrapper_arg_2), ((MR_Word) transform_hlds__pd_info__wrapper_arg_3));
    *transform_hlds__pd_info__wrapper_arg_1 = ((MR_Box) (transform_hlds__pd_info__conv0_HeadVar__1_1));
  }
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

/* :- end_module transform_hlds.pd_info. */
