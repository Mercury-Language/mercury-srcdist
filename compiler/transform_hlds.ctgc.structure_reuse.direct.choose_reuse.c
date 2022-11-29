/*
** Automatically generated from `structure_reuse.direct.choose_reuse.m'
** by the Mercury compiler,
** version rotd-2022-11-29
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


// :- module transform_hlds.ctgc.structure_reuse.direct.choose_reuse.
// :- implementation.

/*
INIT mercury__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__init
ENDINIT
*/

#include "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.mih"


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
#include "float.mih"
#include "getopt.mih"
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
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
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
#include "hlds.passes_aux.mih"
#include "hlds.pred_name.mih"
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "libs.compiler_util.mih"
#include "libs.dependency_graph.mih"
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.maybe_succeeded.mih"
#include "libs.op_mode.mih"
#include "libs.optimization_options.mih"
#include "libs.options.mih"
#include "libs.polyhedron.mih"
#include "libs.rat.mih"
#include "libs.timestamp.mih"
#include "libs.trace_params.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.sym_name.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_spec.mih"
#include "parse_tree.file_names.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_event.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_data_used_modules.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_table.mih"
#include "parse_tree.vartypes.mih"
#include "string.format.mih"
#include "string.parse_util.mih"
#include "transform_hlds.ctgc.mih"
#include "transform_hlds.smm_common.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"
#include "transform_hlds.ctgc.livedata.mih"
#include "transform_hlds.ctgc.structure_reuse.mih"
#include "transform_hlds.ctgc.structure_sharing.mih"
#include "transform_hlds.ctgc.util.mih"
#include "transform_hlds.ctgc.structure_reuse.direct.mih"
#include "transform_hlds.ctgc.structure_reuse.domain.mih"
#include "transform_hlds.ctgc.structure_sharing.domain.mih"
#include "transform_hlds.ctgc.structure_reuse.direct.detect_garbage.mih"



struct transform_hlds__ctgc__structure_reuse__direct__choose_reuse__cons_has_normal_fields_2_p_0_env_0_s {
  MR_bool transform_hlds__ctgc__structure_reuse__direct__choose_reuse__cons_has_normal_fields_2_p_0_env_0__succeeded;
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__cons_has_normal_fields_2_p_0_env_0__ConsArgRepns_9;
  jmp_buf transform_hlds__ctgc__structure_reuse__direct__choose_reuse__cons_has_normal_fields_2_p_0_env_0__commit_0;
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__cons_has_normal_fields_2_p_0_env_0__ArgRepn_10;
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__cons_has_normal_fields_2_p_0_env_0__conv0_ArgRepn_10;
};


static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__ctgc__structure_reuse__direct__choose_reuse__tree234__pti_tree234_2__plain_transform_hlds__smm_common__type_ctor_info_program_point_0__plain_transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_condition_0;

static const MR_FA_TypeInfo_Struct1 transform_hlds__ctgc__structure_reuse__direct__choose_reuse__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct1 transform_hlds__ctgc__structure_reuse__direct__choose_reuse__list__ti_list_1transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_match_0;

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__ctgc__structure_reuse__direct__choose_reuse__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_list__ti_list_1transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_match_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__ctgc__structure_reuse__direct__choose_reuse__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__ctgc__structure_reuse__direct__choose_reuse__list__pti_list_1__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0;

static const MR_FA_TypeInfo_Struct2 transform_hlds__ctgc__structure_reuse__direct__choose_reuse__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0list__ti_list_1transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_match_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__ctgc__structure_reuse__direct__choose_reuse__list__pti_list_1__plain_tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0list__ti_list_1transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_match_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__ctgc__structure_reuse__direct__choose_reuse__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__ctgc__structure_reuse__direct__choose_reuse__list__pti_list_1__plain_transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_deconstruction_spec_0;

static const MR_PseudoTypeInfo transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__field_types_background_info_0_0[4];

static const MR_ConstString transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__field_names_background_info_0_0[4];

static const MR_DuFunctorDesc transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__du_functor_desc_background_info_0_0;

static const MR_DuFunctorDescPtr transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__du_stag_ordered_background_info_0_0[1];

static const MR_DuPtagLayout transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__du_ptag_ordered_background_info_0[1];

static const MR_DuFunctorDescPtr transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__du_name_ordered_background_info_0[1];

static const MR_Integer transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__functor_number_map_background_info_0[1];

static const MR_PseudoTypeInfo transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__field_types_construction_spec_0_0[2];

static const MR_ConstString transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__field_names_construction_spec_0_0[2];

static const MR_DuFunctorDesc transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__du_functor_desc_construction_spec_0_0;

static const MR_DuFunctorDescPtr transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__du_stag_ordered_construction_spec_0_0[1];

static const MR_DuPtagLayout transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__du_ptag_ordered_construction_spec_0[1];

static const MR_DuFunctorDescPtr transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__du_name_ordered_construction_spec_0[1];

static const MR_Integer transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__functor_number_map_construction_spec_0[1];

static const MR_FA_TypeInfo_Struct1 transform_hlds__ctgc__structure_reuse__direct__choose_reuse__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_PseudoTypeInfo transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__field_types_deconstruction_spec_0_0[5];

static const MR_ConstString transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__field_names_deconstruction_spec_0_0[5];

static const MR_DuFunctorDesc transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__du_functor_desc_deconstruction_spec_0_0;

static const MR_DuFunctorDescPtr transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__du_stag_ordered_deconstruction_spec_0_0[1];

static const MR_DuPtagLayout transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__du_ptag_ordered_deconstruction_spec_0[1];

static const MR_DuFunctorDescPtr transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__du_name_ordered_deconstruction_spec_0[1];

static const MR_Integer transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__functor_number_map_deconstruction_spec_0[1];

static const MR_FA_TypeInfo_Struct1 transform_hlds__ctgc__structure_reuse__direct__choose_reuse__list__ti_list_1transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_deconstruction_spec_0;

static const MR_FA_TypeInfo_Struct1 transform_hlds__ctgc__structure_reuse__direct__choose_reuse__list__ti_list_1transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_construction_spec_0;

static const MR_PseudoTypeInfo transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__field_types_match_0_0[4];

static const MR_ConstString transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__field_names_match_0_0[4];

static const MR_DuFunctorDesc transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__du_functor_desc_match_0_0;

static const MR_DuFunctorDescPtr transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__du_stag_ordered_match_0_0[1];

static const MR_DuPtagLayout transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__du_ptag_ordered_match_0[1];

static const MR_DuFunctorDescPtr transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__du_name_ordered_match_0[1];

static const MR_Integer transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__functor_number_map_match_0[1];

static const MR_FA_TypeInfo_Struct1 transform_hlds__ctgc__structure_reuse__direct__choose_reuse__list__ti_list_1hlds__hlds_goal__type_ctor_info_needs_update_0;

static const MR_PseudoTypeInfo transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__field_types_reuse_type_0_0[3];

static const MR_ConstString transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__field_names_reuse_type_0_0[3];

static const MR_DuArgLocn transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__field_locns_reuse_type_0_0[3];

static const MR_DuFunctorDesc transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__du_functor_desc_reuse_type_0_0;

static const MR_DuFunctorDescPtr transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__du_stag_ordered_reuse_type_0_0[1];

static const MR_DuPtagLayout transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__du_ptag_ordered_reuse_type_0[1];

static const MR_DuFunctorDescPtr transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__du_name_ordered_reuse_type_0[1];

static const MR_Integer transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__functor_number_map_reuse_type_0[1];

static MR_Word MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__IntroducedFrom__func__dump_match_details__1385__1_1_f_0(
  MR_Word LambdaHeadVar__1_16);

static MR_Word MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__IntroducedFrom__func__find_match_in_goal_2__868__1_1_f_0(
  MR_Word LambdaHeadVar__1_83);

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__IntroducedFrom__pred__compute_match_table_in_disjunction__699__1_3_p_0(
  MR_Word HeadVar__1_25,
  MR_Word HeadVar__2_26,
  MR_Word * HeadVar__3_27);

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__IntroducedFrom__pred__compute_match_table_in_disjunction__691__1_3_p_0(
  MR_Word HeadVar__1_19,
  MR_Word HeadVar__2_20,
  MR_Word * HeadVar__3_21);

static MR_Word MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__IntroducedFrom__func__compute_match_table_with_continuation__633__1_1_f_0(
  MR_Word LambdaHeadVar__1_80);

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__IntroducedFrom__pred__compute_match_table_with_continuation__663__1_3_p_0(
  MR_Word HeadVar__1_114,
  MR_Word HeadVar__2_115,
  MR_Word * HeadVar__3_116);

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__IntroducedFrom__pred__average_match__439__1_3_p_0(
  MR_Word LambdaHeadVar__1_16,
  MR_Word LambdaHeadVar__2_17,
  MR_Word * LambdaHeadVar__3_18);

static MR_Word MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__IntroducedFrom__func__match_get_condition__325__1_1_f_0(
  MR_Word LambdaHeadVar__1_12);

static MR_Word MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__IntroducedFrom__func__match_get_dead_cons_ids__317__1_1_f_0(
  MR_Word LambdaHeadVar__1_7);

static MR_Word MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__IntroducedFrom__func__match_get_dead_var__295__1_1_f_0(
  MR_Word LambdaHeadVar__1_12);

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse____Compare____match_table_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse____Unify____match_table_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse____Compare____match_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse____Unify____match_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse____Compare____deconstruction_spec_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse____Unify____deconstruction_spec_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse____Compare____construction_spec_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse____Compare____reuse_type_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse____Unify____construction_spec_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse____Unify____reuse_type_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse____Compare____background_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse____Unify____background_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__check_for_cell_caching_in_case_3_p_0(
  MR_Word DeadCellTable_4,
  MR_Word STATE_VARIABLE_Case_0_10,
  MR_Word * STATE_VARIABLE_Case_11);

static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__construction_spec_with_program_point_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word ConstructionSpec_3);

static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__deconstruction_spec_with_program_point_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word DeconstructionSpec_3);

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__annotate_reuses_in_case_4_p_0(
  MR_Word Background_5,
  MR_Word Match_6,
  MR_Word STATE_VARIABLE_Case_0_12,
  MR_Word * STATE_VARIABLE_Case_13);

static MR_Word MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__needs_update_and_2_f_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static MR_Box MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__glb_reuse_types_2_2_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static MR_Word MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__glb_reuse_types_2_2_f_0(
  MR_Word R1_4,
  MR_Word R2_5);

static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__compute_reuse_type_6_p_0(
  MR_Word Background_7,
  MR_Word _NewVar_8,
  MR_Word NewCons_9,
  MR_Word NewCellArgs_10,
  MR_Word DeconSpec_11,
  MR_Word * ReuseType_12);

static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_109_112_117_116_101_95_114_101_117_115_101_95_116_121_112_101_95_95_91_50_93_95_48_6_p_0(
  MR_Word Background_7,
  MR_Word NewCons_9,
  MR_Word NewCellArgs_10,
  MR_Word DeconSpec_11,
  MR_Word * ReuseType_12);

static MR_Word MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__already_correct_fields_4_f_0(
  MR_Word ExplicitSecTagC_6,
  MR_Word CurrentCellVars_7,
  MR_Word ExplicitSecTagR_8,
  MR_Word ReuseCellVars_9);

static MR_Word MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__equals_2_f_0(
  MR_Word TypeInfo_for_T_14,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__cons_has_normal_fields_2_p_0_1(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__cons_has_normal_fields_2_p_0_3(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__cons_has_normal_fields_2_p_0_2(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__cons_has_normal_fields_2_p_0_4(
  void * env_ptr_arg);

static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__cons_has_normal_fields_2_p_0(
  MR_Word ModuleInfo_3,
  MR_Word ConsId_4);

static MR_Integer MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__add_degree_2_f_0(
  MR_Word Match_4,
  MR_Integer Degree0_5);

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__find_match_in_goal_4_p_0(
  MR_Word Background_5,
  MR_Word Match0_6,
  MR_Word Goal_7,
  MR_Word * Match_8);

static MR_Box MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__find_match_in_goal_2_4_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__find_match_in_goal_2_4_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__find_match_in_goal_2_4_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_Box MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__find_match_in_goal_2_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__find_match_in_goal_2_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__find_match_in_goal_2_4_p_0(
  MR_Word Background_5,
  MR_Word Goal_6,
  MR_Word STATE_VARIABLE_Match_0_71,
  MR_Word * STATE_VARIABLE_Match_72);

static MR_Box MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__verify_match_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__verify_match_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__verify_match_7_p_0(
  MR_Word Background_8,
  MR_Word NewVar_9,
  MR_Word NewCons_10,
  MR_Word NewArgs_11,
  MR_Word PP_12,
  MR_Word STATE_VARIABLE_Match_0_18,
  MR_Word * STATE_VARIABLE_Match_19);

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__find_match_in_disjunction_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__find_match_in_disjunction_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__find_match_in_disjunction_4_p_0(
  MR_Word Background_5,
  MR_Word Branches_6,
  MR_Word STATE_VARIABLE_Match_0_11,
  MR_Word * STATE_VARIABLE_Match_12);

static MR_Word MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__match_get_decon_specs_1_f_0(
  MR_Word Match_3);

static MR_Box MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__deconstruction_specs_2_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__deconstruction_specs_2_4_p_0(
  MR_Word DeadVar_5,
  MR_Word Table_6,
  MR_Word STATE_VARIABLE_DeconstructionSpecs_0_10,
  MR_Word * STATE_VARIABLE_DeconstructionSpecs_11);

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__process_common_var_5_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_Box MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__process_common_var_5_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__process_common_var_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__process_common_var_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__process_common_var_5_p_0(
  MR_Word Background_6,
  MR_Word Cont_7,
  MR_Word DisjTables_8,
  MR_Word CommonDeadVar_9,
  MR_Word * Table_10);

static MR_Word MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__common_var_with_list_2_f_0(
  MR_Word Table_4,
  MR_Word List0_5);

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__compute_match_table_4_p_0(
  MR_Word Background_5,
  MR_Word DeadCellTable_6,
  MR_Word Goal_7,
  MR_Word * MatchTable_8);

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__remove_deconstruction_from_dead_cell_table_3_p_0(
  MR_Word DeconSpec_4,
  MR_Word STATE_VARIABLE_DeadCellTable_0_6,
  MR_Word * STATE_VARIABLE_DeadCellTable_7);

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__reverse_compare_matches_value_3_p_0(
  MR_Word Match1_4,
  MR_Word Match2_5,
  MR_Word * Result_6);

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__reverse_compare_matches_value_degree_3_p_0(
  MR_Word MatchA_4,
  MR_Word MatchB_5,
  MR_Word * Result_6);

static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__match_has_no_construction_candidates_1_p_0(
  MR_Word HeadVar__1_1);

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__check_for_cell_caching_2_3_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__check_for_cell_caching_2_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__check_for_cell_caching_2_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__check_for_cell_caching_2_3_p_0(
  MR_Word DeadCellTable_4,
  MR_Word STATE_VARIABLE_Goal_0_48,
  MR_Word * STATE_VARIABLE_Goal_49);

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__choose_reuse_in_goal_7_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_Box MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__choose_reuse_in_goal_7_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__choose_reuse_in_goal_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__choose_reuse_in_goal_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__choose_reuse_in_goal_7_p_0(
  MR_Word Background_8,
  MR_Word STATE_VARIABLE_DeadCellTable_0_25,
  MR_Word * STATE_VARIABLE_DeadCellTable_26,
  MR_Word STATE_VARIABLE_Goal_0_27,
  MR_Word * STATE_VARIABLE_Goal_28,
  MR_Word STATE_VARIABLE_ReuseAs_0_29,
  MR_Word * STATE_VARIABLE_ReuseAs_30);

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__dump_match_table_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__dump_match_table_5_p_0(
  MR_Word Stream_6,
  MR_Word MatchTable_7,
  MR_Word HighestMatch_8);

static MR_Box MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__dump_match_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__dump_match_5_p_0(
  MR_Word Stream_6,
  MR_String Prefix_7,
  MR_Word Match_8);

static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__dump_match_details_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__dump_match_details_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__dump_match_details_4_p_0(
  MR_Word Stream_5,
  MR_Word Match_6);

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__annotate_reuses_in_goal_4_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__annotate_reuses_in_goal_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__annotate_reuses_in_goal_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__annotate_reuses_in_goal_4_p_0(
  MR_Word Background_5,
  MR_Word Match_6,
  MR_Word STATE_VARIABLE_Goal_0_51,
  MR_Word * STATE_VARIABLE_Goal_52);

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__annotate_reuse_for_unification_5_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_Box MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__annotate_reuse_for_unification_5_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__annotate_reuse_for_unification_5_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__annotate_reuse_for_unification_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__annotate_reuse_for_unification_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__annotate_reuse_for_unification_5_p_0(
  MR_Word Background_6,
  MR_Word Match_7,
  MR_Word Unification_8,
  MR_Word STATE_VARIABLE_GoalInfo_0_40,
  MR_Word * STATE_VARIABLE_GoalInfo_41);

static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__match_find_deconstruction_spec_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__match_find_deconstruction_spec_3_p_0(
  MR_Word Match_4,
  MR_Word ProgramPoint_5,
  MR_Word * DeconstructionSpec_6);

static MR_Box MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__compute_match_table_with_continuation_6_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__compute_match_table_with_continuation_6_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__compute_match_table_with_continuation_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__compute_match_table_with_continuation_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__compute_match_table_goal_list_5_p_0(
  MR_Word tscc_proc_1_input_1_Background_6,
  MR_Word tscc_proc_1_input_2_DeadCellTable_7,
  MR_Word tscc_proc_1_input_3_Goals_8,
  MR_Word tscc_proc_1_input_4_STATE_VARIABLE_Table_0_12,
  MR_Word * tscc_output_ptr_1_STATE_VARIABLE_Table_13);

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__compute_match_table_with_continuation_6_p_0(
  MR_Word tscc_proc_2_input_1_Background_7,
  MR_Word tscc_proc_2_input_2_DeadCellTable_8,
  MR_Word tscc_proc_2_input_3_CurrentGoal_9,
  MR_Word tscc_proc_2_input_4_Cont_10,
  MR_Word tscc_proc_2_input_5_STATE_VARIABLE_Table_0_67,
  MR_Word * tscc_output_ptr_1_STATE_VARIABLE_Table_13);

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__find_best_match_in_conjunction_4_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_Box MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__find_best_match_in_conjunction_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__find_best_match_in_conjunction_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__find_best_match_in_conjunction_4_p_0(
  MR_Word Background_5,
  MR_Word Goals_6,
  MR_Word STATE_VARIABLE_Match_0_11,
  MR_Word * STATE_VARIABLE_Match_12);

static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__process_possible_common_dead_vars_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_Box MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__process_possible_common_dead_vars_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__process_possible_common_dead_vars_4_p_0(
  MR_Word Background_5,
  MR_Word Cont_6,
  MR_Word DisjTables_7,
  MR_Word * ExtraTables_8);

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__compute_match_table_in_disjunction_6_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__compute_match_table_in_disjunction_6_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_Box MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__compute_match_table_in_disjunction_6_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__compute_match_table_in_disjunction_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__compute_match_table_in_disjunction_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__compute_match_table_in_disjunction_6_p_0(
  MR_Word Background_7,
  MR_Word DeadCellTable_8,
  MR_Word DisjGoals_9,
  MR_Word Cont_10,
  MR_Word STATE_VARIABLE_Table_0_14,
  MR_Word * STATE_VARIABLE_Table_15);

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__compute_match_table_in_disjs_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__compute_match_table_in_disjs_4_p_0(
  MR_Word Background_5,
  MR_Word DeadCellTable_6,
  MR_Word Branches_7,
  MR_Word * Tables_8);

static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse____Unify____background_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse____Compare____background_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse____Unify____construction_spec_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse____Compare____construction_spec_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse____Unify____deconstruction_spec_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse____Compare____deconstruction_spec_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse____Unify____match_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse____Compare____match_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse____Unify____match_table_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse____Compare____match_table_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse____Unify____reuse_type_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse____Compare____reuse_type_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_1[6][2];

static /* final */ const MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_2[31][3];

static /* final */ const MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_3[2][1];

static /* final */ const MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_4[5][7];

static /* final */ const MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_5[10][6];

static /* final */ const MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_6[3][8];

static /* final */ const MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_7[7][5];

static /* final */ const MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_8[1][4];

static /* final */ const MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_9[1][9];




static /* final */ const MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_1[6][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_match_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_1[0]))
  },
  /* row   3 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_deconstruction_spec_0))
  },
  /* row   4 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_construction_spec_0))
  },
  /* row   5 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_needs_update_0))
  },
};

static /* final */ const MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_2[31][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_condition_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_1[0])),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_1[1]))
  },
  /* row   2 */
  {
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_5[0])),
    ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__compute_match_table_in_disjunction_6_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   3 */
  {
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_5[1])),
    ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__compute_match_table_in_disjunction_6_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   4 */
  {
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_5[0])),
    ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__compute_match_table_in_disjunction_6_p_0_5)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   5 */
  {
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_5[1])),
    ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__process_possible_common_dead_vars_4_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   6 */
  {
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_5[2])),
    ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__find_best_match_in_conjunction_4_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   7 */
  {
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_5[3])),
    ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__find_best_match_in_conjunction_4_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   8 */
  {
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_5[0])),
    ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__compute_match_table_with_continuation_6_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   9 */
  {
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_5[0])),
    ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__compute_match_table_with_continuation_6_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  10 */
  {
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_5[0])),
    ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__compute_match_table_with_continuation_6_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  11 */
  {
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_7[0])),
    ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__compute_match_table_with_continuation_6_p_0_4)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  12 */
  {
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_7[3])),
    ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__annotate_reuse_for_unification_5_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  13 */
  {
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_7[4])),
    ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__annotate_reuse_for_unification_5_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  14 */
  {
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_7[5])),
    ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__annotate_reuse_for_unification_5_p_0_4)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  15 */
  {
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_7[5])),
    ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__dump_match_details_4_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  16 */
  {
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_8[0])),
    ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__dump_match_details_4_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  17 */
  {
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_7[3])),
    ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__dump_match_5_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  18 */
  {
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_5[3])),
    ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__choose_reuse_in_goal_7_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  19 */
  {
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_5[4])),
    ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__choose_reuse_in_goal_7_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  20 */
  {
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_7[5])),
    ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__choose_reuse_in_goal_7_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  21 */
  {
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_5[2])),
    ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__process_common_var_5_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  22 */
  {
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_5[3])),
    ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__process_common_var_5_p_0_4)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  23 */
  {
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_7[6])),
    ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__deconstruction_specs_2_4_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  24 */
  {
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_5[7])),
    ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__find_match_in_disjunction_4_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  25 */
  {
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_5[8])),
    ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__verify_match_7_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  26 */
  {
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_5[2])),
    ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__find_match_in_goal_2_4_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  27 */
  {
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_5[3])),
    ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__find_match_in_goal_2_4_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  28 */
  {
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_5[7])),
    ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__find_match_in_goal_2_4_p_0_4)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  29 */
  {
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_7[0])),
    ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__find_match_in_goal_2_4_p_0_5)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  30 */
  {
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_5[9])),
    ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__glb_reuse_types_2_2_f_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_3[2][1] = {
  /* row   0 */
  {
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   1 */
  {
    (MR_Box) (((((MR_Unsigned) 0U << 4)) | (((((MR_Unsigned) 0U << 3)) | (((((MR_Unsigned) 0U << 2)) | (((MR_Unsigned) 0U << 1))))))))
  },
};

static /* final */ const MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_4[5][7] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_background_info_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse__tree234__pti_tree234_2__plain_transform_hlds__smm_common__type_ctor_info_program_point_0__plain_transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_condition_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_list__ti_list_1transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_match_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_background_info_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_match_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_match_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_background_info_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_match_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0))
  },
  /* row   3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_background_info_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_match_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0))
  },
  /* row   4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_list__ti_list_1transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_match_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse__list__pti_list_1__plain_transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_deconstruction_spec_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse__list__pti_list_1__plain_transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_deconstruction_spec_0))
  },
};

static /* final */ const MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_5[10][6] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_list__ti_list_1transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_match_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_list__ti_list_1transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_match_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_list__ti_list_1transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_match_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_list__ti_list_1transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_match_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_match_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row   3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_match_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_match_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_comparison_result_0))
  },
  /* row   4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_deconstruction_spec_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse__tree234__pti_tree234_2__plain_transform_hlds__smm_common__type_ctor_info_program_point_0__plain_transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_condition_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse__tree234__pti_tree234_2__plain_transform_hlds__smm_common__type_ctor_info_program_point_0__plain_transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_condition_0))
  },
  /* row   5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse__tree234__pti_tree234_2__plain_transform_hlds__smm_common__type_ctor_info_program_point_0__plain_transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_condition_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0))
  },
  /* row   6 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse__tree234__pti_tree234_2__plain_transform_hlds__smm_common__type_ctor_info_program_point_0__plain_transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_condition_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0))
  },
  /* row   7 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_match_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_match_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_match_0))
  },
  /* row   8 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_reuse_type_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_reuse_type_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_reuse_type_0))
  },
  /* row   9 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_needs_update_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_needs_update_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_needs_update_0))
  },
};

static /* final */ const MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_6[3][8] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_background_info_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse__list__pti_list_1__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse__list__pti_list_1__plain_tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0list__ti_list_1transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_match_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_list__ti_list_1transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_match_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_as_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_as_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_as_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_match_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_7[7][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_deconstruction_spec_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_construction_spec_0))
  },
  /* row   3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_deconstruction_spec_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row   4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_deconstruction_spec_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0))
  },
  /* row   5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_deconstruction_spec_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_as_0))
  },
  /* row   6 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_match_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse__list__pti_list_1__plain_transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_deconstruction_spec_0))
  },
};

static /* final */ const MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_8[1][4] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_as_0))
  },
};

static /* final */ const MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_9[1][9] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_background_info_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_deconstruction_spec_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_reuse_type_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"



static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__ctgc__structure_reuse__direct__choose_reuse__tree234__pti_tree234_2__plain_transform_hlds__smm_common__type_ctor_info_program_point_0__plain_transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_condition_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0),
    (MR_PseudoTypeInfo) (&transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_condition_0)
  }
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__ctgc__structure_reuse__direct__choose_reuse__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__ctgc__structure_reuse__direct__choose_reuse__list__ti_list_1transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_match_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_match_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__ctgc__structure_reuse__direct__choose_reuse__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_list__ti_list_1transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_match_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
    (MR_PseudoTypeInfo) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse__list__ti_list_1transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_match_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__ctgc__structure_reuse__direct__choose_reuse__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__ctgc__structure_reuse__direct__choose_reuse__list__pti_list_1__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)
  }
};

static const MR_FA_TypeInfo_Struct2 transform_hlds__ctgc__structure_reuse__direct__choose_reuse__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0list__ti_list_1transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_match_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
    (MR_TypeInfo) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse__list__ti_list_1transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_match_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__ctgc__structure_reuse__direct__choose_reuse__list__pti_list_1__plain_tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0list__ti_list_1transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_match_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0list__ti_list_1transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_match_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__ctgc__structure_reuse__direct__choose_reuse__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__ctgc__structure_reuse__direct__choose_reuse__list__pti_list_1__plain_transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_deconstruction_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_deconstruction_spec_0)
  }
};

static const MR_PseudoTypeInfo transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__field_types_background_info_0_0[4] = {
  (MR_PseudoTypeInfo) (&libs__globals__libs__globals__type_ctor_info_reuse_strategy_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0),
  (MR_PseudoTypeInfo) (&parse_tree__var_table__parse_tree__var_table__type_ctor_info_var_table_0)
};

static const MR_ConstString transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__field_names_background_info_0_0[4] = {
  (MR_String) "back_strategy",
  (MR_String) "back_module_info",
  (MR_String) "back_proc_info",
  (MR_String) "back_var_table"
};

static const MR_DuFunctorDesc transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__du_functor_desc_background_info_0_0 = {
  (MR_String) "background",
  INT16_C(4),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__field_types_background_info_0_0,
  transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__field_names_background_info_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__du_stag_ordered_background_info_0_0[1] = {
  &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__du_functor_desc_background_info_0_0
};

static const MR_DuPtagLayout transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__du_ptag_ordered_background_info_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__du_stag_ordered_background_info_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__du_name_ordered_background_info_0[1] = {
  &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__du_functor_desc_background_info_0_0
};

static const MR_Integer transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__functor_number_map_background_info_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_background_info_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse____Unify____background_info_0_0_10001)),
  ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse____Compare____background_info_0_0_10001)),
  (MR_String) "transform_hlds.ctgc.structure_reuse.direct.choose_reuse",
  (MR_String) "background_info",
  { transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__du_name_ordered_background_info_0 },
  { transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__du_ptag_ordered_background_info_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__functor_number_map_background_info_0,

};

static const MR_PseudoTypeInfo transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__field_types_construction_spec_0_0[2] = {
  (MR_PseudoTypeInfo) (&transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0),
  (MR_PseudoTypeInfo) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_reuse_type_0)
};

static const MR_ConstString transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__field_names_construction_spec_0_0[2] = {
  (MR_String) "con_pp",
  (MR_String) "con_reuse"
};

static const MR_DuFunctorDesc transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__du_functor_desc_construction_spec_0_0 = {
  (MR_String) "con",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__field_types_construction_spec_0_0,
  transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__field_names_construction_spec_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__du_stag_ordered_construction_spec_0_0[1] = {
  &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__du_functor_desc_construction_spec_0_0
};

static const MR_DuPtagLayout transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__du_ptag_ordered_construction_spec_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__du_stag_ordered_construction_spec_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__du_name_ordered_construction_spec_0[1] = {
  &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__du_functor_desc_construction_spec_0_0
};

static const MR_Integer transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__functor_number_map_construction_spec_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_construction_spec_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse____Unify____construction_spec_0_0_10001)),
  ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse____Compare____construction_spec_0_0_10001)),
  (MR_String) "transform_hlds.ctgc.structure_reuse.direct.choose_reuse",
  (MR_String) "construction_spec",
  { transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__du_name_ordered_construction_spec_0 },
  { transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__du_ptag_ordered_construction_spec_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__functor_number_map_construction_spec_0,

};

static const MR_FA_TypeInfo_Struct1 transform_hlds__ctgc__structure_reuse__direct__choose_reuse__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_PseudoTypeInfo transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__field_types_deconstruction_spec_0_0[5] = {
  (MR_PseudoTypeInfo) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
  (MR_PseudoTypeInfo) (&transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0),
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0),
  (MR_PseudoTypeInfo) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
  (MR_PseudoTypeInfo) (&transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_as_0)
};

static const MR_ConstString transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__field_names_deconstruction_spec_0_0[5] = {
  (MR_String) "decon_var",
  (MR_String) "decon_pp",
  (MR_String) "decon_cons_id",
  (MR_String) "decon_args",
  (MR_String) "decon_conds"
};

static const MR_DuFunctorDesc transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__du_functor_desc_deconstruction_spec_0_0 = {
  (MR_String) "decon",
  INT16_C(5),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__field_types_deconstruction_spec_0_0,
  transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__field_names_deconstruction_spec_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__du_stag_ordered_deconstruction_spec_0_0[1] = {
  &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__du_functor_desc_deconstruction_spec_0_0
};

static const MR_DuPtagLayout transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__du_ptag_ordered_deconstruction_spec_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__du_stag_ordered_deconstruction_spec_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__du_name_ordered_deconstruction_spec_0[1] = {
  &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__du_functor_desc_deconstruction_spec_0_0
};

static const MR_Integer transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__functor_number_map_deconstruction_spec_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_deconstruction_spec_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse____Unify____deconstruction_spec_0_0_10001)),
  ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse____Compare____deconstruction_spec_0_0_10001)),
  (MR_String) "transform_hlds.ctgc.structure_reuse.direct.choose_reuse",
  (MR_String) "deconstruction_spec",
  { transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__du_name_ordered_deconstruction_spec_0 },
  { transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__du_ptag_ordered_deconstruction_spec_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__functor_number_map_deconstruction_spec_0,

};

static const MR_FA_TypeInfo_Struct1 transform_hlds__ctgc__structure_reuse__direct__choose_reuse__list__ti_list_1transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_deconstruction_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_deconstruction_spec_0)
  }
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__ctgc__structure_reuse__direct__choose_reuse__list__ti_list_1transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_construction_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_construction_spec_0)
  }
};

static const MR_PseudoTypeInfo transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__field_types_match_0_0[4] = {
  (MR_PseudoTypeInfo) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse__list__ti_list_1transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_deconstruction_spec_0),
  (MR_PseudoTypeInfo) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse__list__ti_list_1transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_construction_spec_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_float_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
};

static const MR_ConstString transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__field_names_match_0_0[4] = {
  (MR_String) "decon_specs",
  (MR_String) "con_specs",
  (MR_String) "match_value",
  (MR_String) "match_degree"
};

static const MR_DuFunctorDesc transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__du_functor_desc_match_0_0 = {
  (MR_String) "match",
  INT16_C(4),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__field_types_match_0_0,
  transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__field_names_match_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__du_stag_ordered_match_0_0[1] = {
  &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__du_functor_desc_match_0_0
};

static const MR_DuPtagLayout transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__du_ptag_ordered_match_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__du_stag_ordered_match_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__du_name_ordered_match_0[1] = {
  &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__du_functor_desc_match_0_0
};

static const MR_Integer transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__functor_number_map_match_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_match_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse____Unify____match_0_0_10001)),
  ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse____Compare____match_0_0_10001)),
  (MR_String) "transform_hlds.ctgc.structure_reuse.direct.choose_reuse",
  (MR_String) "match",
  { transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__du_name_ordered_match_0 },
  { transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__du_ptag_ordered_match_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__functor_number_map_match_0,

};

const MR_TypeCtorInfo_Struct transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_match_table_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse____Unify____match_table_0_0_10001)),
  ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse____Compare____match_table_0_0_10001)),
  (MR_String) "transform_hlds.ctgc.structure_reuse.direct.choose_reuse",
  (MR_String) "match_table",
  { NULL },
  { (MR_PseudoTypeInfo) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0list__ti_list_1transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_match_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_FA_TypeInfo_Struct1 transform_hlds__ctgc__structure_reuse__direct__choose_reuse__list__ti_list_1hlds__hlds_goal__type_ctor_info_needs_update_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_needs_update_0)
  }
};

static const MR_PseudoTypeInfo transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__field_types_reuse_type_0_0[3] = {
  (MR_PseudoTypeInfo) (&mercury__bool__bool__type_ctor_info_bool_0),
  (MR_PseudoTypeInfo) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse__list__ti_list_1hlds__hlds_goal__type_ctor_info_needs_update_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_float_0)
};

static const MR_ConstString transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__field_names_reuse_type_0_0[3] = {
  (MR_String) "same_cons",
  (MR_String) "reuse_fields",
  (MR_String) "reuse_value"
};

static const MR_DuArgLocn transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__field_locns_reuse_type_0_0[3] = {
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
  }
};

static const MR_DuFunctorDesc transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__du_functor_desc_reuse_type_0_0 = {
  (MR_String) "reuse_type",
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__field_types_reuse_type_0_0,
  transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__field_names_reuse_type_0_0,
  transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__field_locns_reuse_type_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__du_stag_ordered_reuse_type_0_0[1] = {
  &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__du_functor_desc_reuse_type_0_0
};

static const MR_DuPtagLayout transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__du_ptag_ordered_reuse_type_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__du_stag_ordered_reuse_type_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__du_name_ordered_reuse_type_0[1] = {
  &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__du_functor_desc_reuse_type_0_0
};

static const MR_Integer transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__functor_number_map_reuse_type_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_reuse_type_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse____Unify____reuse_type_0_0_10001)),
  ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse____Compare____reuse_type_0_0_10001)),
  (MR_String) "transform_hlds.ctgc.structure_reuse.direct.choose_reuse",
  (MR_String) "reuse_type",
  { transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__du_name_ordered_reuse_type_0 },
  { transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__du_ptag_ordered_reuse_type_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__functor_number_map_reuse_type_0,

};

static MR_Word MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__IntroducedFrom__func__dump_match_details__1385__1_1_f_0(
  MR_Word LambdaHeadVar__1_16)
{
  MR_Word LambdaHeadVar__2_17 = ((MR_Word) ((MR_hl_field(0, LambdaHeadVar__1_16, (MR_Integer) 4))));

  return LambdaHeadVar__2_17;
}

static MR_Word MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__IntroducedFrom__func__find_match_in_goal_2__868__1_1_f_0(
  MR_Word LambdaHeadVar__1_83)
{
  MR_Word LambdaHeadVar__2_84 = ((MR_Word) ((MR_hl_field(0, LambdaHeadVar__1_83, (MR_Integer) 2))));

  return LambdaHeadVar__2_84;
}

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__IntroducedFrom__pred__compute_match_table_in_disjunction__699__1_3_p_0(
  MR_Word HeadVar__1_25,
  MR_Word HeadVar__2_26,
  MR_Word * HeadVar__3_27)
{
  mercury__multi_map__merge_3_p_0((MR_Word) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_1[0]), (MR_Word) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_match_0), HeadVar__1_25, HeadVar__2_26, HeadVar__3_27);
}

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__IntroducedFrom__pred__compute_match_table_in_disjunction__691__1_3_p_0(
  MR_Word HeadVar__1_19,
  MR_Word HeadVar__2_20,
  MR_Word * HeadVar__3_21)
{
  mercury__multi_map__merge_3_p_0((MR_Word) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_1[0]), (MR_Word) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_match_0), HeadVar__1_19, HeadVar__2_20, HeadVar__3_21);
}

static MR_Word MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__IntroducedFrom__func__compute_match_table_with_continuation__633__1_1_f_0(
  MR_Word LambdaHeadVar__1_80)
{
  MR_Word LambdaHeadVar__2_81 = ((MR_Word) ((MR_hl_field(0, LambdaHeadVar__1_80, (MR_Integer) 2))));

  return LambdaHeadVar__2_81;
}

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__IntroducedFrom__pred__compute_match_table_with_continuation__663__1_3_p_0(
  MR_Word HeadVar__1_114,
  MR_Word HeadVar__2_115,
  MR_Word * HeadVar__3_116)
{
  mercury__multi_map__merge_3_p_0((MR_Word) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_1[0]), (MR_Word) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_match_0), HeadVar__1_114, HeadVar__2_115, HeadVar__3_116);
}

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__IntroducedFrom__pred__average_match__439__1_3_p_0(
  MR_Word LambdaHeadVar__1_16,
  MR_Word LambdaHeadVar__2_17,
  MR_Word * LambdaHeadVar__3_18)
{
  MR_Word DeconSpecs_11 = ((MR_Word) ((MR_hl_field(0, LambdaHeadVar__2_17, (MR_Integer) 0))));
  MR_Word ConSpecs_12;
  MR_Float Val_13;
  MR_Integer Deg_14;
  MR_Word Var_22 = ((MR_Word) ((MR_hl_field(0, LambdaHeadVar__1_16, (MR_Integer) 1))));
  MR_Float Var_23;
  MR_Float Var_24;
  MR_Word Var_36 = ((MR_Word) ((MR_hl_field(0, LambdaHeadVar__2_17, (MR_Integer) 1))));
  MR_Integer Var_47;
  MR_Integer Var_50;

  ConSpecs_12 = mercury__list__append_2_f_0((MR_Word) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_construction_spec_0), Var_36, Var_22);
  Var_23 = MR_unbox_float((MR_hl_field(0, LambdaHeadVar__2_17, (MR_Integer) 2)));
  Var_47 = ((MR_Integer) ((MR_hl_field(0, LambdaHeadVar__2_17, (MR_Integer) 3))));
  Var_24 = MR_unbox_float((MR_hl_field(0, LambdaHeadVar__1_16, (MR_Integer) 2)));
  Var_50 = ((MR_Integer) ((MR_hl_field(0, LambdaHeadVar__1_16, (MR_Integer) 3))));
  Val_13 = (Var_23 + Var_24);
  Deg_14 = (MR_Integer) ((MR_Unsigned) Var_47 + (MR_Unsigned) Var_50);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    *LambdaHeadVar__3_18 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (DeconSpecs_11));
    MR_hl_field(0, base, 1) = ((MR_Box) (ConSpecs_12));
    MR_hl_field(0, base, 2) = MR_box_float(Val_13);
    MR_hl_field(0, base, 3) = ((MR_Box) (Deg_14));
  }
}

static MR_Word MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__IntroducedFrom__func__match_get_condition__325__1_1_f_0(
  MR_Word LambdaHeadVar__1_12)
{
  MR_Word LambdaHeadVar__2_13 = ((MR_Word) ((MR_hl_field(0, LambdaHeadVar__1_12, (MR_Integer) 4))));

  return LambdaHeadVar__2_13;
}

static MR_Word MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__IntroducedFrom__func__match_get_dead_cons_ids__317__1_1_f_0(
  MR_Word LambdaHeadVar__1_7)
{
  MR_Word LambdaHeadVar__2_8 = ((MR_Word) ((MR_hl_field(0, LambdaHeadVar__1_7, (MR_Integer) 2))));

  return LambdaHeadVar__2_8;
}

static MR_Word MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__IntroducedFrom__func__match_get_dead_var__295__1_1_f_0(
  MR_Word LambdaHeadVar__1_12)
{
  MR_Word LambdaHeadVar__2_13 = ((MR_Word) ((MR_hl_field(0, LambdaHeadVar__1_12, (MR_Integer) 0))));

  return LambdaHeadVar__2_13;
}

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse____Compare____match_table_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_2[1]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse____Unify____match_table_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_2[1]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse____Compare____match_0_0(
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
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))));
    MR_Float ArgX3_10 = MR_unbox_float((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2)));
    MR_Float ArgY3_11 = MR_unbox_float((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 2)));
    MR_Integer ArgX4_13 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 3))));
    MR_Integer ArgY4_14 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 3))));
    MR_Word SubResult1_6;

    mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_1[3]), &SubResult1_6, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;

      mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_1[4]), &SubResult2_9, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
      succeeded = (SubResult2_9 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
      {
        MR_Word SubResult3_12;

        mercury__private_builtin__builtin_compare_float_3_p_0(&SubResult3_12, ArgX3_10, ArgY3_11);
        succeeded = (SubResult3_12 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult3_12;
        else
        {
          succeeded = (ArgX4_13 < ArgY4_14);
          if (succeeded)
            *HeadVar__1_1 = (MR_Integer) 1;
          else
          {
            succeeded = (ArgX4_13 > ArgY4_14);
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

static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse____Unify____match_0_0(
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
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Float ArgX3_7 = MR_unbox_float((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 2)));
    MR_Float ArgY3_8 = MR_unbox_float((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2)));
    MR_Integer ArgX4_9 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 3))));
    MR_Integer ArgY4_10 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 3))));

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_1[3]), ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
    if (succeeded)
    {
      TypeInfo_14_14 = (MR_Word) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_1[4]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_14_14, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
      if (succeeded)
      {
        succeeded = (ArgX3_7 == ArgY3_8);
        if (succeeded)
          succeeded = (ArgX4_9 == ArgY4_10);
      }
    }
  }
  return succeeded;
}

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse____Compare____deconstruction_spec_0_0(
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
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))));
    MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));
    MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 2))));
    MR_Word ArgX4_13 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 3))));
    MR_Word ArgY4_14 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 3))));
    MR_Word ArgX5_16 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 4))));
    MR_Word ArgY5_17 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 4))));
    MR_Word SubResult1_6;

    mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_1[0]), &SubResult1_6, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;

      transform_hlds__smm_common____Compare____program_point_0_0(&SubResult2_9, ArgX2_7, ArgY2_8);
      succeeded = (SubResult2_9 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
      {
        MR_Word SubResult3_12;

        parse_tree__prog_data____Compare____cons_id_0_0(&SubResult3_12, ArgX3_10, ArgY3_11);
        succeeded = (SubResult3_12 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult3_12;
        else
        {
          MR_Word SubResult4_15;

          mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_1[2]), &SubResult4_15, ((MR_Box) (ArgX4_13)), ((MR_Box) (ArgY4_14)));
          succeeded = (SubResult4_15 != (MR_Integer) 0);
          if (succeeded)
            *HeadVar__1_1 = SubResult4_15;
          else
            transform_hlds__ctgc__structure_reuse__domain____Compare____reuse_as_0_0(HeadVar__1_1, ArgX5_16, ArgY5_17);
        }
      }
    }
  }
}

static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse____Unify____deconstruction_spec_0_0(
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
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 2))));
    MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));
    MR_Word ArgX4_9 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 3))));
    MR_Word ArgY4_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 3))));
    MR_Word ArgX5_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 4))));
    MR_Word ArgY5_12 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 4))));

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_1[0]), ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
    if (succeeded)
    {
      succeeded = transform_hlds__smm_common____Unify____program_point_0_0(ArgX2_5, ArgY2_6);
      if (succeeded)
      {
        succeeded = parse_tree__prog_data____Unify____cons_id_0_0(ArgX3_7, ArgY3_8);
        if (succeeded)
        {
          TypeInfo_18_18 = (MR_Word) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_1[2]);
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_18_18, ((MR_Box) (ArgX4_9)), ((MR_Box) (ArgY4_10)));
          if (succeeded)
            succeeded = transform_hlds__ctgc__structure_reuse__domain____Unify____reuse_as_0_0(ArgX5_11, ArgY5_12);
        }
      }
    }
  }
  return succeeded;
}

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse____Compare____construction_spec_0_0(
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
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))));
    MR_Word SubResult1_6;

    transform_hlds__smm_common____Compare____program_point_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
      transform_hlds__ctgc__structure_reuse__direct__choose_reuse____Compare____reuse_type_0_0(HeadVar__1_1, ArgX2_7, ArgY2_8);
  }
}

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse____Compare____reuse_type_0_0(
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
    MR_Word ArgX1_4 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 1);
    MR_Word ArgY1_5 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))) & (MR_Integer) 1);
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))));
    MR_Float ArgX3_10 = MR_unbox_float((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2)));
    MR_Float ArgY3_11 = MR_unbox_float((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 2)));
    MR_Word SubResult1_6;
    MR_Integer Var_17 = (MR_Integer) (ArgX1_4);
    MR_Integer Var_18 = (MR_Integer) (ArgY1_5);

    succeeded = (Var_17 < Var_18);
    if (succeeded)
    {
      SubResult1_6 = (MR_Integer) 1;
      succeeded = MR_TRUE;
    }
    else
    {
      succeeded = (Var_17 > Var_18);
      if (succeeded)
      {
        SubResult1_6 = (MR_Integer) 2;
        succeeded = MR_TRUE;
      }
      else
      {
        succeeded = MR_TRUE;
        succeeded = !(succeeded);
        if (succeeded)
        {
          SubResult1_6 = (MR_Integer) 0;
          succeeded = MR_TRUE;
        }
      }
    }
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;

      mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_1[5]), &SubResult2_9, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
      succeeded = (SubResult2_9 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
        mercury__private_builtin__builtin_compare_float_3_p_0(HeadVar__1_1, ArgX3_10, ArgY3_11);
    }
  }
}

static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse____Unify____construction_spec_0_0(
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
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));

    succeeded = transform_hlds__smm_common____Unify____program_point_0_0(ArgX1_3, ArgY1_4);
    if (succeeded)
      succeeded = transform_hlds__ctgc__structure_reuse__direct__choose_reuse____Unify____reuse_type_0_0(ArgX2_5, ArgY2_6);
  }
  return succeeded;
}

static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse____Unify____reuse_type_0_0(
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
    MR_Word TypeInfo_11_11;
    MR_Word ArgX1_3 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))) & (MR_Integer) 1);
    MR_Word ArgY1_4 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 1);
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Float ArgX3_7 = MR_unbox_float((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 2)));
    MR_Float ArgY3_8 = MR_unbox_float((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2)));

    succeeded = (ArgX1_3 == ArgY1_4);
    if (succeeded)
    {
      TypeInfo_11_11 = (MR_Word) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_1[5]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_11_11, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
      if (succeeded)
        succeeded = (ArgX3_7 == ArgY3_8);
    }
  }
  return succeeded;
}

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse____Compare____background_info_0_0(
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
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))));
    MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));
    MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 2))));
    MR_Word ArgX4_13 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 3))));
    MR_Word ArgY4_14 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 3))));
    MR_Word SubResult1_6;

    libs__globals____Compare____reuse_strategy_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;

      hlds__hlds_module____Compare____module_info_0_0(&SubResult2_9, ArgX2_7, ArgY2_8);
      succeeded = (SubResult2_9 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
      {
        MR_Word SubResult3_12;

        hlds__hlds_pred____Compare____proc_info_0_0(&SubResult3_12, ArgX3_10, ArgY3_11);
        succeeded = (SubResult3_12 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult3_12;
        else
          parse_tree__var_table____Compare____var_table_0_0(HeadVar__1_1, ArgX4_13, ArgY4_14);
      }
    }
  }
}

static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse____Unify____background_info_0_0(
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
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 2))));
    MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));
    MR_Word ArgX4_9 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 3))));
    MR_Word ArgY4_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 3))));

    succeeded = libs__globals____Unify____reuse_strategy_0_0(ArgX1_3, ArgY1_4);
    if (succeeded)
    {
      succeeded = hlds__hlds_module____Unify____module_info_0_0(ArgX2_5, ArgY2_6);
      if (succeeded)
      {
        succeeded = hlds__hlds_pred____Unify____proc_info_0_0(ArgX3_7, ArgY3_8);
        if (succeeded)
          succeeded = parse_tree__var_table____Unify____var_table_0_0(ArgX4_9, ArgY4_10);
      }
    }
  }
  return succeeded;
}

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__check_for_cell_caching_in_case_3_p_0(
  MR_Word DeadCellTable_4,
  MR_Word STATE_VARIABLE_Case_0_10,
  MR_Word * STATE_VARIABLE_Case_11)
{
  MR_Word MainConsId_6 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Case_0_10, (MR_Integer) 0))));
  MR_Word OtherConsIds_7 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Case_0_10, (MR_Integer) 1))));
  MR_Word Goal0_8 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Case_0_10, (MR_Integer) 2))));
  MR_Word Goal_9;

  transform_hlds__ctgc__structure_reuse__direct__choose_reuse__check_for_cell_caching_2_3_p_0(DeadCellTable_4, Goal0_8, &Goal_9);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_Case_11 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (MainConsId_6));
    MR_hl_field(0, base, 1) = ((MR_Box) (OtherConsIds_7));
    MR_hl_field(0, base, 2) = ((MR_Box) (Goal_9));
  }
}

static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__construction_spec_with_program_point_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word ConstructionSpec_3)
{
  MR_bool succeeded;
  MR_Word Var_5 = ((MR_Word) ((MR_hl_field(0, ConstructionSpec_3, (MR_Integer) 0))));

  succeeded = transform_hlds__smm_common____Unify____program_point_0_0(HeadVar__1_1, Var_5);
  return succeeded;
}

static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__deconstruction_spec_with_program_point_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word DeconstructionSpec_3)
{
  MR_bool succeeded;
  MR_Word Var_8 = ((MR_Word) ((MR_hl_field(0, DeconstructionSpec_3, (MR_Integer) 1))));

  succeeded = transform_hlds__smm_common____Unify____program_point_0_0(HeadVar__1_1, Var_8);
  return succeeded;
}

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__annotate_reuses_in_case_4_p_0(
  MR_Word Background_5,
  MR_Word Match_6,
  MR_Word STATE_VARIABLE_Case_0_12,
  MR_Word * STATE_VARIABLE_Case_13)
{
  MR_Word MainConsId_8 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Case_0_12, (MR_Integer) 0))));
  MR_Word OtherConsIds_9 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Case_0_12, (MR_Integer) 1))));
  MR_Word Goal0_10 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Case_0_12, (MR_Integer) 2))));
  MR_Word Goal_11;

  transform_hlds__ctgc__structure_reuse__direct__choose_reuse__annotate_reuses_in_goal_4_p_0(Background_5, Match_6, Goal0_10, &Goal_11);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_Case_13 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (MainConsId_8));
    MR_hl_field(0, base, 1) = ((MR_Box) (OtherConsIds_9));
    MR_hl_field(0, base, 2) = ((MR_Box) (Goal_11));
  }
}

static MR_Word MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__needs_update_and_2_f_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_Word HeadVar__3_3;

  switch (HeadVar__1_1) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      switch (HeadVar__2_2) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          HeadVar__3_3 = (MR_Integer) 1;
          break;
        case (MR_Integer) 0:
          HeadVar__3_3 = (MR_Integer) 0;
          break;
      }
      break;
    case (MR_Integer) 0:
      switch (HeadVar__2_2) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          HeadVar__3_3 = (MR_Integer) 0;
          break;
        case (MR_Integer) 0:
          HeadVar__3_3 = (MR_Integer) 0;
          break;
      }
      break;
  }
  return HeadVar__3_3;
}

static MR_Box MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__glb_reuse_types_2_2_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_Box wrapper_arg_3;
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__3_3;

  conv0_HeadVar__3_3 = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__needs_update_and_2_f_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__3_3));
  return wrapper_arg_3;
}

static MR_Word MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__glb_reuse_types_2_2_f_0(
  MR_Word R1_4,
  MR_Word R2_5)
{
  MR_bool succeeded;
  MR_Word R_6;
  MR_Word SameCons1_7 = ((MR_Unsigned) ((MR_hl_field(0, R1_4, (MR_Integer) 0))) & (MR_Integer) 1);
  MR_Word Fields1_8 = ((MR_Word) ((MR_hl_field(0, R1_4, (MR_Integer) 1))));
  MR_Float V1_9 = MR_unbox_float((MR_hl_field(0, R1_4, (MR_Integer) 2)));
  MR_Word SameCons2_10 = ((MR_Unsigned) ((MR_hl_field(0, R2_5, (MR_Integer) 0))) & (MR_Integer) 1);
  MR_Word Fields2_11 = ((MR_Word) ((MR_hl_field(0, R2_5, (MR_Integer) 1))));
  MR_Float V2_12 = MR_unbox_float((MR_hl_field(0, R2_5, (MR_Integer) 2)));
  MR_Word Var_13;
  MR_Word Var_14;
  MR_Float Var_15;
  MR_Float Var_16;
  MR_Word L1b_18;
  MR_Word L2b_19;
  MR_Integer Var_20;
  MR_Integer Var_21;

  Var_13 = mercury__bool__and_2_f_0(SameCons1_7, SameCons2_10);
  Var_20 = mercury__list__length_1_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_needs_update_0), Fields1_8);
  Var_21 = mercury__list__length_1_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_needs_update_0), Fields2_11);
  succeeded = (Var_20 <= Var_21);
  if (succeeded)
  {
    MR_Integer Var_22;

    L1b_18 = Fields1_8;
    Var_22 = mercury__list__length_1_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_needs_update_0), Fields1_8);
    L2b_19 = mercury__list__take_upto_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_needs_update_0), Var_22, Fields2_11);
  }
  else
  {
    MR_Integer Var_23;

    Var_23 = mercury__list__length_1_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_needs_update_0), Fields2_11);
    L1b_18 = mercury__list__take_upto_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_needs_update_0), Var_23, Fields1_8);
    L2b_19 = Fields2_11;
  }
  Var_14 = mercury__list__map_corresponding_3_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_needs_update_0), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_needs_update_0), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_needs_update_0), (MR_Word) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_2[30]), L1b_18, L2b_19);
  Var_16 = (V1_9 + V2_12);
  Var_15 = mercury__float__f_slash_2_f_0(Var_16, (MR_Float) 2.0000000000000000);
  {
    R_6 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, R_6, 0) = (MR_Box) ((MR_Unsigned) (Var_13));
    MR_hl_field(0, R_6, 1) = ((MR_Box) (Var_14));
    MR_hl_field(0, R_6, 2) = MR_box_float(Var_15);
  }
  return R_6;
}

static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__compute_reuse_type_6_p_0(
  MR_Word Background_7,
  MR_Word _NewVar_8,
  MR_Word NewCons_9,
  MR_Word NewCellArgs_10,
  MR_Word DeconSpec_11,
  MR_Word * ReuseType_12)
{
  MR_bool succeeded;

  succeeded = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_109_112_117_116_101_95_114_101_117_115_101_95_116_121_112_101_95_95_91_50_93_95_48_6_p_0(Background_7, NewCons_9, NewCellArgs_10, DeconSpec_11, ReuseType_12);
  return succeeded;
}

static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_109_112_117_116_101_95_114_101_117_115_101_95_116_121_112_101_95_95_91_50_93_95_48_6_p_0(
  MR_Word Background_7,
  MR_Word NewCons_9,
  MR_Word NewCellArgs_10,
  MR_Word DeconSpec_11,
  MR_Word * ReuseType_12)
{
  MR_bool succeeded;
  MR_Word TypeInfo_60_60;
  MR_Word TypeCtorInfo_61_61;
  MR_Word DeadCons_15 = ((MR_Word) ((MR_hl_field(0, DeconSpec_11, (MR_Integer) 2))));
  MR_Word DeadCellArgs_16 = ((MR_Word) ((MR_hl_field(0, DeconSpec_11, (MR_Integer) 3))));
  MR_Word ModuleInfo_18 = ((MR_Word) ((MR_hl_field(0, Background_7, (MR_Integer) 1))));
  MR_Word SameCons_19;
  MR_Integer NewNumArgs_20;
  MR_Integer DeadNumArgs_21;
  MR_Word DeadSecTag_23;
  MR_Integer NewArity_24;
  MR_Integer DeadArity_25;
  MR_Word Constraint_26;
  MR_Integer DiffArity_27;
  MR_Word ReuseFields_29;
  MR_Integer UpToDateFields_30;
  MR_Integer SameConsV_31;
  MR_Integer Weight_32;
  MR_Integer Var_34;
  MR_Word Var_35;
  MR_Word Var_36;
  MR_Integer Var_37;
  MR_Integer Var_38;
  MR_Integer Var_39;
  MR_Integer Var_40;
  MR_Integer Var_41;
  MR_Integer Var_42;
  MR_Integer Var_43;
  MR_Integer Var_44;
  MR_Integer Var_45;
  MR_Integer Var_46;
  MR_Integer Var_47;
  MR_Integer Var_48;
  MR_Integer Var_49;
  MR_Integer Var_50;
  MR_Integer Var_51;
  MR_Integer Var_52;
  MR_Float Var_53;
  MR_Word ConsRepn_73;
  MR_Word ConsTag_74;
  MR_Word Var_76;
  MR_Word ConsRepn_63;
  MR_Word ConsTag_64;
  MR_Word Var_66;

  succeeded = parse_tree__prog_data____Unify____cons_id_0_0(NewCons_9, DeadCons_15);
  if (succeeded)
  {
    SameCons_19 = (MR_Integer) 1;
    succeeded = MR_TRUE;
  }
  else
  {
    SameCons_19 = (MR_Integer) 0;
    succeeded = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__cons_has_normal_fields_2_p_0(ModuleInfo_18, NewCons_9);
    if (succeeded)
      succeeded = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__cons_has_normal_fields_2_p_0(ModuleInfo_18, DeadCons_15);
  }
  if (succeeded)
  {
    TypeInfo_60_60 = (MR_Word) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_1[0]);
    NewNumArgs_20 = mercury__list__length_1_f_0(TypeInfo_60_60, NewCellArgs_10);
    DeadNumArgs_21 = mercury__list__length_1_f_0(TypeInfo_60_60, DeadCellArgs_16);
    succeeded = (NewNumArgs_20 != (MR_Integer) 0);
    if (succeeded)
    {
      succeeded = check_hlds__type_util__get_cons_repn_defn_3_p_0(ModuleInfo_18, DeadCons_15, &ConsRepn_73);
      if (succeeded)
      {
        ConsTag_74 = ((MR_Word) ((MR_hl_field(0, ConsRepn_73, (MR_Integer) 3))));
        Var_76 = hlds__hlds_data__get_maybe_secondary_tag_1_f_0(ConsTag_74);
        succeeded = (Var_76 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
        }
      }
      if (succeeded)
        DeadSecTag_23 = (MR_Integer) 1;
      else
        DeadSecTag_23 = (MR_Integer) 0;
      succeeded = (DeadSecTag_23 == (MR_Integer) 1);
      if (succeeded)
        Var_34 = (MR_Integer) 1;
      else
        Var_34 = (MR_Integer) 0;
      DeadArity_25 = (MR_Integer) ((MR_Unsigned) DeadNumArgs_21 + (MR_Unsigned) Var_34);
      Constraint_26 = ((MR_Word) ((MR_hl_field(0, Background_7, (MR_Integer) 0))));
      succeeded = check_hlds__type_util__get_cons_repn_defn_3_p_0(ModuleInfo_18, NewCons_9, &ConsRepn_63);
      if (succeeded)
      {
        ConsTag_64 = ((MR_Word) ((MR_hl_field(0, ConsRepn_63, (MR_Integer) 3))));
        Var_66 = hlds__hlds_data__get_maybe_secondary_tag_1_f_0(ConsTag_64);
        succeeded = (Var_66 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
        }
      }
      if (succeeded)
      {
        NewArity_24 = (MR_Integer) ((MR_Unsigned) NewNumArgs_20 + (MR_Unsigned) 1);
        succeeded = (NewArity_24 <= DeadArity_25);
        if (succeeded)
        {
          DiffArity_27 = (MR_Integer) ((MR_Unsigned) DeadArity_25 - (MR_Unsigned) NewArity_24);
          if ((Constraint_26 == (MR_Word) ((MR_Unsigned) 0U)))
            succeeded = (SameCons_19 == (MR_Integer) 1);
          else
          {
            MR_Integer N_28 = ((MR_Integer) ((MR_hl_field(1, Constraint_26, (MR_Integer) 0))));

            succeeded = (DiffArity_27 <= N_28);
          }
          if (succeeded)
          {
            ReuseFields_29 = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__already_correct_fields_4_f_0((MR_Integer) 1, NewCellArgs_10, DeadSecTag_23, DeadCellArgs_16);
            succeeded = MR_TRUE;
          }
        }
      }
      else
      {
        NewArity_24 = (MR_Integer) ((MR_Unsigned) NewNumArgs_20 + (MR_Unsigned) 0);
        succeeded = (NewArity_24 <= DeadArity_25);
        if (succeeded)
        {
          DiffArity_27 = (MR_Integer) ((MR_Unsigned) DeadArity_25 - (MR_Unsigned) NewArity_24);
          if ((Constraint_26 == (MR_Word) ((MR_Unsigned) 0U)))
            succeeded = (SameCons_19 == (MR_Integer) 1);
          else
          {
            MR_Integer N_83 = ((MR_Integer) ((MR_hl_field(1, Constraint_26, (MR_Integer) 0))));

            succeeded = (DiffArity_27 <= N_83);
          }
          if (succeeded)
          {
            ReuseFields_29 = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__already_correct_fields_4_f_0((MR_Integer) 0, NewCellArgs_10, DeadSecTag_23, DeadCellArgs_16);
            succeeded = MR_TRUE;
          }
        }
      }
      if (succeeded)
      {
        TypeCtorInfo_61_61 = (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_needs_update_0);
        Var_36 = (MR_Integer) 0;
        Var_35 = mercury__list__delete_all_2_f_0(TypeCtorInfo_61_61, ReuseFields_29, ((MR_Box) (Var_36)));
        UpToDateFields_30 = mercury__list__length_1_f_0(TypeCtorInfo_61_61, Var_35);
        succeeded = (SameCons_19 == (MR_Integer) 1);
        if (succeeded)
          SameConsV_31 = (MR_Integer) 0;
        else
          SameConsV_31 = (MR_Integer) 1;
        Var_42 = (MR_Integer) 5;
        Var_43 = (MR_Integer) 1;
        Var_41 = (MR_Integer) ((MR_Unsigned) Var_42 + (MR_Unsigned) Var_43);
        Var_40 = (MR_Integer) ((MR_Unsigned) Var_41 * (MR_Unsigned) NewArity_24);
        Var_44 = (MR_Integer) 1;
        Var_39 = (MR_Integer) ((MR_Unsigned) Var_40 + (MR_Unsigned) Var_44);
        Var_46 = (MR_Integer) 1;
        Var_47 = (MR_Integer) ((MR_Unsigned) NewArity_24 - (MR_Unsigned) UpToDateFields_30);
        Var_45 = (MR_Integer) ((MR_Unsigned) Var_46 * (MR_Unsigned) Var_47);
        Var_38 = (MR_Integer) ((MR_Unsigned) Var_39 - (MR_Unsigned) Var_45);
        Var_49 = (MR_Integer) 1;
        Var_48 = (MR_Integer) ((MR_Unsigned) Var_49 * (MR_Unsigned) SameConsV_31);
        Var_37 = (MR_Integer) ((MR_Unsigned) Var_38 - (MR_Unsigned) Var_48);
        Var_51 = (MR_Integer) 5;
        Var_50 = (MR_Integer) ((MR_Unsigned) Var_51 * (MR_Unsigned) DiffArity_27);
        Weight_32 = (MR_Integer) ((MR_Unsigned) Var_37 - (MR_Unsigned) Var_50);
        Var_52 = (MR_Integer) 0;
        succeeded = (Weight_32 > Var_52);
        if (succeeded)
        {
          Var_53 = mercury__float__float_1_f_0(Weight_32);
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            *ReuseType_12 = base;
            MR_hl_field(0, base, 0) = (MR_Box) ((MR_Unsigned) (SameCons_19));
            MR_hl_field(0, base, 1) = ((MR_Box) (ReuseFields_29));
            MR_hl_field(0, base, 2) = MR_box_float(Var_53);
          }
          succeeded = MR_TRUE;
        }
      }
    }
  }
  return succeeded;
}

static MR_Word MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__already_correct_fields_4_f_0(
  MR_Word ExplicitSecTagC_6,
  MR_Word CurrentCellVars_7,
  MR_Word ExplicitSecTagR_8,
  MR_Word ReuseCellVars_9)
{
  MR_Word ReuseFields_10;
  MR_Word NeedsNoUpdate_11;
  MR_Integer LengthC_12;
  MR_Integer LengthB_13;
  MR_Word NeedsUpdate_14;
  MR_Integer Var_15;

  switch (ExplicitSecTagC_6) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (ExplicitSecTagR_8) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          NeedsNoUpdate_11 = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__equals_2_f_0((MR_Word) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_1[0]), CurrentCellVars_7, ReuseCellVars_9);
          break;
        case (MR_Integer) 1:
          {
            MR_Word Var_29;

            if ((CurrentCellVars_7 == (MR_Word) ((MR_Unsigned) 0U)))
              if ((ReuseCellVars_9 == (MR_Word) ((MR_Unsigned) 0U)))
                Var_29 = (MR_Word) ((MR_Unsigned) 0U);
              else
                Var_29 = (MR_Word) ((MR_Unsigned) 0U);
            else
            {
              MR_Word Var_53 = ((MR_Word) ((MR_hl_field(1, CurrentCellVars_7, (MR_Integer) 1))));

              Var_29 = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__equals_2_f_0((MR_Word) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_1[0]), Var_53, ReuseCellVars_9);
            }
            {
              NeedsNoUpdate_11 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, NeedsNoUpdate_11, 0) = ((MR_Box) ((MR_Integer) 0));
              MR_hl_field(1, NeedsNoUpdate_11, 1) = ((MR_Box) (Var_29));
            }
          }
          break;
      }
      break;
    case (MR_Integer) 1:
      switch (ExplicitSecTagR_8) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word Var_24;
            MR_Word Var_25;

            if ((ReuseCellVars_9 == (MR_Word) ((MR_Unsigned) 0U)))
              Var_25 = (MR_Word) ((MR_Unsigned) 0U);
            else
              Var_25 = ((MR_Word) ((MR_hl_field(1, ReuseCellVars_9, (MR_Integer) 1))));
            Var_24 = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__equals_2_f_0((MR_Word) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_1[0]), CurrentCellVars_7, Var_25);
            {
              NeedsNoUpdate_11 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, NeedsNoUpdate_11, 0) = ((MR_Box) ((MR_Integer) 0));
              MR_hl_field(1, NeedsNoUpdate_11, 1) = ((MR_Box) (Var_24));
            }
          }
          break;
        case (MR_Integer) 1:
          NeedsNoUpdate_11 = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__equals_2_f_0((MR_Word) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_1[0]), CurrentCellVars_7, ReuseCellVars_9);
          break;
      }
      break;
  }
  LengthC_12 = mercury__list__length_1_f_0((MR_Word) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_1[0]), CurrentCellVars_7);
  LengthB_13 = mercury__list__length_1_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_needs_update_0), NeedsNoUpdate_11);
  Var_15 = (MR_Integer) ((MR_Unsigned) LengthC_12 - (MR_Unsigned) LengthB_13);
  NeedsUpdate_14 = mercury__list__duplicate_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_needs_update_0), Var_15, ((MR_Box) ((MR_Integer) 0)));
  ReuseFields_10 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_needs_update_0), NeedsNoUpdate_11, NeedsUpdate_14);
  return ReuseFields_10;
}

static MR_Word MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__equals_2_f_0(
  MR_Word TypeInfo_for_T_14,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word HeadVar__3_3;

  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
    else
      HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word Var_15 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
    MR_Box Var_16 = (MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0));

    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Box Y_10 = (MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0));
      MR_Word Ys_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
      MR_Word NeedsUpdate_12;
      MR_Word Var_13;

      Var_13 = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__equals_2_f_0(TypeInfo_for_T_14, Var_15, Ys_11);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_T_14, Var_16, Y_10);
      if (succeeded)
        NeedsUpdate_12 = (MR_Integer) 1;
      else
        NeedsUpdate_12 = (MR_Integer) 0;
      {
        HeadVar__3_3 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, HeadVar__3_3, 0) = ((MR_Box) (NeedsUpdate_12));
        MR_hl_field(1, HeadVar__3_3, 1) = ((MR_Box) (Var_13));
      }
    }
  }
  return HeadVar__3_3;
}

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__cons_has_normal_fields_2_p_0_1(
  void * env_ptr_arg)
{
  struct transform_hlds__ctgc__structure_reuse__direct__choose_reuse__cons_has_normal_fields_2_p_0_env_0_s * env_ptr = (struct transform_hlds__ctgc__structure_reuse__direct__choose_reuse__cons_has_normal_fields_2_p_0_env_0_s *) (env_ptr_arg);

  MR_builtin_longjmp((env_ptr)->transform_hlds__ctgc__structure_reuse__direct__choose_reuse__cons_has_normal_fields_2_p_0_env_0__commit_0, 1);
}

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__cons_has_normal_fields_2_p_0_3(
  void * env_ptr_arg)
{
  struct transform_hlds__ctgc__structure_reuse__direct__choose_reuse__cons_has_normal_fields_2_p_0_env_0_s * env_ptr = (struct transform_hlds__ctgc__structure_reuse__direct__choose_reuse__cons_has_normal_fields_2_p_0_env_0_s *) (env_ptr_arg);

  (env_ptr)->transform_hlds__ctgc__structure_reuse__direct__choose_reuse__cons_has_normal_fields_2_p_0_env_0__ArgRepn_10 = ((MR_Word) ((env_ptr)->transform_hlds__ctgc__structure_reuse__direct__choose_reuse__cons_has_normal_fields_2_p_0_env_0__conv0_ArgRepn_10));
  transform_hlds__ctgc__structure_reuse__direct__choose_reuse__cons_has_normal_fields_2_p_0_2(env_ptr);
}

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__cons_has_normal_fields_2_p_0_2(
  void * env_ptr_arg)
{
  struct transform_hlds__ctgc__structure_reuse__direct__choose_reuse__cons_has_normal_fields_2_p_0_env_0_s * env_ptr = (struct transform_hlds__ctgc__structure_reuse__direct__choose_reuse__cons_has_normal_fields_2_p_0_env_0_s *) (env_ptr_arg);

  {
    MR_Word Var_39 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->transform_hlds__ctgc__structure_reuse__direct__choose_reuse__cons_has_normal_fields_2_p_0_env_0__ArgRepn_10, (MR_Integer) 2))));
    MR_Word Var_11 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->transform_hlds__ctgc__structure_reuse__direct__choose_reuse__cons_has_normal_fields_2_p_0_env_0__ArgRepn_10, (MR_Integer) 0))));
    MR_Word Var_12 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->transform_hlds__ctgc__structure_reuse__direct__choose_reuse__cons_has_normal_fields_2_p_0_env_0__ArgRepn_10, (MR_Integer) 1))));
    MR_Word Var_15 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->transform_hlds__ctgc__structure_reuse__direct__choose_reuse__cons_has_normal_fields_2_p_0_env_0__ArgRepn_10, (MR_Integer) 3))));
    MR_Word Var_13;
    MR_Word Var_14;

    (env_ptr)->transform_hlds__ctgc__structure_reuse__direct__choose_reuse__cons_has_normal_fields_2_p_0_env_0__succeeded = ((MR_tag((MR_Word) Var_39)) == (MR_Integer) 1);
    if ((env_ptr)->transform_hlds__ctgc__structure_reuse__direct__choose_reuse__cons_has_normal_fields_2_p_0_env_0__succeeded)
    {
      Var_13 = ((MR_Word) ((MR_hl_field(1, Var_39, (MR_Integer) 0))));
      Var_14 = ((MR_Word) ((MR_hl_field(1, Var_39, (MR_Integer) 1))));
    }
    (env_ptr)->transform_hlds__ctgc__structure_reuse__direct__choose_reuse__cons_has_normal_fields_2_p_0_env_0__succeeded = !((env_ptr)->transform_hlds__ctgc__structure_reuse__direct__choose_reuse__cons_has_normal_fields_2_p_0_env_0__succeeded);
    if ((env_ptr)->transform_hlds__ctgc__structure_reuse__direct__choose_reuse__cons_has_normal_fields_2_p_0_env_0__succeeded)
      transform_hlds__ctgc__structure_reuse__direct__choose_reuse__cons_has_normal_fields_2_p_0_1(env_ptr);
  }
}

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__cons_has_normal_fields_2_p_0_4(
  void * env_ptr_arg)
{
  struct transform_hlds__ctgc__structure_reuse__direct__choose_reuse__cons_has_normal_fields_2_p_0_env_0_s * env_ptr = (struct transform_hlds__ctgc__structure_reuse__direct__choose_reuse__cons_has_normal_fields_2_p_0_env_0_s *) (env_ptr_arg);

  if (MR_builtin_setjmp((env_ptr)->transform_hlds__ctgc__structure_reuse__direct__choose_reuse__cons_has_normal_fields_2_p_0_env_0__commit_0) == 0)
    {
      mercury__list__member_2_p_1((MR_Word) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_constructor_arg_repn_0), &(env_ptr)->transform_hlds__ctgc__structure_reuse__direct__choose_reuse__cons_has_normal_fields_2_p_0_env_0__conv0_ArgRepn_10, (env_ptr)->transform_hlds__ctgc__structure_reuse__direct__choose_reuse__cons_has_normal_fields_2_p_0_env_0__ConsArgRepns_9, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__cons_has_normal_fields_2_p_0_3, env_ptr);
      (env_ptr)->transform_hlds__ctgc__structure_reuse__direct__choose_reuse__cons_has_normal_fields_2_p_0_env_0__succeeded = MR_FALSE;
    }
  else
    (env_ptr)->transform_hlds__ctgc__structure_reuse__direct__choose_reuse__cons_has_normal_fields_2_p_0_env_0__succeeded = MR_TRUE;
}

static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__cons_has_normal_fields_2_p_0(
  MR_Word ModuleInfo_3,
  MR_Word ConsId_4)
{
  struct transform_hlds__ctgc__structure_reuse__direct__choose_reuse__cons_has_normal_fields_2_p_0_env_0_s env;

  switch (MR_tag((MR_Word) ConsId_4)) {
    default:
      (env).transform_hlds__ctgc__structure_reuse__direct__choose_reuse__cons_has_normal_fields_2_p_0_env_0__succeeded = MR_FALSE;
      break;
    case (MR_Integer) 0:
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.ctgc.structure_reuse.direct.choose_reuse.cons_has_normal_fields\'/2", (MR_String) "unusual cons_id");
        (env).transform_hlds__ctgc__structure_reuse__direct__choose_reuse__cons_has_normal_fields_2_p_0_env_0__succeeded = MR_TRUE;
      }
      break;
    case (MR_Integer) 1:
    case (MR_Integer) 2:
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.ctgc.structure_reuse.direct.choose_reuse.cons_has_normal_fields\'/2", (MR_String) "unusual cons_id");
        (env).transform_hlds__ctgc__structure_reuse__direct__choose_reuse__cons_has_normal_fields_2_p_0_env_0__succeeded = MR_TRUE;
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, ConsId_4, (MR_Integer) 0))))) {
        default:
          (env).transform_hlds__ctgc__structure_reuse__direct__choose_reuse__cons_has_normal_fields_2_p_0_env_0__succeeded = MR_FALSE;
          break;
        case (MR_Integer) 0:
        case (MR_Integer) 1:
        case (MR_Integer) 4:
        case (MR_Integer) 5:
        case (MR_Integer) 6:
        case (MR_Integer) 7:
        case (MR_Integer) 8:
        case (MR_Integer) 9:
        case (MR_Integer) 10:
        case (MR_Integer) 11:
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.ctgc.structure_reuse.direct.choose_reuse.cons_has_normal_fields\'/2", (MR_String) "unusual cons_id");
            (env).transform_hlds__ctgc__structure_reuse__direct__choose_reuse__cons_has_normal_fields_2_p_0_env_0__succeeded = MR_TRUE;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word ConsRepnDefn_8;
            uint32_t Var_42;
            MR_Word Var_43;
            MR_Word Var_44;
            MR_Word Var_45;
            MR_Integer Var_46;
            MR_Word Var_47;

            check_hlds__type_util__get_cons_repn_defn_det_3_p_0(ModuleInfo_3, ConsId_4, &ConsRepnDefn_8);
            Var_42 = ((uint32_t) (MR_Word) (MR_hl_field(0, ConsRepnDefn_8, (MR_Integer) 0)));
            Var_43 = ((MR_Word) ((MR_hl_field(0, ConsRepnDefn_8, (MR_Integer) 1))));
            Var_44 = ((MR_Word) ((MR_hl_field(0, ConsRepnDefn_8, (MR_Integer) 2))));
            Var_45 = ((MR_Word) ((MR_hl_field(0, ConsRepnDefn_8, (MR_Integer) 3))));
            (env).transform_hlds__ctgc__structure_reuse__direct__choose_reuse__cons_has_normal_fields_2_p_0_env_0__ConsArgRepns_9 = ((MR_Word) ((MR_hl_field(0, ConsRepnDefn_8, (MR_Integer) 4))));
            Var_46 = ((MR_Integer) ((MR_hl_field(0, ConsRepnDefn_8, (MR_Integer) 5))));
            Var_47 = ((MR_Word) ((MR_hl_field(0, ConsRepnDefn_8, (MR_Integer) 6))));
            transform_hlds__ctgc__structure_reuse__direct__choose_reuse__cons_has_normal_fields_2_p_0_4(&env);
            (env).transform_hlds__ctgc__structure_reuse__direct__choose_reuse__cons_has_normal_fields_2_p_0_env_0__succeeded = !((env).transform_hlds__ctgc__structure_reuse__direct__choose_reuse__cons_has_normal_fields_2_p_0_env_0__succeeded);
          }
          break;
        case (MR_Integer) 3:
          (env).transform_hlds__ctgc__structure_reuse__direct__choose_reuse__cons_has_normal_fields_2_p_0_env_0__succeeded = MR_TRUE;
          break;
        case (MR_Integer) 14:
          (env).transform_hlds__ctgc__structure_reuse__direct__choose_reuse__cons_has_normal_fields_2_p_0_env_0__succeeded = MR_TRUE;
          break;
      }
      break;
  }
  return (env).transform_hlds__ctgc__structure_reuse__direct__choose_reuse__cons_has_normal_fields_2_p_0_env_0__succeeded;
}

static MR_Integer MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__add_degree_2_f_0(
  MR_Word Match_4,
  MR_Integer Degree0_5)
{
  MR_Integer HeadVar__3_3;
  MR_Integer Var_6 = ((MR_Integer) ((MR_hl_field(0, Match_4, (MR_Integer) 3))));

  HeadVar__3_3 = (MR_Integer) ((MR_Unsigned) Degree0_5 + (MR_Unsigned) Var_6);
  return HeadVar__3_3;
}

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__find_match_in_goal_4_p_0(
  MR_Word Background_5,
  MR_Word Match0_6,
  MR_Word Goal_7,
  MR_Word * Match_8)
{
  transform_hlds__ctgc__structure_reuse__direct__choose_reuse__find_match_in_goal_2_4_p_0(Background_5, Goal_7, Match0_6, Match_8);
}

static MR_Box MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__find_match_in_goal_2_4_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv6_LambdaHeadVar__2_84;

  conv6_LambdaHeadVar__2_84 = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__IntroducedFrom__func__find_match_in_goal_2__868__1_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv6_LambdaHeadVar__2_84));
  return wrapper_arg_2;
}

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__find_match_in_goal_2_4_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv4_LambdaHeadVar__3_18;

  transform_hlds__ctgc__structure_reuse__direct__choose_reuse__IntroducedFrom__pred__average_match__439__1_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv4_LambdaHeadVar__3_18);
  *wrapper_arg_3 = ((MR_Box) (conv4_LambdaHeadVar__3_18));
}

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__find_match_in_goal_2_4_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv3_Result_6;

  transform_hlds__ctgc__structure_reuse__direct__choose_reuse__reverse_compare_matches_value_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv3_Result_6);
  *wrapper_arg_3 = ((MR_Box) (conv3_Result_6));
}

static MR_Box MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__find_match_in_goal_2_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_Box wrapper_arg_3;
  MR_Box closure = closure_arg;
  MR_Integer conv1_HeadVar__3_3;

  conv1_HeadVar__3_3 = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__add_degree_2_f_0(((MR_Word) (wrapper_arg_1)), ((MR_Integer) (wrapper_arg_2)));
  wrapper_arg_3 = ((MR_Box) (conv1_HeadVar__3_3));
  return wrapper_arg_3;
}

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__find_match_in_goal_2_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_Match_8;

  transform_hlds__ctgc__structure_reuse__direct__choose_reuse__find_match_in_goal_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), &conv0_Match_8);
  *wrapper_arg_2 = ((MR_Box) (conv0_Match_8));
}

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__find_match_in_goal_2_4_p_0(
  MR_Word Background_5,
  MR_Word Goal_6,
  MR_Word STATE_VARIABLE_Match_0_71,
  MR_Word * STATE_VARIABLE_Match_72)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word GoalExpr_8 = ((MR_Word) ((MR_hl_field(0, Goal_6, (MR_Integer) 0))));
    MR_Word GoalInfo_9 = ((MR_Word) ((MR_hl_field(0, Goal_6, (MR_Integer) 1))));

    // setup for model_det tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) GoalExpr_8)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *STATE_VARIABLE_Match_72 = STATE_VARIABLE_Match_0_71;
        break;
      case (MR_Integer) 1:
        {
          MR_Word Unification_13 = ((MR_Word) ((MR_hl_field(1, GoalExpr_8, (MR_Integer) 3))));

          switch (MR_tag((MR_Word) Unification_13)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word Var_15 = ((MR_Word) ((MR_hl_field(0, Unification_13, (MR_Integer) 0))));
                MR_Word Cons_16 = ((MR_Word) ((MR_hl_field(0, Unification_13, (MR_Integer) 1))));
                MR_Word Args_17 = ((MR_Word) ((MR_hl_field(0, Unification_13, (MR_Integer) 2))));
                MR_Word VarType_22;
                MR_Word Var_73 = ((MR_Word) ((MR_hl_field(0, Background_5, (MR_Integer) 3))));
                MR_Word Var_74;
                MR_Word Var_75;

                parse_tree__var_table__lookup_var_type_3_p_0(Var_73, Var_15, &VarType_22);
                Var_74 = ((MR_Word) ((MR_hl_field(0, Background_5, (MR_Integer) 1))));
                succeeded = transform_hlds__ctgc__util__top_cell_may_be_reusable_2_p_0(Var_74, VarType_22);
                if (succeeded)
                {
                  Var_75 = hlds__hlds_goal__goal_info_get_reuse_1_f_0(GoalInfo_9);
                  succeeded = (Var_75 == (MR_Word) ((MR_Unsigned) 0U));
                }
                if (succeeded)
                {
                  MR_Word Var_76;

                  Var_76 = transform_hlds__smm_common__program_point_init_1_f_0(GoalInfo_9);
                  transform_hlds__ctgc__structure_reuse__direct__choose_reuse__verify_match_7_p_0(Background_5, Var_15, Cons_16, Args_17, Var_76, STATE_VARIABLE_Match_0_71, STATE_VARIABLE_Match_72);
                }
                else
                  *STATE_VARIABLE_Match_72 = STATE_VARIABLE_Match_0_71;
              }
              break;
            case (MR_Integer) 1:
              *STATE_VARIABLE_Match_72 = STATE_VARIABLE_Match_0_71;
              break;
            case (MR_Integer) 2:
              *STATE_VARIABLE_Match_72 = STATE_VARIABLE_Match_0_71;
              break;
            case (MR_Integer) 3:
              switch (((MR_Integer) ((MR_hl_field(3, Unification_13, (MR_Integer) 0))))) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  *STATE_VARIABLE_Match_72 = STATE_VARIABLE_Match_0_71;
                  break;
                case (MR_Integer) 1:
                  {
                    mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.ctgc.structure_reuse.direct.choose_reuse.find_match_in_goal_2\'/4", (MR_String) "complicated unify");
                    return;
                  }
                  break;
              }
              break;
          }
        }
        break;
      case (MR_Integer) 2:
        *STATE_VARIABLE_Match_72 = STATE_VARIABLE_Match_0_71;
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, GoalExpr_8, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *STATE_VARIABLE_Match_72 = STATE_VARIABLE_Match_0_71;
            break;
          case (MR_Integer) 1:
            *STATE_VARIABLE_Match_72 = STATE_VARIABLE_Match_0_71;
            break;
          case (MR_Integer) 2:
            {
              MR_Word Goals_55 = ((MR_Word) ((MR_hl_field(3, GoalExpr_8, (MR_Integer) 2))));
              MR_Word ExclusiveMatches_109;
              MR_Integer Degree_110;
              MR_Word Var_111;
              MR_Word STATE_VARIABLE_Match_14_112;
              MR_Word Sorted_123;
              MR_Word Var_126;
              MR_Box conv2_Degree_110;
              MR_Word Var_113;
              MR_Word Var_114;
              MR_Float Var_115;

              {
                Var_111 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_111, 0) = ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_4[1]));
                MR_hl_field(0, Var_111, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__find_match_in_goal_2_4_p_0_1));
                MR_hl_field(0, Var_111, 2) = ((MR_Box) ((MR_Integer) 2));
                MR_hl_field(0, Var_111, 3) = ((MR_Box) (Background_5));
                MR_hl_field(0, Var_111, 4) = ((MR_Box) (STATE_VARIABLE_Match_0_71));
              }
              mercury__list__map_3_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_match_0), Var_111, Goals_55, &ExclusiveMatches_109);
              conv2_Degree_110 = mercury__list__foldl_3_f_0((MR_Word) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_match_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_2[26]), ExclusiveMatches_109, ((MR_Box) ((MR_Integer) 0)));
              Degree_110 = ((MR_Integer) (conv2_Degree_110));
              {
                Var_126 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_126, 0) = ((MR_Box) (STATE_VARIABLE_Match_0_71));
                MR_hl_field(1, Var_126, 1) = ((MR_Box) (ExclusiveMatches_109));
              }
              mercury__list__sort_3_p_0((MR_Word) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_match_0), (MR_Word) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_2[27]), Var_126, &Sorted_123);
              if ((Sorted_123 == (MR_Word) ((MR_Unsigned) 0U)))
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.ctgc.structure_reuse.direct.choose_reuse.highest_match_in_list\'/3", (MR_String) "empty list of matches");
                  return;
                }
              else
                STATE_VARIABLE_Match_14_112 = ((MR_Word) ((MR_hl_field(1, Sorted_123, (MR_Integer) 0))));
              Var_113 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Match_14_112, (MR_Integer) 0))));
              Var_114 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Match_14_112, (MR_Integer) 1))));
              Var_115 = MR_unbox_float((MR_hl_field(0, STATE_VARIABLE_Match_14_112, (MR_Integer) 2)));
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                *STATE_VARIABLE_Match_72 = base;
                MR_hl_field(0, base, 0) = ((MR_Box) (Var_113));
                MR_hl_field(0, base, 1) = ((MR_Box) (Var_114));
                MR_hl_field(0, base, 2) = MR_box_float(Var_115);
                MR_hl_field(0, base, 3) = ((MR_Box) (Degree_110));
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word Goals_96 = ((MR_Word) ((MR_hl_field(3, GoalExpr_8, (MR_Integer) 1))));

              transform_hlds__ctgc__structure_reuse__direct__choose_reuse__find_match_in_disjunction_4_p_0(Background_5, Goals_96, STATE_VARIABLE_Match_0_71, STATE_VARIABLE_Match_72);
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word Cases_58 = ((MR_Word) ((MR_hl_field(3, GoalExpr_8, (MR_Integer) 3))));
              MR_Word Goals_98;

              Goals_98 = mercury__list__map_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_2[29]), Cases_58);
              transform_hlds__ctgc__structure_reuse__direct__choose_reuse__find_match_in_disjunction_4_p_0(Background_5, Goals_98, STATE_VARIABLE_Match_0_71, STATE_VARIABLE_Match_72);
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word ScopeGoal_69 = ((MR_Word) ((MR_hl_field(3, GoalExpr_8, (MR_Integer) 2))));
              MR_Word next_value_of_Goal_6 = ScopeGoal_69;

              // direct tailcall eliminated
              ;
              Goal_6 = next_value_of_Goal_6;
              continue;
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word CondGoal_61 = ((MR_Word) ((MR_hl_field(3, GoalExpr_8, (MR_Integer) 2))));
              MR_Word ThenGoal_62 = ((MR_Word) ((MR_hl_field(3, GoalExpr_8, (MR_Integer) 3))));
              MR_Word ElseGoal_63 = ((MR_Word) ((MR_hl_field(3, GoalExpr_8, (MR_Integer) 4))));
              MR_Word MatchElse_66;
              MR_Word Var_86;
              MR_Word Var_87;
              MR_Word Var_89;
              MR_Word First_130;
              MR_Word Rest_131;
              MR_Integer Length_132;
              MR_Word Match0_134;
              MR_Float Var_135;
              MR_Float Var_136;
              MR_Float Var_137;
              MR_Box conv5_Match0_134;
              MR_Word Var_143;
              MR_Word Var_144;
              MR_Integer Var_146;

              {
                Var_87 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_87, 0) = ((MR_Box) (ThenGoal_62));
                MR_hl_field(1, Var_87, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                Var_86 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_86, 0) = ((MR_Box) (CondGoal_61));
                MR_hl_field(1, Var_86, 1) = ((MR_Box) (Var_87));
              }
              transform_hlds__ctgc__structure_reuse__direct__choose_reuse__find_best_match_in_conjunction_4_p_0(Background_5, Var_86, STATE_VARIABLE_Match_0_71, &First_130);
              transform_hlds__ctgc__structure_reuse__direct__choose_reuse__find_match_in_goal_2_4_p_0(Background_5, ElseGoal_63, STATE_VARIABLE_Match_0_71, &MatchElse_66);
              {
                Rest_131 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Rest_131, 0) = ((MR_Box) (MatchElse_66));
                MR_hl_field(1, Rest_131, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                Var_89 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_89, 0) = ((MR_Box) (First_130));
                MR_hl_field(1, Var_89, 1) = ((MR_Box) (Rest_131));
              }
              mercury__list__length_2_p_0((MR_Word) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_match_0), Var_89, &Length_132);
              mercury__list__foldl_4_p_0((MR_Word) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_match_0), (MR_Word) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_match_0), (MR_Word) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_2[28]), Rest_131, ((MR_Box) (First_130)), &conv5_Match0_134);
              Match0_134 = ((MR_Word) (conv5_Match0_134));
              Var_136 = MR_unbox_float((MR_hl_field(0, Match0_134, (MR_Integer) 2)));
              Var_137 = mercury__float__float_1_f_0(Length_132);
              Var_135 = mercury__float__f_slash_2_f_0(Var_136, Var_137);
              Var_143 = ((MR_Word) ((MR_hl_field(0, Match0_134, (MR_Integer) 0))));
              Var_144 = ((MR_Word) ((MR_hl_field(0, Match0_134, (MR_Integer) 1))));
              Var_146 = ((MR_Integer) ((MR_hl_field(0, Match0_134, (MR_Integer) 3))));
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                *STATE_VARIABLE_Match_72 = base;
                MR_hl_field(0, base, 0) = ((MR_Box) (Var_143));
                MR_hl_field(0, base, 1) = ((MR_Box) (Var_144));
                MR_hl_field(0, base, 2) = MR_box_float(Var_135);
                MR_hl_field(0, base, 3) = ((MR_Box) (Var_146));
              }
            }
            break;
          case (MR_Integer) 7:
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.ctgc.structure_reuse.direct.choose_reuse.find_match_in_goal_2\'/4", (MR_String) "shorthand");
              return;
            }
            break;
        }
        break;
    }
    break;
  }
}

static MR_Box MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__verify_match_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_Box wrapper_arg_3;
  MR_Box closure = closure_arg;
  MR_Word conv1_R_6;

  conv1_R_6 = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__glb_reuse_types_2_2_f_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  wrapper_arg_3 = ((MR_Box) (conv1_R_6));
  return wrapper_arg_3;
}

static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__verify_match_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;
  MR_Word conv0_ReuseType_12;

  succeeded = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__compute_reuse_type_6_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 6)))), ((MR_Word) (wrapper_arg_1)), &conv0_ReuseType_12);
  if (succeeded)
  {
    *wrapper_arg_2 = ((MR_Box) (conv0_ReuseType_12));
    succeeded = MR_TRUE;
  }
  return succeeded;
}

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__verify_match_7_p_0(
  MR_Word Background_8,
  MR_Word NewVar_9,
  MR_Word NewCons_10,
  MR_Word NewArgs_11,
  MR_Word PP_12,
  MR_Word STATE_VARIABLE_Match_0_18,
  MR_Word * STATE_VARIABLE_Match_19)
{
  MR_bool succeeded;
  MR_Word DeconSpecs_14 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Match_0_18, (MR_Integer) 0))));
  MR_Word ReuseType_16;
  MR_Word TypeCtorInfo_6_31;
  MR_Word ReuseTypes_15;
  MR_Word Var_20;
  MR_Word First_28;
  MR_Word Rest_29;
  MR_Word Var_30;
  MR_Box conv2_ReuseType_16;

  {
    Var_20 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_20, 0) = ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_9[0]));
    MR_hl_field(0, Var_20, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__verify_match_7_p_0_1));
    MR_hl_field(0, Var_20, 2) = ((MR_Box) ((MR_Integer) 4));
    MR_hl_field(0, Var_20, 3) = ((MR_Box) (Background_8));
    MR_hl_field(0, Var_20, 4) = ((MR_Box) (NewVar_9));
    MR_hl_field(0, Var_20, 5) = ((MR_Box) (NewCons_10));
    MR_hl_field(0, Var_20, 6) = ((MR_Box) (NewArgs_11));
  }
  succeeded = mercury__list__map_3_p_2((MR_Word) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_deconstruction_spec_0), (MR_Word) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_reuse_type_0), Var_20, DeconSpecs_14, &ReuseTypes_15);
  if (succeeded)
  {
    succeeded = (ReuseTypes_15 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      First_28 = ((MR_Word) ((MR_hl_field(1, ReuseTypes_15, (MR_Integer) 0))));
      Rest_29 = ((MR_Word) ((MR_hl_field(1, ReuseTypes_15, (MR_Integer) 1))));
      TypeCtorInfo_6_31 = (MR_Word) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_reuse_type_0);
      Var_30 = (MR_Word) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_2[25]);
      conv2_ReuseType_16 = mercury__list__foldl_3_f_0(TypeCtorInfo_6_31, TypeCtorInfo_6_31, Var_30, Rest_29, ((MR_Box) (First_28)));
      ReuseType_16 = ((MR_Word) (conv2_ReuseType_16));
      succeeded = MR_TRUE;
    }
  }
  if (succeeded)
  {
    MR_Word ConSpec_17;
    MR_Word DeconSpecs0_32;
    MR_Word ConSpecs0_33;
    MR_Float Value0_34;
    MR_Integer Degree0_35;
    MR_Word ConSpecs_36;
    MR_Integer Degree_37;
    MR_Float FDegree0_38;
    MR_Float FDegree_39;
    MR_Float Value_40;
    MR_Float Var_42;
    MR_Float Var_43;
    MR_Float Var_44;
    MR_Word Var_45;

    {
      ConSpec_17 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, ConSpec_17, 0) = ((MR_Box) (PP_12));
      MR_hl_field(0, ConSpec_17, 1) = ((MR_Box) (ReuseType_16));
    }
    DeconSpecs0_32 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Match_0_18, (MR_Integer) 0))));
    ConSpecs0_33 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Match_0_18, (MR_Integer) 1))));
    Value0_34 = MR_unbox_float((MR_hl_field(0, STATE_VARIABLE_Match_0_18, (MR_Integer) 2)));
    Degree0_35 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_Match_0_18, (MR_Integer) 3))));
    {
      ConSpecs_36 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, ConSpecs_36, 0) = ((MR_Box) (ConSpec_17));
      MR_hl_field(1, ConSpecs_36, 1) = ((MR_Box) (ConSpecs0_33));
    }
    Degree_37 = (MR_Integer) ((MR_Unsigned) Degree0_35 + (MR_Unsigned) 1);
    FDegree0_38 = mercury__float__float_1_f_0(Degree0_35);
    FDegree_39 = mercury__float__float_1_f_0(Degree_37);
    Var_43 = (Value0_34 * FDegree0_38);
    Var_45 = ((MR_Word) ((MR_hl_field(0, ConSpec_17, (MR_Integer) 1))));
    Var_44 = MR_unbox_float((MR_hl_field(0, Var_45, (MR_Integer) 2)));
    Var_42 = (Var_43 + Var_44);
    Value_40 = mercury__float__f_slash_2_f_0(Var_42, FDegree_39);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_Match_19 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (DeconSpecs0_32));
      MR_hl_field(0, base, 1) = ((MR_Box) (ConSpecs_36));
      MR_hl_field(0, base, 2) = MR_box_float(Value_40);
      MR_hl_field(0, base, 3) = ((MR_Box) (Degree_37));
    }
  }
  else
    *STATE_VARIABLE_Match_19 = STATE_VARIABLE_Match_0_18;
}

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__find_match_in_disjunction_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_LambdaHeadVar__3_18;

  transform_hlds__ctgc__structure_reuse__direct__choose_reuse__IntroducedFrom__pred__average_match__439__1_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_LambdaHeadVar__3_18);
  *wrapper_arg_3 = ((MR_Box) (conv1_LambdaHeadVar__3_18));
}

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__find_match_in_disjunction_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_Match_8;

  transform_hlds__ctgc__structure_reuse__direct__choose_reuse__find_match_in_goal_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), &conv0_Match_8);
  *wrapper_arg_2 = ((MR_Box) (conv0_Match_8));
}

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__find_match_in_disjunction_4_p_0(
  MR_Word Background_5,
  MR_Word Branches_6,
  MR_Word STATE_VARIABLE_Match_0_11,
  MR_Word * STATE_VARIABLE_Match_12)
{
  if ((Branches_6 == (MR_Word) ((MR_Unsigned) 0U)))
    *STATE_VARIABLE_Match_12 = STATE_VARIABLE_Match_0_11;
  else
  {
    MR_Word BranchMatches_10;
    MR_Word Var_13;

    {
      Var_13 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_13, 0) = ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_4[1]));
      MR_hl_field(0, Var_13, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__find_match_in_disjunction_4_p_0_1));
      MR_hl_field(0, Var_13, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(0, Var_13, 3) = ((MR_Box) (Background_5));
      MR_hl_field(0, Var_13, 4) = ((MR_Box) (STATE_VARIABLE_Match_0_11));
    }
    mercury__list__map_3_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_match_0), Var_13, Branches_6, &BranchMatches_10);
    if ((BranchMatches_10 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.ctgc.structure_reuse.direct.choose_reuse.average_match\'/2", (MR_String) "empty list");
        return;
      }
    else
    {
      MR_Word First_18 = ((MR_Word) ((MR_hl_field(1, BranchMatches_10, (MR_Integer) 0))));
      MR_Word Rest_19 = ((MR_Word) ((MR_hl_field(1, BranchMatches_10, (MR_Integer) 1))));
      MR_Integer Length_20;
      MR_Word Match0_22;
      MR_Float Var_23;
      MR_Float Var_24;
      MR_Float Var_25;
      MR_Box conv2_Match0_22;
      MR_Word Var_31;
      MR_Word Var_32;
      MR_Integer Var_34;

      mercury__list__length_2_p_0((MR_Word) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_match_0), BranchMatches_10, &Length_20);
      mercury__list__foldl_4_p_0((MR_Word) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_match_0), (MR_Word) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_match_0), (MR_Word) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_2[24]), Rest_19, ((MR_Box) (First_18)), &conv2_Match0_22);
      Match0_22 = ((MR_Word) (conv2_Match0_22));
      Var_24 = MR_unbox_float((MR_hl_field(0, Match0_22, (MR_Integer) 2)));
      Var_25 = mercury__float__float_1_f_0(Length_20);
      Var_23 = mercury__float__f_slash_2_f_0(Var_24, Var_25);
      Var_31 = ((MR_Word) ((MR_hl_field(0, Match0_22, (MR_Integer) 0))));
      Var_32 = ((MR_Word) ((MR_hl_field(0, Match0_22, (MR_Integer) 1))));
      Var_34 = ((MR_Integer) ((MR_hl_field(0, Match0_22, (MR_Integer) 3))));
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        *STATE_VARIABLE_Match_12 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (Var_31));
        MR_hl_field(0, base, 1) = ((MR_Box) (Var_32));
        MR_hl_field(0, base, 2) = MR_box_float(Var_23);
        MR_hl_field(0, base, 3) = ((MR_Box) (Var_34));
      }
    }
  }
}

static MR_Word MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__match_get_decon_specs_1_f_0(
  MR_Word Match_3)
{
  MR_Word HeadVar__2_2 = ((MR_Word) ((MR_hl_field(0, Match_3, (MR_Integer) 0))));

  return HeadVar__2_2;
}

static MR_Box MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__deconstruction_specs_2_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__2_2;

  conv0_HeadVar__2_2 = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__match_get_decon_specs_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
  return wrapper_arg_2;
}

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__deconstruction_specs_2_4_p_0(
  MR_Word DeadVar_5,
  MR_Word Table_6,
  MR_Word STATE_VARIABLE_DeconstructionSpecs_0_10,
  MR_Word * STATE_VARIABLE_DeconstructionSpecs_11)
{
  MR_Word Matches_8;
  MR_Word NewSpecs_9;
  MR_Word Var_12;

  mercury__multi_map__lookup_3_p_0((MR_Word) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_1[0]), (MR_Word) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_match_0), Table_6, ((MR_Box) (DeadVar_5)), &Matches_8);
  Var_12 = mercury__list__map_2_f_0((MR_Word) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_match_0), (MR_Word) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_1[3]), (MR_Word) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_2[23]), Matches_8);
  NewSpecs_9 = mercury__list__condense_1_f_0((MR_Word) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_deconstruction_spec_0), Var_12);
  mercury__list__append_3_p_1((MR_Word) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_deconstruction_spec_0), NewSpecs_9, STATE_VARIABLE_DeconstructionSpecs_0_10, STATE_VARIABLE_DeconstructionSpecs_11);
}

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__process_common_var_5_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv5_Result_6;

  transform_hlds__ctgc__structure_reuse__direct__choose_reuse__reverse_compare_matches_value_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv5_Result_6);
  *wrapper_arg_3 = ((MR_Box) (conv5_Result_6));
}

static MR_Box MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__process_common_var_5_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_Box wrapper_arg_3;
  MR_Box closure = closure_arg;
  MR_Integer conv3_HeadVar__3_3;

  conv3_HeadVar__3_3 = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__add_degree_2_f_0(((MR_Word) (wrapper_arg_1)), ((MR_Integer) (wrapper_arg_2)));
  wrapper_arg_3 = ((MR_Box) (conv3_HeadVar__3_3));
  return wrapper_arg_3;
}

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__process_common_var_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_Match_8;

  transform_hlds__ctgc__structure_reuse__direct__choose_reuse__find_match_in_goal_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), &conv2_Match_8);
  *wrapper_arg_2 = ((MR_Box) (conv2_Match_8));
}

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__process_common_var_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_DeconstructionSpecs_11;

  transform_hlds__ctgc__structure_reuse__direct__choose_reuse__deconstruction_specs_2_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_DeconstructionSpecs_11);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_DeconstructionSpecs_11));
}

static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__process_common_var_5_p_0(
  MR_Word Background_6,
  MR_Word Cont_7,
  MR_Word DisjTables_8,
  MR_Word CommonDeadVar_9,
  MR_Word * Table_10)
{
  MR_bool succeeded;
  MR_Word TypeInfo_15_15;
  MR_Word TypeCtorInfo_16_16;
  MR_Word Match0_11;
  MR_Word Match_12;
  MR_Word Table0_13;
  MR_Word Var_14;
  MR_Word Var_17;
  MR_Word ExclusiveMatches_24;
  MR_Integer Degree_25;
  MR_Word Var_26;
  MR_Word STATE_VARIABLE_Match_14_27;
  MR_Word Sorted_38;
  MR_Word Var_41;
  MR_Word Constructions_45;
  MR_Float Value_46;
  MR_Float Var_49;
  MR_Box conv1_Var_14;
  MR_Box conv4_Degree_25;
  MR_Word Var_28;

  {
    Var_17 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_17, 0) = ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_4[4]));
    MR_hl_field(0, Var_17, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__process_common_var_5_p_0_1));
    MR_hl_field(0, Var_17, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_17, 3) = ((MR_Box) (CommonDeadVar_9));
  }
  mercury__list__foldl_4_p_0((MR_Word) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_2[1]), (MR_Word) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_1[3]), Var_17, DisjTables_8, ((MR_Box) ((MR_Unsigned) 0U)), &conv1_Var_14);
  Var_14 = ((MR_Word) (conv1_Var_14));
  {
    Match0_11 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Match0_11, 0) = ((MR_Box) (Var_14));
    MR_hl_field(0, Match0_11, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, Match0_11, 2) = MR_box_float((MR_Float) 0.0000000000000000);
    MR_hl_field(0, Match0_11, 3) = ((MR_Box) ((MR_Integer) 0));
  }
  {
    Var_26 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_26, 0) = ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_4[1]));
    MR_hl_field(0, Var_26, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__process_common_var_5_p_0_2));
    MR_hl_field(0, Var_26, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_26, 3) = ((MR_Box) (Background_6));
    MR_hl_field(0, Var_26, 4) = ((MR_Box) (Match0_11));
  }
  mercury__list__map_3_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_match_0), Var_26, Cont_7, &ExclusiveMatches_24);
  conv4_Degree_25 = mercury__list__foldl_3_f_0((MR_Word) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_match_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_2[21]), ExclusiveMatches_24, ((MR_Box) ((MR_Integer) 0)));
  Degree_25 = ((MR_Integer) (conv4_Degree_25));
  {
    Var_41 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_41, 0) = ((MR_Box) (Match0_11));
    MR_hl_field(1, Var_41, 1) = ((MR_Box) (ExclusiveMatches_24));
  }
  mercury__list__sort_3_p_0((MR_Word) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_match_0), (MR_Word) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_2[22]), Var_41, &Sorted_38);
  if ((Sorted_38 == (MR_Word) ((MR_Unsigned) 0U)))
    mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.ctgc.structure_reuse.direct.choose_reuse.highest_match_in_list\'/3", (MR_String) "empty list of matches");
  else
    STATE_VARIABLE_Match_14_27 = ((MR_Word) ((MR_hl_field(1, Sorted_38, (MR_Integer) 0))));
  Var_28 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Match_14_27, (MR_Integer) 0))));
  Constructions_45 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Match_14_27, (MR_Integer) 1))));
  Value_46 = MR_unbox_float((MR_hl_field(0, STATE_VARIABLE_Match_14_27, (MR_Integer) 2)));
  {
    Match_12 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Match_12, 0) = ((MR_Box) (Var_28));
    MR_hl_field(0, Match_12, 1) = ((MR_Box) (Constructions_45));
    MR_hl_field(0, Match_12, 2) = MR_box_float(Value_46);
    MR_hl_field(0, Match_12, 3) = ((MR_Box) (Degree_25));
  }
  succeeded = (Constructions_45 != (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
  {
    Var_49 = (MR_Float) 0.0000000000000000;
    succeeded = (Value_46 > Var_49);
    if (succeeded)
    {
      TypeInfo_15_15 = (MR_Word) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_1[0]);
      TypeCtorInfo_16_16 = (MR_Word) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_match_0);
      mercury__multi_map__init_1_p_0(TypeInfo_15_15, TypeCtorInfo_16_16, &Table0_13);
      mercury__multi_map__det_insert_4_p_0(TypeInfo_15_15, TypeCtorInfo_16_16, ((MR_Box) (CommonDeadVar_9)), ((MR_Box) (Match_12)), Table0_13, Table_10);
      succeeded = MR_TRUE;
    }
  }
  return succeeded;
}

static MR_Word MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__common_var_with_list_2_f_0(
  MR_Word Table_4,
  MR_Word List0_5)
{
  MR_Word List_6;
  MR_Word Keys_7;
  MR_Word Set_8;
  MR_Word Var_9;
  MR_Word Var_10;

  mercury__map__keys_2_p_0((MR_Word) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_1[0]), (MR_Word) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_1[1]), Table_4, &Keys_7);
  Var_9 = mercury__set__list_to_set_1_f_0((MR_Word) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_1[0]), List0_5);
  Var_10 = mercury__set__list_to_set_1_f_0((MR_Word) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_1[0]), Keys_7);
  Set_8 = mercury__set__intersect_2_f_0((MR_Word) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_1[0]), Var_9, Var_10);
  List_6 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_1[0]), Set_8);
  return List_6;
}

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__compute_match_table_4_p_0(
  MR_Word Background_5,
  MR_Word DeadCellTable_6,
  MR_Word Goal_7,
  MR_Word * MatchTable_8)
{
  MR_Word Var_10;

  Var_10 = mercury__multi_map__init_0_f_0((MR_Word) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_1[0]), (MR_Word) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_match_0));
  transform_hlds__ctgc__structure_reuse__direct__choose_reuse__compute_match_table_with_continuation_6_p_0(Background_5, DeadCellTable_6, Goal_7, (MR_Word) ((MR_Unsigned) 0U), Var_10, MatchTable_8);
}

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__remove_deconstruction_from_dead_cell_table_3_p_0(
  MR_Word DeconSpec_4,
  MR_Word STATE_VARIABLE_DeadCellTable_0_6,
  MR_Word * STATE_VARIABLE_DeadCellTable_7)
{
  MR_Word Var_8 = ((MR_Word) ((MR_hl_field(0, DeconSpec_4, (MR_Integer) 1))));

  transform_hlds__ctgc__structure_reuse__direct__dead_cell_table_remove_3_p_0(Var_8, STATE_VARIABLE_DeadCellTable_0_6, STATE_VARIABLE_DeadCellTable_7);
}

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__reverse_compare_matches_value_3_p_0(
  MR_Word Match1_4,
  MR_Word Match2_5,
  MR_Word * Result_6)
{
  MR_Float V1_7 = MR_unbox_float((MR_hl_field(0, Match2_5, (MR_Integer) 2)));
  MR_Float V2_8 = MR_unbox_float((MR_hl_field(0, Match1_4, (MR_Integer) 2)));

  mercury__private_builtin__builtin_compare_float_3_p_0(Result_6, V1_7, V2_8);
}

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__reverse_compare_matches_value_degree_3_p_0(
  MR_Word MatchA_4,
  MR_Word MatchB_5,
  MR_Word * Result_6)
{
  MR_bool succeeded;
  MR_Float VA_7;
  MR_Float VB_8;
  MR_Float Var_10 = MR_unbox_float((MR_hl_field(0, MatchB_5, (MR_Integer) 2)));
  MR_Float Var_23;

  succeeded = (Var_10 == ((MR_Float) 0.0000000000000000));
  succeeded = !(succeeded);
  if (succeeded)
  {
    MR_Float Var_11 = MR_unbox_float((MR_hl_field(0, MatchB_5, (MR_Integer) 2)));
    MR_Float Var_12;
    MR_Integer Var_19 = ((MR_Integer) ((MR_hl_field(0, MatchB_5, (MR_Integer) 3))));

    Var_12 = mercury__float__float_1_f_0(Var_19);
    VA_7 = mercury__float__f_slash_2_f_0(Var_11, Var_12);
  }
  else
    VA_7 = (MR_Float) 0.0000000000000000;
  Var_23 = MR_unbox_float((MR_hl_field(0, MatchA_4, (MR_Integer) 2)));
  succeeded = (Var_23 == ((MR_Float) 0.0000000000000000));
  succeeded = !(succeeded);
  if (succeeded)
  {
    MR_Float Var_24 = MR_unbox_float((MR_hl_field(0, MatchA_4, (MR_Integer) 2)));
    MR_Float Var_25;
    MR_Integer Var_32 = ((MR_Integer) ((MR_hl_field(0, MatchA_4, (MR_Integer) 3))));

    Var_25 = mercury__float__float_1_f_0(Var_32);
    VB_8 = mercury__float__f_slash_2_f_0(Var_24, Var_25);
  }
  else
    VB_8 = (MR_Float) 0.0000000000000000;
  mercury__private_builtin__builtin_compare_float_3_p_0(Result_6, VA_7, VB_8);
}

static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__match_has_no_construction_candidates_1_p_0(
  MR_Word HeadVar__1_1)
{
  MR_bool succeeded;
  MR_Word Var_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));

  succeeded = (Var_5 == (MR_Word) ((MR_Unsigned) 0U));
  return succeeded;
}

void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__determine_reuse_6_p_0(
  MR_Word ModuleInfo_7,
  MR_Word ProcInfo_8,
  MR_Word DeadCellTable_9,
  MR_Word STATE_VARIABLE_Goal_0_18,
  MR_Word * STATE_VARIABLE_Goal_19,
  MR_Word * ReuseAs_11)
{
  MR_bool succeeded;
  MR_Word Globals_12;
  MR_Word Strategy_13;
  MR_Word BackGroundInfo_14;
  MR_Word RemainingDeadCellTable_15;
  MR_Word FreeCells_16;
  MR_Word STATE_VARIABLE_Goal_20_20;
  MR_Word Var_21;
  MR_Word VarTable_24;

  hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_7, &Globals_12);
  libs__globals__get_reuse_strategy_2_p_0(Globals_12, &Strategy_13);
  hlds__hlds_pred__proc_info_get_var_table_2_p_0(ProcInfo_8, &VarTable_24);
  {
    BackGroundInfo_14 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, BackGroundInfo_14, 0) = ((MR_Box) (Strategy_13));
    MR_hl_field(0, BackGroundInfo_14, 1) = ((MR_Box) (ModuleInfo_7));
    MR_hl_field(0, BackGroundInfo_14, 2) = ((MR_Box) (ProcInfo_8));
    MR_hl_field(0, BackGroundInfo_14, 3) = ((MR_Box) (VarTable_24));
  }
  Var_21 = transform_hlds__ctgc__structure_reuse__domain__reuse_as_init_0_f_0();
  transform_hlds__ctgc__structure_reuse__direct__choose_reuse__choose_reuse_in_goal_7_p_0(BackGroundInfo_14, DeadCellTable_9, &RemainingDeadCellTable_15, STATE_VARIABLE_Goal_0_18, &STATE_VARIABLE_Goal_20_20, Var_21, ReuseAs_11);
  libs__globals__lookup_bool_option_3_p_0(Globals_12, (MR_Integer) 516, &FreeCells_16);
  switch (FreeCells_16) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      *STATE_VARIABLE_Goal_19 = STATE_VARIABLE_Goal_20_20;
      break;
    case (MR_Integer) 1:
      {
        MR_Word VeryVerbose_17;
        MR_Word DeadCellTable_25;

        libs__globals__lookup_bool_option_3_p_0(Globals_12, (MR_Integer) 73, &VeryVerbose_17);
        transform_hlds__ctgc__structure_reuse__direct__dead_cell_table_remove_conditionals_2_p_0(RemainingDeadCellTable_15, &DeadCellTable_25);
        succeeded = transform_hlds__ctgc__structure_reuse__direct__dead_cell_table_is_empty_1_p_0(DeadCellTable_25);
        if (succeeded)
        {
          MR_Word StdErr_34;

          mercury__io__stderr_stream_3_p_0(&StdErr_34);
          libs__file_util__maybe_write_string_5_p_0(StdErr_34, VeryVerbose_17, (MR_String) "% No cells to be cached/freed.\n");
          *STATE_VARIABLE_Goal_19 = STATE_VARIABLE_Goal_20_20;
        }
        else
        {
          MR_Word StdErr_35;

          mercury__io__stderr_stream_3_p_0(&StdErr_35);
          libs__file_util__maybe_write_string_5_p_0(StdErr_35, VeryVerbose_17, (MR_String) "% Marking cacheable/freeable cells.\n");
          transform_hlds__ctgc__structure_reuse__direct__choose_reuse__check_for_cell_caching_2_3_p_0(DeadCellTable_25, STATE_VARIABLE_Goal_20_20, STATE_VARIABLE_Goal_19);
        }
      }
      break;
  }
}

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__check_for_cell_caching_2_3_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_STATE_VARIABLE_Case_11;

  transform_hlds__ctgc__structure_reuse__direct__choose_reuse__check_for_cell_caching_in_case_3_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv2_STATE_VARIABLE_Case_11);
  *wrapper_arg_2 = ((MR_Box) (conv2_STATE_VARIABLE_Case_11));
}

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__check_for_cell_caching_2_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_STATE_VARIABLE_Goal_49;

  transform_hlds__ctgc__structure_reuse__direct__choose_reuse__check_for_cell_caching_2_3_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv1_STATE_VARIABLE_Goal_49);
  *wrapper_arg_2 = ((MR_Box) (conv1_STATE_VARIABLE_Goal_49));
}

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__check_for_cell_caching_2_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_Goal_49;

  transform_hlds__ctgc__structure_reuse__direct__choose_reuse__check_for_cell_caching_2_3_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv0_STATE_VARIABLE_Goal_49);
  *wrapper_arg_2 = ((MR_Box) (conv0_STATE_VARIABLE_Goal_49));
}

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__check_for_cell_caching_2_3_p_0(
  MR_Word DeadCellTable_4,
  MR_Word STATE_VARIABLE_Goal_0_48,
  MR_Word * STATE_VARIABLE_Goal_49)
{
  MR_bool succeeded;
  MR_Word GoalExpr0_6 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Goal_0_48, (MR_Integer) 0))));
  MR_Word GoalInfo0_7 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Goal_0_48, (MR_Integer) 1))));
  MR_Word GoalInfo_14;
  MR_Word GoalExpr_15;

  switch (MR_tag((MR_Word) GoalExpr0_6)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        GoalExpr_15 = GoalExpr0_6;
        GoalInfo_14 = GoalInfo0_7;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word A_8 = ((MR_Word) ((MR_hl_field(1, GoalExpr0_6, (MR_Integer) 0))));
        MR_Word B_9 = ((MR_Word) ((MR_hl_field(1, GoalExpr0_6, (MR_Integer) 1))));
        MR_Word C_10 = ((MR_Word) ((MR_hl_field(1, GoalExpr0_6, (MR_Integer) 2))));
        MR_Word Unification0_11 = ((MR_Word) ((MR_hl_field(1, GoalExpr0_6, (MR_Integer) 3))));
        MR_Word D_12 = ((MR_Word) ((MR_hl_field(1, GoalExpr0_6, (MR_Integer) 4))));
        MR_Word Unification_13;
        MR_Word Var_72;
        MR_Word ConsId_73;
        MR_Word Args_74;
        MR_Word ArgModes_75;
        MR_Word CanFail_76;
        MR_Word Condition_78;
        MR_Word Var_80;

        succeeded = ((MR_tag((MR_Word) Unification0_11)) == (MR_Integer) 1);
        if (succeeded)
        {
          Var_72 = ((MR_Word) ((MR_hl_field(1, Unification0_11, (MR_Integer) 0))));
          ConsId_73 = ((MR_Word) ((MR_hl_field(1, Unification0_11, (MR_Integer) 1))));
          Args_74 = ((MR_Word) ((MR_hl_field(1, Unification0_11, (MR_Integer) 2))));
          ArgModes_75 = ((MR_Word) ((MR_hl_field(1, Unification0_11, (MR_Integer) 3))));
          CanFail_76 = ((((MR_Unsigned) ((MR_hl_field(1, Unification0_11, (MR_Integer) 4))) >> 1)) & (MR_Integer) 1);
          Var_80 = transform_hlds__smm_common__program_point_init_1_f_0(GoalInfo0_7);
          succeeded = transform_hlds__ctgc__structure_reuse__direct__dead_cell_table_search_2_f_0(Var_80, DeadCellTable_4, &Condition_78);
          if (succeeded)
          {
            succeeded = transform_hlds__ctgc__structure_reuse__domain__reuse_condition_is_conditional_1_p_0(Condition_78);
            succeeded = !(succeeded);
          }
        }
        if (succeeded)
        {
          {
            Unification_13 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Unification_13, 0) = ((MR_Box) (Var_72));
            MR_hl_field(1, Unification_13, 1) = ((MR_Box) (ConsId_73));
            MR_hl_field(1, Unification_13, 2) = ((MR_Box) (Args_74));
            MR_hl_field(1, Unification_13, 3) = ((MR_Box) (ArgModes_75));
            MR_hl_field(1, Unification_13, 4) = (MR_Box) (((((MR_Unsigned) (CanFail_76) << 1)) | (MR_Unsigned) ((MR_Integer) 0)));
          }
          hlds__hlds_goal__goal_info_set_reuse_3_p_0((MR_Word) (MR_mkword(2, &transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_3[0])), GoalInfo0_7, &GoalInfo_14);
        }
        else
        {
          GoalInfo_14 = GoalInfo0_7;
          Unification_13 = Unification0_11;
        }
        {
          GoalExpr_15 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, GoalExpr_15, 0) = ((MR_Box) (A_8));
          MR_hl_field(1, GoalExpr_15, 1) = ((MR_Box) (B_9));
          MR_hl_field(1, GoalExpr_15, 2) = ((MR_Box) (C_10));
          MR_hl_field(1, GoalExpr_15, 3) = ((MR_Box) (Unification_13));
          MR_hl_field(1, GoalExpr_15, 4) = ((MR_Box) (D_12));
        }
      }
      break;
    case (MR_Integer) 2:
      {
        GoalExpr_15 = GoalExpr0_6;
        GoalInfo_14 = GoalInfo0_7;
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, GoalExpr0_6, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
        case (MR_Integer) 1:
          {
            GoalExpr_15 = GoalExpr0_6;
            GoalInfo_14 = GoalInfo0_7;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word Goals0_34 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_6, (MR_Integer) 2))));
            MR_Word Goals_35;
            MR_Word Var_50;
            MR_Word A_56 = ((MR_Unsigned) ((MR_hl_field(3, GoalExpr0_6, (MR_Integer) 1))) & (MR_Integer) 1);

            {
              Var_50 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_50, 0) = ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_5[5]));
              MR_hl_field(0, Var_50, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__check_for_cell_caching_2_3_p_0_1));
              MR_hl_field(0, Var_50, 2) = ((MR_Box) ((MR_Integer) 1));
              MR_hl_field(0, Var_50, 3) = ((MR_Box) (DeadCellTable_4));
            }
            mercury__list__map_3_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), Var_50, Goals0_34, &Goals_35);
            {
              GoalExpr_15 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, GoalExpr_15, 0) = ((MR_Box) ((MR_Unsigned) 2U));
              MR_hl_field(3, GoalExpr_15, 1) = (MR_Box) ((MR_Unsigned) (A_56));
              MR_hl_field(3, GoalExpr_15, 2) = ((MR_Box) (Goals_35));
            }
            GoalInfo_14 = GoalInfo0_7;
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word Var_51;
            MR_Word Goals0_57 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_6, (MR_Integer) 1))));
            MR_Word Goals_58;

            {
              Var_51 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_51, 0) = ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_5[5]));
              MR_hl_field(0, Var_51, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__check_for_cell_caching_2_3_p_0_2));
              MR_hl_field(0, Var_51, 2) = ((MR_Box) ((MR_Integer) 1));
              MR_hl_field(0, Var_51, 3) = ((MR_Box) (DeadCellTable_4));
            }
            mercury__list__map_3_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), Var_51, Goals0_57, &Goals_58);
            {
              GoalExpr_15 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, GoalExpr_15, 0) = ((MR_Box) ((MR_Unsigned) 3U));
              MR_hl_field(3, GoalExpr_15, 1) = ((MR_Box) (Goals_58));
            }
            GoalInfo_14 = GoalInfo0_7;
          }
          break;
        case (MR_Integer) 4:
          {
            MR_Word Cases0_36 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_6, (MR_Integer) 3))));
            MR_Word Cases_37;
            MR_Word Var_52;
            MR_Word A_59 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_6, (MR_Integer) 1))));
            MR_Word B_60 = ((MR_Unsigned) ((MR_hl_field(3, GoalExpr0_6, (MR_Integer) 2))) & (MR_Integer) 1);

            {
              Var_52 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_52, 0) = ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_5[6]));
              MR_hl_field(0, Var_52, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__check_for_cell_caching_2_3_p_0_3));
              MR_hl_field(0, Var_52, 2) = ((MR_Box) ((MR_Integer) 1));
              MR_hl_field(0, Var_52, 3) = ((MR_Box) (DeadCellTable_4));
            }
            mercury__list__map_3_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0), Var_52, Cases0_36, &Cases_37);
            {
              GoalExpr_15 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, GoalExpr_15, 0) = ((MR_Box) ((MR_Unsigned) 4U));
              MR_hl_field(3, GoalExpr_15, 1) = ((MR_Box) (A_59));
              MR_hl_field(3, GoalExpr_15, 2) = (MR_Box) ((MR_Unsigned) (B_60));
              MR_hl_field(3, GoalExpr_15, 3) = ((MR_Box) (Cases_37));
            }
            GoalInfo_14 = GoalInfo0_7;
          }
          break;
        case (MR_Integer) 5:
          {
            MR_Word ScopeGoal0_39 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_6, (MR_Integer) 2))));
            MR_Word ScopeGoal_40;
            MR_Word A_61 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_6, (MR_Integer) 1))));

            transform_hlds__ctgc__structure_reuse__direct__choose_reuse__check_for_cell_caching_2_3_p_0(DeadCellTable_4, ScopeGoal0_39, &ScopeGoal_40);
            {
              GoalExpr_15 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, GoalExpr_15, 0) = ((MR_Box) ((MR_Unsigned) 5U));
              MR_hl_field(3, GoalExpr_15, 1) = ((MR_Box) (A_61));
              MR_hl_field(3, GoalExpr_15, 2) = ((MR_Box) (ScopeGoal_40));
            }
            GoalInfo_14 = GoalInfo0_7;
          }
          break;
        case (MR_Integer) 6:
          {
            MR_Word CondGoal0_41 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_6, (MR_Integer) 2))));
            MR_Word ThenGoal0_42 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_6, (MR_Integer) 3))));
            MR_Word ElseGoal0_43 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_6, (MR_Integer) 4))));
            MR_Word CondGoal_44;
            MR_Word ThenGoal_45;
            MR_Word ElseGoal_46;
            MR_Word A_62 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_6, (MR_Integer) 1))));

            transform_hlds__ctgc__structure_reuse__direct__choose_reuse__check_for_cell_caching_2_3_p_0(DeadCellTable_4, CondGoal0_41, &CondGoal_44);
            transform_hlds__ctgc__structure_reuse__direct__choose_reuse__check_for_cell_caching_2_3_p_0(DeadCellTable_4, ThenGoal0_42, &ThenGoal_45);
            transform_hlds__ctgc__structure_reuse__direct__choose_reuse__check_for_cell_caching_2_3_p_0(DeadCellTable_4, ElseGoal0_43, &ElseGoal_46);
            {
              GoalExpr_15 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, GoalExpr_15, 0) = ((MR_Box) ((MR_Unsigned) 6U));
              MR_hl_field(3, GoalExpr_15, 1) = ((MR_Box) (A_62));
              MR_hl_field(3, GoalExpr_15, 2) = ((MR_Box) (CondGoal_44));
              MR_hl_field(3, GoalExpr_15, 3) = ((MR_Box) (ThenGoal_45));
              MR_hl_field(3, GoalExpr_15, 4) = ((MR_Box) (ElseGoal_46));
            }
            GoalInfo_14 = GoalInfo0_7;
          }
          break;
        case (MR_Integer) 7:
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.ctgc.structure_reuse.direct.choose_reuse.check_for_cell_caching_2\'/3", (MR_String) "shorthand");
            return;
          }
          break;
      }
      break;
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_Goal_49 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_15));
    MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo_14));
  }
}

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__choose_reuse_in_goal_7_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv4_HeadVar__5_5;

  transform_hlds__ctgc__structure_reuse__domain__reuse_as_least_upper_bound_5_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv4_HeadVar__5_5);
  *wrapper_arg_3 = ((MR_Box) (conv4_HeadVar__5_5));
}

static MR_Box MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__choose_reuse_in_goal_7_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv3_LambdaHeadVar__2_13;

  conv3_LambdaHeadVar__2_13 = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__IntroducedFrom__func__match_get_condition__325__1_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv3_LambdaHeadVar__2_13));
  return wrapper_arg_2;
}

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__choose_reuse_in_goal_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_STATE_VARIABLE_DeadCellTable_7;

  transform_hlds__ctgc__structure_reuse__direct__choose_reuse__remove_deconstruction_from_dead_cell_table_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_STATE_VARIABLE_DeadCellTable_7);
  *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_DeadCellTable_7));
}

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__choose_reuse_in_goal_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_Result_6;

  transform_hlds__ctgc__structure_reuse__direct__choose_reuse__reverse_compare_matches_value_degree_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_Result_6);
  *wrapper_arg_3 = ((MR_Box) (conv0_Result_6));
}

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__choose_reuse_in_goal_7_p_0(
  MR_Word Background_8,
  MR_Word STATE_VARIABLE_DeadCellTable_0_25,
  MR_Word * STATE_VARIABLE_DeadCellTable_26,
  MR_Word STATE_VARIABLE_Goal_0_27,
  MR_Word * STATE_VARIABLE_Goal_28,
  MR_Word STATE_VARIABLE_ReuseAs_0_29,
  MR_Word * STATE_VARIABLE_ReuseAs_30)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word ModuleInfo_12 = ((MR_Word) ((MR_hl_field(0, Background_8, (MR_Integer) 1))));
    MR_Word Globals_13;
    MR_Word VeryVerbose_14;
    MR_Word MatchTable_15;
    MR_Word Var_66;

    // setup for model_det tailcalls optimized into a loop
    ;
    hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_12, &Globals_13);
    libs__globals__lookup_bool_option_3_p_0(Globals_13, (MR_Integer) 73, &VeryVerbose_14);
    Var_66 = mercury__multi_map__init_0_f_0((MR_Word) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_1[0]), (MR_Word) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_match_0));
    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__compute_match_table_with_continuation_6_p_0(Background_8, STATE_VARIABLE_DeadCellTable_0_25, STATE_VARIABLE_Goal_0_27, (MR_Word) ((MR_Unsigned) 0U), Var_66, &MatchTable_15);
    succeeded = mercury__multi_map__is_empty_1_p_0((MR_Word) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_1[0]), (MR_Word) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_match_0), MatchTable_15);
    if (succeeded)
    {
      *STATE_VARIABLE_ReuseAs_30 = STATE_VARIABLE_ReuseAs_0_29;
      *STATE_VARIABLE_Goal_28 = STATE_VARIABLE_Goal_0_27;
      *STATE_VARIABLE_DeadCellTable_26 = STATE_VARIABLE_DeadCellTable_0_25;
    }
    else
    {
      MR_Word Match_16;
      MR_Word Var_63;
      MR_Word Matches_69;
      MR_Word Sorted_70;

      mercury__multi_map__values_2_p_0((MR_Word) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_1[0]), (MR_Word) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_match_0), MatchTable_15, &Matches_69);
      mercury__list__sort_3_p_0((MR_Word) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_match_0), (MR_Word) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_2[18]), Matches_69, &Sorted_70);
      if ((Sorted_70 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          mercury__require__unexpected_2_p_0((MR_String) "function \140transform_hlds.ctgc.structure_reuse.direct.choose_reuse.highest_match_degree_ratio\'/1", (MR_String) "empty multi_map");
          return;
        }
      else
        Match_16 = ((MR_Word) ((MR_hl_field(1, Sorted_70, (MR_Integer) 0))));
      Var_63 = ((MR_Word) ((MR_hl_field(0, Match_16, (MR_Integer) 1))));
      if ((Var_63 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        *STATE_VARIABLE_DeadCellTable_26 = STATE_VARIABLE_DeadCellTable_0_25;
        *STATE_VARIABLE_Goal_28 = STATE_VARIABLE_Goal_0_27;
        *STATE_VARIABLE_ReuseAs_30 = STATE_VARIABLE_ReuseAs_0_29;
      }
      else
      {
        MR_Word ProcInfo_23;
        MR_Integer MaxConditions_24;
        MR_Word STATE_VARIABLE_Goal_39_39;
        MR_Word STATE_VARIABLE_DeadCellTable_40_40;
        MR_Word Var_41;
        MR_Word STATE_VARIABLE_ReuseAs_42_42;
        MR_Word STATE_VARIABLE_Goal_45_45;
        MR_Word STATE_VARIABLE_ReuseAs_46_46;
        MR_Word DeconSpecs_77;
        MR_Word Conditions_85;
        MR_Word Var_88;
        MR_Box conv2_STATE_VARIABLE_DeadCellTable_40_40;
        MR_Integer Var_44;
        MR_Word next_value_of_STATE_VARIABLE_DeadCellTable_0_25;
        MR_Word next_value_of_STATE_VARIABLE_Goal_0_27;
        MR_Word next_value_of_STATE_VARIABLE_ReuseAs_0_29;

        switch (VeryVerbose_14) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word StdErr_20;

              mercury__io__stderr_stream_3_p_0(&StdErr_20);
              mercury__io__write_string_4_p_0(StdErr_20, (MR_String) "% Reuse results: \n");
              transform_hlds__ctgc__structure_reuse__direct__choose_reuse__dump_match_table_5_p_0(StdErr_20, MatchTable_15, Match_16);
            }
            break;
        }
        transform_hlds__ctgc__structure_reuse__direct__choose_reuse__annotate_reuses_in_goal_4_p_0(Background_8, Match_16, STATE_VARIABLE_Goal_0_27, &STATE_VARIABLE_Goal_39_39);
        DeconSpecs_77 = ((MR_Word) ((MR_hl_field(0, Match_16, (MR_Integer) 0))));
        mercury__list__foldl_4_p_0((MR_Word) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_deconstruction_spec_0), (MR_Word) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_2[0]), (MR_Word) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_2[19]), DeconSpecs_77, ((MR_Box) (STATE_VARIABLE_DeadCellTable_0_25)), &conv2_STATE_VARIABLE_DeadCellTable_40_40);
        STATE_VARIABLE_DeadCellTable_40_40 = ((MR_Word) (conv2_STATE_VARIABLE_DeadCellTable_40_40));
        ProcInfo_23 = ((MR_Word) ((MR_hl_field(0, Background_8, (MR_Integer) 2))));
        Var_88 = ((MR_Word) ((MR_hl_field(0, Match_16, (MR_Integer) 0))));
        Conditions_85 = mercury__list__map_2_f_0((MR_Word) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_deconstruction_spec_0), (MR_Word) (&transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_as_0), (MR_Word) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_2[20]), Var_88);
        if ((Conditions_85 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            mercury__require__unexpected_2_p_0((MR_String) "function \140transform_hlds.ctgc.structure_reuse.direct.choose_reuse.match_get_condition\'/2", (MR_String) "no reuse conditions");
            return;
          }
        else
        {
          MR_Word First_86 = ((MR_Word) ((MR_hl_field(1, Conditions_85, (MR_Integer) 0))));
          MR_Word Rest_87 = ((MR_Word) ((MR_hl_field(1, Conditions_85, (MR_Integer) 1))));
          MR_Word Var_89;
          MR_Word Var_90 = ((MR_Word) ((MR_hl_field(0, Background_8, (MR_Integer) 1))));
          MR_Word Var_97 = ((MR_Word) ((MR_hl_field(0, Background_8, (MR_Integer) 2))));
          MR_Box conv5_Var_41;

          {
            Var_89 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_89, 0) = ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_6[1]));
            MR_hl_field(0, Var_89, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__choose_reuse_in_goal_7_p_0_4));
            MR_hl_field(0, Var_89, 2) = ((MR_Box) ((MR_Integer) 2));
            MR_hl_field(0, Var_89, 3) = ((MR_Box) (Var_90));
            MR_hl_field(0, Var_89, 4) = ((MR_Box) (Var_97));
          }
          mercury__list__foldl_4_p_0((MR_Word) (&transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_as_0), (MR_Word) (&transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_as_0), Var_89, Rest_87, ((MR_Box) (First_86)), &conv5_Var_41);
          Var_41 = ((MR_Word) (conv5_Var_41));
        }
        transform_hlds__ctgc__structure_reuse__domain__reuse_as_least_upper_bound_5_p_0(ModuleInfo_12, ProcInfo_23, Var_41, STATE_VARIABLE_ReuseAs_0_29, &STATE_VARIABLE_ReuseAs_42_42);
        libs__globals__lookup_int_option_3_p_0(Globals_13, (MR_Integer) 514, &MaxConditions_24);
        Var_44 = transform_hlds__ctgc__structure_reuse__domain__reuse_as_count_conditions_1_f_0(STATE_VARIABLE_ReuseAs_42_42);
        succeeded = (Var_44 > MaxConditions_24);
        if (succeeded)
        {
          STATE_VARIABLE_Goal_45_45 = STATE_VARIABLE_Goal_0_27;
          STATE_VARIABLE_ReuseAs_46_46 = STATE_VARIABLE_ReuseAs_0_29;
        }
        else
        {
          STATE_VARIABLE_ReuseAs_46_46 = STATE_VARIABLE_ReuseAs_42_42;
          STATE_VARIABLE_Goal_45_45 = STATE_VARIABLE_Goal_39_39;
        }
        // direct tailcall eliminated
        ;
        next_value_of_STATE_VARIABLE_DeadCellTable_0_25 = STATE_VARIABLE_DeadCellTable_40_40;
        next_value_of_STATE_VARIABLE_Goal_0_27 = STATE_VARIABLE_Goal_45_45;
        next_value_of_STATE_VARIABLE_ReuseAs_0_29 = STATE_VARIABLE_ReuseAs_46_46;
        STATE_VARIABLE_DeadCellTable_0_25 = next_value_of_STATE_VARIABLE_DeadCellTable_0_25;
        STATE_VARIABLE_Goal_0_27 = next_value_of_STATE_VARIABLE_Goal_0_27;
        STATE_VARIABLE_ReuseAs_0_29 = next_value_of_STATE_VARIABLE_ReuseAs_0_29;
        continue;
      }
    }
    break;
  }
}

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__dump_match_table_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  transform_hlds__ctgc__structure_reuse__direct__choose_reuse__dump_match_5_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_String) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
}

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__dump_match_table_5_p_0(
  MR_Word Stream_6,
  MR_Word MatchTable_7,
  MR_Word HighestMatch_8)
{
  MR_bool succeeded;
  MR_String Start_21;
  MR_Integer Remainder_22;
  MR_String Line_23;
  MR_Integer Var_24;
  MR_Integer Var_26;
  MR_String Var_28;
  MR_String Start_82;
  MR_Integer Remainder_83;
  MR_String Line_84;
  MR_Integer Var_85;
  MR_Integer Var_87;
  MR_String Var_89;

  Start_21 = mercury__string__append_2_f_0((MR_String) "%---", (MR_String) "reuse table");
  Var_26 = mercury__string__count_codepoints_1_f_0(Start_21);
  Var_24 = (MR_Integer) ((MR_Unsigned) 79 - (MR_Unsigned) Var_26);
  Remainder_22 = (MR_Integer) ((MR_Unsigned) Var_24 - (MR_Unsigned) 1);
  Var_28 = mercury__string__duplicate_char_2_f_0((MR_Char) 45, Remainder_22);
  Line_23 = mercury__string__f_43_43_2_f_0(Start_21, Var_28);
  mercury__io__write_string_4_p_0(Stream_6, Line_23);
  mercury__io__write_string_4_p_0(Stream_6, (MR_String) "%\n");
  mercury__io__write_string_4_p_0(Stream_6, (MR_String) "%\t|\tvar\t|\tvalue\t|\tdegree\n");
  transform_hlds__ctgc__structure_reuse__direct__choose_reuse__dump_match_5_p_0(Stream_6, (MR_String) "%-sel- ", HighestMatch_8);
  succeeded = mercury__multi_map__is_empty_1_p_0((MR_Word) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_1[0]), (MR_Word) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_match_0), MatchTable_7);
  if (succeeded)
  {
    MR_String Start_46;
    MR_Integer Remainder_47;
    MR_String Line_48;
    MR_Integer Var_49;
    MR_Integer Var_51;
    MR_String Var_53;

    Start_46 = mercury__string__append_2_f_0((MR_String) "%---", (MR_String) "empty match table");
    Var_51 = mercury__string__count_codepoints_1_f_0(Start_46);
    Var_49 = (MR_Integer) ((MR_Unsigned) 79 - (MR_Unsigned) Var_51);
    Remainder_47 = (MR_Integer) ((MR_Unsigned) Var_49 - (MR_Unsigned) 1);
    Var_53 = mercury__string__duplicate_char_2_f_0((MR_Char) 45, Remainder_47);
    Line_48 = mercury__string__f_43_43_2_f_0(Start_46, Var_53);
    mercury__io__write_string_4_p_0(Stream_6, Line_48);
    mercury__io__write_string_4_p_0(Stream_6, (MR_String) "%\n");
  }
  else
  {
    MR_Word Matches_32;
    MR_Word Var_36;
    MR_String Start_58;
    MR_Integer Remainder_59;
    MR_String Line_60;
    MR_Integer Var_61;
    MR_Integer Var_63;
    MR_String Var_65;
    MR_String Start_70;
    MR_Integer Remainder_71;
    MR_String Line_72;
    MR_Integer Var_73;
    MR_Integer Var_75;
    MR_String Var_77;
    MR_Box conv0_STATE_VARIABLE_IO_16_37;

    Start_58 = mercury__string__append_2_f_0((MR_String) "%---", (MR_String) "full table (start)");
    Var_63 = mercury__string__count_codepoints_1_f_0(Start_58);
    Var_61 = (MR_Integer) ((MR_Unsigned) 79 - (MR_Unsigned) Var_63);
    Remainder_59 = (MR_Integer) ((MR_Unsigned) Var_61 - (MR_Unsigned) 1);
    Var_65 = mercury__string__duplicate_char_2_f_0((MR_Char) 45, Remainder_59);
    Line_60 = mercury__string__f_43_43_2_f_0(Start_58, Var_65);
    mercury__io__write_string_4_p_0(Stream_6, Line_60);
    mercury__io__write_string_4_p_0(Stream_6, (MR_String) "%\n");
    mercury__multi_map__values_2_p_0((MR_Word) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_1[0]), (MR_Word) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_match_0), MatchTable_7, &Matches_32);
    {
      Var_36 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_36, 0) = ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_6[2]));
      MR_hl_field(0, Var_36, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__dump_match_table_5_p_0_1));
      MR_hl_field(0, Var_36, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(0, Var_36, 3) = ((MR_Box) (Stream_6));
      MR_hl_field(0, Var_36, 4) = ((MR_Box) ((MR_String) "%-----"));
    }
    mercury__list__foldl_4_p_2((MR_Word) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_match_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_36, Matches_32, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_16_37);
    Start_70 = mercury__string__append_2_f_0((MR_String) "%---", (MR_String) "full table (end)");
    Var_75 = mercury__string__count_codepoints_1_f_0(Start_70);
    Var_73 = (MR_Integer) ((MR_Unsigned) 79 - (MR_Unsigned) Var_75);
    Remainder_71 = (MR_Integer) ((MR_Unsigned) Var_73 - (MR_Unsigned) 1);
    Var_77 = mercury__string__duplicate_char_2_f_0((MR_Char) 45, Remainder_71);
    Line_72 = mercury__string__f_43_43_2_f_0(Start_70, Var_77);
    mercury__io__write_string_4_p_0(Stream_6, Line_72);
    mercury__io__write_string_4_p_0(Stream_6, (MR_String) "%\n");
  }
  Start_82 = mercury__string__append_2_f_0((MR_String) "%---", (MR_String) "");
  Var_87 = mercury__string__count_codepoints_1_f_0(Start_82);
  Var_85 = (MR_Integer) ((MR_Unsigned) 79 - (MR_Unsigned) Var_87);
  Remainder_83 = (MR_Integer) ((MR_Unsigned) Var_85 - (MR_Unsigned) 1);
  Var_89 = mercury__string__duplicate_char_2_f_0((MR_Char) 45, Remainder_83);
  Line_84 = mercury__string__f_43_43_2_f_0(Start_82, Var_89);
  mercury__io__write_string_4_p_0(Stream_6, Line_84);
  mercury__io__write_string_4_p_0(Stream_6, (MR_String) "%\n");
}

static MR_Box MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__dump_match_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_LambdaHeadVar__2_13;

  conv0_LambdaHeadVar__2_13 = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__IntroducedFrom__func__match_get_dead_var__295__1_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_13));
  return wrapper_arg_2;
}

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__dump_match_5_p_0(
  MR_Word Stream_6,
  MR_String Prefix_7,
  MR_Word Match_8)
{
  MR_bool succeeded;
  MR_Integer MatchVarInt_10;
  MR_Float Val_11;
  MR_Integer Degree_12;
  MR_Word Var_15;
  MR_String Var_46;
  MR_String Var_66;
  MR_Word DeadVars0_75;
  MR_Word DeadVars_76;
  MR_Word Var_78 = ((MR_Word) ((MR_hl_field(0, Match_8, (MR_Integer) 0))));

  DeadVars0_75 = mercury__list__map_2_f_0((MR_Word) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_deconstruction_spec_0), (MR_Word) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_1[0]), (MR_Word) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_2[17]), Var_78);
  DeadVars_76 = mercury__list__remove_dups_1_f_0((MR_Word) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_1[0]), DeadVars0_75);
  if ((DeadVars_76 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      mercury__require__unexpected_2_p_0((MR_String) "function \140transform_hlds.ctgc.structure_reuse.direct.choose_reuse.match_get_dead_var\'/1", (MR_String) "empty list of vars");
      return;
    }
  else
  {
    MR_Word Rest_77;

    Var_15 = ((MR_Word) ((MR_hl_field(1, DeadVars_76, (MR_Integer) 0))));
    Rest_77 = ((MR_Word) ((MR_hl_field(1, DeadVars_76, (MR_Integer) 1))));
    if (!((Rest_77 == (MR_Word) ((MR_Unsigned) 0U))))
      {
        mercury__require__unexpected_2_p_0((MR_String) "function \140transform_hlds.ctgc.structure_reuse.direct.choose_reuse.match_get_dead_var\'/1", (MR_String) "too many dead vars");
        return;
      }
  }
  MatchVarInt_10 = mercury__term__var_to_int_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_15);
  mercury__io__write_string_4_p_0(Stream_6, Prefix_7);
  mercury__io__write_string_4_p_0(Stream_6, (MR_String) "\t|\t");
  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_3[1]), MatchVarInt_10, &Var_46);
  mercury__io__write_string_4_p_0(Stream_6, Var_46);
  mercury__io__write_string_4_p_0(Stream_6, (MR_String) "\t|\t");
  Val_11 = MR_unbox_float((MR_hl_field(0, Match_8, (MR_Integer) 2)));
  succeeded = (Val_11 == ((MR_Float) 0.0000000000000000));
  if (succeeded)
    mercury__io__write_string_4_p_0(Stream_6, (MR_String) "-");
  else
  {
    MR_String Var_54;

    mercury__string__format__format_float_component_nowidth_prec_5_p_0((MR_Word) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_3[1]), (MR_Integer) 2, (MR_Integer) 2, Val_11, &Var_54);
    mercury__io__write_string_4_p_0(Stream_6, Var_54);
  }
  Degree_12 = ((MR_Integer) ((MR_hl_field(0, Match_8, (MR_Integer) 3))));
  mercury__io__write_string_4_p_0(Stream_6, (MR_String) "\t|\t");
  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_3[1]), Degree_12, &Var_66);
  mercury__io__write_string_4_p_0(Stream_6, Var_66);
  mercury__io__write_string_4_p_0(Stream_6, (MR_String) "\t");
  transform_hlds__ctgc__structure_reuse__direct__choose_reuse__dump_match_details_4_p_0(Stream_6, Match_8);
}

static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__dump_match_details_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = transform_hlds__ctgc__structure_reuse__domain__reuse_as_all_unconditional_reuses_1_p_0(((MR_Word) (wrapper_arg_1)));
  return succeeded;
}

static MR_Box MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__dump_match_details_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_LambdaHeadVar__2_17;

  conv0_LambdaHeadVar__2_17 = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__IntroducedFrom__func__dump_match_details__1385__1_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_17));
  return wrapper_arg_2;
}

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__dump_match_details_4_p_0(
  MR_Word Stream_5,
  MR_Word Match_6)
{
  MR_bool succeeded;
  MR_Word Conds_8;
  MR_String CondsString_10;
  MR_Integer D_11;
  MR_Integer C_12;
  MR_Word Var_18 = ((MR_Word) ((MR_hl_field(0, Match_6, (MR_Integer) 0))));
  MR_Word Var_20;
  MR_Word Var_21;
  MR_String Var_52;
  MR_String Var_62;

  Conds_8 = mercury__list__map_2_f_0((MR_Word) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_deconstruction_spec_0), (MR_Word) (&transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_as_0), (MR_Word) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_2[15]), Var_18);
  succeeded = mercury__list__all_true_2_p_0((MR_Word) (&transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_as_0), (MR_Word) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_2[16]), Conds_8);
  if (succeeded)
    CondsString_10 = (MR_String) "A";
  else
    CondsString_10 = (MR_String) "C";
  Var_20 = ((MR_Word) ((MR_hl_field(0, Match_6, (MR_Integer) 0))));
  D_11 = mercury__list__length_1_f_0((MR_Word) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_deconstruction_spec_0), Var_20);
  Var_21 = ((MR_Word) ((MR_hl_field(0, Match_6, (MR_Integer) 1))));
  C_12 = mercury__list__length_1_f_0((MR_Word) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_construction_spec_0), Var_21);
  mercury__io__write_string_4_p_0(Stream_5, (MR_String) "d: ");
  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_3[1]), D_11, &Var_52);
  mercury__io__write_string_4_p_0(Stream_5, Var_52);
  mercury__io__write_string_4_p_0(Stream_5, (MR_String) ", c: ");
  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_3[1]), C_12, &Var_62);
  mercury__io__write_string_4_p_0(Stream_5, Var_62);
  mercury__io__write_string_4_p_0(Stream_5, (MR_String) ", Co: ");
  mercury__io__write_string_4_p_0(Stream_5, CondsString_10);
  mercury__io__write_string_4_p_0(Stream_5, (MR_String) "\n");
}

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__annotate_reuses_in_goal_4_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_STATE_VARIABLE_Case_13;

  transform_hlds__ctgc__structure_reuse__direct__choose_reuse__annotate_reuses_in_case_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), &conv2_STATE_VARIABLE_Case_13);
  *wrapper_arg_2 = ((MR_Box) (conv2_STATE_VARIABLE_Case_13));
}

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__annotate_reuses_in_goal_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_STATE_VARIABLE_Goal_52;

  transform_hlds__ctgc__structure_reuse__direct__choose_reuse__annotate_reuses_in_goal_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), &conv1_STATE_VARIABLE_Goal_52);
  *wrapper_arg_2 = ((MR_Box) (conv1_STATE_VARIABLE_Goal_52));
}

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__annotate_reuses_in_goal_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_Goal_52;

  transform_hlds__ctgc__structure_reuse__direct__choose_reuse__annotate_reuses_in_goal_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), &conv0_STATE_VARIABLE_Goal_52);
  *wrapper_arg_2 = ((MR_Box) (conv0_STATE_VARIABLE_Goal_52));
}

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__annotate_reuses_in_goal_4_p_0(
  MR_Word Background_5,
  MR_Word Match_6,
  MR_Word STATE_VARIABLE_Goal_0_51,
  MR_Word * STATE_VARIABLE_Goal_52)
{
  MR_Word GoalExpr0_8 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Goal_0_51, (MR_Integer) 0))));
  MR_Word GoalInfo0_9 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Goal_0_51, (MR_Integer) 1))));
  MR_Word GoalExpr_15;
  MR_Word GoalInfo_16;

  switch (MR_tag((MR_Word) GoalExpr0_8)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        GoalExpr_15 = GoalExpr0_8;
        GoalInfo_16 = GoalInfo0_9;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word Unification_13 = ((MR_Word) ((MR_hl_field(1, GoalExpr0_8, (MR_Integer) 3))));

        GoalExpr_15 = GoalExpr0_8;
        transform_hlds__ctgc__structure_reuse__direct__choose_reuse__annotate_reuse_for_unification_5_p_0(Background_5, Match_6, Unification_13, GoalInfo0_9, &GoalInfo_16);
      }
      break;
    case (MR_Integer) 2:
      {
        GoalExpr_15 = GoalExpr0_8;
        GoalInfo_16 = GoalInfo0_9;
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, GoalExpr0_8, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
        case (MR_Integer) 1:
          {
            GoalExpr_15 = GoalExpr0_8;
            GoalInfo_16 = GoalInfo0_9;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word A_35 = ((MR_Unsigned) ((MR_hl_field(3, GoalExpr0_8, (MR_Integer) 1))) & (MR_Integer) 1);
            MR_Word Goals0_36 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_8, (MR_Integer) 2))));
            MR_Word Goals_37;
            MR_Word Var_53;

            {
              Var_53 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_53, 0) = ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_4[2]));
              MR_hl_field(0, Var_53, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__annotate_reuses_in_goal_4_p_0_1));
              MR_hl_field(0, Var_53, 2) = ((MR_Box) ((MR_Integer) 2));
              MR_hl_field(0, Var_53, 3) = ((MR_Box) (Background_5));
              MR_hl_field(0, Var_53, 4) = ((MR_Box) (Match_6));
            }
            mercury__list__map_3_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), Var_53, Goals0_36, &Goals_37);
            {
              GoalExpr_15 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, GoalExpr_15, 0) = ((MR_Box) ((MR_Unsigned) 2U));
              MR_hl_field(3, GoalExpr_15, 1) = (MR_Box) ((MR_Unsigned) (A_35));
              MR_hl_field(3, GoalExpr_15, 2) = ((MR_Box) (Goals_37));
            }
            GoalInfo_16 = GoalInfo0_9;
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word Var_54;
            MR_Word Goals0_59 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_8, (MR_Integer) 1))));
            MR_Word Goals_60;

            {
              Var_54 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_54, 0) = ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_4[2]));
              MR_hl_field(0, Var_54, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__annotate_reuses_in_goal_4_p_0_2));
              MR_hl_field(0, Var_54, 2) = ((MR_Box) ((MR_Integer) 2));
              MR_hl_field(0, Var_54, 3) = ((MR_Box) (Background_5));
              MR_hl_field(0, Var_54, 4) = ((MR_Box) (Match_6));
            }
            mercury__list__map_3_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), Var_54, Goals0_59, &Goals_60);
            {
              GoalExpr_15 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, GoalExpr_15, 0) = ((MR_Box) ((MR_Unsigned) 3U));
              MR_hl_field(3, GoalExpr_15, 1) = ((MR_Box) (Goals_60));
            }
            GoalInfo_16 = GoalInfo0_9;
          }
          break;
        case (MR_Integer) 4:
          {
            MR_Word B_38 = ((MR_Unsigned) ((MR_hl_field(3, GoalExpr0_8, (MR_Integer) 2))) & (MR_Integer) 1);
            MR_Word Cases0_39 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_8, (MR_Integer) 3))));
            MR_Word Cases_40;
            MR_Word Var_55;
            MR_Word A_61 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_8, (MR_Integer) 1))));

            {
              Var_55 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_55, 0) = ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_4[3]));
              MR_hl_field(0, Var_55, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__annotate_reuses_in_goal_4_p_0_3));
              MR_hl_field(0, Var_55, 2) = ((MR_Box) ((MR_Integer) 2));
              MR_hl_field(0, Var_55, 3) = ((MR_Box) (Background_5));
              MR_hl_field(0, Var_55, 4) = ((MR_Box) (Match_6));
            }
            mercury__list__map_3_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0), Var_55, Cases0_39, &Cases_40);
            {
              GoalExpr_15 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, GoalExpr_15, 0) = ((MR_Box) ((MR_Unsigned) 4U));
              MR_hl_field(3, GoalExpr_15, 1) = ((MR_Box) (A_61));
              MR_hl_field(3, GoalExpr_15, 2) = (MR_Box) ((MR_Unsigned) (B_38));
              MR_hl_field(3, GoalExpr_15, 3) = ((MR_Box) (Cases_40));
            }
            GoalInfo_16 = GoalInfo0_9;
          }
          break;
        case (MR_Integer) 5:
          {
            MR_Word ScopeGoal0_42 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_8, (MR_Integer) 2))));
            MR_Word ScopeGoal_43;
            MR_Word A_62 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_8, (MR_Integer) 1))));

            transform_hlds__ctgc__structure_reuse__direct__choose_reuse__annotate_reuses_in_goal_4_p_0(Background_5, Match_6, ScopeGoal0_42, &ScopeGoal_43);
            {
              GoalExpr_15 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, GoalExpr_15, 0) = ((MR_Box) ((MR_Unsigned) 5U));
              MR_hl_field(3, GoalExpr_15, 1) = ((MR_Box) (A_62));
              MR_hl_field(3, GoalExpr_15, 2) = ((MR_Box) (ScopeGoal_43));
            }
            GoalInfo_16 = GoalInfo0_9;
          }
          break;
        case (MR_Integer) 6:
          {
            MR_Word CondGoal0_44 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_8, (MR_Integer) 2))));
            MR_Word ThenGoal0_45 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_8, (MR_Integer) 3))));
            MR_Word ElseGoal0_46 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_8, (MR_Integer) 4))));
            MR_Word CondGoal_47;
            MR_Word ThenGoal_48;
            MR_Word ElseGoal_49;
            MR_Word A_63 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_8, (MR_Integer) 1))));

            transform_hlds__ctgc__structure_reuse__direct__choose_reuse__annotate_reuses_in_goal_4_p_0(Background_5, Match_6, CondGoal0_44, &CondGoal_47);
            transform_hlds__ctgc__structure_reuse__direct__choose_reuse__annotate_reuses_in_goal_4_p_0(Background_5, Match_6, ThenGoal0_45, &ThenGoal_48);
            transform_hlds__ctgc__structure_reuse__direct__choose_reuse__annotate_reuses_in_goal_4_p_0(Background_5, Match_6, ElseGoal0_46, &ElseGoal_49);
            {
              GoalExpr_15 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, GoalExpr_15, 0) = ((MR_Box) ((MR_Unsigned) 6U));
              MR_hl_field(3, GoalExpr_15, 1) = ((MR_Box) (A_63));
              MR_hl_field(3, GoalExpr_15, 2) = ((MR_Box) (CondGoal_47));
              MR_hl_field(3, GoalExpr_15, 3) = ((MR_Box) (ThenGoal_48));
              MR_hl_field(3, GoalExpr_15, 4) = ((MR_Box) (ElseGoal_49));
            }
            GoalInfo_16 = GoalInfo0_9;
          }
          break;
        case (MR_Integer) 7:
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.ctgc.structure_reuse.direct.choose_reuse.annotate_reuses_in_goal\'/4", (MR_String) "shorthand.");
            return;
          }
          break;
      }
      break;
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_Goal_52 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_15));
    MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo_16));
  }
}

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__annotate_reuse_for_unification_5_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv3_HeadVar__5_5;

  transform_hlds__ctgc__structure_reuse__domain__reuse_as_least_upper_bound_5_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv3_HeadVar__5_5);
  *wrapper_arg_3 = ((MR_Box) (conv3_HeadVar__5_5));
}

static MR_Box MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__annotate_reuse_for_unification_5_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv2_LambdaHeadVar__2_13;

  conv2_LambdaHeadVar__2_13 = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__IntroducedFrom__func__match_get_condition__325__1_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv2_LambdaHeadVar__2_13));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__annotate_reuse_for_unification_5_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv1_LambdaHeadVar__2_8;

  conv1_LambdaHeadVar__2_8 = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__IntroducedFrom__func__match_get_dead_cons_ids__317__1_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv1_LambdaHeadVar__2_8));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__annotate_reuse_for_unification_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_LambdaHeadVar__2_13;

  conv0_LambdaHeadVar__2_13 = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__IntroducedFrom__func__match_get_dead_var__295__1_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_13));
  return wrapper_arg_2;
}

static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__annotate_reuse_for_unification_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__construction_spec_with_program_point_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__annotate_reuse_for_unification_5_p_0(
  MR_Word Background_6,
  MR_Word Match_7,
  MR_Word Unification_8,
  MR_Word STATE_VARIABLE_GoalInfo_0_40,
  MR_Word * STATE_VARIABLE_GoalInfo_41)
{
  MR_bool succeeded;
  MR_Word CurrentProgramPoint_10;

  CurrentProgramPoint_10 = transform_hlds__smm_common__program_point_init_1_f_0(STATE_VARIABLE_GoalInfo_0_40);
  switch (MR_tag((MR_Word) Unification_8)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word ConSpec_25;
        MR_Word TypeInfo_17_63;
        MR_Word Var_54;
        MR_Word Var_55 = ((MR_Word) ((MR_hl_field(0, Match_7, (MR_Integer) 1))));
        MR_Word Var_56;
        MR_Word Var_62;

        {
          Var_54 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_54, 0) = ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_7[2]));
          MR_hl_field(0, Var_54, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__annotate_reuse_for_unification_5_p_0_1));
          MR_hl_field(0, Var_54, 2) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(0, Var_54, 3) = ((MR_Box) (CurrentProgramPoint_10));
        }
        mercury__list__filter_3_p_0((MR_Word) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_construction_spec_0), Var_54, Var_55, &Var_56);
        succeeded = (Var_56 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          ConSpec_25 = ((MR_Word) ((MR_hl_field(1, Var_56, (MR_Integer) 0))));
          Var_62 = ((MR_Word) ((MR_hl_field(1, Var_56, (MR_Integer) 1))));
          TypeInfo_17_63 = (MR_Word) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_1[4]);
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_17_63, ((MR_Box) ((MR_Unsigned) 0U)), ((MR_Box) (Var_62)));
        }
        if (succeeded)
        {
          MR_Word DeadVar_26;
          MR_Word DeadConsIds_27;
          MR_Word ReuseAs_28;
          MR_Word ReuseFields_29;
          MR_Word Kind_30;
          MR_Word CellReused_31;
          MR_Word KindReuse_32;
          MR_Word Var_45;
          MR_Word DeadVars0_65;
          MR_Word DeadVars_66;
          MR_Word Var_68 = ((MR_Word) ((MR_hl_field(0, Match_7, (MR_Integer) 0))));
          MR_Word Var_79;
          MR_Word Conditions_86;
          MR_Word Var_89;

          DeadVars0_65 = mercury__list__map_2_f_0((MR_Word) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_deconstruction_spec_0), (MR_Word) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_1[0]), (MR_Word) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_2[12]), Var_68);
          DeadVars_66 = mercury__list__remove_dups_1_f_0((MR_Word) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_1[0]), DeadVars0_65);
          if ((DeadVars_66 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              mercury__require__unexpected_2_p_0((MR_String) "function \140transform_hlds.ctgc.structure_reuse.direct.choose_reuse.match_get_dead_var\'/1", (MR_String) "empty list of vars");
              return;
            }
          else
          {
            MR_Word Rest_67;

            DeadVar_26 = ((MR_Word) ((MR_hl_field(1, DeadVars_66, (MR_Integer) 0))));
            Rest_67 = ((MR_Word) ((MR_hl_field(1, DeadVars_66, (MR_Integer) 1))));
            if (!((Rest_67 == (MR_Word) ((MR_Unsigned) 0U))))
              {
                mercury__require__unexpected_2_p_0((MR_String) "function \140transform_hlds.ctgc.structure_reuse.direct.choose_reuse.match_get_dead_var\'/1", (MR_String) "too many dead vars");
                return;
              }
          }
          Var_79 = ((MR_Word) ((MR_hl_field(0, Match_7, (MR_Integer) 0))));
          DeadConsIds_27 = mercury__list__map_2_f_0((MR_Word) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_deconstruction_spec_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0), (MR_Word) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_2[13]), Var_79);
          Var_89 = ((MR_Word) ((MR_hl_field(0, Match_7, (MR_Integer) 0))));
          Conditions_86 = mercury__list__map_2_f_0((MR_Word) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_deconstruction_spec_0), (MR_Word) (&transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_as_0), (MR_Word) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_2[14]), Var_89);
          if ((Conditions_86 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              mercury__require__unexpected_2_p_0((MR_String) "function \140transform_hlds.ctgc.structure_reuse.direct.choose_reuse.match_get_condition\'/2", (MR_String) "no reuse conditions");
              return;
            }
          else
          {
            MR_Word First_87 = ((MR_Word) ((MR_hl_field(1, Conditions_86, (MR_Integer) 0))));
            MR_Word Rest_88 = ((MR_Word) ((MR_hl_field(1, Conditions_86, (MR_Integer) 1))));
            MR_Word Var_90;
            MR_Word Var_91 = ((MR_Word) ((MR_hl_field(0, Background_6, (MR_Integer) 1))));
            MR_Word Var_98 = ((MR_Word) ((MR_hl_field(0, Background_6, (MR_Integer) 2))));
            MR_Box conv4_ReuseAs_28;

            {
              Var_90 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_90, 0) = ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_6[1]));
              MR_hl_field(0, Var_90, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__annotate_reuse_for_unification_5_p_0_5));
              MR_hl_field(0, Var_90, 2) = ((MR_Box) ((MR_Integer) 2));
              MR_hl_field(0, Var_90, 3) = ((MR_Box) (Var_91));
              MR_hl_field(0, Var_90, 4) = ((MR_Box) (Var_98));
            }
            mercury__list__foldl_4_p_0((MR_Word) (&transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_as_0), (MR_Word) (&transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_as_0), Var_90, Rest_88, ((MR_Box) (First_87)), &conv4_ReuseAs_28);
            ReuseAs_28 = ((MR_Word) (conv4_ReuseAs_28));
          }
          Var_45 = ((MR_Word) ((MR_hl_field(0, ConSpec_25, (MR_Integer) 1))));
          ReuseFields_29 = ((MR_Word) ((MR_hl_field(0, Var_45, (MR_Integer) 1))));
          succeeded = transform_hlds__ctgc__structure_reuse__domain__reuse_as_conditional_reuses_1_p_0(ReuseAs_28);
          if (succeeded)
            Kind_30 = (MR_Integer) 0;
          else
          {
            succeeded = transform_hlds__ctgc__structure_reuse__domain__reuse_as_all_unconditional_reuses_1_p_0(ReuseAs_28);
            if (succeeded)
              Kind_30 = (MR_Integer) 1;
            else
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.ctgc.structure_reuse.direct.choose_reuse.annotate_reuse_for_unification\'/5", (MR_String) "no reuse conditions");
                return;
              }
          }
          {
            CellReused_31 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, CellReused_31, 0) = ((MR_Box) (DeadVar_26));
            MR_hl_field(1, CellReused_31, 1) = (MR_Box) ((MR_Unsigned) (Kind_30));
            MR_hl_field(1, CellReused_31, 2) = ((MR_Box) (DeadConsIds_27));
            MR_hl_field(1, CellReused_31, 3) = ((MR_Box) (ReuseFields_29));
          }
          switch (Kind_30) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                KindReuse_32 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(2, KindReuse_32, 0) = ((MR_Box) (CellReused_31));
              }
              break;
            case (MR_Integer) 1:
              {
                KindReuse_32 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, KindReuse_32, 0) = ((MR_Box) (CellReused_31));
              }
              break;
          }
          hlds__hlds_goal__goal_info_set_reuse_3_p_0(KindReuse_32, STATE_VARIABLE_GoalInfo_0_40, STATE_VARIABLE_GoalInfo_41);
        }
        else
          *STATE_VARIABLE_GoalInfo_41 = STATE_VARIABLE_GoalInfo_0_40;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word _DeconSpec_17;

        succeeded = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__match_find_deconstruction_spec_3_p_0(Match_7, CurrentProgramPoint_10, &_DeconSpec_17);
        if (succeeded)
          hlds__hlds_goal__goal_info_set_reuse_3_p_0((MR_Word) (MR_mkword(2, &transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_3[0])), STATE_VARIABLE_GoalInfo_0_40, STATE_VARIABLE_GoalInfo_41);
        else
          *STATE_VARIABLE_GoalInfo_41 = STATE_VARIABLE_GoalInfo_0_40;
      }
      break;
    case (MR_Integer) 2:
      *STATE_VARIABLE_GoalInfo_41 = STATE_VARIABLE_GoalInfo_0_40;
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, Unification_8, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          *STATE_VARIABLE_GoalInfo_41 = STATE_VARIABLE_GoalInfo_0_40;
          break;
        case (MR_Integer) 1:
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.ctgc.structure_reuse.direct.choose_reuse.annotate_reuse_for_unification\'/5", (MR_String) "complicated_unify");
            return;
          }
          break;
      }
      break;
  }
}

static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__match_find_deconstruction_spec_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__deconstruction_spec_with_program_point_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  return succeeded;
}

static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__match_find_deconstruction_spec_3_p_0(
  MR_Word Match_4,
  MR_Word ProgramPoint_5,
  MR_Word * DeconstructionSpec_6)
{
  MR_bool succeeded;
  MR_Word TypeInfo_17_17;
  MR_Word Var_7;
  MR_Word Var_8 = ((MR_Word) ((MR_hl_field(0, Match_4, (MR_Integer) 0))));
  MR_Word Var_9;
  MR_Word Var_16;

  {
    Var_7 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_7, 0) = ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_7[1]));
    MR_hl_field(0, Var_7, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__match_find_deconstruction_spec_3_p_0_1));
    MR_hl_field(0, Var_7, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_7, 3) = ((MR_Box) (ProgramPoint_5));
  }
  mercury__list__filter_3_p_0((MR_Word) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_deconstruction_spec_0), Var_7, Var_8, &Var_9);
  succeeded = (Var_9 != (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
  {
    *DeconstructionSpec_6 = ((MR_Word) ((MR_hl_field(1, Var_9, (MR_Integer) 0))));
    Var_16 = ((MR_Word) ((MR_hl_field(1, Var_9, (MR_Integer) 1))));
    TypeInfo_17_17 = (MR_Word) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_1[3]);
    succeeded = mercury__builtin__unify_2_p_0(TypeInfo_17_17, ((MR_Box) ((MR_Unsigned) 0U)), ((MR_Box) (Var_16)));
  }
  return succeeded;
}

static MR_Box MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__compute_match_table_with_continuation_6_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv6_LambdaHeadVar__2_81;

  conv6_LambdaHeadVar__2_81 = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__IntroducedFrom__func__compute_match_table_with_continuation__633__1_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv6_LambdaHeadVar__2_81));
  return wrapper_arg_2;
}

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__compute_match_table_with_continuation_6_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv4_HeadVar__3_116;

  transform_hlds__ctgc__structure_reuse__direct__choose_reuse__IntroducedFrom__pred__compute_match_table_with_continuation__663__1_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv4_HeadVar__3_116);
  *wrapper_arg_3 = ((MR_Box) (conv4_HeadVar__3_116));
}

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__compute_match_table_with_continuation_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_HeadVar__3_27;

  transform_hlds__ctgc__structure_reuse__direct__choose_reuse__IntroducedFrom__pred__compute_match_table_in_disjunction__699__1_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_HeadVar__3_27);
  *wrapper_arg_3 = ((MR_Box) (conv2_HeadVar__3_27));
}

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__compute_match_table_with_continuation_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__3_21;

  transform_hlds__ctgc__structure_reuse__direct__choose_reuse__IntroducedFrom__pred__compute_match_table_in_disjunction__691__1_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_HeadVar__3_21);
  *wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__3_21));
}

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__compute_match_table_goal_list_5_p_0(
  MR_Word tscc_proc_1_input_1_Background_6,
  MR_Word tscc_proc_1_input_2_DeadCellTable_7,
  MR_Word tscc_proc_1_input_3_Goals_8,
  MR_Word tscc_proc_1_input_4_STATE_VARIABLE_Table_0_12,
  MR_Word * tscc_output_ptr_1_STATE_VARIABLE_Table_13)
{
  MR_Word tscc_proc_2_input_1_Background_7;
  MR_Word tscc_proc_2_input_2_DeadCellTable_8;
  MR_Word tscc_proc_2_input_3_CurrentGoal_9;
  MR_Word tscc_proc_2_input_4_Cont_10;
  MR_Word tscc_proc_2_input_5_STATE_VARIABLE_Table_0_67;
  MR_Word tscc_output_1_STATE_VARIABLE_Table_13;

  // The code for TSCC PROC 1: pred transform_hlds.ctgc.structure_reuse.direct.choose_reuse.compute_match_table_goal_list/5-0.
  ;
  // Setup for mutual tailcalls optimized into a loop.
  ;
  // The mutually recursive procedures are:
  ;
  ;
  // proc 1 in TSCC: pred transform_hlds.ctgc.structure_reuse.direct.choose_reuse.compute_match_table_goal_list/5-0
  ;
  // proc 2 in TSCC: pred transform_hlds.ctgc.structure_reuse.direct.choose_reuse.compute_match_table_with_continuation/6-0
  ;
  ;
  goto top_of_proc_1;
top_of_proc_1:;
  {
    MR_Word Background_6 = tscc_proc_1_input_1_Background_6;
    MR_Word DeadCellTable_7 = tscc_proc_1_input_2_DeadCellTable_7;
    MR_Word Goals_8 = tscc_proc_1_input_3_Goals_8;
    MR_Word STATE_VARIABLE_Table_0_12 = tscc_proc_1_input_4_STATE_VARIABLE_Table_0_12;
    MR_Word STATE_VARIABLE_Table_13;

    if ((Goals_8 == (MR_Word) ((MR_Unsigned) 0U)))
      STATE_VARIABLE_Table_13 = STATE_VARIABLE_Table_0_12;
    else
    {
      MR_Word CurrentGoal_10 = ((MR_Word) ((MR_hl_field(1, Goals_8, (MR_Integer) 0))));
      MR_Word Cont_11 = ((MR_Word) ((MR_hl_field(1, Goals_8, (MR_Integer) 1))));
      MR_Word next_value_of_tscc_proc_2_input_1_Background_7 = Background_6;
      MR_Word next_value_of_tscc_proc_2_input_2_DeadCellTable_8 = DeadCellTable_7;
      MR_Word next_value_of_tscc_proc_2_input_3_CurrentGoal_9 = CurrentGoal_10;
      MR_Word next_value_of_tscc_proc_2_input_4_Cont_10 = Cont_11;
      MR_Word next_value_of_tscc_proc_2_input_5_STATE_VARIABLE_Table_0_67 = STATE_VARIABLE_Table_0_12;

      // direct tailcall eliminated
      ;
      tscc_proc_2_input_1_Background_7 = next_value_of_tscc_proc_2_input_1_Background_7;
      tscc_proc_2_input_2_DeadCellTable_8 = next_value_of_tscc_proc_2_input_2_DeadCellTable_8;
      tscc_proc_2_input_3_CurrentGoal_9 = next_value_of_tscc_proc_2_input_3_CurrentGoal_9;
      tscc_proc_2_input_4_Cont_10 = next_value_of_tscc_proc_2_input_4_Cont_10;
      tscc_proc_2_input_5_STATE_VARIABLE_Table_0_67 = next_value_of_tscc_proc_2_input_5_STATE_VARIABLE_Table_0_67;
      goto top_of_proc_2;
    }
    tscc_output_1_STATE_VARIABLE_Table_13 = STATE_VARIABLE_Table_13;
    goto tscc_end;
  }
top_of_proc_2:;
  {
    MR_Word Background_7 = tscc_proc_2_input_1_Background_7;
    MR_Word DeadCellTable_8 = tscc_proc_2_input_2_DeadCellTable_8;
    MR_Word CurrentGoal_9 = tscc_proc_2_input_3_CurrentGoal_9;
    MR_Word Cont_10 = tscc_proc_2_input_4_Cont_10;
    MR_Word STATE_VARIABLE_Table_0_67 = tscc_proc_2_input_5_STATE_VARIABLE_Table_0_67;
    MR_Word STATE_VARIABLE_Table_68;
    MR_bool succeeded;
    MR_Word GoalExpr_12 = ((MR_Word) ((MR_hl_field(0, CurrentGoal_9, (MR_Integer) 0))));
    MR_Word GoalInfo_13 = ((MR_Word) ((MR_hl_field(0, CurrentGoal_9, (MR_Integer) 1))));

    switch (MR_tag((MR_Word) GoalExpr_12)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word Goal_56 = (MR_Word) ((MR_Word) (GoalExpr_12));
          MR_Word STATE_VARIABLE_Table_85_85;

          transform_hlds__ctgc__structure_reuse__direct__choose_reuse__compute_match_table_with_continuation_6_p_0(Background_7, DeadCellTable_8, Goal_56, (MR_Word) ((MR_Unsigned) 0U), STATE_VARIABLE_Table_0_67, &STATE_VARIABLE_Table_85_85);
          if ((Cont_10 == (MR_Word) ((MR_Unsigned) 0U)))
            STATE_VARIABLE_Table_68 = STATE_VARIABLE_Table_85_85;
          else
          {
            MR_Word CurrentGoal_136 = ((MR_Word) ((MR_hl_field(1, Cont_10, (MR_Integer) 0))));
            MR_Word Cont_137 = ((MR_Word) ((MR_hl_field(1, Cont_10, (MR_Integer) 1))));
            MR_Word next_value_of_tscc_proc_2_input_1_Background_7 = Background_7;
            MR_Word next_value_of_tscc_proc_2_input_2_DeadCellTable_8 = DeadCellTable_8;
            MR_Word next_value_of_tscc_proc_2_input_3_CurrentGoal_9 = CurrentGoal_136;
            MR_Word next_value_of_tscc_proc_2_input_4_Cont_10 = Cont_137;
            MR_Word next_value_of_tscc_proc_2_input_5_STATE_VARIABLE_Table_0_67 = STATE_VARIABLE_Table_85_85;

            // direct tailcall eliminated
            ;
            tscc_proc_2_input_1_Background_7 = next_value_of_tscc_proc_2_input_1_Background_7;
            tscc_proc_2_input_2_DeadCellTable_8 = next_value_of_tscc_proc_2_input_2_DeadCellTable_8;
            tscc_proc_2_input_3_CurrentGoal_9 = next_value_of_tscc_proc_2_input_3_CurrentGoal_9;
            tscc_proc_2_input_4_Cont_10 = next_value_of_tscc_proc_2_input_4_Cont_10;
            tscc_proc_2_input_5_STATE_VARIABLE_Table_0_67 = next_value_of_tscc_proc_2_input_5_STATE_VARIABLE_Table_0_67;
            goto top_of_proc_2;
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Unification_17 = ((MR_Word) ((MR_hl_field(1, GoalExpr_12, (MR_Integer) 3))));
          MR_Word STATE_VARIABLE_Table_71_71;
          MR_Word Var_19;
          MR_Word ConsId_20;
          MR_Word Args_21;
          MR_Word next_value_of_tscc_proc_1_input_1_Background_6;
          MR_Word next_value_of_tscc_proc_1_input_2_DeadCellTable_7;
          MR_Word next_value_of_tscc_proc_1_input_3_Goals_8;
          MR_Word next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Table_0_12;

          succeeded = ((MR_tag((MR_Word) Unification_17)) == (MR_Integer) 1);
          if (succeeded)
          {
            Var_19 = ((MR_Word) ((MR_hl_field(1, Unification_17, (MR_Integer) 0))));
            ConsId_20 = ((MR_Word) ((MR_hl_field(1, Unification_17, (MR_Integer) 1))));
            Args_21 = ((MR_Word) ((MR_hl_field(1, Unification_17, (MR_Integer) 2))));
            {
              MR_Word ProgramPoint_25;
              MR_Word Condition_26;

              ProgramPoint_25 = transform_hlds__smm_common__program_point_init_1_f_0(GoalInfo_13);
              succeeded = transform_hlds__ctgc__structure_reuse__direct__dead_cell_table_search_2_f_0(ProgramPoint_25, DeadCellTable_8, &Condition_26);
              if (succeeded)
              {
                MR_Word ReuseAs_27;
                MR_Word DeconstructionSpec_28;
                MR_Word Match0_29;
                MR_Word Match_30;
                MR_Word Var_69;

                ReuseAs_27 = transform_hlds__ctgc__structure_reuse__domain__reuse_as_init_with_one_condition_1_f_0(Condition_26);
                {
                  DeconstructionSpec_28 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, DeconstructionSpec_28, 0) = ((MR_Box) (Var_19));
                  MR_hl_field(0, DeconstructionSpec_28, 1) = ((MR_Box) (ProgramPoint_25));
                  MR_hl_field(0, DeconstructionSpec_28, 2) = ((MR_Box) (ConsId_20));
                  MR_hl_field(0, DeconstructionSpec_28, 3) = ((MR_Box) (Args_21));
                  MR_hl_field(0, DeconstructionSpec_28, 4) = ((MR_Box) (ReuseAs_27));
                }
                {
                  Var_69 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_69, 0) = ((MR_Box) (DeconstructionSpec_28));
                  MR_hl_field(1, Var_69, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  Match0_29 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, Match0_29, 0) = ((MR_Box) (Var_69));
                  MR_hl_field(0, Match0_29, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(0, Match0_29, 2) = MR_box_float((MR_Float) 0.0000000000000000);
                  MR_hl_field(0, Match0_29, 3) = ((MR_Box) ((MR_Integer) 0));
                }
                transform_hlds__ctgc__structure_reuse__direct__choose_reuse__find_best_match_in_conjunction_4_p_0(Background_7, Cont_10, Match0_29, &Match_30);
                mercury__multi_map__set_4_p_0((MR_Word) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_1[0]), (MR_Word) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_match_0), ((MR_Box) (Var_19)), ((MR_Box) (Match_30)), STATE_VARIABLE_Table_0_67, &STATE_VARIABLE_Table_71_71);
              }
              else
                STATE_VARIABLE_Table_71_71 = STATE_VARIABLE_Table_0_67;
            }
          }
          else
            STATE_VARIABLE_Table_71_71 = STATE_VARIABLE_Table_0_67;
          // direct tailcall eliminated
          ;
          next_value_of_tscc_proc_1_input_1_Background_6 = Background_7;
          next_value_of_tscc_proc_1_input_2_DeadCellTable_7 = DeadCellTable_8;
          next_value_of_tscc_proc_1_input_3_Goals_8 = Cont_10;
          next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Table_0_12 = STATE_VARIABLE_Table_71_71;
          tscc_proc_1_input_1_Background_6 = next_value_of_tscc_proc_1_input_1_Background_6;
          tscc_proc_1_input_2_DeadCellTable_7 = next_value_of_tscc_proc_1_input_2_DeadCellTable_7;
          tscc_proc_1_input_3_Goals_8 = next_value_of_tscc_proc_1_input_3_Goals_8;
          tscc_proc_1_input_4_STATE_VARIABLE_Table_0_12 = next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Table_0_12;
          goto top_of_proc_1;
        }
        break;
      case (MR_Integer) 2:
        if ((Cont_10 == (MR_Word) ((MR_Unsigned) 0U)))
          STATE_VARIABLE_Table_68 = STATE_VARIABLE_Table_0_67;
        else
        {
          MR_Word CurrentGoal_138 = ((MR_Word) ((MR_hl_field(1, Cont_10, (MR_Integer) 0))));
          MR_Word Cont_139 = ((MR_Word) ((MR_hl_field(1, Cont_10, (MR_Integer) 1))));
          MR_Word next_value_of_tscc_proc_2_input_1_Background_7 = Background_7;
          MR_Word next_value_of_tscc_proc_2_input_2_DeadCellTable_8 = DeadCellTable_8;
          MR_Word next_value_of_tscc_proc_2_input_3_CurrentGoal_9 = CurrentGoal_138;
          MR_Word next_value_of_tscc_proc_2_input_4_Cont_10 = Cont_139;
          MR_Word next_value_of_tscc_proc_2_input_5_STATE_VARIABLE_Table_0_67 = STATE_VARIABLE_Table_0_67;

          // direct tailcall eliminated
          ;
          tscc_proc_2_input_1_Background_7 = next_value_of_tscc_proc_2_input_1_Background_7;
          tscc_proc_2_input_2_DeadCellTable_8 = next_value_of_tscc_proc_2_input_2_DeadCellTable_8;
          tscc_proc_2_input_3_CurrentGoal_9 = next_value_of_tscc_proc_2_input_3_CurrentGoal_9;
          tscc_proc_2_input_4_Cont_10 = next_value_of_tscc_proc_2_input_4_Cont_10;
          tscc_proc_2_input_5_STATE_VARIABLE_Table_0_67 = next_value_of_tscc_proc_2_input_5_STATE_VARIABLE_Table_0_67;
          goto top_of_proc_2;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, GoalExpr_12, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            if ((Cont_10 == (MR_Word) ((MR_Unsigned) 0U)))
              STATE_VARIABLE_Table_68 = STATE_VARIABLE_Table_0_67;
            else
            {
              MR_Word CurrentGoal_132 = ((MR_Word) ((MR_hl_field(1, Cont_10, (MR_Integer) 0))));
              MR_Word Cont_133 = ((MR_Word) ((MR_hl_field(1, Cont_10, (MR_Integer) 1))));
              MR_Word next_value_of_tscc_proc_2_input_1_Background_7 = Background_7;
              MR_Word next_value_of_tscc_proc_2_input_2_DeadCellTable_8 = DeadCellTable_8;
              MR_Word next_value_of_tscc_proc_2_input_3_CurrentGoal_9 = CurrentGoal_132;
              MR_Word next_value_of_tscc_proc_2_input_4_Cont_10 = Cont_133;
              MR_Word next_value_of_tscc_proc_2_input_5_STATE_VARIABLE_Table_0_67 = STATE_VARIABLE_Table_0_67;

              // direct tailcall eliminated
              ;
              tscc_proc_2_input_1_Background_7 = next_value_of_tscc_proc_2_input_1_Background_7;
              tscc_proc_2_input_2_DeadCellTable_8 = next_value_of_tscc_proc_2_input_2_DeadCellTable_8;
              tscc_proc_2_input_3_CurrentGoal_9 = next_value_of_tscc_proc_2_input_3_CurrentGoal_9;
              tscc_proc_2_input_4_Cont_10 = next_value_of_tscc_proc_2_input_4_Cont_10;
              tscc_proc_2_input_5_STATE_VARIABLE_Table_0_67 = next_value_of_tscc_proc_2_input_5_STATE_VARIABLE_Table_0_67;
              goto top_of_proc_2;
            }
            break;
          case (MR_Integer) 1:
            if ((Cont_10 == (MR_Word) ((MR_Unsigned) 0U)))
              STATE_VARIABLE_Table_68 = STATE_VARIABLE_Table_0_67;
            else
            {
              MR_Word CurrentGoal_120 = ((MR_Word) ((MR_hl_field(1, Cont_10, (MR_Integer) 0))));
              MR_Word Cont_121 = ((MR_Word) ((MR_hl_field(1, Cont_10, (MR_Integer) 1))));
              MR_Word next_value_of_tscc_proc_2_input_1_Background_7 = Background_7;
              MR_Word next_value_of_tscc_proc_2_input_2_DeadCellTable_8 = DeadCellTable_8;
              MR_Word next_value_of_tscc_proc_2_input_3_CurrentGoal_9 = CurrentGoal_120;
              MR_Word next_value_of_tscc_proc_2_input_4_Cont_10 = Cont_121;
              MR_Word next_value_of_tscc_proc_2_input_5_STATE_VARIABLE_Table_0_67 = STATE_VARIABLE_Table_0_67;

              // direct tailcall eliminated
              ;
              tscc_proc_2_input_1_Background_7 = next_value_of_tscc_proc_2_input_1_Background_7;
              tscc_proc_2_input_2_DeadCellTable_8 = next_value_of_tscc_proc_2_input_2_DeadCellTable_8;
              tscc_proc_2_input_3_CurrentGoal_9 = next_value_of_tscc_proc_2_input_3_CurrentGoal_9;
              tscc_proc_2_input_4_Cont_10 = next_value_of_tscc_proc_2_input_4_Cont_10;
              tscc_proc_2_input_5_STATE_VARIABLE_Table_0_67 = next_value_of_tscc_proc_2_input_5_STATE_VARIABLE_Table_0_67;
              goto top_of_proc_2;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word Goals_50 = ((MR_Word) ((MR_hl_field(3, GoalExpr_12, (MR_Integer) 2))));
              MR_Word NewCont_51;

              mercury__list__append_3_p_1((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), Goals_50, Cont_10, &NewCont_51);
              if ((NewCont_51 == (MR_Word) ((MR_Unsigned) 0U)))
                STATE_VARIABLE_Table_68 = STATE_VARIABLE_Table_0_67;
              else
              {
                MR_Word CurrentGoal_122 = ((MR_Word) ((MR_hl_field(1, NewCont_51, (MR_Integer) 0))));
                MR_Word Cont_123 = ((MR_Word) ((MR_hl_field(1, NewCont_51, (MR_Integer) 1))));
                MR_Word next_value_of_tscc_proc_2_input_1_Background_7 = Background_7;
                MR_Word next_value_of_tscc_proc_2_input_2_DeadCellTable_8 = DeadCellTable_8;
                MR_Word next_value_of_tscc_proc_2_input_3_CurrentGoal_9 = CurrentGoal_122;
                MR_Word next_value_of_tscc_proc_2_input_4_Cont_10 = Cont_123;
                MR_Word next_value_of_tscc_proc_2_input_5_STATE_VARIABLE_Table_0_67 = STATE_VARIABLE_Table_0_67;

                // direct tailcall eliminated
                ;
                tscc_proc_2_input_1_Background_7 = next_value_of_tscc_proc_2_input_1_Background_7;
                tscc_proc_2_input_2_DeadCellTable_8 = next_value_of_tscc_proc_2_input_2_DeadCellTable_8;
                tscc_proc_2_input_3_CurrentGoal_9 = next_value_of_tscc_proc_2_input_3_CurrentGoal_9;
                tscc_proc_2_input_4_Cont_10 = next_value_of_tscc_proc_2_input_4_Cont_10;
                tscc_proc_2_input_5_STATE_VARIABLE_Table_0_67 = next_value_of_tscc_proc_2_input_5_STATE_VARIABLE_Table_0_67;
                goto top_of_proc_2;
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word STATE_VARIABLE_Table_77_77;
              MR_Word Goals_101 = ((MR_Word) ((MR_hl_field(3, GoalExpr_12, (MR_Integer) 1))));
              MR_Word DisjTables_124;
              MR_Word CommonDeadVarsDisjTables_125;
              MR_Word STATE_VARIABLE_Table_17_127;
              MR_Box conv1_STATE_VARIABLE_Table_17_127;
              MR_Box conv3_STATE_VARIABLE_Table_77_77;

              transform_hlds__ctgc__structure_reuse__direct__choose_reuse__compute_match_table_in_disjs_4_p_0(Background_7, DeadCellTable_8, Goals_101, &DisjTables_124);
              mercury__list__foldl_4_p_0((MR_Word) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_2[1]), (MR_Word) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_2[1]), (MR_Word) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_2[8]), DisjTables_124, ((MR_Box) (STATE_VARIABLE_Table_0_67)), &conv1_STATE_VARIABLE_Table_17_127);
              STATE_VARIABLE_Table_17_127 = ((MR_Word) (conv1_STATE_VARIABLE_Table_17_127));
              transform_hlds__ctgc__structure_reuse__direct__choose_reuse__process_possible_common_dead_vars_4_p_0(Background_7, Cont_10, DisjTables_124, &CommonDeadVarsDisjTables_125);
              mercury__list__foldl_4_p_0((MR_Word) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_2[1]), (MR_Word) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_2[1]), (MR_Word) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_2[9]), CommonDeadVarsDisjTables_125, ((MR_Box) (STATE_VARIABLE_Table_17_127)), &conv3_STATE_VARIABLE_Table_77_77);
              STATE_VARIABLE_Table_77_77 = ((MR_Word) (conv3_STATE_VARIABLE_Table_77_77));
              if ((Cont_10 == (MR_Word) ((MR_Unsigned) 0U)))
                STATE_VARIABLE_Table_68 = STATE_VARIABLE_Table_77_77;
              else
              {
                MR_Word CurrentGoal_130 = ((MR_Word) ((MR_hl_field(1, Cont_10, (MR_Integer) 0))));
                MR_Word Cont_131 = ((MR_Word) ((MR_hl_field(1, Cont_10, (MR_Integer) 1))));
                MR_Word next_value_of_tscc_proc_2_input_1_Background_7 = Background_7;
                MR_Word next_value_of_tscc_proc_2_input_2_DeadCellTable_8 = DeadCellTable_8;
                MR_Word next_value_of_tscc_proc_2_input_3_CurrentGoal_9 = CurrentGoal_130;
                MR_Word next_value_of_tscc_proc_2_input_4_Cont_10 = Cont_131;
                MR_Word next_value_of_tscc_proc_2_input_5_STATE_VARIABLE_Table_0_67 = STATE_VARIABLE_Table_77_77;

                // direct tailcall eliminated
                ;
                tscc_proc_2_input_1_Background_7 = next_value_of_tscc_proc_2_input_1_Background_7;
                tscc_proc_2_input_2_DeadCellTable_8 = next_value_of_tscc_proc_2_input_2_DeadCellTable_8;
                tscc_proc_2_input_3_CurrentGoal_9 = next_value_of_tscc_proc_2_input_3_CurrentGoal_9;
                tscc_proc_2_input_4_Cont_10 = next_value_of_tscc_proc_2_input_4_Cont_10;
                tscc_proc_2_input_5_STATE_VARIABLE_Table_0_67 = next_value_of_tscc_proc_2_input_5_STATE_VARIABLE_Table_0_67;
                goto top_of_proc_2;
              }
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word Cases_54 = ((MR_Word) ((MR_hl_field(3, GoalExpr_12, (MR_Integer) 3))));
              MR_Word STATE_VARIABLE_Table_82_82;
              MR_Word Goals_103;

              Goals_103 = mercury__list__map_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_2[11]), Cases_54);
              transform_hlds__ctgc__structure_reuse__direct__choose_reuse__compute_match_table_in_disjunction_6_p_0(Background_7, DeadCellTable_8, Goals_103, Cont_10, STATE_VARIABLE_Table_0_67, &STATE_VARIABLE_Table_82_82);
              if ((Cont_10 == (MR_Word) ((MR_Unsigned) 0U)))
                STATE_VARIABLE_Table_68 = STATE_VARIABLE_Table_82_82;
              else
              {
                MR_Word CurrentGoal_140 = ((MR_Word) ((MR_hl_field(1, Cont_10, (MR_Integer) 0))));
                MR_Word Cont_141 = ((MR_Word) ((MR_hl_field(1, Cont_10, (MR_Integer) 1))));
                MR_Word next_value_of_tscc_proc_2_input_1_Background_7 = Background_7;
                MR_Word next_value_of_tscc_proc_2_input_2_DeadCellTable_8 = DeadCellTable_8;
                MR_Word next_value_of_tscc_proc_2_input_3_CurrentGoal_9 = CurrentGoal_140;
                MR_Word next_value_of_tscc_proc_2_input_4_Cont_10 = Cont_141;
                MR_Word next_value_of_tscc_proc_2_input_5_STATE_VARIABLE_Table_0_67 = STATE_VARIABLE_Table_82_82;

                // direct tailcall eliminated
                ;
                tscc_proc_2_input_1_Background_7 = next_value_of_tscc_proc_2_input_1_Background_7;
                tscc_proc_2_input_2_DeadCellTable_8 = next_value_of_tscc_proc_2_input_2_DeadCellTable_8;
                tscc_proc_2_input_3_CurrentGoal_9 = next_value_of_tscc_proc_2_input_3_CurrentGoal_9;
                tscc_proc_2_input_4_Cont_10 = next_value_of_tscc_proc_2_input_4_Cont_10;
                tscc_proc_2_input_5_STATE_VARIABLE_Table_0_67 = next_value_of_tscc_proc_2_input_5_STATE_VARIABLE_Table_0_67;
                goto top_of_proc_2;
              }
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word Goal_104 = ((MR_Word) ((MR_hl_field(3, GoalExpr_12, (MR_Integer) 2))));
              MR_Word next_value_of_tscc_proc_2_input_1_Background_7 = Background_7;
              MR_Word next_value_of_tscc_proc_2_input_2_DeadCellTable_8 = DeadCellTable_8;
              MR_Word next_value_of_tscc_proc_2_input_3_CurrentGoal_9 = Goal_104;
              MR_Word next_value_of_tscc_proc_2_input_4_Cont_10 = Cont_10;
              MR_Word next_value_of_tscc_proc_2_input_5_STATE_VARIABLE_Table_0_67 = STATE_VARIABLE_Table_0_67;

              // direct tailcall eliminated
              ;
              tscc_proc_2_input_1_Background_7 = next_value_of_tscc_proc_2_input_1_Background_7;
              tscc_proc_2_input_2_DeadCellTable_8 = next_value_of_tscc_proc_2_input_2_DeadCellTable_8;
              tscc_proc_2_input_3_CurrentGoal_9 = next_value_of_tscc_proc_2_input_3_CurrentGoal_9;
              tscc_proc_2_input_4_Cont_10 = next_value_of_tscc_proc_2_input_4_Cont_10;
              tscc_proc_2_input_5_STATE_VARIABLE_Table_0_67 = next_value_of_tscc_proc_2_input_5_STATE_VARIABLE_Table_0_67;
              goto top_of_proc_2;
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word CondGoal_59 = ((MR_Word) ((MR_hl_field(3, GoalExpr_12, (MR_Integer) 2))));
              MR_Word ThenGoal_60 = ((MR_Word) ((MR_hl_field(3, GoalExpr_12, (MR_Integer) 3))));
              MR_Word ElseGoal_61 = ((MR_Word) ((MR_hl_field(3, GoalExpr_12, (MR_Integer) 4))));
              MR_Word Table0_62;
              MR_Word TableThen_63;
              MR_Word TableElse_64;
              MR_Word CommonDeadVarsTables_65;
              MR_Word Var_88;
              MR_Word STATE_VARIABLE_Table_91_91;
              MR_Word STATE_VARIABLE_Table_92_92;
              MR_Word Var_93;
              MR_Word Var_94;
              MR_Word STATE_VARIABLE_Table_97_97;
              MR_Box conv5_STATE_VARIABLE_Table_97_97;

              mercury__multi_map__init_1_p_0((MR_Word) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_1[0]), (MR_Word) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_match_0), &Table0_62);
              {
                Var_88 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_88, 0) = ((MR_Box) (ThenGoal_60));
                MR_hl_field(1, Var_88, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              transform_hlds__ctgc__structure_reuse__direct__choose_reuse__compute_match_table_with_continuation_6_p_0(Background_7, DeadCellTable_8, CondGoal_59, Var_88, Table0_62, &TableThen_63);
              transform_hlds__ctgc__structure_reuse__direct__choose_reuse__compute_match_table_with_continuation_6_p_0(Background_7, DeadCellTable_8, ElseGoal_61, (MR_Word) ((MR_Unsigned) 0U), Table0_62, &TableElse_64);
              mercury__multi_map__merge_3_p_0((MR_Word) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_1[0]), (MR_Word) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_match_0), TableThen_63, STATE_VARIABLE_Table_0_67, &STATE_VARIABLE_Table_91_91);
              mercury__multi_map__merge_3_p_0((MR_Word) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_1[0]), (MR_Word) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_match_0), TableElse_64, STATE_VARIABLE_Table_91_91, &STATE_VARIABLE_Table_92_92);
              {
                Var_94 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_94, 0) = ((MR_Box) (TableElse_64));
                MR_hl_field(1, Var_94, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                Var_93 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_93, 0) = ((MR_Box) (TableThen_63));
                MR_hl_field(1, Var_93, 1) = ((MR_Box) (Var_94));
              }
              transform_hlds__ctgc__structure_reuse__direct__choose_reuse__process_possible_common_dead_vars_4_p_0(Background_7, Cont_10, Var_93, &CommonDeadVarsTables_65);
              mercury__list__foldl_4_p_0((MR_Word) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_2[1]), (MR_Word) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_2[1]), (MR_Word) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_2[10]), CommonDeadVarsTables_65, ((MR_Box) (STATE_VARIABLE_Table_92_92)), &conv5_STATE_VARIABLE_Table_97_97);
              STATE_VARIABLE_Table_97_97 = ((MR_Word) (conv5_STATE_VARIABLE_Table_97_97));
              if ((Cont_10 == (MR_Word) ((MR_Unsigned) 0U)))
                STATE_VARIABLE_Table_68 = STATE_VARIABLE_Table_97_97;
              else
              {
                MR_Word CurrentGoal_134 = ((MR_Word) ((MR_hl_field(1, Cont_10, (MR_Integer) 0))));
                MR_Word Cont_135 = ((MR_Word) ((MR_hl_field(1, Cont_10, (MR_Integer) 1))));
                MR_Word next_value_of_tscc_proc_2_input_1_Background_7 = Background_7;
                MR_Word next_value_of_tscc_proc_2_input_2_DeadCellTable_8 = DeadCellTable_8;
                MR_Word next_value_of_tscc_proc_2_input_3_CurrentGoal_9 = CurrentGoal_134;
                MR_Word next_value_of_tscc_proc_2_input_4_Cont_10 = Cont_135;
                MR_Word next_value_of_tscc_proc_2_input_5_STATE_VARIABLE_Table_0_67 = STATE_VARIABLE_Table_97_97;

                // direct tailcall eliminated
                ;
                tscc_proc_2_input_1_Background_7 = next_value_of_tscc_proc_2_input_1_Background_7;
                tscc_proc_2_input_2_DeadCellTable_8 = next_value_of_tscc_proc_2_input_2_DeadCellTable_8;
                tscc_proc_2_input_3_CurrentGoal_9 = next_value_of_tscc_proc_2_input_3_CurrentGoal_9;
                tscc_proc_2_input_4_Cont_10 = next_value_of_tscc_proc_2_input_4_Cont_10;
                tscc_proc_2_input_5_STATE_VARIABLE_Table_0_67 = next_value_of_tscc_proc_2_input_5_STATE_VARIABLE_Table_0_67;
                goto top_of_proc_2;
              }
            }
            break;
          case (MR_Integer) 7:
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.ctgc.structure_reuse.direct.choose_reuse.compute_match_table_with_continuation\'/6", (MR_String) "shorthand");
              return;
            }
            break;
        }
        break;
    }
    tscc_output_1_STATE_VARIABLE_Table_13 = STATE_VARIABLE_Table_68;
    goto tscc_end;
  }
tscc_end:;
  *tscc_output_ptr_1_STATE_VARIABLE_Table_13 = tscc_output_1_STATE_VARIABLE_Table_13;
  return;
}

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__compute_match_table_with_continuation_6_p_0(
  MR_Word tscc_proc_2_input_1_Background_7,
  MR_Word tscc_proc_2_input_2_DeadCellTable_8,
  MR_Word tscc_proc_2_input_3_CurrentGoal_9,
  MR_Word tscc_proc_2_input_4_Cont_10,
  MR_Word tscc_proc_2_input_5_STATE_VARIABLE_Table_0_67,
  MR_Word * tscc_output_ptr_1_STATE_VARIABLE_Table_13)
{
  MR_Word tscc_proc_1_input_1_Background_6;
  MR_Word tscc_proc_1_input_2_DeadCellTable_7;
  MR_Word tscc_proc_1_input_3_Goals_8;
  MR_Word tscc_proc_1_input_4_STATE_VARIABLE_Table_0_12;
  MR_Word tscc_output_1_STATE_VARIABLE_Table_13;

  // The code for TSCC PROC 2: pred transform_hlds.ctgc.structure_reuse.direct.choose_reuse.compute_match_table_with_continuation/6-0.
  ;
  // Setup for mutual tailcalls optimized into a loop.
  ;
  // The mutually recursive procedures are:
  ;
  ;
  // proc 1 in TSCC: pred transform_hlds.ctgc.structure_reuse.direct.choose_reuse.compute_match_table_goal_list/5-0
  ;
  // proc 2 in TSCC: pred transform_hlds.ctgc.structure_reuse.direct.choose_reuse.compute_match_table_with_continuation/6-0
  ;
  ;
  goto top_of_proc_2;
top_of_proc_1:;
  {
    MR_Word Background_6 = tscc_proc_1_input_1_Background_6;
    MR_Word DeadCellTable_7 = tscc_proc_1_input_2_DeadCellTable_7;
    MR_Word Goals_8 = tscc_proc_1_input_3_Goals_8;
    MR_Word STATE_VARIABLE_Table_0_12 = tscc_proc_1_input_4_STATE_VARIABLE_Table_0_12;
    MR_Word STATE_VARIABLE_Table_13;

    if ((Goals_8 == (MR_Word) ((MR_Unsigned) 0U)))
      STATE_VARIABLE_Table_13 = STATE_VARIABLE_Table_0_12;
    else
    {
      MR_Word CurrentGoal_10 = ((MR_Word) ((MR_hl_field(1, Goals_8, (MR_Integer) 0))));
      MR_Word Cont_11 = ((MR_Word) ((MR_hl_field(1, Goals_8, (MR_Integer) 1))));
      MR_Word next_value_of_tscc_proc_2_input_1_Background_7 = Background_6;
      MR_Word next_value_of_tscc_proc_2_input_2_DeadCellTable_8 = DeadCellTable_7;
      MR_Word next_value_of_tscc_proc_2_input_3_CurrentGoal_9 = CurrentGoal_10;
      MR_Word next_value_of_tscc_proc_2_input_4_Cont_10 = Cont_11;
      MR_Word next_value_of_tscc_proc_2_input_5_STATE_VARIABLE_Table_0_67 = STATE_VARIABLE_Table_0_12;

      // direct tailcall eliminated
      ;
      tscc_proc_2_input_1_Background_7 = next_value_of_tscc_proc_2_input_1_Background_7;
      tscc_proc_2_input_2_DeadCellTable_8 = next_value_of_tscc_proc_2_input_2_DeadCellTable_8;
      tscc_proc_2_input_3_CurrentGoal_9 = next_value_of_tscc_proc_2_input_3_CurrentGoal_9;
      tscc_proc_2_input_4_Cont_10 = next_value_of_tscc_proc_2_input_4_Cont_10;
      tscc_proc_2_input_5_STATE_VARIABLE_Table_0_67 = next_value_of_tscc_proc_2_input_5_STATE_VARIABLE_Table_0_67;
      goto top_of_proc_2;
    }
    tscc_output_1_STATE_VARIABLE_Table_13 = STATE_VARIABLE_Table_13;
    goto tscc_end;
  }
top_of_proc_2:;
  {
    MR_Word Background_7 = tscc_proc_2_input_1_Background_7;
    MR_Word DeadCellTable_8 = tscc_proc_2_input_2_DeadCellTable_8;
    MR_Word CurrentGoal_9 = tscc_proc_2_input_3_CurrentGoal_9;
    MR_Word Cont_10 = tscc_proc_2_input_4_Cont_10;
    MR_Word STATE_VARIABLE_Table_0_67 = tscc_proc_2_input_5_STATE_VARIABLE_Table_0_67;
    MR_Word STATE_VARIABLE_Table_68;
    MR_bool succeeded;
    MR_Word GoalExpr_12 = ((MR_Word) ((MR_hl_field(0, CurrentGoal_9, (MR_Integer) 0))));
    MR_Word GoalInfo_13 = ((MR_Word) ((MR_hl_field(0, CurrentGoal_9, (MR_Integer) 1))));

    switch (MR_tag((MR_Word) GoalExpr_12)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word Goal_56 = (MR_Word) ((MR_Word) (GoalExpr_12));
          MR_Word STATE_VARIABLE_Table_85_85;

          transform_hlds__ctgc__structure_reuse__direct__choose_reuse__compute_match_table_with_continuation_6_p_0(Background_7, DeadCellTable_8, Goal_56, (MR_Word) ((MR_Unsigned) 0U), STATE_VARIABLE_Table_0_67, &STATE_VARIABLE_Table_85_85);
          if ((Cont_10 == (MR_Word) ((MR_Unsigned) 0U)))
            STATE_VARIABLE_Table_68 = STATE_VARIABLE_Table_85_85;
          else
          {
            MR_Word CurrentGoal_136 = ((MR_Word) ((MR_hl_field(1, Cont_10, (MR_Integer) 0))));
            MR_Word Cont_137 = ((MR_Word) ((MR_hl_field(1, Cont_10, (MR_Integer) 1))));
            MR_Word next_value_of_tscc_proc_2_input_1_Background_7 = Background_7;
            MR_Word next_value_of_tscc_proc_2_input_2_DeadCellTable_8 = DeadCellTable_8;
            MR_Word next_value_of_tscc_proc_2_input_3_CurrentGoal_9 = CurrentGoal_136;
            MR_Word next_value_of_tscc_proc_2_input_4_Cont_10 = Cont_137;
            MR_Word next_value_of_tscc_proc_2_input_5_STATE_VARIABLE_Table_0_67 = STATE_VARIABLE_Table_85_85;

            // direct tailcall eliminated
            ;
            tscc_proc_2_input_1_Background_7 = next_value_of_tscc_proc_2_input_1_Background_7;
            tscc_proc_2_input_2_DeadCellTable_8 = next_value_of_tscc_proc_2_input_2_DeadCellTable_8;
            tscc_proc_2_input_3_CurrentGoal_9 = next_value_of_tscc_proc_2_input_3_CurrentGoal_9;
            tscc_proc_2_input_4_Cont_10 = next_value_of_tscc_proc_2_input_4_Cont_10;
            tscc_proc_2_input_5_STATE_VARIABLE_Table_0_67 = next_value_of_tscc_proc_2_input_5_STATE_VARIABLE_Table_0_67;
            goto top_of_proc_2;
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Unification_17 = ((MR_Word) ((MR_hl_field(1, GoalExpr_12, (MR_Integer) 3))));
          MR_Word STATE_VARIABLE_Table_71_71;
          MR_Word Var_19;
          MR_Word ConsId_20;
          MR_Word Args_21;
          MR_Word next_value_of_tscc_proc_1_input_1_Background_6;
          MR_Word next_value_of_tscc_proc_1_input_2_DeadCellTable_7;
          MR_Word next_value_of_tscc_proc_1_input_3_Goals_8;
          MR_Word next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Table_0_12;

          succeeded = ((MR_tag((MR_Word) Unification_17)) == (MR_Integer) 1);
          if (succeeded)
          {
            Var_19 = ((MR_Word) ((MR_hl_field(1, Unification_17, (MR_Integer) 0))));
            ConsId_20 = ((MR_Word) ((MR_hl_field(1, Unification_17, (MR_Integer) 1))));
            Args_21 = ((MR_Word) ((MR_hl_field(1, Unification_17, (MR_Integer) 2))));
            {
              MR_Word ProgramPoint_25;
              MR_Word Condition_26;

              ProgramPoint_25 = transform_hlds__smm_common__program_point_init_1_f_0(GoalInfo_13);
              succeeded = transform_hlds__ctgc__structure_reuse__direct__dead_cell_table_search_2_f_0(ProgramPoint_25, DeadCellTable_8, &Condition_26);
              if (succeeded)
              {
                MR_Word ReuseAs_27;
                MR_Word DeconstructionSpec_28;
                MR_Word Match0_29;
                MR_Word Match_30;
                MR_Word Var_69;

                ReuseAs_27 = transform_hlds__ctgc__structure_reuse__domain__reuse_as_init_with_one_condition_1_f_0(Condition_26);
                {
                  DeconstructionSpec_28 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, DeconstructionSpec_28, 0) = ((MR_Box) (Var_19));
                  MR_hl_field(0, DeconstructionSpec_28, 1) = ((MR_Box) (ProgramPoint_25));
                  MR_hl_field(0, DeconstructionSpec_28, 2) = ((MR_Box) (ConsId_20));
                  MR_hl_field(0, DeconstructionSpec_28, 3) = ((MR_Box) (Args_21));
                  MR_hl_field(0, DeconstructionSpec_28, 4) = ((MR_Box) (ReuseAs_27));
                }
                {
                  Var_69 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_69, 0) = ((MR_Box) (DeconstructionSpec_28));
                  MR_hl_field(1, Var_69, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  Match0_29 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, Match0_29, 0) = ((MR_Box) (Var_69));
                  MR_hl_field(0, Match0_29, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(0, Match0_29, 2) = MR_box_float((MR_Float) 0.0000000000000000);
                  MR_hl_field(0, Match0_29, 3) = ((MR_Box) ((MR_Integer) 0));
                }
                transform_hlds__ctgc__structure_reuse__direct__choose_reuse__find_best_match_in_conjunction_4_p_0(Background_7, Cont_10, Match0_29, &Match_30);
                mercury__multi_map__set_4_p_0((MR_Word) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_1[0]), (MR_Word) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_match_0), ((MR_Box) (Var_19)), ((MR_Box) (Match_30)), STATE_VARIABLE_Table_0_67, &STATE_VARIABLE_Table_71_71);
              }
              else
                STATE_VARIABLE_Table_71_71 = STATE_VARIABLE_Table_0_67;
            }
          }
          else
            STATE_VARIABLE_Table_71_71 = STATE_VARIABLE_Table_0_67;
          // direct tailcall eliminated
          ;
          next_value_of_tscc_proc_1_input_1_Background_6 = Background_7;
          next_value_of_tscc_proc_1_input_2_DeadCellTable_7 = DeadCellTable_8;
          next_value_of_tscc_proc_1_input_3_Goals_8 = Cont_10;
          next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Table_0_12 = STATE_VARIABLE_Table_71_71;
          tscc_proc_1_input_1_Background_6 = next_value_of_tscc_proc_1_input_1_Background_6;
          tscc_proc_1_input_2_DeadCellTable_7 = next_value_of_tscc_proc_1_input_2_DeadCellTable_7;
          tscc_proc_1_input_3_Goals_8 = next_value_of_tscc_proc_1_input_3_Goals_8;
          tscc_proc_1_input_4_STATE_VARIABLE_Table_0_12 = next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Table_0_12;
          goto top_of_proc_1;
        }
        break;
      case (MR_Integer) 2:
        if ((Cont_10 == (MR_Word) ((MR_Unsigned) 0U)))
          STATE_VARIABLE_Table_68 = STATE_VARIABLE_Table_0_67;
        else
        {
          MR_Word CurrentGoal_138 = ((MR_Word) ((MR_hl_field(1, Cont_10, (MR_Integer) 0))));
          MR_Word Cont_139 = ((MR_Word) ((MR_hl_field(1, Cont_10, (MR_Integer) 1))));
          MR_Word next_value_of_tscc_proc_2_input_1_Background_7 = Background_7;
          MR_Word next_value_of_tscc_proc_2_input_2_DeadCellTable_8 = DeadCellTable_8;
          MR_Word next_value_of_tscc_proc_2_input_3_CurrentGoal_9 = CurrentGoal_138;
          MR_Word next_value_of_tscc_proc_2_input_4_Cont_10 = Cont_139;
          MR_Word next_value_of_tscc_proc_2_input_5_STATE_VARIABLE_Table_0_67 = STATE_VARIABLE_Table_0_67;

          // direct tailcall eliminated
          ;
          tscc_proc_2_input_1_Background_7 = next_value_of_tscc_proc_2_input_1_Background_7;
          tscc_proc_2_input_2_DeadCellTable_8 = next_value_of_tscc_proc_2_input_2_DeadCellTable_8;
          tscc_proc_2_input_3_CurrentGoal_9 = next_value_of_tscc_proc_2_input_3_CurrentGoal_9;
          tscc_proc_2_input_4_Cont_10 = next_value_of_tscc_proc_2_input_4_Cont_10;
          tscc_proc_2_input_5_STATE_VARIABLE_Table_0_67 = next_value_of_tscc_proc_2_input_5_STATE_VARIABLE_Table_0_67;
          goto top_of_proc_2;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, GoalExpr_12, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            if ((Cont_10 == (MR_Word) ((MR_Unsigned) 0U)))
              STATE_VARIABLE_Table_68 = STATE_VARIABLE_Table_0_67;
            else
            {
              MR_Word CurrentGoal_132 = ((MR_Word) ((MR_hl_field(1, Cont_10, (MR_Integer) 0))));
              MR_Word Cont_133 = ((MR_Word) ((MR_hl_field(1, Cont_10, (MR_Integer) 1))));
              MR_Word next_value_of_tscc_proc_2_input_1_Background_7 = Background_7;
              MR_Word next_value_of_tscc_proc_2_input_2_DeadCellTable_8 = DeadCellTable_8;
              MR_Word next_value_of_tscc_proc_2_input_3_CurrentGoal_9 = CurrentGoal_132;
              MR_Word next_value_of_tscc_proc_2_input_4_Cont_10 = Cont_133;
              MR_Word next_value_of_tscc_proc_2_input_5_STATE_VARIABLE_Table_0_67 = STATE_VARIABLE_Table_0_67;

              // direct tailcall eliminated
              ;
              tscc_proc_2_input_1_Background_7 = next_value_of_tscc_proc_2_input_1_Background_7;
              tscc_proc_2_input_2_DeadCellTable_8 = next_value_of_tscc_proc_2_input_2_DeadCellTable_8;
              tscc_proc_2_input_3_CurrentGoal_9 = next_value_of_tscc_proc_2_input_3_CurrentGoal_9;
              tscc_proc_2_input_4_Cont_10 = next_value_of_tscc_proc_2_input_4_Cont_10;
              tscc_proc_2_input_5_STATE_VARIABLE_Table_0_67 = next_value_of_tscc_proc_2_input_5_STATE_VARIABLE_Table_0_67;
              goto top_of_proc_2;
            }
            break;
          case (MR_Integer) 1:
            if ((Cont_10 == (MR_Word) ((MR_Unsigned) 0U)))
              STATE_VARIABLE_Table_68 = STATE_VARIABLE_Table_0_67;
            else
            {
              MR_Word CurrentGoal_120 = ((MR_Word) ((MR_hl_field(1, Cont_10, (MR_Integer) 0))));
              MR_Word Cont_121 = ((MR_Word) ((MR_hl_field(1, Cont_10, (MR_Integer) 1))));
              MR_Word next_value_of_tscc_proc_2_input_1_Background_7 = Background_7;
              MR_Word next_value_of_tscc_proc_2_input_2_DeadCellTable_8 = DeadCellTable_8;
              MR_Word next_value_of_tscc_proc_2_input_3_CurrentGoal_9 = CurrentGoal_120;
              MR_Word next_value_of_tscc_proc_2_input_4_Cont_10 = Cont_121;
              MR_Word next_value_of_tscc_proc_2_input_5_STATE_VARIABLE_Table_0_67 = STATE_VARIABLE_Table_0_67;

              // direct tailcall eliminated
              ;
              tscc_proc_2_input_1_Background_7 = next_value_of_tscc_proc_2_input_1_Background_7;
              tscc_proc_2_input_2_DeadCellTable_8 = next_value_of_tscc_proc_2_input_2_DeadCellTable_8;
              tscc_proc_2_input_3_CurrentGoal_9 = next_value_of_tscc_proc_2_input_3_CurrentGoal_9;
              tscc_proc_2_input_4_Cont_10 = next_value_of_tscc_proc_2_input_4_Cont_10;
              tscc_proc_2_input_5_STATE_VARIABLE_Table_0_67 = next_value_of_tscc_proc_2_input_5_STATE_VARIABLE_Table_0_67;
              goto top_of_proc_2;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word Goals_50 = ((MR_Word) ((MR_hl_field(3, GoalExpr_12, (MR_Integer) 2))));
              MR_Word NewCont_51;

              mercury__list__append_3_p_1((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), Goals_50, Cont_10, &NewCont_51);
              if ((NewCont_51 == (MR_Word) ((MR_Unsigned) 0U)))
                STATE_VARIABLE_Table_68 = STATE_VARIABLE_Table_0_67;
              else
              {
                MR_Word CurrentGoal_122 = ((MR_Word) ((MR_hl_field(1, NewCont_51, (MR_Integer) 0))));
                MR_Word Cont_123 = ((MR_Word) ((MR_hl_field(1, NewCont_51, (MR_Integer) 1))));
                MR_Word next_value_of_tscc_proc_2_input_1_Background_7 = Background_7;
                MR_Word next_value_of_tscc_proc_2_input_2_DeadCellTable_8 = DeadCellTable_8;
                MR_Word next_value_of_tscc_proc_2_input_3_CurrentGoal_9 = CurrentGoal_122;
                MR_Word next_value_of_tscc_proc_2_input_4_Cont_10 = Cont_123;
                MR_Word next_value_of_tscc_proc_2_input_5_STATE_VARIABLE_Table_0_67 = STATE_VARIABLE_Table_0_67;

                // direct tailcall eliminated
                ;
                tscc_proc_2_input_1_Background_7 = next_value_of_tscc_proc_2_input_1_Background_7;
                tscc_proc_2_input_2_DeadCellTable_8 = next_value_of_tscc_proc_2_input_2_DeadCellTable_8;
                tscc_proc_2_input_3_CurrentGoal_9 = next_value_of_tscc_proc_2_input_3_CurrentGoal_9;
                tscc_proc_2_input_4_Cont_10 = next_value_of_tscc_proc_2_input_4_Cont_10;
                tscc_proc_2_input_5_STATE_VARIABLE_Table_0_67 = next_value_of_tscc_proc_2_input_5_STATE_VARIABLE_Table_0_67;
                goto top_of_proc_2;
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word STATE_VARIABLE_Table_77_77;
              MR_Word Goals_101 = ((MR_Word) ((MR_hl_field(3, GoalExpr_12, (MR_Integer) 1))));
              MR_Word DisjTables_124;
              MR_Word CommonDeadVarsDisjTables_125;
              MR_Word STATE_VARIABLE_Table_17_127;
              MR_Box conv1_STATE_VARIABLE_Table_17_127;
              MR_Box conv3_STATE_VARIABLE_Table_77_77;

              transform_hlds__ctgc__structure_reuse__direct__choose_reuse__compute_match_table_in_disjs_4_p_0(Background_7, DeadCellTable_8, Goals_101, &DisjTables_124);
              mercury__list__foldl_4_p_0((MR_Word) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_2[1]), (MR_Word) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_2[1]), (MR_Word) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_2[8]), DisjTables_124, ((MR_Box) (STATE_VARIABLE_Table_0_67)), &conv1_STATE_VARIABLE_Table_17_127);
              STATE_VARIABLE_Table_17_127 = ((MR_Word) (conv1_STATE_VARIABLE_Table_17_127));
              transform_hlds__ctgc__structure_reuse__direct__choose_reuse__process_possible_common_dead_vars_4_p_0(Background_7, Cont_10, DisjTables_124, &CommonDeadVarsDisjTables_125);
              mercury__list__foldl_4_p_0((MR_Word) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_2[1]), (MR_Word) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_2[1]), (MR_Word) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_2[9]), CommonDeadVarsDisjTables_125, ((MR_Box) (STATE_VARIABLE_Table_17_127)), &conv3_STATE_VARIABLE_Table_77_77);
              STATE_VARIABLE_Table_77_77 = ((MR_Word) (conv3_STATE_VARIABLE_Table_77_77));
              if ((Cont_10 == (MR_Word) ((MR_Unsigned) 0U)))
                STATE_VARIABLE_Table_68 = STATE_VARIABLE_Table_77_77;
              else
              {
                MR_Word CurrentGoal_130 = ((MR_Word) ((MR_hl_field(1, Cont_10, (MR_Integer) 0))));
                MR_Word Cont_131 = ((MR_Word) ((MR_hl_field(1, Cont_10, (MR_Integer) 1))));
                MR_Word next_value_of_tscc_proc_2_input_1_Background_7 = Background_7;
                MR_Word next_value_of_tscc_proc_2_input_2_DeadCellTable_8 = DeadCellTable_8;
                MR_Word next_value_of_tscc_proc_2_input_3_CurrentGoal_9 = CurrentGoal_130;
                MR_Word next_value_of_tscc_proc_2_input_4_Cont_10 = Cont_131;
                MR_Word next_value_of_tscc_proc_2_input_5_STATE_VARIABLE_Table_0_67 = STATE_VARIABLE_Table_77_77;

                // direct tailcall eliminated
                ;
                tscc_proc_2_input_1_Background_7 = next_value_of_tscc_proc_2_input_1_Background_7;
                tscc_proc_2_input_2_DeadCellTable_8 = next_value_of_tscc_proc_2_input_2_DeadCellTable_8;
                tscc_proc_2_input_3_CurrentGoal_9 = next_value_of_tscc_proc_2_input_3_CurrentGoal_9;
                tscc_proc_2_input_4_Cont_10 = next_value_of_tscc_proc_2_input_4_Cont_10;
                tscc_proc_2_input_5_STATE_VARIABLE_Table_0_67 = next_value_of_tscc_proc_2_input_5_STATE_VARIABLE_Table_0_67;
                goto top_of_proc_2;
              }
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word Cases_54 = ((MR_Word) ((MR_hl_field(3, GoalExpr_12, (MR_Integer) 3))));
              MR_Word STATE_VARIABLE_Table_82_82;
              MR_Word Goals_103;

              Goals_103 = mercury__list__map_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_2[11]), Cases_54);
              transform_hlds__ctgc__structure_reuse__direct__choose_reuse__compute_match_table_in_disjunction_6_p_0(Background_7, DeadCellTable_8, Goals_103, Cont_10, STATE_VARIABLE_Table_0_67, &STATE_VARIABLE_Table_82_82);
              if ((Cont_10 == (MR_Word) ((MR_Unsigned) 0U)))
                STATE_VARIABLE_Table_68 = STATE_VARIABLE_Table_82_82;
              else
              {
                MR_Word CurrentGoal_140 = ((MR_Word) ((MR_hl_field(1, Cont_10, (MR_Integer) 0))));
                MR_Word Cont_141 = ((MR_Word) ((MR_hl_field(1, Cont_10, (MR_Integer) 1))));
                MR_Word next_value_of_tscc_proc_2_input_1_Background_7 = Background_7;
                MR_Word next_value_of_tscc_proc_2_input_2_DeadCellTable_8 = DeadCellTable_8;
                MR_Word next_value_of_tscc_proc_2_input_3_CurrentGoal_9 = CurrentGoal_140;
                MR_Word next_value_of_tscc_proc_2_input_4_Cont_10 = Cont_141;
                MR_Word next_value_of_tscc_proc_2_input_5_STATE_VARIABLE_Table_0_67 = STATE_VARIABLE_Table_82_82;

                // direct tailcall eliminated
                ;
                tscc_proc_2_input_1_Background_7 = next_value_of_tscc_proc_2_input_1_Background_7;
                tscc_proc_2_input_2_DeadCellTable_8 = next_value_of_tscc_proc_2_input_2_DeadCellTable_8;
                tscc_proc_2_input_3_CurrentGoal_9 = next_value_of_tscc_proc_2_input_3_CurrentGoal_9;
                tscc_proc_2_input_4_Cont_10 = next_value_of_tscc_proc_2_input_4_Cont_10;
                tscc_proc_2_input_5_STATE_VARIABLE_Table_0_67 = next_value_of_tscc_proc_2_input_5_STATE_VARIABLE_Table_0_67;
                goto top_of_proc_2;
              }
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word Goal_104 = ((MR_Word) ((MR_hl_field(3, GoalExpr_12, (MR_Integer) 2))));
              MR_Word next_value_of_tscc_proc_2_input_1_Background_7 = Background_7;
              MR_Word next_value_of_tscc_proc_2_input_2_DeadCellTable_8 = DeadCellTable_8;
              MR_Word next_value_of_tscc_proc_2_input_3_CurrentGoal_9 = Goal_104;
              MR_Word next_value_of_tscc_proc_2_input_4_Cont_10 = Cont_10;
              MR_Word next_value_of_tscc_proc_2_input_5_STATE_VARIABLE_Table_0_67 = STATE_VARIABLE_Table_0_67;

              // direct tailcall eliminated
              ;
              tscc_proc_2_input_1_Background_7 = next_value_of_tscc_proc_2_input_1_Background_7;
              tscc_proc_2_input_2_DeadCellTable_8 = next_value_of_tscc_proc_2_input_2_DeadCellTable_8;
              tscc_proc_2_input_3_CurrentGoal_9 = next_value_of_tscc_proc_2_input_3_CurrentGoal_9;
              tscc_proc_2_input_4_Cont_10 = next_value_of_tscc_proc_2_input_4_Cont_10;
              tscc_proc_2_input_5_STATE_VARIABLE_Table_0_67 = next_value_of_tscc_proc_2_input_5_STATE_VARIABLE_Table_0_67;
              goto top_of_proc_2;
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word CondGoal_59 = ((MR_Word) ((MR_hl_field(3, GoalExpr_12, (MR_Integer) 2))));
              MR_Word ThenGoal_60 = ((MR_Word) ((MR_hl_field(3, GoalExpr_12, (MR_Integer) 3))));
              MR_Word ElseGoal_61 = ((MR_Word) ((MR_hl_field(3, GoalExpr_12, (MR_Integer) 4))));
              MR_Word Table0_62;
              MR_Word TableThen_63;
              MR_Word TableElse_64;
              MR_Word CommonDeadVarsTables_65;
              MR_Word Var_88;
              MR_Word STATE_VARIABLE_Table_91_91;
              MR_Word STATE_VARIABLE_Table_92_92;
              MR_Word Var_93;
              MR_Word Var_94;
              MR_Word STATE_VARIABLE_Table_97_97;
              MR_Box conv5_STATE_VARIABLE_Table_97_97;

              mercury__multi_map__init_1_p_0((MR_Word) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_1[0]), (MR_Word) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_match_0), &Table0_62);
              {
                Var_88 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_88, 0) = ((MR_Box) (ThenGoal_60));
                MR_hl_field(1, Var_88, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              transform_hlds__ctgc__structure_reuse__direct__choose_reuse__compute_match_table_with_continuation_6_p_0(Background_7, DeadCellTable_8, CondGoal_59, Var_88, Table0_62, &TableThen_63);
              transform_hlds__ctgc__structure_reuse__direct__choose_reuse__compute_match_table_with_continuation_6_p_0(Background_7, DeadCellTable_8, ElseGoal_61, (MR_Word) ((MR_Unsigned) 0U), Table0_62, &TableElse_64);
              mercury__multi_map__merge_3_p_0((MR_Word) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_1[0]), (MR_Word) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_match_0), TableThen_63, STATE_VARIABLE_Table_0_67, &STATE_VARIABLE_Table_91_91);
              mercury__multi_map__merge_3_p_0((MR_Word) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_1[0]), (MR_Word) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_match_0), TableElse_64, STATE_VARIABLE_Table_91_91, &STATE_VARIABLE_Table_92_92);
              {
                Var_94 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_94, 0) = ((MR_Box) (TableElse_64));
                MR_hl_field(1, Var_94, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                Var_93 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_93, 0) = ((MR_Box) (TableThen_63));
                MR_hl_field(1, Var_93, 1) = ((MR_Box) (Var_94));
              }
              transform_hlds__ctgc__structure_reuse__direct__choose_reuse__process_possible_common_dead_vars_4_p_0(Background_7, Cont_10, Var_93, &CommonDeadVarsTables_65);
              mercury__list__foldl_4_p_0((MR_Word) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_2[1]), (MR_Word) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_2[1]), (MR_Word) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_2[10]), CommonDeadVarsTables_65, ((MR_Box) (STATE_VARIABLE_Table_92_92)), &conv5_STATE_VARIABLE_Table_97_97);
              STATE_VARIABLE_Table_97_97 = ((MR_Word) (conv5_STATE_VARIABLE_Table_97_97));
              if ((Cont_10 == (MR_Word) ((MR_Unsigned) 0U)))
                STATE_VARIABLE_Table_68 = STATE_VARIABLE_Table_97_97;
              else
              {
                MR_Word CurrentGoal_134 = ((MR_Word) ((MR_hl_field(1, Cont_10, (MR_Integer) 0))));
                MR_Word Cont_135 = ((MR_Word) ((MR_hl_field(1, Cont_10, (MR_Integer) 1))));
                MR_Word next_value_of_tscc_proc_2_input_1_Background_7 = Background_7;
                MR_Word next_value_of_tscc_proc_2_input_2_DeadCellTable_8 = DeadCellTable_8;
                MR_Word next_value_of_tscc_proc_2_input_3_CurrentGoal_9 = CurrentGoal_134;
                MR_Word next_value_of_tscc_proc_2_input_4_Cont_10 = Cont_135;
                MR_Word next_value_of_tscc_proc_2_input_5_STATE_VARIABLE_Table_0_67 = STATE_VARIABLE_Table_97_97;

                // direct tailcall eliminated
                ;
                tscc_proc_2_input_1_Background_7 = next_value_of_tscc_proc_2_input_1_Background_7;
                tscc_proc_2_input_2_DeadCellTable_8 = next_value_of_tscc_proc_2_input_2_DeadCellTable_8;
                tscc_proc_2_input_3_CurrentGoal_9 = next_value_of_tscc_proc_2_input_3_CurrentGoal_9;
                tscc_proc_2_input_4_Cont_10 = next_value_of_tscc_proc_2_input_4_Cont_10;
                tscc_proc_2_input_5_STATE_VARIABLE_Table_0_67 = next_value_of_tscc_proc_2_input_5_STATE_VARIABLE_Table_0_67;
                goto top_of_proc_2;
              }
            }
            break;
          case (MR_Integer) 7:
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.ctgc.structure_reuse.direct.choose_reuse.compute_match_table_with_continuation\'/6", (MR_String) "shorthand");
              return;
            }
            break;
        }
        break;
    }
    tscc_output_1_STATE_VARIABLE_Table_13 = STATE_VARIABLE_Table_68;
    goto tscc_end;
  }
tscc_end:;
  *tscc_output_ptr_1_STATE_VARIABLE_Table_13 = tscc_output_1_STATE_VARIABLE_Table_13;
  return;
}

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__find_best_match_in_conjunction_4_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv3_Result_6;

  transform_hlds__ctgc__structure_reuse__direct__choose_reuse__reverse_compare_matches_value_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv3_Result_6);
  *wrapper_arg_3 = ((MR_Box) (conv3_Result_6));
}

static MR_Box MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__find_best_match_in_conjunction_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_Box wrapper_arg_3;
  MR_Box closure = closure_arg;
  MR_Integer conv1_HeadVar__3_3;

  conv1_HeadVar__3_3 = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__add_degree_2_f_0(((MR_Word) (wrapper_arg_1)), ((MR_Integer) (wrapper_arg_2)));
  wrapper_arg_3 = ((MR_Box) (conv1_HeadVar__3_3));
  return wrapper_arg_3;
}

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__find_best_match_in_conjunction_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_Match_8;

  transform_hlds__ctgc__structure_reuse__direct__choose_reuse__find_match_in_goal_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), &conv0_Match_8);
  *wrapper_arg_2 = ((MR_Box) (conv0_Match_8));
}

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__find_best_match_in_conjunction_4_p_0(
  MR_Word Background_5,
  MR_Word Goals_6,
  MR_Word STATE_VARIABLE_Match_0_11,
  MR_Word * STATE_VARIABLE_Match_12)
{
  MR_Word ExclusiveMatches_9;
  MR_Integer Degree_10;
  MR_Word Var_13;
  MR_Word STATE_VARIABLE_Match_14_14;
  MR_Word Sorted_27;
  MR_Word Var_30;
  MR_Box conv2_Degree_10;
  MR_Word Var_15;
  MR_Word Var_16;
  MR_Float Var_17;

  {
    Var_13 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_13, 0) = ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_4[1]));
    MR_hl_field(0, Var_13, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__find_best_match_in_conjunction_4_p_0_1));
    MR_hl_field(0, Var_13, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_13, 3) = ((MR_Box) (Background_5));
    MR_hl_field(0, Var_13, 4) = ((MR_Box) (STATE_VARIABLE_Match_0_11));
  }
  mercury__list__map_3_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_match_0), Var_13, Goals_6, &ExclusiveMatches_9);
  conv2_Degree_10 = mercury__list__foldl_3_f_0((MR_Word) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_match_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_2[6]), ExclusiveMatches_9, ((MR_Box) ((MR_Integer) 0)));
  Degree_10 = ((MR_Integer) (conv2_Degree_10));
  {
    Var_30 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_30, 0) = ((MR_Box) (STATE_VARIABLE_Match_0_11));
    MR_hl_field(1, Var_30, 1) = ((MR_Box) (ExclusiveMatches_9));
  }
  mercury__list__sort_3_p_0((MR_Word) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_match_0), (MR_Word) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_2[7]), Var_30, &Sorted_27);
  if ((Sorted_27 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.ctgc.structure_reuse.direct.choose_reuse.highest_match_in_list\'/3", (MR_String) "empty list of matches");
      return;
    }
  else
    STATE_VARIABLE_Match_14_14 = ((MR_Word) ((MR_hl_field(1, Sorted_27, (MR_Integer) 0))));
  Var_15 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Match_14_14, (MR_Integer) 0))));
  Var_16 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Match_14_14, (MR_Integer) 1))));
  Var_17 = MR_unbox_float((MR_hl_field(0, STATE_VARIABLE_Match_14_14, (MR_Integer) 2)));
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_Match_12 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_15));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_16));
    MR_hl_field(0, base, 2) = MR_box_float(Var_17);
    MR_hl_field(0, base, 3) = ((MR_Box) (Degree_10));
  }
}

static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__process_possible_common_dead_vars_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;
  MR_Word conv2_Table_10;

  succeeded = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__process_common_var_5_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), &conv2_Table_10);
  if (succeeded)
  {
    *wrapper_arg_2 = ((MR_Box) (conv2_Table_10));
    succeeded = MR_TRUE;
  }
  return succeeded;
}

static MR_Box MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__process_possible_common_dead_vars_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_Box wrapper_arg_3;
  MR_Box closure = closure_arg;
  MR_Word conv0_List_6;

  conv0_List_6 = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__common_var_with_list_2_f_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  wrapper_arg_3 = ((MR_Box) (conv0_List_6));
  return wrapper_arg_3;
}

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__process_possible_common_dead_vars_4_p_0(
  MR_Word Background_5,
  MR_Word Cont_6,
  MR_Word DisjTables_7,
  MR_Word * ExtraTables_8)
{
  MR_bool succeeded;

  if ((DisjTables_7 == (MR_Word) ((MR_Unsigned) 0U)))
    *ExtraTables_8 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word First_17 = ((MR_Word) ((MR_hl_field(1, DisjTables_7, (MR_Integer) 0))));
    MR_Word RestTables_18 = ((MR_Word) ((MR_hl_field(1, DisjTables_7, (MR_Integer) 1))));
    MR_Word Var_20;
    MR_Word CommonDeadVars_25;
    MR_Box conv1_CommonDeadVars_25;

    Var_20 = mercury__map__keys_1_f_0((MR_Word) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_1[0]), (MR_Word) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_1[1]), First_17);
    conv1_CommonDeadVars_25 = mercury__list__foldl_3_f_0((MR_Word) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_2[1]), (MR_Word) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_1[2]), (MR_Word) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_2[5]), RestTables_18, ((MR_Box) (Var_20)));
    CommonDeadVars_25 = ((MR_Word) (conv1_CommonDeadVars_25));
    if ((CommonDeadVars_25 == (MR_Word) ((MR_Unsigned) 0U)))
      *ExtraTables_8 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word Var_12;

      {
        Var_12 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_12, 0) = ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_6[0]));
        MR_hl_field(0, Var_12, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__process_possible_common_dead_vars_4_p_0_2));
        MR_hl_field(0, Var_12, 2) = ((MR_Box) ((MR_Integer) 3));
        MR_hl_field(0, Var_12, 3) = ((MR_Box) (Background_5));
        MR_hl_field(0, Var_12, 4) = ((MR_Box) (Cont_6));
        MR_hl_field(0, Var_12, 5) = ((MR_Box) (DisjTables_7));
      }
      mercury__list__filter_map_3_p_0((MR_Word) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_1[0]), (MR_Word) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_2[1]), Var_12, CommonDeadVars_25, ExtraTables_8);
    }
  }
}

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__compute_match_table_in_disjunction_6_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv6_HeadVar__3_27;

  transform_hlds__ctgc__structure_reuse__direct__choose_reuse__IntroducedFrom__pred__compute_match_table_in_disjunction__699__1_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv6_HeadVar__3_27);
  *wrapper_arg_3 = ((MR_Box) (conv6_HeadVar__3_27));
}

static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__compute_match_table_in_disjunction_6_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;
  MR_Word conv5_Table_10;

  succeeded = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__process_common_var_5_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), &conv5_Table_10);
  if (succeeded)
  {
    *wrapper_arg_2 = ((MR_Box) (conv5_Table_10));
    succeeded = MR_TRUE;
  }
  return succeeded;
}

static MR_Box MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__compute_match_table_in_disjunction_6_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_Box wrapper_arg_3;
  MR_Box closure = closure_arg;
  MR_Word conv3_List_6;

  conv3_List_6 = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__common_var_with_list_2_f_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  wrapper_arg_3 = ((MR_Box) (conv3_List_6));
  return wrapper_arg_3;
}

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__compute_match_table_in_disjunction_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_HeadVar__3_21;

  transform_hlds__ctgc__structure_reuse__direct__choose_reuse__IntroducedFrom__pred__compute_match_table_in_disjunction__691__1_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_HeadVar__3_21);
  *wrapper_arg_3 = ((MR_Box) (conv1_HeadVar__3_21));
}

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__compute_match_table_in_disjunction_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_MatchTable_8;

  transform_hlds__ctgc__structure_reuse__direct__choose_reuse__compute_match_table_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), &conv0_MatchTable_8);
  *wrapper_arg_2 = ((MR_Box) (conv0_MatchTable_8));
}

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__compute_match_table_in_disjunction_6_p_0(
  MR_Word Background_7,
  MR_Word DeadCellTable_8,
  MR_Word DisjGoals_9,
  MR_Word Cont_10,
  MR_Word STATE_VARIABLE_Table_0_14,
  MR_Word * STATE_VARIABLE_Table_15)
{
  MR_bool succeeded;
  MR_Word DisjTables_12;
  MR_Word CommonDeadVarsDisjTables_13;
  MR_Word STATE_VARIABLE_Table_17_17;
  MR_Word Var_25;
  MR_Box conv2_STATE_VARIABLE_Table_17_17;
  MR_Box conv7_STATE_VARIABLE_Table_15;

  {
    Var_25 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_25, 0) = ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_4[0]));
    MR_hl_field(0, Var_25, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__compute_match_table_in_disjunction_6_p_0_1));
    MR_hl_field(0, Var_25, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_25, 3) = ((MR_Box) (Background_7));
    MR_hl_field(0, Var_25, 4) = ((MR_Box) (DeadCellTable_8));
  }
  mercury__list__map_3_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_2[1]), Var_25, DisjGoals_9, &DisjTables_12);
  mercury__list__foldl_4_p_0((MR_Word) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_2[1]), (MR_Word) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_2[1]), (MR_Word) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_2[2]), DisjTables_12, ((MR_Box) (STATE_VARIABLE_Table_0_14)), &conv2_STATE_VARIABLE_Table_17_17);
  STATE_VARIABLE_Table_17_17 = ((MR_Word) (conv2_STATE_VARIABLE_Table_17_17));
  if ((DisjTables_12 == (MR_Word) ((MR_Unsigned) 0U)))
    CommonDeadVarsDisjTables_13 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word First_32 = ((MR_Word) ((MR_hl_field(1, DisjTables_12, (MR_Integer) 0))));
    MR_Word RestTables_33 = ((MR_Word) ((MR_hl_field(1, DisjTables_12, (MR_Integer) 1))));
    MR_Word Var_35;
    MR_Word CommonDeadVars_40;
    MR_Box conv4_CommonDeadVars_40;

    Var_35 = mercury__map__keys_1_f_0((MR_Word) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_1[0]), (MR_Word) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_1[1]), First_32);
    conv4_CommonDeadVars_40 = mercury__list__foldl_3_f_0((MR_Word) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_2[1]), (MR_Word) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_1[2]), (MR_Word) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_2[3]), RestTables_33, ((MR_Box) (Var_35)));
    CommonDeadVars_40 = ((MR_Word) (conv4_CommonDeadVars_40));
    if ((CommonDeadVars_40 == (MR_Word) ((MR_Unsigned) 0U)))
      CommonDeadVarsDisjTables_13 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word Var_29;

      {
        Var_29 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_29, 0) = ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_6[0]));
        MR_hl_field(0, Var_29, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__compute_match_table_in_disjunction_6_p_0_4));
        MR_hl_field(0, Var_29, 2) = ((MR_Box) ((MR_Integer) 3));
        MR_hl_field(0, Var_29, 3) = ((MR_Box) (Background_7));
        MR_hl_field(0, Var_29, 4) = ((MR_Box) (Cont_10));
        MR_hl_field(0, Var_29, 5) = ((MR_Box) (DisjTables_12));
      }
      mercury__list__filter_map_3_p_0((MR_Word) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_1[0]), (MR_Word) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_2[1]), Var_29, CommonDeadVars_40, &CommonDeadVarsDisjTables_13);
    }
  }
  mercury__list__foldl_4_p_0((MR_Word) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_2[1]), (MR_Word) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_2[1]), (MR_Word) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_2[4]), CommonDeadVarsDisjTables_13, ((MR_Box) (STATE_VARIABLE_Table_17_17)), &conv7_STATE_VARIABLE_Table_15);
  *STATE_VARIABLE_Table_15 = ((MR_Word) (conv7_STATE_VARIABLE_Table_15));
}

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__compute_match_table_in_disjs_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_MatchTable_8;

  transform_hlds__ctgc__structure_reuse__direct__choose_reuse__compute_match_table_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), &conv0_MatchTable_8);
  *wrapper_arg_2 = ((MR_Box) (conv0_MatchTable_8));
}

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__compute_match_table_in_disjs_4_p_0(
  MR_Word Background_5,
  MR_Word DeadCellTable_6,
  MR_Word Branches_7,
  MR_Word * Tables_8)
{
  MR_Word Var_9;

  {
    Var_9 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_9, 0) = ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_4[0]));
    MR_hl_field(0, Var_9, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__compute_match_table_in_disjs_4_p_0_1));
    MR_hl_field(0, Var_9, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_9, 3) = ((MR_Box) (Background_5));
    MR_hl_field(0, Var_9, 4) = ((MR_Box) (DeadCellTable_6));
  }
  mercury__list__map_3_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_2[1]), Var_9, Branches_7, Tables_8);
}

static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse____Unify____background_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = transform_hlds__ctgc__structure_reuse__direct__choose_reuse____Unify____background_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse____Compare____background_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  transform_hlds__ctgc__structure_reuse__direct__choose_reuse____Compare____background_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse____Unify____construction_spec_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = transform_hlds__ctgc__structure_reuse__direct__choose_reuse____Unify____construction_spec_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse____Compare____construction_spec_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  transform_hlds__ctgc__structure_reuse__direct__choose_reuse____Compare____construction_spec_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse____Unify____deconstruction_spec_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = transform_hlds__ctgc__structure_reuse__direct__choose_reuse____Unify____deconstruction_spec_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse____Compare____deconstruction_spec_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  transform_hlds__ctgc__structure_reuse__direct__choose_reuse____Compare____deconstruction_spec_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse____Unify____match_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = transform_hlds__ctgc__structure_reuse__direct__choose_reuse____Unify____match_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse____Compare____match_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  transform_hlds__ctgc__structure_reuse__direct__choose_reuse____Compare____match_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse____Unify____match_table_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = transform_hlds__ctgc__structure_reuse__direct__choose_reuse____Unify____match_table_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse____Compare____match_table_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  transform_hlds__ctgc__structure_reuse__direct__choose_reuse____Compare____match_table_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse____Unify____reuse_type_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = transform_hlds__ctgc__structure_reuse__direct__choose_reuse____Unify____reuse_type_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse____Compare____reuse_type_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  transform_hlds__ctgc__structure_reuse__direct__choose_reuse____Compare____reuse_type_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__init(void)
{
}

void mercury__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_background_info_0);
	MR_register_type_ctor_info(&transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_construction_spec_0);
	MR_register_type_ctor_info(&transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_deconstruction_spec_0);
	MR_register_type_ctor_info(&transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_match_0);
	MR_register_type_ctor_info(&transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_match_table_0);
	MR_register_type_ctor_info(&transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_reuse_type_0);
}

void mercury__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module transform_hlds.ctgc.structure_reuse.direct.choose_reuse.
