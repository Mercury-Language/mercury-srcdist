/*
** Automatically generated from `structure_reuse.direct.choose_reuse.m'
** by the Mercury compiler,
** version rotd-2018-03-13
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
#include "check_hlds.mih"
#include "hlds.mih"
#include "libs.mih"
#include "mdbcomp.mih"
#include "mode_robdd.mih"
#include "parse_tree.mih"
#include "recompilation.mih"
#include "transform_hlds.mih"
#include "check_hlds.delay_info.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.proc_requests.mih"
#include "check_hlds.type_util.mih"
#include "hlds.const_struct.mih"
#include "hlds.hlds_args.mih"
#include "hlds.hlds_class.mih"
#include "hlds.hlds_clauses.mih"
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
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "hlds.vartypes.mih"
#include "libs.compiler_util.mih"
#include "libs.dependency_graph.mih"
#include "libs.file_util.mih"
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
#include "deconstruct.mih"
#include "digraph.mih"
#include "enum.mih"
#include "float.mih"
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
#include "parse_tree.prog_type.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.ctgc.mih"
#include "transform_hlds.smm_common.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"
#include "string.format.mih"
#include "string.parse_util.mih"
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

static const MR_FA_TypeInfo_Struct2 transform_hlds__ctgc__structure_reuse__direct__choose_reuse__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0;

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

static const MR_DuFunctorDesc transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__du_functor_desc_reuse_type_0_0;

static const MR_DuFunctorDescPtr transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__du_stag_ordered_reuse_type_0_0[1];

static const MR_DuPtagLayout transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__du_ptag_ordered_reuse_type_0[1];

static const MR_DuFunctorDescPtr transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__du_name_ordered_reuse_type_0[1];

static const MR_Integer transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__functor_number_map_reuse_type_0[1];

static MR_Word MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__IntroducedFrom__func__dump_match_details__1375__1_1_f_0(
  MR_Word LambdaHeadVar__1_15);

static MR_Word MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__IntroducedFrom__func__find_match_in_goal_2__860__1_1_f_0(
  MR_Word LambdaHeadVar__1_85);

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__IntroducedFrom__pred__compute_match_table_in_disjunction__690__1_3_p_0(
  MR_Word HeadVar__1_26,
  MR_Word HeadVar__2_27,
  MR_Word * HeadVar__3_28);

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__IntroducedFrom__pred__compute_match_table_in_disjunction__682__1_3_p_0(
  MR_Word HeadVar__1_20,
  MR_Word HeadVar__2_21,
  MR_Word * HeadVar__3_22);

static MR_Word MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__IntroducedFrom__func__compute_match_table_with_continuation__624__1_1_f_0(
  MR_Word LambdaHeadVar__1_88);

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__IntroducedFrom__pred__compute_match_table_with_continuation__654__1_3_p_0(
  MR_Word HeadVar__1_115,
  MR_Word HeadVar__2_116,
  MR_Word * HeadVar__3_117);

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__IntroducedFrom__pred__average_match__439__1_3_p_0(
  MR_Word LambdaHeadVar__1_19,
  MR_Word LambdaHeadVar__2_20,
  MR_Word * LambdaHeadVar__3_21);

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

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__maybe_dump_full_table_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

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
  MR_Word Cons_4);

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
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__find_match_in_goal_2_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

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

static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__empty_reuse_description_1_p_0(
  MR_Word HeadVar__1_1);

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
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__average_match_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__average_match_2_p_0(
  MR_Word List_3,
  MR_Word * AverageMatch_4);

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
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__choose_reuse_in_goal_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__choose_reuse_in_goal_7_p_0(
  MR_Word Background_8,
  MR_Word STATE_VARIABLE_DeadCellTable_0_24,
  MR_Word * STATE_VARIABLE_DeadCellTable_25,
  MR_Word STATE_VARIABLE_Goal_0_26,
  MR_Word * STATE_VARIABLE_Goal_27,
  MR_Word STATE_VARIABLE_ReuseAs_0_28,
  MR_Word * STATE_VARIABLE_ReuseAs_29);

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__maybe_dump_match_table_5_p_0(
  MR_Word VeryVerbose_6,
  MR_Word MatchTable_7,
  MR_Word HighestMatch_8);

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__dump_full_table_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__dump_full_table_3_p_0(
  MR_Word MatchTable_4);

static MR_Box MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__dump_match_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__dump_match_4_p_0(
  MR_String Prefix_5,
  MR_Word Match_6);

static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__dump_match_details_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__dump_match_details_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__dump_match_details_3_p_0(
  MR_Word Match_4);

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
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__match_get_dead_cons_ids_1_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Word MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__match_get_dead_cons_ids_1_f_0(
  MR_Word Match_3);

static MR_Box MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__compute_match_table_with_continuation_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

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

static MR_Word MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__match_init_1_f_0(
  MR_Word DS_3);

static MR_Word MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__deconstruction_spec_init_5_f_0(
  MR_Word Var_7,
  MR_Word PP_8,
  MR_Word ConsId_9,
  MR_Word Args_10,
  MR_Word Cond_11);

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__remove_deconstructions_from_dead_cell_table_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__remove_deconstructions_from_dead_cell_table_3_p_0(
  MR_Word Match_4,
  MR_Word STATE_VARIABLE_DeadCellTable_0_7,
  MR_Word * STATE_VARIABLE_DeadCellTable_8);

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__match_get_condition_2_f_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_Box MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__match_get_condition_2_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Word MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__match_get_condition_2_f_0(
  MR_Word Background_4,
  MR_Word Match_5);

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

static /* final */ const MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_2[26][3];

static /* final */ const MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_3[7][5];

static /* final */ const MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_4[2][8];

static /* final */ const MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_5[10][6];

static /* final */ const MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_6[6][7];

static /* final */ const MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_7[2][1];

static /* final */ const MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_8[2][4];

static /* final */ const MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_9[1][9];




static /* final */ const MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_1[6][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_match_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_1[0]))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_deconstruction_spec_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_construction_spec_0))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_needs_update_0))
  },
};

static /* final */ const MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_2[26][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_condition_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_1[0])),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_1[1]))
  },
  /* row 2 */
  {
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_3[0])),
    ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__match_get_condition_2_f_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_5[0])),
    ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__remove_deconstructions_from_dead_cell_table_3_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_5[1])),
    ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__compute_match_table_in_disjunction_6_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 5 */
  {
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_5[2])),
    ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__compute_match_table_in_disjunction_6_p_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 6 */
  {
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_5[1])),
    ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__compute_match_table_in_disjunction_6_p_0_5)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 7 */
  {
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_5[2])),
    ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__process_possible_common_dead_vars_4_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 8 */
  {
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_5[3])),
    ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__find_best_match_in_conjunction_4_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 9 */
  {
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_5[4])),
    ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__find_best_match_in_conjunction_4_p_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 10 */
  {
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_5[1])),
    ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__compute_match_table_with_continuation_6_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 11 */
  {
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_3[1])),
    ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__compute_match_table_with_continuation_6_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 12 */
  {
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_3[2])),
    ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__match_get_dead_cons_ids_1_f_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 13 */
  {
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_3[5])),
    ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__annotate_reuse_for_unification_5_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 14 */
  {
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_3[0])),
    ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__dump_match_details_3_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 15 */
  {
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_8[0])),
    ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__dump_match_details_3_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 16 */
  {
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_3[5])),
    ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__dump_match_4_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 17 */
  {
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_5[4])),
    ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__choose_reuse_in_goal_7_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 18 */
  {
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_5[7])),
    ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__average_match_2_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 19 */
  {
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_5[3])),
    ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__process_common_var_5_p_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 20 */
  {
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_5[4])),
    ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__process_common_var_5_p_0_4)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 21 */
  {
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_3[6])),
    ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__deconstruction_specs_2_4_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 22 */
  {
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_5[7])),
    ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__find_match_in_disjunction_4_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 23 */
  {
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_5[8])),
    ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__verify_match_7_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 24 */
  {
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_3[1])),
    ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__find_match_in_goal_2_4_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 25 */
  {
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_5[9])),
    ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__glb_reuse_types_2_2_f_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_3[7][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_deconstruction_spec_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_as_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_deconstruction_spec_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_deconstruction_spec_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_construction_spec_0))
  },
  /* row 5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_deconstruction_spec_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 6 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_match_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse__list__pti_list_1__plain_transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_deconstruction_spec_0))
  },
};

static /* final */ const MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_4[2][8] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_as_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_as_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_as_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_background_info_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse__list__pti_list_1__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse__list__pti_list_1__plain_tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0list__ti_list_1transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_match_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_list__ti_list_1transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_match_0))
  },
};

static /* final */ const MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_5[10][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_deconstruction_spec_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse__tree234__pti_tree234_2__plain_transform_hlds__smm_common__type_ctor_info_program_point_0__plain_transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_condition_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse__tree234__pti_tree234_2__plain_transform_hlds__smm_common__type_ctor_info_program_point_0__plain_transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_condition_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_list__ti_list_1transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_match_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_list__ti_list_1transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_match_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_list__ti_list_1transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_match_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_list__ti_list_1transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_match_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_match_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_match_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_match_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_comparison_result_0))
  },
  /* row 5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse__tree234__pti_tree234_2__plain_transform_hlds__smm_common__type_ctor_info_program_point_0__plain_transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_condition_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0))
  },
  /* row 6 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse__tree234__pti_tree234_2__plain_transform_hlds__smm_common__type_ctor_info_program_point_0__plain_transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_condition_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0))
  },
  /* row 7 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_match_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_match_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_match_0))
  },
  /* row 8 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_reuse_type_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_reuse_type_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_reuse_type_0))
  },
  /* row 9 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_needs_update_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_needs_update_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_needs_update_0))
  },
};

static /* final */ const MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_6[6][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_background_info_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse__tree234__pti_tree234_2__plain_transform_hlds__smm_common__type_ctor_info_program_point_0__plain_transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_condition_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_list__ti_list_1transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_match_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_background_info_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_match_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_match_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_background_info_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_match_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_background_info_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_match_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_match_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_list__ti_list_1transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_match_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse__list__pti_list_1__plain_transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_deconstruction_spec_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse__list__pti_list_1__plain_transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_deconstruction_spec_0))
  },
};

static /* final */ const MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_7[2][1] = {
  /* row 0 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 1 */
  {
    ((MR_Box) (((MR_Integer) 0 | (((((MR_Integer) 0 << (MR_Integer) 1)) | (((((MR_Integer) 0 << (MR_Integer) 2)) | (((((MR_Integer) 0 << (MR_Integer) 3)) | (((MR_Integer) 0 << (MR_Integer) 4)))))))))))
  },
};

static /* final */ const MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_8[2][4] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_as_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_6[4])),
    ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__dump_full_table_3_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_String) "%-----"))
  },
};

static /* final */ const MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_9[1][9] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_background_info_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_deconstruction_spec_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_reuse_type_0))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__ctgc__structure_reuse__direct__choose_reuse__tree234__pti_tree234_2__plain_transform_hlds__smm_common__type_ctor_info_program_point_0__plain_transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_condition_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0,
    (MR_PseudoTypeInfo) &transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_condition_0
  }
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__ctgc__structure_reuse__direct__choose_reuse__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__ctgc__structure_reuse__direct__choose_reuse__list__ti_list_1transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_match_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_match_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__ctgc__structure_reuse__direct__choose_reuse__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_list__ti_list_1transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_match_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_PseudoTypeInfo) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__list__ti_list_1transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_match_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__ctgc__structure_reuse__direct__choose_reuse__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__ctgc__structure_reuse__direct__choose_reuse__list__pti_list_1__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0
  }
};

static const MR_FA_TypeInfo_Struct2 transform_hlds__ctgc__structure_reuse__direct__choose_reuse__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0list__ti_list_1transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_match_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_TypeInfo) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__list__ti_list_1transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_match_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__ctgc__structure_reuse__direct__choose_reuse__list__pti_list_1__plain_tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0list__ti_list_1transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_match_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0list__ti_list_1transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_match_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__ctgc__structure_reuse__direct__choose_reuse__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__ctgc__structure_reuse__direct__choose_reuse__list__pti_list_1__plain_transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_deconstruction_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_deconstruction_spec_0
  }
};

static const MR_FA_TypeInfo_Struct2 transform_hlds__ctgc__structure_reuse__direct__choose_reuse__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

static const MR_PseudoTypeInfo transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__field_types_background_info_0_0[4] = {
  (MR_PseudoTypeInfo) &libs__globals__libs__globals__type_ctor_info_reuse_strategy_0,
  (MR_PseudoTypeInfo) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0,
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0,
  (MR_PseudoTypeInfo) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0
};

static const MR_ConstString transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__field_names_background_info_0_0[4] = {
  (MR_String) "back_strategy",
  (MR_String) "back_module_info",
  (MR_String) "back_proc_info",
  (MR_String) "back_vartypes"
};

static const MR_DuFunctorDesc transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__du_functor_desc_background_info_0_0 = {
  (MR_String) "background",
  (MR_Integer) 4,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__field_types_background_info_0_0,
  transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__field_names_background_info_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__du_stag_ordered_background_info_0_0[1] = {
  &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__du_functor_desc_background_info_0_0
};

static const MR_DuPtagLayout transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__du_ptag_ordered_background_info_0[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__du_stag_ordered_background_info_0_0
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
  (MR_Integer) 17,
  (MR_Integer) 1,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse____Unify____background_info_0_0_10001)),
  ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse____Compare____background_info_0_0_10001)),
  (MR_String) "transform_hlds.ctgc.structure_reuse.direct.choose_reuse",
  (MR_String) "background_info",
  {     transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__du_name_ordered_background_info_0 },
  {     transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__du_ptag_ordered_background_info_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__functor_number_map_background_info_0
};

static const MR_PseudoTypeInfo transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__field_types_construction_spec_0_0[2] = {
  (MR_PseudoTypeInfo) &transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0,
  (MR_PseudoTypeInfo) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_reuse_type_0
};

static const MR_ConstString transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__field_names_construction_spec_0_0[2] = {
  (MR_String) "con_pp",
  (MR_String) "con_reuse"
};

static const MR_DuFunctorDesc transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__du_functor_desc_construction_spec_0_0 = {
  (MR_String) "con",
  (MR_Integer) 2,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__field_types_construction_spec_0_0,
  transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__field_names_construction_spec_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__du_stag_ordered_construction_spec_0_0[1] = {
  &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__du_functor_desc_construction_spec_0_0
};

static const MR_DuPtagLayout transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__du_ptag_ordered_construction_spec_0[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__du_stag_ordered_construction_spec_0_0
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
  (MR_Integer) 17,
  (MR_Integer) 1,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse____Unify____construction_spec_0_0_10001)),
  ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse____Compare____construction_spec_0_0_10001)),
  (MR_String) "transform_hlds.ctgc.structure_reuse.direct.choose_reuse",
  (MR_String) "construction_spec",
  {     transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__du_name_ordered_construction_spec_0 },
  {     transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__du_ptag_ordered_construction_spec_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__functor_number_map_construction_spec_0
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__ctgc__structure_reuse__direct__choose_reuse__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_PseudoTypeInfo transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__field_types_deconstruction_spec_0_0[5] = {
  (MR_PseudoTypeInfo) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0,
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0,
  (MR_PseudoTypeInfo) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_as_0
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
  (MR_Integer) 5,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__field_types_deconstruction_spec_0_0,
  transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__field_names_deconstruction_spec_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__du_stag_ordered_deconstruction_spec_0_0[1] = {
  &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__du_functor_desc_deconstruction_spec_0_0
};

static const MR_DuPtagLayout transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__du_ptag_ordered_deconstruction_spec_0[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__du_stag_ordered_deconstruction_spec_0_0
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
  (MR_Integer) 17,
  (MR_Integer) 1,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse____Unify____deconstruction_spec_0_0_10001)),
  ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse____Compare____deconstruction_spec_0_0_10001)),
  (MR_String) "transform_hlds.ctgc.structure_reuse.direct.choose_reuse",
  (MR_String) "deconstruction_spec",
  {     transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__du_name_ordered_deconstruction_spec_0 },
  {     transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__du_ptag_ordered_deconstruction_spec_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__functor_number_map_deconstruction_spec_0
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__ctgc__structure_reuse__direct__choose_reuse__list__ti_list_1transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_deconstruction_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_deconstruction_spec_0
  }
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__ctgc__structure_reuse__direct__choose_reuse__list__ti_list_1transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_construction_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_construction_spec_0
  }
};

static const MR_PseudoTypeInfo transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__field_types_match_0_0[4] = {
  (MR_PseudoTypeInfo) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__list__ti_list_1transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_deconstruction_spec_0,
  (MR_PseudoTypeInfo) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__list__ti_list_1transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_construction_spec_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_float_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

static const MR_ConstString transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__field_names_match_0_0[4] = {
  (MR_String) "decon_specs",
  (MR_String) "con_specs",
  (MR_String) "match_value",
  (MR_String) "match_degree"
};

static const MR_DuFunctorDesc transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__du_functor_desc_match_0_0 = {
  (MR_String) "match",
  (MR_Integer) 4,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__field_types_match_0_0,
  transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__field_names_match_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__du_stag_ordered_match_0_0[1] = {
  &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__du_functor_desc_match_0_0
};

static const MR_DuPtagLayout transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__du_ptag_ordered_match_0[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__du_stag_ordered_match_0_0
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
  (MR_Integer) 17,
  (MR_Integer) 1,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse____Unify____match_0_0_10001)),
  ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse____Compare____match_0_0_10001)),
  (MR_String) "transform_hlds.ctgc.structure_reuse.direct.choose_reuse",
  (MR_String) "match",
  {     transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__du_name_ordered_match_0 },
  {     transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__du_ptag_ordered_match_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__functor_number_map_match_0
};

const MR_TypeCtorInfo_Struct transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_match_table_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse____Unify____match_table_0_0_10001)),
  ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse____Compare____match_table_0_0_10001)),
  (MR_String) "transform_hlds.ctgc.structure_reuse.direct.choose_reuse",
  (MR_String) "match_table",
  {     NULL },
  {     (MR_PseudoTypeInfo) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0list__ti_list_1transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_match_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__ctgc__structure_reuse__direct__choose_reuse__list__ti_list_1hlds__hlds_goal__type_ctor_info_needs_update_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_needs_update_0
  }
};

static const MR_PseudoTypeInfo transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__field_types_reuse_type_0_0[3] = {
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0,
  (MR_PseudoTypeInfo) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__list__ti_list_1hlds__hlds_goal__type_ctor_info_needs_update_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_float_0
};

static const MR_ConstString transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__field_names_reuse_type_0_0[3] = {
  (MR_String) "same_cons",
  (MR_String) "reuse_fields",
  (MR_String) "reuse_value"
};

static const MR_DuFunctorDesc transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__du_functor_desc_reuse_type_0_0 = {
  (MR_String) "reuse_type",
  (MR_Integer) 3,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__field_types_reuse_type_0_0,
  transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__field_names_reuse_type_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__du_stag_ordered_reuse_type_0_0[1] = {
  &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__du_functor_desc_reuse_type_0_0
};

static const MR_DuPtagLayout transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__du_ptag_ordered_reuse_type_0[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__du_stag_ordered_reuse_type_0_0
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
  (MR_Integer) 17,
  (MR_Integer) 1,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse____Unify____reuse_type_0_0_10001)),
  ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse____Compare____reuse_type_0_0_10001)),
  (MR_String) "transform_hlds.ctgc.structure_reuse.direct.choose_reuse",
  (MR_String) "reuse_type",
  {     transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__du_name_ordered_reuse_type_0 },
  {     transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__du_ptag_ordered_reuse_type_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__functor_number_map_reuse_type_0
};

static MR_Word MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__IntroducedFrom__func__dump_match_details__1375__1_1_f_0(
  MR_Word LambdaHeadVar__1_15)
{
  {
    MR_Word LambdaHeadVar__2_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), LambdaHeadVar__1_15, (MR_Integer) 4)));
    MR_Word Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), LambdaHeadVar__1_15, (MR_Integer) 0)));
    MR_Word Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), LambdaHeadVar__1_15, (MR_Integer) 1)));
    MR_Word Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), LambdaHeadVar__1_15, (MR_Integer) 2)));
    MR_Word Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), LambdaHeadVar__1_15, (MR_Integer) 3)));

    return LambdaHeadVar__2_16;
  }
}

static MR_Word MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__IntroducedFrom__func__find_match_in_goal_2__860__1_1_f_0(
  MR_Word LambdaHeadVar__1_85)
{
  {
    MR_Word LambdaHeadVar__2_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), LambdaHeadVar__1_85, (MR_Integer) 2)));
    MR_Word Var_107 = ((MR_Word) (MR_hl_field(MR_mktag(0), LambdaHeadVar__1_85, (MR_Integer) 0)));
    MR_Word Var_108 = ((MR_Word) (MR_hl_field(MR_mktag(0), LambdaHeadVar__1_85, (MR_Integer) 1)));

    return LambdaHeadVar__2_86;
  }
}

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__IntroducedFrom__pred__compute_match_table_in_disjunction__690__1_3_p_0(
  MR_Word HeadVar__1_26,
  MR_Word HeadVar__2_27,
  MR_Word * HeadVar__3_28)
{
  {
    mercury__multi_map__merge_3_p_0((MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_1[0], (MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_match_0, HeadVar__1_26, HeadVar__2_27, HeadVar__3_28);
  }
}

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__IntroducedFrom__pred__compute_match_table_in_disjunction__682__1_3_p_0(
  MR_Word HeadVar__1_20,
  MR_Word HeadVar__2_21,
  MR_Word * HeadVar__3_22)
{
  {
    mercury__multi_map__merge_3_p_0((MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_1[0], (MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_match_0, HeadVar__1_20, HeadVar__2_21, HeadVar__3_22);
  }
}

static MR_Word MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__IntroducedFrom__func__compute_match_table_with_continuation__624__1_1_f_0(
  MR_Word LambdaHeadVar__1_88)
{
  {
    MR_Word LambdaHeadVar__2_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), LambdaHeadVar__1_88, (MR_Integer) 2)));
    MR_Word Var_106 = ((MR_Word) (MR_hl_field(MR_mktag(0), LambdaHeadVar__1_88, (MR_Integer) 0)));
    MR_Word Var_107 = ((MR_Word) (MR_hl_field(MR_mktag(0), LambdaHeadVar__1_88, (MR_Integer) 1)));

    return LambdaHeadVar__2_89;
  }
}

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__IntroducedFrom__pred__compute_match_table_with_continuation__654__1_3_p_0(
  MR_Word HeadVar__1_115,
  MR_Word HeadVar__2_116,
  MR_Word * HeadVar__3_117)
{
  {
    mercury__multi_map__merge_3_p_0((MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_1[0], (MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_match_0, HeadVar__1_115, HeadVar__2_116, HeadVar__3_117);
  }
}

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__IntroducedFrom__pred__average_match__439__1_3_p_0(
  MR_Word LambdaHeadVar__1_19,
  MR_Word LambdaHeadVar__2_20,
  MR_Word * LambdaHeadVar__3_21)
{
  {
    MR_Word DeconSpecs_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), LambdaHeadVar__2_20, (MR_Integer) 0)));
    MR_Word ConSpecs_12;
    MR_Float Val_13;
    MR_Integer Deg_14;
    MR_Word Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), LambdaHeadVar__1_19, (MR_Integer) 1)));
    MR_Float Var_26;
    MR_Float Var_27;
    MR_Word Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), LambdaHeadVar__2_20, (MR_Integer) 1)));
    MR_Integer Var_48;
    MR_Integer Var_51;
    MR_Float Var_38 = MR_unbox_float((MR_hl_field(MR_mktag(0), LambdaHeadVar__2_20, (MR_Integer) 2)));
    MR_Integer Var_39 = ((MR_Integer) (MR_hl_field(MR_mktag(0), LambdaHeadVar__2_20, (MR_Integer) 3)));
    MR_Word Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), LambdaHeadVar__1_19, (MR_Integer) 0)));
    MR_Float Var_44 = MR_unbox_float((MR_hl_field(MR_mktag(0), LambdaHeadVar__1_19, (MR_Integer) 2)));
    MR_Integer Var_45 = ((MR_Integer) (MR_hl_field(MR_mktag(0), LambdaHeadVar__1_19, (MR_Integer) 3)));
    MR_Word Var_46;
    MR_Word Var_47;
    MR_Word Var_49;
    MR_Word Var_50;

    ConSpecs_12 = mercury__list__append_2_f_0((MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_construction_spec_0, Var_37, Var_25);
    Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), LambdaHeadVar__2_20, (MR_Integer) 0)));
    Var_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), LambdaHeadVar__2_20, (MR_Integer) 1)));
    Var_26 = MR_unbox_float((MR_hl_field(MR_mktag(0), LambdaHeadVar__2_20, (MR_Integer) 2)));
    Var_48 = ((MR_Integer) (MR_hl_field(MR_mktag(0), LambdaHeadVar__2_20, (MR_Integer) 3)));
    Var_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), LambdaHeadVar__1_19, (MR_Integer) 0)));
    Var_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), LambdaHeadVar__1_19, (MR_Integer) 1)));
    Var_27 = MR_unbox_float((MR_hl_field(MR_mktag(0), LambdaHeadVar__1_19, (MR_Integer) 2)));
    Var_51 = ((MR_Integer) (MR_hl_field(MR_mktag(0), LambdaHeadVar__1_19, (MR_Integer) 3)));
    Val_13 = (Var_26 + Var_27);
    Deg_14 = (Var_48 + Var_51);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      *LambdaHeadVar__3_21 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (DeconSpecs_11));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ConSpecs_12));
      MR_hl_field(MR_mktag(0), base, 2) = MR_box_float(Val_13);
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Deg_14));
    }
  }
}

static MR_Word MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__IntroducedFrom__func__match_get_condition__325__1_1_f_0(
  MR_Word LambdaHeadVar__1_12)
{
  {
    MR_Word LambdaHeadVar__2_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), LambdaHeadVar__1_12, (MR_Integer) 4)));
    MR_Word Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), LambdaHeadVar__1_12, (MR_Integer) 0)));
    MR_Word Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), LambdaHeadVar__1_12, (MR_Integer) 1)));
    MR_Word Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), LambdaHeadVar__1_12, (MR_Integer) 2)));
    MR_Word Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), LambdaHeadVar__1_12, (MR_Integer) 3)));

    return LambdaHeadVar__2_13;
  }
}

static MR_Word MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__IntroducedFrom__func__match_get_dead_cons_ids__317__1_1_f_0(
  MR_Word LambdaHeadVar__1_7)
{
  {
    MR_Word LambdaHeadVar__2_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), LambdaHeadVar__1_7, (MR_Integer) 2)));
    MR_Word Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), LambdaHeadVar__1_7, (MR_Integer) 0)));
    MR_Word Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), LambdaHeadVar__1_7, (MR_Integer) 1)));
    MR_Word Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), LambdaHeadVar__1_7, (MR_Integer) 3)));
    MR_Word Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), LambdaHeadVar__1_7, (MR_Integer) 4)));

    return LambdaHeadVar__2_8;
  }
}

static MR_Word MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__IntroducedFrom__func__match_get_dead_var__295__1_1_f_0(
  MR_Word LambdaHeadVar__1_12)
{
  {
    MR_Word LambdaHeadVar__2_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), LambdaHeadVar__1_12, (MR_Integer) 0)));
    MR_Word Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), LambdaHeadVar__1_12, (MR_Integer) 1)));
    MR_Word Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), LambdaHeadVar__1_12, (MR_Integer) 2)));
    MR_Word Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), LambdaHeadVar__1_12, (MR_Integer) 3)));
    MR_Word Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), LambdaHeadVar__1_12, (MR_Integer) 4)));

    return LambdaHeadVar__2_13;
  }
}

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse____Compare____match_table_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_2[1], HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse____Unify____match_table_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_2[1], ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse____Compare____match_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_15 = (MR_Integer) HeadVar__2_2;
    MR_Integer CastY_16 = (MR_Integer) HeadVar__3_3;

    succeeded = (CastX_15 == CastY_16);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Word ArgX1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
      MR_Word ArgY1_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0)));
      MR_Word ArgX2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));
      MR_Word ArgY2_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1)));
      MR_Float ArgX3_8 = MR_unbox_float((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2)));
      MR_Float ArgY3_9 = MR_unbox_float((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2)));
      MR_Integer ArgX4_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3)));
      MR_Integer ArgY4_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 3)));
      MR_Word Var_12;

      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_1[3], &Var_12, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
      succeeded = (Var_12 == (MR_Integer) 0);
      succeeded = !(succeeded);
      if (succeeded)
        *HeadVar__1_1 = Var_12;
      else
      {
        MR_Word Var_13;

        mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_1[4], &Var_13, ((MR_Box) (ArgX2_6)), ((MR_Box) (ArgY2_7)));
        succeeded = (Var_13 == (MR_Integer) 0);
        succeeded = !(succeeded);
        if (succeeded)
          *HeadVar__1_1 = Var_13;
        else
        {
          MR_Word Var_14;

          mercury__private_builtin__builtin_compare_float_3_p_0(&Var_14, ArgX3_8, ArgY3_9);
          succeeded = (Var_14 == (MR_Integer) 0);
          succeeded = !(succeeded);
          if (succeeded)
            *HeadVar__1_1 = Var_14;
          else
            mercury__private_builtin__builtin_compare_int_3_p_0(HeadVar__1_1, ArgX4_10, ArgY4_11);
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
  {
    MR_bool succeeded;
    MR_Integer CastX_11 = (MR_Integer) HeadVar__1_1;
    MR_Integer CastY_12 = (MR_Integer) HeadVar__2_2;

    succeeded = (CastX_11 == CastY_12);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Word TypeInfo_14_14;
      MR_Word ArgX1_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0)));
      MR_Word ArgY1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
      MR_Word ArgX2_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1)));
      MR_Word ArgY2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));
      MR_Float ArgX3_7 = MR_unbox_float((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2)));
      MR_Float ArgY3_8 = MR_unbox_float((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2)));
      MR_Integer ArgX4_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 3)));
      MR_Integer ArgY4_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3)));

      succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_1[3], ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
      if (succeeded)
      {
        TypeInfo_14_14 = (MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_1[4];
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
}

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse____Compare____deconstruction_spec_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_18 = (MR_Integer) HeadVar__2_2;
    MR_Integer CastY_19 = (MR_Integer) HeadVar__3_3;

    succeeded = (CastX_18 == CastY_19);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Word ArgX1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
      MR_Word ArgY1_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0)));
      MR_Word ArgX2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));
      MR_Word ArgY2_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1)));
      MR_Word ArgX3_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2)));
      MR_Word ArgY3_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2)));
      MR_Word ArgX4_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3)));
      MR_Word ArgY4_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 3)));
      MR_Word ArgX5_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4)));
      MR_Word ArgY5_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 4)));
      MR_Word Var_14;

      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_1[0], &Var_14, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
      succeeded = (Var_14 == (MR_Integer) 0);
      succeeded = !(succeeded);
      if (succeeded)
        *HeadVar__1_1 = Var_14;
      else
      {
        MR_Word Var_15;

        transform_hlds__smm_common____Compare____program_point_0_0(&Var_15, ArgX2_6, ArgY2_7);
        succeeded = (Var_15 == (MR_Integer) 0);
        succeeded = !(succeeded);
        if (succeeded)
          *HeadVar__1_1 = Var_15;
        else
        {
          MR_Word Var_16;

          parse_tree__prog_data____Compare____cons_id_0_0(&Var_16, ArgX3_8, ArgY3_9);
          succeeded = (Var_16 == (MR_Integer) 0);
          succeeded = !(succeeded);
          if (succeeded)
            *HeadVar__1_1 = Var_16;
          else
          {
            MR_Word Var_17;

            mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_1[2], &Var_17, ((MR_Box) (ArgX4_10)), ((MR_Box) (ArgY4_11)));
            succeeded = (Var_17 == (MR_Integer) 0);
            succeeded = !(succeeded);
            if (succeeded)
              *HeadVar__1_1 = Var_17;
            else
              transform_hlds__ctgc__structure_reuse__domain____Compare____reuse_as_0_0(HeadVar__1_1, ArgX5_12, ArgY5_13);
          }
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
  {
    MR_bool succeeded;
    MR_Integer CastX_13 = (MR_Integer) HeadVar__1_1;
    MR_Integer CastY_14 = (MR_Integer) HeadVar__2_2;

    succeeded = (CastX_13 == CastY_14);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Word TypeInfo_18_18;
      MR_Word ArgX1_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0)));
      MR_Word ArgY1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
      MR_Word ArgX2_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1)));
      MR_Word ArgY2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));
      MR_Word ArgX3_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2)));
      MR_Word ArgY3_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2)));
      MR_Word ArgX4_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 3)));
      MR_Word ArgY4_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3)));
      MR_Word ArgX5_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 4)));
      MR_Word ArgY5_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4)));

      succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_1[0], ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
      if (succeeded)
      {
        succeeded = transform_hlds__smm_common____Unify____program_point_0_0(ArgX2_5, ArgY2_6);
        if (succeeded)
        {
          succeeded = parse_tree__prog_data____Unify____cons_id_0_0(ArgX3_7, ArgY3_8);
          if (succeeded)
          {
            TypeInfo_18_18 = (MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_1[2];
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_18_18, ((MR_Box) (ArgX4_9)), ((MR_Box) (ArgY4_10)));
            if (succeeded)
              succeeded = transform_hlds__ctgc__structure_reuse__domain____Unify____reuse_as_0_0(ArgX5_11, ArgY5_12);
          }
        }
      }
    }
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse____Compare____construction_spec_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_9 = (MR_Integer) HeadVar__2_2;
    MR_Integer CastY_10 = (MR_Integer) HeadVar__3_3;

    succeeded = (CastX_9 == CastY_10);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Word ArgX1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
      MR_Word ArgY1_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0)));
      MR_Word ArgX2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));
      MR_Word ArgY2_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1)));
      MR_Word Var_8;

      transform_hlds__smm_common____Compare____program_point_0_0(&Var_8, ArgX1_4, ArgY1_5);
      succeeded = (Var_8 == (MR_Integer) 0);
      succeeded = !(succeeded);
      if (succeeded)
        *HeadVar__1_1 = Var_8;
      else
        transform_hlds__ctgc__structure_reuse__direct__choose_reuse____Compare____reuse_type_0_0(HeadVar__1_1, ArgX2_6, ArgY2_7);
    }
  }
}

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse____Compare____reuse_type_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_12 = (MR_Integer) HeadVar__2_2;
    MR_Integer CastY_13 = (MR_Integer) HeadVar__3_3;

    succeeded = (CastX_12 == CastY_13);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Word ArgX1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
      MR_Word ArgY1_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0)));
      MR_Word ArgX2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));
      MR_Word ArgY2_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1)));
      MR_Float ArgX3_8 = MR_unbox_float((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2)));
      MR_Float ArgY3_9 = MR_unbox_float((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2)));
      MR_Word Var_10;
      MR_Integer Var_17 = (MR_Integer) ArgX1_4;
      MR_Integer Var_18 = (MR_Integer) ArgY1_5;

      mercury__private_builtin__builtin_compare_int_3_p_0(&Var_10, Var_17, Var_18);
      succeeded = (Var_10 == (MR_Integer) 0);
      succeeded = !(succeeded);
      if (succeeded)
        *HeadVar__1_1 = Var_10;
      else
      {
        MR_Word Var_11;

        mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_1[5], &Var_11, ((MR_Box) (ArgX2_6)), ((MR_Box) (ArgY2_7)));
        succeeded = (Var_11 == (MR_Integer) 0);
        succeeded = !(succeeded);
        if (succeeded)
          *HeadVar__1_1 = Var_11;
        else
          mercury__private_builtin__builtin_compare_float_3_p_0(HeadVar__1_1, ArgX3_8, ArgY3_9);
      }
    }
  }
}

static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse____Unify____construction_spec_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_7 = (MR_Integer) HeadVar__1_1;
    MR_Integer CastY_8 = (MR_Integer) HeadVar__2_2;

    succeeded = (CastX_7 == CastY_8);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Word ArgX1_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0)));
      MR_Word ArgY1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
      MR_Word ArgX2_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1)));
      MR_Word ArgY2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));

      succeeded = transform_hlds__smm_common____Unify____program_point_0_0(ArgX1_3, ArgY1_4);
      if (succeeded)
        succeeded = transform_hlds__ctgc__structure_reuse__direct__choose_reuse____Unify____reuse_type_0_0(ArgX2_5, ArgY2_6);
    }
    return succeeded;
  }
}

static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse____Unify____reuse_type_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_9 = (MR_Integer) HeadVar__1_1;
    MR_Integer CastY_10 = (MR_Integer) HeadVar__2_2;

    succeeded = (CastX_9 == CastY_10);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Word TypeInfo_11_11;
      MR_Word ArgX1_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0)));
      MR_Word ArgY1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
      MR_Word ArgX2_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1)));
      MR_Word ArgY2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));
      MR_Float ArgX3_7 = MR_unbox_float((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2)));
      MR_Float ArgY3_8 = MR_unbox_float((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2)));

      succeeded = (ArgX1_3 == ArgY1_4);
      if (succeeded)
      {
        TypeInfo_11_11 = (MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_1[5];
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_11_11, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
        if (succeeded)
          succeeded = (ArgX3_7 == ArgY3_8);
      }
    }
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse____Compare____background_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_15 = (MR_Integer) HeadVar__2_2;
    MR_Integer CastY_16 = (MR_Integer) HeadVar__3_3;

    succeeded = (CastX_15 == CastY_16);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Word ArgX1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
      MR_Word ArgY1_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0)));
      MR_Word ArgX2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));
      MR_Word ArgY2_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1)));
      MR_Word ArgX3_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2)));
      MR_Word ArgY3_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2)));
      MR_Word ArgX4_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3)));
      MR_Word ArgY4_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 3)));
      MR_Word Var_12;

      libs__globals____Compare____reuse_strategy_0_0(&Var_12, ArgX1_4, ArgY1_5);
      succeeded = (Var_12 == (MR_Integer) 0);
      succeeded = !(succeeded);
      if (succeeded)
        *HeadVar__1_1 = Var_12;
      else
      {
        MR_Word Var_13;

        hlds__hlds_module____Compare____module_info_0_0(&Var_13, ArgX2_6, ArgY2_7);
        succeeded = (Var_13 == (MR_Integer) 0);
        succeeded = !(succeeded);
        if (succeeded)
          *HeadVar__1_1 = Var_13;
        else
        {
          MR_Word Var_14;

          hlds__hlds_pred____Compare____proc_info_0_0(&Var_14, ArgX3_8, ArgY3_9);
          succeeded = (Var_14 == (MR_Integer) 0);
          succeeded = !(succeeded);
          if (succeeded)
            *HeadVar__1_1 = Var_14;
          else
          {
            mercury__builtin__compare_3_p_0((MR_Word) &hlds__vartypes__hlds__vartypes__type_ctor_info_vartypes_0, HeadVar__1_1, ((MR_Box) (ArgX4_10)), ((MR_Box) (ArgY4_11)));
          }
        }
      }
    }
  }
}

static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse____Unify____background_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_11 = (MR_Integer) HeadVar__1_1;
    MR_Integer CastY_12 = (MR_Integer) HeadVar__2_2;

    succeeded = (CastX_11 == CastY_12);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Word TypeCtorInfo_16_16;
      MR_Word ArgX1_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0)));
      MR_Word ArgY1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
      MR_Word ArgX2_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1)));
      MR_Word ArgY2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));
      MR_Word ArgX3_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2)));
      MR_Word ArgY3_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2)));
      MR_Word ArgX4_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 3)));
      MR_Word ArgY4_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3)));

      succeeded = libs__globals____Unify____reuse_strategy_0_0(ArgX1_3, ArgY1_4);
      if (succeeded)
      {
        succeeded = hlds__hlds_module____Unify____module_info_0_0(ArgX2_5, ArgY2_6);
        if (succeeded)
        {
          succeeded = hlds__hlds_pred____Unify____proc_info_0_0(ArgX3_7, ArgY3_8);
          if (succeeded)
          {
            TypeCtorInfo_16_16 = (MR_Word) &hlds__vartypes__hlds__vartypes__type_ctor_info_vartypes_0;
            succeeded = mercury__builtin__unify_2_p_0(TypeCtorInfo_16_16, ((MR_Box) (ArgX4_9)), ((MR_Box) (ArgY4_10)));
          }
        }
      }
    }
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__check_for_cell_caching_in_case_3_p_0(
  MR_Word DeadCellTable_4,
  MR_Word STATE_VARIABLE_Case_0_10,
  MR_Word * STATE_VARIABLE_Case_11)
{
  {
    MR_Word MainConsId_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Case_0_10, (MR_Integer) 0)));
    MR_Word OtherConsIds_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Case_0_10, (MR_Integer) 1)));
    MR_Word Goal0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Case_0_10, (MR_Integer) 2)));
    MR_Word Goal_9;

    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__check_for_cell_caching_2_3_p_0(DeadCellTable_4, Goal0_8, &Goal_9);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_Case_11 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (MainConsId_6));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (OtherConsIds_7));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Goal_9));
    }
  }
}

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__maybe_dump_full_table_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  switch (HeadVar__1_1) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
      }
      break;
    case (MR_Integer) 1:
      transform_hlds__ctgc__structure_reuse__direct__choose_reuse__dump_full_table_3_p_0(HeadVar__2_2);
      break;
  }
}

static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__construction_spec_with_program_point_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word ConstructionSpec_3)
{
  {
    MR_bool succeeded;
    MR_Word Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ConstructionSpec_3, (MR_Integer) 0)));
    MR_Word Var_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ConstructionSpec_3, (MR_Integer) 1)));

    succeeded = transform_hlds__smm_common____Unify____program_point_0_0(HeadVar__1_1, Var_5);
    return succeeded;
  }
}

static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__deconstruction_spec_with_program_point_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word DeconstructionSpec_3)
{
  {
    MR_bool succeeded;
    MR_Word Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), DeconstructionSpec_3, (MR_Integer) 1)));
    MR_Word Var_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), DeconstructionSpec_3, (MR_Integer) 0)));
    MR_Word Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), DeconstructionSpec_3, (MR_Integer) 2)));
    MR_Word Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), DeconstructionSpec_3, (MR_Integer) 3)));
    MR_Word Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), DeconstructionSpec_3, (MR_Integer) 4)));

    succeeded = transform_hlds__smm_common____Unify____program_point_0_0(HeadVar__1_1, Var_8);
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__annotate_reuses_in_case_4_p_0(
  MR_Word Background_5,
  MR_Word Match_6,
  MR_Word STATE_VARIABLE_Case_0_12,
  MR_Word * STATE_VARIABLE_Case_13)
{
  {
    MR_Word MainConsId_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Case_0_12, (MR_Integer) 0)));
    MR_Word OtherConsIds_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Case_0_12, (MR_Integer) 1)));
    MR_Word Goal0_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Case_0_12, (MR_Integer) 2)));
    MR_Word Goal_11;

    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__annotate_reuses_in_goal_4_p_0(Background_5, Match_6, Goal0_10, &Goal_11);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_Case_13 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (MainConsId_8));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (OtherConsIds_9));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Goal_11));
    }
  }
}

static MR_Word MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__needs_update_and_2_f_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
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
}

static MR_Box MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__glb_reuse_types_2_2_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_Box wrapper_arg_3;
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__3_3;

    conv0_HeadVar__3_3 = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__needs_update_and_2_f_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__3_3));
    return wrapper_arg_3;
  }
}

static MR_Word MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__glb_reuse_types_2_2_f_0(
  MR_Word R1_4,
  MR_Word R2_5)
{
  {
    MR_bool succeeded;
    MR_Word R_6;
    MR_Word TypeCtorInfo_17_31;
    MR_Word SameCons1_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), R1_4, (MR_Integer) 0)));
    MR_Word Fields1_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), R1_4, (MR_Integer) 1)));
    MR_Float V1_9 = MR_unbox_float((MR_hl_field(MR_mktag(0), R1_4, (MR_Integer) 2)));
    MR_Word SameCons2_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), R2_5, (MR_Integer) 0)));
    MR_Word Fields2_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), R2_5, (MR_Integer) 1)));
    MR_Float V2_12 = MR_unbox_float((MR_hl_field(MR_mktag(0), R2_5, (MR_Integer) 2)));
    MR_Word Var_13;
    MR_Word Var_14;
    MR_Float Var_15;
    MR_Float Var_16;
    MR_Word L1b_21;
    MR_Word L2b_22;
    MR_Word TypeCtorInfo_14_28;
    MR_Integer Var_23;
    MR_Integer Var_24;

    Var_13 = mercury__bool__and_2_f_0(SameCons1_7, SameCons2_10);
    TypeCtorInfo_14_28 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_needs_update_0;
    Var_23 = mercury__list__length_1_f_0(TypeCtorInfo_14_28, Fields1_8);
    Var_24 = mercury__list__length_1_f_0(TypeCtorInfo_14_28, Fields2_11);
    succeeded = (Var_23 <= Var_24);
    if (succeeded)
    {
      MR_Word TypeCtorInfo_15_29;
      MR_Integer Var_25;

      L1b_21 = Fields1_8;
      TypeCtorInfo_15_29 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_needs_update_0;
      Var_25 = mercury__list__length_1_f_0(TypeCtorInfo_15_29, Fields1_8);
      L2b_22 = mercury__list__take_upto_2_f_0(TypeCtorInfo_15_29, Var_25, Fields2_11);
    }
    else
    {
      MR_Word TypeCtorInfo_16_30 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_needs_update_0;
      MR_Integer Var_26;

      Var_26 = mercury__list__length_1_f_0(TypeCtorInfo_16_30, Fields2_11);
      L1b_21 = mercury__list__take_upto_2_f_0(TypeCtorInfo_16_30, Var_26, Fields1_8);
      L2b_22 = Fields2_11;
    }
    TypeCtorInfo_17_31 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_needs_update_0;
    Var_14 = mercury__list__map_corresponding_3_f_0(TypeCtorInfo_17_31, TypeCtorInfo_17_31, TypeCtorInfo_17_31, (MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_2[25], L1b_21, L2b_22);
    Var_16 = (V1_9 + V2_12);
    Var_15 = mercury__float__f_slash_2_f_0(Var_16, (MR_Float) 2.0000000000000000);
    {
      R_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), R_6, 0) = ((MR_Box) (Var_13));
      MR_hl_field(MR_mktag(0), R_6, 1) = ((MR_Box) (Var_14));
      MR_hl_field(MR_mktag(0), R_6, 2) = MR_box_float(Var_15);
    }
    return R_6;
  }
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
  {
    MR_bool succeeded;

    succeeded = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_109_112_117_116_101_95_114_101_117_115_101_95_116_121_112_101_95_95_91_50_93_95_48_6_p_0(Background_7, NewCons_9, NewCellArgs_10, DeconSpec_11, ReuseType_12);
    return succeeded;
  }
}

static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_109_112_117_116_101_95_114_101_117_115_101_95_116_121_112_101_95_95_91_50_93_95_48_6_p_0(
  MR_Word Background_7,
  MR_Word NewCons_9,
  MR_Word NewCellArgs_10,
  MR_Word DeconSpec_11,
  MR_Word * ReuseType_12)
{
  {
    MR_bool succeeded;
    MR_Word TypeInfo_60_60;
    MR_Word TypeCtorInfo_61_61;
    MR_Word DeadCons_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), DeconSpec_11, (MR_Integer) 2)));
    MR_Word DeadCellArgs_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), DeconSpec_11, (MR_Integer) 3)));
    MR_Word ModuleInfo_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), Background_7, (MR_Integer) 1)));
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
    MR_Word _DeadVar_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), DeconSpec_11, (MR_Integer) 0)));
    MR_Word Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), DeconSpec_11, (MR_Integer) 1)));
    MR_Word Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), DeconSpec_11, (MR_Integer) 4)));
    MR_Word Var_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), Background_7, (MR_Integer) 0)));
    MR_Word Var_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), Background_7, (MR_Integer) 2)));
    MR_Word Var_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), Background_7, (MR_Integer) 3)));
    MR_Word ConsRepn_78;
    MR_Word ConsTag_79;
    MR_Word Var_81;
    MR_Word Var_82;
    MR_Word Var_83;
    MR_Word Var_84;
    MR_Integer Var_85;
    MR_Word Var_86;
    MR_Integer Var_80;
    MR_Word Var_57;
    MR_Word Var_58;
    MR_Word Var_59;
    MR_Word ConsRepn_66;
    MR_Word ConsTag_67;
    MR_Word Var_69;
    MR_Word Var_70;
    MR_Word Var_71;
    MR_Word Var_72;
    MR_Integer Var_73;
    MR_Word Var_74;
    MR_Integer Var_68;

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
      TypeInfo_60_60 = (MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_1[0];
      NewNumArgs_20 = mercury__list__length_1_f_0(TypeInfo_60_60, NewCellArgs_10);
      DeadNumArgs_21 = mercury__list__length_1_f_0(TypeInfo_60_60, DeadCellArgs_16);
      succeeded = (NewNumArgs_20 == (MR_Integer) 0);
      succeeded = !(succeeded);
      if (succeeded)
      {
        succeeded = check_hlds__type_util__get_cons_repn_defn_3_p_0(ModuleInfo_18, DeadCons_15, &ConsRepn_78);
        if (succeeded)
        {
          Var_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), ConsRepn_78, (MR_Integer) 0)));
          Var_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), ConsRepn_78, (MR_Integer) 1)));
          ConsTag_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), ConsRepn_78, (MR_Integer) 2)));
          Var_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), ConsRepn_78, (MR_Integer) 3)));
          Var_85 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ConsRepn_78, (MR_Integer) 4)));
          Var_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), ConsRepn_78, (MR_Integer) 5)));
          Var_81 = hlds__hlds_data__get_secondary_tag_1_f_0(ConsTag_79);
          succeeded = ((MR_tag((MR_Word) Var_81)) == (MR_mktag((MR_Integer) 1)));
          if (succeeded)
            Var_80 = ((MR_Integer) (MR_hl_field(MR_mktag(1), Var_81, (MR_Integer) 0)));
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
        DeadArity_25 = (DeadNumArgs_21 + Var_34);
        Constraint_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), Background_7, (MR_Integer) 0)));
        Var_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), Background_7, (MR_Integer) 1)));
        Var_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), Background_7, (MR_Integer) 2)));
        Var_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), Background_7, (MR_Integer) 3)));
        succeeded = check_hlds__type_util__get_cons_repn_defn_3_p_0(ModuleInfo_18, NewCons_9, &ConsRepn_66);
        if (succeeded)
        {
          Var_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), ConsRepn_66, (MR_Integer) 0)));
          Var_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), ConsRepn_66, (MR_Integer) 1)));
          ConsTag_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), ConsRepn_66, (MR_Integer) 2)));
          Var_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), ConsRepn_66, (MR_Integer) 3)));
          Var_73 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ConsRepn_66, (MR_Integer) 4)));
          Var_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), ConsRepn_66, (MR_Integer) 5)));
          Var_69 = hlds__hlds_data__get_secondary_tag_1_f_0(ConsTag_67);
          succeeded = ((MR_tag((MR_Word) Var_69)) == (MR_mktag((MR_Integer) 1)));
          if (succeeded)
            Var_68 = ((MR_Integer) (MR_hl_field(MR_mktag(1), Var_69, (MR_Integer) 0)));
        }
        if (succeeded)
        {
          NewArity_24 = (NewNumArgs_20 + (MR_Integer) 1);
          succeeded = (NewArity_24 <= DeadArity_25);
          if (succeeded)
          {
            DiffArity_27 = (DeadArity_25 - NewArity_24);
            if ((Constraint_26 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              succeeded = (SameCons_19 == (MR_Integer) 1);
            else
            {
              MR_Integer N_28 = ((MR_Integer) (MR_hl_field(MR_mktag(1), Constraint_26, (MR_Integer) 0)));

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
          NewArity_24 = (NewNumArgs_20 + (MR_Integer) 0);
          succeeded = (NewArity_24 <= DeadArity_25);
          if (succeeded)
          {
            DiffArity_27 = (DeadArity_25 - NewArity_24);
            if ((Constraint_26 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              succeeded = (SameCons_19 == (MR_Integer) 1);
            else
            {
              MR_Integer N_87 = ((MR_Integer) (MR_hl_field(MR_mktag(1), Constraint_26, (MR_Integer) 0)));

              succeeded = (DiffArity_27 <= N_87);
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
          TypeCtorInfo_61_61 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_needs_update_0;
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
          Var_41 = (Var_42 + Var_43);
          Var_40 = (Var_41 * NewArity_24);
          Var_44 = (MR_Integer) 1;
          Var_39 = (Var_40 + Var_44);
          Var_46 = (MR_Integer) 1;
          Var_47 = (NewArity_24 - UpToDateFields_30);
          Var_45 = (Var_46 * Var_47);
          Var_38 = (Var_39 - Var_45);
          Var_49 = (MR_Integer) 1;
          Var_48 = (Var_49 * SameConsV_31);
          Var_37 = (Var_38 - Var_48);
          Var_51 = (MR_Integer) 5;
          Var_50 = (Var_51 * DiffArity_27);
          Weight_32 = (Var_37 - Var_50);
          Var_52 = (MR_Integer) 0;
          succeeded = (Weight_32 > Var_52);
          if (succeeded)
          {
            Var_53 = mercury__float__float_1_f_0(Weight_32);
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
              *ReuseType_12 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (SameCons_19));
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ReuseFields_29));
              MR_hl_field(MR_mktag(0), base, 2) = MR_box_float(Var_53);
            }
            succeeded = MR_TRUE;
          }
        }
      }
    }
    return succeeded;
  }
}

static MR_Word MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__already_correct_fields_4_f_0(
  MR_Word ExplicitSecTagC_6,
  MR_Word CurrentCellVars_7,
  MR_Word ExplicitSecTagR_8,
  MR_Word ReuseCellVars_9)
{
  {
    MR_Word ReuseFields_10;
    MR_Word TypeCtorInfo_18_18;
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
            {
              NeedsNoUpdate_11 = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__equals_2_f_0((MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_1[0], CurrentCellVars_7, ReuseCellVars_9);
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Var_29;

              if ((CurrentCellVars_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                if ((ReuseCellVars_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                  Var_29 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                else
                  Var_29 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              else
              {
                MR_Word Var_53 = ((MR_Word) (MR_hl_field(MR_mktag(1), CurrentCellVars_7, (MR_Integer) 1)));
                MR_Word Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), CurrentCellVars_7, (MR_Integer) 0)));

                Var_29 = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__equals_2_f_0((MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_1[0], Var_53, ReuseCellVars_9);
              }
              {
                NeedsNoUpdate_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), NeedsNoUpdate_11, 0) = ((MR_Box) ((MR_Integer) 0));
                MR_hl_field(MR_mktag(1), NeedsNoUpdate_11, 1) = ((MR_Box) (Var_29));
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

              if ((ReuseCellVars_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                Var_25 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              else
              {
                MR_Word Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), ReuseCellVars_9, (MR_Integer) 0)));

                Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), ReuseCellVars_9, (MR_Integer) 1)));
              }
              Var_24 = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__equals_2_f_0((MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_1[0], CurrentCellVars_7, Var_25);
              {
                NeedsNoUpdate_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), NeedsNoUpdate_11, 0) = ((MR_Box) ((MR_Integer) 0));
                MR_hl_field(MR_mktag(1), NeedsNoUpdate_11, 1) = ((MR_Box) (Var_24));
              }
            }
            break;
          case (MR_Integer) 1:
            {
              NeedsNoUpdate_11 = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__equals_2_f_0((MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_1[0], CurrentCellVars_7, ReuseCellVars_9);
            }
            break;
        }
        break;
    }
    LengthC_12 = mercury__list__length_1_f_0((MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_1[0], CurrentCellVars_7);
    TypeCtorInfo_18_18 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_needs_update_0;
    LengthB_13 = mercury__list__length_1_f_0(TypeCtorInfo_18_18, NeedsNoUpdate_11);
    Var_15 = (LengthC_12 - LengthB_13);
    NeedsUpdate_14 = mercury__list__duplicate_2_f_0(TypeCtorInfo_18_18, Var_15, ((MR_Box) ((MR_Integer) 0)));
    ReuseFields_10 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_18_18, NeedsNoUpdate_11, NeedsUpdate_14);
    return ReuseFields_10;
  }
}

static MR_Word MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__equals_2_f_0(
  MR_Word TypeInfo_for_T_14,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word HeadVar__3_3;

    if ((HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      if ((HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      else
        HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
    {
      MR_Word Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));
      MR_Box Var_16 = (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0));

      if ((HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      else
      {
        MR_Box Y_10 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0));
        MR_Word Ys_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1)));
        MR_Word NeedsUpdate_12;
        MR_Word Var_13;

        Var_13 = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__equals_2_f_0(TypeInfo_for_T_14, Var_15, Ys_11);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_T_14, Var_16, Y_10);
        if (succeeded)
          NeedsUpdate_12 = (MR_Integer) 1;
        else
          NeedsUpdate_12 = (MR_Integer) 0;
        {
          HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), HeadVar__3_3, 0) = ((MR_Box) (NeedsUpdate_12));
          MR_hl_field(MR_mktag(1), HeadVar__3_3, 1) = ((MR_Box) (Var_13));
        }
      }
    }
    return HeadVar__3_3;
  }
}

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__cons_has_normal_fields_2_p_0_1(
  void * env_ptr_arg)
{
  {
    struct transform_hlds__ctgc__structure_reuse__direct__choose_reuse__cons_has_normal_fields_2_p_0_env_0_s * env_ptr = (struct transform_hlds__ctgc__structure_reuse__direct__choose_reuse__cons_has_normal_fields_2_p_0_env_0_s *) env_ptr_arg;

    MR_builtin_longjmp((env_ptr)->transform_hlds__ctgc__structure_reuse__direct__choose_reuse__cons_has_normal_fields_2_p_0_env_0__commit_0, 1);
  }
}

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__cons_has_normal_fields_2_p_0_3(
  void * env_ptr_arg)
{
  {
    struct transform_hlds__ctgc__structure_reuse__direct__choose_reuse__cons_has_normal_fields_2_p_0_env_0_s * env_ptr = (struct transform_hlds__ctgc__structure_reuse__direct__choose_reuse__cons_has_normal_fields_2_p_0_env_0_s *) env_ptr_arg;

    (env_ptr)->transform_hlds__ctgc__structure_reuse__direct__choose_reuse__cons_has_normal_fields_2_p_0_env_0__ArgRepn_10 = ((MR_Word) (env_ptr)->transform_hlds__ctgc__structure_reuse__direct__choose_reuse__cons_has_normal_fields_2_p_0_env_0__conv0_ArgRepn_10);
    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__cons_has_normal_fields_2_p_0_2(env_ptr);
  }
}

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__cons_has_normal_fields_2_p_0_2(
  void * env_ptr_arg)
{
  {
    struct transform_hlds__ctgc__structure_reuse__direct__choose_reuse__cons_has_normal_fields_2_p_0_env_0_s * env_ptr = (struct transform_hlds__ctgc__structure_reuse__direct__choose_reuse__cons_has_normal_fields_2_p_0_env_0_s *) env_ptr_arg;

    {
      MR_Word Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), (env_ptr)->transform_hlds__ctgc__structure_reuse__direct__choose_reuse__cons_has_normal_fields_2_p_0_env_0__ArgRepn_10, (MR_Integer) 2)));
      MR_Word Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), (env_ptr)->transform_hlds__ctgc__structure_reuse__direct__choose_reuse__cons_has_normal_fields_2_p_0_env_0__ArgRepn_10, (MR_Integer) 0)));
      MR_Word Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), (env_ptr)->transform_hlds__ctgc__structure_reuse__direct__choose_reuse__cons_has_normal_fields_2_p_0_env_0__ArgRepn_10, (MR_Integer) 1)));
      MR_Word Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), (env_ptr)->transform_hlds__ctgc__structure_reuse__direct__choose_reuse__cons_has_normal_fields_2_p_0_env_0__ArgRepn_10, (MR_Integer) 3)));

      (env_ptr)->transform_hlds__ctgc__structure_reuse__direct__choose_reuse__cons_has_normal_fields_2_p_0_env_0__succeeded = (Var_37 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      (env_ptr)->transform_hlds__ctgc__structure_reuse__direct__choose_reuse__cons_has_normal_fields_2_p_0_env_0__succeeded = !((env_ptr)->transform_hlds__ctgc__structure_reuse__direct__choose_reuse__cons_has_normal_fields_2_p_0_env_0__succeeded);
      if ((env_ptr)->transform_hlds__ctgc__structure_reuse__direct__choose_reuse__cons_has_normal_fields_2_p_0_env_0__succeeded)
        transform_hlds__ctgc__structure_reuse__direct__choose_reuse__cons_has_normal_fields_2_p_0_1(env_ptr);
    }
  }
}

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__cons_has_normal_fields_2_p_0_4(
  void * env_ptr_arg)
{
  {
    struct transform_hlds__ctgc__structure_reuse__direct__choose_reuse__cons_has_normal_fields_2_p_0_env_0_s * env_ptr = (struct transform_hlds__ctgc__structure_reuse__direct__choose_reuse__cons_has_normal_fields_2_p_0_env_0_s *) env_ptr_arg;

    if (MR_builtin_setjmp((env_ptr)->transform_hlds__ctgc__structure_reuse__direct__choose_reuse__cons_has_normal_fields_2_p_0_env_0__commit_0) == 0)
      {
        {
          mercury__list__member_2_p_1((MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_constructor_arg_repn_0, &(env_ptr)->transform_hlds__ctgc__structure_reuse__direct__choose_reuse__cons_has_normal_fields_2_p_0_env_0__conv0_ArgRepn_10, (env_ptr)->transform_hlds__ctgc__structure_reuse__direct__choose_reuse__cons_has_normal_fields_2_p_0_env_0__ConsArgRepns_9, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__cons_has_normal_fields_2_p_0_3, env_ptr);
        }
        (env_ptr)->transform_hlds__ctgc__structure_reuse__direct__choose_reuse__cons_has_normal_fields_2_p_0_env_0__succeeded = MR_FALSE;
      }
    else
      (env_ptr)->transform_hlds__ctgc__structure_reuse__direct__choose_reuse__cons_has_normal_fields_2_p_0_env_0__succeeded = MR_TRUE;
  }
}

static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__cons_has_normal_fields_2_p_0(
  MR_Word ModuleInfo_3,
  MR_Word Cons_4)
{
  {
    struct transform_hlds__ctgc__structure_reuse__direct__choose_reuse__cons_has_normal_fields_2_p_0_env_0_s env;

    switch (MR_tag((MR_Word) Cons_4)) {
      default:
        (env).transform_hlds__ctgc__structure_reuse__direct__choose_reuse__cons_has_normal_fields_2_p_0_env_0__succeeded = MR_FALSE;
        break;
      case (MR_Integer) 0:
        {
          mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.ctgc.structure_reuse.direct.choose_reuse", (MR_String) "predicate \140transform_hlds.ctgc.structure_reuse.direct.choose_reuse.cons_has_normal_fields\'/2", (MR_String) "unusual cons_id");
          (env).transform_hlds__ctgc__structure_reuse__direct__choose_reuse__cons_has_normal_fields_2_p_0_env_0__succeeded = MR_TRUE;
        }
        break;
      case (MR_Integer) 1:
      case (MR_Integer) 2:
        {
          mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.ctgc.structure_reuse.direct.choose_reuse", (MR_String) "predicate \140transform_hlds.ctgc.structure_reuse.direct.choose_reuse.cons_has_normal_fields\'/2", (MR_String) "unusual cons_id");
          (env).transform_hlds__ctgc__structure_reuse__direct__choose_reuse__cons_has_normal_fields_2_p_0_env_0__succeeded = MR_TRUE;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Cons_4, (MR_Integer) 0)))) {
          default:
            (env).transform_hlds__ctgc__structure_reuse__direct__choose_reuse__cons_has_normal_fields_2_p_0_env_0__succeeded = MR_FALSE;
            break;
          case (MR_Integer) 0:
          case (MR_Integer) 1:
          case (MR_Integer) 4:
          case (MR_Integer) 5:
          case (MR_Integer) 6:
          case (MR_Integer) 15:
          case (MR_Integer) 16:
          case (MR_Integer) 17:
          case (MR_Integer) 18:
          case (MR_Integer) 19:
          case (MR_Integer) 20:
            {
              mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.ctgc.structure_reuse.direct.choose_reuse", (MR_String) "predicate \140transform_hlds.ctgc.structure_reuse.direct.choose_reuse.cons_has_normal_fields\'/2", (MR_String) "unusual cons_id");
              (env).transform_hlds__ctgc__structure_reuse__direct__choose_reuse__cons_has_normal_fields_2_p_0_env_0__succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word ConsRepnDefn_8;
              MR_Word Var_38;
              MR_Word Var_39;
              MR_Word Var_40;
              MR_Integer Var_41;
              MR_Word Var_42;

              check_hlds__type_util__get_cons_repn_defn_det_3_p_0(ModuleInfo_3, Cons_4, &ConsRepnDefn_8);
              Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), ConsRepnDefn_8, (MR_Integer) 0)));
              Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), ConsRepnDefn_8, (MR_Integer) 1)));
              Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), ConsRepnDefn_8, (MR_Integer) 2)));
              (env).transform_hlds__ctgc__structure_reuse__direct__choose_reuse__cons_has_normal_fields_2_p_0_env_0__ConsArgRepns_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ConsRepnDefn_8, (MR_Integer) 3)));
              Var_41 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ConsRepnDefn_8, (MR_Integer) 4)));
              Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), ConsRepnDefn_8, (MR_Integer) 5)));
              transform_hlds__ctgc__structure_reuse__direct__choose_reuse__cons_has_normal_fields_2_p_0_4(&env);
              (env).transform_hlds__ctgc__structure_reuse__direct__choose_reuse__cons_has_normal_fields_2_p_0_env_0__succeeded = !((env).transform_hlds__ctgc__structure_reuse__direct__choose_reuse__cons_has_normal_fields_2_p_0_env_0__succeeded);
            }
            break;
          case (MR_Integer) 3:
            (env).transform_hlds__ctgc__structure_reuse__direct__choose_reuse__cons_has_normal_fields_2_p_0_env_0__succeeded = MR_TRUE;
            break;
        }
        break;
    }
    return (env).transform_hlds__ctgc__structure_reuse__direct__choose_reuse__cons_has_normal_fields_2_p_0_env_0__succeeded;
  }
}

static MR_Integer MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__add_degree_2_f_0(
  MR_Word Match_4,
  MR_Integer Degree0_5)
{
  {
    MR_Integer HeadVar__3_3;
    MR_Integer Var_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Match_4, (MR_Integer) 3)));
    MR_Word Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), Match_4, (MR_Integer) 0)));
    MR_Word Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), Match_4, (MR_Integer) 1)));
    MR_Float Var_9 = MR_unbox_float((MR_hl_field(MR_mktag(0), Match_4, (MR_Integer) 2)));

    HeadVar__3_3 = (Degree0_5 + Var_6);
    return HeadVar__3_3;
  }
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
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__find_match_in_goal_2_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_LambdaHeadVar__2_86;

    conv0_LambdaHeadVar__2_86 = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__IntroducedFrom__func__find_match_in_goal_2__860__1_1_f_0(((MR_Word) wrapper_arg_1));
    wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_86));
    return wrapper_arg_2;
  }
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
    MR_Word GoalExpr_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), Goal_6, (MR_Integer) 0)));
    MR_Word GoalInfo_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), Goal_6, (MR_Integer) 1)));

    // setup for model_det tailcalls optimized into a loop
    switch (MR_tag((MR_Word) GoalExpr_8)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *STATE_VARIABLE_Match_72 = STATE_VARIABLE_Match_0_71;
        break;
      case (MR_Integer) 1:
        {
          MR_Word Unification_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), GoalExpr_8, (MR_Integer) 3)));
          MR_Word Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), GoalExpr_8, (MR_Integer) 0)));
          MR_Word Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), GoalExpr_8, (MR_Integer) 1)));
          MR_Word Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), GoalExpr_8, (MR_Integer) 2)));
          MR_Word Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), GoalExpr_8, (MR_Integer) 4)));

          switch (MR_tag((MR_Word) Unification_13)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), Unification_13, (MR_Integer) 0)));
                MR_Word Cons_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), Unification_13, (MR_Integer) 1)));
                MR_Word Args_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), Unification_13, (MR_Integer) 2)));
                MR_Word VarType_22;
                MR_Word Var_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), Background_5, (MR_Integer) 3)));
                MR_Word Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), Unification_13, (MR_Integer) 3)));
                MR_Word Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), Unification_13, (MR_Integer) 4)));
                MR_Word Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), Unification_13, (MR_Integer) 5)));
                MR_Word Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), Unification_13, (MR_Integer) 6)));
                MR_Word Var_101 = ((MR_Word) (MR_hl_field(MR_mktag(0), Background_5, (MR_Integer) 0)));
                MR_Word Var_102 = ((MR_Word) (MR_hl_field(MR_mktag(0), Background_5, (MR_Integer) 1)));
                MR_Word Var_103 = ((MR_Word) (MR_hl_field(MR_mktag(0), Background_5, (MR_Integer) 2)));
                MR_Word Var_94;
                MR_Word Var_95;
                MR_Word Var_104;
                MR_Word Var_105;
                MR_Word Var_106;

                hlds__vartypes__lookup_var_type_3_p_0(Var_93, Var_15, &VarType_22);
                Var_104 = ((MR_Word) (MR_hl_field(MR_mktag(0), Background_5, (MR_Integer) 0)));
                Var_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), Background_5, (MR_Integer) 1)));
                Var_105 = ((MR_Word) (MR_hl_field(MR_mktag(0), Background_5, (MR_Integer) 2)));
                Var_106 = ((MR_Word) (MR_hl_field(MR_mktag(0), Background_5, (MR_Integer) 3)));
                succeeded = transform_hlds__ctgc__util__top_cell_may_be_reusable_2_p_0(Var_94, VarType_22);
                if (succeeded)
                {
                  Var_95 = hlds__hlds_goal__goal_info_get_reuse_1_f_0(GoalInfo_9);
                  succeeded = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__empty_reuse_description_1_p_0(Var_95);
                }
                if (succeeded)
                {
                  MR_Word Var_96;

                  Var_96 = transform_hlds__smm_common__program_point_init_1_f_0(GoalInfo_9);
                  transform_hlds__ctgc__structure_reuse__direct__choose_reuse__verify_match_7_p_0(Background_5, Var_15, Cons_16, Args_17, Var_96, STATE_VARIABLE_Match_0_71, STATE_VARIABLE_Match_72);
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
              switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Unification_13, (MR_Integer) 0)))) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  *STATE_VARIABLE_Match_72 = STATE_VARIABLE_Match_0_71;
                  break;
                case (MR_Integer) 1:
                  {
                    {
                      mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.ctgc.structure_reuse.direct.choose_reuse", (MR_String) "predicate \140transform_hlds.ctgc.structure_reuse.direct.choose_reuse.find_match_in_goal_2\'/4", (MR_String) "complicated unify");
                      return;
                    }
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
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_8, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *STATE_VARIABLE_Match_72 = STATE_VARIABLE_Match_0_71;
            break;
          case (MR_Integer) 1:
            *STATE_VARIABLE_Match_72 = STATE_VARIABLE_Match_0_71;
            break;
          case (MR_Integer) 2:
            {
              MR_Word Goals_55 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_8, (MR_Integer) 2)));
              MR_Word Var_54 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_8, (MR_Integer) 1)));

              transform_hlds__ctgc__structure_reuse__direct__choose_reuse__find_best_match_in_conjunction_4_p_0(Background_5, Goals_55, STATE_VARIABLE_Match_0_71, STATE_VARIABLE_Match_72);
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word Goals_98 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_8, (MR_Integer) 1)));

              transform_hlds__ctgc__structure_reuse__direct__choose_reuse__find_match_in_disjunction_4_p_0(Background_5, Goals_98, STATE_VARIABLE_Match_0_71, STATE_VARIABLE_Match_72);
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word Cases_58 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_8, (MR_Integer) 3)));
              MR_Word Goals_100;
              MR_Word Var_56 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_8, (MR_Integer) 1)));
              MR_Word Var_57 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_8, (MR_Integer) 2)));

              Goals_100 = mercury__list__map_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0, (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, (MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_2[24], Cases_58);
              transform_hlds__ctgc__structure_reuse__direct__choose_reuse__find_match_in_disjunction_4_p_0(Background_5, Goals_100, STATE_VARIABLE_Match_0_71, STATE_VARIABLE_Match_72);
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word ScopeGoal_69 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_8, (MR_Integer) 2)));
              MR_Word Var_68 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_8, (MR_Integer) 1)));
              MR_Word next_value_of_Goal_6 = ScopeGoal_69;

              // direct tailcall eliminated
              Goal_6 = next_value_of_Goal_6;
              continue;
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word CondGoal_61 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_8, (MR_Integer) 2)));
              MR_Word ThenGoal_62 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_8, (MR_Integer) 3)));
              MR_Word ElseGoal_63 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_8, (MR_Integer) 4)));
              MR_Word MatchThen_65;
              MR_Word MatchElse_66;
              MR_Word Var_77;
              MR_Word Var_78;
              MR_Word Var_80;
              MR_Word Var_82;
              MR_Word Var_60 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_8, (MR_Integer) 1)));

              {
                Var_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_78, 0) = ((MR_Box) (ThenGoal_62));
                MR_hl_field(MR_mktag(1), Var_78, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                Var_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_77, 0) = ((MR_Box) (CondGoal_61));
                MR_hl_field(MR_mktag(1), Var_77, 1) = ((MR_Box) (Var_78));
              }
              transform_hlds__ctgc__structure_reuse__direct__choose_reuse__find_best_match_in_conjunction_4_p_0(Background_5, Var_77, STATE_VARIABLE_Match_0_71, &MatchThen_65);
              transform_hlds__ctgc__structure_reuse__direct__choose_reuse__find_match_in_goal_2_4_p_0(Background_5, ElseGoal_63, STATE_VARIABLE_Match_0_71, &MatchElse_66);
              {
                Var_82 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_82, 0) = ((MR_Box) (MatchElse_66));
                MR_hl_field(MR_mktag(1), Var_82, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                Var_80 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_80, 0) = ((MR_Box) (MatchThen_65));
                MR_hl_field(MR_mktag(1), Var_80, 1) = ((MR_Box) (Var_82));
              }
              transform_hlds__ctgc__structure_reuse__direct__choose_reuse__average_match_2_p_0(Var_80, STATE_VARIABLE_Match_72);
            }
            break;
          case (MR_Integer) 7:
            {
              {
                mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.ctgc.structure_reuse.direct.choose_reuse", (MR_String) "predicate \140transform_hlds.ctgc.structure_reuse.direct.choose_reuse.find_match_in_goal_2\'/4", (MR_String) "shorthand");
                return;
              }
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
  {
    MR_Box wrapper_arg_3;
    MR_Box closure = closure_arg;
    MR_Word conv1_R_6;

    conv1_R_6 = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__glb_reuse_types_2_2_f_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    wrapper_arg_3 = ((MR_Box) (conv1_R_6));
    return wrapper_arg_3;
  }
}

static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__verify_match_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;
    MR_Word conv0_ReuseType_12;

    succeeded = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__compute_reuse_type_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6))), ((MR_Word) wrapper_arg_1), &conv0_ReuseType_12);
    if (succeeded)
    {
      *wrapper_arg_2 = ((MR_Box) (conv0_ReuseType_12));
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
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
  {
    MR_bool succeeded;
    MR_Word DeconSpecs_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Match_0_18, (MR_Integer) 0)));
    MR_Word Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Match_0_18, (MR_Integer) 1)));
    MR_Float Var_23 = MR_unbox_float((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Match_0_18, (MR_Integer) 2)));
    MR_Integer Var_24 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Match_0_18, (MR_Integer) 3)));
    MR_Word ReuseType_16;
    MR_Word TypeCtorInfo_6_32;
    MR_Word ReuseTypes_15;
    MR_Word Var_20;
    MR_Word First_29;
    MR_Word Rest_30;
    MR_Word Var_31;
    MR_Box conv2_ReuseType_16;

    {
      Var_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_20, 0) = ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_9[0]));
      MR_hl_field(MR_mktag(0), Var_20, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__verify_match_7_p_0_1));
      MR_hl_field(MR_mktag(0), Var_20, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
      MR_hl_field(MR_mktag(0), Var_20, 3) = ((MR_Box) (Background_8));
      MR_hl_field(MR_mktag(0), Var_20, 4) = ((MR_Box) (NewVar_9));
      MR_hl_field(MR_mktag(0), Var_20, 5) = ((MR_Box) (NewCons_10));
      MR_hl_field(MR_mktag(0), Var_20, 6) = ((MR_Box) (NewArgs_11));
    }
    succeeded = mercury__list__map_3_p_2((MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_deconstruction_spec_0, (MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_reuse_type_0, Var_20, DeconSpecs_14, &ReuseTypes_15);
    if (succeeded)
    {
      succeeded = ((MR_tag((MR_Word) ReuseTypes_15)) == (MR_mktag((MR_Integer) 1)));
      if (succeeded)
      {
        First_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), ReuseTypes_15, (MR_Integer) 0)));
        Rest_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), ReuseTypes_15, (MR_Integer) 1)));
        TypeCtorInfo_6_32 = (MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_reuse_type_0;
        Var_31 = (MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_2[23];
        conv2_ReuseType_16 = mercury__list__foldl_3_f_0(TypeCtorInfo_6_32, TypeCtorInfo_6_32, Var_31, Rest_30, ((MR_Box) (First_29)));
        ReuseType_16 = ((MR_Word) conv2_ReuseType_16);
        succeeded = MR_TRUE;
      }
    }
    if (succeeded)
    {
      MR_Word ConSpec_17;
      MR_Word DeconSpecs0_39;
      MR_Word ConSpecs0_40;
      MR_Float Value0_41;
      MR_Integer Degree0_42;
      MR_Word ConSpecs_43;
      MR_Integer Degree_44;
      MR_Float FDegree0_45;
      MR_Float FDegree_46;
      MR_Float Value_47;
      MR_Float Var_49;
      MR_Float Var_50;
      MR_Float Var_51;
      MR_Word Var_52;
      MR_Word Var_53;
      MR_Word Var_54;
      MR_Word Var_55;

      {
        ConSpec_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), ConSpec_17, 0) = ((MR_Box) (PP_12));
        MR_hl_field(MR_mktag(0), ConSpec_17, 1) = ((MR_Box) (ReuseType_16));
      }
      DeconSpecs0_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Match_0_18, (MR_Integer) 0)));
      ConSpecs0_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Match_0_18, (MR_Integer) 1)));
      Value0_41 = MR_unbox_float((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Match_0_18, (MR_Integer) 2)));
      Degree0_42 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Match_0_18, (MR_Integer) 3)));
      {
        ConSpecs_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), ConSpecs_43, 0) = ((MR_Box) (ConSpec_17));
        MR_hl_field(MR_mktag(1), ConSpecs_43, 1) = ((MR_Box) (ConSpecs0_40));
      }
      Degree_44 = (Degree0_42 + (MR_Integer) 1);
      FDegree0_45 = mercury__float__float_1_f_0(Degree0_42);
      FDegree_46 = mercury__float__float_1_f_0(Degree_44);
      Var_50 = (Value0_41 * FDegree0_45);
      Var_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), ConSpec_17, (MR_Integer) 0)));
      Var_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), ConSpec_17, (MR_Integer) 1)));
      Var_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_52, (MR_Integer) 0)));
      Var_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_52, (MR_Integer) 1)));
      Var_51 = MR_unbox_float((MR_hl_field(MR_mktag(0), Var_52, (MR_Integer) 2)));
      Var_49 = (Var_50 + Var_51);
      Value_47 = mercury__float__f_slash_2_f_0(Var_49, FDegree_46);
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
        *STATE_VARIABLE_Match_19 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (DeconSpecs0_39));
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ConSpecs_43));
        MR_hl_field(MR_mktag(0), base, 2) = MR_box_float(Value_47);
        MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Degree_44));
      }
    }
    else
      *STATE_VARIABLE_Match_19 = STATE_VARIABLE_Match_0_18;
  }
}

static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__empty_reuse_description_1_p_0(
  MR_Word HeadVar__1_1)
{
  {
    MR_bool succeeded = (HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));

    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__find_match_in_disjunction_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_LambdaHeadVar__3_21;

    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__IntroducedFrom__pred__average_match__439__1_3_p_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv1_LambdaHeadVar__3_21);
    *wrapper_arg_3 = ((MR_Box) (conv1_LambdaHeadVar__3_21));
  }
}

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__find_match_in_disjunction_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_Match_8;

    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__find_match_in_goal_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) wrapper_arg_1), &conv0_Match_8);
    *wrapper_arg_2 = ((MR_Box) (conv0_Match_8));
  }
}

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__find_match_in_disjunction_4_p_0(
  MR_Word Background_5,
  MR_Word Branches_6,
  MR_Word STATE_VARIABLE_Match_0_11,
  MR_Word * STATE_VARIABLE_Match_12)
{
  if ((Branches_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    *STATE_VARIABLE_Match_12 = STATE_VARIABLE_Match_0_11;
  else
  {
    MR_Word BranchMatches_10;
    MR_Word Var_13;

    {
      Var_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_13, 0) = ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_6[1]));
      MR_hl_field(MR_mktag(0), Var_13, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__find_match_in_disjunction_4_p_0_1));
      MR_hl_field(MR_mktag(0), Var_13, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_13, 3) = ((MR_Box) (Background_5));
      MR_hl_field(MR_mktag(0), Var_13, 4) = ((MR_Box) (STATE_VARIABLE_Match_0_11));
    }
    mercury__list__map_3_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, (MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_match_0, Var_13, Branches_6, &BranchMatches_10);
    if ((BranchMatches_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      {
        mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.ctgc.structure_reuse.direct.choose_reuse", (MR_String) "predicate \140transform_hlds.ctgc.structure_reuse.direct.choose_reuse.average_match\'/2", (MR_String) "empty list");
        return;
      }
    }
    else
    {
      MR_Word TypeCtorInfo_65_81 = (MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_match_0;
      MR_Word First_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), BranchMatches_10, (MR_Integer) 0)));
      MR_Word Rest_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), BranchMatches_10, (MR_Integer) 1)));
      MR_Integer Length_23;
      MR_Word Match0_31;
      MR_Float Var_47;
      MR_Float Var_48;
      MR_Float Var_49;
      MR_Box conv2_Match0_31;
      MR_Word Var_74;
      MR_Word Var_75;
      MR_Integer Var_76;
      MR_Word Var_77;
      MR_Word Var_78;
      MR_Integer Var_80;
      MR_Float Var_79;

      mercury__list__length_2_p_0(TypeCtorInfo_65_81, BranchMatches_10, &Length_23);
      mercury__list__foldl_4_p_0(TypeCtorInfo_65_81, TypeCtorInfo_65_81, (MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_2[22], Rest_22, ((MR_Box) (First_21)), &conv2_Match0_31);
      Match0_31 = ((MR_Word) conv2_Match0_31);
      Var_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), Match0_31, (MR_Integer) 0)));
      Var_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), Match0_31, (MR_Integer) 1)));
      Var_48 = MR_unbox_float((MR_hl_field(MR_mktag(0), Match0_31, (MR_Integer) 2)));
      Var_76 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Match0_31, (MR_Integer) 3)));
      Var_49 = mercury__float__float_1_f_0(Length_23);
      Var_47 = mercury__float__f_slash_2_f_0(Var_48, Var_49);
      Var_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), Match0_31, (MR_Integer) 0)));
      Var_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), Match0_31, (MR_Integer) 1)));
      Var_79 = MR_unbox_float((MR_hl_field(MR_mktag(0), Match0_31, (MR_Integer) 2)));
      Var_80 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Match0_31, (MR_Integer) 3)));
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
        *STATE_VARIABLE_Match_12 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_77));
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_78));
        MR_hl_field(MR_mktag(0), base, 2) = MR_box_float(Var_47);
        MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_80));
      }
    }
  }
}

static MR_Word MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__match_get_decon_specs_1_f_0(
  MR_Word Match_3)
{
  {
    MR_Word HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), Match_3, (MR_Integer) 0)));
    MR_Word Var_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), Match_3, (MR_Integer) 1)));
    MR_Float Var_5 = MR_unbox_float((MR_hl_field(MR_mktag(0), Match_3, (MR_Integer) 2)));
    MR_Integer Var_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Match_3, (MR_Integer) 3)));

    return HeadVar__2_2;
  }
}

static MR_Box MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__deconstruction_specs_2_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__2_2;

    conv0_HeadVar__2_2 = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__match_get_decon_specs_1_f_0(((MR_Word) wrapper_arg_1));
    wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__deconstruction_specs_2_4_p_0(
  MR_Word DeadVar_5,
  MR_Word Table_6,
  MR_Word STATE_VARIABLE_DeconstructionSpecs_0_10,
  MR_Word * STATE_VARIABLE_DeconstructionSpecs_11)
{
  {
    MR_Word TypeCtorInfo_16_16 = (MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_match_0;
    MR_Word TypeCtorInfo_17_17;
    MR_Word Matches_8;
    MR_Word NewSpecs_9;
    MR_Word Var_12;

    mercury__multi_map__lookup_3_p_0((MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_1[0], TypeCtorInfo_16_16, Table_6, ((MR_Box) (DeadVar_5)), &Matches_8);
    TypeCtorInfo_17_17 = (MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_deconstruction_spec_0;
    Var_12 = mercury__list__map_2_f_0(TypeCtorInfo_16_16, (MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_1[3], (MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_2[21], Matches_8);
    NewSpecs_9 = mercury__list__condense_1_f_0(TypeCtorInfo_17_17, Var_12);
    mercury__list__append_3_p_1(TypeCtorInfo_17_17, NewSpecs_9, STATE_VARIABLE_DeconstructionSpecs_0_10, STATE_VARIABLE_DeconstructionSpecs_11);
  }
}

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__process_common_var_5_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv5_Result_6;

    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__reverse_compare_matches_value_3_p_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv5_Result_6);
    *wrapper_arg_3 = ((MR_Box) (conv5_Result_6));
  }
}

static MR_Box MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__process_common_var_5_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_Box wrapper_arg_3;
    MR_Box closure = closure_arg;
    MR_Integer conv3_HeadVar__3_3;

    conv3_HeadVar__3_3 = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__add_degree_2_f_0(((MR_Word) wrapper_arg_1), ((MR_Integer) wrapper_arg_2));
    wrapper_arg_3 = ((MR_Box) (conv3_HeadVar__3_3));
    return wrapper_arg_3;
  }
}

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__process_common_var_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv2_Match_8;

    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__find_match_in_goal_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) wrapper_arg_1), &conv2_Match_8);
    *wrapper_arg_2 = ((MR_Box) (conv2_Match_8));
  }
}

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__process_common_var_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_DeconstructionSpecs_11;

    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__deconstruction_specs_2_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv0_STATE_VARIABLE_DeconstructionSpecs_11);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_DeconstructionSpecs_11));
  }
}

static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__process_common_var_5_p_0(
  MR_Word Background_6,
  MR_Word Cont_7,
  MR_Word DisjTables_8,
  MR_Word CommonDeadVar_9,
  MR_Word * Table_10)
{
  {
    MR_bool succeeded;
    MR_Word TypeInfo_15_15;
    MR_Word TypeCtorInfo_16_16;
    MR_Word Match0_11;
    MR_Word Match_12;
    MR_Word Table0_13;
    MR_Word Var_14;
    MR_Word Var_20;
    MR_Word ExclusiveMatches_37;
    MR_Integer Degree_38;
    MR_Word Var_39;
    MR_Word STATE_VARIABLE_Match_14_40;
    MR_Word Sorted_61;
    MR_Word Var_64;
    MR_Word Constructions_73;
    MR_Float Value_74;
    MR_Float Var_77;
    MR_Box conv1_Var_14;
    MR_Box conv4_Degree_38;
    MR_Word Var_42;
    MR_Integer Var_45;
    MR_Word Var_75;
    MR_Word Var_76;

    {
      Var_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_20, 0) = ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_6[5]));
      MR_hl_field(MR_mktag(0), Var_20, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__process_common_var_5_p_0_1));
      MR_hl_field(MR_mktag(0), Var_20, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_20, 3) = ((MR_Box) (CommonDeadVar_9));
    }
    mercury__list__foldl_4_p_0((MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_2[1], (MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_1[3], Var_20, DisjTables_8, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &conv1_Var_14);
    Var_14 = ((MR_Word) conv1_Var_14);
    {
      Match0_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Match0_11, 0) = ((MR_Box) (Var_14));
      MR_hl_field(MR_mktag(0), Match0_11, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), Match0_11, 2) = MR_box_float((MR_Float) 0.0000000000000000);
      MR_hl_field(MR_mktag(0), Match0_11, 3) = ((MR_Box) ((MR_Integer) 0));
    }
    {
      Var_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_39, 0) = ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_6[1]));
      MR_hl_field(MR_mktag(0), Var_39, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__process_common_var_5_p_0_2));
      MR_hl_field(MR_mktag(0), Var_39, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_39, 3) = ((MR_Box) (Background_6));
      MR_hl_field(MR_mktag(0), Var_39, 4) = ((MR_Box) (Match0_11));
    }
    mercury__list__map_3_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, (MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_match_0, Var_39, Cont_7, &ExclusiveMatches_37);
    conv4_Degree_38 = mercury__list__foldl_3_f_0((MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_match_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_2[19], ExclusiveMatches_37, ((MR_Box) ((MR_Integer) 0)));
    Degree_38 = ((MR_Integer) conv4_Degree_38);
    {
      Var_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_64, 0) = ((MR_Box) (Match0_11));
      MR_hl_field(MR_mktag(1), Var_64, 1) = ((MR_Box) (ExclusiveMatches_37));
    }
    mercury__list__sort_3_p_0((MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_match_0, (MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_2[20], Var_64, &Sorted_61);
    if ((Sorted_61 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.ctgc.structure_reuse.direct.choose_reuse", (MR_String) "predicate \140transform_hlds.ctgc.structure_reuse.direct.choose_reuse.highest_match_in_list\'/3", (MR_String) "empty list of matches");
    }
    else
    {
      MR_Word Var_62;

      STATE_VARIABLE_Match_14_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), Sorted_61, (MR_Integer) 0)));
      Var_62 = ((MR_Word) (MR_hl_field(MR_mktag(1), Sorted_61, (MR_Integer) 1)));
    }
    Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Match_14_40, (MR_Integer) 0)));
    Constructions_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Match_14_40, (MR_Integer) 1)));
    Value_74 = MR_unbox_float((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Match_14_40, (MR_Integer) 2)));
    Var_45 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Match_14_40, (MR_Integer) 3)));
    {
      Match_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Match_12, 0) = ((MR_Box) (Var_42));
      MR_hl_field(MR_mktag(0), Match_12, 1) = ((MR_Box) (Constructions_73));
      MR_hl_field(MR_mktag(0), Match_12, 2) = MR_box_float(Value_74);
      MR_hl_field(MR_mktag(0), Match_12, 3) = ((MR_Box) (Degree_38));
    }
    succeeded = ((MR_tag((MR_Word) Constructions_73)) == (MR_mktag((MR_Integer) 1)));
    if (succeeded)
    {
      Var_75 = ((MR_Word) (MR_hl_field(MR_mktag(1), Constructions_73, (MR_Integer) 0)));
      Var_76 = ((MR_Word) (MR_hl_field(MR_mktag(1), Constructions_73, (MR_Integer) 1)));
      Var_77 = (MR_Float) 0.0000000000000000;
      succeeded = (Value_74 > Var_77);
      if (succeeded)
      {
        TypeInfo_15_15 = (MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_1[0];
        TypeCtorInfo_16_16 = (MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_match_0;
        mercury__multi_map__init_1_p_0(TypeInfo_15_15, TypeCtorInfo_16_16, &Table0_13);
        mercury__multi_map__det_insert_4_p_0(TypeInfo_15_15, TypeCtorInfo_16_16, ((MR_Box) (CommonDeadVar_9)), ((MR_Box) (Match_12)), Table0_13, Table_10);
        succeeded = MR_TRUE;
      }
    }
    return succeeded;
  }
}

static MR_Word MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__common_var_with_list_2_f_0(
  MR_Word Table_4,
  MR_Word List0_5)
{
  {
    MR_Word List_6;
    MR_Word TypeInfo_11_11 = (MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_1[0];
    MR_Word Keys_7;
    MR_Word Set_8;
    MR_Word Var_9;
    MR_Word Var_10;

    mercury__map__keys_2_p_0(TypeInfo_11_11, (MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_1[1], Table_4, &Keys_7);
    Var_9 = mercury__set__list_to_set_1_f_0(TypeInfo_11_11, List0_5);
    Var_10 = mercury__set__list_to_set_1_f_0(TypeInfo_11_11, Keys_7);
    Set_8 = mercury__set__intersect_2_f_0(TypeInfo_11_11, Var_9, Var_10);
    List_6 = mercury__set__to_sorted_list_1_f_0(TypeInfo_11_11, Set_8);
    return List_6;
  }
}

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__compute_match_table_4_p_0(
  MR_Word Background_5,
  MR_Word DeadCellTable_6,
  MR_Word Goal_7,
  MR_Word * MatchTable_8)
{
  {
    MR_Word Var_10;

    Var_10 = mercury__multi_map__init_0_f_0((MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_1[0], (MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_match_0);
    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__compute_match_table_with_continuation_6_p_0(Background_5, DeadCellTable_6, Goal_7, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), Var_10, MatchTable_8);
  }
}

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__remove_deconstruction_from_dead_cell_table_3_p_0(
  MR_Word DeconSpec_4,
  MR_Word STATE_VARIABLE_DeadCellTable_0_6,
  MR_Word * STATE_VARIABLE_DeadCellTable_7)
{
  {
    MR_Word Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), DeconSpec_4, (MR_Integer) 1)));
    MR_Word Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), DeconSpec_4, (MR_Integer) 0)));
    MR_Word Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), DeconSpec_4, (MR_Integer) 2)));
    MR_Word Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), DeconSpec_4, (MR_Integer) 3)));
    MR_Word Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), DeconSpec_4, (MR_Integer) 4)));

    transform_hlds__ctgc__structure_reuse__direct__dead_cell_table_remove_3_p_0(Var_8, STATE_VARIABLE_DeadCellTable_0_6, STATE_VARIABLE_DeadCellTable_7);
  }
}

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__average_match_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_LambdaHeadVar__3_21;

    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__IntroducedFrom__pred__average_match__439__1_3_p_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv0_LambdaHeadVar__3_21);
    *wrapper_arg_3 = ((MR_Box) (conv0_LambdaHeadVar__3_21));
  }
}

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__average_match_2_p_0(
  MR_Word List_3,
  MR_Word * AverageMatch_4)
{
  if ((List_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
  {
    {
      mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.ctgc.structure_reuse.direct.choose_reuse", (MR_String) "predicate \140transform_hlds.ctgc.structure_reuse.direct.choose_reuse.average_match\'/2", (MR_String) "empty list");
      return;
    }
  }
  else
  {
    MR_Word TypeCtorInfo_65_65 = (MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_match_0;
    MR_Word First_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), List_3, (MR_Integer) 0)));
    MR_Word Rest_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), List_3, (MR_Integer) 1)));
    MR_Integer Length_7;
    MR_Word Match0_15;
    MR_Float Var_31;
    MR_Float Var_32;
    MR_Float Var_33;
    MR_Box conv1_Match0_15;
    MR_Word Var_58;
    MR_Word Var_59;
    MR_Integer Var_60;
    MR_Word Var_61;
    MR_Word Var_62;
    MR_Integer Var_64;
    MR_Float Var_63;

    mercury__list__length_2_p_0(TypeCtorInfo_65_65, List_3, &Length_7);
    mercury__list__foldl_4_p_0(TypeCtorInfo_65_65, TypeCtorInfo_65_65, (MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_2[18], Rest_6, ((MR_Box) (First_5)), &conv1_Match0_15);
    Match0_15 = ((MR_Word) conv1_Match0_15);
    Var_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), Match0_15, (MR_Integer) 0)));
    Var_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), Match0_15, (MR_Integer) 1)));
    Var_32 = MR_unbox_float((MR_hl_field(MR_mktag(0), Match0_15, (MR_Integer) 2)));
    Var_60 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Match0_15, (MR_Integer) 3)));
    Var_33 = mercury__float__float_1_f_0(Length_7);
    Var_31 = mercury__float__f_slash_2_f_0(Var_32, Var_33);
    Var_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), Match0_15, (MR_Integer) 0)));
    Var_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), Match0_15, (MR_Integer) 1)));
    Var_63 = MR_unbox_float((MR_hl_field(MR_mktag(0), Match0_15, (MR_Integer) 2)));
    Var_64 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Match0_15, (MR_Integer) 3)));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      *AverageMatch_4 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_61));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_62));
      MR_hl_field(MR_mktag(0), base, 2) = MR_box_float(Var_31);
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_64));
    }
  }
}

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__reverse_compare_matches_value_3_p_0(
  MR_Word Match1_4,
  MR_Word Match2_5,
  MR_Word * Result_6)
{
  {
    MR_Float V1_10 = MR_unbox_float((MR_hl_field(MR_mktag(0), Match2_5, (MR_Integer) 2)));
    MR_Float V2_11 = MR_unbox_float((MR_hl_field(MR_mktag(0), Match1_4, (MR_Integer) 2)));
    MR_Word Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), Match2_5, (MR_Integer) 0)));
    MR_Word Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), Match2_5, (MR_Integer) 1)));
    MR_Integer Var_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Match2_5, (MR_Integer) 3)));
    MR_Word Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), Match1_4, (MR_Integer) 0)));
    MR_Word Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), Match1_4, (MR_Integer) 1)));
    MR_Integer Var_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Match1_4, (MR_Integer) 3)));

    mercury__private_builtin__builtin_compare_float_3_p_0(Result_6, V1_10, V2_11);
  }
}

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__reverse_compare_matches_value_degree_3_p_0(
  MR_Word MatchA_4,
  MR_Word MatchB_5,
  MR_Word * Result_6)
{
  {
    MR_bool succeeded;
    MR_Float VA_10;
    MR_Float VB_11;
    MR_Float Var_14 = MR_unbox_float((MR_hl_field(MR_mktag(0), MatchB_5, (MR_Integer) 2)));
    MR_Word Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), MatchB_5, (MR_Integer) 0)));
    MR_Word Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), MatchB_5, (MR_Integer) 1)));
    MR_Integer Var_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), MatchB_5, (MR_Integer) 3)));
    MR_Float Var_28;
    MR_Word Var_32;
    MR_Word Var_33;
    MR_Integer Var_34;

    succeeded = (Var_14 == ((MR_Float) 0.0000000000000000));
    succeeded = !(succeeded);
    if (succeeded)
    {
      MR_Float Var_15 = MR_unbox_float((MR_hl_field(MR_mktag(0), MatchB_5, (MR_Integer) 2)));
      MR_Float Var_16;
      MR_Integer Var_23 = ((MR_Integer) (MR_hl_field(MR_mktag(0), MatchB_5, (MR_Integer) 3)));
      MR_Word Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), MatchB_5, (MR_Integer) 0)));
      MR_Word Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), MatchB_5, (MR_Integer) 1)));

      Var_16 = mercury__float__float_1_f_0(Var_23);
      VA_10 = mercury__float__f_slash_2_f_0(Var_15, Var_16);
    }
    else
      VA_10 = (MR_Float) 0.0000000000000000;
    Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), MatchA_4, (MR_Integer) 0)));
    Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), MatchA_4, (MR_Integer) 1)));
    Var_28 = MR_unbox_float((MR_hl_field(MR_mktag(0), MatchA_4, (MR_Integer) 2)));
    Var_34 = ((MR_Integer) (MR_hl_field(MR_mktag(0), MatchA_4, (MR_Integer) 3)));
    succeeded = (Var_28 == ((MR_Float) 0.0000000000000000));
    succeeded = !(succeeded);
    if (succeeded)
    {
      MR_Float Var_29 = MR_unbox_float((MR_hl_field(MR_mktag(0), MatchA_4, (MR_Integer) 2)));
      MR_Float Var_30;
      MR_Integer Var_37 = ((MR_Integer) (MR_hl_field(MR_mktag(0), MatchA_4, (MR_Integer) 3)));
      MR_Word Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), MatchA_4, (MR_Integer) 0)));
      MR_Word Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), MatchA_4, (MR_Integer) 1)));

      Var_30 = mercury__float__float_1_f_0(Var_37);
      VB_11 = mercury__float__f_slash_2_f_0(Var_29, Var_30);
    }
    else
      VB_11 = (MR_Float) 0.0000000000000000;
    mercury__private_builtin__builtin_compare_float_3_p_0(Result_6, VA_10, VB_11);
  }
}

static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__match_has_no_construction_candidates_1_p_0(
  MR_Word HeadVar__1_1)
{
  {
    MR_bool succeeded;
    MR_Word Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1)));
    MR_Word Var_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0)));
    MR_Float Var_3 = MR_unbox_float((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2)));
    MR_Integer Var_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 3)));

    succeeded = (Var_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    return succeeded;
  }
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
  {
    MR_bool succeeded;
    MR_Word Globals_12;
    MR_Word Strategy_13;
    MR_Word BackGroundInfo_14;
    MR_Word RemainingDeadCellTable_15;
    MR_Word FreeCells_16;
    MR_Word STATE_VARIABLE_Goal_20_20;
    MR_Word Var_21;
    MR_Word VarTypes_29;

    hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_7, &Globals_12);
    libs__globals__get_reuse_strategy_2_p_0(Globals_12, &Strategy_13);
    hlds__hlds_pred__proc_info_get_vartypes_2_p_0(ProcInfo_8, &VarTypes_29);
    {
      BackGroundInfo_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), BackGroundInfo_14, 0) = ((MR_Box) (Strategy_13));
      MR_hl_field(MR_mktag(0), BackGroundInfo_14, 1) = ((MR_Box) (ModuleInfo_7));
      MR_hl_field(MR_mktag(0), BackGroundInfo_14, 2) = ((MR_Box) (ProcInfo_8));
      MR_hl_field(MR_mktag(0), BackGroundInfo_14, 3) = ((MR_Box) (VarTypes_29));
    }
    Var_21 = transform_hlds__ctgc__structure_reuse__domain__reuse_as_init_0_f_0();
    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__choose_reuse_in_goal_7_p_0(BackGroundInfo_14, DeadCellTable_9, &RemainingDeadCellTable_15, STATE_VARIABLE_Goal_0_18, &STATE_VARIABLE_Goal_20_20, Var_21, ReuseAs_11);
    libs__globals__lookup_bool_option_3_p_0(Globals_12, (MR_Integer) 423, &FreeCells_16);
    switch (FreeCells_16) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *STATE_VARIABLE_Goal_19 = STATE_VARIABLE_Goal_20_20;
        break;
      case (MR_Integer) 1:
        {
          MR_Word VeryVerbose_17;
          MR_Word DeadCellTable_35;

          libs__globals__lookup_bool_option_3_p_0(Globals_12, (MR_Integer) 59, &VeryVerbose_17);
          transform_hlds__ctgc__structure_reuse__direct__dead_cell_table_remove_conditionals_2_p_0(RemainingDeadCellTable_15, &DeadCellTable_35);
          succeeded = transform_hlds__ctgc__structure_reuse__direct__dead_cell_table_is_empty_1_p_0(DeadCellTable_35);
          if (succeeded)
          {
            libs__file_util__maybe_write_string_4_p_0(VeryVerbose_17, (MR_String) "% No cells to be cached/freed.\n");
            *STATE_VARIABLE_Goal_19 = STATE_VARIABLE_Goal_20_20;
          }
          else
          {
            libs__file_util__maybe_write_string_4_p_0(VeryVerbose_17, (MR_String) "% Marking cacheable/freeable cells.\n");
            transform_hlds__ctgc__structure_reuse__direct__choose_reuse__check_for_cell_caching_2_3_p_0(DeadCellTable_35, STATE_VARIABLE_Goal_20_20, STATE_VARIABLE_Goal_19);
          }
        }
        break;
    }
  }
}

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__check_for_cell_caching_2_3_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv2_STATE_VARIABLE_Case_11;

    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__check_for_cell_caching_in_case_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1), &conv2_STATE_VARIABLE_Case_11);
    *wrapper_arg_2 = ((MR_Box) (conv2_STATE_VARIABLE_Case_11));
  }
}

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__check_for_cell_caching_2_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_STATE_VARIABLE_Goal_49;

    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__check_for_cell_caching_2_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1), &conv1_STATE_VARIABLE_Goal_49);
    *wrapper_arg_2 = ((MR_Box) (conv1_STATE_VARIABLE_Goal_49));
  }
}

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__check_for_cell_caching_2_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_Goal_49;

    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__check_for_cell_caching_2_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1), &conv0_STATE_VARIABLE_Goal_49);
    *wrapper_arg_2 = ((MR_Box) (conv0_STATE_VARIABLE_Goal_49));
  }
}

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__check_for_cell_caching_2_3_p_0(
  MR_Word DeadCellTable_4,
  MR_Word STATE_VARIABLE_Goal_0_48,
  MR_Word * STATE_VARIABLE_Goal_49)
{
  {
    MR_bool succeeded;
    MR_Word GoalExpr0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Goal_0_48, (MR_Integer) 0)));
    MR_Word GoalInfo0_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Goal_0_48, (MR_Integer) 1)));
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
          MR_Word A_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), GoalExpr0_6, (MR_Integer) 0)));
          MR_Word B_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), GoalExpr0_6, (MR_Integer) 1)));
          MR_Word C_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), GoalExpr0_6, (MR_Integer) 2)));
          MR_Word Unification0_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), GoalExpr0_6, (MR_Integer) 3)));
          MR_Word D_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), GoalExpr0_6, (MR_Integer) 4)));
          MR_Word Unification_13;
          MR_Word Var_80;
          MR_Word ConsId_81;
          MR_Word Args_82;
          MR_Word ArgModes_83;
          MR_Word CanFail_84;
          MR_Word Condition_86;
          MR_Word Var_88;
          MR_Word Var_85;

          succeeded = ((MR_tag((MR_Word) Unification0_11)) == (MR_mktag((MR_Integer) 1)));
          if (succeeded)
          {
            Var_80 = ((MR_Word) (MR_hl_field(MR_mktag(1), Unification0_11, (MR_Integer) 0)));
            ConsId_81 = ((MR_Word) (MR_hl_field(MR_mktag(1), Unification0_11, (MR_Integer) 1)));
            Args_82 = ((MR_Word) (MR_hl_field(MR_mktag(1), Unification0_11, (MR_Integer) 2)));
            ArgModes_83 = ((MR_Word) (MR_hl_field(MR_mktag(1), Unification0_11, (MR_Integer) 3)));
            CanFail_84 = ((MR_Word) (MR_hl_field(MR_mktag(1), Unification0_11, (MR_Integer) 4)));
            Var_85 = ((MR_Word) (MR_hl_field(MR_mktag(1), Unification0_11, (MR_Integer) 5)));
            Var_88 = transform_hlds__smm_common__program_point_init_1_f_0(GoalInfo0_7);
            succeeded = transform_hlds__ctgc__structure_reuse__direct__dead_cell_table_search_2_f_0(Var_88, DeadCellTable_4, &Condition_86);
            if (succeeded)
            {
              succeeded = transform_hlds__ctgc__structure_reuse__domain__reuse_condition_is_conditional_1_p_0(Condition_86);
              succeeded = !(succeeded);
            }
          }
          if (succeeded)
          {
            {
              Unification_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Unification_13, 0) = ((MR_Box) (Var_80));
              MR_hl_field(MR_mktag(1), Unification_13, 1) = ((MR_Box) (ConsId_81));
              MR_hl_field(MR_mktag(1), Unification_13, 2) = ((MR_Box) (Args_82));
              MR_hl_field(MR_mktag(1), Unification_13, 3) = ((MR_Box) (ArgModes_83));
              MR_hl_field(MR_mktag(1), Unification_13, 4) = ((MR_Box) (CanFail_84));
              MR_hl_field(MR_mktag(1), Unification_13, 5) = ((MR_Box) ((MR_Integer) 0));
            }
            hlds__hlds_goal__goal_info_set_reuse_3_p_0((MR_Word) MR_mkword(MR_mktag(2), &transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_7[0]), GoalInfo0_7, &GoalInfo_14);
          }
          else
          {
            GoalInfo_14 = GoalInfo0_7;
            Unification_13 = Unification0_11;
          }
          {
            GoalExpr_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), GoalExpr_15, 0) = ((MR_Box) (A_8));
            MR_hl_field(MR_mktag(1), GoalExpr_15, 1) = ((MR_Box) (B_9));
            MR_hl_field(MR_mktag(1), GoalExpr_15, 2) = ((MR_Box) (C_10));
            MR_hl_field(MR_mktag(1), GoalExpr_15, 3) = ((MR_Box) (Unification_13));
            MR_hl_field(MR_mktag(1), GoalExpr_15, 4) = ((MR_Box) (D_12));
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
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr0_6, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              GoalExpr_15 = GoalExpr0_6;
              GoalInfo_14 = GoalInfo0_7;
            }
            break;
          case (MR_Integer) 1:
            {
              GoalExpr_15 = GoalExpr0_6;
              GoalInfo_14 = GoalInfo0_7;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word TypeCtorInfo_66_66;
              MR_Word Goals0_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr0_6, (MR_Integer) 2)));
              MR_Word Goals_35;
              MR_Word Var_55;
              MR_Word A_57 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr0_6, (MR_Integer) 1)));

              {
                Var_55 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_55, 0) = ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_5[5]));
                MR_hl_field(MR_mktag(0), Var_55, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__check_for_cell_caching_2_3_p_0_1));
                MR_hl_field(MR_mktag(0), Var_55, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(0), Var_55, 3) = ((MR_Box) (DeadCellTable_4));
              }
              TypeCtorInfo_66_66 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
              mercury__list__map_3_p_0(TypeCtorInfo_66_66, TypeCtorInfo_66_66, Var_55, Goals0_34, &Goals_35);
              {
                GoalExpr_15 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), GoalExpr_15, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(3), GoalExpr_15, 1) = ((MR_Box) (A_57));
                MR_hl_field(MR_mktag(3), GoalExpr_15, 2) = ((MR_Box) (Goals_35));
              }
              GoalInfo_14 = GoalInfo0_7;
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word TypeCtorInfo_69_69;
              MR_Word Var_54;
              MR_Word Goals0_58 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr0_6, (MR_Integer) 1)));
              MR_Word Goals_59;

              {
                Var_54 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_54, 0) = ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_5[5]));
                MR_hl_field(MR_mktag(0), Var_54, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__check_for_cell_caching_2_3_p_0_2));
                MR_hl_field(MR_mktag(0), Var_54, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(0), Var_54, 3) = ((MR_Box) (DeadCellTable_4));
              }
              TypeCtorInfo_69_69 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
              mercury__list__map_3_p_0(TypeCtorInfo_69_69, TypeCtorInfo_69_69, Var_54, Goals0_58, &Goals_59);
              {
                GoalExpr_15 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), GoalExpr_15, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                MR_hl_field(MR_mktag(3), GoalExpr_15, 1) = ((MR_Box) (Goals_59));
              }
              GoalInfo_14 = GoalInfo0_7;
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word TypeCtorInfo_72_72;
              MR_Word Cases0_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr0_6, (MR_Integer) 3)));
              MR_Word Cases_37;
              MR_Word Var_53;
              MR_Word A_60 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr0_6, (MR_Integer) 1)));
              MR_Word B_61 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr0_6, (MR_Integer) 2)));

              {
                Var_53 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_53, 0) = ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_5[6]));
                MR_hl_field(MR_mktag(0), Var_53, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__check_for_cell_caching_2_3_p_0_3));
                MR_hl_field(MR_mktag(0), Var_53, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(0), Var_53, 3) = ((MR_Box) (DeadCellTable_4));
              }
              TypeCtorInfo_72_72 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0;
              mercury__list__map_3_p_0(TypeCtorInfo_72_72, TypeCtorInfo_72_72, Var_53, Cases0_36, &Cases_37);
              {
                GoalExpr_15 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), GoalExpr_15, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                MR_hl_field(MR_mktag(3), GoalExpr_15, 1) = ((MR_Box) (A_60));
                MR_hl_field(MR_mktag(3), GoalExpr_15, 2) = ((MR_Box) (B_61));
                MR_hl_field(MR_mktag(3), GoalExpr_15, 3) = ((MR_Box) (Cases_37));
              }
              GoalInfo_14 = GoalInfo0_7;
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word ScopeGoal0_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr0_6, (MR_Integer) 2)));
              MR_Word ScopeGoal_40;
              MR_Word A_62 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr0_6, (MR_Integer) 1)));

              transform_hlds__ctgc__structure_reuse__direct__choose_reuse__check_for_cell_caching_2_3_p_0(DeadCellTable_4, ScopeGoal0_39, &ScopeGoal_40);
              {
                GoalExpr_15 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), GoalExpr_15, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                MR_hl_field(MR_mktag(3), GoalExpr_15, 1) = ((MR_Box) (A_62));
                MR_hl_field(MR_mktag(3), GoalExpr_15, 2) = ((MR_Box) (ScopeGoal_40));
              }
              GoalInfo_14 = GoalInfo0_7;
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word CondGoal0_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr0_6, (MR_Integer) 2)));
              MR_Word ThenGoal0_42 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr0_6, (MR_Integer) 3)));
              MR_Word ElseGoal0_43 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr0_6, (MR_Integer) 4)));
              MR_Word CondGoal_44;
              MR_Word ThenGoal_45;
              MR_Word ElseGoal_46;
              MR_Word A_63 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr0_6, (MR_Integer) 1)));

              transform_hlds__ctgc__structure_reuse__direct__choose_reuse__check_for_cell_caching_2_3_p_0(DeadCellTable_4, CondGoal0_41, &CondGoal_44);
              transform_hlds__ctgc__structure_reuse__direct__choose_reuse__check_for_cell_caching_2_3_p_0(DeadCellTable_4, ThenGoal0_42, &ThenGoal_45);
              transform_hlds__ctgc__structure_reuse__direct__choose_reuse__check_for_cell_caching_2_3_p_0(DeadCellTable_4, ElseGoal0_43, &ElseGoal_46);
              {
                GoalExpr_15 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), GoalExpr_15, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
                MR_hl_field(MR_mktag(3), GoalExpr_15, 1) = ((MR_Box) (A_63));
                MR_hl_field(MR_mktag(3), GoalExpr_15, 2) = ((MR_Box) (CondGoal_44));
                MR_hl_field(MR_mktag(3), GoalExpr_15, 3) = ((MR_Box) (ThenGoal_45));
                MR_hl_field(MR_mktag(3), GoalExpr_15, 4) = ((MR_Box) (ElseGoal_46));
              }
              GoalInfo_14 = GoalInfo0_7;
            }
            break;
          case (MR_Integer) 7:
            {
              {
                mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.ctgc.structure_reuse.direct.choose_reuse", (MR_String) "predicate \140transform_hlds.ctgc.structure_reuse.direct.choose_reuse.check_for_cell_caching_2\'/3", (MR_String) "shorthand");
                return;
              }
            }
            break;
        }
        break;
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_Goal_49 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_15));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo_14));
    }
  }
}

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__choose_reuse_in_goal_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_Result_6;

    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__reverse_compare_matches_value_degree_3_p_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv0_Result_6);
    *wrapper_arg_3 = ((MR_Box) (conv0_Result_6));
  }
}

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__choose_reuse_in_goal_7_p_0(
  MR_Word Background_8,
  MR_Word STATE_VARIABLE_DeadCellTable_0_24,
  MR_Word * STATE_VARIABLE_DeadCellTable_25,
  MR_Word STATE_VARIABLE_Goal_0_26,
  MR_Word * STATE_VARIABLE_Goal_27,
  MR_Word STATE_VARIABLE_ReuseAs_0_28,
  MR_Word * STATE_VARIABLE_ReuseAs_29)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word ModuleInfo_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), Background_8, (MR_Integer) 1)));
    MR_Word Globals_13;
    MR_Word VeryVerbose_14;
    MR_Word MatchTable_15;
    MR_Word Var_71;
    MR_Word Var_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), Background_8, (MR_Integer) 0)));
    MR_Word Var_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), Background_8, (MR_Integer) 2)));
    MR_Word Var_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), Background_8, (MR_Integer) 3)));

    // setup for model_det tailcalls optimized into a loop
    hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_12, &Globals_13);
    libs__globals__lookup_bool_option_3_p_0(Globals_13, (MR_Integer) 59, &VeryVerbose_14);
    Var_71 = mercury__multi_map__init_0_f_0((MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_1[0], (MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_match_0);
    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__compute_match_table_with_continuation_6_p_0(Background_8, STATE_VARIABLE_DeadCellTable_0_24, STATE_VARIABLE_Goal_0_26, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), Var_71, &MatchTable_15);
    succeeded = mercury__multi_map__is_empty_1_p_0((MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_1[0], (MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_match_0, MatchTable_15);
    if (succeeded)
    {
      *STATE_VARIABLE_ReuseAs_29 = STATE_VARIABLE_ReuseAs_0_28;
      *STATE_VARIABLE_Goal_27 = STATE_VARIABLE_Goal_0_26;
      *STATE_VARIABLE_DeadCellTable_25 = STATE_VARIABLE_DeadCellTable_0_24;
    }
    else
    {
      MR_Word TypeCtorInfo_13_84 = (MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_match_0;
      MR_Word Match_16;
      MR_Word Var_64;
      MR_Word Matches_76;
      MR_Word Sorted_77;
      MR_Integer Var_62;
      MR_Float Var_63;
      MR_Word Var_65;

      mercury__multi_map__values_2_p_0((MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_1[0], TypeCtorInfo_13_84, MatchTable_15, &Matches_76);
      mercury__list__sort_3_p_0(TypeCtorInfo_13_84, (MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_2[17], Matches_76, &Sorted_77);
      if ((Sorted_77 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.ctgc.structure_reuse.direct.choose_reuse", (MR_String) "function \140transform_hlds.ctgc.structure_reuse.direct.choose_reuse.highest_match_degree_ratio\'/1", (MR_String) "empty multi_map");
          return;
        }
      }
      else
      {
        MR_Word Var_78;

        Match_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), Sorted_77, (MR_Integer) 0)));
        Var_78 = ((MR_Word) (MR_hl_field(MR_mktag(1), Sorted_77, (MR_Integer) 1)));
      }
      Var_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), Match_16, (MR_Integer) 0)));
      Var_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), Match_16, (MR_Integer) 1)));
      Var_63 = MR_unbox_float((MR_hl_field(MR_mktag(0), Match_16, (MR_Integer) 2)));
      Var_62 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Match_16, (MR_Integer) 3)));
      if ((Var_64 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *STATE_VARIABLE_DeadCellTable_25 = STATE_VARIABLE_DeadCellTable_0_24;
        *STATE_VARIABLE_Goal_27 = STATE_VARIABLE_Goal_0_26;
        *STATE_VARIABLE_ReuseAs_29 = STATE_VARIABLE_ReuseAs_0_28;
      }
      else
      {
        MR_Word ProcInfo_22;
        MR_Integer MaxConditions_23;
        MR_Word STATE_VARIABLE_Goal_36_36;
        MR_Word STATE_VARIABLE_DeadCellTable_37_37;
        MR_Word Var_38;
        MR_Word STATE_VARIABLE_ReuseAs_39_39;
        MR_Word STATE_VARIABLE_Goal_42_42;
        MR_Word STATE_VARIABLE_ReuseAs_43_43;
        MR_Word Var_57;
        MR_Word Var_58;
        MR_Word Var_59;
        MR_Integer Var_41;
        MR_Word next_value_of_STATE_VARIABLE_DeadCellTable_0_24;
        MR_Word next_value_of_STATE_VARIABLE_Goal_0_26;
        MR_Word next_value_of_STATE_VARIABLE_ReuseAs_0_28;

        libs__file_util__maybe_write_string_4_p_0(VeryVerbose_14, (MR_String) "% Reuse results: \n");
        transform_hlds__ctgc__structure_reuse__direct__choose_reuse__maybe_dump_match_table_5_p_0(VeryVerbose_14, MatchTable_15, Match_16);
        transform_hlds__ctgc__structure_reuse__direct__choose_reuse__annotate_reuses_in_goal_4_p_0(Background_8, Match_16, STATE_VARIABLE_Goal_0_26, &STATE_VARIABLE_Goal_36_36);
        transform_hlds__ctgc__structure_reuse__direct__choose_reuse__remove_deconstructions_from_dead_cell_table_3_p_0(Match_16, STATE_VARIABLE_DeadCellTable_0_24, &STATE_VARIABLE_DeadCellTable_37_37);
        Var_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), Background_8, (MR_Integer) 0)));
        Var_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), Background_8, (MR_Integer) 1)));
        ProcInfo_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), Background_8, (MR_Integer) 2)));
        Var_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), Background_8, (MR_Integer) 3)));
        Var_38 = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__match_get_condition_2_f_0(Background_8, Match_16);
        transform_hlds__ctgc__structure_reuse__domain__reuse_as_least_upper_bound_5_p_0(ModuleInfo_12, ProcInfo_22, Var_38, STATE_VARIABLE_ReuseAs_0_28, &STATE_VARIABLE_ReuseAs_39_39);
        libs__globals__lookup_int_option_3_p_0(Globals_13, (MR_Integer) 421, &MaxConditions_23);
        Var_41 = transform_hlds__ctgc__structure_reuse__domain__reuse_as_count_conditions_1_f_0(STATE_VARIABLE_ReuseAs_39_39);
        succeeded = (Var_41 > MaxConditions_23);
        if (succeeded)
        {
          STATE_VARIABLE_Goal_42_42 = STATE_VARIABLE_Goal_0_26;
          STATE_VARIABLE_ReuseAs_43_43 = STATE_VARIABLE_ReuseAs_0_28;
        }
        else
        {
          STATE_VARIABLE_ReuseAs_43_43 = STATE_VARIABLE_ReuseAs_39_39;
          STATE_VARIABLE_Goal_42_42 = STATE_VARIABLE_Goal_36_36;
        }
        // direct tailcall eliminated
        next_value_of_STATE_VARIABLE_DeadCellTable_0_24 = STATE_VARIABLE_DeadCellTable_37_37;
        next_value_of_STATE_VARIABLE_Goal_0_26 = STATE_VARIABLE_Goal_42_42;
        next_value_of_STATE_VARIABLE_ReuseAs_0_28 = STATE_VARIABLE_ReuseAs_43_43;
        STATE_VARIABLE_DeadCellTable_0_24 = next_value_of_STATE_VARIABLE_DeadCellTable_0_24;
        STATE_VARIABLE_Goal_0_26 = next_value_of_STATE_VARIABLE_Goal_0_26;
        STATE_VARIABLE_ReuseAs_0_28 = next_value_of_STATE_VARIABLE_ReuseAs_0_28;
        continue;
      }
    }
    break;
  }
}

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__maybe_dump_match_table_5_p_0(
  MR_Word VeryVerbose_6,
  MR_Word MatchTable_7,
  MR_Word HighestMatch_8)
{
  switch (VeryVerbose_6) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Integer Remainder_27;
        MR_String Line_28;
        MR_String Var_33;
        MR_Integer Remainder_44;
        MR_String Line_45;
        MR_String Var_50;

        Remainder_27 = ((((MR_Integer) 79 - (MR_Integer) 15)) - (MR_Integer) 1);
        Var_33 = mercury__string__duplicate_char_2_f_0((MR_Char) 45, Remainder_27);
        Line_28 = mercury__string__f_43_43_2_f_0((MR_String) "%---reuse table", Var_33);
        mercury__io__write_string_3_p_0(Line_28);
        mercury__io__write_string_3_p_0((MR_String) "%\n");
        mercury__io__write_string_3_p_0((MR_String) "%\t|\tvar\t|\tvalue\t|\tdegree\n");
        transform_hlds__ctgc__structure_reuse__direct__choose_reuse__dump_match_4_p_0((MR_String) "%-sel- ", HighestMatch_8);
        transform_hlds__ctgc__structure_reuse__direct__choose_reuse__dump_full_table_3_p_0(MatchTable_7);
        Remainder_44 = ((((MR_Integer) 79 - (MR_Integer) 4)) - (MR_Integer) 1);
        Var_50 = mercury__string__duplicate_char_2_f_0((MR_Char) 45, Remainder_44);
        Line_45 = mercury__string__f_43_43_2_f_0((MR_String) "%---", Var_50);
        mercury__io__write_string_3_p_0(Line_45);
        mercury__io__write_string_3_p_0((MR_String) "%\n");
      }
      break;
  }
}

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__dump_full_table_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__dump_match_4_p_0(((MR_String) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1));
  }
}

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__dump_full_table_3_p_0(
  MR_Word MatchTable_4)
{
  {
    MR_bool succeeded;

    succeeded = mercury__multi_map__is_empty_1_p_0((MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_1[0], (MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_match_0, MatchTable_4);
    if (succeeded)
    {
      MR_Integer Remainder_32;
      MR_String Line_33;
      MR_String Var_38;

      Remainder_32 = ((((MR_Integer) 79 - (MR_Integer) 21)) - (MR_Integer) 1);
      Var_38 = mercury__string__duplicate_char_2_f_0((MR_Char) 45, Remainder_32);
      Line_33 = mercury__string__f_43_43_2_f_0((MR_String) "%---empty match table", Var_38);
      mercury__io__write_string_3_p_0(Line_33);
      mercury__io__write_string_3_p_0((MR_String) "%\n");
    }
    else
    {
      MR_Word TypeCtorInfo_21_21;
      MR_Word Matches_6;
      MR_Integer Remainder_49;
      MR_String Line_50;
      MR_String Var_55;
      MR_Integer Remainder_66;
      MR_String Line_67;
      MR_String Var_72;
      MR_Box conv0_STATE_VARIABLE_IO_14_14;

      Remainder_49 = ((((MR_Integer) 79 - (MR_Integer) 22)) - (MR_Integer) 1);
      Var_55 = mercury__string__duplicate_char_2_f_0((MR_Char) 45, Remainder_49);
      Line_50 = mercury__string__f_43_43_2_f_0((MR_String) "%---full table (start)", Var_55);
      mercury__io__write_string_3_p_0(Line_50);
      mercury__io__write_string_3_p_0((MR_String) "%\n");
      TypeCtorInfo_21_21 = (MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_match_0;
      mercury__multi_map__values_2_p_0((MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_1[0], TypeCtorInfo_21_21, MatchTable_4, &Matches_6);
      mercury__list__foldl_4_p_2(TypeCtorInfo_21_21, (MR_Word) &mercury__io__io__type_ctor_info_state_0, (MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_8[1], Matches_6, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_14_14);
      Remainder_66 = ((((MR_Integer) 79 - (MR_Integer) 20)) - (MR_Integer) 1);
      Var_72 = mercury__string__duplicate_char_2_f_0((MR_Char) 45, Remainder_66);
      Line_67 = mercury__string__f_43_43_2_f_0((MR_String) "%---full table (end)", Var_72);
      mercury__io__write_string_3_p_0(Line_67);
      mercury__io__write_string_3_p_0((MR_String) "%\n");
    }
  }
}

static MR_Box MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__dump_match_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_LambdaHeadVar__2_13;

    conv0_LambdaHeadVar__2_13 = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__IntroducedFrom__func__match_get_dead_var__295__1_1_f_0(((MR_Word) wrapper_arg_1));
    wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_13));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__dump_match_4_p_0(
  MR_String Prefix_5,
  MR_Word Match_6)
{
  {
    MR_bool succeeded;
    MR_Word TypeInfo_30_77;
    MR_Float Val_8;
    MR_Integer Degree_9;
    MR_Integer Var_15;
    MR_Word Var_17;
    MR_Word DeadVars0_54;
    MR_Word DeadVars_55;
    MR_Word Var_61;
    MR_Word Var_73;
    MR_Float Var_74;
    MR_Integer Var_75;
    MR_Word Var_34;
    MR_Word Var_35;
    MR_Integer Var_36;
    MR_Word Var_37;
    MR_Word Var_38;
    MR_Float Var_39;

    mercury__io__write_string_3_p_0(Prefix_5);
    mercury__io__write_string_3_p_0((MR_String) "\t|\t");
    TypeInfo_30_77 = (MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_1[0];
    Var_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), Match_6, (MR_Integer) 0)));
    Var_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), Match_6, (MR_Integer) 1)));
    Var_74 = MR_unbox_float((MR_hl_field(MR_mktag(0), Match_6, (MR_Integer) 2)));
    Var_75 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Match_6, (MR_Integer) 3)));
    DeadVars0_54 = mercury__list__map_2_f_0((MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_deconstruction_spec_0, TypeInfo_30_77, (MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_2[16], Var_61);
    DeadVars_55 = mercury__list__remove_dups_1_f_0(TypeInfo_30_77, DeadVars0_54);
    if ((DeadVars_55 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      {
        mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.ctgc.structure_reuse.direct.choose_reuse", (MR_String) "function \140transform_hlds.ctgc.structure_reuse.direct.choose_reuse.match_get_dead_var\'/1", (MR_String) "empty list of vars");
        return;
      }
    }
    else
    {
      MR_Word Rest_56;

      Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), DeadVars_55, (MR_Integer) 0)));
      Rest_56 = ((MR_Word) (MR_hl_field(MR_mktag(1), DeadVars_55, (MR_Integer) 1)));
      if (!((Rest_56 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))))
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.ctgc.structure_reuse.direct.choose_reuse", (MR_String) "function \140transform_hlds.ctgc.structure_reuse.direct.choose_reuse.match_get_dead_var\'/1", (MR_String) "too many dead vars");
          return;
        }
      }
    }
    Var_15 = mercury__term__var_to_int_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, Var_17);
    mercury__io__write_int_3_p_0(Var_15);
    mercury__io__write_string_3_p_0((MR_String) "\t|\t");
    Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), Match_6, (MR_Integer) 0)));
    Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), Match_6, (MR_Integer) 1)));
    Val_8 = MR_unbox_float((MR_hl_field(MR_mktag(0), Match_6, (MR_Integer) 2)));
    Var_36 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Match_6, (MR_Integer) 3)));
    succeeded = (Val_8 == ((MR_Float) 0.0000000000000000));
    if (succeeded)
    {
      mercury__io__write_string_3_p_0((MR_String) "-");
    }
    else
    {
      MR_String Var_41;

      mercury__string__format__format_float_component_nowidth_prec_5_p_0((MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_7[1], (MR_Integer) 2, (MR_Integer) 2, Val_8, &Var_41);
      mercury__io__write_string_3_p_0(Var_41);
    }
    Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), Match_6, (MR_Integer) 0)));
    Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), Match_6, (MR_Integer) 1)));
    Var_39 = MR_unbox_float((MR_hl_field(MR_mktag(0), Match_6, (MR_Integer) 2)));
    Degree_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Match_6, (MR_Integer) 3)));
    mercury__io__write_string_3_p_0((MR_String) "\t|\t");
    mercury__io__write_int_3_p_0(Degree_9);
    mercury__io__write_string_3_p_0((MR_String) "\t");
    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__dump_match_details_3_p_0(Match_6);
    mercury__io__nl_2_p_0();
  }
}

static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__dump_match_details_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = transform_hlds__ctgc__structure_reuse__domain__reuse_as_all_unconditional_reuses_1_p_0(((MR_Word) wrapper_arg_1));
    return succeeded;
  }
}

static MR_Box MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__dump_match_details_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_LambdaHeadVar__2_16;

    conv0_LambdaHeadVar__2_16 = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__IntroducedFrom__func__dump_match_details__1375__1_1_f_0(((MR_Word) wrapper_arg_1));
    wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_16));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__dump_match_details_3_p_0(
  MR_Word Match_4)
{
  {
    MR_bool succeeded;
    MR_Word TypeCtorInfo_48_48 = (MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_deconstruction_spec_0;
    MR_Word TypeCtorInfo_49_49 = (MR_Word) &transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_as_0;
    MR_Word Conds_6;
    MR_String CondsString_8;
    MR_Integer D_9;
    MR_Integer C_10;
    MR_String Details_11;
    MR_Word Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), Match_4, (MR_Integer) 0)));
    MR_Word Var_19;
    MR_Word Var_20;
    MR_Word Var_21;
    MR_Word Var_23;
    MR_String Var_24;
    MR_Word Var_25;
    MR_Word Var_27;
    MR_String Var_28;
    MR_Word Var_29;
    MR_Word Var_31;
    MR_Word Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), Match_4, (MR_Integer) 1)));
    MR_Float Var_40 = MR_unbox_float((MR_hl_field(MR_mktag(0), Match_4, (MR_Integer) 2)));
    MR_Integer Var_41 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Match_4, (MR_Integer) 3)));
    MR_Word Var_42;
    MR_Float Var_43;
    MR_Integer Var_44;
    MR_Word Var_45;
    MR_Float Var_46;
    MR_Integer Var_47;

    Conds_6 = mercury__list__map_2_f_0(TypeCtorInfo_48_48, TypeCtorInfo_49_49, (MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_2[14], Var_17);
    succeeded = mercury__list__all_true_2_p_0(TypeCtorInfo_49_49, (MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_2[15], Conds_6);
    if (succeeded)
      CondsString_8 = (MR_String) "A";
    else
      CondsString_8 = (MR_String) "C";
    Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), Match_4, (MR_Integer) 0)));
    Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), Match_4, (MR_Integer) 1)));
    Var_43 = MR_unbox_float((MR_hl_field(MR_mktag(0), Match_4, (MR_Integer) 2)));
    Var_44 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Match_4, (MR_Integer) 3)));
    D_9 = mercury__list__length_1_f_0(TypeCtorInfo_48_48, Var_19);
    Var_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), Match_4, (MR_Integer) 0)));
    Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), Match_4, (MR_Integer) 1)));
    Var_46 = MR_unbox_float((MR_hl_field(MR_mktag(0), Match_4, (MR_Integer) 2)));
    Var_47 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Match_4, (MR_Integer) 3)));
    C_10 = mercury__list__length_1_f_0((MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_construction_spec_0, Var_20);
    Var_24 = mercury__string__int_to_string_1_f_0(D_9);
    Var_28 = mercury__string__int_to_string_1_f_0(C_10);
    {
      Var_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_31, 0) = ((MR_Box) (CondsString_8));
      MR_hl_field(MR_mktag(1), Var_31, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      Var_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_29, 0) = ((MR_Box) ((MR_String) ", Co: "));
      MR_hl_field(MR_mktag(1), Var_29, 1) = ((MR_Box) (Var_31));
    }
    {
      Var_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_27, 0) = ((MR_Box) (Var_28));
      MR_hl_field(MR_mktag(1), Var_27, 1) = ((MR_Box) (Var_29));
    }
    {
      Var_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_25, 0) = ((MR_Box) ((MR_String) ", c: "));
      MR_hl_field(MR_mktag(1), Var_25, 1) = ((MR_Box) (Var_27));
    }
    {
      Var_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_23, 0) = ((MR_Box) (Var_24));
      MR_hl_field(MR_mktag(1), Var_23, 1) = ((MR_Box) (Var_25));
    }
    {
      Var_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_21, 0) = ((MR_Box) ((MR_String) "d: "));
      MR_hl_field(MR_mktag(1), Var_21, 1) = ((MR_Box) (Var_23));
    }
    mercury__string__append_list_2_p_0(Var_21, &Details_11);
    mercury__io__write_string_3_p_0(Details_11);
  }
}

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__annotate_reuses_in_goal_4_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv2_STATE_VARIABLE_Case_13;

    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__annotate_reuses_in_case_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) wrapper_arg_1), &conv2_STATE_VARIABLE_Case_13);
    *wrapper_arg_2 = ((MR_Box) (conv2_STATE_VARIABLE_Case_13));
  }
}

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__annotate_reuses_in_goal_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_STATE_VARIABLE_Goal_52;

    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__annotate_reuses_in_goal_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) wrapper_arg_1), &conv1_STATE_VARIABLE_Goal_52);
    *wrapper_arg_2 = ((MR_Box) (conv1_STATE_VARIABLE_Goal_52));
  }
}

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__annotate_reuses_in_goal_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_Goal_52;

    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__annotate_reuses_in_goal_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) wrapper_arg_1), &conv0_STATE_VARIABLE_Goal_52);
    *wrapper_arg_2 = ((MR_Box) (conv0_STATE_VARIABLE_Goal_52));
  }
}

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__annotate_reuses_in_goal_4_p_0(
  MR_Word Background_5,
  MR_Word Match_6,
  MR_Word STATE_VARIABLE_Goal_0_51,
  MR_Word * STATE_VARIABLE_Goal_52)
{
  {
    MR_Word GoalExpr0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Goal_0_51, (MR_Integer) 0)));
    MR_Word GoalInfo0_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Goal_0_51, (MR_Integer) 1)));
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
          MR_Word Unification_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), GoalExpr0_8, (MR_Integer) 3)));
          MR_Word Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), GoalExpr0_8, (MR_Integer) 0)));
          MR_Word Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), GoalExpr0_8, (MR_Integer) 1)));
          MR_Word Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), GoalExpr0_8, (MR_Integer) 2)));
          MR_Word Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), GoalExpr0_8, (MR_Integer) 4)));

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
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr0_8, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              GoalExpr_15 = GoalExpr0_8;
              GoalInfo_16 = GoalInfo0_9;
            }
            break;
          case (MR_Integer) 1:
            {
              GoalExpr_15 = GoalExpr0_8;
              GoalInfo_16 = GoalInfo0_9;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word TypeCtorInfo_67_67;
              MR_Word A_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr0_8, (MR_Integer) 1)));
              MR_Word Goals0_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr0_8, (MR_Integer) 2)));
              MR_Word Goals_37;
              MR_Word Var_58;

              {
                Var_58 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_58, 0) = ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_6[2]));
                MR_hl_field(MR_mktag(0), Var_58, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__annotate_reuses_in_goal_4_p_0_1));
                MR_hl_field(MR_mktag(0), Var_58, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(0), Var_58, 3) = ((MR_Box) (Background_5));
                MR_hl_field(MR_mktag(0), Var_58, 4) = ((MR_Box) (Match_6));
              }
              TypeCtorInfo_67_67 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
              mercury__list__map_3_p_0(TypeCtorInfo_67_67, TypeCtorInfo_67_67, Var_58, Goals0_36, &Goals_37);
              {
                GoalExpr_15 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), GoalExpr_15, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(3), GoalExpr_15, 1) = ((MR_Box) (A_35));
                MR_hl_field(MR_mktag(3), GoalExpr_15, 2) = ((MR_Box) (Goals_37));
              }
              GoalInfo_16 = GoalInfo0_9;
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word TypeCtorInfo_70_70;
              MR_Word Var_57;
              MR_Word Goals0_60 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr0_8, (MR_Integer) 1)));
              MR_Word Goals_61;

              {
                Var_57 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_57, 0) = ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_6[2]));
                MR_hl_field(MR_mktag(0), Var_57, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__annotate_reuses_in_goal_4_p_0_2));
                MR_hl_field(MR_mktag(0), Var_57, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(0), Var_57, 3) = ((MR_Box) (Background_5));
                MR_hl_field(MR_mktag(0), Var_57, 4) = ((MR_Box) (Match_6));
              }
              TypeCtorInfo_70_70 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
              mercury__list__map_3_p_0(TypeCtorInfo_70_70, TypeCtorInfo_70_70, Var_57, Goals0_60, &Goals_61);
              {
                GoalExpr_15 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), GoalExpr_15, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                MR_hl_field(MR_mktag(3), GoalExpr_15, 1) = ((MR_Box) (Goals_61));
              }
              GoalInfo_16 = GoalInfo0_9;
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word TypeCtorInfo_73_73;
              MR_Word B_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr0_8, (MR_Integer) 2)));
              MR_Word Cases0_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr0_8, (MR_Integer) 3)));
              MR_Word Cases_40;
              MR_Word Var_56;
              MR_Word A_62 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr0_8, (MR_Integer) 1)));

              {
                Var_56 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_56, 0) = ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_6[3]));
                MR_hl_field(MR_mktag(0), Var_56, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__annotate_reuses_in_goal_4_p_0_3));
                MR_hl_field(MR_mktag(0), Var_56, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(0), Var_56, 3) = ((MR_Box) (Background_5));
                MR_hl_field(MR_mktag(0), Var_56, 4) = ((MR_Box) (Match_6));
              }
              TypeCtorInfo_73_73 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0;
              mercury__list__map_3_p_0(TypeCtorInfo_73_73, TypeCtorInfo_73_73, Var_56, Cases0_39, &Cases_40);
              {
                GoalExpr_15 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), GoalExpr_15, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                MR_hl_field(MR_mktag(3), GoalExpr_15, 1) = ((MR_Box) (A_62));
                MR_hl_field(MR_mktag(3), GoalExpr_15, 2) = ((MR_Box) (B_38));
                MR_hl_field(MR_mktag(3), GoalExpr_15, 3) = ((MR_Box) (Cases_40));
              }
              GoalInfo_16 = GoalInfo0_9;
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word ScopeGoal0_42 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr0_8, (MR_Integer) 2)));
              MR_Word ScopeGoal_43;
              MR_Word A_63 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr0_8, (MR_Integer) 1)));

              transform_hlds__ctgc__structure_reuse__direct__choose_reuse__annotate_reuses_in_goal_4_p_0(Background_5, Match_6, ScopeGoal0_42, &ScopeGoal_43);
              {
                GoalExpr_15 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), GoalExpr_15, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                MR_hl_field(MR_mktag(3), GoalExpr_15, 1) = ((MR_Box) (A_63));
                MR_hl_field(MR_mktag(3), GoalExpr_15, 2) = ((MR_Box) (ScopeGoal_43));
              }
              GoalInfo_16 = GoalInfo0_9;
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word CondGoal0_44 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr0_8, (MR_Integer) 2)));
              MR_Word ThenGoal0_45 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr0_8, (MR_Integer) 3)));
              MR_Word ElseGoal0_46 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr0_8, (MR_Integer) 4)));
              MR_Word CondGoal_47;
              MR_Word ThenGoal_48;
              MR_Word ElseGoal_49;
              MR_Word A_64 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr0_8, (MR_Integer) 1)));

              transform_hlds__ctgc__structure_reuse__direct__choose_reuse__annotate_reuses_in_goal_4_p_0(Background_5, Match_6, CondGoal0_44, &CondGoal_47);
              transform_hlds__ctgc__structure_reuse__direct__choose_reuse__annotate_reuses_in_goal_4_p_0(Background_5, Match_6, ThenGoal0_45, &ThenGoal_48);
              transform_hlds__ctgc__structure_reuse__direct__choose_reuse__annotate_reuses_in_goal_4_p_0(Background_5, Match_6, ElseGoal0_46, &ElseGoal_49);
              {
                GoalExpr_15 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), GoalExpr_15, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
                MR_hl_field(MR_mktag(3), GoalExpr_15, 1) = ((MR_Box) (A_64));
                MR_hl_field(MR_mktag(3), GoalExpr_15, 2) = ((MR_Box) (CondGoal_47));
                MR_hl_field(MR_mktag(3), GoalExpr_15, 3) = ((MR_Box) (ThenGoal_48));
                MR_hl_field(MR_mktag(3), GoalExpr_15, 4) = ((MR_Box) (ElseGoal_49));
              }
              GoalInfo_16 = GoalInfo0_9;
            }
            break;
          case (MR_Integer) 7:
            {
              {
                mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.ctgc.structure_reuse.direct.choose_reuse", (MR_String) "predicate \140transform_hlds.ctgc.structure_reuse.direct.choose_reuse.annotate_reuses_in_goal\'/4", (MR_String) "shorthand.");
                return;
              }
            }
            break;
        }
        break;
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_Goal_52 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_15));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo_16));
    }
  }
}

static MR_Box MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__annotate_reuse_for_unification_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_LambdaHeadVar__2_13;

    conv0_LambdaHeadVar__2_13 = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__IntroducedFrom__func__match_get_dead_var__295__1_1_f_0(((MR_Word) wrapper_arg_1));
    wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_13));
    return wrapper_arg_2;
  }
}

static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__annotate_reuse_for_unification_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__construction_spec_with_program_point_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1));
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__annotate_reuse_for_unification_5_p_0(
  MR_Word Background_6,
  MR_Word Match_7,
  MR_Word Unification_8,
  MR_Word STATE_VARIABLE_GoalInfo_0_40,
  MR_Word * STATE_VARIABLE_GoalInfo_41)
{
  {
    MR_bool succeeded;
    MR_Word CurrentProgramPoint_10;

    CurrentProgramPoint_10 = transform_hlds__smm_common__program_point_init_1_f_0(STATE_VARIABLE_GoalInfo_0_40);
    switch (MR_tag((MR_Word) Unification_8)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word ConSpec_25;
          MR_Word TypeInfo_17_69;
          MR_Word Var_59;
          MR_Word Var_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), Match_7, (MR_Integer) 1)));
          MR_Word Var_61;
          MR_Word Var_68;
          MR_Word Var_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), Match_7, (MR_Integer) 0)));
          MR_Float Var_64 = MR_unbox_float((MR_hl_field(MR_mktag(0), Match_7, (MR_Integer) 2)));
          MR_Integer Var_65 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Match_7, (MR_Integer) 3)));

          {
            Var_59 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_59, 0) = ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_3[4]));
            MR_hl_field(MR_mktag(0), Var_59, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__annotate_reuse_for_unification_5_p_0_1));
            MR_hl_field(MR_mktag(0), Var_59, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(0), Var_59, 3) = ((MR_Box) (CurrentProgramPoint_10));
          }
          mercury__list__filter_3_p_0((MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_construction_spec_0, Var_59, Var_60, &Var_61);
          succeeded = ((MR_tag((MR_Word) Var_61)) == (MR_mktag((MR_Integer) 1)));
          if (succeeded)
          {
            ConSpec_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_61, (MR_Integer) 0)));
            Var_68 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_61, (MR_Integer) 1)));
            TypeInfo_17_69 = (MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_1[4];
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_17_69, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), ((MR_Box) (Var_68)));
          }
          if (succeeded)
          {
            MR_Word TypeInfo_30_97 = (MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_1[0];
            MR_Word DeadVar_26;
            MR_Word DeadConsIds_27;
            MR_Word ReuseAs_28;
            MR_Word ReuseFields_29;
            MR_Word Kind_30;
            MR_Word CellReused_31;
            MR_Word KindReuse_32;
            MR_Word Var_45;
            MR_Word DeadVars0_74;
            MR_Word DeadVars_75;
            MR_Word Var_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), Match_7, (MR_Integer) 0)));
            MR_Word Var_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), Match_7, (MR_Integer) 1)));
            MR_Float Var_94 = MR_unbox_float((MR_hl_field(MR_mktag(0), Match_7, (MR_Integer) 2)));
            MR_Integer Var_95 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Match_7, (MR_Integer) 3)));
            MR_Word Var_53;
            MR_Word Var_54;
            MR_Float Var_55;

            DeadVars0_74 = mercury__list__map_2_f_0((MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_deconstruction_spec_0, TypeInfo_30_97, (MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_2[13], Var_81);
            DeadVars_75 = mercury__list__remove_dups_1_f_0(TypeInfo_30_97, DeadVars0_74);
            if ((DeadVars_75 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            {
              {
                mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.ctgc.structure_reuse.direct.choose_reuse", (MR_String) "function \140transform_hlds.ctgc.structure_reuse.direct.choose_reuse.match_get_dead_var\'/1", (MR_String) "empty list of vars");
                return;
              }
            }
            else
            {
              MR_Word Rest_76;

              DeadVar_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), DeadVars_75, (MR_Integer) 0)));
              Rest_76 = ((MR_Word) (MR_hl_field(MR_mktag(1), DeadVars_75, (MR_Integer) 1)));
              if (!((Rest_76 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))))
              {
                {
                  mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.ctgc.structure_reuse.direct.choose_reuse", (MR_String) "function \140transform_hlds.ctgc.structure_reuse.direct.choose_reuse.match_get_dead_var\'/1", (MR_String) "too many dead vars");
                  return;
                }
              }
            }
            DeadConsIds_27 = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__match_get_dead_cons_ids_1_f_0(Match_7);
            ReuseAs_28 = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__match_get_condition_2_f_0(Background_6, Match_7);
            Var_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), ConSpec_25, (MR_Integer) 0)));
            Var_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), ConSpec_25, (MR_Integer) 1)));
            Var_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_45, (MR_Integer) 0)));
            ReuseFields_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_45, (MR_Integer) 1)));
            Var_55 = MR_unbox_float((MR_hl_field(MR_mktag(0), Var_45, (MR_Integer) 2)));
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
                {
                  mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.ctgc.structure_reuse.direct.choose_reuse", (MR_String) "predicate \140transform_hlds.ctgc.structure_reuse.direct.choose_reuse.annotate_reuse_for_unification\'/5", (MR_String) "no reuse conditions");
                  return;
                }
              }
            }
            {
              CellReused_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), CellReused_31, 0) = ((MR_Box) (DeadVar_26));
              MR_hl_field(MR_mktag(1), CellReused_31, 1) = ((MR_Box) (Kind_30));
              MR_hl_field(MR_mktag(1), CellReused_31, 2) = ((MR_Box) (DeadConsIds_27));
              MR_hl_field(MR_mktag(1), CellReused_31, 3) = ((MR_Box) (ReuseFields_29));
            }
            switch (Kind_30) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  KindReuse_32 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(2), KindReuse_32, 0) = ((MR_Box) (CellReused_31));
                }
                break;
              case (MR_Integer) 1:
                {
                  KindReuse_32 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), KindReuse_32, 0) = ((MR_Box) (CellReused_31));
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
          {
            hlds__hlds_goal__goal_info_set_reuse_3_p_0((MR_Word) MR_mkword(MR_mktag(2), &transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_7[0]), STATE_VARIABLE_GoalInfo_0_40, STATE_VARIABLE_GoalInfo_41);
          }
          else
            *STATE_VARIABLE_GoalInfo_41 = STATE_VARIABLE_GoalInfo_0_40;
        }
        break;
      case (MR_Integer) 2:
        *STATE_VARIABLE_GoalInfo_41 = STATE_VARIABLE_GoalInfo_0_40;
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Unification_8, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *STATE_VARIABLE_GoalInfo_41 = STATE_VARIABLE_GoalInfo_0_40;
            break;
          case (MR_Integer) 1:
            {
              {
                mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.ctgc.structure_reuse.direct.choose_reuse", (MR_String) "predicate \140transform_hlds.ctgc.structure_reuse.direct.choose_reuse.annotate_reuse_for_unification\'/5", (MR_String) "complicated_unify");
                return;
              }
            }
            break;
        }
        break;
    }
  }
}

static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__match_find_deconstruction_spec_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__deconstruction_spec_with_program_point_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1));
    return succeeded;
  }
}

static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__match_find_deconstruction_spec_3_p_0(
  MR_Word Match_4,
  MR_Word ProgramPoint_5,
  MR_Word * DeconstructionSpec_6)
{
  {
    MR_bool succeeded;
    MR_Word TypeInfo_17_17;
    MR_Word Var_7;
    MR_Word Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), Match_4, (MR_Integer) 0)));
    MR_Word Var_9;
    MR_Word Var_16;
    MR_Word Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), Match_4, (MR_Integer) 1)));
    MR_Float Var_12 = MR_unbox_float((MR_hl_field(MR_mktag(0), Match_4, (MR_Integer) 2)));
    MR_Integer Var_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Match_4, (MR_Integer) 3)));

    {
      Var_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_7, 0) = ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_3[3]));
      MR_hl_field(MR_mktag(0), Var_7, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__match_find_deconstruction_spec_3_p_0_1));
      MR_hl_field(MR_mktag(0), Var_7, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_7, 3) = ((MR_Box) (ProgramPoint_5));
    }
    mercury__list__filter_3_p_0((MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_deconstruction_spec_0, Var_7, Var_8, &Var_9);
    succeeded = ((MR_tag((MR_Word) Var_9)) == (MR_mktag((MR_Integer) 1)));
    if (succeeded)
    {
      *DeconstructionSpec_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_9, (MR_Integer) 0)));
      Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_9, (MR_Integer) 1)));
      TypeInfo_17_17 = (MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_1[3];
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_17_17, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), ((MR_Box) (Var_16)));
    }
    return succeeded;
  }
}

static MR_Box MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__match_get_dead_cons_ids_1_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_LambdaHeadVar__2_8;

    conv0_LambdaHeadVar__2_8 = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__IntroducedFrom__func__match_get_dead_cons_ids__317__1_1_f_0(((MR_Word) wrapper_arg_1));
    wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_8));
    return wrapper_arg_2;
  }
}

static MR_Word MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__match_get_dead_cons_ids_1_f_0(
  MR_Word Match_3)
{
  {
    MR_Word ConsIds_4;
    MR_Word Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), Match_3, (MR_Integer) 0)));
    MR_Word Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), Match_3, (MR_Integer) 1)));
    MR_Float Var_16 = MR_unbox_float((MR_hl_field(MR_mktag(0), Match_3, (MR_Integer) 2)));
    MR_Integer Var_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Match_3, (MR_Integer) 3)));

    ConsIds_4 = mercury__list__map_2_f_0((MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_deconstruction_spec_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0, (MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_2[12], Var_9);
    return ConsIds_4;
  }
}

static MR_Box MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__compute_match_table_with_continuation_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv2_LambdaHeadVar__2_89;

    conv2_LambdaHeadVar__2_89 = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__IntroducedFrom__func__compute_match_table_with_continuation__624__1_1_f_0(((MR_Word) wrapper_arg_1));
    wrapper_arg_2 = ((MR_Box) (conv2_LambdaHeadVar__2_89));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__compute_match_table_with_continuation_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__3_117;

    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__IntroducedFrom__pred__compute_match_table_with_continuation__654__1_3_p_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv0_HeadVar__3_117);
    *wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__3_117));
  }
}

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__compute_match_table_goal_list_5_p_0(
  MR_Word tscc_proc_1_input_1_Background_6,
  MR_Word tscc_proc_1_input_2_DeadCellTable_7,
  MR_Word tscc_proc_1_input_3_Goals_8,
  MR_Word tscc_proc_1_input_4_STATE_VARIABLE_Table_0_12,
  MR_Word * tscc_output_ptr_1_STATE_VARIABLE_Table_13)
{
  {
    MR_Word tscc_proc_2_input_1_Background_7;
    MR_Word tscc_proc_2_input_2_DeadCellTable_8;
    MR_Word tscc_proc_2_input_3_CurrentGoal_9;
    MR_Word tscc_proc_2_input_4_Cont_10;
    MR_Word tscc_proc_2_input_5_STATE_VARIABLE_Table_0_67;
    MR_Word tscc_output_1_STATE_VARIABLE_Table_13;

    // The code for TSCC PROC 1: pred transform_hlds.ctgc.structure_reuse.direct.choose_reuse.compute_match_table_goal_list/5-0.
    // Setup for mutual tailcalls optimized into a loop.
    // The mutually recursive procedures are:

    // proc 1 in TSCC: pred transform_hlds.ctgc.structure_reuse.direct.choose_reuse.compute_match_table_goal_list/5-0
    // proc 2 in TSCC: pred transform_hlds.ctgc.structure_reuse.direct.choose_reuse.compute_match_table_with_continuation/6-0

    goto top_of_proc_1;
  top_of_proc_1:;
    {
      MR_Word Background_6 = tscc_proc_1_input_1_Background_6;
      MR_Word DeadCellTable_7 = tscc_proc_1_input_2_DeadCellTable_7;
      MR_Word Goals_8 = tscc_proc_1_input_3_Goals_8;
      MR_Word STATE_VARIABLE_Table_0_12 = tscc_proc_1_input_4_STATE_VARIABLE_Table_0_12;
      MR_Word STATE_VARIABLE_Table_13;

      if ((Goals_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        STATE_VARIABLE_Table_13 = STATE_VARIABLE_Table_0_12;
      else
      {
        MR_Word CurrentGoal_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), Goals_8, (MR_Integer) 0)));
        MR_Word Cont_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), Goals_8, (MR_Integer) 1)));
        MR_Word next_value_of_tscc_proc_2_input_1_Background_7 = Background_6;
        MR_Word next_value_of_tscc_proc_2_input_2_DeadCellTable_8 = DeadCellTable_7;
        MR_Word next_value_of_tscc_proc_2_input_3_CurrentGoal_9 = CurrentGoal_10;
        MR_Word next_value_of_tscc_proc_2_input_4_Cont_10 = Cont_11;
        MR_Word next_value_of_tscc_proc_2_input_5_STATE_VARIABLE_Table_0_67 = STATE_VARIABLE_Table_0_12;

        // direct tailcall eliminated
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
      MR_Word GoalExpr_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), CurrentGoal_9, (MR_Integer) 0)));
      MR_Word GoalInfo_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), CurrentGoal_9, (MR_Integer) 1)));

      switch (MR_tag((MR_Word) GoalExpr_12)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word Goal_56 = (MR_Word) MR_body(((MR_Word) GoalExpr_12), (MR_Integer) 0);
            MR_Word STATE_VARIABLE_Table_85_85;
            MR_Word next_value_of_tscc_proc_1_input_1_Background_6;
            MR_Word next_value_of_tscc_proc_1_input_2_DeadCellTable_7;
            MR_Word next_value_of_tscc_proc_1_input_3_Goals_8;
            MR_Word next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Table_0_12;

            transform_hlds__ctgc__structure_reuse__direct__choose_reuse__compute_match_table_with_continuation_6_p_0(Background_7, DeadCellTable_8, Goal_56, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), STATE_VARIABLE_Table_0_67, &STATE_VARIABLE_Table_85_85);
            // direct tailcall eliminated
            next_value_of_tscc_proc_1_input_1_Background_6 = Background_7;
            next_value_of_tscc_proc_1_input_2_DeadCellTable_7 = DeadCellTable_8;
            next_value_of_tscc_proc_1_input_3_Goals_8 = Cont_10;
            next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Table_0_12 = STATE_VARIABLE_Table_85_85;
            tscc_proc_1_input_1_Background_6 = next_value_of_tscc_proc_1_input_1_Background_6;
            tscc_proc_1_input_2_DeadCellTable_7 = next_value_of_tscc_proc_1_input_2_DeadCellTable_7;
            tscc_proc_1_input_3_Goals_8 = next_value_of_tscc_proc_1_input_3_Goals_8;
            tscc_proc_1_input_4_STATE_VARIABLE_Table_0_12 = next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Table_0_12;
            goto top_of_proc_1;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Unification_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), GoalExpr_12, (MR_Integer) 3)));
            MR_Word STATE_VARIABLE_Table_100_100;
            MR_Word Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), GoalExpr_12, (MR_Integer) 0)));
            MR_Word Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), GoalExpr_12, (MR_Integer) 1)));
            MR_Word Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), GoalExpr_12, (MR_Integer) 2)));
            MR_Word Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), GoalExpr_12, (MR_Integer) 4)));
            MR_Word Var_19;
            MR_Word ConsId_20;
            MR_Word Args_21;
            MR_Word Var_22;
            MR_Word Var_23;
            MR_Word Var_24;
            MR_Word next_value_of_tscc_proc_1_input_1_Background_6;
            MR_Word next_value_of_tscc_proc_1_input_2_DeadCellTable_7;
            MR_Word next_value_of_tscc_proc_1_input_3_Goals_8;
            MR_Word next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Table_0_12;

            succeeded = ((MR_tag((MR_Word) Unification_17)) == (MR_mktag((MR_Integer) 1)));
            if (succeeded)
            {
              Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), Unification_17, (MR_Integer) 0)));
              ConsId_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), Unification_17, (MR_Integer) 1)));
              Args_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), Unification_17, (MR_Integer) 2)));
              Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), Unification_17, (MR_Integer) 3)));
              Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), Unification_17, (MR_Integer) 4)));
              Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), Unification_17, (MR_Integer) 5)));
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
                  MR_Word Var_98;

                  ReuseAs_27 = transform_hlds__ctgc__structure_reuse__domain__reuse_as_init_with_one_condition_1_f_0(Condition_26);
                  DeconstructionSpec_28 = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__deconstruction_spec_init_5_f_0(Var_19, ProgramPoint_25, ConsId_20, Args_21, ReuseAs_27);
                  {
                    Var_98 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_98, 0) = ((MR_Box) (DeconstructionSpec_28));
                    MR_hl_field(MR_mktag(1), Var_98, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  }
                  Match0_29 = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__match_init_1_f_0(Var_98);
                  transform_hlds__ctgc__structure_reuse__direct__choose_reuse__find_best_match_in_conjunction_4_p_0(Background_7, Cont_10, Match0_29, &Match_30);
                  mercury__multi_map__set_4_p_0((MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_1[0], (MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_match_0, ((MR_Box) (Var_19)), ((MR_Box) (Match_30)), STATE_VARIABLE_Table_0_67, &STATE_VARIABLE_Table_100_100);
                }
                else
                  STATE_VARIABLE_Table_100_100 = STATE_VARIABLE_Table_0_67;
              }
            }
            else
              STATE_VARIABLE_Table_100_100 = STATE_VARIABLE_Table_0_67;
            // direct tailcall eliminated
            next_value_of_tscc_proc_1_input_1_Background_6 = Background_7;
            next_value_of_tscc_proc_1_input_2_DeadCellTable_7 = DeadCellTable_8;
            next_value_of_tscc_proc_1_input_3_Goals_8 = Cont_10;
            next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Table_0_12 = STATE_VARIABLE_Table_100_100;
            tscc_proc_1_input_1_Background_6 = next_value_of_tscc_proc_1_input_1_Background_6;
            tscc_proc_1_input_2_DeadCellTable_7 = next_value_of_tscc_proc_1_input_2_DeadCellTable_7;
            tscc_proc_1_input_3_Goals_8 = next_value_of_tscc_proc_1_input_3_Goals_8;
            tscc_proc_1_input_4_STATE_VARIABLE_Table_0_12 = next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Table_0_12;
            goto top_of_proc_1;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word next_value_of_tscc_proc_1_input_1_Background_6 = Background_7;
            MR_Word next_value_of_tscc_proc_1_input_2_DeadCellTable_7 = DeadCellTable_8;
            MR_Word next_value_of_tscc_proc_1_input_3_Goals_8 = Cont_10;
            MR_Word next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Table_0_12 = STATE_VARIABLE_Table_0_67;

            // direct tailcall eliminated
            tscc_proc_1_input_1_Background_6 = next_value_of_tscc_proc_1_input_1_Background_6;
            tscc_proc_1_input_2_DeadCellTable_7 = next_value_of_tscc_proc_1_input_2_DeadCellTable_7;
            tscc_proc_1_input_3_Goals_8 = next_value_of_tscc_proc_1_input_3_Goals_8;
            tscc_proc_1_input_4_STATE_VARIABLE_Table_0_12 = next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Table_0_12;
            goto top_of_proc_1;
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_12, (MR_Integer) 0)))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word next_value_of_tscc_proc_1_input_1_Background_6 = Background_7;
                MR_Word next_value_of_tscc_proc_1_input_2_DeadCellTable_7 = DeadCellTable_8;
                MR_Word next_value_of_tscc_proc_1_input_3_Goals_8 = Cont_10;
                MR_Word next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Table_0_12 = STATE_VARIABLE_Table_0_67;

                // direct tailcall eliminated
                tscc_proc_1_input_1_Background_6 = next_value_of_tscc_proc_1_input_1_Background_6;
                tscc_proc_1_input_2_DeadCellTable_7 = next_value_of_tscc_proc_1_input_2_DeadCellTable_7;
                tscc_proc_1_input_3_Goals_8 = next_value_of_tscc_proc_1_input_3_Goals_8;
                tscc_proc_1_input_4_STATE_VARIABLE_Table_0_12 = next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Table_0_12;
                goto top_of_proc_1;
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word next_value_of_tscc_proc_1_input_1_Background_6 = Background_7;
                MR_Word next_value_of_tscc_proc_1_input_2_DeadCellTable_7 = DeadCellTable_8;
                MR_Word next_value_of_tscc_proc_1_input_3_Goals_8 = Cont_10;
                MR_Word next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Table_0_12 = STATE_VARIABLE_Table_0_67;

                // direct tailcall eliminated
                tscc_proc_1_input_1_Background_6 = next_value_of_tscc_proc_1_input_1_Background_6;
                tscc_proc_1_input_2_DeadCellTable_7 = next_value_of_tscc_proc_1_input_2_DeadCellTable_7;
                tscc_proc_1_input_3_Goals_8 = next_value_of_tscc_proc_1_input_3_Goals_8;
                tscc_proc_1_input_4_STATE_VARIABLE_Table_0_12 = next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Table_0_12;
                goto top_of_proc_1;
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word Goals_50 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_12, (MR_Integer) 2)));
                MR_Word NewCont_51;
                MR_Word Var_49 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_12, (MR_Integer) 1)));
                MR_Word next_value_of_tscc_proc_1_input_1_Background_6;
                MR_Word next_value_of_tscc_proc_1_input_2_DeadCellTable_7;
                MR_Word next_value_of_tscc_proc_1_input_3_Goals_8;
                MR_Word next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Table_0_12;

                mercury__list__append_3_p_1((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, Goals_50, Cont_10, &NewCont_51);
                // direct tailcall eliminated
                next_value_of_tscc_proc_1_input_1_Background_6 = Background_7;
                next_value_of_tscc_proc_1_input_2_DeadCellTable_7 = DeadCellTable_8;
                next_value_of_tscc_proc_1_input_3_Goals_8 = NewCont_51;
                next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Table_0_12 = STATE_VARIABLE_Table_0_67;
                tscc_proc_1_input_1_Background_6 = next_value_of_tscc_proc_1_input_1_Background_6;
                tscc_proc_1_input_2_DeadCellTable_7 = next_value_of_tscc_proc_1_input_2_DeadCellTable_7;
                tscc_proc_1_input_3_Goals_8 = next_value_of_tscc_proc_1_input_3_Goals_8;
                tscc_proc_1_input_4_STATE_VARIABLE_Table_0_12 = next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Table_0_12;
                goto top_of_proc_1;
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Word STATE_VARIABLE_Table_92_92;
                MR_Word Goals_102 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_12, (MR_Integer) 1)));
                MR_Word next_value_of_tscc_proc_1_input_1_Background_6;
                MR_Word next_value_of_tscc_proc_1_input_2_DeadCellTable_7;
                MR_Word next_value_of_tscc_proc_1_input_3_Goals_8;
                MR_Word next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Table_0_12;

                transform_hlds__ctgc__structure_reuse__direct__choose_reuse__compute_match_table_in_disjunction_6_p_0(Background_7, DeadCellTable_8, Goals_102, Cont_10, STATE_VARIABLE_Table_0_67, &STATE_VARIABLE_Table_92_92);
                // direct tailcall eliminated
                next_value_of_tscc_proc_1_input_1_Background_6 = Background_7;
                next_value_of_tscc_proc_1_input_2_DeadCellTable_7 = DeadCellTable_8;
                next_value_of_tscc_proc_1_input_3_Goals_8 = Cont_10;
                next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Table_0_12 = STATE_VARIABLE_Table_92_92;
                tscc_proc_1_input_1_Background_6 = next_value_of_tscc_proc_1_input_1_Background_6;
                tscc_proc_1_input_2_DeadCellTable_7 = next_value_of_tscc_proc_1_input_2_DeadCellTable_7;
                tscc_proc_1_input_3_Goals_8 = next_value_of_tscc_proc_1_input_3_Goals_8;
                tscc_proc_1_input_4_STATE_VARIABLE_Table_0_12 = next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Table_0_12;
                goto top_of_proc_1;
              }
              break;
            case (MR_Integer) 4:
              {
                MR_Word Cases_54 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_12, (MR_Integer) 3)));
                MR_Word STATE_VARIABLE_Table_90_90;
                MR_Word Goals_104;
                MR_Word Var_52 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_12, (MR_Integer) 1)));
                MR_Word Var_53 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_12, (MR_Integer) 2)));
                MR_Word next_value_of_tscc_proc_1_input_1_Background_6;
                MR_Word next_value_of_tscc_proc_1_input_2_DeadCellTable_7;
                MR_Word next_value_of_tscc_proc_1_input_3_Goals_8;
                MR_Word next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Table_0_12;

                Goals_104 = mercury__list__map_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0, (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, (MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_2[11], Cases_54);
                transform_hlds__ctgc__structure_reuse__direct__choose_reuse__compute_match_table_in_disjunction_6_p_0(Background_7, DeadCellTable_8, Goals_104, Cont_10, STATE_VARIABLE_Table_0_67, &STATE_VARIABLE_Table_90_90);
                // direct tailcall eliminated
                next_value_of_tscc_proc_1_input_1_Background_6 = Background_7;
                next_value_of_tscc_proc_1_input_2_DeadCellTable_7 = DeadCellTable_8;
                next_value_of_tscc_proc_1_input_3_Goals_8 = Cont_10;
                next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Table_0_12 = STATE_VARIABLE_Table_90_90;
                tscc_proc_1_input_1_Background_6 = next_value_of_tscc_proc_1_input_1_Background_6;
                tscc_proc_1_input_2_DeadCellTable_7 = next_value_of_tscc_proc_1_input_2_DeadCellTable_7;
                tscc_proc_1_input_3_Goals_8 = next_value_of_tscc_proc_1_input_3_Goals_8;
                tscc_proc_1_input_4_STATE_VARIABLE_Table_0_12 = next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Table_0_12;
                goto top_of_proc_1;
              }
              break;
            case (MR_Integer) 5:
              {
                MR_Word Goal_105 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_12, (MR_Integer) 2)));
                MR_Word Var_57 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_12, (MR_Integer) 1)));
                MR_Word next_value_of_tscc_proc_2_input_1_Background_7 = Background_7;
                MR_Word next_value_of_tscc_proc_2_input_2_DeadCellTable_8 = DeadCellTable_8;
                MR_Word next_value_of_tscc_proc_2_input_3_CurrentGoal_9 = Goal_105;
                MR_Word next_value_of_tscc_proc_2_input_4_Cont_10 = Cont_10;
                MR_Word next_value_of_tscc_proc_2_input_5_STATE_VARIABLE_Table_0_67 = STATE_VARIABLE_Table_0_67;

                // direct tailcall eliminated
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
                MR_Word TypeInfo_113_113 = (MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_1[0];
                MR_Word TypeCtorInfo_114_114 = (MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_match_0;
                MR_Word TypeInfo_120_120;
                MR_Word CondGoal_59 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_12, (MR_Integer) 2)));
                MR_Word ThenGoal_60 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_12, (MR_Integer) 3)));
                MR_Word ElseGoal_61 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_12, (MR_Integer) 4)));
                MR_Word Table0_62;
                MR_Word TableThen_63;
                MR_Word TableElse_64;
                MR_Word CommonDeadVarsTables_65;
                MR_Word Var_72;
                MR_Word STATE_VARIABLE_Table_75_75;
                MR_Word STATE_VARIABLE_Table_76_76;
                MR_Word Var_77;
                MR_Word Var_78;
                MR_Word STATE_VARIABLE_Table_81_81;
                MR_Word Var_58 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_12, (MR_Integer) 1)));
                MR_Box conv1_STATE_VARIABLE_Table_81_81;
                MR_Word next_value_of_tscc_proc_1_input_1_Background_6;
                MR_Word next_value_of_tscc_proc_1_input_2_DeadCellTable_7;
                MR_Word next_value_of_tscc_proc_1_input_3_Goals_8;
                MR_Word next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Table_0_12;

                mercury__multi_map__init_1_p_0(TypeInfo_113_113, TypeCtorInfo_114_114, &Table0_62);
                {
                  Var_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_72, 0) = ((MR_Box) (ThenGoal_60));
                  MR_hl_field(MR_mktag(1), Var_72, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                }
                transform_hlds__ctgc__structure_reuse__direct__choose_reuse__compute_match_table_with_continuation_6_p_0(Background_7, DeadCellTable_8, CondGoal_59, Var_72, Table0_62, &TableThen_63);
                transform_hlds__ctgc__structure_reuse__direct__choose_reuse__compute_match_table_with_continuation_6_p_0(Background_7, DeadCellTable_8, ElseGoal_61, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), Table0_62, &TableElse_64);
                mercury__multi_map__merge_3_p_0(TypeInfo_113_113, TypeCtorInfo_114_114, TableThen_63, STATE_VARIABLE_Table_0_67, &STATE_VARIABLE_Table_75_75);
                mercury__multi_map__merge_3_p_0(TypeInfo_113_113, TypeCtorInfo_114_114, TableElse_64, STATE_VARIABLE_Table_75_75, &STATE_VARIABLE_Table_76_76);
                {
                  Var_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_78, 0) = ((MR_Box) (TableElse_64));
                  MR_hl_field(MR_mktag(1), Var_78, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                }
                {
                  Var_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_77, 0) = ((MR_Box) (TableThen_63));
                  MR_hl_field(MR_mktag(1), Var_77, 1) = ((MR_Box) (Var_78));
                }
                transform_hlds__ctgc__structure_reuse__direct__choose_reuse__process_possible_common_dead_vars_4_p_0(Background_7, Cont_10, Var_77, &CommonDeadVarsTables_65);
                TypeInfo_120_120 = (MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_2[1];
                mercury__list__foldl_4_p_0(TypeInfo_120_120, TypeInfo_120_120, (MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_2[10], CommonDeadVarsTables_65, ((MR_Box) (STATE_VARIABLE_Table_76_76)), &conv1_STATE_VARIABLE_Table_81_81);
                STATE_VARIABLE_Table_81_81 = ((MR_Word) conv1_STATE_VARIABLE_Table_81_81);
                // direct tailcall eliminated
                next_value_of_tscc_proc_1_input_1_Background_6 = Background_7;
                next_value_of_tscc_proc_1_input_2_DeadCellTable_7 = DeadCellTable_8;
                next_value_of_tscc_proc_1_input_3_Goals_8 = Cont_10;
                next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Table_0_12 = STATE_VARIABLE_Table_81_81;
                tscc_proc_1_input_1_Background_6 = next_value_of_tscc_proc_1_input_1_Background_6;
                tscc_proc_1_input_2_DeadCellTable_7 = next_value_of_tscc_proc_1_input_2_DeadCellTable_7;
                tscc_proc_1_input_3_Goals_8 = next_value_of_tscc_proc_1_input_3_Goals_8;
                tscc_proc_1_input_4_STATE_VARIABLE_Table_0_12 = next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Table_0_12;
                goto top_of_proc_1;
              }
              break;
            case (MR_Integer) 7:
              {
                {
                  mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.ctgc.structure_reuse.direct.choose_reuse", (MR_String) "predicate \140transform_hlds.ctgc.structure_reuse.direct.choose_reuse.compute_match_table_with_continuation\'/6", (MR_String) "shorthand");
                  return;
                }
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
  {
    MR_Word tscc_proc_1_input_1_Background_6;
    MR_Word tscc_proc_1_input_2_DeadCellTable_7;
    MR_Word tscc_proc_1_input_3_Goals_8;
    MR_Word tscc_proc_1_input_4_STATE_VARIABLE_Table_0_12;
    MR_Word tscc_output_1_STATE_VARIABLE_Table_13;

    // The code for TSCC PROC 2: pred transform_hlds.ctgc.structure_reuse.direct.choose_reuse.compute_match_table_with_continuation/6-0.
    // Setup for mutual tailcalls optimized into a loop.
    // The mutually recursive procedures are:

    // proc 1 in TSCC: pred transform_hlds.ctgc.structure_reuse.direct.choose_reuse.compute_match_table_goal_list/5-0
    // proc 2 in TSCC: pred transform_hlds.ctgc.structure_reuse.direct.choose_reuse.compute_match_table_with_continuation/6-0

    goto top_of_proc_2;
  top_of_proc_1:;
    {
      MR_Word Background_6 = tscc_proc_1_input_1_Background_6;
      MR_Word DeadCellTable_7 = tscc_proc_1_input_2_DeadCellTable_7;
      MR_Word Goals_8 = tscc_proc_1_input_3_Goals_8;
      MR_Word STATE_VARIABLE_Table_0_12 = tscc_proc_1_input_4_STATE_VARIABLE_Table_0_12;
      MR_Word STATE_VARIABLE_Table_13;

      if ((Goals_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        STATE_VARIABLE_Table_13 = STATE_VARIABLE_Table_0_12;
      else
      {
        MR_Word CurrentGoal_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), Goals_8, (MR_Integer) 0)));
        MR_Word Cont_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), Goals_8, (MR_Integer) 1)));
        MR_Word next_value_of_tscc_proc_2_input_1_Background_7 = Background_6;
        MR_Word next_value_of_tscc_proc_2_input_2_DeadCellTable_8 = DeadCellTable_7;
        MR_Word next_value_of_tscc_proc_2_input_3_CurrentGoal_9 = CurrentGoal_10;
        MR_Word next_value_of_tscc_proc_2_input_4_Cont_10 = Cont_11;
        MR_Word next_value_of_tscc_proc_2_input_5_STATE_VARIABLE_Table_0_67 = STATE_VARIABLE_Table_0_12;

        // direct tailcall eliminated
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
      MR_Word GoalExpr_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), CurrentGoal_9, (MR_Integer) 0)));
      MR_Word GoalInfo_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), CurrentGoal_9, (MR_Integer) 1)));

      switch (MR_tag((MR_Word) GoalExpr_12)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word Goal_56 = (MR_Word) MR_body(((MR_Word) GoalExpr_12), (MR_Integer) 0);
            MR_Word STATE_VARIABLE_Table_85_85;
            MR_Word next_value_of_tscc_proc_1_input_1_Background_6;
            MR_Word next_value_of_tscc_proc_1_input_2_DeadCellTable_7;
            MR_Word next_value_of_tscc_proc_1_input_3_Goals_8;
            MR_Word next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Table_0_12;

            transform_hlds__ctgc__structure_reuse__direct__choose_reuse__compute_match_table_with_continuation_6_p_0(Background_7, DeadCellTable_8, Goal_56, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), STATE_VARIABLE_Table_0_67, &STATE_VARIABLE_Table_85_85);
            // direct tailcall eliminated
            next_value_of_tscc_proc_1_input_1_Background_6 = Background_7;
            next_value_of_tscc_proc_1_input_2_DeadCellTable_7 = DeadCellTable_8;
            next_value_of_tscc_proc_1_input_3_Goals_8 = Cont_10;
            next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Table_0_12 = STATE_VARIABLE_Table_85_85;
            tscc_proc_1_input_1_Background_6 = next_value_of_tscc_proc_1_input_1_Background_6;
            tscc_proc_1_input_2_DeadCellTable_7 = next_value_of_tscc_proc_1_input_2_DeadCellTable_7;
            tscc_proc_1_input_3_Goals_8 = next_value_of_tscc_proc_1_input_3_Goals_8;
            tscc_proc_1_input_4_STATE_VARIABLE_Table_0_12 = next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Table_0_12;
            goto top_of_proc_1;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Unification_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), GoalExpr_12, (MR_Integer) 3)));
            MR_Word STATE_VARIABLE_Table_100_100;
            MR_Word Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), GoalExpr_12, (MR_Integer) 0)));
            MR_Word Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), GoalExpr_12, (MR_Integer) 1)));
            MR_Word Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), GoalExpr_12, (MR_Integer) 2)));
            MR_Word Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), GoalExpr_12, (MR_Integer) 4)));
            MR_Word Var_19;
            MR_Word ConsId_20;
            MR_Word Args_21;
            MR_Word Var_22;
            MR_Word Var_23;
            MR_Word Var_24;
            MR_Word next_value_of_tscc_proc_1_input_1_Background_6;
            MR_Word next_value_of_tscc_proc_1_input_2_DeadCellTable_7;
            MR_Word next_value_of_tscc_proc_1_input_3_Goals_8;
            MR_Word next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Table_0_12;

            succeeded = ((MR_tag((MR_Word) Unification_17)) == (MR_mktag((MR_Integer) 1)));
            if (succeeded)
            {
              Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), Unification_17, (MR_Integer) 0)));
              ConsId_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), Unification_17, (MR_Integer) 1)));
              Args_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), Unification_17, (MR_Integer) 2)));
              Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), Unification_17, (MR_Integer) 3)));
              Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), Unification_17, (MR_Integer) 4)));
              Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), Unification_17, (MR_Integer) 5)));
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
                  MR_Word Var_98;

                  ReuseAs_27 = transform_hlds__ctgc__structure_reuse__domain__reuse_as_init_with_one_condition_1_f_0(Condition_26);
                  DeconstructionSpec_28 = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__deconstruction_spec_init_5_f_0(Var_19, ProgramPoint_25, ConsId_20, Args_21, ReuseAs_27);
                  {
                    Var_98 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_98, 0) = ((MR_Box) (DeconstructionSpec_28));
                    MR_hl_field(MR_mktag(1), Var_98, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  }
                  Match0_29 = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__match_init_1_f_0(Var_98);
                  transform_hlds__ctgc__structure_reuse__direct__choose_reuse__find_best_match_in_conjunction_4_p_0(Background_7, Cont_10, Match0_29, &Match_30);
                  mercury__multi_map__set_4_p_0((MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_1[0], (MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_match_0, ((MR_Box) (Var_19)), ((MR_Box) (Match_30)), STATE_VARIABLE_Table_0_67, &STATE_VARIABLE_Table_100_100);
                }
                else
                  STATE_VARIABLE_Table_100_100 = STATE_VARIABLE_Table_0_67;
              }
            }
            else
              STATE_VARIABLE_Table_100_100 = STATE_VARIABLE_Table_0_67;
            // direct tailcall eliminated
            next_value_of_tscc_proc_1_input_1_Background_6 = Background_7;
            next_value_of_tscc_proc_1_input_2_DeadCellTable_7 = DeadCellTable_8;
            next_value_of_tscc_proc_1_input_3_Goals_8 = Cont_10;
            next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Table_0_12 = STATE_VARIABLE_Table_100_100;
            tscc_proc_1_input_1_Background_6 = next_value_of_tscc_proc_1_input_1_Background_6;
            tscc_proc_1_input_2_DeadCellTable_7 = next_value_of_tscc_proc_1_input_2_DeadCellTable_7;
            tscc_proc_1_input_3_Goals_8 = next_value_of_tscc_proc_1_input_3_Goals_8;
            tscc_proc_1_input_4_STATE_VARIABLE_Table_0_12 = next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Table_0_12;
            goto top_of_proc_1;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word next_value_of_tscc_proc_1_input_1_Background_6 = Background_7;
            MR_Word next_value_of_tscc_proc_1_input_2_DeadCellTable_7 = DeadCellTable_8;
            MR_Word next_value_of_tscc_proc_1_input_3_Goals_8 = Cont_10;
            MR_Word next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Table_0_12 = STATE_VARIABLE_Table_0_67;

            // direct tailcall eliminated
            tscc_proc_1_input_1_Background_6 = next_value_of_tscc_proc_1_input_1_Background_6;
            tscc_proc_1_input_2_DeadCellTable_7 = next_value_of_tscc_proc_1_input_2_DeadCellTable_7;
            tscc_proc_1_input_3_Goals_8 = next_value_of_tscc_proc_1_input_3_Goals_8;
            tscc_proc_1_input_4_STATE_VARIABLE_Table_0_12 = next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Table_0_12;
            goto top_of_proc_1;
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_12, (MR_Integer) 0)))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word next_value_of_tscc_proc_1_input_1_Background_6 = Background_7;
                MR_Word next_value_of_tscc_proc_1_input_2_DeadCellTable_7 = DeadCellTable_8;
                MR_Word next_value_of_tscc_proc_1_input_3_Goals_8 = Cont_10;
                MR_Word next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Table_0_12 = STATE_VARIABLE_Table_0_67;

                // direct tailcall eliminated
                tscc_proc_1_input_1_Background_6 = next_value_of_tscc_proc_1_input_1_Background_6;
                tscc_proc_1_input_2_DeadCellTable_7 = next_value_of_tscc_proc_1_input_2_DeadCellTable_7;
                tscc_proc_1_input_3_Goals_8 = next_value_of_tscc_proc_1_input_3_Goals_8;
                tscc_proc_1_input_4_STATE_VARIABLE_Table_0_12 = next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Table_0_12;
                goto top_of_proc_1;
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word next_value_of_tscc_proc_1_input_1_Background_6 = Background_7;
                MR_Word next_value_of_tscc_proc_1_input_2_DeadCellTable_7 = DeadCellTable_8;
                MR_Word next_value_of_tscc_proc_1_input_3_Goals_8 = Cont_10;
                MR_Word next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Table_0_12 = STATE_VARIABLE_Table_0_67;

                // direct tailcall eliminated
                tscc_proc_1_input_1_Background_6 = next_value_of_tscc_proc_1_input_1_Background_6;
                tscc_proc_1_input_2_DeadCellTable_7 = next_value_of_tscc_proc_1_input_2_DeadCellTable_7;
                tscc_proc_1_input_3_Goals_8 = next_value_of_tscc_proc_1_input_3_Goals_8;
                tscc_proc_1_input_4_STATE_VARIABLE_Table_0_12 = next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Table_0_12;
                goto top_of_proc_1;
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word Goals_50 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_12, (MR_Integer) 2)));
                MR_Word NewCont_51;
                MR_Word Var_49 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_12, (MR_Integer) 1)));
                MR_Word next_value_of_tscc_proc_1_input_1_Background_6;
                MR_Word next_value_of_tscc_proc_1_input_2_DeadCellTable_7;
                MR_Word next_value_of_tscc_proc_1_input_3_Goals_8;
                MR_Word next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Table_0_12;

                mercury__list__append_3_p_1((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, Goals_50, Cont_10, &NewCont_51);
                // direct tailcall eliminated
                next_value_of_tscc_proc_1_input_1_Background_6 = Background_7;
                next_value_of_tscc_proc_1_input_2_DeadCellTable_7 = DeadCellTable_8;
                next_value_of_tscc_proc_1_input_3_Goals_8 = NewCont_51;
                next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Table_0_12 = STATE_VARIABLE_Table_0_67;
                tscc_proc_1_input_1_Background_6 = next_value_of_tscc_proc_1_input_1_Background_6;
                tscc_proc_1_input_2_DeadCellTable_7 = next_value_of_tscc_proc_1_input_2_DeadCellTable_7;
                tscc_proc_1_input_3_Goals_8 = next_value_of_tscc_proc_1_input_3_Goals_8;
                tscc_proc_1_input_4_STATE_VARIABLE_Table_0_12 = next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Table_0_12;
                goto top_of_proc_1;
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Word STATE_VARIABLE_Table_92_92;
                MR_Word Goals_102 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_12, (MR_Integer) 1)));
                MR_Word next_value_of_tscc_proc_1_input_1_Background_6;
                MR_Word next_value_of_tscc_proc_1_input_2_DeadCellTable_7;
                MR_Word next_value_of_tscc_proc_1_input_3_Goals_8;
                MR_Word next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Table_0_12;

                transform_hlds__ctgc__structure_reuse__direct__choose_reuse__compute_match_table_in_disjunction_6_p_0(Background_7, DeadCellTable_8, Goals_102, Cont_10, STATE_VARIABLE_Table_0_67, &STATE_VARIABLE_Table_92_92);
                // direct tailcall eliminated
                next_value_of_tscc_proc_1_input_1_Background_6 = Background_7;
                next_value_of_tscc_proc_1_input_2_DeadCellTable_7 = DeadCellTable_8;
                next_value_of_tscc_proc_1_input_3_Goals_8 = Cont_10;
                next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Table_0_12 = STATE_VARIABLE_Table_92_92;
                tscc_proc_1_input_1_Background_6 = next_value_of_tscc_proc_1_input_1_Background_6;
                tscc_proc_1_input_2_DeadCellTable_7 = next_value_of_tscc_proc_1_input_2_DeadCellTable_7;
                tscc_proc_1_input_3_Goals_8 = next_value_of_tscc_proc_1_input_3_Goals_8;
                tscc_proc_1_input_4_STATE_VARIABLE_Table_0_12 = next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Table_0_12;
                goto top_of_proc_1;
              }
              break;
            case (MR_Integer) 4:
              {
                MR_Word Cases_54 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_12, (MR_Integer) 3)));
                MR_Word STATE_VARIABLE_Table_90_90;
                MR_Word Goals_104;
                MR_Word Var_52 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_12, (MR_Integer) 1)));
                MR_Word Var_53 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_12, (MR_Integer) 2)));
                MR_Word next_value_of_tscc_proc_1_input_1_Background_6;
                MR_Word next_value_of_tscc_proc_1_input_2_DeadCellTable_7;
                MR_Word next_value_of_tscc_proc_1_input_3_Goals_8;
                MR_Word next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Table_0_12;

                Goals_104 = mercury__list__map_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0, (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, (MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_2[11], Cases_54);
                transform_hlds__ctgc__structure_reuse__direct__choose_reuse__compute_match_table_in_disjunction_6_p_0(Background_7, DeadCellTable_8, Goals_104, Cont_10, STATE_VARIABLE_Table_0_67, &STATE_VARIABLE_Table_90_90);
                // direct tailcall eliminated
                next_value_of_tscc_proc_1_input_1_Background_6 = Background_7;
                next_value_of_tscc_proc_1_input_2_DeadCellTable_7 = DeadCellTable_8;
                next_value_of_tscc_proc_1_input_3_Goals_8 = Cont_10;
                next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Table_0_12 = STATE_VARIABLE_Table_90_90;
                tscc_proc_1_input_1_Background_6 = next_value_of_tscc_proc_1_input_1_Background_6;
                tscc_proc_1_input_2_DeadCellTable_7 = next_value_of_tscc_proc_1_input_2_DeadCellTable_7;
                tscc_proc_1_input_3_Goals_8 = next_value_of_tscc_proc_1_input_3_Goals_8;
                tscc_proc_1_input_4_STATE_VARIABLE_Table_0_12 = next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Table_0_12;
                goto top_of_proc_1;
              }
              break;
            case (MR_Integer) 5:
              {
                MR_Word Goal_105 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_12, (MR_Integer) 2)));
                MR_Word Var_57 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_12, (MR_Integer) 1)));
                MR_Word next_value_of_tscc_proc_2_input_1_Background_7 = Background_7;
                MR_Word next_value_of_tscc_proc_2_input_2_DeadCellTable_8 = DeadCellTable_8;
                MR_Word next_value_of_tscc_proc_2_input_3_CurrentGoal_9 = Goal_105;
                MR_Word next_value_of_tscc_proc_2_input_4_Cont_10 = Cont_10;
                MR_Word next_value_of_tscc_proc_2_input_5_STATE_VARIABLE_Table_0_67 = STATE_VARIABLE_Table_0_67;

                // direct tailcall eliminated
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
                MR_Word TypeInfo_113_113 = (MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_1[0];
                MR_Word TypeCtorInfo_114_114 = (MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_match_0;
                MR_Word TypeInfo_120_120;
                MR_Word CondGoal_59 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_12, (MR_Integer) 2)));
                MR_Word ThenGoal_60 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_12, (MR_Integer) 3)));
                MR_Word ElseGoal_61 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_12, (MR_Integer) 4)));
                MR_Word Table0_62;
                MR_Word TableThen_63;
                MR_Word TableElse_64;
                MR_Word CommonDeadVarsTables_65;
                MR_Word Var_72;
                MR_Word STATE_VARIABLE_Table_75_75;
                MR_Word STATE_VARIABLE_Table_76_76;
                MR_Word Var_77;
                MR_Word Var_78;
                MR_Word STATE_VARIABLE_Table_81_81;
                MR_Word Var_58 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_12, (MR_Integer) 1)));
                MR_Box conv1_STATE_VARIABLE_Table_81_81;
                MR_Word next_value_of_tscc_proc_1_input_1_Background_6;
                MR_Word next_value_of_tscc_proc_1_input_2_DeadCellTable_7;
                MR_Word next_value_of_tscc_proc_1_input_3_Goals_8;
                MR_Word next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Table_0_12;

                mercury__multi_map__init_1_p_0(TypeInfo_113_113, TypeCtorInfo_114_114, &Table0_62);
                {
                  Var_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_72, 0) = ((MR_Box) (ThenGoal_60));
                  MR_hl_field(MR_mktag(1), Var_72, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                }
                transform_hlds__ctgc__structure_reuse__direct__choose_reuse__compute_match_table_with_continuation_6_p_0(Background_7, DeadCellTable_8, CondGoal_59, Var_72, Table0_62, &TableThen_63);
                transform_hlds__ctgc__structure_reuse__direct__choose_reuse__compute_match_table_with_continuation_6_p_0(Background_7, DeadCellTable_8, ElseGoal_61, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), Table0_62, &TableElse_64);
                mercury__multi_map__merge_3_p_0(TypeInfo_113_113, TypeCtorInfo_114_114, TableThen_63, STATE_VARIABLE_Table_0_67, &STATE_VARIABLE_Table_75_75);
                mercury__multi_map__merge_3_p_0(TypeInfo_113_113, TypeCtorInfo_114_114, TableElse_64, STATE_VARIABLE_Table_75_75, &STATE_VARIABLE_Table_76_76);
                {
                  Var_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_78, 0) = ((MR_Box) (TableElse_64));
                  MR_hl_field(MR_mktag(1), Var_78, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                }
                {
                  Var_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_77, 0) = ((MR_Box) (TableThen_63));
                  MR_hl_field(MR_mktag(1), Var_77, 1) = ((MR_Box) (Var_78));
                }
                transform_hlds__ctgc__structure_reuse__direct__choose_reuse__process_possible_common_dead_vars_4_p_0(Background_7, Cont_10, Var_77, &CommonDeadVarsTables_65);
                TypeInfo_120_120 = (MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_2[1];
                mercury__list__foldl_4_p_0(TypeInfo_120_120, TypeInfo_120_120, (MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_2[10], CommonDeadVarsTables_65, ((MR_Box) (STATE_VARIABLE_Table_76_76)), &conv1_STATE_VARIABLE_Table_81_81);
                STATE_VARIABLE_Table_81_81 = ((MR_Word) conv1_STATE_VARIABLE_Table_81_81);
                // direct tailcall eliminated
                next_value_of_tscc_proc_1_input_1_Background_6 = Background_7;
                next_value_of_tscc_proc_1_input_2_DeadCellTable_7 = DeadCellTable_8;
                next_value_of_tscc_proc_1_input_3_Goals_8 = Cont_10;
                next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Table_0_12 = STATE_VARIABLE_Table_81_81;
                tscc_proc_1_input_1_Background_6 = next_value_of_tscc_proc_1_input_1_Background_6;
                tscc_proc_1_input_2_DeadCellTable_7 = next_value_of_tscc_proc_1_input_2_DeadCellTable_7;
                tscc_proc_1_input_3_Goals_8 = next_value_of_tscc_proc_1_input_3_Goals_8;
                tscc_proc_1_input_4_STATE_VARIABLE_Table_0_12 = next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Table_0_12;
                goto top_of_proc_1;
              }
              break;
            case (MR_Integer) 7:
              {
                {
                  mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.ctgc.structure_reuse.direct.choose_reuse", (MR_String) "predicate \140transform_hlds.ctgc.structure_reuse.direct.choose_reuse.compute_match_table_with_continuation\'/6", (MR_String) "shorthand");
                  return;
                }
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
}

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__find_best_match_in_conjunction_4_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv3_Result_6;

    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__reverse_compare_matches_value_3_p_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv3_Result_6);
    *wrapper_arg_3 = ((MR_Box) (conv3_Result_6));
  }
}

static MR_Box MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__find_best_match_in_conjunction_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_Box wrapper_arg_3;
    MR_Box closure = closure_arg;
    MR_Integer conv1_HeadVar__3_3;

    conv1_HeadVar__3_3 = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__add_degree_2_f_0(((MR_Word) wrapper_arg_1), ((MR_Integer) wrapper_arg_2));
    wrapper_arg_3 = ((MR_Box) (conv1_HeadVar__3_3));
    return wrapper_arg_3;
  }
}

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__find_best_match_in_conjunction_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_Match_8;

    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__find_match_in_goal_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) wrapper_arg_1), &conv0_Match_8);
    *wrapper_arg_2 = ((MR_Box) (conv0_Match_8));
  }
}

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__find_best_match_in_conjunction_4_p_0(
  MR_Word Background_5,
  MR_Word Goals_6,
  MR_Word STATE_VARIABLE_Match_0_11,
  MR_Word * STATE_VARIABLE_Match_12)
{
  {
    MR_Word ExclusiveMatches_9;
    MR_Integer Degree_10;
    MR_Word Var_13;
    MR_Word STATE_VARIABLE_Match_14_14;
    MR_Word Sorted_35;
    MR_Word Var_38;
    MR_Box conv2_Degree_10;
    MR_Word Var_16;
    MR_Word Var_17;
    MR_Float Var_18;
    MR_Integer Var_19;

    {
      Var_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_13, 0) = ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_6[1]));
      MR_hl_field(MR_mktag(0), Var_13, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__find_best_match_in_conjunction_4_p_0_1));
      MR_hl_field(MR_mktag(0), Var_13, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_13, 3) = ((MR_Box) (Background_5));
      MR_hl_field(MR_mktag(0), Var_13, 4) = ((MR_Box) (STATE_VARIABLE_Match_0_11));
    }
    mercury__list__map_3_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, (MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_match_0, Var_13, Goals_6, &ExclusiveMatches_9);
    conv2_Degree_10 = mercury__list__foldl_3_f_0((MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_match_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_2[8], ExclusiveMatches_9, ((MR_Box) ((MR_Integer) 0)));
    Degree_10 = ((MR_Integer) conv2_Degree_10);
    {
      Var_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_38, 0) = ((MR_Box) (STATE_VARIABLE_Match_0_11));
      MR_hl_field(MR_mktag(1), Var_38, 1) = ((MR_Box) (ExclusiveMatches_9));
    }
    mercury__list__sort_3_p_0((MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_match_0, (MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_2[9], Var_38, &Sorted_35);
    if ((Sorted_35 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      {
        mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.ctgc.structure_reuse.direct.choose_reuse", (MR_String) "predicate \140transform_hlds.ctgc.structure_reuse.direct.choose_reuse.highest_match_in_list\'/3", (MR_String) "empty list of matches");
        return;
      }
    }
    else
    {
      MR_Word Var_36;

      STATE_VARIABLE_Match_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), Sorted_35, (MR_Integer) 0)));
      Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), Sorted_35, (MR_Integer) 1)));
    }
    Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Match_14_14, (MR_Integer) 0)));
    Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Match_14_14, (MR_Integer) 1)));
    Var_18 = MR_unbox_float((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Match_14_14, (MR_Integer) 2)));
    Var_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Match_14_14, (MR_Integer) 3)));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_Match_12 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_16));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_17));
      MR_hl_field(MR_mktag(0), base, 2) = MR_box_float(Var_18);
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Degree_10));
    }
  }
}

static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__process_possible_common_dead_vars_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;
    MR_Word conv2_Table_10;

    succeeded = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__process_common_var_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5))), ((MR_Word) wrapper_arg_1), &conv2_Table_10);
    if (succeeded)
    {
      *wrapper_arg_2 = ((MR_Box) (conv2_Table_10));
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

static MR_Box MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__process_possible_common_dead_vars_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_Box wrapper_arg_3;
    MR_Box closure = closure_arg;
    MR_Word conv0_List_6;

    conv0_List_6 = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__common_var_with_list_2_f_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    wrapper_arg_3 = ((MR_Box) (conv0_List_6));
    return wrapper_arg_3;
  }
}

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__process_possible_common_dead_vars_4_p_0(
  MR_Word Background_5,
  MR_Word Cont_6,
  MR_Word DisjTables_7,
  MR_Word * ExtraTables_8)
{
  {
    MR_bool succeeded;

    if ((DisjTables_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *ExtraTables_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
    {
      MR_Word First_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), DisjTables_7, (MR_Integer) 0)));
      MR_Word RestTables_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), DisjTables_7, (MR_Integer) 1)));
      MR_Word Var_22;
      MR_Word CommonDeadVars_30;
      MR_Box conv1_CommonDeadVars_30;

      Var_22 = mercury__map__keys_1_f_0((MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_1[0], (MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_1[1], First_19);
      conv1_CommonDeadVars_30 = mercury__list__foldl_3_f_0((MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_2[1], (MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_1[2], (MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_2[7], RestTables_20, ((MR_Box) (Var_22)));
      CommonDeadVars_30 = ((MR_Word) conv1_CommonDeadVars_30);
      if ((CommonDeadVars_30 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        *ExtraTables_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      else
      {
        MR_Word Var_12;

        {
          Var_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_12, 0) = ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_4[1]));
          MR_hl_field(MR_mktag(0), Var_12, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__process_possible_common_dead_vars_4_p_0_2));
          MR_hl_field(MR_mktag(0), Var_12, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
          MR_hl_field(MR_mktag(0), Var_12, 3) = ((MR_Box) (Background_5));
          MR_hl_field(MR_mktag(0), Var_12, 4) = ((MR_Box) (Cont_6));
          MR_hl_field(MR_mktag(0), Var_12, 5) = ((MR_Box) (DisjTables_7));
        }
        mercury__list__filter_map_3_p_0((MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_1[0], (MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_2[1], Var_12, CommonDeadVars_30, ExtraTables_8);
      }
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
  {
    MR_Box closure = closure_arg;
    MR_Word conv6_HeadVar__3_28;

    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__IntroducedFrom__pred__compute_match_table_in_disjunction__690__1_3_p_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv6_HeadVar__3_28);
    *wrapper_arg_3 = ((MR_Box) (conv6_HeadVar__3_28));
  }
}

static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__compute_match_table_in_disjunction_6_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;
    MR_Word conv5_Table_10;

    succeeded = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__process_common_var_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5))), ((MR_Word) wrapper_arg_1), &conv5_Table_10);
    if (succeeded)
    {
      *wrapper_arg_2 = ((MR_Box) (conv5_Table_10));
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

static MR_Box MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__compute_match_table_in_disjunction_6_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_Box wrapper_arg_3;
    MR_Box closure = closure_arg;
    MR_Word conv3_List_6;

    conv3_List_6 = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__common_var_with_list_2_f_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    wrapper_arg_3 = ((MR_Box) (conv3_List_6));
    return wrapper_arg_3;
  }
}

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__compute_match_table_in_disjunction_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_HeadVar__3_22;

    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__IntroducedFrom__pred__compute_match_table_in_disjunction__682__1_3_p_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv1_HeadVar__3_22);
    *wrapper_arg_3 = ((MR_Box) (conv1_HeadVar__3_22));
  }
}

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__compute_match_table_in_disjunction_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_MatchTable_8;

    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__compute_match_table_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) wrapper_arg_1), &conv0_MatchTable_8);
    *wrapper_arg_2 = ((MR_Box) (conv0_MatchTable_8));
  }
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
  {
    MR_bool succeeded;
    MR_Word TypeInfo_25_25;
    MR_Word DisjTables_12;
    MR_Word CommonDeadVarsDisjTables_13;
    MR_Word STATE_VARIABLE_Table_17_17;
    MR_Word Var_35;
    MR_Box conv2_STATE_VARIABLE_Table_17_17;
    MR_Box conv7_STATE_VARIABLE_Table_15;

    {
      Var_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_35, 0) = ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_6[0]));
      MR_hl_field(MR_mktag(0), Var_35, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__compute_match_table_in_disjunction_6_p_0_1));
      MR_hl_field(MR_mktag(0), Var_35, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_35, 3) = ((MR_Box) (Background_7));
      MR_hl_field(MR_mktag(0), Var_35, 4) = ((MR_Box) (DeadCellTable_8));
    }
    mercury__list__map_3_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, (MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_2[1], Var_35, DisjGoals_9, &DisjTables_12);
    TypeInfo_25_25 = (MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_2[1];
    mercury__list__foldl_4_p_0(TypeInfo_25_25, TypeInfo_25_25, (MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_2[4], DisjTables_12, ((MR_Box) (STATE_VARIABLE_Table_0_14)), &conv2_STATE_VARIABLE_Table_17_17);
    STATE_VARIABLE_Table_17_17 = ((MR_Word) conv2_STATE_VARIABLE_Table_17_17);
    if ((DisjTables_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      CommonDeadVarsDisjTables_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
    {
      MR_Word First_54 = ((MR_Word) (MR_hl_field(MR_mktag(1), DisjTables_12, (MR_Integer) 0)));
      MR_Word RestTables_55 = ((MR_Word) (MR_hl_field(MR_mktag(1), DisjTables_12, (MR_Integer) 1)));
      MR_Word Var_57;
      MR_Word CommonDeadVars_65;
      MR_Box conv4_CommonDeadVars_65;

      Var_57 = mercury__map__keys_1_f_0((MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_1[0], (MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_1[1], First_54);
      conv4_CommonDeadVars_65 = mercury__list__foldl_3_f_0((MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_2[1], (MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_1[2], (MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_2[5], RestTables_55, ((MR_Box) (Var_57)));
      CommonDeadVars_65 = ((MR_Word) conv4_CommonDeadVars_65);
      if ((CommonDeadVars_65 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        CommonDeadVarsDisjTables_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      else
      {
        MR_Word Var_47;

        {
          Var_47 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_47, 0) = ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_4[1]));
          MR_hl_field(MR_mktag(0), Var_47, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__compute_match_table_in_disjunction_6_p_0_4));
          MR_hl_field(MR_mktag(0), Var_47, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
          MR_hl_field(MR_mktag(0), Var_47, 3) = ((MR_Box) (Background_7));
          MR_hl_field(MR_mktag(0), Var_47, 4) = ((MR_Box) (Cont_10));
          MR_hl_field(MR_mktag(0), Var_47, 5) = ((MR_Box) (DisjTables_12));
        }
        mercury__list__filter_map_3_p_0((MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_1[0], (MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_2[1], Var_47, CommonDeadVars_65, &CommonDeadVarsDisjTables_13);
      }
    }
    mercury__list__foldl_4_p_0(TypeInfo_25_25, TypeInfo_25_25, (MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_2[6], CommonDeadVarsDisjTables_13, ((MR_Box) (STATE_VARIABLE_Table_17_17)), &conv7_STATE_VARIABLE_Table_15);
    *STATE_VARIABLE_Table_15 = ((MR_Word) conv7_STATE_VARIABLE_Table_15);
  }
}

static MR_Word MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__match_init_1_f_0(
  MR_Word DS_3)
{
  {
    MR_Word HeadVar__2_2;

    {
      HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), HeadVar__2_2, 0) = ((MR_Box) (DS_3));
      MR_hl_field(MR_mktag(0), HeadVar__2_2, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), HeadVar__2_2, 2) = MR_box_float((MR_Float) 0.0000000000000000);
      MR_hl_field(MR_mktag(0), HeadVar__2_2, 3) = ((MR_Box) ((MR_Integer) 0));
    }
    return HeadVar__2_2;
  }
}

static MR_Word MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__deconstruction_spec_init_5_f_0(
  MR_Word Var_7,
  MR_Word PP_8,
  MR_Word ConsId_9,
  MR_Word Args_10,
  MR_Word Cond_11)
{
  {
    MR_Word HeadVar__6_6;

    {
      HeadVar__6_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), HeadVar__6_6, 0) = ((MR_Box) (Var_7));
      MR_hl_field(MR_mktag(0), HeadVar__6_6, 1) = ((MR_Box) (PP_8));
      MR_hl_field(MR_mktag(0), HeadVar__6_6, 2) = ((MR_Box) (ConsId_9));
      MR_hl_field(MR_mktag(0), HeadVar__6_6, 3) = ((MR_Box) (Args_10));
      MR_hl_field(MR_mktag(0), HeadVar__6_6, 4) = ((MR_Box) (Cond_11));
    }
    return HeadVar__6_6;
  }
}

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__remove_deconstructions_from_dead_cell_table_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_DeadCellTable_7;

    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__remove_deconstruction_from_dead_cell_table_3_p_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv0_STATE_VARIABLE_DeadCellTable_7);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_DeadCellTable_7));
  }
}

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__remove_deconstructions_from_dead_cell_table_3_p_0(
  MR_Word Match_4,
  MR_Word STATE_VARIABLE_DeadCellTable_0_7,
  MR_Word * STATE_VARIABLE_DeadCellTable_8)
{
  {
    MR_Word DeconSpecs_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), Match_4, (MR_Integer) 0)));
    MR_Word Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), Match_4, (MR_Integer) 1)));
    MR_Float Var_12 = MR_unbox_float((MR_hl_field(MR_mktag(0), Match_4, (MR_Integer) 2)));
    MR_Integer Var_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Match_4, (MR_Integer) 3)));
    MR_Box conv1_STATE_VARIABLE_DeadCellTable_8;

    mercury__list__foldl_4_p_0((MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_deconstruction_spec_0, (MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_2[0], (MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_2[3], DeconSpecs_6, ((MR_Box) (STATE_VARIABLE_DeadCellTable_0_7)), &conv1_STATE_VARIABLE_DeadCellTable_8);
    *STATE_VARIABLE_DeadCellTable_8 = ((MR_Word) conv1_STATE_VARIABLE_DeadCellTable_8);
  }
}

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__match_get_condition_2_f_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_HeadVar__5_5;

    transform_hlds__ctgc__structure_reuse__domain__reuse_as_least_upper_bound_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv1_HeadVar__5_5);
    *wrapper_arg_3 = ((MR_Box) (conv1_HeadVar__5_5));
  }
}

static MR_Box MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__match_get_condition_2_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_LambdaHeadVar__2_13;

    conv0_LambdaHeadVar__2_13 = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__IntroducedFrom__func__match_get_condition__325__1_1_f_0(((MR_Word) wrapper_arg_1));
    wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_13));
    return wrapper_arg_2;
  }
}

static MR_Word MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__match_get_condition_2_f_0(
  MR_Word Background_4,
  MR_Word Match_5)
{
  {
    MR_Word Condition_6;
    MR_Word TypeCtorInfo_36_36 = (MR_Word) &transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_as_0;
    MR_Word Conditions_9;
    MR_Word Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), Match_5, (MR_Integer) 0)));
    MR_Word Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), Match_5, (MR_Integer) 1)));
    MR_Float Var_27 = MR_unbox_float((MR_hl_field(MR_mktag(0), Match_5, (MR_Integer) 2)));
    MR_Integer Var_28 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Match_5, (MR_Integer) 3)));

    Conditions_9 = mercury__list__map_2_f_0((MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_deconstruction_spec_0, TypeCtorInfo_36_36, (MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_2[2], Var_14);
    if ((Conditions_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.ctgc.structure_reuse.direct.choose_reuse", (MR_String) "function \140transform_hlds.ctgc.structure_reuse.direct.choose_reuse.match_get_condition\'/2", (MR_String) "no reuse conditions");
    }
    else
    {
      MR_Word First_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), Conditions_9, (MR_Integer) 0)));
      MR_Word Rest_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), Conditions_9, (MR_Integer) 1)));
      MR_Word Var_18;
      MR_Word Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), Background_4, (MR_Integer) 1)));
      MR_Word Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), Background_4, (MR_Integer) 2)));
      MR_Word Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), Background_4, (MR_Integer) 0)));
      MR_Word Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), Background_4, (MR_Integer) 3)));
      MR_Box conv2_Condition_6;

      {
        Var_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_18, 0) = ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_4[0]));
        MR_hl_field(MR_mktag(0), Var_18, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__match_get_condition_2_f_0_2));
        MR_hl_field(MR_mktag(0), Var_18, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
        MR_hl_field(MR_mktag(0), Var_18, 3) = ((MR_Box) (Var_19));
        MR_hl_field(MR_mktag(0), Var_18, 4) = ((MR_Box) (Var_30));
      }
      mercury__list__foldl_4_p_0(TypeCtorInfo_36_36, TypeCtorInfo_36_36, Var_18, Rest_11, ((MR_Box) (First_10)), &conv2_Condition_6);
      Condition_6 = ((MR_Word) conv2_Condition_6);
    }
    return Condition_6;
  }
}

static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse____Unify____background_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = transform_hlds__ctgc__structure_reuse__direct__choose_reuse____Unify____background_info_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse____Compare____background_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    transform_hlds__ctgc__structure_reuse__direct__choose_reuse____Compare____background_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse____Unify____construction_spec_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = transform_hlds__ctgc__structure_reuse__direct__choose_reuse____Unify____construction_spec_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse____Compare____construction_spec_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    transform_hlds__ctgc__structure_reuse__direct__choose_reuse____Compare____construction_spec_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse____Unify____deconstruction_spec_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = transform_hlds__ctgc__structure_reuse__direct__choose_reuse____Unify____deconstruction_spec_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse____Compare____deconstruction_spec_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    transform_hlds__ctgc__structure_reuse__direct__choose_reuse____Compare____deconstruction_spec_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse____Unify____match_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = transform_hlds__ctgc__structure_reuse__direct__choose_reuse____Unify____match_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse____Compare____match_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    transform_hlds__ctgc__structure_reuse__direct__choose_reuse____Compare____match_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse____Unify____match_table_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = transform_hlds__ctgc__structure_reuse__direct__choose_reuse____Unify____match_table_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse____Compare____match_table_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    transform_hlds__ctgc__structure_reuse__direct__choose_reuse____Compare____match_table_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse____Unify____reuse_type_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = transform_hlds__ctgc__structure_reuse__direct__choose_reuse____Unify____reuse_type_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse____Compare____reuse_type_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    transform_hlds__ctgc__structure_reuse__direct__choose_reuse____Compare____reuse_type_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
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
