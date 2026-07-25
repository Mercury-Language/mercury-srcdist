/*
** Automatically generated from `scout_disjunctions.m'
** by the Mercury compiler,
** version rotd-2026-07-25
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

static const MR_DuFunctorDesc check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__du_functor_desc_maybe_in_zone_0_2;

static const MR_DuFunctorDescPtr check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__du_stag_ordered_maybe_in_zone_0_0[2];

static const MR_DuFunctorDescPtr check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__du_stag_ordered_maybe_in_zone_0_1[1];

static const MR_DuPtagLayout check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__du_ptag_ordered_maybe_in_zone_0[2];

static const MR_DuFunctorDescPtr check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__du_name_ordered_maybe_in_zone_0[3];

static const MR_Integer check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__functor_number_map_maybe_in_zone_0[3];

static const MR_PseudoTypeInfo check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__field_types_scout_disj_info_0_0[5];

static const MR_ConstString check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__field_names_scout_disj_info_0_0[5];

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
check_hlds__scout_disjunctions__IntroducedFrom__pred__scout_disjunctions_in_goal__492__1_2_p_0(
  MR_Word STATE_VARIABLE_InZone_168,
  MR_Word HeadVar__2_222);

static MR_bool MR_CALL 
check_hlds__scout_disjunctions__IntroducedFrom__pred__scout_disjunctions_in_goal__407__1_2_p_0(
  MR_Word SubDisjunctions0_76,
  MR_Word HeadVar__2_194);

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
check_hlds__scout_disjunctions__scout_disjunctions_in_cases_7_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word STATE_VARIABLE_ScoutInfo_0_6,
  MR_Word * STATE_VARIABLE_ScoutInfo_7);

static void MR_CALL 
check_hlds__scout_disjunctions__scout_disjunctions_in_orelse_goals_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word STATE_VARIABLE_ScoutInfo_0_5,
  MR_Word * STATE_VARIABLE_ScoutInfo_6);

static void MR_CALL 
check_hlds__scout_disjunctions__scout_disjunctions_in_disjuncts_10_p_0(
  MR_Word HeadDisjunct0_11,
  MR_Word * HeadDisjunct_12,
  MR_Word TailDisjuncts0_13,
  MR_Word * TailDisjuncts_14,
  MR_Word InstMap0_15,
  MR_Word SubstDb0_16,
  MR_Word * HeadDisjunctIdInfo_17,
  MR_Word * TailDisjunctIdInfos_18,
  MR_Word STATE_VARIABLE_ScoutInfo_0_32,
  MR_Word * STATE_VARIABLE_ScoutInfo_33);

static void MR_CALL 
check_hlds__scout_disjunctions__scout_disjunctions_in_conjuncts_9_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_InZone_0_4,
  MR_Word * STATE_VARIABLE_InZone_5,
  MR_Word STATE_VARIABLE_SubstDb_0_6,
  MR_Word * STATE_VARIABLE_SubstDb_7,
  MR_Word STATE_VARIABLE_ScoutInfo_0_8,
  MR_Word * STATE_VARIABLE_ScoutInfo_9);

static void MR_CALL 
check_hlds__scout_disjunctions__scout_disjunctions_in_unify_expr_9_p_0(
  MR_Word GoalExpr0_10,
  MR_Word * GoalExpr_11,
  MR_Word GoalInfo_12,
  MR_Word InstMap0_13,
  MR_Word InZone0_14,
  MR_Word STATE_VARIABLE_SubstDb_0_40,
  MR_Word * STATE_VARIABLE_SubstDb_41,
  MR_Word STATE_VARIABLE_ScoutInfo_0_42,
  MR_Word * STATE_VARIABLE_ScoutInfo_43);

static MR_bool MR_CALL 
check_hlds__scout_disjunctions__scout_disjunctions_in_goal_10_p_0_2(
  MR_Box closure_arg);

static MR_bool MR_CALL 
check_hlds__scout_disjunctions__scout_disjunctions_in_goal_10_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
check_hlds__scout_disjunctions__scout_disjunctions_in_goal_10_p_0(
  MR_Word Goal0_11,
  MR_Word * Goal_12,
  MR_Word InstMap0_13,
  MR_Word * InstMap_14,
  MR_Word STATE_VARIABLE_InZone_0_167,
  MR_Word * STATE_VARIABLE_InZone_168,
  MR_Word STATE_VARIABLE_SubstDb_0_169,
  MR_Word * STATE_VARIABLE_SubstDb_170,
  MR_Word STATE_VARIABLE_ScoutInfo_0_171,
  MR_Word * STATE_VARIABLE_ScoutInfo_172);

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
check_hlds__scout_disjunctions__record_var_rhs_functor_unify_10_p_0(
  MR_Word XVar_11,
  MR_Word ConsId_12,
  MR_Word YVars_13,
  MR_Word Unification0_14,
  MR_Word GoalInfo_15,
  MR_Word InZone0_16,
  MR_Word STATE_VARIABLE_SubstDb_0_64,
  MR_Word * STATE_VARIABLE_SubstDb_65,
  MR_Word STATE_VARIABLE_ScoutInfo_0_66,
  MR_Word * STATE_VARIABLE_ScoutInfo_67);

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

static void MR_CALL 
check_hlds__scout_disjunctions__initialize_disjunct_if_needed_5_p_0(
  MR_Word GoalId_6,
  MR_Word STATE_VARIABLE_InZone_0_14,
  MR_Word * STATE_VARIABLE_InZone_15,
  MR_Word STATE_VARIABLE_ScoutInfo_0_16,
  MR_Word * STATE_VARIABLE_ScoutInfo_17);

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

static const MR_DuFunctorDesc check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__du_functor_desc_maybe_in_zone_0_2 = {
  (MR_String) "new_disjunct",
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

static const MR_DuFunctorDescPtr check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__du_stag_ordered_maybe_in_zone_0_0[2] = {
  &check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__du_functor_desc_maybe_in_zone_0_1,
  &check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__du_functor_desc_maybe_in_zone_0_2
};

static const MR_DuFunctorDescPtr check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__du_stag_ordered_maybe_in_zone_0_1[1] = { &check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__du_functor_desc_maybe_in_zone_0_0 };

static const MR_DuPtagLayout check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__du_ptag_ordered_maybe_in_zone_0[2] = {
  {
    UINT32_C(2),
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

static const MR_DuFunctorDescPtr check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__du_name_ordered_maybe_in_zone_0[3] = {
  &check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__du_functor_desc_maybe_in_zone_0_0,
  &check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__du_functor_desc_maybe_in_zone_0_2,
  &check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__du_functor_desc_maybe_in_zone_0_1
};

static const MR_Integer check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__functor_number_map_maybe_in_zone_0[3] = {
  (MR_Integer) 0,
  (MR_Integer) 2,
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
  (MR_Integer) 3,
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

static const MR_PseudoTypeInfo check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__field_types_scout_disj_info_0_0[5] = {
  (MR_PseudoTypeInfo) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0),
  (MR_PseudoTypeInfo) (&parse_tree__var_table__parse_tree__var_table__type_ctor_info_var_table_0),
  (MR_PseudoTypeInfo) (&mercury__counter__counter__type_ctor_info_ucounter_0),
  (MR_PseudoTypeInfo) (&check_hlds__scout_disjunctions__tree234__ti_tree234_2check_hlds__scout_disjunctions__type_ctor_info_disjunction_id_0check_hlds__scout_disjunctions__type_ctor_info_disjunction_info_0),
  (MR_PseudoTypeInfo) (&check_hlds__scout_disjunctions__tree234__ti_tree234_2check_hlds__scout_disjunctions__type_ctor_info_disjunct_id_0check_hlds__scout_disjunctions__type_ctor_info_disjunct_info_0)
};

static const MR_ConstString check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__field_names_scout_disj_info_0_0[5] = {
  (MR_String) "scdi_module_info",
  (MR_String) "scdi_var_table",
  (MR_String) "scdi_goal_id_counter",
  (MR_String) "scdi_disjunction_info_map",
  (MR_String) "scdi_disjunct_info_map"
};

static const MR_DuFunctorDesc check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__du_functor_desc_scout_disj_info_0_0 = {
  (MR_String) "scout_disj_info",
  INT16_C(5),
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
check_hlds__scout_disjunctions__IntroducedFrom__pred__scout_disjunctions_in_goal__492__1_2_p_0(
  MR_Word STATE_VARIABLE_InZone_168,
  MR_Word HeadVar__2_222)
{
  MR_bool succeeded;
  MR_Integer CastX_275 = (MR_Integer) (STATE_VARIABLE_InZone_168);
  MR_Integer CastY_276 = (MR_Integer) (HeadVar__2_222);

  succeeded = (CastX_275 == CastY_276);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Integer CastX_273;
    MR_Integer CastY_274;

    succeeded = (STATE_VARIABLE_InZone_168 == (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      CastX_273 = (MR_Integer) (STATE_VARIABLE_InZone_168);
      CastY_274 = (MR_Integer) (HeadVar__2_222);
      succeeded = (CastY_274 == CastX_273);
    }
  }
  return succeeded;
}

static MR_bool MR_CALL 
check_hlds__scout_disjunctions__IntroducedFrom__pred__scout_disjunctions_in_goal__407__1_2_p_0(
  MR_Word SubDisjunctions0_76,
  MR_Word HeadVar__2_194)
{
  MR_bool succeeded;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&check_hlds__scout_disjunctions_scalar_common_1[0]), ((MR_Box) (SubDisjunctions0_76)), ((MR_Box) (HeadVar__2_194)));
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
  MR_Integer CastX_18 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_19 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_18 == CastY_19);
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

        mercury__counter____Compare____ucounter_0_0(&SubResult3_12, ArgX3_10, ArgY3_11);
        succeeded = (SubResult3_12 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult3_12;
        else
        {
          MR_Word SubResult4_15;

          mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__scout_disjunctions_scalar_common_2[4]), &SubResult4_15, ((MR_Box) (ArgX4_13)), ((MR_Box) (ArgY4_14)));
          succeeded = (SubResult4_15 != (MR_Integer) 0);
          if (succeeded)
            *HeadVar__1_1 = SubResult4_15;
          else
            mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__scout_disjunctions_scalar_common_2[3]), HeadVar__1_1, ((MR_Box) (ArgX5_16)), ((MR_Box) (ArgY5_17)));
        }
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
  MR_Integer CastX_13 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_14 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_13 == CastY_14);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Word TypeInfo_18_18;
    MR_Word TypeInfo_19_19;
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

    succeeded = hlds__hlds_module____Unify____module_info_0_0(ArgX1_3, ArgY1_4);
    if (succeeded)
    {
      succeeded = parse_tree__var_table____Unify____var_table_0_0(ArgX2_5, ArgY2_6);
      if (succeeded)
      {
        succeeded = mercury__counter____Unify____ucounter_0_0(ArgX3_7, ArgY3_8);
        if (succeeded)
        {
          TypeInfo_18_18 = (MR_Word) (&check_hlds__scout_disjunctions_scalar_common_2[4]);
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_18_18, ((MR_Box) (ArgX4_9)), ((MR_Box) (ArgY4_10)));
          if (succeeded)
          {
            TypeInfo_19_19 = (MR_Word) (&check_hlds__scout_disjunctions_scalar_common_2[3]);
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_19_19, ((MR_Box) (ArgX5_11)), ((MR_Box) (ArgY5_12)));
          }
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
              MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
              MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));

              check_hlds__scout_disjunctions____Compare____disjunct_id_0_0(HeadVar__1_1, ArgX1_4, ArgY1_5);
            }
            break;
        }
        break;
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
    switch (MR_tag((MR_Word) HeadVar__1_1)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Integer CastX_5 = (MR_Integer) (HeadVar__1_1);
          MR_Integer CastY_6 = (MR_Integer) (HeadVar__2_2);

          succeeded = (CastY_6 == CastX_5);
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
            succeeded = check_hlds__scout_disjunctions____Unify____disjunct_id_0_0(ArgX1_3, ArgY1_4);
          }
        }
        break;
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
  MR_Word STATE_VARIABLE_ProcInfo_0_30,
  MR_Word * STATE_VARIABLE_ProcInfo_31,
  MR_Word * DisjunctionInfoMap_7)
{
  MR_Word SubstDb0_8;
  MR_Word VarTable_9;
  MR_Word GoalIdCounter0_10;
  MR_Word DisjunctionInfoMap0_11;
  MR_Word DisjunctInfoMap0_12;
  MR_Word ScoutInfo0_13;
  MR_Word Goal0_14;
  MR_Word InstMap0_15;
  MR_Word Goal_16;
  MR_Word ScoutInfo_20;
  MR_Word Var_47;
  MR_Word Var_48;
  MR_Word _InstMap_17;
  MR_Word _InZone_18;
  MR_Word _SubstDb_19;

  Var_47 = mercury__set__init_0_f_0((MR_Word) (&check_hlds__scout_disjunctions_scalar_common_1[1]));
  Var_48 = mercury__map__init_0_f_0((MR_Word) (&check_hlds__scout_disjunctions_scalar_common_1[1]), (MR_Word) (&check_hlds__scout_disjunctions_scalar_common_1[2]));
  {
    SubstDb0_8 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, SubstDb0_8, 0) = ((MR_Box) (Var_47));
    MR_hl_field(0, SubstDb0_8, 1) = ((MR_Box) (Var_48));
  }
  hlds__hlds_pred__proc_info_get_var_table_2_p_0(STATE_VARIABLE_ProcInfo_0_30, &VarTable_9);
  GoalIdCounter0_10 = mercury__counter__uinit_1_f_0((MR_Unsigned) 1U);
  mercury__map__init_1_p_0((MR_Word) (&check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__type_ctor_info_disjunction_id_0), (MR_Word) (&check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__type_ctor_info_disjunction_info_0), &DisjunctionInfoMap0_11);
  mercury__map__init_1_p_0((MR_Word) (&check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__type_ctor_info_disjunct_id_0), (MR_Word) (&check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__type_ctor_info_disjunct_info_0), &DisjunctInfoMap0_12);
  {
    ScoutInfo0_13 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, ScoutInfo0_13, 0) = ((MR_Box) (ModuleInfo_5));
    MR_hl_field(0, ScoutInfo0_13, 1) = ((MR_Box) (VarTable_9));
    MR_hl_field(0, ScoutInfo0_13, 2) = ((MR_Box) (GoalIdCounter0_10));
    MR_hl_field(0, ScoutInfo0_13, 3) = ((MR_Box) (DisjunctionInfoMap0_11));
    MR_hl_field(0, ScoutInfo0_13, 4) = ((MR_Box) (DisjunctInfoMap0_12));
  }
  hlds__hlds_pred__proc_info_get_goal_2_p_0(STATE_VARIABLE_ProcInfo_0_30, &Goal0_14);
  hlds__hlds_proc_util__proc_info_get_initial_instmap_3_p_0(ModuleInfo_5, STATE_VARIABLE_ProcInfo_0_30, &InstMap0_15);
  check_hlds__scout_disjunctions__scout_disjunctions_in_goal_10_p_0(Goal0_14, &Goal_16, InstMap0_15, &_InstMap_17, (MR_Word) ((MR_Unsigned) 0U), &_InZone_18, SubstDb0_8, &_SubstDb_19, ScoutInfo0_13, &ScoutInfo_20);
  hlds__hlds_pred__proc_info_set_goal_3_p_0(Goal_16, STATE_VARIABLE_ProcInfo_0_30, STATE_VARIABLE_ProcInfo_31);
  *DisjunctionInfoMap_7 = ((MR_Word) ((MR_hl_field(0, ScoutInfo_20, 3))));
}

static void MR_CALL 
check_hlds__scout_disjunctions__scout_disjunctions_in_cases_7_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word STATE_VARIABLE_ScoutInfo_0_6,
  MR_Word * STATE_VARIABLE_ScoutInfo_7)
{
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_ScoutInfo_7 = STATE_VARIABLE_ScoutInfo_0_6;
  }
  else
  {
    MR_Word Case0_15 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
    MR_Word Cases0_16 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
    MR_Word Case_17;
    MR_Word Cases_18;
    MR_Word MainConsId_22 = ((MR_Word) ((MR_hl_field(0, Case0_15, 0))));
    MR_Word OtherConsIds_23 = ((MR_Word) ((MR_hl_field(0, Case0_15, 1))));
    MR_Word Goal0_24 = ((MR_Word) ((MR_hl_field(0, Case0_15, 2))));
    MR_Word VarTable_25 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ScoutInfo_0_6, 1))));
    MR_Word VarType_26;
    MR_Word ModuleInfo0_27;
    MR_Word InstMap1_28;
    MR_Word ModuleInfo_29;
    MR_Word Goal_30;
    MR_Word STATE_VARIABLE_ScoutInfo_1_36;
    MR_Word STATE_VARIABLE_ScoutInfo_2_38;
    MR_Word Var_48;
    MR_Word Var_49;
    MR_Word Var_50;
    MR_Word Var_51;
    MR_Word Var_31;
    MR_Word Var_32;
    MR_Word Var_33;

    parse_tree__var_table__lookup_var_type_3_p_0(VarTable_25, HeadVar__1_1, &VarType_26);
    ModuleInfo0_27 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ScoutInfo_0_6, 0))));
    hlds__instmap__bind_var_to_functors_8_p_0(HeadVar__1_1, VarType_26, MainConsId_22, OtherConsIds_23, HeadVar__4_4, &InstMap1_28, ModuleInfo0_27, &ModuleInfo_29);
    Var_48 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ScoutInfo_0_6, 1))));
    Var_49 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ScoutInfo_0_6, 2))));
    Var_50 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ScoutInfo_0_6, 3))));
    Var_51 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ScoutInfo_0_6, 4))));
    {
      STATE_VARIABLE_ScoutInfo_1_36 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, STATE_VARIABLE_ScoutInfo_1_36, 0) = ((MR_Box) (ModuleInfo_29));
      MR_hl_field(0, STATE_VARIABLE_ScoutInfo_1_36, 1) = ((MR_Box) (Var_48));
      MR_hl_field(0, STATE_VARIABLE_ScoutInfo_1_36, 2) = ((MR_Box) (Var_49));
      MR_hl_field(0, STATE_VARIABLE_ScoutInfo_1_36, 3) = ((MR_Box) (Var_50));
      MR_hl_field(0, STATE_VARIABLE_ScoutInfo_1_36, 4) = ((MR_Box) (Var_51));
    }
    check_hlds__scout_disjunctions__scout_disjunctions_in_goal_10_p_0(Goal0_24, &Goal_30, InstMap1_28, &Var_31, (MR_Word) ((MR_Unsigned) 0U), &Var_32, HeadVar__5_5, &Var_33, STATE_VARIABLE_ScoutInfo_1_36, &STATE_VARIABLE_ScoutInfo_2_38);
    {
      Case_17 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Case_17, 0) = ((MR_Box) (MainConsId_22));
      MR_hl_field(0, Case_17, 1) = ((MR_Box) (OtherConsIds_23));
      MR_hl_field(0, Case_17, 2) = ((MR_Box) (Goal_30));
    }
    check_hlds__scout_disjunctions__scout_disjunctions_in_cases_7_p_0(HeadVar__1_1, Cases0_16, &Cases_18, HeadVar__4_4, HeadVar__5_5, STATE_VARIABLE_ScoutInfo_2_38, STATE_VARIABLE_ScoutInfo_7);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__3_3 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Case_17));
      MR_hl_field(1, base, 1) = ((MR_Box) (Cases_18));
    }
  }
}

static void MR_CALL 
check_hlds__scout_disjunctions__scout_disjunctions_in_orelse_goals_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word STATE_VARIABLE_ScoutInfo_0_5,
  MR_Word * STATE_VARIABLE_ScoutInfo_6)
{
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_ScoutInfo_6 = STATE_VARIABLE_ScoutInfo_0_5;
  }
  else
  {
    MR_Word OrElseGoal0_12 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
    MR_Word OrElseGoals0_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
    MR_Word OrElseGoal_14;
    MR_Word OrElseGoals_15;
    MR_Word STATE_VARIABLE_ScoutInfo_1_25;
    MR_Word Var_19;
    MR_Word Var_20;
    MR_Word Var_21;

    check_hlds__scout_disjunctions__scout_disjunctions_in_goal_10_p_0(OrElseGoal0_12, &OrElseGoal_14, HeadVar__3_3, &Var_19, (MR_Word) ((MR_Unsigned) 0U), &Var_20, HeadVar__4_4, &Var_21, STATE_VARIABLE_ScoutInfo_0_5, &STATE_VARIABLE_ScoutInfo_1_25);
    check_hlds__scout_disjunctions__scout_disjunctions_in_orelse_goals_6_p_0(OrElseGoals0_13, &OrElseGoals_15, HeadVar__3_3, HeadVar__4_4, STATE_VARIABLE_ScoutInfo_1_25, STATE_VARIABLE_ScoutInfo_6);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__2_2 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (OrElseGoal_14));
      MR_hl_field(1, base, 1) = ((MR_Box) (OrElseGoals_15));
    }
  }
}

static void MR_CALL 
check_hlds__scout_disjunctions__scout_disjunctions_in_disjuncts_10_p_0(
  MR_Word HeadDisjunct0_11,
  MR_Word * HeadDisjunct_12,
  MR_Word TailDisjuncts0_13,
  MR_Word * TailDisjuncts_14,
  MR_Word InstMap0_15,
  MR_Word SubstDb0_16,
  MR_Word * HeadDisjunctIdInfo_17,
  MR_Word * TailDisjunctIdInfos_18,
  MR_Word STATE_VARIABLE_ScoutInfo_0_32,
  MR_Word * STATE_VARIABLE_ScoutInfo_33)
{
  MR_Word DisjunctInfoMap_23;
  MR_Word HeadDisjunctId_24;
  MR_Word HeadDisjunctInfo_25;
  MR_Word STATE_VARIABLE_ScoutInfo_1_35;
  MR_Word DisjunctGoalInfo_43;
  MR_Word DisjunctGoalId_44;
  MR_Word Var_20;
  MR_Word Var_21;
  MR_Word Var_22;
  MR_Box conv0_HeadDisjunctInfo_25;

  check_hlds__scout_disjunctions__scout_disjunctions_in_goal_10_p_0(HeadDisjunct0_11, HeadDisjunct_12, InstMap0_15, &Var_20, (MR_Word) ((MR_Unsigned) 4U), &Var_21, SubstDb0_16, &Var_22, STATE_VARIABLE_ScoutInfo_0_32, &STATE_VARIABLE_ScoutInfo_1_35);
  DisjunctInfoMap_23 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ScoutInfo_1_35, 4))));
  DisjunctGoalInfo_43 = ((MR_Word) ((MR_hl_field(0, *HeadDisjunct_12, 1))));
  DisjunctGoalId_44 = hlds__hlds_goal__goal_info_get_goal_id_1_f_0(DisjunctGoalInfo_43);
  HeadDisjunctId_24 = (MR_Word) (DisjunctGoalId_44);
  mercury__map__lookup_3_p_0((MR_Word) (&check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__type_ctor_info_disjunct_id_0), (MR_Word) (&check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__type_ctor_info_disjunct_info_0), DisjunctInfoMap_23, ((MR_Box) (HeadDisjunctId_24)), &conv0_HeadDisjunctInfo_25);
  HeadDisjunctInfo_25 = ((MR_Word) (conv0_HeadDisjunctInfo_25));
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *HeadDisjunctIdInfo_17 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (HeadDisjunctId_24));
    MR_hl_field(0, base, 1) = ((MR_Box) (HeadDisjunctInfo_25));
  }
  if ((TailDisjuncts0_13 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *TailDisjuncts_14 = (MR_Word) ((MR_Unsigned) 0U);
    *TailDisjunctIdInfos_18 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_ScoutInfo_33 = STATE_VARIABLE_ScoutInfo_1_35;
  }
  else
  {
    MR_Word HeadTailDisjunct0_26 = ((MR_Word) ((MR_hl_field(1, TailDisjuncts0_13, 0))));
    MR_Word TailTailDisjuncts0_27 = ((MR_Word) ((MR_hl_field(1, TailDisjuncts0_13, 1))));
    MR_Word HeadTailDisjunct_28;
    MR_Word TailTailDisjuncts_29;
    MR_Word HeadTailDisjunctIdInfo_30;
    MR_Word TailTailDisjunctIdInfos_31;

    check_hlds__scout_disjunctions__scout_disjunctions_in_disjuncts_10_p_0(HeadTailDisjunct0_26, &HeadTailDisjunct_28, TailTailDisjuncts0_27, &TailTailDisjuncts_29, InstMap0_15, SubstDb0_16, &HeadTailDisjunctIdInfo_30, &TailTailDisjunctIdInfos_31, STATE_VARIABLE_ScoutInfo_1_35, STATE_VARIABLE_ScoutInfo_33);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *TailDisjuncts_14 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (HeadTailDisjunct_28));
      MR_hl_field(1, base, 1) = ((MR_Box) (TailTailDisjuncts_29));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *TailDisjunctIdInfos_18 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (HeadTailDisjunctIdInfo_30));
      MR_hl_field(1, base, 1) = ((MR_Box) (TailTailDisjunctIdInfos_31));
    }
  }
}

static void MR_CALL 
check_hlds__scout_disjunctions__scout_disjunctions_in_conjuncts_9_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_InZone_0_4,
  MR_Word * STATE_VARIABLE_InZone_5,
  MR_Word STATE_VARIABLE_SubstDb_0_6,
  MR_Word * STATE_VARIABLE_SubstDb_7,
  MR_Word STATE_VARIABLE_ScoutInfo_0_8,
  MR_Word * STATE_VARIABLE_ScoutInfo_9)
{
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_ScoutInfo_9 = STATE_VARIABLE_ScoutInfo_0_8;
    *STATE_VARIABLE_SubstDb_7 = STATE_VARIABLE_SubstDb_0_6;
    *STATE_VARIABLE_InZone_5 = STATE_VARIABLE_InZone_0_4;
  }
  else
  {
    MR_Word Conjunct0_20 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
    MR_Word Conjuncts0_21 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
    MR_Word Conjunct_22;
    MR_Word Conjuncts_23;
    MR_Word InstMap1_28;
    MR_Word STATE_VARIABLE_InZone_1_35;
    MR_Word STATE_VARIABLE_SubstDb_1_36;
    MR_Word STATE_VARIABLE_ScoutInfo_1_37;

    check_hlds__scout_disjunctions__scout_disjunctions_in_goal_10_p_0(Conjunct0_20, &Conjunct_22, HeadVar__3_3, &InstMap1_28, STATE_VARIABLE_InZone_0_4, &STATE_VARIABLE_InZone_1_35, STATE_VARIABLE_SubstDb_0_6, &STATE_VARIABLE_SubstDb_1_36, STATE_VARIABLE_ScoutInfo_0_8, &STATE_VARIABLE_ScoutInfo_1_37);
    check_hlds__scout_disjunctions__scout_disjunctions_in_conjuncts_9_p_0(Conjuncts0_21, &Conjuncts_23, InstMap1_28, STATE_VARIABLE_InZone_1_35, STATE_VARIABLE_InZone_5, STATE_VARIABLE_SubstDb_1_36, STATE_VARIABLE_SubstDb_7, STATE_VARIABLE_ScoutInfo_1_37, STATE_VARIABLE_ScoutInfo_9);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__2_2 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Conjunct_22));
      MR_hl_field(1, base, 1) = ((MR_Box) (Conjuncts_23));
    }
  }
}

static void MR_CALL 
check_hlds__scout_disjunctions__scout_disjunctions_in_unify_expr_9_p_0(
  MR_Word GoalExpr0_10,
  MR_Word * GoalExpr_11,
  MR_Word GoalInfo_12,
  MR_Word InstMap0_13,
  MR_Word InZone0_14,
  MR_Word STATE_VARIABLE_SubstDb_0_40,
  MR_Word * STATE_VARIABLE_SubstDb_41,
  MR_Word STATE_VARIABLE_ScoutInfo_0_42,
  MR_Word * STATE_VARIABLE_ScoutInfo_43)
{
  MR_bool succeeded;
  MR_Word XVar_17 = ((MR_Word) ((MR_hl_field(1, GoalExpr0_10, 0))));
  MR_Word RHS0_18 = ((MR_Word) ((MR_hl_field(1, GoalExpr0_10, 1))));
  MR_Word UnifyMode_19 = ((MR_Word) ((MR_hl_field(1, GoalExpr0_10, 2))));
  MR_Word Unification0_20 = ((MR_Word) ((MR_hl_field(1, GoalExpr0_10, 3))));
  MR_Word Context_21 = ((MR_Word) ((MR_hl_field(1, GoalExpr0_10, 4))));

  switch (MR_tag((MR_Word) RHS0_18)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word YVar_36 = ((MR_Word) ((MR_hl_field(0, RHS0_18, 0))));
        MR_Word SeenVars0_49 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_SubstDb_0_40, 0))));
        MR_Word Subst0_50 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_SubstDb_0_40, 1))));
        MR_Word SeenVars1_51;
        MR_Word SeenVars_52;
        MR_Word XTerm_53;
        MR_Word YTerm_54;
        MR_Word Subst_56;
        MR_Word Var_57;
        MR_Word Var_58;
        MR_Word Subst1_55;

        mercury__set__insert_3_p_0((MR_Word) (&check_hlds__scout_disjunctions_scalar_common_1[1]), ((MR_Box) (XVar_17)), SeenVars0_49, &SeenVars1_51);
        mercury__set__insert_3_p_0((MR_Word) (&check_hlds__scout_disjunctions_scalar_common_1[1]), ((MR_Box) (YVar_36)), SeenVars1_51, &SeenVars_52);
        Var_57 = mercury__term_context__dummy_context_0_f_0();
        {
          XTerm_53 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, XTerm_53, 0) = ((MR_Box) (XVar_17));
          MR_hl_field(1, XTerm_53, 1) = ((MR_Box) (Var_57));
        }
        Var_58 = mercury__term_context__dummy_context_0_f_0();
        {
          YTerm_54 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, YTerm_54, 0) = ((MR_Box) (YVar_36));
          MR_hl_field(1, YTerm_54, 1) = ((MR_Box) (Var_58));
        }
        succeeded = mercury__term_unify__unify_terms_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), XTerm_53, YTerm_54, Subst0_50, &Subst1_55);
        if (succeeded)
          Subst_56 = Subst1_55;
        else
          Subst_56 = Subst0_50;
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          *STATE_VARIABLE_SubstDb_41 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (SeenVars_52));
          MR_hl_field(0, base, 1) = ((MR_Box) (Subst_56));
        }
        *GoalExpr_11 = GoalExpr0_10;
        *STATE_VARIABLE_ScoutInfo_43 = STATE_VARIABLE_ScoutInfo_0_42;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word ConsId_37 = ((MR_Word) ((MR_hl_field(1, RHS0_18, 0))));
        MR_Word YVars_39 = ((MR_Word) ((MR_hl_field(1, RHS0_18, 2))));

        check_hlds__scout_disjunctions__record_var_rhs_functor_unify_10_p_0(XVar_17, ConsId_37, YVars_39, Unification0_20, GoalInfo_12, InZone0_14, STATE_VARIABLE_SubstDb_0_40, STATE_VARIABLE_SubstDb_41, STATE_VARIABLE_ScoutInfo_0_42, STATE_VARIABLE_ScoutInfo_43);
        *GoalExpr_11 = GoalExpr0_10;
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word ClosureVars_25 = ((MR_Word) ((MR_hl_field(2, RHS0_18, 1))));
        MR_Word VarsModes_26 = ((MR_Word) ((MR_hl_field(2, RHS0_18, 2))));
        MR_Word Detism_27 = ((MR_Unsigned) ((MR_hl_field(2, RHS0_18, 3))) & (MR_Integer) 7);
        MR_Word LambdaGoal0_28 = ((MR_Word) ((MR_hl_field(2, RHS0_18, 4))));
        MR_Word ModuleInfo_29 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ScoutInfo_0_42, 0))));
        MR_Word InstMap1_30;
        MR_Word LambdaGoal_31;
        MR_Word RHS_35;
        MR_Unsigned packed_word_0 = (MR_Unsigned) ((MR_hl_field(2, RHS0_18, 0)));
        MR_Word Var_32;
        MR_Word Var_33;
        MR_Word Var_34;

        hlds__instmap__pre_lambda_update_4_p_0(ModuleInfo_29, VarsModes_26, InstMap0_13, &InstMap1_30);
        check_hlds__scout_disjunctions__scout_disjunctions_in_goal_10_p_0(LambdaGoal0_28, &LambdaGoal_31, InstMap1_30, &Var_32, (MR_Word) ((MR_Unsigned) 0U), &Var_33, STATE_VARIABLE_SubstDb_0_40, &Var_34, STATE_VARIABLE_ScoutInfo_0_42, STATE_VARIABLE_ScoutInfo_43);
        {
          RHS_35 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(2, RHS_35, 0) = (MR_Box) (packed_word_0);
          MR_hl_field(2, RHS_35, 1) = ((MR_Box) (ClosureVars_25));
          MR_hl_field(2, RHS_35, 2) = ((MR_Box) (VarsModes_26));
          MR_hl_field(2, RHS_35, 3) = (MR_Box) ((MR_Unsigned) (Detism_27));
          MR_hl_field(2, RHS_35, 4) = ((MR_Box) (LambdaGoal_31));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
          *GoalExpr_11 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (XVar_17));
          MR_hl_field(1, base, 1) = ((MR_Box) (RHS_35));
          MR_hl_field(1, base, 2) = ((MR_Box) (UnifyMode_19));
          MR_hl_field(1, base, 3) = ((MR_Box) (Unification0_20));
          MR_hl_field(1, base, 4) = ((MR_Box) (Context_21));
        }
        *STATE_VARIABLE_SubstDb_41 = STATE_VARIABLE_SubstDb_0_40;
      }
      break;
  }
}

static MR_bool MR_CALL 
check_hlds__scout_disjunctions__scout_disjunctions_in_goal_10_p_0_2(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = check_hlds__scout_disjunctions__IntroducedFrom__pred__scout_disjunctions_in_goal__492__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))));
  return succeeded;
}

static MR_bool MR_CALL 
check_hlds__scout_disjunctions__scout_disjunctions_in_goal_10_p_0_1(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = check_hlds__scout_disjunctions__IntroducedFrom__pred__scout_disjunctions_in_goal__407__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))));
  return succeeded;
}

static void MR_CALL 
check_hlds__scout_disjunctions__scout_disjunctions_in_goal_10_p_0(
  MR_Word Goal0_11,
  MR_Word * Goal_12,
  MR_Word InstMap0_13,
  MR_Word * InstMap_14,
  MR_Word STATE_VARIABLE_InZone_0_167,
  MR_Word * STATE_VARIABLE_InZone_168,
  MR_Word STATE_VARIABLE_SubstDb_0_169,
  MR_Word * STATE_VARIABLE_SubstDb_170,
  MR_Word STATE_VARIABLE_ScoutInfo_0_171,
  MR_Word * STATE_VARIABLE_ScoutInfo_172)
{
  MR_bool succeeded;
  MR_Word GoalExpr0_18 = ((MR_Word) ((MR_hl_field(0, Goal0_11, 0))));
  MR_Word GoalInfo0_19 = ((MR_Word) ((MR_hl_field(0, Goal0_11, 1))));
  MR_Word Counter0_20 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ScoutInfo_0_171, 2))));
  MR_Unsigned GoalNum_21;
  MR_Word Counter_22;
  MR_Word GoalId_23;
  MR_Word GoalInfo_24;
  MR_Word GoalExpr_30;
  MR_Word STATE_VARIABLE_ScoutInfo_1_173;
  MR_Word STATE_VARIABLE_InZone_1_174;
  MR_Word STATE_VARIABLE_ScoutInfo_2_175;
  MR_Word Var_242;
  MR_Word Var_243;
  MR_Word Var_245;
  MR_Word Var_246;

  mercury__counter__uallocate_3_p_0(&GoalNum_21, Counter0_20, &Counter_22);
  Var_242 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ScoutInfo_0_171, 0))));
  Var_243 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ScoutInfo_0_171, 1))));
  Var_245 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ScoutInfo_0_171, 3))));
  Var_246 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ScoutInfo_0_171, 4))));
  {
    STATE_VARIABLE_ScoutInfo_1_173 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, STATE_VARIABLE_ScoutInfo_1_173, 0) = ((MR_Box) (Var_242));
    MR_hl_field(0, STATE_VARIABLE_ScoutInfo_1_173, 1) = ((MR_Box) (Var_243));
    MR_hl_field(0, STATE_VARIABLE_ScoutInfo_1_173, 2) = ((MR_Box) (Counter_22));
    MR_hl_field(0, STATE_VARIABLE_ScoutInfo_1_173, 3) = ((MR_Box) (Var_245));
    MR_hl_field(0, STATE_VARIABLE_ScoutInfo_1_173, 4) = ((MR_Box) (Var_246));
  }
  GoalId_23 = (MR_Word) (GoalNum_21);
  hlds__hlds_goal__goal_info_set_goal_id_3_p_0(GoalId_23, GoalInfo0_19, &GoalInfo_24);
  check_hlds__scout_disjunctions__initialize_disjunct_if_needed_5_p_0(GoalId_23, STATE_VARIABLE_InZone_0_167, &STATE_VARIABLE_InZone_1_174, STATE_VARIABLE_ScoutInfo_1_173, &STATE_VARIABLE_ScoutInfo_2_175);
  switch (MR_tag((MR_Word) GoalExpr0_18)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word SubGoal0_99 = (MR_Word) ((MR_Word) (GoalExpr0_18));
        MR_Word SubGoal_100;
        MR_Word Var_101;
        MR_Word Var_102;
        MR_Word Var_103;

        check_hlds__scout_disjunctions__scout_disjunctions_in_goal_10_p_0(SubGoal0_99, &SubGoal_100, InstMap0_13, &Var_101, (MR_Word) ((MR_Unsigned) 0U), &Var_102, STATE_VARIABLE_SubstDb_0_169, &Var_103, STATE_VARIABLE_ScoutInfo_2_175, STATE_VARIABLE_ScoutInfo_172);
        GoalExpr_30 = (MR_Word) ((MR_Word) (SubGoal_100));
        *STATE_VARIABLE_InZone_168 = (MR_Word) ((MR_Unsigned) 0U);
        *STATE_VARIABLE_SubstDb_170 = STATE_VARIABLE_SubstDb_0_169;
      }
      break;
    case (MR_Integer) 1:
      {
        check_hlds__scout_disjunctions__scout_disjunctions_in_unify_expr_9_p_0(GoalExpr0_18, &GoalExpr_30, GoalInfo_24, InstMap0_13, STATE_VARIABLE_InZone_1_174, STATE_VARIABLE_SubstDb_0_169, STATE_VARIABLE_SubstDb_170, STATE_VARIABLE_ScoutInfo_2_175, STATE_VARIABLE_ScoutInfo_172);
        *STATE_VARIABLE_InZone_168 = STATE_VARIABLE_InZone_1_174;
      }
      break;
    case (MR_Integer) 2:
      {
        GoalExpr_30 = GoalExpr0_18;
        succeeded = hlds__hlds_goal__goal_info_has_feature_2_p_0(GoalInfo_24, (MR_Integer) 1);
        if (succeeded)
          *STATE_VARIABLE_InZone_168 = STATE_VARIABLE_InZone_1_174;
        else
          *STATE_VARIABLE_InZone_168 = (MR_Word) ((MR_Unsigned) 0U);
        *STATE_VARIABLE_SubstDb_170 = STATE_VARIABLE_SubstDb_0_169;
        *STATE_VARIABLE_ScoutInfo_172 = STATE_VARIABLE_ScoutInfo_2_175;
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, GoalExpr0_18, 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
        case (MR_Integer) 1:
          {
            GoalExpr_30 = GoalExpr0_18;
            succeeded = hlds__hlds_goal__goal_info_has_feature_2_p_0(GoalInfo_24, (MR_Integer) 1);
            if (succeeded)
              *STATE_VARIABLE_InZone_168 = STATE_VARIABLE_InZone_1_174;
            else
              *STATE_VARIABLE_InZone_168 = (MR_Word) ((MR_Unsigned) 0U);
            *STATE_VARIABLE_SubstDb_170 = STATE_VARIABLE_SubstDb_0_169;
            *STATE_VARIABLE_ScoutInfo_172 = STATE_VARIABLE_ScoutInfo_2_175;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word ConjType_49 = ((MR_Unsigned) ((MR_hl_field(3, GoalExpr0_18, 1))) & (MR_Integer) 1);
            MR_Word Conjuncts0_50 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_18, 2))));
            MR_Word Conjuncts_51;

            switch (ConjType_49) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                if ((Conjuncts0_50 == (MR_Word) ((MR_Unsigned) 0U)))
                {
                  Conjuncts_51 = (MR_Word) ((MR_Unsigned) 0U);
                  *STATE_VARIABLE_InZone_168 = STATE_VARIABLE_InZone_1_174;
                  *STATE_VARIABLE_SubstDb_170 = STATE_VARIABLE_SubstDb_0_169;
                  *STATE_VARIABLE_ScoutInfo_172 = STATE_VARIABLE_ScoutInfo_2_175;
                }
                else
                {
                  MR_Word HeadConjunct0_52 = ((MR_Word) ((MR_hl_field(1, Conjuncts0_50, 0))));
                  MR_Word TailConjuncts0_53 = ((MR_Word) ((MR_hl_field(1, Conjuncts0_50, 1))));
                  MR_Word HeadConjunct_54;
                  MR_Word InstMap1_55;
                  MR_Word TailConjuncts_57;
                  MR_Word STATE_VARIABLE_SubstDb_3_183;
                  MR_Word STATE_VARIABLE_ScoutInfo_5_184;
                  MR_Word Var_56;
                  MR_Word Var_58;

                  check_hlds__scout_disjunctions__scout_disjunctions_in_goal_10_p_0(HeadConjunct0_52, &HeadConjunct_54, InstMap0_13, &InstMap1_55, STATE_VARIABLE_InZone_1_174, &Var_56, STATE_VARIABLE_SubstDb_0_169, &STATE_VARIABLE_SubstDb_3_183, STATE_VARIABLE_ScoutInfo_2_175, &STATE_VARIABLE_ScoutInfo_5_184);
                  check_hlds__scout_disjunctions__scout_disjunctions_in_conjuncts_9_p_0(TailConjuncts0_53, &TailConjuncts_57, InstMap1_55, (MR_Word) ((MR_Unsigned) 0U), &Var_58, STATE_VARIABLE_SubstDb_3_183, STATE_VARIABLE_SubstDb_170, STATE_VARIABLE_ScoutInfo_5_184, STATE_VARIABLE_ScoutInfo_172);
                  {
                    Conjuncts_51 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Conjuncts_51, 0) = ((MR_Box) (HeadConjunct_54));
                    MR_hl_field(1, Conjuncts_51, 1) = ((MR_Box) (TailConjuncts_57));
                  }
                  *STATE_VARIABLE_InZone_168 = (MR_Word) ((MR_Unsigned) 0U);
                }
                break;
              case (MR_Integer) 0:
                check_hlds__scout_disjunctions__scout_disjunctions_in_conjuncts_9_p_0(Conjuncts0_50, &Conjuncts_51, InstMap0_13, STATE_VARIABLE_InZone_1_174, STATE_VARIABLE_InZone_168, STATE_VARIABLE_SubstDb_0_169, STATE_VARIABLE_SubstDb_170, STATE_VARIABLE_ScoutInfo_2_175, STATE_VARIABLE_ScoutInfo_172);
                break;
            }
            {
              GoalExpr_30 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, GoalExpr_30, 0) = ((MR_Box) ((MR_Unsigned) 2U));
              MR_hl_field(3, GoalExpr_30, 1) = (MR_Box) ((MR_Unsigned) (ConjType_49));
              MR_hl_field(3, GoalExpr_30, 2) = ((MR_Box) (Conjuncts_51));
            }
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word Disjuncts0_59 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_18, 1))));
            MR_Word Disjuncts_60;

            if ((Disjuncts0_59 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              Disjuncts_60 = (MR_Word) ((MR_Unsigned) 0U);
              *STATE_VARIABLE_InZone_168 = STATE_VARIABLE_InZone_1_174;
              *STATE_VARIABLE_ScoutInfo_172 = STATE_VARIABLE_ScoutInfo_2_175;
            }
            else
            {
              MR_Word HeadDisjunct0_61 = ((MR_Word) ((MR_hl_field(1, Disjuncts0_59, 0))));
              MR_Word TailDisjuncts0_62 = ((MR_Word) ((MR_hl_field(1, Disjuncts0_59, 1))));
              MR_Word HeadDisjunct_63;
              MR_Word TailDisjuncts_64;
              MR_Word HeadDisjunctIdInfo_65;
              MR_Word TailDisjunctIdInfos_66;
              MR_Word OoMDisjunctIdsInfos_67;
              MR_Word DisjunctionInfo_68;
              MR_Word DisjunctionId_69;
              MR_Word DisjunctionInfoMap0_70;
              MR_Word DisjunctionInfoMap_71;
              MR_Word STATE_VARIABLE_ScoutInfo_7_189;
              MR_Word STATE_VARIABLE_ScoutInfo_8_190;
              MR_Word Var_255;
              MR_Word Var_251;
              MR_Word Var_252;
              MR_Word Var_253;

              check_hlds__scout_disjunctions__scout_disjunctions_in_disjuncts_10_p_0(HeadDisjunct0_61, &HeadDisjunct_63, TailDisjuncts0_62, &TailDisjuncts_64, InstMap0_13, STATE_VARIABLE_SubstDb_0_169, &HeadDisjunctIdInfo_65, &TailDisjunctIdInfos_66, STATE_VARIABLE_ScoutInfo_2_175, &STATE_VARIABLE_ScoutInfo_7_189);
              {
                Disjuncts_60 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Disjuncts_60, 0) = ((MR_Box) (HeadDisjunct_63));
                MR_hl_field(1, Disjuncts_60, 1) = ((MR_Box) (TailDisjuncts_64));
              }
              {
                OoMDisjunctIdsInfos_67 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, OoMDisjunctIdsInfos_67, 0) = ((MR_Box) (HeadDisjunctIdInfo_65));
                MR_hl_field(0, OoMDisjunctIdsInfos_67, 1) = ((MR_Box) (TailDisjunctIdInfos_66));
              }
              check_hlds__scout_disjunctions__construct_scout_disjunction_info_3_p_0(STATE_VARIABLE_ScoutInfo_7_189, OoMDisjunctIdsInfos_67, &DisjunctionInfo_68);
              DisjunctionId_69 = (MR_Word) (GoalId_23);
              DisjunctionInfoMap0_70 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ScoutInfo_7_189, 3))));
              mercury__map__det_insert_4_p_0((MR_Word) (&check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__type_ctor_info_disjunction_id_0), (MR_Word) (&check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__type_ctor_info_disjunction_info_0), ((MR_Box) (DisjunctionId_69)), ((MR_Box) (DisjunctionInfo_68)), DisjunctionInfoMap0_70, &DisjunctionInfoMap_71);
              Var_251 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ScoutInfo_7_189, 0))));
              Var_252 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ScoutInfo_7_189, 1))));
              Var_253 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ScoutInfo_7_189, 2))));
              Var_255 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ScoutInfo_7_189, 4))));
              {
                STATE_VARIABLE_ScoutInfo_8_190 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, STATE_VARIABLE_ScoutInfo_8_190, 0) = ((MR_Box) (Var_251));
                MR_hl_field(0, STATE_VARIABLE_ScoutInfo_8_190, 1) = ((MR_Box) (Var_252));
                MR_hl_field(0, STATE_VARIABLE_ScoutInfo_8_190, 2) = ((MR_Box) (Var_253));
                MR_hl_field(0, STATE_VARIABLE_ScoutInfo_8_190, 3) = ((MR_Box) (DisjunctionInfoMap_71));
                MR_hl_field(0, STATE_VARIABLE_ScoutInfo_8_190, 4) = ((MR_Box) (Var_255));
              }
              if ((STATE_VARIABLE_InZone_1_174 == (MR_Word) ((MR_Unsigned) 0U)))
                *STATE_VARIABLE_ScoutInfo_172 = STATE_VARIABLE_ScoutInfo_8_190;
              else
              {
                MR_Word DisjunctId_72 = ((MR_Word) ((MR_hl_field(1, STATE_VARIABLE_InZone_1_174, 0))));
                MR_Word DisjunctInfo0_74;
                MR_Word DeconstructMap0_75;
                MR_Word SubDisjunctions0_76;
                MR_Word SubDisjunctions_77;
                MR_Word DisjunctInfo_78;
                MR_Word DisjunctInfoMap_79;
                MR_Word Var_191;
                MR_Box conv0_DisjunctInfo0_74;
                MR_Word Var_260;
                MR_Word Var_261;
                MR_Word Var_262;
                MR_Word Var_263;

                mercury__map__lookup_3_p_0((MR_Word) (&check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__type_ctor_info_disjunct_id_0), (MR_Word) (&check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__type_ctor_info_disjunct_info_0), Var_255, ((MR_Box) (DisjunctId_72)), &conv0_DisjunctInfo0_74);
                DisjunctInfo0_74 = ((MR_Word) (conv0_DisjunctInfo0_74));
                DeconstructMap0_75 = ((MR_Word) ((MR_hl_field(0, DisjunctInfo0_74, 0))));
                SubDisjunctions0_76 = ((MR_Word) ((MR_hl_field(0, DisjunctInfo0_74, 1))));
                {
                  Var_191 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, Var_191, 0) = ((MR_Box) (&check_hlds__scout_disjunctions_scalar_common_5[1]));
                  MR_hl_field(0, Var_191, 1) = ((MR_Box) (check_hlds__scout_disjunctions__scout_disjunctions_in_goal_10_p_0_1));
                  MR_hl_field(0, Var_191, 2) = ((MR_Box) ((MR_Integer) 2));
                  MR_hl_field(0, Var_191, 3) = ((MR_Box) (SubDisjunctions0_76));
                  MR_hl_field(0, Var_191, 4) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                mercury__require__expect_3_p_0(Var_191, (MR_String) "predicate \140check_hlds.scout_disjunctions.scout_disjunctions_in_goal\'/10", (MR_String) "SubDisjunctions0 != no");
                {
                  SubDisjunctions_77 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, SubDisjunctions_77, 0) = ((MR_Box) (DisjunctionId_69));
                }
                {
                  DisjunctInfo_78 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, DisjunctInfo_78, 0) = ((MR_Box) (DeconstructMap0_75));
                  MR_hl_field(0, DisjunctInfo_78, 1) = ((MR_Box) (SubDisjunctions_77));
                }
                mercury__map__det_update_4_p_0((MR_Word) (&check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__type_ctor_info_disjunct_id_0), (MR_Word) (&check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__type_ctor_info_disjunct_info_0), ((MR_Box) (DisjunctId_72)), ((MR_Box) (DisjunctInfo_78)), Var_255, &DisjunctInfoMap_79);
                Var_260 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ScoutInfo_8_190, 0))));
                Var_261 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ScoutInfo_8_190, 1))));
                Var_262 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ScoutInfo_8_190, 2))));
                Var_263 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ScoutInfo_8_190, 3))));
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                  *STATE_VARIABLE_ScoutInfo_172 = base;
                  MR_hl_field(0, base, 0) = ((MR_Box) (Var_260));
                  MR_hl_field(0, base, 1) = ((MR_Box) (Var_261));
                  MR_hl_field(0, base, 2) = ((MR_Box) (Var_262));
                  MR_hl_field(0, base, 3) = ((MR_Box) (Var_263));
                  MR_hl_field(0, base, 4) = ((MR_Box) (DisjunctInfoMap_79));
                }
              }
              *STATE_VARIABLE_InZone_168 = (MR_Word) ((MR_Unsigned) 0U);
            }
            {
              GoalExpr_30 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, GoalExpr_30, 0) = ((MR_Box) ((MR_Unsigned) 3U));
              MR_hl_field(3, GoalExpr_30, 1) = ((MR_Box) (Disjuncts_60));
            }
            *STATE_VARIABLE_SubstDb_170 = STATE_VARIABLE_SubstDb_0_169;
          }
          break;
        case (MR_Integer) 4:
          {
            MR_Word Var_80 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_18, 1))));
            MR_Word CanFail_81 = ((MR_Unsigned) ((MR_hl_field(3, GoalExpr0_18, 2))) & (MR_Integer) 1);
            MR_Word Cases0_82 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_18, 3))));
            MR_Word Cases_83;

            check_hlds__scout_disjunctions__scout_disjunctions_in_cases_7_p_0(Var_80, Cases0_82, &Cases_83, InstMap0_13, STATE_VARIABLE_SubstDb_0_169, STATE_VARIABLE_ScoutInfo_2_175, STATE_VARIABLE_ScoutInfo_172);
            {
              GoalExpr_30 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, GoalExpr_30, 0) = ((MR_Box) ((MR_Unsigned) 4U));
              MR_hl_field(3, GoalExpr_30, 1) = ((MR_Box) (Var_80));
              MR_hl_field(3, GoalExpr_30, 2) = (MR_Box) ((MR_Unsigned) (CanFail_81));
              MR_hl_field(3, GoalExpr_30, 3) = ((MR_Box) (Cases_83));
            }
            *STATE_VARIABLE_InZone_168 = (MR_Word) ((MR_Unsigned) 0U);
            *STATE_VARIABLE_SubstDb_170 = STATE_VARIABLE_SubstDb_0_169;
          }
          break;
        case (MR_Integer) 5:
          {
            MR_Word Reason_104 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_18, 1))));
            MR_Word SubGoal0_234 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_18, 2))));
            MR_Word SubGoal_235;

            switch (MR_tag((MR_Word) Reason_104)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
              case (MR_Integer) 1:
              case (MR_Integer) 2:
                {
                  MR_Word Var_139;
                  MR_Word Var_140;
                  MR_Word Var_141;

                  check_hlds__scout_disjunctions__scout_disjunctions_in_goal_10_p_0(SubGoal0_234, &SubGoal_235, InstMap0_13, &Var_139, STATE_VARIABLE_InZone_1_174, &Var_140, STATE_VARIABLE_SubstDb_0_169, &Var_141, STATE_VARIABLE_ScoutInfo_2_175, STATE_VARIABLE_ScoutInfo_172);
                  *STATE_VARIABLE_InZone_168 = STATE_VARIABLE_InZone_1_174;
                  *STATE_VARIABLE_SubstDb_170 = STATE_VARIABLE_SubstDb_0_169;
                }
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) ((MR_hl_field(3, Reason_104, 0))))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                  case (MR_Integer) 1:
                  case (MR_Integer) 4:
                  case (MR_Integer) 5:
                  case (MR_Integer) 7:
                  case (MR_Integer) 8:
                    {
                      MR_Word Var_139;
                      MR_Word Var_140;
                      MR_Word Var_141;

                      check_hlds__scout_disjunctions__scout_disjunctions_in_goal_10_p_0(SubGoal0_234, &SubGoal_235, InstMap0_13, &Var_139, STATE_VARIABLE_InZone_1_174, &Var_140, STATE_VARIABLE_SubstDb_0_169, &Var_141, STATE_VARIABLE_ScoutInfo_2_175, STATE_VARIABLE_ScoutInfo_172);
                      *STATE_VARIABLE_InZone_168 = STATE_VARIABLE_InZone_1_174;
                      *STATE_VARIABLE_SubstDb_170 = STATE_VARIABLE_SubstDb_0_169;
                    }
                    break;
                  case (MR_Integer) 2:
                  case (MR_Integer) 3:
                    {
                      MR_Word Var_219;
                      MR_Word Var_144;
                      MR_Word Var_145;

                      check_hlds__scout_disjunctions__scout_disjunctions_in_goal_10_p_0(SubGoal0_234, &SubGoal_235, InstMap0_13, &Var_144, (MR_Word) ((MR_Unsigned) 0U), STATE_VARIABLE_InZone_168, STATE_VARIABLE_SubstDb_0_169, &Var_145, STATE_VARIABLE_ScoutInfo_2_175, STATE_VARIABLE_ScoutInfo_172);
                      {
                        Var_219 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(0, Var_219, 0) = ((MR_Box) (&check_hlds__scout_disjunctions_scalar_common_5[2]));
                        MR_hl_field(0, Var_219, 1) = ((MR_Box) (check_hlds__scout_disjunctions__scout_disjunctions_in_goal_10_p_0_2));
                        MR_hl_field(0, Var_219, 2) = ((MR_Box) ((MR_Integer) 2));
                        MR_hl_field(0, Var_219, 3) = ((MR_Box) (*STATE_VARIABLE_InZone_168));
                        MR_hl_field(0, Var_219, 4) = ((MR_Box) ((MR_Unsigned) 0U));
                      }
                      mercury__require__expect_3_p_0(Var_219, (MR_String) "predicate \140check_hlds.scout_disjunctions.scout_disjunctions_in_goal\'/10", (MR_String) "in_zone after switch-related reason");
                      *STATE_VARIABLE_SubstDb_170 = STATE_VARIABLE_SubstDb_0_169;
                    }
                    break;
                  case (MR_Integer) 6:
                    {
                      MR_Word FgtKind_106 = ((MR_Unsigned) ((MR_hl_field(3, Reason_104, 2))) & (MR_Integer) 3);

                      SubGoal_235 = SubGoal0_234;
                      switch (FgtKind_106) {
                        default: /*NOTREACHED*/ MR_assert(0);
                        case (MR_Integer) 1:
                          {
                            *STATE_VARIABLE_SubstDb_170 = STATE_VARIABLE_SubstDb_0_169;
                            *STATE_VARIABLE_ScoutInfo_172 = STATE_VARIABLE_ScoutInfo_2_175;
                          }
                          break;
                        case (MR_Integer) 2:
                          {
                            MR_Word SubGoalExpr0_107 = ((MR_Word) ((MR_hl_field(0, SubGoal0_234, 0))));
                            MR_Word HeadSubGoalInfo0_112;
                            MR_Word XVar_113;
                            MR_Word Unification0_116;
                            MR_Word ConsId_118;
                            MR_Word YVars_120;
                            MR_Word HeadSubGoal0_109;
                            MR_Word HeadSubGoalExpr0_111;
                            MR_Word RHS0_114;
                            MR_Word Var_209;
                            MR_Word Var_210;

                            succeeded = ((((MR_tag((MR_Word) SubGoalExpr0_107)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, SubGoalExpr0_107, 0)))) == (MR_Integer) 2)));
                            if (succeeded)
                            {
                              Var_209 = ((MR_Unsigned) ((MR_hl_field(3, SubGoalExpr0_107, 1))) & (MR_Integer) 1);
                              Var_210 = ((MR_Word) ((MR_hl_field(3, SubGoalExpr0_107, 2))));
                              succeeded = (Var_209 == (MR_Integer) 0);
                              if (succeeded)
                              {
                                succeeded = (Var_210 != (MR_Word) ((MR_Unsigned) 0U));
                                if (succeeded)
                                {
                                  HeadSubGoal0_109 = ((MR_Word) ((MR_hl_field(1, Var_210, 0))));
                                  HeadSubGoalExpr0_111 = ((MR_Word) ((MR_hl_field(0, HeadSubGoal0_109, 0))));
                                  HeadSubGoalInfo0_112 = ((MR_Word) ((MR_hl_field(0, HeadSubGoal0_109, 1))));
                                  succeeded = ((MR_tag((MR_Word) HeadSubGoalExpr0_111)) == (MR_Integer) 1);
                                  if (succeeded)
                                  {
                                    XVar_113 = ((MR_Word) ((MR_hl_field(1, HeadSubGoalExpr0_111, 0))));
                                    RHS0_114 = ((MR_Word) ((MR_hl_field(1, HeadSubGoalExpr0_111, 1))));
                                    Unification0_116 = ((MR_Word) ((MR_hl_field(1, HeadSubGoalExpr0_111, 3))));
                                    succeeded = ((MR_tag((MR_Word) RHS0_114)) == (MR_Integer) 1);
                                    if (succeeded)
                                    {
                                      ConsId_118 = ((MR_Word) ((MR_hl_field(1, RHS0_114, 0))));
                                      YVars_120 = ((MR_Word) ((MR_hl_field(1, RHS0_114, 2))));
                                    }
                                  }
                                }
                              }
                            }
                            if (succeeded)
                              check_hlds__scout_disjunctions__record_var_rhs_functor_unify_10_p_0(XVar_113, ConsId_118, YVars_120, Unification0_116, HeadSubGoalInfo0_112, STATE_VARIABLE_InZone_1_174, STATE_VARIABLE_SubstDb_0_169, STATE_VARIABLE_SubstDb_170, STATE_VARIABLE_ScoutInfo_2_175, STATE_VARIABLE_ScoutInfo_172);
                            else
                              {
                                mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.scout_disjunctions.scout_disjunctions_in_goal\'/10", (MR_String) "unexpected goal in fgt scope");
                                return;
                              }
                          }
                          break;
                        case (MR_Integer) 0:
                          {
                            *STATE_VARIABLE_SubstDb_170 = STATE_VARIABLE_SubstDb_0_169;
                            *STATE_VARIABLE_ScoutInfo_172 = STATE_VARIABLE_ScoutInfo_2_175;
                          }
                          break;
                        case (MR_Integer) 3:
                          {
                            *STATE_VARIABLE_SubstDb_170 = STATE_VARIABLE_SubstDb_0_169;
                            *STATE_VARIABLE_ScoutInfo_172 = STATE_VARIABLE_ScoutInfo_2_175;
                          }
                          break;
                      }
                      *STATE_VARIABLE_InZone_168 = STATE_VARIABLE_InZone_1_174;
                    }
                    break;
                }
                break;
            }
            {
              GoalExpr_30 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, GoalExpr_30, 0) = ((MR_Box) ((MR_Unsigned) 5U));
              MR_hl_field(3, GoalExpr_30, 1) = ((MR_Box) (Reason_104));
              MR_hl_field(3, GoalExpr_30, 2) = ((MR_Box) (SubGoal_235));
            }
          }
          break;
        case (MR_Integer) 6:
          {
            MR_Word Vars_84 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_18, 1))));
            MR_Word Cond0_85 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_18, 2))));
            MR_Word Then0_86 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_18, 3))));
            MR_Word Else0_87 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_18, 4))));
            MR_Word Cond_88;
            MR_Word SubstDbCond_90;
            MR_Word Then_91;
            MR_Word Else_95;
            MR_Word STATE_VARIABLE_ScoutInfo_11_200;
            MR_Word STATE_VARIABLE_ScoutInfo_12_202;
            MR_Word InstMap1_232;
            MR_Word Var_89;
            MR_Word Var_92;
            MR_Word Var_93;
            MR_Word Var_94;
            MR_Word Var_96;
            MR_Word Var_97;
            MR_Word Var_98;

            check_hlds__scout_disjunctions__scout_disjunctions_in_goal_10_p_0(Cond0_85, &Cond_88, InstMap0_13, &InstMap1_232, (MR_Word) ((MR_Unsigned) 0U), &Var_89, STATE_VARIABLE_SubstDb_0_169, &SubstDbCond_90, STATE_VARIABLE_ScoutInfo_2_175, &STATE_VARIABLE_ScoutInfo_11_200);
            check_hlds__scout_disjunctions__scout_disjunctions_in_goal_10_p_0(Then0_86, &Then_91, InstMap1_232, &Var_92, (MR_Word) ((MR_Unsigned) 0U), &Var_93, SubstDbCond_90, &Var_94, STATE_VARIABLE_ScoutInfo_11_200, &STATE_VARIABLE_ScoutInfo_12_202);
            check_hlds__scout_disjunctions__scout_disjunctions_in_goal_10_p_0(Else0_87, &Else_95, InstMap0_13, &Var_96, (MR_Word) ((MR_Unsigned) 0U), &Var_97, STATE_VARIABLE_SubstDb_0_169, &Var_98, STATE_VARIABLE_ScoutInfo_12_202, STATE_VARIABLE_ScoutInfo_172);
            {
              GoalExpr_30 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, GoalExpr_30, 0) = ((MR_Box) ((MR_Unsigned) 6U));
              MR_hl_field(3, GoalExpr_30, 1) = ((MR_Box) (Vars_84));
              MR_hl_field(3, GoalExpr_30, 2) = ((MR_Box) (Cond_88));
              MR_hl_field(3, GoalExpr_30, 3) = ((MR_Box) (Then_91));
              MR_hl_field(3, GoalExpr_30, 4) = ((MR_Box) (Else_95));
            }
            *STATE_VARIABLE_InZone_168 = (MR_Word) ((MR_Unsigned) 0U);
            *STATE_VARIABLE_SubstDb_170 = STATE_VARIABLE_SubstDb_0_169;
          }
          break;
        case (MR_Integer) 7:
          {
            MR_Word ShortHand0_146 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_18, 1))));
            MR_Word ShortHand_159;

            switch (MR_tag((MR_Word) ShortHand0_146)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.scout_disjunctions.scout_disjunctions_in_goal\'/10", (MR_String) "bi_implication");
                  return;
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word GoalType_147 = ((MR_Unsigned) ((MR_hl_field(1, ShortHand0_146, 0))) & (MR_Integer) 3);
                  MR_Word Outer_148 = ((MR_Word) ((MR_hl_field(1, ShortHand0_146, 1))));
                  MR_Word Inner_149 = ((MR_Word) ((MR_hl_field(1, ShortHand0_146, 2))));
                  MR_Word MaybeOutputVars_150 = ((MR_Word) ((MR_hl_field(1, ShortHand0_146, 3))));
                  MR_Word MainGoal0_151 = ((MR_Word) ((MR_hl_field(1, ShortHand0_146, 4))));
                  MR_Word OrElseGoals0_152 = ((MR_Word) ((MR_hl_field(1, ShortHand0_146, 5))));
                  MR_Word OrElseInners_153 = ((MR_Word) ((MR_hl_field(1, ShortHand0_146, 6))));
                  MR_Word MainGoal_154;
                  MR_Word OrElseGoals_158;
                  MR_Word STATE_VARIABLE_ScoutInfo_18_224;
                  MR_Word Var_155;
                  MR_Word Var_156;
                  MR_Word Var_157;

                  check_hlds__scout_disjunctions__scout_disjunctions_in_goal_10_p_0(MainGoal0_151, &MainGoal_154, InstMap0_13, &Var_155, (MR_Word) ((MR_Unsigned) 0U), &Var_156, STATE_VARIABLE_SubstDb_0_169, &Var_157, STATE_VARIABLE_ScoutInfo_2_175, &STATE_VARIABLE_ScoutInfo_18_224);
                  check_hlds__scout_disjunctions__scout_disjunctions_in_orelse_goals_6_p_0(OrElseGoals0_152, &OrElseGoals_158, InstMap0_13, STATE_VARIABLE_SubstDb_0_169, STATE_VARIABLE_ScoutInfo_18_224, STATE_VARIABLE_ScoutInfo_172);
                  {
                    ShortHand_159 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, ShortHand_159, 0) = (MR_Box) ((MR_Unsigned) (GoalType_147));
                    MR_hl_field(1, ShortHand_159, 1) = ((MR_Box) (Outer_148));
                    MR_hl_field(1, ShortHand_159, 2) = ((MR_Box) (Inner_149));
                    MR_hl_field(1, ShortHand_159, 3) = ((MR_Box) (MaybeOutputVars_150));
                    MR_hl_field(1, ShortHand_159, 4) = ((MR_Box) (MainGoal_154));
                    MR_hl_field(1, ShortHand_159, 5) = ((MR_Box) (OrElseGoals_158));
                    MR_hl_field(1, ShortHand_159, 6) = ((MR_Box) (OrElseInners_153));
                  }
                  *STATE_VARIABLE_InZone_168 = (MR_Word) ((MR_Unsigned) 0U);
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word MaybeIO_160 = ((MR_Word) ((MR_hl_field(2, ShortHand0_146, 0))));
                  MR_Word ResultVar_161 = ((MR_Word) ((MR_hl_field(2, ShortHand0_146, 1))));
                  MR_Word SubGoal0_236 = ((MR_Word) ((MR_hl_field(2, ShortHand0_146, 2))));
                  MR_Word SubGoal_237;
                  MR_Word Var_162;
                  MR_Word Var_163;
                  MR_Word Var_164;

                  check_hlds__scout_disjunctions__scout_disjunctions_in_goal_10_p_0(SubGoal0_236, &SubGoal_237, InstMap0_13, &Var_162, (MR_Word) ((MR_Unsigned) 0U), &Var_163, STATE_VARIABLE_SubstDb_0_169, &Var_164, STATE_VARIABLE_ScoutInfo_2_175, STATE_VARIABLE_ScoutInfo_172);
                  {
                    ShortHand_159 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(2, ShortHand_159, 0) = ((MR_Box) (MaybeIO_160));
                    MR_hl_field(2, ShortHand_159, 1) = ((MR_Box) (ResultVar_161));
                    MR_hl_field(2, ShortHand_159, 2) = ((MR_Box) (SubGoal_237));
                  }
                  *STATE_VARIABLE_InZone_168 = (MR_Word) ((MR_Unsigned) 0U);
                }
                break;
            }
            {
              GoalExpr_30 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, GoalExpr_30, 0) = ((MR_Box) ((MR_Unsigned) 7U));
              MR_hl_field(3, GoalExpr_30, 1) = ((MR_Box) (ShortHand_159));
            }
            *STATE_VARIABLE_SubstDb_170 = STATE_VARIABLE_SubstDb_0_169;
          }
          break;
      }
      break;
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *Goal_12 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_30));
    MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo_24));
  }
  hlds__goal_util__apply_goal_instmap_delta_3_p_0(*Goal_12, InstMap0_13, InstMap_14);
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
    MR_Word DisjunctionInfoMap_13 = ((MR_Word) ((MR_hl_field(0, ScoutInfo_4, 3))));
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
check_hlds__scout_disjunctions__record_var_rhs_functor_unify_10_p_0(
  MR_Word XVar_11,
  MR_Word ConsId_12,
  MR_Word YVars_13,
  MR_Word Unification0_14,
  MR_Word GoalInfo_15,
  MR_Word InZone0_16,
  MR_Word STATE_VARIABLE_SubstDb_0_64,
  MR_Word * STATE_VARIABLE_SubstDb_65,
  MR_Word STATE_VARIABLE_ScoutInfo_0_66,
  MR_Word * STATE_VARIABLE_ScoutInfo_67)
{
  MR_bool succeeded;

  switch (MR_tag((MR_Word) ConsId_12)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        *STATE_VARIABLE_SubstDb_65 = STATE_VARIABLE_SubstDb_0_64;
        *STATE_VARIABLE_ScoutInfo_67 = STATE_VARIABLE_ScoutInfo_0_66;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word SeenVars0_76;
        MR_Word Subst0_77;
        MR_Word SeenVars1_78;
        MR_Word SeenVars_79;
        MR_Word XTerm_80;
        MR_Word YVarTerms_81;
        MR_Word YTerm_82;
        MR_Word Subst_84;
        MR_Word Var_85;
        MR_Word Subst1_83;

        switch (MR_tag((MR_Word) Unification0_14)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *STATE_VARIABLE_ScoutInfo_67 = STATE_VARIABLE_ScoutInfo_0_66;
            break;
          case (MR_Integer) 1:
            if ((InZone0_16 == (MR_Word) ((MR_Unsigned) 0U)))
              *STATE_VARIABLE_ScoutInfo_67 = STATE_VARIABLE_ScoutInfo_0_66;
            else
            {
              MR_Word DisjunctId_41 = ((MR_Word) ((MR_hl_field(1, InZone0_16, 0))));
              MR_Word GoalId_42;
              MR_Word Var_72;

              GoalId_42 = hlds__hlds_goal__goal_info_get_goal_id_1_f_0(GoalInfo_15);
              Var_72 = (MR_Word) (ConsId_12);
              check_hlds__scout_disjunctions__record_deconstruct_7_p_0(GoalId_42, XVar_11, Var_72, STATE_VARIABLE_SubstDb_0_64, DisjunctId_41, STATE_VARIABLE_ScoutInfo_0_66, STATE_VARIABLE_ScoutInfo_67);
            }
            break;
          case (MR_Integer) 2:
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.scout_disjunctions.record_var_rhs_functor_unify\'/10", (MR_String) "assign");
              return;
            }
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) ((MR_hl_field(3, Unification0_14, 0))))) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.scout_disjunctions.record_var_rhs_functor_unify\'/10", (MR_String) "simple_test");
                  return;
                }
                break;
              case (MR_Integer) 1:
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.scout_disjunctions.record_var_rhs_functor_unify\'/10", (MR_String) "complicated_unify");
                  return;
                }
                break;
            }
            break;
        }
        SeenVars0_76 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_SubstDb_0_64, 0))));
        Subst0_77 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_SubstDb_0_64, 1))));
        mercury__set__insert_3_p_0((MR_Word) (&check_hlds__scout_disjunctions_scalar_common_1[1]), ((MR_Box) (XVar_11)), SeenVars0_76, &SeenVars1_78);
        mercury__set__insert_list_3_p_0((MR_Word) (&check_hlds__scout_disjunctions_scalar_common_1[1]), YVars_13, SeenVars1_78, &SeenVars_79);
        Var_85 = mercury__term_context__dummy_context_0_f_0();
        {
          XTerm_80 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, XTerm_80, 0) = ((MR_Box) (XVar_11));
          MR_hl_field(1, XTerm_80, 1) = ((MR_Box) (Var_85));
        }
        mercury__term_subst__var_list_to_term_list_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), YVars_13, &YVarTerms_81);
        parse_tree__prog_util__cons_id_and_args_to_term_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ConsId_12, YVarTerms_81, &YTerm_82);
        succeeded = mercury__term_unify__unify_terms_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), XTerm_80, YTerm_82, Subst0_77, &Subst1_83);
        if (succeeded)
          Subst_84 = Subst1_83;
        else
          Subst_84 = Subst0_77;
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          *STATE_VARIABLE_SubstDb_65 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (SeenVars_79));
          MR_hl_field(0, base, 1) = ((MR_Box) (Subst_84));
        }
      }
      break;
    case (MR_Integer) 2:
      {
        *STATE_VARIABLE_SubstDb_65 = STATE_VARIABLE_SubstDb_0_64;
        *STATE_VARIABLE_ScoutInfo_67 = STATE_VARIABLE_ScoutInfo_0_66;
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, ConsId_12, 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            *STATE_VARIABLE_SubstDb_65 = STATE_VARIABLE_SubstDb_0_64;
            *STATE_VARIABLE_ScoutInfo_67 = STATE_VARIABLE_ScoutInfo_0_66;
          }
          break;
        case (MR_Integer) 1:
          {
            *STATE_VARIABLE_SubstDb_65 = STATE_VARIABLE_SubstDb_0_64;
            *STATE_VARIABLE_ScoutInfo_67 = STATE_VARIABLE_ScoutInfo_0_66;
          }
          break;
        case (MR_Integer) 2:
          {
            *STATE_VARIABLE_SubstDb_65 = STATE_VARIABLE_SubstDb_0_64;
            *STATE_VARIABLE_ScoutInfo_67 = STATE_VARIABLE_ScoutInfo_0_66;
          }
          break;
        case (MR_Integer) 3:
          {
            *STATE_VARIABLE_SubstDb_65 = STATE_VARIABLE_SubstDb_0_64;
            *STATE_VARIABLE_ScoutInfo_67 = STATE_VARIABLE_ScoutInfo_0_66;
          }
          break;
        case (MR_Integer) 4:
          {
            *STATE_VARIABLE_SubstDb_65 = STATE_VARIABLE_SubstDb_0_64;
            *STATE_VARIABLE_ScoutInfo_67 = STATE_VARIABLE_ScoutInfo_0_66;
          }
          break;
        case (MR_Integer) 5:
        case (MR_Integer) 6:
        case (MR_Integer) 7:
        case (MR_Integer) 8:
          {
            MR_Word SeenVars0_76;
            MR_Word Subst0_77;
            MR_Word SeenVars1_78;
            MR_Word SeenVars_79;
            MR_Word XTerm_80;
            MR_Word YVarTerms_81;
            MR_Word YTerm_82;
            MR_Word Subst_84;
            MR_Word Var_85;
            MR_Word Subst1_83;

            switch (MR_tag((MR_Word) Unification0_14)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *STATE_VARIABLE_ScoutInfo_67 = STATE_VARIABLE_ScoutInfo_0_66;
                break;
              case (MR_Integer) 1:
                if ((InZone0_16 == (MR_Word) ((MR_Unsigned) 0U)))
                  *STATE_VARIABLE_ScoutInfo_67 = STATE_VARIABLE_ScoutInfo_0_66;
                else
                {
                  MR_Word DisjunctId_41 = ((MR_Word) ((MR_hl_field(1, InZone0_16, 0))));
                  MR_Word GoalId_42;
                  MR_Word Var_72;

                  GoalId_42 = hlds__hlds_goal__goal_info_get_goal_id_1_f_0(GoalInfo_15);
                  Var_72 = (MR_Word) (ConsId_12);
                  check_hlds__scout_disjunctions__record_deconstruct_7_p_0(GoalId_42, XVar_11, Var_72, STATE_VARIABLE_SubstDb_0_64, DisjunctId_41, STATE_VARIABLE_ScoutInfo_0_66, STATE_VARIABLE_ScoutInfo_67);
                }
                break;
              case (MR_Integer) 2:
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.scout_disjunctions.record_var_rhs_functor_unify\'/10", (MR_String) "assign");
                  return;
                }
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) ((MR_hl_field(3, Unification0_14, 0))))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.scout_disjunctions.record_var_rhs_functor_unify\'/10", (MR_String) "simple_test");
                      return;
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.scout_disjunctions.record_var_rhs_functor_unify\'/10", (MR_String) "complicated_unify");
                      return;
                    }
                    break;
                }
                break;
            }
            SeenVars0_76 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_SubstDb_0_64, 0))));
            Subst0_77 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_SubstDb_0_64, 1))));
            mercury__set__insert_3_p_0((MR_Word) (&check_hlds__scout_disjunctions_scalar_common_1[1]), ((MR_Box) (XVar_11)), SeenVars0_76, &SeenVars1_78);
            mercury__set__insert_list_3_p_0((MR_Word) (&check_hlds__scout_disjunctions_scalar_common_1[1]), YVars_13, SeenVars1_78, &SeenVars_79);
            Var_85 = mercury__term_context__dummy_context_0_f_0();
            {
              XTerm_80 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, XTerm_80, 0) = ((MR_Box) (XVar_11));
              MR_hl_field(1, XTerm_80, 1) = ((MR_Box) (Var_85));
            }
            mercury__term_subst__var_list_to_term_list_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), YVars_13, &YVarTerms_81);
            parse_tree__prog_util__cons_id_and_args_to_term_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ConsId_12, YVarTerms_81, &YTerm_82);
            succeeded = mercury__term_unify__unify_terms_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), XTerm_80, YTerm_82, Subst0_77, &Subst1_83);
            if (succeeded)
              Subst_84 = Subst1_83;
            else
              Subst_84 = Subst0_77;
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              *STATE_VARIABLE_SubstDb_65 = base;
              MR_hl_field(0, base, 0) = ((MR_Box) (SeenVars_79));
              MR_hl_field(0, base, 1) = ((MR_Box) (Subst_84));
            }
          }
          break;
        case (MR_Integer) 9:
          {
            *STATE_VARIABLE_SubstDb_65 = STATE_VARIABLE_SubstDb_0_64;
            *STATE_VARIABLE_ScoutInfo_67 = STATE_VARIABLE_ScoutInfo_0_66;
          }
          break;
        case (MR_Integer) 10:
          {
            *STATE_VARIABLE_SubstDb_65 = STATE_VARIABLE_SubstDb_0_64;
            *STATE_VARIABLE_ScoutInfo_67 = STATE_VARIABLE_ScoutInfo_0_66;
          }
          break;
        case (MR_Integer) 11:
          {
            *STATE_VARIABLE_SubstDb_65 = STATE_VARIABLE_SubstDb_0_64;
            *STATE_VARIABLE_ScoutInfo_67 = STATE_VARIABLE_ScoutInfo_0_66;
          }
          break;
        case (MR_Integer) 12:
          {
            *STATE_VARIABLE_SubstDb_65 = STATE_VARIABLE_SubstDb_0_64;
            *STATE_VARIABLE_ScoutInfo_67 = STATE_VARIABLE_ScoutInfo_0_66;
          }
          break;
        case (MR_Integer) 13:
          {
            *STATE_VARIABLE_SubstDb_65 = STATE_VARIABLE_SubstDb_0_64;
            *STATE_VARIABLE_ScoutInfo_67 = STATE_VARIABLE_ScoutInfo_0_66;
          }
          break;
        case (MR_Integer) 14:
          {
            *STATE_VARIABLE_SubstDb_65 = STATE_VARIABLE_SubstDb_0_64;
            *STATE_VARIABLE_ScoutInfo_67 = STATE_VARIABLE_ScoutInfo_0_66;
          }
          break;
      }
      break;
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
  MR_Word SeenVars_42 = ((MR_Word) ((MR_hl_field(0, SubstDb_11, 0))));
  MR_Word Subst_43 = ((MR_Word) ((MR_hl_field(0, SubstDb_11, 1))));
  MR_Word VarSubstTerm_44;
  MR_Word EqvVars_45;
  MR_Word Var_46;
  MR_Word Var_47;
  MR_Word Var_48;
  MR_Word Var_49;
  MR_Word Var_51;
  MR_Box conv1_EqvVars_45;
  MR_Box conv2_DisjunctInfo0_17;
  MR_Box conv4_DeconstructMap_20;
  MR_Word Var_30;
  MR_Word Var_31;
  MR_Word Var_32;
  MR_Word Var_33;

  Var_47 = mercury__term_context__dummy_context_0_f_0();
  {
    Var_46 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_46, 0) = ((MR_Box) (XVar_9));
    MR_hl_field(1, Var_46, 1) = ((MR_Box) (Var_47));
  }
  mercury__term_subst__apply_rec_substitution_in_term_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Subst_43, Var_46, &VarSubstTerm_44);
  {
    Var_48 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_48, 0) = ((MR_Box) (&check_hlds__scout_disjunctions_scalar_common_3[0]));
    MR_hl_field(0, Var_48, 1) = ((MR_Box) (check_hlds__scout_disjunctions__record_deconstruct_7_p_0_1));
    MR_hl_field(0, Var_48, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_48, 3) = ((MR_Box) (Subst_43));
    MR_hl_field(0, Var_48, 4) = ((MR_Box) (VarSubstTerm_44));
  }
  Var_51 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&check_hlds__scout_disjunctions_scalar_common_1[1]), SeenVars_42);
  {
    Var_49 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_49, 0) = ((MR_Box) (XVar_9));
    MR_hl_field(1, Var_49, 1) = ((MR_Box) (Var_51));
  }
  mercury__list__foldl_4_p_0((MR_Word) (&check_hlds__scout_disjunctions_scalar_common_1[1]), (MR_Word) (&check_hlds__scout_disjunctions_scalar_common_1[3]), Var_48, Var_49, ((MR_Box) ((MR_Unsigned) 0U)), &conv1_EqvVars_45);
  EqvVars_45 = ((MR_Word) (conv1_EqvVars_45));
  mercury__set__list_to_set_2_p_0((MR_Word) (&check_hlds__scout_disjunctions_scalar_common_1[1]), EqvVars_45, &XEqvVars_14);
  {
    DeconstructInfo_15 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, DeconstructInfo_15, 0) = ((MR_Box) (GoalId_8));
    MR_hl_field(0, DeconstructInfo_15, 1) = ((MR_Box) (XVar_9));
    MR_hl_field(0, DeconstructInfo_15, 2) = ((MR_Box) (XEqvVars_14));
    MR_hl_field(0, DeconstructInfo_15, 3) = ((MR_Box) (ConsId_10));
  }
  DisjunctInfoMap0_16 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ScoutInfo_0_23, 4))));
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
  Var_30 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ScoutInfo_0_23, 0))));
  Var_31 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ScoutInfo_0_23, 1))));
  Var_32 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ScoutInfo_0_23, 2))));
  Var_33 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ScoutInfo_0_23, 3))));
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_ScoutInfo_24 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_30));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_31));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_32));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_33));
    MR_hl_field(0, base, 4) = ((MR_Box) (DisjunctInfoMap_22));
  }
}

static void MR_CALL 
check_hlds__scout_disjunctions__initialize_disjunct_if_needed_5_p_0(
  MR_Word GoalId_6,
  MR_Word STATE_VARIABLE_InZone_0_14,
  MR_Word * STATE_VARIABLE_InZone_15,
  MR_Word STATE_VARIABLE_ScoutInfo_0_16,
  MR_Word * STATE_VARIABLE_ScoutInfo_17)
{
  switch (MR_tag((MR_Word) STATE_VARIABLE_InZone_0_14)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (MR_unmkbody(STATE_VARIABLE_InZone_0_14)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            *STATE_VARIABLE_InZone_15 = STATE_VARIABLE_InZone_0_14;
            *STATE_VARIABLE_ScoutInfo_17 = STATE_VARIABLE_ScoutInfo_0_16;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word DisjunctInfoMap0_10 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ScoutInfo_0_16, 4))));
            MR_Word DisjunctId_11 = (MR_Word) (GoalId_6);
            MR_Word DisjunctInfo0_12;
            MR_Word DisjunctInfoMap1_13;
            MR_Word Var_18;
            MR_Word Var_24;
            MR_Word Var_25;
            MR_Word Var_26;
            MR_Word Var_27;

            Var_18 = mercury__map__init_0_f_0((MR_Word) (&check_hlds__scout_disjunctions_scalar_common_1[1]), (MR_Word) (&check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__type_ctor_info_deconstruct_info_0));
            {
              DisjunctInfo0_12 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, DisjunctInfo0_12, 0) = ((MR_Box) (Var_18));
              MR_hl_field(0, DisjunctInfo0_12, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            mercury__map__det_insert_4_p_0((MR_Word) (&check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__type_ctor_info_disjunct_id_0), (MR_Word) (&check_hlds__scout_disjunctions__check_hlds__scout_disjunctions__type_ctor_info_disjunct_info_0), ((MR_Box) (DisjunctId_11)), ((MR_Box) (DisjunctInfo0_12)), DisjunctInfoMap0_10, &DisjunctInfoMap1_13);
            Var_24 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ScoutInfo_0_16, 0))));
            Var_25 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ScoutInfo_0_16, 1))));
            Var_26 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ScoutInfo_0_16, 2))));
            Var_27 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ScoutInfo_0_16, 3))));
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
              *STATE_VARIABLE_ScoutInfo_17 = base;
              MR_hl_field(0, base, 0) = ((MR_Box) (Var_24));
              MR_hl_field(0, base, 1) = ((MR_Box) (Var_25));
              MR_hl_field(0, base, 2) = ((MR_Box) (Var_26));
              MR_hl_field(0, base, 3) = ((MR_Box) (Var_27));
              MR_hl_field(0, base, 4) = ((MR_Box) (DisjunctInfoMap1_13));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              *STATE_VARIABLE_InZone_15 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (DisjunctId_11));
            }
          }
          break;
      }
      break;
    case (MR_Integer) 1:
      {
        *STATE_VARIABLE_InZone_15 = STATE_VARIABLE_InZone_0_14;
        *STATE_VARIABLE_ScoutInfo_17 = STATE_VARIABLE_ScoutInfo_0_16;
      }
      break;
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
