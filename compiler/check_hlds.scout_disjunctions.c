/*
** Automatically generated from `scout_disjunctions.m'
** by the Mercury compiler,
** version rotd-2026-01-10
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


// :- module check_hlds.scout_disjunctions.
// :- implementation.

/*
INIT mercury__check_hlds__scout_disjunctions__init
ENDINIT
*/

#include "check_hlds.scout_disjunctions.mih"


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
#include "term_context.mih"
#include "term_subst.mih"
#include "term_unify.mih"
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
#include "hlds.goal_path.mih"
#include "hlds.goal_util.mih"
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
#include "hlds.hlds_out.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_proc_util.mih"
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
#include "libs.indent.mih"
#include "libs.polyhedron.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.sym_name.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.d_file_deps.mih"
#include "parse_tree.error_spec.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.parse_tree_out_cons_id.mih"
#include "parse_tree.parse_tree_out_info.mih"
#include "parse_tree.parse_tree_out_term.mih"
#include "parse_tree.parse_tree_output.mih"
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
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_db.mih"
#include "parse_tree.var_table.mih"
#include "parse_tree.vartypes.mih"
#include "recompilation.record_uses.mih"
#include "string.builder.mih"
#include "string.format.mih"
#include "string.parse_util.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"
#include "hlds.hlds_out.hlds_out_goal.mih"
#include "hlds.hlds_out.hlds_out_util.mih"
#include "parse_tree.module_qual.mq_info.mih"




static const MR_FA_TypeInfo_Struct1 check_hlds__scout_disjunctions__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct1 check_hlds__scout_disjunctions__term__ti_term_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__scout_disjunctions__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_term__ti_term_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__scout_disjunctions__term__pti_term_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__scout_disjunctions__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__scout_disjunctions__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__scout_disjunctions__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_check_hlds__scout_disjunctions__type_ctor_info_deconstruct_info_0;

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__scout_disjunctions__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_check_hlds__scout_disjunctions__type_ctor_info_var_one_arm_summary_0;

static const MR_FA_TypeInfo_Struct2 check_hlds__scout_disjunctions__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0check_hlds__scout_disjunctions__type_ctor_info_var_one_arm_summary_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__scout_disjunctions__list__pti_list_1__plain_tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0check_hlds__scout_disjunctions__type_ctor_info_var_one_arm_summary_0;

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__scout_disjunctions__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_check_hlds__scout_disjunctions__type_ctor_info_var_all_arms_summary_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__scout_disjunctions__maybe__pti_maybe_1__plain_check_hlds__scout_disjunctions__type_ctor_info_disjunction_id_0;

static const MR_FA_TypeInfo_Struct2 check_hlds__scout_disjunctions__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0check_hlds__scout_disjunctions__type_ctor_info_var_all_arms_summary_0;

static const MR_FA_TypeInfo_Struct1 check_hlds__scout_disjunctions__set_ordlist__ti_set_ordlist_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_PseudoTypeInfo check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__field_types_deconstruct_info_0_0[4];

static const MR_DuFunctorDesc check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__du_functor_desc_deconstruct_info_0_0;

static const MR_DuFunctorDescPtr check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__du_stag_ordered_deconstruct_info_0_0[1];

static const MR_DuPtagLayout check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__du_ptag_ordered_deconstruct_info_0[1];

static const MR_DuFunctorDescPtr check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__du_name_ordered_deconstruct_info_0[1];

static const MR_Integer check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__functor_number_map_deconstruct_info_0[1];

static const MR_Integer check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__functor_number_map_disjunct_id_0[1];

static const MR_NotagFunctorDesc check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__notag_functor_desc_disjunct_id_0;

static const MR_PseudoTypeInfo check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__field_types_disjunct_id_info_0_0[2];

static const MR_DuFunctorDesc check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__du_functor_desc_disjunct_id_info_0_0;

static const MR_DuFunctorDescPtr check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__du_stag_ordered_disjunct_id_info_0_0[1];

static const MR_DuPtagLayout check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__du_ptag_ordered_disjunct_id_info_0[1];

static const MR_DuFunctorDescPtr check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__du_name_ordered_disjunct_id_info_0[1];

static const MR_Integer check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__functor_number_map_disjunct_id_info_0[1];

static const MR_FA_TypeInfo_Struct2 check_hlds__scout_disjunctions__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0check_hlds__scout_disjunctions__type_ctor_info_deconstruct_info_0;

static const MR_FA_TypeInfo_Struct1 check_hlds__scout_disjunctions__maybe__ti_maybe_1check_hlds__scout_disjunctions__type_ctor_info_disjunction_id_0;

static const MR_PseudoTypeInfo check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__field_types_disjunct_info_0_0[2];

static const MR_ConstString check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__field_names_disjunct_info_0_0[2];

static const MR_DuFunctorDesc check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__du_functor_desc_disjunct_info_0_0;

static const MR_DuFunctorDescPtr check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__du_stag_ordered_disjunct_info_0_0[1];

static const MR_DuPtagLayout check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__du_ptag_ordered_disjunct_info_0[1];

static const MR_DuFunctorDescPtr check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__du_name_ordered_disjunct_info_0[1];

static const MR_Integer check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__functor_number_map_disjunct_info_0[1];

static const MR_FA_TypeInfo_Struct2 check_hlds__scout_disjunctions__tree234__ti_tree234_2check_hlds__scout_disjunctions__type_ctor_info_disjunct_id_0check_hlds__scout_disjunctions__type_ctor_info_disjunct_info_0;

static const MR_Integer check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__functor_number_map_disjunction_id_0[1];

static const MR_NotagFunctorDesc check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__notag_functor_desc_disjunction_id_0;

static const MR_FA_TypeInfo_Struct1 check_hlds__scout_disjunctions__one_or_more__ti_one_or_more_1check_hlds__scout_disjunctions__type_ctor_info_disjunct_id_info_0;

static const MR_PseudoTypeInfo check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__field_types_disjunction_info_0_0[2];

static const MR_ConstString check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__field_names_disjunction_info_0_0[2];

static const MR_DuFunctorDesc check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__du_functor_desc_disjunction_info_0_0;

static const MR_DuFunctorDescPtr check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__du_stag_ordered_disjunction_info_0_0[1];

static const MR_DuPtagLayout check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__du_ptag_ordered_disjunction_info_0[1];

static const MR_DuFunctorDescPtr check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__du_name_ordered_disjunction_info_0[1];

static const MR_Integer check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__functor_number_map_disjunction_info_0[1];

static const MR_FA_TypeInfo_Struct2 check_hlds__scout_disjunctions__tree234__ti_tree234_2check_hlds__scout_disjunctions__type_ctor_info_disjunction_id_0check_hlds__scout_disjunctions__type_ctor_info_disjunction_info_0;

static const MR_EnumFunctorDesc check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__enum_functor_desc_is_sub_disj_needed_0_0;

static const MR_EnumFunctorDesc check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__enum_functor_desc_is_sub_disj_needed_0_1;

static const MR_EnumFunctorDescPtr check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__enum_ordinal_ordered_is_sub_disj_needed_0[2];

static const MR_EnumFunctorDescPtr check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__enum_name_ordered_is_sub_disj_needed_0[2];

static const MR_Integer check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__functor_number_map_is_sub_disj_needed_0[2];

static const MR_PseudoTypeInfo check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__field_types_maybe_in_zone_0_0[1];

static const MR_DuFunctorDesc check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__du_functor_desc_maybe_in_zone_0_0;

static const MR_DuFunctorDesc check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__du_functor_desc_maybe_in_zone_0_1;

static const MR_DuFunctorDescPtr check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__du_stag_ordered_maybe_in_zone_0_0[1];

static const MR_DuFunctorDescPtr check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__du_stag_ordered_maybe_in_zone_0_1[1];

static const MR_DuPtagLayout check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__du_ptag_ordered_maybe_in_zone_0[2];

static const MR_DuFunctorDescPtr check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__du_name_ordered_maybe_in_zone_0[2];

static const MR_Integer check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__functor_number_map_maybe_in_zone_0[2];

static const MR_PseudoTypeInfo check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__field_types_scout_disj_info_0_0[4];

static const MR_ConstString check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__field_names_scout_disj_info_0_0[4];

static const MR_DuFunctorDesc check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__du_functor_desc_scout_disj_info_0_0;

static const MR_DuFunctorDescPtr check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__du_stag_ordered_scout_disj_info_0_0[1];

static const MR_DuPtagLayout check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__du_ptag_ordered_scout_disj_info_0[1];

static const MR_DuFunctorDescPtr check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__du_name_ordered_scout_disj_info_0[1];

static const MR_Integer check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__functor_number_map_scout_disj_info_0[1];

static const MR_FA_TypeInfo_Struct2 check_hlds__scout_disjunctions__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_term_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_PseudoTypeInfo check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__field_types_subst_db_0_0[2];

static const MR_DuFunctorDesc check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__du_functor_desc_subst_db_0_0;

static const MR_DuFunctorDescPtr check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__du_stag_ordered_subst_db_0_0[1];

static const MR_DuPtagLayout check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__du_ptag_ordered_subst_db_0[1];

static const MR_DuFunctorDescPtr check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__du_name_ordered_subst_db_0[1];

static const MR_Integer check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__functor_number_map_subst_db_0[1];

static const MR_PseudoTypeInfo check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__field_types_switchable_cons_id_0_0[1];

static const MR_DuFunctorDesc check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__du_functor_desc_switchable_cons_id_0_0;

static const MR_PseudoTypeInfo check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__field_types_switchable_cons_id_0_1[1];

static const MR_DuFunctorDesc check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__du_functor_desc_switchable_cons_id_0_1;

static const MR_PseudoTypeInfo check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__field_types_switchable_cons_id_0_2[1];

static const MR_DuFunctorDesc check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__du_functor_desc_switchable_cons_id_0_2;

static const MR_PseudoTypeInfo check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__field_types_switchable_cons_id_0_3[1];

static const MR_DuFunctorDesc check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__du_functor_desc_switchable_cons_id_0_3;

static const MR_PseudoTypeInfo check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__field_types_switchable_cons_id_0_4[1];

static const MR_DuFunctorDesc check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__du_functor_desc_switchable_cons_id_0_4;

static const MR_DuFunctorDescPtr check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__du_stag_ordered_switchable_cons_id_0_1[1];

static const MR_DuFunctorDescPtr check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__du_stag_ordered_switchable_cons_id_0_3[4];

static const MR_DuPtagLayout check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__du_ptag_ordered_switchable_cons_id_0[2];

static const MR_DuFunctorDescPtr check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__du_name_ordered_switchable_cons_id_0[5];

static const MR_Integer check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__functor_number_map_switchable_cons_id_0[5];

static const MR_FA_TypeInfo_Struct1 check_hlds__scout_disjunctions__set_ordlist__ti_set_ordlist_1check_hlds__scout_disjunctions__type_ctor_info_switchable_cons_id_0;

static const MR_PseudoTypeInfo check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__field_types_var_all_arms_summary_0_0[2];

static const MR_DuArgLocn check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__field_locns_var_all_arms_summary_0_0[2];

static const MR_DuFunctorDesc check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__du_functor_desc_var_all_arms_summary_0_0;

static const MR_DuFunctorDescPtr check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__du_stag_ordered_var_all_arms_summary_0_0[1];

static const MR_DuPtagLayout check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__du_ptag_ordered_var_all_arms_summary_0[1];

static const MR_DuFunctorDescPtr check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__du_name_ordered_var_all_arms_summary_0[1];

static const MR_Integer check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__functor_number_map_var_all_arms_summary_0[1];

static const MR_PseudoTypeInfo check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__field_types_var_one_arm_summary_0_0[1];

static const MR_DuFunctorDesc check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__du_functor_desc_var_one_arm_summary_0_0;

static const MR_PseudoTypeInfo check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__field_types_var_one_arm_summary_0_1[1];

static const MR_DuFunctorDesc check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__du_functor_desc_var_one_arm_summary_0_1;

static const MR_DuFunctorDescPtr check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__du_stag_ordered_var_one_arm_summary_0_0[1];

static const MR_DuFunctorDescPtr check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__du_stag_ordered_var_one_arm_summary_0_1[1];

static const MR_DuPtagLayout check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__du_ptag_ordered_var_one_arm_summary_0[2];

static const MR_DuFunctorDescPtr check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__du_name_ordered_var_one_arm_summary_0[2];

static const MR_Integer check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__functor_number_map_var_one_arm_summary_0[2];

static MR_bool MR_CALL 
check_hlds__scout_disjunctions__IntroducedFrom__pred__scout_disjunctions_in_goal__459__1_2_p_0(
  MR_Word STATE_VARIABLE_InZone_144,
  MR_Word HeadVar__2_195);

static MR_bool MR_CALL 
check_hlds__scout_disjunctions__IntroducedFrom__pred__scout_disjunctions_in_goal__381__1_2_p_0(
  MR_Word SubDisjunctions0_63,
  MR_Word HeadVar__2_167);

static void MR_CALL 
check_hlds__scout_disjunctions____Compare____var_one_arm_summary_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__scout_disjunctions____Unify____var_one_arm_summary_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
check_hlds__scout_disjunctions____Compare____subst_db_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__scout_disjunctions____Unify____subst_db_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
check_hlds__scout_disjunctions____Compare____scout_disj_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__scout_disjunctions____Unify____scout_disj_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
check_hlds__scout_disjunctions____Compare____one_arm_summary_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__scout_disjunctions____Unify____one_arm_summary_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
check_hlds__scout_disjunctions____Compare____maybe_in_zone_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__scout_disjunctions____Unify____maybe_in_zone_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
check_hlds__scout_disjunctions____Compare____in_zone_deconstruct_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__scout_disjunctions____Unify____in_zone_deconstruct_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
check_hlds__scout_disjunctions____Compare____deconstruct_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__scout_disjunctions____Unify____deconstruct_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
check_hlds__scout_disjunctions__acc_var_if_equivalent_5_p_0(
  MR_Word Subst_6,
  MR_Word VarSubstTerm_7,
  MR_Word SeenVar_8,
  MR_Word STATE_VARIABLE_EqvVars_0_14,
  MR_Word * STATE_VARIABLE_EqvVars_15);

static void MR_CALL 
check_hlds__scout_disjunctions__add_arm_to_all_arms_summary_3_p_0(
  MR_Word OneArmSummary_4,
  MR_Word STATE_VARIABLE_AllArmsSummary_0_20,
  MR_Word * STATE_VARIABLE_AllArmsSummary_21);

static void MR_CALL 
check_hlds__scout_disjunctions__maybe_acc_all_arm_for_var_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
check_hlds__scout_disjunctions__maybe_acc_all_arm_for_var_5_p_0(
  MR_Word TailOneArmMaps_6,
  MR_Word Var_7,
  MR_Word HeadArmSummary_8,
  MR_Word STATE_VARIABLE_AllArmsMap_0_19,
  MR_Word * STATE_VARIABLE_AllArmsMap_20);

static MR_bool MR_CALL 
check_hlds__scout_disjunctions__find_var_one_arm_summaries_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_ArmSummaries_0_3,
  MR_Word * STATE_VARIABLE_ArmSummaries_4);

static void MR_CALL 
check_hlds__scout_disjunctions__acc_sub_disjunction_summary_4_p_0(
  MR_Word Var_5,
  MR_Word SubDisjAllArms_6,
  MR_Word STATE_VARIABLE_OneArmMap_0_9,
  MR_Word * STATE_VARIABLE_OneArmMap_10);

static void MR_CALL 
check_hlds__scout_disjunctions__in_zone_deconstruct_to_one_arm_summary_2_p_0(
  MR_Word DeconstructInfo_3,
  MR_Word * OneArm_4);

static void MR_CALL 
check_hlds__scout_disjunctions__maybe_add_deconstruct_4_p_0(
  MR_Word DeconstructInfo_5,
  MR_Word XEqvVar_6,
  MR_Word STATE_VARIABLE_DeconstructMap_0_9,
  MR_Word * STATE_VARIABLE_DeconstructMap_10);

static void MR_CALL 
check_hlds__scout_disjunctions__scout_disjunctions_in_cases_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word STATE_VARIABLE_ScoutInfo_0_5,
  MR_Word * STATE_VARIABLE_ScoutInfo_6);

static void MR_CALL 
check_hlds__scout_disjunctions__scout_disjunctions_in_orelse_goals_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_ScoutInfo_0_4,
  MR_Word * STATE_VARIABLE_ScoutInfo_5);

static void MR_CALL 
check_hlds__scout_disjunctions__scout_disjunctions_in_conjuncts_8_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_InZone_0_3,
  MR_Word * STATE_VARIABLE_InZone_4,
  MR_Word STATE_VARIABLE_SubstDb_0_5,
  MR_Word * STATE_VARIABLE_SubstDb_6,
  MR_Word STATE_VARIABLE_ScoutInfo_0_7,
  MR_Word * STATE_VARIABLE_ScoutInfo_8);

static void MR_CALL 
check_hlds__scout_disjunctions__scout_disjunctions_in_disjuncts_8_p_0(
  MR_Word HeadDisjunct_9,
  MR_Word TailDisjuncts_10,
  MR_Word InstMap0_11,
  MR_Word SubstDb0_12,
  MR_Word * HeadDisjunctIdInfo_13,
  MR_Word * TailDisjunctIdInfos_14,
  MR_Word STATE_VARIABLE_ScoutInfo_0_32,
  MR_Word * STATE_VARIABLE_ScoutInfo_33);

static void MR_CALL 
check_hlds__scout_disjunctions__scout_disjunctions_in_unify_expr_8_p_0(
  MR_Word GoalExpr_9,
  MR_Word GoalInfo_10,
  MR_Word InstMap0_11,
  MR_Word InZone0_12,
  MR_Word STATE_VARIABLE_SubstDb_0_81,
  MR_Word * STATE_VARIABLE_SubstDb_82,
  MR_Word STATE_VARIABLE_ScoutInfo_0_83,
  MR_Word * STATE_VARIABLE_ScoutInfo_84);

static MR_bool MR_CALL 
check_hlds__scout_disjunctions__scout_disjunctions_in_goal_9_p_0_2(
  MR_Box closure_arg);

static MR_bool MR_CALL 
check_hlds__scout_disjunctions__scout_disjunctions_in_goal_9_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
check_hlds__scout_disjunctions__scout_disjunctions_in_goal_9_p_0(
  MR_Word Goal_10,
  MR_Word InstMap0_11,
  MR_Word * InstMap_12,
  MR_Word STATE_VARIABLE_InZone_0_143,
  MR_Word * STATE_VARIABLE_InZone_144,
  MR_Word STATE_VARIABLE_SubstDb_0_145,
  MR_Word * STATE_VARIABLE_SubstDb_146,
  MR_Word STATE_VARIABLE_ScoutInfo_0_147,
  MR_Word * STATE_VARIABLE_ScoutInfo_148);

static void MR_CALL 
check_hlds__scout_disjunctions__construct_scout_disjunction_info_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
check_hlds__scout_disjunctions__construct_scout_disjunction_info_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
check_hlds__scout_disjunctions__construct_scout_disjunction_info_3_p_0(
  MR_Word ScoutInfo_4,
  MR_Word OoMDisjunctIdsInfos_5,
  MR_Word * DisjunctionInfo_6);

static void MR_CALL 
check_hlds__scout_disjunctions__disjunct_id_info_to_one_arm_summary_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
check_hlds__scout_disjunctions__disjunct_id_info_to_one_arm_summary_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
check_hlds__scout_disjunctions__disjunct_id_info_to_one_arm_summary_3_p_0(
  MR_Word ScoutInfo_4,
  MR_Word DisjunctIdInfo_5,
  MR_Word * OneArmMap_6);

static void MR_CALL 
check_hlds__scout_disjunctions__record_var_functor_unify_5_p_0(
  MR_Word XVar_6,
  MR_Word ConsId_7,
  MR_Word YVars_8,
  MR_Word STATE_VARIABLE_SubstDb_0_19,
  MR_Word * STATE_VARIABLE_SubstDb_20);

static void MR_CALL 
check_hlds__scout_disjunctions__record_var_var_unify_4_p_0(
  MR_Word XVar_5,
  MR_Word YVar_6,
  MR_Word STATE_VARIABLE_SubstDb_0_16,
  MR_Word * STATE_VARIABLE_SubstDb_17);

static void MR_CALL 
check_hlds__scout_disjunctions__record_deconstruct_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
check_hlds__scout_disjunctions__record_deconstruct_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
check_hlds__scout_disjunctions__record_deconstruct_7_p_0(
  MR_Word GoalId_8,
  MR_Word XVar_9,
  MR_Word ConsId_10,
  MR_Word SubstDb_11,
  MR_Word DisjunctId_12,
  MR_Word STATE_VARIABLE_ScoutInfo_0_23,
  MR_Word * STATE_VARIABLE_ScoutInfo_24);

static MR_bool MR_CALL 
check_hlds__scout_disjunctions____Unify____all_arms_summary_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__scout_disjunctions____Compare____all_arms_summary_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__scout_disjunctions____Unify____deconstruct_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__scout_disjunctions____Compare____deconstruct_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__scout_disjunctions____Unify____disjunct_id_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__scout_disjunctions____Compare____disjunct_id_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__scout_disjunctions____Unify____disjunct_id_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__scout_disjunctions____Compare____disjunct_id_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__scout_disjunctions____Unify____disjunct_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__scout_disjunctions____Compare____disjunct_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__scout_disjunctions____Unify____disjunct_info_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__scout_disjunctions____Compare____disjunct_info_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__scout_disjunctions____Unify____disjunction_id_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__scout_disjunctions____Compare____disjunction_id_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__scout_disjunctions____Unify____disjunction_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__scout_disjunctions____Compare____disjunction_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__scout_disjunctions____Unify____disjunction_info_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__scout_disjunctions____Compare____disjunction_info_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__scout_disjunctions____Unify____in_zone_deconstruct_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__scout_disjunctions____Compare____in_zone_deconstruct_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__scout_disjunctions____Unify____is_sub_disj_needed_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__scout_disjunctions____Compare____is_sub_disj_needed_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__scout_disjunctions____Unify____maybe_in_zone_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__scout_disjunctions____Compare____maybe_in_zone_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__scout_disjunctions____Unify____one_arm_summary_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__scout_disjunctions____Compare____one_arm_summary_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__scout_disjunctions____Unify____scout_disj_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__scout_disjunctions____Compare____scout_disj_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__scout_disjunctions____Unify____subst_db_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__scout_disjunctions____Compare____subst_db_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__scout_disjunctions____Unify____switchable_cons_id_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__scout_disjunctions____Compare____switchable_cons_id_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__scout_disjunctions____Unify____var_all_arms_summary_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__scout_disjunctions____Compare____var_all_arms_summary_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__scout_disjunctions____Unify____var_one_arm_summary_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__scout_disjunctions____Compare____var_one_arm_summary_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box check_hlds__scout_disjunctions_scalar_common_1[7][2];

static /* final */ const MR_Box check_hlds__scout_disjunctions_scalar_common_2[9][3];

static /* final */ const MR_Box check_hlds__scout_disjunctions_scalar_common_3[2][8];

static /* final */ const MR_Box check_hlds__scout_disjunctions_scalar_common_4[2][7];

static /* final */ const MR_Box check_hlds__scout_disjunctions_scalar_common_5[3][5];

static /* final */ const MR_Box check_hlds__scout_disjunctions_scalar_common_6[2][6];




static /* final */ const MR_Box check_hlds__scout_disjunctions_scalar_common_1[7][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__type_ctor_info_disjunction_id_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_term_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row   3 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&check_hlds__scout_disjunctions_scalar_common_1[1]))
  },
  /* row   4 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&check_hlds__scout_disjunctions_scalar_common_1[1]))
  },
  /* row   5 */
  {
    ((MR_Box) (&mercury__one_or_more__one_or_more__type_ctor_info_one_or_more_1)),
    ((MR_Box) (&check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__type_ctor_info_disjunct_id_info_0))
  },
  /* row   6 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__type_ctor_info_switchable_cons_id_0))
  },
};

static /* final */ const MR_Box check_hlds__scout_disjunctions_scalar_common_2[9][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&check_hlds__scout_disjunctions_scalar_common_1[1])),
    ((MR_Box) (&check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__type_ctor_info_deconstruct_info_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&check_hlds__scout_disjunctions_scalar_common_1[1])),
    ((MR_Box) (&check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__type_ctor_info_var_one_arm_summary_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&check_hlds__scout_disjunctions_scalar_common_1[1])),
    ((MR_Box) (&check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__type_ctor_info_var_all_arms_summary_0))
  },
  /* row   3 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__type_ctor_info_disjunct_id_0)),
    ((MR_Box) (&check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__type_ctor_info_disjunct_info_0))
  },
  /* row   4 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__type_ctor_info_disjunction_id_0)),
    ((MR_Box) (&check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__type_ctor_info_disjunction_info_0))
  },
  /* row   5 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&check_hlds__scout_disjunctions_scalar_common_1[1])),
    ((MR_Box) (&check_hlds__scout_disjunctions_scalar_common_1[2]))
  },
  /* row   6 */
  {
    ((MR_Box) (&check_hlds__scout_disjunctions_scalar_common_5[0])),
    ((MR_Box) (check_hlds__scout_disjunctions__disjunct_id_info_to_one_arm_summary_3_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   7 */
  {
    ((MR_Box) (&check_hlds__scout_disjunctions_scalar_common_4[1])),
    ((MR_Box) (check_hlds__scout_disjunctions__disjunct_id_info_to_one_arm_summary_3_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   8 */
  {
    ((MR_Box) (&check_hlds__scout_disjunctions_scalar_common_6[1])),
    ((MR_Box) (check_hlds__scout_disjunctions__maybe_acc_all_arm_for_var_5_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box check_hlds__scout_disjunctions_scalar_common_3[2][8] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&check_hlds__scout_disjunctions__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_term__ti_term_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&check_hlds__scout_disjunctions__term__pti_term_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&check_hlds__scout_disjunctions__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&check_hlds__scout_disjunctions__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&check_hlds__scout_disjunctions__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&check_hlds__scout_disjunctions__list__pti_list_1__plain_tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0check_hlds__scout_disjunctions__type_ctor_info_var_one_arm_summary_0)),
    ((MR_Box) (&check_hlds__scout_disjunctions__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__type_ctor_info_var_one_arm_summary_0)),
    ((MR_Box) (&check_hlds__scout_disjunctions__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_check_hlds__scout_disjunctions__type_ctor_info_var_all_arms_summary_0)),
    ((MR_Box) (&check_hlds__scout_disjunctions__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_check_hlds__scout_disjunctions__type_ctor_info_var_all_arms_summary_0))
  },
};

static /* final */ const MR_Box check_hlds__scout_disjunctions_scalar_common_4[2][7] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__type_ctor_info_deconstruct_info_0)),
    ((MR_Box) (&check_hlds__scout_disjunctions__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&check_hlds__scout_disjunctions__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_check_hlds__scout_disjunctions__type_ctor_info_deconstruct_info_0)),
    ((MR_Box) (&check_hlds__scout_disjunctions__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_check_hlds__scout_disjunctions__type_ctor_info_deconstruct_info_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&check_hlds__scout_disjunctions__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__type_ctor_info_var_all_arms_summary_0)),
    ((MR_Box) (&check_hlds__scout_disjunctions__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_check_hlds__scout_disjunctions__type_ctor_info_var_one_arm_summary_0)),
    ((MR_Box) (&check_hlds__scout_disjunctions__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_check_hlds__scout_disjunctions__type_ctor_info_var_one_arm_summary_0))
  },
};

static /* final */ const MR_Box check_hlds__scout_disjunctions_scalar_common_5[3][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__type_ctor_info_deconstruct_info_0)),
    ((MR_Box) (&check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__type_ctor_info_var_one_arm_summary_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&check_hlds__scout_disjunctions__maybe__pti_maybe_1__plain_check_hlds__scout_disjunctions__type_ctor_info_disjunction_id_0)),
    ((MR_Box) (&check_hlds__scout_disjunctions__maybe__pti_maybe_1__plain_check_hlds__scout_disjunctions__type_ctor_info_disjunction_id_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__type_ctor_info_maybe_in_zone_0)),
    ((MR_Box) (&check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__type_ctor_info_maybe_in_zone_0))
  },
};

static /* final */ const MR_Box check_hlds__scout_disjunctions_scalar_common_6[2][6] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__type_ctor_info_scout_disj_info_0)),
    ((MR_Box) (&check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__type_ctor_info_disjunct_id_info_0)),
    ((MR_Box) (&check_hlds__scout_disjunctions__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_check_hlds__scout_disjunctions__type_ctor_info_var_one_arm_summary_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__type_ctor_info_var_one_arm_summary_0)),
    ((MR_Box) (&check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__type_ctor_info_var_all_arms_summary_0)),
    ((MR_Box) (&check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__type_ctor_info_var_all_arms_summary_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


static const MR_FA_TypeInfo_Struct1 check_hlds__scout_disjunctions__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  { (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static const MR_FA_TypeInfo_Struct1 check_hlds__scout_disjunctions__term__ti_term_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_term_1,
  { (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__scout_disjunctions__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_term__ti_term_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&check_hlds__scout_disjunctions__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
    (MR_PseudoTypeInfo) (&check_hlds__scout_disjunctions__term__ti_term_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__scout_disjunctions__term__pti_term_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_term_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__scout_disjunctions__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__scout_disjunctions__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&check_hlds__scout_disjunctions__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__scout_disjunctions__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_check_hlds__scout_disjunctions__type_ctor_info_deconstruct_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&check_hlds__scout_disjunctions__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
    (MR_PseudoTypeInfo) (&check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__type_ctor_info_deconstruct_info_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__scout_disjunctions__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_check_hlds__scout_disjunctions__type_ctor_info_var_one_arm_summary_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&check_hlds__scout_disjunctions__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
    (MR_PseudoTypeInfo) (&check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__type_ctor_info_var_one_arm_summary_0)
  }
};

static const MR_FA_TypeInfo_Struct2 check_hlds__scout_disjunctions__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0check_hlds__scout_disjunctions__type_ctor_info_var_one_arm_summary_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&check_hlds__scout_disjunctions__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
    (MR_TypeInfo) (&check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__type_ctor_info_var_one_arm_summary_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__scout_disjunctions__list__pti_list_1__plain_tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0check_hlds__scout_disjunctions__type_ctor_info_var_one_arm_summary_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&check_hlds__scout_disjunctions__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0check_hlds__scout_disjunctions__type_ctor_info_var_one_arm_summary_0) }
};

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__scout_disjunctions__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_check_hlds__scout_disjunctions__type_ctor_info_var_all_arms_summary_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&check_hlds__scout_disjunctions__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
    (MR_PseudoTypeInfo) (&check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__type_ctor_info_var_all_arms_summary_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__scout_disjunctions__maybe__pti_maybe_1__plain_check_hlds__scout_disjunctions__type_ctor_info_disjunction_id_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  { (MR_PseudoTypeInfo) (&check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__type_ctor_info_disjunction_id_0) }
};

static const MR_FA_TypeInfo_Struct2 check_hlds__scout_disjunctions__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0check_hlds__scout_disjunctions__type_ctor_info_var_all_arms_summary_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&check_hlds__scout_disjunctions__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
    (MR_TypeInfo) (&check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__type_ctor_info_var_all_arms_summary_0)
  }
};

const MR_TypeCtorInfo_Struct check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__type_ctor_info_all_arms_summary_map_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (check_hlds__scout_disjunctions____Unify____all_arms_summary_map_0_0_10001)),
  ((MR_Box) (check_hlds__scout_disjunctions____Compare____all_arms_summary_map_0_0_10001)),
  (MR_String) "check_hlds.scout_disjunctions",
  (MR_String) "all_arms_summary_map",
  { NULL },
  { (MR_PseudoTypeInfo) (&check_hlds__scout_disjunctions__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0check_hlds__scout_disjunctions__type_ctor_info_var_all_arms_summary_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_FA_TypeInfo_Struct1 check_hlds__scout_disjunctions__set_ordlist__ti_set_ordlist_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  { (MR_TypeInfo) (&check_hlds__scout_disjunctions__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static const MR_PseudoTypeInfo check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__field_types_deconstruct_info_0_0[4] = {
  (MR_PseudoTypeInfo) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0),
  (MR_PseudoTypeInfo) (&check_hlds__scout_disjunctions__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
  (MR_PseudoTypeInfo) (&check_hlds__scout_disjunctions__set_ordlist__ti_set_ordlist_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
  (MR_PseudoTypeInfo) (&check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__type_ctor_info_switchable_cons_id_0)
};

static const MR_DuFunctorDesc check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__du_functor_desc_deconstruct_info_0_0 = {
  (MR_String) "deconstruct_info",
  INT16_C(4),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__field_types_deconstruct_info_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__du_stag_ordered_deconstruct_info_0_0[1] = { &check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__du_functor_desc_deconstruct_info_0_0 };

static const MR_DuPtagLayout check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__du_ptag_ordered_deconstruct_info_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__du_stag_ordered_deconstruct_info_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__du_name_ordered_deconstruct_info_0[1] = { &check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__du_functor_desc_deconstruct_info_0_0 };

static const MR_Integer check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__functor_number_map_deconstruct_info_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__type_ctor_info_deconstruct_info_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__scout_disjunctions____Unify____deconstruct_info_0_0_10001)),
  ((MR_Box) (check_hlds__scout_disjunctions____Compare____deconstruct_info_0_0_10001)),
  (MR_String) "check_hlds.scout_disjunctions",
  (MR_String) "deconstruct_info",
  { check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__du_name_ordered_deconstruct_info_0 },
  { check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__du_ptag_ordered_deconstruct_info_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__functor_number_map_deconstruct_info_0,

};

static const MR_Integer check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__functor_number_map_disjunct_id_0[1] = { (MR_Integer) 0 };

static const MR_NotagFunctorDesc check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__notag_functor_desc_disjunct_id_0 = {
  (MR_String) "disjunct_id",
  (MR_PseudoTypeInfo) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0),
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

const MR_TypeCtorInfo_Struct check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__type_ctor_info_disjunct_id_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (check_hlds__scout_disjunctions____Unify____disjunct_id_0_0_10001)),
  ((MR_Box) (check_hlds__scout_disjunctions____Compare____disjunct_id_0_0_10001)),
  (MR_String) "check_hlds.scout_disjunctions",
  (MR_String) "disjunct_id",
  { &check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__notag_functor_desc_disjunct_id_0 },
  { &check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__notag_functor_desc_disjunct_id_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__functor_number_map_disjunct_id_0,

};

static const MR_PseudoTypeInfo check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__field_types_disjunct_id_info_0_0[2] = {
  (MR_PseudoTypeInfo) (&check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__type_ctor_info_disjunct_id_0),
  (MR_PseudoTypeInfo) (&check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__type_ctor_info_disjunct_info_0)
};

static const MR_DuFunctorDesc check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__du_functor_desc_disjunct_id_info_0_0 = {
  (MR_String) "disjunct_id_info",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__field_types_disjunct_id_info_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__du_stag_ordered_disjunct_id_info_0_0[1] = { &check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__du_functor_desc_disjunct_id_info_0_0 };

static const MR_DuPtagLayout check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__du_ptag_ordered_disjunct_id_info_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__du_stag_ordered_disjunct_id_info_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__du_name_ordered_disjunct_id_info_0[1] = { &check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__du_functor_desc_disjunct_id_info_0_0 };

static const MR_Integer check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__functor_number_map_disjunct_id_info_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__type_ctor_info_disjunct_id_info_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__scout_disjunctions____Unify____disjunct_id_info_0_0_10001)),
  ((MR_Box) (check_hlds__scout_disjunctions____Compare____disjunct_id_info_0_0_10001)),
  (MR_String) "check_hlds.scout_disjunctions",
  (MR_String) "disjunct_id_info",
  { check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__du_name_ordered_disjunct_id_info_0 },
  { check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__du_ptag_ordered_disjunct_id_info_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__functor_number_map_disjunct_id_info_0,

};

static const MR_FA_TypeInfo_Struct2 check_hlds__scout_disjunctions__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0check_hlds__scout_disjunctions__type_ctor_info_deconstruct_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&check_hlds__scout_disjunctions__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
    (MR_TypeInfo) (&check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__type_ctor_info_deconstruct_info_0)
  }
};

static const MR_FA_TypeInfo_Struct1 check_hlds__scout_disjunctions__maybe__ti_maybe_1check_hlds__scout_disjunctions__type_ctor_info_disjunction_id_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  { (MR_TypeInfo) (&check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__type_ctor_info_disjunction_id_0) }
};

static const MR_PseudoTypeInfo check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__field_types_disjunct_info_0_0[2] = {
  (MR_PseudoTypeInfo) (&check_hlds__scout_disjunctions__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0check_hlds__scout_disjunctions__type_ctor_info_deconstruct_info_0),
  (MR_PseudoTypeInfo) (&check_hlds__scout_disjunctions__maybe__ti_maybe_1check_hlds__scout_disjunctions__type_ctor_info_disjunction_id_0)
};

static const MR_ConstString check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__field_names_disjunct_info_0_0[2] = {
  (MR_String) "di_iz_deconstruct_map",
  (MR_String) "di_iz_sub_disjunctions"
};

static const MR_DuFunctorDesc check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__du_functor_desc_disjunct_info_0_0 = {
  (MR_String) "disjunct_info",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__field_types_disjunct_info_0_0,
  check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__field_names_disjunct_info_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__du_stag_ordered_disjunct_info_0_0[1] = { &check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__du_functor_desc_disjunct_info_0_0 };

static const MR_DuPtagLayout check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__du_ptag_ordered_disjunct_info_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__du_stag_ordered_disjunct_info_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__du_name_ordered_disjunct_info_0[1] = { &check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__du_functor_desc_disjunct_info_0_0 };

static const MR_Integer check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__functor_number_map_disjunct_info_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__type_ctor_info_disjunct_info_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__scout_disjunctions____Unify____disjunct_info_0_0_10001)),
  ((MR_Box) (check_hlds__scout_disjunctions____Compare____disjunct_info_0_0_10001)),
  (MR_String) "check_hlds.scout_disjunctions",
  (MR_String) "disjunct_info",
  { check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__du_name_ordered_disjunct_info_0 },
  { check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__du_ptag_ordered_disjunct_info_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__functor_number_map_disjunct_info_0,

};

static const MR_FA_TypeInfo_Struct2 check_hlds__scout_disjunctions__tree234__ti_tree234_2check_hlds__scout_disjunctions__type_ctor_info_disjunct_id_0check_hlds__scout_disjunctions__type_ctor_info_disjunct_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__type_ctor_info_disjunct_id_0),
    (MR_TypeInfo) (&check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__type_ctor_info_disjunct_info_0)
  }
};

const MR_TypeCtorInfo_Struct check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__type_ctor_info_disjunct_info_map_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (check_hlds__scout_disjunctions____Unify____disjunct_info_map_0_0_10001)),
  ((MR_Box) (check_hlds__scout_disjunctions____Compare____disjunct_info_map_0_0_10001)),
  (MR_String) "check_hlds.scout_disjunctions",
  (MR_String) "disjunct_info_map",
  { NULL },
  { (MR_PseudoTypeInfo) (&check_hlds__scout_disjunctions__tree234__ti_tree234_2check_hlds__scout_disjunctions__type_ctor_info_disjunct_id_0check_hlds__scout_disjunctions__type_ctor_info_disjunct_info_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_Integer check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__functor_number_map_disjunction_id_0[1] = { (MR_Integer) 0 };

static const MR_NotagFunctorDesc check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__notag_functor_desc_disjunction_id_0 = {
  (MR_String) "disjunction_id",
  (MR_PseudoTypeInfo) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0),
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

const MR_TypeCtorInfo_Struct check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__type_ctor_info_disjunction_id_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (check_hlds__scout_disjunctions____Unify____disjunction_id_0_0_10001)),
  ((MR_Box) (check_hlds__scout_disjunctions____Compare____disjunction_id_0_0_10001)),
  (MR_String) "check_hlds.scout_disjunctions",
  (MR_String) "disjunction_id",
  { &check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__notag_functor_desc_disjunction_id_0 },
  { &check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__notag_functor_desc_disjunction_id_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__functor_number_map_disjunction_id_0,

};

static const MR_FA_TypeInfo_Struct1 check_hlds__scout_disjunctions__one_or_more__ti_one_or_more_1check_hlds__scout_disjunctions__type_ctor_info_disjunct_id_info_0 = {
  &mercury__one_or_more__one_or_more__type_ctor_info_one_or_more_1,
  { (MR_TypeInfo) (&check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__type_ctor_info_disjunct_id_info_0) }
};

static const MR_PseudoTypeInfo check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__field_types_disjunction_info_0_0[2] = {
  (MR_PseudoTypeInfo) (&check_hlds__scout_disjunctions__one_or_more__ti_one_or_more_1check_hlds__scout_disjunctions__type_ctor_info_disjunct_id_info_0),
  (MR_PseudoTypeInfo) (&check_hlds__scout_disjunctions__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0check_hlds__scout_disjunctions__type_ctor_info_var_all_arms_summary_0)
};

static const MR_ConstString check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__field_names_disjunction_info_0_0[2] = {
  (MR_String) "dni_arms",
  (MR_String) "dni_summary_map"
};

static const MR_DuFunctorDesc check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__du_functor_desc_disjunction_info_0_0 = {
  (MR_String) "disjunction_info",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__field_types_disjunction_info_0_0,
  check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__field_names_disjunction_info_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__du_stag_ordered_disjunction_info_0_0[1] = { &check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__du_functor_desc_disjunction_info_0_0 };

static const MR_DuPtagLayout check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__du_ptag_ordered_disjunction_info_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__du_stag_ordered_disjunction_info_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__du_name_ordered_disjunction_info_0[1] = { &check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__du_functor_desc_disjunction_info_0_0 };

static const MR_Integer check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__functor_number_map_disjunction_info_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__type_ctor_info_disjunction_info_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__scout_disjunctions____Unify____disjunction_info_0_0_10001)),
  ((MR_Box) (check_hlds__scout_disjunctions____Compare____disjunction_info_0_0_10001)),
  (MR_String) "check_hlds.scout_disjunctions",
  (MR_String) "disjunction_info",
  { check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__du_name_ordered_disjunction_info_0 },
  { check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__du_ptag_ordered_disjunction_info_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__functor_number_map_disjunction_info_0,

};

static const MR_FA_TypeInfo_Struct2 check_hlds__scout_disjunctions__tree234__ti_tree234_2check_hlds__scout_disjunctions__type_ctor_info_disjunction_id_0check_hlds__scout_disjunctions__type_ctor_info_disjunction_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__type_ctor_info_disjunction_id_0),
    (MR_TypeInfo) (&check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__type_ctor_info_disjunction_info_0)
  }
};

const MR_TypeCtorInfo_Struct check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__type_ctor_info_disjunction_info_map_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (check_hlds__scout_disjunctions____Unify____disjunction_info_map_0_0_10001)),
  ((MR_Box) (check_hlds__scout_disjunctions____Compare____disjunction_info_map_0_0_10001)),
  (MR_String) "check_hlds.scout_disjunctions",
  (MR_String) "disjunction_info_map",
  { NULL },
  { (MR_PseudoTypeInfo) (&check_hlds__scout_disjunctions__tree234__ti_tree234_2check_hlds__scout_disjunctions__type_ctor_info_disjunction_id_0check_hlds__scout_disjunctions__type_ctor_info_disjunction_info_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

const MR_TypeCtorInfo_Struct check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__type_ctor_info_in_zone_deconstruct_map_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (check_hlds__scout_disjunctions____Unify____in_zone_deconstruct_map_0_0_10001)),
  ((MR_Box) (check_hlds__scout_disjunctions____Compare____in_zone_deconstruct_map_0_0_10001)),
  (MR_String) "check_hlds.scout_disjunctions",
  (MR_String) "in_zone_deconstruct_map",
  { NULL },
  { (MR_PseudoTypeInfo) (&check_hlds__scout_disjunctions__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0check_hlds__scout_disjunctions__type_ctor_info_deconstruct_info_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_EnumFunctorDesc check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__enum_functor_desc_is_sub_disj_needed_0_0 = {
  (MR_String) "sub_disj_is_not_needed",
  INT32_C(0)
};

static const MR_EnumFunctorDesc check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__enum_functor_desc_is_sub_disj_needed_0_1 = {
  (MR_String) "sub_disj_is_needed",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__enum_ordinal_ordered_is_sub_disj_needed_0[2] = {
  &check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__enum_functor_desc_is_sub_disj_needed_0_0,
  &check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__enum_functor_desc_is_sub_disj_needed_0_1
};

static const MR_EnumFunctorDescPtr check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__enum_name_ordered_is_sub_disj_needed_0[2] = {
  &check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__enum_functor_desc_is_sub_disj_needed_0_1,
  &check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__enum_functor_desc_is_sub_disj_needed_0_0
};

static const MR_Integer check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__functor_number_map_is_sub_disj_needed_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__type_ctor_info_is_sub_disj_needed_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (check_hlds__scout_disjunctions____Unify____is_sub_disj_needed_0_0_10001)),
  ((MR_Box) (check_hlds__scout_disjunctions____Compare____is_sub_disj_needed_0_0_10001)),
  (MR_String) "check_hlds.scout_disjunctions",
  (MR_String) "is_sub_disj_needed",
  { check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__enum_name_ordered_is_sub_disj_needed_0 },
  { check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__enum_ordinal_ordered_is_sub_disj_needed_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__functor_number_map_is_sub_disj_needed_0,

};

static const MR_PseudoTypeInfo check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__field_types_maybe_in_zone_0_0[1] = { (MR_PseudoTypeInfo) (&check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__type_ctor_info_disjunct_id_0) };

static const MR_DuFunctorDesc check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__du_functor_desc_maybe_in_zone_0_0 = {
  (MR_String) "in_zone",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(0),
  check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__field_types_maybe_in_zone_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__du_functor_desc_maybe_in_zone_0_1 = {
  (MR_String) "not_in_zone",
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

static const MR_DuFunctorDescPtr check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__du_stag_ordered_maybe_in_zone_0_0[1] = { &check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__du_functor_desc_maybe_in_zone_0_1 };

static const MR_DuFunctorDescPtr check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__du_stag_ordered_maybe_in_zone_0_1[1] = { &check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__du_functor_desc_maybe_in_zone_0_0 };

static const MR_DuPtagLayout check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__du_ptag_ordered_maybe_in_zone_0[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__du_stag_ordered_maybe_in_zone_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__du_stag_ordered_maybe_in_zone_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__du_name_ordered_maybe_in_zone_0[2] = {
  &check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__du_functor_desc_maybe_in_zone_0_0,
  &check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__du_functor_desc_maybe_in_zone_0_1
};

static const MR_Integer check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__functor_number_map_maybe_in_zone_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__type_ctor_info_maybe_in_zone_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__scout_disjunctions____Unify____maybe_in_zone_0_0_10001)),
  ((MR_Box) (check_hlds__scout_disjunctions____Compare____maybe_in_zone_0_0_10001)),
  (MR_String) "check_hlds.scout_disjunctions",
  (MR_String) "maybe_in_zone",
  { check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__du_name_ordered_maybe_in_zone_0 },
  { check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__du_ptag_ordered_maybe_in_zone_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__functor_number_map_maybe_in_zone_0,

};

const MR_TypeCtorInfo_Struct check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__type_ctor_info_one_arm_summary_map_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (check_hlds__scout_disjunctions____Unify____one_arm_summary_map_0_0_10001)),
  ((MR_Box) (check_hlds__scout_disjunctions____Compare____one_arm_summary_map_0_0_10001)),
  (MR_String) "check_hlds.scout_disjunctions",
  (MR_String) "one_arm_summary_map",
  { NULL },
  { (MR_PseudoTypeInfo) (&check_hlds__scout_disjunctions__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0check_hlds__scout_disjunctions__type_ctor_info_var_one_arm_summary_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_PseudoTypeInfo check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__field_types_scout_disj_info_0_0[4] = {
  (MR_PseudoTypeInfo) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0),
  (MR_PseudoTypeInfo) (&parse_tree__var_table__parse_tree__var_table__type_ctor_info_var_table_0),
  (MR_PseudoTypeInfo) (&check_hlds__scout_disjunctions__tree234__ti_tree234_2check_hlds__scout_disjunctions__type_ctor_info_disjunction_id_0check_hlds__scout_disjunctions__type_ctor_info_disjunction_info_0),
  (MR_PseudoTypeInfo) (&check_hlds__scout_disjunctions__tree234__ti_tree234_2check_hlds__scout_disjunctions__type_ctor_info_disjunct_id_0check_hlds__scout_disjunctions__type_ctor_info_disjunct_info_0)
};

static const MR_ConstString check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__field_names_scout_disj_info_0_0[4] = {
  (MR_String) "scdi_module_info",
  (MR_String) "scdi_var_table",
  (MR_String) "scdi_disjunction_info_map",
  (MR_String) "scdi_disjunct_info_map"
};

static const MR_DuFunctorDesc check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__du_functor_desc_scout_disj_info_0_0 = {
  (MR_String) "scout_disj_info",
  INT16_C(4),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__field_types_scout_disj_info_0_0,
  check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__field_names_scout_disj_info_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__du_stag_ordered_scout_disj_info_0_0[1] = { &check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__du_functor_desc_scout_disj_info_0_0 };

static const MR_DuPtagLayout check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__du_ptag_ordered_scout_disj_info_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__du_stag_ordered_scout_disj_info_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__du_name_ordered_scout_disj_info_0[1] = { &check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__du_functor_desc_scout_disj_info_0_0 };

static const MR_Integer check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__functor_number_map_scout_disj_info_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__type_ctor_info_scout_disj_info_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__scout_disjunctions____Unify____scout_disj_info_0_0_10001)),
  ((MR_Box) (check_hlds__scout_disjunctions____Compare____scout_disj_info_0_0_10001)),
  (MR_String) "check_hlds.scout_disjunctions",
  (MR_String) "scout_disj_info",
  { check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__du_name_ordered_scout_disj_info_0 },
  { check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__du_ptag_ordered_scout_disj_info_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__functor_number_map_scout_disj_info_0,

};

static const MR_FA_TypeInfo_Struct2 check_hlds__scout_disjunctions__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_term_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&check_hlds__scout_disjunctions__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
    (MR_TypeInfo) (&check_hlds__scout_disjunctions__term__ti_term_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_PseudoTypeInfo check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__field_types_subst_db_0_0[2] = {
  (MR_PseudoTypeInfo) (&check_hlds__scout_disjunctions__set_ordlist__ti_set_ordlist_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
  (MR_PseudoTypeInfo) (&check_hlds__scout_disjunctions__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_term_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)
};

static const MR_DuFunctorDesc check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__du_functor_desc_subst_db_0_0 = {
  (MR_String) "subst_db",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__field_types_subst_db_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__du_stag_ordered_subst_db_0_0[1] = { &check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__du_functor_desc_subst_db_0_0 };

static const MR_DuPtagLayout check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__du_ptag_ordered_subst_db_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__du_stag_ordered_subst_db_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__du_name_ordered_subst_db_0[1] = { &check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__du_functor_desc_subst_db_0_0 };

static const MR_Integer check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__functor_number_map_subst_db_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__type_ctor_info_subst_db_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__scout_disjunctions____Unify____subst_db_0_0_10001)),
  ((MR_Box) (check_hlds__scout_disjunctions____Compare____subst_db_0_0_10001)),
  (MR_String) "check_hlds.scout_disjunctions",
  (MR_String) "subst_db",
  { check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__du_name_ordered_subst_db_0 },
  { check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__du_ptag_ordered_subst_db_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__functor_number_map_subst_db_0,

};

static const MR_PseudoTypeInfo check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__field_types_switchable_cons_id_0_0[1] = { (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_du_ctor_0) };

static const MR_DuFunctorDesc check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__du_functor_desc_switchable_cons_id_0_0 = {
  (MR_String) "du_data_ctor",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE_DIRECT_ARG,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(0),
  check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__field_types_switchable_cons_id_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__field_types_switchable_cons_id_0_1[1] = { (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_some_int_const_0) };

static const MR_DuFunctorDesc check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__du_functor_desc_switchable_cons_id_0_1 = {
  (MR_String) "some_int_const",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 5,
  INT32_C(1),
  check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__field_types_switchable_cons_id_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__field_types_switchable_cons_id_0_2[1] = { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_float_0) };

static const MR_DuFunctorDesc check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__du_functor_desc_switchable_cons_id_0_2 = {
  (MR_String) "float_const",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 6,
  INT32_C(2),
  check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__field_types_switchable_cons_id_0_2,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__field_types_switchable_cons_id_0_3[1] = { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_character_0) };

static const MR_DuFunctorDesc check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__du_functor_desc_switchable_cons_id_0_3 = {
  (MR_String) "char_const",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 7,
  INT32_C(3),
  check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__field_types_switchable_cons_id_0_3,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__field_types_switchable_cons_id_0_4[1] = { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0) };

static const MR_DuFunctorDesc check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__du_functor_desc_switchable_cons_id_0_4 = {
  (MR_String) "string_const",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 8,
  INT32_C(4),
  check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__field_types_switchable_cons_id_0_4,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__du_stag_ordered_switchable_cons_id_0_1[1] = { &check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__du_functor_desc_switchable_cons_id_0_0 };

static const MR_DuFunctorDescPtr check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__du_stag_ordered_switchable_cons_id_0_3[4] = {
  &check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__du_functor_desc_switchable_cons_id_0_1,
  &check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__du_functor_desc_switchable_cons_id_0_2,
  &check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__du_functor_desc_switchable_cons_id_0_3,
  &check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__du_functor_desc_switchable_cons_id_0_4
};

static const MR_DuPtagLayout check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__du_ptag_ordered_switchable_cons_id_0[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE_DIRECT_ARG,
    check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__du_stag_ordered_switchable_cons_id_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  },
  {
    UINT32_C(4),
    MR_SECTAG_REMOTE_FULL_WORD,
    check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__du_stag_ordered_switchable_cons_id_0_3,
    INT8_C(-1),
    UINT8_C(3),
    UINT8_C(0)
  }
};

static const MR_DuFunctorDescPtr check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__du_name_ordered_switchable_cons_id_0[5] = {
  &check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__du_functor_desc_switchable_cons_id_0_3,
  &check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__du_functor_desc_switchable_cons_id_0_0,
  &check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__du_functor_desc_switchable_cons_id_0_2,
  &check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__du_functor_desc_switchable_cons_id_0_1,
  &check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__du_functor_desc_switchable_cons_id_0_4
};

static const MR_Integer check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__functor_number_map_switchable_cons_id_0[5] = {
  (MR_Integer) 1,
  (MR_Integer) 3,
  (MR_Integer) 2,
  (MR_Integer) 0,
  (MR_Integer) 4
};

const MR_TypeCtorInfo_Struct check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__type_ctor_info_switchable_cons_id_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(4),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__scout_disjunctions____Unify____switchable_cons_id_0_0_10001)),
  ((MR_Box) (check_hlds__scout_disjunctions____Compare____switchable_cons_id_0_0_10001)),
  (MR_String) "check_hlds.scout_disjunctions",
  (MR_String) "switchable_cons_id",
  { check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__du_name_ordered_switchable_cons_id_0 },
  { check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__du_ptag_ordered_switchable_cons_id_0 },
  (MR_Integer) 5,
  UINT16_C(4),
  check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__functor_number_map_switchable_cons_id_0,

};

static const MR_FA_TypeInfo_Struct1 check_hlds__scout_disjunctions__set_ordlist__ti_set_ordlist_1check_hlds__scout_disjunctions__type_ctor_info_switchable_cons_id_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  { (MR_TypeInfo) (&check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__type_ctor_info_switchable_cons_id_0) }
};

static const MR_PseudoTypeInfo check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__field_types_var_all_arms_summary_0_0[2] = {
  (MR_PseudoTypeInfo) (&check_hlds__scout_disjunctions__set_ordlist__ti_set_ordlist_1check_hlds__scout_disjunctions__type_ctor_info_switchable_cons_id_0),
  (MR_PseudoTypeInfo) (&check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__type_ctor_info_is_sub_disj_needed_0)
};

static const MR_DuArgLocn check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__field_locns_var_all_arms_summary_0_0[2] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 0,
    (MR_Integer) 1
  }
};

static const MR_DuFunctorDesc check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__du_functor_desc_var_all_arms_summary_0_0 = {
  (MR_String) "var_all_arms_summary",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__field_types_var_all_arms_summary_0_0,
  NULL,
  check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__field_locns_var_all_arms_summary_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__du_stag_ordered_var_all_arms_summary_0_0[1] = { &check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__du_functor_desc_var_all_arms_summary_0_0 };

static const MR_DuPtagLayout check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__du_ptag_ordered_var_all_arms_summary_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__du_stag_ordered_var_all_arms_summary_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__du_name_ordered_var_all_arms_summary_0[1] = { &check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__du_functor_desc_var_all_arms_summary_0_0 };

static const MR_Integer check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__functor_number_map_var_all_arms_summary_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__type_ctor_info_var_all_arms_summary_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__scout_disjunctions____Unify____var_all_arms_summary_0_0_10001)),
  ((MR_Box) (check_hlds__scout_disjunctions____Compare____var_all_arms_summary_0_0_10001)),
  (MR_String) "check_hlds.scout_disjunctions",
  (MR_String) "var_all_arms_summary",
  { check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__du_name_ordered_var_all_arms_summary_0 },
  { check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__du_ptag_ordered_var_all_arms_summary_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__functor_number_map_var_all_arms_summary_0,

};

static const MR_PseudoTypeInfo check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__field_types_var_one_arm_summary_0_0[1] = { (MR_PseudoTypeInfo) (&check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__type_ctor_info_deconstruct_info_0) };

static const MR_DuFunctorDesc check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__du_functor_desc_var_one_arm_summary_0_0 = {
  (MR_String) "voas_deconstruct",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE_DIRECT_ARG,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__field_types_var_one_arm_summary_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__field_types_var_one_arm_summary_0_1[1] = { (MR_PseudoTypeInfo) (&check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__type_ctor_info_var_all_arms_summary_0) };

static const MR_DuFunctorDesc check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__du_functor_desc_var_one_arm_summary_0_1 = {
  (MR_String) "voas_sub_disjunction",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE_DIRECT_ARG,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__field_types_var_one_arm_summary_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__du_stag_ordered_var_one_arm_summary_0_0[1] = { &check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__du_functor_desc_var_one_arm_summary_0_0 };

static const MR_DuFunctorDescPtr check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__du_stag_ordered_var_one_arm_summary_0_1[1] = { &check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__du_functor_desc_var_one_arm_summary_0_1 };

static const MR_DuPtagLayout check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__du_ptag_ordered_var_one_arm_summary_0[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE_DIRECT_ARG,
    check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__du_stag_ordered_var_one_arm_summary_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE_DIRECT_ARG,
    check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__du_stag_ordered_var_one_arm_summary_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__du_name_ordered_var_one_arm_summary_0[2] = {
  &check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__du_functor_desc_var_one_arm_summary_0_0,
  &check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__du_functor_desc_var_one_arm_summary_0_1
};

static const MR_Integer check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__functor_number_map_var_one_arm_summary_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__type_ctor_info_var_one_arm_summary_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__scout_disjunctions____Unify____var_one_arm_summary_0_0_10001)),
  ((MR_Box) (check_hlds__scout_disjunctions____Compare____var_one_arm_summary_0_0_10001)),
  (MR_String) "check_hlds.scout_disjunctions",
  (MR_String) "var_one_arm_summary",
  { check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__du_name_ordered_var_one_arm_summary_0 },
  { check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__du_ptag_ordered_var_one_arm_summary_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__functor_number_map_var_one_arm_summary_0,

};

static MR_bool MR_CALL 
check_hlds__scout_disjunctions__IntroducedFrom__pred__scout_disjunctions_in_goal__459__1_2_p_0(
  MR_Word STATE_VARIABLE_InZone_144,
  MR_Word HeadVar__2_195)
{
  MR_bool succeeded;
  MR_Integer CastX_233 = (MR_Integer) (STATE_VARIABLE_InZone_144);
  MR_Integer CastY_234 = (MR_Integer) (HeadVar__2_195);

  succeeded = (CastX_233 == CastY_234);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Integer CastX_231;
    MR_Integer CastY_232;

    succeeded = (STATE_VARIABLE_InZone_144 == (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      CastX_231 = (MR_Integer) (STATE_VARIABLE_InZone_144);
      CastY_232 = (MR_Integer) (HeadVar__2_195);
      succeeded = (CastY_232 == CastX_231);
    }
  }
  return succeeded;
}

static MR_bool MR_CALL 
check_hlds__scout_disjunctions__IntroducedFrom__pred__scout_disjunctions_in_goal__381__1_2_p_0(
  MR_Word SubDisjunctions0_63,
  MR_Word HeadVar__2_167)
{
  MR_bool succeeded;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&check_hlds__scout_disjunctions_scalar_common_1[0]), ((MR_Box) (SubDisjunctions0_63)), ((MR_Box) (HeadVar__2_167)));
  return succeeded;
}

static void MR_CALL 
check_hlds__scout_disjunctions____Compare____var_one_arm_summary_0_0(
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
  if (((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0))
    if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 0))
    {
      MR_Word ArgX1_4 = (MR_Word) ((MR_Word) (HeadVar__2_2));
      MR_Word ArgY1_5 = (MR_Word) ((MR_Word) (HeadVar__3_3));

      check_hlds__scout_disjunctions____Compare____deconstruct_info_0_0(HeadVar__1_1, ArgX1_4, ArgY1_5);
    }
    else
      *HeadVar__1_1 = (MR_Integer) 1;
  else
  if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 0))
    *HeadVar__1_1 = (MR_Integer) 2;
  else
  {
    MR_Word ArgX1_6 = (MR_Word) (MR_body((MR_Word) (HeadVar__2_2), (MR_Integer) 1));
    MR_Word ArgY1_7 = (MR_Word) (MR_body((MR_Word) (HeadVar__3_3), (MR_Integer) 1));

    check_hlds__scout_disjunctions____Compare____var_all_arms_summary_0_0(HeadVar__1_1, ArgX1_6, ArgY1_7);
  }
}

static MR_bool MR_CALL 
check_hlds__scout_disjunctions____Unify____var_one_arm_summary_0_0(
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
    MR_Word ArgX1_3 = (MR_Word) ((MR_Word) (HeadVar__1_1));
    MR_Word ArgY1_4;

    succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
    if (succeeded)
    {
      ArgY1_4 = (MR_Word) ((MR_Word) (HeadVar__2_2));
      succeeded = check_hlds__scout_disjunctions____Unify____deconstruct_info_0_0(ArgX1_3, ArgY1_4);
    }
  }
  else
  {
    MR_Word ArgX1_5 = (MR_Word) (MR_body((MR_Word) (HeadVar__1_1), (MR_Integer) 1));
    MR_Word ArgY1_6;

    succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
    if (succeeded)
    {
      ArgY1_6 = (MR_Word) (MR_body((MR_Word) (HeadVar__2_2), (MR_Integer) 1));
      succeeded = check_hlds__scout_disjunctions____Unify____var_all_arms_summary_0_0(ArgX1_5, ArgY1_6);
    }
  }
  return succeeded;
}

void MR_CALL 
check_hlds__scout_disjunctions____Compare____var_all_arms_summary_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_9 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_10 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_9 == CastY_10);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 0))));
    MR_Word ArgX2_7 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 1))) & (MR_Integer) 1);
    MR_Word ArgY2_8 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, 1))) & (MR_Integer) 1);
    MR_Word SubResult1_6;

    mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__scout_disjunctions_scalar_common_1[6]), &SubResult1_6, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Integer Var_13 = (MR_Integer) (ArgX2_7);
      MR_Integer Var_14 = (MR_Integer) (ArgY2_8);

      succeeded = (Var_13 < Var_14);
      if (succeeded)
        *HeadVar__1_1 = (MR_Integer) 1;
      else
      {
        succeeded = (Var_13 > Var_14);
        if (succeeded)
          *HeadVar__1_1 = (MR_Integer) 2;
        else
          *HeadVar__1_1 = (MR_Integer) 0;
      }
    }
  }
}

MR_bool MR_CALL 
check_hlds__scout_disjunctions____Unify____var_all_arms_summary_0_0(
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
  {
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgX2_5 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, 1))) & (MR_Integer) 1);
    MR_Word ArgY2_6 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 1))) & (MR_Integer) 1);

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&check_hlds__scout_disjunctions_scalar_common_1[6]), ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
    if (succeeded)
      succeeded = (ArgX2_5 == ArgY2_6);
  }
  return succeeded;
}

void MR_CALL 
check_hlds__scout_disjunctions____Compare____switchable_cons_id_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = (MR_Word) (HeadVar__2_2);
  MR_Word Cast_HeadVar2_5 = (MR_Word) (HeadVar__3_3);

  parse_tree__prog_data____Compare____cons_id_0_0(HeadVar__1_1, Cast_HeadVar1_4, Cast_HeadVar2_5);
}

MR_bool MR_CALL 
check_hlds__scout_disjunctions____Unify____switchable_cons_id_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = (MR_Word) (HeadVar__1_1);
  MR_Word Cast_HeadVar2_4 = (MR_Word) (HeadVar__2_2);

  succeeded = parse_tree__prog_data____Unify____cons_id_0_0(Cast_HeadVar1_3, Cast_HeadVar2_4);
  return succeeded;
}

static void MR_CALL 
check_hlds__scout_disjunctions____Compare____subst_db_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_9 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_10 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_9 == CastY_10);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 1))));
    MR_Word SubResult1_6;

    mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__scout_disjunctions_scalar_common_1[4]), &SubResult1_6, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
      mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__scout_disjunctions_scalar_common_2[5]), HeadVar__1_1, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
  }
}

static MR_bool MR_CALL 
check_hlds__scout_disjunctions____Unify____subst_db_0_0(
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
  {
    MR_Word TypeInfo_10_10;
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&check_hlds__scout_disjunctions_scalar_common_1[4]), ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
    if (succeeded)
    {
      TypeInfo_10_10 = (MR_Word) (&check_hlds__scout_disjunctions_scalar_common_2[5]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_10_10, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
    }
  }
  return succeeded;
}

static void MR_CALL 
check_hlds__scout_disjunctions____Compare____scout_disj_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_15 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_16 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_15 == CastY_16);
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
    MR_Word SubResult1_6;

    hlds__hlds_module____Compare____module_info_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;

      parse_tree__var_table____Compare____var_table_0_0(&SubResult2_9, ArgX2_7, ArgY2_8);
      succeeded = (SubResult2_9 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
      {
        MR_Word SubResult3_12;

        mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__scout_disjunctions_scalar_common_2[4]), &SubResult3_12, ((MR_Box) (ArgX3_10)), ((MR_Box) (ArgY3_11)));
        succeeded = (SubResult3_12 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult3_12;
        else
          mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__scout_disjunctions_scalar_common_2[3]), HeadVar__1_1, ((MR_Box) (ArgX4_13)), ((MR_Box) (ArgY4_14)));
      }
    }
  }
}

static MR_bool MR_CALL 
check_hlds__scout_disjunctions____Unify____scout_disj_info_0_0(
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
  {
    MR_Word TypeInfo_15_15;
    MR_Word TypeInfo_16_16;
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 2))));
    MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 2))));
    MR_Word ArgX4_9 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 3))));
    MR_Word ArgY4_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 3))));

    succeeded = hlds__hlds_module____Unify____module_info_0_0(ArgX1_3, ArgY1_4);
    if (succeeded)
    {
      succeeded = parse_tree__var_table____Unify____var_table_0_0(ArgX2_5, ArgY2_6);
      if (succeeded)
      {
        TypeInfo_15_15 = (MR_Word) (&check_hlds__scout_disjunctions_scalar_common_2[4]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_15_15, ((MR_Box) (ArgX3_7)), ((MR_Box) (ArgY3_8)));
        if (succeeded)
        {
          TypeInfo_16_16 = (MR_Word) (&check_hlds__scout_disjunctions_scalar_common_2[3]);
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_16_16, ((MR_Box) (ArgX4_9)), ((MR_Box) (ArgY4_10)));
        }
      }
    }
  }
  return succeeded;
}

static void MR_CALL 
check_hlds__scout_disjunctions____Compare____one_arm_summary_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__scout_disjunctions_scalar_common_2[1]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

static MR_bool MR_CALL 
check_hlds__scout_disjunctions____Unify____one_arm_summary_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&check_hlds__scout_disjunctions_scalar_common_2[1]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

static void MR_CALL 
check_hlds__scout_disjunctions____Compare____maybe_in_zone_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_6 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_7 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_6 == CastY_7);
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
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));

    check_hlds__scout_disjunctions____Compare____disjunct_id_0_0(HeadVar__1_1, ArgX1_4, ArgY1_5);
  }
}

static MR_bool MR_CALL 
check_hlds__scout_disjunctions____Unify____maybe_in_zone_0_0(
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
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Integer CastX_5 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_6 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastY_6 == CastX_5);
  }
  else
  {
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
    MR_Word ArgY1_4;

    succeeded = (HeadVar__2_2 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      ArgY1_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
      succeeded = check_hlds__scout_disjunctions____Unify____disjunct_id_0_0(ArgX1_3, ArgY1_4);
    }
  }
  return succeeded;
}

void MR_CALL 
check_hlds__scout_disjunctions____Compare____is_sub_disj_needed_0_0(
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
check_hlds__scout_disjunctions____Unify____is_sub_disj_needed_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

static void MR_CALL 
check_hlds__scout_disjunctions____Compare____in_zone_deconstruct_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__scout_disjunctions_scalar_common_2[0]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

static MR_bool MR_CALL 
check_hlds__scout_disjunctions____Unify____in_zone_deconstruct_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&check_hlds__scout_disjunctions_scalar_common_2[0]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

void MR_CALL 
check_hlds__scout_disjunctions____Compare____disjunction_info_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__scout_disjunctions_scalar_common_2[4]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

MR_bool MR_CALL 
check_hlds__scout_disjunctions____Unify____disjunction_info_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&check_hlds__scout_disjunctions_scalar_common_2[4]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

void MR_CALL 
check_hlds__scout_disjunctions____Compare____disjunction_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_9 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_10 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_9 == CastY_10);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 1))));
    MR_Word SubResult1_6;

    mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__scout_disjunctions_scalar_common_1[5]), &SubResult1_6, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
      mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__scout_disjunctions_scalar_common_2[2]), HeadVar__1_1, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
  }
}

MR_bool MR_CALL 
check_hlds__scout_disjunctions____Unify____disjunction_info_0_0(
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
  {
    MR_Word TypeInfo_10_10;
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&check_hlds__scout_disjunctions_scalar_common_1[5]), ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
    if (succeeded)
    {
      TypeInfo_10_10 = (MR_Word) (&check_hlds__scout_disjunctions_scalar_common_2[2]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_10_10, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
    }
  }
  return succeeded;
}

void MR_CALL 
check_hlds__scout_disjunctions____Compare____disjunction_id_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_6 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_7 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_6 == CastY_7);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Word ArgX1_4 = (MR_Word) (HeadVar__2_2);
    MR_Word ArgY1_5 = (MR_Word) (HeadVar__3_3);
    MR_Unsigned Var_9 = (MR_Unsigned) (ArgX1_4);
    MR_Unsigned Var_10 = (MR_Unsigned) (ArgY1_5);

    succeeded = (Var_9 < Var_10);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 1;
    else
    {
      succeeded = (Var_9 > Var_10);
      if (succeeded)
        *HeadVar__1_1 = (MR_Integer) 2;
      else
        *HeadVar__1_1 = (MR_Integer) 0;
    }
  }
}

MR_bool MR_CALL 
check_hlds__scout_disjunctions____Unify____disjunction_id_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_5 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_6 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_5 == CastY_6);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Word ArgX1_3 = (MR_Word) (HeadVar__1_1);
    MR_Word ArgY1_4 = (MR_Word) (HeadVar__2_2);
    MR_Unsigned Var_8 = (MR_Unsigned) (ArgX1_3);
    MR_Unsigned Var_9 = (MR_Unsigned) (ArgY1_4);

    succeeded = (Var_8 == Var_9);
  }
  return succeeded;
}

void MR_CALL 
check_hlds__scout_disjunctions____Compare____disjunct_info_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__scout_disjunctions_scalar_common_2[3]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

MR_bool MR_CALL 
check_hlds__scout_disjunctions____Unify____disjunct_info_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&check_hlds__scout_disjunctions_scalar_common_2[3]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

void MR_CALL 
check_hlds__scout_disjunctions____Compare____disjunct_id_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_9 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_10 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_9 == CastY_10);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 1))));
    MR_Word SubResult1_6;

    check_hlds__scout_disjunctions____Compare____disjunct_id_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
      check_hlds__scout_disjunctions____Compare____disjunct_info_0_0(HeadVar__1_1, ArgX2_7, ArgY2_8);
  }
}

void MR_CALL 
check_hlds__scout_disjunctions____Compare____disjunct_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_9 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_10 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_9 == CastY_10);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 1))));
    MR_Word SubResult1_6;

    mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__scout_disjunctions_scalar_common_2[0]), &SubResult1_6, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
      mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__scout_disjunctions_scalar_common_1[0]), HeadVar__1_1, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
  }
}

MR_bool MR_CALL 
check_hlds__scout_disjunctions____Unify____disjunct_id_info_0_0(
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
  {
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));

    succeeded = check_hlds__scout_disjunctions____Unify____disjunct_id_0_0(ArgX1_3, ArgY1_4);
    if (succeeded)
      succeeded = check_hlds__scout_disjunctions____Unify____disjunct_info_0_0(ArgX2_5, ArgY2_6);
  }
  return succeeded;
}

MR_bool MR_CALL 
check_hlds__scout_disjunctions____Unify____disjunct_info_0_0(
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
  {
    MR_Word TypeInfo_10_10;
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&check_hlds__scout_disjunctions_scalar_common_2[0]), ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
    if (succeeded)
    {
      TypeInfo_10_10 = (MR_Word) (&check_hlds__scout_disjunctions_scalar_common_1[0]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_10_10, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
    }
  }
  return succeeded;
}

void MR_CALL 
check_hlds__scout_disjunctions____Compare____disjunct_id_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_6 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_7 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_6 == CastY_7);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Word ArgX1_4 = (MR_Word) (HeadVar__2_2);
    MR_Word ArgY1_5 = (MR_Word) (HeadVar__3_3);
    MR_Unsigned Var_9 = (MR_Unsigned) (ArgX1_4);
    MR_Unsigned Var_10 = (MR_Unsigned) (ArgY1_5);

    succeeded = (Var_9 < Var_10);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 1;
    else
    {
      succeeded = (Var_9 > Var_10);
      if (succeeded)
        *HeadVar__1_1 = (MR_Integer) 2;
      else
        *HeadVar__1_1 = (MR_Integer) 0;
    }
  }
}

MR_bool MR_CALL 
check_hlds__scout_disjunctions____Unify____disjunct_id_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_5 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_6 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_5 == CastY_6);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Word ArgX1_3 = (MR_Word) (HeadVar__1_1);
    MR_Word ArgY1_4 = (MR_Word) (HeadVar__2_2);
    MR_Unsigned Var_8 = (MR_Unsigned) (ArgX1_3);
    MR_Unsigned Var_9 = (MR_Unsigned) (ArgY1_4);

    succeeded = (Var_8 == Var_9);
  }
  return succeeded;
}

static void MR_CALL 
check_hlds__scout_disjunctions____Compare____deconstruct_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_15 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_16 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_15 == CastY_16);
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
    MR_Word SubResult1_6;
    MR_Unsigned Var_21 = (MR_Unsigned) (ArgX1_4);
    MR_Unsigned Var_22 = (MR_Unsigned) (ArgY1_5);

    succeeded = (Var_21 < Var_22);
    if (succeeded)
    {
      SubResult1_6 = (MR_Integer) 1;
      succeeded = MR_TRUE;
    }
    else
    {
      succeeded = (Var_21 > Var_22);
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

      mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__scout_disjunctions_scalar_common_1[1]), &SubResult2_9, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
      succeeded = (SubResult2_9 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
      {
        MR_Word SubResult3_12;

        mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__scout_disjunctions_scalar_common_1[4]), &SubResult3_12, ((MR_Box) (ArgX3_10)), ((MR_Box) (ArgY3_11)));
        succeeded = (SubResult3_12 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult3_12;
        else
        {
          MR_Word Cast_HeadVar1_23 = (MR_Word) (ArgX4_13);
          MR_Word Cast_HeadVar2_24 = (MR_Word) (ArgY4_14);

          parse_tree__prog_data____Compare____cons_id_0_0(HeadVar__1_1, Cast_HeadVar1_23, Cast_HeadVar2_24);
        }
      }
    }
  }
}

static MR_bool MR_CALL 
check_hlds__scout_disjunctions____Unify____deconstruct_info_0_0(
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
  {
    MR_Word TypeInfo_14_14;
    MR_Word TypeInfo_15_15;
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 2))));
    MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 2))));
    MR_Word ArgX4_9 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 3))));
    MR_Word ArgY4_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 3))));
    MR_Unsigned Var_16 = (MR_Unsigned) (ArgX1_3);
    MR_Unsigned Var_17 = (MR_Unsigned) (ArgY1_4);
    MR_Word Cast_HeadVar1_18;
    MR_Word Cast_HeadVar2_19;

    succeeded = (Var_16 == Var_17);
    if (succeeded)
    {
      TypeInfo_14_14 = (MR_Word) (&check_hlds__scout_disjunctions_scalar_common_1[1]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_14_14, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
      if (succeeded)
      {
        TypeInfo_15_15 = (MR_Word) (&check_hlds__scout_disjunctions_scalar_common_1[4]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_15_15, ((MR_Box) (ArgX3_7)), ((MR_Box) (ArgY3_8)));
        if (succeeded)
        {
          Cast_HeadVar1_18 = (MR_Word) (ArgX4_9);
          Cast_HeadVar2_19 = (MR_Word) (ArgY4_10);
          succeeded = parse_tree__prog_data____Unify____cons_id_0_0(Cast_HeadVar1_18, Cast_HeadVar2_19);
        }
      }
    }
  }
  return succeeded;
}

void MR_CALL 
check_hlds__scout_disjunctions____Compare____all_arms_summary_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__scout_disjunctions_scalar_common_2[2]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

MR_bool MR_CALL 
check_hlds__scout_disjunctions____Unify____all_arms_summary_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&check_hlds__scout_disjunctions_scalar_common_2[2]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

static void MR_CALL 
check_hlds__scout_disjunctions__acc_var_if_equivalent_5_p_0(
  MR_Word Subst_6,
  MR_Word VarSubstTerm_7,
  MR_Word SeenVar_8,
  MR_Word STATE_VARIABLE_EqvVars_0_14,
  MR_Word * STATE_VARIABLE_EqvVars_15)
{
  MR_bool succeeded;
  MR_Word SeenVarSubstTerm_10;
  MR_Word Var_16;
  MR_Word Var_17;
  MR_Word TypeInfo_20_20;
  MR_Word X_11;
  MR_Word Var_19;

  Var_17 = mercury__term_context__dummy_context_0_f_0();
  {
    Var_16 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_16, 0) = ((MR_Box) (SeenVar_8));
    MR_hl_field(1, Var_16, 1) = ((MR_Box) (Var_17));
  }
  mercury__term_subst__apply_rec_substitution_in_term_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Subst_6, Var_16, &SeenVarSubstTerm_10);
  succeeded = ((MR_tag((MR_Word) VarSubstTerm_7)) == (MR_Integer) 1);
  if (succeeded)
  {
    X_11 = ((MR_Word) ((MR_hl_field(1, VarSubstTerm_7, 0))));
    succeeded = ((MR_tag((MR_Word) SeenVarSubstTerm_10)) == (MR_Integer) 1);
    if (succeeded)
    {
      Var_19 = ((MR_Word) ((MR_hl_field(1, SeenVarSubstTerm_10, 0))));
      TypeInfo_20_20 = (MR_Word) (&check_hlds__scout_disjunctions_scalar_common_1[1]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_20_20, ((MR_Box) (X_11)), ((MR_Box) (Var_19)));
    }
  }
  if (succeeded)
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_EqvVars_15 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (SeenVar_8));
      MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_EqvVars_0_14));
    }
  else
    *STATE_VARIABLE_EqvVars_15 = STATE_VARIABLE_EqvVars_0_14;
}

static void MR_CALL 
check_hlds__scout_disjunctions__add_arm_to_all_arms_summary_3_p_0(
  MR_Word OneArmSummary_4,
  MR_Word STATE_VARIABLE_AllArmsSummary_0_20,
  MR_Word * STATE_VARIABLE_AllArmsSummary_21)
{
  MR_bool succeeded;
  MR_Word ConsIdSet0_6 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_AllArmsSummary_0_20, 0))));
  MR_Word SubDisjNeeded0_7 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_AllArmsSummary_0_20, 1))) & (MR_Integer) 1);
  MR_Word ConsIdSet_14;
  MR_Word SubDisjNeeded_15;

  if (((MR_tag((MR_Word) OneArmSummary_4)) == (MR_Integer) 0))
  {
    MR_Word DeconstructInfo_8 = (MR_Word) ((MR_Word) (OneArmSummary_4));
    MR_Word ConsId_12 = ((MR_Word) ((MR_hl_field(0, DeconstructInfo_8, 3))));
    MR_Word ConsIdSetPrime_13;

    succeeded = mercury__set__insert_new_3_p_0((MR_Word) (&check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__type_ctor_info_switchable_cons_id_0), ((MR_Box) (ConsId_12)), ConsIdSet0_6, &ConsIdSetPrime_13);
    if (succeeded)
    {
      ConsIdSet_14 = ConsIdSetPrime_13;
      SubDisjNeeded_15 = SubDisjNeeded0_7;
    }
    else
    {
      ConsIdSet_14 = ConsIdSet0_6;
      SubDisjNeeded_15 = (MR_Integer) 1;
    }
  }
  else
  {
    MR_Word SubAllArmsSummary_16 = (MR_Word) (MR_body((MR_Word) (OneArmSummary_4), (MR_Integer) 1));
    MR_Word SubConsIdSet_17 = ((MR_Word) ((MR_hl_field(0, SubAllArmsSummary_16, 0))));
    MR_Word SubSubDisjNeeded_18 = ((MR_Unsigned) ((MR_hl_field(0, SubAllArmsSummary_16, 1))) & (MR_Integer) 1);

    mercury__set__union_3_p_0((MR_Word) (&check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__type_ctor_info_switchable_cons_id_0), SubConsIdSet_17, ConsIdSet0_6, &ConsIdSet_14);
    succeeded = (SubDisjNeeded0_7 == (MR_Integer) 0);
    if (succeeded)
      succeeded = (SubSubDisjNeeded_18 == (MR_Integer) 0);
    if (succeeded)
    {
      MR_Word IntersectSet_19;

      mercury__set__intersect_3_p_0((MR_Word) (&check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__type_ctor_info_switchable_cons_id_0), SubConsIdSet_17, ConsIdSet0_6, &IntersectSet_19);
      succeeded = mercury__set__is_empty_1_p_0((MR_Word) (&check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__type_ctor_info_switchable_cons_id_0), IntersectSet_19);
      if (succeeded)
        SubDisjNeeded_15 = (MR_Integer) 0;
      else
        SubDisjNeeded_15 = (MR_Integer) 1;
    }
    else
      SubDisjNeeded_15 = (MR_Integer) 1;
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_AllArmsSummary_21 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (ConsIdSet_14));
    MR_hl_field(0, base, 1) = (MR_Box) ((MR_Unsigned) (SubDisjNeeded_15));
  }
}

static void MR_CALL 
check_hlds__scout_disjunctions__maybe_acc_all_arm_for_var_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_AllArmsSummary_21;

  check_hlds__scout_disjunctions__add_arm_to_all_arms_summary_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_AllArmsSummary_21);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_AllArmsSummary_21));
}

static void MR_CALL 
check_hlds__scout_disjunctions__maybe_acc_all_arm_for_var_5_p_0(
  MR_Word TailOneArmMaps_6,
  MR_Word Var_7,
  MR_Word HeadArmSummary_8,
  MR_Word STATE_VARIABLE_AllArmsMap_0_19,
  MR_Word * STATE_VARIABLE_AllArmsMap_20)
{
  MR_bool succeeded;
  MR_Word RevTailArmSummaries_10;

  succeeded = check_hlds__scout_disjunctions__find_var_one_arm_summaries_4_p_0(Var_7, TailOneArmMaps_6, (MR_Word) ((MR_Unsigned) 0U), &RevTailArmSummaries_10);
  if (succeeded)
  {
    MR_Word AllArmsSummary0_17;
    MR_Word AllArmsSummary_18;
    MR_Box conv1_AllArmsSummary_18;

    if (((MR_tag((MR_Word) HeadArmSummary_8)) == (MR_Integer) 0))
    {
      MR_Word DeconstructInfo_11 = (MR_Word) ((MR_Word) (HeadArmSummary_8));
      MR_Word ConsId_15 = ((MR_Word) ((MR_hl_field(0, DeconstructInfo_11, 3))));
      MR_Word ConsIdSet_16;

      ConsIdSet_16 = mercury__set__make_singleton_set_1_f_0((MR_Word) (&check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__type_ctor_info_switchable_cons_id_0), ((MR_Box) (ConsId_15)));
      {
        AllArmsSummary0_17 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, AllArmsSummary0_17, 0) = ((MR_Box) (ConsIdSet_16));
        MR_hl_field(0, AllArmsSummary0_17, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
      }
    }
    else
      AllArmsSummary0_17 = (MR_Word) (MR_body((MR_Word) (HeadArmSummary_8), (MR_Integer) 1));
    mercury__list__foldl_4_p_0((MR_Word) (&check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__type_ctor_info_var_one_arm_summary_0), (MR_Word) (&check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__type_ctor_info_var_all_arms_summary_0), (MR_Word) (&check_hlds__scout_disjunctions_scalar_common_2[8]), RevTailArmSummaries_10, ((MR_Box) (AllArmsSummary0_17)), &conv1_AllArmsSummary_18);
    AllArmsSummary_18 = ((MR_Word) (conv1_AllArmsSummary_18));
    mercury__map__det_insert_4_p_0((MR_Word) (&check_hlds__scout_disjunctions_scalar_common_1[1]), (MR_Word) (&check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__type_ctor_info_var_all_arms_summary_0), ((MR_Box) (Var_7)), ((MR_Box) (AllArmsSummary_18)), STATE_VARIABLE_AllArmsMap_0_19, STATE_VARIABLE_AllArmsMap_20);
  }
  else
    *STATE_VARIABLE_AllArmsMap_20 = STATE_VARIABLE_AllArmsMap_0_19;
}

static MR_bool MR_CALL 
check_hlds__scout_disjunctions__find_var_one_arm_summaries_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_ArmSummaries_0_3,
  MR_Word * STATE_VARIABLE_ArmSummaries_4)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_ArmSummaries_4 = STATE_VARIABLE_ArmSummaries_0_3;
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Word ArmSummaryMap_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
      MR_Word ArmSummaryMaps_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
      MR_Word ArmSummary_13;
      MR_Word STATE_VARIABLE_ArmSummaries_1_16;
      MR_Box conv0_ArmSummary_13;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_STATE_VARIABLE_ArmSummaries_0_3;

      succeeded = mercury__map__search_3_p_0((MR_Word) (&check_hlds__scout_disjunctions_scalar_common_1[1]), (MR_Word) (&check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__type_ctor_info_var_one_arm_summary_0), ArmSummaryMap_10, ((MR_Box) (HeadVar__1_1)), &conv0_ArmSummary_13);
      if (succeeded)
      {
        ArmSummary_13 = ((MR_Word) (conv0_ArmSummary_13));
        succeeded = MR_TRUE;
      }
      if (succeeded)
      {
        {
          STATE_VARIABLE_ArmSummaries_1_16 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, STATE_VARIABLE_ArmSummaries_1_16, 0) = ((MR_Box) (ArmSummary_13));
          MR_hl_field(1, STATE_VARIABLE_ArmSummaries_1_16, 1) = ((MR_Box) (STATE_VARIABLE_ArmSummaries_0_3));
        }
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__2_2 = ArmSummaryMaps_11;
        next_value_of_STATE_VARIABLE_ArmSummaries_0_3 = STATE_VARIABLE_ArmSummaries_1_16;
        HeadVar__2_2 = next_value_of_HeadVar__2_2;
        STATE_VARIABLE_ArmSummaries_0_3 = next_value_of_STATE_VARIABLE_ArmSummaries_0_3;
        continue;
      }
    }
    return succeeded;
    break;
  }
}

static void MR_CALL 
check_hlds__scout_disjunctions__acc_sub_disjunction_summary_4_p_0(
  MR_Word Var_5,
  MR_Word SubDisjAllArms_6,
  MR_Word STATE_VARIABLE_OneArmMap_0_9,
  MR_Word * STATE_VARIABLE_OneArmMap_10)
{
  MR_Word Var_11 = (MR_Word) (MR_mkword(1, (MR_Word) (SubDisjAllArms_6)));
  MR_Word _OldOneArm_8;

  mercury__map__search_insert_5_p_0((MR_Word) (&check_hlds__scout_disjunctions_scalar_common_1[1]), (MR_Word) (&check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__type_ctor_info_var_one_arm_summary_0), ((MR_Box) (Var_5)), ((MR_Box) (Var_11)), &_OldOneArm_8, STATE_VARIABLE_OneArmMap_0_9, STATE_VARIABLE_OneArmMap_10);
}

static void MR_CALL 
check_hlds__scout_disjunctions__in_zone_deconstruct_to_one_arm_summary_2_p_0(
  MR_Word DeconstructInfo_3,
  MR_Word * OneArm_4)
{
  *OneArm_4 = (MR_Word) ((MR_Word) (DeconstructInfo_3));
}

static void MR_CALL 
check_hlds__scout_disjunctions__maybe_add_deconstruct_4_p_0(
  MR_Word DeconstructInfo_5,
  MR_Word XEqvVar_6,
  MR_Word STATE_VARIABLE_DeconstructMap_0_9,
  MR_Word * STATE_VARIABLE_DeconstructMap_10)
{
  MR_Word Var_8;

  mercury__map__search_insert_5_p_0((MR_Word) (&check_hlds__scout_disjunctions_scalar_common_1[1]), (MR_Word) (&check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__type_ctor_info_deconstruct_info_0), ((MR_Box) (XEqvVar_6)), ((MR_Box) (DeconstructInfo_5)), &Var_8, STATE_VARIABLE_DeconstructMap_0_9, STATE_VARIABLE_DeconstructMap_10);
}

void MR_CALL 
check_hlds__scout_disjunctions__scout_disjunctions_in_proc_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word STATE_VARIABLE_ProcInfo_0_28,
  MR_Word * STATE_VARIABLE_ProcInfo_29,
  MR_Word * DisjunctionInfoMap_7)
{
  MR_Word SubstDb0_9;
  MR_Word VarTable_10;
  MR_Word DisjunctionInfoMap0_11;
  MR_Word DisjunctInfoMap0_12;
  MR_Word ScoutInfo0_13;
  MR_Word Goal_14;
  MR_Word InstMap0_15;
  MR_Word ScoutInfo_19;
  MR_Word Var_44;
  MR_Word Var_45;
  MR_Word _ContainingGoalMap_8;
  MR_Word _InstMap_16;
  MR_Word _InZone_17;
  MR_Word _SubstDb_18;

  hlds__goal_path__fill_goal_id_slots_in_proc_4_p_0(ModuleInfo_5, &_ContainingGoalMap_8, STATE_VARIABLE_ProcInfo_0_28, STATE_VARIABLE_ProcInfo_29);
  Var_44 = mercury__set__init_0_f_0((MR_Word) (&check_hlds__scout_disjunctions_scalar_common_1[1]));
  Var_45 = mercury__map__init_0_f_0((MR_Word) (&check_hlds__scout_disjunctions_scalar_common_1[1]), (MR_Word) (&check_hlds__scout_disjunctions_scalar_common_1[2]));
  {
    SubstDb0_9 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, SubstDb0_9, 0) = ((MR_Box) (Var_44));
    MR_hl_field(0, SubstDb0_9, 1) = ((MR_Box) (Var_45));
  }
  hlds__hlds_pred__proc_info_get_var_table_2_p_0(*STATE_VARIABLE_ProcInfo_29, &VarTable_10);
  mercury__map__init_1_p_0((MR_Word) (&check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__type_ctor_info_disjunction_id_0), (MR_Word) (&check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__type_ctor_info_disjunction_info_0), &DisjunctionInfoMap0_11);
  mercury__map__init_1_p_0((MR_Word) (&check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__type_ctor_info_disjunct_id_0), (MR_Word) (&check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__type_ctor_info_disjunct_info_0), &DisjunctInfoMap0_12);
  {
    ScoutInfo0_13 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, ScoutInfo0_13, 0) = ((MR_Box) (ModuleInfo_5));
    MR_hl_field(0, ScoutInfo0_13, 1) = ((MR_Box) (VarTable_10));
    MR_hl_field(0, ScoutInfo0_13, 2) = ((MR_Box) (DisjunctionInfoMap0_11));
    MR_hl_field(0, ScoutInfo0_13, 3) = ((MR_Box) (DisjunctInfoMap0_12));
  }
  hlds__hlds_pred__proc_info_get_goal_2_p_0(*STATE_VARIABLE_ProcInfo_29, &Goal_14);
  hlds__hlds_proc_util__proc_info_get_initial_instmap_3_p_0(ModuleInfo_5, *STATE_VARIABLE_ProcInfo_29, &InstMap0_15);
  check_hlds__scout_disjunctions__scout_disjunctions_in_goal_9_p_0(Goal_14, InstMap0_15, &_InstMap_16, (MR_Word) ((MR_Unsigned) 0U), &_InZone_17, SubstDb0_9, &_SubstDb_18, ScoutInfo0_13, &ScoutInfo_19);
  *DisjunctionInfoMap_7 = ((MR_Word) ((MR_hl_field(0, ScoutInfo_19, 2))));
}

static void MR_CALL 
check_hlds__scout_disjunctions__scout_disjunctions_in_cases_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word STATE_VARIABLE_ScoutInfo_0_5,
  MR_Word * STATE_VARIABLE_ScoutInfo_6)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_ScoutInfo_6 = STATE_VARIABLE_ScoutInfo_0_5;
    else
    {
      MR_Word Case_14 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
      MR_Word Cases_15 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
      MR_Word MainConsId_19 = ((MR_Word) ((MR_hl_field(0, Case_14, 0))));
      MR_Word OtherConsIds_20 = ((MR_Word) ((MR_hl_field(0, Case_14, 1))));
      MR_Word Goal_21 = ((MR_Word) ((MR_hl_field(0, Case_14, 2))));
      MR_Word VarTable_22 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ScoutInfo_0_5, 1))));
      MR_Word VarType_23;
      MR_Word ModuleInfo0_24;
      MR_Word InstMap1_25;
      MR_Word ModuleInfo_26;
      MR_Word STATE_VARIABLE_ScoutInfo_1_32;
      MR_Word STATE_VARIABLE_ScoutInfo_2_34;
      MR_Word Var_42;
      MR_Word Var_43;
      MR_Word Var_44;
      MR_Word Var_27;
      MR_Word Var_28;
      MR_Word Var_29;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_STATE_VARIABLE_ScoutInfo_0_5;

      parse_tree__var_table__lookup_var_type_3_p_0(VarTable_22, HeadVar__1_1, &VarType_23);
      ModuleInfo0_24 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ScoutInfo_0_5, 0))));
      hlds__instmap__bind_var_to_functors_8_p_0(HeadVar__1_1, VarType_23, MainConsId_19, OtherConsIds_20, HeadVar__3_3, &InstMap1_25, ModuleInfo0_24, &ModuleInfo_26);
      Var_42 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ScoutInfo_0_5, 1))));
      Var_43 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ScoutInfo_0_5, 2))));
      Var_44 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ScoutInfo_0_5, 3))));
      {
        STATE_VARIABLE_ScoutInfo_1_32 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, STATE_VARIABLE_ScoutInfo_1_32, 0) = ((MR_Box) (ModuleInfo_26));
        MR_hl_field(0, STATE_VARIABLE_ScoutInfo_1_32, 1) = ((MR_Box) (Var_42));
        MR_hl_field(0, STATE_VARIABLE_ScoutInfo_1_32, 2) = ((MR_Box) (Var_43));
        MR_hl_field(0, STATE_VARIABLE_ScoutInfo_1_32, 3) = ((MR_Box) (Var_44));
      }
      check_hlds__scout_disjunctions__scout_disjunctions_in_goal_9_p_0(Goal_21, InstMap1_25, &Var_27, (MR_Word) ((MR_Unsigned) 0U), &Var_28, HeadVar__4_4, &Var_29, STATE_VARIABLE_ScoutInfo_1_32, &STATE_VARIABLE_ScoutInfo_2_34);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = Cases_15;
      next_value_of_STATE_VARIABLE_ScoutInfo_0_5 = STATE_VARIABLE_ScoutInfo_2_34;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      STATE_VARIABLE_ScoutInfo_0_5 = next_value_of_STATE_VARIABLE_ScoutInfo_0_5;
      continue;
    }
    break;
  }
}

static void MR_CALL 
check_hlds__scout_disjunctions__scout_disjunctions_in_orelse_goals_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_ScoutInfo_0_4,
  MR_Word * STATE_VARIABLE_ScoutInfo_5)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_ScoutInfo_5 = STATE_VARIABLE_ScoutInfo_0_4;
    else
    {
      MR_Word OrElseGoal_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
      MR_Word OrElseGoals_12 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
      MR_Word STATE_VARIABLE_ScoutInfo_1_22;
      MR_Word Var_16;
      MR_Word Var_17;
      MR_Word Var_18;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_ScoutInfo_0_4;

      check_hlds__scout_disjunctions__scout_disjunctions_in_goal_9_p_0(OrElseGoal_11, HeadVar__2_2, &Var_16, (MR_Word) ((MR_Unsigned) 0U), &Var_17, HeadVar__3_3, &Var_18, STATE_VARIABLE_ScoutInfo_0_4, &STATE_VARIABLE_ScoutInfo_1_22);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = OrElseGoals_12;
      next_value_of_STATE_VARIABLE_ScoutInfo_0_4 = STATE_VARIABLE_ScoutInfo_1_22;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_ScoutInfo_0_4 = next_value_of_STATE_VARIABLE_ScoutInfo_0_4;
      continue;
    }
    break;
  }
}

static void MR_CALL 
check_hlds__scout_disjunctions__scout_disjunctions_in_conjuncts_8_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_InZone_0_3,
  MR_Word * STATE_VARIABLE_InZone_4,
  MR_Word STATE_VARIABLE_SubstDb_0_5,
  MR_Word * STATE_VARIABLE_SubstDb_6,
  MR_Word STATE_VARIABLE_ScoutInfo_0_7,
  MR_Word * STATE_VARIABLE_ScoutInfo_8)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_ScoutInfo_8 = STATE_VARIABLE_ScoutInfo_0_7;
      *STATE_VARIABLE_SubstDb_6 = STATE_VARIABLE_SubstDb_0_5;
      *STATE_VARIABLE_InZone_4 = STATE_VARIABLE_InZone_0_3;
    }
    else
    {
      MR_Word Conjunct_19 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
      MR_Word Conjuncts_20 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
      MR_Word InstMap1_25;
      MR_Word STATE_VARIABLE_InZone_1_32;
      MR_Word STATE_VARIABLE_SubstDb_1_33;
      MR_Word STATE_VARIABLE_ScoutInfo_1_34;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_STATE_VARIABLE_InZone_0_3;
      MR_Word next_value_of_STATE_VARIABLE_SubstDb_0_5;
      MR_Word next_value_of_STATE_VARIABLE_ScoutInfo_0_7;

      check_hlds__scout_disjunctions__scout_disjunctions_in_goal_9_p_0(Conjunct_19, HeadVar__2_2, &InstMap1_25, STATE_VARIABLE_InZone_0_3, &STATE_VARIABLE_InZone_1_32, STATE_VARIABLE_SubstDb_0_5, &STATE_VARIABLE_SubstDb_1_33, STATE_VARIABLE_ScoutInfo_0_7, &STATE_VARIABLE_ScoutInfo_1_34);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Conjuncts_20;
      next_value_of_HeadVar__2_2 = InstMap1_25;
      next_value_of_STATE_VARIABLE_InZone_0_3 = STATE_VARIABLE_InZone_1_32;
      next_value_of_STATE_VARIABLE_SubstDb_0_5 = STATE_VARIABLE_SubstDb_1_33;
      next_value_of_STATE_VARIABLE_ScoutInfo_0_7 = STATE_VARIABLE_ScoutInfo_1_34;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      STATE_VARIABLE_InZone_0_3 = next_value_of_STATE_VARIABLE_InZone_0_3;
      STATE_VARIABLE_SubstDb_0_5 = next_value_of_STATE_VARIABLE_SubstDb_0_5;
      STATE_VARIABLE_ScoutInfo_0_7 = next_value_of_STATE_VARIABLE_ScoutInfo_0_7;
      continue;
    }
    break;
  }
}

static void MR_CALL 
check_hlds__scout_disjunctions__scout_disjunctions_in_disjuncts_8_p_0(
  MR_Word HeadDisjunct_9,
  MR_Word TailDisjuncts_10,
  MR_Word InstMap0_11,
  MR_Word SubstDb0_12,
  MR_Word * HeadDisjunctIdInfo_13,
  MR_Word * TailDisjunctIdInfos_14,
  MR_Word STATE_VARIABLE_ScoutInfo_0_32,
  MR_Word * STATE_VARIABLE_ScoutInfo_33)
{
  MR_Word HeadDisjunctGoalInfo_17 = ((MR_Word) ((MR_hl_field(0, HeadDisjunct_9, 1))));
  MR_Word HeadDisjunctGoalId_18;
  MR_Word HeadDisjunctId_19;
  MR_Word DisjunctInfoMap0_20;
  MR_Word HeadDisjunctInfo0_21;
  MR_Word DisjunctInfoMap1_22;
  MR_Word DisjunctInfoMap_26;
  MR_Word HeadDisjunctInfo_27;
  MR_Word Var_34;
  MR_Word STATE_VARIABLE_ScoutInfo_1_36;
  MR_Word Var_37;
  MR_Word STATE_VARIABLE_ScoutInfo_2_38;
  MR_Word Var_42;
  MR_Word Var_43;
  MR_Word Var_44;
  MR_Word Var_23;
  MR_Word Var_24;
  MR_Word Var_25;
  MR_Box conv0_HeadDisjunctInfo_27;

  HeadDisjunctGoalId_18 = hlds__hlds_goal__goal_info_get_goal_id_1_f_0(HeadDisjunctGoalInfo_17);
  HeadDisjunctId_19 = (MR_Word) (HeadDisjunctGoalId_18);
  DisjunctInfoMap0_20 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ScoutInfo_0_32, 3))));
  Var_34 = mercury__map__init_0_f_0((MR_Word) (&check_hlds__scout_disjunctions_scalar_common_1[1]), (MR_Word) (&check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__type_ctor_info_deconstruct_info_0));
  {
    HeadDisjunctInfo0_21 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, HeadDisjunctInfo0_21, 0) = ((MR_Box) (Var_34));
    MR_hl_field(0, HeadDisjunctInfo0_21, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  mercury__map__det_insert_4_p_0((MR_Word) (&check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__type_ctor_info_disjunct_id_0), (MR_Word) (&check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__type_ctor_info_disjunct_info_0), ((MR_Box) (HeadDisjunctId_19)), ((MR_Box) (HeadDisjunctInfo0_21)), DisjunctInfoMap0_20, &DisjunctInfoMap1_22);
  Var_42 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ScoutInfo_0_32, 0))));
  Var_43 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ScoutInfo_0_32, 1))));
  Var_44 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ScoutInfo_0_32, 2))));
  {
    STATE_VARIABLE_ScoutInfo_1_36 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, STATE_VARIABLE_ScoutInfo_1_36, 0) = ((MR_Box) (Var_42));
    MR_hl_field(0, STATE_VARIABLE_ScoutInfo_1_36, 1) = ((MR_Box) (Var_43));
    MR_hl_field(0, STATE_VARIABLE_ScoutInfo_1_36, 2) = ((MR_Box) (Var_44));
    MR_hl_field(0, STATE_VARIABLE_ScoutInfo_1_36, 3) = ((MR_Box) (DisjunctInfoMap1_22));
  }
  {
    Var_37 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_37, 0) = ((MR_Box) (HeadDisjunctId_19));
  }
  check_hlds__scout_disjunctions__scout_disjunctions_in_goal_9_p_0(HeadDisjunct_9, InstMap0_11, &Var_23, Var_37, &Var_24, SubstDb0_12, &Var_25, STATE_VARIABLE_ScoutInfo_1_36, &STATE_VARIABLE_ScoutInfo_2_38);
  DisjunctInfoMap_26 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ScoutInfo_2_38, 3))));
  mercury__map__lookup_3_p_0((MR_Word) (&check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__type_ctor_info_disjunct_id_0), (MR_Word) (&check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__type_ctor_info_disjunct_info_0), DisjunctInfoMap_26, ((MR_Box) (HeadDisjunctId_19)), &conv0_HeadDisjunctInfo_27);
  HeadDisjunctInfo_27 = ((MR_Word) (conv0_HeadDisjunctInfo_27));
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *HeadDisjunctIdInfo_13 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (HeadDisjunctId_19));
    MR_hl_field(0, base, 1) = ((MR_Box) (HeadDisjunctInfo_27));
  }
  if ((TailDisjuncts_10 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *TailDisjunctIdInfos_14 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_ScoutInfo_33 = STATE_VARIABLE_ScoutInfo_2_38;
  }
  else
  {
    MR_Word HeadTailDisjunct_28 = ((MR_Word) ((MR_hl_field(1, TailDisjuncts_10, 0))));
    MR_Word TailTailDisjuncts_29 = ((MR_Word) ((MR_hl_field(1, TailDisjuncts_10, 1))));
    MR_Word HeadTailDisjunctIdInfo_30;
    MR_Word TailTailDisjunctIdInfos_31;

    check_hlds__scout_disjunctions__scout_disjunctions_in_disjuncts_8_p_0(HeadTailDisjunct_28, TailTailDisjuncts_29, InstMap0_11, SubstDb0_12, &HeadTailDisjunctIdInfo_30, &TailTailDisjunctIdInfos_31, STATE_VARIABLE_ScoutInfo_2_38, STATE_VARIABLE_ScoutInfo_33);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *TailDisjunctIdInfos_14 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (HeadTailDisjunctIdInfo_30));
      MR_hl_field(1, base, 1) = ((MR_Box) (TailTailDisjunctIdInfos_31));
    }
  }
}

static void MR_CALL 
check_hlds__scout_disjunctions__scout_disjunctions_in_unify_expr_8_p_0(
  MR_Word GoalExpr_9,
  MR_Word GoalInfo_10,
  MR_Word InstMap0_11,
  MR_Word InZone0_12,
  MR_Word STATE_VARIABLE_SubstDb_0_81,
  MR_Word * STATE_VARIABLE_SubstDb_82,
  MR_Word STATE_VARIABLE_ScoutInfo_0_83,
  MR_Word * STATE_VARIABLE_ScoutInfo_84)
{
  MR_Word XVar_15 = ((MR_Word) ((MR_hl_field(1, GoalExpr_9, 0))));
  MR_Word RHS_16 = ((MR_Word) ((MR_hl_field(1, GoalExpr_9, 1))));
  MR_Word Unification_18 = ((MR_Word) ((MR_hl_field(1, GoalExpr_9, 3))));

  switch (MR_tag((MR_Word) RHS_16)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word YVar_32 = ((MR_Word) ((MR_hl_field(0, RHS_16, 0))));

        check_hlds__scout_disjunctions__record_var_var_unify_4_p_0(XVar_15, YVar_32, STATE_VARIABLE_SubstDb_0_81, STATE_VARIABLE_SubstDb_82);
        *STATE_VARIABLE_ScoutInfo_84 = STATE_VARIABLE_ScoutInfo_0_83;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word ConsId_33 = ((MR_Word) ((MR_hl_field(1, RHS_16, 0))));
        MR_Word YVars_35 = ((MR_Word) ((MR_hl_field(1, RHS_16, 2))));

        switch (MR_tag((MR_Word) ConsId_33)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              *STATE_VARIABLE_SubstDb_82 = STATE_VARIABLE_SubstDb_0_81;
              *STATE_VARIABLE_ScoutInfo_84 = STATE_VARIABLE_ScoutInfo_0_83;
            }
            break;
          case (MR_Integer) 1:
            {
              switch (MR_tag((MR_Word) Unification_18)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  *STATE_VARIABLE_ScoutInfo_84 = STATE_VARIABLE_ScoutInfo_0_83;
                  break;
                case (MR_Integer) 1:
                  if ((InZone0_12 == (MR_Word) ((MR_Unsigned) 0U)))
                    *STATE_VARIABLE_ScoutInfo_84 = STATE_VARIABLE_ScoutInfo_0_83;
                  else
                  {
                    MR_Word DisjunctId_58 = ((MR_Word) ((MR_hl_field(1, InZone0_12, 0))));
                    MR_Word GoalId_59;
                    MR_Word Var_92;

                    GoalId_59 = hlds__hlds_goal__goal_info_get_goal_id_1_f_0(GoalInfo_10);
                    Var_92 = (MR_Word) (ConsId_33);
                    check_hlds__scout_disjunctions__record_deconstruct_7_p_0(GoalId_59, XVar_15, Var_92, STATE_VARIABLE_SubstDb_0_81, DisjunctId_58, STATE_VARIABLE_ScoutInfo_0_83, STATE_VARIABLE_ScoutInfo_84);
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.scout_disjunctions.scout_disjunctions_in_unify_expr\'/8", (MR_String) "assign");
                    return;
                  }
                  break;
                case (MR_Integer) 3:
                  switch (((MR_Integer) ((MR_hl_field(3, Unification_18, 0))))) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.scout_disjunctions.scout_disjunctions_in_unify_expr\'/8", (MR_String) "simple_test");
                        return;
                      }
                      break;
                    case (MR_Integer) 1:
                      {
                        mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.scout_disjunctions.scout_disjunctions_in_unify_expr\'/8", (MR_String) "complicated_unify");
                        return;
                      }
                      break;
                  }
                  break;
              }
              check_hlds__scout_disjunctions__record_var_functor_unify_5_p_0(XVar_15, ConsId_33, YVars_35, STATE_VARIABLE_SubstDb_0_81, STATE_VARIABLE_SubstDb_82);
            }
            break;
          case (MR_Integer) 2:
            {
              *STATE_VARIABLE_SubstDb_82 = STATE_VARIABLE_SubstDb_0_81;
              *STATE_VARIABLE_ScoutInfo_84 = STATE_VARIABLE_ScoutInfo_0_83;
            }
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) ((MR_hl_field(3, ConsId_33, 0))))) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  *STATE_VARIABLE_SubstDb_82 = STATE_VARIABLE_SubstDb_0_81;
                  *STATE_VARIABLE_ScoutInfo_84 = STATE_VARIABLE_ScoutInfo_0_83;
                }
                break;
              case (MR_Integer) 1:
                {
                  *STATE_VARIABLE_SubstDb_82 = STATE_VARIABLE_SubstDb_0_81;
                  *STATE_VARIABLE_ScoutInfo_84 = STATE_VARIABLE_ScoutInfo_0_83;
                }
                break;
              case (MR_Integer) 2:
                {
                  *STATE_VARIABLE_SubstDb_82 = STATE_VARIABLE_SubstDb_0_81;
                  *STATE_VARIABLE_ScoutInfo_84 = STATE_VARIABLE_ScoutInfo_0_83;
                }
                break;
              case (MR_Integer) 3:
                {
                  *STATE_VARIABLE_SubstDb_82 = STATE_VARIABLE_SubstDb_0_81;
                  *STATE_VARIABLE_ScoutInfo_84 = STATE_VARIABLE_ScoutInfo_0_83;
                }
                break;
              case (MR_Integer) 4:
                {
                  *STATE_VARIABLE_SubstDb_82 = STATE_VARIABLE_SubstDb_0_81;
                  *STATE_VARIABLE_ScoutInfo_84 = STATE_VARIABLE_ScoutInfo_0_83;
                }
                break;
              case (MR_Integer) 5:
              case (MR_Integer) 6:
              case (MR_Integer) 7:
              case (MR_Integer) 8:
                {
                  switch (MR_tag((MR_Word) Unification_18)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *STATE_VARIABLE_ScoutInfo_84 = STATE_VARIABLE_ScoutInfo_0_83;
                      break;
                    case (MR_Integer) 1:
                      if ((InZone0_12 == (MR_Word) ((MR_Unsigned) 0U)))
                        *STATE_VARIABLE_ScoutInfo_84 = STATE_VARIABLE_ScoutInfo_0_83;
                      else
                      {
                        MR_Word DisjunctId_58 = ((MR_Word) ((MR_hl_field(1, InZone0_12, 0))));
                        MR_Word GoalId_59;
                        MR_Word Var_92;

                        GoalId_59 = hlds__hlds_goal__goal_info_get_goal_id_1_f_0(GoalInfo_10);
                        Var_92 = (MR_Word) (ConsId_33);
                        check_hlds__scout_disjunctions__record_deconstruct_7_p_0(GoalId_59, XVar_15, Var_92, STATE_VARIABLE_SubstDb_0_81, DisjunctId_58, STATE_VARIABLE_ScoutInfo_0_83, STATE_VARIABLE_ScoutInfo_84);
                      }
                      break;
                    case (MR_Integer) 2:
                      {
                        mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.scout_disjunctions.scout_disjunctions_in_unify_expr\'/8", (MR_String) "assign");
                        return;
                      }
                      break;
                    case (MR_Integer) 3:
                      switch (((MR_Integer) ((MR_hl_field(3, Unification_18, 0))))) {
                        default: /*NOTREACHED*/ MR_assert(0);
                        case (MR_Integer) 0:
                          {
                            mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.scout_disjunctions.scout_disjunctions_in_unify_expr\'/8", (MR_String) "simple_test");
                            return;
                          }
                          break;
                        case (MR_Integer) 1:
                          {
                            mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.scout_disjunctions.scout_disjunctions_in_unify_expr\'/8", (MR_String) "complicated_unify");
                            return;
                          }
                          break;
                      }
                      break;
                  }
                  check_hlds__scout_disjunctions__record_var_functor_unify_5_p_0(XVar_15, ConsId_33, YVars_35, STATE_VARIABLE_SubstDb_0_81, STATE_VARIABLE_SubstDb_82);
                }
                break;
              case (MR_Integer) 9:
                {
                  *STATE_VARIABLE_SubstDb_82 = STATE_VARIABLE_SubstDb_0_81;
                  *STATE_VARIABLE_ScoutInfo_84 = STATE_VARIABLE_ScoutInfo_0_83;
                }
                break;
              case (MR_Integer) 10:
                {
                  *STATE_VARIABLE_SubstDb_82 = STATE_VARIABLE_SubstDb_0_81;
                  *STATE_VARIABLE_ScoutInfo_84 = STATE_VARIABLE_ScoutInfo_0_83;
                }
                break;
              case (MR_Integer) 11:
                {
                  *STATE_VARIABLE_SubstDb_82 = STATE_VARIABLE_SubstDb_0_81;
                  *STATE_VARIABLE_ScoutInfo_84 = STATE_VARIABLE_ScoutInfo_0_83;
                }
                break;
              case (MR_Integer) 12:
                {
                  *STATE_VARIABLE_SubstDb_82 = STATE_VARIABLE_SubstDb_0_81;
                  *STATE_VARIABLE_ScoutInfo_84 = STATE_VARIABLE_ScoutInfo_0_83;
                }
                break;
              case (MR_Integer) 13:
                {
                  *STATE_VARIABLE_SubstDb_82 = STATE_VARIABLE_SubstDb_0_81;
                  *STATE_VARIABLE_ScoutInfo_84 = STATE_VARIABLE_ScoutInfo_0_83;
                }
                break;
              case (MR_Integer) 14:
                {
                  *STATE_VARIABLE_SubstDb_82 = STATE_VARIABLE_SubstDb_0_81;
                  *STATE_VARIABLE_ScoutInfo_84 = STATE_VARIABLE_ScoutInfo_0_83;
                }
                break;
            }
            break;
        }
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word VarsModes_24 = ((MR_Word) ((MR_hl_field(2, RHS_16, 2))));
        MR_Word LambdaGoal_26 = ((MR_Word) ((MR_hl_field(2, RHS_16, 4))));
        MR_Word ModuleInfo_27 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ScoutInfo_0_83, 0))));
        MR_Word InstMap1_28;
        MR_Word Var_29;
        MR_Word Var_30;
        MR_Word Var_31;

        hlds__instmap__pre_lambda_update_4_p_0(ModuleInfo_27, VarsModes_24, InstMap0_11, &InstMap1_28);
        check_hlds__scout_disjunctions__scout_disjunctions_in_goal_9_p_0(LambdaGoal_26, InstMap1_28, &Var_29, (MR_Word) ((MR_Unsigned) 0U), &Var_30, STATE_VARIABLE_SubstDb_0_81, &Var_31, STATE_VARIABLE_ScoutInfo_0_83, STATE_VARIABLE_ScoutInfo_84);
        *STATE_VARIABLE_SubstDb_82 = STATE_VARIABLE_SubstDb_0_81;
      }
      break;
  }
}

static MR_bool MR_CALL 
check_hlds__scout_disjunctions__scout_disjunctions_in_goal_9_p_0_2(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = check_hlds__scout_disjunctions__IntroducedFrom__pred__scout_disjunctions_in_goal__459__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))));
  return succeeded;
}

static MR_bool MR_CALL 
check_hlds__scout_disjunctions__scout_disjunctions_in_goal_9_p_0_1(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = check_hlds__scout_disjunctions__IntroducedFrom__pred__scout_disjunctions_in_goal__381__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))));
  return succeeded;
}

static void MR_CALL 
check_hlds__scout_disjunctions__scout_disjunctions_in_goal_9_p_0(
  MR_Word Goal_10,
  MR_Word InstMap0_11,
  MR_Word * InstMap_12,
  MR_Word STATE_VARIABLE_InZone_0_143,
  MR_Word * STATE_VARIABLE_InZone_144,
  MR_Word STATE_VARIABLE_SubstDb_0_145,
  MR_Word * STATE_VARIABLE_SubstDb_146,
  MR_Word STATE_VARIABLE_ScoutInfo_0_147,
  MR_Word * STATE_VARIABLE_ScoutInfo_148)
{
  MR_bool succeeded;
  MR_Word GoalExpr_16 = ((MR_Word) ((MR_hl_field(0, Goal_10, 0))));
  MR_Word GoalInfo_17 = ((MR_Word) ((MR_hl_field(0, Goal_10, 1))));

  switch (MR_tag((MR_Word) GoalExpr_16)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word SubGoal_82 = (MR_Word) ((MR_Word) (GoalExpr_16));
        MR_Word Var_83;
        MR_Word Var_84;
        MR_Word Var_85;

        check_hlds__scout_disjunctions__scout_disjunctions_in_goal_9_p_0(SubGoal_82, InstMap0_11, &Var_83, (MR_Word) ((MR_Unsigned) 0U), &Var_84, STATE_VARIABLE_SubstDb_0_145, &Var_85, STATE_VARIABLE_ScoutInfo_0_147, STATE_VARIABLE_ScoutInfo_148);
        *STATE_VARIABLE_InZone_144 = (MR_Word) ((MR_Unsigned) 0U);
        *STATE_VARIABLE_SubstDb_146 = STATE_VARIABLE_SubstDb_0_145;
      }
      break;
    case (MR_Integer) 1:
      {
        check_hlds__scout_disjunctions__scout_disjunctions_in_unify_expr_8_p_0(GoalExpr_16, GoalInfo_17, InstMap0_11, STATE_VARIABLE_InZone_0_143, STATE_VARIABLE_SubstDb_0_145, STATE_VARIABLE_SubstDb_146, STATE_VARIABLE_ScoutInfo_0_147, STATE_VARIABLE_ScoutInfo_148);
        *STATE_VARIABLE_InZone_144 = STATE_VARIABLE_InZone_0_143;
      }
      break;
    case (MR_Integer) 2:
      {
        succeeded = hlds__hlds_goal__goal_info_has_feature_2_p_0(GoalInfo_17, (MR_Integer) 1);
        if (succeeded)
          *STATE_VARIABLE_InZone_144 = STATE_VARIABLE_InZone_0_143;
        else
          *STATE_VARIABLE_InZone_144 = (MR_Word) ((MR_Unsigned) 0U);
        *STATE_VARIABLE_SubstDb_146 = STATE_VARIABLE_SubstDb_0_145;
        *STATE_VARIABLE_ScoutInfo_148 = STATE_VARIABLE_ScoutInfo_0_147;
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, GoalExpr_16, 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
        case (MR_Integer) 1:
          {
            succeeded = hlds__hlds_goal__goal_info_has_feature_2_p_0(GoalInfo_17, (MR_Integer) 1);
            if (succeeded)
              *STATE_VARIABLE_InZone_144 = STATE_VARIABLE_InZone_0_143;
            else
              *STATE_VARIABLE_InZone_144 = (MR_Word) ((MR_Unsigned) 0U);
            *STATE_VARIABLE_SubstDb_146 = STATE_VARIABLE_SubstDb_0_145;
            *STATE_VARIABLE_ScoutInfo_148 = STATE_VARIABLE_ScoutInfo_0_147;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word ConjType_41 = ((MR_Unsigned) ((MR_hl_field(3, GoalExpr_16, 1))) & (MR_Integer) 1);
            MR_Word Conjuncts_42 = ((MR_Word) ((MR_hl_field(3, GoalExpr_16, 2))));

            switch (ConjType_41) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                if ((Conjuncts_42 == (MR_Word) ((MR_Unsigned) 0U)))
                {
                  *STATE_VARIABLE_InZone_144 = STATE_VARIABLE_InZone_0_143;
                  *STATE_VARIABLE_SubstDb_146 = STATE_VARIABLE_SubstDb_0_145;
                  *STATE_VARIABLE_ScoutInfo_148 = STATE_VARIABLE_ScoutInfo_0_147;
                }
                else
                {
                  MR_Word HeadConjunct_43 = ((MR_Word) ((MR_hl_field(1, Conjuncts_42, 0))));
                  MR_Word TailConjuncts_44 = ((MR_Word) ((MR_hl_field(1, Conjuncts_42, 1))));
                  MR_Word InstMap1_45;
                  MR_Word STATE_VARIABLE_SubstDb_3_156;
                  MR_Word STATE_VARIABLE_ScoutInfo_3_157;
                  MR_Word Var_46;
                  MR_Word Var_47;

                  check_hlds__scout_disjunctions__scout_disjunctions_in_goal_9_p_0(HeadConjunct_43, InstMap0_11, &InstMap1_45, STATE_VARIABLE_InZone_0_143, &Var_46, STATE_VARIABLE_SubstDb_0_145, &STATE_VARIABLE_SubstDb_3_156, STATE_VARIABLE_ScoutInfo_0_147, &STATE_VARIABLE_ScoutInfo_3_157);
                  check_hlds__scout_disjunctions__scout_disjunctions_in_conjuncts_8_p_0(TailConjuncts_44, InstMap1_45, (MR_Word) ((MR_Unsigned) 0U), &Var_47, STATE_VARIABLE_SubstDb_3_156, STATE_VARIABLE_SubstDb_146, STATE_VARIABLE_ScoutInfo_3_157, STATE_VARIABLE_ScoutInfo_148);
                  *STATE_VARIABLE_InZone_144 = (MR_Word) ((MR_Unsigned) 0U);
                }
                break;
              case (MR_Integer) 0:
                check_hlds__scout_disjunctions__scout_disjunctions_in_conjuncts_8_p_0(Conjuncts_42, InstMap0_11, STATE_VARIABLE_InZone_0_143, STATE_VARIABLE_InZone_144, STATE_VARIABLE_SubstDb_0_145, STATE_VARIABLE_SubstDb_146, STATE_VARIABLE_ScoutInfo_0_147, STATE_VARIABLE_ScoutInfo_148);
                break;
            }
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word Disjuncts_48 = ((MR_Word) ((MR_hl_field(3, GoalExpr_16, 1))));

            if ((Disjuncts_48 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              *STATE_VARIABLE_InZone_144 = STATE_VARIABLE_InZone_0_143;
              *STATE_VARIABLE_ScoutInfo_148 = STATE_VARIABLE_ScoutInfo_0_147;
            }
            else
            {
              MR_Word HeadDisjunct_49 = ((MR_Word) ((MR_hl_field(1, Disjuncts_48, 0))));
              MR_Word TailDisjuncts_50 = ((MR_Word) ((MR_hl_field(1, Disjuncts_48, 1))));
              MR_Word HeadDisjunctIdInfo_51;
              MR_Word TailDisjunctIdInfos_52;
              MR_Word OoMDisjunctIdsInfos_53;
              MR_Word DisjunctionInfo_54;
              MR_Word DisjunctionGoalId_55;
              MR_Word DisjunctionId_56;
              MR_Word DisjunctionInfoMap0_57;
              MR_Word DisjunctionInfoMap_58;
              MR_Word STATE_VARIABLE_ScoutInfo_5_162;
              MR_Word STATE_VARIABLE_ScoutInfo_6_163;
              MR_Word Var_215;
              MR_Word Var_212;
              MR_Word Var_213;

              check_hlds__scout_disjunctions__scout_disjunctions_in_disjuncts_8_p_0(HeadDisjunct_49, TailDisjuncts_50, InstMap0_11, STATE_VARIABLE_SubstDb_0_145, &HeadDisjunctIdInfo_51, &TailDisjunctIdInfos_52, STATE_VARIABLE_ScoutInfo_0_147, &STATE_VARIABLE_ScoutInfo_5_162);
              {
                OoMDisjunctIdsInfos_53 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, OoMDisjunctIdsInfos_53, 0) = ((MR_Box) (HeadDisjunctIdInfo_51));
                MR_hl_field(0, OoMDisjunctIdsInfos_53, 1) = ((MR_Box) (TailDisjunctIdInfos_52));
              }
              check_hlds__scout_disjunctions__construct_scout_disjunction_info_3_p_0(STATE_VARIABLE_ScoutInfo_5_162, OoMDisjunctIdsInfos_53, &DisjunctionInfo_54);
              DisjunctionGoalId_55 = hlds__hlds_goal__goal_info_get_goal_id_1_f_0(GoalInfo_17);
              DisjunctionId_56 = (MR_Word) (DisjunctionGoalId_55);
              DisjunctionInfoMap0_57 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ScoutInfo_5_162, 2))));
              mercury__map__det_insert_4_p_0((MR_Word) (&check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__type_ctor_info_disjunction_id_0), (MR_Word) (&check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__type_ctor_info_disjunction_info_0), ((MR_Box) (DisjunctionId_56)), ((MR_Box) (DisjunctionInfo_54)), DisjunctionInfoMap0_57, &DisjunctionInfoMap_58);
              Var_212 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ScoutInfo_5_162, 0))));
              Var_213 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ScoutInfo_5_162, 1))));
              Var_215 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ScoutInfo_5_162, 3))));
              {
                STATE_VARIABLE_ScoutInfo_6_163 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, STATE_VARIABLE_ScoutInfo_6_163, 0) = ((MR_Box) (Var_212));
                MR_hl_field(0, STATE_VARIABLE_ScoutInfo_6_163, 1) = ((MR_Box) (Var_213));
                MR_hl_field(0, STATE_VARIABLE_ScoutInfo_6_163, 2) = ((MR_Box) (DisjunctionInfoMap_58));
                MR_hl_field(0, STATE_VARIABLE_ScoutInfo_6_163, 3) = ((MR_Box) (Var_215));
              }
              if ((STATE_VARIABLE_InZone_0_143 == (MR_Word) ((MR_Unsigned) 0U)))
                *STATE_VARIABLE_ScoutInfo_148 = STATE_VARIABLE_ScoutInfo_6_163;
              else
              {
                MR_Word DisjunctId_59 = ((MR_Word) ((MR_hl_field(1, STATE_VARIABLE_InZone_0_143, 0))));
                MR_Word DisjunctInfo0_61;
                MR_Word DeconstructMap0_62;
                MR_Word SubDisjunctions0_63;
                MR_Word SubDisjunctions_64;
                MR_Word DisjunctInfo_65;
                MR_Word DisjunctInfoMap_66;
                MR_Word Var_164;
                MR_Box conv0_DisjunctInfo0_61;
                MR_Word Var_219;
                MR_Word Var_220;
                MR_Word Var_221;

                mercury__map__lookup_3_p_0((MR_Word) (&check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__type_ctor_info_disjunct_id_0), (MR_Word) (&check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__type_ctor_info_disjunct_info_0), Var_215, ((MR_Box) (DisjunctId_59)), &conv0_DisjunctInfo0_61);
                DisjunctInfo0_61 = ((MR_Word) (conv0_DisjunctInfo0_61));
                DeconstructMap0_62 = ((MR_Word) ((MR_hl_field(0, DisjunctInfo0_61, 0))));
                SubDisjunctions0_63 = ((MR_Word) ((MR_hl_field(0, DisjunctInfo0_61, 1))));
                {
                  Var_164 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, Var_164, 0) = ((MR_Box) (&check_hlds__scout_disjunctions_scalar_common_5[1]));
                  MR_hl_field(0, Var_164, 1) = ((MR_Box) (check_hlds__scout_disjunctions__scout_disjunctions_in_goal_9_p_0_1));
                  MR_hl_field(0, Var_164, 2) = ((MR_Box) ((MR_Integer) 2));
                  MR_hl_field(0, Var_164, 3) = ((MR_Box) (SubDisjunctions0_63));
                  MR_hl_field(0, Var_164, 4) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                mercury__require__expect_3_p_0(Var_164, (MR_String) "predicate \140check_hlds.scout_disjunctions.scout_disjunctions_in_goal\'/9", (MR_String) "SubDisjunctions0 != no");
                {
                  SubDisjunctions_64 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, SubDisjunctions_64, 0) = ((MR_Box) (DisjunctionId_56));
                }
                {
                  DisjunctInfo_65 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, DisjunctInfo_65, 0) = ((MR_Box) (DeconstructMap0_62));
                  MR_hl_field(0, DisjunctInfo_65, 1) = ((MR_Box) (SubDisjunctions_64));
                }
                mercury__map__det_update_4_p_0((MR_Word) (&check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__type_ctor_info_disjunct_id_0), (MR_Word) (&check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__type_ctor_info_disjunct_info_0), ((MR_Box) (DisjunctId_59)), ((MR_Box) (DisjunctInfo_65)), Var_215, &DisjunctInfoMap_66);
                Var_219 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ScoutInfo_6_163, 0))));
                Var_220 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ScoutInfo_6_163, 1))));
                Var_221 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ScoutInfo_6_163, 2))));
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                  *STATE_VARIABLE_ScoutInfo_148 = base;
                  MR_hl_field(0, base, 0) = ((MR_Box) (Var_219));
                  MR_hl_field(0, base, 1) = ((MR_Box) (Var_220));
                  MR_hl_field(0, base, 2) = ((MR_Box) (Var_221));
                  MR_hl_field(0, base, 3) = ((MR_Box) (DisjunctInfoMap_66));
                }
              }
              *STATE_VARIABLE_InZone_144 = (MR_Word) ((MR_Unsigned) 0U);
            }
            *STATE_VARIABLE_SubstDb_146 = STATE_VARIABLE_SubstDb_0_145;
          }
          break;
        case (MR_Integer) 4:
          {
            MR_Word Var_67 = ((MR_Word) ((MR_hl_field(3, GoalExpr_16, 1))));
            MR_Word Cases_69 = ((MR_Word) ((MR_hl_field(3, GoalExpr_16, 3))));

            check_hlds__scout_disjunctions__scout_disjunctions_in_cases_6_p_0(Var_67, Cases_69, InstMap0_11, STATE_VARIABLE_SubstDb_0_145, STATE_VARIABLE_ScoutInfo_0_147, STATE_VARIABLE_ScoutInfo_148);
            *STATE_VARIABLE_InZone_144 = (MR_Word) ((MR_Unsigned) 0U);
            *STATE_VARIABLE_SubstDb_146 = STATE_VARIABLE_SubstDb_0_145;
          }
          break;
        case (MR_Integer) 5:
          {
            MR_Word Reason_86 = ((MR_Word) ((MR_hl_field(3, GoalExpr_16, 1))));
            MR_Word SubGoal_207 = ((MR_Word) ((MR_hl_field(3, GoalExpr_16, 2))));

            switch (MR_tag((MR_Word) Reason_86)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
              case (MR_Integer) 1:
              case (MR_Integer) 2:
                {
                  MR_Word Var_118;
                  MR_Word Var_119;
                  MR_Word Var_120;

                  check_hlds__scout_disjunctions__scout_disjunctions_in_goal_9_p_0(SubGoal_207, InstMap0_11, &Var_118, STATE_VARIABLE_InZone_0_143, &Var_119, STATE_VARIABLE_SubstDb_0_145, &Var_120, STATE_VARIABLE_ScoutInfo_0_147, STATE_VARIABLE_ScoutInfo_148);
                  *STATE_VARIABLE_InZone_144 = STATE_VARIABLE_InZone_0_143;
                  *STATE_VARIABLE_SubstDb_146 = STATE_VARIABLE_SubstDb_0_145;
                }
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) ((MR_hl_field(3, Reason_86, 0))))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                  case (MR_Integer) 1:
                  case (MR_Integer) 4:
                  case (MR_Integer) 5:
                  case (MR_Integer) 7:
                  case (MR_Integer) 8:
                    {
                      MR_Word Var_118;
                      MR_Word Var_119;
                      MR_Word Var_120;

                      check_hlds__scout_disjunctions__scout_disjunctions_in_goal_9_p_0(SubGoal_207, InstMap0_11, &Var_118, STATE_VARIABLE_InZone_0_143, &Var_119, STATE_VARIABLE_SubstDb_0_145, &Var_120, STATE_VARIABLE_ScoutInfo_0_147, STATE_VARIABLE_ScoutInfo_148);
                      *STATE_VARIABLE_InZone_144 = STATE_VARIABLE_InZone_0_143;
                      *STATE_VARIABLE_SubstDb_146 = STATE_VARIABLE_SubstDb_0_145;
                    }
                    break;
                  case (MR_Integer) 2:
                  case (MR_Integer) 3:
                    {
                      MR_Word Var_192;
                      MR_Word Var_123;
                      MR_Word Var_124;

                      check_hlds__scout_disjunctions__scout_disjunctions_in_goal_9_p_0(SubGoal_207, InstMap0_11, &Var_123, (MR_Word) ((MR_Unsigned) 0U), STATE_VARIABLE_InZone_144, STATE_VARIABLE_SubstDb_0_145, &Var_124, STATE_VARIABLE_ScoutInfo_0_147, STATE_VARIABLE_ScoutInfo_148);
                      {
                        Var_192 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(0, Var_192, 0) = ((MR_Box) (&check_hlds__scout_disjunctions_scalar_common_5[2]));
                        MR_hl_field(0, Var_192, 1) = ((MR_Box) (check_hlds__scout_disjunctions__scout_disjunctions_in_goal_9_p_0_2));
                        MR_hl_field(0, Var_192, 2) = ((MR_Box) ((MR_Integer) 2));
                        MR_hl_field(0, Var_192, 3) = ((MR_Box) (*STATE_VARIABLE_InZone_144));
                        MR_hl_field(0, Var_192, 4) = ((MR_Box) ((MR_Unsigned) 0U));
                      }
                      mercury__require__expect_3_p_0(Var_192, (MR_String) "predicate \140check_hlds.scout_disjunctions.scout_disjunctions_in_goal\'/9", (MR_String) "in_zone after switch-related reason");
                      *STATE_VARIABLE_SubstDb_146 = STATE_VARIABLE_SubstDb_0_145;
                    }
                    break;
                  case (MR_Integer) 6:
                    {
                      MR_Word FgtKind_88 = ((MR_Unsigned) ((MR_hl_field(3, Reason_86, 2))) & (MR_Integer) 3);

                      switch (FgtKind_88) {
                        default: /*NOTREACHED*/ MR_assert(0);
                        case (MR_Integer) 1:
                          {
                            *STATE_VARIABLE_SubstDb_146 = STATE_VARIABLE_SubstDb_0_145;
                            *STATE_VARIABLE_ScoutInfo_148 = STATE_VARIABLE_ScoutInfo_0_147;
                          }
                          break;
                        case (MR_Integer) 2:
                          {
                            MR_Word SubGoalExpr_89 = ((MR_Word) ((MR_hl_field(0, SubGoal_207, 0))));
                            MR_Word HeadSubGoalExpr_93;
                            MR_Word HeadSubGoalInfo_94;
                            MR_Word HeadSubGoal_91;
                            MR_Word Var_182;
                            MR_Word Var_183;

                            succeeded = ((((MR_tag((MR_Word) SubGoalExpr_89)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, SubGoalExpr_89, 0)))) == (MR_Integer) 2)));
                            if (succeeded)
                            {
                              Var_182 = ((MR_Unsigned) ((MR_hl_field(3, SubGoalExpr_89, 1))) & (MR_Integer) 1);
                              Var_183 = ((MR_Word) ((MR_hl_field(3, SubGoalExpr_89, 2))));
                              succeeded = (Var_182 == (MR_Integer) 0);
                              if (succeeded)
                              {
                                succeeded = (Var_183 != (MR_Word) ((MR_Unsigned) 0U));
                                if (succeeded)
                                {
                                  HeadSubGoal_91 = ((MR_Word) ((MR_hl_field(1, Var_183, 0))));
                                  HeadSubGoalExpr_93 = ((MR_Word) ((MR_hl_field(0, HeadSubGoal_91, 0))));
                                  HeadSubGoalInfo_94 = ((MR_Word) ((MR_hl_field(0, HeadSubGoal_91, 1))));
                                  succeeded = ((MR_tag((MR_Word) HeadSubGoalExpr_93)) == (MR_Integer) 1);
                                }
                              }
                            }
                            if (succeeded)
                              check_hlds__scout_disjunctions__scout_disjunctions_in_unify_expr_8_p_0(HeadSubGoalExpr_93, HeadSubGoalInfo_94, InstMap0_11, STATE_VARIABLE_InZone_0_143, STATE_VARIABLE_SubstDb_0_145, STATE_VARIABLE_SubstDb_146, STATE_VARIABLE_ScoutInfo_0_147, STATE_VARIABLE_ScoutInfo_148);
                            else
                              {
                                mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.scout_disjunctions.scout_disjunctions_in_goal\'/9", (MR_String) "unexpected goal in fgt scope");
                                return;
                              }
                          }
                          break;
                        case (MR_Integer) 0:
                          {
                            *STATE_VARIABLE_SubstDb_146 = STATE_VARIABLE_SubstDb_0_145;
                            *STATE_VARIABLE_ScoutInfo_148 = STATE_VARIABLE_ScoutInfo_0_147;
                          }
                          break;
                        case (MR_Integer) 3:
                          {
                            *STATE_VARIABLE_SubstDb_146 = STATE_VARIABLE_SubstDb_0_145;
                            *STATE_VARIABLE_ScoutInfo_148 = STATE_VARIABLE_ScoutInfo_0_147;
                          }
                          break;
                      }
                      *STATE_VARIABLE_InZone_144 = STATE_VARIABLE_InZone_0_143;
                    }
                    break;
                }
                break;
            }
          }
          break;
        case (MR_Integer) 6:
          {
            MR_Word Cond_71 = ((MR_Word) ((MR_hl_field(3, GoalExpr_16, 2))));
            MR_Word Then_72 = ((MR_Word) ((MR_hl_field(3, GoalExpr_16, 3))));
            MR_Word Else_73 = ((MR_Word) ((MR_hl_field(3, GoalExpr_16, 4))));
            MR_Word SubstDbCond_75;
            MR_Word STATE_VARIABLE_ScoutInfo_9_173;
            MR_Word STATE_VARIABLE_ScoutInfo_10_175;
            MR_Word InstMap1_205;
            MR_Word Var_74;
            MR_Word Var_76;
            MR_Word Var_77;
            MR_Word Var_78;
            MR_Word Var_79;
            MR_Word Var_80;
            MR_Word Var_81;

            check_hlds__scout_disjunctions__scout_disjunctions_in_goal_9_p_0(Cond_71, InstMap0_11, &InstMap1_205, (MR_Word) ((MR_Unsigned) 0U), &Var_74, STATE_VARIABLE_SubstDb_0_145, &SubstDbCond_75, STATE_VARIABLE_ScoutInfo_0_147, &STATE_VARIABLE_ScoutInfo_9_173);
            check_hlds__scout_disjunctions__scout_disjunctions_in_goal_9_p_0(Then_72, InstMap1_205, &Var_76, (MR_Word) ((MR_Unsigned) 0U), &Var_77, SubstDbCond_75, &Var_78, STATE_VARIABLE_ScoutInfo_9_173, &STATE_VARIABLE_ScoutInfo_10_175);
            check_hlds__scout_disjunctions__scout_disjunctions_in_goal_9_p_0(Else_73, InstMap0_11, &Var_79, (MR_Word) ((MR_Unsigned) 0U), &Var_80, STATE_VARIABLE_SubstDb_0_145, &Var_81, STATE_VARIABLE_ScoutInfo_10_175, STATE_VARIABLE_ScoutInfo_148);
            *STATE_VARIABLE_InZone_144 = (MR_Word) ((MR_Unsigned) 0U);
            *STATE_VARIABLE_SubstDb_146 = STATE_VARIABLE_SubstDb_0_145;
          }
          break;
        case (MR_Integer) 7:
          {
            MR_Word ShortHand_125 = ((MR_Word) ((MR_hl_field(3, GoalExpr_16, 1))));

            switch (MR_tag((MR_Word) ShortHand_125)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.scout_disjunctions.scout_disjunctions_in_goal\'/9", (MR_String) "bi_implication");
                  return;
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word MainGoal_130 = ((MR_Word) ((MR_hl_field(1, ShortHand_125, 4))));
                  MR_Word OrElseGoals_131 = ((MR_Word) ((MR_hl_field(1, ShortHand_125, 5))));
                  MR_Word STATE_VARIABLE_ScoutInfo_16_197;
                  MR_Word Var_133;
                  MR_Word Var_134;
                  MR_Word Var_135;

                  check_hlds__scout_disjunctions__scout_disjunctions_in_goal_9_p_0(MainGoal_130, InstMap0_11, &Var_133, (MR_Word) ((MR_Unsigned) 0U), &Var_134, STATE_VARIABLE_SubstDb_0_145, &Var_135, STATE_VARIABLE_ScoutInfo_0_147, &STATE_VARIABLE_ScoutInfo_16_197);
                  check_hlds__scout_disjunctions__scout_disjunctions_in_orelse_goals_5_p_0(OrElseGoals_131, InstMap0_11, STATE_VARIABLE_SubstDb_0_145, STATE_VARIABLE_ScoutInfo_16_197, STATE_VARIABLE_ScoutInfo_148);
                  *STATE_VARIABLE_InZone_144 = (MR_Word) ((MR_Unsigned) 0U);
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word SubGoal_208 = ((MR_Word) ((MR_hl_field(2, ShortHand_125, 2))));
                  MR_Word Var_138;
                  MR_Word Var_139;
                  MR_Word Var_140;

                  check_hlds__scout_disjunctions__scout_disjunctions_in_goal_9_p_0(SubGoal_208, InstMap0_11, &Var_138, (MR_Word) ((MR_Unsigned) 0U), &Var_139, STATE_VARIABLE_SubstDb_0_145, &Var_140, STATE_VARIABLE_ScoutInfo_0_147, STATE_VARIABLE_ScoutInfo_148);
                  *STATE_VARIABLE_InZone_144 = (MR_Word) ((MR_Unsigned) 0U);
                }
                break;
            }
            *STATE_VARIABLE_SubstDb_146 = STATE_VARIABLE_SubstDb_0_145;
          }
          break;
      }
      break;
  }
  hlds__goal_util__apply_goal_instmap_delta_3_p_0(Goal_10, InstMap0_11, InstMap_12);
}

static void MR_CALL 
check_hlds__scout_disjunctions__construct_scout_disjunction_info_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_STATE_VARIABLE_AllArmsMap_20;

  check_hlds__scout_disjunctions__maybe_acc_all_arm_for_var_5_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv1_STATE_VARIABLE_AllArmsMap_20);
  *wrapper_arg_4 = ((MR_Box) (conv1_STATE_VARIABLE_AllArmsMap_20));
}

static void MR_CALL 
check_hlds__scout_disjunctions__construct_scout_disjunction_info_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_OneArmMap_6;

  check_hlds__scout_disjunctions__disjunct_id_info_to_one_arm_summary_3_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), &conv0_OneArmMap_6);
  *wrapper_arg_2 = ((MR_Box) (conv0_OneArmMap_6));
}

static void MR_CALL 
check_hlds__scout_disjunctions__construct_scout_disjunction_info_3_p_0(
  MR_Word ScoutInfo_4,
  MR_Word OoMDisjunctIdsInfos_5,
  MR_Word * DisjunctionInfo_6)
{
  MR_Word HeadDisjunctIdInfo_7 = ((MR_Word) ((MR_hl_field(0, OoMDisjunctIdsInfos_5, 0))));
  MR_Word TailDisjunctIdInfos_8 = ((MR_Word) ((MR_hl_field(0, OoMDisjunctIdsInfos_5, 1))));
  MR_Word HeadOneArmMap_9;
  MR_Word TailOneArmMaps_10;
  MR_Word AllArmsMap_11;
  MR_Word Var_12;
  MR_Word STATE_VARIABLE_AllArmsMap_1_17;
  MR_Word Var_18;
  MR_Box conv2_AllArmsMap_11;

  check_hlds__scout_disjunctions__disjunct_id_info_to_one_arm_summary_3_p_0(ScoutInfo_4, HeadDisjunctIdInfo_7, &HeadOneArmMap_9);
  {
    Var_12 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_12, 0) = ((MR_Box) (&check_hlds__scout_disjunctions_scalar_common_6[0]));
    MR_hl_field(0, Var_12, 1) = ((MR_Box) (check_hlds__scout_disjunctions__construct_scout_disjunction_info_3_p_0_1));
    MR_hl_field(0, Var_12, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_12, 3) = ((MR_Box) (ScoutInfo_4));
  }
  mercury__list__map_3_p_0((MR_Word) (&check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__type_ctor_info_disjunct_id_info_0), (MR_Word) (&check_hlds__scout_disjunctions_scalar_common_2[1]), Var_12, TailDisjunctIdInfos_8, &TailOneArmMaps_10);
  mercury__map__init_1_p_0((MR_Word) (&check_hlds__scout_disjunctions_scalar_common_1[1]), (MR_Word) (&check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__type_ctor_info_var_all_arms_summary_0), &STATE_VARIABLE_AllArmsMap_1_17);
  {
    Var_18 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_18, 0) = ((MR_Box) (&check_hlds__scout_disjunctions_scalar_common_3[1]));
    MR_hl_field(0, Var_18, 1) = ((MR_Box) (check_hlds__scout_disjunctions__construct_scout_disjunction_info_3_p_0_2));
    MR_hl_field(0, Var_18, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_18, 3) = ((MR_Box) (TailOneArmMaps_10));
  }
  mercury__map__foldl_4_p_0((MR_Word) (&check_hlds__scout_disjunctions_scalar_common_1[1]), (MR_Word) (&check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__type_ctor_info_var_one_arm_summary_0), (MR_Word) (&check_hlds__scout_disjunctions_scalar_common_2[2]), Var_18, HeadOneArmMap_9, ((MR_Box) (STATE_VARIABLE_AllArmsMap_1_17)), &conv2_AllArmsMap_11);
  AllArmsMap_11 = ((MR_Word) (conv2_AllArmsMap_11));
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *DisjunctionInfo_6 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (OoMDisjunctIdsInfos_5));
    MR_hl_field(0, base, 1) = ((MR_Box) (AllArmsMap_11));
  }
}

static void MR_CALL 
check_hlds__scout_disjunctions__disjunct_id_info_to_one_arm_summary_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_STATE_VARIABLE_OneArmMap_10;

  check_hlds__scout_disjunctions__acc_sub_disjunction_summary_4_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv2_STATE_VARIABLE_OneArmMap_10);
  *wrapper_arg_4 = ((MR_Box) (conv2_STATE_VARIABLE_OneArmMap_10));
}

static void MR_CALL 
check_hlds__scout_disjunctions__disjunct_id_info_to_one_arm_summary_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_OneArm_4;

  check_hlds__scout_disjunctions__in_zone_deconstruct_to_one_arm_summary_2_p_0(((MR_Word) (wrapper_arg_1)), &conv0_OneArm_4);
  *wrapper_arg_2 = ((MR_Box) (conv0_OneArm_4));
}

static void MR_CALL 
check_hlds__scout_disjunctions__disjunct_id_info_to_one_arm_summary_3_p_0(
  MR_Word ScoutInfo_4,
  MR_Word DisjunctIdInfo_5,
  MR_Word * OneArmMap_6)
{
  MR_Word DisjunctInfo_8 = ((MR_Word) ((MR_hl_field(0, DisjunctIdInfo_5, 1))));
  MR_Word DeconstructMap_9 = ((MR_Word) ((MR_hl_field(0, DisjunctInfo_8, 0))));
  MR_Word MaybeSubDisjunction_10 = ((MR_Word) ((MR_hl_field(0, DisjunctInfo_8, 1))));
  MR_Word OneArmMap0_11;

  mercury__map__map_values_only_3_p_0((MR_Word) (&check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__type_ctor_info_deconstruct_info_0), (MR_Word) (&check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__type_ctor_info_var_one_arm_summary_0), (MR_Word) (&check_hlds__scout_disjunctions_scalar_common_1[1]), (MR_Word) (&check_hlds__scout_disjunctions_scalar_common_2[6]), DeconstructMap_9, &OneArmMap0_11);
  if ((MaybeSubDisjunction_10 == (MR_Word) ((MR_Unsigned) 0U)))
    *OneArmMap_6 = OneArmMap0_11;
  else
  {
    MR_Word SubDisjunctionId_12 = ((MR_Word) ((MR_hl_field(1, MaybeSubDisjunction_10, 0))));
    MR_Word DisjunctionInfoMap_13 = ((MR_Word) ((MR_hl_field(0, ScoutInfo_4, 2))));
    MR_Word SubDisjunctionInfo_14;
    MR_Word SubAllArmsMap_16;
    MR_Box conv1_SubDisjunctionInfo_14;
    MR_Box conv3_OneArmMap_6;

    mercury__map__lookup_3_p_0((MR_Word) (&check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__type_ctor_info_disjunction_id_0), (MR_Word) (&check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__type_ctor_info_disjunction_info_0), DisjunctionInfoMap_13, ((MR_Box) (SubDisjunctionId_12)), &conv1_SubDisjunctionInfo_14);
    SubDisjunctionInfo_14 = ((MR_Word) (conv1_SubDisjunctionInfo_14));
    SubAllArmsMap_16 = ((MR_Word) ((MR_hl_field(0, SubDisjunctionInfo_14, 1))));
    mercury__map__foldl_4_p_0((MR_Word) (&check_hlds__scout_disjunctions_scalar_common_1[1]), (MR_Word) (&check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__type_ctor_info_var_all_arms_summary_0), (MR_Word) (&check_hlds__scout_disjunctions_scalar_common_2[1]), (MR_Word) (&check_hlds__scout_disjunctions_scalar_common_2[7]), SubAllArmsMap_16, ((MR_Box) (OneArmMap0_11)), &conv3_OneArmMap_6);
    *OneArmMap_6 = ((MR_Word) (conv3_OneArmMap_6));
  }
}

static void MR_CALL 
check_hlds__scout_disjunctions__record_var_functor_unify_5_p_0(
  MR_Word XVar_6,
  MR_Word ConsId_7,
  MR_Word YVars_8,
  MR_Word STATE_VARIABLE_SubstDb_0_19,
  MR_Word * STATE_VARIABLE_SubstDb_20)
{
  MR_bool succeeded;
  MR_Word SeenVars0_10 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_SubstDb_0_19, 0))));
  MR_Word Subst0_11 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_SubstDb_0_19, 1))));
  MR_Word SeenVars1_12;
  MR_Word SeenVars_13;
  MR_Word XTerm_14;
  MR_Word YVarTerms_15;
  MR_Word YTerm_16;
  MR_Word Subst_18;
  MR_Word Var_21;
  MR_Word Subst1_17;

  mercury__set__insert_3_p_0((MR_Word) (&check_hlds__scout_disjunctions_scalar_common_1[1]), ((MR_Box) (XVar_6)), SeenVars0_10, &SeenVars1_12);
  mercury__set__insert_list_3_p_0((MR_Word) (&check_hlds__scout_disjunctions_scalar_common_1[1]), YVars_8, SeenVars1_12, &SeenVars_13);
  Var_21 = mercury__term_context__dummy_context_0_f_0();
  {
    XTerm_14 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, XTerm_14, 0) = ((MR_Box) (XVar_6));
    MR_hl_field(1, XTerm_14, 1) = ((MR_Box) (Var_21));
  }
  mercury__term_subst__var_list_to_term_list_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), YVars_8, &YVarTerms_15);
  parse_tree__prog_util__cons_id_and_args_to_term_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ConsId_7, YVarTerms_15, &YTerm_16);
  succeeded = mercury__term_unify__unify_terms_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), XTerm_14, YTerm_16, Subst0_11, &Subst1_17);
  if (succeeded)
    Subst_18 = Subst1_17;
  else
    Subst_18 = Subst0_11;
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_SubstDb_20 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (SeenVars_13));
    MR_hl_field(0, base, 1) = ((MR_Box) (Subst_18));
  }
}

static void MR_CALL 
check_hlds__scout_disjunctions__record_var_var_unify_4_p_0(
  MR_Word XVar_5,
  MR_Word YVar_6,
  MR_Word STATE_VARIABLE_SubstDb_0_16,
  MR_Word * STATE_VARIABLE_SubstDb_17)
{
  MR_bool succeeded;
  MR_Word SeenVars0_8 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_SubstDb_0_16, 0))));
  MR_Word Subst0_9 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_SubstDb_0_16, 1))));
  MR_Word SeenVars1_10;
  MR_Word SeenVars_11;
  MR_Word XTerm_12;
  MR_Word YTerm_13;
  MR_Word Subst_15;
  MR_Word Var_18;
  MR_Word Var_19;
  MR_Word Subst1_14;

  mercury__set__insert_3_p_0((MR_Word) (&check_hlds__scout_disjunctions_scalar_common_1[1]), ((MR_Box) (XVar_5)), SeenVars0_8, &SeenVars1_10);
  mercury__set__insert_3_p_0((MR_Word) (&check_hlds__scout_disjunctions_scalar_common_1[1]), ((MR_Box) (YVar_6)), SeenVars1_10, &SeenVars_11);
  Var_18 = mercury__term_context__dummy_context_0_f_0();
  {
    XTerm_12 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, XTerm_12, 0) = ((MR_Box) (XVar_5));
    MR_hl_field(1, XTerm_12, 1) = ((MR_Box) (Var_18));
  }
  Var_19 = mercury__term_context__dummy_context_0_f_0();
  {
    YTerm_13 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, YTerm_13, 0) = ((MR_Box) (YVar_6));
    MR_hl_field(1, YTerm_13, 1) = ((MR_Box) (Var_19));
  }
  succeeded = mercury__term_unify__unify_terms_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), XTerm_12, YTerm_13, Subst0_9, &Subst1_14);
  if (succeeded)
    Subst_15 = Subst1_14;
  else
    Subst_15 = Subst0_9;
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_SubstDb_17 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (SeenVars_11));
    MR_hl_field(0, base, 1) = ((MR_Box) (Subst_15));
  }
}

static void MR_CALL 
check_hlds__scout_disjunctions__record_deconstruct_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv3_STATE_VARIABLE_DeconstructMap_10;

  check_hlds__scout_disjunctions__maybe_add_deconstruct_4_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv3_STATE_VARIABLE_DeconstructMap_10);
  *wrapper_arg_3 = ((MR_Box) (conv3_STATE_VARIABLE_DeconstructMap_10));
}

static void MR_CALL 
check_hlds__scout_disjunctions__record_deconstruct_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_EqvVars_15;

  check_hlds__scout_disjunctions__acc_var_if_equivalent_5_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_EqvVars_15);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_EqvVars_15));
}

static void MR_CALL 
check_hlds__scout_disjunctions__record_deconstruct_7_p_0(
  MR_Word GoalId_8,
  MR_Word XVar_9,
  MR_Word ConsId_10,
  MR_Word SubstDb_11,
  MR_Word DisjunctId_12,
  MR_Word STATE_VARIABLE_ScoutInfo_0_23,
  MR_Word * STATE_VARIABLE_ScoutInfo_24)
{
  MR_Word XEqvVars_14;
  MR_Word DeconstructInfo_15;
  MR_Word DisjunctInfoMap0_16;
  MR_Word DisjunctInfo0_17;
  MR_Word DeconstructMap0_18;
  MR_Word SubDisjunctions0_19;
  MR_Word DeconstructMap_20;
  MR_Word DisjunctInfo_21;
  MR_Word DisjunctInfoMap_22;
  MR_Word Var_25;
  MR_Word SeenVars_40 = ((MR_Word) ((MR_hl_field(0, SubstDb_11, 0))));
  MR_Word Subst_41 = ((MR_Word) ((MR_hl_field(0, SubstDb_11, 1))));
  MR_Word VarSubstTerm_42;
  MR_Word EqvVars_43;
  MR_Word Var_44;
  MR_Word Var_45;
  MR_Word Var_46;
  MR_Word Var_47;
  MR_Word Var_49;
  MR_Box conv1_EqvVars_43;
  MR_Box conv2_DisjunctInfo0_17;
  MR_Box conv4_DeconstructMap_20;
  MR_Word Var_29;
  MR_Word Var_30;
  MR_Word Var_31;

  Var_45 = mercury__term_context__dummy_context_0_f_0();
  {
    Var_44 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_44, 0) = ((MR_Box) (XVar_9));
    MR_hl_field(1, Var_44, 1) = ((MR_Box) (Var_45));
  }
  mercury__term_subst__apply_rec_substitution_in_term_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Subst_41, Var_44, &VarSubstTerm_42);
  {
    Var_46 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_46, 0) = ((MR_Box) (&check_hlds__scout_disjunctions_scalar_common_3[0]));
    MR_hl_field(0, Var_46, 1) = ((MR_Box) (check_hlds__scout_disjunctions__record_deconstruct_7_p_0_1));
    MR_hl_field(0, Var_46, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_46, 3) = ((MR_Box) (Subst_41));
    MR_hl_field(0, Var_46, 4) = ((MR_Box) (VarSubstTerm_42));
  }
  Var_49 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&check_hlds__scout_disjunctions_scalar_common_1[1]), SeenVars_40);
  {
    Var_47 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_47, 0) = ((MR_Box) (XVar_9));
    MR_hl_field(1, Var_47, 1) = ((MR_Box) (Var_49));
  }
  mercury__list__foldl_4_p_0((MR_Word) (&check_hlds__scout_disjunctions_scalar_common_1[1]), (MR_Word) (&check_hlds__scout_disjunctions_scalar_common_1[3]), Var_46, Var_47, ((MR_Box) ((MR_Unsigned) 0U)), &conv1_EqvVars_43);
  EqvVars_43 = ((MR_Word) (conv1_EqvVars_43));
  mercury__set__list_to_set_2_p_0((MR_Word) (&check_hlds__scout_disjunctions_scalar_common_1[1]), EqvVars_43, &XEqvVars_14);
  {
    DeconstructInfo_15 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, DeconstructInfo_15, 0) = ((MR_Box) (GoalId_8));
    MR_hl_field(0, DeconstructInfo_15, 1) = ((MR_Box) (XVar_9));
    MR_hl_field(0, DeconstructInfo_15, 2) = ((MR_Box) (XEqvVars_14));
    MR_hl_field(0, DeconstructInfo_15, 3) = ((MR_Box) (ConsId_10));
  }
  DisjunctInfoMap0_16 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ScoutInfo_0_23, 3))));
  mercury__map__lookup_3_p_0((MR_Word) (&check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__type_ctor_info_disjunct_id_0), (MR_Word) (&check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__type_ctor_info_disjunct_info_0), DisjunctInfoMap0_16, ((MR_Box) (DisjunctId_12)), &conv2_DisjunctInfo0_17);
  DisjunctInfo0_17 = ((MR_Word) (conv2_DisjunctInfo0_17));
  DeconstructMap0_18 = ((MR_Word) ((MR_hl_field(0, DisjunctInfo0_17, 0))));
  SubDisjunctions0_19 = ((MR_Word) ((MR_hl_field(0, DisjunctInfo0_17, 1))));
  {
    Var_25 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_25, 0) = ((MR_Box) (&check_hlds__scout_disjunctions_scalar_common_4[0]));
    MR_hl_field(0, Var_25, 1) = ((MR_Box) (check_hlds__scout_disjunctions__record_deconstruct_7_p_0_2));
    MR_hl_field(0, Var_25, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_25, 3) = ((MR_Box) (DeconstructInfo_15));
  }
  mercury__set__foldl_4_p_0((MR_Word) (&check_hlds__scout_disjunctions_scalar_common_1[1]), (MR_Word) (&check_hlds__scout_disjunctions_scalar_common_2[0]), Var_25, XEqvVars_14, ((MR_Box) (DeconstructMap0_18)), &conv4_DeconstructMap_20);
  DeconstructMap_20 = ((MR_Word) (conv4_DeconstructMap_20));
  {
    DisjunctInfo_21 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, DisjunctInfo_21, 0) = ((MR_Box) (DeconstructMap_20));
    MR_hl_field(0, DisjunctInfo_21, 1) = ((MR_Box) (SubDisjunctions0_19));
  }
  mercury__map__det_update_4_p_0((MR_Word) (&check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__type_ctor_info_disjunct_id_0), (MR_Word) (&check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__type_ctor_info_disjunct_info_0), ((MR_Box) (DisjunctId_12)), ((MR_Box) (DisjunctInfo_21)), DisjunctInfoMap0_16, &DisjunctInfoMap_22);
  Var_29 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ScoutInfo_0_23, 0))));
  Var_30 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ScoutInfo_0_23, 1))));
  Var_31 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ScoutInfo_0_23, 2))));
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_ScoutInfo_24 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_29));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_30));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_31));
    MR_hl_field(0, base, 3) = ((MR_Box) (DisjunctInfoMap_22));
  }
}

MR_Word MR_CALL 
check_hlds__scout_disjunctions__switchable_cons_id_to_cons_id_1_f_0(
  MR_Word ConsId_3)
{
  MR_Word HeadVar__2_2 = (MR_Word) (ConsId_3);

  return HeadVar__2_2;
}

static MR_bool MR_CALL 
check_hlds__scout_disjunctions____Unify____all_arms_summary_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__scout_disjunctions____Unify____all_arms_summary_map_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__scout_disjunctions____Compare____all_arms_summary_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__scout_disjunctions____Compare____all_arms_summary_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
check_hlds__scout_disjunctions____Unify____deconstruct_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__scout_disjunctions____Unify____deconstruct_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__scout_disjunctions____Compare____deconstruct_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__scout_disjunctions____Compare____deconstruct_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
check_hlds__scout_disjunctions____Unify____disjunct_id_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__scout_disjunctions____Unify____disjunct_id_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__scout_disjunctions____Compare____disjunct_id_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__scout_disjunctions____Compare____disjunct_id_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
check_hlds__scout_disjunctions____Unify____disjunct_id_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__scout_disjunctions____Unify____disjunct_id_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__scout_disjunctions____Compare____disjunct_id_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__scout_disjunctions____Compare____disjunct_id_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
check_hlds__scout_disjunctions____Unify____disjunct_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__scout_disjunctions____Unify____disjunct_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__scout_disjunctions____Compare____disjunct_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__scout_disjunctions____Compare____disjunct_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
check_hlds__scout_disjunctions____Unify____disjunct_info_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__scout_disjunctions____Unify____disjunct_info_map_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__scout_disjunctions____Compare____disjunct_info_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__scout_disjunctions____Compare____disjunct_info_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
check_hlds__scout_disjunctions____Unify____disjunction_id_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__scout_disjunctions____Unify____disjunction_id_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__scout_disjunctions____Compare____disjunction_id_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__scout_disjunctions____Compare____disjunction_id_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
check_hlds__scout_disjunctions____Unify____disjunction_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__scout_disjunctions____Unify____disjunction_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__scout_disjunctions____Compare____disjunction_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__scout_disjunctions____Compare____disjunction_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
check_hlds__scout_disjunctions____Unify____disjunction_info_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__scout_disjunctions____Unify____disjunction_info_map_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__scout_disjunctions____Compare____disjunction_info_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__scout_disjunctions____Compare____disjunction_info_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
check_hlds__scout_disjunctions____Unify____in_zone_deconstruct_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__scout_disjunctions____Unify____in_zone_deconstruct_map_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__scout_disjunctions____Compare____in_zone_deconstruct_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__scout_disjunctions____Compare____in_zone_deconstruct_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
check_hlds__scout_disjunctions____Unify____is_sub_disj_needed_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__scout_disjunctions____Unify____is_sub_disj_needed_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__scout_disjunctions____Compare____is_sub_disj_needed_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__scout_disjunctions____Compare____is_sub_disj_needed_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
check_hlds__scout_disjunctions____Unify____maybe_in_zone_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__scout_disjunctions____Unify____maybe_in_zone_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__scout_disjunctions____Compare____maybe_in_zone_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__scout_disjunctions____Compare____maybe_in_zone_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
check_hlds__scout_disjunctions____Unify____one_arm_summary_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__scout_disjunctions____Unify____one_arm_summary_map_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__scout_disjunctions____Compare____one_arm_summary_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__scout_disjunctions____Compare____one_arm_summary_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
check_hlds__scout_disjunctions____Unify____scout_disj_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__scout_disjunctions____Unify____scout_disj_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__scout_disjunctions____Compare____scout_disj_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__scout_disjunctions____Compare____scout_disj_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
check_hlds__scout_disjunctions____Unify____subst_db_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__scout_disjunctions____Unify____subst_db_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__scout_disjunctions____Compare____subst_db_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__scout_disjunctions____Compare____subst_db_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
check_hlds__scout_disjunctions____Unify____switchable_cons_id_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__scout_disjunctions____Unify____switchable_cons_id_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__scout_disjunctions____Compare____switchable_cons_id_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__scout_disjunctions____Compare____switchable_cons_id_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
check_hlds__scout_disjunctions____Unify____var_all_arms_summary_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__scout_disjunctions____Unify____var_all_arms_summary_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__scout_disjunctions____Compare____var_all_arms_summary_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__scout_disjunctions____Compare____var_all_arms_summary_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
check_hlds__scout_disjunctions____Unify____var_one_arm_summary_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__scout_disjunctions____Unify____var_one_arm_summary_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__scout_disjunctions____Compare____var_one_arm_summary_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__scout_disjunctions____Compare____var_one_arm_summary_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__check_hlds__scout_disjunctions__init(void)
{
}

void mercury__check_hlds__scout_disjunctions__init_type_tables(void)
{
  static MR_bool initialised = MR_FALSE;
  if (initialised) return;
  initialised = MR_TRUE;

  MR_register_type_ctor_info(&check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__type_ctor_info_all_arms_summary_map_0);
  MR_register_type_ctor_info(&check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__type_ctor_info_deconstruct_info_0);
  MR_register_type_ctor_info(&check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__type_ctor_info_disjunct_id_0);
  MR_register_type_ctor_info(&check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__type_ctor_info_disjunct_id_info_0);
  MR_register_type_ctor_info(&check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__type_ctor_info_disjunct_info_0);
  MR_register_type_ctor_info(&check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__type_ctor_info_disjunct_info_map_0);
  MR_register_type_ctor_info(&check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__type_ctor_info_disjunction_id_0);
  MR_register_type_ctor_info(&check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__type_ctor_info_disjunction_info_0);
  MR_register_type_ctor_info(&check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__type_ctor_info_disjunction_info_map_0);
  MR_register_type_ctor_info(&check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__type_ctor_info_in_zone_deconstruct_map_0);
  MR_register_type_ctor_info(&check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__type_ctor_info_is_sub_disj_needed_0);
  MR_register_type_ctor_info(&check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__type_ctor_info_maybe_in_zone_0);
  MR_register_type_ctor_info(&check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__type_ctor_info_one_arm_summary_map_0);
  MR_register_type_ctor_info(&check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__type_ctor_info_scout_disj_info_0);
  MR_register_type_ctor_info(&check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__type_ctor_info_subst_db_0);
  MR_register_type_ctor_info(&check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__type_ctor_info_switchable_cons_id_0);
  MR_register_type_ctor_info(&check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__type_ctor_info_var_all_arms_summary_0);
  MR_register_type_ctor_info(&check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__type_ctor_info_var_one_arm_summary_0);
}

void mercury__check_hlds__scout_disjunctions__init_debugger(void)
{
  MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__check_hlds__scout_disjunctions__grade_check(void)
{
  return &MR_GRADE_VAR;
}

// :- end_module check_hlds.scout_disjunctions.
