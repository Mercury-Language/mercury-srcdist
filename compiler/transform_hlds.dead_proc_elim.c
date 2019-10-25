/*
** Automatically generated from `dead_proc_elim.m'
** by the Mercury compiler,
** version rotd-2019-10-25
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


// :- module transform_hlds.dead_proc_elim.
// :- implementation.

/*
INIT mercury__transform_hlds__dead_proc_elim__init
ENDINIT
*/

#include "transform_hlds.dead_proc_elim.mih"


#include "analysis.mih"
#include "check_hlds.mih"
#include "hlds.mih"
#include "libs.mih"
#include "mdbcomp.mih"
#include "mode_robdd.mih"
#include "parse_tree.mih"
#include "recompilation.mih"
#include "transform_hlds.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.proc_requests.mih"
#include "check_hlds.simplify.mih"
#include "check_hlds.try_expand.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_mode.mih"
#include "hlds.hlds_args.mih"
#include "hlds.hlds_class.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_cons.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_dependency_graph.mih"
#include "hlds.hlds_error_util.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_inst_mode.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_promise.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.inst_graph.mih"
#include "hlds.instmap.mih"
#include "hlds.make_goal.mih"
#include "hlds.passes_aux.mih"
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "hlds.vartypes.mih"
#include "libs.dependency_graph.mih"
#include "libs.globals.mih"
#include "libs.op_mode.mih"
#include "libs.options.mih"
#include "libs.polyhedron.mih"
#include "libs.timestamp.mih"
#include "libs.trace_params.mih"
#include "mdbcomp.builtin_modules.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.sym_name.mih"
#include "array.mih"
#include "assoc_list.mih"
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
#include "getopt_io.mih"
#include "int.mih"
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
#include "parse_tree.parse_tree_out_info.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_event.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_data_used_modules.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"
#include "check_hlds.simplify.simplify_proc.mih"
#include "check_hlds.simplify.simplify_tasks.mih"



struct transform_hlds__dead_proc_elim__dead_proc_maybe_warn_proc_10_p_0_env_0_s {
  MR_Word transform_hlds__dead_proc_elim__dead_proc_maybe_warn_proc_10_p_0_env_0__Needed_12;
  MR_Word transform_hlds__dead_proc_elim__dead_proc_maybe_warn_proc_10_p_0_env_0__PredId_13;
  MR_Word transform_hlds__dead_proc_elim__dead_proc_maybe_warn_proc_10_p_0_env_0__AllProcsInPred_16;
  MR_bool transform_hlds__dead_proc_elim__dead_proc_maybe_warn_proc_10_p_0_env_0__succeeded;
  jmp_buf transform_hlds__dead_proc_elim__dead_proc_maybe_warn_proc_10_p_0_env_0__commit_0;
  MR_Word transform_hlds__dead_proc_elim__dead_proc_maybe_warn_proc_10_p_0_env_0__TypeCtorInfo_41_41;
  MR_Word transform_hlds__dead_proc_elim__dead_proc_maybe_warn_proc_10_p_0_env_0__TypeCtorInfo_42_42;
  MR_Word transform_hlds__dead_proc_elim__dead_proc_maybe_warn_proc_10_p_0_env_0__Var_33;
  MR_Integer transform_hlds__dead_proc_elim__dead_proc_maybe_warn_proc_10_p_0_env_0__OtherProcId_36;
  MR_Box transform_hlds__dead_proc_elim__dead_proc_maybe_warn_proc_10_p_0_env_0__conv0_OtherProcId_36;
  MR_Word transform_hlds__dead_proc_elim__dead_proc_maybe_warn_proc_10_p_0_env_0__MutableModuleName_22;
  MR_String transform_hlds__dead_proc_elim__dead_proc_maybe_warn_proc_10_p_0_env_0__MutableName_23;
  MR_Word transform_hlds__dead_proc_elim__dead_proc_maybe_warn_proc_10_p_0_env_0__SuppressPredKinds_25;
  jmp_buf transform_hlds__dead_proc_elim__dead_proc_maybe_warn_proc_10_p_0_env_0__commit_1;
  MR_Word transform_hlds__dead_proc_elim__dead_proc_maybe_warn_proc_10_p_0_env_0__TypeCtorInfo_44_44;
  MR_Word transform_hlds__dead_proc_elim__dead_proc_maybe_warn_proc_10_p_0_env_0__TypeCtorInfo_45_45;
  MR_Word transform_hlds__dead_proc_elim__dead_proc_maybe_warn_proc_10_p_0_env_0__SuppressMutableEntity_27;
  MR_Word transform_hlds__dead_proc_elim__dead_proc_maybe_warn_proc_10_p_0_env_0__SuppressPredKind_37;
  MR_Box transform_hlds__dead_proc_elim__dead_proc_maybe_warn_proc_10_p_0_env_0__conv1_SuppressPredKind_37;
};


static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__dead_proc_elim__queue__pti_queue_1__plain_transform_hlds__dead_proc_elim__type_ctor_info_entity_0;

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__dead_proc_elim__tree234__pti_tree234_2__plain_transform_hlds__dead_proc_elim__type_ctor_info_entity_0__plain_transform_hlds__dead_proc_elim__type_ctor_info_maybe_needed_0;

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__dead_proc_elim__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_hlds__hlds_pred__type_ctor_info_pred_info_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__dead_proc_elim__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__dead_proc_elim__queue__pti_queue_1__plain_hlds__hlds_pred__type_ctor_info_pred_id_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__dead_proc_elim__set_tree234__pti_set_tree234_1__plain_hlds__hlds_pred__type_ctor_info_pred_id_0;

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__dead_proc_elim__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_hlds__hlds_data__type_ctor_info_hlds_type_defn_0;

static const MR_FA_TypeInfo_Struct1 transform_hlds__dead_proc_elim__list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_id_0;

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__dead_proc_elim__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_id_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__dead_proc_elim__maybe__pti_maybe_1__plain_builtin__type_ctor_info_int_0;

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__dead_proc_elim__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_hlds__hlds_pred__type_ctor_info_proc_info_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__dead_proc_elim__list__pti_list_1__plain_builtin__type_ctor_info_int_0;

static const MR_PseudoTypeInfo transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__field_types_analyze_links_0_0[3];

static const MR_ConstString transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__field_names_analyze_links_0_0[3];

static const MR_DuArgLocn transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__field_locns_analyze_links_0_0[3];

static const MR_DuFunctorDesc transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_functor_desc_analyze_links_0_0;

static const MR_DuFunctorDescPtr transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_stag_ordered_analyze_links_0_0[1];

static const MR_DuPtagLayout transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_ptag_ordered_analyze_links_0[1];

static const MR_DuFunctorDescPtr transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_name_ordered_analyze_links_0[1];

static const MR_Integer transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__functor_number_map_analyze_links_0[1];

static const MR_PseudoTypeInfo transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__field_types_entity_0_0[2];

static const MR_DuFunctorDesc transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_functor_desc_entity_0_0;

static const MR_PseudoTypeInfo transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__field_types_entity_0_1[2];

static const MR_DuFunctorDesc transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_functor_desc_entity_0_1;

static const MR_PseudoTypeInfo transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__field_types_entity_0_2[3];

static const MR_DuFunctorDesc transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_functor_desc_entity_0_2;

static const MR_PseudoTypeInfo transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__field_types_entity_0_3[1];

static const MR_DuFunctorDesc transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_functor_desc_entity_0_3;

static const MR_PseudoTypeInfo transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__field_types_entity_0_4[3];

static const MR_DuArgLocn transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__field_locns_entity_0_4[3];

static const MR_DuFunctorDesc transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_functor_desc_entity_0_4;

static const MR_DuFunctorDescPtr transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_stag_ordered_entity_0_0[1];

static const MR_DuFunctorDescPtr transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_stag_ordered_entity_0_1[1];

static const MR_DuFunctorDescPtr transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_stag_ordered_entity_0_2[1];

static const MR_DuFunctorDescPtr transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_stag_ordered_entity_0_3[2];

static const MR_DuPtagLayout transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_ptag_ordered_entity_0[4];

static const MR_DuFunctorDescPtr transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_name_ordered_entity_0[5];

static const MR_Integer transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__functor_number_map_entity_0[5];

static const MR_FA_TypeInfo_Struct1 transform_hlds__dead_proc_elim__queue__ti_queue_1transform_hlds__dead_proc_elim__type_ctor_info_entity_0;

static const MR_FA_TypeInfo_Struct1 transform_hlds__dead_proc_elim__set_tree234__ti_set_tree234_1transform_hlds__dead_proc_elim__type_ctor_info_entity_0;

static const MR_EnumFunctorDesc transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__enum_functor_desc_maybe_analyze_link_const_struct_0_0;

static const MR_EnumFunctorDesc transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__enum_functor_desc_maybe_analyze_link_const_struct_0_1;

static const MR_EnumFunctorDescPtr transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__enum_value_ordered_maybe_analyze_link_const_struct_0[2];

static const MR_EnumFunctorDescPtr transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__enum_name_ordered_maybe_analyze_link_const_struct_0[2];

static const MR_Integer transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__functor_number_map_maybe_analyze_link_const_struct_0[2];

static const MR_EnumFunctorDesc transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__enum_functor_desc_maybe_analyze_link_deleted_calls_0_0;

static const MR_EnumFunctorDesc transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__enum_functor_desc_maybe_analyze_link_deleted_calls_0_1;

static const MR_EnumFunctorDescPtr transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__enum_value_ordered_maybe_analyze_link_deleted_calls_0[2];

static const MR_EnumFunctorDescPtr transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__enum_name_ordered_maybe_analyze_link_deleted_calls_0[2];

static const MR_Integer transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__functor_number_map_maybe_analyze_link_deleted_calls_0[2];

static const MR_EnumFunctorDesc transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__enum_functor_desc_maybe_analyze_link_type_ctor_0_0;

static const MR_EnumFunctorDesc transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__enum_functor_desc_maybe_analyze_link_type_ctor_0_1;

static const MR_EnumFunctorDescPtr transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__enum_value_ordered_maybe_analyze_link_type_ctor_0[2];

static const MR_EnumFunctorDescPtr transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__enum_name_ordered_maybe_analyze_link_type_ctor_0[2];

static const MR_Integer transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__functor_number_map_maybe_analyze_link_type_ctor_0[2];

static const MR_EnumFunctorDesc transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__enum_functor_desc_maybe_elim_opt_imported_0_0;

static const MR_EnumFunctorDesc transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__enum_functor_desc_maybe_elim_opt_imported_0_1;

static const MR_EnumFunctorDescPtr transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__enum_value_ordered_maybe_elim_opt_imported_0[2];

static const MR_EnumFunctorDescPtr transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__enum_name_ordered_maybe_elim_opt_imported_0[2];

static const MR_Integer transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__functor_number_map_maybe_elim_opt_imported_0[2];

static const MR_DuFunctorDesc transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_functor_desc_maybe_needed_0_0;

static const MR_PseudoTypeInfo transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__field_types_maybe_needed_0_1[1];

static const MR_ConstString transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__field_names_maybe_needed_0_1[1];

static const MR_DuFunctorDesc transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_functor_desc_maybe_needed_0_1;

static const MR_DuFunctorDescPtr transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_stag_ordered_maybe_needed_0_0[1];

static const MR_DuFunctorDescPtr transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_stag_ordered_maybe_needed_0_1[1];

static const MR_DuPtagLayout transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_ptag_ordered_maybe_needed_0[2];

static const MR_DuFunctorDescPtr transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_name_ordered_maybe_needed_0[2];

static const MR_Integer transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__functor_number_map_maybe_needed_0[2];

static const MR_FA_TypeInfo_Struct2 transform_hlds__dead_proc_elim__tree234__ti_tree234_2transform_hlds__dead_proc_elim__type_ctor_info_entity_0transform_hlds__dead_proc_elim__type_ctor_info_maybe_needed_0;

static const MR_FA_TypeInfo_Struct1 transform_hlds__dead_proc_elim__queue__ti_queue_1hlds__hlds_pred__type_ctor_info_pred_id_0;

static const MR_FA_TypeInfo_Struct1 transform_hlds__dead_proc_elim__set_tree234__ti_set_tree234_1hlds__hlds_pred__type_ctor_info_pred_id_0;

static const MR_FA_TypeInfo_Struct1 transform_hlds__dead_proc_elim__set_tree234__ti_set_tree234_1mdbcomp__sym_name__type_ctor_info_sym_name_0;

static const MR_PseudoTypeInfo transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__field_types_pred_elim_info_0_0[5];

static const MR_ConstString transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__field_names_pred_elim_info_0_0[5];

static const MR_DuFunctorDesc transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_functor_desc_pred_elim_info_0_0;

static const MR_DuFunctorDescPtr transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_stag_ordered_pred_elim_info_0_0[1];

static const MR_DuPtagLayout transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_ptag_ordered_pred_elim_info_0[1];

static const MR_DuFunctorDescPtr transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_name_ordered_pred_elim_info_0[1];

static const MR_Integer transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__functor_number_map_pred_elim_info_0[1];

static const MR_FA_TypeInfo_Struct2 transform_hlds__dead_proc_elim__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_id_0hlds__hlds_pred__type_ctor_info_pred_info_0;

static const MR_PseudoTypeInfo transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__field_types_proc_elim_info_0_0[4];

static const MR_ConstString transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__field_names_proc_elim_info_0_0[4];

static const MR_DuArgLocn transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__field_locns_proc_elim_info_0_0[4];

static const MR_DuFunctorDesc transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_functor_desc_proc_elim_info_0_0;

static const MR_DuFunctorDescPtr transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_stag_ordered_proc_elim_info_0_0[1];

static const MR_DuPtagLayout transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_ptag_ordered_proc_elim_info_0[1];

static const MR_DuFunctorDescPtr transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_name_ordered_proc_elim_info_0[1];

static const MR_Integer transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__functor_number_map_proc_elim_info_0[1];

static void MR_CALL 
transform_hlds__dead_proc_elim__IntroducedFrom__pred__dead_proc_eliminate_pred__1011__1_4_p_0(
  MR_Word ProcTable0_56,
  MR_Integer LambdaHeadVar__1_40,
  MR_Word LambdaHeadVar__2_41,
  MR_Word * LambdaHeadVar__3_42);

static MR_bool MR_CALL 
transform_hlds__dead_proc_elim__IntroducedFrom__pred__dead_pred_elim__1355__1_2_p_0(
  MR_Word NeededPreds_41,
  MR_Word HeadVar__2_88);

static void MR_CALL 
transform_hlds__dead_proc_elim__IntroducedFrom__pred__dead_pred_elim__1343__1_4_p_0(
  MR_Word SpecMap0_34,
  MR_Word LambdaHeadVar__1_55,
  MR_Word LambdaHeadVar__2_56,
  MR_Word * LambdaHeadVar__3_57);

static void MR_CALL 
transform_hlds__dead_proc_elim____Compare____proc_elim_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
transform_hlds__dead_proc_elim____Unify____proc_elim_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
transform_hlds__dead_proc_elim____Compare____pred_elim_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
transform_hlds__dead_proc_elim____Unify____pred_elim_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
transform_hlds__dead_proc_elim____Compare____maybe_analyze_link_type_ctor_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
transform_hlds__dead_proc_elim____Unify____maybe_analyze_link_type_ctor_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
transform_hlds__dead_proc_elim____Compare____maybe_analyze_link_deleted_calls_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
transform_hlds__dead_proc_elim____Unify____maybe_analyze_link_deleted_calls_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
transform_hlds__dead_proc_elim____Compare____maybe_analyze_link_const_struct_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
transform_hlds__dead_proc_elim____Unify____maybe_analyze_link_const_struct_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
transform_hlds__dead_proc_elim____Compare____examined_set_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
transform_hlds__dead_proc_elim____Unify____examined_set_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
transform_hlds__dead_proc_elim____Compare____entity_queue_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
transform_hlds__dead_proc_elim____Unify____entity_queue_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
transform_hlds__dead_proc_elim____Compare____analyze_links_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
transform_hlds__dead_proc_elim____Unify____analyze_links_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
transform_hlds__dead_proc_elim__pre_modecheck_examine_case_3_p_0(
  MR_Word Case_4,
  MR_Word STATE_VARIABLE_DeadInfo_0_9,
  MR_Word * STATE_VARIABLE_DeadInfo_10);

static void MR_CALL 
transform_hlds__dead_proc_elim__dead_pred_elim_process_clause_3_p_0(
  MR_Word Clause_4,
  MR_Word STATE_VARIABLE_DeadInfo_0_6,
  MR_Word * STATE_VARIABLE_DeadInfo_7);

static void MR_CALL 
transform_hlds__dead_proc_elim__pre_modecheck_examine_goal_expr_3_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__dead_proc_elim__pre_modecheck_examine_goal_expr_3_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__dead_proc_elim__pre_modecheck_examine_goal_expr_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__dead_proc_elim__pre_modecheck_examine_goal_expr_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__dead_proc_elim__pre_modecheck_examine_goal_3_p_0(
  MR_Word tscc_proc_1_input_1_Goal_4,
  MR_Word tscc_proc_1_input_2_STATE_VARIABLE_DeadInfo_0_8,
  MR_Word * tscc_output_ptr_1_STATE_VARIABLE_DeadInfo_9);

static void MR_CALL 
transform_hlds__dead_proc_elim__pre_modecheck_examine_goal_expr_3_p_0(
  MR_Word tscc_proc_2_input_1_GoalExpr_4,
  MR_Word tscc_proc_2_input_2_STATE_VARIABLE_DeadInfo_0_52,
  MR_Word * tscc_output_ptr_1_STATE_VARIABLE_DeadInfo_9);

static void MR_CALL 
transform_hlds__dead_proc_elim__pre_modecheck_examine_unify_rhs_3_p_0(
  MR_Word tscc_proc_3_input_1_RHS_4,
  MR_Word tscc_proc_3_input_2_STATE_VARIABLE_DeadInfo_0_22,
  MR_Word * tscc_output_ptr_1_STATE_VARIABLE_DeadInfo_9);

static void MR_CALL 
transform_hlds__dead_proc_elim__dead_pred_info_add_pred_name_3_p_0(
  MR_Word Name_4,
  MR_Word STATE_VARIABLE_DeadInfo_0_13,
  MR_Word * STATE_VARIABLE_DeadInfo_14);

static void MR_CALL 
transform_hlds__dead_proc_elim__dead_pred_elim_initialize_3_p_0(
  MR_Word PredId_4,
  MR_Word DeadInfo0_5,
  MR_Word * DeadInfo_6);

static void MR_CALL 
transform_hlds__dead_proc_elim__dead_pred_elim_add_entity_5_p_0(
  MR_Word Entity_6,
  MR_Word STATE_VARIABLE_Queue_0_20,
  MR_Word * STATE_VARIABLE_Queue_21,
  MR_Word STATE_VARIABLE_Preds_0_22,
  MR_Word * STATE_VARIABLE_Preds_23);

static void MR_CALL 
transform_hlds__dead_proc_elim__dead_pred_initialize_referred_preds_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_NeededPreds_0_23,
  MR_Word * STATE_VARIABLE_NeededPreds_24);

static void MR_CALL 
transform_hlds__dead_proc_elim__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_97_100_95_112_114_101_100_95_105_110_105_116_105_97_108_105_122_101_95_102_111_114_101_105_110_95_116_121_112_101_95_108_97_110_103_95_98_111_100_121_95_95_91_49_93_95_48_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word ForeignTypeLangBody_6,
  MR_Word STATE_VARIABLE_NeededPreds_0_11,
  MR_Word * STATE_VARIABLE_NeededPreds_12);

static void MR_CALL 
transform_hlds__dead_proc_elim__dead_pred_initialize_maybe_canonical_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word MaybeCanon_6,
  MR_Word STATE_VARIABLE_NeededPreds_0_15,
  MR_Word * STATE_VARIABLE_NeededPreds_16);

static void MR_CALL 
transform_hlds__dead_proc_elim__dead_proc_maybe_warn_proc_10_p_0_1(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__dead_proc_elim__dead_proc_maybe_warn_proc_10_p_0_3(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__dead_proc_elim__dead_proc_maybe_warn_proc_10_p_0_2(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__dead_proc_elim__dead_proc_maybe_warn_proc_10_p_0_4(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__dead_proc_elim__dead_proc_maybe_warn_proc_10_p_0_5(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__dead_proc_elim__dead_proc_maybe_warn_proc_10_p_0_7(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__dead_proc_elim__dead_proc_maybe_warn_proc_10_p_0_6(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__dead_proc_elim__dead_proc_maybe_warn_proc_10_p_0_8(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__dead_proc_elim__dead_proc_maybe_warn_proc_10_p_0(
  MR_Word ModuleInfo_11,
  MR_Word Needed_12,
  MR_Word PredId_13,
  MR_Word PredInfo_14,
  MR_Word WarnWithLiveSiblings_15,
  MR_Word AllProcsInPred_16,
  MR_Word ProcTable_17,
  MR_Integer ProcId_18,
  MR_Word STATE_VARIABLE_Specs_0_31,
  MR_Word * STATE_VARIABLE_Specs_32);

static MR_Word MR_CALL 
transform_hlds__dead_proc_elim__warn_dead_proc_4_f_0(
  MR_Word ModuleInfo_6,
  MR_Word PredId_7,
  MR_Integer ProcId_8,
  MR_Word Context_9);

static void MR_CALL 
transform_hlds__dead_proc_elim__dead_proc_warn_pred_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__dead_proc_elim__dead_proc_warn_pred_7_p_0(
  MR_Word ModuleInfo_8,
  MR_Word PredTable_9,
  MR_Word WarnWithLiveSiblings_10,
  MR_Word Needed_11,
  MR_Word PredId_12,
  MR_Word STATE_VARIABLE_Specs_0_19,
  MR_Word * STATE_VARIABLE_Specs_20);

static void MR_CALL 
transform_hlds__dead_proc_elim__dead_proc_eliminate_proc_8_p_0(
  MR_Word PredId_9,
  MR_Word Keep_10,
  MR_Word ProcElimInfo_11,
  MR_Integer ProcId_12,
  MR_Word STATE_VARIABLE_ProcTable_0_20,
  MR_Word * STATE_VARIABLE_ProcTable_21,
  MR_Word STATE_VARIABLE_Changed_0_22,
  MR_Word * STATE_VARIABLE_Changed_23);

static void MR_CALL 
transform_hlds__dead_proc_elim__dead_proc_eliminate_pred_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__dead_proc_elim__dead_proc_eliminate_pred_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
transform_hlds__dead_proc_elim__dead_proc_eliminate_pred_4_p_0(
  MR_Word ElimOptImported_5,
  MR_Word PredId_6,
  MR_Word STATE_VARIABLE_ProcElimInfo_0_32,
  MR_Word * STATE_VARIABLE_ProcElimInfo_33);

static void MR_CALL 
transform_hlds__dead_proc_elim__need_trace_goal_proc_5_p_0(
  MR_Word TraceGoalProc_6,
  MR_Word STATE_VARIABLE_Queue_0_12,
  MR_Word * STATE_VARIABLE_Queue_13,
  MR_Word STATE_VARIABLE_Needed_0_14,
  MR_Word * STATE_VARIABLE_Needed_15);

static void MR_CALL 
transform_hlds__dead_proc_elim__get_class_interface_pred_proc_5_p_0(
  MR_Word ClassProc_6,
  MR_Word STATE_VARIABLE_Queue_0_12,
  MR_Word * STATE_VARIABLE_Queue_13,
  MR_Word STATE_VARIABLE_Needed_0_14,
  MR_Word * STATE_VARIABLE_Needed_15);

static void MR_CALL 
transform_hlds__dead_proc_elim__get_class_pred_procs_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
transform_hlds__dead_proc_elim__get_class_pred_procs_5_p_0(
  MR_Word Class_6,
  MR_Word STATE_VARIABLE_Queue_0_10,
  MR_Word * STATE_VARIABLE_Queue_11,
  MR_Word STATE_VARIABLE_Needed_0_12,
  MR_Word * STATE_VARIABLE_Needed_13);

static void MR_CALL 
transform_hlds__dead_proc_elim__get_instance_pred_procs_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
transform_hlds__dead_proc_elim__get_instance_pred_procs_5_p_0(
  MR_Word Instance_6,
  MR_Word STATE_VARIABLE_Queue_0_20,
  MR_Word * STATE_VARIABLE_Queue_21,
  MR_Word STATE_VARIABLE_Needed_0_22,
  MR_Word * STATE_VARIABLE_Needed_23);

static MR_bool MR_CALL 
transform_hlds__dead_proc_elim__dead_pred_elim_2_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
transform_hlds__dead_proc_elim__dead_pred_elim_2_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__dead_proc_elim__dead_pred_elim_2_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__dead_proc_elim__dead_pred_elim_2_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__dead_proc_elim__dead_pred_elim_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
transform_hlds__dead_proc_elim__dead_pred_elim_analyze_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__dead_proc_elim__dead_pred_elim_analyze_2_p_0(
  MR_Word STATE_VARIABLE_DeadInfo_0_15,
  MR_Word * STATE_VARIABLE_DeadInfo_16);

static void MR_CALL 
transform_hlds__dead_proc_elim__dead_proc_initialize_class_methods_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
transform_hlds__dead_proc_elim__dead_proc_initialize_class_methods_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
transform_hlds__dead_proc_elim__dead_proc_initialize_class_methods_6_p_0(
  MR_Word Classes_7,
  MR_Word Instances_8,
  MR_Word STATE_VARIABLE_Queue_0_14,
  MR_Word * STATE_VARIABLE_Queue_15,
  MR_Word STATE_VARIABLE_Needed_0_16,
  MR_Word * STATE_VARIABLE_Needed_17);

static void MR_CALL 
transform_hlds__dead_proc_elim__dead_proc_warn_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__dead_proc_elim__dead_proc_elim_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__dead_proc_elim__dead_proc_eliminate_const_structs_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_ConstStructDb_0_3,
  MR_Word * STATE_VARIABLE_ConstStructDb_4);

static void MR_CALL 
transform_hlds__dead_proc_elim__dead_proc_eliminate_type_ctor_infos_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3);

static void MR_CALL 
transform_hlds__dead_proc_elim__do_dead_proc_analyze_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
transform_hlds__dead_proc_elim__do_dead_proc_analyze_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
transform_hlds__dead_proc_elim__do_dead_proc_analyze_3_p_0(
  MR_Word ModuleInfo_4,
  MR_Word AnalyzeLinks_5,
  MR_Word * STATE_VARIABLE_Needed_9);

static void MR_CALL 
transform_hlds__dead_proc_elim__dead_proc_examine_6_p_0(
  MR_Word STATE_VARIABLE_Queue_0_28,
  MR_Word STATE_VARIABLE_Examined_0_29,
  MR_Word AnalyzeLinks_9,
  MR_Word ModuleInfo_10,
  MR_Word STATE_VARIABLE_Needed_0_30,
  MR_Word * STATE_VARIABLE_Needed_31);

static void MR_CALL 
transform_hlds__dead_proc_elim__dead_proc_examine_proc_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
transform_hlds__dead_proc_elim__dead_proc_examine_proc_7_p_0(
  MR_Word HeadVar__1_1,
  MR_Word AnalyzeTraceGoalProcs_10,
  MR_Word ModuleInfo_11,
  MR_Word STATE_VARIABLE_Queue_0_30,
  MR_Word * STATE_VARIABLE_Queue_31,
  MR_Word STATE_VARIABLE_Needed_0_32,
  MR_Word * STATE_VARIABLE_Needed_33);

static void MR_CALL 
transform_hlds__dead_proc_elim__dead_proc_examine_goal_6_p_0(
  MR_Word Goal_7,
  MR_Word CurrProc_8,
  MR_Word STATE_VARIABLE_Queue_0_105,
  MR_Word * STATE_VARIABLE_Queue_106,
  MR_Word STATE_VARIABLE_Needed_0_107,
  MR_Word * STATE_VARIABLE_Needed_108);

static void MR_CALL 
transform_hlds__dead_proc_elim__dead_proc_examine_cases_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_Queue_0_3,
  MR_Word * STATE_VARIABLE_Queue_4,
  MR_Word STATE_VARIABLE_Needed_0_5,
  MR_Word * STATE_VARIABLE_Needed_6);

static void MR_CALL 
transform_hlds__dead_proc_elim__dead_proc_examine_goals_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word CurrProc_2,
  MR_Word STATE_VARIABLE_Queue_0_3,
  MR_Word * STATE_VARIABLE_Queue_4,
  MR_Word STATE_VARIABLE_Needed_0_5,
  MR_Word * STATE_VARIABLE_Needed_6);

static void MR_CALL 
transform_hlds__dead_proc_elim__dead_proc_examine_const_struct_args_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_Queue_0_2,
  MR_Word * STATE_VARIABLE_Queue_3,
  MR_Word STATE_VARIABLE_Needed_0_4,
  MR_Word * STATE_VARIABLE_Needed_5);

static void MR_CALL 
transform_hlds__dead_proc_elim__dead_proc_examine_refs_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_Queue_0_2,
  MR_Word * STATE_VARIABLE_Queue_3,
  MR_Word STATE_VARIABLE_Needed_0_4,
  MR_Word * STATE_VARIABLE_Needed_5);

static MR_bool MR_CALL 
transform_hlds__dead_proc_elim__find_type_ctor_info_5_p_0(
  MR_Word ModuleName_6,
  MR_String TypeName_7,
  MR_Integer TypeArity_8,
  MR_Word HeadVar__4_4,
  MR_Word * Refs_11);

static void MR_CALL 
transform_hlds__dead_proc_elim__dead_proc_initialize_type_ctor_infos_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_Queue_0_2,
  MR_Word * STATE_VARIABLE_Queue_3,
  MR_Word STATE_VARIABLE_Needed_0_4,
  MR_Word * STATE_VARIABLE_Needed_5);

static void MR_CALL 
transform_hlds__dead_proc_elim__dead_proc_initialize_init_fn_procs_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_Queue_0_2,
  MR_Word * STATE_VARIABLE_Queue_3,
  MR_Word STATE_VARIABLE_Needed_0_4,
  MR_Word * STATE_VARIABLE_Needed_5);

static void MR_CALL 
transform_hlds__dead_proc_elim__dead_proc_initialize_pragma_exports_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_Queue_0_2,
  MR_Word * STATE_VARIABLE_Queue_3,
  MR_Word STATE_VARIABLE_Needed_0_4,
  MR_Word * STATE_VARIABLE_Needed_5);

static void MR_CALL 
transform_hlds__dead_proc_elim__dead_proc_initialize_preds_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_Queue_0_3,
  MR_Word * STATE_VARIABLE_Queue_4,
  MR_Word STATE_VARIABLE_Needed_0_5,
  MR_Word * STATE_VARIABLE_Needed_6);

static void MR_CALL 
transform_hlds__dead_proc_elim__dead_proc_initialize_procs_7_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_Queue_0_4,
  MR_Word * STATE_VARIABLE_Queue_5,
  MR_Word STATE_VARIABLE_Needed_0_6,
  MR_Word * STATE_VARIABLE_Needed_7);

static MR_bool MR_CALL 
transform_hlds__dead_proc_elim____Unify____analyze_links_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__dead_proc_elim____Compare____analyze_links_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__dead_proc_elim____Unify____entity_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__dead_proc_elim____Compare____entity_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__dead_proc_elim____Unify____entity_queue_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__dead_proc_elim____Compare____entity_queue_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__dead_proc_elim____Unify____examined_set_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__dead_proc_elim____Compare____examined_set_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__dead_proc_elim____Unify____maybe_analyze_link_const_struct_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__dead_proc_elim____Compare____maybe_analyze_link_const_struct_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__dead_proc_elim____Unify____maybe_analyze_link_deleted_calls_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__dead_proc_elim____Compare____maybe_analyze_link_deleted_calls_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__dead_proc_elim____Unify____maybe_analyze_link_type_ctor_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__dead_proc_elim____Compare____maybe_analyze_link_type_ctor_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__dead_proc_elim____Unify____maybe_elim_opt_imported_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__dead_proc_elim____Compare____maybe_elim_opt_imported_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__dead_proc_elim____Unify____maybe_needed_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__dead_proc_elim____Compare____maybe_needed_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__dead_proc_elim____Unify____needed_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__dead_proc_elim____Compare____needed_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__dead_proc_elim____Unify____pred_elim_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__dead_proc_elim____Compare____pred_elim_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__dead_proc_elim____Unify____proc_elim_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__dead_proc_elim____Compare____proc_elim_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box transform_hlds__dead_proc_elim_scalar_common_1[24][2];

static /* final */ const MR_Box transform_hlds__dead_proc_elim_scalar_common_2[18][3];

static /* final */ const MR_Box transform_hlds__dead_proc_elim_scalar_common_3[5][1];

static /* final */ const MR_Box transform_hlds__dead_proc_elim_scalar_common_4[4][8];

static /* final */ const MR_Box transform_hlds__dead_proc_elim_scalar_common_5[4][7];

static /* final */ const MR_Box transform_hlds__dead_proc_elim_scalar_common_6[1][10];

static /* final */ const MR_Box transform_hlds__dead_proc_elim_scalar_common_7[4][6];

static /* final */ const MR_Box transform_hlds__dead_proc_elim_scalar_common_8[1][5];

static /* final */ const MR_Box transform_hlds__dead_proc_elim_scalar_common_9[1][11];

static /* final */ const MR_Box transform_hlds__dead_proc_elim_scalar_common_10[1][13];


/* sealed */ struct transform_hlds__dead_proc_elim__vector_common_type_11_0_s {
  const MR_Word transform_hlds__dead_proc_elim__vector_common_type_11_0__vct_11_f_0;
};

static /* final */ const struct transform_hlds__dead_proc_elim__vector_common_type_11_0_s transform_hlds__dead_proc_elim_vector_common_11[12];



static /* final */ const MR_Box transform_hlds__dead_proc_elim_scalar_common_1[24][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__queue__queue__type_ctor_info_queue_1)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__set_tree234__set_tree234__type_ctor_info_set_tree234_1)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_instance_defn_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__queue__queue__type_ctor_info_queue_1)),
    ((MR_Box) (&transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_entity_0))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0))
  },
  /* row 6 */
  {
    ((MR_Box) (&mercury__set_tree234__set_tree234__type_ctor_info_set_tree234_1)),
    ((MR_Box) (&transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_entity_0))
  },
  /* row 7 */
  {
    ((MR_Box) (&mercury__set_tree234__set_tree234__type_ctor_info_set_tree234_1)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
  /* row 8 */
  {
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 9 */
  {
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &transform_hlds__dead_proc_elim_scalar_common_1[8])))
  },
  /* row 10 */
  {
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &transform_hlds__dead_proc_elim_scalar_common_1[9])))
  },
  /* row 11 */
  {
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &transform_hlds__dead_proc_elim_scalar_common_1[10])))
  },
  /* row 12 */
  {
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &transform_hlds__dead_proc_elim_scalar_common_1[11])))
  },
  /* row 13 */
  {
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &transform_hlds__dead_proc_elim_scalar_common_1[12])))
  },
  /* row 14 */
  {
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &transform_hlds__dead_proc_elim_scalar_common_1[13])))
  },
  /* row 15 */
  {
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 16 */
  {
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &transform_hlds__dead_proc_elim_scalar_common_1[15])))
  },
  /* row 17 */
  {
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 18 */
  {
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &transform_hlds__dead_proc_elim_scalar_common_1[17])))
  },
  /* row 19 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 20 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "is never called."))
  },
  /* row 21 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__dead_proc_elim_scalar_common_1[20]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &transform_hlds__dead_proc_elim_scalar_common_1[19])))
  },
  /* row 22 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Warning:"))
  },
  /* row 23 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__dead_proc_elim_scalar_common_1[22]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
};

static /* final */ const MR_Box transform_hlds__dead_proc_elim_scalar_common_2[18][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_type_defn_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_entity_0)),
    ((MR_Box) (&transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_maybe_needed_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&transform_hlds__dead_proc_elim_scalar_common_4[0])),
    ((MR_Box) (transform_hlds__dead_proc_elim__dead_proc_examine_proc_7_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 5 */
  {
    ((MR_Box) (&transform_hlds__dead_proc_elim_scalar_common_4[1])),
    ((MR_Box) (transform_hlds__dead_proc_elim__do_dead_proc_analyze_3_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 6 */
  {
    ((MR_Box) (&transform_hlds__dead_proc_elim_scalar_common_4[2])),
    ((MR_Box) (transform_hlds__dead_proc_elim__do_dead_proc_analyze_3_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 7 */
  {
    ((MR_Box) (&transform_hlds__dead_proc_elim_scalar_common_4[1])),
    ((MR_Box) (transform_hlds__dead_proc_elim__dead_proc_initialize_class_methods_6_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 8 */
  {
    ((MR_Box) (&transform_hlds__dead_proc_elim_scalar_common_4[2])),
    ((MR_Box) (transform_hlds__dead_proc_elim__dead_proc_initialize_class_methods_6_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 9 */
  {
    ((MR_Box) (&transform_hlds__dead_proc_elim_scalar_common_7[0])),
    ((MR_Box) (transform_hlds__dead_proc_elim__dead_pred_elim_analyze_2_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 10 */
  {
    ((MR_Box) (&transform_hlds__dead_proc_elim_scalar_common_4[3])),
    ((MR_Box) (transform_hlds__dead_proc_elim__dead_pred_elim_2_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 11 */
  {
    ((MR_Box) (&transform_hlds__dead_proc_elim_scalar_common_7[1])),
    ((MR_Box) (transform_hlds__dead_proc_elim__dead_pred_elim_2_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 12 */
  {
    ((MR_Box) (&transform_hlds__dead_proc_elim_scalar_common_4[0])),
    ((MR_Box) (transform_hlds__dead_proc_elim__get_instance_pred_procs_5_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 13 */
  {
    ((MR_Box) (&transform_hlds__dead_proc_elim_scalar_common_4[0])),
    ((MR_Box) (transform_hlds__dead_proc_elim__get_class_pred_procs_5_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 14 */
  {
    ((MR_Box) (&transform_hlds__dead_proc_elim_scalar_common_7[2])),
    ((MR_Box) (transform_hlds__dead_proc_elim__pre_modecheck_examine_goal_expr_3_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 15 */
  {
    ((MR_Box) (&transform_hlds__dead_proc_elim_scalar_common_7[2])),
    ((MR_Box) (transform_hlds__dead_proc_elim__pre_modecheck_examine_goal_expr_3_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 16 */
  {
    ((MR_Box) (&transform_hlds__dead_proc_elim_scalar_common_7[2])),
    ((MR_Box) (transform_hlds__dead_proc_elim__pre_modecheck_examine_goal_expr_3_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 17 */
  {
    ((MR_Box) (&transform_hlds__dead_proc_elim_scalar_common_7[3])),
    ((MR_Box) (transform_hlds__dead_proc_elim__pre_modecheck_examine_goal_expr_3_p_0_4)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box transform_hlds__dead_proc_elim_scalar_common_3[5][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 1 */
  {
    (MR_Box) (((((MR_Unsigned) 0U << 2)) | (((MR_Unsigned) 0U << 1))))
  },
  /* row 2 */
  {
    (MR_Box) (((((MR_Unsigned) 0U << 2)) | (((((MR_Unsigned) 1U << 1)) | (MR_Unsigned) 1U))))
  },
  /* row 3 */
  {
    (MR_Box) (((((MR_Unsigned) 1U << 2)) | (((((MR_Unsigned) 1U << 1)) | (MR_Unsigned) 1U))))
  },
  /* row 4 */
  {
    (MR_Box) ((MR_Unsigned) 1U)
  },
};

static /* final */ const MR_Box transform_hlds__dead_proc_elim_scalar_common_4[4][8] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&transform_hlds__dead_proc_elim__queue__pti_queue_1__plain_transform_hlds__dead_proc_elim__type_ctor_info_entity_0)),
    ((MR_Box) (&transform_hlds__dead_proc_elim__queue__pti_queue_1__plain_transform_hlds__dead_proc_elim__type_ctor_info_entity_0)),
    ((MR_Box) (&transform_hlds__dead_proc_elim__tree234__pti_tree234_2__plain_transform_hlds__dead_proc_elim__type_ctor_info_entity_0__plain_transform_hlds__dead_proc_elim__type_ctor_info_maybe_needed_0)),
    ((MR_Box) (&transform_hlds__dead_proc_elim__tree234__pti_tree234_2__plain_transform_hlds__dead_proc_elim__type_ctor_info_entity_0__plain_transform_hlds__dead_proc_elim__type_ctor_info_maybe_needed_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_instance_defn_0)),
    ((MR_Box) (&transform_hlds__dead_proc_elim__queue__pti_queue_1__plain_transform_hlds__dead_proc_elim__type_ctor_info_entity_0)),
    ((MR_Box) (&transform_hlds__dead_proc_elim__queue__pti_queue_1__plain_transform_hlds__dead_proc_elim__type_ctor_info_entity_0)),
    ((MR_Box) (&transform_hlds__dead_proc_elim__tree234__pti_tree234_2__plain_transform_hlds__dead_proc_elim__type_ctor_info_entity_0__plain_transform_hlds__dead_proc_elim__type_ctor_info_maybe_needed_0)),
    ((MR_Box) (&transform_hlds__dead_proc_elim__tree234__pti_tree234_2__plain_transform_hlds__dead_proc_elim__type_ctor_info_entity_0__plain_transform_hlds__dead_proc_elim__type_ctor_info_maybe_needed_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_class_defn_0)),
    ((MR_Box) (&transform_hlds__dead_proc_elim__queue__pti_queue_1__plain_transform_hlds__dead_proc_elim__type_ctor_info_entity_0)),
    ((MR_Box) (&transform_hlds__dead_proc_elim__queue__pti_queue_1__plain_transform_hlds__dead_proc_elim__type_ctor_info_entity_0)),
    ((MR_Box) (&transform_hlds__dead_proc_elim__tree234__pti_tree234_2__plain_transform_hlds__dead_proc_elim__type_ctor_info_entity_0__plain_transform_hlds__dead_proc_elim__type_ctor_info_maybe_needed_0)),
    ((MR_Box) (&transform_hlds__dead_proc_elim__tree234__pti_tree234_2__plain_transform_hlds__dead_proc_elim__type_ctor_info_entity_0__plain_transform_hlds__dead_proc_elim__type_ctor_info_maybe_needed_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_entity_0)),
    ((MR_Box) (&transform_hlds__dead_proc_elim__queue__pti_queue_1__plain_hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&transform_hlds__dead_proc_elim__queue__pti_queue_1__plain_hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&transform_hlds__dead_proc_elim__set_tree234__pti_set_tree234_1__plain_hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&transform_hlds__dead_proc_elim__set_tree234__pti_set_tree234_1__plain_hlds__hlds_pred__type_ctor_info_pred_id_0))
  },
};

static /* final */ const MR_Box transform_hlds__dead_proc_elim_scalar_common_5[4][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_maybe_elim_opt_imported_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_proc_elim_info_0)),
    ((MR_Box) (&transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_proc_elim_info_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&transform_hlds__dead_proc_elim__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_hlds__hlds_data__type_ctor_info_hlds_type_defn_0)),
    ((MR_Box) (&transform_hlds__dead_proc_elim__set_tree234__pti_set_tree234_1__plain_hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&transform_hlds__dead_proc_elim__set_tree234__pti_set_tree234_1__plain_hlds__hlds_pred__type_ctor_info_pred_id_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&transform_hlds__dead_proc_elim__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&transform_hlds__dead_proc_elim__set_tree234__pti_set_tree234_1__plain_hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&transform_hlds__dead_proc_elim__set_tree234__pti_set_tree234_1__plain_hlds__hlds_pred__type_ctor_info_pred_id_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&transform_hlds__dead_proc_elim__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_hlds__hlds_pred__type_ctor_info_proc_info_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&transform_hlds__dead_proc_elim__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_hlds__hlds_pred__type_ctor_info_proc_info_0)),
    ((MR_Box) (&transform_hlds__dead_proc_elim__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_hlds__hlds_pred__type_ctor_info_proc_info_0))
  },
};

static /* final */ const MR_Box transform_hlds__dead_proc_elim_scalar_common_6[1][10] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&transform_hlds__dead_proc_elim__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_hlds__hlds_pred__type_ctor_info_pred_info_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&transform_hlds__dead_proc_elim__tree234__pti_tree234_2__plain_transform_hlds__dead_proc_elim__type_ctor_info_entity_0__plain_transform_hlds__dead_proc_elim__type_ctor_info_maybe_needed_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&transform_hlds__dead_proc_elim__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&transform_hlds__dead_proc_elim__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0))
  },
};

static /* final */ const MR_Box transform_hlds__dead_proc_elim_scalar_common_7[4][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_clause_0)),
    ((MR_Box) (&transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_pred_elim_info_0)),
    ((MR_Box) (&transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_pred_elim_info_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_pred_elim_info_0)),
    ((MR_Box) (&transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_pred_elim_info_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_pred_elim_info_0)),
    ((MR_Box) (&transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_pred_elim_info_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0)),
    ((MR_Box) (&transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_pred_elim_info_0)),
    ((MR_Box) (&transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_pred_elim_info_0))
  },
};

static /* final */ const MR_Box transform_hlds__dead_proc_elim_scalar_common_8[1][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&transform_hlds__dead_proc_elim__set_tree234__pti_set_tree234_1__plain_hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0))
  },
};

static /* final */ const MR_Box transform_hlds__dead_proc_elim_scalar_common_9[1][11] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 8)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&transform_hlds__dead_proc_elim__maybe__pti_maybe_1__plain_builtin__type_ctor_info_int_0)),
    ((MR_Box) (&transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_proc_elim_info_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&transform_hlds__dead_proc_elim__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_hlds__hlds_pred__type_ctor_info_proc_info_0)),
    ((MR_Box) (&transform_hlds__dead_proc_elim__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_hlds__hlds_pred__type_ctor_info_proc_info_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0))
  },
};

static /* final */ const MR_Box transform_hlds__dead_proc_elim_scalar_common_10[1][13] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 10)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&transform_hlds__dead_proc_elim__tree234__pti_tree234_2__plain_transform_hlds__dead_proc_elim__type_ctor_info_entity_0__plain_transform_hlds__dead_proc_elim__type_ctor_info_maybe_needed_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&transform_hlds__dead_proc_elim__list__pti_list_1__plain_builtin__type_ctor_info_int_0)),
    ((MR_Box) (&transform_hlds__dead_proc_elim__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_hlds__hlds_pred__type_ctor_info_proc_info_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&transform_hlds__dead_proc_elim__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&transform_hlds__dead_proc_elim__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0))
  },
};


static /* final */ const struct transform_hlds__dead_proc_elim__vector_common_type_11_0_s transform_hlds__dead_proc_elim_vector_common_11[12] = {
  /* row 0 */   {     (MR_Word) (MR_mkword(MR_mktag(1), &transform_hlds__dead_proc_elim_scalar_common_1[17])) },
  /* row 1 */   {     (MR_Word) (MR_mkword(MR_mktag(1), &transform_hlds__dead_proc_elim_scalar_common_1[18])) },
  /* row 2 */   {     (MR_Word) (MR_mkword(MR_mktag(1), &transform_hlds__dead_proc_elim_scalar_common_1[16])) },
  /* row 3 */   {     (MR_Word) (MR_mkword(MR_mktag(1), &transform_hlds__dead_proc_elim_scalar_common_1[16])) },
  /* row 4 */   {     (MR_Word) ((MR_Unsigned) 0U) },
  /* row 5 */   {     (MR_Word) (MR_mkword(MR_mktag(1), &transform_hlds__dead_proc_elim_scalar_common_1[8])) },
  /* row 6 */   {     (MR_Word) (MR_mkword(MR_mktag(1), &transform_hlds__dead_proc_elim_scalar_common_1[14])) },
  /* row 7 */   {     (MR_Word) (MR_mkword(MR_mktag(1), &transform_hlds__dead_proc_elim_scalar_common_1[14])) },
  /* row 8 */   {     (MR_Word) (MR_mkword(MR_mktag(1), &transform_hlds__dead_proc_elim_scalar_common_1[14])) },
  /* row 9 */   {     (MR_Word) (MR_mkword(MR_mktag(1), &transform_hlds__dead_proc_elim_scalar_common_1[14])) },
  /* row 10 */   {     (MR_Word) (MR_mkword(MR_mktag(1), &transform_hlds__dead_proc_elim_scalar_common_1[14])) },
  /* row 11 */   {     (MR_Word) (MR_mkword(MR_mktag(1), &transform_hlds__dead_proc_elim_scalar_common_1[14])) },
};


#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"



static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__dead_proc_elim__queue__pti_queue_1__plain_transform_hlds__dead_proc_elim__type_ctor_info_entity_0 = {
  &mercury__queue__queue__type_ctor_info_queue_1,
  {
    (MR_PseudoTypeInfo) (&transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_entity_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__dead_proc_elim__tree234__pti_tree234_2__plain_transform_hlds__dead_proc_elim__type_ctor_info_entity_0__plain_transform_hlds__dead_proc_elim__type_ctor_info_maybe_needed_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_entity_0),
    (MR_PseudoTypeInfo) (&transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_maybe_needed_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__dead_proc_elim__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_hlds__hlds_pred__type_ctor_info_pred_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0),
    (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__dead_proc_elim__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__dead_proc_elim__queue__pti_queue_1__plain_hlds__hlds_pred__type_ctor_info_pred_id_0 = {
  &mercury__queue__queue__type_ctor_info_queue_1,
  {
    (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__dead_proc_elim__set_tree234__pti_set_tree234_1__plain_hlds__hlds_pred__type_ctor_info_pred_id_0 = {
  &mercury__set_tree234__set_tree234__type_ctor_info_set_tree234_1,
  {
    (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__dead_proc_elim__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_hlds__hlds_data__type_ctor_info_hlds_type_defn_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0),
    (MR_PseudoTypeInfo) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_type_defn_0)
  }
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__dead_proc_elim__list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_id_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__dead_proc_elim__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_id_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0),
    (MR_PseudoTypeInfo) (&transform_hlds__dead_proc_elim__list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_id_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__dead_proc_elim__maybe__pti_maybe_1__plain_builtin__type_ctor_info_int_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__dead_proc_elim__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_hlds__hlds_pred__type_ctor_info_proc_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
    (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__dead_proc_elim__list__pti_list_1__plain_builtin__type_ctor_info_int_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
  }
};

static const MR_PseudoTypeInfo transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__field_types_analyze_links_0_0[3] = {
  (MR_PseudoTypeInfo) (&transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_maybe_analyze_link_deleted_calls_0),
  (MR_PseudoTypeInfo) (&transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_maybe_analyze_link_type_ctor_0),
  (MR_PseudoTypeInfo) (&transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_maybe_analyze_link_const_struct_0)
};

static const MR_ConstString transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__field_names_analyze_links_0_0[3] = {
  (MR_String) "al_deleted_calls",
  (MR_String) "al_type_ctor",
  (MR_String) "al_const_struct"
};

static const MR_DuArgLocn transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__field_locns_analyze_links_0_0[3] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 2,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 0,
    (MR_Integer) 1,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 1
  }
};

static const MR_DuFunctorDesc transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_functor_desc_analyze_links_0_0 = {
  (MR_String) "analyze_links",
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__field_types_analyze_links_0_0,
  transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__field_names_analyze_links_0_0,
  transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__field_locns_analyze_links_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_stag_ordered_analyze_links_0_0[1] = {
  &transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_functor_desc_analyze_links_0_0
};

static const MR_DuPtagLayout transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_ptag_ordered_analyze_links_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_stag_ordered_analyze_links_0_0,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_name_ordered_analyze_links_0[1] = {
  &transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_functor_desc_analyze_links_0_0
};

static const MR_Integer transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__functor_number_map_analyze_links_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_analyze_links_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__dead_proc_elim____Unify____analyze_links_0_0_10001)),
  ((MR_Box) (transform_hlds__dead_proc_elim____Compare____analyze_links_0_0_10001)),
  (MR_String) "transform_hlds.dead_proc_elim",
  (MR_String) "analyze_links",
  {     transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_name_ordered_analyze_links_0 },
  {     transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_ptag_ordered_analyze_links_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__functor_number_map_analyze_links_0
};

static const MR_PseudoTypeInfo transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__field_types_entity_0_0[2] = {
  (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
};

static const MR_DuFunctorDesc transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_functor_desc_entity_0_0 = {
  (MR_String) "entity_proc",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__field_types_entity_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__field_types_entity_0_1[2] = {
  (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
};

static const MR_DuFunctorDesc transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_functor_desc_entity_0_1 = {
  (MR_String) "entity_table_struct",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__field_types_entity_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__field_types_entity_0_2[3] = {
  (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
};

static const MR_DuFunctorDesc transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_functor_desc_entity_0_2 = {
  (MR_String) "entity_type_ctor",
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(2),
  (MR_Integer) -1,
  INT32_C(2),
  transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__field_types_entity_0_2,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__field_types_entity_0_3[1] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
};

static const MR_DuFunctorDesc transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_functor_desc_entity_0_3 = {
  (MR_String) "entity_const_struct",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 0,
  INT32_C(3),
  transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__field_types_entity_0_3,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__field_types_entity_0_4[3] = {
  (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mutable_pred_kind_0)
};

static const MR_DuArgLocn transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__field_locns_entity_0_4[3] = {
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
    (MR_Integer) 4
  }
};

static const MR_DuFunctorDesc transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_functor_desc_entity_0_4 = {
  (MR_String) "entity_mutable",
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 1,
  INT32_C(4),
  transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__field_types_entity_0_4,
  NULL,
  transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__field_locns_entity_0_4,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_stag_ordered_entity_0_0[1] = {
  &transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_functor_desc_entity_0_0
};

static const MR_DuFunctorDescPtr transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_stag_ordered_entity_0_1[1] = {
  &transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_functor_desc_entity_0_1
};

static const MR_DuFunctorDescPtr transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_stag_ordered_entity_0_2[1] = {
  &transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_functor_desc_entity_0_2
};

static const MR_DuFunctorDescPtr transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_stag_ordered_entity_0_3[2] = {
  &transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_functor_desc_entity_0_3,
  &transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_functor_desc_entity_0_4
};

static const MR_DuPtagLayout transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_ptag_ordered_entity_0[4] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_stag_ordered_entity_0_0,
    INT8_C(-1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_stag_ordered_entity_0_1,
    INT8_C(-1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_stag_ordered_entity_0_2,
    INT8_C(-1)
  },
  {
    UINT32_C(2),
    MR_SECTAG_REMOTE_FULL_WORD,
    transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_stag_ordered_entity_0_3,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_name_ordered_entity_0[5] = {
  &transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_functor_desc_entity_0_3,
  &transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_functor_desc_entity_0_4,
  &transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_functor_desc_entity_0_0,
  &transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_functor_desc_entity_0_1,
  &transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_functor_desc_entity_0_2
};

static const MR_Integer transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__functor_number_map_entity_0[5] = {
  (MR_Integer) 2,
  (MR_Integer) 3,
  (MR_Integer) 4,
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_entity_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(4),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__dead_proc_elim____Unify____entity_0_0_10001)),
  ((MR_Box) (transform_hlds__dead_proc_elim____Compare____entity_0_0_10001)),
  (MR_String) "transform_hlds.dead_proc_elim",
  (MR_String) "entity",
  {     transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_name_ordered_entity_0 },
  {     transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_ptag_ordered_entity_0 },
  (MR_Integer) 5,
  UINT16_C(4),
  transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__functor_number_map_entity_0
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__dead_proc_elim__queue__ti_queue_1transform_hlds__dead_proc_elim__type_ctor_info_entity_0 = {
  &mercury__queue__queue__type_ctor_info_queue_1,
  {
    (MR_TypeInfo) (&transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_entity_0)
  }
};

const MR_TypeCtorInfo_Struct transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_entity_queue_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (transform_hlds__dead_proc_elim____Unify____entity_queue_0_0_10001)),
  ((MR_Box) (transform_hlds__dead_proc_elim____Compare____entity_queue_0_0_10001)),
  (MR_String) "transform_hlds.dead_proc_elim",
  (MR_String) "entity_queue",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&transform_hlds__dead_proc_elim__queue__ti_queue_1transform_hlds__dead_proc_elim__type_ctor_info_entity_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__dead_proc_elim__set_tree234__ti_set_tree234_1transform_hlds__dead_proc_elim__type_ctor_info_entity_0 = {
  &mercury__set_tree234__set_tree234__type_ctor_info_set_tree234_1,
  {
    (MR_TypeInfo) (&transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_entity_0)
  }
};

const MR_TypeCtorInfo_Struct transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_examined_set_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (transform_hlds__dead_proc_elim____Unify____examined_set_0_0_10001)),
  ((MR_Box) (transform_hlds__dead_proc_elim____Compare____examined_set_0_0_10001)),
  (MR_String) "transform_hlds.dead_proc_elim",
  (MR_String) "examined_set",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&transform_hlds__dead_proc_elim__set_tree234__ti_set_tree234_1transform_hlds__dead_proc_elim__type_ctor_info_entity_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL
};

static const MR_EnumFunctorDesc transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__enum_functor_desc_maybe_analyze_link_const_struct_0_0 = {
  (MR_String) "do_not_analyze_link_const_struct",
  INT32_C(0)
};

static const MR_EnumFunctorDesc transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__enum_functor_desc_maybe_analyze_link_const_struct_0_1 = {
  (MR_String) "analyze_link_const_struct",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__enum_value_ordered_maybe_analyze_link_const_struct_0[2] = {
  &transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__enum_functor_desc_maybe_analyze_link_const_struct_0_0,
  &transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__enum_functor_desc_maybe_analyze_link_const_struct_0_1
};

static const MR_EnumFunctorDescPtr transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__enum_name_ordered_maybe_analyze_link_const_struct_0[2] = {
  &transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__enum_functor_desc_maybe_analyze_link_const_struct_0_1,
  &transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__enum_functor_desc_maybe_analyze_link_const_struct_0_0
};

static const MR_Integer transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__functor_number_map_maybe_analyze_link_const_struct_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_maybe_analyze_link_const_struct_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (transform_hlds__dead_proc_elim____Unify____maybe_analyze_link_const_struct_0_0_10001)),
  ((MR_Box) (transform_hlds__dead_proc_elim____Compare____maybe_analyze_link_const_struct_0_0_10001)),
  (MR_String) "transform_hlds.dead_proc_elim",
  (MR_String) "maybe_analyze_link_const_struct",
  {     transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__enum_name_ordered_maybe_analyze_link_const_struct_0 },
  {     transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__enum_value_ordered_maybe_analyze_link_const_struct_0 },
  (MR_Integer) 2,
  UINT16_C(4),
  transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__functor_number_map_maybe_analyze_link_const_struct_0
};

static const MR_EnumFunctorDesc transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__enum_functor_desc_maybe_analyze_link_deleted_calls_0_0 = {
  (MR_String) "do_not_analyze_link_deleted_calls",
  INT32_C(0)
};

static const MR_EnumFunctorDesc transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__enum_functor_desc_maybe_analyze_link_deleted_calls_0_1 = {
  (MR_String) "analyze_link_deleted_calls",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__enum_value_ordered_maybe_analyze_link_deleted_calls_0[2] = {
  &transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__enum_functor_desc_maybe_analyze_link_deleted_calls_0_0,
  &transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__enum_functor_desc_maybe_analyze_link_deleted_calls_0_1
};

static const MR_EnumFunctorDescPtr transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__enum_name_ordered_maybe_analyze_link_deleted_calls_0[2] = {
  &transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__enum_functor_desc_maybe_analyze_link_deleted_calls_0_1,
  &transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__enum_functor_desc_maybe_analyze_link_deleted_calls_0_0
};

static const MR_Integer transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__functor_number_map_maybe_analyze_link_deleted_calls_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_maybe_analyze_link_deleted_calls_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (transform_hlds__dead_proc_elim____Unify____maybe_analyze_link_deleted_calls_0_0_10001)),
  ((MR_Box) (transform_hlds__dead_proc_elim____Compare____maybe_analyze_link_deleted_calls_0_0_10001)),
  (MR_String) "transform_hlds.dead_proc_elim",
  (MR_String) "maybe_analyze_link_deleted_calls",
  {     transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__enum_name_ordered_maybe_analyze_link_deleted_calls_0 },
  {     transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__enum_value_ordered_maybe_analyze_link_deleted_calls_0 },
  (MR_Integer) 2,
  UINT16_C(4),
  transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__functor_number_map_maybe_analyze_link_deleted_calls_0
};

static const MR_EnumFunctorDesc transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__enum_functor_desc_maybe_analyze_link_type_ctor_0_0 = {
  (MR_String) "do_not_analyze_link_type_ctor",
  INT32_C(0)
};

static const MR_EnumFunctorDesc transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__enum_functor_desc_maybe_analyze_link_type_ctor_0_1 = {
  (MR_String) "analyze_link_type_ctor",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__enum_value_ordered_maybe_analyze_link_type_ctor_0[2] = {
  &transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__enum_functor_desc_maybe_analyze_link_type_ctor_0_0,
  &transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__enum_functor_desc_maybe_analyze_link_type_ctor_0_1
};

static const MR_EnumFunctorDescPtr transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__enum_name_ordered_maybe_analyze_link_type_ctor_0[2] = {
  &transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__enum_functor_desc_maybe_analyze_link_type_ctor_0_1,
  &transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__enum_functor_desc_maybe_analyze_link_type_ctor_0_0
};

static const MR_Integer transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__functor_number_map_maybe_analyze_link_type_ctor_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_maybe_analyze_link_type_ctor_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (transform_hlds__dead_proc_elim____Unify____maybe_analyze_link_type_ctor_0_0_10001)),
  ((MR_Box) (transform_hlds__dead_proc_elim____Compare____maybe_analyze_link_type_ctor_0_0_10001)),
  (MR_String) "transform_hlds.dead_proc_elim",
  (MR_String) "maybe_analyze_link_type_ctor",
  {     transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__enum_name_ordered_maybe_analyze_link_type_ctor_0 },
  {     transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__enum_value_ordered_maybe_analyze_link_type_ctor_0 },
  (MR_Integer) 2,
  UINT16_C(4),
  transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__functor_number_map_maybe_analyze_link_type_ctor_0
};

static const MR_EnumFunctorDesc transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__enum_functor_desc_maybe_elim_opt_imported_0_0 = {
  (MR_String) "elim_opt_imported",
  INT32_C(0)
};

static const MR_EnumFunctorDesc transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__enum_functor_desc_maybe_elim_opt_imported_0_1 = {
  (MR_String) "do_not_elim_opt_imported",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__enum_value_ordered_maybe_elim_opt_imported_0[2] = {
  &transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__enum_functor_desc_maybe_elim_opt_imported_0_0,
  &transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__enum_functor_desc_maybe_elim_opt_imported_0_1
};

static const MR_EnumFunctorDescPtr transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__enum_name_ordered_maybe_elim_opt_imported_0[2] = {
  &transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__enum_functor_desc_maybe_elim_opt_imported_0_1,
  &transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__enum_functor_desc_maybe_elim_opt_imported_0_0
};

static const MR_Integer transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__functor_number_map_maybe_elim_opt_imported_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_maybe_elim_opt_imported_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (transform_hlds__dead_proc_elim____Unify____maybe_elim_opt_imported_0_0_10001)),
  ((MR_Box) (transform_hlds__dead_proc_elim____Compare____maybe_elim_opt_imported_0_0_10001)),
  (MR_String) "transform_hlds.dead_proc_elim",
  (MR_String) "maybe_elim_opt_imported",
  {     transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__enum_name_ordered_maybe_elim_opt_imported_0 },
  {     transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__enum_value_ordered_maybe_elim_opt_imported_0 },
  (MR_Integer) 2,
  UINT16_C(4),
  transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__functor_number_map_maybe_elim_opt_imported_0
};

static const MR_DuFunctorDesc transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_functor_desc_maybe_needed_0_0 = {
  (MR_String) "not_eliminable",
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

static const MR_PseudoTypeInfo transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__field_types_maybe_needed_0_1[1] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
};

static const MR_ConstString transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__field_names_maybe_needed_0_1[1] = {
  (MR_String) "num_references"
};

static const MR_DuFunctorDesc transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_functor_desc_maybe_needed_0_1 = {
  (MR_String) "maybe_eliminable",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__field_types_maybe_needed_0_1,
  transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__field_names_maybe_needed_0_1,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_stag_ordered_maybe_needed_0_0[1] = {
  &transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_functor_desc_maybe_needed_0_0
};

static const MR_DuFunctorDescPtr transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_stag_ordered_maybe_needed_0_1[1] = {
  &transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_functor_desc_maybe_needed_0_1
};

static const MR_DuPtagLayout transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_ptag_ordered_maybe_needed_0[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_stag_ordered_maybe_needed_0_0,
    INT8_C(-1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_stag_ordered_maybe_needed_0_1,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_name_ordered_maybe_needed_0[2] = {
  &transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_functor_desc_maybe_needed_0_1,
  &transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_functor_desc_maybe_needed_0_0
};

static const MR_Integer transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__functor_number_map_maybe_needed_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_maybe_needed_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__dead_proc_elim____Unify____maybe_needed_0_0_10001)),
  ((MR_Box) (transform_hlds__dead_proc_elim____Compare____maybe_needed_0_0_10001)),
  (MR_String) "transform_hlds.dead_proc_elim",
  (MR_String) "maybe_needed",
  {     transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_name_ordered_maybe_needed_0 },
  {     transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_ptag_ordered_maybe_needed_0 },
  (MR_Integer) 2,
  UINT16_C(4),
  transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__functor_number_map_maybe_needed_0
};

static const MR_FA_TypeInfo_Struct2 transform_hlds__dead_proc_elim__tree234__ti_tree234_2transform_hlds__dead_proc_elim__type_ctor_info_entity_0transform_hlds__dead_proc_elim__type_ctor_info_maybe_needed_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_entity_0),
    (MR_TypeInfo) (&transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_maybe_needed_0)
  }
};

const MR_TypeCtorInfo_Struct transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_needed_map_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (transform_hlds__dead_proc_elim____Unify____needed_map_0_0_10001)),
  ((MR_Box) (transform_hlds__dead_proc_elim____Compare____needed_map_0_0_10001)),
  (MR_String) "transform_hlds.dead_proc_elim",
  (MR_String) "needed_map",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&transform_hlds__dead_proc_elim__tree234__ti_tree234_2transform_hlds__dead_proc_elim__type_ctor_info_entity_0transform_hlds__dead_proc_elim__type_ctor_info_maybe_needed_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__dead_proc_elim__queue__ti_queue_1hlds__hlds_pred__type_ctor_info_pred_id_0 = {
  &mercury__queue__queue__type_ctor_info_queue_1,
  {
    (MR_TypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)
  }
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__dead_proc_elim__set_tree234__ti_set_tree234_1hlds__hlds_pred__type_ctor_info_pred_id_0 = {
  &mercury__set_tree234__set_tree234__type_ctor_info_set_tree234_1,
  {
    (MR_TypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)
  }
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__dead_proc_elim__set_tree234__ti_set_tree234_1mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &mercury__set_tree234__set_tree234__type_ctor_info_set_tree234_1,
  {
    (MR_TypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)
  }
};

static const MR_PseudoTypeInfo transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__field_types_pred_elim_info_0_0[5] = {
  (MR_PseudoTypeInfo) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0),
  (MR_PseudoTypeInfo) (&transform_hlds__dead_proc_elim__queue__ti_queue_1hlds__hlds_pred__type_ctor_info_pred_id_0),
  (MR_PseudoTypeInfo) (&transform_hlds__dead_proc_elim__set_tree234__ti_set_tree234_1hlds__hlds_pred__type_ctor_info_pred_id_0),
  (MR_PseudoTypeInfo) (&transform_hlds__dead_proc_elim__set_tree234__ti_set_tree234_1hlds__hlds_pred__type_ctor_info_pred_id_0),
  (MR_PseudoTypeInfo) (&transform_hlds__dead_proc_elim__set_tree234__ti_set_tree234_1mdbcomp__sym_name__type_ctor_info_sym_name_0)
};

static const MR_ConstString transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__field_names_pred_elim_info_0_0[5] = {
  (MR_String) "pred_elim_module_info",
  (MR_String) "pred_elim_queue",
  (MR_String) "pred_elim_examined",
  (MR_String) "pred_elim_needed_ids",
  (MR_String) "pred_elim_needed_named"
};

static const MR_DuFunctorDesc transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_functor_desc_pred_elim_info_0_0 = {
  (MR_String) "pred_elim_info",
  INT16_C(5),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__field_types_pred_elim_info_0_0,
  transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__field_names_pred_elim_info_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_stag_ordered_pred_elim_info_0_0[1] = {
  &transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_functor_desc_pred_elim_info_0_0
};

static const MR_DuPtagLayout transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_ptag_ordered_pred_elim_info_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_stag_ordered_pred_elim_info_0_0,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_name_ordered_pred_elim_info_0[1] = {
  &transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_functor_desc_pred_elim_info_0_0
};

static const MR_Integer transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__functor_number_map_pred_elim_info_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_pred_elim_info_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__dead_proc_elim____Unify____pred_elim_info_0_0_10001)),
  ((MR_Box) (transform_hlds__dead_proc_elim____Compare____pred_elim_info_0_0_10001)),
  (MR_String) "transform_hlds.dead_proc_elim",
  (MR_String) "pred_elim_info",
  {     transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_name_ordered_pred_elim_info_0 },
  {     transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_ptag_ordered_pred_elim_info_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__functor_number_map_pred_elim_info_0
};

static const MR_FA_TypeInfo_Struct2 transform_hlds__dead_proc_elim__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_id_0hlds__hlds_pred__type_ctor_info_pred_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0),
    (MR_TypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0)
  }
};

static const MR_PseudoTypeInfo transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__field_types_proc_elim_info_0_0[4] = {
  (MR_PseudoTypeInfo) (&transform_hlds__dead_proc_elim__tree234__ti_tree234_2transform_hlds__dead_proc_elim__type_ctor_info_entity_0transform_hlds__dead_proc_elim__type_ctor_info_maybe_needed_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0),
  (MR_PseudoTypeInfo) (&transform_hlds__dead_proc_elim__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_id_0hlds__hlds_pred__type_ctor_info_pred_info_0),
  (MR_PseudoTypeInfo) (&mercury__bool__bool__type_ctor_info_bool_0)
};

static const MR_ConstString transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__field_names_proc_elim_info_0_0[4] = {
  (MR_String) "proc_elim_needed_map",
  (MR_String) "proc_elim_module_info",
  (MR_String) "proc_elim_pred_table",
  (MR_String) "proc_elim_changed"
};

static const MR_DuArgLocn transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__field_locns_proc_elim_info_0_0[4] = {
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
    (MR_Integer) 1
  }
};

static const MR_DuFunctorDesc transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_functor_desc_proc_elim_info_0_0 = {
  (MR_String) "proc_elim_info",
  INT16_C(4),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__field_types_proc_elim_info_0_0,
  transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__field_names_proc_elim_info_0_0,
  transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__field_locns_proc_elim_info_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_stag_ordered_proc_elim_info_0_0[1] = {
  &transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_functor_desc_proc_elim_info_0_0
};

static const MR_DuPtagLayout transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_ptag_ordered_proc_elim_info_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_stag_ordered_proc_elim_info_0_0,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_name_ordered_proc_elim_info_0[1] = {
  &transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_functor_desc_proc_elim_info_0_0
};

static const MR_Integer transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__functor_number_map_proc_elim_info_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_proc_elim_info_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__dead_proc_elim____Unify____proc_elim_info_0_0_10001)),
  ((MR_Box) (transform_hlds__dead_proc_elim____Compare____proc_elim_info_0_0_10001)),
  (MR_String) "transform_hlds.dead_proc_elim",
  (MR_String) "proc_elim_info",
  {     transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_name_ordered_proc_elim_info_0 },
  {     transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__du_ptag_ordered_proc_elim_info_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__functor_number_map_proc_elim_info_0
};

static void MR_CALL 
transform_hlds__dead_proc_elim__IntroducedFrom__pred__dead_proc_eliminate_pred__1011__1_4_p_0(
  MR_Word ProcTable0_56,
  MR_Integer LambdaHeadVar__1_40,
  MR_Word LambdaHeadVar__2_41,
  MR_Word * LambdaHeadVar__3_42)
{
  {
    MR_Word ProcInfo0_26;
    MR_Word ProcInfo_27;
    MR_Word Var_43;
    MR_Box conv0_ProcInfo0_26;

    mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), ProcTable0_56, ((MR_Box) (LambdaHeadVar__1_40)), &conv0_ProcInfo0_26);
    ProcInfo0_26 = ((MR_Word) (conv0_ProcInfo0_26));
    Var_43 = hlds__make_goal__true_goal_0_f_0();
    hlds__hlds_pred__proc_info_set_goal_3_p_0(Var_43, ProcInfo0_26, &ProcInfo_27);
    mercury__map__det_update_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), ((MR_Box) (LambdaHeadVar__1_40)), ((MR_Box) (ProcInfo_27)), LambdaHeadVar__2_41, LambdaHeadVar__3_42);
  }
}

static MR_bool MR_CALL 
transform_hlds__dead_proc_elim__IntroducedFrom__pred__dead_pred_elim__1355__1_2_p_0(
  MR_Word NeededPreds_41,
  MR_Word HeadVar__2_88)
{
  {
    MR_bool succeeded;

    succeeded = mercury__set_tree234__contains_2_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), NeededPreds_41, ((MR_Box) (HeadVar__2_88)));
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__dead_proc_elim__IntroducedFrom__pred__dead_pred_elim__1343__1_4_p_0(
  MR_Word SpecMap0_34,
  MR_Word LambdaHeadVar__1_55,
  MR_Word LambdaHeadVar__2_56,
  MR_Word * LambdaHeadVar__3_57)
{
  {
    MR_bool succeeded;
    MR_Word NewNeededPreds_40;
    MR_Box conv0_NewNeededPreds_40;

    succeeded = mercury__map__search_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&transform_hlds__dead_proc_elim_scalar_common_1[2]), SpecMap0_34, ((MR_Box) (LambdaHeadVar__1_55)), &conv0_NewNeededPreds_40);
    if (succeeded)
    {
      NewNeededPreds_40 = ((MR_Word) (conv0_NewNeededPreds_40));
      succeeded = MR_TRUE;
    }
    if (succeeded)
      mercury__set_tree234__insert_list_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), NewNeededPreds_40, LambdaHeadVar__2_56, LambdaHeadVar__3_57);
    else
      *LambdaHeadVar__3_57 = LambdaHeadVar__2_56;
  }
}

static void MR_CALL 
transform_hlds__dead_proc_elim____Compare____proc_elim_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_15 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_16 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_15 == CastY_16);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
      MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
      MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2))));
      MR_Word ArgX4_13 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3))) & (MR_Integer) 1);
      MR_Word ArgY4_14 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 3))) & (MR_Integer) 1);
      MR_Word SubResult1_6;

      mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__dead_proc_elim_scalar_common_2[1]), &SubResult1_6, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
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

          mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__dead_proc_elim_scalar_common_2[3]), &SubResult3_12, ((MR_Box) (ArgX3_10)), ((MR_Box) (ArgY3_11)));
          succeeded = (SubResult3_12 != (MR_Integer) 0);
          if (succeeded)
            *HeadVar__1_1 = SubResult3_12;
          else
          {
            MR_Integer Var_21 = (MR_Integer) (ArgX4_13);
            MR_Integer Var_22 = (MR_Integer) (ArgY4_14);

            succeeded = (Var_21 < Var_22);
            if (succeeded)
              *HeadVar__1_1 = (MR_Integer) 1;
            else
            {
              succeeded = (Var_21 > Var_22);
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

static MR_bool MR_CALL 
transform_hlds__dead_proc_elim____Unify____proc_elim_info_0_0(
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
    {
      MR_Word TypeInfo_15_15;
      MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))));
      MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
      MR_Word ArgX4_9 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 3))) & (MR_Integer) 1);
      MR_Word ArgY4_10 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3))) & (MR_Integer) 1);

      succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&transform_hlds__dead_proc_elim_scalar_common_2[1]), ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
      if (succeeded)
      {
        succeeded = hlds__hlds_module____Unify____module_info_0_0(ArgX2_5, ArgY2_6);
        if (succeeded)
        {
          TypeInfo_15_15 = (MR_Word) (&transform_hlds__dead_proc_elim_scalar_common_2[3]);
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_15_15, ((MR_Box) (ArgX3_7)), ((MR_Box) (ArgY3_8)));
          if (succeeded)
            succeeded = (ArgX4_9 == ArgY4_10);
        }
      }
    }
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__dead_proc_elim____Compare____pred_elim_info_0_0(
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
    {
      MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
      MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
      MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2))));
      MR_Word ArgX4_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3))));
      MR_Word ArgY4_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 3))));
      MR_Word ArgX5_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4))));
      MR_Word ArgY5_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 4))));
      MR_Word SubResult1_6;

      hlds__hlds_module____Compare____module_info_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
      succeeded = (SubResult1_6 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult1_6;
      else
      {
        MR_Word SubResult2_9;

        mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__dead_proc_elim_scalar_common_1[0]), &SubResult2_9, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
        succeeded = (SubResult2_9 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult2_9;
        else
        {
          MR_Word SubResult3_12;

          mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__dead_proc_elim_scalar_common_1[1]), &SubResult3_12, ((MR_Box) (ArgX3_10)), ((MR_Box) (ArgY3_11)));
          succeeded = (SubResult3_12 != (MR_Integer) 0);
          if (succeeded)
            *HeadVar__1_1 = SubResult3_12;
          else
          {
            MR_Word SubResult4_15;

            mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__dead_proc_elim_scalar_common_1[1]), &SubResult4_15, ((MR_Box) (ArgX4_13)), ((MR_Box) (ArgY4_14)));
            succeeded = (SubResult4_15 != (MR_Integer) 0);
            if (succeeded)
              *HeadVar__1_1 = SubResult4_15;
            else
              mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__dead_proc_elim_scalar_common_1[7]), HeadVar__1_1, ((MR_Box) (ArgX5_16)), ((MR_Box) (ArgY5_17)));
          }
        }
      }
    }
  }
}

static MR_bool MR_CALL 
transform_hlds__dead_proc_elim____Unify____pred_elim_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_13 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_14 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_13 == CastY_14);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Word TypeInfo_16_16;
      MR_Word TypeInfo_17_17;
      MR_Word TypeInfo_18_18;
      MR_Word TypeInfo_19_19;
      MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))));
      MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
      MR_Word ArgX4_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 3))));
      MR_Word ArgY4_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3))));
      MR_Word ArgX5_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 4))));
      MR_Word ArgY5_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4))));

      succeeded = hlds__hlds_module____Unify____module_info_0_0(ArgX1_3, ArgY1_4);
      if (succeeded)
      {
        TypeInfo_16_16 = (MR_Word) (&transform_hlds__dead_proc_elim_scalar_common_1[0]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_16_16, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
        if (succeeded)
        {
          TypeInfo_17_17 = (MR_Word) (&transform_hlds__dead_proc_elim_scalar_common_1[1]);
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_17_17, ((MR_Box) (ArgX3_7)), ((MR_Box) (ArgY3_8)));
          if (succeeded)
          {
            TypeInfo_18_18 = (MR_Word) (&transform_hlds__dead_proc_elim_scalar_common_1[1]);
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_18_18, ((MR_Box) (ArgX4_9)), ((MR_Box) (ArgY4_10)));
            if (succeeded)
            {
              TypeInfo_19_19 = (MR_Word) (&transform_hlds__dead_proc_elim_scalar_common_1[7]);
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_19_19, ((MR_Box) (ArgX5_11)), ((MR_Box) (ArgY5_12)));
            }
          }
        }
      }
    }
    return succeeded;
  }
}

void MR_CALL 
transform_hlds__dead_proc_elim____Compare____needed_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__dead_proc_elim_scalar_common_2[1]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

MR_bool MR_CALL 
transform_hlds__dead_proc_elim____Unify____needed_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&transform_hlds__dead_proc_elim_scalar_common_2[1]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
    return succeeded;
  }
}

void MR_CALL 
transform_hlds__dead_proc_elim____Compare____maybe_needed_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_8 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_9 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_8 == CastY_9);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
        *HeadVar__1_1 = (MR_Integer) 0;
      else
        *HeadVar__1_1 = (MR_Integer) 1;
    else
    {
      MR_Integer Var_11 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));

      if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
        *HeadVar__1_1 = (MR_Integer) 2;
      else
      {
        MR_Integer ArgY1_7 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));

        succeeded = (Var_11 < ArgY1_7);
        if (succeeded)
          *HeadVar__1_1 = (MR_Integer) 1;
        else
        {
          succeeded = (Var_11 > ArgY1_7);
          if (succeeded)
            *HeadVar__1_1 = (MR_Integer) 2;
          else
            *HeadVar__1_1 = (MR_Integer) 0;
        }
      }
    }
  }
}

MR_bool MR_CALL 
transform_hlds__dead_proc_elim____Unify____maybe_needed_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
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
      MR_Integer CastX_3 = (MR_Integer) (HeadVar__1_1);
      MR_Integer CastY_4 = (MR_Integer) (HeadVar__2_2);

      succeeded = (CastY_4 == CastX_3);
    }
    else
    {
      MR_Integer ArgX1_5 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Integer ArgY1_6;

      succeeded = (HeadVar__2_2 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        ArgY1_6 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
        succeeded = (ArgX1_5 == ArgY1_6);
      }
    }
    return succeeded;
  }
}

void MR_CALL 
transform_hlds__dead_proc_elim____Compare____maybe_elim_opt_imported_0_0(
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

MR_bool MR_CALL 
transform_hlds__dead_proc_elim____Unify____maybe_elim_opt_imported_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__dead_proc_elim____Compare____maybe_analyze_link_type_ctor_0_0(
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
transform_hlds__dead_proc_elim____Unify____maybe_analyze_link_type_ctor_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__dead_proc_elim____Compare____maybe_analyze_link_deleted_calls_0_0(
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
transform_hlds__dead_proc_elim____Unify____maybe_analyze_link_deleted_calls_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__dead_proc_elim____Compare____maybe_analyze_link_const_struct_0_0(
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
transform_hlds__dead_proc_elim____Unify____maybe_analyze_link_const_struct_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__dead_proc_elim____Compare____examined_set_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__dead_proc_elim_scalar_common_1[6]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

static MR_bool MR_CALL 
transform_hlds__dead_proc_elim____Unify____examined_set_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&transform_hlds__dead_proc_elim_scalar_common_1[6]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__dead_proc_elim____Compare____entity_queue_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__dead_proc_elim_scalar_common_1[4]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

static MR_bool MR_CALL 
transform_hlds__dead_proc_elim____Unify____entity_queue_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&transform_hlds__dead_proc_elim_scalar_common_1[4]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
    return succeeded;
  }
}

void MR_CALL 
transform_hlds__dead_proc_elim____Compare____entity_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_120 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_121 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_120 == CastY_121);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
      switch (MR_tag((MR_Word) HeadVar__2_2)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Integer Var_137 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
            MR_Word Var_138 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));

            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
                  MR_Integer ArgY2_8 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
                  MR_Word SubResult1_6;

                  hlds__hlds_pred____Compare____pred_id_0_0(&SubResult1_6, Var_138, ArgY1_5);
                  succeeded = (SubResult1_6 != (MR_Integer) 0);
                  if (succeeded)
                    *HeadVar__1_1 = SubResult1_6;
                  else
                  {
                    succeeded = (Var_137 < ArgY2_8);
                    if (succeeded)
                      *HeadVar__1_1 = (MR_Integer) 1;
                    else
                    {
                      succeeded = (Var_137 > ArgY2_8);
                      if (succeeded)
                        *HeadVar__1_1 = (MR_Integer) 2;
                      else
                        *HeadVar__1_1 = (MR_Integer) 0;
                    }
                  }
                }
                break;
              case (MR_Integer) 1:
                *HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 2:
                *HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0))))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 1:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Integer Var_139 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
            MR_Word Var_140 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));

            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 1:
                {
                  MR_Word ArgY1_31 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
                  MR_Integer ArgY2_34 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
                  MR_Word SubResult1_32;

                  hlds__hlds_pred____Compare____pred_id_0_0(&SubResult1_32, Var_140, ArgY1_31);
                  succeeded = (SubResult1_32 != (MR_Integer) 0);
                  if (succeeded)
                    *HeadVar__1_1 = SubResult1_32;
                  else
                  {
                    succeeded = (Var_139 < ArgY2_34);
                    if (succeeded)
                      *HeadVar__1_1 = (MR_Integer) 1;
                    else
                    {
                      succeeded = (Var_139 > ArgY2_34);
                      if (succeeded)
                        *HeadVar__1_1 = (MR_Integer) 2;
                      else
                        *HeadVar__1_1 = (MR_Integer) 0;
                    }
                  }
                }
                break;
              case (MR_Integer) 2:
                *HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0))))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 1:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Integer Var_141 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 2))));
            MR_String Var_142 = ((MR_String) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 1))));
            MR_Word Var_143 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0))));

            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 1:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 2:
                {
                  MR_Word ArgY1_59 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 0))));
                  MR_String ArgY2_62 = ((MR_String) ((MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 1))));
                  MR_Integer ArgY3_65 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 2))));
                  MR_Word SubResult1_60;

                  mdbcomp__sym_name____Compare____sym_name_0_0(&SubResult1_60, Var_143, ArgY1_59);
                  succeeded = (SubResult1_60 != (MR_Integer) 0);
                  if (succeeded)
                    *HeadVar__1_1 = SubResult1_60;
                  else
                  {
                    MR_Word SubResult2_63;

                    mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult2_63, Var_142, ArgY2_62);
                    succeeded = (SubResult2_63 != (MR_Integer) 0);
                    if (succeeded)
                      *HeadVar__1_1 = SubResult2_63;
                    else
                    {
                      succeeded = (Var_141 < ArgY3_65);
                      if (succeeded)
                        *HeadVar__1_1 = (MR_Integer) 1;
                      else
                      {
                        succeeded = (Var_141 > ArgY3_65);
                        if (succeeded)
                          *HeadVar__1_1 = (MR_Integer) 2;
                        else
                          *HeadVar__1_1 = (MR_Integer) 0;
                      }
                    }
                  }
                }
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0))))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 1:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
            }
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Integer Var_133 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));

                switch (MR_tag((MR_Word) HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 2:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 3:
                    switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0))))) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        {
                          MR_Integer ArgY1_87 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))));

                          succeeded = (Var_133 < ArgY1_87);
                          if (succeeded)
                            *HeadVar__1_1 = (MR_Integer) 1;
                          else
                          {
                            succeeded = (Var_133 > ArgY1_87);
                            if (succeeded)
                              *HeadVar__1_1 = (MR_Integer) 2;
                            else
                              *HeadVar__1_1 = (MR_Integer) 0;
                          }
                        }
                        break;
                      case (MR_Integer) 1:
                        *HeadVar__1_1 = (MR_Integer) 1;
                        break;
                    }
                    break;
                }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word Var_134 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 3))) & (MR_Integer) 15);
                MR_String Var_135 = ((MR_String) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                MR_Word Var_136 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));

                switch (MR_tag((MR_Word) HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 2:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 3:
                    switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0))))) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        *HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 1:
                        {
                          MR_Word ArgY1_113 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))));
                          MR_String ArgY2_116 = ((MR_String) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 2))));
                          MR_Word ArgY3_119 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 3))) & (MR_Integer) 15);
                          MR_Word SubResult1_114;

                          mdbcomp__sym_name____Compare____sym_name_0_0(&SubResult1_114, Var_136, ArgY1_113);
                          succeeded = (SubResult1_114 != (MR_Integer) 0);
                          if (succeeded)
                            *HeadVar__1_1 = SubResult1_114;
                          else
                          {
                            MR_Word SubResult2_117;

                            mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult2_117, Var_135, ArgY2_116);
                            succeeded = (SubResult2_117 != (MR_Integer) 0);
                            if (succeeded)
                              *HeadVar__1_1 = SubResult2_117;
                            else
                            {
                              MR_Integer Var_144 = (MR_Integer) (Var_134);
                              MR_Integer Var_145 = (MR_Integer) (ArgY3_119);

                              succeeded = (Var_144 < Var_145);
                              if (succeeded)
                                *HeadVar__1_1 = (MR_Integer) 1;
                              else
                              {
                                succeeded = (Var_144 > Var_145);
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
                    break;
                }
              }
              break;
          }
          break;
      }
  }
}

MR_bool MR_CALL 
transform_hlds__dead_proc_elim____Unify____entity_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_25 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_26 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_25 == CastY_26);
    if (succeeded)
      succeeded = MR_TRUE;
    else
      switch (MR_tag((MR_Word) HeadVar__1_1)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
            MR_Word ArgY1_4;
            MR_Integer ArgX2_5 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
            MR_Integer ArgY2_6;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
            if (succeeded)
            {
              ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
              ArgY2_6 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
              succeeded = hlds__hlds_pred____Unify____pred_id_0_0(ArgX1_3, ArgY1_4);
              if (succeeded)
                succeeded = (ArgX2_5 == ArgY2_6);
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word ArgX1_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
            MR_Word ArgY1_8;
            MR_Integer ArgX2_9 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
            MR_Integer ArgY2_10;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
            if (succeeded)
            {
              ArgY1_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
              ArgY2_10 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
              succeeded = hlds__hlds_pred____Unify____pred_id_0_0(ArgX1_7, ArgY1_8);
              if (succeeded)
                succeeded = (ArgX2_9 == ArgY2_10);
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word ArgX1_11 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 0))));
            MR_Word ArgY1_12;
            MR_String ArgX2_13 = ((MR_String) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 1))));
            MR_String ArgY2_14;
            MR_Integer ArgX3_15 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 2))));
            MR_Integer ArgY3_16;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 2);
            if (succeeded)
            {
              ArgY1_12 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0))));
              ArgY2_14 = ((MR_String) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 1))));
              ArgY3_16 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 2))));
              succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ArgX1_11, ArgY1_12);
              if (succeeded)
              {
                succeeded = (strcmp(ArgX2_13, ArgY2_14) == 0);
                if (succeeded)
                  succeeded = (ArgX3_15 == ArgY3_16);
              }
            }
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Integer ArgX1_17 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
                MR_Integer ArgY1_18;

                succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0)));
                if (succeeded)
                {
                  ArgY1_18 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                  succeeded = (ArgX1_17 == ArgY1_18);
                }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word ArgX1_19 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
                MR_Word ArgY1_20;
                MR_String ArgX2_21 = ((MR_String) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2))));
                MR_String ArgY2_22;
                MR_Word ArgX3_23 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 3))) & (MR_Integer) 15);
                MR_Word ArgY3_24;

                succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1)));
                if (succeeded)
                {
                  ArgY1_20 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                  ArgY2_22 = ((MR_String) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                  ArgY3_24 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 3))) & (MR_Integer) 15);
                  succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ArgX1_19, ArgY1_20);
                  if (succeeded)
                  {
                    succeeded = (strcmp(ArgX2_21, ArgY2_22) == 0);
                    if (succeeded)
                      succeeded = (ArgX3_23 == ArgY3_24);
                  }
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
transform_hlds__dead_proc_elim____Compare____analyze_links_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_12 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_13 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_12 == CastY_13);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Word ArgX1_4 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) >> 2)) & (MR_Integer) 1);
      MR_Word ArgY1_5 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))) >> 2)) & (MR_Integer) 1);
      MR_Word ArgX2_7 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) >> 1)) & (MR_Integer) 1);
      MR_Word ArgY2_8 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))) >> 1)) & (MR_Integer) 1);
      MR_Word ArgX3_10 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 1);
      MR_Word ArgY3_11 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))) & (MR_Integer) 1);
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
        MR_Integer Var_19 = (MR_Integer) (ArgX2_7);
        MR_Integer Var_20 = (MR_Integer) (ArgY2_8);

        succeeded = (Var_19 < Var_20);
        if (succeeded)
        {
          SubResult2_9 = (MR_Integer) 1;
          succeeded = MR_TRUE;
        }
        else
        {
          succeeded = (Var_19 > Var_20);
          if (succeeded)
          {
            SubResult2_9 = (MR_Integer) 2;
            succeeded = MR_TRUE;
          }
          else
          {
            succeeded = MR_TRUE;
            succeeded = !(succeeded);
            if (succeeded)
            {
              SubResult2_9 = (MR_Integer) 0;
              succeeded = MR_TRUE;
            }
          }
        }
        if (succeeded)
          *HeadVar__1_1 = SubResult2_9;
        else
        {
          MR_Integer Var_21 = (MR_Integer) (ArgX3_10);
          MR_Integer Var_22 = (MR_Integer) (ArgY3_11);

          succeeded = (Var_21 < Var_22);
          if (succeeded)
            *HeadVar__1_1 = (MR_Integer) 1;
          else
          {
            succeeded = (Var_21 > Var_22);
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
transform_hlds__dead_proc_elim____Unify____analyze_links_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_9 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_10 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_9 == CastY_10);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Word ArgX1_3 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))) >> 2)) & (MR_Integer) 1);
      MR_Word ArgY1_4 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) >> 2)) & (MR_Integer) 1);
      MR_Word ArgX2_5 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))) >> 1)) & (MR_Integer) 1);
      MR_Word ArgY2_6 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) >> 1)) & (MR_Integer) 1);
      MR_Word ArgX3_7 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))) & (MR_Integer) 1);
      MR_Word ArgY3_8 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 1);

      succeeded = (ArgX1_3 == ArgY1_4);
      if (succeeded)
      {
        succeeded = (ArgX2_5 == ArgY2_6);
        if (succeeded)
          succeeded = (ArgX3_7 == ArgY3_8);
      }
    }
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__dead_proc_elim__pre_modecheck_examine_case_3_p_0(
  MR_Word Case_4,
  MR_Word STATE_VARIABLE_DeadInfo_0_9,
  MR_Word * STATE_VARIABLE_DeadInfo_10)
{
  {
    MR_Word Goal_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Case_4, (MR_Integer) 2))));
    MR_Word GoalExpr_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_8, (MR_Integer) 0))));

    transform_hlds__dead_proc_elim__pre_modecheck_examine_goal_expr_3_p_0(GoalExpr_16, STATE_VARIABLE_DeadInfo_0_9, STATE_VARIABLE_DeadInfo_10);
  }
}

static void MR_CALL 
transform_hlds__dead_proc_elim__dead_pred_elim_process_clause_3_p_0(
  MR_Word Clause_4,
  MR_Word STATE_VARIABLE_DeadInfo_0_6,
  MR_Word * STATE_VARIABLE_DeadInfo_7)
{
  {
    MR_Word Var_8;
    MR_Word GoalExpr_14;

    Var_8 = hlds__hlds_clauses__clause_body_1_f_0(Clause_4);
    GoalExpr_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_8, (MR_Integer) 0))));
    transform_hlds__dead_proc_elim__pre_modecheck_examine_goal_expr_3_p_0(GoalExpr_14, STATE_VARIABLE_DeadInfo_0_6, STATE_VARIABLE_DeadInfo_7);
  }
}

static void MR_CALL 
transform_hlds__dead_proc_elim__pre_modecheck_examine_goal_expr_3_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv6_STATE_VARIABLE_DeadInfo_10;

    transform_hlds__dead_proc_elim__pre_modecheck_examine_case_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv6_STATE_VARIABLE_DeadInfo_10);
    *wrapper_arg_3 = ((MR_Box) (conv6_STATE_VARIABLE_DeadInfo_10));
  }
}

static void MR_CALL 
transform_hlds__dead_proc_elim__pre_modecheck_examine_goal_expr_3_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv4_STATE_VARIABLE_DeadInfo_9;

    transform_hlds__dead_proc_elim__pre_modecheck_examine_goal_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv4_STATE_VARIABLE_DeadInfo_9);
    *wrapper_arg_3 = ((MR_Box) (conv4_STATE_VARIABLE_DeadInfo_9));
  }
}

static void MR_CALL 
transform_hlds__dead_proc_elim__pre_modecheck_examine_goal_expr_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv2_STATE_VARIABLE_DeadInfo_9;

    transform_hlds__dead_proc_elim__pre_modecheck_examine_goal_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_STATE_VARIABLE_DeadInfo_9);
    *wrapper_arg_3 = ((MR_Box) (conv2_STATE_VARIABLE_DeadInfo_9));
  }
}

static void MR_CALL 
transform_hlds__dead_proc_elim__pre_modecheck_examine_goal_expr_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_DeadInfo_9;

    transform_hlds__dead_proc_elim__pre_modecheck_examine_goal_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_DeadInfo_9);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_DeadInfo_9));
  }
}

static void MR_CALL 
transform_hlds__dead_proc_elim__pre_modecheck_examine_goal_3_p_0(
  MR_Word tscc_proc_1_input_1_Goal_4,
  MR_Word tscc_proc_1_input_2_STATE_VARIABLE_DeadInfo_0_8,
  MR_Word * tscc_output_ptr_1_STATE_VARIABLE_DeadInfo_9)
{
  {
    MR_Word tscc_proc_2_input_1_GoalExpr_4;
    MR_Word tscc_proc_2_input_2_STATE_VARIABLE_DeadInfo_0_52;
    MR_Word tscc_proc_3_input_1_RHS_4;
    MR_Word tscc_proc_3_input_2_STATE_VARIABLE_DeadInfo_0_22;
    MR_Word tscc_output_1_STATE_VARIABLE_DeadInfo_9;

    // The code for TSCC PROC 1: pred transform_hlds.dead_proc_elim.pre_modecheck_examine_goal/3-0.
    ;
    // Setup for mutual tailcalls optimized into a loop.
    ;
    // The mutually recursive procedures are:
    ;
    ;
    // proc 1 in TSCC: pred transform_hlds.dead_proc_elim.pre_modecheck_examine_goal/3-0
    ;
    // proc 2 in TSCC: pred transform_hlds.dead_proc_elim.pre_modecheck_examine_goal_expr/3-0
    ;
    // proc 3 in TSCC: pred transform_hlds.dead_proc_elim.pre_modecheck_examine_unify_rhs/3-0
    ;
    ;
    goto top_of_proc_1;
  top_of_proc_1:;
    {
      MR_Word Goal_4 = tscc_proc_1_input_1_Goal_4;
      MR_Word STATE_VARIABLE_DeadInfo_0_8 = tscc_proc_1_input_2_STATE_VARIABLE_DeadInfo_0_8;
      MR_Word STATE_VARIABLE_DeadInfo_9;
      MR_Word GoalExpr_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_4, (MR_Integer) 0))));
      MR_Word next_value_of_tscc_proc_2_input_1_GoalExpr_4 = GoalExpr_6;
      MR_Word next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_DeadInfo_0_52 = STATE_VARIABLE_DeadInfo_0_8;

      // direct tailcall eliminated
      ;
      tscc_proc_2_input_1_GoalExpr_4 = next_value_of_tscc_proc_2_input_1_GoalExpr_4;
      tscc_proc_2_input_2_STATE_VARIABLE_DeadInfo_0_52 = next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_DeadInfo_0_52;
      goto top_of_proc_2;
      tscc_output_1_STATE_VARIABLE_DeadInfo_9 = STATE_VARIABLE_DeadInfo_9;
      goto tscc_end;
    }
  top_of_proc_2:;
    {
      MR_Word GoalExpr_4 = tscc_proc_2_input_1_GoalExpr_4;
      MR_Word STATE_VARIABLE_DeadInfo_0_52 = tscc_proc_2_input_2_STATE_VARIABLE_DeadInfo_0_52;
      MR_Word STATE_VARIABLE_DeadInfo_53;

      switch (MR_tag((MR_Word) GoalExpr_4)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word SubGoal_15 = (MR_Word) ((MR_Word) (GoalExpr_4));
            MR_Word next_value_of_tscc_proc_1_input_1_Goal_4 = SubGoal_15;
            MR_Word next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_DeadInfo_0_8 = STATE_VARIABLE_DeadInfo_0_52;

            // direct tailcall eliminated
            ;
            tscc_proc_1_input_1_Goal_4 = next_value_of_tscc_proc_1_input_1_Goal_4;
            tscc_proc_1_input_2_STATE_VARIABLE_DeadInfo_0_8 = next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_DeadInfo_0_8;
            goto top_of_proc_1;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word RHS_36 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalExpr_4, (MR_Integer) 1))));
            MR_Word next_value_of_tscc_proc_3_input_1_RHS_4 = RHS_36;
            MR_Word next_value_of_tscc_proc_3_input_2_STATE_VARIABLE_DeadInfo_0_22 = STATE_VARIABLE_DeadInfo_0_52;

            // direct tailcall eliminated
            ;
            tscc_proc_3_input_1_RHS_4 = next_value_of_tscc_proc_3_input_1_RHS_4;
            tscc_proc_3_input_2_STATE_VARIABLE_DeadInfo_0_22 = next_value_of_tscc_proc_3_input_2_STATE_VARIABLE_DeadInfo_0_22;
            goto top_of_proc_3;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word PredName_22 = ((MR_Word) ((MR_hl_field(MR_mktag(2), GoalExpr_4, (MR_Integer) 5))));

            transform_hlds__dead_proc_elim__dead_pred_info_add_pred_name_3_p_0(PredName_22, STATE_VARIABLE_DeadInfo_0_52, &STATE_VARIABLE_DeadInfo_53);
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), GoalExpr_4, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              STATE_VARIABLE_DeadInfo_53 = STATE_VARIABLE_DeadInfo_0_52;
              break;
            case (MR_Integer) 1:
              STATE_VARIABLE_DeadInfo_53 = STATE_VARIABLE_DeadInfo_0_52;
              break;
            case (MR_Integer) 2:
              {
                MR_Word Goals_7 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_4, (MR_Integer) 2))));
                MR_Box conv1_STATE_VARIABLE_DeadInfo_53;

                mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_pred_elim_info_0), (MR_Word) (&transform_hlds__dead_proc_elim_scalar_common_2[14]), Goals_7, ((MR_Box) (STATE_VARIABLE_DeadInfo_0_52)), &conv1_STATE_VARIABLE_DeadInfo_53);
                STATE_VARIABLE_DeadInfo_53 = ((MR_Word) (conv1_STATE_VARIABLE_DeadInfo_53));
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Word Goals_73 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_4, (MR_Integer) 1))));
                MR_Box conv3_STATE_VARIABLE_DeadInfo_53;

                mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_pred_elim_info_0), (MR_Word) (&transform_hlds__dead_proc_elim_scalar_common_2[15]), Goals_73, ((MR_Box) (STATE_VARIABLE_DeadInfo_0_52)), &conv3_STATE_VARIABLE_DeadInfo_53);
                STATE_VARIABLE_DeadInfo_53 = ((MR_Word) (conv3_STATE_VARIABLE_DeadInfo_53));
              }
              break;
            case (MR_Integer) 4:
              {
                MR_Word Cases_14 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_4, (MR_Integer) 3))));
                MR_Box conv7_STATE_VARIABLE_DeadInfo_53;

                mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0), (MR_Word) (&transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_pred_elim_info_0), (MR_Word) (&transform_hlds__dead_proc_elim_scalar_common_2[17]), Cases_14, ((MR_Box) (STATE_VARIABLE_DeadInfo_0_52)), &conv7_STATE_VARIABLE_DeadInfo_53);
                STATE_VARIABLE_DeadInfo_53 = ((MR_Word) (conv7_STATE_VARIABLE_DeadInfo_53));
              }
              break;
            case (MR_Integer) 5:
              {
                MR_Word SubGoal_74 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_4, (MR_Integer) 2))));
                MR_Word next_value_of_tscc_proc_1_input_1_Goal_4 = SubGoal_74;
                MR_Word next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_DeadInfo_0_8 = STATE_VARIABLE_DeadInfo_0_52;

                // direct tailcall eliminated
                ;
                tscc_proc_1_input_1_Goal_4 = next_value_of_tscc_proc_1_input_1_Goal_4;
                tscc_proc_1_input_2_STATE_VARIABLE_DeadInfo_0_8 = next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_DeadInfo_0_8;
                goto top_of_proc_1;
              }
              break;
            case (MR_Integer) 6:
              {
                MR_Word Cond_9 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_4, (MR_Integer) 2))));
                MR_Word Then_10 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_4, (MR_Integer) 3))));
                MR_Word Else_11 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_4, (MR_Integer) 4))));
                MR_Word STATE_VARIABLE_DeadInfo_66_66;
                MR_Word STATE_VARIABLE_DeadInfo_67_67;
                MR_Word next_value_of_tscc_proc_1_input_1_Goal_4;
                MR_Word next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_DeadInfo_0_8;

                transform_hlds__dead_proc_elim__pre_modecheck_examine_goal_3_p_0(Cond_9, STATE_VARIABLE_DeadInfo_0_52, &STATE_VARIABLE_DeadInfo_66_66);
                transform_hlds__dead_proc_elim__pre_modecheck_examine_goal_3_p_0(Then_10, STATE_VARIABLE_DeadInfo_66_66, &STATE_VARIABLE_DeadInfo_67_67);
                // direct tailcall eliminated
                ;
                next_value_of_tscc_proc_1_input_1_Goal_4 = Else_11;
                next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_DeadInfo_0_8 = STATE_VARIABLE_DeadInfo_67_67;
                tscc_proc_1_input_1_Goal_4 = next_value_of_tscc_proc_1_input_1_Goal_4;
                tscc_proc_1_input_2_STATE_VARIABLE_DeadInfo_0_8 = next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_DeadInfo_0_8;
                goto top_of_proc_1;
              }
              break;
            case (MR_Integer) 7:
              {
                MR_Word ShortHand_40 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_4, (MR_Integer) 1))));

                switch (MR_tag((MR_Word) ShortHand_40)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.dead_proc_elim.pre_modecheck_examine_goal_expr\'/3", (MR_String) "unexpected bi_implication");
                      return;
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Word MainGoal_45 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ShortHand_40, (MR_Integer) 4))));
                      MR_Word OrElseGoals_46 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ShortHand_40, (MR_Integer) 5))));
                      MR_Word STATE_VARIABLE_DeadInfo_57_57;
                      MR_Box conv5_STATE_VARIABLE_DeadInfo_53;

                      transform_hlds__dead_proc_elim__pre_modecheck_examine_goal_3_p_0(MainGoal_45, STATE_VARIABLE_DeadInfo_0_52, &STATE_VARIABLE_DeadInfo_57_57);
                      mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_pred_elim_info_0), (MR_Word) (&transform_hlds__dead_proc_elim_scalar_common_2[16]), OrElseGoals_46, ((MR_Box) (STATE_VARIABLE_DeadInfo_57_57)), &conv5_STATE_VARIABLE_DeadInfo_53);
                      STATE_VARIABLE_DeadInfo_53 = ((MR_Word) (conv5_STATE_VARIABLE_DeadInfo_53));
                    }
                    break;
                  case (MR_Integer) 2:
                    {
                      MR_Word SubGoal_75 = ((MR_Word) ((MR_hl_field(MR_mktag(2), ShortHand_40, (MR_Integer) 2))));
                      MR_Word next_value_of_tscc_proc_1_input_1_Goal_4 = SubGoal_75;
                      MR_Word next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_DeadInfo_0_8 = STATE_VARIABLE_DeadInfo_0_52;

                      // direct tailcall eliminated
                      ;
                      tscc_proc_1_input_1_Goal_4 = next_value_of_tscc_proc_1_input_1_Goal_4;
                      tscc_proc_1_input_2_STATE_VARIABLE_DeadInfo_0_8 = next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_DeadInfo_0_8;
                      goto top_of_proc_1;
                    }
                    break;
                }
              }
              break;
          }
          break;
      }
      tscc_output_1_STATE_VARIABLE_DeadInfo_9 = STATE_VARIABLE_DeadInfo_53;
      goto tscc_end;
    }
  top_of_proc_3:;
    {
      MR_Word RHS_4 = tscc_proc_3_input_1_RHS_4;
      MR_Word STATE_VARIABLE_DeadInfo_0_22 = tscc_proc_3_input_2_STATE_VARIABLE_DeadInfo_0_22;
      MR_Word STATE_VARIABLE_DeadInfo_23;
      MR_bool succeeded;

      switch (MR_tag((MR_Word) RHS_4)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          STATE_VARIABLE_DeadInfo_23 = STATE_VARIABLE_DeadInfo_0_22;
          break;
        case (MR_Integer) 1:
          {
            MR_Word Functor_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), RHS_4, (MR_Integer) 0))));
            MR_Word Name_10;

            succeeded = ((((MR_tag((MR_Word) Functor_7)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Functor_7, (MR_Integer) 0)))) == (MR_Integer) 2)));
            if (succeeded)
            {
              Name_10 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Functor_7, (MR_Integer) 1))));
              {
                MR_Word ModuleInfo_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_DeadInfo_0_22, (MR_Integer) 0))));
                MR_Word Examined_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_DeadInfo_0_22, (MR_Integer) 2))));
                MR_Word Needed_34 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_DeadInfo_0_22, (MR_Integer) 3))));
                MR_Word STATE_VARIABLE_Queue_15_37 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_DeadInfo_0_22, (MR_Integer) 1))));
                MR_Word STATE_VARIABLE_NeededNames_16_38 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_DeadInfo_0_22, (MR_Integer) 4))));

                succeeded = mercury__set_tree234__contains_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), STATE_VARIABLE_NeededNames_16_38, ((MR_Box) (Name_10)));
                if (succeeded)
                  STATE_VARIABLE_DeadInfo_23 = STATE_VARIABLE_DeadInfo_0_22;
                else
                {
                  MR_Word PredicateTable_35;
                  MR_Word PredIds_36;
                  MR_Word STATE_VARIABLE_NeededNames_17_39;
                  MR_Word STATE_VARIABLE_Queue_19_41;

                  hlds__hlds_module__module_info_get_predicate_table_2_p_0(ModuleInfo_32, &PredicateTable_35);
                  mercury__set_tree234__insert_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ((MR_Box) (Name_10)), STATE_VARIABLE_NeededNames_16_38, &STATE_VARIABLE_NeededNames_17_39);
                  hlds__pred_table__predicate_table_lookup_sym_4_p_0(PredicateTable_35, (MR_Integer) 1, Name_10, &PredIds_36);
                  mercury__queue__put_list_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), PredIds_36, STATE_VARIABLE_Queue_15_37, &STATE_VARIABLE_Queue_19_41);
                  {
                    STATE_VARIABLE_DeadInfo_23 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), STATE_VARIABLE_DeadInfo_23, 0) = ((MR_Box) (ModuleInfo_32));
                    MR_hl_field(MR_mktag(0), STATE_VARIABLE_DeadInfo_23, 1) = ((MR_Box) (STATE_VARIABLE_Queue_19_41));
                    MR_hl_field(MR_mktag(0), STATE_VARIABLE_DeadInfo_23, 2) = ((MR_Box) (Examined_33));
                    MR_hl_field(MR_mktag(0), STATE_VARIABLE_DeadInfo_23, 3) = ((MR_Box) (Needed_34));
                    MR_hl_field(MR_mktag(0), STATE_VARIABLE_DeadInfo_23, 4) = ((MR_Box) (STATE_VARIABLE_NeededNames_17_39));
                  }
                }
              }
            }
            else
              STATE_VARIABLE_DeadInfo_23 = STATE_VARIABLE_DeadInfo_0_22;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word Goal_21 = ((MR_Word) ((MR_hl_field(MR_mktag(2), RHS_4, (MR_Integer) 6))));
            MR_Word GoalExpr_50 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_21, (MR_Integer) 0))));
            MR_Word next_value_of_tscc_proc_2_input_1_GoalExpr_4 = GoalExpr_50;
            MR_Word next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_DeadInfo_0_52 = STATE_VARIABLE_DeadInfo_0_22;

            // direct tailcall eliminated
            ;
            tscc_proc_2_input_1_GoalExpr_4 = next_value_of_tscc_proc_2_input_1_GoalExpr_4;
            tscc_proc_2_input_2_STATE_VARIABLE_DeadInfo_0_52 = next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_DeadInfo_0_52;
            goto top_of_proc_2;
          }
          break;
      }
      tscc_output_1_STATE_VARIABLE_DeadInfo_9 = STATE_VARIABLE_DeadInfo_23;
      goto tscc_end;
    }
  tscc_end:;
    *tscc_output_ptr_1_STATE_VARIABLE_DeadInfo_9 = tscc_output_1_STATE_VARIABLE_DeadInfo_9;
    return;
  }
}

static void MR_CALL 
transform_hlds__dead_proc_elim__pre_modecheck_examine_goal_expr_3_p_0(
  MR_Word tscc_proc_2_input_1_GoalExpr_4,
  MR_Word tscc_proc_2_input_2_STATE_VARIABLE_DeadInfo_0_52,
  MR_Word * tscc_output_ptr_1_STATE_VARIABLE_DeadInfo_9)
{
  {
    MR_Word tscc_proc_1_input_1_Goal_4;
    MR_Word tscc_proc_1_input_2_STATE_VARIABLE_DeadInfo_0_8;
    MR_Word tscc_proc_3_input_1_RHS_4;
    MR_Word tscc_proc_3_input_2_STATE_VARIABLE_DeadInfo_0_22;
    MR_Word tscc_output_1_STATE_VARIABLE_DeadInfo_9;

    // The code for TSCC PROC 2: pred transform_hlds.dead_proc_elim.pre_modecheck_examine_goal_expr/3-0.
    ;
    // Setup for mutual tailcalls optimized into a loop.
    ;
    // The mutually recursive procedures are:
    ;
    ;
    // proc 1 in TSCC: pred transform_hlds.dead_proc_elim.pre_modecheck_examine_goal/3-0
    ;
    // proc 2 in TSCC: pred transform_hlds.dead_proc_elim.pre_modecheck_examine_goal_expr/3-0
    ;
    // proc 3 in TSCC: pred transform_hlds.dead_proc_elim.pre_modecheck_examine_unify_rhs/3-0
    ;
    ;
    goto top_of_proc_2;
  top_of_proc_1:;
    {
      MR_Word Goal_4 = tscc_proc_1_input_1_Goal_4;
      MR_Word STATE_VARIABLE_DeadInfo_0_8 = tscc_proc_1_input_2_STATE_VARIABLE_DeadInfo_0_8;
      MR_Word STATE_VARIABLE_DeadInfo_9;
      MR_Word GoalExpr_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_4, (MR_Integer) 0))));
      MR_Word next_value_of_tscc_proc_2_input_1_GoalExpr_4 = GoalExpr_6;
      MR_Word next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_DeadInfo_0_52 = STATE_VARIABLE_DeadInfo_0_8;

      // direct tailcall eliminated
      ;
      tscc_proc_2_input_1_GoalExpr_4 = next_value_of_tscc_proc_2_input_1_GoalExpr_4;
      tscc_proc_2_input_2_STATE_VARIABLE_DeadInfo_0_52 = next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_DeadInfo_0_52;
      goto top_of_proc_2;
      tscc_output_1_STATE_VARIABLE_DeadInfo_9 = STATE_VARIABLE_DeadInfo_9;
      goto tscc_end;
    }
  top_of_proc_2:;
    {
      MR_Word GoalExpr_4 = tscc_proc_2_input_1_GoalExpr_4;
      MR_Word STATE_VARIABLE_DeadInfo_0_52 = tscc_proc_2_input_2_STATE_VARIABLE_DeadInfo_0_52;
      MR_Word STATE_VARIABLE_DeadInfo_53;

      switch (MR_tag((MR_Word) GoalExpr_4)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word SubGoal_15 = (MR_Word) ((MR_Word) (GoalExpr_4));
            MR_Word next_value_of_tscc_proc_1_input_1_Goal_4 = SubGoal_15;
            MR_Word next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_DeadInfo_0_8 = STATE_VARIABLE_DeadInfo_0_52;

            // direct tailcall eliminated
            ;
            tscc_proc_1_input_1_Goal_4 = next_value_of_tscc_proc_1_input_1_Goal_4;
            tscc_proc_1_input_2_STATE_VARIABLE_DeadInfo_0_8 = next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_DeadInfo_0_8;
            goto top_of_proc_1;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word RHS_36 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalExpr_4, (MR_Integer) 1))));
            MR_Word next_value_of_tscc_proc_3_input_1_RHS_4 = RHS_36;
            MR_Word next_value_of_tscc_proc_3_input_2_STATE_VARIABLE_DeadInfo_0_22 = STATE_VARIABLE_DeadInfo_0_52;

            // direct tailcall eliminated
            ;
            tscc_proc_3_input_1_RHS_4 = next_value_of_tscc_proc_3_input_1_RHS_4;
            tscc_proc_3_input_2_STATE_VARIABLE_DeadInfo_0_22 = next_value_of_tscc_proc_3_input_2_STATE_VARIABLE_DeadInfo_0_22;
            goto top_of_proc_3;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word PredName_22 = ((MR_Word) ((MR_hl_field(MR_mktag(2), GoalExpr_4, (MR_Integer) 5))));

            transform_hlds__dead_proc_elim__dead_pred_info_add_pred_name_3_p_0(PredName_22, STATE_VARIABLE_DeadInfo_0_52, &STATE_VARIABLE_DeadInfo_53);
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), GoalExpr_4, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              STATE_VARIABLE_DeadInfo_53 = STATE_VARIABLE_DeadInfo_0_52;
              break;
            case (MR_Integer) 1:
              STATE_VARIABLE_DeadInfo_53 = STATE_VARIABLE_DeadInfo_0_52;
              break;
            case (MR_Integer) 2:
              {
                MR_Word Goals_7 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_4, (MR_Integer) 2))));
                MR_Box conv1_STATE_VARIABLE_DeadInfo_53;

                mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_pred_elim_info_0), (MR_Word) (&transform_hlds__dead_proc_elim_scalar_common_2[14]), Goals_7, ((MR_Box) (STATE_VARIABLE_DeadInfo_0_52)), &conv1_STATE_VARIABLE_DeadInfo_53);
                STATE_VARIABLE_DeadInfo_53 = ((MR_Word) (conv1_STATE_VARIABLE_DeadInfo_53));
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Word Goals_73 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_4, (MR_Integer) 1))));
                MR_Box conv3_STATE_VARIABLE_DeadInfo_53;

                mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_pred_elim_info_0), (MR_Word) (&transform_hlds__dead_proc_elim_scalar_common_2[15]), Goals_73, ((MR_Box) (STATE_VARIABLE_DeadInfo_0_52)), &conv3_STATE_VARIABLE_DeadInfo_53);
                STATE_VARIABLE_DeadInfo_53 = ((MR_Word) (conv3_STATE_VARIABLE_DeadInfo_53));
              }
              break;
            case (MR_Integer) 4:
              {
                MR_Word Cases_14 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_4, (MR_Integer) 3))));
                MR_Box conv7_STATE_VARIABLE_DeadInfo_53;

                mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0), (MR_Word) (&transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_pred_elim_info_0), (MR_Word) (&transform_hlds__dead_proc_elim_scalar_common_2[17]), Cases_14, ((MR_Box) (STATE_VARIABLE_DeadInfo_0_52)), &conv7_STATE_VARIABLE_DeadInfo_53);
                STATE_VARIABLE_DeadInfo_53 = ((MR_Word) (conv7_STATE_VARIABLE_DeadInfo_53));
              }
              break;
            case (MR_Integer) 5:
              {
                MR_Word SubGoal_74 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_4, (MR_Integer) 2))));
                MR_Word next_value_of_tscc_proc_1_input_1_Goal_4 = SubGoal_74;
                MR_Word next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_DeadInfo_0_8 = STATE_VARIABLE_DeadInfo_0_52;

                // direct tailcall eliminated
                ;
                tscc_proc_1_input_1_Goal_4 = next_value_of_tscc_proc_1_input_1_Goal_4;
                tscc_proc_1_input_2_STATE_VARIABLE_DeadInfo_0_8 = next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_DeadInfo_0_8;
                goto top_of_proc_1;
              }
              break;
            case (MR_Integer) 6:
              {
                MR_Word Cond_9 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_4, (MR_Integer) 2))));
                MR_Word Then_10 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_4, (MR_Integer) 3))));
                MR_Word Else_11 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_4, (MR_Integer) 4))));
                MR_Word STATE_VARIABLE_DeadInfo_66_66;
                MR_Word STATE_VARIABLE_DeadInfo_67_67;
                MR_Word next_value_of_tscc_proc_1_input_1_Goal_4;
                MR_Word next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_DeadInfo_0_8;

                transform_hlds__dead_proc_elim__pre_modecheck_examine_goal_3_p_0(Cond_9, STATE_VARIABLE_DeadInfo_0_52, &STATE_VARIABLE_DeadInfo_66_66);
                transform_hlds__dead_proc_elim__pre_modecheck_examine_goal_3_p_0(Then_10, STATE_VARIABLE_DeadInfo_66_66, &STATE_VARIABLE_DeadInfo_67_67);
                // direct tailcall eliminated
                ;
                next_value_of_tscc_proc_1_input_1_Goal_4 = Else_11;
                next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_DeadInfo_0_8 = STATE_VARIABLE_DeadInfo_67_67;
                tscc_proc_1_input_1_Goal_4 = next_value_of_tscc_proc_1_input_1_Goal_4;
                tscc_proc_1_input_2_STATE_VARIABLE_DeadInfo_0_8 = next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_DeadInfo_0_8;
                goto top_of_proc_1;
              }
              break;
            case (MR_Integer) 7:
              {
                MR_Word ShortHand_40 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_4, (MR_Integer) 1))));

                switch (MR_tag((MR_Word) ShortHand_40)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.dead_proc_elim.pre_modecheck_examine_goal_expr\'/3", (MR_String) "unexpected bi_implication");
                      return;
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Word MainGoal_45 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ShortHand_40, (MR_Integer) 4))));
                      MR_Word OrElseGoals_46 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ShortHand_40, (MR_Integer) 5))));
                      MR_Word STATE_VARIABLE_DeadInfo_57_57;
                      MR_Box conv5_STATE_VARIABLE_DeadInfo_53;

                      transform_hlds__dead_proc_elim__pre_modecheck_examine_goal_3_p_0(MainGoal_45, STATE_VARIABLE_DeadInfo_0_52, &STATE_VARIABLE_DeadInfo_57_57);
                      mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_pred_elim_info_0), (MR_Word) (&transform_hlds__dead_proc_elim_scalar_common_2[16]), OrElseGoals_46, ((MR_Box) (STATE_VARIABLE_DeadInfo_57_57)), &conv5_STATE_VARIABLE_DeadInfo_53);
                      STATE_VARIABLE_DeadInfo_53 = ((MR_Word) (conv5_STATE_VARIABLE_DeadInfo_53));
                    }
                    break;
                  case (MR_Integer) 2:
                    {
                      MR_Word SubGoal_75 = ((MR_Word) ((MR_hl_field(MR_mktag(2), ShortHand_40, (MR_Integer) 2))));
                      MR_Word next_value_of_tscc_proc_1_input_1_Goal_4 = SubGoal_75;
                      MR_Word next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_DeadInfo_0_8 = STATE_VARIABLE_DeadInfo_0_52;

                      // direct tailcall eliminated
                      ;
                      tscc_proc_1_input_1_Goal_4 = next_value_of_tscc_proc_1_input_1_Goal_4;
                      tscc_proc_1_input_2_STATE_VARIABLE_DeadInfo_0_8 = next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_DeadInfo_0_8;
                      goto top_of_proc_1;
                    }
                    break;
                }
              }
              break;
          }
          break;
      }
      tscc_output_1_STATE_VARIABLE_DeadInfo_9 = STATE_VARIABLE_DeadInfo_53;
      goto tscc_end;
    }
  top_of_proc_3:;
    {
      MR_Word RHS_4 = tscc_proc_3_input_1_RHS_4;
      MR_Word STATE_VARIABLE_DeadInfo_0_22 = tscc_proc_3_input_2_STATE_VARIABLE_DeadInfo_0_22;
      MR_Word STATE_VARIABLE_DeadInfo_23;
      MR_bool succeeded;

      switch (MR_tag((MR_Word) RHS_4)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          STATE_VARIABLE_DeadInfo_23 = STATE_VARIABLE_DeadInfo_0_22;
          break;
        case (MR_Integer) 1:
          {
            MR_Word Functor_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), RHS_4, (MR_Integer) 0))));
            MR_Word Name_10;

            succeeded = ((((MR_tag((MR_Word) Functor_7)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Functor_7, (MR_Integer) 0)))) == (MR_Integer) 2)));
            if (succeeded)
            {
              Name_10 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Functor_7, (MR_Integer) 1))));
              {
                MR_Word ModuleInfo_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_DeadInfo_0_22, (MR_Integer) 0))));
                MR_Word Examined_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_DeadInfo_0_22, (MR_Integer) 2))));
                MR_Word Needed_34 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_DeadInfo_0_22, (MR_Integer) 3))));
                MR_Word STATE_VARIABLE_Queue_15_37 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_DeadInfo_0_22, (MR_Integer) 1))));
                MR_Word STATE_VARIABLE_NeededNames_16_38 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_DeadInfo_0_22, (MR_Integer) 4))));

                succeeded = mercury__set_tree234__contains_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), STATE_VARIABLE_NeededNames_16_38, ((MR_Box) (Name_10)));
                if (succeeded)
                  STATE_VARIABLE_DeadInfo_23 = STATE_VARIABLE_DeadInfo_0_22;
                else
                {
                  MR_Word PredicateTable_35;
                  MR_Word PredIds_36;
                  MR_Word STATE_VARIABLE_NeededNames_17_39;
                  MR_Word STATE_VARIABLE_Queue_19_41;

                  hlds__hlds_module__module_info_get_predicate_table_2_p_0(ModuleInfo_32, &PredicateTable_35);
                  mercury__set_tree234__insert_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ((MR_Box) (Name_10)), STATE_VARIABLE_NeededNames_16_38, &STATE_VARIABLE_NeededNames_17_39);
                  hlds__pred_table__predicate_table_lookup_sym_4_p_0(PredicateTable_35, (MR_Integer) 1, Name_10, &PredIds_36);
                  mercury__queue__put_list_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), PredIds_36, STATE_VARIABLE_Queue_15_37, &STATE_VARIABLE_Queue_19_41);
                  {
                    STATE_VARIABLE_DeadInfo_23 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), STATE_VARIABLE_DeadInfo_23, 0) = ((MR_Box) (ModuleInfo_32));
                    MR_hl_field(MR_mktag(0), STATE_VARIABLE_DeadInfo_23, 1) = ((MR_Box) (STATE_VARIABLE_Queue_19_41));
                    MR_hl_field(MR_mktag(0), STATE_VARIABLE_DeadInfo_23, 2) = ((MR_Box) (Examined_33));
                    MR_hl_field(MR_mktag(0), STATE_VARIABLE_DeadInfo_23, 3) = ((MR_Box) (Needed_34));
                    MR_hl_field(MR_mktag(0), STATE_VARIABLE_DeadInfo_23, 4) = ((MR_Box) (STATE_VARIABLE_NeededNames_17_39));
                  }
                }
              }
            }
            else
              STATE_VARIABLE_DeadInfo_23 = STATE_VARIABLE_DeadInfo_0_22;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word Goal_21 = ((MR_Word) ((MR_hl_field(MR_mktag(2), RHS_4, (MR_Integer) 6))));
            MR_Word GoalExpr_50 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_21, (MR_Integer) 0))));
            MR_Word next_value_of_tscc_proc_2_input_1_GoalExpr_4 = GoalExpr_50;
            MR_Word next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_DeadInfo_0_52 = STATE_VARIABLE_DeadInfo_0_22;

            // direct tailcall eliminated
            ;
            tscc_proc_2_input_1_GoalExpr_4 = next_value_of_tscc_proc_2_input_1_GoalExpr_4;
            tscc_proc_2_input_2_STATE_VARIABLE_DeadInfo_0_52 = next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_DeadInfo_0_52;
            goto top_of_proc_2;
          }
          break;
      }
      tscc_output_1_STATE_VARIABLE_DeadInfo_9 = STATE_VARIABLE_DeadInfo_23;
      goto tscc_end;
    }
  tscc_end:;
    *tscc_output_ptr_1_STATE_VARIABLE_DeadInfo_9 = tscc_output_1_STATE_VARIABLE_DeadInfo_9;
    return;
  }
}

static void MR_CALL 
transform_hlds__dead_proc_elim__pre_modecheck_examine_unify_rhs_3_p_0(
  MR_Word tscc_proc_3_input_1_RHS_4,
  MR_Word tscc_proc_3_input_2_STATE_VARIABLE_DeadInfo_0_22,
  MR_Word * tscc_output_ptr_1_STATE_VARIABLE_DeadInfo_9)
{
  {
    MR_Word tscc_proc_1_input_1_Goal_4;
    MR_Word tscc_proc_1_input_2_STATE_VARIABLE_DeadInfo_0_8;
    MR_Word tscc_proc_2_input_1_GoalExpr_4;
    MR_Word tscc_proc_2_input_2_STATE_VARIABLE_DeadInfo_0_52;
    MR_Word tscc_output_1_STATE_VARIABLE_DeadInfo_9;

    // The code for TSCC PROC 3: pred transform_hlds.dead_proc_elim.pre_modecheck_examine_unify_rhs/3-0.
    ;
    // Setup for mutual tailcalls optimized into a loop.
    ;
    // The mutually recursive procedures are:
    ;
    ;
    // proc 1 in TSCC: pred transform_hlds.dead_proc_elim.pre_modecheck_examine_goal/3-0
    ;
    // proc 2 in TSCC: pred transform_hlds.dead_proc_elim.pre_modecheck_examine_goal_expr/3-0
    ;
    // proc 3 in TSCC: pred transform_hlds.dead_proc_elim.pre_modecheck_examine_unify_rhs/3-0
    ;
    ;
    goto top_of_proc_3;
  top_of_proc_1:;
    {
      MR_Word Goal_4 = tscc_proc_1_input_1_Goal_4;
      MR_Word STATE_VARIABLE_DeadInfo_0_8 = tscc_proc_1_input_2_STATE_VARIABLE_DeadInfo_0_8;
      MR_Word STATE_VARIABLE_DeadInfo_9;
      MR_Word GoalExpr_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_4, (MR_Integer) 0))));
      MR_Word next_value_of_tscc_proc_2_input_1_GoalExpr_4 = GoalExpr_6;
      MR_Word next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_DeadInfo_0_52 = STATE_VARIABLE_DeadInfo_0_8;

      // direct tailcall eliminated
      ;
      tscc_proc_2_input_1_GoalExpr_4 = next_value_of_tscc_proc_2_input_1_GoalExpr_4;
      tscc_proc_2_input_2_STATE_VARIABLE_DeadInfo_0_52 = next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_DeadInfo_0_52;
      goto top_of_proc_2;
      tscc_output_1_STATE_VARIABLE_DeadInfo_9 = STATE_VARIABLE_DeadInfo_9;
      goto tscc_end;
    }
  top_of_proc_2:;
    {
      MR_Word GoalExpr_4 = tscc_proc_2_input_1_GoalExpr_4;
      MR_Word STATE_VARIABLE_DeadInfo_0_52 = tscc_proc_2_input_2_STATE_VARIABLE_DeadInfo_0_52;
      MR_Word STATE_VARIABLE_DeadInfo_53;

      switch (MR_tag((MR_Word) GoalExpr_4)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word SubGoal_15 = (MR_Word) ((MR_Word) (GoalExpr_4));
            MR_Word next_value_of_tscc_proc_1_input_1_Goal_4 = SubGoal_15;
            MR_Word next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_DeadInfo_0_8 = STATE_VARIABLE_DeadInfo_0_52;

            // direct tailcall eliminated
            ;
            tscc_proc_1_input_1_Goal_4 = next_value_of_tscc_proc_1_input_1_Goal_4;
            tscc_proc_1_input_2_STATE_VARIABLE_DeadInfo_0_8 = next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_DeadInfo_0_8;
            goto top_of_proc_1;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word RHS_36 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalExpr_4, (MR_Integer) 1))));
            MR_Word next_value_of_tscc_proc_3_input_1_RHS_4 = RHS_36;
            MR_Word next_value_of_tscc_proc_3_input_2_STATE_VARIABLE_DeadInfo_0_22 = STATE_VARIABLE_DeadInfo_0_52;

            // direct tailcall eliminated
            ;
            tscc_proc_3_input_1_RHS_4 = next_value_of_tscc_proc_3_input_1_RHS_4;
            tscc_proc_3_input_2_STATE_VARIABLE_DeadInfo_0_22 = next_value_of_tscc_proc_3_input_2_STATE_VARIABLE_DeadInfo_0_22;
            goto top_of_proc_3;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word PredName_22 = ((MR_Word) ((MR_hl_field(MR_mktag(2), GoalExpr_4, (MR_Integer) 5))));

            transform_hlds__dead_proc_elim__dead_pred_info_add_pred_name_3_p_0(PredName_22, STATE_VARIABLE_DeadInfo_0_52, &STATE_VARIABLE_DeadInfo_53);
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), GoalExpr_4, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              STATE_VARIABLE_DeadInfo_53 = STATE_VARIABLE_DeadInfo_0_52;
              break;
            case (MR_Integer) 1:
              STATE_VARIABLE_DeadInfo_53 = STATE_VARIABLE_DeadInfo_0_52;
              break;
            case (MR_Integer) 2:
              {
                MR_Word Goals_7 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_4, (MR_Integer) 2))));
                MR_Box conv1_STATE_VARIABLE_DeadInfo_53;

                mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_pred_elim_info_0), (MR_Word) (&transform_hlds__dead_proc_elim_scalar_common_2[14]), Goals_7, ((MR_Box) (STATE_VARIABLE_DeadInfo_0_52)), &conv1_STATE_VARIABLE_DeadInfo_53);
                STATE_VARIABLE_DeadInfo_53 = ((MR_Word) (conv1_STATE_VARIABLE_DeadInfo_53));
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Word Goals_73 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_4, (MR_Integer) 1))));
                MR_Box conv3_STATE_VARIABLE_DeadInfo_53;

                mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_pred_elim_info_0), (MR_Word) (&transform_hlds__dead_proc_elim_scalar_common_2[15]), Goals_73, ((MR_Box) (STATE_VARIABLE_DeadInfo_0_52)), &conv3_STATE_VARIABLE_DeadInfo_53);
                STATE_VARIABLE_DeadInfo_53 = ((MR_Word) (conv3_STATE_VARIABLE_DeadInfo_53));
              }
              break;
            case (MR_Integer) 4:
              {
                MR_Word Cases_14 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_4, (MR_Integer) 3))));
                MR_Box conv7_STATE_VARIABLE_DeadInfo_53;

                mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0), (MR_Word) (&transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_pred_elim_info_0), (MR_Word) (&transform_hlds__dead_proc_elim_scalar_common_2[17]), Cases_14, ((MR_Box) (STATE_VARIABLE_DeadInfo_0_52)), &conv7_STATE_VARIABLE_DeadInfo_53);
                STATE_VARIABLE_DeadInfo_53 = ((MR_Word) (conv7_STATE_VARIABLE_DeadInfo_53));
              }
              break;
            case (MR_Integer) 5:
              {
                MR_Word SubGoal_74 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_4, (MR_Integer) 2))));
                MR_Word next_value_of_tscc_proc_1_input_1_Goal_4 = SubGoal_74;
                MR_Word next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_DeadInfo_0_8 = STATE_VARIABLE_DeadInfo_0_52;

                // direct tailcall eliminated
                ;
                tscc_proc_1_input_1_Goal_4 = next_value_of_tscc_proc_1_input_1_Goal_4;
                tscc_proc_1_input_2_STATE_VARIABLE_DeadInfo_0_8 = next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_DeadInfo_0_8;
                goto top_of_proc_1;
              }
              break;
            case (MR_Integer) 6:
              {
                MR_Word Cond_9 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_4, (MR_Integer) 2))));
                MR_Word Then_10 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_4, (MR_Integer) 3))));
                MR_Word Else_11 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_4, (MR_Integer) 4))));
                MR_Word STATE_VARIABLE_DeadInfo_66_66;
                MR_Word STATE_VARIABLE_DeadInfo_67_67;
                MR_Word next_value_of_tscc_proc_1_input_1_Goal_4;
                MR_Word next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_DeadInfo_0_8;

                transform_hlds__dead_proc_elim__pre_modecheck_examine_goal_3_p_0(Cond_9, STATE_VARIABLE_DeadInfo_0_52, &STATE_VARIABLE_DeadInfo_66_66);
                transform_hlds__dead_proc_elim__pre_modecheck_examine_goal_3_p_0(Then_10, STATE_VARIABLE_DeadInfo_66_66, &STATE_VARIABLE_DeadInfo_67_67);
                // direct tailcall eliminated
                ;
                next_value_of_tscc_proc_1_input_1_Goal_4 = Else_11;
                next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_DeadInfo_0_8 = STATE_VARIABLE_DeadInfo_67_67;
                tscc_proc_1_input_1_Goal_4 = next_value_of_tscc_proc_1_input_1_Goal_4;
                tscc_proc_1_input_2_STATE_VARIABLE_DeadInfo_0_8 = next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_DeadInfo_0_8;
                goto top_of_proc_1;
              }
              break;
            case (MR_Integer) 7:
              {
                MR_Word ShortHand_40 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_4, (MR_Integer) 1))));

                switch (MR_tag((MR_Word) ShortHand_40)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.dead_proc_elim.pre_modecheck_examine_goal_expr\'/3", (MR_String) "unexpected bi_implication");
                      return;
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Word MainGoal_45 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ShortHand_40, (MR_Integer) 4))));
                      MR_Word OrElseGoals_46 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ShortHand_40, (MR_Integer) 5))));
                      MR_Word STATE_VARIABLE_DeadInfo_57_57;
                      MR_Box conv5_STATE_VARIABLE_DeadInfo_53;

                      transform_hlds__dead_proc_elim__pre_modecheck_examine_goal_3_p_0(MainGoal_45, STATE_VARIABLE_DeadInfo_0_52, &STATE_VARIABLE_DeadInfo_57_57);
                      mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_pred_elim_info_0), (MR_Word) (&transform_hlds__dead_proc_elim_scalar_common_2[16]), OrElseGoals_46, ((MR_Box) (STATE_VARIABLE_DeadInfo_57_57)), &conv5_STATE_VARIABLE_DeadInfo_53);
                      STATE_VARIABLE_DeadInfo_53 = ((MR_Word) (conv5_STATE_VARIABLE_DeadInfo_53));
                    }
                    break;
                  case (MR_Integer) 2:
                    {
                      MR_Word SubGoal_75 = ((MR_Word) ((MR_hl_field(MR_mktag(2), ShortHand_40, (MR_Integer) 2))));
                      MR_Word next_value_of_tscc_proc_1_input_1_Goal_4 = SubGoal_75;
                      MR_Word next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_DeadInfo_0_8 = STATE_VARIABLE_DeadInfo_0_52;

                      // direct tailcall eliminated
                      ;
                      tscc_proc_1_input_1_Goal_4 = next_value_of_tscc_proc_1_input_1_Goal_4;
                      tscc_proc_1_input_2_STATE_VARIABLE_DeadInfo_0_8 = next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_DeadInfo_0_8;
                      goto top_of_proc_1;
                    }
                    break;
                }
              }
              break;
          }
          break;
      }
      tscc_output_1_STATE_VARIABLE_DeadInfo_9 = STATE_VARIABLE_DeadInfo_53;
      goto tscc_end;
    }
  top_of_proc_3:;
    {
      MR_Word RHS_4 = tscc_proc_3_input_1_RHS_4;
      MR_Word STATE_VARIABLE_DeadInfo_0_22 = tscc_proc_3_input_2_STATE_VARIABLE_DeadInfo_0_22;
      MR_Word STATE_VARIABLE_DeadInfo_23;
      MR_bool succeeded;

      switch (MR_tag((MR_Word) RHS_4)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          STATE_VARIABLE_DeadInfo_23 = STATE_VARIABLE_DeadInfo_0_22;
          break;
        case (MR_Integer) 1:
          {
            MR_Word Functor_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), RHS_4, (MR_Integer) 0))));
            MR_Word Name_10;

            succeeded = ((((MR_tag((MR_Word) Functor_7)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Functor_7, (MR_Integer) 0)))) == (MR_Integer) 2)));
            if (succeeded)
            {
              Name_10 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Functor_7, (MR_Integer) 1))));
              {
                MR_Word ModuleInfo_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_DeadInfo_0_22, (MR_Integer) 0))));
                MR_Word Examined_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_DeadInfo_0_22, (MR_Integer) 2))));
                MR_Word Needed_34 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_DeadInfo_0_22, (MR_Integer) 3))));
                MR_Word STATE_VARIABLE_Queue_15_37 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_DeadInfo_0_22, (MR_Integer) 1))));
                MR_Word STATE_VARIABLE_NeededNames_16_38 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_DeadInfo_0_22, (MR_Integer) 4))));

                succeeded = mercury__set_tree234__contains_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), STATE_VARIABLE_NeededNames_16_38, ((MR_Box) (Name_10)));
                if (succeeded)
                  STATE_VARIABLE_DeadInfo_23 = STATE_VARIABLE_DeadInfo_0_22;
                else
                {
                  MR_Word PredicateTable_35;
                  MR_Word PredIds_36;
                  MR_Word STATE_VARIABLE_NeededNames_17_39;
                  MR_Word STATE_VARIABLE_Queue_19_41;

                  hlds__hlds_module__module_info_get_predicate_table_2_p_0(ModuleInfo_32, &PredicateTable_35);
                  mercury__set_tree234__insert_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ((MR_Box) (Name_10)), STATE_VARIABLE_NeededNames_16_38, &STATE_VARIABLE_NeededNames_17_39);
                  hlds__pred_table__predicate_table_lookup_sym_4_p_0(PredicateTable_35, (MR_Integer) 1, Name_10, &PredIds_36);
                  mercury__queue__put_list_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), PredIds_36, STATE_VARIABLE_Queue_15_37, &STATE_VARIABLE_Queue_19_41);
                  {
                    STATE_VARIABLE_DeadInfo_23 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), STATE_VARIABLE_DeadInfo_23, 0) = ((MR_Box) (ModuleInfo_32));
                    MR_hl_field(MR_mktag(0), STATE_VARIABLE_DeadInfo_23, 1) = ((MR_Box) (STATE_VARIABLE_Queue_19_41));
                    MR_hl_field(MR_mktag(0), STATE_VARIABLE_DeadInfo_23, 2) = ((MR_Box) (Examined_33));
                    MR_hl_field(MR_mktag(0), STATE_VARIABLE_DeadInfo_23, 3) = ((MR_Box) (Needed_34));
                    MR_hl_field(MR_mktag(0), STATE_VARIABLE_DeadInfo_23, 4) = ((MR_Box) (STATE_VARIABLE_NeededNames_17_39));
                  }
                }
              }
            }
            else
              STATE_VARIABLE_DeadInfo_23 = STATE_VARIABLE_DeadInfo_0_22;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word Goal_21 = ((MR_Word) ((MR_hl_field(MR_mktag(2), RHS_4, (MR_Integer) 6))));
            MR_Word GoalExpr_50 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_21, (MR_Integer) 0))));
            MR_Word next_value_of_tscc_proc_2_input_1_GoalExpr_4 = GoalExpr_50;
            MR_Word next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_DeadInfo_0_52 = STATE_VARIABLE_DeadInfo_0_22;

            // direct tailcall eliminated
            ;
            tscc_proc_2_input_1_GoalExpr_4 = next_value_of_tscc_proc_2_input_1_GoalExpr_4;
            tscc_proc_2_input_2_STATE_VARIABLE_DeadInfo_0_52 = next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_DeadInfo_0_52;
            goto top_of_proc_2;
          }
          break;
      }
      tscc_output_1_STATE_VARIABLE_DeadInfo_9 = STATE_VARIABLE_DeadInfo_23;
      goto tscc_end;
    }
  tscc_end:;
    *tscc_output_ptr_1_STATE_VARIABLE_DeadInfo_9 = tscc_output_1_STATE_VARIABLE_DeadInfo_9;
    return;
  }
}

static void MR_CALL 
transform_hlds__dead_proc_elim__dead_pred_info_add_pred_name_3_p_0(
  MR_Word Name_4,
  MR_Word STATE_VARIABLE_DeadInfo_0_13,
  MR_Word * STATE_VARIABLE_DeadInfo_14)
{
  {
    MR_bool succeeded;
    MR_Word ModuleInfo_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_DeadInfo_0_13, (MR_Integer) 0))));
    MR_Word Examined_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_DeadInfo_0_13, (MR_Integer) 2))));
    MR_Word Needed_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_DeadInfo_0_13, (MR_Integer) 3))));
    MR_Word STATE_VARIABLE_Queue_15_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_DeadInfo_0_13, (MR_Integer) 1))));
    MR_Word STATE_VARIABLE_NeededNames_16_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_DeadInfo_0_13, (MR_Integer) 4))));

    succeeded = mercury__set_tree234__contains_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), STATE_VARIABLE_NeededNames_16_16, ((MR_Box) (Name_4)));
    if (succeeded)
      *STATE_VARIABLE_DeadInfo_14 = STATE_VARIABLE_DeadInfo_0_13;
    else
    {
      MR_Word PredicateTable_11;
      MR_Word PredIds_12;
      MR_Word STATE_VARIABLE_NeededNames_17_17;
      MR_Word STATE_VARIABLE_Queue_19_19;

      hlds__hlds_module__module_info_get_predicate_table_2_p_0(ModuleInfo_8, &PredicateTable_11);
      mercury__set_tree234__insert_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ((MR_Box) (Name_4)), STATE_VARIABLE_NeededNames_16_16, &STATE_VARIABLE_NeededNames_17_17);
      hlds__pred_table__predicate_table_lookup_sym_4_p_0(PredicateTable_11, (MR_Integer) 1, Name_4, &PredIds_12);
      mercury__queue__put_list_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), PredIds_12, STATE_VARIABLE_Queue_15_15, &STATE_VARIABLE_Queue_19_19);
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        *STATE_VARIABLE_DeadInfo_14 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ModuleInfo_8));
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (STATE_VARIABLE_Queue_19_19));
        MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Examined_9));
        MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Needed_10));
        MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (STATE_VARIABLE_NeededNames_17_17));
      }
    }
  }
}

static void MR_CALL 
transform_hlds__dead_proc_elim__dead_pred_elim_initialize_3_p_0(
  MR_Word PredId_4,
  MR_Word DeadInfo0_5,
  MR_Word * DeadInfo_6)
{
  {
    MR_bool succeeded;
    MR_Word ModuleInfo_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DeadInfo0_5, (MR_Integer) 0))));
    MR_Word Examined_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DeadInfo0_5, (MR_Integer) 2))));
    MR_Word NeededIds_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DeadInfo0_5, (MR_Integer) 3))));
    MR_Word PredInfo_12;
    MR_Word STATE_VARIABLE_Queue_20_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DeadInfo0_5, (MR_Integer) 1))));
    MR_Word STATE_VARIABLE_NeededNames_21_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DeadInfo0_5, (MR_Integer) 4))));
    MR_Word STATE_VARIABLE_NeededNames_25_25;
    MR_Word STATE_VARIABLE_Queue_26_26;
    MR_Word PredModule_13;
    MR_String PredName_14;
    MR_Integer PredArity_15;

    hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo_9, PredId_4, &PredInfo_12);
    PredModule_13 = hlds__hlds_pred__pred_info_module_1_f_0(PredInfo_12);
    PredName_14 = hlds__hlds_pred__pred_info_name_1_f_0(PredInfo_12);
    PredArity_15 = hlds__hlds_pred__pred_info_orig_arity_1_f_0(PredInfo_12);
    succeeded = hlds__hlds_pred__is_unify_index_or_compare_pred_1_p_0(PredInfo_12);
    if (!(succeeded))
    {
      succeeded = mdbcomp__builtin_modules__any_mercury_builtin_module_1_p_0(PredModule_13);
      if (!(succeeded))
      {
        {
          MR_String PredModuleName_16;

          succeeded = mdbcomp__builtin_modules__is_std_lib_module_name_2_p_0(PredModule_13, &PredModuleName_16);
          if (succeeded)
            succeeded = check_hlds__simplify__simplify_proc__simplify_may_introduce_calls_3_p_0(PredModuleName_16, PredName_14, PredArity_15);
        }
        if (!(succeeded))
        {
          {
            MR_Word Var_29;

            Var_29 = mdbcomp__builtin_modules__mercury_exception_module_0_f_0();
            succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(PredModule_13, Var_29);
            if (succeeded)
              succeeded = check_hlds__try_expand__try_expand_may_introduce_calls_2_p_0(PredName_14, PredArity_15);
          }
          if (!(succeeded))
          {
            {
              MR_Word PredStatus_17;
              MR_Word Var_23;

              succeeded = hlds__hlds_pred__pred_info_is_imported_1_p_0(PredInfo_12);
              succeeded = !(succeeded);
              if (succeeded)
              {
                hlds__hlds_pred__pred_info_get_status_2_p_0(PredInfo_12, &PredStatus_17);
                Var_23 = (MR_Word) (PredStatus_17);
                succeeded = (Var_23 != (MR_Word) ((MR_Unsigned) 0U));
              }
            }
            if (!(succeeded))
            {
              {
                MR_Word Var_30;

                hlds__hlds_module__module_info_get_name_2_p_0(ModuleInfo_9, &Var_30);
                succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(PredModule_13, Var_30);
              }
              if (!(succeeded))
              {
                {
                  MR_String Var_18;

                  succeeded = mercury__string__remove_suffix_3_p_0(PredName_14, (MR_String) "_init_any", &Var_18);
                  if (succeeded)
                    succeeded = (PredArity_15 == (MR_Integer) 1);
                }
                if (!(succeeded))
                {
                  MR_Word Var_19;

                  succeeded = hlds__hlds_pred__pred_info_is_promise_2_p_0(PredInfo_12, &Var_19);
                }
              }
            }
          }
        }
      }
    }
    if (succeeded)
    {
      MR_Word Var_24;

      {
        Var_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_24, 0) = ((MR_Box) (PredModule_13));
        MR_hl_field(MR_mktag(1), Var_24, 1) = ((MR_Box) (PredName_14));
      }
      mercury__set_tree234__insert_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ((MR_Box) (Var_24)), STATE_VARIABLE_NeededNames_21_21, &STATE_VARIABLE_NeededNames_25_25);
      mercury__queue__put_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), ((MR_Box) (PredId_4)), STATE_VARIABLE_Queue_20_20, &STATE_VARIABLE_Queue_26_26);
    }
    else
    {
      STATE_VARIABLE_NeededNames_25_25 = STATE_VARIABLE_NeededNames_21_21;
      STATE_VARIABLE_Queue_26_26 = STATE_VARIABLE_Queue_20_20;
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      *DeadInfo_6 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ModuleInfo_9));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (STATE_VARIABLE_Queue_26_26));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Examined_10));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (NeededIds_11));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (STATE_VARIABLE_NeededNames_25_25));
    }
  }
}

static void MR_CALL 
transform_hlds__dead_proc_elim__dead_pred_elim_add_entity_5_p_0(
  MR_Word Entity_6,
  MR_Word STATE_VARIABLE_Queue_0_20,
  MR_Word * STATE_VARIABLE_Queue_21,
  MR_Word STATE_VARIABLE_Preds_0_22,
  MR_Word * STATE_VARIABLE_Preds_23)
{
  switch (MR_tag((MR_Word) Entity_6)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word PredId_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Entity_6, (MR_Integer) 0))));

        mercury__queue__put_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), ((MR_Box) (PredId_9)), STATE_VARIABLE_Queue_0_20, STATE_VARIABLE_Queue_21);
        mercury__set_tree234__insert_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), ((MR_Box) (PredId_9)), STATE_VARIABLE_Preds_0_22, STATE_VARIABLE_Preds_23);
      }
      break;
    case (MR_Integer) 1:
      {
        *STATE_VARIABLE_Queue_21 = STATE_VARIABLE_Queue_0_20;
        *STATE_VARIABLE_Preds_23 = STATE_VARIABLE_Preds_0_22;
      }
      break;
    case (MR_Integer) 2:
      {
        *STATE_VARIABLE_Queue_21 = STATE_VARIABLE_Queue_0_20;
        *STATE_VARIABLE_Preds_23 = STATE_VARIABLE_Preds_0_22;
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Entity_6, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            *STATE_VARIABLE_Queue_21 = STATE_VARIABLE_Queue_0_20;
            *STATE_VARIABLE_Preds_23 = STATE_VARIABLE_Preds_0_22;
          }
          break;
        case (MR_Integer) 1:
          {
            *STATE_VARIABLE_Queue_21 = STATE_VARIABLE_Queue_0_20;
            *STATE_VARIABLE_Preds_23 = STATE_VARIABLE_Preds_0_22;
          }
          break;
      }
      break;
  }
}

static void MR_CALL 
transform_hlds__dead_proc_elim__dead_pred_initialize_referred_preds_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_NeededPreds_0_23,
  MR_Word * STATE_VARIABLE_NeededPreds_24)
{
  {
    MR_Word TypeDefn_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
    MR_Word TypeDefnBody_9;

    hlds__hlds_data__get_type_defn_body_2_p_0(TypeDefn_7, &TypeDefnBody_9);
    switch (MR_tag((MR_Word) TypeDefnBody_9)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word ForeignTypeBody_14 = (MR_Word) ((MR_Word) (TypeDefnBody_9));
          MR_Word C_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ForeignTypeBody_14, (MR_Integer) 0))));
          MR_Word Java_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ForeignTypeBody_14, (MR_Integer) 1))));
          MR_Word CSharp_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ForeignTypeBody_14, (MR_Integer) 2))));
          MR_Word Erlang_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ForeignTypeBody_14, (MR_Integer) 3))));
          MR_Word STATE_VARIABLE_NeededPreds_26_26;
          MR_Word STATE_VARIABLE_NeededPreds_27_27;
          MR_Word STATE_VARIABLE_NeededPreds_28_28;

          transform_hlds__dead_proc_elim__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_97_100_95_112_114_101_100_95_105_110_105_116_105_97_108_105_122_101_95_102_111_114_101_105_110_95_116_121_112_101_95_108_97_110_103_95_98_111_100_121_95_95_91_49_93_95_48_4_p_0(ModuleInfo_5, C_15, STATE_VARIABLE_NeededPreds_0_23, &STATE_VARIABLE_NeededPreds_26_26);
          transform_hlds__dead_proc_elim__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_97_100_95_112_114_101_100_95_105_110_105_116_105_97_108_105_122_101_95_102_111_114_101_105_110_95_116_121_112_101_95_108_97_110_103_95_98_111_100_121_95_95_91_49_93_95_48_4_p_0(ModuleInfo_5, Java_16, STATE_VARIABLE_NeededPreds_26_26, &STATE_VARIABLE_NeededPreds_27_27);
          transform_hlds__dead_proc_elim__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_97_100_95_112_114_101_100_95_105_110_105_116_105_97_108_105_122_101_95_102_111_114_101_105_110_95_116_121_112_101_95_108_97_110_103_95_98_111_100_121_95_95_91_49_93_95_48_4_p_0(ModuleInfo_5, CSharp_17, STATE_VARIABLE_NeededPreds_27_27, &STATE_VARIABLE_NeededPreds_28_28);
          transform_hlds__dead_proc_elim__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_97_100_95_112_114_101_100_95_105_110_105_116_105_97_108_105_122_101_95_102_111_114_101_105_110_95_116_121_112_101_95_108_97_110_103_95_98_111_100_121_95_95_91_49_93_95_48_4_p_0(ModuleInfo_5, Erlang_18, STATE_VARIABLE_NeededPreds_28_28, STATE_VARIABLE_NeededPreds_24);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word MaybeCanon_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TypeDefnBody_9, (MR_Integer) 1))));

          if ((MaybeCanon_11 == (MR_Word) ((MR_Unsigned) 0U)))
            *STATE_VARIABLE_NeededPreds_24 = STATE_VARIABLE_NeededPreds_0_23;
          else
          {
            MR_Word NonCanonical_41 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeCanon_11, (MR_Integer) 0))));
            MR_Word PredTable_42;

            hlds__hlds_module__module_info_get_predicate_table_2_p_0(ModuleInfo_5, &PredTable_42);
            switch (MR_tag((MR_Word) NonCanonical_41)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word UniPredSymName_43 = ((MR_Word) ((MR_hl_field(MR_mktag(0), NonCanonical_41, (MR_Integer) 0))));
                  MR_Word CmpPredSymName_44 = ((MR_Word) ((MR_hl_field(MR_mktag(0), NonCanonical_41, (MR_Integer) 1))));
                  MR_Word UniPredIds_45;
                  MR_Word CmpPredIds_46;
                  MR_Word STATE_VARIABLE_NeededPreds_27_58;

                  hlds__pred_table__predicate_table_lookup_sym_arity_5_p_0(PredTable_42, (MR_Integer) 0, UniPredSymName_43, (MR_Integer) 2, &UniPredIds_45);
                  hlds__pred_table__predicate_table_lookup_sym_arity_5_p_0(PredTable_42, (MR_Integer) 0, CmpPredSymName_44, (MR_Integer) 3, &CmpPredIds_46);
                  mercury__set_tree234__insert_list_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), UniPredIds_45, STATE_VARIABLE_NeededPreds_0_23, &STATE_VARIABLE_NeededPreds_27_58);
                  mercury__set_tree234__insert_list_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), CmpPredIds_46, STATE_VARIABLE_NeededPreds_27_58, STATE_VARIABLE_NeededPreds_24);
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word UniPredSymName_60 = ((MR_Word) ((MR_hl_field(MR_mktag(1), NonCanonical_41, (MR_Integer) 0))));
                  MR_Word UniPredIds_61;

                  hlds__pred_table__predicate_table_lookup_sym_arity_5_p_0(PredTable_42, (MR_Integer) 0, UniPredSymName_60, (MR_Integer) 2, &UniPredIds_61);
                  mercury__set_tree234__insert_list_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), UniPredIds_61, STATE_VARIABLE_NeededPreds_0_23, STATE_VARIABLE_NeededPreds_24);
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word CmpPredSymName_62 = ((MR_Word) ((MR_hl_field(MR_mktag(2), NonCanonical_41, (MR_Integer) 0))));
                  MR_Word CmpPredIds_63;

                  hlds__pred_table__predicate_table_lookup_sym_arity_5_p_0(PredTable_42, (MR_Integer) 0, CmpPredSymName_62, (MR_Integer) 3, &CmpPredIds_63);
                  mercury__set_tree234__insert_list_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), CmpPredIds_63, STATE_VARIABLE_NeededPreds_0_23, STATE_VARIABLE_NeededPreds_24);
                }
                break;
              case (MR_Integer) 3:
                *STATE_VARIABLE_NeededPreds_24 = STATE_VARIABLE_NeededPreds_0_23;
                break;
            }
          }
        }
        break;
      case (MR_Integer) 2:
        *STATE_VARIABLE_NeededPreds_24 = STATE_VARIABLE_NeededPreds_0_23;
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), TypeDefnBody_9, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word DetailsSolver_19 = ((MR_Word) ((MR_hl_field(MR_mktag(3), TypeDefnBody_9, (MR_Integer) 1))));
              MR_Word MaybeCanon_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DetailsSolver_19, (MR_Integer) 1))));

              transform_hlds__dead_proc_elim__dead_pred_initialize_maybe_canonical_4_p_0(ModuleInfo_5, MaybeCanon_31, STATE_VARIABLE_NeededPreds_0_23, STATE_VARIABLE_NeededPreds_24);
            }
            break;
          case (MR_Integer) 1:
            *STATE_VARIABLE_NeededPreds_24 = STATE_VARIABLE_NeededPreds_0_23;
            break;
        }
        break;
    }
  }
}

static void MR_CALL 
transform_hlds__dead_proc_elim__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_97_100_95_112_114_101_100_95_105_110_105_116_105_97_108_105_122_101_95_102_111_114_101_105_110_95_116_121_112_101_95_108_97_110_103_95_98_111_100_121_95_95_91_49_93_95_48_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word ForeignTypeLangBody_6,
  MR_Word STATE_VARIABLE_NeededPreds_0_11,
  MR_Word * STATE_VARIABLE_NeededPreds_12)
{
  if ((ForeignTypeLangBody_6 == (MR_Word) ((MR_Unsigned) 0U)))
    *STATE_VARIABLE_NeededPreds_12 = STATE_VARIABLE_NeededPreds_0_11;
  else
  {
    MR_Word MaybeCanon_9;
    MR_Word Var_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ForeignTypeLangBody_6, (MR_Integer) 0))));

    MaybeCanon_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_13, (MR_Integer) 1))));
    if ((MaybeCanon_9 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_NeededPreds_12 = STATE_VARIABLE_NeededPreds_0_11;
    else
    {
      MR_Word NonCanonical_21 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeCanon_9, (MR_Integer) 0))));
      MR_Word PredTable_22;

      hlds__hlds_module__module_info_get_predicate_table_2_p_0(ModuleInfo_5, &PredTable_22);
      switch (MR_tag((MR_Word) NonCanonical_21)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word UniPredSymName_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), NonCanonical_21, (MR_Integer) 0))));
            MR_Word CmpPredSymName_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), NonCanonical_21, (MR_Integer) 1))));
            MR_Word UniPredIds_25;
            MR_Word CmpPredIds_26;
            MR_Word STATE_VARIABLE_NeededPreds_27_38;

            hlds__pred_table__predicate_table_lookup_sym_arity_5_p_0(PredTable_22, (MR_Integer) 0, UniPredSymName_23, (MR_Integer) 2, &UniPredIds_25);
            hlds__pred_table__predicate_table_lookup_sym_arity_5_p_0(PredTable_22, (MR_Integer) 0, CmpPredSymName_24, (MR_Integer) 3, &CmpPredIds_26);
            mercury__set_tree234__insert_list_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), UniPredIds_25, STATE_VARIABLE_NeededPreds_0_11, &STATE_VARIABLE_NeededPreds_27_38);
            mercury__set_tree234__insert_list_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), CmpPredIds_26, STATE_VARIABLE_NeededPreds_27_38, STATE_VARIABLE_NeededPreds_12);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word UniPredSymName_40 = ((MR_Word) ((MR_hl_field(MR_mktag(1), NonCanonical_21, (MR_Integer) 0))));
            MR_Word UniPredIds_41;

            hlds__pred_table__predicate_table_lookup_sym_arity_5_p_0(PredTable_22, (MR_Integer) 0, UniPredSymName_40, (MR_Integer) 2, &UniPredIds_41);
            mercury__set_tree234__insert_list_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), UniPredIds_41, STATE_VARIABLE_NeededPreds_0_11, STATE_VARIABLE_NeededPreds_12);
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word CmpPredSymName_42 = ((MR_Word) ((MR_hl_field(MR_mktag(2), NonCanonical_21, (MR_Integer) 0))));
            MR_Word CmpPredIds_43;

            hlds__pred_table__predicate_table_lookup_sym_arity_5_p_0(PredTable_22, (MR_Integer) 0, CmpPredSymName_42, (MR_Integer) 3, &CmpPredIds_43);
            mercury__set_tree234__insert_list_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), CmpPredIds_43, STATE_VARIABLE_NeededPreds_0_11, STATE_VARIABLE_NeededPreds_12);
          }
          break;
        case (MR_Integer) 3:
          *STATE_VARIABLE_NeededPreds_12 = STATE_VARIABLE_NeededPreds_0_11;
          break;
      }
    }
  }
}

static void MR_CALL 
transform_hlds__dead_proc_elim__dead_pred_initialize_maybe_canonical_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word MaybeCanon_6,
  MR_Word STATE_VARIABLE_NeededPreds_0_15,
  MR_Word * STATE_VARIABLE_NeededPreds_16)
{
  if ((MaybeCanon_6 == (MR_Word) ((MR_Unsigned) 0U)))
    *STATE_VARIABLE_NeededPreds_16 = STATE_VARIABLE_NeededPreds_0_15;
  else
  {
    MR_Word NonCanonical_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeCanon_6, (MR_Integer) 0))));
    MR_Word PredTable_9;

    hlds__hlds_module__module_info_get_predicate_table_2_p_0(ModuleInfo_5, &PredTable_9);
    switch (MR_tag((MR_Word) NonCanonical_8)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word UniPredSymName_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), NonCanonical_8, (MR_Integer) 0))));
          MR_Word CmpPredSymName_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), NonCanonical_8, (MR_Integer) 1))));
          MR_Word UniPredIds_12;
          MR_Word CmpPredIds_13;
          MR_Word STATE_VARIABLE_NeededPreds_27_27;

          hlds__pred_table__predicate_table_lookup_sym_arity_5_p_0(PredTable_9, (MR_Integer) 0, UniPredSymName_10, (MR_Integer) 2, &UniPredIds_12);
          hlds__pred_table__predicate_table_lookup_sym_arity_5_p_0(PredTable_9, (MR_Integer) 0, CmpPredSymName_11, (MR_Integer) 3, &CmpPredIds_13);
          mercury__set_tree234__insert_list_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), UniPredIds_12, STATE_VARIABLE_NeededPreds_0_15, &STATE_VARIABLE_NeededPreds_27_27);
          mercury__set_tree234__insert_list_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), CmpPredIds_13, STATE_VARIABLE_NeededPreds_27_27, STATE_VARIABLE_NeededPreds_16);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word UniPredSymName_29 = ((MR_Word) ((MR_hl_field(MR_mktag(1), NonCanonical_8, (MR_Integer) 0))));
          MR_Word UniPredIds_30;

          hlds__pred_table__predicate_table_lookup_sym_arity_5_p_0(PredTable_9, (MR_Integer) 0, UniPredSymName_29, (MR_Integer) 2, &UniPredIds_30);
          mercury__set_tree234__insert_list_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), UniPredIds_30, STATE_VARIABLE_NeededPreds_0_15, STATE_VARIABLE_NeededPreds_16);
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word CmpPredSymName_31 = ((MR_Word) ((MR_hl_field(MR_mktag(2), NonCanonical_8, (MR_Integer) 0))));
          MR_Word CmpPredIds_32;

          hlds__pred_table__predicate_table_lookup_sym_arity_5_p_0(PredTable_9, (MR_Integer) 0, CmpPredSymName_31, (MR_Integer) 3, &CmpPredIds_32);
          mercury__set_tree234__insert_list_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), CmpPredIds_32, STATE_VARIABLE_NeededPreds_0_15, STATE_VARIABLE_NeededPreds_16);
        }
        break;
      case (MR_Integer) 3:
        *STATE_VARIABLE_NeededPreds_16 = STATE_VARIABLE_NeededPreds_0_15;
        break;
    }
  }
}

static void MR_CALL 
transform_hlds__dead_proc_elim__dead_proc_maybe_warn_proc_10_p_0_1(
  void * env_ptr_arg)
{
  {
    struct transform_hlds__dead_proc_elim__dead_proc_maybe_warn_proc_10_p_0_env_0_s * env_ptr = (struct transform_hlds__dead_proc_elim__dead_proc_maybe_warn_proc_10_p_0_env_0_s *) (env_ptr_arg);

    MR_builtin_longjmp((env_ptr)->transform_hlds__dead_proc_elim__dead_proc_maybe_warn_proc_10_p_0_env_0__commit_0, 1);
  }
}

static void MR_CALL 
transform_hlds__dead_proc_elim__dead_proc_maybe_warn_proc_10_p_0_3(
  void * env_ptr_arg)
{
  {
    struct transform_hlds__dead_proc_elim__dead_proc_maybe_warn_proc_10_p_0_env_0_s * env_ptr = (struct transform_hlds__dead_proc_elim__dead_proc_maybe_warn_proc_10_p_0_env_0_s *) (env_ptr_arg);

    (env_ptr)->transform_hlds__dead_proc_elim__dead_proc_maybe_warn_proc_10_p_0_env_0__OtherProcId_36 = ((MR_Integer) ((env_ptr)->transform_hlds__dead_proc_elim__dead_proc_maybe_warn_proc_10_p_0_env_0__conv0_OtherProcId_36));
    transform_hlds__dead_proc_elim__dead_proc_maybe_warn_proc_10_p_0_2(env_ptr);
  }
}

static void MR_CALL 
transform_hlds__dead_proc_elim__dead_proc_maybe_warn_proc_10_p_0_2(
  void * env_ptr_arg)
{
  {
    struct transform_hlds__dead_proc_elim__dead_proc_maybe_warn_proc_10_p_0_env_0_s * env_ptr = (struct transform_hlds__dead_proc_elim__dead_proc_maybe_warn_proc_10_p_0_env_0_s *) (env_ptr_arg);

    (env_ptr)->transform_hlds__dead_proc_elim__dead_proc_maybe_warn_proc_10_p_0_env_0__TypeCtorInfo_41_41 = (MR_Word) (&transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_entity_0);
    (env_ptr)->transform_hlds__dead_proc_elim__dead_proc_maybe_warn_proc_10_p_0_env_0__TypeCtorInfo_42_42 = (MR_Word) (&transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_maybe_needed_0);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      (env_ptr)->transform_hlds__dead_proc_elim__dead_proc_maybe_warn_proc_10_p_0_env_0__Var_33 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) ((env_ptr)->transform_hlds__dead_proc_elim__dead_proc_maybe_warn_proc_10_p_0_env_0__PredId_13));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) ((env_ptr)->transform_hlds__dead_proc_elim__dead_proc_maybe_warn_proc_10_p_0_env_0__OtherProcId_36));
    }
    (env_ptr)->transform_hlds__dead_proc_elim__dead_proc_maybe_warn_proc_10_p_0_env_0__succeeded = mercury__map__contains_2_p_0((env_ptr)->transform_hlds__dead_proc_elim__dead_proc_maybe_warn_proc_10_p_0_env_0__TypeCtorInfo_41_41, (env_ptr)->transform_hlds__dead_proc_elim__dead_proc_maybe_warn_proc_10_p_0_env_0__TypeCtorInfo_42_42, (env_ptr)->transform_hlds__dead_proc_elim__dead_proc_maybe_warn_proc_10_p_0_env_0__Needed_12, ((MR_Box) ((env_ptr)->transform_hlds__dead_proc_elim__dead_proc_maybe_warn_proc_10_p_0_env_0__Var_33)));
    if ((env_ptr)->transform_hlds__dead_proc_elim__dead_proc_maybe_warn_proc_10_p_0_env_0__succeeded)
      transform_hlds__dead_proc_elim__dead_proc_maybe_warn_proc_10_p_0_1(env_ptr);
  }
}

static void MR_CALL 
transform_hlds__dead_proc_elim__dead_proc_maybe_warn_proc_10_p_0_4(
  void * env_ptr_arg)
{
  {
    struct transform_hlds__dead_proc_elim__dead_proc_maybe_warn_proc_10_p_0_env_0_s * env_ptr = (struct transform_hlds__dead_proc_elim__dead_proc_maybe_warn_proc_10_p_0_env_0_s *) (env_ptr_arg);

    if (MR_builtin_setjmp((env_ptr)->transform_hlds__dead_proc_elim__dead_proc_maybe_warn_proc_10_p_0_env_0__commit_0) == 0)
      {
        mercury__list__member_2_p_1((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), &(env_ptr)->transform_hlds__dead_proc_elim__dead_proc_maybe_warn_proc_10_p_0_env_0__conv0_OtherProcId_36, (env_ptr)->transform_hlds__dead_proc_elim__dead_proc_maybe_warn_proc_10_p_0_env_0__AllProcsInPred_16, transform_hlds__dead_proc_elim__dead_proc_maybe_warn_proc_10_p_0_3, env_ptr);
        (env_ptr)->transform_hlds__dead_proc_elim__dead_proc_maybe_warn_proc_10_p_0_env_0__succeeded = MR_FALSE;
      }
    else
      (env_ptr)->transform_hlds__dead_proc_elim__dead_proc_maybe_warn_proc_10_p_0_env_0__succeeded = MR_TRUE;
  }
}

static void MR_CALL 
transform_hlds__dead_proc_elim__dead_proc_maybe_warn_proc_10_p_0_5(
  void * env_ptr_arg)
{
  {
    struct transform_hlds__dead_proc_elim__dead_proc_maybe_warn_proc_10_p_0_env_0_s * env_ptr = (struct transform_hlds__dead_proc_elim__dead_proc_maybe_warn_proc_10_p_0_env_0_s *) (env_ptr_arg);

    MR_builtin_longjmp((env_ptr)->transform_hlds__dead_proc_elim__dead_proc_maybe_warn_proc_10_p_0_env_0__commit_1, 1);
  }
}

static void MR_CALL 
transform_hlds__dead_proc_elim__dead_proc_maybe_warn_proc_10_p_0_7(
  void * env_ptr_arg)
{
  {
    struct transform_hlds__dead_proc_elim__dead_proc_maybe_warn_proc_10_p_0_env_0_s * env_ptr = (struct transform_hlds__dead_proc_elim__dead_proc_maybe_warn_proc_10_p_0_env_0_s *) (env_ptr_arg);

    (env_ptr)->transform_hlds__dead_proc_elim__dead_proc_maybe_warn_proc_10_p_0_env_0__SuppressPredKind_37 = ((MR_Word) ((env_ptr)->transform_hlds__dead_proc_elim__dead_proc_maybe_warn_proc_10_p_0_env_0__conv1_SuppressPredKind_37));
    transform_hlds__dead_proc_elim__dead_proc_maybe_warn_proc_10_p_0_6(env_ptr);
  }
}

static void MR_CALL 
transform_hlds__dead_proc_elim__dead_proc_maybe_warn_proc_10_p_0_6(
  void * env_ptr_arg)
{
  {
    struct transform_hlds__dead_proc_elim__dead_proc_maybe_warn_proc_10_p_0_env_0_s * env_ptr = (struct transform_hlds__dead_proc_elim__dead_proc_maybe_warn_proc_10_p_0_env_0_s *) (env_ptr_arg);

    (env_ptr)->transform_hlds__dead_proc_elim__dead_proc_maybe_warn_proc_10_p_0_env_0__TypeCtorInfo_44_44 = (MR_Word) (&transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_entity_0);
    (env_ptr)->transform_hlds__dead_proc_elim__dead_proc_maybe_warn_proc_10_p_0_env_0__TypeCtorInfo_45_45 = (MR_Word) (&transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_maybe_needed_0);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      (env_ptr)->transform_hlds__dead_proc_elim__dead_proc_maybe_warn_proc_10_p_0_env_0__SuppressMutableEntity_27 = base;
      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 1U));
      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) ((env_ptr)->transform_hlds__dead_proc_elim__dead_proc_maybe_warn_proc_10_p_0_env_0__MutableModuleName_22));
      MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) ((env_ptr)->transform_hlds__dead_proc_elim__dead_proc_maybe_warn_proc_10_p_0_env_0__MutableName_23));
      MR_hl_field(MR_mktag(3), base, 3) = (MR_Box) ((MR_Unsigned) ((env_ptr)->transform_hlds__dead_proc_elim__dead_proc_maybe_warn_proc_10_p_0_env_0__SuppressPredKind_37));
    }
    (env_ptr)->transform_hlds__dead_proc_elim__dead_proc_maybe_warn_proc_10_p_0_env_0__succeeded = mercury__map__contains_2_p_0((env_ptr)->transform_hlds__dead_proc_elim__dead_proc_maybe_warn_proc_10_p_0_env_0__TypeCtorInfo_44_44, (env_ptr)->transform_hlds__dead_proc_elim__dead_proc_maybe_warn_proc_10_p_0_env_0__TypeCtorInfo_45_45, (env_ptr)->transform_hlds__dead_proc_elim__dead_proc_maybe_warn_proc_10_p_0_env_0__Needed_12, ((MR_Box) ((env_ptr)->transform_hlds__dead_proc_elim__dead_proc_maybe_warn_proc_10_p_0_env_0__SuppressMutableEntity_27)));
    if ((env_ptr)->transform_hlds__dead_proc_elim__dead_proc_maybe_warn_proc_10_p_0_env_0__succeeded)
      transform_hlds__dead_proc_elim__dead_proc_maybe_warn_proc_10_p_0_5(env_ptr);
  }
}

static void MR_CALL 
transform_hlds__dead_proc_elim__dead_proc_maybe_warn_proc_10_p_0_8(
  void * env_ptr_arg)
{
  {
    struct transform_hlds__dead_proc_elim__dead_proc_maybe_warn_proc_10_p_0_env_0_s * env_ptr = (struct transform_hlds__dead_proc_elim__dead_proc_maybe_warn_proc_10_p_0_env_0_s *) (env_ptr_arg);

    if (MR_builtin_setjmp((env_ptr)->transform_hlds__dead_proc_elim__dead_proc_maybe_warn_proc_10_p_0_env_0__commit_1) == 0)
      {
        mercury__list__member_2_p_1((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mutable_pred_kind_0), &(env_ptr)->transform_hlds__dead_proc_elim__dead_proc_maybe_warn_proc_10_p_0_env_0__conv1_SuppressPredKind_37, (env_ptr)->transform_hlds__dead_proc_elim__dead_proc_maybe_warn_proc_10_p_0_env_0__SuppressPredKinds_25, transform_hlds__dead_proc_elim__dead_proc_maybe_warn_proc_10_p_0_7, env_ptr);
        (env_ptr)->transform_hlds__dead_proc_elim__dead_proc_maybe_warn_proc_10_p_0_env_0__succeeded = MR_FALSE;
      }
    else
      (env_ptr)->transform_hlds__dead_proc_elim__dead_proc_maybe_warn_proc_10_p_0_env_0__succeeded = MR_TRUE;
  }
}

static void MR_CALL 
transform_hlds__dead_proc_elim__dead_proc_maybe_warn_proc_10_p_0(
  MR_Word ModuleInfo_11,
  MR_Word Needed_12,
  MR_Word PredId_13,
  MR_Word PredInfo_14,
  MR_Word WarnWithLiveSiblings_15,
  MR_Word AllProcsInPred_16,
  MR_Word ProcTable_17,
  MR_Integer ProcId_18,
  MR_Word STATE_VARIABLE_Specs_0_31,
  MR_Word * STATE_VARIABLE_Specs_32)
{
  {
    struct transform_hlds__dead_proc_elim__dead_proc_maybe_warn_proc_10_p_0_env_0_s env;

    (env).transform_hlds__dead_proc_elim__dead_proc_maybe_warn_proc_10_p_0_env_0__Needed_12 = Needed_12;
    (env).transform_hlds__dead_proc_elim__dead_proc_maybe_warn_proc_10_p_0_env_0__PredId_13 = PredId_13;
    (env).transform_hlds__dead_proc_elim__dead_proc_maybe_warn_proc_10_p_0_env_0__AllProcsInPred_16 = AllProcsInPred_16;
    {
      MR_Word Var_34;

      {
        Var_34 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_34, 0) = ((MR_Box) ((env).transform_hlds__dead_proc_elim__dead_proc_maybe_warn_proc_10_p_0_env_0__PredId_13));
        MR_hl_field(MR_mktag(0), Var_34, 1) = ((MR_Box) (ProcId_18));
      }
      (env).transform_hlds__dead_proc_elim__dead_proc_maybe_warn_proc_10_p_0_env_0__succeeded = mercury__map__contains_2_p_0((MR_Word) (&transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_entity_0), (MR_Word) (&transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_maybe_needed_0), (env).transform_hlds__dead_proc_elim__dead_proc_maybe_warn_proc_10_p_0_env_0__Needed_12, ((MR_Box) (Var_34)));
    }
    if (!((env).transform_hlds__dead_proc_elim__dead_proc_maybe_warn_proc_10_p_0_env_0__succeeded))
    {
      (env).transform_hlds__dead_proc_elim__dead_proc_maybe_warn_proc_10_p_0_env_0__succeeded = (WarnWithLiveSiblings_15 == (MR_Integer) 0);
      if ((env).transform_hlds__dead_proc_elim__dead_proc_maybe_warn_proc_10_p_0_env_0__succeeded)
        transform_hlds__dead_proc_elim__dead_proc_maybe_warn_proc_10_p_0_4(&env);
      if (!((env).transform_hlds__dead_proc_elim__dead_proc_maybe_warn_proc_10_p_0_env_0__succeeded))
      {
        MR_Word Origin_21;
        MR_Word PredKind_24;
        MR_Unsigned packed_word_0;

        hlds__hlds_pred__pred_info_get_origin_2_p_0(PredInfo_14, &Origin_21);
        (env).transform_hlds__dead_proc_elim__dead_proc_maybe_warn_proc_10_p_0_env_0__succeeded = ((((MR_tag((MR_Word) Origin_21)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Origin_21, (MR_Integer) 0)))) == (MR_Integer) 6)));
        if ((env).transform_hlds__dead_proc_elim__dead_proc_maybe_warn_proc_10_p_0_env_0__succeeded)
        {
          (env).transform_hlds__dead_proc_elim__dead_proc_maybe_warn_proc_10_p_0_env_0__MutableModuleName_22 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Origin_21, (MR_Integer) 1))));
          (env).transform_hlds__dead_proc_elim__dead_proc_maybe_warn_proc_10_p_0_env_0__MutableName_23 = ((MR_String) ((MR_hl_field(MR_mktag(3), Origin_21, (MR_Integer) 2))));
          packed_word_0 = (MR_Unsigned) ((MR_hl_field(MR_mktag(3), Origin_21, (MR_Integer) 3)));
          PredKind_24 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Origin_21, (MR_Integer) 3))) & (MR_Integer) 15);
          (env).transform_hlds__dead_proc_elim__dead_proc_maybe_warn_proc_10_p_0_env_0__SuppressPredKinds_25 = ((&transform_hlds__dead_proc_elim_vector_common_11[0 + PredKind_24]))->transform_hlds__dead_proc_elim__vector_common_type_11_0__vct_11_f_0;
          transform_hlds__dead_proc_elim__dead_proc_maybe_warn_proc_10_p_0_8(&env);
        }
      }
    }
    if ((env).transform_hlds__dead_proc_elim__dead_proc_maybe_warn_proc_10_p_0_env_0__succeeded)
      *STATE_VARIABLE_Specs_32 = STATE_VARIABLE_Specs_0_31;
    else
    {
      MR_Word ProcInfo_28;
      MR_Word Context_29;
      MR_Word Spec_30;
      MR_Box conv2_ProcInfo_28;

      mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), ProcTable_17, ((MR_Box) (ProcId_18)), &conv2_ProcInfo_28);
      ProcInfo_28 = ((MR_Word) (conv2_ProcInfo_28));
      hlds__hlds_pred__proc_info_get_context_2_p_0(ProcInfo_28, &Context_29);
      Spec_30 = transform_hlds__dead_proc_elim__warn_dead_proc_4_f_0(ModuleInfo_11, (env).transform_hlds__dead_proc_elim__dead_proc_maybe_warn_proc_10_p_0_env_0__PredId_13, ProcId_18, Context_29);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *STATE_VARIABLE_Specs_32 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_30));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_31));
      }
    }
  }
}

static MR_Word MR_CALL 
transform_hlds__dead_proc_elim__warn_dead_proc_4_f_0(
  MR_Word ModuleInfo_6,
  MR_Word PredId_7,
  MR_Integer ProcId_8,
  MR_Word Context_9)
{
  {
    MR_Word Spec_10;
    MR_Word ProcPieces_11;
    MR_Word Pieces_12;
    MR_Word Msg_13;
    MR_Word Var_15;
    MR_Word Var_20;
    MR_Word Var_27;
    MR_Word Var_28;
    MR_Word Var_32;

    {
      Var_15 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_15, 0) = ((MR_Box) (PredId_7));
      MR_hl_field(MR_mktag(0), Var_15, 1) = ((MR_Box) (ProcId_8));
    }
    ProcPieces_11 = hlds__hlds_error_util__describe_one_proc_name_3_f_0(ModuleInfo_6, (MR_Integer) 1, Var_15);
    Var_20 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), ProcPieces_11, (MR_Word) (MR_mkword(MR_mktag(1), &transform_hlds__dead_proc_elim_scalar_common_1[21])));
    Pieces_12 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &transform_hlds__dead_proc_elim_scalar_common_1[23])), Var_20);
    {
      Var_28 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_28, 0) = ((MR_Box) (Pieces_12));
    }
    {
      Var_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_27, 0) = ((MR_Box) (Var_28));
      MR_hl_field(MR_mktag(1), Var_27, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Msg_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Msg_13, 0) = ((MR_Box) (Context_9));
      MR_hl_field(MR_mktag(1), Msg_13, 1) = ((MR_Box) (Var_27));
    }
    {
      Var_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_32, 0) = ((MR_Box) (Msg_13));
      MR_hl_field(MR_mktag(1), Var_32, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Spec_10 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Spec_10, 0) = ((MR_Box) ((MR_Unsigned) 4U));
      MR_hl_field(MR_mktag(0), Spec_10, 1) = ((MR_Box) ((MR_Unsigned) 52U));
      MR_hl_field(MR_mktag(0), Spec_10, 2) = ((MR_Box) (Var_32));
    }
    return Spec_10;
  }
}

static void MR_CALL 
transform_hlds__dead_proc_elim__dead_proc_warn_pred_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_STATE_VARIABLE_Specs_32;

    transform_hlds__dead_proc_elim__dead_proc_maybe_warn_proc_10_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 7)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 8)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 9)))), ((MR_Integer) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_STATE_VARIABLE_Specs_32);
    *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_Specs_32));
  }
}

static void MR_CALL 
transform_hlds__dead_proc_elim__dead_proc_warn_pred_7_p_0(
  MR_Word ModuleInfo_8,
  MR_Word PredTable_9,
  MR_Word WarnWithLiveSiblings_10,
  MR_Word Needed_11,
  MR_Word PredId_12,
  MR_Word STATE_VARIABLE_Specs_0_19,
  MR_Word * STATE_VARIABLE_Specs_20)
{
  {
    MR_bool succeeded;
    MR_Word PredInfo_14;
    MR_Word PredStatus_15;
    MR_Box conv0_PredInfo_14;
    MR_String PredName_16;
    MR_Word Var_21;
    MR_String Var_22;
    MR_String Var_23;

    mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0), PredTable_9, ((MR_Box) (PredId_12)), &conv0_PredInfo_14);
    PredInfo_14 = ((MR_Word) (conv0_PredInfo_14));
    hlds__hlds_pred__pred_info_get_status_2_p_0(PredInfo_14, &PredStatus_15);
    Var_21 = (MR_Word) (PredStatus_15);
    succeeded = (Var_21 == (MR_Word) ((MR_Unsigned) 32U));
    if (succeeded)
    {
      succeeded = hlds__hlds_pred__is_unify_index_or_compare_pred_1_p_0(PredInfo_14);
      succeeded = !(succeeded);
      if (succeeded)
      {
        PredName_16 = hlds__hlds_pred__pred_info_name_1_f_0(PredInfo_14);
        Var_22 = (MR_String) "IntroducedFrom__";
        succeeded = mercury__string__prefix_2_p_0(PredName_16, Var_22);
        succeeded = !(succeeded);
        if (succeeded)
        {
          Var_23 = (MR_String) "TypeSpecOf__";
          succeeded = mercury__string__prefix_2_p_0(PredName_16, Var_23);
          succeeded = !(succeeded);
        }
      }
    }
    if (succeeded)
    {
      MR_Word ProcIds_17;
      MR_Word ProcTable_18;
      MR_Word Var_24;
      MR_Box conv2_STATE_VARIABLE_Specs_20;

      ProcIds_17 = hlds__hlds_pred__pred_info_procids_1_f_0(PredInfo_14);
      hlds__hlds_pred__pred_info_get_proc_table_2_p_0(PredInfo_14, &ProcTable_18);
      {
        Var_24 = (MR_Word) MR_new_object(MR_Word, (10 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_24, 0) = ((MR_Box) (&transform_hlds__dead_proc_elim_scalar_common_10[0]));
        MR_hl_field(MR_mktag(0), Var_24, 1) = ((MR_Box) (transform_hlds__dead_proc_elim__dead_proc_warn_pred_7_p_0_1));
        MR_hl_field(MR_mktag(0), Var_24, 2) = ((MR_Box) ((MR_Integer) 7));
        MR_hl_field(MR_mktag(0), Var_24, 3) = ((MR_Box) (ModuleInfo_8));
        MR_hl_field(MR_mktag(0), Var_24, 4) = ((MR_Box) (Needed_11));
        MR_hl_field(MR_mktag(0), Var_24, 5) = ((MR_Box) (PredId_12));
        MR_hl_field(MR_mktag(0), Var_24, 6) = ((MR_Box) (PredInfo_14));
        MR_hl_field(MR_mktag(0), Var_24, 7) = ((MR_Box) (WarnWithLiveSiblings_10));
        MR_hl_field(MR_mktag(0), Var_24, 8) = ((MR_Box) (ProcIds_17));
        MR_hl_field(MR_mktag(0), Var_24, 9) = ((MR_Box) (ProcTable_18));
      }
      mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&transform_hlds__dead_proc_elim_scalar_common_1[5]), Var_24, ProcIds_17, ((MR_Box) (STATE_VARIABLE_Specs_0_19)), &conv2_STATE_VARIABLE_Specs_20);
      *STATE_VARIABLE_Specs_20 = ((MR_Word) (conv2_STATE_VARIABLE_Specs_20));
    }
    else
      *STATE_VARIABLE_Specs_20 = STATE_VARIABLE_Specs_0_19;
  }
}

static void MR_CALL 
transform_hlds__dead_proc_elim__dead_proc_eliminate_proc_8_p_0(
  MR_Word PredId_9,
  MR_Word Keep_10,
  MR_Word ProcElimInfo_11,
  MR_Integer ProcId_12,
  MR_Word STATE_VARIABLE_ProcTable_0_20,
  MR_Word * STATE_VARIABLE_ProcTable_21,
  MR_Word STATE_VARIABLE_Changed_0_22,
  MR_Word * STATE_VARIABLE_Changed_23)
{
  {
    MR_bool succeeded;
    MR_Word Needed_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ProcElimInfo_11, (MR_Integer) 0))));
    MR_Word ModuleInfo_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ProcElimInfo_11, (MR_Integer) 1))));

    {
      MR_Word Var_24;

      {
        Var_24 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_24, 0) = ((MR_Box) (PredId_9));
        MR_hl_field(MR_mktag(0), Var_24, 1) = ((MR_Box) (ProcId_12));
      }
      succeeded = mercury__map__contains_2_p_0((MR_Word) (&transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_entity_0), (MR_Word) (&transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_maybe_needed_0), Needed_15, ((MR_Box) (Var_24)));
    }
    if (!(succeeded))
    {
      MR_Integer Var_41;

      succeeded = (Keep_10 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        Var_41 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), Keep_10, (MR_Integer) 0))));
        succeeded = (ProcId_12 == Var_41);
      }
    }
    if (succeeded)
    {
      *STATE_VARIABLE_Changed_23 = STATE_VARIABLE_Changed_0_22;
      *STATE_VARIABLE_ProcTable_21 = STATE_VARIABLE_ProcTable_0_20;
    }
    else
    {
      MR_Word Globals_17;
      MR_Word VeryVerbose_18;

      mercury__map__delete_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), ((MR_Box) (ProcId_12)), STATE_VARIABLE_ProcTable_0_20, STATE_VARIABLE_ProcTable_21);
      *STATE_VARIABLE_Changed_23 = (MR_Integer) 1;
      hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_16, &Globals_17);
      libs__globals__lookup_bool_option_3_p_0(Globals_17, (MR_Integer) 64, &VeryVerbose_18);
      switch (VeryVerbose_18) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
          }
          break;
        case (MR_Integer) 1:
          hlds__passes_aux__write_proc_progress_message_6_p_0((MR_String) "% Eliminated the dead procedure ", PredId_9, ProcId_12, ModuleInfo_16);
          break;
      }
    }
  }
}

static void MR_CALL 
transform_hlds__dead_proc_elim__dead_proc_eliminate_pred_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv5_LambdaHeadVar__3_42;

    transform_hlds__dead_proc_elim__IntroducedFrom__pred__dead_proc_eliminate_pred__1011__1_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Integer) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv5_LambdaHeadVar__3_42);
    *wrapper_arg_3 = ((MR_Box) (conv5_LambdaHeadVar__3_42));
  }
}

static void MR_CALL 
transform_hlds__dead_proc_elim__dead_proc_eliminate_pred_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv2_STATE_VARIABLE_ProcTable_21;
    MR_Word conv1_STATE_VARIABLE_Changed_23;

    transform_hlds__dead_proc_elim__dead_proc_eliminate_proc_8_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Integer) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_STATE_VARIABLE_ProcTable_21, ((MR_Word) (wrapper_arg_4)), &conv1_STATE_VARIABLE_Changed_23);
    *wrapper_arg_3 = ((MR_Box) (conv2_STATE_VARIABLE_ProcTable_21));
    *wrapper_arg_5 = ((MR_Box) (conv1_STATE_VARIABLE_Changed_23));
  }
}

static void MR_CALL 
transform_hlds__dead_proc_elim__dead_proc_eliminate_pred_4_p_0(
  MR_Word ElimOptImported_5,
  MR_Word PredId_6,
  MR_Word STATE_VARIABLE_ProcElimInfo_0_32,
  MR_Word * STATE_VARIABLE_ProcElimInfo_33)
{
  {
    MR_bool succeeded;
    MR_Word Needed_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ProcElimInfo_0_32, (MR_Integer) 0))));
    MR_Word ModuleInfo_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ProcElimInfo_0_32, (MR_Integer) 1))));
    MR_Word PredTable0_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ProcElimInfo_0_32, (MR_Integer) 2))));
    MR_Word Changed0_11 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ProcElimInfo_0_32, (MR_Integer) 3))) & (MR_Integer) 1);
    MR_Word PredInfo0_12;
    MR_Word PredStatus_13;
    MR_Box conv0_PredInfo0_12;
    MR_Word Keep_14;
    MR_Word Var_81;

    mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0), PredTable0_10, ((MR_Box) (PredId_6)), &conv0_PredInfo0_12);
    PredInfo0_12 = ((MR_Word) (conv0_PredInfo0_12));
    hlds__hlds_pred__pred_info_get_status_2_p_0(PredInfo0_12, &PredStatus_13);
    Var_81 = (MR_Word) (PredStatus_13);
    switch (MR_tag((MR_Word) Var_81)) {
      default:
        succeeded = MR_FALSE;
        break;
      case (MR_Integer) 0:
        switch (MR_unmkbody(Var_81)) {
          default:
            succeeded = MR_FALSE;
            break;
          case (MR_Integer) 2:
            {
              Keep_14 = (MR_Word) ((MR_Unsigned) 0U);
              succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Integer InitProcId_15;

              hlds__hlds_pred__in_in_unification_proc_id_1_p_0(&InitProcId_15);
              {
                Keep_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Keep_14, 0) = ((MR_Box) (InitProcId_15));
              }
              succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 8:
            {
              Keep_14 = (MR_Word) ((MR_Unsigned) 0U);
              succeeded = MR_TRUE;
            }
            break;
        }
        break;
    }
    if (succeeded)
    {
      MR_Word ProcIds_16;
      MR_Word ProcTable0_17;
      MR_Word ProcTable_18;
      MR_Word Changed_19;
      MR_Word PredInfo_20;
      MR_Word PredTable_21;
      MR_Word Var_37;
      MR_Box conv4_ProcTable_18;
      MR_Box conv3_Changed_19;

      ProcIds_16 = hlds__hlds_pred__pred_info_procids_1_f_0(PredInfo0_12);
      hlds__hlds_pred__pred_info_get_proc_table_2_p_0(PredInfo0_12, &ProcTable0_17);
      {
        Var_37 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_37, 0) = ((MR_Box) (&transform_hlds__dead_proc_elim_scalar_common_9[0]));
        MR_hl_field(MR_mktag(0), Var_37, 1) = ((MR_Box) (transform_hlds__dead_proc_elim__dead_proc_eliminate_pred_4_p_0_1));
        MR_hl_field(MR_mktag(0), Var_37, 2) = ((MR_Box) ((MR_Integer) 3));
        MR_hl_field(MR_mktag(0), Var_37, 3) = ((MR_Box) (PredId_6));
        MR_hl_field(MR_mktag(0), Var_37, 4) = ((MR_Box) (Keep_14));
        MR_hl_field(MR_mktag(0), Var_37, 5) = ((MR_Box) (STATE_VARIABLE_ProcElimInfo_0_32));
      }
      mercury__list__foldl2_6_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&transform_hlds__dead_proc_elim_scalar_common_2[2]), (MR_Word) (&mercury__bool__bool__type_ctor_info_bool_0), Var_37, ProcIds_16, ((MR_Box) (ProcTable0_17)), &conv4_ProcTable_18, ((MR_Box) (Changed0_11)), &conv3_Changed_19);
      ProcTable_18 = ((MR_Word) (conv4_ProcTable_18));
      Changed_19 = ((MR_Word) (conv3_Changed_19));
      hlds__hlds_pred__pred_info_set_proc_table_3_p_0(ProcTable_18, PredInfo0_12, &PredInfo_20);
      mercury__map__det_update_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0), ((MR_Box) (PredId_6)), ((MR_Box) (PredInfo_20)), PredTable0_10, &PredTable_21);
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        *STATE_VARIABLE_ProcElimInfo_33 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Needed_8));
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ModuleInfo_9));
        MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (PredTable_21));
        MR_hl_field(MR_mktag(0), base, 3) = (MR_Box) ((MR_Unsigned) (Changed_19));
      }
    }
    else
    {
      MR_Word Var_39;

      succeeded = (ElimOptImported_5 == (MR_Integer) 0);
      if (succeeded)
      {
        Var_39 = (MR_Word) (PredStatus_13);
        succeeded = (Var_39 == (MR_Word) ((MR_Unsigned) 0U));
      }
      if (succeeded)
      {
        MR_Word DestroyGoal_22;
        MR_Word PredInfo1_28;
        MR_Word Globals_29;
        MR_Word VeryVerbose_30;
        MR_Word ProcIds_55;
        MR_Word ProcTable0_56;
        MR_Word ProcTable_57;
        MR_Word PredInfo_59;
        MR_Word PredTable_60;
        MR_Box conv6_ProcTable_57;

        ProcIds_55 = hlds__hlds_pred__pred_info_procids_1_f_0(PredInfo0_12);
        hlds__hlds_pred__pred_info_get_proc_table_2_p_0(PredInfo0_12, &ProcTable0_56);
        {
          DestroyGoal_22 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), DestroyGoal_22, 0) = ((MR_Box) (&transform_hlds__dead_proc_elim_scalar_common_5[3]));
          MR_hl_field(MR_mktag(0), DestroyGoal_22, 1) = ((MR_Box) (transform_hlds__dead_proc_elim__dead_proc_eliminate_pred_4_p_0_2));
          MR_hl_field(MR_mktag(0), DestroyGoal_22, 2) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), DestroyGoal_22, 3) = ((MR_Box) (ProcTable0_56));
        }
        mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&transform_hlds__dead_proc_elim_scalar_common_2[2]), DestroyGoal_22, ProcIds_55, ((MR_Box) (ProcTable0_56)), &conv6_ProcTable_57);
        ProcTable_57 = ((MR_Word) (conv6_ProcTable_57));
        hlds__hlds_pred__pred_info_set_proc_table_3_p_0(ProcTable_57, PredInfo0_12, &PredInfo1_28);
        hlds__hlds_pred__pred_info_set_status_3_p_0((MR_Word) (((MR_Box) (MR_mkword(MR_mktag(2), &transform_hlds__dead_proc_elim_scalar_common_3[4])))), PredInfo1_28, &PredInfo_59);
        mercury__map__det_update_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0), ((MR_Box) (PredId_6)), ((MR_Box) (PredInfo_59)), PredTable0_10, &PredTable_60);
        hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_9, &Globals_29);
        libs__globals__lookup_bool_option_3_p_0(Globals_29, (MR_Integer) 64, &VeryVerbose_30);
        switch (VeryVerbose_30) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
            }
            break;
          case (MR_Integer) 1:
            hlds__passes_aux__write_pred_progress_message_5_p_0((MR_String) "% Eliminated opt_imported predicate ", PredId_6, ModuleInfo_9);
            break;
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          *STATE_VARIABLE_ProcElimInfo_33 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Needed_8));
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ModuleInfo_9));
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (PredTable_60));
          MR_hl_field(MR_mktag(0), base, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
        }
      }
      else
        *STATE_VARIABLE_ProcElimInfo_33 = STATE_VARIABLE_ProcElimInfo_0_32;
    }
  }
}

static void MR_CALL 
transform_hlds__dead_proc_elim__need_trace_goal_proc_5_p_0(
  MR_Word TraceGoalProc_6,
  MR_Word STATE_VARIABLE_Queue_0_12,
  MR_Word * STATE_VARIABLE_Queue_13,
  MR_Word STATE_VARIABLE_Needed_0_14,
  MR_Word * STATE_VARIABLE_Needed_15)
{
  {
    MR_Word PredId_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TraceGoalProc_6, (MR_Integer) 0))));
    MR_Integer ProcId_10 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), TraceGoalProc_6, (MR_Integer) 1))));
    MR_Word Entity_11;

    {
      Entity_11 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Entity_11, 0) = ((MR_Box) (PredId_9));
      MR_hl_field(MR_mktag(0), Entity_11, 1) = ((MR_Box) (ProcId_10));
    }
    mercury__map__set_4_p_0((MR_Word) (&transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_entity_0), (MR_Word) (&transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_maybe_needed_0), ((MR_Box) (Entity_11)), ((MR_Box) ((MR_Unsigned) 0U)), STATE_VARIABLE_Needed_0_14, STATE_VARIABLE_Needed_15);
    mercury__queue__put_3_p_0((MR_Word) (&transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_entity_0), ((MR_Box) (Entity_11)), STATE_VARIABLE_Queue_0_12, STATE_VARIABLE_Queue_13);
  }
}

static void MR_CALL 
transform_hlds__dead_proc_elim__get_class_interface_pred_proc_5_p_0(
  MR_Word ClassProc_6,
  MR_Word STATE_VARIABLE_Queue_0_12,
  MR_Word * STATE_VARIABLE_Queue_13,
  MR_Word STATE_VARIABLE_Needed_0_14,
  MR_Word * STATE_VARIABLE_Needed_15)
{
  {
    MR_Word PredId_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ClassProc_6, (MR_Integer) 0))));
    MR_Integer ProcId_10 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ClassProc_6, (MR_Integer) 1))));
    MR_Word Entity_11;

    {
      Entity_11 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Entity_11, 0) = ((MR_Box) (PredId_9));
      MR_hl_field(MR_mktag(0), Entity_11, 1) = ((MR_Box) (ProcId_10));
    }
    mercury__queue__put_3_p_0((MR_Word) (&transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_entity_0), ((MR_Box) (Entity_11)), STATE_VARIABLE_Queue_0_12, STATE_VARIABLE_Queue_13);
    mercury__map__set_4_p_0((MR_Word) (&transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_entity_0), (MR_Word) (&transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_maybe_needed_0), ((MR_Box) (Entity_11)), ((MR_Box) ((MR_Unsigned) 0U)), STATE_VARIABLE_Needed_0_14, STATE_VARIABLE_Needed_15);
  }
}

static void MR_CALL 
transform_hlds__dead_proc_elim__get_class_pred_procs_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_STATE_VARIABLE_Queue_13;
    MR_Word conv0_STATE_VARIABLE_Needed_15;

    transform_hlds__dead_proc_elim__get_class_interface_pred_proc_5_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_STATE_VARIABLE_Queue_13, ((MR_Word) (wrapper_arg_4)), &conv0_STATE_VARIABLE_Needed_15);
    *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_Queue_13));
    *wrapper_arg_5 = ((MR_Box) (conv0_STATE_VARIABLE_Needed_15));
  }
}

static void MR_CALL 
transform_hlds__dead_proc_elim__get_class_pred_procs_5_p_0(
  MR_Word Class_6,
  MR_Word STATE_VARIABLE_Queue_0_10,
  MR_Word * STATE_VARIABLE_Queue_11,
  MR_Word STATE_VARIABLE_Needed_0_12,
  MR_Word * STATE_VARIABLE_Needed_13)
{
  {
    MR_Word Methods_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Class_6, (MR_Integer) 7))));
    MR_Box conv3_STATE_VARIABLE_Queue_11;
    MR_Box conv2_STATE_VARIABLE_Needed_13;

    mercury__list__foldl2_6_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__dead_proc_elim_scalar_common_1[4]), (MR_Word) (&transform_hlds__dead_proc_elim_scalar_common_2[1]), (MR_Word) (&transform_hlds__dead_proc_elim_scalar_common_2[13]), Methods_9, ((MR_Box) (STATE_VARIABLE_Queue_0_10)), &conv3_STATE_VARIABLE_Queue_11, ((MR_Box) (STATE_VARIABLE_Needed_0_12)), &conv2_STATE_VARIABLE_Needed_13);
    *STATE_VARIABLE_Queue_11 = ((MR_Word) (conv3_STATE_VARIABLE_Queue_11));
    *STATE_VARIABLE_Needed_13 = ((MR_Word) (conv2_STATE_VARIABLE_Needed_13));
  }
}

static void MR_CALL 
transform_hlds__dead_proc_elim__get_instance_pred_procs_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_STATE_VARIABLE_Queue_13;
    MR_Word conv0_STATE_VARIABLE_Needed_15;

    transform_hlds__dead_proc_elim__get_class_interface_pred_proc_5_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_STATE_VARIABLE_Queue_13, ((MR_Word) (wrapper_arg_4)), &conv0_STATE_VARIABLE_Needed_15);
    *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_Queue_13));
    *wrapper_arg_5 = ((MR_Box) (conv0_STATE_VARIABLE_Needed_15));
  }
}

static void MR_CALL 
transform_hlds__dead_proc_elim__get_instance_pred_procs_5_p_0(
  MR_Word Instance_6,
  MR_Word STATE_VARIABLE_Queue_0_20,
  MR_Word * STATE_VARIABLE_Queue_21,
  MR_Word STATE_VARIABLE_Needed_0_22,
  MR_Word * STATE_VARIABLE_Needed_23)
{
  {
    MR_Word PredProcIds_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Instance_6, (MR_Integer) 7))));

    if ((PredProcIds_16 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_Queue_21 = STATE_VARIABLE_Queue_0_20;
      *STATE_VARIABLE_Needed_23 = STATE_VARIABLE_Needed_0_22;
    }
    else
    {
      MR_Word Ids_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), PredProcIds_16, (MR_Integer) 0))));
      MR_Box conv3_STATE_VARIABLE_Queue_21;
      MR_Box conv2_STATE_VARIABLE_Needed_23;

      mercury__list__foldl2_6_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__dead_proc_elim_scalar_common_1[4]), (MR_Word) (&transform_hlds__dead_proc_elim_scalar_common_2[1]), (MR_Word) (&transform_hlds__dead_proc_elim_scalar_common_2[12]), Ids_19, ((MR_Box) (STATE_VARIABLE_Queue_0_20)), &conv3_STATE_VARIABLE_Queue_21, ((MR_Box) (STATE_VARIABLE_Needed_0_22)), &conv2_STATE_VARIABLE_Needed_23);
      *STATE_VARIABLE_Queue_21 = ((MR_Word) (conv3_STATE_VARIABLE_Queue_21));
      *STATE_VARIABLE_Needed_23 = ((MR_Word) (conv2_STATE_VARIABLE_Needed_23));
    }
  }
}

static MR_bool MR_CALL 
transform_hlds__dead_proc_elim__dead_pred_elim_2_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = transform_hlds__dead_proc_elim__IntroducedFrom__pred__dead_pred_elim__1355__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__dead_proc_elim__dead_pred_elim_2_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv8_LambdaHeadVar__3_57;

    transform_hlds__dead_proc_elim__IntroducedFrom__pred__dead_pred_elim__1343__1_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv8_LambdaHeadVar__3_57);
    *wrapper_arg_3 = ((MR_Box) (conv8_LambdaHeadVar__3_57));
  }
}

static void MR_CALL 
transform_hlds__dead_proc_elim__dead_pred_elim_2_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv6_DeadInfo_6;

    transform_hlds__dead_proc_elim__dead_pred_elim_initialize_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv6_DeadInfo_6);
    *wrapper_arg_3 = ((MR_Box) (conv6_DeadInfo_6));
  }
}

static void MR_CALL 
transform_hlds__dead_proc_elim__dead_pred_elim_2_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv4_STATE_VARIABLE_NeededPreds_24;

    transform_hlds__dead_proc_elim__dead_pred_initialize_referred_preds_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv4_STATE_VARIABLE_NeededPreds_24);
    *wrapper_arg_3 = ((MR_Box) (conv4_STATE_VARIABLE_NeededPreds_24));
  }
}

static void MR_CALL 
transform_hlds__dead_proc_elim__dead_pred_elim_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_STATE_VARIABLE_Queue_21;
    MR_Word conv0_STATE_VARIABLE_Preds_23;

    transform_hlds__dead_proc_elim__dead_pred_elim_add_entity_5_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_STATE_VARIABLE_Queue_21, ((MR_Word) (wrapper_arg_4)), &conv0_STATE_VARIABLE_Preds_23);
    *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_Queue_21));
    *wrapper_arg_5 = ((MR_Box) (conv0_STATE_VARIABLE_Preds_23));
  }
}

void MR_CALL 
transform_hlds__dead_proc_elim__dead_pred_elim_2_p_0(
  MR_Word STATE_VARIABLE_ModuleInfo_0_47,
  MR_Word * STATE_VARIABLE_ModuleInfo_48)
{
  {
    MR_bool succeeded;
    MR_Word Queue0_4;
    MR_Word Needed0_5;
    MR_Word PragmaExports_6;
    MR_Word Needed1_8;
    MR_Word Instances_9;
    MR_Word Classes_10;
    MR_Word Needed_12;
    MR_Word Entities_13;
    MR_Word Queue1_14;
    MR_Word NeededPreds0_15;
    MR_Word Queue_16;
    MR_Word NeededPreds1_17;
    MR_Word TypeTable_18;
    MR_Word TypeCtorDefns_19;
    MR_Word NeededPreds2_20;
    MR_Word PredIds_21;
    MR_Word Preds0_22;
    MR_Word Names0_23;
    MR_Word DeadInfo0_24;
    MR_Word DeadInfo1_25;
    MR_Word DeadInfo_26;
    MR_Word NeededPreds3_29;
    MR_Word TypeSpecInfo0_31;
    MR_Word TypeSpecProcs0_32;
    MR_Word TypeSpecForcePreds0_33;
    MR_Word SpecMap0_34;
    MR_Word PragmaMap0_35;
    MR_Word NeededPredList3_36;
    MR_Word NeededPreds_41;
    MR_Word TypeSpecForcePreds_42;
    MR_Word TypeSpecInfo_43;
    MR_Word PredTable0_44;
    MR_Word PartialQualInfo_45;
    MR_Word PredTable_46;
    MR_Word Var_49;
    MR_Word Var_51;
    MR_Word STATE_VARIABLE_ModuleInfo_53_53;
    MR_Word Var_54;
    MR_Word Var_58;
    MR_Word STATE_VARIABLE_ModuleInfo_59_59;
    MR_Word Var_60;
    MR_Word Var_7;
    MR_Word Var_11;
    MR_Box conv3_Queue_16;
    MR_Box conv2_NeededPreds1_17;
    MR_Box conv5_NeededPreds2_20;
    MR_Box conv7_DeadInfo1_25;
    MR_Box conv9_NeededPreds_41;

    mercury__queue__init_1_p_0((MR_Word) (&transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_entity_0), &Queue0_4);
    mercury__map__init_1_p_0((MR_Word) (&transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_entity_0), (MR_Word) (&transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_maybe_needed_0), &Needed0_5);
    hlds__hlds_module__module_info_get_pragma_exported_procs_2_p_0(STATE_VARIABLE_ModuleInfo_0_47, &PragmaExports_6);
    Var_49 = mercury__cord__list_1_f_0((MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_pragma_exported_proc_0), PragmaExports_6);
    transform_hlds__dead_proc_elim__dead_proc_initialize_pragma_exports_5_p_0(Var_49, Queue0_4, &Var_7, Needed0_5, &Needed1_8);
    hlds__hlds_module__module_info_get_instance_table_2_p_0(STATE_VARIABLE_ModuleInfo_0_47, &Instances_9);
    hlds__hlds_module__module_info_get_class_table_2_p_0(STATE_VARIABLE_ModuleInfo_0_47, &Classes_10);
    transform_hlds__dead_proc_elim__dead_proc_initialize_class_methods_6_p_0(Classes_10, Instances_9, Queue0_4, &Var_11, Needed1_8, &Needed_12);
    mercury__map__keys_2_p_0((MR_Word) (&transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_entity_0), (MR_Word) (&transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_maybe_needed_0), Needed_12, &Entities_13);
    mercury__queue__init_1_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), &Queue1_14);
    NeededPreds0_15 = mercury__set_tree234__init_0_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0));
    mercury__list__foldl2_6_p_0((MR_Word) (&transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_entity_0), (MR_Word) (&transform_hlds__dead_proc_elim_scalar_common_1[0]), (MR_Word) (&transform_hlds__dead_proc_elim_scalar_common_1[1]), (MR_Word) (&transform_hlds__dead_proc_elim_scalar_common_2[10]), Entities_13, ((MR_Box) (Queue1_14)), &conv3_Queue_16, ((MR_Box) (NeededPreds0_15)), &conv2_NeededPreds1_17);
    Queue_16 = ((MR_Word) (conv3_Queue_16));
    NeededPreds1_17 = ((MR_Word) (conv2_NeededPreds1_17));
    hlds__hlds_module__module_info_get_type_table_2_p_0(STATE_VARIABLE_ModuleInfo_0_47, &TypeTable_18);
    hlds__hlds_data__get_all_type_ctor_defns_2_p_0(TypeTable_18, &TypeCtorDefns_19);
    {
      Var_51 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_51, 0) = ((MR_Box) (&transform_hlds__dead_proc_elim_scalar_common_5[1]));
      MR_hl_field(MR_mktag(0), Var_51, 1) = ((MR_Box) (transform_hlds__dead_proc_elim__dead_pred_elim_2_p_0_2));
      MR_hl_field(MR_mktag(0), Var_51, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_51, 3) = ((MR_Box) (STATE_VARIABLE_ModuleInfo_0_47));
    }
    mercury__list__foldl_4_p_0((MR_Word) (&transform_hlds__dead_proc_elim_scalar_common_2[0]), (MR_Word) (&transform_hlds__dead_proc_elim_scalar_common_1[1]), Var_51, TypeCtorDefns_19, ((MR_Box) (NeededPreds1_17)), &conv5_NeededPreds2_20);
    NeededPreds2_20 = ((MR_Word) (conv5_NeededPreds2_20));
    hlds__hlds_module__module_info_get_valid_pred_ids_2_p_0(STATE_VARIABLE_ModuleInfo_0_47, &PredIds_21);
    Preds0_22 = mercury__set_tree234__init_0_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0));
    Names0_23 = mercury__set_tree234__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0));
    {
      DeadInfo0_24 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), DeadInfo0_24, 0) = ((MR_Box) (STATE_VARIABLE_ModuleInfo_0_47));
      MR_hl_field(MR_mktag(0), DeadInfo0_24, 1) = ((MR_Box) (Queue_16));
      MR_hl_field(MR_mktag(0), DeadInfo0_24, 2) = ((MR_Box) (Preds0_22));
      MR_hl_field(MR_mktag(0), DeadInfo0_24, 3) = ((MR_Box) (NeededPreds2_20));
      MR_hl_field(MR_mktag(0), DeadInfo0_24, 4) = ((MR_Box) (Names0_23));
    }
    mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_pred_elim_info_0), (MR_Word) (&transform_hlds__dead_proc_elim_scalar_common_2[11]), PredIds_21, ((MR_Box) (DeadInfo0_24)), &conv7_DeadInfo1_25);
    DeadInfo1_25 = ((MR_Word) (conv7_DeadInfo1_25));
    transform_hlds__dead_proc_elim__dead_pred_elim_analyze_2_p_0(DeadInfo1_25, &DeadInfo_26);
    STATE_VARIABLE_ModuleInfo_53_53 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DeadInfo_26, (MR_Integer) 0))));
    NeededPreds3_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DeadInfo_26, (MR_Integer) 3))));
    hlds__hlds_module__module_info_get_type_spec_info_2_p_0(STATE_VARIABLE_ModuleInfo_53_53, &TypeSpecInfo0_31);
    TypeSpecProcs0_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeSpecInfo0_31, (MR_Integer) 0))));
    TypeSpecForcePreds0_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeSpecInfo0_31, (MR_Integer) 1))));
    SpecMap0_34 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeSpecInfo0_31, (MR_Integer) 2))));
    PragmaMap0_35 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeSpecInfo0_31, (MR_Integer) 3))));
    NeededPredList3_36 = mercury__set_tree234__to_sorted_list_1_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), NeededPreds3_29);
    {
      Var_54 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_54, 0) = ((MR_Box) (&transform_hlds__dead_proc_elim_scalar_common_5[2]));
      MR_hl_field(MR_mktag(0), Var_54, 1) = ((MR_Box) (transform_hlds__dead_proc_elim__dead_pred_elim_2_p_0_4));
      MR_hl_field(MR_mktag(0), Var_54, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_54, 3) = ((MR_Box) (SpecMap0_34));
    }
    mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&transform_hlds__dead_proc_elim_scalar_common_1[1]), Var_54, NeededPredList3_36, ((MR_Box) (NeededPreds3_29)), &conv9_NeededPreds_41);
    NeededPreds_41 = ((MR_Word) (conv9_NeededPreds_41));
    {
      Var_58 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_58, 0) = ((MR_Box) (&transform_hlds__dead_proc_elim_scalar_common_8[0]));
      MR_hl_field(MR_mktag(0), Var_58, 1) = ((MR_Box) (transform_hlds__dead_proc_elim__dead_pred_elim_2_p_0_5));
      MR_hl_field(MR_mktag(0), Var_58, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_58, 3) = ((MR_Box) (NeededPreds_41));
    }
    TypeSpecForcePreds_42 = mercury__set__filter_2_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), Var_58, TypeSpecForcePreds0_33);
    {
      TypeSpecInfo_43 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeSpecInfo_43, 0) = ((MR_Box) (TypeSpecProcs0_32));
      MR_hl_field(MR_mktag(0), TypeSpecInfo_43, 1) = ((MR_Box) (TypeSpecForcePreds_42));
      MR_hl_field(MR_mktag(0), TypeSpecInfo_43, 2) = ((MR_Box) (SpecMap0_34));
      MR_hl_field(MR_mktag(0), TypeSpecInfo_43, 3) = ((MR_Box) (PragmaMap0_35));
    }
    hlds__hlds_module__module_info_set_type_spec_info_3_p_0(TypeSpecInfo_43, STATE_VARIABLE_ModuleInfo_53_53, &STATE_VARIABLE_ModuleInfo_59_59);
    hlds__hlds_module__module_info_get_predicate_table_2_p_0(STATE_VARIABLE_ModuleInfo_59_59, &PredTable0_44);
    hlds__hlds_module__module_info_get_partial_qualifier_info_2_p_0(STATE_VARIABLE_ModuleInfo_59_59, &PartialQualInfo_45);
    Var_60 = mercury__set_tree234__to_sorted_list_1_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), NeededPreds_41);
    hlds__pred_table__predicate_table_restrict_4_p_0(PartialQualInfo_45, Var_60, PredTable0_44, &PredTable_46);
    hlds__hlds_module__module_info_set_predicate_table_3_p_0(PredTable_46, STATE_VARIABLE_ModuleInfo_59_59, STATE_VARIABLE_ModuleInfo_48);
  }
}

static void MR_CALL 
transform_hlds__dead_proc_elim__dead_pred_elim_analyze_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_STATE_VARIABLE_DeadInfo_7;

    transform_hlds__dead_proc_elim__dead_pred_elim_process_clause_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_STATE_VARIABLE_DeadInfo_7);
    *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_DeadInfo_7));
  }
}

static void MR_CALL 
transform_hlds__dead_proc_elim__dead_pred_elim_analyze_2_p_0(
  MR_Word STATE_VARIABLE_DeadInfo_0_15,
  MR_Word * STATE_VARIABLE_DeadInfo_16)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word ModuleInfo_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_DeadInfo_0_15, (MR_Integer) 0))));
    MR_Word NeededNames_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_DeadInfo_0_15, (MR_Integer) 4))));
    MR_Word STATE_VARIABLE_Queue_17_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_DeadInfo_0_15, (MR_Integer) 1))));
    MR_Word STATE_VARIABLE_Examined_18_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_DeadInfo_0_15, (MR_Integer) 2))));
    MR_Word STATE_VARIABLE_Needed_19_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_DeadInfo_0_15, (MR_Integer) 3))));
    MR_Word PredId_9;
    MR_Word STATE_VARIABLE_Queue_20_20;
    MR_Box conv0_PredId_9;

    // setup for model_det tailcalls optimized into a loop
    ;
    succeeded = mercury__queue__get_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), &conv0_PredId_9, STATE_VARIABLE_Queue_17_17, &STATE_VARIABLE_Queue_20_20);
    if (succeeded)
    {
      PredId_9 = ((MR_Word) (conv0_PredId_9));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_Word STATE_VARIABLE_DeadInfo_21_21;
      MR_Word next_value_of_STATE_VARIABLE_DeadInfo_0_15;

      succeeded = mercury__set_tree234__contains_2_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), STATE_VARIABLE_Examined_18_18, ((MR_Box) (PredId_9)));
      if (succeeded)
        {
          STATE_VARIABLE_DeadInfo_21_21 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_DeadInfo_21_21, 0) = ((MR_Box) (ModuleInfo_7));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_DeadInfo_21_21, 1) = ((MR_Box) (STATE_VARIABLE_Queue_20_20));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_DeadInfo_21_21, 2) = ((MR_Box) (STATE_VARIABLE_Examined_18_18));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_DeadInfo_21_21, 3) = ((MR_Box) (STATE_VARIABLE_Needed_19_19));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_DeadInfo_21_21, 4) = ((MR_Box) (NeededNames_8));
        }
      else
      {
        MR_Word PredInfo_10;
        MR_Word ClausesInfo_11;
        MR_Word ClausesRep_12;
        MR_Word Clauses_14;
        MR_Word STATE_VARIABLE_Needed_22_22;
        MR_Word STATE_VARIABLE_Examined_23_23;
        MR_Word STATE_VARIABLE_DeadInfo_24_24;
        MR_Word _ItemNumbers_13;
        MR_Box conv2_STATE_VARIABLE_DeadInfo_21_21;

        mercury__set_tree234__insert_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), ((MR_Box) (PredId_9)), STATE_VARIABLE_Needed_19_19, &STATE_VARIABLE_Needed_22_22);
        mercury__set_tree234__insert_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), ((MR_Box) (PredId_9)), STATE_VARIABLE_Examined_18_18, &STATE_VARIABLE_Examined_23_23);
        {
          STATE_VARIABLE_DeadInfo_24_24 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_DeadInfo_24_24, 0) = ((MR_Box) (ModuleInfo_7));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_DeadInfo_24_24, 1) = ((MR_Box) (STATE_VARIABLE_Queue_20_20));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_DeadInfo_24_24, 2) = ((MR_Box) (STATE_VARIABLE_Examined_23_23));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_DeadInfo_24_24, 3) = ((MR_Box) (STATE_VARIABLE_Needed_22_22));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_DeadInfo_24_24, 4) = ((MR_Box) (NeededNames_8));
        }
        hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo_7, PredId_9, &PredInfo_10);
        hlds__hlds_pred__pred_info_get_clauses_info_2_p_0(PredInfo_10, &ClausesInfo_11);
        hlds__hlds_clauses__clauses_info_get_clauses_rep_3_p_0(ClausesInfo_11, &ClausesRep_12, &_ItemNumbers_13);
        hlds__hlds_clauses__get_clause_list_maybe_repeated_2_p_0(ClausesRep_12, &Clauses_14);
        mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_clause_0), (MR_Word) (&transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_pred_elim_info_0), (MR_Word) (&transform_hlds__dead_proc_elim_scalar_common_2[9]), Clauses_14, ((MR_Box) (STATE_VARIABLE_DeadInfo_24_24)), &conv2_STATE_VARIABLE_DeadInfo_21_21);
        STATE_VARIABLE_DeadInfo_21_21 = ((MR_Word) (conv2_STATE_VARIABLE_DeadInfo_21_21));
      }
      // direct tailcall eliminated
      ;
      next_value_of_STATE_VARIABLE_DeadInfo_0_15 = STATE_VARIABLE_DeadInfo_21_21;
      STATE_VARIABLE_DeadInfo_0_15 = next_value_of_STATE_VARIABLE_DeadInfo_0_15;
      continue;
    }
    else
      *STATE_VARIABLE_DeadInfo_16 = STATE_VARIABLE_DeadInfo_0_15;
    break;
  }
}

static void MR_CALL 
transform_hlds__dead_proc_elim__dead_proc_initialize_class_methods_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv5_STATE_VARIABLE_Queue_11;
    MR_Word conv4_STATE_VARIABLE_Needed_13;

    transform_hlds__dead_proc_elim__get_class_pred_procs_5_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv5_STATE_VARIABLE_Queue_11, ((MR_Word) (wrapper_arg_4)), &conv4_STATE_VARIABLE_Needed_13);
    *wrapper_arg_3 = ((MR_Box) (conv5_STATE_VARIABLE_Queue_11));
    *wrapper_arg_5 = ((MR_Box) (conv4_STATE_VARIABLE_Needed_13));
  }
}

static void MR_CALL 
transform_hlds__dead_proc_elim__dead_proc_initialize_class_methods_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_STATE_VARIABLE_Queue_21;
    MR_Word conv0_STATE_VARIABLE_Needed_23;

    transform_hlds__dead_proc_elim__get_instance_pred_procs_5_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_STATE_VARIABLE_Queue_21, ((MR_Word) (wrapper_arg_4)), &conv0_STATE_VARIABLE_Needed_23);
    *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_Queue_21));
    *wrapper_arg_5 = ((MR_Box) (conv0_STATE_VARIABLE_Needed_23));
  }
}

static void MR_CALL 
transform_hlds__dead_proc_elim__dead_proc_initialize_class_methods_6_p_0(
  MR_Word Classes_7,
  MR_Word Instances_8,
  MR_Word STATE_VARIABLE_Queue_0_14,
  MR_Word * STATE_VARIABLE_Queue_15,
  MR_Word STATE_VARIABLE_Needed_0_16,
  MR_Word * STATE_VARIABLE_Needed_17)
{
  {
    MR_Word InstanceDefnsLists_11;
    MR_Word InstanceDefns_12;
    MR_Word ClassDefns_13;
    MR_Word STATE_VARIABLE_Queue_19_19;
    MR_Word STATE_VARIABLE_Needed_20_20;
    MR_Box conv3_STATE_VARIABLE_Queue_19_19;
    MR_Box conv2_STATE_VARIABLE_Needed_20_20;
    MR_Box conv7_STATE_VARIABLE_Queue_15;
    MR_Box conv6_STATE_VARIABLE_Needed_17;

    mercury__map__values_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0), (MR_Word) (&transform_hlds__dead_proc_elim_scalar_common_1[3]), Instances_8, &InstanceDefnsLists_11);
    mercury__list__condense_2_p_0((MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_instance_defn_0), InstanceDefnsLists_11, &InstanceDefns_12);
    mercury__list__foldl2_6_p_0((MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_instance_defn_0), (MR_Word) (&transform_hlds__dead_proc_elim_scalar_common_1[4]), (MR_Word) (&transform_hlds__dead_proc_elim_scalar_common_2[1]), (MR_Word) (&transform_hlds__dead_proc_elim_scalar_common_2[7]), InstanceDefns_12, ((MR_Box) (STATE_VARIABLE_Queue_0_14)), &conv3_STATE_VARIABLE_Queue_19_19, ((MR_Box) (STATE_VARIABLE_Needed_0_16)), &conv2_STATE_VARIABLE_Needed_20_20);
    STATE_VARIABLE_Queue_19_19 = ((MR_Word) (conv3_STATE_VARIABLE_Queue_19_19));
    STATE_VARIABLE_Needed_20_20 = ((MR_Word) (conv2_STATE_VARIABLE_Needed_20_20));
    mercury__map__values_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0), (MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_class_defn_0), Classes_7, &ClassDefns_13);
    mercury__list__foldl2_6_p_0((MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_class_defn_0), (MR_Word) (&transform_hlds__dead_proc_elim_scalar_common_1[4]), (MR_Word) (&transform_hlds__dead_proc_elim_scalar_common_2[1]), (MR_Word) (&transform_hlds__dead_proc_elim_scalar_common_2[8]), ClassDefns_13, ((MR_Box) (STATE_VARIABLE_Queue_19_19)), &conv7_STATE_VARIABLE_Queue_15, ((MR_Box) (STATE_VARIABLE_Needed_20_20)), &conv6_STATE_VARIABLE_Needed_17);
    *STATE_VARIABLE_Queue_15 = ((MR_Word) (conv7_STATE_VARIABLE_Queue_15));
    *STATE_VARIABLE_Needed_17 = ((MR_Word) (conv6_STATE_VARIABLE_Needed_17));
  }
}

static void MR_CALL 
transform_hlds__dead_proc_elim__dead_proc_warn_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_Specs_20;

    transform_hlds__dead_proc_elim__dead_proc_warn_pred_7_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_Specs_20);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_Specs_20));
  }
}

void MR_CALL 
transform_hlds__dead_proc_elim__dead_proc_warn_2_p_0(
  MR_Word ModuleInfo_3,
  MR_Word * Specs_4)
{
  {
    MR_Word Needed_6;
    MR_Word PredIds_13;
    MR_Word PredTable_14;
    MR_Word Globals_15;
    MR_Word WarnWithLiveSiblings_16;
    MR_Word Var_18;
    MR_Box conv1_Specs_4;

    transform_hlds__dead_proc_elim__do_dead_proc_analyze_3_p_0(ModuleInfo_3, (MR_Word) (&transform_hlds__dead_proc_elim_scalar_common_3[3]), &Needed_6);
    hlds__hlds_module__module_info_get_valid_pred_ids_2_p_0(ModuleInfo_3, &PredIds_13);
    hlds__hlds_module__module_info_get_preds_2_p_0(ModuleInfo_3, &PredTable_14);
    hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_3, &Globals_15);
    libs__globals__lookup_bool_option_3_p_0(Globals_15, (MR_Integer) 40, &WarnWithLiveSiblings_16);
    {
      Var_18 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_18, 0) = ((MR_Box) (&transform_hlds__dead_proc_elim_scalar_common_6[0]));
      MR_hl_field(MR_mktag(0), Var_18, 1) = ((MR_Box) (transform_hlds__dead_proc_elim__dead_proc_warn_2_p_0_1));
      MR_hl_field(MR_mktag(0), Var_18, 2) = ((MR_Box) ((MR_Integer) 4));
      MR_hl_field(MR_mktag(0), Var_18, 3) = ((MR_Box) (ModuleInfo_3));
      MR_hl_field(MR_mktag(0), Var_18, 4) = ((MR_Box) (PredTable_14));
      MR_hl_field(MR_mktag(0), Var_18, 5) = ((MR_Box) (WarnWithLiveSiblings_16));
      MR_hl_field(MR_mktag(0), Var_18, 6) = ((MR_Box) (Needed_6));
    }
    mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&transform_hlds__dead_proc_elim_scalar_common_1[5]), Var_18, PredIds_13, ((MR_Box) ((MR_Unsigned) 0U)), &conv1_Specs_4);
    *Specs_4 = ((MR_Word) (conv1_Specs_4));
  }
}

static void MR_CALL 
transform_hlds__dead_proc_elim__dead_proc_elim_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_ProcElimInfo_33;

    transform_hlds__dead_proc_elim__dead_proc_eliminate_pred_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_ProcElimInfo_33);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_ProcElimInfo_33));
  }
}

void MR_CALL 
transform_hlds__dead_proc_elim__dead_proc_elim_3_p_0(
  MR_Word ElimOptImported_4,
  MR_Word STATE_VARIABLE_ModuleInfo_0_8,
  MR_Word * STATE_VARIABLE_ModuleInfo_9)
{
  {
    MR_Word Needed_7;
    MR_Word PredIds_20;
    MR_Word PredTable0_21;
    MR_Word ProcElimInfo0_23;
    MR_Word ProcElimInfo_24;
    MR_Word PredTable_25;
    MR_Word Changed_26;
    MR_Word TypeCtorGenInfos0_27;
    MR_Word TypeCtorGenInfos_28;
    MR_Word ConstStructDb0_29;
    MR_Word ConstNumStructs0_30;
    MR_Word ConstStructDb_31;
    MR_Word Var_32;
    MR_Word STATE_VARIABLE_Needed_24_33;
    MR_Word STATE_VARIABLE_ModuleInfo_25_34;
    MR_Word STATE_VARIABLE_ModuleInfo_26_35;
    MR_Word STATE_VARIABLE_ModuleInfo_27_36;
    MR_Word STATE_VARIABLE_ModuleInfo_28_37;
    MR_Box conv1_ProcElimInfo_24;

    transform_hlds__dead_proc_elim__do_dead_proc_analyze_3_p_0(STATE_VARIABLE_ModuleInfo_0_8, (MR_Word) (&transform_hlds__dead_proc_elim_scalar_common_3[2]), &Needed_7);
    hlds__hlds_module__module_info_get_valid_pred_ids_2_p_0(STATE_VARIABLE_ModuleInfo_0_8, &PredIds_20);
    hlds__hlds_module__module_info_get_preds_2_p_0(STATE_VARIABLE_ModuleInfo_0_8, &PredTable0_21);
    {
      ProcElimInfo0_23 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ProcElimInfo0_23, 0) = ((MR_Box) (Needed_7));
      MR_hl_field(MR_mktag(0), ProcElimInfo0_23, 1) = ((MR_Box) (STATE_VARIABLE_ModuleInfo_0_8));
      MR_hl_field(MR_mktag(0), ProcElimInfo0_23, 2) = ((MR_Box) (PredTable0_21));
      MR_hl_field(MR_mktag(0), ProcElimInfo0_23, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    }
    {
      Var_32 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_32, 0) = ((MR_Box) (&transform_hlds__dead_proc_elim_scalar_common_5[0]));
      MR_hl_field(MR_mktag(0), Var_32, 1) = ((MR_Box) (transform_hlds__dead_proc_elim__dead_proc_elim_3_p_0_1));
      MR_hl_field(MR_mktag(0), Var_32, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_32, 3) = ((MR_Box) (ElimOptImported_4));
    }
    mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_proc_elim_info_0), Var_32, PredIds_20, ((MR_Box) (ProcElimInfo0_23)), &conv1_ProcElimInfo_24);
    ProcElimInfo_24 = ((MR_Word) (conv1_ProcElimInfo_24));
    STATE_VARIABLE_Needed_24_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ProcElimInfo_24, (MR_Integer) 0))));
    STATE_VARIABLE_ModuleInfo_25_34 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ProcElimInfo_24, (MR_Integer) 1))));
    PredTable_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ProcElimInfo_24, (MR_Integer) 2))));
    Changed_26 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), ProcElimInfo_24, (MR_Integer) 3))) & (MR_Integer) 1);
    hlds__hlds_module__module_info_set_preds_3_p_0(PredTable_25, STATE_VARIABLE_ModuleInfo_25_34, &STATE_VARIABLE_ModuleInfo_26_35);
    hlds__hlds_module__module_info_get_type_ctor_gen_infos_2_p_0(STATE_VARIABLE_ModuleInfo_26_35, &TypeCtorGenInfos0_27);
    transform_hlds__dead_proc_elim__dead_proc_eliminate_type_ctor_infos_3_p_0(TypeCtorGenInfos0_27, STATE_VARIABLE_Needed_24_33, &TypeCtorGenInfos_28);
    hlds__hlds_module__module_info_set_type_ctor_gen_infos_3_p_0(TypeCtorGenInfos_28, STATE_VARIABLE_ModuleInfo_26_35, &STATE_VARIABLE_ModuleInfo_27_36);
    hlds__hlds_module__module_info_get_const_struct_db_2_p_0(STATE_VARIABLE_ModuleInfo_27_36, &ConstStructDb0_29);
    hlds__const_struct__const_struct_db_get_structs_2_p_0(ConstStructDb0_29, &ConstNumStructs0_30);
    transform_hlds__dead_proc_elim__dead_proc_eliminate_const_structs_4_p_0(ConstNumStructs0_30, STATE_VARIABLE_Needed_24_33, ConstStructDb0_29, &ConstStructDb_31);
    hlds__hlds_module__module_info_set_const_struct_db_3_p_0(ConstStructDb_31, STATE_VARIABLE_ModuleInfo_27_36, &STATE_VARIABLE_ModuleInfo_28_37);
    switch (Changed_26) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *STATE_VARIABLE_ModuleInfo_9 = STATE_VARIABLE_ModuleInfo_28_37;
        break;
      case (MR_Integer) 1:
        hlds__hlds_module__module_info_clobber_dependency_info_2_p_0(STATE_VARIABLE_ModuleInfo_28_37, STATE_VARIABLE_ModuleInfo_9);
        break;
    }
  }
}

static void MR_CALL 
transform_hlds__dead_proc_elim__dead_proc_eliminate_const_structs_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_ConstStructDb_0_3,
  MR_Word * STATE_VARIABLE_ConstStructDb_4)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_ConstStructDb_4 = STATE_VARIABLE_ConstStructDb_0_3;
    else
    {
      MR_Integer ConstNum_9;
      MR_Word ConstNumStructs_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Entity_14;
      MR_Word Var_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word STATE_VARIABLE_ConstStructDb_19_19;
      MR_Box conv0_Var_15;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_ConstStructDb_0_3;

      ConstNum_9 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Var_18, (MR_Integer) 0))));
      {
        Entity_14 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Entity_14, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(3), Entity_14, 1) = ((MR_Box) (ConstNum_9));
      }
      succeeded = mercury__map__search_3_p_0((MR_Word) (&transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_entity_0), (MR_Word) (&transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_maybe_needed_0), HeadVar__2_2, ((MR_Box) (Entity_14)), &conv0_Var_15);
      if (succeeded)
        succeeded = MR_TRUE;
      if (succeeded)
        STATE_VARIABLE_ConstStructDb_19_19 = STATE_VARIABLE_ConstStructDb_0_3;
      else
        hlds__const_struct__delete_const_struct_3_p_0(ConstNum_9, STATE_VARIABLE_ConstStructDb_0_3, &STATE_VARIABLE_ConstStructDb_19_19);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = ConstNumStructs_11;
      next_value_of_STATE_VARIABLE_ConstStructDb_0_3 = STATE_VARIABLE_ConstStructDb_19_19;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_ConstStructDb_0_3 = next_value_of_STATE_VARIABLE_ConstStructDb_0_3;
      continue;
    }
    break;
  }
}

static void MR_CALL 
transform_hlds__dead_proc_elim__dead_proc_eliminate_type_ctor_infos_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  {
    MR_bool succeeded;

    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word TypeCtorGenInfo0_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word TypeCtorGenInfos0_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word TypeCtorGenInfos1_9;
      MR_Word ModuleName_11;
      MR_String TypeName_12;
      MR_Integer Arity_13;
      MR_Word Entity_18;
      MR_Box conv0_Var_19;

      transform_hlds__dead_proc_elim__dead_proc_eliminate_type_ctor_infos_3_p_0(TypeCtorGenInfos0_6, HeadVar__2_2, &TypeCtorGenInfos1_9);
      ModuleName_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeCtorGenInfo0_5, (MR_Integer) 1))));
      TypeName_12 = ((MR_String) ((MR_hl_field(MR_mktag(0), TypeCtorGenInfo0_5, (MR_Integer) 2))));
      Arity_13 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), TypeCtorGenInfo0_5, (MR_Integer) 3))));
      {
        Entity_18 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(2), Entity_18, 0) = ((MR_Box) (ModuleName_11));
        MR_hl_field(MR_mktag(2), Entity_18, 1) = ((MR_Box) (TypeName_12));
        MR_hl_field(MR_mktag(2), Entity_18, 2) = ((MR_Box) (Arity_13));
      }
      succeeded = mercury__map__search_3_p_0((MR_Word) (&transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_entity_0), (MR_Word) (&transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_maybe_needed_0), HeadVar__2_2, ((MR_Box) (Entity_18)), &conv0_Var_19);
      if (succeeded)
        succeeded = MR_TRUE;
      if (succeeded)
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__3_3 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (TypeCtorGenInfo0_5));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (TypeCtorGenInfos1_9));
        }
      else
        *HeadVar__3_3 = TypeCtorGenInfos1_9;
    }
  }
}

void MR_CALL 
transform_hlds__dead_proc_elim__dead_proc_analyze_2_p_0(
  MR_Word ModuleInfo_3,
  MR_Word * Needed_4)
{
  transform_hlds__dead_proc_elim__do_dead_proc_analyze_3_p_0(ModuleInfo_3, (MR_Word) (&transform_hlds__dead_proc_elim_scalar_common_3[1]), Needed_4);
}

static void MR_CALL 
transform_hlds__dead_proc_elim__do_dead_proc_analyze_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv5_STATE_VARIABLE_Queue_11;
    MR_Word conv4_STATE_VARIABLE_Needed_13;

    transform_hlds__dead_proc_elim__get_class_pred_procs_5_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv5_STATE_VARIABLE_Queue_11, ((MR_Word) (wrapper_arg_4)), &conv4_STATE_VARIABLE_Needed_13);
    *wrapper_arg_3 = ((MR_Box) (conv5_STATE_VARIABLE_Queue_11));
    *wrapper_arg_5 = ((MR_Box) (conv4_STATE_VARIABLE_Needed_13));
  }
}

static void MR_CALL 
transform_hlds__dead_proc_elim__do_dead_proc_analyze_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_STATE_VARIABLE_Queue_21;
    MR_Word conv0_STATE_VARIABLE_Needed_23;

    transform_hlds__dead_proc_elim__get_instance_pred_procs_5_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_STATE_VARIABLE_Queue_21, ((MR_Word) (wrapper_arg_4)), &conv0_STATE_VARIABLE_Needed_23);
    *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_Queue_21));
    *wrapper_arg_5 = ((MR_Box) (conv0_STATE_VARIABLE_Needed_23));
  }
}

static void MR_CALL 
transform_hlds__dead_proc_elim__do_dead_proc_analyze_3_p_0(
  MR_Word ModuleInfo_4,
  MR_Word AnalyzeLinks_5,
  MR_Word * STATE_VARIABLE_Needed_9)
{
  {
    MR_Word Examined0_7;
    MR_Word Queue0_8;
    MR_Word STATE_VARIABLE_Needed_10_10;
    MR_Word PredIds_18;
    MR_Word PredTable_19;
    MR_Word PragmaExports_20;
    MR_Word InitProcs_21;
    MR_Word FinalPreds_22;
    MR_Word TypeCtorGenInfos_23;
    MR_Word Classes_24;
    MR_Word Instances_25;
    MR_Word STATE_VARIABLE_Queue_17_26;
    MR_Word STATE_VARIABLE_Needed_18_27;
    MR_Word STATE_VARIABLE_Queue_19_28;
    MR_Word STATE_VARIABLE_Needed_20_29;
    MR_Word Var_30;
    MR_Word STATE_VARIABLE_Queue_22_31;
    MR_Word STATE_VARIABLE_Needed_23_32;
    MR_Word STATE_VARIABLE_Queue_24_33;
    MR_Word STATE_VARIABLE_Needed_25_34;
    MR_Word STATE_VARIABLE_Queue_26_35;
    MR_Word STATE_VARIABLE_Needed_27_36;
    MR_Word STATE_VARIABLE_Queue_28_37;
    MR_Word STATE_VARIABLE_Needed_29_38;
    MR_Word InstanceDefnsLists_52;
    MR_Word InstanceDefns_53;
    MR_Word ClassDefns_54;
    MR_Word STATE_VARIABLE_Queue_19_56;
    MR_Word STATE_VARIABLE_Needed_20_57;
    MR_Box conv3_STATE_VARIABLE_Queue_19_56;
    MR_Box conv2_STATE_VARIABLE_Needed_20_57;
    MR_Box conv7_Queue0_8;
    MR_Box conv6_STATE_VARIABLE_Needed_10_10;

    Examined0_7 = mercury__set_tree234__init_0_f_0((MR_Word) (&transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_entity_0));
    STATE_VARIABLE_Queue_17_26 = mercury__queue__init_0_f_0((MR_Word) (&transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_entity_0));
    STATE_VARIABLE_Needed_18_27 = mercury__map__init_0_f_0((MR_Word) (&transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_entity_0), (MR_Word) (&transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_maybe_needed_0));
    hlds__hlds_module__module_info_get_valid_pred_ids_2_p_0(ModuleInfo_4, &PredIds_18);
    hlds__hlds_module__module_info_get_preds_2_p_0(ModuleInfo_4, &PredTable_19);
    transform_hlds__dead_proc_elim__dead_proc_initialize_preds_6_p_0(PredIds_18, PredTable_19, STATE_VARIABLE_Queue_17_26, &STATE_VARIABLE_Queue_19_28, STATE_VARIABLE_Needed_18_27, &STATE_VARIABLE_Needed_20_29);
    hlds__hlds_module__module_info_get_pragma_exported_procs_2_p_0(ModuleInfo_4, &PragmaExports_20);
    Var_30 = mercury__cord__list_1_f_0((MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_pragma_exported_proc_0), PragmaExports_20);
    transform_hlds__dead_proc_elim__dead_proc_initialize_pragma_exports_5_p_0(Var_30, STATE_VARIABLE_Queue_19_28, &STATE_VARIABLE_Queue_22_31, STATE_VARIABLE_Needed_20_29, &STATE_VARIABLE_Needed_23_32);
    hlds__hlds_module__module_info_user_init_pred_procs_2_p_0(ModuleInfo_4, &InitProcs_21);
    transform_hlds__dead_proc_elim__dead_proc_initialize_init_fn_procs_5_p_0(InitProcs_21, STATE_VARIABLE_Queue_22_31, &STATE_VARIABLE_Queue_24_33, STATE_VARIABLE_Needed_23_32, &STATE_VARIABLE_Needed_25_34);
    hlds__hlds_module__module_info_user_final_pred_procs_2_p_0(ModuleInfo_4, &FinalPreds_22);
    transform_hlds__dead_proc_elim__dead_proc_initialize_init_fn_procs_5_p_0(FinalPreds_22, STATE_VARIABLE_Queue_24_33, &STATE_VARIABLE_Queue_26_35, STATE_VARIABLE_Needed_25_34, &STATE_VARIABLE_Needed_27_36);
    hlds__hlds_module__module_info_get_type_ctor_gen_infos_2_p_0(ModuleInfo_4, &TypeCtorGenInfos_23);
    transform_hlds__dead_proc_elim__dead_proc_initialize_type_ctor_infos_5_p_0(TypeCtorGenInfos_23, STATE_VARIABLE_Queue_26_35, &STATE_VARIABLE_Queue_28_37, STATE_VARIABLE_Needed_27_36, &STATE_VARIABLE_Needed_29_38);
    hlds__hlds_module__module_info_get_class_table_2_p_0(ModuleInfo_4, &Classes_24);
    hlds__hlds_module__module_info_get_instance_table_2_p_0(ModuleInfo_4, &Instances_25);
    mercury__map__values_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0), (MR_Word) (&transform_hlds__dead_proc_elim_scalar_common_1[3]), Instances_25, &InstanceDefnsLists_52);
    mercury__list__condense_2_p_0((MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_instance_defn_0), InstanceDefnsLists_52, &InstanceDefns_53);
    mercury__list__foldl2_6_p_0((MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_instance_defn_0), (MR_Word) (&transform_hlds__dead_proc_elim_scalar_common_1[4]), (MR_Word) (&transform_hlds__dead_proc_elim_scalar_common_2[1]), (MR_Word) (&transform_hlds__dead_proc_elim_scalar_common_2[5]), InstanceDefns_53, ((MR_Box) (STATE_VARIABLE_Queue_28_37)), &conv3_STATE_VARIABLE_Queue_19_56, ((MR_Box) (STATE_VARIABLE_Needed_29_38)), &conv2_STATE_VARIABLE_Needed_20_57);
    STATE_VARIABLE_Queue_19_56 = ((MR_Word) (conv3_STATE_VARIABLE_Queue_19_56));
    STATE_VARIABLE_Needed_20_57 = ((MR_Word) (conv2_STATE_VARIABLE_Needed_20_57));
    mercury__map__values_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0), (MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_class_defn_0), Classes_24, &ClassDefns_54);
    mercury__list__foldl2_6_p_0((MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_class_defn_0), (MR_Word) (&transform_hlds__dead_proc_elim_scalar_common_1[4]), (MR_Word) (&transform_hlds__dead_proc_elim_scalar_common_2[1]), (MR_Word) (&transform_hlds__dead_proc_elim_scalar_common_2[6]), ClassDefns_54, ((MR_Box) (STATE_VARIABLE_Queue_19_56)), &conv7_Queue0_8, ((MR_Box) (STATE_VARIABLE_Needed_20_57)), &conv6_STATE_VARIABLE_Needed_10_10);
    Queue0_8 = ((MR_Word) (conv7_Queue0_8));
    STATE_VARIABLE_Needed_10_10 = ((MR_Word) (conv6_STATE_VARIABLE_Needed_10_10));
    transform_hlds__dead_proc_elim__dead_proc_examine_6_p_0(Queue0_8, Examined0_7, AnalyzeLinks_5, ModuleInfo_4, STATE_VARIABLE_Needed_10_10, STATE_VARIABLE_Needed_9);
  }
}

static void MR_CALL 
transform_hlds__dead_proc_elim__dead_proc_examine_6_p_0(
  MR_Word STATE_VARIABLE_Queue_0_28,
  MR_Word STATE_VARIABLE_Examined_0_29,
  MR_Word AnalyzeLinks_9,
  MR_Word ModuleInfo_10,
  MR_Word STATE_VARIABLE_Needed_0_30,
  MR_Word * STATE_VARIABLE_Needed_31)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word Entity_12;
    MR_Word STATE_VARIABLE_Queue_32_32;
    MR_Box conv0_Entity_12;

    // setup for model_det tailcalls optimized into a loop
    ;
    succeeded = mercury__queue__get_3_p_0((MR_Word) (&transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_entity_0), &conv0_Entity_12, STATE_VARIABLE_Queue_0_28, &STATE_VARIABLE_Queue_32_32);
    if (succeeded)
    {
      Entity_12 = ((MR_Word) (conv0_Entity_12));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_Word STATE_VARIABLE_Queue_38_38;
      MR_Word STATE_VARIABLE_Needed_39_39;
      MR_Word STATE_VARIABLE_Examined_40_40;
      MR_Word STATE_VARIABLE_Examined_33_33;
      MR_Word next_value_of_STATE_VARIABLE_Queue_0_28;
      MR_Word next_value_of_STATE_VARIABLE_Examined_0_29;
      MR_Word next_value_of_STATE_VARIABLE_Needed_0_30;

      succeeded = mercury__set_tree234__insert_new_3_p_0((MR_Word) (&transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_entity_0), ((MR_Box) (Entity_12)), STATE_VARIABLE_Examined_0_29, &STATE_VARIABLE_Examined_33_33);
      if (succeeded)
      {
        STATE_VARIABLE_Examined_40_40 = STATE_VARIABLE_Examined_33_33;
        switch (MR_tag((MR_Word) Entity_12)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word PredId_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Entity_12, (MR_Integer) 0))));
              MR_Integer ProcId_14 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Entity_12, (MR_Integer) 1))));
              MR_Word PredProcId_15;
              MR_Word AnalyzeTraceGoalProcs_16;

              {
                PredProcId_15 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), PredProcId_15, 0) = ((MR_Box) (PredId_13));
                MR_hl_field(MR_mktag(0), PredProcId_15, 1) = ((MR_Box) (ProcId_14));
              }
              AnalyzeTraceGoalProcs_16 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), AnalyzeLinks_9, (MR_Integer) 0))) >> 2)) & (MR_Integer) 1);
              transform_hlds__dead_proc_elim__dead_proc_examine_proc_7_p_0(PredProcId_15, AnalyzeTraceGoalProcs_16, ModuleInfo_10, STATE_VARIABLE_Queue_32_32, &STATE_VARIABLE_Queue_38_38, STATE_VARIABLE_Needed_0_30, &STATE_VARIABLE_Needed_39_39);
            }
            break;
          case (MR_Integer) 1:
            {
              STATE_VARIABLE_Queue_38_38 = STATE_VARIABLE_Queue_32_32;
              STATE_VARIABLE_Needed_39_39 = STATE_VARIABLE_Needed_0_30;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word Module_22 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Entity_12, (MR_Integer) 0))));
              MR_String Type_23 = ((MR_String) ((MR_hl_field(MR_mktag(2), Entity_12, (MR_Integer) 1))));
              MR_Integer Arity_24 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), Entity_12, (MR_Integer) 2))));
              MR_Word AnalyzeTypeCtor_25 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), AnalyzeLinks_9, (MR_Integer) 0))) >> 1)) & (MR_Integer) 1);

              switch (AnalyzeTypeCtor_25) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  {
                    MR_Word TypeCtorGenInfos_85;
                    MR_Word Refs_86;

                    hlds__hlds_module__module_info_get_type_ctor_gen_infos_2_p_0(ModuleInfo_10, &TypeCtorGenInfos_85);
                    succeeded = transform_hlds__dead_proc_elim__find_type_ctor_info_5_p_0(Module_22, Type_23, Arity_24, TypeCtorGenInfos_85, &Refs_86);
                    if (succeeded)
                      transform_hlds__dead_proc_elim__dead_proc_examine_refs_5_p_0(Refs_86, STATE_VARIABLE_Queue_32_32, &STATE_VARIABLE_Queue_38_38, STATE_VARIABLE_Needed_0_30, &STATE_VARIABLE_Needed_39_39);
                    else
                    {
                      STATE_VARIABLE_Needed_39_39 = STATE_VARIABLE_Needed_0_30;
                      STATE_VARIABLE_Queue_38_38 = STATE_VARIABLE_Queue_32_32;
                    }
                  }
                  break;
                case (MR_Integer) 0:
                  {
                    STATE_VARIABLE_Queue_38_38 = STATE_VARIABLE_Queue_32_32;
                    STATE_VARIABLE_Needed_39_39 = STATE_VARIABLE_Needed_0_30;
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Entity_12, (MR_Integer) 0))))) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Integer ConstNum_26 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), Entity_12, (MR_Integer) 1))));
                  MR_Word AnalyzeConstStruct_27 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), AnalyzeLinks_9, (MR_Integer) 0))) & (MR_Integer) 1);

                  switch (AnalyzeConstStruct_27) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 1:
                      {
                        MR_Word ConstStructDb_58;
                        MR_Word ConstStruct_59;
                        MR_Word ConsId_60;
                        MR_Word Args_61;
                        MR_Word STATE_VARIABLE_Queue_25_68;
                        MR_Word STATE_VARIABLE_Needed_27_70;
                        MR_Word Module_64;
                        MR_String TypeName_65;
                        MR_Integer Arity_66;

                        hlds__hlds_module__module_info_get_const_struct_db_2_p_0(ModuleInfo_10, &ConstStructDb_58);
                        hlds__const_struct__lookup_const_struct_num_3_p_0(ConstStructDb_58, ConstNum_26, &ConstStruct_59);
                        ConsId_60 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ConstStruct_59, (MR_Integer) 0))));
                        Args_61 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ConstStruct_59, (MR_Integer) 1))));
                        succeeded = ((((MR_tag((MR_Word) ConsId_60)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsId_60, (MR_Integer) 0)))) == (MR_Integer) 19)));
                        if (succeeded)
                        {
                          Module_64 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsId_60, (MR_Integer) 1))));
                          TypeName_65 = ((MR_String) ((MR_hl_field(MR_mktag(3), ConsId_60, (MR_Integer) 2))));
                          Arity_66 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsId_60, (MR_Integer) 3))));
                          {
                            MR_Word Entity_67;

                            {
                              Entity_67 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(MR_mktag(2), Entity_67, 0) = ((MR_Box) (Module_64));
                              MR_hl_field(MR_mktag(2), Entity_67, 1) = ((MR_Box) (TypeName_65));
                              MR_hl_field(MR_mktag(2), Entity_67, 2) = ((MR_Box) (Arity_66));
                            }
                            mercury__queue__put_3_p_0((MR_Word) (&transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_entity_0), ((MR_Box) (Entity_67)), STATE_VARIABLE_Queue_32_32, &STATE_VARIABLE_Queue_25_68);
                            mercury__map__set_4_p_0((MR_Word) (&transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_entity_0), (MR_Word) (&transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_maybe_needed_0), ((MR_Box) (Entity_67)), ((MR_Box) ((MR_Unsigned) 0U)), STATE_VARIABLE_Needed_0_30, &STATE_VARIABLE_Needed_27_70);
                          }
                        }
                        else
                        {
                          STATE_VARIABLE_Needed_27_70 = STATE_VARIABLE_Needed_0_30;
                          STATE_VARIABLE_Queue_25_68 = STATE_VARIABLE_Queue_32_32;
                        }
                        transform_hlds__dead_proc_elim__dead_proc_examine_const_struct_args_5_p_0(Args_61, STATE_VARIABLE_Queue_25_68, &STATE_VARIABLE_Queue_38_38, STATE_VARIABLE_Needed_27_70, &STATE_VARIABLE_Needed_39_39);
                      }
                      break;
                    case (MR_Integer) 0:
                      {
                        STATE_VARIABLE_Queue_38_38 = STATE_VARIABLE_Queue_32_32;
                        STATE_VARIABLE_Needed_39_39 = STATE_VARIABLE_Needed_0_30;
                      }
                      break;
                  }
                }
                break;
              case (MR_Integer) 1:
                {
                  STATE_VARIABLE_Queue_38_38 = STATE_VARIABLE_Queue_32_32;
                  STATE_VARIABLE_Needed_39_39 = STATE_VARIABLE_Needed_0_30;
                }
                break;
            }
            break;
        }
      }
      else
      {
        STATE_VARIABLE_Needed_39_39 = STATE_VARIABLE_Needed_0_30;
        STATE_VARIABLE_Examined_40_40 = STATE_VARIABLE_Examined_0_29;
        STATE_VARIABLE_Queue_38_38 = STATE_VARIABLE_Queue_32_32;
      }
      // direct tailcall eliminated
      ;
      next_value_of_STATE_VARIABLE_Queue_0_28 = STATE_VARIABLE_Queue_38_38;
      next_value_of_STATE_VARIABLE_Examined_0_29 = STATE_VARIABLE_Examined_40_40;
      next_value_of_STATE_VARIABLE_Needed_0_30 = STATE_VARIABLE_Needed_39_39;
      STATE_VARIABLE_Queue_0_28 = next_value_of_STATE_VARIABLE_Queue_0_28;
      STATE_VARIABLE_Examined_0_29 = next_value_of_STATE_VARIABLE_Examined_0_29;
      STATE_VARIABLE_Needed_0_30 = next_value_of_STATE_VARIABLE_Needed_0_30;
      continue;
    }
    else
      *STATE_VARIABLE_Needed_31 = STATE_VARIABLE_Needed_0_30;
    break;
  }
}

static void MR_CALL 
transform_hlds__dead_proc_elim__dead_proc_examine_proc_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv3_STATE_VARIABLE_Queue_13;
    MR_Word conv2_STATE_VARIABLE_Needed_15;

    transform_hlds__dead_proc_elim__need_trace_goal_proc_5_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv3_STATE_VARIABLE_Queue_13, ((MR_Word) (wrapper_arg_4)), &conv2_STATE_VARIABLE_Needed_15);
    *wrapper_arg_3 = ((MR_Box) (conv3_STATE_VARIABLE_Queue_13));
    *wrapper_arg_5 = ((MR_Box) (conv2_STATE_VARIABLE_Needed_15));
  }
}

static void MR_CALL 
transform_hlds__dead_proc_elim__dead_proc_examine_proc_7_p_0(
  MR_Word HeadVar__1_1,
  MR_Word AnalyzeTraceGoalProcs_10,
  MR_Word ModuleInfo_11,
  MR_Word STATE_VARIABLE_Queue_0_30,
  MR_Word * STATE_VARIABLE_Queue_31,
  MR_Word STATE_VARIABLE_Needed_0_32,
  MR_Word * STATE_VARIABLE_Needed_33)
{
  {
    MR_bool succeeded;
    MR_Word PredId_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
    MR_Integer ProcId_9 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word PredInfo_15;
    MR_Word ProcInfo_18;
    MR_Word TypeCtorInfo_77_77;
    MR_Word PredTable_14;
    MR_Word ProcIds_16;
    MR_Word ProcTable_17;
    MR_Box conv0_PredInfo_15;
    MR_Box conv1_ProcInfo_18;

    hlds__hlds_module__module_info_get_preds_2_p_0(ModuleInfo_11, &PredTable_14);
    mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0), PredTable_14, ((MR_Box) (PredId_8)), &conv0_PredInfo_15);
    PredInfo_15 = ((MR_Word) (conv0_PredInfo_15));
    ProcIds_16 = hlds__hlds_pred__pred_info_non_imported_procids_1_f_0(PredInfo_15);
    succeeded = mercury__list__member_2_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), ((MR_Box) (ProcId_9)), ProcIds_16);
    if (succeeded)
    {
      hlds__hlds_pred__pred_info_get_proc_table_2_p_0(PredInfo_15, &ProcTable_17);
      TypeCtorInfo_77_77 = (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0);
      mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), TypeCtorInfo_77_77, ProcTable_17, ((MR_Box) (ProcId_9)), &conv1_ProcInfo_18);
      ProcInfo_18 = ((MR_Word) (conv1_ProcInfo_18));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_Word Goal_20;
      MR_Word EvalMethod_22;
      MR_Word HasPerProcTablingPtr_23;
      MR_Word Origin_25;
      MR_Word STATE_VARIABLE_Queue_45_45;
      MR_Word STATE_VARIABLE_Needed_46_46;
      MR_Word STATE_VARIABLE_Needed_49_49;
      MR_Word STATE_VARIABLE_Needed_61_61;
      MR_Word ModuleName_26;
      MR_String MutableName_27;
      MR_Word PredKind_28;

      hlds__hlds_pred__proc_info_get_goal_2_p_0(ProcInfo_18, &Goal_20);
      transform_hlds__dead_proc_elim__dead_proc_examine_goal_6_p_0(Goal_20, HeadVar__1_1, STATE_VARIABLE_Queue_0_30, &STATE_VARIABLE_Queue_45_45, STATE_VARIABLE_Needed_0_32, &STATE_VARIABLE_Needed_46_46);
      switch (AnalyzeTraceGoalProcs_10) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          {
            MR_Word DeletedCallCallees_21;
            MR_Box conv5_STATE_VARIABLE_Queue_31;
            MR_Box conv4_STATE_VARIABLE_Needed_49_49;

            hlds__hlds_pred__proc_info_get_deleted_call_callees_2_p_0(ProcInfo_18, &DeletedCallCallees_21);
            mercury__set__foldl2_6_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__dead_proc_elim_scalar_common_1[4]), (MR_Word) (&transform_hlds__dead_proc_elim_scalar_common_2[1]), (MR_Word) (&transform_hlds__dead_proc_elim_scalar_common_2[4]), DeletedCallCallees_21, ((MR_Box) (STATE_VARIABLE_Queue_45_45)), &conv5_STATE_VARIABLE_Queue_31, ((MR_Box) (STATE_VARIABLE_Needed_46_46)), &conv4_STATE_VARIABLE_Needed_49_49);
            *STATE_VARIABLE_Queue_31 = ((MR_Word) (conv5_STATE_VARIABLE_Queue_31));
            STATE_VARIABLE_Needed_49_49 = ((MR_Word) (conv4_STATE_VARIABLE_Needed_49_49));
          }
          break;
        case (MR_Integer) 0:
          {
            *STATE_VARIABLE_Queue_31 = STATE_VARIABLE_Queue_45_45;
            STATE_VARIABLE_Needed_49_49 = STATE_VARIABLE_Needed_46_46;
          }
          break;
      }
      hlds__hlds_pred__proc_info_get_eval_method_2_p_0(ProcInfo_18, &EvalMethod_22);
      HasPerProcTablingPtr_23 = hlds__hlds_pred__eval_method_has_per_proc_tabling_pointer_1_f_0(EvalMethod_22);
      switch (HasPerProcTablingPtr_23) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          STATE_VARIABLE_Needed_61_61 = STATE_VARIABLE_Needed_49_49;
          break;
        case (MR_Integer) 1:
          {
            MR_Word TableStructEntity_24;

            {
              TableStructEntity_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), TableStructEntity_24, 0) = ((MR_Box) (PredId_8));
              MR_hl_field(MR_mktag(1), TableStructEntity_24, 1) = ((MR_Box) (ProcId_9));
            }
            mercury__map__set_4_p_0((MR_Word) (&transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_entity_0), (MR_Word) (&transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_maybe_needed_0), ((MR_Box) (TableStructEntity_24)), ((MR_Box) ((MR_Unsigned) 0U)), STATE_VARIABLE_Needed_49_49, &STATE_VARIABLE_Needed_61_61);
          }
          break;
      }
      hlds__hlds_pred__pred_info_get_origin_2_p_0(PredInfo_15, &Origin_25);
      succeeded = ((((MR_tag((MR_Word) Origin_25)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Origin_25, (MR_Integer) 0)))) == (MR_Integer) 6)));
      if (succeeded)
      {
        ModuleName_26 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Origin_25, (MR_Integer) 1))));
        MutableName_27 = ((MR_String) ((MR_hl_field(MR_mktag(3), Origin_25, (MR_Integer) 2))));
        PredKind_28 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Origin_25, (MR_Integer) 3))) & (MR_Integer) 15);
        {
          MR_Word MutableEntity_29;

          {
            MutableEntity_29 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), MutableEntity_29, 0) = ((MR_Box) ((MR_Unsigned) 1U));
            MR_hl_field(MR_mktag(3), MutableEntity_29, 1) = ((MR_Box) (ModuleName_26));
            MR_hl_field(MR_mktag(3), MutableEntity_29, 2) = ((MR_Box) (MutableName_27));
            MR_hl_field(MR_mktag(3), MutableEntity_29, 3) = (MR_Box) ((MR_Unsigned) (PredKind_28));
          }
          mercury__map__set_4_p_0((MR_Word) (&transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_entity_0), (MR_Word) (&transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_maybe_needed_0), ((MR_Box) (MutableEntity_29)), ((MR_Box) ((MR_Unsigned) 0U)), STATE_VARIABLE_Needed_61_61, STATE_VARIABLE_Needed_33);
        }
      }
      else
        *STATE_VARIABLE_Needed_33 = STATE_VARIABLE_Needed_61_61;
    }
    else
    {
      *STATE_VARIABLE_Needed_33 = STATE_VARIABLE_Needed_0_32;
      *STATE_VARIABLE_Queue_31 = STATE_VARIABLE_Queue_0_30;
    }
  }
}

static void MR_CALL 
transform_hlds__dead_proc_elim__dead_proc_examine_goal_6_p_0(
  MR_Word Goal_7,
  MR_Word CurrProc_8,
  MR_Word STATE_VARIABLE_Queue_0_105,
  MR_Word * STATE_VARIABLE_Queue_106,
  MR_Word STATE_VARIABLE_Needed_0_107,
  MR_Word * STATE_VARIABLE_Needed_108)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word GoalExpr_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_7, (MR_Integer) 0))));

    // setup for model_det tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) GoalExpr_11)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word SubGoal_18 = (MR_Word) ((MR_Word) (GoalExpr_11));
          MR_Word next_value_of_Goal_7 = SubGoal_18;

          // direct tailcall eliminated
          ;
          Goal_7 = next_value_of_Goal_7;
          continue;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Unification_50 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalExpr_11, (MR_Integer) 3))));

          switch (MR_tag((MR_Word) Unification_50)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word ConsId_53 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Unification_50, (MR_Integer) 1))));

                switch (MR_tag((MR_Word) ConsId_53)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      *STATE_VARIABLE_Queue_106 = STATE_VARIABLE_Queue_0_105;
                      *STATE_VARIABLE_Needed_108 = STATE_VARIABLE_Needed_0_107;
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      *STATE_VARIABLE_Queue_106 = STATE_VARIABLE_Queue_0_105;
                      *STATE_VARIABLE_Needed_108 = STATE_VARIABLE_Needed_0_107;
                    }
                    break;
                  case (MR_Integer) 2:
                    {
                      MR_Word Var_116;
                      MR_Word PredId_224;
                      MR_Integer ProcId_225;
                      MR_Word ShroudedPredProcId_226 = (MR_Word) (MR_body((MR_Word) (ConsId_53), (MR_Integer) 2));
                      MR_Word Entity_260;

                      Var_116 = hlds__hlds_pred__unshroud_pred_proc_id_1_f_0(ShroudedPredProcId_226);
                      PredId_224 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_116, (MR_Integer) 0))));
                      ProcId_225 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Var_116, (MR_Integer) 1))));
                      {
                        Entity_260 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), Entity_260, 0) = ((MR_Box) (PredId_224));
                        MR_hl_field(MR_mktag(1), Entity_260, 1) = ((MR_Box) (ProcId_225));
                      }
                      mercury__queue__put_3_p_0((MR_Word) (&transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_entity_0), ((MR_Box) (Entity_260)), STATE_VARIABLE_Queue_0_105, STATE_VARIABLE_Queue_106);
                      mercury__map__set_4_p_0((MR_Word) (&transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_entity_0), (MR_Word) (&transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_maybe_needed_0), ((MR_Box) (Entity_260)), ((MR_Box) ((MR_Unsigned) 0U)), STATE_VARIABLE_Needed_0_107, STATE_VARIABLE_Needed_108);
                    }
                    break;
                  case (MR_Integer) 3:
                    switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsId_53, (MR_Integer) 0))))) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        {
                          *STATE_VARIABLE_Queue_106 = STATE_VARIABLE_Queue_0_105;
                          *STATE_VARIABLE_Needed_108 = STATE_VARIABLE_Needed_0_107;
                        }
                        break;
                      case (MR_Integer) 1:
                        {
                          *STATE_VARIABLE_Queue_106 = STATE_VARIABLE_Queue_0_105;
                          *STATE_VARIABLE_Needed_108 = STATE_VARIABLE_Needed_0_107;
                        }
                        break;
                      case (MR_Integer) 2:
                        {
                          *STATE_VARIABLE_Queue_106 = STATE_VARIABLE_Queue_0_105;
                          *STATE_VARIABLE_Needed_108 = STATE_VARIABLE_Needed_0_107;
                        }
                        break;
                      case (MR_Integer) 3:
                        {
                          *STATE_VARIABLE_Queue_106 = STATE_VARIABLE_Queue_0_105;
                          *STATE_VARIABLE_Needed_108 = STATE_VARIABLE_Needed_0_107;
                        }
                        break;
                      case (MR_Integer) 4:
                        {
                          MR_Word ShroudedPredProcId_59 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsId_53, (MR_Integer) 1))));
                          MR_Word Var_127;
                          MR_Word PredId_222;
                          MR_Integer ProcId_223;
                          MR_Word Entity_231;

                          Var_127 = hlds__hlds_pred__unshroud_pred_proc_id_1_f_0(ShroudedPredProcId_59);
                          PredId_222 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_127, (MR_Integer) 0))));
                          ProcId_223 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Var_127, (MR_Integer) 1))));
                          {
                            Entity_231 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                            MR_hl_field(MR_mktag(0), Entity_231, 0) = ((MR_Box) (PredId_222));
                            MR_hl_field(MR_mktag(0), Entity_231, 1) = ((MR_Box) (ProcId_223));
                          }
                          mercury__queue__put_3_p_0((MR_Word) (&transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_entity_0), ((MR_Box) (Entity_231)), STATE_VARIABLE_Queue_0_105, STATE_VARIABLE_Queue_106);
                          mercury__map__set_4_p_0((MR_Word) (&transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_entity_0), (MR_Word) (&transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_maybe_needed_0), ((MR_Box) (Entity_231)), ((MR_Box) ((MR_Unsigned) 0U)), STATE_VARIABLE_Needed_0_107, STATE_VARIABLE_Needed_108);
                        }
                        break;
                      case (MR_Integer) 5:
                        {
                          *STATE_VARIABLE_Queue_106 = STATE_VARIABLE_Queue_0_105;
                          *STATE_VARIABLE_Needed_108 = STATE_VARIABLE_Needed_0_107;
                        }
                        break;
                      case (MR_Integer) 6:
                        {
                          *STATE_VARIABLE_Queue_106 = STATE_VARIABLE_Queue_0_105;
                          *STATE_VARIABLE_Needed_108 = STATE_VARIABLE_Needed_0_107;
                        }
                        break;
                      case (MR_Integer) 7:
                        {
                          *STATE_VARIABLE_Queue_106 = STATE_VARIABLE_Queue_0_105;
                          *STATE_VARIABLE_Needed_108 = STATE_VARIABLE_Needed_0_107;
                        }
                        break;
                      case (MR_Integer) 8:
                        {
                          *STATE_VARIABLE_Queue_106 = STATE_VARIABLE_Queue_0_105;
                          *STATE_VARIABLE_Needed_108 = STATE_VARIABLE_Needed_0_107;
                        }
                        break;
                      case (MR_Integer) 9:
                        {
                          *STATE_VARIABLE_Queue_106 = STATE_VARIABLE_Queue_0_105;
                          *STATE_VARIABLE_Needed_108 = STATE_VARIABLE_Needed_0_107;
                        }
                        break;
                      case (MR_Integer) 10:
                        {
                          *STATE_VARIABLE_Queue_106 = STATE_VARIABLE_Queue_0_105;
                          *STATE_VARIABLE_Needed_108 = STATE_VARIABLE_Needed_0_107;
                        }
                        break;
                      case (MR_Integer) 11:
                        {
                          *STATE_VARIABLE_Queue_106 = STATE_VARIABLE_Queue_0_105;
                          *STATE_VARIABLE_Needed_108 = STATE_VARIABLE_Needed_0_107;
                        }
                        break;
                      case (MR_Integer) 12:
                        {
                          *STATE_VARIABLE_Queue_106 = STATE_VARIABLE_Queue_0_105;
                          *STATE_VARIABLE_Needed_108 = STATE_VARIABLE_Needed_0_107;
                        }
                        break;
                      case (MR_Integer) 13:
                        {
                          *STATE_VARIABLE_Queue_106 = STATE_VARIABLE_Queue_0_105;
                          *STATE_VARIABLE_Needed_108 = STATE_VARIABLE_Needed_0_107;
                        }
                        break;
                      case (MR_Integer) 14:
                        {
                          *STATE_VARIABLE_Queue_106 = STATE_VARIABLE_Queue_0_105;
                          *STATE_VARIABLE_Needed_108 = STATE_VARIABLE_Needed_0_107;
                        }
                        break;
                      case (MR_Integer) 15:
                        {
                          *STATE_VARIABLE_Queue_106 = STATE_VARIABLE_Queue_0_105;
                          *STATE_VARIABLE_Needed_108 = STATE_VARIABLE_Needed_0_107;
                        }
                        break;
                      case (MR_Integer) 16:
                        {
                          *STATE_VARIABLE_Queue_106 = STATE_VARIABLE_Queue_0_105;
                          *STATE_VARIABLE_Needed_108 = STATE_VARIABLE_Needed_0_107;
                        }
                        break;
                      case (MR_Integer) 17:
                        {
                          *STATE_VARIABLE_Queue_106 = STATE_VARIABLE_Queue_0_105;
                          *STATE_VARIABLE_Needed_108 = STATE_VARIABLE_Needed_0_107;
                        }
                        break;
                      case (MR_Integer) 18:
                        {
                          *STATE_VARIABLE_Queue_106 = STATE_VARIABLE_Queue_0_105;
                          *STATE_VARIABLE_Needed_108 = STATE_VARIABLE_Needed_0_107;
                        }
                        break;
                      case (MR_Integer) 19:
                        {
                          MR_Word Module_61 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsId_53, (MR_Integer) 1))));
                          MR_String TypeName_62 = ((MR_String) ((MR_hl_field(MR_mktag(3), ConsId_53, (MR_Integer) 2))));
                          MR_Integer Arity_63 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsId_53, (MR_Integer) 3))));
                          MR_Word Entity_264;

                          {
                            Entity_264 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(2), Entity_264, 0) = ((MR_Box) (Module_61));
                            MR_hl_field(MR_mktag(2), Entity_264, 1) = ((MR_Box) (TypeName_62));
                            MR_hl_field(MR_mktag(2), Entity_264, 2) = ((MR_Box) (Arity_63));
                          }
                          mercury__queue__put_3_p_0((MR_Word) (&transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_entity_0), ((MR_Box) (Entity_264)), STATE_VARIABLE_Queue_0_105, STATE_VARIABLE_Queue_106);
                          mercury__map__set_4_p_0((MR_Word) (&transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_entity_0), (MR_Word) (&transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_maybe_needed_0), ((MR_Box) (Entity_264)), ((MR_Box) ((MR_Unsigned) 0U)), STATE_VARIABLE_Needed_0_107, STATE_VARIABLE_Needed_108);
                        }
                        break;
                      case (MR_Integer) 20:
                        {
                          *STATE_VARIABLE_Queue_106 = STATE_VARIABLE_Queue_0_105;
                          *STATE_VARIABLE_Needed_108 = STATE_VARIABLE_Needed_0_107;
                        }
                        break;
                      case (MR_Integer) 21:
                        {
                          MR_Integer ConstNum_267 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsId_53, (MR_Integer) 1))));
                          MR_Word Entity_269;

                          {
                            Entity_269 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(3), Entity_269, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                            MR_hl_field(MR_mktag(3), Entity_269, 1) = ((MR_Box) (ConstNum_267));
                          }
                          mercury__queue__put_3_p_0((MR_Word) (&transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_entity_0), ((MR_Box) (Entity_269)), STATE_VARIABLE_Queue_0_105, STATE_VARIABLE_Queue_106);
                          mercury__map__set_4_p_0((MR_Word) (&transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_entity_0), (MR_Word) (&transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_maybe_needed_0), ((MR_Box) (Entity_269)), ((MR_Box) ((MR_Unsigned) 0U)), STATE_VARIABLE_Needed_0_107, STATE_VARIABLE_Needed_108);
                        }
                        break;
                      case (MR_Integer) 22:
                        {
                          MR_Integer ConstNum_272 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsId_53, (MR_Integer) 1))));
                          MR_Word Entity_274;

                          {
                            Entity_274 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(3), Entity_274, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                            MR_hl_field(MR_mktag(3), Entity_274, 1) = ((MR_Box) (ConstNum_272));
                          }
                          mercury__queue__put_3_p_0((MR_Word) (&transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_entity_0), ((MR_Box) (Entity_274)), STATE_VARIABLE_Queue_0_105, STATE_VARIABLE_Queue_106);
                          mercury__map__set_4_p_0((MR_Word) (&transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_entity_0), (MR_Word) (&transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_maybe_needed_0), ((MR_Box) (Entity_274)), ((MR_Box) ((MR_Unsigned) 0U)), STATE_VARIABLE_Needed_0_107, STATE_VARIABLE_Needed_108);
                        }
                        break;
                      case (MR_Integer) 23:
                        {
                          MR_Integer ConstNum_64 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsId_53, (MR_Integer) 1))));
                          MR_Word Entity_232;

                          {
                            Entity_232 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(3), Entity_232, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                            MR_hl_field(MR_mktag(3), Entity_232, 1) = ((MR_Box) (ConstNum_64));
                          }
                          mercury__queue__put_3_p_0((MR_Word) (&transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_entity_0), ((MR_Box) (Entity_232)), STATE_VARIABLE_Queue_0_105, STATE_VARIABLE_Queue_106);
                          mercury__map__set_4_p_0((MR_Word) (&transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_entity_0), (MR_Word) (&transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_maybe_needed_0), ((MR_Box) (Entity_232)), ((MR_Box) ((MR_Unsigned) 0U)), STATE_VARIABLE_Needed_0_107, STATE_VARIABLE_Needed_108);
                        }
                        break;
                    }
                    break;
                }
              }
              break;
            case (MR_Integer) 1:
              {
                *STATE_VARIABLE_Queue_106 = STATE_VARIABLE_Queue_0_105;
                *STATE_VARIABLE_Needed_108 = STATE_VARIABLE_Needed_0_107;
              }
              break;
            case (MR_Integer) 2:
              {
                *STATE_VARIABLE_Queue_106 = STATE_VARIABLE_Queue_0_105;
                *STATE_VARIABLE_Needed_108 = STATE_VARIABLE_Needed_0_107;
              }
              break;
            case (MR_Integer) 3:
              switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Unification_50, (MR_Integer) 0))))) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    *STATE_VARIABLE_Queue_106 = STATE_VARIABLE_Queue_0_105;
                    *STATE_VARIABLE_Needed_108 = STATE_VARIABLE_Needed_0_107;
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.dead_proc_elim.dead_proc_examine_goal\'/6", (MR_String) "complicated_unify");
                    return;
                  }
                  break;
              }
              break;
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word PredId_31 = ((MR_Word) ((MR_hl_field(MR_mktag(2), GoalExpr_11, (MR_Integer) 0))));
          MR_Integer ProcId_32 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), GoalExpr_11, (MR_Integer) 1))));
          MR_Word Entity_37;
          MR_Word Var_256;
          MR_Integer Var_257;

          {
            Entity_37 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Entity_37, 0) = ((MR_Box) (PredId_31));
            MR_hl_field(MR_mktag(0), Entity_37, 1) = ((MR_Box) (ProcId_32));
          }
          mercury__queue__put_3_p_0((MR_Word) (&transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_entity_0), ((MR_Box) (Entity_37)), STATE_VARIABLE_Queue_0_105, STATE_VARIABLE_Queue_106);
          Var_256 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CurrProc_8, (MR_Integer) 0))));
          Var_257 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), CurrProc_8, (MR_Integer) 1))));
          succeeded = hlds__hlds_pred____Unify____pred_id_0_0(PredId_31, Var_256);
          if (succeeded)
            succeeded = (ProcId_32 == Var_257);
          if (succeeded)
            mercury__map__set_4_p_0((MR_Word) (&transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_entity_0), (MR_Word) (&transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_maybe_needed_0), ((MR_Box) (Entity_37)), ((MR_Box) ((MR_Unsigned) 0U)), STATE_VARIABLE_Needed_0_107, STATE_VARIABLE_Needed_108);
          else
          {
            MR_Word OldNotation_40;
            MR_Box conv0_OldNotation_40;

            succeeded = mercury__map__search_3_p_0((MR_Word) (&transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_entity_0), (MR_Word) (&transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_maybe_needed_0), STATE_VARIABLE_Needed_0_107, ((MR_Box) (Entity_37)), &conv0_OldNotation_40);
            if (succeeded)
            {
              OldNotation_40 = ((MR_Word) (conv0_OldNotation_40));
              succeeded = MR_TRUE;
            }
            if (succeeded)
            {
              MR_Word NewNotation_216;

              if ((OldNotation_40 == (MR_Word) ((MR_Unsigned) 0U)))
                NewNotation_216 = (MR_Word) ((MR_Unsigned) 0U);
              else
              {
                MR_Integer Count_41 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), OldNotation_40, (MR_Integer) 0))));
                MR_Integer Var_166 = (MR_Integer) ((MR_Unsigned) Count_41 + (MR_Unsigned) 1);

                {
                  NewNotation_216 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), NewNotation_216, 0) = ((MR_Box) (Var_166));
                }
              }
              mercury__map__det_update_4_p_0((MR_Word) (&transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_entity_0), (MR_Word) (&transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_maybe_needed_0), ((MR_Box) (Entity_37)), ((MR_Box) (NewNotation_216)), STATE_VARIABLE_Needed_0_107, STATE_VARIABLE_Needed_108);
            }
            else
              mercury__map__det_insert_4_p_0((MR_Word) (&transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_entity_0), (MR_Word) (&transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_maybe_needed_0), ((MR_Box) (Entity_37)), ((MR_Box) (MR_mkword(MR_mktag(1), &transform_hlds__dead_proc_elim_scalar_common_3[0]))), STATE_VARIABLE_Needed_0_107, STATE_VARIABLE_Needed_108);
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), GoalExpr_11, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              *STATE_VARIABLE_Queue_106 = STATE_VARIABLE_Queue_0_105;
              *STATE_VARIABLE_Needed_108 = STATE_VARIABLE_Needed_0_107;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word PredId_219 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_11, (MR_Integer) 2))));
              MR_Integer ProcId_220 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), GoalExpr_11, (MR_Integer) 3))));
              MR_Word Entity_221;

              {
                Entity_221 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Entity_221, 0) = ((MR_Box) (PredId_219));
                MR_hl_field(MR_mktag(0), Entity_221, 1) = ((MR_Box) (ProcId_220));
              }
              mercury__queue__put_3_p_0((MR_Word) (&transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_entity_0), ((MR_Box) (Entity_221)), STATE_VARIABLE_Queue_0_105, STATE_VARIABLE_Queue_106);
              mercury__map__set_4_p_0((MR_Word) (&transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_entity_0), (MR_Word) (&transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_maybe_needed_0), ((MR_Box) (Entity_221)), ((MR_Box) ((MR_Unsigned) 0U)), STATE_VARIABLE_Needed_0_107, STATE_VARIABLE_Needed_108);
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word Goals_14 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_11, (MR_Integer) 2))));

              transform_hlds__dead_proc_elim__dead_proc_examine_goals_6_p_0(Goals_14, CurrProc_8, STATE_VARIABLE_Queue_0_105, STATE_VARIABLE_Queue_106, STATE_VARIABLE_Needed_0_107, STATE_VARIABLE_Needed_108);
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word Goals_258 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_11, (MR_Integer) 1))));

              transform_hlds__dead_proc_elim__dead_proc_examine_goals_6_p_0(Goals_258, CurrProc_8, STATE_VARIABLE_Queue_0_105, STATE_VARIABLE_Queue_106, STATE_VARIABLE_Needed_0_107, STATE_VARIABLE_Needed_108);
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word Cases_17 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_11, (MR_Integer) 3))));

              transform_hlds__dead_proc_elim__dead_proc_examine_cases_6_p_0(Cases_17, CurrProc_8, STATE_VARIABLE_Queue_0_105, STATE_VARIABLE_Queue_106, STATE_VARIABLE_Needed_0_107, STATE_VARIABLE_Needed_108);
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word Reason_19 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_11, (MR_Integer) 1))));
              MR_Word SubGoal_215 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_11, (MR_Integer) 2))));
              MR_Word FGT_21;

              succeeded = ((((MR_tag((MR_Word) Reason_19)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Reason_19, (MR_Integer) 0)))) == (MR_Integer) 6)));
              if (succeeded)
              {
                FGT_21 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Reason_19, (MR_Integer) 2))) & (MR_Integer) 3);
                switch (FGT_21) {
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
              {
                *STATE_VARIABLE_Needed_108 = STATE_VARIABLE_Needed_0_107;
                *STATE_VARIABLE_Queue_106 = STATE_VARIABLE_Queue_0_105;
              }
              else
              {
                MR_Word next_value_of_Goal_7 = SubGoal_215;

                // direct tailcall eliminated
                ;
                Goal_7 = next_value_of_Goal_7;
                continue;
              }
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word Cond_23 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_11, (MR_Integer) 2))));
              MR_Word Then_24 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_11, (MR_Integer) 3))));
              MR_Word Else_25 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_11, (MR_Integer) 4))));
              MR_Word STATE_VARIABLE_Queue_201_201;
              MR_Word STATE_VARIABLE_Needed_202_202;
              MR_Word STATE_VARIABLE_Queue_203_203;
              MR_Word STATE_VARIABLE_Needed_204_204;
              MR_Word next_value_of_Goal_7;
              MR_Word next_value_of_STATE_VARIABLE_Queue_0_105;
              MR_Word next_value_of_STATE_VARIABLE_Needed_0_107;

              transform_hlds__dead_proc_elim__dead_proc_examine_goal_6_p_0(Cond_23, CurrProc_8, STATE_VARIABLE_Queue_0_105, &STATE_VARIABLE_Queue_201_201, STATE_VARIABLE_Needed_0_107, &STATE_VARIABLE_Needed_202_202);
              transform_hlds__dead_proc_elim__dead_proc_examine_goal_6_p_0(Then_24, CurrProc_8, STATE_VARIABLE_Queue_201_201, &STATE_VARIABLE_Queue_203_203, STATE_VARIABLE_Needed_202_202, &STATE_VARIABLE_Needed_204_204);
              // direct tailcall eliminated
              ;
              next_value_of_Goal_7 = Else_25;
              next_value_of_STATE_VARIABLE_Queue_0_105 = STATE_VARIABLE_Queue_203_203;
              next_value_of_STATE_VARIABLE_Needed_0_107 = STATE_VARIABLE_Needed_204_204;
              Goal_7 = next_value_of_Goal_7;
              STATE_VARIABLE_Queue_0_105 = next_value_of_STATE_VARIABLE_Queue_0_105;
              STATE_VARIABLE_Needed_0_107 = next_value_of_STATE_VARIABLE_Needed_0_107;
              continue;
            }
            break;
          case (MR_Integer) 7:
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.dead_proc_elim.dead_proc_examine_goal\'/6", (MR_String) "shorthand");
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
transform_hlds__dead_proc_elim__dead_proc_examine_cases_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_Queue_0_3,
  MR_Word * STATE_VARIABLE_Queue_4,
  MR_Word STATE_VARIABLE_Needed_0_5,
  MR_Word * STATE_VARIABLE_Needed_6)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_Needed_6 = STATE_VARIABLE_Needed_0_5;
      *STATE_VARIABLE_Queue_4 = STATE_VARIABLE_Queue_0_3;
    }
    else
    {
      MR_Word Goal_16;
      MR_Word Cases_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Var_25 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word STATE_VARIABLE_Queue_26_26;
      MR_Word STATE_VARIABLE_Needed_27_27;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_Queue_0_3;
      MR_Word next_value_of_STATE_VARIABLE_Needed_0_5;

      Goal_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_25, (MR_Integer) 2))));
      transform_hlds__dead_proc_elim__dead_proc_examine_goal_6_p_0(Goal_16, HeadVar__2_2, STATE_VARIABLE_Queue_0_3, &STATE_VARIABLE_Queue_26_26, STATE_VARIABLE_Needed_0_5, &STATE_VARIABLE_Needed_27_27);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Cases_17;
      next_value_of_STATE_VARIABLE_Queue_0_3 = STATE_VARIABLE_Queue_26_26;
      next_value_of_STATE_VARIABLE_Needed_0_5 = STATE_VARIABLE_Needed_27_27;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_Queue_0_3 = next_value_of_STATE_VARIABLE_Queue_0_3;
      STATE_VARIABLE_Needed_0_5 = next_value_of_STATE_VARIABLE_Needed_0_5;
      continue;
    }
    break;
  }
}

static void MR_CALL 
transform_hlds__dead_proc_elim__dead_proc_examine_goals_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word CurrProc_2,
  MR_Word STATE_VARIABLE_Queue_0_3,
  MR_Word * STATE_VARIABLE_Queue_4,
  MR_Word STATE_VARIABLE_Needed_0_5,
  MR_Word * STATE_VARIABLE_Needed_6)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_Needed_6 = STATE_VARIABLE_Needed_0_5;
      *STATE_VARIABLE_Queue_4 = STATE_VARIABLE_Queue_0_3;
    }
    else
    {
      MR_Word Goal_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Goals_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_Queue_23_23;
      MR_Word STATE_VARIABLE_Needed_24_24;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_Queue_0_3;
      MR_Word next_value_of_STATE_VARIABLE_Needed_0_5;

      transform_hlds__dead_proc_elim__dead_proc_examine_goal_6_p_0(Goal_14, CurrProc_2, STATE_VARIABLE_Queue_0_3, &STATE_VARIABLE_Queue_23_23, STATE_VARIABLE_Needed_0_5, &STATE_VARIABLE_Needed_24_24);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Goals_15;
      next_value_of_STATE_VARIABLE_Queue_0_3 = STATE_VARIABLE_Queue_23_23;
      next_value_of_STATE_VARIABLE_Needed_0_5 = STATE_VARIABLE_Needed_24_24;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_Queue_0_3 = next_value_of_STATE_VARIABLE_Queue_0_3;
      STATE_VARIABLE_Needed_0_5 = next_value_of_STATE_VARIABLE_Needed_0_5;
      continue;
    }
    break;
  }
}

static void MR_CALL 
transform_hlds__dead_proc_elim__dead_proc_examine_const_struct_args_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_Queue_0_2,
  MR_Word * STATE_VARIABLE_Queue_3,
  MR_Word STATE_VARIABLE_Needed_0_4,
  MR_Word * STATE_VARIABLE_Needed_5)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_Needed_5 = STATE_VARIABLE_Needed_0_4;
      *STATE_VARIABLE_Queue_3 = STATE_VARIABLE_Queue_0_2;
    }
    else
    {
      MR_Word Arg_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Args_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_Queue_30_30;
      MR_Word STATE_VARIABLE_Needed_32_32;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_Queue_0_2;
      MR_Word next_value_of_STATE_VARIABLE_Needed_0_4;

      if (((MR_tag((MR_Word) Arg_12)) == (MR_Integer) 0))
      {
        MR_Integer ConstNum_16 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Arg_12, (MR_Integer) 0))));
        MR_Word Entity_17;

        {
          Entity_17 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Entity_17, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(3), Entity_17, 1) = ((MR_Box) (ConstNum_16));
        }
        mercury__queue__put_3_p_0((MR_Word) (&transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_entity_0), ((MR_Box) (Entity_17)), STATE_VARIABLE_Queue_0_2, &STATE_VARIABLE_Queue_30_30);
        mercury__map__set_4_p_0((MR_Word) (&transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_entity_0), (MR_Word) (&transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_maybe_needed_0), ((MR_Box) (Entity_17)), ((MR_Box) ((MR_Unsigned) 0U)), STATE_VARIABLE_Needed_0_4, &STATE_VARIABLE_Needed_32_32);
      }
      else
      {
        MR_Word ConsId_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Arg_12, (MR_Integer) 0))));
        MR_Word Module_20;
        MR_String TypeName_21;
        MR_Integer Arity_22;

        succeeded = ((((MR_tag((MR_Word) ConsId_18)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsId_18, (MR_Integer) 0)))) == (MR_Integer) 19)));
        if (succeeded)
        {
          Module_20 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsId_18, (MR_Integer) 1))));
          TypeName_21 = ((MR_String) ((MR_hl_field(MR_mktag(3), ConsId_18, (MR_Integer) 2))));
          Arity_22 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsId_18, (MR_Integer) 3))));
          {
            MR_Word Entity_35;

            {
              Entity_35 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(2), Entity_35, 0) = ((MR_Box) (Module_20));
              MR_hl_field(MR_mktag(2), Entity_35, 1) = ((MR_Box) (TypeName_21));
              MR_hl_field(MR_mktag(2), Entity_35, 2) = ((MR_Box) (Arity_22));
            }
            mercury__queue__put_3_p_0((MR_Word) (&transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_entity_0), ((MR_Box) (Entity_35)), STATE_VARIABLE_Queue_0_2, &STATE_VARIABLE_Queue_30_30);
            mercury__map__set_4_p_0((MR_Word) (&transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_entity_0), (MR_Word) (&transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_maybe_needed_0), ((MR_Box) (Entity_35)), ((MR_Box) ((MR_Unsigned) 0U)), STATE_VARIABLE_Needed_0_4, &STATE_VARIABLE_Needed_32_32);
          }
        }
        else
        {
          STATE_VARIABLE_Needed_32_32 = STATE_VARIABLE_Needed_0_4;
          STATE_VARIABLE_Queue_30_30 = STATE_VARIABLE_Queue_0_2;
        }
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Args_13;
      next_value_of_STATE_VARIABLE_Queue_0_2 = STATE_VARIABLE_Queue_30_30;
      next_value_of_STATE_VARIABLE_Needed_0_4 = STATE_VARIABLE_Needed_32_32;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_Queue_0_2 = next_value_of_STATE_VARIABLE_Queue_0_2;
      STATE_VARIABLE_Needed_0_4 = next_value_of_STATE_VARIABLE_Needed_0_4;
      continue;
    }
    break;
  }
}

static void MR_CALL 
transform_hlds__dead_proc_elim__dead_proc_examine_refs_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_Queue_0_2,
  MR_Word * STATE_VARIABLE_Queue_3,
  MR_Word STATE_VARIABLE_Needed_0_4,
  MR_Word * STATE_VARIABLE_Needed_5)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_Needed_5 = STATE_VARIABLE_Needed_0_4;
      *STATE_VARIABLE_Queue_3 = STATE_VARIABLE_Queue_0_2;
    }
    else
    {
      MR_Word Ref_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Refs_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word PredId_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Ref_12, (MR_Integer) 0))));
      MR_Integer ProcId_17 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Ref_12, (MR_Integer) 1))));
      MR_Word Entity_18;
      MR_Word STATE_VARIABLE_Queue_23_23;
      MR_Word STATE_VARIABLE_Needed_25_25;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_Queue_0_2;
      MR_Word next_value_of_STATE_VARIABLE_Needed_0_4;

      {
        Entity_18 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Entity_18, 0) = ((MR_Box) (PredId_16));
        MR_hl_field(MR_mktag(0), Entity_18, 1) = ((MR_Box) (ProcId_17));
      }
      mercury__queue__put_3_p_0((MR_Word) (&transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_entity_0), ((MR_Box) (Entity_18)), STATE_VARIABLE_Queue_0_2, &STATE_VARIABLE_Queue_23_23);
      mercury__map__set_4_p_0((MR_Word) (&transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_entity_0), (MR_Word) (&transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_maybe_needed_0), ((MR_Box) (Entity_18)), ((MR_Box) ((MR_Unsigned) 0U)), STATE_VARIABLE_Needed_0_4, &STATE_VARIABLE_Needed_25_25);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Refs_13;
      next_value_of_STATE_VARIABLE_Queue_0_2 = STATE_VARIABLE_Queue_23_23;
      next_value_of_STATE_VARIABLE_Needed_0_4 = STATE_VARIABLE_Needed_25_25;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_Queue_0_2 = next_value_of_STATE_VARIABLE_Queue_0_2;
      STATE_VARIABLE_Needed_0_4 = next_value_of_STATE_VARIABLE_Needed_0_4;
      continue;
    }
    break;
  }
}

static MR_bool MR_CALL 
transform_hlds__dead_proc_elim__find_type_ctor_info_5_p_0(
  MR_Word ModuleName_6,
  MR_String TypeName_7,
  MR_Integer TypeArity_8,
  MR_Word HeadVar__4_4,
  MR_Word * Refs_11)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (HeadVar__4_4 != (MR_Word) ((MR_Unsigned) 0U));
    MR_Word TypeCtorGenInfo_9;
    MR_Word TypeCtorGenInfos_10;
    MR_Word Unify_15;
    MR_Word Compare_16;
    MR_Word Var_19;
    MR_String Var_20;
    MR_Integer Var_21;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      TypeCtorGenInfo_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 0))));
      TypeCtorGenInfos_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 1))));
      Var_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeCtorGenInfo_9, (MR_Integer) 1))));
      Var_20 = ((MR_String) ((MR_hl_field(MR_mktag(0), TypeCtorGenInfo_9, (MR_Integer) 2))));
      Var_21 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), TypeCtorGenInfo_9, (MR_Integer) 3))));
      Unify_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeCtorGenInfo_9, (MR_Integer) 6))));
      Compare_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeCtorGenInfo_9, (MR_Integer) 7))));
      succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ModuleName_6, Var_19);
      if (succeeded)
      {
        succeeded = (strcmp(TypeName_7, Var_20) == 0);
        if (succeeded)
          succeeded = (TypeArity_8 == Var_21);
      }
      if (succeeded)
      {
        MR_Word Var_17;

        {
          Var_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_17, 0) = ((MR_Box) (Compare_16));
          MR_hl_field(MR_mktag(1), Var_17, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *Refs_11 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Unify_15));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Var_17));
        }
        succeeded = MR_TRUE;
      }
      else
      {
        MR_Word next_value_of_HeadVar__4_4 = TypeCtorGenInfos_10;

        // direct tailcall eliminated
        ;
        HeadVar__4_4 = next_value_of_HeadVar__4_4;
        continue;
      }
    }
    return succeeded;
    break;
  }
}

static void MR_CALL 
transform_hlds__dead_proc_elim__dead_proc_initialize_type_ctor_infos_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_Queue_0_2,
  MR_Word * STATE_VARIABLE_Queue_3,
  MR_Word STATE_VARIABLE_Needed_0_4,
  MR_Word * STATE_VARIABLE_Needed_5)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_Needed_5 = STATE_VARIABLE_Needed_0_4;
      *STATE_VARIABLE_Queue_3 = STATE_VARIABLE_Queue_0_2;
    }
    else
    {
      MR_Word TypeCtorGenInfo_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word TypeCtorGenInfos_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ModuleName_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeCtorGenInfo_12, (MR_Integer) 1))));
      MR_String TypeName_18 = ((MR_String) ((MR_hl_field(MR_mktag(0), TypeCtorGenInfo_12, (MR_Integer) 2))));
      MR_Integer Arity_19 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), TypeCtorGenInfo_12, (MR_Integer) 3))));
      MR_Word STATE_VARIABLE_Queue_29_29;
      MR_Word STATE_VARIABLE_Needed_31_31;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_Queue_0_2;
      MR_Word next_value_of_STATE_VARIABLE_Needed_0_4;

      succeeded = mercury__builtin__semidet_succeed_0_p_0();
      if (succeeded)
      {
        MR_Word Entity_24;

        {
          Entity_24 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(2), Entity_24, 0) = ((MR_Box) (ModuleName_17));
          MR_hl_field(MR_mktag(2), Entity_24, 1) = ((MR_Box) (TypeName_18));
          MR_hl_field(MR_mktag(2), Entity_24, 2) = ((MR_Box) (Arity_19));
        }
        mercury__queue__put_3_p_0((MR_Word) (&transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_entity_0), ((MR_Box) (Entity_24)), STATE_VARIABLE_Queue_0_2, &STATE_VARIABLE_Queue_29_29);
        mercury__map__set_4_p_0((MR_Word) (&transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_entity_0), (MR_Word) (&transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_maybe_needed_0), ((MR_Box) (Entity_24)), ((MR_Box) ((MR_Unsigned) 0U)), STATE_VARIABLE_Needed_0_4, &STATE_VARIABLE_Needed_31_31);
      }
      else
      {
        STATE_VARIABLE_Needed_31_31 = STATE_VARIABLE_Needed_0_4;
        STATE_VARIABLE_Queue_29_29 = STATE_VARIABLE_Queue_0_2;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = TypeCtorGenInfos_13;
      next_value_of_STATE_VARIABLE_Queue_0_2 = STATE_VARIABLE_Queue_29_29;
      next_value_of_STATE_VARIABLE_Needed_0_4 = STATE_VARIABLE_Needed_31_31;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_Queue_0_2 = next_value_of_STATE_VARIABLE_Queue_0_2;
      STATE_VARIABLE_Needed_0_4 = next_value_of_STATE_VARIABLE_Needed_0_4;
      continue;
    }
    break;
  }
}

static void MR_CALL 
transform_hlds__dead_proc_elim__dead_proc_initialize_init_fn_procs_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_Queue_0_2,
  MR_Word * STATE_VARIABLE_Queue_3,
  MR_Word STATE_VARIABLE_Needed_0_4,
  MR_Word * STATE_VARIABLE_Needed_5)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_Needed_5 = STATE_VARIABLE_Needed_0_4;
      *STATE_VARIABLE_Queue_3 = STATE_VARIABLE_Queue_0_2;
    }
    else
    {
      MR_Word PPId_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word PPIds_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word PredId_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PPId_12, (MR_Integer) 0))));
      MR_Integer ProcId_17 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), PPId_12, (MR_Integer) 1))));
      MR_Word Entity_18;
      MR_Word STATE_VARIABLE_Queue_23_23;
      MR_Word STATE_VARIABLE_Needed_25_25;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_Queue_0_2;
      MR_Word next_value_of_STATE_VARIABLE_Needed_0_4;

      {
        Entity_18 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Entity_18, 0) = ((MR_Box) (PredId_16));
        MR_hl_field(MR_mktag(0), Entity_18, 1) = ((MR_Box) (ProcId_17));
      }
      mercury__queue__put_3_p_0((MR_Word) (&transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_entity_0), ((MR_Box) (Entity_18)), STATE_VARIABLE_Queue_0_2, &STATE_VARIABLE_Queue_23_23);
      mercury__map__set_4_p_0((MR_Word) (&transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_entity_0), (MR_Word) (&transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_maybe_needed_0), ((MR_Box) (Entity_18)), ((MR_Box) ((MR_Unsigned) 0U)), STATE_VARIABLE_Needed_0_4, &STATE_VARIABLE_Needed_25_25);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = PPIds_13;
      next_value_of_STATE_VARIABLE_Queue_0_2 = STATE_VARIABLE_Queue_23_23;
      next_value_of_STATE_VARIABLE_Needed_0_4 = STATE_VARIABLE_Needed_25_25;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_Queue_0_2 = next_value_of_STATE_VARIABLE_Queue_0_2;
      STATE_VARIABLE_Needed_0_4 = next_value_of_STATE_VARIABLE_Needed_0_4;
      continue;
    }
    break;
  }
}

static void MR_CALL 
transform_hlds__dead_proc_elim__dead_proc_initialize_pragma_exports_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_Queue_0_2,
  MR_Word * STATE_VARIABLE_Queue_3,
  MR_Word STATE_VARIABLE_Needed_0_4,
  MR_Word * STATE_VARIABLE_Needed_5)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_Needed_5 = STATE_VARIABLE_Needed_0_4;
      *STATE_VARIABLE_Queue_3 = STATE_VARIABLE_Queue_0_2;
    }
    else
    {
      MR_Word PragmaProc_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word PragmaProcs_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word PredId_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PragmaProc_12, (MR_Integer) 1))));
      MR_Integer ProcId_18 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), PragmaProc_12, (MR_Integer) 2))));
      MR_Word Entity_21;
      MR_Word STATE_VARIABLE_Queue_26_26;
      MR_Word STATE_VARIABLE_Needed_28_28;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_Queue_0_2;
      MR_Word next_value_of_STATE_VARIABLE_Needed_0_4;

      {
        Entity_21 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Entity_21, 0) = ((MR_Box) (PredId_17));
        MR_hl_field(MR_mktag(0), Entity_21, 1) = ((MR_Box) (ProcId_18));
      }
      mercury__queue__put_3_p_0((MR_Word) (&transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_entity_0), ((MR_Box) (Entity_21)), STATE_VARIABLE_Queue_0_2, &STATE_VARIABLE_Queue_26_26);
      mercury__map__set_4_p_0((MR_Word) (&transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_entity_0), (MR_Word) (&transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_maybe_needed_0), ((MR_Box) (Entity_21)), ((MR_Box) ((MR_Unsigned) 0U)), STATE_VARIABLE_Needed_0_4, &STATE_VARIABLE_Needed_28_28);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = PragmaProcs_13;
      next_value_of_STATE_VARIABLE_Queue_0_2 = STATE_VARIABLE_Queue_26_26;
      next_value_of_STATE_VARIABLE_Needed_0_4 = STATE_VARIABLE_Needed_28_28;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_Queue_0_2 = next_value_of_STATE_VARIABLE_Queue_0_2;
      STATE_VARIABLE_Needed_0_4 = next_value_of_STATE_VARIABLE_Needed_0_4;
      continue;
    }
    break;
  }
}

static void MR_CALL 
transform_hlds__dead_proc_elim__dead_proc_initialize_preds_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_Queue_0_3,
  MR_Word * STATE_VARIABLE_Queue_4,
  MR_Word STATE_VARIABLE_Needed_0_5,
  MR_Word * STATE_VARIABLE_Needed_6)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_Needed_6 = STATE_VARIABLE_Needed_0_5;
      *STATE_VARIABLE_Queue_4 = STATE_VARIABLE_Queue_0_3;
    }
    else
    {
      MR_Word PredId_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word PredIds_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word PredInfo_19;
      MR_Word PredMarkers_20;
      MR_Word LiveProcIds_21;
      MR_Word ProcTable_22;
      MR_Word Procs_23;
      MR_Word STATE_VARIABLE_Queue_29_29;
      MR_Word STATE_VARIABLE_Needed_30_30;
      MR_Box conv0_PredInfo_19;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_Queue_0_3;
      MR_Word next_value_of_STATE_VARIABLE_Needed_0_5;

      mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0), HeadVar__2_2, ((MR_Box) (PredId_14)), &conv0_PredInfo_19);
      PredInfo_19 = ((MR_Word) (conv0_PredInfo_19));
      hlds__hlds_pred__pred_info_get_markers_2_p_0(PredInfo_19, &PredMarkers_20);
      succeeded = hlds__hlds_pred__check_marker_2_p_0(PredMarkers_20, (MR_Integer) 9);
      if (succeeded)
        LiveProcIds_21 = hlds__hlds_pred__pred_info_all_procids_1_f_0(PredInfo_19);
      else
        LiveProcIds_21 = hlds__hlds_pred__pred_info_exported_procids_1_f_0(PredInfo_19);
      hlds__hlds_pred__pred_info_get_proc_table_2_p_0(PredInfo_19, &ProcTable_22);
      mercury__map__to_assoc_list_2_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), ProcTable_22, &Procs_23);
      transform_hlds__dead_proc_elim__dead_proc_initialize_procs_7_p_0(PredId_14, Procs_23, LiveProcIds_21, STATE_VARIABLE_Queue_0_3, &STATE_VARIABLE_Queue_29_29, STATE_VARIABLE_Needed_0_5, &STATE_VARIABLE_Needed_30_30);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = PredIds_15;
      next_value_of_STATE_VARIABLE_Queue_0_3 = STATE_VARIABLE_Queue_29_29;
      next_value_of_STATE_VARIABLE_Needed_0_5 = STATE_VARIABLE_Needed_30_30;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_Queue_0_3 = next_value_of_STATE_VARIABLE_Queue_0_3;
      STATE_VARIABLE_Needed_0_5 = next_value_of_STATE_VARIABLE_Needed_0_5;
      continue;
    }
    break;
  }
}

static void MR_CALL 
transform_hlds__dead_proc_elim__dead_proc_initialize_procs_7_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_Queue_0_4,
  MR_Word * STATE_VARIABLE_Queue_5,
  MR_Word STATE_VARIABLE_Needed_0_6,
  MR_Word * STATE_VARIABLE_Needed_7)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_Needed_7 = STATE_VARIABLE_Needed_0_6;
      *STATE_VARIABLE_Queue_5 = STATE_VARIABLE_Queue_0_4;
    }
    else
    {
      MR_Word Proc_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word Procs_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Integer ProcId_22 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Proc_17, (MR_Integer) 0))));
      MR_Word ProcInfo_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Proc_17, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_Queue_30_30;
      MR_Word STATE_VARIABLE_Needed_32_32;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_STATE_VARIABLE_Queue_0_4;
      MR_Word next_value_of_STATE_VARIABLE_Needed_0_6;

      succeeded = hlds__hlds_pred__proc_info_is_valid_mode_1_p_0(ProcInfo_23);
      if (succeeded)
      {
        succeeded = mercury__list__member_2_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), ((MR_Box) (ProcId_22)), HeadVar__3_3);
        if (!(succeeded))
        {
          MR_Word Var_38;

          hlds__hlds_pred__proc_info_get_has_any_foreign_exports_2_p_0(ProcInfo_23, &Var_38);
          succeeded = ((MR_Integer) 1 == Var_38);
        }
      }
      if (succeeded)
      {
        MR_Word Entity_24;

        {
          Entity_24 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Entity_24, 0) = ((MR_Box) (HeadVar__1_1));
          MR_hl_field(MR_mktag(0), Entity_24, 1) = ((MR_Box) (ProcId_22));
        }
        mercury__queue__put_3_p_0((MR_Word) (&transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_entity_0), ((MR_Box) (Entity_24)), STATE_VARIABLE_Queue_0_4, &STATE_VARIABLE_Queue_30_30);
        mercury__map__set_4_p_0((MR_Word) (&transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_entity_0), (MR_Word) (&transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_maybe_needed_0), ((MR_Box) (Entity_24)), ((MR_Box) ((MR_Unsigned) 0U)), STATE_VARIABLE_Needed_0_6, &STATE_VARIABLE_Needed_32_32);
      }
      else
      {
        STATE_VARIABLE_Needed_32_32 = STATE_VARIABLE_Needed_0_6;
        STATE_VARIABLE_Queue_30_30 = STATE_VARIABLE_Queue_0_4;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = Procs_18;
      next_value_of_STATE_VARIABLE_Queue_0_4 = STATE_VARIABLE_Queue_30_30;
      next_value_of_STATE_VARIABLE_Needed_0_6 = STATE_VARIABLE_Needed_32_32;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      STATE_VARIABLE_Queue_0_4 = next_value_of_STATE_VARIABLE_Queue_0_4;
      STATE_VARIABLE_Needed_0_6 = next_value_of_STATE_VARIABLE_Needed_0_6;
      continue;
    }
    break;
  }
}

static MR_bool MR_CALL 
transform_hlds__dead_proc_elim____Unify____analyze_links_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = transform_hlds__dead_proc_elim____Unify____analyze_links_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__dead_proc_elim____Compare____analyze_links_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    transform_hlds__dead_proc_elim____Compare____analyze_links_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
transform_hlds__dead_proc_elim____Unify____entity_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = transform_hlds__dead_proc_elim____Unify____entity_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__dead_proc_elim____Compare____entity_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    transform_hlds__dead_proc_elim____Compare____entity_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
transform_hlds__dead_proc_elim____Unify____entity_queue_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = transform_hlds__dead_proc_elim____Unify____entity_queue_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__dead_proc_elim____Compare____entity_queue_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    transform_hlds__dead_proc_elim____Compare____entity_queue_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
transform_hlds__dead_proc_elim____Unify____examined_set_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = transform_hlds__dead_proc_elim____Unify____examined_set_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__dead_proc_elim____Compare____examined_set_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    transform_hlds__dead_proc_elim____Compare____examined_set_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
transform_hlds__dead_proc_elim____Unify____maybe_analyze_link_const_struct_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = transform_hlds__dead_proc_elim____Unify____maybe_analyze_link_const_struct_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__dead_proc_elim____Compare____maybe_analyze_link_const_struct_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    transform_hlds__dead_proc_elim____Compare____maybe_analyze_link_const_struct_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
transform_hlds__dead_proc_elim____Unify____maybe_analyze_link_deleted_calls_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = transform_hlds__dead_proc_elim____Unify____maybe_analyze_link_deleted_calls_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__dead_proc_elim____Compare____maybe_analyze_link_deleted_calls_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    transform_hlds__dead_proc_elim____Compare____maybe_analyze_link_deleted_calls_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
transform_hlds__dead_proc_elim____Unify____maybe_analyze_link_type_ctor_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = transform_hlds__dead_proc_elim____Unify____maybe_analyze_link_type_ctor_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__dead_proc_elim____Compare____maybe_analyze_link_type_ctor_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    transform_hlds__dead_proc_elim____Compare____maybe_analyze_link_type_ctor_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
transform_hlds__dead_proc_elim____Unify____maybe_elim_opt_imported_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = transform_hlds__dead_proc_elim____Unify____maybe_elim_opt_imported_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__dead_proc_elim____Compare____maybe_elim_opt_imported_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    transform_hlds__dead_proc_elim____Compare____maybe_elim_opt_imported_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
transform_hlds__dead_proc_elim____Unify____maybe_needed_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = transform_hlds__dead_proc_elim____Unify____maybe_needed_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__dead_proc_elim____Compare____maybe_needed_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    transform_hlds__dead_proc_elim____Compare____maybe_needed_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
transform_hlds__dead_proc_elim____Unify____needed_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = transform_hlds__dead_proc_elim____Unify____needed_map_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__dead_proc_elim____Compare____needed_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    transform_hlds__dead_proc_elim____Compare____needed_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
transform_hlds__dead_proc_elim____Unify____pred_elim_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = transform_hlds__dead_proc_elim____Unify____pred_elim_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__dead_proc_elim____Compare____pred_elim_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    transform_hlds__dead_proc_elim____Compare____pred_elim_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
transform_hlds__dead_proc_elim____Unify____proc_elim_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = transform_hlds__dead_proc_elim____Unify____proc_elim_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__dead_proc_elim____Compare____proc_elim_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    transform_hlds__dead_proc_elim____Compare____proc_elim_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

void mercury__transform_hlds__dead_proc_elim__init(void)
{
}

void mercury__transform_hlds__dead_proc_elim__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_analyze_links_0);
	MR_register_type_ctor_info(&transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_entity_0);
	MR_register_type_ctor_info(&transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_entity_queue_0);
	MR_register_type_ctor_info(&transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_examined_set_0);
	MR_register_type_ctor_info(&transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_maybe_analyze_link_const_struct_0);
	MR_register_type_ctor_info(&transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_maybe_analyze_link_deleted_calls_0);
	MR_register_type_ctor_info(&transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_maybe_analyze_link_type_ctor_0);
	MR_register_type_ctor_info(&transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_maybe_elim_opt_imported_0);
	MR_register_type_ctor_info(&transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_maybe_needed_0);
	MR_register_type_ctor_info(&transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_needed_map_0);
	MR_register_type_ctor_info(&transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_pred_elim_info_0);
	MR_register_type_ctor_info(&transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_proc_elim_info_0);
}

void mercury__transform_hlds__dead_proc_elim__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__transform_hlds__dead_proc_elim__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module transform_hlds.dead_proc_elim.
